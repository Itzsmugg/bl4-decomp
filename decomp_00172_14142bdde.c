// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14142bdde FUN_14142bdde body=471 status=ok
// SIG undefined FUN_14142bdde(void)

void FUN_14142bdde(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
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
  if (DAT_14c967138 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c967138,0,0,4);
  }
  uVar7 = DAT_14c967140;
  uVar2 = local_50;
  if (DAT_14c967140 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c967130,0,DAT_14c967140,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14c967138;
        if (DAT_14c967138 == (undefined *)0x0) {
          puVar4 = &DAT_14c967130;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14c967140 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c967108;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c967120 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9670f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = DAT_14c967140 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0xc + lVar5) = uVar7;
        puVar4 = DAT_14c967138;
        if (DAT_14c967138 == (undefined *)0x0) {
          puVar4 = &DAT_14c967130;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14c967140 - 1 & uVar7) * 4);
        puVar4 = DAT_14c967138;
        if (DAT_14c967138 == (undefined *)0x0) {
          puVar4 = &DAT_14c967130;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14c967140 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 14142bfb6 FUN_14142bfb6 body=804 status=ok
// SIG undefined FUN_14142bfb6(void)

void FUN_14142bfb6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0) || (*(char *)(param_1 + 0x34) != '\0'))
  goto LAB_14142c019;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x10);
    lVar8 = (longlong)*(int *)(param_1 + 0x18) << 5;
    do {
      cVar3 = FUN_140e8a950(lVar10,param_2);
      if (cVar3 != '\0') {
        if (lVar10 != 0) goto LAB_14142c019;
        break;
      }
      lVar10 = lVar10 + 0x20;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar6 = (uint *)FUN_1458b661e(param_1 + 0x10);
  if (param_2 == 0) {
    *puVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    *puVar6 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar4 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar4 = *(uint *)(lVar10 + 0x10);
      bVar13 = uVar4 == 0;
      if (bVar13) {
        *(uint *)(lVar10 + 0x10) = uVar7;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar4 = uVar7;
      }
    }
  }
  puVar6[1] = uVar4;
  lVar10 = (**(code **)(*(longlong *)(param_2 + 0x10a0) + 0x20))(param_2 + 0x10a0);
  FUN_146635594(&local_58,param_1);
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 == 0) {
      uVar11 = 0;
      goto LAB_14142c1fa;
    }
    if (local_58 != (longlong *)0x0) {
      uVar11 = 0;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14142c1ed;
    }
    uVar11 = 0;
  }
  else {
    plVar12 = (longlong *)(lVar10 + 0xf8);
    if (*(int *)(lVar10 + 0x10c) < 1) {
      iVar1 = *(int *)(lVar10 + 0x100);
      iVar5 = *(int *)(lVar10 + 0x108) + -1;
      *(int *)(lVar10 + 0x108) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar12 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar12 + (longlong)iVar9 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar12,iVar9);
              FUN_14005b248(plVar12);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar5 = *(int *)(lVar10 + 0x100);
          } while (iVar9 < iVar5);
        }
        iVar9 = 2;
        if (2 < iVar5 * 2) {
          iVar9 = iVar5 * 2;
        }
        *(int *)(lVar10 + 0x108) = iVar9;
        if ((iVar9 < iVar1) && (*(int *)(lVar10 + 0x104) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar11 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar11 = local_48;
    }
    iVar1 = *(int *)(lVar10 + 0x100);
    *(uint *)(lVar10 + 0x100) = iVar1 + 1U;
    if (*(uint *)(lVar10 + 0x104) < iVar1 + 1U) {
      FUN_1447a71f6(plVar12,iVar1);
    }
    lVar10 = *plVar12;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar10 + lVar8) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar8) = 0;
    *(longlong **)(lVar10 + lVar8) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar8) = local_50;
LAB_14142c1ed:
    local_50 = 0;
LAB_14142c1fa:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(puVar6 + 2) = uVar11;
  FUN_145950952(param_2,1);
LAB_14142c019:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14142c2dc FUN_14142c2dc body=7 status=ok
// SIG undefined FUN_14142c2dc(void)

void FUN_14142c2dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014142c2df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 14142c2e4 FUN_14142c2e4 body=33 status=ok
// SIG undefined FUN_14142c2e4(void)

longlong FUN_14142c2e4(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78f0))) {
    return (ulonglong)param_2 * 0x48 + *(longlong *)(param_1 + 0x78e8);
  }
  return 0;
}



// FUNCTION 14142c306 FUN_14142c306 body=228 status=ok
// SIG undefined FUN_14142c306(void)

longlong FUN_14142c306(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146422fec;
    local_38 = &LAB_147e6dc5d;
    local_40 = FUN_1464230cf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavArea_Default",&DAT_14cb1d430,&DAT_147e6dc5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142c3ec FUN_14142c3ec body=787 status=ok
// SIG undefined FUN_14142c3ec(void)

void FUN_14142c3ec(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
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
  FUN_14142c700(CONCAT17(uStack_11,uStack_18),local_19);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142c700 FUN_14142c700 body=99 status=ok
// SIG undefined FUN_14142c700(void)

void FUN_14142c700(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        *(undefined1 *)(lVar4 + 0x18d) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 14142c764 FUN_14142c764 body=3572 status=ok
// SIG undefined FUN_14142c764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14142c764(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  undefined8 uVar17;
  double *pdVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  longlong *plStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_140f05dd8();
  lVar23 = *(longlong *)(param_1 + 0x2650);
  if ((lVar23 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_1459c2eb8(&local_270);
    FUN_1459c2d94(lVar23 + 0x599,param_1,local_270);
    lVar23 = *(longlong *)(param_1 + 0x2650);
    FUN_1459c2f78(&local_278);
    lVar22 = param_1;
    FUN_1459c2e26(lVar23 + 0x59a,param_1,local_278);
    param_2 = (undefined4)lVar22;
  }
  lVar23 = *(longlong *)(param_1 + 0x2658);
  if ((lVar23 != 0) && (*(char *)(lVar23 + 0x468) == '\x01')) {
    if (*(char *)(lVar23 + 0x488) == '\0') {
      dVar33 = *(double *)(lVar23 + 0x490);
      dVar34 = *(double *)(lVar23 + 0x498);
      dVar30 = *(double *)(lVar23 + 0x4a0);
      *(undefined8 *)(param_1 + 0x2660) = 0;
      *(undefined8 *)(param_1 + 0x2668) = 0;
      *(undefined8 *)(param_1 + 0x2670) = 0;
      *(undefined8 *)(param_1 + 0x2678) = 0x3ff0000000000000;
      *(double *)(param_1 + 0x2680) = dVar33;
      *(double *)(param_1 + 0x2688) = dVar34;
      *(double *)(param_1 + 0x2690) = dVar30;
      *(undefined8 *)(param_1 + 0x2698) = 0;
      auVar45 = _DAT_149934d80;
      dVar37 = (double)DAT_149934d80;
      dVar4 = DAT_149934d80._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x26a0) = _DAT_149934d80;
      *(undefined8 *)(param_1 + 0x26b0) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x26b8) = 0;
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
      pdVar18 = (double *)&DAT_14c846480;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        pdVar18 = pdVar3;
      }
      auVar9 = *(undefined1 (*) [16])(pdVar18 + 8);
      dVar7 = auVar9._0_8_;
      dVar8 = auVar9._8_8_;
      auVar49 = *(undefined1 (*) [16])(pdVar18 + 10);
      dVar10 = auVar49._0_8_;
      dVar11 = auVar49._8_8_;
      auVar40 = minpd(auVar45,auVar9);
      auVar43 = minpd(ZEXT816(0x3ff0000000000000),auVar49);
      auVar49._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      iVar19 = movmskpd((int)pdVar3,auVar49);
      auVar40._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar40._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      uVar20 = movmskpd(param_2,auVar40);
      if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
        dVar13 = *pdVar18;
        dVar14 = pdVar18[1];
        dVar15 = pdVar18[2];
        dVar32 = pdVar18[3];
        dVar37 = pdVar18[3];
        dVar4 = pdVar18[3];
        dVar48 = *pdVar18;
        dVar33 = dVar33 * dVar7;
        dVar34 = dVar34 * dVar8;
        dVar30 = dVar30 * dVar10;
        dVar31 = dVar11 * 0.0;
        dVar54 = dVar34 * dVar13 - dVar33 * dVar14;
        dVar55 = dVar30 * dVar14 - dVar34 * dVar15;
        dVar39 = dVar33 * dVar15 - dVar30 * dVar13;
        dVar41 = dVar31 * dVar32 - dVar31 * dVar32;
        dVar55 = dVar55 + dVar55;
        dVar39 = dVar39 + dVar39;
        dVar54 = dVar54 + dVar54;
        dVar41 = dVar41 + dVar41;
        dVar5 = pdVar18[1];
        dVar52 = pdVar18[1];
        dVar6 = pdVar18[2];
        dVar42 = pdVar18[2];
        dVar51 = pdVar18[4];
        dVar38 = (dVar55 * dVar15 - dVar54 * dVar13) + dVar4 * dVar39 + dVar34 + pdVar18[5];
        dVar34 = pdVar18[6];
        dVar53 = pdVar18[7];
        *(double *)(param_1 + 0x2660) =
             dVar15 * 0.0 * -1.0 + dVar5 * 0.0 + *pdVar18 * 1.0 * 1.0 + dVar37 * 0.0;
        *(double *)(param_1 + 0x2668) =
             dVar15 * 0.0 * 1.0 + dVar52 * 1.0 + dVar48 * 0.0 * -1.0 + dVar4 * 0.0;
        *(double *)(param_1 + 0x2670) =
             dVar6 * 1.0 * 1.0 + ((dVar13 * 0.0 * 1.0 + dVar37 * 0.0) - dVar5 * 0.0);
        *(double *)(param_1 + 0x2678) =
             dVar42 * 0.0 * -1.0 + ((dVar13 * 0.0 * -1.0 + dVar4 * 1.0) - dVar52 * 0.0);
        auVar12._8_4_ = SUB84(dVar38,0);
        auVar12._0_8_ = (dVar54 * dVar14 - dVar15 * dVar39) + dVar37 * dVar55 + dVar33 + dVar51;
        auVar12._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x2680) = auVar12;
        *(double *)(param_1 + 0x2690) =
             (dVar39 * dVar13 - dVar14 * dVar55) + dVar37 * dVar54 + dVar30 + dVar34;
        *(double *)(param_1 + 0x2698) =
             (dVar41 * dVar32 - dVar41 * dVar32) + dVar4 * dVar41 + dVar31 + dVar53;
        *(double *)(param_1 + 0x26a0) = dVar7;
        *(double *)(param_1 + 0x26a8) = dVar8;
        auVar45._8_4_ = SUB84(dVar11 * 0.0,0);
        auVar45._0_8_ = dVar10 * 1.0;
        auVar45._12_4_ = (int)((ulonglong)(dVar11 * 0.0) >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x26b0) = auVar45;
        local_288 = auVar9;
      }
      else {
        dVar5 = *pdVar18;
        dVar52 = pdVar18[1];
        dVar6 = pdVar18[2];
        dVar42 = dVar52 + dVar52;
        dVar51 = dVar6 + dVar6;
        dVar48 = dVar5 * (dVar5 + dVar5);
        local_1c8 = (dVar37 - (dVar6 * dVar51 + dVar52 * dVar42)) * dVar7;
        dVar37 = pdVar18[3];
        dVar53 = dVar51 * dVar37;
        dVar54 = (dVar5 + dVar5) * pdVar18[3];
        dVar37 = dVar42 * dVar37;
        dStack_180 = (dVar51 * dVar52 - dVar54) * dVar10;
        local_188 = (dVar37 + *pdVar18 * dVar51) * dVar10;
        dStack_1c0 = (dVar42 * dVar5 + dVar53) * dVar7;
        local_198 = (dVar51 * dVar52 + dVar54) * dVar8;
        local_1b8 = (*pdVar18 * dVar51 - dVar37) * dVar7;
        uStack_1b0 = 0;
        local_1a8._8_8_ = (dVar4 - (dVar6 * dVar51 + dVar48)) * dVar8;
        local_1a8._0_8_ = (dVar42 * dVar5 - dVar53) * dVar8;
        uStack_190 = 0;
        local_178 = (1.0 - (dVar48 + dVar52 * dVar42)) * dVar10;
        uStack_170 = 0;
        local_168 = pdVar18[4];
        dStack_160 = pdVar18[5];
        local_158 = pdVar18[6];
        uStack_150 = 0x3ff0000000000000;
        local_248 = 1.0;
        dStack_240 = 0.0;
        local_238 = 0.0;
        uStack_230 = 0;
        local_218 = 0.0;
        uStack_210 = 0;
        local_208 = ZEXT816(0);
        local_1f8 = 1.0;
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        local_228 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_1e8 = dVar33;
        dStack_1e0 = dVar34;
        local_1d8 = dVar30;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar43._8_8_ = -(ulonglong)(0.0 <= dVar8);
        auVar43._0_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar49 = blendvpd(_DAT_149936790,auVar45,auVar43);
        uVar26 = -(ulonglong)(0.0 <= dVar10 * 1.0);
        dVar30 = (double)(~uVar26 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar26 >> 0x20) & 0x3ff00000) << 0x20);
        dVar37 = auVar49._0_8_;
        local_138 = local_138 * dVar37;
        plStack_140 = (longlong *)((double)plStack_140 * dVar37);
        local_148 = local_148 * dVar37;
        dVar37 = auVar49._8_8_;
        local_118 = local_118 * dVar37;
        local_120 = local_120 * dVar37;
        local_128 = dVar37 * local_128;
        local_f8 = local_f8 * dVar30;
        local_100 = local_100 * dVar30;
        local_108 = dVar30 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar30 = local_258 * local_258 + local_268 * local_268;
        dVar37 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar36._0_8_ = dVar30 + dVar37;
        auVar36._8_8_ = dVar30 + dVar37;
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar49 = sqrtpd(auVar36,auVar36);
        auVar45 = divpd(auVar45,auVar49);
        auVar47._0_8_ = auVar45._0_8_ * local_258;
        auVar47._8_8_ = auVar45._8_8_ * dStack_250;
        auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar29);
        *(undefined1 (*) [16])(param_1 + 0x26a0) = auVar9;
        *(double *)(param_1 + 0x26b0) = dVar10 * 1.0;
        *(double *)(param_1 + 0x26b8) = dVar11 * 0.0;
        *(ulonglong *)(param_1 + 0x2660) =
             (ulonglong)(local_268 * auVar45._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        *(ulonglong *)(param_1 + 0x2668) =
             (ulonglong)(dStack_260 * auVar45._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        *(undefined1 (*) [16])(param_1 + 0x2670) = auVar49;
        *(undefined8 *)(param_1 + 0x2680) = local_e8;
        *(undefined8 *)(param_1 + 0x2688) = uStack_e0;
        *(undefined8 *)(param_1 + 0x2690) = local_d8;
        *(undefined8 *)(param_1 + 0x2698) = 0;
        lVar23 = *(longlong *)(param_1 + 0x2658);
      }
    }
    if (*(char *)(lVar23 + 0x4cd) == '\x01') {
      uVar21 = SUB84(&local_148,0);
      FUN_144a7484c(lVar23 + 0x4e8);
      dVar33 = *(double *)(lVar23 + 0x4d0);
      dVar34 = *(double *)(lVar23 + 0x4d8);
      dVar30 = *(double *)(lVar23 + 0x4e0);
      *(double *)(param_1 + 0x26c0) = local_148;
      *(longlong **)(param_1 + 0x26c8) = plStack_140;
      *(double *)(param_1 + 0x26d0) = local_138;
      *(double *)(param_1 + 0x26d8) = dStack_130;
      *(double *)(param_1 + 0x26e0) = dVar33;
      *(double *)(param_1 + 0x26e8) = dVar34;
      *(double *)(param_1 + 0x26f0) = dVar30;
      *(undefined8 *)(param_1 + 0x26f8) = 0;
      auVar45 = _DAT_149934d80;
      dVar37 = (double)DAT_149934d80;
      dVar4 = DAT_149934d80._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x2700) = _DAT_149934d80;
      *(undefined8 *)(param_1 + 10000) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x2718) = 0;
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
      pdVar18 = (double *)&DAT_14c846480;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        pdVar18 = pdVar3;
      }
      auVar9 = *(undefined1 (*) [16])(pdVar18 + 8);
      dVar7 = auVar9._0_8_;
      dVar8 = auVar9._8_8_;
      auVar49 = *(undefined1 (*) [16])(pdVar18 + 10);
      dVar10 = auVar49._0_8_;
      dVar11 = auVar49._8_8_;
      auVar40 = minpd(auVar45,auVar9);
      auVar49 = minpd(ZEXT816(0x3ff0000000000000),auVar49);
      auVar44._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      iVar19 = movmskpd((int)pdVar3,auVar44);
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      uVar20 = movmskpd(uVar21,auVar50);
      if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
        dVar41 = *pdVar18;
        dVar13 = pdVar18[1];
        dVar14 = pdVar18[2];
        dVar15 = pdVar18[3];
        dVar4 = pdVar18[3];
        dVar37 = pdVar18[3];
        dVar5 = *pdVar18;
        dVar48 = *pdVar18;
        dVar6 = pdVar18[1];
        dVar52 = pdVar18[1];
        dVar42 = pdVar18[2];
        dVar51 = pdVar18[2];
        dVar33 = dVar33 * dVar7;
        dVar34 = dVar34 * dVar8;
        dVar30 = dVar30 * dVar10;
        dVar32 = dVar11 * 0.0;
        dVar55 = dVar34 * dVar41 - dVar33 * dVar13;
        dVar31 = dVar30 * dVar13 - dVar34 * dVar14;
        dVar38 = dVar33 * dVar14 - dVar30 * dVar41;
        dVar39 = dVar32 * dVar15 - dVar32 * dVar15;
        dVar31 = dVar31 + dVar31;
        dVar38 = dVar38 + dVar38;
        dVar55 = dVar55 + dVar55;
        dVar39 = dVar39 + dVar39;
        dVar7 = pdVar18[4];
        dVar53 = pdVar18[5];
        dVar8 = pdVar18[6];
        dVar54 = pdVar18[7];
        *(double *)(param_1 + 0x26c0) =
             (double)plStack_140 * dVar42 * -1.0 +
             local_138 * dVar6 + dStack_130 * dVar5 * 1.0 + local_148 * dVar4;
        *(double *)(param_1 + 0x26c8) =
             local_148 * dVar51 * 1.0 +
             dStack_130 * dVar52 + local_138 * dVar48 * -1.0 + (double)plStack_140 * dVar37;
        *(double *)(param_1 + 0x26d0) =
             dStack_130 * dVar42 * 1.0 +
             ((dVar5 * (double)plStack_140 * 1.0 + local_138 * dVar4) - local_148 * dVar6);
        *(double *)(param_1 + 0x26d8) =
             local_138 * dVar51 * -1.0 +
             ((dVar48 * local_148 * -1.0 + dStack_130 * dVar37) - (double)plStack_140 * dVar52);
        *(double *)(param_1 + 0x26e0) =
             (dVar55 * dVar13 - dVar14 * dVar38) + dVar4 * dVar31 + dVar33 + dVar7;
        *(double *)(param_1 + 0x26e8) =
             (dVar31 * dVar14 - dVar55 * dVar41) + dVar37 * dVar38 + dVar34 + dVar53;
        *(double *)(param_1 + 0x26f0) =
             (dVar38 * dVar41 - dVar13 * dVar31) + dVar4 * dVar55 + dVar30 + dVar8;
        *(double *)(param_1 + 0x26f8) =
             (dVar39 * dVar15 - dVar39 * dVar15) + dVar37 * dVar39 + dVar32 + dVar54;
        *(undefined1 (*) [16])(param_1 + 0x2700) = auVar9;
        auVar9._8_4_ = SUB84(dVar11 * 0.0,0);
        auVar9._0_8_ = dVar10 * 1.0;
        auVar9._12_4_ = (int)((ulonglong)(dVar11 * 0.0) >> 0x20);
        *(undefined1 (*) [16])(param_1 + 10000) = auVar9;
      }
      else {
        dVar6 = *pdVar18;
        dVar42 = pdVar18[1];
        dVar48 = pdVar18[2];
        dVar51 = dVar42 + dVar42;
        dVar53 = dVar48 + dVar48;
        dVar52 = dVar6 * (dVar6 + dVar6);
        local_1c8 = (dVar37 - (dVar48 * dVar53 + dVar42 * dVar51)) * dVar7;
        dVar5 = (dVar4 - (dVar48 * dVar53 + dVar52)) * dVar8;
        dVar48 = pdVar18[3];
        dVar54 = dVar53 * dVar48;
        dVar55 = (dVar6 + dVar6) * pdVar18[3];
        dVar48 = dVar51 * dVar48;
        dStack_180 = (dVar53 * dVar42 - dVar55) * dVar10;
        local_188 = (dVar48 + *pdVar18 * dVar53) * dVar10;
        dStack_1c0 = (dVar51 * dVar6 + dVar54) * dVar7;
        local_198 = (dVar53 * dVar42 + dVar55) * dVar8;
        local_178 = (1.0 - (dVar52 + dVar42 * dVar51)) * dVar10;
        local_1b8 = (*pdVar18 * dVar53 - dVar48) * dVar7;
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar5,0);
        local_1a8._0_8_ = (dVar51 * dVar6 - dVar54) * dVar8;
        local_1a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uStack_190 = 0;
        uStack_170 = 0;
        local_168 = pdVar18[4];
        dStack_160 = pdVar18[5];
        local_158 = pdVar18[6];
        uStack_150 = 0x3ff0000000000000;
        dVar52 = (double)plStack_140 + (double)plStack_140;
        dVar5 = local_138 + local_138;
        dVar48 = local_148 * (local_148 + local_148);
        local_248 = dVar37 - (local_138 * dVar5 + (double)plStack_140 * dVar52);
        local_1f8 = 1.0 - (dVar48 + (double)plStack_140 * dVar52);
        dVar37 = (local_148 + local_148) * dStack_130;
        dStack_240 = dVar52 * local_148 + dVar5 * dStack_130;
        local_218 = dVar5 * (double)plStack_140 + dVar37;
        dVar37 = dVar5 * (double)plStack_140 - dVar37;
        local_238 = local_148 * dVar5 - dVar52 * dStack_130;
        uStack_230 = 0;
        local_228._8_8_ = dVar4 - (local_138 * dVar5 + dVar48);
        local_228._0_8_ = dVar52 * local_148 - dVar5 * dStack_130;
        uStack_210 = 0;
        local_208._8_4_ = SUB84(dVar37,0);
        local_208._0_8_ = dVar52 * dStack_130 + local_148 * dVar5;
        local_208._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        local_1e8 = dVar33;
        dStack_1e0 = dVar34;
        local_1d8 = dVar30;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar8);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar49 = blendvpd(_DAT_149936790,auVar45,auVar27);
        uVar26 = -(ulonglong)(0.0 <= dVar10 * 1.0);
        dVar30 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
        dVar37 = auVar49._0_8_;
        local_138 = local_138 * dVar37;
        plStack_140 = (longlong *)((double)plStack_140 * dVar37);
        local_148 = local_148 * dVar37;
        dVar37 = auVar49._8_8_;
        local_118 = local_118 * dVar37;
        local_120 = local_120 * dVar37;
        local_128 = dVar37 * local_128;
        local_f8 = local_f8 * dVar30;
        local_100 = local_100 * dVar30;
        local_108 = dVar30 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar30 = local_258 * local_258 + local_268 * local_268;
        dVar37 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar35._0_8_ = dVar30 + dVar37;
        auVar35._8_8_ = dVar30 + dVar37;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar49 = sqrtpd(auVar35,auVar35);
        auVar45 = divpd(auVar45,auVar49);
        auVar46._0_8_ = auVar45._0_8_ * local_258;
        auVar46._8_8_ = auVar45._8_8_ * dStack_250;
        auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar28);
        *(undefined1 (*) [16])(param_1 + 0x2700) = auVar9;
        *(double *)(param_1 + 10000) = dVar10 * 1.0;
        *(double *)(param_1 + 0x2718) = dVar11 * 0.0;
        *(ulonglong *)(param_1 + 0x26c0) =
             (ulonglong)(local_268 * auVar45._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        *(ulonglong *)(param_1 + 0x26c8) =
             (ulonglong)(dStack_260 * auVar45._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        *(undefined1 (*) [16])(param_1 + 0x26d0) = auVar49;
        *(undefined8 *)(param_1 + 0x26e0) = local_e8;
        *(undefined8 *)(param_1 + 0x26e8) = uStack_e0;
        *(undefined8 *)(param_1 + 0x26f0) = local_d8;
        *(undefined8 *)(param_1 + 0x26f8) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar17 = FUN_1447210f0(param_1);
    FUN_14142d55a(&local_148,uVar17);
    if (plStack_140 != (longlong *)0x0) {
      iVar19 = (int)plStack_140[1];
      do {
        if (iVar19 == 0) {
          plVar24 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar16 = (int)plStack_140[1];
        bVar25 = iVar19 == iVar16;
        if (bVar25) {
          *(int *)(plStack_140 + 1) = iVar19 + 1;
          iVar16 = iVar19;
        }
        iVar19 = iVar16;
        UNLOCK();
        plVar24 = plStack_140;
      } while (!bVar25);
      LOCK();
      piVar1 = (int *)((longlong)plStack_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_140 + 0x10))();
      }
      if (plVar24 != (longlong *)0x0) {
        if (local_148 != 0.0) {
          FUN_14142d692(local_148,param_1);
        }
        LOCK();
        plVar2 = plVar24 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14142d55a FUN_14142d55a body=310 status=ok
// SIG undefined FUN_14142d55a(void)

longlong * FUN_14142d55a(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cbc5650;
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



// FUNCTION 14142d692 FUN_14142d692 body=364 status=ok
// SIG undefined FUN_14142d692(void)

void FUN_14142d692(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_14485c47a();
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1459c3038(param_1 + 0x30,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = local_38;
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar8 = 0;
      do {
        uVar3 = *(ulonglong *)(lVar2 + lVar8);
        if (((uVar3 >> 0x20 != 0) && (uVar6 = (uint)uVar3, -1 < (int)uVar6)) &&
           ((int)uVar6 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)));
          if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == (int)(uVar3 >> 0x20))) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar7;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x3b48) + 0x20))(lVar4 + 0x3b48);
            if (*(longlong **)(lVar4 + 0x40) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x38) != 0)
            {
              lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x40) + 8))();
              if (lVar4 != 0) {
                lVar5 = FUN_140ebc504();
                if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                  FUN_1459025c4(param_2,lVar4);
                }
              }
            }
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142d800 FUN_14142d800 body=5 status=ok
// SIG undefined FUN_14142d800(void)

longlong FUN_14142d800(longlong param_1)

{
  return param_1 + 0x78;
}



// FUNCTION 14142d806 FUN_14142d806 body=5 status=ok
// SIG undefined FUN_14142d806(void)

longlong FUN_14142d806(longlong param_1)

{
  return param_1 + 0x28;
}



// FUNCTION 14142d80c FUN_14142d80c body=21 status=ok
// SIG undefined FUN_14142d80c(void)

undefined8 FUN_14142d80c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14142d822 FUN_14142d822 body=2104 status=ok
// SIG undefined FUN_14142d822(void)

void FUN_14142d822(undefined4 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  int *piVar16;
  undefined4 *puVar17;
  void *_Dst;
  uint uVar18;
  int iVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  ulonglong uVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_7c;
  longlong *local_78;
  uint *local_70;
  longlong *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar31 = (longlong *)(param_1 + 0x16);
  puVar28 = param_1 + 0x1a;
  iVar10 = param_1[0x20];
  if (iVar10 == 0) {
    uVar29 = 0;
    uVar32 = 1;
    iVar21 = 0;
    iVar19 = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x1e);
    if (*(uint **)(param_1 + 0x1e) == (uint *)0x0) {
      puVar14 = puVar28;
    }
    uVar33 = *puVar14;
    if (uVar33 == 0) {
      iVar21 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar21 = iVar10 + -1;
      }
      uVar29 = 0;
      uVar32 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar32 = uVar29;
      }
      iVar21 = 0;
      do {
        if (uVar32 == uVar29) goto LAB_14142dce7;
        iVar21 = iVar21 + 0x20;
        uVar33 = puVar14[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar33 == 0);
    }
    else {
      uVar29 = 0;
      iVar21 = 0;
    }
    uVar32 = (ulonglong)(-uVar33 & uVar33);
    uVar23 = uVar32 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar19 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar19) {
      iVar19 = iVar10;
    }
  }
  if (iVar19 < iVar10) {
    local_68 = (longlong *)(param_1 + 2);
    local_58 = param_1 + 0x10;
    uVar33 = 0xffffffff;
    local_78 = plVar31;
    local_70 = puVar28;
    local_60 = param_1;
    do {
      lVar25 = *plVar31;
      lVar15 = (longlong)iVar19 * 0x68;
      piVar16 = (int *)(lVar25 + lVar15);
      local_7c = iVar21;
      if (*(int *)(lVar25 + 0x30 + lVar15) == *(int *)(lVar25 + 0x5c + lVar15)) {
        local_50 = *piVar16;
        local_4c = piVar16[1];
        plVar11 = (longlong *)FUN_1409ca440(&local_50);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x278))(plVar11,0xffffffffffffffff);
        }
        if (param_1[4] != param_1[0xf]) {
          uVar12 = piVar16[1];
          uVar22 = uVar12 >> 0xd ^ *piVar16 - uVar12;
          uVar18 = uVar22 << 8 ^ (-0x61c88647 - uVar12) - uVar22;
          uVar24 = uVar18 >> 0xd ^ (uVar12 - uVar22) - uVar18;
          uVar27 = uVar24 >> 0xc ^ (uVar22 - uVar18) - uVar24;
          uVar22 = uVar27 << 0x10 ^ (uVar18 - uVar24) - uVar27;
          uVar18 = uVar22 >> 5 ^ (uVar24 - uVar27) - uVar22;
          uVar24 = uVar18 >> 3 ^ (uVar27 - uVar22) - uVar18;
          uVar22 = uVar24 << 10 ^ (uVar22 - uVar18) - uVar24;
          puVar17 = *(undefined4 **)(param_1 + 0x12);
          if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
            puVar17 = local_58;
          }
          iVar10 = puVar17[(longlong)(int)(uVar22 >> 0xf ^ uVar18 - (uVar24 + uVar22)) &
                           (longlong)(int)param_1[0x14] - 1U];
          if (iVar10 != -1) {
            lVar25 = *local_68;
LAB_14142da27:
            piVar1 = (int *)(lVar25 + (longlong)iVar10 * 0x14);
            if ((*piVar1 != *piVar16) || (*(uint *)(lVar25 + 4 + (longlong)iVar10 * 0x14) != uVar12)
               ) goto LAB_14142da42;
            iVar21 = puVar17[piVar1[4]];
            if (iVar21 == iVar10) {
              piVar16 = puVar17 + piVar1[4];
            }
            else {
              do {
                piVar16 = (int *)(lVar25 + (longlong)iVar21 * 0x14 + 0xc);
                iVar21 = *piVar16;
              } while (iVar21 != iVar10);
            }
            *piVar16 = piVar1[3];
            FUN_142a644ec(local_68);
          }
        }
LAB_14142dc0c:
        FUN_140c70382(plVar31,iVar19);
        puVar28 = local_70;
      }
      else {
        iVar10 = piVar16[0x14];
        if (iVar10 == 0) {
          uVar23 = 0;
          uVar26 = 1;
          iVar21 = 0;
          iVar19 = 0;
        }
        else {
          puVar14 = *(uint **)(piVar16 + 0x12);
          if (*(uint **)(piVar16 + 0x12) == (uint *)0x0) {
            puVar14 = (uint *)(piVar16 + 0xe);
          }
          uVar12 = *puVar14;
          if (uVar12 == 0) {
            iVar21 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar21 = iVar10 + -1;
            }
            uVar23 = 0;
            uVar26 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar26 = uVar23;
            }
            iVar19 = 0;
            do {
              if (uVar26 == uVar23) goto LAB_14142dc1b;
              iVar19 = iVar19 + 0x20;
              uVar12 = puVar14[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar23 = 0;
            iVar19 = 0;
          }
          uVar26 = (ulonglong)(-uVar12 & uVar12);
          uVar3 = uVar26 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar21 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar21) {
            iVar21 = iVar10;
          }
        }
        if (iVar21 != iVar10) {
          uVar12 = 0xffffffff;
          do {
            pbVar4 = (byte *)(*(longlong *)(piVar16 + 10) + 0x20 + (longlong)iVar21 * 0x28);
            *pbVar4 = *pbVar4 | 1;
            uVar12 = ~(uint)uVar26 & uVar12;
            puVar28 = *(uint **)(piVar16 + 0x12);
            if (*(uint **)(piVar16 + 0x12) == (uint *)0x0) {
              puVar28 = (uint *)(piVar16 + 0xe);
            }
            iVar13 = piVar16[0x14];
            iVar21 = (int)uVar23;
            lVar25 = (longlong)iVar21;
            uVar18 = puVar28[lVar25] & uVar12;
            if (uVar18 == 0) {
              iVar8 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar8 = iVar13 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar19 = iVar19 + 0x20;
              iVar9 = iVar8;
              if (iVar8 < iVar21) {
                iVar9 = iVar21;
              }
              if (iVar21 < iVar8) {
                lVar15 = 0;
                do {
                  uVar18 = puVar28[lVar25 + lVar15 + 1];
                  if (uVar18 != 0) {
                    uVar23 = (ulonglong)(iVar21 + (int)lVar15 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_14142db7a;
                  }
                  iVar19 = iVar19 + 0x20;
                  lVar15 = lVar15 + 1;
                } while (iVar9 - lVar25 != lVar15);
                uVar12 = 0xffffffff;
                iVar21 = iVar9;
              }
              uVar23 = (ulonglong)(iVar21 + 1);
              iVar21 = iVar13;
            }
            else {
LAB_14142db7a:
              uVar26 = (ulonglong)(-uVar18 & uVar18);
              uVar3 = uVar26 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar21 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (iVar13 <= iVar21) {
                iVar21 = iVar13;
              }
            }
            param_1 = local_60;
            puVar28 = local_70;
            plVar31 = local_78;
          } while (iVar21 != iVar10);
        }
      }
LAB_14142dc1b:
      uVar33 = uVar33 & ~(uint)uVar32;
      puVar14 = *(uint **)(param_1 + 0x1e);
      if (*(uint **)(param_1 + 0x1e) == (uint *)0x0) {
        puVar14 = puVar28;
      }
      iVar10 = param_1[0x20];
      iVar19 = (int)uVar29;
      lVar25 = (longlong)iVar19;
      uVar12 = puVar14[lVar25] & uVar33;
      iVar21 = local_7c;
      if (uVar12 == 0) {
        iVar13 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar13 = iVar10 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar8 = iVar13;
        if (iVar13 < iVar19) {
          iVar8 = iVar19;
        }
        if (iVar13 <= iVar19) break;
        lVar15 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar12 = puVar14[lVar25 + lVar15 + 1];
          if (uVar12 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar8 - lVar25 == lVar15) goto LAB_14142dce7;
        }
        uVar29 = (ulonglong)(iVar19 + (int)lVar15 + 1);
        uVar33 = 0xffffffff;
      }
      uVar32 = (ulonglong)(-uVar12 & uVar12);
      uVar23 = uVar32 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar19 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar10);
  }
LAB_14142dce7:
  if (iVar10 == 0) {
    iVar21 = -1;
  }
  else {
    iVar21 = -1;
    puVar14 = *(uint **)(param_1 + 0x1e);
    if (*(uint **)(param_1 + 0x1e) == (uint *)0x0) {
      puVar14 = puVar28;
    }
    uVar29 = (ulonglong)(iVar10 + 0x1fU >> 5);
    iVar19 = -0x3e - (iVar10 + 0x1fU & 0xffffffe0);
    uVar33 = 0xffffffff >> (-(char)iVar10 & 0x1fU);
    do {
      bVar34 = uVar29 == 0;
      uVar29 = uVar29 - 1;
      if (bVar34) goto LAB_14142dd4d;
      iVar19 = iVar19 + 0x20;
      uVar12 = uVar33 & puVar14[uVar29];
      uVar33 = 0xffffffff;
    } while (uVar12 == 0);
    uVar29 = (ulonglong)uVar12 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar21 = -(((uint)lVar25 ^ 0x3f) + iVar19);
  }
LAB_14142dd4d:
  iVar10 = iVar21 + 1;
  iVar19 = param_1[0x18];
  if (iVar10 < iVar19) {
    if ((0 < (int)param_1[0x23]) &&
       (uVar29 = (ulonglong)(uint)param_1[0x22], param_1[0x22] != 0xffffffff)) {
      lVar25 = *(longlong *)(param_1 + 0x16);
      do {
        iVar19 = (int)uVar29;
        if (iVar21 < iVar19) {
          lVar15 = (longlong)iVar19 * 0x68;
          iVar19 = *(int *)(lVar25 + lVar15);
          iVar13 = *(int *)(lVar25 + 4 + lVar15);
          uVar29 = (ulonglong)iVar13;
          if (uVar29 != 0xffffffffffffffff) {
            *(int *)(lVar25 + uVar29 * 0x68) = iVar19;
          }
          if (iVar19 == -1) {
            param_1[0x22] = iVar13;
          }
          else {
            *(int *)(lVar25 + 4 + (longlong)iVar19 * 0x68) = iVar13;
          }
          param_1[0x23] = param_1[0x23] + -1;
        }
        else {
          uVar29 = (ulonglong)*(uint *)(lVar25 + 4 + (longlong)iVar19 * 0x68);
        }
      } while ((int)uVar29 != -1);
      iVar19 = param_1[0x18];
    }
    if (iVar19 != iVar10) {
      param_1[0x18] = iVar10;
    }
    param_1[0x20] = iVar10;
    iVar21 = iVar21 + 0x20;
    if (-1 < iVar10) {
      iVar21 = iVar10;
    }
    iVar19 = iVar10;
    if (iVar10 % 0x20 != 0) {
      if (*(uint **)(param_1 + 0x1e) != (uint *)0x0) {
        puVar28 = *(uint **)(param_1 + 0x1e);
      }
      bVar20 = -(char)(iVar10 % 0x20);
      puVar28[iVar21 >> 5] = (puVar28[iVar21 >> 5] << (bVar20 & 0x1f)) >> (bVar20 & 0x1f);
      iVar19 = param_1[0x18];
    }
  }
  if (param_1[0x19] != iVar19) {
    FUN_14059f004(plVar31);
  }
  iVar10 = param_1[0xf];
  if ((longlong)iVar10 != 0) {
    uVar33 = param_1[4];
    iVar19 = uVar33 - iVar10;
    iVar21 = iVar19;
    if (param_1[0xe] == -1) {
      bVar34 = false;
    }
    else {
      lVar25 = *(longlong *)(param_1 + 2);
      bVar34 = false;
      iVar13 = param_1[0xe];
      uVar12 = uVar33;
      do {
        iVar8 = *(int *)(lVar25 + 4 + (longlong)iVar13 * 0x14);
        if (iVar13 < iVar19) {
          puVar2 = (undefined8 *)(lVar25 + (longlong)iVar13 * 0x14);
          puVar17 = *(undefined4 **)(param_1 + 10);
          if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
            puVar17 = param_1 + 6;
          }
          puVar7 = (undefined8 *)(lVar25 + 0x14 + (longlong)(int)(uVar12 - 1) * 0x14);
          uVar18 = uVar12;
          do {
            puVar30 = puVar7;
            uVar12 = uVar18 - 1;
            uVar22 = uVar18 + 0x1e;
            if (-1 < (int)uVar12) {
              uVar22 = uVar12;
            }
            puVar7 = (undefined8 *)((longlong)puVar30 + -0x14);
            uVar18 = uVar12;
          } while (((uint)puVar17[(int)uVar22 >> 5] >> (uVar12 & 0x1f) & 1) == 0);
          uVar5 = *(undefined8 *)((longlong)puVar30 + -0x14);
          uVar6 = *(undefined8 *)((longlong)puVar30 + -0xc);
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)puVar30 + -4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar17 = *(undefined4 **)(param_1 + 10);
          if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
            puVar17 = param_1 + 6;
          }
          iVar9 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar9 = iVar13;
          }
          puVar17[iVar9 >> 5] = puVar17[iVar9 >> 5] | 1 << ((byte)iVar13 & 0x1f);
          bVar34 = true;
        }
        iVar13 = iVar8;
      } while (iVar8 != -1);
      if (param_1[4] - uVar33 != 0) {
        _Dst = (void *)((longlong)iVar19 * 0x14 + *(longlong *)(param_1 + 2));
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar10 * 0x14),
                (longlong)(int)(param_1[4] - uVar33) * 0x14);
        iVar21 = param_1[4] - iVar10;
      }
    }
    param_1[4] = iVar21;
    if (param_1[0xc] - uVar33 != 0) {
      puVar17 = *(undefined4 **)(param_1 + 10);
      if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
        puVar17 = param_1 + 6;
      }
      local_88 = param_1[0xc] - uVar33;
      FUN_14493566c(puVar17,iVar19,puVar17,uVar33);
      iVar19 = param_1[0xc] - iVar10;
    }
    iVar10 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar10 = iVar19;
    }
    param_1[0xc] = iVar19;
    if (iVar19 % 0x20 != 0) {
      puVar17 = param_1 + 6;
      if (*(undefined4 **)(param_1 + 10) != (undefined4 *)0x0) {
        puVar17 = *(undefined4 **)(param_1 + 10);
      }
      bVar20 = -(char)(iVar19 % 0x20);
      puVar17[iVar10 >> 5] = (uint)(puVar17[iVar10 >> 5] << (bVar20 & 0x1f)) >> (bVar20 & 0x1f);
    }
    *(undefined8 *)(param_1 + 0xe) = 0xffffffff;
    iVar10 = param_1[5];
    if (iVar10 == param_1[4]) {
      iVar21 = 0;
      if (!bVar34) goto LAB_14142dd73;
    }
    else {
      FUN_1401ad22e(param_1 + 2);
      if (!bVar34) goto LAB_14142dd73;
      iVar10 = param_1[4];
      iVar21 = param_1[0xf];
    }
    iVar19 = 1;
    if (3 < (uint)(iVar10 - iVar21)) {
      uVar29 = (ulonglong)(iVar10 - iVar21 & 0xfffffffe) + 0xf;
      lVar25 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar25 & 0x1f);
    }
    param_1[0x14] = iVar19;
    FUN_140cee2b0(param_1 + 2);
  }
LAB_14142dd73:
  *param_1 = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14142da42:
  iVar10 = piVar1[3];
  if (iVar10 == -1) goto LAB_14142dc0c;
  goto LAB_14142da27;
}



// FUNCTION 14142e05b FUN_14142e05b body=124 status=ok
// SIG undefined FUN_14142e05b(void)

longlong * FUN_14142e05b(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar5 < 1) {
    FUN_140d7698c(param_1,1);
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar5 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar6 = (longlong)iVar1 * 0x30;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = param_3[2];
  *(undefined8 *)(lVar2 + lVar6) = uVar3;
  ((undefined8 *)(lVar2 + lVar6))[1] = uVar4;
  *(undefined1 *)(lVar2 + 0x20 + lVar6) = 7;
  *(undefined8 *)(lVar2 + 0x28 + lVar6) = *param_2;
  return param_1;
}



// FUNCTION 14142e0d8 FUN_14142e0d8 body=503 status=ok
// SIG undefined FUN_14142e0d8(void)

void FUN_14142e0d8(longlong *param_1,int param_2)

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
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
          if (iVar2 - lVar11 == lVar8) goto LAB_14142e1f8;
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
LAB_14142e1f8:
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



// FUNCTION 14142e2d2 FUN_14142e2d2 body=136 status=ok
// SIG undefined FUN_14142e2d2(void)

longlong FUN_14142e2d2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,local_28);
      FUN_140008f88(param_1,local_28);
      if (local_28[0] != (longlong *)0x0) {
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142e35c FUN_14142e35c body=127 status=ok
// SIG undefined FUN_14142e35c(void)

void FUN_14142e35c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  if (((*(longlong *)(param_1 + 0x410) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x410) + 0x830) == '\x01')) &&
     (*(longlong *)(param_1 + 0x438) != 0)) {
    lVar1 = FUN_14142e3dc(*(longlong *)(param_1 + 0x438),0);
    *(undefined1 *)(lVar1 + 0x118) = 1;
    lVar1 = FUN_14142e3dc(*(undefined8 *)(param_1 + 0x438),1);
    *(undefined1 *)(lVar1 + 0x118) = 1;
    lVar1 = FUN_14142e3dc(*(undefined8 *)(param_1 + 0x438),2);
    *(undefined1 *)(lVar1 + 0x118) = 1;
  }
  return;
}



// FUNCTION 14142e3dc FUN_14142e3dc body=69 status=ok
// SIG undefined FUN_14142e3dc(void)

longlong FUN_14142e3dc(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\x02') {
    lVar1 = 0x758;
  }
  else if (param_2 == '\x01') {
    lVar1 = 0x878;
    if ((*(char *)(param_1 + 0x999) == '\x01') &&
       (lVar1 = 0x758, *(char *)(param_1 + 0x998) == '\0')) {
      lVar1 = 0x638;
    }
  }
  else {
    lVar1 = 0x638;
  }
  return param_1 + lVar1;
}



// FUNCTION 14142e422 FUN_14142e422 body=8 status=ok
// SIG undefined FUN_14142e422(void)

undefined8 FUN_14142e422(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 14142e42a FUN_14142e42a body=429 status=ok
// SIG undefined FUN_14142e42a(void)

undefined8 *
FUN_14142e42a(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  void *_Dst;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_14aaff750;
  param_1[1] = *param_2;
  param_1[2] = param_3;
  param_1[9] = 0;
  param_1[10] = 0x8000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  iVar2 = *(int *)(param_3 + 0xb0);
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1417fa3b4(param_1 + 3);
    _Dst = (void *)param_1[3];
  }
  memset(_Dst,0,(longlong)iVar2 << 3);
  uVar6 = *(uint *)(param_3 + 0xb0);
  iVar2 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar2 + uVar6;
  if ((uint)(*(int *)((longlong)param_1 + 0x34) - iVar2) < uVar6) {
    FUN_1417fa516(param_1 + 5);
  }
  memset((void *)((longlong)iVar2 * 8 + param_1[5]),0,(longlong)(int)uVar6 << 3);
  iVar2 = *(int *)(param_3 + 0xb0);
  *(int *)(param_1 + 10) = iVar2;
  uVar6 = iVar2 + 0x1f;
  if (0x1f < uVar6) {
    plVar1 = param_1 + 9;
    uVar8 = uVar6 >> 5;
    puVar7 = (undefined8 *)param_1[9];
    if (*(int *)((longlong)param_1 + 0x54) + 0x1fU >> 5 < uVar8) {
      bVar9 = puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)0x0;
      if (bVar9 || 0x9f < uVar6) {
        if (0x9f < uVar6) {
          puVar7 = (undefined8 *)(ulonglong)uVar8;
        }
        FUN_1446efa72(plVar1,0,puVar7,4);
        puVar7 = (undefined8 *)*plVar1;
      }
      *(uint *)((longlong)param_1 + 0x54) = uVar6 & 0xffffffe0;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = param_1 + 7;
    }
    if (uVar6 < 0x120) {
      uVar8 = uVar6 >> 3 & 0x3c;
    }
    else {
      uVar8 = uVar8 << 2;
    }
    memset(puVar7,0,(ulonglong)uVar8);
    iVar2 = *(int *)(param_1 + 10);
    iVar3 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      puVar7 = param_1 + 7;
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*plVar1;
      }
      bVar5 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)puVar7 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  lVar4 = FUN_140083894();
  param_1[0xc] = *(undefined8 *)(lVar4 + 0x48);
  return param_1;
}



// FUNCTION 14142e5d8 FUN_14142e5d8 body=482 status=ok
// SIG undefined FUN_14142e5d8(void)

void FUN_14142e5d8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 14142e7bc FUN_14142e7bc body=207 status=ok
// SIG undefined FUN_14142e7bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14142e7bc(void)

{
  if ((DAT_14c9e92f7 & 2) == 0) {
    DAT_14c9e92f7 = DAT_14c9e92f7 | 2;
    _DAT_14c9e9298 = L"FShadowProjectionShaderParameters";
    _DAT_14c9e92b0 = FUN_146826540;
    _DAT_14c9e92b8 = FUN_146825d77;
    _DAT_14c9e92c0 = FUN_146825fd6;
    _DAT_14c9e92c8 = FUN_1407e02ea;
    _DAT_14c9e92d0 = FUN_146826273;
    _DAT_14c9e92a8 = &LAB_1471d233e;
    _DAT_14c9e92e8 = 0xffffffff00000050;
    _DAT_14c9e92f0 = 2;
    DAT_14c9e92f4 = 0;
    _DAT_14c9e92d8 = &LAB_1471d235a;
    FUN_1459c4bcc();
    FUN_1407e00cc(&DAT_14c9e9290);
  }
  return &DAT_14c9e9290;
}



// FUNCTION 14142e88c FUN_14142e88c body=1043 status=ok
// SIG undefined FUN_14142e88c(void)

void FUN_14142e88c(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong local_98;
  int local_90;
  undefined8 *local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14142e8e2;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14142e8e2:
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar2;
  local_a0 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14142e934;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14142e934:
  puVar11 = (undefined4 *)*plVar7;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18))
      goto LAB_14142e97d;
      plVar6 = plVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_14142e97d:
  local_c8 = *plVar8;
  local_bc = *(int *)(param_2 + 0x14);
  local_b0 = plVar7;
  local_a8 = plVar8;
  if (local_bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  local_d0 = *plVar6;
  FUN_140b325e4(param_2,&local_80,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  lVar3 = local_c8;
  lVar4 = local_d0;
  if (local_70 == 0) {
    FUN_1410bd96e(param_2,&local_68,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_58 == 0) {
      FUN_1410bd9c4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar2 != 0 && local_88 != (undefined8 *)0x0) {
        uVar9 = 0;
        puVar10 = local_88;
        do {
          FUN_1475dfd90(*(undefined8 *)(local_c8 + uVar9 * 8),*(undefined1 *)(local_d0 + uVar9),
                        *puVar10,puVar11);
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 2;
          puVar11 = puVar11 + 8;
        } while (uVar5 != uVar9);
      }
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
        UNLOCK();
        if (local_90 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
        }
      }
    }
    else if (uVar5 != 0) {
      uVar9 = 0;
      do {
        FUN_1475dfcca(*(undefined8 *)(local_c8 + uVar9 * 8),*(undefined1 *)(local_d0 + uVar9),
                      *(undefined2 *)(local_58 + uVar9 * 2),puVar11);
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 8;
      } while (uVar5 != uVar9);
    }
    if (CONCAT44(uStack_64,local_68) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iStack_60 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT44(uStack_64,local_68) + 8));
      }
    }
  }
  else if (uVar5 != 0) {
    uVar9 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_70 + uVar9 * 2))
      )(&local_68,*(undefined8 *)(lVar3 + uVar9 * 8),*(undefined1 *)(lVar4 + uVar9));
      *(longlong *)(puVar11 + 4) = local_58;
      *(undefined8 *)(puVar11 + 6) = uStack_50;
      *puVar11 = local_68;
      puVar11[1] = uStack_64;
      puVar11[2] = iStack_60;
      puVar11[3] = uStack_5c;
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar5 != uVar9);
  }
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + -1;
    UNLOCK();
    if (local_78 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_80 + 8));
    }
  }
  plVar8 = local_a8;
  plVar7 = local_b0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    uVar5 = plVar7[2];
    if ((ulonglong)plVar7[2] < local_a0) {
      uVar5 = local_a0;
    }
    plVar7[2] = uVar5;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142eca0 FUN_14142eca0 body=242 status=ok
// SIG undefined FUN_14142eca0(void)

uint * FUN_14142eca0(uint *param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_868 [32];
  undefined4 local_848;
  undefined4 local_840;
  longlong local_838;
  short local_828 [1028];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_868;
  if (param_3 < 0x401) {
    if (param_3 == 0) goto LAB_14142ed02;
  }
  else {
    local_840 = 0x400;
    local_848 = 0x400;
    local_838 = param_2;
    FUN_140033559(".\\Runtime/Core/Private/UObject/UnrealNames.cpp",0x3de,
                  L"FName length is too long; HashLowerCase value is undefined. Length = %d, MaxLength = %d, Name=%.*s..."
                  ,(ulonglong)param_3);
  }
  uVar4 = 0;
  do {
    uVar1 = *(ushort *)(param_2 + uVar4 * 2);
    local_828[uVar4] = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
    uVar4 = uVar4 + 1;
  } while (param_3 != uVar4);
LAB_14142ed02:
  uVar3 = FUN_1447addd0(local_828,param_3 * 2);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  *param_1 = uVar2 & 0xff;
  param_1[1] = (uint)uVar3;
  param_1[2] = uVar2 & 0xe0000000;
  *(ushort *)(param_1 + 3) = ((ushort)(uVar2 >> 7) & 0x3e) + (short)(param_3 << 6) + 1;
  if ((local_20 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142ed94 FUN_14142ed94 body=26 status=ok
// SIG undefined FUN_14142ed94(void)

void FUN_14142ed94(longlong param_1)

{
  FUN_14142edae();
  *(byte *)(param_1 + 0x830) = *(byte *)(param_1 + 0x830) | 1;
  return;
}



// FUNCTION 14142edae FUN_14142edae body=1885 status=ok
// SIG undefined FUN_14142edae(void)

void FUN_14142edae(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  uint *local_d8;
  code *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((char)param_1[0x93] != '\0') goto LAB_14142efd1;
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_f0 = &local_d0;
      local_d0 = FUN_141030f22;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1463c0cc2;
      local_f8 = &LAB_147c9db5b;
      local_100 = &LAB_1463f9c44;
      local_108 = L"Game";
      local_110 = 0x2000000000;
      local_118 = 0x10000004;
      local_120 = 8;
      local_128 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
       (lVar20 = *(longlong *)(lVar7 + 0x430), lVar20 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_f0 = &local_d0;
        local_d0 = FUN_1417de738;
        local_e0 = (code *)&LAB_145893408;
        local_e8 = &LAB_1458cbbd2;
        local_f8 = &LAB_147ba21f1;
        local_100 = &LAB_1463e9233;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x1000000c;
        local_120 = 8;
        local_128 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar20 = *(longlong *)(lVar7 + 0x430);
        if (lVar20 == 0) goto LAB_14142ee2b;
      }
      if (((DAT_14cae9568 != 0) && (lVar7 = *(longlong *)(lVar20 + 0x10), lVar7 != 0)) &&
         ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
           == DAT_14cae9568 + 0x30)))) {
        puVar16 = (uint *)(param_1 + 0x5e);
        local_88 = 0;
        uStack_80 = 0;
        iVar5 = (int)param_1[0x61];
        if (iVar5 == 0) {
          uVar9 = 1;
          uVar17 = 0;
          iVar11 = 0;
          iVar18 = 0;
        }
        else {
          puVar10 = (uint *)param_1[0x60];
          if ((uint *)param_1[0x60] == (uint *)0x0) {
            puVar10 = puVar16;
          }
          uVar14 = *puVar10;
          if (uVar14 == 0) {
            iVar18 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar18 = iVar5 + -1;
            }
            uVar17 = 0;
            uVar9 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar9 = uVar17;
            }
            iVar11 = 0;
            do {
              if (uVar9 == uVar17) goto LAB_14142f384;
              iVar11 = iVar11 + 0x20;
              uVar14 = puVar10[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar17 = 0;
            iVar11 = 0;
          }
          uVar9 = (ulonglong)(-uVar14 & uVar14);
          uVar3 = uVar9 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar18 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar18) {
            iVar18 = iVar5;
          }
        }
        if (iVar18 < iVar5) {
          uVar14 = 0xffffffff;
          local_d8 = puVar16;
          do {
            uVar3 = uStack_80;
            lVar7 = param_1[0x5c];
            lVar20 = (longlong)iVar18 * 0x110;
            if (((*(byte *)(lVar7 + 0x4c + lVar20) & 1) != 0) ||
               (*(int *)(lVar7 + 0xb8 + lVar20) < *(int *)(lVar7 + 0xa8 + lVar20))) {
              lVar12 = (longlong)(int)uStack_80;
              uVar19 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar19);
              if (uStack_80._4_4_ < uVar19) {
                FUN_14011bb82(&local_88,uVar3 & 0xffffffff);
                puVar16 = local_d8;
              }
              puVar13 = (undefined8 *)(lVar7 + lVar20);
              *(undefined8 *)(local_88 + lVar12 * 0x18) = *puVar13;
              *(undefined8 *)(local_88 + 8 + lVar12 * 0x18) = puVar13[1];
              lVar7 = puVar13[2];
              *(longlong *)(local_88 + 0x10 + lVar12 * 0x18) = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
            }
            uVar14 = uVar14 & ~(uint)uVar9;
            puVar10 = (uint *)param_1[0x60];
            if ((uint *)param_1[0x60] == (uint *)0x0) {
              puVar10 = puVar16;
            }
            iVar5 = (int)param_1[0x61];
            iVar18 = (int)uVar17;
            lVar7 = (longlong)iVar18;
            uVar19 = puVar10[lVar7] & uVar14;
            if (uVar19 == 0) {
              iVar15 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar15 = iVar5 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar8 = iVar15;
              if (iVar15 < iVar18) {
                iVar8 = iVar18;
              }
              if (iVar15 <= iVar18) break;
              lVar20 = 0;
              while( true ) {
                iVar11 = iVar11 + 0x20;
                uVar19 = puVar10[lVar7 + lVar20 + 1];
                if (uVar19 != 0) break;
                lVar20 = lVar20 + 1;
                if (iVar8 - lVar7 == lVar20) goto LAB_14142f252;
              }
              uVar17 = (ulonglong)(iVar18 + (int)lVar20 + 1);
              uVar14 = 0xffffffff;
            }
            uVar9 = (ulonglong)(-uVar19 & uVar19);
            uVar3 = uVar9 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar18 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          } while (iVar18 < iVar5);
LAB_14142f252:
          if (0 < (int)uStack_80) {
            lVar20 = 0x10;
            lVar7 = 0;
            do {
              local_d0 = *(code **)(local_88 + -0x10 + lVar20);
              local_c8 = *(undefined8 *)(local_88 + -8 + lVar20);
              plVar6 = *(longlong **)(local_88 + lVar20);
              if (plVar6 == (longlong *)0x0) {
                local_c0 = (longlong *)0x0;
                local_b8 = 0x1ffffffff;
                uStack_b0 = 0x3c88888900000000;
                uStack_98 = 0;
                uStack_97 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                uStack_9f = 0;
              }
              else {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                local_b8 = 0x1ffffffff;
                uStack_b0 = 0x3c88888900000000;
                uStack_98 = 0;
                uStack_97 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                uStack_9f = 0;
                LOCK();
                plVar1 = plVar6 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                local_c0 = plVar6;
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
              uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
              (**(code **)(*param_1 + 0x2a8))(param_1,&local_d0);
              plVar6 = local_c0;
              if (local_c0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_c0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_c0)(local_c0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
              lVar7 = lVar7 + 1;
              lVar20 = lVar20 + 0x18;
            } while (lVar7 < (int)uStack_80);
          }
        }
LAB_14142f384:
        FUN_144a65a1e(local_88);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14142ee2b:
  lVar7 = (**(code **)(*param_1 + 0x180))();
  dVar4 = *(double *)(lVar7 + 0x6e0);
  iVar5 = (int)param_1[0x61];
  if (iVar5 == 0) {
    uVar17 = 1;
    uVar9 = 0;
    iVar11 = 0;
    iVar18 = 0;
  }
  else {
    puVar16 = (uint *)param_1[0x60];
    if ((uint *)param_1[0x60] == (uint *)0x0) {
      puVar16 = (uint *)(param_1 + 0x5e);
    }
    uVar14 = *puVar16;
    if (uVar14 == 0) {
      iVar18 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar18 = iVar5 + -1;
      }
      uVar9 = 0;
      uVar19 = iVar18 >> 5;
      if (iVar18 >> 5 < 1) {
        uVar19 = 0;
      }
      iVar11 = 0;
      do {
        if (uVar19 == uVar9) goto LAB_14142efd1;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar16[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar9 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar18 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar18) {
      iVar18 = iVar5;
    }
  }
  if (iVar18 < iVar5) {
    uVar14 = 0xffffffff;
    do {
      lVar7 = param_1[0x5c];
      lVar20 = (longlong)iVar18 * 0x110;
      puVar13 = (undefined8 *)(lVar7 + 0x18 + lVar20);
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined8 *)(lVar7 + 0x28 + lVar20) = 0;
      *(float *)(lVar7 + 0x48 + lVar20) = (float)dVar4;
      *(byte *)(lVar7 + 0x4c + lVar20) = *(byte *)(lVar7 + 0x4c + lVar20) & 0xf4 | 8;
      uVar14 = ~(uint)uVar17 & uVar14;
      puVar16 = (uint *)param_1[0x60];
      if ((uint *)param_1[0x60] == (uint *)0x0) {
        puVar16 = (uint *)(param_1 + 0x5e);
      }
      iVar5 = (int)param_1[0x61];
      iVar18 = (int)uVar9;
      lVar7 = (longlong)iVar18;
      uVar19 = puVar16[lVar7] & uVar14;
      if (uVar19 == 0) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar8 = iVar15;
        if (iVar15 < iVar18) {
          iVar8 = iVar18;
        }
        if (iVar15 <= iVar18) break;
        lVar20 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar19 = puVar16[lVar7 + lVar20 + 1];
          if (uVar19 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar8 - lVar7 == lVar20) goto LAB_14142efd1;
        }
        uVar9 = (ulonglong)(iVar18 + (int)lVar20 + 1);
        uVar14 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar19 & uVar19);
      uVar3 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar18 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar5);
  }
LAB_14142efd1:
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142f50c FUN_14142f50c body=1154 status=ok
// SIG undefined FUN_14142f50c(void)

void FUN_14142f50c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            goto LAB_14142f5f7;
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
LAB_14142f5f7:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14142f6c4;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14142f6c4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14142f990(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142f990 FUN_14142f990 body=1106 status=ok
// SIG undefined FUN_14142f990(void)

void FUN_14142f990(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  float local_84;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_14151233a(param_1,param_3);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_140cf8aa6(lVar5);
  }
  if (param_2 == 0) goto LAB_14142fa0d;
  lVar7 = FUN_140fe7df8();
  if ((((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) || (lVar5 == 0))
      || (lVar6 == 0)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
      != lVar7 + 0x30)) goto LAB_14142fa0d;
  uVar1 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  uVar4 = *(uint *)(lVar7 + 0x10);
  if (*(uint *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    uVar9 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar14) {
      local_b0 = (longlong *)CONCAT44(local_b0._4_4_,uVar9);
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar9);
      uVar9 = (uint)local_b0;
    }
    LOCK();
    uVar4 = *(uint *)(lVar7 + 0x10);
    bVar14 = uVar4 == 0;
    if (bVar14) {
      *(uint *)(lVar7 + 0x10) = uVar9;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar14) {
      uVar4 = uVar9;
    }
  }
  local_68 = CONCAT44(uVar4,uVar1);
  iVar3 = FUN_148d2e292((longlong *)(param_1 + 0x760),uVar1 ^ uVar4);
  if (iVar3 != -1) {
    lVar7 = *(longlong *)(param_1 + 0x760) + (longlong)iVar3 * 0x48;
    plVar12 = (longlong *)(lVar7 + 8);
    if (plVar12 != (longlong *)0x0 && lVar7 != 0) {
      FUN_141118f36(param_2);
      if ((((*(char *)(param_1 + 0x578) == '\x01') && (*(char *)(lVar7 + 0x38) != '\x01')) ||
          ((*(char *)(param_1 + 0x579) == '\x01' && (*(char *)(lVar7 + 0x38) == '\x01')))) &&
         (FUN_144124a64(&local_68,lVar6), local_50 == '\x01')) {
        local_98 = local_58;
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = uStack_60;
        uStack_9c = uStack_5c;
        plVar10 = *(longlong **)(param_2 + 0x3a8);
        if (((plVar10 != (longlong *)0x0) &&
            (cVar2 = (**(code **)(*plVar10 + 0x7c0))(plVar10,&local_a8,&local_84,local_80),
            cVar2 != '\0')) && ((0.0 <= local_84 && (local_84 <= 0.0)))) {
          *(undefined1 *)(lVar7 + 0x38) = 0;
          goto LAB_14142fa0d;
        }
      }
      plVar10 = (longlong *)(lVar5 + 0x3c20);
      lVar8 = (**(code **)(*(longlong *)(lVar5 + 0x3c20) + 0x10))(plVar10);
      if (((lVar8 != 0) && (cVar2 = FUN_148f05a58(lVar8), cVar2 != '\0')) ||
         ((lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar8 != 0 &&
          (cVar2 = FUN_148f05a60(lVar8), cVar2 != '\0')))) {
        *(undefined1 *)(lVar7 + 0x39) = 1;
        FUN_148d223b6(param_1,lVar5);
        goto LAB_14142fa0d;
      }
      local_b0 = plVar12;
      if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
        lVar8 = *(longlong *)(lVar7 + 8);
        lVar13 = (longlong)*(int *)(lVar7 + 0x10) << 3;
        do {
          cVar2 = FUN_148cf1924(lVar8,param_2);
          plVar12 = local_b0;
          if (cVar2 != '\0') {
            iVar3 = *(int *)(lVar7 + 0x10);
            if (iVar3 != 1) {
              bVar11 = 0;
              goto LAB_14142fbe2;
            }
            if (((*(char *)(lVar7 + 0x38) != '\x01') || (*(char *)(param_1 + 0x579) != '\0')) ||
               ((longlong)*(int *)(param_1 + 0x7b8) == 0)) goto LAB_14142fda8;
            lVar8 = *(longlong *)(param_1 + 0x7b0);
            lVar13 = (longlong)*(int *)(param_1 + 0x7b8) << 3;
            goto LAB_14142fce2;
          }
          lVar8 = lVar8 + 8;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
        bVar11 = 0;
        goto LAB_14142fbdf;
      }
      bVar11 = 0;
      goto LAB_14142fc12;
    }
  }
  goto LAB_14142fc6f;
  while( true ) {
    lVar8 = lVar8 + 8;
    lVar13 = lVar13 + -8;
    if (lVar13 == 0) break;
LAB_14142fce2:
    cVar2 = FUN_14088ccfe(lVar8,lVar6);
    if (cVar2 != '\0') {
      bVar11 = 1;
      if (*(int *)(param_1 + 0x7b8) < 2) goto LAB_14142fbdf;
      break;
    }
  }
LAB_14142fda8:
  bVar11 = 0;
LAB_14142fbdf:
  iVar3 = *(int *)(lVar7 + 0x10);
LAB_14142fbe2:
  if (iVar3 != 0) {
    lVar8 = *plVar12;
    lVar13 = (longlong)iVar3 << 3;
    do {
      cVar2 = FUN_148cf1924(lVar8,param_2);
      if (cVar2 != '\0') {
        local_b8 = lVar6;
        FUN_148d221e6(param_1,local_b0,param_2,lVar5);
        break;
      }
      lVar8 = lVar8 + 8;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
LAB_14142fc12:
  if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
    lVar8 = *(longlong *)(lVar7 + 0x18);
    lVar13 = (longlong)*(int *)(lVar7 + 0x20) << 3;
    do {
      cVar2 = FUN_148cf1924(lVar8,param_2);
      if (cVar2 != '\0') {
        FUN_148d2228c(param_1,local_b0,param_2,lVar6);
        break;
      }
      lVar8 = lVar8 + 8;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  if ((*(int *)(lVar7 + 0x10) == 0) && (*(int *)(lVar7 + 0x20) == 0)) {
    FUN_148d2230e(param_1,lVar6,lVar5);
  }
  if ((!(bool)(~bVar11 & *(int *)(param_1 + 0x7c8) != 0)) && (*(char *)(param_1 + 0x848) == '\x02'))
  {
    FUN_148d216d8(param_1);
  }
LAB_14142fc6f:
  FUN_141512256(param_1 + 0x7c0);
  FUN_141512256(param_1 + 0x7b0);
LAB_14142fa0d:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14142fde4 FUN_14142fde4 body=90 status=ok
// SIG undefined FUN_14142fde4(void)

void FUN_14142fde4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1447ab16c(param_1,0);
  return;
}



// FUNCTION 14142fe3e FUN_14142fe3e body=85 status=ok
// SIG undefined FUN_14142fe3e(void)

void FUN_14142fe3e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  if ((longlong)(int)lVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar1 * 0x10 != lVar3);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 14142fe94 FUN_14142fe94 body=103 status=ok
// SIG undefined FUN_14142fe94(void)

void FUN_14142fe94(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x168);
    if (DAT_14c82b500 != 0) {
      FUN_14009fd82(DAT_14c82b500,plVar3,0xff);
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    *plVar3 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014142fef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14142fefb FUN_14142fefb body=75 status=ok
// SIG undefined FUN_14142fefb(void)

void FUN_14142fefb(longlong param_1,int param_2)

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



// FUNCTION 14142ff46 FUN_14142ff46 body=70 status=ok
// SIG undefined FUN_14142ff46(void)

void FUN_14142ff46(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14142ff8c(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14142ff8c FUN_14142ff8c body=55 status=ok
// SIG undefined FUN_14142ff8c(void)

void FUN_14142ff8c(longlong *param_1)

{
  FUN_14142ffc4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14142ffc4 FUN_14142ffc4 body=123 status=ok
// SIG undefined FUN_14142ffc4(void)

void FUN_14142ffc4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 141430040 FUN_141430040 body=442 status=ok
// SIG undefined FUN_141430040(void)

void FUN_141430040(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      plVar8 = *(longlong **)(*param_1 + 8 + (longlong)iVar7 * 0x20);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
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
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_141430169;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_141430169:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414301fc FUN_1414301fc body=470 status=ok
// SIG undefined FUN_1414301fc(void)

void FUN_1414301fc(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      piVar4 = *(int **)(*param_1 + 8 + (longlong)iVar8 * 0x20);
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
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar3 = (int)plVar6[3];
      lVar12 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_14143034f;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_14143034f:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414303d4 FUN_1414303d4 body=113 status=ok
// SIG undefined FUN_1414303d4(void)

void FUN_1414303d4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
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



// FUNCTION 141430446 FUN_141430446 body=323 status=ok
// SIG undefined FUN_141430446(void)

longlong FUN_141430446(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  *param_4 = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return 0;
  }
  lVar8 = *param_3;
  if (lVar8 == DAT_14cbdf3d8) {
    lVar3 = *(longlong *)(lVar2 + 0xd0);
LAB_141430491:
    if (lVar3 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x38);
      goto LAB_14143049e;
    }
  }
  else if (lVar8 == DAT_14cbdf3e0) {
    lVar3 = *(longlong *)(lVar2 + 0xd0) + 0x78;
    goto LAB_141430491;
  }
  if (lVar8 != DAT_14cbdf3d0) {
    return 0;
  }
  plVar4 = (longlong *)(lVar2 + 0xb8);
LAB_14143049e:
  if ((plVar4 == (longlong *)0x0) || ((longlong)(int)plVar4[1] < 1)) {
    return 0;
  }
  iVar7 = (int)plVar4[2];
  uVar6 = 0;
LAB_1414304c4:
  iVar7 = iVar7 + 1;
  *(int *)(plVar4 + 2) = iVar7;
  lVar2 = uVar6 * 0x120;
  iVar1 = *(int *)(*plVar4 + 8 + lVar2);
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar8 = 0;
      do {
        uVar10 = *(ushort *)(*(longlong *)(*plVar4 + lVar2) + lVar8);
        uVar11 = (ulonglong)uVar10;
        uVar5 = *(ushort *)(*param_2 + lVar8);
        if (uVar10 == uVar5) {
          if (uVar10 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar10)) goto LAB_141430533;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar9 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar9]) goto LAB_141430533;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_14143056f;
  }
  if ((int)param_2[1] + iVar1 == 1) goto LAB_14143056f;
  goto LAB_14143053b;
LAB_141430533:
  if (uVar10 == uVar5) {
LAB_14143056f:
    *param_4 = (int)uVar6;
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    return lVar2 + *plVar4;
  }
LAB_14143053b:
  uVar6 = uVar6 + 1;
  if ((ulonglong)(longlong)(int)plVar4[1] <= uVar6) {
    return 0;
  }
  goto LAB_1414304c4;
}



// FUNCTION 14143058a FUN_14143058a body=249 status=ok
// SIG undefined FUN_14143058a(void)

undefined8 FUN_14143058a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    return 0;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar4[2] != *(int *)(param_1 + 0x34)) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  else {
    lVar3 = 0;
  }
  if (*(longlong *)(lVar3 + 0x598) == 0) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar4;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + 0x374) != 0) {
    uVar1 = *(uint *)(lVar6 + 0x370);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14143066e;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar5 != (undefined8 *)0x0) &&
        ((*(int *)(puVar5 + 2) == *(int *)(lVar6 + 0x374) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      uVar2 = *puVar5;
      goto LAB_14143066e;
    }
  }
  uVar2 = 0;
LAB_14143066e:
  uVar2 = FUN_143ebbfc2(*(undefined8 *)(lVar3 + 0x598),uVar2,param_2,param_3);
  return uVar2;
}



// FUNCTION 141430684 FUN_141430684 body=862 status=ok
// SIG undefined FUN_141430684(void)

void FUN_141430684(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  uVar4 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_24,uStack_28);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  uStack_38 = (undefined4)uStack_18;
  uStack_34 = uStack_18._4_4_;
  FUN_1414309e4(&local_48,uVar4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414309e4 FUN_1414309e4 body=145 status=ok
// SIG undefined FUN_1414309e4(void)

void FUN_1414309e4(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141088a78();
  if ((*(byte *)(local_28 + 0x30) & 2) != 0) {
    param_2 = *(int *)(local_28 + 0xec) - param_2;
    iVar3 = 0;
    if (0 < param_2) {
      iVar3 = param_2;
    }
    if (iVar3 != *(int *)(local_28 + 0xec)) {
      FUN_145884ed6();
    }
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



// FUNCTION 141430a76 FUN_141430a76 body=248 status=ok
// SIG undefined FUN_141430a76(void)

void FUN_141430a76(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x86] != param_2) {
    if (DAT_14c99f930 != (undefined8 *)0x0) {
      (**(code **)*DAT_14c99f930)();
    }
    param_1[0x86] = param_2;
    (**(code **)(*param_1 + 0x878))(param_1);
    if (param_1[0x7e] != 0) {
      lVar3 = FUN_140caa2f8();
      plVar1 = (longlong *)param_1[0x7e];
      if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && ((char)plVar1[0x2f] == '\x03')))) {
        plVar1[0x7e] = param_2;
        (**(code **)(*plVar1 + 0x700))();
      }
    }
    local_28 = param_2;
    uVar4 = FUN_14477b072(param_1,DAT_14cadacb0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141430b70 FUN_141430b70 body=29 status=ok
// SIG undefined FUN_141430b70(void)

undefined8 * FUN_141430b70(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1403b0700();
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
  return param_2;
}



// FUNCTION 141430b8e FUN_141430b8e body=1219 status=ok
// SIG undefined FUN_141430b8e(void)

void FUN_141430b8e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
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
  local_28 = 0x3004;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
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
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_30;
  local_48 = local_28;
  local_40 = 0;
  FUN_141431052(local_18,&local_50,local_38);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141431052 FUN_141431052 body=88 status=ok
// SIG undefined FUN_141431052(void)

void FUN_141431052(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_1403ec9c0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_141324bcc(lVar3 + 0x140,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 1414310aa FUN_1414310aa body=1339 status=ok
// SIG undefined FUN_1414310aa(void)

void FUN_1414310aa(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3aa68) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd320;
  }
  else if (lVar1 == DAT_14cb3aa70) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd390;
  }
  else if (lVar1 == DAT_14cb3aa78) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd400;
  }
  else if (lVar1 == DAT_14cb3aa80) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd470;
  }
  else if (lVar1 == DAT_14cb3aa88) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd4e0;
  }
  else if (lVar1 == DAT_14cb3aa90) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd550;
  }
  else if (lVar1 == DAT_14cb3aa98) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd5c0;
  }
  else if (lVar1 == DAT_14cb3aaa0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd630;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_1414311e5;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adbd6a0;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_1414311e5:
  if (((int)param_4[1] != 0) && (*param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141431600 FUN_141431600 body=359 status=ok
// SIG undefined FUN_141431600(void)

void FUN_141431600(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  *(undefined8 *)(param_1 + 0x1b30) = 0;
  lVar4 = 0;
  *(undefined1 *)(param_1 + 0x1b38) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1c00) = 1;
  *(undefined1 *)(param_1 + 0x1c02) = 0;
  *(undefined4 *)(param_1 + 0x1c04) = 0;
  *(undefined2 *)(param_1 + 0x1c08) = 0;
  *(undefined4 *)(param_1 + 0x1c0c) = 0x3f800000;
  *(longlong *)(param_1 + 0x10) = param_2;
  puVar5 = (undefined1 *)(param_1 + 0x28);
  do {
    *puVar5 = (char)lVar4;
    uVar2 = 6;
    if (DAT_14c762a20 == 0) {
      uVar2 = (char)lVar4;
    }
    puVar5[1] = uVar2;
    bVar1 = puVar5[2];
    puVar5[2] = bVar1 & 0xf1 | 6;
    puVar5[2] = bVar1 & 0xd1 | 6 | (DAT_14cb44120 <= lVar4) << 5;
    *(longlong *)(puVar5 + 0x20) = param_1;
    FUN_1402eb876(puVar5 + -8,*(undefined8 *)(param_2 + 0x30));
    lVar4 = lVar4 + 1;
    puVar5 = puVar5 + 0x30;
  } while (lVar4 != 7);
  lVar4 = FUN_14597b659(DAT_14c951640);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x1b30) = lVar4;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x34) = 0xffffffff00000080;
    if (*(undefined8 **)(param_1 + 0x1c10) != puVar3) {
      *(undefined8 **)(param_1 + 0x1c10) = puVar3;
      FUN_14584b538();
    }
  }
  FUN_140809607();
  return;
}



// FUNCTION 141431768 FUN_141431768 body=549 status=ok
// SIG undefined FUN_141431768(void)

undefined8 * FUN_141431768(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14ae2b6a0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  lVar2 = 0x2c;
  do {
    *(undefined2 *)((longlong)param_1 + lVar2 + -4) = 0;
    *(byte *)((longlong)param_1 + lVar2 + -2) = *(byte *)((longlong)param_1 + lVar2 + -2) & 0x80 | 8
    ;
    *(undefined1 *)((longlong)param_1 + lVar2 + -1) = 1;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0xc);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar2 + -0xc) = &PTR_FUN_14ae2f780;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0x17c);
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  lVar2 = 0x208;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x438);
  param_1[0x362] = 0;
  param_1[0x364] = 0x800000000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x366] = 0;
  *(undefined1 *)(param_1 + 0x367) = 0;
  param_1[0x36c] = 0;
  *(undefined4 *)(param_1 + 0x36d) = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b74) = 0;
  param_1[0x370] = 0;
  *(undefined4 *)(param_1 + 0x371) = 0;
  param_1[0x378] = 0;
  *(undefined4 *)(param_1 + 0x379) = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x374] = 0;
  param_1[0x375] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bd4) = 0;
  param_1[0x37c] = 0;
  *(undefined4 *)(param_1 + 0x37d) = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  *(undefined2 *)(param_1 + 0x380) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c02) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c04) = 0;
  *(undefined2 *)(param_1 + 0x381) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0c) = 0x3f800000;
  param_1[0x387] = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4c) = 0;
  param_1[0x38b] = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  param_1[0x38d] = 0;
  param_1[0x38e] = 0;
  uVar3 = FUN_14001cc68(0x60,0x10);
  FUN_1459c87da(uVar3,param_1);
  param_1[0x38f] = uVar3;
  param_1[0x390] = 0;
  return param_1;
}



// FUNCTION 14143198e FUN_14143198e body=524 status=ok
// SIG undefined FUN_14143198e(void)

void FUN_14143198e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
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
  if (DAT_14cb44490 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb44490,0,0,4);
  }
  uVar7 = DAT_14cb44498;
  uVar2 = local_50;
  if (DAT_14cb44498 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb44488,0,DAT_14cb44498,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cb44490;
        if (DAT_14cb44490 == (undefined *)0x0) {
          puVar5 = &DAT_14cb44488;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb44498 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb44460;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb44478 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb44450;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb44498 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cb44490;
        if (DAT_14cb44490 == (undefined *)0x0) {
          puVar5 = &DAT_14cb44488;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb44498 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb44490;
        if (DAT_14cb44490 == (undefined *)0x0) {
          puVar5 = &DAT_14cb44488;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb44498 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 141431b9c FUN_141431b9c body=71 status=ok
// SIG undefined FUN_141431b9c(void)

undefined8 * FUN_141431b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141431be4 FUN_141431be4 body=493 status=ok
// SIG undefined FUN_141431be4(void)

void FUN_141431be4(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0xa0;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x94 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x90 + lVar6) =
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



// FUNCTION 141431dd2 FUN_141431dd2 body=275 status=ok
// SIG undefined FUN_141431dd2(void)

void FUN_141431dd2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0xa0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141431eec FUN_141431eec body=776 status=ok
// SIG undefined FUN_141431eec(void)

void FUN_141431eec(longlong param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  uint *local_68;
  uint local_5c;
  undefined8 local_58;
  uint *local_50;
  uint **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar7 = *(int *)(param_1 + 0x2c8);
  uVar10 = *param_3;
  if ((longlong)iVar7 == -1) {
    if (((uVar10 != 0) && (param_3[1] != 0)) && (uVar10 != DAT_14c948000)) {
      puVar4 = &DAT_14c948028;
      goto LAB_141431f49;
    }
LAB_141432188:
    puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar10 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar10 == 0) || (uVar3 = param_3[1], uVar3 == 0)) || (uVar10 == DAT_14c948000))
    goto LAB_141432188;
    puVar5 = param_3 + 2;
    if (0 < (int)param_3[9]) {
      puVar5 = *(uint **)(param_3 + 6);
    }
    if (1 < (int)uVar3) {
      puVar5 = *(uint **)(param_3 + 6);
    }
    if (uVar3 == 1 && 0 < iVar7) {
      puVar6 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x2cc) == 1) {
        puVar6 = puVar5;
      }
      uVar10 = *puVar6;
      puVar4 = (ulonglong *)(puVar6 + 1);
    }
    else {
      if ((int)uVar3 <= iVar7) goto LAB_141432188;
      puVar4 = (ulonglong *)(puVar5 + (longlong)iVar7 * 3 + 1);
      uVar10 = puVar5[(longlong)iVar7 * 3];
    }
  }
LAB_141431f49:
  uVar2 = *puVar4;
  uVar11 = uVar2 >> 0x20;
  uVar3 = uVar10;
  if (uVar11 != 0) {
    uVar3 = FUN_144a78877(uVar10,uVar11);
  }
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    lVar8 = param_1 + 0x2b0;
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x2b8);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x2c0) - 1U & uVar3) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x278);
      do {
        lVar9 = (longlong)iVar7 * 0x20;
        if ((*(uint *)(lVar8 + lVar9) == uVar10) &&
           (lVar1 = lVar8 + lVar9, *(int *)(lVar1 + 8) == (int)(uVar2 >> 0x20))) {
          if ((lVar1 != 0) &&
             (((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 &&
              (local_68 = *(uint **)(lVar1 + 0x10), local_68 != (uint *)0x0)))) goto LAB_14143209c;
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x18 + lVar9);
      } while (iVar7 != -1);
    }
  }
  puVar5 = (uint *)FUN_14001cc68(0x70,0x10);
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined1 *)((longlong)puVar5 + 0x2a) = 0xff;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0xffffffff;
  puVar5[0x11] = 0xffffffff;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  *(undefined2 *)(puVar5 + 10) = *(undefined2 *)(param_1 + 0xb6);
  local_68 = puVar5;
  FUN_1447715ec(puVar5,param_3);
  iVar7 = *(int *)(param_1 + 0x2c8);
  local_5c = *puVar5;
  if ((longlong)iVar7 == -1) {
    if (((local_5c != 0) && (puVar5[1] != 0)) && (local_5c != DAT_14c948000)) {
      puVar5 = (uint *)&DAT_14c948028;
      goto LAB_14143206a;
    }
  }
  else if (((local_5c != 0) && (uVar10 = puVar5[1], uVar10 != 0)) && (local_5c != DAT_14c948000)) {
    puVar6 = puVar5 + 2;
    if (0 < (int)puVar5[9]) {
      puVar6 = *(uint **)(puVar5 + 6);
    }
    if (1 < (int)uVar10) {
      puVar6 = *(uint **)(puVar5 + 6);
    }
    if (uVar10 == 1 && 0 < iVar7) {
      puVar5 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x2cc) == 1) {
        puVar5 = puVar6;
      }
      local_5c = *puVar5;
      puVar5 = puVar5 + 1;
      goto LAB_14143206a;
    }
    if (iVar7 < (int)uVar10) {
      puVar5 = puVar6 + (longlong)iVar7 * 3 + 1;
      local_5c = puVar6[(longlong)iVar7 * 3];
      goto LAB_14143206a;
    }
  }
  puVar5 = (uint *)((longlong)&DAT_14c948618 + 4);
  local_5c = (uint)DAT_14c948618;
LAB_14143206a:
  local_58 = *(undefined8 *)puVar5;
  local_50 = &local_5c;
  local_48 = &local_68;
  FUN_14021fdc6((longlong *)(param_1 + 0x278),local_3c,&local_50,0);
LAB_14143209c:
  FUN_14022002e(param_1,local_68,param_2);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414321f6 FUN_1414321f6 body=310 status=ok
// SIG undefined FUN_1414321f6(void)

undefined4 * FUN_1414321f6(longlong param_1,undefined4 *param_2,char *param_3,char *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_a8 [32];
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  char local_60 [16];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60[0] = '\0';
  local_38[0] = 0;
  pcVar4 = param_4;
  if ((*(int *)(param_1 + 0x38) != 1) && (pcVar4 = param_3, *(int *)(param_1 + 0x38) == 2)) {
    FUN_1447c3578(param_1 + 0x40,local_88,param_4);
    lVar3 = FUN_14070d842(local_88);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar5 = local_88;
      if (0x18 < local_70) {
        ppppuVar5 = (undefined8 ****)local_88[0];
      }
      (*pcVar2)(ppppuVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    if (lVar3 == 0) {
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = 0;
      *(undefined1 *)(param_2 + 8) = 1;
      goto LAB_141432246;
    }
    FUN_1456bb102(local_60,lVar3);
    pcVar4 = local_60;
  }
  FUN_1447c3578(param_1,param_2,pcVar4);
LAB_141432246:
  FUN_1448173f8(local_38);
  if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14143232e FUN_14143232e body=2928 status=ok
// SIG undefined FUN_14143232e(void)

void FUN_14143232e(longlong ******param_1)

{
  longlong ****pppplVar1;
  int *piVar2;
  float fVar3;
  longlong *****ppppplVar4;
  longlong *****ppppplVar5;
  longlong ****pppplVar6;
  code *pcVar7;
  bool bVar8;
  longlong ***ppplVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong ******pppppplVar17;
  int iVar18;
  longlong lVar19;
  longlong *******ppppppplVar20;
  longlong ******pppppplVar21;
  undefined8 *******pppppppuVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  longlong *****local_110;
  undefined1 *local_108;
  code *local_100;
  undefined1 local_f1;
  undefined8 ******local_f0 [3];
  ushort local_d8;
  byte local_d0;
  longlong *****local_c8;
  longlong *****local_c0;
  longlong ***local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  int local_a0 [2];
  longlong ******local_98;
  int local_90;
  undefined4 uStack_8c;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14066e964();
  ppppplVar4 = param_1[9];
  if (((*(char *)(ppppplVar4 + 0x27) == '\0') && (*(char *)(ppppplVar4 + 0x2f) != '\x01')) ||
     (plVar14 = (longlong *)FUN_140343d7a(param_1), plVar14 == (longlong *)0x0)) goto LAB_141432385;
  if (DAT_14cb22240 == 0) {
    local_110 = (longlong *****)&local_c8;
    local_c8 = (longlong *****)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = &LAB_1464376fa;
    local_118 = &LAB_147f28935;
    local_120 = FUN_146437c39;
    local_128 = L"Engine";
    local_130 = 0;
    local_138 = 0x10004001;
    local_140 = 8;
    local_148 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
  }
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14,DAT_14cb22240);
  if (plVar14 == (longlong *)0x0) goto LAB_141432385;
  if (DAT_14cb22240 == 0) {
    local_110 = (longlong *****)&local_c8;
    local_c8 = (longlong *****)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = &LAB_1464376fa;
    local_118 = &LAB_147f28935;
    local_120 = FUN_146437c39;
    local_128 = L"Engine";
    local_130 = 0;
    local_138 = 0x10004001;
    local_140 = 8;
    local_148 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
  }
  plVar15 = (longlong *)FUN_144718840(plVar14,DAT_14cb22240);
  if ((plVar14 == plVar15) || (plVar15 == (longlong *)0x0)) goto LAB_141432385;
  plVar14 = (longlong *)(**(code **)(*plVar15 + 0x30))(plVar15);
  local_98 = (longlong ******)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  pppppplVar21 = local_98;
  local_90 = 3;
  FUN_14045cb56(param_1,&local_c8);
  ppppplVar5 = local_c0;
  if ((longlong ******)local_c0 == (longlong ******)0x0) {
    *pppppplVar21 = (longlong *****)&PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    pppppplVar17 = (longlong ******)(DAT_14c758608 + 1);
    lVar16 = DAT_14c758608 + 1;
    if (pppppplVar17 == (longlong ******)0x0) {
      LOCK();
      UNLOCK();
      pppppplVar17 = (longlong ******)(DAT_14c758608 + 2);
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    pppppplVar21[2] = (longlong *****)pppppplVar17;
    *pppppplVar21 = (longlong *****)&PTR_FUN_14ac8af00;
    pppppplVar21[3] = local_c8;
    pppppplVar21[4] = (longlong *****)0x0;
    pppppplVar21[5] = (longlong *****)FUN_1410a342e;
  }
  else {
    LOCK();
    *(int *)(local_c0 + 1) = *(int *)(local_c0 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_c0 + 1) = *(int *)(local_c0 + 1) + 1;
    UNLOCK();
    *pppppplVar21 = (longlong *****)&PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    pppppplVar17 = (longlong ******)(DAT_14c758608 + 1);
    lVar16 = DAT_14c758608 + 1;
    if (pppppplVar17 == (longlong ******)0x0) {
      LOCK();
      UNLOCK();
      pppppplVar17 = (longlong ******)(DAT_14c758608 + 2);
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    pppppplVar21[2] = (longlong *****)pppppplVar17;
    *pppppplVar21 = (longlong *****)&PTR_FUN_14ac8af00;
    pppppplVar21[3] = local_c8;
    pppppplVar21[4] = local_c0;
    LOCK();
    *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
    UNLOCK();
    pppppplVar21[5] = (longlong *****)FUN_1410a342e;
    LOCK();
    pppppplVar21 = (longlong ******)(local_c0 + 1);
    *(int *)pppppplVar21 = *(int *)pppppplVar21 + -1;
    UNLOCK();
    if (*(int *)pppppplVar21 == 0) {
      (*(code *)**local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar5)[2])(ppppplVar5);
      }
    }
    LOCK();
    pppppplVar21 = (longlong ******)(ppppplVar5 + 1);
    *(int *)pppppplVar21 = *(int *)pppppplVar21 + -1;
    UNLOCK();
    if (*(int *)pppppplVar21 == 0) {
      (*(code *)**ppppplVar5)(ppppplVar5);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar5)[2])(ppppplVar5);
      }
    }
  }
  ppppplVar5 = local_c0;
  if ((longlong ******)local_c0 != (longlong ******)0x0) {
    LOCK();
    pppppplVar21 = (longlong ******)(local_c0 + 1);
    *(int *)pppppplVar21 = *(int *)pppppplVar21 + -1;
    UNLOCK();
    if (*(int *)pppppplVar21 == 0) {
      (*(code *)**local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar5)[2])(ppppplVar5);
      }
    }
  }
  if (((local_90 == 0) || ((longlong *******)local_98 == (longlong *******)0x0)) ||
     (cVar10 = (*(code *)(*local_98)[6])(), cVar10 == '\0')) {
    if (local_90 == 0) {
      pppppplVar21 = (longlong ******)0x0;
      goto LAB_1414325fb;
    }
    if ((longlong *******)local_98 != (longlong *******)0x0) {
      pppppplVar21 = (longlong ******)0x0;
      (*(code *)**local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      goto LAB_1414325e8;
    }
    pppppplVar21 = (longlong ******)0x0;
  }
  else {
    if (*(int *)((longlong)plVar14 + 0x14) < 1) {
      iVar12 = (int)plVar14[1];
      iVar11 = (int)plVar14[2] + -1;
      *(int *)(plVar14 + 2) = iVar11;
      if (iVar11 <= iVar12) {
        iVar11 = iVar12;
        if (0 < iVar12) {
          iVar18 = 0;
          do {
            if (((*(int *)(*plVar14 + 8 + (longlong)iVar18 * 0x10) == 0) ||
                (plVar15 = *(longlong **)(*plVar14 + (longlong)iVar18 * 0x10),
                plVar15 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar15 + 0x28))(), cVar10 != '\0')) {
              FUN_14005b288(plVar14,iVar18);
              FUN_14005b248(plVar14);
            }
            else {
              iVar18 = iVar18 + 1;
            }
            iVar11 = (int)plVar14[1];
          } while (iVar18 < iVar11);
        }
        iVar18 = 2;
        if (2 < iVar11 * 2) {
          iVar18 = iVar11 * 2;
        }
        *(int *)(plVar14 + 2) = iVar18;
        if ((iVar18 < iVar12) && (*(int *)((longlong)plVar14 + 0xc) != iVar11)) {
          FUN_14045812c();
        }
      }
    }
    pppppplVar21 = (longlong ******)0x0;
    if ((local_90 != 0) && ((longlong *******)local_98 != (longlong *******)0x0)) {
      (*(code *)(*local_98)[7])(local_98,&local_c8);
      pppppplVar21 = (longlong ******)local_c8;
    }
    iVar12 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar12 + 1U) {
      FUN_1447a71f6(plVar14,iVar12);
    }
    lVar16 = *plVar14;
    lVar19 = (longlong)iVar12 * 0x10;
    *(undefined8 *)(lVar16 + lVar19) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar19) = 0;
    *(longlong *******)(lVar16 + lVar19) = local_98;
    local_98 = (longlong ******)0x0;
    *(int *)(lVar16 + 8 + lVar19) = local_90;
LAB_1414325e8:
    local_90 = 0;
LAB_1414325fb:
    if ((longlong *******)local_98 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0x1f] = (longlong *****)pppppplVar21;
  cVar10 = FUN_140b038fa(plVar14);
  *(char *)((longlong)param_1 + 0xf4) = cVar10;
  if (cVar10 == '\0') goto LAB_141432385;
  ppppplVar5 = param_1[8];
  if (ppppplVar5 == (longlong *****)0x0) {
    lVar16 = 0;
    local_c0 = (longlong *****)(longlong ******)0x0;
LAB_141432ac7:
    local_b8 = (longlong ***)0x0;
    bVar8 = true;
  }
  else {
    if (*(int *)((longlong)ppppplVar5 + 0x4c) == 0) {
LAB_141432a11:
      lVar16 = 0;
    }
    else {
      uVar13 = *(uint *)(ppppplVar5 + 9);
      lVar16 = 0;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)((longlong)ppppplVar5 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_141432a11;
        lVar16 = *plVar15;
      }
    }
    pppplVar6 = ppppplVar5[0x23];
    local_c0 = (longlong *****)param_1;
    if (pppplVar6 == (longlong ****)0x0) goto LAB_141432ac7;
    LOCK();
    *(int *)(pppplVar6 + 1) = *(int *)(pppplVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)pppplVar6 + 0xc) = *(int *)((longlong)pppplVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    pppplVar1 = pppplVar6 + 1;
    *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
    UNLOCK();
    if (*(int *)pppplVar1 == 0) {
      (*(code *)**pppplVar6)(pppplVar6);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar6)[2])(pppplVar6);
      }
    }
    LOCK();
    *(int *)((longlong)pppplVar6 + 0xc) = *(int *)((longlong)pppplVar6 + 0xc) + 1;
    UNLOCK();
    bVar8 = false;
    local_b8 = (longlong ***)pppplVar6;
  }
  ppplVar9 = local_b8;
  local_c8 = (longlong *****)CONCAT71(local_c8._1_7_,3);
  local_a0[0] = 0;
  local_b0._0_4_ = 0;
  if (lVar16 == 0) {
    iVar12 = 0;
    uVar13 = (uint)local_b0;
  }
  else {
    uVar13 = *(uint *)(lVar16 + 0xc);
    local_b0 = (ulonglong)uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar12 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar12 = *(int *)(lVar16 + 0x10);
      bVar23 = iVar12 == 0;
      if (bVar23) {
        *(int *)(lVar16 + 0x10) = iVar11;
        iVar12 = 0;
      }
      UNLOCK();
      uVar13 = (uint)local_b0;
      if (bVar23) {
        iVar12 = iVar11;
      }
    }
  }
  local_b0._0_4_ = uVar13;
  local_b0 = CONCAT44(iVar12,(uint)local_b0);
  local_a8 = 2;
  if (local_a0[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a0[0] + -1,1);
    local_a0[0] = 0;
  }
  if (!bVar8) {
    LOCK();
    piVar2 = (int *)((longlong)ppplVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*ppplVar9)[2])(ppplVar9);
    }
  }
  if (*(char *)(ppppplVar4 + 0x27) == '\x01') {
    fVar3 = *(float *)(plVar14 + 0x17);
    FUN_1447c3578(ppppplVar4 + 0x20,local_f0,&local_c8);
    if (local_d0 == 3) {
      uVar13 = 3;
      fVar24 = local_f0[0]._0_4_;
    }
    else {
      FUN_1400b56fe(&local_98,local_f0,3);
      fVar24 = 0.0;
      if (local_78 != 0) {
        fVar24 = local_98._0_4_;
      }
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar7 != (code *)0x0) {
        ppppppplVar20 = &local_98;
        if (0x18 < local_80) {
          ppppppplVar20 = (longlong *******)local_98;
        }
        (*pcVar7)(ppppppplVar20);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
      }
      uVar13 = (uint)local_d0;
    }
    *(float *)((longlong)param_1 + 0xec) = fVar3 + fVar24;
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar13 * 0x120));
    if (pcVar7 != (code *)0x0) {
      pppppppuVar22 = local_f0;
      if (0x18 < local_d8) {
        pppppppuVar22 = (undefined8 *******)local_f0[0];
      }
      (*pcVar7)(pppppppuVar22);
    }
    if (0x18 < local_d8) {
      FUN_1400020a8(local_f0[0]);
    }
  }
  if (*(char *)(ppppplVar4 + 0x2f) == '\x01') {
    fVar3 = *(float *)((longlong)plVar14 + 0xbc);
    FUN_1447c3578(ppppplVar4 + 0x28,&local_98,&local_c8);
    fVar24 = (float)FUN_144a7ecd0(&local_98);
    *(float *)(param_1 + 0x1e) = fVar24 + fVar3;
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppppplVar20 = &local_98;
      if (0x18 < local_80) {
        ppppppplVar20 = (longlong *******)local_98;
      }
      (*pcVar7)(ppppppplVar20);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98);
    }
  }
  FUN_1448173f8(local_a0);
  if (((char)local_c8 == '\x03') && ((longlong ****)local_b8 != (longlong ****)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_b8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_b8)[2])();
    }
  }
LAB_141432385:
  if ((*(char *)(ppppplVar4 + 0x1f) == '\x01') && (lVar16 = FUN_1405f939e(param_1), lVar16 != 0)) {
    param_1[0x1b] = DAT_14cb23e78;
    fVar3 = *(float *)(lVar16 + 0x930);
    local_f1 = 2;
    local_f0[0] = (undefined8 ******)FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_98);
    local_c8 = (longlong *****)((ulonglong)local_c8 & 0xffffffffffffff00);
    local_a0[0] = 0;
    FUN_144a7bf34(&local_c8,&local_98,local_f0,&local_f1);
    plVar14 = (longlong *)CONCAT44(uStack_8c,local_90);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    FUN_1447c3578(ppppplVar4 + 0x18,&local_98,&local_c8);
    fVar24 = (float)FUN_144a7ecd0(&local_98);
    *(float *)(param_1 + 0x1c) = fVar3 + fVar24;
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppppplVar20 = &local_98;
      if (0x18 < local_80) {
        ppppppplVar20 = (longlong *******)local_98;
      }
      (*pcVar7)(ppppppplVar20);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98);
    }
    FUN_144a5ac3a(&local_c8);
  }
  if (*(char *)(ppppplVar4 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141432ebc FUN_141432ebc body=1 status=ok
// SIG undefined FUN_141432ebc(void)

void FUN_141432ebc(void)

{
  return;
}



// FUNCTION 141432ebe FUN_141432ebe body=270 status=ok
// SIG undefined FUN_141432ebe(void)

undefined8 * FUN_141432ebe(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
LAB_141432f47:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    local_48 = (longlong *)0x0;
    plVar4 = (longlong *)FUN_1401e3228();
    if (plVar4 == (longlong *)0x0) goto LAB_141432f47;
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,&local_48,param_2);
      if (local_48 == (longlong *)0x0) {
LAB_141432f9e:
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        cVar3 = (**(code **)(*local_48 + 0x28))();
        if (cVar3 == '\0') goto LAB_141432f9e;
        (**(code **)(*local_48 + 0x30))(local_48,param_1);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_141432f55;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_141432f55:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141432fce FUN_141432fce body=471 status=ok
// SIG undefined FUN_141432fce(void)

void FUN_141432fce(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
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
  if (DAT_14c967188 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c967188,0,0,4);
  }
  uVar7 = DAT_14c967190;
  uVar2 = local_50;
  if (DAT_14c967190 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c967180,0,DAT_14c967190,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14c967188;
        if (DAT_14c967188 == (undefined *)0x0) {
          puVar4 = &DAT_14c967180;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14c967190 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c967158;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c967170 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c967148;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = DAT_14c967190 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0x1c + lVar5) = uVar7;
        puVar4 = DAT_14c967188;
        if (DAT_14c967188 == (undefined *)0x0) {
          puVar4 = &DAT_14c967180;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14c967190 - 1 & uVar7) * 4);
        puVar4 = DAT_14c967188;
        if (DAT_14c967188 == (undefined *)0x0) {
          puVar4 = &DAT_14c967180;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14c967190 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 1414331a6 FUN_1414331a6 body=128 status=ok
// SIG undefined FUN_1414331a6(void)

void FUN_1414331a6(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4049a0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  FUN_140a6acaa(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141433228 FUN_141433228 body=7 status=ok
// SIG undefined FUN_141433228(void)

void FUN_141433228(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x668) = param_2;
  return;
}



// FUNCTION 141433230 FUN_141433230 body=516 status=ok
// SIG undefined FUN_141433230(void)

void FUN_141433230(longlong *param_1,int param_2)

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
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
          if (iVar2 - lVar11 == lVar8) goto LAB_141433350;
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
LAB_141433350:
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



// FUNCTION 141433436 FUN_141433436 body=251 status=ok
// SIG undefined FUN_141433436(void)

ulonglong FUN_141433436(longlong param_1,ushort param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  
  uVar8 = 1 << ((byte)param_2 & 0x1f);
  lVar5 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar5 = param_3;
  }
  uVar13 = (ulonglong)(param_2 >> 5);
  uVar3 = *(uint *)(lVar5 + uVar13 * 4);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((uVar3 >> (param_2 & 0x1f) & 1) == 0) {
    *(uint *)(lVar5 + uVar13 * 4) = uVar3 | uVar8;
    uVar3 = *(uint *)(param_1 + 0x28);
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar9 = 0;
    uVar11 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar11 >> 1) + uVar9;
        if (*(ushort *)(lVar5 + (ulonglong)uVar1 * 4) < param_2) {
          uVar9 = uVar1 + (uVar11 & 1);
        }
        bVar14 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar14);
    }
    uVar6 = (ulonglong)(uVar3 - uVar9);
    if (uVar3 - uVar9 != 0 && (int)uVar9 <= (int)uVar3) {
      uVar10 = 0;
      do {
        if (*(ushort *)(lVar5 + (ulonglong)uVar9 * 4 + uVar10 * 4) != param_2) {
          uVar6 = uVar10 & 0xffffffff;
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
      if ((int)uVar6 != 0) {
        lVar12 = 0;
        do {
          cVar4 = FUN_141433436(param_1,*(undefined2 *)(lVar5 + (ulonglong)uVar9 * 4 + 2 + lVar12),
                                param_3);
          if (cVar4 != '\0') goto LAB_1414334e3;
          lVar12 = lVar12 + 4;
        } while (uVar6 << 2 != lVar12);
      }
    }
    lVar5 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar5 = param_3;
    }
    puVar2 = (uint *)(lVar5 + uVar13 * 4);
    *puVar2 = *puVar2 & ~uVar8;
    uVar7 = 0;
  }
LAB_1414334e3:
  return uVar7 & 0xffffffff;
}



// FUNCTION 141433531 FUN_141433531 body=438 status=ok
// SIG undefined FUN_141433531(void)

void FUN_141433531(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  iVar2 = *(int *)(param_2 + 0x18);
  iVar16 = *(int *)(param_1 + 0x18);
  iVar15 = iVar16;
  if (iVar16 < iVar2) {
    iVar15 = iVar2;
  }
  iVar7 = iVar15 - iVar2;
  if (iVar7 < 0) {
    *(int *)(param_2 + 0x18) = iVar15;
    iVar2 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar2 = iVar15;
    }
    if (iVar15 % 0x20 == 0) goto LAB_14143356b;
    lVar4 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar4 = param_2;
    }
    bVar5 = -(char)(iVar15 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  else if (iVar2 < iVar16) {
    uVar3 = FUN_144a54ea4(param_2,iVar7);
    FUN_1447c6044(param_2,uVar3,iVar7,0);
  }
  iVar15 = *(int *)(param_2 + 0x18);
LAB_14143356b:
  if (iVar15 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    uVar6 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar6 = 0xffffffff;
    }
    lVar11 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar11 = param_2;
    }
    uVar1 = 0xffffffff >> (-(char)(iVar15 % 0x20) & 0x1fU);
    if (iVar15 % 0x20 < 1) {
      uVar1 = 0xffffffff;
    }
    if (0 < iVar15) {
      uVar12 = iVar15 + 0x1fU >> 5;
      iVar16 = iVar2 + 0x3e;
      if (-1 < iVar2 + 0x1f) {
        iVar16 = iVar2 + 0x1f;
      }
      uVar10 = 0;
      uVar8 = -(uint)(uVar12 - 1 != 0) | uVar1;
      uVar14 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar14 = uVar6;
      }
      do {
        uVar13 = 0;
        if ((longlong)uVar10 < (longlong)(iVar16 >> 5)) {
          uVar13 = uVar14 & *(uint *)(lVar4 + uVar10 * 4);
        }
        uVar9 = uVar8 & *(uint *)(lVar11 + uVar10 * 4);
        uVar14 = 0xffffffff;
        if (uVar12 - 1 == uVar10) {
          uVar14 = uVar1;
        }
        uVar8 = 0xffffffff;
        if (uVar12 - 2 == uVar10) {
          uVar8 = uVar1;
        }
        *(uint *)(lVar11 + uVar10 * 4) = uVar14 & (uVar9 | uVar13);
        bVar17 = (iVar16 >> 5) - 2 == uVar10;
        uVar10 = uVar10 + 1;
        uVar14 = 0xffffffff;
        if (bVar17) {
          uVar14 = uVar6;
        }
      } while (uVar12 != uVar10);
    }
  }
  return;
}



// FUNCTION 1414336e8 FUN_1414336e8 body=239 status=ok
// SIG undefined FUN_1414336e8(void)

void FUN_1414336e8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b1744d0;
  plVar2 = (longlong *)param_1[0x47];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x31);
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145df0ed2(param_1);
  return;
}



// FUNCTION 1414337d8 FUN_1414337d8 body=138 status=ok
// SIG undefined FUN_1414337d8(void)

void FUN_1414337d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b93a370;
  FUN_145821321(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141433862 FUN_141433862 body=113 status=ok
// SIG undefined FUN_141433862(void)

void FUN_141433862(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_14aff06f0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 1414338d4 FUN_1414338d4 body=135 status=ok
// SIG undefined FUN_1414338d4(void)

void FUN_1414338d4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar4 = FUN_1401ca7f2(*(undefined8 *)(lVar3 + lVar5));
      if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x3c) != 0)) &&
          (uVar2 = *(uint *)(lVar4 + 0x38), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(lVar4 + 0x3c))) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
          FUN_144000cde(lVar4,0);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14143395c FUN_14143395c body=65 status=ok
// SIG undefined FUN_14143395c(void)

void FUN_14143395c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141356c7a(param_1 + 0x30);
  if ((param_3 != 0) && (lVar1 == param_2)) {
    FUN_141318398(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14143399e thunk_FUN_1404db908 body=5 status=ok
// SIG undefined thunk_FUN_1404db908(void)

void thunk_FUN_1404db908(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a488de0;
  plVar3 = (longlong *)param_1[0x1d];
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
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1414339a4 FUN_1414339a4 body=228 status=ok
// SIG undefined FUN_1414339a4(void)

longlong FUN_1414339a4(void)

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
  if (DAT_14cb685b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_1487449b4;
    local_40 = &LAB_140e164b0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x608;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Ragdoll",&DAT_14cb685b0,FUN_14651b4ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb685b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141433a8a FUN_141433a8a body=228 status=ok
// SIG undefined FUN_141433a8a(void)

longlong FUN_141433a8a(void)

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
  if (DAT_14cb55b40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b09c6;
    local_38 = &LAB_148629d33;
    local_40 = &LAB_1458800bd;
    local_48 = L"Camera";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GbxGame",L"CameraModifier_GbxCameraShake",&DAT_14cb55b40,&DAT_148629d32)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141433b6f FUN_141433b6f body=2255 status=ok
// SIG undefined FUN_141433b6f(void)

longlong FUN_141433b6f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_348 [32];
  wchar_t *local_328;
  undefined4 local_320;
  undefined8 local_318;
  wchar_t *local_310;
  wchar_t *local_308;
  code *local_300;
  undefined1 *local_2f8;
  code **local_2f0;
  code *local_2e8;
  code *local_2e0;
  longlong local_2d0;
  longlong local_2c8;
  undefined1 local_2bc [4];
  undefined1 local_2b8 [16];
  code *local_2a8 [2];
  longlong *local_298;
  undefined8 uStack_290;
  code *local_288 [2];
  longlong local_278;
  ulonglong uStack_270;
  code *local_268;
  code *local_260;
  code *local_258;
  uint local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (DAT_14c949118 == 0) {
    local_2a8[0] = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar5 = FUN_140011aa6();
      lVar4 = FUN_140011c0e(uVar5,0x250,8);
    }
    else {
      lVar4 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar4;
    FUN_1446f470e(&local_298,L"Class",1);
    local_2f0 = local_2a8;
    local_2f8 = &LAB_146891e90;
    local_300 = (code *)&LAB_146273097;
    local_310 = L"Engine";
    local_308 = (wchar_t *)CONCAT44(local_308._4_4_,199);
    local_318 = 0x20;
    local_320 = 0x10000000;
    local_328._0_4_ = 8;
    FUN_14574b4b2(lVar4);
    DAT_14c949118 = lVar4;
    if (DAT_14c951858 == 0) {
      local_2f0 = &local_268;
      local_268 = FUN_1449e2820;
      local_2e0 = FUN_14081d0ea;
      local_2e8 = FUN_14081d0ea;
      local_2f8 = &LAB_1468c5283;
      local_300 = FUN_142809da0;
      local_308 = L"Engine";
      local_310 = (wchar_t *)0x400000000;
      local_318 = CONCAT44(local_318._4_4_,0x10000000);
      local_320 = 8;
      local_328._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = DAT_14c951858;
    lVar4 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_288[0] = (code *)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar5 = FUN_140011aa6();
        DAT_14c948f88 = FUN_140011c0e(uVar5,0x250,8);
      }
      else {
        DAT_14c948f88 = FUN_14001cc68(0x250,8);
      }
      local_2d0 = DAT_14c948f88;
      FUN_1446f470e(&local_278,L"Struct",1);
      local_2f0 = local_288;
      local_2f8 = &LAB_146891313;
      local_300 = FUN_146272f63;
      local_310 = L"Engine";
      local_308 = (wchar_t *)CONCAT44(local_308._4_4_,199);
      local_318 = 8;
      local_320 = 0x10000020;
      local_328._0_4_ = 8;
      FUN_14574b4b2(local_2d0);
      DAT_14c948f88 = local_2d0;
      local_2c8 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        local_2f0 = &local_268;
        local_268 = FUN_1449e2820;
        local_2e0 = FUN_14081d0ea;
        local_2e8 = FUN_14081d0ea;
        local_2f8 = &LAB_146856450;
        local_300 = FUN_1427b121c;
        local_308 = L"Engine";
        local_310 = (wchar_t *)0x0;
        local_318 = CONCAT44(local_318._4_4_,0x10000021);
        local_320 = 8;
        local_328._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_2d0 = DAT_14c948f88;
      }
      DAT_14c948f88 = local_2d0;
      local_2c8 = DAT_14c927740;
      uVar5 = FUN_1400163b0();
      local_328 = L"Struct";
      FUN_14574b446(uVar5,local_2d0,local_2c8,L"/Script/CoreUObject");
    }
    local_328 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar4,lVar2,L"/Script/CoreUObject");
  }
  local_328 = (wchar_t *)CONCAT44(local_328._4_4_,param_5);
  local_310 = (wchar_t *)0x0;
  local_318 = CONCAT71(local_318._1_7_,1);
  lVar4 = FUN_1412ecd05(DAT_14c949118,param_2,param_3);
  if (lVar4 != 0) {
    if (((param_1 != 0) && (*(int *)(param_1 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8) ==
        param_1 + 0x30)) goto LAB_141434023;
    local_278 = 0;
    uStack_270 = 0;
    local_298 = (longlong *)0x0;
    uStack_290 = 0;
    FUN_14005eb28(&local_298,0x80);
    local_268 = (code *)local_248;
    local_250 = local_250 & 0xffffff00;
    local_258 = (code *)&local_48;
    local_288[0] = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x18);
    local_260 = local_268;
    FUN_14005eb5c(local_288,&local_268);
    if (local_258 <= local_260 + 2) {
      FUN_140213274(&local_268,1);
    }
    *(undefined2 *)local_260 = 0x20;
    local_260 = local_260 + 2;
    FUN_144750bde(lVar4,0,&local_268);
    FUN_1400020e8(&local_298,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
    if ((char)local_250 == '\x01') {
      FUN_1400020a8(local_268);
    }
    FUN_140233b1a(local_288,&local_298);
    local_268 = (code *)CONCAT44(local_268._4_4_,4);
    FUN_14023423e(&local_258,local_288);
    FUN_140056680(local_2a8,L"ClassName");
    FUN_140233eec(&local_278,local_2a8,&local_268);
    if (local_2a8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_258 != (code *)0x0) {
      (**(code **)(*(ulonglong *)local_258 + 0x10))();
      local_258 = (code *)0x0;
      local_250 = 0;
    }
    if (local_288[0] != (code *)0x0) {
      (**(code **)(*(longlong *)local_288[0] + 0x10))();
    }
    if (local_298 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_144750a86(param_1,&local_298,0,0);
    FUN_140233b1a(local_288,&local_298);
    local_268 = (code *)CONCAT44(local_268._4_4_,4);
    FUN_14023423e(&local_258,local_288);
    FUN_140056680(local_2a8,L"BaseClassName");
    FUN_140233eec(&local_278,local_2a8,&local_268);
    if (local_2a8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_258 != (code *)0x0) {
      (**(code **)(*(ulonglong *)local_258 + 0x10))();
      local_258 = (code *)0x0;
      local_250 = 0;
    }
    if (local_288[0] != (code *)0x0) {
      (**(code **)(*(longlong *)local_288[0] + 0x10))();
    }
    if (local_298 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_268 = (code *)0x149eaf27a;
    local_260._0_4_ = 0x11;
    FUN_1446e940c(local_2a8,&local_268);
    local_268 = (code *)0x149e25d02;
    local_260._0_4_ = 4;
    FUN_1446e940c(local_2bc,&local_268);
    local_268 = (code *)0x149eaf212;
    local_260 = (code *)CONCAT44(local_260._4_4_,0x33);
    FUN_140208c1e(&local_298,local_2bc,local_2a8,&local_268);
    FUN_14023409e(local_2b8,&local_298,1);
    FUN_140233c04(local_288,local_2b8,&local_278);
    pcVar3 = local_288[0];
    pcVar6 = local_288[0];
    if (*(code **)(*(longlong *)local_288[0] + 0x50) != FUN_144828418) {
      pcVar6 = (code *)(**(code **)(*(longlong *)local_288[0] + 0x50))(local_288[0]);
    }
    FUN_1447a1fc0(pcVar6);
    pcVar6 = *(code **)(*(longlong *)pcVar3 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      pcVar6 = (code *)(*(longlong *)(pcVar3 + 0x28) + 8);
      if (*(longlong *)(pcVar3 + 0x28) == 0) {
        pcVar6 = pcVar3 + 0x18;
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      pcVar6 = pcVar3 + 0x10;
    }
    else {
      pcVar6 = (code *)(*pcVar6)(pcVar3);
    }
    local_268 = (code *)0x0;
    uVar1 = *(uint *)(pcVar6 + 8);
    _Src = *(void **)pcVar6;
    local_260 = (code *)CONCAT44(local_260._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_260 = (code *)(ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_268,uVar1,0);
      memcpy(local_268,_Src,(longlong)(int)uVar1 * 2);
    }
    if (pcVar3 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar3 + 0x10))(pcVar3);
    }
    if (local_298 != (longlong *)0x0) {
      (**(code **)(*local_298 + 0x10))();
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"TREATLOADWARNINGSASERRORS");
    if (local_268 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_14010f8af(local_278,uStack_270 & 0xffffffff);
    if (local_278 != 0) {
      FUN_1400020a8();
    }
  }
  lVar4 = 0;
LAB_141434023:
  if ((local_48 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 141434440 FUN_141434440 body=228 status=ok
// SIG undefined FUN_141434440(void)

longlong FUN_141434440(void)

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
  if (DAT_14cacf1d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b09c6;
    local_38 = &LAB_1479904a7;
    local_40 = &LAB_1459ff03b;
    local_48 = L"Camera";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"CameraModifier_CameraShake",&DAT_14cacf1d8,&DAT_1479904a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf1d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141434525 FUN_141434525 body=226 status=ok
// SIG undefined FUN_141434525(void)

undefined4 FUN_141434525(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58 [3];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (ulonglong)(param_1 & 0xffff) * 0x3c;
  uVar1 = 0;
  if ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 7) & 0x18) != 0) {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = *(longlong *)(&DAT_14ca814bc + lVar2);
    FUN_1400021e4(local_58 + 2,&local_40);
    if (1 < local_38) {
      local_68 = &DAT_14c872ce8;
      FUN_1449da20c(DAT_14c872ce0,local_40,param_2,local_58);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_1459490b7(param_1,local_58,param_3);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141434608 FUN_141434608 body=130 status=ok
// SIG undefined FUN_141434608(void)

void FUN_141434608(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_14143468a();
  if ((((*(byte *)(param_1 + 0x311) & 1) == 0) && ((*(byte *)(param_1 + 0x2eb) & 8) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 200), lVar1 != 0)) {
    uVar3 = FUN_1409d6582();
    plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xfe | iVar2 - 1U < 2;
    }
  }
  *(byte *)(param_1 + 0x980) = *(byte *)(param_2 + 0xe0) >> 6 & 1;
  return;
}



// FUNCTION 14143468a FUN_14143468a body=2164 status=ok
// SIG undefined FUN_14143468a(void)

void FUN_14143468a(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_70;
  undefined7 uStack_6f;
  int local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar4 = *(char *)(param_1 + 0x2e9) + 1;
  bVar9 = 1;
  if (1 < bVar4) {
    bVar9 = bVar4;
  }
  *(byte *)(param_1 + 0x2e9) = bVar9;
  lVar5 = FUN_1412af7d2(param_2 + 8);
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xde | 0x20;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0x2e9);
  *(undefined4 *)(param_1 + 0x24c) = 0;
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar11 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar9 = DAT_14c950c29;
  *(longlong *)(param_1 + 200) = lVar11;
  lVar11 = *(longlong *)(param_2 + 0x28);
  if ((bVar9 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x28);
      bVar9 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xd0) = lVar11;
  puVar12 = (undefined8 *)(param_2 + 0x30);
  puVar13 = (undefined8 *)(param_1 + 0xd8);
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x78);
  lVar11 = *(longlong *)(param_2 + 0x80);
  if ((bVar9 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x80);
      bVar9 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x128) = lVar11;
  lVar11 = *(longlong *)(param_2 + 0x88);
  if ((bVar9 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x88);
      bVar9 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x130) = lVar11;
  puVar12 = (undefined8 *)(param_2 + 0x90);
  puVar13 = (undefined8 *)(param_1 + 0x138);
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0xd8);
  if ((bVar9 & 1) == 0) {
LAB_1414347e8:
    lVar11 = *(longlong *)(param_2 + 0xe8);
  }
  else {
    if (*(longlong *)(param_2 + 0xe8) != 0) {
      FUN_1456cec3c();
      goto LAB_1414347e8;
    }
    lVar11 = 0;
  }
  *(longlong *)(param_1 + 0x188) = lVar11;
  *(undefined2 *)(param_1 + 0x19c) = *(undefined2 *)(param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0x19e) = *(undefined2 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1d4);
  if ((lVar11 != 0 & *(byte *)(lVar5 + 0x58)) == 1) {
    uVar14 = *(undefined4 *)(lVar11 + 0x74);
  }
  else {
    uVar14 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x248) = uVar14;
  local_70 = '\0';
  local_48[0] = 0;
  uVar14 = FUN_140a8b8c6(param_2 + 0x168,&local_70);
  *(undefined4 *)(param_1 + 0x244) = uVar14;
  FUN_1448173f8(local_48);
  if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x164);
  lVar11 = *(longlong *)(param_2 + 0x158);
  if (DAT_14c950c29 == 1) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x158);
    }
  }
  *(longlong *)(param_1 + 0x238) = lVar11;
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x160);
  if ((*(longlong *)(param_1 + 0x1c0) != *(longlong *)(param_2 + 0x100)) ||
     (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x108))) {
    *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if (param_1 + 0x1d8 != param_2 + 0x118) {
    lVar11 = param_2 + 0x118;
    if (*(longlong *)(param_2 + 0x148) != 0) {
      lVar11 = *(longlong *)(param_2 + 0x148);
    }
    FUN_1400709d4(param_1 + 0x1d8,lVar11,*(undefined4 *)(param_2 + 0x150),
                  *(undefined4 *)(param_1 + 0x214));
  }
  bVar9 = DAT_14c950c29;
  if (DAT_14c950c29 == 1) {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FUN_1456cec3c();
      goto LAB_1414349bb;
    }
    *(undefined8 *)(param_1 + 400) = 0;
  }
  else {
LAB_1414349bb:
    lVar11 = *(longlong *)(param_2 + 0xf0);
    *(longlong *)(param_1 + 400) = lVar11;
    bVar9 = DAT_14c950c29;
    if (lVar11 != 0) goto LAB_141434a1c;
  }
  lVar11 = *(longlong *)(param_1 + 0x188);
  if (lVar11 == 0 || (~bVar9 & 1) != 0) {
    *(longlong *)(param_1 + 400) = lVar11;
    if (lVar11 != 0) goto LAB_141434a1c;
    lVar11 = *(longlong *)(param_2 + 0x20);
    if ((bVar9 & 1) != 0) {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c(lVar11);
        lVar11 = *(longlong *)(param_2 + 0x20);
      }
    }
  }
  else {
    FUN_1456cec3c(lVar11);
  }
  *(longlong *)(param_1 + 400) = lVar11;
LAB_141434a1c:
  if ((((*(byte *)(param_2 + 0xe0) & 2) == 0) && (*(char *)(lVar5 + 0x1da) == '\x01')) &&
     (*(longlong *)(param_1 + 0x128) != 0)) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 2;
  }
  *(undefined2 *)(param_1 + 0x2ea) = *(undefined2 *)(param_1 + 0x19c);
  *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0x7f;
  lVar11 = FUN_14082ce84(lVar5 + 0x178);
  if (lVar11 != 0) {
    if (((*(float *)(param_1 + 0x1b8) == 0.0) && (!NAN(*(float *)(param_1 + 0x1b8)))) &&
       (cVar2 = *(char *)(lVar11 + 0xa9),
       *(byte *)(param_1 + 0x310) = *(byte *)(param_1 + 0x310) & 0x7f | cVar2 << 7, cVar2 == '\0'))
    {
      uVar14 = FUN_14074d5ce(lVar11,*(undefined8 *)(param_1 + 400),0);
      *(undefined4 *)(param_1 + 0x1b8) = uVar14;
    }
    if ((*(float *)(param_1 + 0x244) == 0.0) && (!NAN(*(float *)(param_1 + 0x244)))) {
      uVar14 = FUN_140a8b812(lVar11,*(undefined8 *)(param_1 + 400),0);
      *(undefined4 *)(param_1 + 0x244) = uVar14;
    }
  }
  lVar11 = param_1 + 0x958;
  iVar10 = *(int *)(param_1 + 0x964);
  FUN_1403e0ff1(*(undefined8 *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0x960));
  *(undefined4 *)(param_1 + 0x960) = 0;
  if ((iVar10 < 0) && (*(int *)(param_1 + 0x964) != 0)) {
    FUN_1407a322c(lVar11,0);
  }
  FUN_1408da3b0(lVar11,param_2 + 0x1f8);
  if (((*(byte *)(param_2 + 0xe0) & 0x10) == 0) &&
     (lVar3 = *(longlong *)(param_1 + 400), lVar3 != 0)) {
    uVar6 = FUN_141419b90();
    plVar7 = (longlong *)FUN_144718840(lVar3,uVar6);
    if (plVar7 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x28))(plVar7,lVar11);
    }
  }
  uVar6 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x2c8) + 0x20))(param_1 + 0x2c8,0);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1e0);
  FUN_1406022fe(param_1 + 0x2d8,param_2 + 0x1e8);
  local_90 = *(undefined8 *)(param_1 + 0x1c0);
  FUN_1446dcdd4(&local_70);
  if (DAT_14cb77da0 != 0) {
    uVar6 = FUN_144837462(DAT_14cb77da0,&local_70);
  }
  *(undefined8 *)(param_1 + 0x280) = uVar6;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_2 + 0x1b8) - 1U < 0xfffffffe && *(longlong *)(param_2 + 0x1b0) != 0) {
    lVar11 = *(longlong *)(param_2 + 0x1b0);
    iVar10 = 0x4fc71eb4;
    if (*(int *)(param_2 + 0x1b8) == 0x3d418293) {
      local_90 = 0;
      local_88 = *(undefined4 *)(param_1 + 0x230);
      local_78 = *(undefined8 *)(param_1 + 0x1c0);
      FUN_1446dcdd4(&local_70);
      if (DAT_14cb77da0 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = FUN_144837462(DAT_14cb77da0,&local_70);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_141125464(param_2 + 0x1b0,&local_70,&local_90);
      lVar3 = CONCAT71(uStack_6f,local_70);
      lVar11 = 0;
      if (local_68 != 0x4fc71eb4) {
        lVar11 = lVar3;
      }
      iVar10 = local_68;
      if (lVar3 != 0) {
        lVar11 = lVar3;
      }
    }
    if (((lVar11 != 0) && (iVar10 - 1U < 0xfffffffe)) &&
       ((*(longlong *)(param_1 + 0x218) != lVar11 || (*(int *)(param_1 + 0x220) != iVar10)))) {
      *(longlong *)(param_1 + 0x218) = lVar11;
      *(int *)(param_1 + 0x220) = iVar10;
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
  }
  if ((*(char *)(lVar5 + 0x1d8) == '\x01') &&
     (plVar7 = *(longlong **)(param_2 + 0xe8), plVar7 != (longlong *)0x0)) {
    uVar6 = FUN_1403ec9c0();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_1403ec9c0();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
        uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x28))(param_1 + 0x28,uVar6);
      }
    }
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar7 + 0x3fc) = *(int *)((longlong)plVar7 + 0x3fc) + 1;
  (**(code **)(*plVar7 + 0x578))();
  fVar15 = *(float *)(param_2 + 0xfc);
  if (fVar15 <= 0.0) {
    fVar15 = *(float *)(lVar5 + 0x170);
  }
  *(float *)(param_1 + 0x90) = fVar15;
  *(undefined8 *)(param_1 + 0x2ec) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_2 + 0x210) != 0) {
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(*(longlong *)(param_2 + 0x210) + 0x60);
    FUN_1488dfed2(param_1,*(undefined8 *)(param_2 + 0x210));
  }
  FUN_143dbfd4a(param_1);
  FUN_14136d37e(param_1);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141434f00 FUN_141434f00 body=40 status=ok
// SIG undefined FUN_141434f00(void)

undefined1 * FUN_141434f00(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_144976b9c();
  return param_1;
}



// FUNCTION 141434f28 FUN_141434f28 body=503 status=ok
// SIG undefined FUN_141434f28(void)

void FUN_141434f28(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') goto LAB_141435020;
  if ((((*(int *)(param_1 + 0x44) == 0) || (uVar3 = *(uint *)(param_1 + 0x40), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((puVar8 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x44))) ||
      ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) {
    local_38 = (undefined8 *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar8;
    }
    else {
      uVar7 = 0;
    }
    FUN_14594f430(uVar7,&local_38,*(longlong *)(param_1 + 0x30) + 0x10);
  }
  plVar1 = plStack_30;
  if ((undefined8 **)(param_1 + 0x50) != &local_38) {
    *(undefined8 **)(param_1 + 0x50) = local_38;
    local_38 = (undefined8 *)0x0;
    plVar4 = *(longlong **)(param_1 + 0x58);
    if (plStack_30 != plVar4) {
      plStack_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x58) = plVar1;
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
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x50);
  if (puVar8 == (undefined8 *)0x0) goto LAB_141435020;
  local_48 = &LAB_140df5b98;
  local_40 = 0;
  FUN_14655f83a(&local_38,param_1);
  FUN_1458c0db6(puVar8,&local_48,*(longlong *)(param_1 + 0x30) + 0x20,&local_38);
  if ((int)plStack_30 == 0) {
LAB_1414350b4:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
    goto LAB_1414350b4;
  }
  lVar6 = FUN_140df5408(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x30) + 0x20);
  if (lVar6 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(lVar6 + 0x94);
  }
  FUN_1402a7054(param_1,cVar5 == *(char *)(param_1 + 0x48));
LAB_141435020:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141435120 FUN_141435120 body=370 status=ok
// SIG undefined FUN_141435120(void)

void FUN_141435120(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
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
  plVar2 = (longlong *)FUN_1408d71e4(param_1 + -0x30);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  FUN_1459b304e(lVar1);
  FUN_1442437a6(lVar1);
  FUN_14424381e(lVar1);
  FUN_140d078aa(lVar1);
  FUN_1418f3dcc(lVar1);
  lVar3 = FUN_1400d7050(param_1);
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1414351bf;
  }
  lVar3 = 0;
LAB_1414351bf:
  FUN_144243612(lVar1,lVar3);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001414351e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141435294 FUN_141435294 body=75 status=ok
// SIG undefined FUN_141435294(void)

void FUN_141435294(longlong param_1)

{
  FUN_1409ed859(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414352e0 thunk_FUN_1402ef4ac body=5 status=ok
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



// FUNCTION 1414352e6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414352ec FUN_1414352ec body=389 status=ok
// SIG undefined FUN_1414352ec(void)

void FUN_1414352ec(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14ab67590;
  param_1[3] = &PTR_FUN_14ab675b0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x36);
  EnterCriticalSection(lpCriticalSection);
  if (0 < *(int *)(param_1 + 0xe)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0xd] + lVar3 * 8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      if ((-1 < (longlong)*(int *)(lVar1 + 0x1c)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c) << 3);
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0x80000000;
      puVar2 = *(undefined8 **)(param_1[0xd] + lVar3 * 8);
      *(int *)((longlong)param_1 + 0x184) = *(int *)((longlong)param_1 + 0x184) + -1;
      *puVar2 = param_1[0x2f];
      param_1[0x2f] = puVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xe));
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  LeaveCriticalSection(lpCriticalSection);
  FUN_144b49690(param_1 + 0x41);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b));
  DeleteCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],(longlong)*(int *)((longlong)param_1 + 0x74) << 3
              );
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((param_1[8] != 0) && (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],(ulonglong)*(uint *)((longlong)param_1 + 0x4c) << 4
              );
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_1449db362(param_1 + 5);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 141435472 FUN_141435472 body=42 status=ok
// SIG undefined FUN_141435472(void)

void FUN_141435472(undefined8 *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_14afcb7e0;
  *(undefined2 *)(param_1 + 2) = 0;
  iVar1 = DAT_14c7632f0 + 1;
  *(int *)((longlong)param_1 + 0x14) = DAT_14c7632f0;
  DAT_14c7632f0 = iVar1;
  return;
}



// FUNCTION 14143549c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414354a2 FUN_1414354a2 body=31 status=ok
// SIG undefined FUN_1414354a2(void)

undefined8 FUN_1414354a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1414354c2 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414354c8 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414354ce FUN_1414354ce body=307 status=ok
// SIG undefined FUN_1414354ce(void)

longlong FUN_1414354ce(longlong param_1)

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
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) goto LAB_14143553a;
  }
  lVar1 = 0;
LAB_14143553a:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141435602 FUN_141435602 body=2432 status=ok
// SIG undefined FUN_141435602(void)

void FUN_141435602(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_130 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_1f8 = FUN_1446ddbd2();
      local_1f0 = FUN_1468d96f0;
      local_200 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_130);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_130);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_130 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_130);
    }
  }
  local_138 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_1f8 = FUN_1446ddbd2();
      local_1f0 = FUN_1468d96f0;
      local_200 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_138);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_138);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_138 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_138);
    }
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1f8 = FUN_1446ddbd2();
      local_1f0 = FUN_1403a682c;
      local_200 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a8[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,local_a8);
    }
  }
  local_168 = local_168 & 0xffffff00;
  uStack_164 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  lStack_140 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1f8 = FUN_1446ddbd2();
      local_1f0 = FUN_1403a682c;
      local_200 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_168);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_168);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_168 = (uint)uVar3;
      uStack_164 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_168);
    }
  }
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_1f8 = FUN_1446ddbd2();
      local_1f0 = FUN_141710108;
      local_200 = (undefined8 *)0x1000000000000000;
      local_208 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_188);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_188);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_188 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_188);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_188;
  uVar3 = FUN_14477b664(uStack_180);
  local_1b0 = FUN_14477b664(uVar3);
  local_1a8 = local_178;
  local_1e8 = CONCAT44(uStack_164,local_168);
  local_1e0 = uStack_160;
  local_1d8 = local_158;
  uVar3 = FUN_14477b664(uStack_150);
  local_1d0 = FUN_14477b664(uVar3);
  local_1c8 = local_148;
  local_1c0 = lStack_140;
  if ((lStack_140 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lStack_140 + 0x50));
  }
  puVar5 = local_a8;
  puVar6 = local_128;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c8 = local_48;
  local_c0 = local_40;
  local_bc = local_3c;
  local_200 = &local_1b8;
  local_208 = &local_1e8;
  FUN_141435f84(&local_1a0,local_130,local_138);
  *param_3 = local_1a0;
  param_3[1] = local_198;
  param_3[2] = local_190;
  if ((lStack_140 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_140 + 0x50));
  }
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141435f84 FUN_141435f84 body=360 status=ok
// SIG undefined FUN_141435f84(void)

undefined8 *
FUN_141435f84(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar3 != 0) {
      lVar3 = param_6[1];
      if (lVar3 == 0) {
        if (DAT_14cb25788 == 0) {
          uVar4 = FUN_140cd185c();
          DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
        }
        lVar3 = FUN_14477b664(DAT_14cb25788);
        param_6[1] = lVar3;
      }
      lVar5 = param_6[2];
      if (lVar5 == 0) {
        if ((*param_6 == 0) || (lVar3 == 0)) {
          lVar5 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar3 + 0xb8);
          if (plVar1 == (longlong *)0x0) {
LAB_1414360e7:
            lVar5 = 0;
          }
          else {
            cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
            if (cVar2 == '\0') goto LAB_1414360e7;
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar4,param_6);
          }
          param_6[2] = lVar5;
        }
      }
      uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
      FUN_140cb5d65(param_1,uVar4,param_5,param_4,param_3,lVar5);
      goto LAB_141436012;
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_141436012:
  if ((*(longlong *)(param_5 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_5 + 0x28) + 0x50));
  }
  return param_1;
}



// FUNCTION 1414360ec FUN_1414360ec body=797 status=ok
// SIG undefined FUN_1414360ec(void)

ulonglong FUN_1414360ec(longlong *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 unaff_RDI;
  undefined7 uVar8;
  ulonglong uVar7;
  uint uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  longlong *local_c8;
  undefined1 local_c0 [16];
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = (char)param_1[0x18];
  uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (cVar3 == '\0') {
    uVar7 = CONCAT71(uVar8,1);
    if (param_1[0x20] != 0) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar6;
      lVar5 = FUN_144a61814(uVar4,param_1 + 0x20);
      if (lVar5 != 0) {
        FUN_1405a424c(uVar4,param_1[0x20]);
      }
      param_1[0x20] = 0;
      (**(code **)(*param_1 + 0x2f8))(param_1,0.0 < *(float *)(param_1[0xe] + 0x170));
    }
  }
  else if (*(char *)((longlong)param_1 + 0xe1) == '\x01') {
    uVar7 = CONCAT71(uVar8,1);
    if (cVar3 != '\x01') {
      (**(code **)(*param_1 + 0x370))(param_1);
    }
  }
  else if (param_2 == '\0') {
    uVar7 = CONCAT71(uVar8,1);
    if (cVar3 == '\x02') {
      fVar12 = *(float *)((longlong)param_1 + 0x84);
      if (fVar12 <= 0.0) {
        fVar10 = 1.0;
      }
      else {
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        dVar11 = (double)FUN_144719204(*(double *)(lVar5 + 0x6d0) - (double)param_1[0x1b],
                                       (double)fVar12);
        fVar10 = (float)dVar11 / fVar12;
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        fVar12 = *(float *)((longlong)param_1 + 0x84);
      }
      if ((fVar10 < *(float *)(param_1[0xe] + 0x174)) && (*(int *)((longlong)param_1 + 0xc4) == 0))
      {
        (**(code **)(*param_1 + 0x318))(param_1);
        goto LAB_141436158;
      }
      *(undefined1 *)(param_1 + 0x1c) = 1;
      fVar1 = *(float *)(param_1[0xe] + 0x170);
      if ((fVar10 < fVar1) && (*(int *)((longlong)param_1 + 0xc4) == 0)) {
        if (fVar1 < 1.0) {
          fVar2 = *(float *)(param_1[6] + 0x74);
          uVar9 = -(uint)(0.0001 < fVar2);
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          if (*(longlong *)(lVar5 + 0x1f0) == 0) {
            puVar6 = (undefined8 *)(lVar5 + 0x458);
          }
          else {
            puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
          }
          uVar4 = *puVar6;
          local_c8 = param_1;
          FUN_14434e202(local_c0,param_1[6]);
          local_a8 = 0;
          local_a0 = 0;
          FUN_14487d8d8(&local_a8,local_c0);
          local_68 = 1;
          local_d8 = local_b0;
          local_b0[0] = 0;
          local_ac = 0xbf800000;
          FUN_1406f4044(uVar4,param_1 + 0x1f,&local_a8,
                        (float)(~uVar9 & 0x3f800000 | (uint)(1.0 / fVar2) & uVar9) *
                        fVar12 * (fVar1 - fVar10));
          (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
          FUN_1449db362(local_c0);
        }
        uVar7 = 0;
        goto LAB_141436158;
      }
    }
    else if (cVar3 == '\x01') goto LAB_141436158;
    uVar7 = CONCAT71(uVar8,1);
    (**(code **)(*param_1 + 0x338))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 0x318))(param_1);
    uVar7 = CONCAT71(uVar8,1);
  }
LAB_141436158:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143640a FUN_14143640a body=258 status=ok
// SIG undefined FUN_14143640a(void)

void FUN_14143640a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((char)param_1[0x18] != '\x01') {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = param_1[0x1e];
    if (lVar2 != 0) {
      lVar1 = *plVar3;
      uVar4 = (uint)lVar2;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar5 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
             (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    param_1[0x1e] = 0;
    if ((char)param_1[0x18] == '\x02') {
      if (0.0 < *(float *)((longlong)param_1 + 0x9c)) {
        FUN_1459d275c(param_1[6],*(undefined1 *)((longlong)param_1 + 0xe6));
      }
    }
    (**(code **)(*param_1 + 0x350))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001414364ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,1);
  return;
}



// FUNCTION 14143650c FUN_14143650c body=93 status=ok
// SIG undefined FUN_14143650c(void)

void FUN_14143650c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  FUN_1401b2056();
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    uVar3 = FUN_1447210f0(param_1);
    FUN_14143656a(lVar1,uVar3);
    if ((*(longlong *)(param_1 + 0x3d0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 0x28), lVar1 != 0)) {
      bVar2 = *(char *)(lVar1 + 0x48) * '\x02';
      goto LAB_141436553;
    }
  }
  bVar2 = 0;
LAB_141436553:
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xfd | bVar2;
  return;
}



// FUNCTION 14143656a FUN_14143656a body=3857 status=ok
// SIG undefined FUN_14143656a(void)

void FUN_14143656a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == 0) || (lVar22 = *(longlong *)(param_1 + 0x28), lVar22 == 0)) goto LAB_1414365b9;
  if ((*(byte *)(param_2 + 0x153) & 0x40) == 0) {
    uVar14 = *(uint *)(param_2 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar8 = *(int *)(lVar22 + 0x10);
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar8 = *(int *)(lVar22 + 0x10);
      bVar24 = iVar8 == 0;
      if (bVar24) {
        *(int *)(lVar22 + 0x10) = iVar17;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar24) {
        iVar8 = iVar17;
      }
    }
    if (param_1 == 0) {
      uVar23 = 0;
      uVar20 = 0;
    }
    else {
      uVar23 = *(uint *)(param_1 + 0xc);
      if ((int)uVar23 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      uVar20 = (ulonglong)*(uint *)(lVar22 + 0x10);
      if (*(uint *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        uVar18 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar18);
        }
        LOCK();
        uVar5 = *(uint *)(lVar22 + 0x10);
        bVar24 = uVar5 == 0;
        if (bVar24) {
          *(uint *)(lVar22 + 0x10) = uVar18;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar24) {
          uVar5 = uVar18;
        }
        uVar20 = (ulonglong)uVar5;
      }
    }
    local_98 = (longlong *)0x0;
    local_90._0_4_ = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    plVar2 = local_98;
    local_90 = CONCAT44(local_90._4_4_,3);
    *local_98 = (longlong)&PTR_LAB_14a1ca5b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    local_98[2] = lVar9;
    *local_98 = (longlong)&PTR_FUN_14b50cee0;
    local_98[3] = 0;
    if (param_1 == 0) {
      *(undefined4 *)(local_98 + 3) = 0;
      iVar17 = 0;
    }
    else {
      uVar18 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_98 + 3) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar17 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar17 = *(int *)(lVar22 + 0x10);
        bVar24 = iVar17 == 0;
        if (bVar24) {
          *(int *)(lVar22 + 0x10) = iVar19;
          iVar17 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar17 = iVar19;
        }
      }
    }
    *(int *)((longlong)plVar2 + 0x1c) = iVar17;
    plVar2[4] = CONCAT44(iVar8,uVar14);
    plVar2[5] = uVar20 << 0x20 | (ulonglong)uVar23;
    if (((int)local_90 == 0) || (local_98 == (longlong *)0x0)) {
LAB_141437320:
      if ((int)local_90 == 0) goto LAB_1414367f6;
      if (local_98 != (longlong *)0x0) {
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        goto LAB_1414367e9;
      }
    }
    else {
      cVar4 = (**(code **)(*local_98 + 0x30))();
      uVar14 = DAT_14cb10988;
      if (cVar4 == '\0') {
        goto LAB_141437320;
      }
      if ((DAT_14cb10994 < 1) &&
         (DAT_14cb10990 = DAT_14cb10990 + -1, DAT_14cb10990 <= (int)DAT_14cb10988)) {
        if (0 < (int)DAT_14cb10988) {
          iVar8 = 0;
          do {
            if (((*(int *)(DAT_14cb10980 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(DAT_14cb10980 + (longlong)iVar8 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(&DAT_14cb10980,iVar8);
              FUN_14005b248(&DAT_14cb10980);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          } while (iVar8 < (int)DAT_14cb10988);
        }
        DAT_14cb10990 = 2;
        if (2 < (int)(DAT_14cb10988 * 2)) {
          DAT_14cb10990 = DAT_14cb10988 * 2;
        }
        if ((DAT_14cb10990 < (int)uVar14) && (DAT_14cb1098c != DAT_14cb10988)) {
          FUN_14045812c();
        }
      }
      if (((int)local_90 != 0) && (local_98 != (longlong *)0x0)) {
        (**(code **)(*local_98 + 0x38))(local_98,&local_a8);
      }
      uVar14 = DAT_14cb10988;
      lVar22 = (longlong)(int)DAT_14cb10988;
      DAT_14cb10988 = DAT_14cb10988 + 1;
      if (DAT_14cb1098c < DAT_14cb10988) {
        FUN_1447a71f6(&DAT_14cb10980,uVar14);
      }
      lVar9 = DAT_14cb10980;
      lVar22 = lVar22 * 0x10;
      *(undefined8 *)(DAT_14cb10980 + lVar22) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar22) = 0;
      *(longlong **)(lVar9 + lVar22) = local_98;
      local_98 = (longlong *)0x0;
      *(int *)(lVar9 + 8 + lVar22) = (int)local_90;
LAB_1414367e9:
      local_90 = local_90 & 0xffffffff00000000;
LAB_1414367f6:
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar22 = *(longlong *)(param_1 + 0x28);
  }
  if (*(longlong *)(lVar22 + 0x58) == 0) goto LAB_1414365b9;
  lVar22 = *(longlong *)(lVar22 + 0x50);
  lVar9 = FUN_1448e494c(param_2);
  if ((lVar22 == 0) || (lVar9 == 0)) goto LAB_1414365b9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d28) && (FUN_144b3d300(&DAT_14cb98d28), DAT_14cb98d28 == -1)) {
    FUN_1446f470e(&DAT_14cb98d20,L"CellSize",1);
    _Init_thread_footer(&DAT_14cb98d28);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d38) && (FUN_144b3d300(&DAT_14cb98d38), DAT_14cb98d38 == -1)) {
    FUN_1446f470e(&DAT_14cb98d30,L"MinBounds",1);
    _Init_thread_footer(&DAT_14cb98d38);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d48) && (FUN_144b3d300(&DAT_14cb98d48), DAT_14cb98d48 == -1)) {
    FUN_1446f470e(&DAT_14cb98d40,L"MaxBounds",1);
    _Init_thread_footer(&DAT_14cb98d48);
  }
  FUN_14490d20c(lVar9,DAT_14cb98d20,*(undefined4 *)(param_1 + 0x50));
  local_98 = (longlong *)
             CONCAT44((float)*(double *)(param_1 + 0x38),(float)*(double *)(param_1 + 0x30));
  local_90 = 0;
  FUN_144938f46(lVar9,DAT_14cb98d30,&local_98);
  local_98 = (longlong *)
             CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
  local_90 = 0;
  FUN_144938f46(lVar9,DAT_14cb98d40,&local_98);
  *(undefined1 *)(lVar22 + 0x15b) = 0;
  *(undefined4 *)(lVar22 + 0x148) = 0;
  *(undefined4 *)(lVar22 + 0x14c) = 0;
  *(undefined4 *)(lVar22 + 0x150) = 0;
  *(undefined4 *)(lVar22 + 0x154) = 0x3f800000;
  *(undefined1 *)(lVar22 + 0xf1) = 0;
  *(byte *)(lVar22 + 0x15c) = *(byte *)(lVar22 + 0x15c) & 0xfd;
  if (*(int *)(lVar22 + 0x140) == *(int *)(param_1 + 0x54)) {
    iVar17 = *(int *)(lVar22 + 0x144);
    iVar8 = *(int *)(param_1 + 0x58);
    if (((iVar17 != *(int *)(param_1 + 0x58)) ||
        (iVar8 = iVar17, *(char *)(lVar22 + 0x160) != '\x03')) ||
       ((*(byte *)(lVar22 + 0x15a) & 1) == 0)) goto LAB_141436c96;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x58);
LAB_141436c96:
    local_b8 = (undefined8 *)CONCAT71(local_b8._1_7_,1);
    FUN_14143747c(lVar22,*(int *)(param_1 + 0x54),iVar8,3);
  }
  if (DAT_14c761df4 != '\0') {
    uVar14 = *(uint *)(param_2 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar8 = *(int *)(lVar22 + 0x10);
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar8 = *(int *)(lVar22 + 0x10);
      bVar24 = iVar8 == 0;
      if (bVar24) {
        *(int *)(lVar22 + 0x10) = iVar17;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar24) {
        iVar8 = iVar17;
      }
    }
    if (param_1 == 0) {
      uVar23 = 0;
      uVar20 = 0;
    }
    else {
      uVar23 = *(uint *)(param_1 + 0xc);
      if ((int)uVar23 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      uVar20 = (ulonglong)*(uint *)(lVar22 + 0x10);
      if (*(uint *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        uVar18 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar18);
        }
        LOCK();
        uVar5 = *(uint *)(lVar22 + 0x10);
        bVar24 = uVar5 == 0;
        if (bVar24) {
          *(uint *)(lVar22 + 0x10) = uVar18;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar24) {
          uVar5 = uVar18;
        }
        uVar20 = (ulonglong)uVar5;
      }
    }
    if (*(longlong *)(param_2 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(param_2 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x1f0) + 0xf0);
    }
    uVar13 = *puVar10;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar10 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    local_a8[2] = lVar9;
    *local_a8 = &PTR_FUN_14b50cfd0;
    local_a8[3] = 0;
    if (param_1 == 0) {
      *(undefined4 *)(local_a8 + 3) = 0;
      iVar17 = 0;
    }
    else {
      uVar18 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a8 + 3) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar17 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar17 = *(int *)(lVar22 + 0x10);
        bVar24 = iVar17 == 0;
        if (bVar24) {
          *(int *)(lVar22 + 0x10) = iVar19;
          iVar17 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar17 = iVar19;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x1c) = iVar17;
    puVar10[4] = CONCAT44(iVar8,uVar14);
    puVar10[5] = uVar20 << 0x20 | (ulonglong)uVar23;
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    FUN_14016fdb0(uVar13,local_b0,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a0 != 0) {
      if (local_a8 == (undefined8 *)0x0) goto LAB_1414365b9;
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
    }
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1414365b9;
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar22 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_141436b7b;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_141436b84;
      goto LAB_141436ed4;
    }
  }
  else {
LAB_141436b7b:
    if (iVar8 != 0x10) {
LAB_141436ed4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar22 + 0xc60), iVar8 == 2))
        goto LAB_141436b84;
        if (iVar8 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_141436b84;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar10 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar12 = (uint *)*puVar10;
        if (puVar12 != (uint *)0x0) goto LAB_141437038;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143f7b785);
          }
          lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar22 + 0x310);
          *(undefined8 *)(lVar22 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar10 = puVar11;
          FUN_140217a48(puVar10);
          puVar12 = (uint *)*puVar10;
LAB_141437038:
          puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar21 + 0x16);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar23 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar23 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar10;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar10 = puVar12;
            puVar21 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar21 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1414370b8;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1414370b8:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14b50cfb8;
        puVar21[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar22 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar22 == 0) {
          uVar3 = 1;
          if ((char)uVar20 != '\x06') {
            uVar3 = uVar20;
          }
          uVar20 = uVar3;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar22 + 0x30);
        }
        puVar21[0xf] = uVar13;
        puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar8;
        if (puVar21 == (undefined8 *)0x0) {
          local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_88 = (undefined ***)0x0;
        local_78 = &PTR_LAB_14b50cf50;
        local_98 = (longlong *)&LAB_143f7b74a;
        local_b8 = &local_98;
        local_70 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"GbxWorldPainter_UpdateRenderTarget",&DAT_14cb98d70);
        if (local_98 != (longlong *)0x0) {
          pppuVar15 = local_88;
          if (local_88 == (undefined ***)0x0) {
            pppuVar15 = &local_78;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1414365b9;
    }
  }
LAB_141436b84:
  FUN_141438168(param_1,&DAT_14ca85100);
LAB_1414365b9:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143747c FUN_14143747c body=96 status=ok
// SIG undefined FUN_14143747c(void)

void FUN_14143747c(longlong *param_1,uint param_2,uint param_3,undefined1 param_4,byte param_5)

{
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)((longlong)param_1 + 0x144) = param_3;
  *(undefined1 *)(param_1 + 0x2c) = param_4;
  *(byte *)((longlong)param_1 + 0x15a) = *(byte *)((longlong)param_1 + 0x15a) & 0xfe | param_5;
  if (0x10000 < param_2) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  if (0x10000 < param_3) {
    *(undefined4 *)((longlong)param_1 + 0x144) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414374bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}



// FUNCTION 1414374dc FUN_1414374dc body=3184 status=ok
// SIG undefined FUN_1414374dc(void)

void FUN_1414374dc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  undefined ***pppuVar19;
  uint *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1402c0228();
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
    if (DAT_14c872bf1 != '\x01') goto LAB_141437831;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if ((bVar4 != 0) || ((*(uint *)(param_1 + 1) & 0x10) != 0)) goto LAB_141437831;
  plVar10 = (longlong *)(**(code **)(*param_1 + 800))(param_1);
  if (DAT_14c761dec == 0) {
    if (plVar10 == (longlong *)0x0) goto LAB_1414376f9;
  }
  else {
    if (plVar10 == (longlong *)0x0) {
LAB_1414376f9:
      param_1[0x23] = 0;
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar7 = *(int *)(lVar11 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar7 != 2) {
          if (iVar7 != 1) goto LAB_14143772a;
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_141437733;
          goto LAB_141437b93;
        }
      }
      else {
LAB_14143772a:
        if (iVar7 != 0x10) {
LAB_141437b93:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar11 + 0xc60), iVar7 == 2))
            goto LAB_141437733;
            if (iVar7 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_141437733;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar2 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar14 = (uint *)*puVar2;
            if (puVar14 != (uint *)0x0) goto LAB_141437cd8;
            while( true ) {
              uVar18 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar18 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar18 | 1;
                __tlregdtor(&LAB_143737b4f);
              }
              lVar11 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar13 = *(undefined4 **)(lVar11 + 0x310);
              *(undefined8 *)(lVar11 + 0x310) = 0;
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar13 = 0xffffffff;
              *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              FUN_140217a48(puVar2);
              puVar14 = (uint *)*puVar2;
LAB_141437cd8:
              puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar21 + 0x17);
              uVar18 = puVar14[0x12];
              if (puVar20 <= puVar14 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
                LOCK();
                uVar3 = *puVar14;
                *puVar14 = *puVar14 + uVar18 + 1;
                UNLOCK();
                if ((uVar3 ^ uVar18) != 0xffffffff) break;
                puVar14 = (uint *)*puVar2;
                *puVar14 = 0xffffffff;
                *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
                puVar14[0x12] = 0;
                *puVar2 = puVar14;
                puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
                puVar20 = (uint *)(puVar21 + 0x17);
                uVar18 = 0;
                if (puVar20 <= puVar14 + 0x4000) {
                  uVar18 = 1;
                  goto LAB_141437d58;
                }
              }
            }
            uVar18 = uVar18 + 1;
LAB_141437d58:
            *(uint **)(puVar14 + 0x10) = puVar20;
            puVar14[0x12] = uVar18;
            iVar7 = 0;
            FUN_1447247dc(puVar21,0);
            *puVar21 = &PTR_FUN_14aad45f0;
            puVar21[0x15] = param_1;
            puVar21[0x16] = 0;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar18 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
                uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
                iVar7 = 0;
              }
              else {
                uVar22 = 2;
              }
            }
            else {
              iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                      *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar22 = 5;
            }
            if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
            }
            puVar21[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar21[9] = puVar21;
            puVar21[10] = puVar21;
            lVar11 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar11 == 0) {
              uVar6 = 1;
              if ((char)uVar22 != '\x06') {
                uVar6 = uVar22;
              }
              uVar22 = uVar6;
              uVar15 = 0;
            }
            else {
              if ((char)uVar22 == '\x06') {
                uVar22 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
              }
              uVar15 = *(undefined8 *)(lVar11 + 0x30);
            }
            puVar21[0xf] = uVar15;
            puVar21[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar21 + 0x1c) = iVar7;
            if (puVar21 == (undefined8 *)0x0) {
              local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
              UNLOCK();
              local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
              FUN_1447439e4(puVar21);
              LOCK();
              piVar1 = (int *)(puVar21 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar21)(puVar21,1);
              }
            }
          }
          else {
            local_88 = local_78;
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14aad45a0;
            local_48 = (longlong *)0x0;
            local_78[0] = (code *)&LAB_143737b0c;
            local_50 = param_1;
            FUN_14005a792(&DAT_14ca9a440,L"SetResourceRenderThread",&DAT_14cb0b5fc);
            if (local_78[0] != (code *)0x0) {
              pppuVar19 = local_68;
              if (local_68 == (undefined ***)0x0) {
                pppuVar19 = &local_58;
              }
              (*(code *)(*pppuVar19)[2])();
            }
          }
          goto LAB_141437831;
        }
      }
LAB_141437733:
      param_1[0x24] = 0;
      goto LAB_141437831;
    }
    lVar11 = (**(code **)(*plVar10 + 0x88))(plVar10);
    if ((((lVar11 != 0) && ((ulonglong)*(byte *)(lVar11 + 0x84) < 0x39)) &&
        ((0x1800080008000e0U >> ((ulonglong)*(byte *)(lVar11 + 0x84) & 0x3f) & 1) != 0)) &&
       (((*(uint *)(lVar11 + 0x68) < 4 || (*(uint *)(lVar11 + 0x6c) < 4)) ||
        (((*(uint *)(lVar11 + 0x6c) | *(uint *)(lVar11 + 0x68)) & 3) != 0)))) {
      (**(code **)(*param_1 + 0x340))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  lVar11 = (**(code **)(*plVar10 + 0x88))(plVar10);
  if (lVar11 != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x58);
    param_1[0x18] = lVar11;
    if (lVar11 != 0) {
      *(byte *)(param_1 + 0x18) = (byte)lVar11 | 2;
    }
  }
  param_1[0x23] = (longlong)plVar10;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar11 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14143765f;
    if (iVar7 != 1) goto LAB_141437656;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14143765f;
LAB_141437786:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar11 + 0xc60), iVar7 == 2)) {
LAB_14143802a:
        param_1[0x24] = (longlong)plVar10;
        lVar11 = *(longlong *)(param_1[0x25] + 0x10);
        lVar5 = plVar10[9];
        if (lVar5 != lVar11) {
          plVar10[9] = lVar11;
          if (lVar11 != 0) {
            LOCK();
            *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
            UNLOCK();
          }
          if (lVar5 != 0) {
            LOCK();
            puVar14 = (uint *)(lVar5 + 8);
            uVar18 = *puVar14;
            *puVar14 = *puVar14 - 1;
            UNLOCK();
            if ((uVar18 & 0x3fffffff) == 1) {
              puVar14 = (uint *)(lVar5 + 8);
              LOCK();
              uVar18 = *puVar14;
              *puVar14 = *puVar14 | 0x40000000;
              UNLOCK();
              if ((uVar18 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(lVar5 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = lVar5;
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar17;
                    LOCK();
                    bVar23 = plVar17 != DAT_14ca843c0;
                    plVar16 = plVar12;
                    if (bVar23) {
                      plVar17 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar23);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar16;
                    LOCK();
                    bVar23 = plVar16 != DAT_14ca843c8;
                    plVar17 = plVar12;
                    if (bVar23) {
                      plVar16 = DAT_14ca843c8;
                      plVar17 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar17;
                    UNLOCK();
                  } while (bVar23);
                }
              }
            }
          }
        }
        goto LAB_1414376e4;
      }
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14143802a;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_1414378f6;
      while( true ) {
        uVar18 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar18 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar18 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_1414378f6:
        puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar21 + 0x17);
        uVar18 = puVar14[0x12];
        if (puVar20 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar3 = *puVar14;
          *puVar14 = *puVar14 + uVar18 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar18) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar21 + 0x17);
          uVar18 = 0;
          if (puVar20 <= puVar14 + 0x4000) {
            uVar18 = 1;
            goto LAB_141437976;
          }
        }
      }
      uVar18 = uVar18 + 1;
LAB_141437976:
      *(uint **)(puVar14 + 0x10) = puVar20;
      puVar14[0x12] = uVar18;
      iVar7 = 0;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14aad4698;
      puVar21[0x15] = param_1;
      puVar21[0x16] = plVar10;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar18 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
          iVar7 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar6 = 1;
        if ((char)uVar22 != '\x06') {
          uVar6 = uVar22;
        }
        uVar22 = uVar6;
        uVar15 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar11 + 0x30);
      }
      puVar21[0xf] = uVar15;
      puVar21[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar7;
      if (puVar21 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_88 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14aad4650;
      local_78[0] = FUN_143737eec;
      local_50 = param_1;
      local_48 = plVar10;
      FUN_14005a792(&DAT_14ca9a440,L"SetTextureReference",&DAT_14cb0b604);
      if (local_78[0] != (code *)0x0) {
        pppuVar19 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar19 = &local_58;
        }
        (*(code *)(*pppuVar19)[2])();
      }
    }
  }
  else {
LAB_141437656:
    if (iVar7 != 0x10) goto LAB_141437786;
LAB_14143765f:
    param_1[0x24] = (longlong)plVar10;
    lVar11 = *(longlong *)(param_1[0x25] + 0x10);
    lVar5 = plVar10[9];
    if (lVar5 != lVar11) {
      plVar10[9] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        LOCK();
        puVar14 = (uint *)(lVar5 + 8);
        uVar18 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar14 = (uint *)(lVar5 + 8);
          LOCK();
          uVar18 = *puVar14;
          *puVar14 = *puVar14 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar5 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar5;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar17;
                LOCK();
                bVar23 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar12;
                if (bVar23) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar23);
            }
            else {
              do {
                *plVar12 = (longlong)plVar16;
                LOCK();
                bVar23 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar12;
                if (bVar23) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar23);
            }
          }
        }
      }
    }
LAB_1414376e4:
    (**(code **)(*plVar10 + 0x18))(plVar10,&DAT_14ca85100);
  }
  FUN_1406baf36(param_1);
LAB_141437831:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141438168 FUN_141438168 body=307 status=ok
// SIG undefined FUN_141438168(void)

void FUN_141438168(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x50) != 0)) {
    lVar3 = FUN_1447b4020();
    if ((lVar3 != 0) &&
       ((plVar2 = *(longlong **)(lVar3 + 0x10), plVar2 != (longlong *)0x0 &&
        (*(char *)((longlong)plVar2 + 0x52) == '\0')))) {
      uVar1 = *(uint *)(param_1 + 0x54);
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if (uVar1 <= *(uint *)(lVar3 + 0x24)) {
        uVar1 = *(uint *)(param_1 + 0x58);
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        if (uVar1 <= *(uint *)(lVar3 + 0x28)) {
          local_48 = 0;
          uStack_40 = 0;
          local_60 = *(undefined4 *)(param_1 + 0x54);
          local_34 = *(undefined4 *)(param_1 + 0x58);
          local_58 = *(undefined8 *)(param_1 + 0x60);
          local_38 = local_60;
          if (*(char *)(param_2 + 0x69) == '\0') {
            FUN_14002049c(param_2,1);
            local_68 = &local_48;
            (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,plVar2,0);
            FUN_14002049c(param_2,0);
          }
          else {
            local_68 = &local_48;
            (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,plVar2,0);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143829c FUN_14143829c body=221 status=ok
// SIG undefined FUN_14143829c(void)

longlong FUN_14143829c(void)

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
  if (DAT_14c990998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146b165d7;
    local_40 = FUN_146282e6b;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/EngineSettings",L"ConsoleSettings",&DAT_14c990998,&DAT_146b165d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c990998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143837a FUN_14143837a body=8 status=ok
// SIG undefined FUN_14143837a(void)

undefined2 * FUN_14143837a(void)

{
  return &DAT_149dfb77a;
}



// FUNCTION 141438382 FUN_141438382 body=8 status=ok
// SIG undefined FUN_141438382(void)

undefined2 * FUN_141438382(void)

{
  return &DAT_149dfb77a;
}



// FUNCTION 14143838a FUN_14143838a body=81 status=ok
// SIG undefined FUN_14143838a(void)

void FUN_14143838a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1462ec296(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1414383db FUN_1414383db body=232 status=ok
// SIG undefined FUN_1414383db(void)

void FUN_1414383db(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1414384c4 FUN_1414384c4 body=1662 status=ok
// SIG undefined FUN_1414384c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1414384c4(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
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
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar7 == 0) {
LAB_14143895f:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  if (DAT_14cba8288 == 0) {
    local_70 = &local_58;
    local_58 = FUN_141864c34;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1464cee30;
    local_78 = &LAB_148bfac22;
    local_80 = &LAB_140f21842;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14143895f;
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    bVar11 = true;
  }
  else {
    lVar14 = 0;
    do {
      bVar16 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14) == *(char *)(lVar7 + 0x73eb);
      bVar11 = !bVar16;
      if (bVar16) break;
      bVar16 = (longlong)*(int *)(param_1 + 0x20) + -1 != lVar14;
      lVar14 = lVar14 + 1;
    } while (bVar16);
  }
  bVar3 = *(byte *)(param_1 + 0x10);
  lVar14 = param_3[1];
  plVar13 = (longlong *)param_3[2];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b99ee10;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  plVar1 = plVar8 + 2;
  *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(byte *)(plVar8 + 7) = *(byte *)(plVar8 + 7) & 0xf0 | (bVar11 ^ bVar3) * '\x02';
  plVar8[2] = (longlong)&PTR_FUN_14b99ee50;
  plVar8[8] = lVar14;
  plVar8[9] = (longlong)plVar13;
  if (plVar13 == (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_14b99ee30;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *plVar1 = (longlong)&PTR_FUN_14b99ee30;
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((plVar1 != (longlong *)0x0) &&
     (((plVar8[3] == 0 || (plVar8[4] == 0)) || (*(int *)(plVar8[4] + 8) < 1)))) {
    if (plVar8 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar15 = (longlong *)&DAT_00000020;
      plVar9 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1414389e6:
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        *plVar15 = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_141438648;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar1;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar15 = plVar8 + 4;
          plVar9 = (longlong *)plVar8[4];
          goto LAB_1414389e6;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_141438648:
      LOCK();
      plVar15 = plVar8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  local_58 = (code *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  if (plVar8 == (longlong *)0x0) {
    *(undefined ***)local_58 = &PTR_LAB_14b982220;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    *(longlong *)(local_58 + 0x10) = lVar10;
    *(undefined ***)local_58 = &PTR_FUN_14b99ee70;
    *(longlong *)(local_58 + 0x18) = 0x10;
    *(longlong *)(local_58 + 0x20) = 0;
    *(code **)(local_58 + 0x28) = FUN_140b30b6a;
    *(undefined4 *)(local_58 + 0x30) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined ***)local_58 = &PTR_LAB_14b982220;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    *(longlong *)(local_58 + 0x10) = lVar10;
    *(undefined ***)local_58 = &PTR_FUN_14b99ee70;
    *(longlong **)(local_58 + 0x18) = plVar1;
    *(longlong **)(local_58 + 0x20) = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    *(code **)(local_58 + 0x28) = FUN_140b30b6a;
    *(undefined4 *)(local_58 + 0x30) = 0;
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (((local_50 == 0) || (local_58 == (code *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (code *)0x0) goto LAB_1414387d8;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1414387c2;
    }
  }
  else {
    plVar13 = (longlong *)(lVar7 + 0x71d0);
    if (*(int *)(lVar7 + 0x71e4) < 1) {
      iVar4 = *(int *)(lVar7 + 0x71d8);
      iVar6 = *(int *)(lVar7 + 0x71e0) + -1;
      *(int *)(lVar7 + 0x71e0) = iVar6;
      if (iVar6 <= iVar4) {
        iVar6 = iVar4;
        if (0 < iVar4) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar15 = *(longlong **)(*plVar13 + (longlong)iVar12 * 0x10),
                plVar15 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar15 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar13,iVar12);
              FUN_14005b248(plVar13);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar6 = *(int *)(lVar7 + 0x71d8);
          } while (iVar12 < iVar6);
        }
        iVar12 = 2;
        if (2 < iVar6 * 2) {
          iVar12 = iVar6 * 2;
        }
        *(int *)(lVar7 + 0x71e0) = iVar12;
        if ((iVar12 < iVar4) && (*(int *)(lVar7 + 0x71dc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_58 + 0x38))(local_58,local_48);
    }
    iVar4 = *(int *)(lVar7 + 0x71d8);
    *(uint *)(lVar7 + 0x71d8) = iVar4 + 1U;
    if (*(uint *)(lVar7 + 0x71dc) < iVar4 + 1U) {
      FUN_1447a71f6(plVar13,iVar4);
    }
    lVar7 = *plVar13;
    lVar14 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar7 + lVar14) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar14) = 0;
    *(code **)(lVar7 + lVar14) = local_58;
    local_58 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar14) = local_50;
LAB_1414387c2:
    local_50 = 0;
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1414387d8:
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141438b64 FUN_141438b64 body=295 status=ok
// SIG undefined FUN_141438b64(void)

undefined8 FUN_141438b64(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141438c84;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141438c84;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_141438c84:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141438c2f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_141438c2f;
    }
  }
  uVar6 = 0;
LAB_141438c2f:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141438c8c FUN_141438c8c body=463 status=ok
// SIG undefined FUN_141438c8c(void)

void FUN_141438c8c(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == '\0') && (lVar6 = param_1[4], lVar6 != 0)) {
    lVar8 = FUN_144a2f878();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_38,uVar9);
      plVar7 = (longlong *)*local_38;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 9));
      *(int *)(plVar7 + 8) = (int)plVar7[8] + 1;
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
      uVar4 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar4) {
        lVar8 = plVar7[2];
        lVar11 = 0;
        iVar12 = 0;
        do {
          uVar5 = *(uint *)(lVar6 + 0xc);
          *(int *)(plVar7 + 2) = (int)lVar8 + 1 + iVar12;
          if (*(ulonglong *)(*plVar7 + 0x38 + lVar11) == (ulonglong)uVar5) {
            if ((int)uVar4 <= iVar12) break;
            lVar8 = FUN_1447210f0(lVar6);
            fVar14 = (float)*(double *)(lVar8 + 0x6d0);
            iVar10 = (int)plVar7[2] + 1;
            *(int *)(plVar7 + 2) = iVar10;
            lVar8 = *plVar7;
            fVar3 = *(float *)(lVar8 + 0x90 + lVar11);
            iVar12 = *(int *)(lVar8 + 0x94 + lVar11);
            if ((fVar3 != fVar14) || (NAN(fVar3) || NAN(fVar14))) {
              iVar12 = iVar12 + 1;
LAB_141438db3:
              *(float *)(lVar8 + 0x90 + lVar11) = fVar14;
              *(int *)(lVar8 + 0x94 + lVar11) = iVar12;
              iVar10 = (int)plVar7[2];
              lVar8 = *plVar7;
            }
            else if (iVar12 == 0) {
              iVar12 = 1;
              goto LAB_141438db3;
            }
            bVar13 = *(char *)(lVar6 + 0x73eb) == '\x01';
            *(int *)(plVar7 + 2) = iVar10 + 1;
            iVar12 = *(int *)(lVar8 + 0x54 + lVar11);
            if ((bool)*(char *)(lVar8 + 0x50 + lVar11) == bVar13) {
              if (iVar12 != 0) break;
              iVar12 = 1;
            }
            else {
              iVar12 = iVar12 + 1;
            }
            *(bool *)(lVar8 + 0x50 + lVar11) = bVar13;
            *(int *)(lVar8 + 0x54 + lVar11) = iVar12;
            break;
          }
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 0x120;
        } while ((ulonglong)uVar4 * 0x120 != lVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141438e70 FUN_141438e70 body=633 status=ok
// SIG undefined FUN_141438e70(void)

void FUN_141438e70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
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
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0))
  {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(param_1 + 0x28) = lVar5;
      lVar5 = FUN_1402735c8();
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x68c);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar5 + 0x690);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar5 + 0x694);
      plVar1 = (longlong *)(param_1 + 0x110);
      iVar4 = *(int *)(param_1 + 0x118);
      if (iVar4 == 0) {
LAB_141439062:
        FUN_1446efa72(plVar1,0,3,0x10);
        *(undefined4 *)(param_1 + 0x118) = 3;
LAB_141439082:
        puVar2 = (undefined8 *)*plVar1;
        *puVar2 = &PTR_LAB_14a78e0f0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        puVar2[2] = lVar6;
        *puVar2 = &PTR_FUN_14b991580;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = FUN_14059ca80;
      }
      else {
        if ((longlong *)*plVar1 == (longlong *)0x0) {
LAB_14143905d:
          if (iVar4 != 3) goto LAB_141439062;
          goto LAB_141439082;
        }
        cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
        if (cVar3 == '\0') {
          iVar4 = *(int *)(param_1 + 0x118);
          goto LAB_14143905d;
        }
      }
      if (*(longlong *)(param_1 + 0x120) == 0) {
        FUN_1459db102(*(longlong *)(param_1 + 0x28) + 0x3da0,&local_20,param_1,FUN_140d2522e);
        *(code **)(param_1 + 0x120) = local_20;
      }
      goto LAB_141438f4f;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_141438f4f:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141439138 FUN_141439138 body=732 status=ok
// SIG undefined FUN_141439138(void)

void FUN_141439138(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14143918d;
      plVar6 = plVar6 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_14143918d:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ulonglong)uVar1;
  local_98 = *(ulonglong *)(param_1 + 0x40);
  local_9c = *(int *)(param_2 + 0x14);
  if (local_9c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1414391db;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1414391db:
  lVar3 = *plVar6;
  local_a0 = *(int *)(param_2 + 0x14);
  if (local_a0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar2 = *plVar7;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((local_80 != 0) && (uVar1 != 0)) {
        lVar8 = 0;
        do {
          fVar9 = (float)FUN_1458fbfa0(*(undefined8 *)(local_80 + lVar8 * 2),
                                       *(undefined8 *)(lVar2 + lVar8));
          *(double *)(lVar3 + lVar8) = (double)fVar9;
          lVar8 = lVar8 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar8);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (uVar4 != 0) {
      uVar5 = 0;
      do {
        *(double *)(lVar3 + uVar5 * 8) =
             (double)*(float *)(*(longlong *)(lVar2 + uVar5 * 8) +
                               (ulonglong)*(ushort *)(local_68 + uVar5 * 2));
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
      }
    }
  }
  else if (uVar4 != 0) {
    uVar5 = 0;
    do {
      fVar9 = (float)(**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                 (longlong)*(int *)(param_1 + 0x3c) *
                                 (ulonglong)*(ushort *)(local_50 + uVar5 * 2)))
                               (*(undefined8 *)(lVar2 + uVar5 * 8));
      *(double *)(lVar3 + uVar5 * 8) = (double)fVar9;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar4 = plVar6[2];
    if ((ulonglong)plVar6[2] < local_98) {
      uVar4 = local_98;
    }
    plVar6[2] = uVar4;
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_9c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141439416 FUN_141439416 body=34 status=ok
// SIG undefined FUN_141439416(void)

undefined8 FUN_141439416(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    uVar2 = FUN_140849bbe(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141439438 FUN_141439438 body=727 status=ok
// SIG undefined FUN_141439438(void)

undefined8 * FUN_141439438(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x448) == 0) goto LAB_14143960e;
  uVar3 = FUN_1405286d0();
  if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x3dc8))) &&
      (lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(param_1 + 0x3dc0), lVar4 != 0)) &&
     ((*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x20) != 0 &&
      (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))) {
    lVar5 = FUN_145b8f424();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_48 = FUN_148d61b00(lVar4);
      FUN_148d765ec(param_2);
    }
  }
  local_48 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x80))();
  if ((cVar2 == '\0') ||
     (lVar4 = (**(code **)(*(longlong *)(param_1 + -0xf8) + 0x10))(param_1 + -0xf8),
     *(int *)(lVar4 + 0xa8) < 1)) {
LAB_141439638:
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) goto LAB_141439638;
    lVar5 = FUN_144a7a5f4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_141439638;
    lVar4 = *(longlong *)(lVar4 + 0xe30);
    local_48 = lVar4;
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x448) + 0xe80);
  lVar10 = lVar4;
  if (lVar5 != 0) {
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x448) + 0xe78);
    lVar5 = lVar5 * 0x18;
    do {
      lVar8 = plVar9[1];
      if (lVar8 == 0) {
        uVar6 = FUN_145d847d4();
        lVar8 = FUN_14477b664(uVar6);
        plVar9[1] = lVar8;
      }
      lVar7 = plVar9[2];
      if (lVar7 == 0) {
        if ((lVar8 != 0) && (*plVar9 != 0)) {
          plVar1 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar9[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar7 = FUN_144aff482(uVar6,plVar9);
            plVar9[2] = lVar7;
            local_50 = lVar7;
            if (lVar7 != 0) goto LAB_141439590;
          }
        }
      }
      else {
LAB_141439590:
        local_50 = lVar7;
        if (lVar4 == 0) {
LAB_141439599:
          lVar4 = 0;
        }
        else if ((*(longlong *)(lVar7 + 0x18) == 0) || (0xfffffffd < *(int *)(lVar7 + 0x20) - 1U)) {
          FUN_141439710(param_2,&local_48);
          local_48 = 0;
          lVar10 = 0;
          goto LAB_141439599;
        }
        FUN_141439710(param_2,&local_50);
      }
      plVar9 = plVar9 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  if (lVar10 != 0) {
    FUN_141439710(param_2,&local_48);
  }
LAB_14143960e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141439710 FUN_141439710 body=105 status=ok
// SIG undefined FUN_141439710(void)

void FUN_141439710(longlong *param_1,longlong *param_2)

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
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14069fc80(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14143977a FUN_14143977a body=483 status=ok
// SIG undefined FUN_14143977a(void)

void FUN_14143977a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14143995e FUN_14143995e body=1015 status=ok
// SIG undefined FUN_14143995e(void)

void FUN_14143995e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  void *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  void *pvStack_1b0;
  undefined8 local_1a8;
  code *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  longlong local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined2 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar3 = (longlong *)0x0;
  if (DAT_14caca270 != 0) {
    plVar3 = DAT_14caca268;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  FUN_14020684a(param_1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (void *)0xffffffff00000001;
  uStack_d0 = 0;
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = local_70 & 0xffffffffffffff00;
  uStack_68 = 0;
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (void *)0xffffffff00000001;
  uStack_170 = 0;
  local_168 = local_c8;
  local_140 = 0;
  local_138 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_134 = 0xffffffff00000080;
  local_12c = 0;
  local_120 = 0;
  local_118 = 0;
  FUN_140604072(&local_160,&local_c0);
  local_110 = (undefined4)local_70;
  uStack_10c = local_70._4_4_;
  uStack_108 = (undefined4)uStack_68;
  uStack_104 = uStack_68._4_4_;
  local_100 = local_60;
  local_f8 = 0;
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_c0);
  local_f8 = local_f8 & 0xff00;
  FUN_141439dc0(param_1);
  cVar2 = FUN_141439d56();
  if (cVar2 == '\0') goto LAB_141439ab1;
  cVar2 = FUN_14143a76a();
  if ((cVar2 != '\0') && (local_f8._1_1_ != '\x01')) goto LAB_141439ab1;
  local_1b8 = 0;
  pvStack_1b0 = (void *)0x0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1a8 = 0;
  if (param_1 == 0) {
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    _Src = (void *)0x0;
    iVar5 = 0;
  }
  else {
    FUN_1400bbfae(&local_e8,param_1);
    _Src = local_d8;
    uStack_1c0 = local_e8;
    local_1b8 = uStack_e0;
    iVar5 = (int)uStack_d0;
    pvStack_1b0 = local_d8;
    local_1a8 = uStack_d0;
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        local_1c8 = 0;
        goto LAB_141439be2;
      }
    }
    FUN_14485c47a(&local_1c8,param_1);
    _Src = pvStack_1b0;
    iVar5 = (int)local_1a8;
  }
LAB_141439be2:
  local_c8 = local_168;
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  local_e8 = local_188;
  uStack_e0 = uStack_180;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_140604072(&local_c0,&local_160);
  local_70 = CONCAT44(uStack_10c,local_110);
  uStack_68 = CONCAT44(uStack_104,uStack_108);
  local_60 = local_100;
  local_56 = (undefined1)local_f8;
  local_58 = 0;
  local_1f8 = local_1c8;
  local_1f0 = (undefined4)uStack_1c0;
  uStack_1ec = uStack_1c0._4_4_;
  uStack_1e8 = (undefined4)local_1b8;
  uStack_1e4 = local_1b8._4_4_;
  local_1e0 = (void *)0x0;
  local_1d8 = iVar5;
  if (iVar5 == 0) {
    local_1d4 = 0;
  }
  else {
    FUN_1446dd670(&local_1e0,iVar5,0);
    memcpy(local_1e0,_Src,(longlong)iVar5 * 2);
  }
  local_1d0 = &local_e8;
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_140702026(lVar4);
    if (lVar4 != 0) {
      local_198 = FUN_143b2a664;
      local_190 = &local_1f8;
      FUN_1407028fe(lVar4 + 200);
    }
  }
  if (local_1e0 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_c0);
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
LAB_141439ab1:
  local_118 = 0;
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_160);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141439d56 FUN_141439d56 body=105 status=ok
// SIG undefined FUN_141439d56(void)

undefined8 FUN_141439d56(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb49928;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 141439dc0 FUN_141439dc0 body=2472 status=ok
// SIG undefined FUN_141439dc0(void)

void FUN_141439dc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  void *_Src;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined *local_2b8;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  code *local_290;
  undefined8 local_288;
  undefined4 *local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  void *pvStack_250;
  ulonglong local_248;
  undefined1 local_240 [24];
  double local_228;
  double local_220;
  double local_218;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int local_160;
  undefined8 local_15c;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  cVar3 = FUN_14143a76a();
  if ((cVar3 != '\0') && (*(char *)((longlong)param_2 + 0x91) != '\x01')) goto LAB_141439e05;
  local_208 = 0;
  uStack_200 = 0;
  FUN_14377f5b2(param_1,local_240);
  lVar14 = DAT_14cb470b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  cVar3 = *(char *)(lVar14 + uVar7);
  uVar8 = FUN_1447210f0(param_1);
  if (cVar3 == '\0') {
    local_138 = CONCAT44((float)local_228,1);
    uStack_130 = CONCAT44((float)local_218,(float)local_220);
    puVar9 = (uint *)FUN_140bfa850();
    local_2c8 = &local_188;
    local_188._0_5_ = (uint5)*puVar9;
    local_2b8 = &DAT_14cad0f68;
    local_2c0 = &local_138;
    FUN_1417bb7cc(uVar8,&local_208,local_240,&DAT_14c8463d0);
  }
  else {
    FUN_1483e4318(&local_1d8,uVar8);
    if ((longlong)(int)uStack_1d0 != 0) {
      local_2a8 = local_1d8 + (int)uStack_1d0;
      puVar13 = local_1d8;
      do {
        local_2a0 = *puVar13;
        local_78 = (undefined8 *)0x0;
        local_70 = 0x1800000000;
        FUN_14024dbd6(local_2a0,&local_138,0);
        puVar16 = local_78;
        if (local_78 == (undefined8 *)0x0) {
          puVar16 = &local_138;
        }
        lVar14 = (longlong)(int)local_70;
        if (lVar14 == 0) {
          bVar2 = true;
        }
        else {
          lVar15 = 0;
          do {
            plVar1 = *(longlong **)((longlong)puVar16 + lVar15);
            if (plVar1 != (longlong *)0x0) {
              local_188 = CONCAT44((float)local_228,1);
              uStack_180 = CONCAT44((float)local_218,(float)local_220);
              cVar3 = (**(code **)(*plVar1 + 0x9a0))(plVar1,local_240,&DAT_14c8463d0,&local_188);
              if (cVar3 != '\0') {
                bVar2 = false;
                goto LAB_141439fc9;
              }
            }
            lVar15 = lVar15 + 8;
          } while (lVar14 * 8 != lVar15);
          bVar2 = true;
        }
LAB_141439fc9:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar2) {
          uStack_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = (code *)0x0;
          uStack_128 = (void *)0x0;
          uStack_120 = (void *)0x0;
          local_138 = 0;
          uStack_130 = 0;
          local_f8 = 0;
          FUN_140871de8(&local_188,local_2a0);
          uVar7 = uStack_200;
          local_138 = local_188;
          uStack_130 = uStack_180;
          uStack_128 = (void *)CONCAT44(uStack_174,local_178);
          uStack_120 = (void *)CONCAT44(uStack_16c,uStack_170);
          lVar14 = (longlong)(int)uStack_200;
          uVar5 = (int)uStack_200 + 1;
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
          if (uStack_200._4_4_ < uVar5) {
            FUN_1414fa4c8(&local_208,uVar7 & 0xffffffff);
          }
          lVar14 = local_208 + lVar14 * 0x48;
          FUN_144b23946(lVar14,&local_138);
          *(undefined4 *)(lVar14 + 0x20) = (undefined4)local_118;
          *(undefined4 *)(lVar14 + 0x24) = local_118._4_4_;
          *(undefined4 *)(lVar14 + 0x28) = (undefined4)uStack_110;
          *(undefined4 *)(lVar14 + 0x2c) = uStack_110._4_4_;
          *(undefined8 *)(lVar14 + 0x30) = uStack_108;
          *(undefined8 *)(lVar14 + 0x38) = uStack_100;
          *(undefined1 *)(lVar14 + 0x40) = (undefined1)local_f8;
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != local_2a8);
    }
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8(local_1d8);
    }
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = (undefined1 *)0x0;
  local_140 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_248 = 0;
  local_258 = 0;
  pvStack_250 = (void *)0x0;
  local_268 = 0;
  lStack_260 = 0;
  if (param_1 == 0) {
    local_268 = 0;
    lStack_260 = 0;
    local_258 = 0;
  }
  else {
    FUN_1400bbfae(&local_138,param_1);
    lStack_260 = local_138;
    local_258 = uStack_130;
    if (pvStack_250 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvStack_250 = uStack_128;
    local_248 = (ulonglong)uStack_120;
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar5 = *(uint *)(param_1 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      if ((*(uint *)(lVar14 + 8) & 0x8400000) != 0) {
        local_268 = 0;
        goto LAB_14143a1f4;
      }
    }
    FUN_14485c47a(&local_268,param_1);
  }
LAB_14143a1f4:
  _Src = pvStack_250;
  local_138 = local_268;
  uStack_130 = lStack_260;
  uStack_128 = (void *)local_258;
  uStack_120 = (void *)0x0;
  lVar14 = (longlong)(int)local_248;
  local_118 = CONCAT44(local_118._4_4_,(int)local_248);
  if (lVar14 == 0) {
    local_118 = local_248 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&uStack_120,local_248 & 0xffffffff,0);
    memcpy(uStack_120,_Src,lVar14 * 2);
  }
  uStack_110 = (code *)&local_188;
  lVar14 = FUN_1447210f0(param_1);
  if ((lVar14 != 0) && (lVar14 = FUN_140702026(lVar14), lVar14 != 0)) {
    local_290 = FUN_143b2a59c;
    local_288 = &local_138;
    FUN_1407028fe(lVar14 + 200);
  }
  if (uStack_120 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_200 != 0) {
    lVar14 = local_208 + (longlong)(int)uStack_200 * 0x48;
    lVar15 = local_208;
    do {
      cVar3 = FUN_14483521e(lVar15);
      if (((cVar3 != '\0') && (lVar10 = FUN_14485cccc(lVar15), local_138 = lVar10, lVar10 != 0)) &&
         (bVar4 = FUN_1483e6b5a(param_1 + 0x3e0,&local_138),
         *(uint *)(param_1 + 0x3d8) == (uint)(bVar4 ^ 1))) {
        uVar7 = *(ulonglong *)(lVar10 + 0x3a8);
        local_290 = (code *)0x0;
        FUN_14485c47a(&local_290,uVar7);
        FUN_1483f15fc(&local_1d8,&local_1f8,&local_290);
        if ((int)uStack_180 != local_154) {
          uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          puVar11 = local_148;
          if (local_148 == (undefined1 *)0x0) {
            puVar11 = local_150;
          }
          for (iVar12 = *(int *)(puVar11 + (ulonglong)(local_140 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4
                                ); iVar12 != -1;
              iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_188 + 8)) {
            if (*(ulonglong *)(local_188 + (longlong)iVar12 * 0x10) == uVar7) goto LAB_14143a623;
          }
        }
        FUN_1483e5a4a(uVar7,param_1);
      }
LAB_14143a623:
      lVar15 = lVar15 + 0x48;
    } while (lVar15 != lVar14);
  }
  local_118 = param_2[4];
  local_138 = *param_2;
  uStack_130 = param_2[1];
  uStack_128 = (void *)param_2[2];
  uStack_120 = (void *)param_2[3];
  local_f0 = 0;
  local_e8 = 0;
  uStack_110 = (code *)0x0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_140604072(&uStack_110,param_2 + 5);
  local_c0 = (int)param_2[0xf];
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_b8 = (int)param_2[0x10];
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x84);
  local_b0 = param_2[0x11];
  local_a6 = (char)param_2[0x12];
  local_a8 = 0;
  local_1f8 = (undefined8 *)&DAT_100000000;
  local_1e8 = 0xffffffff;
  local_1e0 = 0;
  iVar12 = 0;
  local_1f0 = &local_178;
  if (local_160 != 0) {
    FUN_1449c0562(&local_1f8);
    iVar12 = local_160;
  }
  local_278 = local_1e8;
  uVar8 = local_278;
  local_270 = local_1e0;
  local_26c = local_1dc;
  local_288 = local_1f8;
  local_280 = local_1f0;
  local_278._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
  local_290 = (code *)&local_188;
  if ((local_278._4_4_ != iVar12) || (local_1f0 != &local_178)) {
    iVar6 = local_278._4_4_;
    local_278 = uVar8;
    do {
      lVar14 = *(longlong *)(*(longlong *)local_290 + (longlong)iVar6 * 0x10);
      if (lVar14 != 0) {
        local_298 = (undefined8 *)0x0;
        FUN_14485c47a(&local_298,lVar14);
        local_1f8 = local_298;
        iVar6 = FUN_1483f1886(&local_1d8,(uint)((ulonglong)local_298 >> 0x20) ^ (uint)local_298,
                              &local_1f8);
        if (iVar6 == -1) {
          FUN_1483e5b70(lVar14,param_1);
        }
      }
      local_278 = CONCAT44(local_278._4_4_,(uint)local_278 & ~local_288._4_4_);
      FUN_1449c0562(&local_288);
      iVar6 = local_278._4_4_;
      uVar8 = local_278;
    } while (local_290 != (code *)&local_188 ||
             (local_280 != &local_178 || local_278._4_4_ != iVar12));
  }
  local_278 = uVar8;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&uStack_110);
  if (pvStack_250 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_190 = 0;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_1483f100c(&local_1d8);
  local_140 = 0;
  if (local_148 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1483f0f7e(&local_188);
  if (local_208 != 0) {
    FUN_1400020a8();
  }
LAB_141439e05:
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143a76a FUN_14143a76a body=105 status=ok
// SIG undefined FUN_14143a76a(void)

undefined8 FUN_14143a76a(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb499a0;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 14143a7d4 FUN_14143a7d4 body=324 status=ok
// SIG undefined FUN_14143a7d4(void)

undefined8 * FUN_14143a7d4(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14066da9c(param_1,param_2,*(undefined8 *)(param_2 + 0x138),param_3);
  *param_1 = &PTR_FUN_14aa6b050;
  param_1[0x13] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xf00000000;
  cVar2 = '\0';
  cVar1 = '\x02' - (*(char *)(param_2 + 0x140) == '\x01');
  if (*(char *)(param_2 + 0x140) == '\0') {
    cVar1 = cVar2;
  }
  *(char *)((longlong)param_1 + 0x61) = cVar1;
  cVar1 = '\x02' - (*(char *)(param_2 + 0x141) == '\x01');
  if (*(char *)(param_2 + 0x141) == '\0') {
    cVar1 = cVar2;
  }
  *(char *)((longlong)param_1 + 0x62) = cVar1;
  cVar1 = '\x02' - (*(char *)(param_2 + 0x142) == '\x01');
  if (*(char *)(param_2 + 0x142) == '\0') {
    cVar1 = cVar2;
  }
  *(char *)((longlong)param_1 + 99) = cVar1;
  cVar1 = FUN_14143a91a(param_2,(uint)*(byte *)((longlong)param_1 + 0x5b) +
                                ((uint)*(byte *)((longlong)param_1 + 0x5c) -
                                (uint)*(byte *)((longlong)param_1 + 0x5e)),param_1 + 0x14);
  if (cVar1 == '\0') {
    FUN_1400021e4((longlong)param_1 + 0x74,&local_28);
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/Rendering/Texture2DArrayResource.cpp",0x1f,
                  L"Corrupt texture [%s]! Unable to load mips (bulk data missing)",puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14143a91a FUN_14143a91a body=439 status=ok
// SIG undefined FUN_14143a91a(void)

byte FUN_14143a91a(longlong param_1,int param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [47];
  byte local_159;
  longlong local_158 [18];
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar5 = *(longlong *)(param_1 + 0x138);
  iVar6 = 1 - *(int *)(lVar5 + 0x14);
  if (*(int *)(lVar5 + 0x14) < 1) {
    iVar6 = 0;
  }
  uVar7 = (*(int *)(lVar5 + 0x20) - param_2) + iVar6;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[0xe] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  FUN_1401031ac(0,0,local_158);
  local_159 = FUN_143736206(lVar5,param_2,local_c8,local_158 + 2);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if ((0 < (int)uVar7 & local_159) == 1) {
    uVar8 = 0;
    do {
      lVar5 = local_158[uVar8 + 2];
      uVar3 = local_c8[uVar8];
      puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar4[1] = uVar3;
      puVar4[2] = lVar5;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_14aad47f0;
      LOCK();
      puVar4[3] = puVar4[3] | 0x4000000000000000;
      UNLOCK();
      LOCK();
      puVar4[3] = puVar4[3] | 0x1000000000000000;
      UNLOCK();
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = puVar4 + 3;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 0) {
          LOCK();
          puVar4[3] = puVar4[3] + 0x40000000;
          UNLOCK();
        }
      }
      iVar6 = *(int *)(param_3 + 0x80);
      *(uint *)(param_3 + 0x80) = iVar6 + 1U;
      if (*(uint *)(param_3 + 0x84) < iVar6 + 1U) {
        FUN_147d70cc6(param_3,iVar6);
      }
      lVar5 = *(longlong *)(param_3 + 0x78);
      if (*(longlong *)(param_3 + 0x78) == 0) {
        lVar5 = param_3;
      }
      *(undefined8 **)(lVar5 + (longlong)iVar6 * 8) = puVar4;
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_159;
}



// FUNCTION 14143aad2 FUN_14143aad2 body=528 status=ok
// SIG undefined FUN_14143aad2(void)

void FUN_14143aad2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  byte local_b7;
  longlong *local_88;
  longlong local_68;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x74) == '\x01') {
    local_38 = 0;
    FUN_14143acfc(param_1 + 0x80,&local_38,0);
    if (local_38 != 0) {
      iVar3 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x70);
      lVar1 = (longlong)iVar3;
      lVar2 = local_38;
      if ((ulonglong)*(uint5 *)(param_1 + 0x88) == lVar1 * 8) {
        memset(local_e0,0,0x90);
        FUN_144869430(local_e0);
        local_50 = 0;
        local_40 = 0;
        local_b8 = local_b8 | 4;
        local_b7 = local_b7 & 0xfe;
        local_e0[0] = &PTR_FUN_149e1e330;
        local_48 = param_1 + 0xa8;
        FUN_1400ec3e6(param_1 + 0xa8,iVar3 * 6 + 2);
        if (iVar3 != 0) {
          lVar2 = 4;
          do {
            FUN_144adda01(local_e0,local_38 + lVar2 + -4);
            FUN_144adda01(local_e0,local_38 + lVar2 + -2);
            FUN_144adda01(local_e0,local_38 + lVar2);
            lVar2 = lVar2 + 8;
            lVar1 = lVar1 + -1;
          } while (lVar1 != 0);
        }
        FUN_1400020a8(local_38);
        local_e0[0] = &PTR__purecall_149e35f70;
        if (local_88 != (longlong *)0x0) {
          if (*local_88 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_88);
        }
        if (local_68 == 0) goto LAB_14143acae;
        lVar2 = local_68;
        if (*(longlong *)(local_68 + 0x40) != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1400020a8(lVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
    }
  }
LAB_14143acae:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14143acfc FUN_14143acfc body=896 status=ok
// SIG undefined FUN_14143acfc(void)

void FUN_14143acfc(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  undefined1 uVar2;
  uint5 uVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Dst;
  longlong *_Src;
  void *pvVar8;
  ulonglong _Size;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  int local_150;
  undefined1 local_14c [122];
  undefined2 local_d2;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = *(uint5 *)(param_1 + 1);
  uVar2 = *(undefined1 *)((longlong)param_1 + 0xc);
  _Size = (ulonglong)*(uint5 *)(param_1 + 1);
  pvVar8 = (void *)*param_2;
  plVar6 = (longlong *)*param_1;
  if (pvVar8 == (void *)0x0) {
    if (plVar6 == (longlong *)0x0) {
      if (_Size != 0) {
        FUN_1400eecdc(&local_160,_Size);
        local_168 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_160 + 0xc) = *(int *)((longlong)local_160 + 0xc) + 1;
          UNLOCK();
        }
        cVar5 = FUN_1427d88f8(param_1,&local_168);
        if (cVar5 != '\0') {
          if ((*(byte *)((longlong)local_160 + 0x19) & 1) == 0) {
            memcpy(local_14c,L"Cannot call release on a FIoBuffer unless it owns it\'s memory",0x7a)
            ;
            local_d2 = 0;
            local_150 = 0xb;
LAB_14143b06b:
            FUN_1467e8feb(&local_150);
          }
          else {
            lVar7 = *local_160;
            *local_160 = 0;
            *(undefined4 *)(local_160 + 1) = 0;
            *(undefined2 *)(local_160 + 3) = 0;
            iVar4 = DAT_14c845dc8;
            memcpy(local_14c,&DAT_14c845dcc,0x100);
            local_150 = iVar4;
            local_48 = lVar7;
            if (iVar4 != 0) goto LAB_14143b06b;
          }
          *param_2 = local_48;
        }
        if (local_160 == (longlong *)0x0) goto LAB_14143aff1;
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_14143aff1;
        FUN_144716208(local_160);
        goto LAB_14143ae10;
      }
    }
    else {
      if ((param_3 != '\0') &&
         (((*(uint *)((longlong)param_1 + 0x14) & 0x10000008) != 0 ||
          ((int)param_1[4] != DAT_14c845dc4 || param_1[3] != DAT_14c845dbc)))) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 0x1e & 1) == 0) {
          *param_2 = (longlong)plVar6;
          *param_1 = 0;
        }
        else {
          _Dst = (void *)FUN_14001cc68(_Size,0);
          *param_2 = (longlong)_Dst;
          plVar6 = (longlong *)*param_1;
          pvVar8 = (void *)*plVar6;
          if (pvVar8 == (void *)0x0) {
            if (plVar6[2] == 0) {
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = *(void **)(plVar6[2] + 8);
            }
          }
          memcpy(_Dst,pvVar8,_Size);
          if (plVar6 != (longlong *)0x0) {
            FUN_1468886fa(plVar6);
            FUN_1400020a8(plVar6);
          }
          *param_1 = 0;
          *(byte *)((longlong)param_1 + 0x17) = *(byte *)((longlong)param_1 + 0x17) & 0xbf;
        }
        goto LAB_14143aff1;
      }
      if (_Size != 0) {
        lVar7 = FUN_14001cc68(_Size,0);
        *param_2 = lVar7;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_188);
      }
    }
    *param_2 = 0;
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      _Src = plVar6;
      if (((*(byte *)((longlong)param_1 + 0x17) & 0x40) != 0) &&
         (_Src = (longlong *)*plVar6, (longlong *)*plVar6 == (longlong *)0x0)) {
        if (plVar6[2] == 0) {
          _Src = (longlong *)0x0;
        }
        else {
          _Src = *(longlong **)(plVar6[2] + 8);
        }
      }
      memcpy(pvVar8,_Src,_Size);
      if ((param_3 != '\0') &&
         (((*(uint *)((longlong)param_1 + 0x14) & 0x10000008) != 0 ||
          ((int)param_1[4] != DAT_14c845dc4 || param_1[3] != DAT_14c845dbc)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_188);
      }
      goto LAB_14143aff1;
    }
    plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (longlong)pvVar8;
    *(int *)(plVar6 + 1) = (int)uVar3;
    *(undefined1 *)(plVar6 + 3) = uVar2;
    *(undefined1 *)((longlong)plVar6 + 0x19) = 0;
    if (plVar6 == (longlong *)0x0) {
      local_158 = (longlong *)0x0;
      FUN_1427d88f8(param_1);
      goto LAB_14143aff1;
    }
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    local_158 = plVar6;
    FUN_1427d88f8(param_1);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14143aff1;
    FUN_144716208(plVar6);
    local_160 = plVar6;
LAB_14143ae10:
    FUN_1400020a8(local_160);
  }
LAB_14143aff1:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14143b0b8 FUN_14143b0b8 body=501 status=ok
// SIG undefined FUN_14143b0b8(void)

void FUN_14143b0b8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1,local_38);
            goto LAB_14143b181;
          }
        }
        _Src = (longlong *)(lVar1 + *(int *)((longlong)plVar6 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_38,_Src,(int)plVar6[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar6[6];
        local_48 = 0;
        FUN_1400746b0(plVar6,local_38,lVar1,1);
      }
      else {
        (*pcVar2)(plVar6,local_38,lVar1);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
LAB_14143b181:
  plVar6 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar6 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,plVar6);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143b2ae FUN_14143b2ae body=889 status=ok
// SIG undefined FUN_14143b2ae(void)

void FUN_14143b2ae(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  if ((longlong)(int)param_1[8] != 0) {
    piVar10 = (int *)param_1[7];
    piVar1 = piVar10 + (longlong)(int)param_1[8] * 6;
    do {
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        piVar6 = (int *)*param_2;
        lVar9 = (longlong)*(int *)(param_2 + 1) * 0x18;
        do {
          if ((*piVar6 == *piVar10) && (piVar6[2] == piVar10[2])) {
            if (piVar6 != (int *)0x0) {
              lVar9 = *(longlong *)(piVar6 + 4);
              bVar3 = true;
              goto LAB_14143b346;
            }
            break;
          }
          piVar6 = piVar6 + 6;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
      bVar3 = false;
      lVar9 = 0;
LAB_14143b346:
      local_98 = *(undefined8 *)piVar10;
      local_90 = piVar10[2];
      FUN_1448075d0(local_70,&local_98);
      if (DAT_14cb758b8 == 0) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
LAB_14143b3a0:
        if (!(bool)(bVar3 & lVar9 == *(longlong *)(piVar10 + 4))) {
          FUN_14105a360(param_1,piVar10,*(longlong *)(piVar10 + 4),lVar9);
        }
      }
      else {
        lVar7 = FUN_144837462(DAT_14cb758b8,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar4 = uStack_80;
        if (((!bVar3 || lVar7 == 0) || (*(char *)(lVar7 + 0x48) != '\x01')) ||
           ((lVar9 == *(longlong *)(piVar10 + 4) && ((char)param_1[10] != '\0'))))
        goto LAB_14143b3a0;
        *(longlong *)(piVar10 + 4) = lVar9;
        lVar9 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_1446dd912(&local_88,uVar4 & 0xffffffff);
        }
        *(int *)(local_88 + 8 + lVar9 * 0xc) = piVar10[2];
        *(undefined8 *)(local_88 + lVar9 * 0xc) = *(undefined8 *)piVar10;
      }
      piVar10 = piVar10 + 6;
    } while (piVar10 != piVar1);
  }
  if (((char)param_1[10] == '\0') && ((longlong)*(int *)(param_2 + 1) != 0)) {
    piVar10 = (int *)*param_2;
    piVar1 = piVar10 + (longlong)*(int *)(param_2 + 1) * 6;
    do {
      local_a8 = *(undefined8 *)piVar10;
      local_a0 = piVar10[2];
      FUN_1448075d0(local_70,&local_a8);
      if (DAT_14cb758b8 == 0) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar9 = FUN_144837462(DAT_14cb758b8,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x48) == '\x01')) {
          if ((longlong)(int)uStack_80 != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(local_88 + lVar9) == *piVar10) &&
                 (*(int *)(local_88 + 8 + lVar9) == piVar10[2])) goto LAB_14143b4aa;
              lVar9 = lVar9 + 0xc;
            } while ((longlong)(int)uStack_80 * 0xc != lVar9);
          }
          iVar2 = piVar10[4];
          uVar8 = (**(code **)(*param_1 + 0x2a8))(param_1);
          local_b0 = 0;
          local_b8 = 1;
          FUN_1414daf92(param_1,piVar10,iVar2,uVar8);
          uVar4 = uStack_80;
          lVar9 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_1446dd912(&local_88,uVar4 & 0xffffffff);
          }
          *(int *)(local_88 + 8 + lVar9 * 0xc) = piVar10[2];
          *(undefined8 *)(local_88 + lVar9 * 0xc) = *(undefined8 *)piVar10;
        }
      }
LAB_14143b4aa:
      piVar10 = piVar10 + 6;
    } while (piVar10 != piVar1);
  }
  *(undefined1 *)(param_1 + 10) = 1;
  if ((longlong)(int)uStack_80 != 0) {
    lVar9 = (longlong)(int)uStack_80 * 0xc;
    lVar7 = local_88;
    do {
      FUN_1459dc79c(param_1,lVar7,1,0);
      lVar7 = lVar7 + 0xc;
      lVar9 = lVar9 + -0xc;
    } while (lVar9 != 0);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14143b628 FUN_14143b628 body=57 status=ok
// SIG undefined FUN_14143b628(void)

void FUN_14143b628(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_2 * 8), lVar1 != 0))
     && (*(char *)(lVar1 + 0x10) == '\b')) {
    FUN_14143b662();
  }
  return;
}



// FUNCTION 14143b662 FUN_14143b662 body=206 status=ok
// SIG undefined FUN_14143b662(void)

void FUN_14143b662(longlong param_1,longlong param_2,float param_3,undefined8 param_4,char param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x110) == '\x01') {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      iVar3 = *(int *)(param_1 + 0x108);
      *(uint *)(param_1 + 0x108) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x10c) < iVar3 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x100),iVar3);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar3 * 4) = uVar2;
    }
    pfVar4 = *(float **)(param_2 + 0x50);
    pfVar5 = (float *)&DAT_14bb83714;
    if (pfVar4 != (float *)0x0) {
      pfVar5 = pfVar4;
    }
    if ((param_5 == '\0') && (*(char *)(param_2 + 0x48) == '\x01')) {
      if (pfVar4 == (float *)0x0) {
        return;
      }
      if (ABS(*pfVar5 - param_3) <= 1e-08) {
        return;
      }
    }
    else if (pfVar4 == (float *)0x0) {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x110);
    *pfVar4 = param_3;
    *(undefined1 *)(param_2 + 0x48) = uVar1;
  }
  return;
}



// FUNCTION 14143b730 FUN_14143b730 body=3 status=ok
// SIG undefined FUN_14143b730(void)

undefined1 FUN_14143b730(void)

{
  return 1;
}



// FUNCTION 14143b734 FUN_14143b734 body=353 status=ok
// SIG undefined FUN_14143b734(void)

void FUN_14143b734(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14143b7b9;
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
LAB_14143b7b9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14143b896 FUN_14143b896 body=1815 status=ok
// SIG undefined FUN_14143b896(void)

void FUN_14143b896(longlong param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  code *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(byte *)(param_1 + 0x7e) == param_2) {
    if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(byte *)(param_1 + 0x7e) = param_2;
  fVar10 = -1.0;
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x4c))) &&
      ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar5;
    }
    else {
      uVar7 = 0;
    }
    lVar4 = FUN_1447210f0(uVar7);
    if (lVar4 != 0) {
      fVar10 = (float)*(double *)(lVar4 + 0x6d0);
    }
  }
  *(float *)(param_1 + 0x6c) = fVar10;
  lVar4 = DAT_14c9647c8;
  bVar9 = (param_2 & 0xfe) == 2;
  if ((((bool)*(char *)(param_1 + 0x108) != bVar9) && (iVar3 = *(int *)(param_1 + 0x4c), iVar3 != 0)
      ) && ((uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == iVar3)) &&
       ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) {
      *(bool *)(param_1 + 0x108) = bVar9;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != iVar3)) ||
         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar5;
      }
      FUN_1407934de(&local_70,uVar7);
      if (local_70 != 0) {
        if (*(char *)(param_1 + 0x108) == '\x01') {
          lVar4 = local_70 + 0x18;
          local_60 = FUN_145bdce72;
          local_58 = 0;
          FUN_1466257be(&local_88,param_1);
          FUN_145bee228(lVar4,&local_60,&local_88);
          if (iStack_80 == 0) {
LAB_14143ba9f:
            if (CONCAT44(uStack_84,local_88) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar5 = (undefined8 *)CONCAT44(uStack_84,local_88);
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,0);
              FUN_1446efa72(&local_88,0,0,0x10);
              iStack_80 = 0;
              goto LAB_14143ba9f;
            }
          }
          *(code **)(param_1 + 0x110) = local_60;
          lVar4 = local_70 + 0x30;
          local_60 = FUN_141366fea;
          local_58 = 0;
          FUN_14662596a(&local_88,param_1);
          FUN_145bee40e(lVar4,&local_60,&local_88);
          if (iStack_80 == 0) {
LAB_14143bb2f:
            if (CONCAT44(uStack_84,local_88) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar5 = (undefined8 *)CONCAT44(uStack_84,local_88);
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,0);
              FUN_1446efa72(&local_88,0,0,0x10);
              iStack_80 = 0;
              goto LAB_14143bb2f;
            }
          }
          *(code **)(param_1 + 0x118) = local_60;
          lVar4 = local_70 + 0x48;
          local_60 = (code *)&LAB_1414d624c;
          local_58 = 0;
          FUN_1466257be(&local_88,param_1);
          FUN_145bee228(lVar4,&local_60,&local_88);
          if (iStack_80 == 0) {
LAB_14143bbbf:
            if (CONCAT44(uStack_84,local_88) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar5 = (undefined8 *)CONCAT44(uStack_84,local_88);
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,0);
              FUN_1446efa72(&local_88,0,0,0x10);
              iStack_80 = 0;
              goto LAB_14143bbbf;
            }
          }
          *(code **)(param_1 + 0x120) = local_60;
          FUN_1414dbe94(local_70,&local_88);
          lVar4 = CONCAT44(uStack_84,local_88);
          if ((longlong)iStack_80 != 0) {
            lVar8 = (longlong)iStack_80 * 0x38;
            do {
              if ((*(int *)(lVar4 + 0xc) == 0) || (uVar2 = *(uint *)(lVar4 + 8), (int)uVar2 < 0)) {
LAB_14143bc63:
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((int)uVar2 < DAT_14c9647dc) {
                  puVar5 = (undefined8 *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((puVar5 == (undefined8 *)0x0) ||
                      (*(int *)(puVar5 + 2) != *(int *)(lVar4 + 0xc))) ||
                     ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_14143bc63;
                  uVar7 = *puVar5;
                }
              }
              FUN_145bdce72(param_1,lVar4,uVar7);
              lVar4 = lVar4 + 0x38;
              lVar8 = lVar8 + -0x38;
            } while (lVar8 != 0);
            lVar4 = CONCAT44(uStack_84,local_88);
          }
          if (lVar4 != 0) {
            FUN_1400020a8(lVar4);
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x110) != 0) {
            FUN_14480f766(local_70 + 0x18);
            *(undefined8 *)(param_1 + 0x110) = 0;
          }
          if (*(longlong *)(param_1 + 0x118) != 0) {
            FUN_14480f766(local_70 + 0x30);
            *(undefined8 *)(param_1 + 0x118) = 0;
          }
          if (*(longlong *)(param_1 + 0x120) != 0) {
            FUN_14480f766(local_70 + 0x48);
            *(undefined8 *)(param_1 + 0x120) = 0;
          }
          iVar3 = *(int *)(param_1 + 0xe4);
          FUN_14592ed47(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
          *(undefined4 *)(param_1 + 0xe0) = 0;
          if ((iVar3 < 0) && (*(int *)(param_1 + 0xe4) != 0)) {
            FUN_148d18952(param_1 + 0xd8);
          }
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_68 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
  }
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x84) = 0;
    FUN_14625c91a(param_1);
    goto LAB_14143bf53;
  case 1:
    *(float *)(param_1 + 0x68) = fVar10;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1466251a4(param_1,*(longlong *)(param_1 + 0x50) + 0x60);
    }
    if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2))
         && ((int)uVar2 < DAT_14c9647dc)) &&
        ((puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x4c))))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar7 = *puVar5;
      }
      else {
        uVar7 = 0;
      }
      FUN_1441ef86a(uVar7);
    }
LAB_14143bf53:
    FUN_14154b38e(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_146625222(param_1,&local_88);
    *(undefined8 *)(param_1 + 0xa0) = local_78;
    *(undefined4 *)(param_1 + 0x90) = local_88;
    *(undefined4 *)(param_1 + 0x94) = uStack_84;
    *(int *)(param_1 + 0x98) = iStack_80;
    *(undefined4 *)(param_1 + 0x9c) = uStack_7c;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    FUN_14622cec8(param_1);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1466251a4(param_1,*(longlong *)(param_1 + 0x50) + 0x90);
    }
    if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2))
        && (((int)uVar2 < DAT_14c9647dc &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x4c))))))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar6;
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(lVar4 + 0xf48) != 0) {
        FUN_1459dd0c6();
      }
    }
    uVar7 = 0;
    FUN_1459dd250(param_1,0);
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x48);
      uVar7 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x4c) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = *puVar5;
        }
      }
    }
    FUN_1459dd192(uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14143bfcc FUN_14143bfcc body=1157 status=ok
// SIG undefined FUN_14143bfcc(void)

void FUN_14143bfcc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            goto LAB_14143c0b7;
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
LAB_14143c0b7:
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_31);
            goto LAB_14143c180;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_31,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_31,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_31,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
LAB_14143c180:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14143c452(param_1,local_30,local_31);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143c452 FUN_14143c452 body=195 status=ok
// SIG undefined FUN_14143c452(void)

void FUN_14143c452(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if ((((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x2c))) &&
      ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      plVar3 = (longlong *)*puVar4;
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    do {
      if (plVar3[5] != 0) {
        lVar2 = *(longlong *)(plVar3[5] + 0x30);
        if (lVar2 == 0) {
          return;
        }
        lVar2 = *(longlong *)(lVar2 + 0x360);
        if (lVar2 == 0) {
          return;
        }
        lVar2 = FUN_140149a73(lVar2,0);
        if (lVar2 == 0) {
          return;
        }
        if (*(longlong **)(lVar2 + 0x140) == (longlong *)0x0) {
          return;
        }
        lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0xa8))();
        if (lVar2 == 0) {
          return;
        }
        *(undefined1 *)(lVar2 + 0xfa) = 1;
        return;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
    } while (plVar3 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14143c516 FUN_14143c516 body=31 status=ok
// SIG undefined FUN_14143c516(void)

void FUN_14143c516(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4741c8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14143c535 FUN_14143c535 body=91 status=ok
// SIG undefined FUN_14143c535(void)

void FUN_14143c535(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(param_2 + lVar4);
      *(longlong **)(param_1 + lVar4) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar1 = param_1 + lVar4;
      lVar2 = param_2 + lVar4;
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar2 + 0x18);
      lVar4 = lVar4 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14143c590 FUN_14143c590 body=375 status=ok
// SIG undefined FUN_14143c590(void)

undefined8 * FUN_14143c590(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14143c714 FUN_14143c714 body=1936 status=ok
// SIG undefined FUN_14143c714(void)

void FUN_14143c714(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  uint *local_170;
  undefined1 *local_168;
  code *local_160;
  int local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined2 local_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  int local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 local_fc [4];
  uint local_f8 [4];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar5 = (longlong *)FUN_1400d7050(param_1 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_170 = local_f8;
      local_f8[0] = 0x41030f22;
      local_f8[1] = 1;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_1459f2e4c;
      local_178 = &LAB_148c39de3;
      local_180 = &LAB_1457a9eb2;
      local_188 = &DAT_149e063b2;
      local_190 = 0;
      local_198 = 0x10000004;
      local_1a0 = 0x10;
      local_1a8 = (undefined2 *)CONCAT44(local_1a8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      if ((char)plVar5[0x657] == '\0') {
        local_118 = 0;
        lVar11 = FUN_14475ec7e(param_1);
        if (*(longlong *)(lVar11 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar11 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
        }
        uVar6 = *puVar9;
        local_110 = (longlong *)0x0;
        local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
        FUN_1446efa72(&local_110,0,3,0x10);
        plVar5 = local_110;
        local_108 = (longlong *)CONCAT44(local_108._4_4_,3);
        *local_110 = (longlong)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        local_110[2] = lVar13;
        *local_110 = (longlong)&PTR_FUN_14b9a98f0;
        local_110[3] = 0;
        iVar10 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_110 + 3) = uVar1;
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
            iVar12 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar10 = *(int *)(lVar11 + 0x10);
            bVar14 = iVar10 == 0;
            if (bVar14) {
              *(int *)(lVar11 + 0x10) = iVar12;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar10 = iVar12;
            }
          }
        }
        *(int *)((longlong)plVar5 + 0x1c) = iVar10;
        plVar5[4] = param_1;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_f8[2] = 0;
        FUN_14487d8d8(local_f8,&local_110);
        plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,1);
        local_1a8 = &local_128;
        local_128 = 0;
        uStack_124 = 0xbf800000;
        FUN_1406f4044(uVar6,&local_118,local_f8,0x3f000000);
        (*(code *)(&PTR_LAB_14a1c87a0)[(ulonglong)plStack_b8 & 0xff])(local_f8);
        plVar5 = local_110;
        if ((int)local_108 != 0) {
          if (local_110 == (longlong *)0x0) goto LAB_14143c975;
          (**(code **)*local_110)(local_110,0);
          FUN_1446efa72(&local_110,0,0,0x10);
          local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
          plVar5 = local_110;
        }
      }
      else {
        uVar6 = FUN_140f7e331();
        FUN_14111d472(uVar6,&local_128);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x14d0))(plVar5);
        if (plVar7 != (longlong *)0x0) {
          local_140 = param_1 + 0x50;
          FUN_145cc7936(local_140,0);
          local_148 = (longlong)local_120;
          if (local_148 != 0) {
            local_138 = CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
            local_148 = local_148 << 3;
            lVar11 = 0;
            do {
              local_118 = *(longlong *)(local_138 + lVar11);
              if (local_118 != 0) {
                local_f8[0] = local_f8[0] & 0xffffff00;
                local_f8[1] = 0;
                local_f8[2] = 0;
                local_f8[3] = 0;
                local_e8 = 0;
                uStack_d4 = 0;
                iStack_d0 = 0;
                local_e4 = 0;
                uStack_dc = 0;
                uStack_d8 = 0;
                local_c8 = 0xc69c4000;
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                local_80 = 0;
                local_90 = 0;
                uStack_88 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                local_b0 = 0;
                uStack_a8 = 0;
                local_c0 = 0;
                local_67 = 1;
                local_65 = 0;
                local_64 = 0;
                local_110 = (longlong *)0x0;
                local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
                plStack_b8 = plVar5;
                FUN_1446efa72(&local_110,0,3,0x10);
                plVar2 = local_110;
                local_108._0_4_ = 3;
                *local_110 = (longlong)&PTR_LAB_14b3e6310;
                LOCK();
                UNLOCK();
                lVar8 = DAT_14c758608 + 1;
                lVar13 = DAT_14c758608 + 1;
                if (lVar8 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar8 = DAT_14c758608 + 2;
                  lVar13 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar13;
                local_110[2] = lVar8;
                *local_110 = (longlong)&PTR_FUN_14b9a9960;
                local_110[3] = 0;
                if (param_1 == 0) {
                  iVar10 = 0;
                }
                else {
                  uVar1 = *(uint *)(param_1 + 0xc);
                  *(uint *)(local_110 + 3) = uVar1;
                  if ((int)uVar1 < DAT_14c9647dc) {
                    lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar13 = 0;
                  }
                  iVar10 = *(int *)(lVar13 + 0x10);
                  if (*(int *)(lVar13 + 0x10) == 0) {
                    LOCK();
                    iVar10 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar10;
                    if (bVar14) {
                      local_14c = iVar12;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                      iVar12 = local_14c;
                    }
                    LOCK();
                    iVar10 = *(int *)(lVar13 + 0x10);
                    bVar14 = iVar10 == 0;
                    if (bVar14) {
                      *(int *)(lVar13 + 0x10) = iVar12;
                      iVar10 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      iVar10 = iVar12;
                    }
                  }
                }
                uVar4 = (int)local_108;
                plVar3 = local_110;
                *(int *)((longlong)plVar2 + 0x1c) = iVar10;
                plVar2[4] = (longlong)FUN_1442578d6;
                *(undefined4 *)(plVar2 + 5) = 0;
                local_110 = (longlong *)0x0;
                local_108 = (longlong *)((ulonglong)local_108._4_4_ << 0x20);
                if (iStack_d0 == 0) {
LAB_14143cbac:
                  if (CONCAT44(uStack_d4,uStack_d8) != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  puVar9 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
                  if (puVar9 != (undefined8 *)0x0) {
                    (**(code **)*puVar9)(puVar9,0);
                    FUN_1446efa72(&uStack_d8,0,0,0x10);
                    iStack_d0 = 0;
                    goto LAB_14143cbac;
                  }
                }
                uStack_d8 = SUB84(plVar3,0);
                uStack_d4 = (undefined4)((ulonglong)plVar3 >> 0x20);
                iStack_d0 = uVar4;
                if ((int)local_108 == 0) {
LAB_14143cc33:
                  if (local_110 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_110 != (longlong *)0x0) {
                  (**(code **)*local_110)(local_110,0);
                  FUN_1446efa72(&local_110,0,0,0x10);
                  local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
                  goto LAB_14143cc33;
                }
                (**(code **)(*plVar7 + 0x28))(plVar7,&local_130,local_118 + 0x90,local_f8);
                if (local_130 != 0) {
                  local_110 = &local_118;
                  local_108 = &local_130;
                  FUN_1412f9e04(local_140,local_fc,&local_110,0);
                }
                FUN_1409838b8(local_f8);
              }
              lVar11 = lVar11 + 8;
            } while (local_148 != lVar11);
          }
        }
        plVar5 = (longlong *)CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14143c975:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14143cea6 FUN_14143cea6 body=26 status=ok
// SIG undefined FUN_14143cea6(void)

void FUN_14143cea6(longlong param_1)

{
  FUN_1400ea934();
  *(byte *)(param_1 + 0x675) = *(byte *)(param_1 + 0x675) & 0xbf;
  return;
}



// FUNCTION 14143cec0 FUN_14143cec0 body=426 status=ok
// SIG undefined FUN_14143cec0(void)

void FUN_14143cec0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar4 = (int)param_3[1];
  if ((longlong)iVar4 < 1) {
    uVar13 = 0;
  }
  else {
    lVar9 = 0;
    uVar13 = 0;
    do {
      uVar2 = *(ushort *)(*param_3 + lVar9 * 2);
      uVar5 = ((uint)uVar2 + (uint)(0x19 < uVar2 - 0x61) * 0x20) - 0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar5) & 0xff) * 4);
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
      lVar9 = lVar9 + 1;
    } while (iVar4 != (int)lVar9);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar9 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x48);
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar13) * 4);
    if (iVar10 != -1) {
      lVar9 = *(longlong *)(param_1 + 8);
LAB_14143cf78:
      lVar7 = (longlong)iVar10;
      uVar13 = *(uint *)(lVar9 + 8 + lVar7 * 0x28);
      iVar6 = uVar13 - 1;
      if (uVar13 == 0) {
        iVar6 = 0;
      }
      if (iVar6 == iVar4) {
        plVar1 = (longlong *)(lVar9 + lVar7 * 0x28);
        if ((iVar4 != 0) && (1 < uVar13)) {
          lVar11 = 0;
          lVar12 = (longlong)iVar4;
          do {
            uVar2 = *(ushort *)(*plVar1 + lVar11);
            uVar3 = *(ushort *)(*param_3 + lVar11);
            if (uVar2 == uVar3) {
              if (uVar2 == 0) goto LAB_14143d005;
            }
            else {
              if (0x7f < (uVar3 | uVar2)) {
                iVar6 = (uint)uVar2 - (uint)uVar3;
                goto LAB_14143d001;
              }
              if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
              goto code_r0x00014143cfff;
            }
            lVar12 = lVar12 + -1;
            if (lVar12 == 0) goto LAB_14143d005;
            lVar11 = lVar11 + 2;
          } while( true );
        }
        goto LAB_14143d00b;
      }
      goto LAB_14143cf90;
    }
  }
LAB_14143d052:
  *param_2 = 0;
  param_2[1] = 0;
  return;
code_r0x00014143cfff:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14143d001:
  if (iVar6 == 0) {
LAB_14143d005:
    if (iVar10 != -1) {
LAB_14143d00b:
      if (((plVar1 != (longlong *)0x0) && ((int)plVar1[3] != 0)) &&
         (puVar8 = (undefined8 *)((longlong)((int)plVar1[3] + -1) * 0x10 + plVar1[2]),
         puVar8 != (undefined8 *)0x0)) {
        *param_2 = *puVar8;
        lVar9 = puVar8[1];
        param_2[1] = lVar9;
        if (lVar9 == 0) {
          return;
        }
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        return;
      }
    }
    goto LAB_14143d052;
  }
LAB_14143cf90:
  iVar10 = *(int *)(lVar9 + 0x20 + lVar7 * 0x28);
  if (iVar10 == -1) goto LAB_14143d052;
  goto LAB_14143cf78;
}



// FUNCTION 14143d06a FUN_14143d06a body=22 status=ok
// SIG undefined FUN_14143d06a(void)

undefined8 FUN_14143d06a(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb77e00;
  if (DAT_14cb77e00 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb77e00 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb77e00 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb77e00[0x3a] <= *(int *)((longlong)DAT_14cb77e00 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb77e00 + 0x300))(DAT_14cb77e00);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14143d080 FUN_14143d080 body=37 status=ok
// SIG undefined FUN_14143d080(void)

void FUN_14143d080(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x7e8);
  FUN_14143d0a6(param_2);
  return;
}



// FUNCTION 14143d0a6 FUN_14143d0a6 body=922 status=ok
// SIG undefined FUN_14143d0a6(void)

undefined8 * FUN_14143d0a6(undefined8 *param_1)

{
  byte bVar1;
  
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0d9fd0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x37) = 4;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  bVar1 = DAT_14c9a8634;
  *(bool *)(param_1 + 0x39) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 4;
  *(undefined4 *)(param_1 + 0x3b) = 0x40000000;
  *(undefined1 *)(param_1 + 0x3f) = 3;
  *(char *)(param_1 + 0x40) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x45) = 4;
  *(undefined4 *)(param_1 + 0x42) = 1;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(bool *)(param_1 + 0x47) = (bVar1 & 0x20) == 0;
  FUN_140785382(param_1 + 0x48,0xb);
  FUN_140785382(param_1 + 0x4f,0xb);
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2b2) = 0;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 4;
  *(undefined4 *)(param_1 + 0x58) = 5;
  *(undefined1 *)(param_1 + 0x5c) = 2;
  *(byte *)(param_1 + 0x5d) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x61] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0xffffffff00000000;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0x200000000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0x2000000000;
  param_1[0x8f] = 0xffffffff;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0x200000000;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0x2000000000;
  param_1[0x9c] = 0xffffffff;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0x200000000;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0x2000000000;
  param_1[0xa9] = 0xffffffff;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0xffffffff00000000;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0x200000000;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0x2000000000;
  param_1[0xde] = 0xffffffff;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0x200000000;
  param_1[0xe9] = 0;
  param_1[0xea] = 0x2000000000;
  param_1[0xeb] = 0xffffffff;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0x200000000;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0x2000000000;
  param_1[0xf8] = 0xffffffff;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  param_1[0xfc] = 0;
  return param_1;
}



// FUNCTION 14143d440 FUN_14143d440 body=1839 status=ok
// SIG undefined FUN_14143d440(void)

int * FUN_14143d440(int *param_1,undefined8 param_2)

{
  int *_Src;
  int *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  
  iVar11 = DAT_14ca805d8;
  iVar14 = DAT_14ca805b0;
  if (DAT_14ca805dc == 0) {
    iVar11 = DAT_14ca805b0 + 1;
    bVar15 = DAT_14ca805b4 == DAT_14ca805b0;
    DAT_14ca805b0 = iVar11;
    if (bVar15) {
      FUN_1459e054e(iVar14);
    }
    iVar11 = DAT_14ca805d0;
    if (DAT_14ca805d0 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = DAT_14ca805d0 + 0x1e;
      if (-1 < DAT_14ca805d0 + -1) {
        iVar2 = DAT_14ca805d0 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    iVar8 = DAT_14ca805d0 + 1;
    iVar4 = DAT_14ca805d0 + 0x1f;
    if (-1 < DAT_14ca805d0) {
      iVar4 = DAT_14ca805d0;
    }
    if (iVar4 >> 5 != iVar2) {
      if (DAT_14ca805d4 <= DAT_14ca805d0) {
        if (DAT_14ca805d0 + 0x20U < 0xa0) {
          DAT_14ca805d4 = 0x80;
        }
        else {
          uVar3 = DAT_14ca805d0 + 0x20U >> 5;
          if (DAT_14ca805d4 + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar3) {
              uVar12 = uVar3;
            }
          }
          else {
            uVar12 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar12 << 2,0);
          iVar2 = (int)(uVar5 >> 2);
          DAT_14ca805d4 = -0x20;
          if ((int)uVar3 <= iVar2) {
            DAT_14ca805d4 = iVar2 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14ca805b8,DAT_14ca805d0);
        iVar8 = DAT_14ca805d0 + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      if (iVar8 % 0x20 != 0) {
        puVar10 = &DAT_14ca805b8;
        if (DAT_14ca805c8 != (undefined *)0x0) {
          puVar10 = DAT_14ca805c8;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        DAT_14ca805d0 = iVar8;
        *(uint *)(puVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
        iVar8 = DAT_14ca805d0;
      }
    }
    DAT_14ca805d0 = iVar8;
    lVar13 = (longlong)iVar14;
    puVar10 = &DAT_14ca805b8;
    if (DAT_14ca805c8 != (undefined *)0x0) {
      puVar10 = DAT_14ca805c8;
    }
    bVar6 = (byte)iVar11 & 0x1f;
    *(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    iVar11 = iVar14;
  }
  else {
    lVar13 = (longlong)DAT_14ca805d8;
    DAT_14ca805d8 = *(int *)(DAT_14ca805a8 + 4 + lVar13 * 0x200);
    DAT_14ca805dc = DAT_14ca805dc + -1;
    if (DAT_14ca805dc != 0) {
      *(undefined4 *)(DAT_14ca805a8 + (longlong)DAT_14ca805d8 * 0x200) = 0xffffffff;
    }
  }
  puVar10 = &DAT_14ca805b8;
  if (DAT_14ca805c8 != (undefined *)0x0) {
    puVar10 = DAT_14ca805c8;
  }
  iVar14 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar14 = iVar11;
  }
  *(uint *)(puVar10 + (longlong)(iVar14 >> 5) * 4) =
       *(uint *)(puVar10 + (longlong)(iVar14 >> 5) * 4) | 1 << ((byte)iVar11 & 0x1f);
  lVar1 = DAT_14ca805a8;
  iVar14 = 1;
  _Src = (int *)(DAT_14ca805a8 + lVar13 * 0x200);
  FUN_14143db70(_Src,param_2);
  *(undefined4 *)(lVar1 + 0x1f8 + lVar13 * 0x200) = 0xffffffff;
  uVar3 = FUN_140975dc5(_Src);
  lVar13 = DAT_14ca805a8;
  uVar12 = DAT_14ca805b0 - DAT_14ca805dc;
  if ((uVar12 != 0) && (uVar12 != 1)) {
    puVar9 = &DAT_14ca805e0;
    if (DAT_14ca805e8 != (undefined4 *)0x0) {
      puVar9 = DAT_14ca805e8;
    }
    iVar2 = puVar9[DAT_14ca805f0 - 1U & uVar3];
    if (iVar2 != -1) {
      iVar8 = *_Src;
      do {
        _Dst = (int *)(lVar13 + (longlong)iVar2 * 0x200);
        if (_Dst == _Src) goto LAB_14143db46;
        if (*_Dst == iVar8) {
          if (iVar8 == 1) {
            iVar4 = _Src[0x41];
            iVar7 = _Dst[0x41];
            bVar15 = iVar7 == iVar4;
            if (iVar7 < iVar4) {
              iVar4 = iVar7;
            }
            if (iVar4 != 0) {
              iVar7 = 0;
              do {
                bVar15 = (bool)(bVar15 & *(longlong *)(_Dst + (longlong)iVar7 * 2 + 0x1f) ==
                                         *(longlong *)(_Src + (longlong)iVar7 * 2 + 0x1f));
                iVar7 = iVar7 + 1;
              } while (iVar4 != iVar7);
            }
            if ((((((((_Dst[0x73] == _Src[0x73]) &&
                     (_Src[10] == _Dst[10] &&
                      *(undefined1 (*) [16])(_Src + 6) == *(undefined1 (*) [16])(_Dst + 6))) &&
                    (_Src[0xf] == _Dst[0xf] &&
                     *(undefined1 (*) [16])(_Src + 0xb) == *(undefined1 (*) [16])(_Dst + 0xb))) &&
                   ((_Src[0x14] == _Dst[0x14] &&
                     *(undefined1 (*) [16])(_Src + 0x10) == *(undefined1 (*) [16])(_Dst + 0x10) &&
                    (_Src[0x19] == _Dst[0x19] &&
                     *(undefined1 (*) [16])(_Src + 0x15) == *(undefined1 (*) [16])(_Dst + 0x15)))))
                  && (_Src[0x1e] == _Dst[0x1e] &&
                      *(undefined1 (*) [16])(_Src + 0x1a) == *(undefined1 (*) [16])(_Dst + 0x1a)))
                 && (((_Dst[0x6c] == _Src[0x6c] && (_Dst[0x6d] == _Src[0x6d])) &&
                     (((char)_Dst[0x6e] == (char)_Src[0x6e] &&
                      (((*(longlong *)(_Dst + 0x70) == *(longlong *)(_Src + 0x70) &&
                        ((char)_Dst[0x72] == (char)_Src[0x72])) &&
                       (*(char *)((longlong)_Dst + 0x1ca) == *(char *)((longlong)_Src + 0x1ca)))))))
                    )) && (((*(char *)((longlong)_Dst + 0x1c9) == *(char *)((longlong)_Src + 0x1c9)
                            && (*(char *)((longlong)_Dst + 0x1cb) ==
                                *(char *)((longlong)_Src + 0x1cb))) &&
                           (((char)_Dst[0x74] == (char)_Src[0x74] &&
                            ((((*(char *)((longlong)_Dst + 0x1d1) ==
                                *(char *)((longlong)_Src + 0x1d1) &&
                               (*(char *)((longlong)_Dst + 0x1d2) ==
                                *(char *)((longlong)_Src + 0x1d2))) &&
                              ((*(char *)((longlong)_Dst + 0x1d3) ==
                                *(char *)((longlong)_Src + 0x1d3) &&
                               ((((char)_Dst[0x75] == (char)_Src[0x75] &&
                                 (iVar4 = memcmp(_Dst + 0x43,_Src + 0x43,0x3a), iVar4 == 0)) &&
                                (_Dst[0x54] == _Src[0x54] &&
                                 *(longlong *)(_Dst + 0x52) == *(longlong *)(_Src + 0x52))))))) &&
                             ((*(longlong *)((longlong)_Dst + 0x15a) ==
                               *(longlong *)((longlong)_Src + 0x15a) &&
                               *(longlong *)(_Dst + 0x55) == *(longlong *)(_Src + 0x55) &&
                              (*(longlong *)((longlong)_Dst + 0x162) ==
                               *(longlong *)((longlong)_Src + 0x162))))))))))) &&
               (iVar4 = memcmp(_Dst + 0x5c,_Src + 0x5c,0x40), (bool)(bVar15 & iVar4 == 0))) {
              if (iVar2 != -1) goto LAB_14143db46;
              break;
            }
          }
          else if (iVar8 == 0) {
            if (_Src[5] == _Dst[5] &&
                *(undefined1 (*) [16])(_Src + 1) == *(undefined1 (*) [16])(_Dst + 1)) {
LAB_14143db46:
              memmove(_Dst,_Src,0x1f8);
              FUN_147409a8a(&DAT_14ca805a8,iVar11);
              iVar11 = iVar2;
              goto LAB_14143d6d5;
            }
          }
          else if ((iVar8 != 2) ||
                  ((_Src[0x7a] == _Dst[0x7a] &&
                    *(undefined1 (*) [16])(_Src + 0x76) == *(undefined1 (*) [16])(_Dst + 0x76) &&
                   ((char)_Dst[0x7c] == (char)_Src[0x7c])))) goto LAB_14143db46;
        }
        iVar2 = *(int *)(lVar13 + 0x1f8 + (longlong)iVar2 * 0x200);
      } while (iVar2 != -1);
    }
  }
  if (3 < uVar12) {
    uVar5 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar14 <= DAT_14ca805f0)) {
    uVar3 = DAT_14ca805f0 - 1U & uVar3;
    _Src[0x7f] = uVar3;
    puVar9 = DAT_14ca805e8;
    if (DAT_14ca805e8 == (undefined4 *)0x0) {
      puVar9 = &DAT_14ca805e0;
    }
    _Src[0x7e] = puVar9[(longlong)DAT_14ca805f0 - 1U & (longlong)(int)uVar3];
    puVar9 = DAT_14ca805e8;
    if (DAT_14ca805e8 == (undefined4 *)0x0) {
      puVar9 = &DAT_14ca805e0;
    }
    puVar9[(longlong)DAT_14ca805f0 - 1U & (longlong)(int)uVar3] = iVar11;
  }
  else {
    DAT_14ca805f0 = iVar14;
    FUN_14143dc72();
  }
LAB_14143d6d5:
  *param_1 = iVar11;
  return param_1;
}



// FUNCTION 14143db70 FUN_14143db70 body=257 status=ok
// SIG undefined FUN_14143db70(void)

int * FUN_14143db70(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  param_1[0x41] = 0;
  param_1[0x42] = 0x11;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  lVar5 = 0x112;
  do {
    *(undefined4 *)((longlong)param_1 + lVar5 + -6) = 0x100;
    *(undefined2 *)((longlong)param_1 + lVar5 + -2) = 1;
    *(undefined1 *)((longlong)param_1 + lVar5) = 0xf;
    lVar5 = lVar5 + 7;
  } while (lVar5 != 0x14a);
  param_1[0x54] = 0;
  param_1[0x55] = 0x7000101;
  param_1[0x56] = 0;
  param_1[0x57] = 7;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0xffff;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 6;
  if (iVar1 == 0) {
    param_1[5] = param_2[5];
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  else if (iVar1 == 1) {
    memcpy(param_1 + 6,param_2 + 6,0x1c0);
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x76);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar4 = *(undefined8 *)(param_2 + 0x7b);
    *(undefined8 *)(param_1 + 0x79) = *(undefined8 *)(param_2 + 0x79);
    *(undefined8 *)(param_1 + 0x7b) = uVar4;
    *(undefined8 *)(param_1 + 0x76) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
  }
  return param_1;
}



// FUNCTION 14143dc72 FUN_14143dc72 body=605 status=ok
// SIG undefined FUN_14143dc72(void)

void FUN_14143dc72(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca805e8 != (undefined4 *)0x0) {
    FUN_1446efa72(&DAT_14ca805e8,0,0,4);
  }
  uVar12 = DAT_14ca805f0;
  if (DAT_14ca805f0 != 0) {
    FUN_144a1cbf0(&DAT_14ca805e0,0,DAT_14ca805f0,4);
    if (0 < (int)uVar12) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14ca805e8;
        if (DAT_14ca805e8 == (undefined4 *)0x0) {
          puVar7 = &DAT_14ca805e0;
        }
        puVar7[DAT_14ca805f0 + 0x7fffffff & uVar3] = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar12 != uVar3);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14ca805b8;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14ca805d0 == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    puVar2 = local_60;
    iVar14 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar9 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        lVar11 = DAT_14ca805a8;
        lVar10 = (longlong)iVar6 * 0x200;
        iVar4 = FUN_140975dc5(lVar10 + DAT_14ca805a8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14ca805f0 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar11 + 0x1fc + lVar10) = iVar4;
        puVar7 = DAT_14ca805e8;
        if (DAT_14ca805e8 == (undefined4 *)0x0) {
          puVar7 = &DAT_14ca805e0;
        }
        *(undefined4 *)(lVar11 + 0x1f8 + lVar10) = puVar7[(longlong)(int)DAT_14ca805f0 - 1U & uVar5]
        ;
        puVar7 = DAT_14ca805e8;
        if (DAT_14ca805e8 == (undefined4 *)0x0) {
          puVar7 = &DAT_14ca805e0;
        }
        puVar7[(longlong)iVar4 & (longlong)(int)DAT_14ca805f0 - 1U] = iVar6;
        uVar12 = ~(uint)uVar13 & uVar12;
        puVar8 = *(undefined **)(puVar2 + 0x10);
        if (*(undefined **)(puVar2 + 0x10) == (undefined *)0x0) {
          puVar8 = puVar2;
        }
        iVar4 = *(int *)(puVar2 + 0x18);
        lVar11 = (longlong)iVar14;
        uVar3 = *(uint *)(puVar8 + lVar11 * 4) & uVar12;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar1 = iVar6;
          if (iVar6 < iVar14) {
            iVar1 = iVar14;
          }
          if (iVar6 <= iVar14) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar8 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar1 - lVar11 == lVar10) goto LAB_14143de82;
          }
          iVar14 = iVar14 + (int)lVar10 + 1;
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar3 & uVar3);
        uVar5 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar4);
    }
  }
LAB_14143de82:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143ded0 FUN_14143ded0 body=460 status=ok
// SIG undefined FUN_14143ded0(void)

void FUN_14143ded0(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U &
                 (longlong)
                 (int)(*(int *)(lVar3 + 0x14 + lVar6 * 0x48) << 8 |
                       *(int *)(lVar3 + 0xc + lVar6 * 0x48) << 0x10 |
                       *(int *)(lVar3 + 0x30 + lVar6 * 0x48) << 0x18 |
                      *(uint *)(lVar3 + 0x18 + lVar6 * 0x48));
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 14143e09e thunk_FUN_140b54316 body=5 status=ok
// SIG undefined thunk_FUN_140b54316(void)

void thunk_FUN_140b54316(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      ppcStack_40 = &pcStack_20;
      pcStack_20 = FUN_141030f22;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_142b4754c;
      puStack_48 = &LAB_1483e40eb;
      puStack_50 = &LAB_146486986;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10000005;
      uStack_70 = 8;
      uStack_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x398), lVar1 != 0)) {
      uVar2 = (**(code **)(*param_1 + 0xb20))(param_1);
      *(undefined1 *)(lVar1 + 0x695) = uVar2;
      *(undefined1 *)(lVar1 + 0x696) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143e0a4 FUN_14143e0a4 body=511 status=ok
// SIG undefined FUN_14143e0a4(void)

void FUN_14143e0a4(void)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
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
  if (DAT_14cb886d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb886d8,0,0,4);
  }
  uVar2 = DAT_14cb886e0;
  uVar3 = local_60;
  if (DAT_14cb886e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb886d0,0,DAT_14cb886e0,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14cb886d8;
        if (DAT_14cb886d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb886d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb886e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb886a8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb886c0 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb88698;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar8 = local_60._4_4_;
      local_60 = uVar3;
      do {
        piVar1 = (int *)(*local_78 + (longlong)iVar8 * 0x18);
        if (piVar1[2] == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,piVar1[2]);
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cb886e0 - 1U;
        iVar4 = (int)uVar5;
        piVar1[5] = iVar4;
        puVar6 = DAT_14cb886d8;
        if (DAT_14cb886d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb886d0;
        }
        piVar1[4] = *(int *)(puVar6 + ((longlong)(int)DAT_14cb886e0 - 1U & uVar5) * 4);
        puVar6 = DAT_14cb886d8;
        if (DAT_14cb886d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb886d0;
        }
        *(int *)(puVar6 + ((longlong)iVar4 & (longlong)(int)DAT_14cb886e0 - 1U) * 4) = iVar8;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143e2a4 FUN_14143e2a4 body=196 status=ok
// SIG undefined FUN_14143e2a4(void)

void FUN_14143e2a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2a3180;
  param_1[7] = &PTR_FUN_14b2a3450;
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14143e368 FUN_14143e368 body=861 status=ok
// SIG undefined FUN_14143e368(void)

void FUN_14143e368(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_20);
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar4 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar4);
  local_40 = local_28;
  uVar3 = FUN_14143e6c6(local_20,&local_50);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143e6c6 FUN_14143e6c6 body=444 status=ok
// SIG undefined FUN_14143e6c6(void)

undefined8 FUN_14143e6c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar4 + 0x88) == 0) {
    return 0;
  }
  if (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0) {
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x10))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar7 = param_2[1];
    if (lVar7 == 0) {
      uVar5 = FUN_140feeb70();
      lVar7 = FUN_14477b664(uVar5);
      param_2[1] = lVar7;
    }
    lVar6 = param_2[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar6;
    }
    if (((*(byte *)(lVar4 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar7);
        if (((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
           (*(longlong *)(lVar2 + 0xa8) == lVar6)) {
          if ((*(byte *)(lVar2 + 0x248) & 2) == 0) {
            return 0;
          }
          lVar7 = FUN_1403ca43f();
          lVar4 = *(longlong *)(lVar7 + 0x28);
          if (lVar4 == 0) {
            uVar5 = FUN_14110242a();
            lVar4 = FUN_14477b664(uVar5);
            *(longlong *)(lVar7 + 0x28) = lVar4;
          }
          if (((*(longlong *)(lVar7 + 0x30) == 0) && (lVar4 != 0)) &&
             (*(longlong *)(lVar7 + 0x20) != 0)) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x20));
            }
            *(undefined8 *)(lVar7 + 0x30) = uVar5;
          }
          uVar5 = FUN_144a851c4(lVar2);
          return uVar5;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar7);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14143e882 FUN_14143e882 body=298 status=ok
// SIG undefined FUN_14143e882(void)

ulonglong FUN_14143e882(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
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
  if (param_2 != (longlong *)0x0) {
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) {
      cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_140128af0(param_2);
        uVar2 = uVar2 ^ 1;
        goto LAB_14143e8eb;
      }
    }
  }
  uVar2 = 0;
LAB_14143e8eb:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143e9ae FUN_14143e9ae body=165 status=ok
// SIG undefined FUN_14143e9ae(void)

void FUN_14143e9ae(longlong param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x438);
  dVar3 = *(double *)(lVar1 + 0x280);
  if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
    dVar3 = *(double *)(lVar1 + 0x288);
  }
  fVar2 = (float)dVar3 * *(float *)(lVar1 + 0x644);
  fVar4 = (float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640);
  fVar5 = 0.0;
  switch(param_3) {
  case 0:
    goto switchD_14143ea05_caseD_0;
  case 1:
    break;
  case 2:
    fVar5 = param_4;
  default:
    param_4 = 0.0;
    break;
  case 3:
    fVar5 = param_4;
  }
  fVar2 = fVar2 - param_4;
  if (fVar2 <= 0.0009999999) {
    fVar2 = 0.0009999999;
  }
  fVar4 = fVar4 - fVar5;
  if (fVar4 <= 0.0009999999) {
    fVar4 = 0.0009999999;
  }
switchD_14143ea05_caseD_0:
  *param_2 = 3;
  param_2[1] = fVar2;
  param_2[2] = fVar4;
  return;
}



// FUNCTION 14143ea54 FUN_14143ea54 body=698 status=ok
// SIG undefined FUN_14143ea54(void)

ulonglong FUN_14143ea54(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (((longlong *)param_1[0x841] != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 3000))(), cVar1 != '\0')) {
    if (((char)param_1[0x23e] == '\0') && ((char)param_1[0x36e] != '\x01')) {
      cVar1 = FUN_140fb2b02(param_1);
      if (cVar1 != '\0') {
        if (param_1[0x87b] != 0) {
          lVar4 = param_1[0x87b] + 0x20;
          lVar2 = FUN_14485c28e(lVar4);
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = FUN_14485c28e(lVar4);
          }
          if (param_1[0x62e] == 0) {
            if ((char)param_1[0x696] != '\x01') goto LAB_14143eafc;
            plVar3 = param_1 + 0x642;
          }
          else {
            plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
          }
          lVar4 = FUN_140153468(plVar3);
          if (((lVar4 != 0) && ((*(byte *)(plVar3 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
            if (param_1[0x62e] == 0) {
              if ((char)param_1[0x696] != '\x01') goto LAB_14143eafc;
              plVar3 = param_1 + 0x642;
            }
            else {
              plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
            }
            lVar4 = FUN_140153468(plVar3);
            if ((lVar2 != 0) && (lVar4 != 0)) {
              if (param_1[0x62e] == 0) {
                if ((char)param_1[0x696] == '\x01') {
                  plVar3 = param_1 + 0x642;
                  goto LAB_14143ece2;
                }
                lVar4 = 0;
              }
              else {
                plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_14143ece2:
                lVar4 = FUN_140153468(plVar3);
              }
              if (lVar4 == lVar2) goto LAB_14143eb58;
            }
          }
        }
LAB_14143eafc:
        cVar1 = FUN_140153b82(param_1);
        if (cVar1 != '\0') {
          uVar5 = FUN_14075fe08(param_1,0x200000);
          cVar1 = FUN_14075fa88(param_1 + 0x857,uVar5);
          if (cVar1 == '\0') {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = 3;
            }
          }
          else {
            if (param_1[0x62e] == 0) {
              param_2 = (undefined1 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
              if ((char)param_1[0x696] != '\x01') goto LAB_14143eb5a;
              plVar3 = param_1 + 0x642;
            }
            else {
              plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
            }
            lVar2 = FUN_140153468(plVar3);
            param_2 = (undefined1 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            if (((lVar2 == 0) || ((*(byte *)(plVar3 + 0x53) & 2) != 0)) || (param_1[0x22] == 0))
            goto LAB_14143eb5a;
            if (param_1[0x62e] == 0) {
              if ((char)param_1[0x696] == '\x01') {
                plVar3 = param_1 + 0x642;
                goto LAB_14143ec9d;
              }
LAB_14143ec0e:
              lVar2 = 0;
            }
            else {
              plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_14143ec9d:
              lVar2 = FUN_140153468(plVar3);
              if (lVar2 == 0) goto LAB_14143ec0e;
              lVar4 = FUN_140fd5728();
              if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_14143ec0e;
            }
            cVar1 = (**(code **)(*param_1 + 0xeb8))(param_1);
            if (((cVar1 != '\0') ||
                (cVar1 = (**(code **)(*param_1 + 0xf38))(param_1), cVar1 != '\0')) ||
               ((lVar2 != 0 && ((*(byte *)(lVar2 + 0xc90) & 1) == 0)))) goto LAB_14143eb5a;
          }
        }
      }
    }
    else if (param_2 != (undefined1 *)0x0) {
      *param_2 = 2;
    }
  }
LAB_14143eb58:
  param_2 = (undefined1 *)0x0;
LAB_14143eb5a:
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 14143ed0e FUN_14143ed0e body=485 status=ok
// SIG undefined FUN_14143ed0e(void)

void FUN_14143ed0e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14143eef4 FUN_14143eef4 body=228 status=ok
// SIG undefined FUN_14143eef4(void)

longlong FUN_14143eef4(void)

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
  if (DAT_14caf2e30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147beb776;
    local_40 = &LAB_145d11364;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/Engine",L"Emitter",&DAT_14caf2e30,FUN_1463ee86a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2e30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143efda FUN_14143efda body=228 status=ok
// SIG undefined FUN_14143efda(void)

longlong FUN_14143efda(void)

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
  if (DAT_14cac87c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1478a915f;
    local_40 = FUN_1463985d1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"StreamingWorldSubsystemInterface",&DAT_14cac87c0,
                  &DAT_1478a915e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac87c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f0c0 FUN_14143f0c0 body=228 status=ok
// SIG undefined FUN_14143f0c0(void)

longlong FUN_14143f0c0(void)

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
  if (DAT_14cacadf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1478d4a51;
    local_40 = &LAB_146225379;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/Engine",L"AnimationSettings",&DAT_14cacadf8,FUN_1463a0e7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacadf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f1a6 FUN_14143f1a6 body=228 status=ok
// SIG undefined FUN_14143f1a6(void)

longlong FUN_14143f1a6(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3a618 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14646d3b4;
    local_38 = &LAB_14811188b;
    local_40 = FUN_14646de2c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x8f0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraCullProxyComponent",&DAT_14cb3a618,&DAT_14811188a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3a618;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f28c FUN_14143f28c body=228 status=ok
// SIG undefined FUN_14143f28c(void)

longlong FUN_14143f28c(void)

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
  if (DAT_14cb936d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148a0cf51;
    local_40 = &LAB_1459452a2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"SwayPatternData",&DAT_14cb936d8,&DAT_148a0cf50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb936d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f372 FUN_14143f372 body=228 status=ok
// SIG undefined FUN_14143f372(void)

longlong FUN_14143f372(void)

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
  if (DAT_14cb94038 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a13fd1;
    local_40 = &LAB_1465753d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_Reload",&DAT_14cb94038,&DAT_148a13fd0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f458 FUN_14143f458 body=228 status=ok
// SIG undefined FUN_14143f458(void)

longlong FUN_14143f458(void)

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
  if (DAT_14cb94128 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a1401f;
    local_40 = &LAB_14657581e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_Zoom",&DAT_14cb94128,&DAT_148a1401e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94128;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f53e FUN_14143f53e body=228 status=ok
// SIG undefined FUN_14143f53e(void)

longlong FUN_14143f53e(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99df8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146590fc4;
    local_38 = &LAB_148af36e7;
    local_40 = FUN_146590ff8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingCollectionPage",&DAT_14cb99df8,&DAT_148af36e6
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99df8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f624 FUN_14143f624 body=228 status=ok
// SIG undefined FUN_14143f624(void)

longlong FUN_14143f624(void)

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
  if (DAT_14cbacae0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_148c2ed19;
    local_40 = FUN_1465e36c6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x760;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerRegionMeshComponent",&DAT_14cbacae0,FUN_1465e36a4
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacae0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f70a FUN_14143f70a body=228 status=ok
// SIG undefined FUN_14143f70a(void)

longlong FUN_14143f70a(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbf1e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7add;
    local_40 = FUN_1466110f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_Critter",&DAT_14cbbf1e8,&DAT_148ca7adc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf1e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143f7f0 FUN_14143f7f0 body=1702 status=ok
// SIG undefined FUN_14143f7f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14143f7f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40[2] = 0;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1,local_40 + 2);
            goto LAB_14143f8db;
          }
        }
        plVar7 = (longlong *)(lVar1 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar7 != local_40 + 2) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_40 + 2,plVar7,(int)plVar6[6]);
          }
          else {
            memcpy(local_40 + 2,plVar7,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,local_40 + 2,lVar1,1);
      }
      else {
        (*pcVar2)(plVar6,local_40 + 2,lVar1);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 2);
  }
LAB_14143f8db:
  local_40[1] = 0;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1,local_40 + 1);
            goto LAB_14143f9a8;
          }
        }
        plVar7 = (longlong *)(lVar1 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar7 != local_40 + 1) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_40 + 1,plVar7,(int)plVar6[6]);
          }
          else {
            memcpy(local_40 + 1,plVar7,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,local_40 + 1,lVar1,1);
      }
      else {
        (*pcVar2)(plVar6,local_40 + 1,lVar1);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
LAB_14143f9a8:
  local_40[0] = 0;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1,local_40);
            goto LAB_14143fa75;
          }
        }
        plVar7 = (longlong *)(lVar1 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar7 != local_40) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_40,plVar7,(int)plVar6[6]);
          }
          else {
            memcpy(local_40,plVar7,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,local_40,lVar1,1);
      }
      else {
        (*pcVar2)(plVar6,local_40,lVar1);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
LAB_14143fa75:
  lVar1 = local_40[0];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar6 = (longlong *)(param_1 + 0x30);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(plVar6);
  if ((lVar1 != 0) && (cVar4 != '\0')) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_40[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143fe98 FUN_14143fe98 body=27 status=ok
// SIG undefined FUN_14143fe98(void)

undefined8 FUN_14143fe98(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x36a8)) &
            0xffffffffffffff04;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  }
  return 0;
}



// FUNCTION 14143feb4 FUN_14143feb4 body=228 status=ok
// SIG undefined FUN_14143feb4(void)

longlong FUN_14143feb4(void)

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
  if (DAT_14cb55b58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148629d37;
    local_40 = FUN_1464b4910;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"CameraPreferencesInterface",&DAT_14cb55b58,&DAT_148629d36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55b58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14143ff9a FUN_14143ff9a body=476 status=ok
// SIG undefined FUN_14143ff9a(void)

void FUN_14143ff9a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  float local_34;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    plVar3 = DAT_14caca308;
    if (DAT_14caca310 == 0) {
      plVar3 = (longlong *)0x0;
    }
    lVar1 = (**(code **)(*plVar3 + 0x58))();
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x10);
    if (param_2 != (longlong *)0x0) {
      lVar2 = FUN_1400b5618();
      lVar1 = param_2[2];
      iVar4 = *(int *)(lVar1 + 0x38);
      if ((iVar4 < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        if (DAT_14cac9ca8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1478c0a72;
          local_60 = &LAB_1417b2375;
          local_68 = L"Engine";
          local_70 = 0x1000000000;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          lVar1 = param_2[2];
          iVar4 = *(int *)(lVar1 + 0x38);
        }
        if ((iVar4 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
            DAT_14cac9ca8 + 0x30)) goto LAB_141440076;
        (**(code **)(*param_2 + 0x528))(param_2,&local_30,&local_34);
        *(undefined4 *)(param_1 + 0x1c) = local_30._0_4_;
      }
      else {
        dVar5 = (double)param_2[0x50];
        if ((double)param_2[0x51] <= (double)param_2[0x50]) {
          dVar5 = (double)param_2[0x51];
        }
        *(float *)(param_1 + 0x1c) = (float)dVar5 * *(float *)((longlong)param_2 + 0x644);
        local_34 = (float)(double)param_2[0x52] * *(float *)(param_2 + 200);
      }
      *(float *)(param_1 + 0x20) = local_34 + local_34;
    }
  }
LAB_141440076:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141440178 FUN_141440178 body=114 status=ok
// SIG undefined FUN_141440178(void)

void FUN_141440178(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x9c) & 1) != 0)) {
    iVar2 = (**(code **)(*plVar1 + 0x570))();
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414401c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x538))
                (*(longlong **)(param_1 + 0x1c8),param_2,param_3);
      return;
    }
  }
  FUN_1414401ea(param_1,param_2,param_3,0,0);
  return;
}



// FUNCTION 1414401ea FUN_1414401ea body=2321 status=ok
// SIG undefined FUN_1414401ea(void)

void FUN_1414401ea(wchar_t *param_1,float *param_2,float *param_3,char param_4,char param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  wchar_t *local_128;
  float *local_120;
  float *local_118;
  undefined8 local_110;
  char local_102;
  char local_101;
  longlong local_100;
  char *local_f8;
  char *local_f0;
  float *local_e8;
  float *local_e0;
  char *local_d8;
  char *local_d0;
  float *local_c8;
  float *local_c0;
  longlong local_b8;
  char *local_b0;
  char *local_a8;
  float *local_a0;
  float *local_98;
  code *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_102 = '\0';
  *param_2 = 0.0;
  *param_3 = 0.0;
  pwVar11 = param_1;
  local_120 = param_2;
  local_118 = param_3;
  local_101 = param_4;
  if (DAT_14cac6e60 == 0) {
    local_140 = &local_90;
    local_90 = FUN_144a7958c;
    local_130 = FUN_14081d0ea;
    local_138 = FUN_142b47bc4;
    local_148 = &LAB_1478989f1;
    local_150 = &LAB_146391124;
    local_158 = L"Engine";
    local_160 = 0x10000000000;
    local_168 = 0x10000005;
    local_170 = 0x10;
    local_178 = 0x620;
    pwVar11 = L"/Script/Engine";
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  lVar5 = DAT_14cac6e60;
  if ((DAT_14cac6e60 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14cac6e60 != 0) goto LAB_141440268;
    local_110 = CONCAT71((int7)((ulonglong)pwVar11 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_1414407a0;
    lVar17 = 0;
LAB_1414402a7:
    if (lVar17 == DAT_14cad00c8) {
      if (param_5 == '\0') {
        local_d0 = &local_101;
        local_c8 = local_120;
        local_c0 = local_118;
        local_d8 = &local_102;
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        pcVar1 = (code *)(param_1 + 0x120);
        pwVar11 = param_1 + 0x128;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = pwVar11;
        if (*(int *)(param_1 + 0x134) == 0) {
          iVar14 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar14 = *(int *)(param_1 + 0x134);
        }
        local_88 = (float)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar6 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = pcVar1;
        if ((local_78._4_4_ != iVar14) || (uStack_60 != pwVar11)) {
          iVar7 = local_78._4_4_;
          local_78 = uVar6;
          do {
            if (*(longlong *)(*(longlong *)local_90 + (longlong)iVar7 * 0x10) != 0) {
              FUN_1433bf9e4(&local_d8);
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar7 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != pcVar1 ||
                   ((wchar_t *)CONCAT44(uStack_7c,uStack_80) != pwVar11 || local_78._4_4_ != iVar14)
                  );
        }
      }
      else {
        local_a8 = &local_101;
        local_a0 = local_120;
        local_98 = local_118;
        local_b8 = lVar5;
        local_b0 = &local_102;
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        FUN_1433bef1e(param_1,&local_b8,&local_b0);
        uVar6 = local_78;
      }
      goto LAB_141440512;
    }
  }
  else {
    FUN_1456cec3c(DAT_14cac6e60);
LAB_141440268:
    if (DAT_14cad00c8 == 0) {
      local_140 = &local_90;
      local_90 = FUN_144a7958c;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_14081d0ea;
      local_148 = &LAB_1479b7a0c;
      local_150 = &LAB_1463b464e;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000005;
      local_170 = 8;
      local_178 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        local_110 = 0;
LAB_1414407a0:
        local_140 = &local_90;
        local_90 = FUN_144a7958c;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_148 = &LAB_1479b7a0c;
        local_150 = &LAB_1463b464e;
        local_158 = L"Engine";
        local_160 = 0;
        local_168 = 0x10000005;
        local_170 = 8;
        local_178 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar17 = 0;
        goto LAB_1414402a7;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar5 + 0x38)) {
      local_110 = 0;
      lVar17 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar17 = lVar5;
      }
      goto LAB_1414402a7;
    }
    local_110 = 0;
  }
  if (param_5 == '\0') {
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    pwVar11 = param_1 + 0x128;
    iVar14 = *(int *)(param_1 + 0x134);
    uVar6 = local_78;
    if (iVar14 == 0) {
      uVar15 = 1;
      uVar13 = 0;
      iVar7 = 0;
      iVar16 = 0;
    }
    else {
      pwVar8 = *(wchar_t **)(param_1 + 0x130);
      if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
        pwVar8 = pwVar11;
      }
      uVar19 = *(uint *)pwVar8;
      if (uVar19 == 0) {
        iVar7 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar7 = iVar14 + -1;
        }
        uVar13 = 0;
        uVar15 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar15 = uVar13;
        }
        iVar16 = 0;
        do {
          if (uVar15 == uVar13) goto LAB_141440512;
          iVar16 = iVar16 + 0x20;
          uVar19 = *(uint *)(pwVar8 + (uVar13 + 1) * 2);
          uVar13 = uVar13 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar13 = 0;
        iVar16 = 0;
      }
      uVar15 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar7) {
        iVar7 = iVar14;
      }
    }
    if (iVar7 != iVar14) {
      uVar19 = 0xffffffff;
      local_128 = pwVar11;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + (longlong)iVar7 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
            pwVar11 = local_128;
          }
          if ((char)local_110 == '\0') {
            if (DAT_14cad00c8 == 0) {
              local_90 = FUN_144a7958c;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_140 = &local_90;
              local_148 = &LAB_1479b7a0c;
              local_150 = &LAB_1463b464e;
              local_158 = L"Engine";
              local_160 = 0;
              local_168 = 0x10000005;
              local_170 = 8;
              local_178 = 0x110;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              pwVar11 = local_128;
              if (DAT_14cad00c8 == 0) goto LAB_1414405f1;
            }
            if (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1414405f1;
            lVar17 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar17 = lVar5;
            }
          }
          else {
LAB_1414405f1:
            lVar17 = 0;
          }
          if ((((*(int *)(lVar17 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
                lVar17 + 0x30)) &&
              ((local_102 != '\0' || ((*(byte *)((longlong)plVar4 + 0x9c) & 1) != 0)))) &&
             ((local_101 != '\0' ||
              (iVar7 = (**(code **)(*plVar4 + 0x570))(plVar4), pwVar11 = local_128, iVar7 != 0)))) {
            (**(code **)(*plVar4 + 0x538))(plVar4,&local_90,&local_68);
            fVar20 = *local_120;
            if (*local_120 <= local_90._0_4_) {
              fVar20 = local_90._0_4_;
            }
            *local_120 = fVar20;
            fVar20 = *local_118;
            if (*local_118 <= (float)local_68) {
              fVar20 = (float)local_68;
            }
            *local_118 = fVar20;
            pwVar11 = local_128;
          }
        }
        uVar19 = uVar19 & ~(uint)uVar15;
        pwVar8 = *(wchar_t **)(param_1 + 0x130);
        if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
          pwVar8 = pwVar11;
        }
        iVar3 = *(int *)(param_1 + 0x134);
        iVar7 = (int)uVar13;
        lVar17 = (longlong)iVar7;
        uVar12 = *(uint *)(pwVar8 + lVar17 * 2) & uVar19;
        if (uVar12 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar18 = 0;
            do {
              uVar12 = *(uint *)(pwVar8 + (lVar17 + lVar18 + 1) * 2);
              if (uVar12 != 0) {
                uVar13 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1414404e6;
              }
              iVar16 = iVar16 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar10 - lVar17 != lVar18);
            uVar19 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar13 = (ulonglong)(iVar7 + 1);
          pwVar11 = local_128;
          iVar7 = iVar3;
        }
        else {
LAB_1414404e6:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar7) {
            iVar7 = iVar3;
          }
        }
        uVar6 = local_78;
      } while (iVar7 != iVar14);
    }
  }
  else {
    local_f8 = &local_102;
    local_f0 = &local_101;
    local_e8 = local_120;
    local_e0 = local_118;
    local_100 = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    FUN_1433bf3c2(param_1,&local_100,&local_f8);
    uVar6 = local_78;
  }
LAB_141440512:
  local_78 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141440b2a FUN_141440b2a body=427 status=ok
// SIG undefined FUN_141440b2a(void)

void FUN_141440b2a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x39e8) != *param_2) ||
     (*(int *)(param_1 + 0x39f0) != (int)param_2[1])) {
    *(longlong *)(param_1 + 0x39e8) = *param_2;
    *(int *)(param_1 + 0x39f0) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x39f8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x3a00) != param_2[3]) ||
     (*(int *)(param_1 + 0x3a08) != (int)param_2[4])) {
    *(longlong *)(param_1 + 0x3a00) = param_2[3];
    *(int *)(param_1 + 0x3a08) = (int)param_2[4];
    *(undefined8 *)(param_1 + 0x3a10) = 0;
  }
  *(undefined1 *)(param_1 + 0x3a1c) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 0x3a18) = (int)param_2[6];
  *(undefined8 *)(param_1 + 0x3a20) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3a28);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3a28) = 0;
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
  local_30 = *(undefined8 *)(param_1 + 0x3a00);
  local_28 = *(undefined4 *)(param_1 + 0x3a08);
  local_20 = 0;
  FUN_141440d78(param_1,&local_30,*(undefined4 *)(param_1 + 0x3a18),
                *(undefined1 *)(param_1 + 0x3a1c));
  uVar4 = *(ulonglong *)(param_1 + 0x3a30);
  if ((uVar4 == 0) || (0xfffffffd < *(int *)(param_1 + 0x3a38) - 1U)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar4 = (ulonglong)DAT_14c892e70;
  }
  *(ulonglong *)(param_1 + 0x3a0) = uVar4;
  FUN_141440cd6(param_1 + 0x2e98);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141440cd6 FUN_141440cd6 body=162 status=ok
// SIG undefined FUN_141440cd6(void)

void FUN_141440cd6(longlong *param_1,undefined8 param_2)

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
        goto LAB_141440d63;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141440d63:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141440d78 FUN_141440d78 body=3559 status=ok
// SIG undefined FUN_141440d78(void)

void FUN_141440d78(longlong param_1,longlong *param_2,float param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined2 **local_100;
  undefined1 *local_f8;
  code *local_f0;
  char local_d9;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined2 *local_98;
  longlong *local_90;
  longlong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = (longlong)*(int *)(param_1 + 0x39c8);
  if (lVar7 < 1) {
    lVar19 = *(longlong *)(param_1 + 0x39a8);
    lVar8 = param_1;
    if ((*(byte *)(param_1 + 0x2ef4) & 1) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x39e8);
      iVar6 = *(int *)(param_1 + 0x39f0);
      if (iVar6 != 0x7201 || lVar8 != 0) {
        lVar7 = lVar8;
        if (*(int *)(param_1 + 0x39b0) == iVar6) {
          lVar7 = lVar19;
        }
        bVar21 = lVar19 != lVar8;
        lVar19 = lVar7;
        if (bVar21) {
          lVar19 = lVar8;
        }
        plVar9 = *(longlong **)(param_1 + 0x3a20);
        plVar14 = *(longlong **)(param_1 + 0x3a28);
        if (plVar14 != (longlong *)0x0) goto LAB_141440dee;
        plVar14 = (longlong *)0x0;
        goto LAB_141440e62;
      }
    }
    plVar9 = (longlong *)0x0;
    iVar6 = *(int *)(param_1 + 0x39b0);
LAB_141440e60:
    plVar14 = (longlong *)0x0;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x39c0);
    lVar19 = *(longlong *)(lVar8 + -0x28 + lVar7 * 0x28);
    iVar6 = *(int *)(lVar8 + -0x20 + lVar7 * 0x28);
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x39c8) - 1);
    plVar9 = *(longlong **)(lVar8 + 0x18 + uVar12 * 0x28);
    plVar14 = *(longlong **)(lVar8 + 0x20 + uVar12 * 0x28);
    if (plVar14 == (longlong *)0x0) goto LAB_141440e60;
LAB_141440dee:
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
LAB_141440e62:
  lVar7 = DAT_14cb75748;
  bVar13 = (byte)lVar8;
  if (((param_4 == '\0') && (lVar19 == *(longlong *)(param_1 + 0x3a30))) &&
     (iVar6 == *(int *)(param_1 + 0x3a38))) goto LAB_1414419a3;
  local_d9 = param_4;
  local_d8 = plVar14;
  if ((*(byte *)(param_1 + 0x2ef4) & 2) == 0) {
    if (DAT_14cb75748 != 0) {
      local_a0 = lVar19;
      FUN_1446dcdd4(&local_98);
      lVar8 = FUN_144815d88(lVar7,&local_98);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      bVar13 = 1;
      if (lVar8 == 0) {
        bVar13 = 0;
      }
    }
    lVar8 = 0;
    iVar18 = 0x7201;
    if ((lVar7 != 0 & bVar13) != 0) {
      lVar8 = lVar19;
      iVar18 = iVar6;
    }
    if ((*(longlong *)(param_1 + 0x3a30) != lVar8) || (*(int *)(param_1 + 0x3a38) != iVar18)) {
      *(longlong *)(param_1 + 0x3a30) = lVar8;
      *(int *)(param_1 + 0x3a38) = iVar18;
      *(undefined8 *)(param_1 + 0x3a40) = 0;
    }
  }
  else {
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if ((plVar9 == (longlong *)0x0) ||
       (lVar7 = plVar9[3], lVar8 = FUN_1414f3138(param_2), plVar14 = local_d8, lVar7 != lVar8)) {
      local_a0 = lVar19;
      FUN_1446dcdd4(&local_98);
      if (DAT_14cb75748 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_144815d88(DAT_14cb75748,&local_98);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      local_d0 = param_2;
      lVar8 = FUN_1414f3138(param_2);
      if (lVar7 == 0) {
        plVar9 = (longlong *)0x0;
        plVar10 = (longlong *)0x0;
        plVar17 = local_d8;
      }
      else {
        plVar9 = (longlong *)FUN_14001cc68(0xaa0,0x10);
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar9[2] = lVar7;
        plVar9[3] = lVar8;
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[6] = 0;
        plVar9[7] = 0;
        FUN_1400e6e60(plVar9 + 8);
        *(undefined1 *)(plVar9 + 0x14f) = 0;
        plVar9[0x14e] = 0;
        plVar9[0x150] = 0;
        plVar9[0x151] = 0;
        *(undefined1 *)(plVar9 + 0x152) = 0;
        FUN_140e5a0b0(plVar9);
        lVar7 = (longlong)*(int *)(plVar9[2] + 0x30);
        if (lVar7 != 0) {
          local_c8 = plVar9 + 4;
          local_c0 = plVar9 + 6;
          plVar14 = *(longlong **)(plVar9[2] + 0x28);
          local_b8 = plVar14 + lVar7 * 3;
          do {
            plVar10 = (longlong *)FUN_1400014c6(plVar14);
            if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              if (DAT_14c9a0828 == 0) {
                local_98 = &DAT_1427db2a2;
                local_f0 = FUN_14081d0ea;
                local_f8 = &LAB_146271292;
                local_100 = &local_98;
                local_108 = &LAB_14708904b;
                local_110 = &LAB_145aff100;
                local_118 = L"Engine";
                local_120 = 0;
                local_128 = 0x10000000;
                local_130 = 8;
                local_138 = 0xd0;
                FUN_14081cfa3(L"/Script/GbxNexus",L"NexusScriptStruct",&DAT_14c9a0828,&DAT_14708904a
                             );
              }
              if ((*(int *)(DAT_14c9a0828 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14c9a0828 + 0x38) * 8)
                  == DAT_14c9a0828 + 0x30)) {
                plVar10 = (longlong *)FUN_140565f07(plVar10[8]);
              }
            }
            plVar17 = (longlong *)*plVar14;
            plVar3 = (longlong *)plVar14[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              plVar16 = plVar3 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
            if (plVar10 == (longlong *)0x0) {
              lVar7 = 0;
LAB_1414412f9:
              plVar16 = (longlong *)0x0;
            }
            else {
              lVar7 = 0;
              plVar16 = (longlong *)0x0;
              if (plVar17 != (longlong *)0x0) {
                lVar7 = FUN_14001cc68((longlong)
                                      (int)(-*(int *)((longlong)plVar10 + 0x5c) &
                                           ((int)plVar10[0xb] + *(int *)((longlong)plVar10 + 0x5c))
                                           - 1U),0);
                (**(code **)(*plVar10 + 0x2e8))(plVar10,lVar7,1);
                uVar11 = (**(code **)(*plVar17 + 8))(plVar17);
                FUN_144a54316(uVar11,plVar17,plVar10,lVar7);
                uVar2 = *(uint *)((longlong)plVar10 + 0xc);
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar6 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar18 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar8 + 0x10);
                  bVar21 = iVar6 == 0;
                  if (bVar21) {
                    *(int *)(lVar8 + 0x10) = iVar18;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar6 = iVar18;
                  }
                }
                plVar16 = (longlong *)FUN_14001cc68(0x20,0x10);
                plVar16[2] = CONCAT44(iVar6,uVar2);
                plVar16[1] = (longlong)&DAT_100000001;
                *plVar16 = (longlong)&PTR_FUN_14b3f2510;
                plVar16[3] = lVar7;
                if (plVar16 == (longlong *)0x0) goto LAB_1414412f9;
              }
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar3 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
            if (lVar7 == 0) {
              if (plVar16 != (longlong *)0x0) goto LAB_1414411f7;
            }
            else {
              if (*(char *)(lVar7 + 0x11) == '\x01') {
                iVar6 = (int)plVar9[5];
                *(uint *)(plVar9 + 5) = iVar6 + 1U;
                plVar10 = local_c8;
                if (*(uint *)((longlong)plVar9 + 0x2c) < iVar6 + 1U) {
                  FUN_14187426c(local_c8);
                  plVar10 = local_c8;
                }
              }
              else {
                iVar6 = (int)plVar9[7];
                *(uint *)(plVar9 + 7) = iVar6 + 1U;
                plVar10 = local_c0;
                if (*(uint *)((longlong)plVar9 + 0x3c) < iVar6 + 1U) {
                  FUN_14187426c(local_c0);
                  plVar10 = local_c0;
                }
              }
              lVar8 = *plVar10;
              *(longlong *)(lVar8 + (longlong)iVar6 * 0x10) = lVar7;
              *(longlong **)(lVar8 + 8 + (longlong)iVar6 * 0x10) = plVar16;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
LAB_1414411f7:
                LOCK();
                plVar10 = plVar16 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
            }
            plVar14 = plVar14 + 3;
          } while (plVar14 != local_b8);
        }
        plVar9[0x150] = 0;
        plVar14 = (longlong *)plVar9[0x151];
        if (plVar14 != (longlong *)0x0) {
          plVar9[0x151] = 0;
          LOCK();
          plVar10 = plVar14 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        if (plVar9[3] != 0) {
          FUN_145a99a42(&local_98,plVar9[3] + 0x18);
          plVar10 = local_90;
          plVar9[0x150] = (longlong)local_98;
          local_98 = (undefined2 *)0x0;
          plVar14 = (longlong *)plVar9[0x151];
          if (local_90 != plVar14) {
            local_90 = (longlong *)0x0;
            plVar9[0x151] = (longlong)plVar10;
            if (plVar14 == (longlong *)0x0) goto LAB_141441411;
            LOCK();
            plVar10 = plVar14 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          plVar14 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_90 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
LAB_141441411:
        plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14b3f24d0;
        plVar10[2] = (longlong)plVar9;
        plVar17 = local_d8;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        else if (((*plVar9 == 0) || (plVar9[1] == 0)) || (*(int *)(plVar9[1] + 8) < 1)) {
          if (plVar10 == (longlong *)0x0) {
            *plVar9 = (longlong)plVar9;
            plVar14 = (longlong *)plVar9[1];
            if (plVar14 != (longlong *)0x0) {
LAB_141441522:
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))();
              }
              plVar9[1] = (longlong)plVar10;
              if (plVar10 != (longlong *)0x0) goto LAB_14144153e;
            }
            plVar10 = (longlong *)0x0;
            plVar17 = local_d8;
          }
          else {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            *plVar9 = (longlong)plVar9;
            if ((longlong *)plVar9[1] != plVar10) {
              LOCK();
              *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
              UNLOCK();
              plVar14 = (longlong *)plVar9[1];
              if (plVar14 != (longlong *)0x0) goto LAB_141441522;
              plVar9[1] = (longlong)plVar10;
            }
LAB_14144153e:
            plVar17 = local_d8;
            LOCK();
            plVar14 = plVar10 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
      if (plVar10 == plVar17) {
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          plVar14 = plVar17;
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            goto joined_r0x0001414415a8;
          }
          goto LAB_1414415b3;
        }
        if (0 < (longlong)*(int *)(param_1 + 0x39c8)) {
          lVar7 = (longlong)*(int *)(param_1 + 0x39c8) * 0x28 + *(longlong *)(param_1 + 0x39c0);
          plVar14 = (longlong *)0x0;
          goto LAB_141441612;
        }
        plVar14 = (longlong *)0x0;
LAB_141441645:
        param_2 = local_d0;
        if (((*(byte *)(param_1 + 0x2ef4) & 1) == 0) ||
           ((*(longlong *)(param_1 + 0x39e8) == 0 && (*(int *)(param_1 + 0x39f0) == 0x7201))))
        goto LAB_141441674;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        plVar10 = *(longlong **)(param_1 + 0x3a28);
        *(longlong **)(param_1 + 0x3a20) = plVar9;
        *(longlong **)(param_1 + 0x3a28) = plVar14;
      }
      else {
        plVar14 = plVar10;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar17 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar10 = plVar17;
joined_r0x0001414415a8:
            if (iVar6 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
        }
LAB_1414415b3:
        if ((longlong)*(int *)(param_1 + 0x39c8) < 1) goto LAB_141441645;
        lVar7 = (longlong)*(int *)(param_1 + 0x39c8) * 0x28 + *(longlong *)(param_1 + 0x39c0);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
LAB_141441612:
        plVar10 = *(longlong **)(lVar7 + -8);
        *(longlong **)(lVar7 + -0x10) = plVar9;
        *(longlong **)(lVar7 + -8) = plVar14;
      }
      param_2 = local_d0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar10 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
LAB_141441674:
    fVar22 = 0.0;
    if (((*(longlong *)(param_1 + 0x3a48) != 0) &&
        (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3a48) + 0x10), lVar7 != 0)) &&
       ((0.0 <= param_3 || ((*(byte *)(lVar7 + 0x1c) & 1) != 0)))) {
      fVar22 = param_3;
    }
    local_b0 = plVar9;
    local_a8 = plVar14;
    if (plVar14 == (longlong *)0x0) {
      FUN_140e59bac(param_1,&local_b0,fVar22);
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      FUN_140e59bac(param_1,&local_b0,fVar22);
      LOCK();
      plVar9 = plVar14 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar14)();
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2ef4) & 3) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x3a30);
    iVar6 = *(int *)(param_1 + 0x3a38);
    lVar8 = 0;
    if (iVar6 != 0x7201) {
      lVar8 = lVar7;
    }
    if (lVar7 != *(longlong *)(param_1 + 0x3ae8)) {
      lVar8 = lVar7;
    }
    if ((*(longlong *)(param_1 + 0x39e8) != lVar8) || (*(int *)(param_1 + 0x39f0) != iVar6)) {
      *(longlong *)(param_1 + 0x39e8) = lVar8;
      *(int *)(param_1 + 0x39f0) = iVar6;
      *(undefined8 *)(param_1 + 0x39f8) = 0;
    }
    if ((*(longlong *)(param_1 + 0x3a00) != *param_2) ||
       (*(int *)(param_1 + 0x3a08) != (int)param_2[1])) {
      *(longlong *)(param_1 + 0x3a00) = *param_2;
      *(int *)(param_1 + 0x3a08) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x3a10) = 0;
    }
    *(float *)(param_1 + 0x3a18) = param_3;
    *(char *)(param_1 + 0x3a1c) = local_d9;
    iVar6 = *(int *)(param_1 + 0x2ec4);
    *(int *)(param_1 + 0x2ec4) = iVar6 + 1;
    uVar12 = (ulonglong)*(int *)(param_1 + 0x2eb8);
    if ((longlong)uVar12 < 1) {
      *(int *)(param_1 + 0x2ec4) = iVar6;
    }
    else {
      plVar14 = (longlong *)(param_1 + 0x2eb0);
      bVar21 = false;
      do {
        lVar7 = uVar12 * 0x10 + -8;
        uVar20 = uVar12;
        while (((*(int *)(*plVar14 + lVar7) != 0 &&
                (plVar9 = *(longlong **)(*plVar14 + -8 + lVar7), plVar9 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1 + 0x39e8), cVar5 != '\0'))) {
          lVar7 = lVar7 + -0x10;
          bVar4 = uVar20 < 2;
          uVar20 = uVar20 - 1;
          if (bVar4) {
            iVar6 = *(int *)(param_1 + 0x2ec4) + -1;
            *(int *)(param_1 + 0x2ec4) = iVar6;
            if (bVar21) goto LAB_141441823;
            goto LAB_141441898;
          }
        }
        uVar12 = uVar20 - 1;
        bVar21 = true;
      } while (1 < uVar20);
      iVar6 = *(int *)(param_1 + 0x2ec4) + -1;
      *(int *)(param_1 + 0x2ec4) = iVar6;
LAB_141441823:
      if (iVar6 < 1) {
        iVar6 = *(int *)(param_1 + 0x2eb8);
        iVar18 = iVar6;
        if (0 < iVar6) {
          iVar15 = 0;
          do {
            if (((*(int *)(*plVar14 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar9 = *(longlong **)(*plVar14 + (longlong)iVar15 * 0x10),
                plVar9 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar9 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar14,iVar15);
              FUN_14005b248(plVar14);
            }
            else {
              iVar15 = iVar15 + 1;
            }
            iVar18 = *(int *)(param_1 + 0x2eb8);
          } while (iVar15 < iVar18);
        }
        iVar15 = 2;
        if (2 < iVar18 * 2) {
          iVar15 = iVar18 * 2;
        }
        *(int *)(param_1 + 0x2ec0) = iVar15;
        if ((iVar15 < iVar6) && (*(int *)(param_1 + 0x2ebc) != iVar18)) {
          FUN_14045812c(plVar14);
        }
      }
    }
  }
LAB_141441898:
  iVar6 = *(int *)(param_1 + 0x2edc);
  *(int *)(param_1 + 0x2edc) = iVar6 + 1;
  uVar12 = (ulonglong)*(int *)(param_1 + 0x2ed0);
  if ((longlong)uVar12 < 1) {
    *(int *)(param_1 + 0x2edc) = iVar6;
    plVar14 = local_d8;
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x2ec8);
    bVar21 = false;
    do {
      lVar7 = uVar12 * 0x10 + -8;
      uVar20 = uVar12;
      while (((*(int *)(*plVar9 + lVar7) != 0 &&
              (plVar14 = *(longlong **)(*plVar9 + -8 + lVar7), plVar14 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar14 + 0x60))(), cVar5 != '\0'))) {
        lVar7 = lVar7 + -0x10;
        bVar4 = uVar20 < 2;
        uVar20 = uVar20 - 1;
        if (bVar4) {
          iVar6 = *(int *)(param_1 + 0x2edc) + -1;
          *(int *)(param_1 + 0x2edc) = iVar6;
          plVar14 = local_d8;
          if (bVar21) goto LAB_141441926;
          goto LAB_1414419a3;
        }
      }
      uVar12 = uVar20 - 1;
      bVar21 = true;
    } while (1 < uVar20);
    iVar6 = *(int *)(param_1 + 0x2edc) + -1;
    *(int *)(param_1 + 0x2edc) = iVar6;
LAB_141441926:
    plVar14 = local_d8;
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x2ed0);
      iVar18 = iVar6;
      if (0 < iVar6) {
        iVar15 = 0;
        do {
          if (((*(int *)(*plVar9 + 8 + (longlong)iVar15 * 0x10) == 0) ||
              (plVar14 = *(longlong **)(*plVar9 + (longlong)iVar15 * 0x10),
              plVar14 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar14 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar9,iVar15);
            FUN_14005b248(plVar9);
          }
          else {
            iVar15 = iVar15 + 1;
          }
          iVar18 = *(int *)(param_1 + 0x2ed0);
        } while (iVar15 < iVar18);
      }
      plVar14 = local_d8;
      iVar15 = 2;
      if (2 < iVar18 * 2) {
        iVar15 = iVar18 * 2;
      }
      *(int *)(param_1 + 0x2ed8) = iVar15;
      if ((iVar15 < iVar6) && (*(int *)(param_1 + 0x2ed4) != iVar18)) {
        FUN_14045812c(plVar9);
      }
    }
  }
LAB_1414419a3:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar14 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141441ce0 FUN_141441ce0 body=9260 status=ok
// SIG undefined FUN_141441ce0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141441ce0(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  ulonglong **ppuVar24;
  undefined4 uVar25;
  int iVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong *puVar32;
  uint uVar33;
  ulonglong *puVar34;
  int iVar35;
  longlong *plVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined4 local_4a0;
  ulonglong *local_490;
  ulonglong *local_488;
  ulonglong *local_480;
  longlong *local_478;
  ulonglong *local_470;
  ulonglong *local_468;
  ulonglong *local_460;
  longlong local_458;
  undefined1 local_450 [8];
  longlong local_448;
  undefined4 local_440;
  longlong local_438;
  undefined8 uStack_430;
  longlong local_428;
  ulonglong uStack_420;
  ulonglong local_418;
  ulonglong uStack_410;
  ulonglong local_408;
  ulonglong *local_3f8;
  undefined8 uStack_3f0;
  ulonglong *local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d0;
  ulonglong *local_3c8;
  undefined8 uStack_3c0;
  wchar_t *local_3b8;
  undefined8 uStack_3b0;
  undefined1 *local_3a8 [2];
  undefined ***local_398;
  undefined **local_388;
  undefined8 *local_380;
  ulonglong *local_368;
  ulonglong *puStack_360;
  longlong local_358 [95];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  lVar31 = *param_2;
  local_480 = param_1;
  local_478 = param_4;
  if (lVar31 == 0) goto LAB_1414428cf;
  local_3e8 = (ulonglong *)0x0;
  uStack_3e0 = 0;
  local_3f8 = (ulonglong *)0x0;
  uStack_3f0 = 0;
  local_408 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_398 = (undefined ***)0x0;
  local_388 = &PTR_LAB_14b406f80;
  local_380 = &DAT_144189510;
  local_3a8[0] = &LAB_140255cce;
  if ((longlong)(int)param_2[3] == 0) {
    local_490 = (ulonglong *)0x0;
    local_468 = (ulonglong *)0x0;
    local_460 = (ulonglong *)0x0;
  }
  else {
    plVar36 = (longlong *)param_2[2];
    plVar23 = plVar36 + (int)param_2[3];
    local_460 = (ulonglong *)0x0;
    local_468 = (ulonglong *)0x0;
    puVar18 = (ulonglong *)0x0;
    do {
      lVar31 = *plVar36;
      if (lVar31 != 0) {
        local_368 = (ulonglong *)0x0;
        puStack_360 = (ulonglong *)0x0;
        pwVar27 = DAT_14cbcbca4;
        if ((DAT_14cbcbca4 == DAT_14c948034) &&
           (pwVar27 = DAT_14c948034, DAT_14cbcbca0 != DAT_14c948030)) {
          FUN_14011791e(&local_3b8,DAT_14cbcbca0,(ulonglong)DAT_14cbcbca4 >> 0x20);
          DAT_14cbcbca4 = local_3b8;
          pwVar27 = local_3b8;
        }
        pwVar7 = *(wchar_t **)(lVar31 + 0x40);
        if (pwVar7 == pwVar27) {
          FUN_140255b38(lVar31,&local_368,local_3a8);
          lVar30 = (longlong)(int)puStack_360;
          if (lVar30 != 0) {
            local_488 = local_368;
            lVar28 = 0;
            do {
              local_470 = *(ulonglong **)((longlong)local_488 + lVar28);
              if (local_470 != (ulonglong *)0x0) {
                local_458 = (**(code **)(*local_470 + 8))();
                lVar9 = FUN_14001d604();
                if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(local_458 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(local_458 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                    lVar9 + 0x30)) {
                  local_460 = (ulonglong *)CONCAT71((int7)((ulonglong)(lVar9 + 0x30) >> 8),1);
                  puVar18 = local_470;
                  goto LAB_141441fa8;
                }
              }
              lVar28 = lVar28 + 0x10;
            } while (lVar30 * 0x10 != lVar28);
          }
          if (puVar18 == (ulonglong *)0x0) {
            local_3b8 = (wchar_t *)0x0;
            uStack_3b0 = 0;
            FUN_1449f3ff4((ulonglong)*(ushort *)(lVar31 + 0x4c) * 0x20 +
                          *(longlong *)(DAT_14cb848c0 + 0x3a8),&local_3b8);
            uVar12 = uStack_3e0;
            lVar31 = (longlong)(int)(uint)uStack_3b0;
            if (lVar31 != 0) {
              iVar5 = (int)uStack_3e0;
              lVar30 = (longlong)(int)uStack_3e0;
              uStack_3e0 = CONCAT44(uStack_3e0._4_4_,(int)uStack_3e0 + (uint)uStack_3b0);
              if ((uint)(uStack_3e0._4_4_ - iVar5) < (uint)uStack_3b0) {
                FUN_1446f84a2(&local_3e8,uVar12 & 0xffffffff);
              }
              memcpy(local_3e8 + lVar30,local_3b8,lVar31 << 3);
            }
LAB_141441f9c:
            if (local_3b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            puVar18 = (ulonglong *)0x0;
          }
        }
        else {
          pwVar27 = DAT_14cbcbcd4;
          if ((DAT_14cbcbcd4 == DAT_14c948034) &&
             (pwVar27 = DAT_14c948034, DAT_14cbcbcd0 != DAT_14c948030)) {
            FUN_14011791e(&local_3b8,DAT_14cbcbcd0,(ulonglong)DAT_14cbcbcd4 >> 0x20);
            DAT_14cbcbcd4 = local_3b8;
            pwVar7 = *(wchar_t **)(lVar31 + 0x40);
            pwVar27 = local_3b8;
          }
          if (pwVar7 == pwVar27) {
            local_3b8 = (wchar_t *)0x0;
            uStack_3b0 = 0;
            FUN_1449f3ff4((ulonglong)*(ushort *)(lVar31 + 0x4c) * 0x20 +
                          *(longlong *)(DAT_14cb848c0 + 0x3a8),&local_3b8);
            uVar12 = uStack_3f0;
            lVar31 = (longlong)(int)(uint)uStack_3b0;
            if (lVar31 != 0) {
              iVar5 = (int)uStack_3f0;
              lVar30 = (longlong)(int)uStack_3f0;
              uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0 + (uint)uStack_3b0);
              if ((uint)(uStack_3f0._4_4_ - iVar5) < (uint)uStack_3b0) {
                FUN_1446f84a2(&local_3f8,uVar12 & 0xffffffff);
              }
              memcpy(local_3f8 + lVar30,local_3b8,lVar31 << 3);
            }
            if (local_3b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            pwVar27 = DAT_14cbcbcbc;
            if ((DAT_14cbcbcbc == DAT_14c948034) &&
               (pwVar27 = DAT_14c948034, DAT_14cbcbcb8 != DAT_14c948030)) {
              FUN_14011791e(&local_3b8,DAT_14cbcbcb8,(ulonglong)DAT_14cbcbcbc >> 0x20);
              DAT_14cbcbcbc = local_3b8;
              pwVar7 = *(wchar_t **)(lVar31 + 0x40);
              pwVar27 = local_3b8;
            }
            if (pwVar7 == pwVar27) {
              FUN_140255b38(lVar31,&local_368);
              lVar30 = (longlong)(int)puStack_360;
              if (lVar30 != 0) {
                puVar15 = (ulonglong *)0x0;
                local_488 = local_368;
                local_490 = puVar18;
                do {
                  puVar18 = *(ulonglong **)((longlong)local_488 + (longlong)puVar15);
                  local_470 = puVar15;
                  if (puVar18 != (ulonglong *)0x0) {
                    lVar28 = (**(code **)(*puVar18 + 8))(puVar18);
                    lVar9 = FUN_14001d604();
                    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar28 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                        lVar9 + 0x30)) {
                      local_468 = (ulonglong *)CONCAT71((int7)((ulonglong)(lVar9 + 0x30) >> 8),1);
                      goto LAB_141441fa8;
                    }
                  }
                  puVar15 = local_470 + 2;
                  puVar18 = local_490;
                } while ((ulonglong *)(lVar30 * 0x10) != puVar15);
              }
              if (puVar18 == (ulonglong *)0x0) {
                local_3b8 = (wchar_t *)0x0;
                uStack_3b0 = 0;
                FUN_1449f3ff4((ulonglong)*(ushort *)(lVar31 + 0x4c) * 0x20 +
                              *(longlong *)(DAT_14cb848c0 + 0x3a8),&local_3b8);
                if ((longlong)(int)(uint)uStack_3b0 != 0) {
                  lVar31 = 0;
                  do {
                    if (*(longlong *)((longlong)local_3b8 + lVar31) == DAT_14cbcbce8) {
                      if (local_418 != local_480[1]) {
                        local_408 = 0;
                      }
                      puVar18 = local_480 + 3;
                      uVar12 = local_480[2];
                      local_418 = local_480[1];
LAB_14144200e:
                      if (uStack_410 != uVar12) {
                        local_408 = 0;
                      }
                      uVar11 = FUN_14477b664();
                      uStack_410 = FUN_14477b664(uVar11);
                      local_408 = *puVar18;
                      break;
                    }
                    if (*(longlong *)((longlong)local_3b8 + lVar31) == DAT_14cbcbcf0) {
                      if (local_418 != local_480[4]) {
                        local_408 = 0;
                      }
                      puVar18 = local_480 + 6;
                      uVar12 = local_480[5];
                      local_418 = local_480[4];
                      goto LAB_14144200e;
                    }
                    lVar31 = lVar31 + 8;
                  } while ((longlong)(int)(uint)uStack_3b0 * 8 != lVar31);
                }
                goto LAB_141441f9c;
              }
            }
          }
        }
LAB_141441fa8:
        FUN_140255aed(local_368,(ulonglong)puStack_360 & 0xffffffff);
        if (local_368 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar36 = plVar36 + 1;
    } while (plVar36 != plVar23);
    lVar31 = *param_2;
    local_490 = puVar18;
  }
  local_428 = 0;
  uStack_420 = 0;
  local_438 = 0;
  uStack_430 = 0;
  FUN_140255ee2(lVar31,&local_428,local_3a8);
  lVar31 = local_428;
  lVar30 = (longlong)(int)uStack_420;
  if (lVar30 != 0) {
    lVar28 = 0;
    do {
      plVar23 = *(longlong **)(lVar31 + lVar28);
      if (plVar23 == (longlong *)0x0) {
LAB_14144309d:
        plVar23 = (longlong *)0x0;
      }
      else {
        lVar9 = (**(code **)(*plVar23 + 8))(plVar23);
        lVar10 = FUN_14001d604();
        if ((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_14144309d;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
            lVar10 + 0x30) {
          plVar23 = (longlong *)0x0;
        }
      }
      uVar12 = uStack_430;
      lVar9 = (longlong)(int)uStack_430;
      uVar6 = (int)uStack_430 + 1;
      uStack_430 = CONCAT44(uStack_430._4_4_,uVar6);
      if (uStack_430._4_4_ < uVar6) {
        FUN_14001d74c(&local_438,uVar12 & 0xffffffff);
      }
      *(longlong **)(local_438 + lVar9 * 8) = plVar23;
      lVar28 = lVar28 + 0x10;
    } while (lVar30 * 0x10 != lVar28);
  }
  uVar12 = uStack_430;
  if (local_490 != (ulonglong *)0x0) {
    lVar31 = (longlong)(int)uStack_430;
    uVar6 = (int)uStack_430 + 1;
    uStack_430 = CONCAT44(uStack_430._4_4_,uVar6);
    if (uStack_430._4_4_ < uVar6) {
      FUN_14001d74c(&local_438,uVar12 & 0xffffffff);
    }
    *(ulonglong **)(local_438 + lVar31 * 8) = local_490;
  }
  puVar18 = local_490;
  local_448 = local_438;
  local_440 = (int)uStack_430;
  cVar4 = FUN_14144426c(param_2);
  puVar15 = local_3e8;
  if (cVar4 != '\0') goto LAB_141442695;
  local_3c8 = (ulonglong *)0x0;
  uStack_3c0 = 0;
  lVar31 = (longlong)(int)uStack_3e0;
  if (lVar31 != 0) {
    lVar30 = 0;
    do {
      local_3d0 = *(undefined8 *)((longlong)puVar15 + lVar30);
      FUN_1400021e4(&local_3d0,&local_368);
      FUN_1400b22c2(&local_3b8);
      pwVar27 = local_3b8;
      if ((uint)uStack_3b0 == 0) {
        pwVar27 = L"";
      }
      if (pwVar27 == (wchar_t *)0x0) {
        bVar37 = false;
      }
      else {
        sVar8 = wcslen(pwVar27);
        local_4a0 = 0xffffffff;
        local_4a8 = 0;
        iVar5 = FUN_1447ee042(&local_368,pwVar27,sVar8 & 0xffffffff,1);
        bVar37 = iVar5 != -1;
      }
      if (local_3b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_368 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      if (bVar37) {
        lVar28 = (longlong)(int)uStack_3c0;
        uVar6 = (int)uStack_3c0 + 1;
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar6);
        if (uStack_3c0._4_4_ < uVar6) {
          FUN_1446f84a2(&local_3c8);
        }
        local_3c8[lVar28] = *(ulonglong *)((longlong)puVar15 + lVar30);
      }
      lVar30 = lVar30 + 8;
      puVar18 = local_490;
    } while (lVar31 * 8 != lVar30);
  }
  if (local_3e8 != (ulonglong *)0x0) {
    FUN_1400020a8(local_3e8);
  }
  puVar15 = local_3c8;
  local_3e8 = local_3c8;
  iVar5 = (int)uStack_3c0;
  lVar31 = (longlong)(int)uStack_3c0;
  uStack_3e0 = uStack_3c0;
  if (1 < lVar31) {
    memset(local_358,0,0x2f0);
    local_368 = puVar15;
    puStack_360 = puVar15 + lVar31 + -1;
    fVar38 = logf((float)iVar5);
    local_358[0] = CONCAT44(local_358[0]._4_4_,(int)(longlong)(fVar38 + fVar38));
    ppuVar24 = &local_368;
    do {
      puVar15 = *ppuVar24;
      puVar22 = ppuVar24[1];
      iVar5 = *(int *)(ppuVar24 + 2);
      iVar26 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar15) >> 3);
      uVar12 = (ulonglong)(iVar26 + 1);
      puVar34 = puVar15;
      puVar18 = puVar22;
      if (iVar5 != 0) {
LAB_1414424d8:
        if (8 < (int)(uint)uVar12) {
          uVar6 = (uint)uVar12 >> 1;
          uVar12 = puVar34[uVar6];
          puVar34[uVar6] = *puVar34;
          *puVar34 = uVar12;
          puVar32 = puVar18 + 1;
          local_488 = puVar34;
          do {
            puVar16 = local_488 + 1;
            puVar17 = puVar16;
            do {
              local_488 = puVar17;
              local_470 = puVar16;
              if (puVar18 < puVar17) break;
              cVar4 = FUN_144189524(puVar34,puVar17);
              puVar17 = puVar17 + 1;
              puVar16 = local_470 + 1;
            } while (cVar4 == '\0');
            puVar17 = puVar32 + -2;
            do {
              puVar16 = puVar32;
              puVar19 = puVar17;
              puVar32 = puVar16 + -1;
              if (puVar32 <= puVar34) break;
              cVar4 = FUN_144189524(puVar32,puVar34);
              puVar17 = puVar19 + -1;
            } while (cVar4 == '\0');
            if (puVar32 < local_488) goto LAB_1414437c1;
            uVar12 = *local_488;
            *local_488 = *puVar32;
            *puVar32 = uVar12;
          } while( true );
        }
        for (; puVar22 = puVar34, puVar15 = puVar34, puVar34 < puVar18; puVar18 = puVar18 + -1) {
          while (puVar15 = puVar15 + 1, puVar15 <= puVar18) {
            FUN_1400021e4(puVar15,&local_3b8);
            FUN_1400021e4(puVar22,&local_3c8);
            pwVar27 = local_3b8;
            if ((uint)uStack_3b0 == 0) {
              pwVar27 = L"";
            }
            puVar32 = local_3c8;
            if ((int)uStack_3c0 == 0) {
              puVar32 = (ulonglong *)&DAT_149dfb77a;
            }
            lVar31 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar32 + lVar31);
              uVar6 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)pwVar27 + lVar31);
              uVar33 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar33 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14144256e;
                }
                iVar5 = uVar6 - uVar33;
                goto LAB_1414425a4;
              }
              if (uVar1 == 0) break;
LAB_14144256e:
              lVar31 = lVar31 + 2;
            }
            iVar5 = 0;
LAB_1414425a4:
            if (local_3c8 != (ulonglong *)0x0) {
              FUN_1400020a8(local_3c8);
            }
            if (local_3b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (iVar5 < 0) {
              puVar22 = puVar15;
            }
          }
          uVar12 = *puVar22;
          *puVar22 = *puVar18;
          *puVar18 = uVar12;
        }
        goto LAB_1414425f2;
      }
LAB_1414435a2:
      local_488 = puVar34;
      iVar5 = (int)uVar12;
      if (iVar5 != 0) {
        iVar26 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
        iVar21 = iVar26;
joined_r0x0001414435c3:
        do {
          iVar20 = iVar26 * 2 + 1;
          if (iVar20 < iVar5) {
            iVar35 = iVar26 * 2 + 2;
            if ((iVar35 < iVar5) &&
               (cVar4 = FUN_144189524(local_488 + iVar35,local_488 + iVar20), cVar4 == '\0')) {
              iVar20 = iVar35;
            }
            puVar18 = local_488 + iVar26;
            puVar15 = local_488 + iVar20;
            cVar4 = FUN_144189524(puVar18);
            if (cVar4 != '\0') {
              uVar13 = *puVar18;
              *puVar18 = *puVar15;
              *puVar15 = uVar13;
              iVar26 = iVar20;
              goto joined_r0x0001414435c3;
            }
          }
          bVar37 = iVar21 != 0;
          iVar26 = iVar21 + -1;
          iVar21 = iVar26;
        } while (bVar37);
        if (1 < iVar5) {
          uVar13 = *local_488;
          *local_488 = local_488[uVar12 - 1];
          local_488[uVar12 - 1] = uVar13;
          if (iVar5 != 2) {
            do {
              uVar13 = uVar12 - 1;
              iVar5 = 0;
              iVar21 = 1;
              iVar26 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar20 = iVar21;
                if (((longlong)iVar5 < (longlong)uVar13) &&
                   (cVar4 = FUN_144189524(local_488 + iVar5,local_488 + iVar21), cVar4 == '\0')) {
                  iVar20 = iVar5;
                }
                puVar18 = local_488 + iVar26;
                puVar15 = local_488 + iVar20;
                cVar4 = FUN_144189524(puVar18,puVar15);
                if (cVar4 == '\0') break;
                uVar3 = *puVar18;
                *puVar18 = *puVar15;
                *puVar15 = uVar3;
                iVar5 = iVar20 * 2;
                iVar21 = iVar20 * 2 + 1;
                iVar26 = iVar20;
              } while ((longlong)iVar21 < (longlong)uVar13);
              uVar3 = *local_488;
              *local_488 = local_488[uVar12 - 2];
              local_488[uVar12 - 2] = uVar3;
              uVar12 = uVar13;
            } while (2 < uVar13);
          }
        }
      }
LAB_1414425f2:
      ppuVar24 = ppuVar24 + -3;
      puVar18 = local_490;
    } while (&local_368 <= ppuVar24);
  }
  if ((~(byte)local_460 & 1) == 0 && puVar18 != (ulonglong *)0x0) {
    if ((int)puVar18[8] == 0) {
      if ((int)local_490[10] != 0) {
        puVar29 = (undefined8 *)local_490[9];
        goto LAB_141443105;
      }
    }
    else {
      puVar29 = (undefined8 *)local_490[7];
LAB_141443105:
      puStack_360 = (ulonglong *)0x0;
      local_358[0] = 0;
      local_368 = (ulonglong *)*puVar29;
      uVar11 = FUN_14477b664(puVar29[1]);
      puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
      local_358[0] = puVar29[2];
      if (puStack_360 == (ulonglong *)0x0) {
        uVar11 = FUN_145ce1e38();
        puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
      }
      if (local_358[0] == 0) {
        local_358[0] = 0;
        if ((((puStack_360 != (ulonglong *)0x0) && (local_368 != (ulonglong *)0x0)) &&
            (plVar23 = (longlong *)puStack_360[0x17], plVar23 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 != '\0')) {
          uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
          local_358[0] = FUN_144aff482(uVar11);
          if (local_358[0] != 0) goto LAB_141443177;
        }
      }
      else {
LAB_141443177:
        lVar31 = local_358[0];
        if (puStack_360 == (ulonglong *)0x0) {
          uVar11 = FUN_145ce1e38();
          puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
          lVar31 = local_358[0];
          if (((local_358[0] == 0) && (lVar31 = 0, puStack_360 != (ulonglong *)0x0)) &&
             (local_368 != (ulonglong *)0x0)) {
            plVar23 = (longlong *)puStack_360[0x17];
            if ((plVar23 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
              lVar31 = 0;
              local_358[0] = lVar31;
            }
            else {
              uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
              lVar31 = FUN_144aff482(uVar11);
              local_358[0] = lVar31;
            }
          }
        }
        plVar23 = *(longlong **)(lVar31 + 0x18);
        if (plVar23 != (longlong *)0x0) {
          (**(code **)(*plVar23 + 8))(plVar23);
        }
        uVar25 = *(undefined4 *)(lVar31 + 0x20);
        lVar31 = local_478[1];
        uVar6 = (int)lVar31 + 1;
        *(uint *)(local_478 + 1) = uVar6;
        if (*(uint *)((longlong)local_478 + 0xc) < uVar6) {
          FUN_14001d63e(local_478);
        }
        lVar30 = (longlong)(int)lVar31 * 0x10;
        lVar31 = *local_478 + lVar30;
        *(longlong **)(*local_478 + lVar30) = plVar23;
        if (plVar23 == (longlong *)0x0) {
          *(undefined4 *)(lVar31 + 8) = uVar25;
        }
        else {
          (**(code **)(*plVar23 + 8))(plVar23);
          *(undefined4 *)(lVar31 + 8) = uVar25;
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    puVar18 = local_490;
    if (((ulonglong)local_468 & 1) == 0) goto LAB_1414426ad;
LAB_1414431f8:
    if ((int)puVar18[8] == 0) {
      if ((int)puVar18[10] == 0) goto LAB_141442851;
      puVar29 = (undefined8 *)puVar18[9];
      local_368 = (ulonglong *)*puVar29;
      uVar11 = FUN_14477b664(puVar29[1]);
      puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
      local_358[0] = puVar29[2];
      if (puStack_360 == (ulonglong *)0x0) {
        uVar11 = FUN_145ce1e38();
        puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
      }
      if (local_358[0] == 0) {
        local_358[0] = 0;
        if ((((puStack_360 != (ulonglong *)0x0) && (local_368 != (ulonglong *)0x0)) &&
            (plVar23 = (longlong *)puStack_360[0x17], plVar23 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 != '\0')) {
          uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
          local_358[0] = FUN_144aff482(uVar11,&local_368);
          if (local_358[0] != 0) goto LAB_1414432cd;
        }
        goto LAB_141442851;
      }
LAB_1414432cd:
      lVar31 = local_358[0];
      if (puStack_360 == (ulonglong *)0x0) {
        uVar11 = FUN_145ce1e38();
        puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
        lVar31 = local_358[0];
        if (((local_358[0] == 0) && (lVar31 = 0, puStack_360 != (ulonglong *)0x0)) &&
           (local_368 != (ulonglong *)0x0)) {
          plVar23 = (longlong *)puStack_360[0x17];
          if ((plVar23 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
            lVar31 = 0;
            local_358[0] = lVar31;
          }
          else {
            uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
            lVar31 = FUN_144aff482(uVar11,&local_368);
            local_358[0] = lVar31;
          }
        }
      }
      plVar23 = *(longlong **)(lVar31 + 0x18);
      if (plVar23 != (longlong *)0x0) {
        (**(code **)(*plVar23 + 8))(plVar23);
      }
      uVar25 = *(undefined4 *)(lVar31 + 0x20);
      goto LAB_1414427fe;
    }
    puVar29 = (undefined8 *)puVar18[7];
    local_368 = (ulonglong *)*puVar29;
    uVar11 = FUN_14477b664(puVar29[1]);
    puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
    local_358[0] = puVar29[2];
    if (puStack_360 == (ulonglong *)0x0) {
      uVar11 = FUN_145ce1e38();
      puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
    }
    if (local_358[0] == 0) {
      local_358[0] = 0;
      if ((((puStack_360 != (ulonglong *)0x0) && (local_368 != (ulonglong *)0x0)) &&
          (plVar23 = (longlong *)puStack_360[0x17], plVar23 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 != '\0')) {
        uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
        local_358[0] = FUN_144aff482(uVar11,&local_368);
        if (local_358[0] != 0) goto LAB_141443d9d;
      }
      goto LAB_141442851;
    }
LAB_141443d9d:
    lVar31 = local_358[0];
    if (puStack_360 == (ulonglong *)0x0) {
      uVar11 = FUN_145ce1e38();
      puStack_360 = (ulonglong *)FUN_14477b664(uVar11);
      lVar31 = local_358[0];
      if (((local_358[0] == 0) && (lVar31 = 0, puStack_360 != (ulonglong *)0x0)) &&
         (local_368 != (ulonglong *)0x0)) {
        plVar23 = (longlong *)puStack_360[0x17];
        if ((plVar23 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
          lVar31 = 0;
          local_358[0] = lVar31;
        }
        else {
          uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
          lVar31 = FUN_144aff482(uVar11,&local_368);
          local_358[0] = lVar31;
        }
      }
    }
    plVar23 = *(longlong **)(lVar31 + 0x18);
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 8))(plVar23);
    }
    uVar25 = *(undefined4 *)(lVar31 + 0x20);
    iVar5 = (int)local_478[1];
    *(uint *)(local_478 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)local_478 + 0xc) < iVar5 + 1U) {
      FUN_14001d63e(local_478,iVar5);
    }
    lVar31 = *local_478;
LAB_141442826:
    lVar30 = lVar31 + (longlong)iVar5 * 0x10;
    *(longlong **)(lVar31 + (longlong)iVar5 * 0x10) = plVar23;
    if (plVar23 == (longlong *)0x0) {
      *(undefined4 *)(lVar30 + 8) = uVar25;
    }
    else {
      (**(code **)(*plVar23 + 8))(plVar23);
      *(undefined4 *)(lVar30 + 8) = uVar25;
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
  }
  else {
    if ((int)uStack_3e0 != 0) {
      uVar12 = local_480[8];
      if (uVar12 == 0) {
        uVar11 = FUN_140261af2();
        uVar12 = FUN_14477b664(uVar11);
        local_480[8] = uVar12;
      }
      puVar15 = local_480 + 7;
      if (local_480[9] == 0) {
        if ((uVar12 != 0) && (*puVar15 != 0)) {
          plVar23 = *(longlong **)(uVar12 + 0xb8);
          if ((plVar23 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
            local_480[9] = 0;
            puVar18 = local_490;
          }
          else {
            uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
            uVar12 = FUN_144aff482(uVar11);
            local_480[9] = uVar12;
            puVar18 = local_490;
            if (uVar12 != 0) goto LAB_141442360;
          }
        }
      }
      else {
LAB_141442360:
        puVar22 = local_480;
        if ((int)uStack_3e0 < 3) {
          if (local_480[8] == 0) {
            uVar11 = FUN_140261af2();
            uVar12 = FUN_14477b664(uVar11);
            puVar22[8] = uVar12;
            if (((puVar22[9] == 0) && (puVar18 = local_490, uVar12 != 0)) && (*puVar15 != 0)) {
              plVar23 = *(longlong **)(uVar12 + 0xb8);
              if ((plVar23 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar23 + 0x108))(), cVar4 == '\0')) {
                uVar12 = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
                uVar12 = FUN_144aff482(uVar11,puVar15);
              }
              local_480[9] = uVar12;
              puVar18 = local_490;
            }
          }
          lVar31 = FUN_14144410e();
        }
        else {
          FUN_1400021e4(local_3e8,&local_368);
          thunk_FUN_14047a987(&local_368,L".Preview",1);
          FUN_1400021e4(local_3e8 + 1,&local_3b8);
          iVar5 = (uint)uStack_3b0 + -1;
          if ((uint)uStack_3b0 == 0) {
            iVar5 = 0;
          }
          FUN_1400020e8(&local_368,local_3b8,iVar5);
          if (local_3b8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar12 = local_480[8];
          if (uVar12 == 0) {
            uVar11 = FUN_140261af2();
            uVar12 = FUN_14477b664(uVar11);
            local_480[8] = uVar12;
          }
          uVar13 = local_480[9];
          if (((uVar13 == 0) && (uVar13 = 0, uVar12 != 0)) && (*puVar15 != 0)) {
            plVar23 = *(longlong **)(uVar12 + 0xb8);
            if ((plVar23 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
              uVar13 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
              uVar13 = FUN_144aff482(uVar11,puVar15);
            }
            local_480[9] = uVar13;
          }
          puVar18 = local_368;
          if ((int)puStack_360 == 0) {
            puVar18 = (ulonglong *)&DAT_149dfb77a;
          }
          FUN_1446f470e(local_450,puVar18,1);
          lVar31 = FUN_14144410e(uVar13);
          puVar18 = local_490;
          if (local_368 != (ulonglong *)0x0) {
            FUN_1400020a8();
            puVar18 = local_490;
          }
        }
        if (lVar31 != 0) {
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
          plVar23 = DAT_14c844840;
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
          if ((int)uStack_3e0 == 1) {
            plVar36 = *(longlong **)(lVar31 + 8);
            if (plVar23 == plVar36) {
              lVar30 = 0x10;
              plVar36 = plVar23;
            }
            else {
              if (plVar36 != (longlong *)0x0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
              lVar30 = 0x10;
LAB_141442629:
              if (plVar23 != (longlong *)0x0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
LAB_141442637:
            plVar23 = plVar36;
            uVar25 = *(undefined4 *)(lVar31 + lVar30);
          }
          else {
            uVar12 = local_3e8[(int)uStack_3e0 + -1];
            if (uVar12 == DAT_14cbcbcf8) {
              plVar36 = *(longlong **)(lVar31 + 0x18);
              if (plVar23 != plVar36) {
                if (plVar36 != (longlong *)0x0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
                lVar30 = 0x20;
                goto LAB_141442629;
              }
              lVar30 = 0x20;
              plVar36 = plVar23;
              goto LAB_141442637;
            }
            if (uVar12 == DAT_14cbcbd00) {
              plVar36 = *(longlong **)(lVar31 + 0x28);
              if (plVar23 != plVar36) {
                if (plVar36 != (longlong *)0x0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
                lVar30 = 0x30;
                goto LAB_141442629;
              }
              lVar30 = 0x30;
              plVar36 = plVar23;
              goto LAB_141442637;
            }
            if (uVar12 == DAT_14cbcbd08) {
              plVar36 = *(longlong **)(lVar31 + 0x38);
              if (plVar23 != plVar36) {
                if (plVar36 != (longlong *)0x0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
                lVar30 = 0x40;
                goto LAB_141442629;
              }
              lVar30 = 0x40;
              plVar36 = plVar23;
              goto LAB_141442637;
            }
            if (uVar12 == DAT_14cbcbd10) {
              plVar36 = *(longlong **)(lVar31 + 0x48);
              if (plVar23 != plVar36) {
                if (plVar36 != (longlong *)0x0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
                lVar30 = 0x50;
                goto LAB_141442629;
              }
              lVar30 = 0x50;
              plVar36 = plVar23;
              goto LAB_141442637;
            }
            uVar25 = 0;
          }
          lVar31 = local_478[1];
          uVar6 = (int)lVar31 + 1;
          *(uint *)(local_478 + 1) = uVar6;
          if (*(uint *)((longlong)local_478 + 0xc) < uVar6) {
            FUN_14001d63e(local_478);
          }
          lVar30 = (longlong)(int)lVar31 * 0x10;
          lVar31 = *local_478 + lVar30;
          *(longlong **)(*local_478 + lVar30) = plVar23;
          if (plVar23 == (longlong *)0x0) {
            *(undefined4 *)(lVar31 + 8) = uVar25;
            puVar18 = local_490;
          }
          else {
            (**(code **)(*plVar23 + 8))(plVar23);
            *(undefined4 *)(lVar31 + 8) = uVar25;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            puVar18 = local_490;
          }
        }
      }
    }
LAB_141442695:
    if ((~(byte)local_468 & 1) == 0 && puVar18 != (ulonglong *)0x0) goto LAB_1414431f8;
LAB_1414426ad:
    puVar18 = local_3f8;
    local_3c8 = (ulonglong *)0x0;
    uStack_3c0 = 0;
    lVar31 = (longlong)(int)uStack_3f0;
    if (lVar31 != 0) {
      lVar30 = 0;
      do {
        local_3d0 = *(undefined8 *)((longlong)puVar18 + lVar30);
        FUN_1400021e4(&local_3d0,&local_368);
        FUN_1400b22c2(&local_3b8);
        pwVar27 = local_3b8;
        if ((uint)uStack_3b0 == 0) {
          pwVar27 = L"";
        }
        if (pwVar27 == (wchar_t *)0x0) {
          bVar37 = false;
        }
        else {
          sVar8 = wcslen(pwVar27);
          local_4a0 = 0xffffffff;
          local_4a8 = 0;
          iVar5 = FUN_1447ee042(&local_368,pwVar27,sVar8 & 0xffffffff,1);
          bVar37 = iVar5 != -1;
        }
        if (local_3b8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_368 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        if (bVar37) {
          lVar28 = (longlong)(int)uStack_3c0;
          uVar6 = (int)uStack_3c0 + 1;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar6);
          if (uStack_3c0._4_4_ < uVar6) {
            FUN_1446f84a2(&local_3c8);
          }
          local_3c8[lVar28] = *(ulonglong *)((longlong)puVar18 + lVar30);
        }
        lVar30 = lVar30 + 8;
      } while (lVar31 * 8 != lVar30);
    }
    if (local_3f8 != (ulonglong *)0x0) {
      FUN_1400020a8(local_3f8);
    }
    local_3f8 = local_3c8;
    uStack_3f0 = uStack_3c0;
    if (uStack_410 == 0) {
      uVar11 = FUN_140261af2();
      uStack_410 = FUN_14477b664(uVar11);
    }
    if (local_408 == 0) {
      if ((uStack_410 != 0) && (local_418 != 0)) {
        plVar23 = *(longlong **)(uStack_410 + 0xb8);
        if ((plVar23 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
          local_408 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
          local_408 = FUN_144aff482(uVar11);
          if (local_408 != 0) goto LAB_141442710;
        }
      }
    }
    else {
LAB_141442710:
      puVar18 = local_3f8;
      iVar5 = (int)uStack_3f0;
      uVar12 = uStack_3f0 & 0xffffffff;
      if (uVar12 == 0) {
        uVar12 = local_408;
        if (uStack_410 == 0) {
          uVar11 = FUN_140261af2();
          uStack_410 = FUN_14477b664(uVar11);
          uVar12 = local_408;
          if (((local_408 == 0) && (uVar12 = 0, uStack_410 != 0)) && (local_418 != 0)) {
            plVar23 = *(longlong **)(uStack_410 + 0xb8);
            if ((plVar23 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar4 == '\0')) {
              uVar12 = 0;
              local_408 = uVar12;
            }
            else {
              uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
              uVar12 = FUN_144aff482(uVar11,&local_418);
              local_408 = uVar12;
            }
          }
        }
        local_368 = (ulonglong *)0x14b9773ad;
        puStack_360 = (ulonglong *)CONCAT35(puStack_360._5_3_,6);
        uVar6 = FUN_14001a6c0(&local_368,1);
        uVar13 = (ulonglong)uVar6;
      }
      else {
        if (1 < (int)uStack_3f0) {
          memset(local_358,0,0x2f0);
          local_368 = puVar18;
          puStack_360 = puVar18 + (uVar12 - 1);
          fVar38 = logf((float)iVar5);
          local_358[0] = CONCAT44(local_358[0]._4_4_,(int)(longlong)(fVar38 + fVar38));
          ppuVar24 = &local_368;
          do {
            puVar15 = *ppuVar24;
            puVar18 = ppuVar24[1];
            iVar5 = *(int *)(ppuVar24 + 2);
            iVar26 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar15) >> 3);
            uVar6 = iVar26 + 1;
            puVar22 = puVar18;
            puVar34 = puVar15;
            if (iVar5 != 0) {
LAB_141442b68:
              if (8 < (int)uVar6) {
                uVar12 = puVar15[uVar6 >> 1];
                puVar15[uVar6 >> 1] = *puVar15;
                *puVar15 = uVar12;
                local_480 = puVar18 + 1;
                local_490 = puVar15;
                do {
                  puVar17 = local_490 + 1;
                  puVar32 = puVar17;
                  do {
                    local_490 = puVar32;
                    local_468 = puVar17;
                    if (puVar18 < puVar32) break;
                    cVar4 = FUN_1414443d8(puVar15,puVar32);
                    puVar32 = puVar32 + 1;
                    puVar17 = local_468 + 1;
                  } while (cVar4 == '\0');
                  puVar17 = local_480 + -2;
                  puVar32 = local_480;
                  do {
                    puVar32 = puVar32 + -1;
                    local_480 = puVar32;
                    local_460 = puVar17;
                    if (puVar32 <= puVar15) break;
                    cVar4 = FUN_1414443d8(puVar32,puVar15);
                    puVar17 = local_460 + -1;
                  } while (cVar4 == '\0');
                  if (local_480 < local_490) goto LAB_141443cc7;
                  uVar12 = *local_490;
                  *local_490 = *local_480;
                  *local_480 = uVar12;
                } while( true );
              }
              for (; puVar34 = puVar15, puVar22 = puVar15, puVar15 < puVar18; puVar18 = puVar18 + -1
                  ) {
                while (puVar32 = puVar34, puVar22 = puVar22 + 1, puVar22 <= puVar18) {
                  cVar4 = FUN_1414443d8(puVar32,puVar22);
                  puVar34 = puVar22;
                  if (cVar4 == '\0') {
                    puVar34 = puVar32;
                  }
                }
                uVar12 = *puVar32;
                *puVar32 = *puVar18;
                *puVar18 = uVar12;
              }
              goto LAB_141442bc2;
            }
LAB_141443a9b:
            local_490 = puVar15;
            if (uVar6 != 0) {
              iVar5 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
              iVar26 = iVar5;
joined_r0x000141443abc:
              do {
                iVar21 = iVar5 * 2 + 1;
                if (iVar21 < (int)uVar6) {
                  iVar20 = iVar5 * 2 + 2;
                  if ((iVar20 < (int)uVar6) &&
                     (cVar4 = FUN_1414443d8(local_490 + iVar20,local_490 + iVar21), cVar4 == '\0'))
                  {
                    iVar21 = iVar20;
                  }
                  puVar18 = local_490 + iVar5;
                  puVar15 = local_490 + iVar21;
                  cVar4 = FUN_1414443d8(puVar18,puVar15);
                  if (cVar4 != '\0') {
                    uVar12 = *puVar18;
                    *puVar18 = *puVar15;
                    *puVar15 = uVar12;
                    iVar5 = iVar21;
                    goto joined_r0x000141443abc;
                  }
                }
                bVar37 = iVar26 != 0;
                iVar5 = iVar26 + -1;
                iVar26 = iVar5;
              } while (bVar37);
              if (1 < (int)uVar6) {
                uVar13 = (ulonglong)uVar6;
                uVar12 = *local_490;
                *local_490 = local_490[uVar13 - 1];
                local_490[uVar13 - 1] = uVar12;
                if (uVar6 != 2) {
                  do {
                    uVar12 = uVar13 - 1;
                    iVar5 = 0;
                    iVar21 = 1;
                    iVar26 = 0;
                    do {
                      iVar5 = iVar5 + 2;
                      iVar20 = iVar21;
                      if (((longlong)iVar5 < (longlong)uVar12) &&
                         (cVar4 = FUN_1414443d8(local_490 + iVar5,local_490 + iVar21), cVar4 == '\0'
                         )) {
                        iVar20 = iVar5;
                      }
                      puVar18 = local_490 + iVar26;
                      puVar15 = local_490 + iVar20;
                      cVar4 = FUN_1414443d8(puVar18,puVar15);
                      if (cVar4 == '\0') break;
                      uVar3 = *puVar18;
                      *puVar18 = *puVar15;
                      *puVar15 = uVar3;
                      iVar5 = iVar20 * 2;
                      iVar21 = iVar20 * 2 + 1;
                      iVar26 = iVar20;
                    } while ((longlong)iVar21 < (longlong)uVar12);
                    uVar3 = *local_490;
                    *local_490 = local_490[uVar13 - 2];
                    local_490[uVar13 - 2] = uVar3;
                    uVar13 = uVar12;
                  } while (2 < uVar12);
                }
              }
            }
LAB_141442bc2:
            ppuVar24 = ppuVar24 + -3;
          } while (&local_368 <= ppuVar24);
        }
        if (uStack_410 == 0) {
          uVar11 = FUN_140261af2();
          uStack_410 = FUN_14477b664(uVar11);
        }
        uVar12 = local_408;
        if (((local_408 == 0) && (uVar12 = 0, uStack_410 != 0)) && (local_418 != 0)) {
          plVar23 = *(longlong **)(uStack_410 + 0xb8);
          if ((plVar23 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar23 + 0x108))(), cVar4 == '\0')) {
            uVar12 = 0;
            local_408 = uVar12;
          }
          else {
            uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
            uVar12 = FUN_144aff482(uVar11,&local_418);
            local_408 = uVar12;
          }
        }
        uVar13 = *local_3f8;
      }
      lVar31 = FUN_14144410e(uVar12,uVar13);
      if (lVar31 != 0) {
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
        }
        plVar23 = DAT_14c844840;
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
        if ((longlong)(int)uStack_3f0 < 2) {
          plVar36 = *(longlong **)(lVar31 + 8);
          if (plVar23 == plVar36) {
            lVar30 = 0x10;
            plVar36 = plVar23;
          }
          else {
            if (plVar36 != (longlong *)0x0) {
              (**(code **)(*plVar36 + 8))(plVar36);
            }
            lVar30 = 0x10;
LAB_1414427ea:
            if (plVar23 != (longlong *)0x0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        else {
          uVar12 = local_3f8[(longlong)(int)uStack_3f0 + -1];
          if (uVar12 == DAT_14cbcbd18) {
            plVar36 = *(longlong **)(lVar31 + 0x18);
            if (plVar23 != plVar36) {
              if (plVar36 != (longlong *)0x0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
              lVar30 = 0x20;
              goto LAB_1414427ea;
            }
            lVar30 = 0x20;
            plVar36 = plVar23;
          }
          else if (uVar12 == DAT_14cbcbd20) {
            plVar36 = *(longlong **)(lVar31 + 0x28);
            if (plVar23 != plVar36) {
              if (plVar36 != (longlong *)0x0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
              lVar30 = 0x30;
              goto LAB_1414427ea;
            }
            lVar30 = 0x30;
            plVar36 = plVar23;
          }
          else if (uVar12 == DAT_14cbcbd28) {
            plVar36 = *(longlong **)(lVar31 + 0x38);
            if (plVar23 != plVar36) {
              if (plVar36 != (longlong *)0x0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
              lVar30 = 0x40;
              goto LAB_1414427ea;
            }
            lVar30 = 0x40;
            plVar36 = plVar23;
          }
          else {
            if (uVar12 != DAT_14cbcbd30) {
              uVar25 = 0;
              goto LAB_1414427fe;
            }
            plVar36 = *(longlong **)(lVar31 + 0x48);
            if (plVar23 != plVar36) {
              if (plVar36 != (longlong *)0x0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
              lVar30 = 0x50;
              goto LAB_1414427ea;
            }
            lVar30 = 0x50;
            plVar36 = plVar23;
          }
        }
        plVar23 = plVar36;
        uVar25 = *(undefined4 *)(lVar31 + lVar30);
LAB_1414427fe:
        iVar5 = (int)local_478[1];
        *(uint *)(local_478 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)local_478 + 0xc) < iVar5 + 1U) {
          FUN_14001d63e(local_478,iVar5);
        }
        lVar31 = *local_478;
        goto LAB_141442826;
      }
    }
  }
LAB_141442851:
  if (local_438 != 0) {
    FUN_1400020a8();
  }
  FUN_140255aed(local_428,uStack_420 & 0xffffffff);
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  if (local_3a8[0] != (undefined1 *)0x0) {
    pppuVar14 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar14 = &local_388;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (local_3f8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_3e8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
LAB_1414428cf:
  if ((local_60 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1414437c1:
  uVar12 = *puVar34;
  *puVar34 = *puVar32;
  *puVar32 = uVar12;
  iVar5 = iVar5 + -1;
  puVar16 = puVar16 + -2;
  if ((longlong)puVar19 - (longlong)puVar15 < (longlong)puVar22 - (longlong)local_470) {
    if (local_488 < puVar18) {
      *ppuVar24 = local_488;
      ppuVar24[1] = puVar18;
      *(int *)(ppuVar24 + 2) = iVar5;
      ppuVar24 = ppuVar24 + 3;
    }
    puVar22 = puVar19;
    puVar15 = puVar34;
    if (puVar32 <= puVar34 + 1) goto LAB_1414425f2;
  }
  else {
    if (puVar34 + 1 < puVar32) {
      *ppuVar24 = puVar34;
      ppuVar24[1] = puVar16;
      *(int *)(ppuVar24 + 2) = iVar5;
      ppuVar24 = ppuVar24 + 3;
    }
    puVar22 = puVar18;
    puVar16 = puVar18;
    puVar34 = local_488;
    puVar15 = local_470;
    if (puVar18 <= local_488) goto LAB_1414425f2;
  }
  local_470 = puVar15;
  local_488 = puVar34;
  iVar26 = (int)((ulonglong)((longlong)puVar22 - (longlong)local_470) >> 3);
  uVar12 = (ulonglong)(iVar26 + 1);
  puVar15 = local_470;
  puVar34 = local_488;
  puVar18 = puVar16;
  if (iVar5 == 0) goto LAB_1414435a2;
  goto LAB_1414424d8;
LAB_141443cc7:
  uVar12 = *puVar15;
  *puVar15 = *local_480;
  *local_480 = uVar12;
  iVar5 = iVar5 + -1;
  puVar32 = local_480 + -1;
  if ((longlong)local_460 - (longlong)puVar34 < (longlong)puVar22 - (longlong)local_468) {
    if (local_490 < puVar18) {
      *ppuVar24 = local_490;
      ppuVar24[1] = puVar18;
      *(int *)(ppuVar24 + 2) = iVar5;
      ppuVar24 = ppuVar24 + 3;
    }
    puVar22 = puVar15;
    puVar18 = local_460;
    if (local_480 <= puVar15 + 1) goto LAB_141442bc2;
  }
  else {
    if (puVar15 + 1 < local_480) {
      *ppuVar24 = puVar15;
      ppuVar24[1] = puVar32;
      *(int *)(ppuVar24 + 2) = iVar5;
      ppuVar24 = ppuVar24 + 3;
    }
    puVar32 = puVar18;
    puVar15 = local_490;
    puVar22 = local_468;
    if (puVar18 <= local_490) goto LAB_141442bc2;
  }
  local_460 = puVar18;
  local_468 = puVar22;
  local_490 = puVar15;
  iVar26 = (int)((ulonglong)((longlong)local_460 - (longlong)local_468) >> 3);
  uVar6 = iVar26 + 1;
  puVar15 = local_490;
  puVar18 = puVar32;
  puVar22 = local_460;
  puVar34 = local_468;
  if (iVar5 == 0) goto LAB_141443a9b;
  goto LAB_141442b68;
}



// FUNCTION 14144410e FUN_14144410e body=350 status=ok
// SIG undefined FUN_14144410e(void)

longlong FUN_14144410e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  FUN_14016a17c();
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) goto LAB_14144412d;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar3 = FUN_14000e0c8(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
LAB_141444233:
    *(longlong *)(param_1 + 0x48) = lVar3;
    lVar4 = lVar3;
  }
  else if (lVar4 != lVar3) {
    if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
    goto LAB_141444233;
  }
  if (lVar4 == 0) {
    return 0;
  }
LAB_14144412d:
  lVar3 = FUN_1418caa18();
  if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
      (param_2 != 0 &&
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x18),
            *plVar1 != param_2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 14144426c FUN_14144426c body=362 status=ok
// SIG undefined FUN_14144426c(void)

undefined8 FUN_14144426c(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14b406f80;
    local_30 = &LAB_143daea12;
    local_58[0] = &LAB_140255cce;
    FUN_140255853(0,0,local_58,&local_68);
    FUN_14001d574(&local_68);
    bVar1 = true;
    if ((longlong)(int)uStack_70 != 0) {
      lVar4 = 0;
      do {
        if ((*(longlong *)(local_78 + lVar4) != 0) &&
           (*(char *)(*(longlong *)(local_78 + lVar4) + 0x68) != '\0')) {
          bVar1 = false;
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)uStack_70 * 8 != lVar4);
    }
    if (local_58[0] != (undefined1 *)0x0) {
      pppuVar3 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar3 = &local_38;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140255aed(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (!bVar1) {
LAB_141444393:
      uVar2 = 1;
      goto LAB_14144434b;
    }
  }
  else {
    lVar4 = 0;
    do {
      if ((*(longlong *)(*param_2 + lVar4) != 0) &&
         (*(char *)(*(longlong *)(*param_2 + lVar4) + 0x68) != '\0')) goto LAB_141444393;
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
  }
  uVar2 = 0;
LAB_14144434b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1414443d8 FUN_1414443d8 body=223 status=ok
// SIG undefined FUN_1414443d8(void)

uint FUN_1414443d8(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_30);
  FUN_1400021e4(param_1,&local_40);
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  lVar6 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14144444f;
      }
      uVar4 = uVar4 - uVar7;
      goto LAB_141444478;
    }
    if (uVar1 == 0) break;
LAB_14144444f:
    lVar6 = lVar6 + 2;
  }
  uVar4 = 0;
LAB_141444478:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414444b8 FUN_1414444b8 body=2908 status=ok
// SIG undefined FUN_1414444b8(void)

undefined8 *
FUN_1414444b8(undefined8 *param_1,longlong param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a916950;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"ValueBuffer";
  local_60 = 0;
  uStack_58 = 0;
  iVar9 = param_3 << 2;
  local_a8 = (undefined1)iVar9;
  uStack_a7 = (undefined1)((uint)iVar9 >> 8);
  uStack_a6 = (undefined1)((uint)iVar9 >> 0x10);
  uStack_a5 = (undefined1)((uint)iVar9 >> 0x18);
  uStack_a4 = 0;
  uStack_a0 = 0x4109;
  if ((param_3 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_98,0x4109,0);
  }
  plVar8 = param_1 + 2;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_c0 = &local_98;
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x60);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x60;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x60);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x60;
  }
  lVar10 = local_b0;
  if (plVar8 == &local_b0) {
LAB_141444695:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar8;
  }
  else {
    lVar3 = *plVar8;
    *plVar8 = local_b0;
    local_b0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_141444695;
    }
  }
  plVar7 = param_1 + 3;
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0x1c;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_a8 = 0;
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  if (plVar7 == &local_b0) {
LAB_1414447c9:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar10 = *plVar7;
    *plVar7 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1414447c9;
    }
  }
  plVar7 = param_1 + 4;
  if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0x1c;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  local_a8 = 1;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
  if (plVar7 == &local_b0) {
LAB_14144490a:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar10 = *plVar7;
    *plVar7 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14144490a;
    }
  }
  uVar4 = *param_5;
  if ((char)uVar4 < '\0') {
    plVar7 = param_1 + 5;
    if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1d;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_a8 = 0;
    local_c8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
    if (plVar7 == &local_b0) {
LAB_141444a4b:
      lVar10 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_b0 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar11 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar11) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar11 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar11) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar7;
      *plVar7 = local_b0;
      local_b0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar10 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar11 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar11) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar11 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar11) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
        goto LAB_141444a4b;
      }
    }
    plVar7 = param_1 + 6;
    if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1d;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    local_a8 = 1;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_c8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    if (plVar7 == &local_b0) {
LAB_141444b87:
      lVar10 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_b0 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar11 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar11) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar11 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar11) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar7;
      *plVar7 = local_b0;
      local_b0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar10 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar10;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar11 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar11) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar11 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar11) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
        goto LAB_141444b87;
      }
    }
    uVar4 = *param_5;
  }
  if ((uVar4 & 0x40) == 0) goto LAB_141444e5d;
  plVar7 = param_1 + 7;
  if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0xf;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_a8 = 0;
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  if (plVar7 == &local_b0) {
LAB_141444cc9:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar10 = *plVar7;
    *plVar7 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_141444cc9;
    }
  }
  plVar7 = param_1 + 8;
  if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0xf;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  local_a8 = 1;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
  if (plVar7 != &local_b0) {
    lVar10 = *plVar7;
    *plVar7 = local_b0;
    local_b0 = 0;
    if (lVar10 == 0) goto LAB_141444e5d;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar10 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar10;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar10 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b0 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar10;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_141444e5d:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141445016 FUN_141445016 body=441 status=ok
// SIG undefined FUN_141445016(void)

void FUN_141445016(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == '\0') && (lVar7 = param_1[4], lVar7 != 0)) {
    lVar9 = FUN_144a2f878();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_38,uVar10);
      plVar8 = (longlong *)*local_38;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 9));
      *(int *)(plVar8 + 8) = (int)plVar8[8] + 1;
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
      uVar5 = *(uint *)(plVar8 + 1);
      if (0 < (int)uVar5) {
        lVar9 = plVar8[2];
        lVar13 = 0x58;
        uVar14 = 0;
        do {
          uVar6 = *(uint *)(lVar7 + 0xc);
          *(int *)(plVar8 + 2) = (int)lVar9 + 1 + (int)uVar14;
          if (*(ulonglong *)(*plVar8 + -0x20 + lVar13) == (ulonglong)uVar6) {
            if ((int)uVar5 <= (int)uVar14) break;
            lVar9 = FUN_1447210f0(lVar7);
            fVar15 = (float)*(double *)(lVar9 + 0x6d0);
            iVar11 = (int)plVar8[2] + 1;
            *(int *)(plVar8 + 2) = iVar11;
            lVar9 = *plVar8;
            fVar3 = *(float *)(lVar9 + 0x38 + lVar13);
            iVar12 = *(int *)(lVar9 + 0x3c + lVar13);
            if ((fVar3 != fVar15) || (NAN(fVar3) || NAN(fVar15))) {
              iVar12 = iVar12 + 1;
LAB_14144512f:
              *(float *)(lVar9 + 0x38 + lVar13) = fVar15;
              *(int *)(lVar9 + 0x3c + lVar13) = iVar12;
              iVar11 = (int)plVar8[2];
              lVar9 = *plVar8;
            }
            else if (iVar12 == 0) {
              iVar12 = 1;
              goto LAB_14144512f;
            }
            cVar4 = (&DAT_000073ed)[lVar7];
            *(int *)(plVar8 + 2) = iVar11 + 1;
            iVar12 = *(int *)(lVar9 + 4 + lVar13);
            if ((bool)*(char *)(lVar9 + lVar13) == (cVar4 == '\x01')) {
              if (iVar12 != 0) break;
              iVar12 = 1;
            }
            else {
              iVar12 = iVar12 + 1;
            }
            *(bool *)(lVar9 + lVar13) = cVar4 == '\x01';
            *(int *)(lVar9 + 4 + lVar13) = iVar12;
            break;
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x120;
        } while (uVar5 != uVar14);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414451e4 FUN_1414451e4 body=185 status=ok
// SIG undefined FUN_1414451e4(void)

void FUN_1414451e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  
  *(undefined2 *)(param_1 + 0x75a) = 0;
  FUN_1459ffedc(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (*(char *)(lVar3 + 0x108) == '\x03') {
        *(short *)(param_1 + 0x75a) = *(short *)(param_1 + 0x75a) + 1;
      }
      else if (*(char *)(lVar3 + 0x108) == '\0') {
        bVar5 = 1;
        if (*(longlong *)(lVar3 + 0x178) != 0) {
          bVar5 = (*(byte *)(*(longlong *)(lVar3 + 0x178) + 0x240) & 0x20) >> 4 | 5;
        }
        FUN_140191f3c(lVar3,bVar5);
      }
      cVar4 = FUN_14039924e(lVar3);
      if (cVar4 != '\0') {
        FUN_14018b23a(param_1 + 0x98,lVar3,0);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14144529e FUN_14144529e body=289 status=ok
// SIG undefined FUN_14144529e(void)

void FUN_14144529e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_140dfc108(param_2);
  if (plVar2 == (longlong *)0x0) goto LAB_14144539d;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (lVar3 == 0) goto LAB_14144539d;
  local_48 = 0;
  local_38 = 0;
  puStack_40 = &DAT_3f800000ffffffff;
  local_30 = 0;
  uStack_28 = 0;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  local_58 = param_1[2];
  if (((local_58 == 0) && (local_58 = 0, lVar5 != 0)) && (*param_1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_1414453bc:
      local_58 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar1 == '\0') goto LAB_1414453bc;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      local_58 = FUN_144aff482(uVar4,param_1);
    }
    param_1[2] = local_58;
  }
  local_60 = local_58 + 0x18;
  if (local_58 == 0) {
    local_60 = 0;
  }
  local_50 = 0;
  FUN_14164c0ba(lVar3,&local_60,&local_48);
  FUN_140de863f(0,0);
LAB_14144539d:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414453c0 FUN_1414453c0 body=128 status=ok
// SIG undefined FUN_1414453c0(void)

void FUN_1414453c0(longlong param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
      if ((lVar3 != 0) && (*(uint *)(lVar3 + 8) == (uint)param_2[1])) {
        if (-1 < *(short *)(lVar3 + 4)) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
          } while (-1 < *(short *)(lVar3 + 4));
          if (lVar3 == 0) {
            return;
          }
        }
        cVar2 = FUN_1411db966(lVar3 + 0x24,param_3);
        if (cVar2 != '\0') {
          *(undefined8 *)(lVar3 + 0x24) = 0;
          FUN_1414f506e(param_1,lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141445440 FUN_141445440 body=160 status=ok
// SIG undefined FUN_141445440(void)

undefined8
FUN_141445440(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,longlong param_6)

{
  float fVar1;
  
  fVar1 = -1.0;
  if ((param_6 != 0) && (*(char *)(param_6 + 0x524) == '\x01')) {
    fVar1 = *(float *)(param_6 + 0x52c);
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_140dbaa93(param_6);
      *(float *)(param_6 + 0x52c) = fVar1;
    }
    fVar1 = fVar1 * *(float *)(param_6 + 0x528);
  }
  FUN_14016773c(param_1,param_2,param_3,param_4,param_5,fVar1);
  return param_2;
}



// FUNCTION 1414454e0 FUN_1414454e0 body=1072 status=ok
// SIG undefined FUN_1414454e0(void)

void FUN_1414454e0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  code **local_68;
  int local_5c;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *(undefined4 *)(param_5 + 1);
  uVar4 = *param_5;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar7 = DAT_14c762760 + 1;
    *(int *)(puVar9 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar7;
    *puVar9 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(puVar9 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        local_5c = iVar13;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
        iVar13 = local_5c;
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
    *(int *)((longlong)puVar9 + 0x14) = iVar7;
    *(undefined1 *)(puVar9 + 3) = 1;
    *puVar9 = &PTR_FUN_14b47b0e0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)(puVar9 + 6) = 0;
    plVar10 = (longlong *)FUN_14063ee94(puVar9 + 4);
    if ((int)plVar10[1] != 4) {
      FUN_1446efa72(plVar10,0,4,0x10);
      *(undefined4 *)(plVar10 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar10;
    plVar10 = *(longlong **)(param_4 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_1414457e2:
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9cc7a0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = uVar4;
      *(undefined4 *)(puVar5 + 6) = uVar11;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_1414457e2;
        LOCK();
        iVar13 = (int)plVar10[1];
        bVar14 = iVar7 == iVar13;
        if (bVar14) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar13 = iVar7;
        }
        iVar7 = iVar13;
        UNLOCK();
      } while (!bVar14);
      uVar6 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9cc7a0;
      puVar5[3] = uVar6;
      puVar5[4] = plVar10;
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar11;
      puVar5[5] = uVar4;
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    iVar7 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
      FUN_141053524((longlong *)(param_2 + 0x198),iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar9;
    uVar11 = *(undefined4 *)(puVar9 + 1);
  }
  plVar10 = (longlong *)(param_1 + 0x138);
  iVar7 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
    FUN_1447808da(plVar10,iVar7);
  }
  *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658,&local_58);
  if (lVar8 != 0) {
    local_58 = FUN_140ed4b7e;
    local_50 = 0;
    local_68 = &local_58;
    lVar8 = FUN_14063efbe(param_2,lVar8,1,param_1);
    uVar11 = *(undefined4 *)(lVar8 + 8);
    iVar7 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
      FUN_1447808da(plVar10,iVar7);
    }
    *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141445912 FUN_141445912 body=834 status=ok
// SIG undefined FUN_141445912(void)

undefined4 FUN_141445912(longlong param_1,undefined1 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  local_50 = DAT_14cb92cb0;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar7 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar7;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar9 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar7;
    *(undefined1 *)(puVar10 + 3) = param_2;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_3 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_141445b4a:
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9cc810;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = uVar4;
      *(undefined4 *)(puVar5 + 6) = uVar8;
    }
    else {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) goto LAB_141445b4a;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar14 = iVar7 == iVar13;
        if (bVar14) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar13 = iVar7;
        }
        iVar7 = iVar13;
        UNLOCK();
      } while (!bVar14);
      uVar6 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9cc810;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar8;
      puVar5[5] = uVar4;
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
    iVar7 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar7 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar7 * 8) = puVar10;
    uVar8 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 141445c56 FUN_141445c56 body=81 status=ok
// SIG undefined FUN_141445c56(void)

void FUN_141445c56(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_140e91296(param_1 + 0x158);
  FUN_141445ca8(param_1);
  return;
}



// FUNCTION 141445ca8 FUN_141445ca8 body=329 status=ok
// SIG undefined FUN_141445ca8(void)

void FUN_141445ca8(longlong *param_1)

{
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x10))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x10))();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x17],(int)param_1[0x18]);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1407dde2a(param_1[0x15],(int)param_1[0x16]);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14116e843(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141445df2 FUN_141445df2 body=233 status=ok
// SIG undefined FUN_141445df2(void)

longlong FUN_141445df2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1414460ee();
  uVar6 = *(undefined8 *)(param_2 + 0x138);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  uVar4 = *(undefined4 *)(param_2 + 0x148);
  uVar5 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = uVar5;
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  FUN_141445edc(param_1 + 0x158,param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  _Src = *(void **)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x1b0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  else {
    FUN_148e50b9e((undefined8 *)(param_1 + 0x1a8),iVar1,0);
    memcpy(*(void **)(param_1 + 0x1a8),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 141445edc FUN_141445edc body=154 status=ok
// SIG undefined FUN_141445edc(void)

longlong FUN_141445edc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_141445f08;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_141445f08:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_141445f76(param_1,param_2);
  return param_1;
}



// FUNCTION 141445f76 FUN_141445f76 body=375 status=ok
// SIG undefined FUN_141445f76(void)

longlong * FUN_141445f76(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e91306(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar7 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar10 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined4 *)((undefined8 *)(lVar5 + lVar9) + 1) =
               *(undefined4 *)((undefined8 *)(lVar3 + lVar9) + 1);
          *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          *(undefined8 *)(lVar5 + 0x10 + lVar9) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
          lVar4 = *(longlong *)(lVar3 + 0x18 + lVar9);
          *(longlong *)(lVar5 + 0x18 + lVar9) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x20 + lVar9) = *(undefined8 *)(lVar3 + 0x20 + lVar9);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar1 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 1414460ee FUN_1414460ee body=1044 status=ok
// SIG undefined FUN_1414460ee(void)

undefined8 * FUN_1414460ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = param_2[0xe];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  pvVar2 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  uVar3 = param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_148c6e584(param_1 + 0x13,iVar1,0);
    FUN_148c6e5f7(param_1[0x13],uVar3,iVar1);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  uVar3 = param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_14106b4ae(param_1 + 0x15,iVar1,0);
    FUN_14106b195(param_1[0x15],uVar3,iVar1);
  }
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar3 = param_2[0x17];
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x17,iVar1,0);
    FUN_140b8566a(param_1[0x17],uVar3,iVar1);
  }
  param_1[0x1b] = param_2[0x1b];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar6 = *(undefined4 *)(param_2 + 0x1a);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar7;
  FUN_1447a97f4(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  plVar4 = (longlong *)param_2[0x22];
  param_1[0x22] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  plVar4 = (longlong *)param_2[0x24];
  param_1[0x24] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  return param_1;
}



// FUNCTION 141446502 FUN_141446502 body=354 status=ok
// SIG undefined FUN_141446502(void)

void FUN_141446502(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
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
  param_1[3] = param_2;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    if (DAT_14c927740 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_146856450;
      local_50 = FUN_1427b121c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000021;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      if (DAT_14c927740 == 0) goto LAB_141446651;
    }
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
        DAT_14c927740 + 0x30)) {
      lVar1 = *param_3;
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      goto LAB_141446571;
    }
  }
LAB_141446651:
  lVar1 = 0;
LAB_141446571:
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_1446f8c06(param_1 + 1,0);
  }
  *(undefined2 *)(param_1 + 6) = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141446666 FUN_141446666 body=59 status=ok
// SIG undefined FUN_141446666(void)

void FUN_141446666(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_143eefb9a();
    if (*(longlong *)(param_1 + 8) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}



// FUNCTION 1414466a2 FUN_1414466a2 body=59 status=ok
// SIG undefined FUN_1414466a2(void)

void FUN_1414466a2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_140a68212();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414466de FUN_1414466de body=166 status=ok
// SIG undefined FUN_1414466de(void)

void FUN_1414466de(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x120) = uVar3;
  plVar1 = (longlong *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) < 0) {
    FUN_14481578e(plVar1);
    uVar3 = *(uint *)(param_1 + 0x120);
  }
  if ((int)uVar3 < 1) {
    iVar5 = 1;
  }
  else {
    iVar5 = 1;
    lVar4 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xc + lVar4);
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulonglong)uVar3 * 0x18 != lVar4);
  }
  iVar2 = *(int *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x134) < iVar2 + 1U) {
    FUN_1446f48e2(plVar1,iVar2);
  }
  *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar5;
  return;
}



// FUNCTION 141446784 FUN_141446784 body=237 status=ok
// SIG undefined FUN_141446784(void)

undefined8 FUN_141446784(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar4 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar7 * 0x18),
            *plVar1 != lVar3) {
        iVar7 = (int)plVar1[2];
        if (iVar7 == -1) {
          return 0;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        return 0;
      }
      if ((uint *)(plVar1 + 1) == (uint *)0x0) {
        return 0;
      }
      if (*(int *)((longlong)plVar1 + 0xc) == 0) {
        return 0;
      }
      uVar2 = *(uint *)(plVar1 + 1);
      if ((int)uVar2 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return 0;
      }
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (puVar5 != (undefined8 *)0x0) {
        if (*(int *)(puVar5 + 2) != *(int *)((longlong)plVar1 + 0xc)) {
          return 0;
        }
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          return *puVar5;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 141446872 FUN_141446872 body=1622 status=ok
// SIG undefined FUN_141446872(void)

void FUN_141446872(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  uint local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_2 != (longlong *)0x0) {
    if ((char)param_1[0x2f] == '\x03') {
      if (param_3 == '\0') {
        local_11c = 0;
        local_120 = *(uint *)((longlong)param_2 + 0xc);
        if ((int)local_120 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((local_120 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_120 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar16 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar16 = *(int *)(lVar4 + 0x10);
          bVar17 = iVar16 == 0;
          if (bVar17) {
            *(int *)(lVar4 + 0x10) = iVar10;
            iVar16 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar16 = iVar10;
          }
        }
        local_118 = &local_120;
        local_11c = iVar16;
        FUN_14663737c(param_1 + 0x4d5);
      }
      else {
        uVar15 = *(uint *)((longlong)param_2 + 0xc);
        local_118 = (uint *)(ulonglong)uVar15;
        if ((int)uVar15 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar16 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar16 = *(int *)(lVar4 + 0x10);
          bVar17 = iVar16 == 0;
          if (bVar17) {
            *(int *)(lVar4 + 0x10) = iVar10;
            iVar16 = 0;
          }
          UNLOCK();
          uVar15 = (uint)local_118;
          if (bVar17) {
            iVar16 = iVar10;
          }
        }
        local_118._0_4_ = uVar15;
        local_118 = (uint *)CONCAT44(iVar16,(uint)local_118);
        FUN_145bf949a(param_1 + 0x4d5);
      }
      FUN_140f35564(param_1);
    }
    if (((param_1[0x4dc] != 0) && (lVar4 = FUN_1402d1dc0(param_1[0x4dc] + 0x460), lVar4 != 0)) &&
       (cVar2 = (**(code **)(*param_2 + 0x6c8))(param_2), cVar2 != '\0')) {
      iVar16 = *(int *)((longlong)param_2 + 0xc);
      plVar7 = param_1 + 0x4d7;
      lVar4 = param_1[0x4d7];
      iVar10 = (int)param_1[0x4d8];
      lVar11 = (longlong)iVar10;
      if (lVar11 != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(lVar4 + lVar5) == iVar16) {
            uVar15 = (int)(lVar5 >> 2) * -0x55555555;
            if (param_3 == '\0') {
              if ((int)uVar15 < iVar10 && -1 < (int)uVar15) {
                uVar6 = (ulonglong)(uVar15 & 0x7fffffff);
                iVar16 = *(int *)(lVar4 + 8 + uVar6 * 0xc);
                if ((((iVar16 != 0) && (uVar1 = *(uint *)(lVar4 + uVar6 * 0xc + 4), -1 < (int)uVar1)
                     ) && (((int)uVar1 < DAT_14c9647dc &&
                           ((plVar8 = (longlong *)
                                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8))
                            , plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar16)))))) &&
                   (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
                    ((longlong *)*plVar8 != (longlong *)0x0)))) {
                  (**(code **)(*(longlong *)*plVar8 + 0xa68))();
                  *(undefined8 *)(param_1[0x4d7] + 4 + uVar6 * 0xc) = 0;
                  iVar10 = (int)param_1[0x4d8];
                }
                iVar16 = ~uVar15 + iVar10;
                if (iVar16 != 0) {
                  iVar3 = 1;
                  if (iVar16 < 1) {
                    iVar3 = iVar16;
                  }
                  memmove((void *)(param_1[0x4d7] + uVar6 * 0xc),
                          (void *)(param_1[0x4d7] + (longlong)(iVar10 - iVar3) * 0xc),
                          (longlong)iVar3 * 0xc);
                  iVar10 = (int)param_1[0x4d8];
                }
                *(int *)(param_1 + 0x4d8) = iVar10 + -1;
                FUN_145c3d2b2(plVar7);
              }
              goto LAB_141446b84;
            }
            if (uVar15 == 0xffffffff) goto LAB_141446934;
            lVar11 = (longlong)(int)uVar15;
            goto LAB_141446960;
          }
          lVar5 = lVar5 + 0xc;
        } while (lVar11 * 0xc != lVar5);
      }
      if (param_3 != '\0') {
LAB_141446934:
        *(uint *)(param_1 + 0x4d8) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0x26c4) < iVar10 + 1U) {
          FUN_14663749c(plVar7,iVar10);
          lVar4 = *plVar7;
        }
        *(undefined4 *)(lVar4 + 8 + lVar11 * 0xc) = 0;
        *(undefined8 *)(lVar4 + lVar11 * 0xc) = 0;
        lVar4 = *plVar7;
LAB_141446960:
        lVar5 = lVar11 * 0xc;
        *(int *)(lVar4 + lVar5) = iVar16;
        iVar16 = *(int *)(*plVar7 + 8 + lVar5);
        if ((((((iVar16 == 0) || (uVar15 = *(uint *)(lVar5 + *plVar7 + 4), (int)uVar15 < 0)) ||
              (DAT_14c9647dc <= (int)uVar15)) ||
             ((plVar7 = (longlong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
              plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar16)))) ||
            (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) &&
           (lVar4 = FUN_1402d1dc0(param_1[0x4dc] + 0x460), lVar4 != 0)) {
          lVar5 = *(longlong *)(param_1[0x4dc] + 0x488);
          if (lVar5 != 0) {
            local_58 = (undefined8 *)0x0;
            local_50 = 0x1800000000;
            if (param_1 != (longlong *)0x0) {
              FUN_140a44582(param_1,&local_118,0);
              lVar14 = (longlong)(int)local_50;
              puVar13 = &local_118;
              if (local_58 != (undefined8 *)0x0) {
                puVar13 = local_58;
              }
              if (lVar14 != 0) {
                lVar9 = 0;
                do {
                  plVar7 = *(longlong **)((longlong)puVar13 + lVar9);
                  if ((plVar7 != (longlong *)0x0) &&
                     (cVar2 = (**(code **)(*plVar7 + 0x4c8))(plVar7,lVar5), cVar2 != '\0')) {
                    if (local_58 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    goto LAB_141446a17;
                  }
                  lVar9 = lVar9 + 8;
                } while (lVar14 * 8 != lVar9);
              }
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          if (*(code **)(*param_1 + 0x3a8) == (code *)&LAB_144a8179a) {
            plVar7 = (longlong *)param_1[0x39];
          }
          else {
            plVar7 = (longlong *)(**(code **)(*param_1 + 0x3a8))(param_1);
          }
LAB_141446a17:
          local_188 = &local_138;
          local_128 = DAT_14c846508;
          local_138 = DAT_14c8464f8;
          uStack_130 = DAT_14c846500;
          local_158 = (undefined4)DAT_14c8464e0;
          uStack_154 = DAT_14c8464e0._4_4_;
          uStack_150 = (undefined4)DAT_14c8464e8;
          uStack_14c = DAT_14c8464e8._4_4_;
          local_148 = DAT_14c8464f0;
          local_170 = 0;
          local_178 = 0;
          local_168 = 1;
          local_180 = 2;
          lVar5 = FUN_140a44468(lVar4,plVar7,*(undefined8 *)(param_1[0x4dc] + 0x488));
          lVar4 = param_1[0x4d7] + lVar11 * 0xc;
          puVar12 = (uint *)(lVar4 + 4);
          if (lVar5 == 0) {
            *puVar12 = 0;
            iVar16 = 0;
          }
          else {
            uVar15 = *(uint *)(lVar5 + 0xc);
            *puVar12 = uVar15;
            if ((int)uVar15 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar16 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar16 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar16;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar16 = *(int *)(lVar11 + 0x10);
              bVar17 = iVar16 == 0;
              if (bVar17) {
                *(int *)(lVar11 + 0x10) = iVar10;
                iVar16 = 0;
              }
              UNLOCK();
              if (bVar17) {
                iVar16 = iVar10;
              }
            }
          }
          *(int *)(lVar4 + 8) = iVar16;
        }
      }
    }
  }
LAB_141446b84:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141446eca FUN_141446eca body=122 status=ok
// SIG undefined FUN_141446eca(void)

bool FUN_141446eca(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 7;
  switch(*(undefined4 *)(param_1 + 100)) {
  case 3:
    bifrost::sockets::stopListening(*(ConnectionId *)(param_1 + 0x60));
  case 1:
  case 2:
    bVar1 = bifrost::sockets::destroy(*(ConnectionId *)(param_1 + 0x60));
    uVar2 = bVar1 ^ 7;
    break;
  case 4:
  case 5:
    bVar1 = bifrost::sockets::disconnect(*(ConnectionId *)(param_1 + 0x60),0,0);
    if ((bVar1) && (bVar1 = bifrost::sockets::destroy(*(ConnectionId *)(param_1 + 0x60)), bVar1)) {
      bVar1 = true;
      uVar2 = 6;
      break;
    }
  default:
    bVar1 = false;
    break;
  case 6:
    return true;
  }
  *(uint *)(param_1 + 100) = uVar2;
  return bVar1;
}



// FUNCTION 141446f44 FUN_141446f44 body=190 status=ok
// SIG undefined FUN_141446f44(void)

void FUN_141446f44(longlong *param_1,longlong *param_2)

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
    FUN_1407c430e(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 141447002 FUN_141447002 body=529 status=ok
// SIG undefined FUN_141447002(void)

void FUN_141447002(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
       (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) &&
     ((((*(byte *)(lVar5 + 0x152) == 1 || (*(byte *)(lVar5 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar5 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return;
    }
  }
  if (((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
     ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0)) {
    if ((((*(byte *)(param_1 + 0x1fc) != 0) && (DAT_14c76152c != '\0')) &&
        (((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
          (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
         ((*(byte *)(lVar5 + 0x152) == 1 || (*(byte *)(lVar5 + 0x152) - 5 < 2)))))) &&
       ((*(longlong *)(lVar5 + 0x178) != 0 && (DAT_14c76152c == '\x01')))) {
      bVar1 = *(byte *)(param_1 + 0x1fc);
      iVar3 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0x3e4);
      if (iVar3 < 0) {
        iVar3 = FUN_141348de4();
      }
      if (iVar3 < (int)(uint)bVar1) {
        return;
      }
    }
    if (((((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
         (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) && ((*(byte *)(param_1 + 0x9c) & 1) != 0))
       && ((*(longlong *)(param_1 + 0x20) == 0 ||
           ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0)))) {
      uVar4 = FUN_14001cc68(0x60,0x10);
      FUN_141447214(uVar4,param_1);
      *(undefined8 *)(param_1 + 0x318) = uVar4;
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x318);
      }
                    /* WARNING: Could not recover jumptable at 0x0001414470f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar5 + 0x218) + 0x2e0))(*(longlong **)(lVar5 + 0x218),uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 141447214 FUN_141447214 body=292 status=ok
// SIG undefined FUN_141447214(void)

void FUN_141447214(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x2c4);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_2 + 0x2d0) & 1;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_2 + 0x310) & 1;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_2 + 0x310) >> 1 & 1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x304);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x2c8);
  return;
}



// FUNCTION 141447338 FUN_141447338 body=1700 status=ok
// SIG undefined FUN_141447338(void)

void FUN_141447338(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 *_Src;
  undefined8 *puVar6;
  undefined4 *_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            goto LAB_14144741f;
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
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
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
LAB_14144741f:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1414474ec;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1414474ec:
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_3c);
            goto LAB_1414475b8;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_3c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_3c,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_3c,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_3c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_3c,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
LAB_1414475b8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_29,local_38,local_3c);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414479de FUN_1414479de body=228 status=ok
// SIG undefined FUN_1414479de(void)

void FUN_1414479de(longlong param_1,undefined1 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1402d76c0();
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x298) != 0) && (*(char *)(param_1 + 0x3f0) == '\0')) {
      if (*(int *)(param_1 + 900) < 0) {
        *(undefined4 *)(param_1 + 0x380) = 0;
        FUN_14571f40c(param_1 + 0x378);
      }
      else {
        *(undefined4 *)(param_1 + 0x380) = 0;
      }
      cVar1 = FUN_1402d76c0(param_1);
      if ((cVar1 == '\0') && (*(int *)(param_1 + 0x2b0) <= param_4)) {
        *(int *)(param_1 + 0x2b0) = param_4;
      }
      local_60 = 0;
      local_30 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      uStack_3b = 0;
      uStack_38 = 0;
      local_2e = 0x100;
      local_68 = param_3;
      local_2f = param_2;
      FUN_1405244c0(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x2b0) = param_4;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141447ac4 FUN_141447ac4 body=337 status=ok
// SIG undefined FUN_141447ac4(void)

void FUN_141447ac4(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_141447ba8;
    }
  }
  local_60 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
LAB_141447ba8:
  FUN_148a053c2(param_2,local_58,param_1 + 2,param_1 + 4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141447c16 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 141447c1b FUN_141447c1b body=13 status=ok
// SIG undefined FUN_141447c1b(void)

void FUN_141447c1b(longlong param_1)

{
  FUN_14001cc68(param_1 + (ulonglong)(param_1 == 0));
  return;
}



// FUNCTION 141447c28 FUN_141447c28 body=75 status=ok
// SIG undefined FUN_141447c28(void)

void FUN_141447c28(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -8) = 0;
      FUN_144a85b52(param_1,1);
      *(undefined1 *)(param_1 + 8) = 0;
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141447c74 FUN_141447c74 body=2041 status=ok
// SIG undefined FUN_141447c74(void)

void FUN_141447c74(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  LPCRITICAL_SECTION local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *puStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_14a3984c0;
  local_a0 = (LPCRITICAL_SECTION)(param_1 + 0x29);
  EnterCriticalSection(local_a0);
  if (param_1[0x2e] != 0) {
    if ((*(byte *)(param_1[0x2e] + 0xa0) & 1) == 0) {
      FUN_140082318(param_1[0x2e]);
    }
    puVar5 = (undefined8 *)param_1[0x2e];
    param_1[0x2e] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  FUN_145a07be4();
  plVar20 = param_1 + 0x1a;
  puVar5 = param_1 + 0x1c;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  puStack_60 = puVar5;
  if (*(int *)(param_1 + 0x1f) == 0) {
    uVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = *(uint *)(param_1 + 0x1f);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78._0_4_ = local_58;
  local_78._4_4_ = uStack_54;
  local_88._0_4_ = (undefined4)local_68;
  local_88._4_4_ = local_68._4_4_;
  uStack_80 = puStack_60;
  local_90 = plVar20;
  if ((uStack_54 != uVar15) || (puStack_60 != puVar5)) {
    do {
      do {
        FUN_145a07b86(*(undefined8 *)(*local_90 + 0x10 + (longlong)(int)local_78._4_4_ * 0x20));
        local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (local_78._4_4_ != uVar15);
    } while ((uStack_80 != puVar5) || (local_90 != plVar20));
  }
  puVar5 = param_1 + 0x31;
  local_90 = (longlong *)0x100000000;
  uStack_80 = (undefined8 *)0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  local_98 = plVar20;
  local_88 = puVar5;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar21 = 1;
    uStack_80._0_4_ = 0xffffffff;
    iVar14 = 0;
    iVar13 = 0;
    uStack_80._4_4_ = 0;
    local_90._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar21 = (ulonglong)local_90 >> 0x20;
    iVar14 = *(int *)(param_1 + 0x34);
    iVar13 = (uint)local_78;
  }
  puVar19 = local_88;
  plVar20 = param_1 + 0x2f;
  iVar11 = (int)local_90;
  uVar15 = (uint)uStack_80;
  iVar10 = uStack_80._4_4_;
  local_b8 = plVar20;
  local_b0 = param_1;
  if (uStack_80._4_4_ != iVar14 || local_88 != puVar5) {
    do {
      LOCK();
      puVar2 = (uint *)(*(longlong *)(*plVar20 + 0x40 + (longlong)iVar10 * 0x50) + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      uVar15 = uVar15 & ~(uint)uVar21;
      puVar18 = (undefined8 *)puVar19[2];
      if ((undefined8 *)puVar19[2] == (undefined8 *)0x0) {
        puVar18 = puVar19;
      }
      iVar4 = *(int *)(puVar19 + 3);
      lVar16 = (longlong)iVar11;
      uVar12 = *(uint *)((longlong)puVar18 + lVar16 * 4) & uVar15;
      if (uVar12 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar6 = iVar10;
        if (iVar10 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar17 = 0;
          do {
            uVar12 = *(uint *)((longlong)puVar18 + lVar17 * 4 + lVar16 * 4 + 4);
            if (uVar12 != 0) {
              iVar11 = iVar11 + (int)lVar17 + 1;
              uVar15 = 0xffffffff;
              goto LAB_141447ee5;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar6 - lVar16 != lVar17);
          uVar15 = 0xffffffff;
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + 1;
        plVar20 = local_b8;
        iVar10 = iVar4;
      }
      else {
LAB_141447ee5:
        uVar21 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar10 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar10) {
          iVar10 = iVar4;
        }
      }
    } while (iVar10 != iVar14 || puVar19 != puVar5);
  }
  FUN_145a07ac6(plVar20);
  puVar19 = local_b0;
  plVar20 = local_b0 + 0x39;
  puVar5 = local_b0 + 0x3b;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  puStack_60 = puVar5;
  if (*(int *)(local_b0 + 0x3e) == 0) {
    uVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = *(uint *)(puVar19 + 0x3e);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78._0_4_ = local_58;
  local_78._4_4_ = uStack_54;
  local_88 = (undefined8 *)local_68;
  uStack_80 = puStack_60;
  local_90 = plVar20;
  if ((uStack_54 != uVar15) || (puStack_60 != puVar5)) {
    do {
      LOCK();
      puVar2 = (uint *)(*(longlong *)(*local_90 + 0x10 + (longlong)(int)local_78._4_4_ * 0x20) + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar20 || (uStack_80 != puVar5 || local_78._4_4_ != uVar15));
  }
  local_a8 = plVar20;
  FUN_145a07b06(plVar20);
  puVar5 = puVar19 + 0x45;
  local_90 = (longlong *)0x100000000;
  uStack_80 = (undefined8 *)0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  local_88 = puVar5;
  if (*(int *)(puVar19 + 0x48) == 0) {
    uVar21 = 1;
    uStack_80._0_4_ = 0xffffffff;
    iVar14 = 0;
    iVar13 = 0;
    uStack_80._4_4_ = 0;
    local_90._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar21 = (ulonglong)local_90 >> 0x20;
    iVar14 = *(int *)(puVar19 + 0x48);
    iVar13 = (uint)local_78;
  }
  puVar18 = local_88;
  plVar20 = puVar19 + 0x43;
  iVar11 = (int)local_90;
  uVar15 = (uint)uStack_80;
  iVar10 = uStack_80._4_4_;
  if (uStack_80._4_4_ != iVar14 || local_88 != puVar5) {
    do {
      LOCK();
      puVar2 = (uint *)(*(longlong *)(*plVar20 + 0x10 + (longlong)iVar10 * 0x20) + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      uVar15 = uVar15 & ~(uint)uVar21;
      puVar19 = (undefined8 *)puVar18[2];
      if ((undefined8 *)puVar18[2] == (undefined8 *)0x0) {
        puVar19 = puVar18;
      }
      iVar4 = *(int *)(puVar18 + 3);
      lVar16 = (longlong)iVar11;
      uVar12 = *(uint *)((longlong)puVar19 + lVar16 * 4) & uVar15;
      if (uVar12 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar6 = iVar10;
        if (iVar10 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar17 = 0;
          do {
            uVar12 = *(uint *)((longlong)puVar19 + lVar17 * 4 + lVar16 * 4 + 4);
            if (uVar12 != 0) {
              iVar11 = iVar11 + (int)lVar17 + 1;
              uVar15 = 0xffffffff;
              goto LAB_141448130;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar6 - lVar16 != lVar17);
          uVar15 = 0xffffffff;
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar4;
      }
      else {
LAB_141448130:
        uVar21 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar10 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar10) {
          iVar10 = iVar4;
        }
      }
    } while (iVar10 != iVar14 || puVar18 != puVar5);
  }
  FUN_145a07b46(plVar20);
  if (DAT_14ca9f270 == (undefined8 *)0x0) {
    DAT_14ca9f270 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    DAT_14ca9f270[2] = 0;
    DAT_14ca9f270[3] = 0;
    *DAT_14ca9f270 = 0;
    DAT_14ca9f270[1] = 0;
    DAT_14ca9f270[4] = 0;
    DAT_14ca9f270[5] = 0;
    DAT_14ca9f270[6] = 0;
    DAT_14ca9f270[3] = &PTR_FUN_14a399cd0;
    *(undefined4 *)(DAT_14ca9f270 + 6) = 0;
  }
  FUN_145a07f9a();
  lpCriticalSection = local_a0;
  LeaveCriticalSection(local_a0);
  plVar9 = local_98;
  plVar8 = local_a8;
  puVar5 = local_b0;
  plVar7 = local_b8;
  *(undefined4 *)(local_b0 + 0x4c) = 0;
  if (local_b0[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145a078b0(plVar20);
  *(undefined4 *)(puVar5 + 0x42) = 0;
  if (puVar5[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145a0793e(plVar8);
  *(undefined4 *)(puVar5 + 0x38) = 0;
  if (puVar5[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145a079cc(plVar7);
  puVar19 = (undefined8 *)puVar5[0x2e];
  if (puVar19 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar19 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar19)(puVar19,1);
    }
  }
  DeleteCriticalSection(lpCriticalSection);
  if (puVar5[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(puVar5[0x24],*(undefined4 *)(puVar5 + 0x25));
  if (puVar5[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(puVar5 + 0x23) = 0;
  if (puVar5[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145a07a5a(plVar9);
  *(undefined4 *)(puVar5 + 0x19) = 0;
  if (puVar5[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145a07a90(puVar5 + 0x10);
  *(undefined4 *)(puVar5 + 0xf) = 0;
  if (puVar5[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(puVar5 + 6);
  *puVar5 = &PTR_LAB_14a399f40;
  FUN_141220b8a(puVar5);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14144846e FUN_14144846e body=206 status=ok
// SIG undefined FUN_14144846e(void)

undefined8 FUN_14144846e(void)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  
  plVar7 = (longlong *)(DAT_14ca9f278 + 0xd0);
  uVar5 = 0;
  iVar4 = DAT_14ca9f288 + -1;
  if (DAT_14ca9f288 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    puVar1 = DAT_14ca9f280;
    if (DAT_14ca9f288 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar1[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar8]) -
              0x20;
      uVar9 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar4 != (int)lVar8);
  }
  iVar4 = FUN_14144853c(plVar7,uVar5,&DAT_14ca9f280);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *plVar7, puVar3 = (undefined8 *)(lVar8 + 0x10),
     puVar3 == (undefined8 *)0x0 || lVar8 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14144853c FUN_14144853c body=193 status=ok
// SIG undefined FUN_14144853c(void)

int FUN_14144853c(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14144857e:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1414485d6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1414485d6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1414485dc;
    }
  }
  return -1;
LAB_1414485d6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1414485dc:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14144857e;
}



// FUNCTION 1414485fe FUN_1414485fe body=595 status=ok
// SIG undefined FUN_1414485fe(void)

void FUN_1414485fe(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  
  cVar2 = FUN_1403966e6();
  if (cVar2 == '\0') {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  lVar3 = FUN_140f058b4();
  if (lVar3 != 0) {
    FUN_140f058b4(&DAT_14ca80660);
    FUN_14740e5f8();
    FUN_14740e726();
  }
  iVar1 = DAT_14ca80580;
  if (DAT_14ca80580 == 0) {
    uVar10 = 1;
    uVar5 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar14 = &DAT_14ca80568;
    if (DAT_14ca80578 != (uint *)0x0) {
      puVar14 = DAT_14ca80578;
    }
    uVar13 = *puVar14;
    if (uVar13 == 0) {
      iVar4 = DAT_14ca80580 + 0x1e;
      if (-1 < DAT_14ca80580 + -1) {
        iVar4 = DAT_14ca80580 + -1;
      }
      uVar5 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar5;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar5) goto LAB_1414486ef;
        iVar4 = iVar4 + 0x20;
        uVar13 = puVar14[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar5 = 0;
      iVar4 = 0;
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13);
    uVar11 = uVar10 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar9 = (iVar4 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14ca80580 <= iVar9) {
      iVar9 = DAT_14ca80580;
    }
  }
  if (iVar9 != DAT_14ca80580) {
    uVar13 = 0xffffffff;
    do {
      lVar3 = DAT_14ca80558;
      lVar12 = (longlong)iVar9;
      LOCK();
      *(undefined8 *)(*(longlong *)(DAT_14ca80558 + 8 + lVar12 * 0x18) + 0x18) = 0xffffffffffffffff;
      UNLOCK();
      LOCK();
      **(undefined8 **)(lVar3 + 8 + lVar12 * 0x18) = 0xffffffffffffffff;
      UNLOCK();
      LOCK();
      *(undefined8 *)(*(longlong *)(lVar3 + 8 + lVar12 * 0x18) + 8) = 0xffffffffffffffff;
      UNLOCK();
      uVar13 = ~(uint)uVar10 & uVar13;
      puVar14 = DAT_14ca80578;
      if (DAT_14ca80578 == (uint *)0x0) {
        puVar14 = &DAT_14ca80568;
      }
      iVar9 = (int)uVar5;
      lVar3 = (longlong)iVar9;
      uVar6 = puVar14[lVar3] & uVar13;
      if (uVar6 == 0) {
        iVar7 = DAT_14ca80580 + 0x1e;
        if (-1 < DAT_14ca80580 + -1) {
          iVar7 = DAT_14ca80580 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar9 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar14[lVar3 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar5 = (ulonglong)(iVar9 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_141448801;
            }
            iVar4 = iVar4 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar3 != lVar12);
          uVar13 = 0xffffffff;
          lVar3 = (longlong)iVar8;
        }
        uVar5 = lVar3 + 1U & 0xffffffff;
        iVar9 = DAT_14ca80580;
      }
      else {
LAB_141448801:
        uVar10 = (ulonglong)(-uVar6 & uVar6);
        uVar11 = uVar10 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar9 = (iVar4 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        if (DAT_14ca80580 <= iVar9) {
          iVar9 = DAT_14ca80580;
        }
      }
    } while (iVar9 != iVar1);
  }
LAB_1414486ef:
  FUN_145aa18d4(&DAT_14ca804b8);
  FUN_145aa18d4(&DAT_14ca80508);
  FUN_145c387d8();
  FUN_1403d43ee(&DAT_14ca80608,0);
  DAT_14ca80658 = 0;
                    /* WARNING: Could not recover jumptable at 0x000141448734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  return;
}



// FUNCTION 141448852 FUN_141448852 body=578 status=ok
// SIG undefined FUN_141448852(void)

void FUN_141448852(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x20;
        local_74 = iVar5;
        iVar5 = FUN_144a85f5b(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x1c + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x18 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_141448a6d;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_141448a6d:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141448a96 FUN_141448a96 body=580 status=ok
// SIG undefined FUN_141448a96(void)

void FUN_141448a96(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar10 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar9 = *param_1;
        lVar12 = (longlong)iVar7 * 0x50;
        local_74 = iVar5;
        iVar5 = FUN_144a86616(lVar12 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x4c + lVar12) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar9 + 0x48 + lVar12) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar10 = ~(uint)uVar11 & uVar10;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar9 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4) & uVar10;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar12 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4 + lVar9 * 4 + 4);
            if (uVar4 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar3 - lVar9 == lVar12) goto LAB_141448cb3;
          }
          iVar13 = iVar13 + (int)lVar12 + 1;
          uVar10 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_141448cb3:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141448cdc FUN_141448cdc body=40 status=ok
// SIG undefined FUN_141448cdc(void)

undefined8 FUN_141448cdc(undefined8 param_1,int param_2)

{
  FUN_141448d04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141448d04 FUN_141448d04 body=954 status=ok
// SIG undefined FUN_141448d04(void)

void FUN_141448d04(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d9fd0;
  param_1[0xae] = 0;
  FUN_14076ba36(param_1 + 0xaf);
  param_1[0x5f] = 0;
  FUN_14076ba36(param_1 + 0x60);
  plVar1 = param_1 + 0x58;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x50;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x54) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x53)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x53)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x49;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x42;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x46) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x45)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x45)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x3b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1414490be FUN_1414490be body=9 status=ok
// SIG undefined FUN_1414490be(void)

undefined4 FUN_1414490be(longlong param_1)

{
  return *(undefined4 *)(param_1 + 900);
}



// FUNCTION 1414490c8 FUN_1414490c8 body=9 status=ok
// SIG undefined FUN_1414490c8(void)

undefined4 FUN_1414490c8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x37c);
}



// FUNCTION 1414490d2 FUN_1414490d2 body=9 status=ok
// SIG undefined FUN_1414490d2(void)

undefined4 FUN_1414490d2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x388);
}



// FUNCTION 1414490dc FUN_1414490dc body=9 status=ok
// SIG undefined FUN_1414490dc(void)

undefined4 FUN_1414490dc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x380);
}



// FUNCTION 1414490e6 FUN_1414490e6 body=1154 status=ok
// SIG undefined FUN_1414490e6(void)

void FUN_1414490e6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            goto LAB_1414491d1;
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
LAB_1414491d1:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14144929e;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14144929e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14144956a(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144956a FUN_14144956a body=1248 status=ok
// SIG undefined FUN_14144956a(void)

void FUN_14144956a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f65fae();
  if (param_2 == 0) {
LAB_1414495c9:
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[10] = 0;
  }
  else {
    if (DAT_14cbbd498 == 0) {
      local_60 = &local_40;
      local_40 = FUN_140940982;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146572ba2;
      local_68 = &LAB_148ca13ba;
      local_70 = &LAB_140e51436;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_1414495c9;
    uVar5 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 10) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
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
    *(int *)((longlong)param_1 + 0x54) = iVar7;
    cVar4 = FUN_140f66224();
    if (cVar4 != '\0') goto LAB_14144963f;
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_1414497f8:
      lVar9 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 10);
      lVar9 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != *(int *)((longlong)param_1 + 0x54) ||
            ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1414497f8;
        lVar9 = *plVar6;
      }
    }
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(lVar9 + 0xbd8);
    FUN_1412a3970(param_1);
    lVar9 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar9 == 0) goto LAB_14144963f;
    if (DAT_14cba8288 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = L"Game";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14144963f;
    FUN_1449027d0(param_1,&local_40);
    lVar3 = *(longlong *)(local_40 + 0x220);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
    plVar6 = local_38;
    *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    uVar5 = FUN_14042831e(lVar9);
    if (uVar5 != *(byte *)(lVar3 + 0xc0)) {
      if (*(int *)(lVar3 + 0x98) == 0) {
        if (*(int *)(lVar3 + 0x9c) != 0) goto LAB_141449807;
        iVar7 = 1;
      }
      else {
        iVar7 = *(int *)(lVar3 + 0x9c) + 1;
      }
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(int *)(lVar3 + 0x9c) = iVar7;
    }
LAB_141449807:
    if (*(byte *)(lVar3 + 0xc0) == (byte)uVar5) {
      if (*(int *)(lVar3 + 0xc4) == 0) {
        iVar7 = 1;
        goto LAB_14144981f;
      }
    }
    else {
      iVar7 = *(int *)(lVar3 + 0xc4) + 1;
LAB_14144981f:
      *(byte *)(lVar3 + 0xc0) = (byte)uVar5;
      *(int *)(lVar3 + 0xc4) = iVar7;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
    if ((((*(int *)((longlong)param_1 + 0x54) != 0) &&
         (uVar5 = *(uint *)(param_1 + 10), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
       (((lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar9 != 0 &&
         (*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0x54))) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      FUN_1418f9236(param_1);
      FUN_1418f94ee(param_1);
      FUN_140f64a3c(param_1);
      FUN_1418f9688(param_1);
      goto LAB_14144963f;
    }
  }
  FUN_1449027d0(param_1,&local_40);
  lVar9 = *(longlong *)(local_40 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x1b8));
  *(int *)(lVar9 + 0x1b0) = *(int *)(lVar9 + 0x1b0) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_1442a6414(lVar9);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x1b8));
LAB_14144963f:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141449a57 FUN_141449a57 body=137 status=ok
// SIG undefined FUN_141449a57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_141449a57(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_141449ae1();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    uVar2 = ram0x00014cb887fc;
    if ((ram0x00014cb887fc == DAT_14c948034) &&
       (uVar2 = DAT_14c948034, (int)DAT_14cb887f8 != DAT_14c948030)) {
      FUN_14011791e(&local_20,(int)DAT_14cb887f8,ram0x00014cb887fc >> 0x20);
      unique0x00023e00 = local_20;
      uVar2 = local_20;
    }
    bVar3 = uVar2 != param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 141449ae1 FUN_141449ae1 body=5104 status=ok
// SIG undefined FUN_141449ae1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141449ae1(longlong param_1)

{
  wint_t _C;
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wint_t *pwVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  wint_t *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  if (param_1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb86a48) && (FUN_144b3d300(&DAT_14cb86a48), DAT_14cb86a48 == -1)) {
      DAT_14cb86a38 = (longlong *)0x0;
      _DAT_14cb86a40 = 0;
      atexit((_func_5014 *)&LAB_143df12a9);
      _Init_thread_footer(&DAT_14cb86a48);
    }
    lVar8 = (longlong)(int)DAT_14cb86a40;
    if (lVar8 == 0) {
      iVar4 = 0;
      pwVar5 = DAT_14cb7bbb4;
      if ((DAT_14cb7bbb4 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, iVar4 = 0, DAT_14cb7bbb0 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bbb0,(ulonglong)DAT_14cb7bbb4 >> 0x20);
        DAT_14cb7bbb4 = local_38;
        pwVar5 = local_38;
        iVar4 = DAT_14cb86a40;
      }
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,iVar4 + 1U);
      if (DAT_14cb86a44 < iVar4 + 1U) {
        FUN_1446f84a2(&DAT_14cb86a38,iVar4);
        pwVar5 = DAT_14cb7bbb4;
      }
      DAT_14cb86a38[iVar4] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bd9c;
      if ((DAT_14cb7bd9c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bd98 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bd98,(ulonglong)DAT_14cb7bd9c >> 0x20);
        DAT_14cb7bd9c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bd9c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bbe4;
      if ((DAT_14cb7bbe4 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bbe0 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bbe0,(ulonglong)DAT_14cb7bbe4 >> 0x20);
        DAT_14cb7bbe4 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bbe4;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bbcc;
      if ((DAT_14cb7bbcc == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bbc8 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bbc8,(ulonglong)DAT_14cb7bbcc >> 0x20);
        DAT_14cb7bbcc = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bbcc;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bb24;
      if ((DAT_14cb7bb24 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bb20 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bb20,(ulonglong)DAT_14cb7bb24 >> 0x20);
        DAT_14cb7bb24 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bb24;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bb3c;
      if ((DAT_14cb7bb3c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bb38 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bb38,(ulonglong)DAT_14cb7bb3c >> 0x20);
        DAT_14cb7bb3c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bb3c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bb54;
      if ((DAT_14cb7bb54 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bb50 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bb50,(ulonglong)DAT_14cb7bb54 >> 0x20);
        DAT_14cb7bb54 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bb54;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bb6c;
      if ((DAT_14cb7bb6c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bb68 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bb68,(ulonglong)DAT_14cb7bb6c >> 0x20);
        DAT_14cb7bb6c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bb6c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb7bb84;
      if ((DAT_14cb7bb84 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bb80 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bb80,(ulonglong)DAT_14cb7bb84 >> 0x20);
        DAT_14cb7bb84 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb7bb84;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = _DAT_14cb7bbfc;
      if ((_DAT_14cb7bbfc == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bbf8 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bbf8,(ulonglong)_DAT_14cb7bbfc >> 0x20);
        _DAT_14cb7bbfc = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = _DAT_14cb7bbfc;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = _DAT_14cb7bdb4;
      if ((_DAT_14cb7bdb4 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bdb0 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bdb0,(ulonglong)_DAT_14cb7bdb4 >> 0x20);
        _DAT_14cb7bdb4 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = _DAT_14cb7bdb4;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = _DAT_14cb7bc14;
      if ((_DAT_14cb7bc14 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb7bc10 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb7bc10,(ulonglong)_DAT_14cb7bc14 >> 0x20);
        _DAT_14cb7bc14 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = _DAT_14cb7bc14;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb88904;
      if ((DAT_14cb88904 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88900 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88900,(ulonglong)DAT_14cb88904 >> 0x20);
        DAT_14cb88904 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb88904;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb88814;
      if ((DAT_14cb88814 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88810 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88810,(ulonglong)DAT_14cb88814 >> 0x20);
        DAT_14cb88814 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb88814;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb8625c;
      if ((DAT_14cb8625c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb86258 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb86258,(ulonglong)DAT_14cb8625c >> 0x20);
        DAT_14cb8625c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb8625c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb86244;
      if ((DAT_14cb86244 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb86240 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb86240,(ulonglong)DAT_14cb86244 >> 0x20);
        DAT_14cb86244 = local_38;
        pwVar5 = local_38;
      }
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < uVar7) {
        uVar9 = _DAT_14cb86a40 & 0xffffffff;
        DAT_14cb86a40 = uVar7;
        FUN_1446f84a2(&DAT_14cb86a38,uVar9);
        pwVar5 = DAT_14cb86244;
        uVar7 = DAT_14cb86a40;
      }
      DAT_14cb86a40 = uVar7;
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c588;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c580;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c560;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c568;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c570;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar3 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar3);
      if (DAT_14cb86a44 < uVar3) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb7c578;
      pwVar5 = ram0x00014cb889e4;
      if ((ram0x00014cb889e4 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, (int)DAT_14cb889e0 != DAT_14c948030)) {
        FUN_14011791e(&local_38,(int)DAT_14cb889e0,(ulonglong)ram0x00014cb889e4 >> 0x20);
        unique0x00023e00 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = ram0x00014cb889e4;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = ram0x00014cb889fc;
      if ((ram0x00014cb889fc == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, (int)DAT_14cb889f8 != DAT_14c948030)) {
        FUN_14011791e(&local_38,(int)DAT_14cb889f8,(ulonglong)ram0x00014cb889fc >> 0x20);
        unique0x00023e00 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = ram0x00014cb889fc;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = ram0x00014cb8897c;
      if ((ram0x00014cb8897c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, (int)DAT_14cb88978 != DAT_14c948030)) {
        FUN_14011791e(&local_38,(int)DAT_14cb88978,(ulonglong)ram0x00014cb8897c >> 0x20);
        unique0x00023e00 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = ram0x00014cb8897c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = ram0x00014cb889cc;
      if ((ram0x00014cb889cc == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, (int)DAT_14cb889c8 != DAT_14c948030)) {
        FUN_14011791e(&local_38,(int)DAT_14cb889c8,(ulonglong)ram0x00014cb889cc >> 0x20);
        unique0x00023e00 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = ram0x00014cb889cc;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = ram0x00014cb88884;
      if ((ram0x00014cb88884 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, (int)DAT_14cb88880 != DAT_14c948030)) {
        FUN_14011791e(&local_38,(int)DAT_14cb88880,(ulonglong)ram0x00014cb88884 >> 0x20);
        unique0x00023e00 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = ram0x00014cb88884;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb8889c;
      if ((DAT_14cb8889c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88898 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88898,(ulonglong)DAT_14cb8889c >> 0x20);
        DAT_14cb8889c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb8889c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb88854;
      if ((DAT_14cb88854 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88850 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88850,(ulonglong)DAT_14cb88854 >> 0x20);
        DAT_14cb88854 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb88854;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb8882c;
      if ((DAT_14cb8882c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88828 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88828,(ulonglong)DAT_14cb8882c >> 0x20);
        DAT_14cb8882c = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb8882c;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb889b4;
      if ((DAT_14cb889b4 == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb889b0 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb889b0,(ulonglong)DAT_14cb889b4 >> 0x20);
        DAT_14cb889b4 = local_38;
        pwVar5 = local_38;
      }
      uVar9 = _DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar7);
      if (DAT_14cb86a44 < uVar7) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar9 & 0xffffffff);
        pwVar5 = DAT_14cb889b4;
      }
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      pwVar5 = DAT_14cb8886c;
      if ((DAT_14cb8886c == DAT_14c948034) &&
         (pwVar5 = DAT_14c948034, DAT_14cb88868 != DAT_14c948030)) {
        FUN_14011791e(&local_38,DAT_14cb88868,(ulonglong)DAT_14cb8886c >> 0x20);
        DAT_14cb8886c = local_38;
        pwVar5 = local_38;
      }
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar7 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < uVar7) {
        uVar9 = _DAT_14cb86a40 & 0xffffffff;
        DAT_14cb86a40 = uVar7;
        FUN_1446f84a2(&DAT_14cb86a38,uVar9);
        pwVar5 = DAT_14cb8886c;
        uVar7 = DAT_14cb86a40;
      }
      DAT_14cb86a40 = uVar7;
      DAT_14cb86a38[lVar8] = (longlong)pwVar5;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888b0;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888b8;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888c0;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888c8;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88928;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88920;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888d0;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888d8;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888e0;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888e8;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888f0;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88930;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb888f8;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88918;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      DAT_14cb86a40 = DAT_14cb86a40 + 1;
      if (DAT_14cb86a44 < DAT_14cb86a40) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88840;
      uVar7 = DAT_14cb86a40;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      uVar3 = DAT_14cb86a40 + 1;
      _DAT_14cb86a40 = CONCAT44(DAT_14cb86a44,uVar3);
      if (DAT_14cb86a44 < uVar3) {
        FUN_1446f84a2(&DAT_14cb86a38,uVar7);
      }
      DAT_14cb86a38[lVar8] = DAT_14cb88848;
      lVar8 = (longlong)(int)DAT_14cb86a40;
      if (lVar8 == 0) goto LAB_14144a884;
    }
    plVar6 = DAT_14cb86a38;
    do {
      if (*plVar6 == param_1) goto LAB_14144a8a3;
      plVar6 = plVar6 + 1;
    } while (plVar6 != DAT_14cb86a38 + lVar8);
LAB_14144a884:
    FUN_1400021e4(&local_28);
    pwVar5 = local_38;
    if (local_30 == 0) {
      pwVar5 = &DAT_149dfb77a;
    }
    if ((*pwVar5 == 0x2d) || (*pwVar5 == 0x2b)) {
      pwVar5 = pwVar5 + 1;
    }
    bVar11 = false;
    do {
      _C = *pwVar5;
      if (_C == 0x2e) {
        bVar2 = true;
        if (bVar11) goto LAB_14144a8ee;
      }
      else {
        if (_C == 0) goto LAB_14144a94b;
        iVar4 = iswdigit(_C);
        bVar2 = bVar11;
        if (iVar4 == 0) goto LAB_14144a8ee;
      }
      bVar11 = bVar2;
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_14144a8a3:
  uVar9 = 0;
  goto LAB_14144a957;
LAB_14144a94b:
  uVar9 = 0;
  goto LAB_14144a94d;
LAB_14144a8ee:
  uVar7 = local_30 - 1;
  if (local_30 == 0) {
    uVar7 = 0;
  }
  uVar9 = CONCAT71((int7)((ulonglong)pwVar5 >> 8),1);
  if (0 < (int)uVar7) {
    uVar10 = 0;
    do {
      uVar1 = local_38[uVar10];
      if ((0x19 < (ushort)((uVar1 & 0xffdf) - 0x41)) &&
         (uVar1 != 0x5f && 9 < (ushort)(uVar1 - 0x30))) goto LAB_14144a94b;
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
LAB_14144a94d:
  if (local_38 != (wint_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14144a957:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14144aed2 FUN_14144aed2 body=2273 status=ok
// SIG undefined FUN_14144aed2(void)

void FUN_14144aed2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = *param_2;
  plVar11 = (longlong *)param_2[1];
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    plVar14 = *(longlong **)(param_1 + 0x78);
    if (plVar14 == (longlong *)0x0) goto LAB_14144af4d;
    *(undefined8 *)(param_1 + 0x78) = 0;
LAB_14144b572:
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (plVar11 == (longlong *)0x0) goto LAB_14144af4d;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    plVar14 = *(longlong **)(param_1 + 0x78);
    if (plVar11 == plVar14) {
      LOCK();
      plVar14 = plVar11 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x78) = plVar11;
      if (plVar14 != (longlong *)0x0) goto LAB_14144b572;
    }
  }
  LOCK();
  plVar14 = plVar11 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_14144af4d:
  local_b0 = *param_2;
  local_a8 = param_2[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_14144b7b4(param_1,&local_b0,param_3,param_4);
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,0);
  }
  FUN_140ccc900(lVar8,&local_a0,uVar7,param_4);
  uVar6 = local_a0;
  if (local_80 != 3) {
    puVar15 = &local_78;
    FUN_1400b56fe(puVar15,&local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar15 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar15);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  FUN_14020a6cc(param_1 + 0x80,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)();
  }
  if (0x18 < local_88) {
    FUN_1400020a8();
  }
  uVar5 = *(ulonglong *)(param_1 + 0x68);
  if (uVar5 < 0xffffffff00000000) {
    plVar11 = (longlong *)0x0;
    if (DAT_14c9980d8 != 0) {
      plVar11 = DAT_14c9980d0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar5,0);
  }
  else {
    uVar13 = (uint)uVar5;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 1;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,1);
  }
  puVar15 = &local_a0;
  FUN_140ccc900(lVar8,puVar15,uVar7,param_4);
  uVar6 = local_a0;
  if (local_80 != 3) {
    puVar12 = &local_78;
    FUN_1400b56fe(puVar12,&local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  FUN_14020a6cc(param_1 + 0x8c,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar15 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar15);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,2);
  }
  puVar15 = &local_a0;
  FUN_140ccc900(lVar8,puVar15,uVar7,param_4);
  uVar6 = local_a0;
  if (local_80 != 3) {
    puVar12 = &local_78;
    FUN_1400b56fe(puVar12,&local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  FUN_14020a6cc(param_1 + 0x98,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar15 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar15);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,3);
  }
  puVar15 = &local_a0;
  FUN_140ccc900(lVar8,puVar15,uVar7,param_4);
  uVar6 = local_a0;
  if (local_80 != 3) {
    puVar12 = &local_78;
    FUN_1400b56fe(puVar12,&local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  FUN_14020a6cc(param_1 + 0xa4,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar15 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar15);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,4);
  }
  puVar15 = &local_78;
  FUN_140ccc900(lVar8,puVar15,uVar7,param_4);
  uVar6 = FUN_14005fbd2(puVar15,1);
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar15 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar15);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar8 = *param_3;
  uVar7 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,5);
  }
  puVar15 = &local_a0;
  FUN_140ccc900(lVar8,puVar15,uVar7,param_4);
  uVar6 = local_a0;
  if (local_80 != 3) {
    puVar12 = &local_78;
    FUN_1400b56fe(puVar12,&local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  FUN_14020a6cc(param_1 + 0xb0,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar15 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar15);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144b7b4 FUN_14144b7b4 body=306 status=ok
// SIG undefined FUN_14144b7b4(void)

void FUN_14144b7b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar5 == (longlong *)0x0) goto LAB_14144b7f2;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_14144b839:
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
    if (plVar4 == (longlong *)0x0) goto LAB_14144b7f2;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x58) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14144b839;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14144b7f2:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
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
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014144b8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14144b8e6 FUN_14144b8e6 body=515 status=ok
// SIG undefined FUN_14144b8e6(void)

void FUN_14144b8e6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
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
  if (DAT_14cacd648 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cacd648,0,0,4);
  }
  uVar7 = DAT_14cacd650;
  uVar2 = local_50;
  if (DAT_14cacd650 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cacd640,0,DAT_14cacd650,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cacd648;
        if (DAT_14cacd648 == (undefined *)0x0) {
          puVar5 = &DAT_14cacd640;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cacd650 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cacd618;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cacd630 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cacd608;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cacd650 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cacd648;
        if (DAT_14cacd648 == (undefined *)0x0) {
          puVar5 = &DAT_14cacd640;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cacd650 - 1U & uVar9) * 4);
        puVar5 = DAT_14cacd648;
        if (DAT_14cacd648 == (undefined *)0x0) {
          puVar5 = &DAT_14cacd640;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cacd650 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 14144baea FUN_14144baea body=529 status=ok
// SIG undefined FUN_14144baea(void)

undefined8 * FUN_14144baea(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (3 < param_3) goto LAB_14144bc0b;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_14144bcfc(&local_48,param_4);
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 == 0) {
      uVar9 = 0;
      goto LAB_14144bbff;
    }
    if (local_48 != (longlong *)0x0) {
      uVar9 = 0;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_14144bbf2;
    }
    uVar9 = 0;
  }
  else {
    param_1 = param_1 + (ulonglong)param_3 * 0x18;
    plVar8 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x34) < 1) {
      iVar1 = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar8 + (longlong)iVar6 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar6);
              FUN_14005b248(plVar8);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = *(int *)(param_1 + 0x28);
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 0x30) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)(param_1 + 0x2c) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar9 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_38);
      uVar9 = local_38;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_1447a71f6(plVar8,iVar1);
    }
    lVar2 = *plVar8;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_40;
LAB_14144bbf2:
    local_40 = 0;
LAB_14144bbff:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_2 = uVar9;
LAB_14144bc0b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14144bcfc FUN_14144bcfc body=305 status=ok
// SIG undefined FUN_14144bcfc(void)

void FUN_14144bcfc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14144bd96;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14144bd6f:
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
      goto LAB_14144bd6f;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14144bd96;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14144bd96:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144be2e FUN_14144be2e body=78 status=ok
// SIG undefined FUN_14144be2e(void)

void FUN_14144be2e(longlong param_1,ushort *param_2,undefined1 param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar2 + 4)) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8);
        } while (-1 < *(short *)(lVar2 + 4));
        if (lVar2 == 0) {
          return;
        }
      }
      *(undefined1 *)(lVar2 + 0x54) = param_3;
      FUN_1414f506e();
      return;
    }
  }
  return;
}



// FUNCTION 14144be7c FUN_14144be7c body=84 status=ok
// SIG undefined FUN_14144be7c(void)

void FUN_14144be7c(longlong param_1,ushort *param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar2 + 4)) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8);
        } while (-1 < *(short *)(lVar2 + 4));
        if (lVar2 == 0) {
          return;
        }
      }
      if (*(char *)(lVar2 + 0x55) != param_3) {
        *(char *)(lVar2 + 0x55) = param_3;
        FUN_1414f506e();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14144bed0 FUN_14144bed0 body=240 status=ok
// SIG undefined FUN_14144bed0(void)

byte FUN_14144bed0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x221) != '\0') || (uVar4 = FUN_1400b465c(), uVar4 == 0)) {
    return 0;
  }
  if (0 < *(int *)(uVar4 + 0x40)) {
    lVar5 = **(longlong **)(uVar4 + 0x38);
    bVar2 = lVar5 != 0 & DAT_14c950c29;
    uVar4 = (ulonglong)bVar2;
    if (bVar2 == 1) {
      FUN_14689c22e(lVar5);
    }
    else if (lVar5 == 0) goto LAB_14144bf90;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x1d8);
    if (*(uint *)(param_1 + 0x1d8) != *(uint *)(param_1 + 0x204)) {
      uVar1 = *(uint *)(lVar5 + 0xe0);
      uVar4 = (ulonglong)uVar1;
      lVar5 = param_1 + 0x208;
      if (*(longlong *)(param_1 + 0x210) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x210);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & uVar1) * 4);
      if (iVar6 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar6 * 0x20;
          if (*(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar6 * 0x20) == uVar1) {
            uVar4 = (ulonglong)(lVar5 == 0);
            if ((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) {
              lVar5 = *(longlong *)(lVar5 + 8);
              bVar2 = 1;
              if (*(char *)(lVar5 + 4) == '\x01') {
                bVar3 = 0x18 < *(int *)(lVar5 + 0x28);
              }
              else {
                bVar3 = 0;
              }
              goto LAB_14144bf92;
            }
            break;
          }
          iVar6 = *(int *)(lVar5 + 0x18);
        } while (iVar6 != -1);
      }
    }
  }
LAB_14144bf90:
  bVar3 = (byte)uVar4;
  bVar2 = 0;
LAB_14144bf92:
  return bVar3 & bVar2;
}



// FUNCTION 14144bfc0 FUN_14144bfc0 body=244 status=ok
// SIG undefined FUN_14144bfc0(void)

ulonglong FUN_14144bfc0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    local_58 = 0;
    FUN_1446dcdd4(local_50);
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    lVar1 = DAT_14c947fe0;
    FUN_140045924(DAT_14c947fe0,local_60,local_50,1);
    FUN_1405593a8(&DAT_14cb7d8c8,&local_58,local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_58 != 0);
    if (local_58 != 0) {
      FUN_140559328(param_1 + 0x88,&local_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144c0b6 FUN_14144c0b6 body=85 status=ok
// SIG undefined FUN_14144c0b6(void)

undefined8 FUN_14144c0b6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 8) == 0) || (*(char *)(param_1 + 0x11) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_144a13f80(param_1 + 0x18,local_c,param_2,0);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144c10c FUN_14144c10c body=828 status=ok
// SIG undefined FUN_14144c10c(void)

uint FUN_14144c10c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [44];
  int local_9c;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar15 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    uVar4 = 0;
    uVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 & 0xffffffff;
    uVar10 = local_68 >> 0x20;
    uVar4 = local_58 >> 0x20;
    iVar8 = (int)param_1[5];
  }
  local_9c = local_50;
  if ((int)uVar4 != iVar8 || local_60 != plVar1) {
    local_78 = (longlong *)local_60[2];
    if ((longlong *)local_60[2] == (longlong *)0x0) {
      local_78 = local_60;
    }
    uVar2 = *(uint *)(local_60 + 3);
    local_98 = (ulonglong)uVar2;
    iVar9 = uVar2 + 0x1e;
    if (-1 < (int)(uVar2 - 1)) {
      iVar9 = uVar2 - 1;
    }
    local_88 = *param_1;
    iVar9 = iVar9 >> 5;
    local_80 = (longlong)local_78 + 4;
    uVar15 = 0;
    uVar13 = (uint)local_58;
    do {
      iVar11 = (int)uVar12;
      iVar6 = *(int *)(local_88 + 8 + (longlong)(int)uVar4 * 0x18);
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      uVar5 = 0;
      if (0 < iVar3) {
        puVar7 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar7 = *(undefined2 **)(local_88 + (longlong)(int)uVar4 * 0x18);
        }
        lVar16 = 0;
        uVar4 = 0;
        do {
          uVar5 = ((uint)(ushort)puVar7[lVar16] +
                  (uint)(0x19 < (ushort)puVar7[lVar16] - 0x61) * 0x20) - 0x20;
          uVar14 = (uint)(uVar4 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
          uVar5 = uVar14 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
          uVar4 = (ulonglong)uVar5;
          lVar16 = lVar16 + 1;
        } while (iVar3 != (int)lVar16);
      }
      uVar13 = uVar13 & ~(uint)uVar10;
      lVar16 = (longlong)iVar11;
      uVar14 = *(uint *)((longlong)local_78 + lVar16 * 4) & uVar13;
      if (uVar14 == 0) {
        local_9c = local_9c + 0x20;
        iVar6 = iVar9;
        if (iVar9 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar17 = 0;
          do {
            uVar14 = *(uint *)(local_80 + lVar16 * 4 + lVar17 * 4);
            if (uVar14 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar17 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14144c2ef;
            }
            local_9c = local_9c + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar6 - lVar16 != lVar17);
          uVar13 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar4 = local_98;
      }
      else {
LAB_14144c2ef:
        uVar10 = (ulonglong)(-uVar14 & uVar14);
        uVar4 = uVar10 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar14 = (local_9c - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        uVar4 = (ulonglong)uVar14;
        if ((int)uVar2 <= (int)uVar14) {
          uVar4 = local_98;
        }
      }
      uVar14 = uVar15 >> 0xd ^ uVar5 - uVar15;
      uVar5 = uVar14 << 8 ^ (-0x61c88647 - uVar15) - uVar14;
      uVar15 = uVar5 >> 0xd ^ (uVar15 - uVar14) - uVar5;
      uVar14 = uVar15 >> 0xc ^ (uVar14 - uVar5) - uVar15;
      uVar5 = uVar14 << 0x10 ^ (uVar5 - uVar15) - uVar14;
      uVar15 = uVar5 >> 5 ^ (uVar15 - uVar14) - uVar5;
      uVar14 = uVar15 >> 3 ^ (uVar14 - uVar5) - uVar15;
      uVar5 = uVar14 << 10 ^ (uVar5 - uVar15) - uVar14;
      uVar15 = uVar5 >> 0xf ^ uVar15 - (uVar14 + uVar5);
      local_90 = plVar1;
      local_70 = local_60;
    } while ((int)uVar4 != iVar8 || local_60 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 14144c44a FUN_14144c44a body=1885 status=ok
// SIG undefined FUN_14144c44a(void)

void FUN_14144c44a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_20 = 0;
  uStack_1c = 0;
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
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
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
  iVar4 = local_24;
  uStack_30 = 0;
  uStack_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined7)uVar2;
      uStack_29 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
  local_40 = 0;
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
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  FUN_14144cba8(CONCAT44(uStack_1c,uStack_20),iVar4 != 0,CONCAT17(uStack_29,uStack_30),local_31);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144cba8 FUN_14144cba8 body=263 status=ok
// SIG undefined FUN_14144cba8(void)

void FUN_14144cba8(longlong param_1,undefined4 param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_141031670(0,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      plVar4 = local_58;
      do {
        plVar2 = (longlong *)*plVar4;
        if (plVar2 == (longlong *)0x0) goto LAB_14144cc1f;
        if (param_3 == 0) {
LAB_14144cc11:
          (**(code **)(*plVar2 + 0x650))(plVar2,param_2);
        }
        else if (param_4 == '\0') {
          lVar3 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x00014144cc80:
          if (lVar3 == param_3) goto LAB_14144cc11;
        }
        else if (param_4 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar3) == param_3) goto LAB_14144cc11;
              lVar3 = lVar3 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar3);
          }
        }
        else if (param_4 == '\x01') {
          lVar3 = plVar2[0x25];
          goto joined_r0x00014144cc80;
        }
LAB_14144cc1f:
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144ccb0 FUN_14144ccb0 body=225 status=ok
// SIG undefined FUN_14144ccb0(void)

void FUN_14144ccb0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1[0x59] == 0) {
    return;
  }
  FUN_14117b5f2(param_1[0x59],1,1,1);
  if (*(char *)((longlong)param_1 + 0x391) == '\x01') {
    (**(code **)(*(longlong *)param_1[0x59] + 0x5c8))((longlong *)param_1[0x59],0);
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_1[0x59];
      lVar3 = FUN_144a7cbb2();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
        param_3 = 0;
      }
      FUN_140eeb8c0(lVar1,param_3);
    }
    FUN_140ee5bf8(param_1,0);
  }
  if (param_1[0x74] != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x73);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x74] + 0x20))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014144cd3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x658))(param_1,param_2);
  return;
}



// FUNCTION 14144cd92 FUN_14144cd92 body=648 status=ok
// SIG undefined FUN_14144cd92(void)

undefined8 FUN_14144cd92(longlong param_1,longlong param_2,byte param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  byte unaff_BPL;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4))) {
    lVar9 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & 10) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x1a0);
      iVar7 = iVar8;
      do {
        if (*(char *)(lVar9 + (longlong)iVar7 * 0x20) == '\n') goto LAB_14144ce18;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar9 + 0x18);
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14144cf7a;
    }
  }
  uVar5 = 0;
  goto LAB_14144cf7a;
  while (iVar8 = *(int *)(lVar11 + 0x18), iVar8 != -1) {
LAB_14144ce18:
    lVar11 = lVar9 + (longlong)iVar8 * 0x20;
    if (*(char *)(lVar9 + (longlong)iVar8 * 0x20) == '\n') goto LAB_14144ce2d;
  }
  lVar11 = 0;
LAB_14144ce2d:
  local_58 = (void *)0x0;
  local_50 = *(int *)(lVar11 + 0x10);
  lVar9 = (longlong)local_50;
  _Src = *(void **)(lVar11 + 8);
  if (lVar9 == 0) {
    local_4c = 0;
  }
  else {
    FUN_14144d01c(&local_58,local_50);
    memcpy(local_58,_Src,lVar9 << 3);
    if (0 < local_50) {
      lVar9 = 0;
      iVar8 = local_50;
      do {
        plVar1 = *(longlong **)((longlong)local_58 + lVar9 * 8);
        if ((((plVar1 != (longlong *)0x0) && (lVar11 = *plVar1, iVar8 = local_50, lVar11 != 0)) &&
            (*(char *)(lVar11 + 800) == '\x01')) && ((longlong)*(int *)(lVar11 + 0x330) != 0)) {
          plVar10 = *(longlong **)(lVar11 + 0x328);
          lVar11 = (longlong)*(int *)(lVar11 + 0x330) * 0x18;
          do {
            lVar6 = plVar10[1];
            if (lVar6 == 0) {
              uVar5 = FUN_140fa5e64();
              lVar6 = FUN_14477b664(uVar5);
              plVar10[1] = lVar6;
            }
            lVar4 = plVar10[2];
            if (lVar4 == 0) {
              if (lVar6 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = 0;
                if (*plVar10 != 0) {
                  plVar2 = *(longlong **)(lVar6 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                    lVar4 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar4 = FUN_144aff482(uVar5,plVar10);
                  }
                  plVar10[2] = lVar4;
                }
              }
            }
            if ((lVar4 == param_2 & param_3) == 1) {
              unaff_BPL = *(int *)(*plVar1 + 0x330) == 1;
            }
            else {
              unaff_BPL = unaff_BPL | lVar4 == param_2;
            }
            iVar8 = local_50;
            if (lVar4 == param_2) {
              if ((unaff_BPL & 1) != 0) {
                uVar5 = *(undefined8 *)((longlong)local_58 + lVar9 * 8);
                goto LAB_14144cf70;
              }
              break;
            }
            plVar10 = plVar10 + 3;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar8);
    }
  }
  uVar5 = 0;
LAB_14144cf70:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14144cf7a:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14144d01c FUN_14144d01c body=306 status=ok
// SIG undefined FUN_14144d01c(void)

void FUN_14144d01c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14144d07e;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14144d07e:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14144d14e FUN_14144d14e body=40 status=ok
// SIG undefined FUN_14144d14e(void)

undefined8 FUN_14144d14e(undefined8 param_1,int param_2)

{
  FUN_14144d176();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14144d176 FUN_14144d176 body=1235 status=ok
// SIG undefined FUN_14144d176(void)

void FUN_14144d176(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_14b6e4700;
  param_1[0x72] = &PTR_FUN_14b6e4d40;
  param_1[0x73] = &PTR_FUN_14b6e4d70;
  param_1[0x74] = &PTR_FUN_14b6e4e10;
  param_1[0x75] = &PTR_FUN_14b6e4e30;
  param_1[0x76] = &PTR_FUN_14b6e4e60;
  plVar2 = param_1 + 0x115;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x119) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar6 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x118)) {
      plVar6 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar6);
  }
  if (0x18 < *(ushort *)(param_1 + 0x118)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = param_1 + 0x10e;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x112) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar6 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x111)) {
      plVar6 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar6);
  }
  if (0x18 < *(ushort *)(param_1 + 0x111)) {
    FUN_1400020a8(*plVar2);
  }
  if (param_1[0x10a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x104] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x103) = 0;
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  FUN_14403608c(param_1 + 0xfa,0);
  if (param_1[0xfe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf5) = 0;
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  FUN_144036108(param_1 + 0xec,0);
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xea] != 0) {
    LOCK();
    *(int *)(param_1[0xeb] + 8) = *(int *)(param_1[0xeb] + 8) + -1;
    UNLOCK();
    plVar2 = param_1 + 0xe8;
    puVar4 = (undefined8 *)param_1[0xeb];
    if (param_1[0xe8] == 0) {
      uVar7 = 0;
      puVar8 = puVar4;
    }
    else {
      *(undefined8 *)(param_1[0xe8] + 8) = 0;
      uVar7 = param_1[0xe8];
      puVar8 = (undefined8 *)param_1[0xeb];
    }
    LOCK();
    plVar6 = (longlong *)*puVar8;
    if (plVar2 == plVar6) {
      *puVar8 = uVar7;
    }
    UNLOCK();
    if (plVar2 != plVar6) {
      while ((longlong *)param_1[0xe9] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar5 = *plVar2;
      *(longlong *)param_1[0xe9] = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 8) = param_1[0xe9];
      }
    }
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
    *plVar2 = 0;
    param_1[0xe9] = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xdb],*(undefined4 *)(param_1 + 0xdc));
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd8],*(undefined4 *)(param_1 + 0xd9));
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd5],*(undefined4 *)(param_1 + 0xd6));
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  FUN_1440362a3(param_1[0xc6],*(undefined4 *)(param_1 + 199));
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7bbc(param_1 + 0xb6);
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x90);
  FUN_1404d595a(param_1 + 0x8c,1);
  param_1[0x86] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (*(int *)((longlong)param_1 + 0x44c) != 0) {
    FUN_140115c12(param_1 + 0x88,0);
  }
  param_1[0x87] = 0;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  param_1[0x85] = 0;
  FUN_1403d7b38(param_1 + 0x77);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14144d64a FUN_14144d64a body=155 status=ok
// SIG undefined FUN_14144d64a(void)

undefined8 * FUN_14144d64a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14144d6e5 FUN_14144d6e5 body=68 status=ok
// SIG undefined FUN_14144d6e5(void)

char FUN_14144d6e5(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_145a104ac(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return '\0';
}



// FUNCTION 14144d729 FUN_14144d729 body=387 status=ok
// SIG undefined FUN_14144d729(void)

undefined8 FUN_14144d729(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = (int)param_1[1];
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*param_1 + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(*param_2 + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_14144d79b;
LAB_14144d771:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_14144d771;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[1] + iVar1 != 1) {
      return 0;
    }
LAB_14144d79b:
    iVar1 = (int)param_1[3];
    if (iVar1 == (int)param_2[3]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(param_1[2] + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(param_2[2] + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_14144d7f9;
LAB_14144d7cf:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_14144d7cf;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[3] + iVar1 != 1) {
      return 0;
    }
LAB_14144d7f9:
    if ((param_1[4] != param_2[4]) || (param_1[5] != param_2[5])) {
      return 0;
    }
    iVar1 = (int)param_1[7];
    if (iVar1 == (int)param_2[7]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(param_1[6] + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(param_2[6] + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_14144d86b;
LAB_14144d845:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_14144d845;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[7] + iVar1 != 1) {
      return 0;
    }
LAB_14144d86b:
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 14144d8ac FUN_14144d8ac body=281 status=ok
// SIG undefined FUN_14144d8ac(void)

void FUN_14144d8ac(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (**(code **)(*param_1 + 0x180))();
  lVar4 = FUN_1406f612e(uVar3);
  uVar2 = 0;
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (param_1[4] != 0)) {
    uVar2 = FUN_1408966e4();
  }
  if ((lVar4 != 0) && (cVar1 = FUN_140d174a2(lVar4,uVar2), cVar1 != '\0')) {
    if ((longlong)(int)param_1[0x10] == 0) {
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
    else {
      lVar5 = param_1[0xf];
      lVar6 = (longlong)(int)param_1[0x10] * 0xe8;
      do {
        if (((char)param_1[0x15] != '\0') || (*(int *)(lVar5 + 0x30) == 0)) {
          FUN_14620a58c(lVar5,uVar2,lVar4);
        }
        lVar5 = lVar5 + 0xe8;
        lVar6 = lVar6 + -0xe8;
      } while (lVar6 != 0);
      lVar5 = param_1[0xf];
      *(undefined1 *)(param_1 + 0x15) = 0;
      if ((longlong)(int)param_1[0x10] != 0) {
        lVar6 = (longlong)(int)param_1[0x10] * 0xe8;
        do {
          if ((*(char *)((longlong)param_1 + 0xa9) != '\0') || (*(int *)(lVar5 + 0x90) == 0)) {
            FUN_148ef9398(lVar5,uVar2,lVar4);
          }
          lVar5 = lVar5 + 0xe8;
          lVar6 = lVar6 + -0xe8;
        } while (lVar6 != 0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  }
  return;
}



// FUNCTION 14144d9c6 FUN_14144d9c6 body=136 status=ok
// SIG undefined FUN_14144d9c6(void)

void FUN_14144d9c6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar3 = FUN_14053b76c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14144da4e FUN_14144da4e body=638 status=ok
// SIG undefined FUN_14144da4e(void)

void FUN_14144da4e(longlong param_1,undefined4 param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  byte local_91;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_91 = param_4;
  cVar1 = FUN_140d174a2(param_3);
  if (cVar1 != '\0') {
    local_78 = 0;
    uStack_70 = 0;
    lVar2 = FUN_140e44844(param_1);
    if ((lVar2 != 0) && (lVar2 = FUN_141526668(lVar2), lVar2 != 0)) {
      FUN_1408d7828(lVar2,param_1 + 0x28,&local_78);
      lVar2 = local_78;
      lVar6 = (longlong)(int)uStack_70;
      if (lVar6 != 0) {
        lVar5 = 0;
        local_90 = param_1;
        do {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(byte *)(lVar2 + 8 + lVar5) & local_91);
          puVar7 = *(undefined4 **)(*(longlong *)(lVar2 + lVar5) + 8);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar4 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar4);
            DAT_14c947fe0 = lVar4;
          }
          FUN_140045924(DAT_14c947fe0,&local_80,puVar7,1);
          local_68 = local_80;
          uVar3 = FUN_1403363fe(param_3,&local_68);
          local_a8 = 1;
          FUN_1440e43de(param_3,param_2,uVar3,unaff_RBP & 0xffffffff);
          lVar5 = lVar5 + 0x10;
          param_1 = local_90;
        } while (lVar6 * 0x10 != lVar5);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    lVar2 = FUN_140e44844(param_1);
    if ((lVar2 != 0) && (lVar2 = FUN_14156016c(lVar2), lVar2 != 0)) {
      FUN_1408d7828(lVar2,param_1 + 0x88,&local_78);
      lVar2 = local_78;
      lVar6 = (longlong)(int)uStack_70;
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(byte *)(lVar2 + 8 + lVar5) & local_91);
          puVar7 = *(undefined4 **)(*(longlong *)(lVar2 + lVar5) + 8);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar4 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar4);
            DAT_14c947fe0 = lVar4;
          }
          FUN_140045924(DAT_14c947fe0,&local_88,puVar7,1);
          local_68 = local_88;
          uVar3 = FUN_1403363fe(param_3,&local_68);
          local_a8 = 1;
          FUN_1440e43de(param_3,param_2,uVar3,unaff_RBP & 0xffffffff);
          lVar5 = lVar5 + 0x10;
        } while (lVar6 * 0x10 != lVar5);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14144dcce FUN_14144dcce body=1163 status=ok
// SIG undefined FUN_14144dcce(void)

void FUN_14144dcce(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_14 = 0;
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_18 = (undefined4)uVar2;
      uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_1c = (undefined4)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14144e15a(CONCAT44(uStack_14,local_18),uStack_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144e15a FUN_14144e15a body=129 status=ok
// SIG undefined FUN_14144e15a(void)

void FUN_14144e15a(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x177c) + *(float *)(param_1 + 0x1780);
    fVar3 = param_2;
    if (param_2 <= param_3) {
      fVar3 = param_3;
      param_3 = param_2;
    }
    fVar4 = param_3;
    if (param_3 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar1 = (fVar4 - param_3) * 0.5;
    fVar1 = (param_3 + fVar1) - fVar1;
    if (fVar3 <= fVar1) {
      fVar1 = fVar3;
    }
    fVar3 = (fVar3 - fVar1) * 0.5;
    *(float *)(param_1 + 0x1780) = fVar3;
    *(float *)(param_1 + 0x177c) = fVar3 + fVar1;
    uVar2 = FUN_14085b07e(param_1 + 0x177c);
    *(undefined4 *)(param_1 + 0x17d0) = uVar2;
  }
  return;
}



// FUNCTION 14144e1dc FUN_14144e1dc body=228 status=ok
// SIG undefined FUN_14144e1dc(void)

longlong FUN_14144e1dc(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11db0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146371ddc;
    local_28 = &LAB_1459216a0;
    local_38 = &LAB_147dcdf05;
    local_40 = &LAB_145af4698;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeSpatialHash",&DAT_14cb11db0,
                  &DAT_147dcdf04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11db0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14144e2c2 FUN_14144e2c2 body=55 status=ok
// SIG undefined FUN_14144e2c2(void)

void FUN_14144e2c2(longlong *param_1)

{
  FUN_14144e2fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


