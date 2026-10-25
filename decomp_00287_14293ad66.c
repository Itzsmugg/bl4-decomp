// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14293ad66 FUN_14293ad66 body=29 status=ok
// SIG undefined FUN_14293ad66(void)

void FUN_14293ad66(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14293ad84 FUN_14293ad84 body=29 status=ok
// SIG undefined FUN_14293ad84(void)

undefined8 FUN_14293ad84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293ada1 FUN_14293ada1 body=379 status=ok
// SIG undefined FUN_14293ada1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14293ada1(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = "UnixSocketPath";
  local_40 = 0xe;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14c9912a0 = (ulonglong)uVar1;
  local_58 = 0;
  FUN_141471170(&DAT_14c9912a8,L"BuildPatchFileConstructor.SleepTimeWhenFileSystemThrottledSeconds",
                &DAT_14c75ef8c,
                L"The amount of time to sleep if the destination filesystem is throttled.");
  atexit(FUN_142927400);
  local_58 = 0;
  FUN_14153156c(&DAT_14c9912b8,L"BuildPatchFileConstructor.bStallWhenFileSystemThrottled",
                &DAT_14c9912c8,L"Whether to stall if the file system is throttled");
  atexit(FUN_142927445);
  local_48 = (char *)0x8000000149f2f8f2;
  local_34 = 0x12;
  local_40 = FUN_14577453c(L"BuildPatchServices");
  local_3c = 1;
  FUN_14628403e(&local_48);
  DAT_14c991bb8 = 0;
  DAT_14c991bc0 = 0;
  atexit(FUN_1429372b6);
  DAT_14c991bd8 = 0;
  _DAT_14c991be0 = 0;
  atexit(FUN_1429372f1);
  DAT_14c991bc8 = 0;
  uRam000000014c991bd0 = 0;
  atexit((_func_5014 *)&LAB_142937322);
  DAT_14c991be8 = 0;
  uRam000000014c991bf0 = 0;
  atexit((_func_5014 *)&LAB_142937333);
  FUN_1446f470e(&DAT_14c991bf8,L"BuildPatchServices",1);
  FUN_146284126();
  atexit((_func_5014 *)&LAB_142937344);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293af20 FUN_14293af20 body=18089 status=ok
// SIG undefined FUN_14293af20(void)

/* WARNING: Removing unreachable block (ram,0x00014293c9cf) */

ulonglong FUN_14293af20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined2 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ushort uVar25;
  longlong lVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  int iVar37;
  undefined1 auStack_988 [32];
  undefined1 *local_968;
  undefined1 *local_960;
  longlong *local_950;
  longlong *local_948;
  longlong *local_940;
  uint *local_938;
  ulonglong local_930;
  longlong *local_928;
  longlong local_920;
  longlong local_918;
  int local_90c;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  int local_8d0;
  void *local_8c8;
  int local_8c0;
  undefined4 local_8bc;
  void *local_8b8;
  int local_8b0;
  undefined4 local_8ac;
  void *local_8a8;
  int local_8a0;
  undefined4 local_89c;
  void *local_898;
  int local_890;
  undefined4 local_88c;
  longlong *local_888;
  longlong *local_880;
  undefined1 local_878 [16];
  longlong local_868;
  int local_860;
  undefined1 local_858 [8];
  undefined8 uStack_850;
  longlong local_848;
  undefined8 uStack_840;
  longlong local_838;
  int local_830;
  longlong local_828;
  undefined8 uStack_820;
  longlong *local_818;
  longlong *local_810;
  longlong local_808;
  longlong *local_800;
  longlong *local_7f8;
  longlong *local_7f0;
  undefined1 local_7d8 [16];
  undefined4 local_7c8;
  longlong *local_7c0;
  longlong *local_7b8;
  longlong *local_7b0;
  longlong *local_7a8;
  undefined2 local_79a;
  longlong local_798 [2];
  uint local_788 [4];
  uint *local_778;
  int local_770;
  undefined8 local_76c;
  undefined4 local_764;
  longlong local_758;
  undefined4 local_750;
  longlong local_748 [2];
  uint local_738 [4];
  uint *local_728;
  int local_720;
  undefined8 local_71c;
  undefined4 local_714;
  longlong local_708;
  undefined4 local_700;
  longlong local_6f8 [2];
  uint local_6e8 [4];
  uint *local_6d8;
  int local_6d0;
  undefined8 local_6cc;
  undefined4 local_6c4;
  longlong local_6b8;
  undefined4 local_6b0;
  longlong *local_6a8;
  undefined8 uStack_6a0;
  uint local_698 [4];
  uint *local_688;
  int local_680;
  undefined8 local_67c;
  undefined4 local_674;
  longlong local_668;
  undefined4 local_660;
  longlong *local_658;
  longlong *plStack_650;
  uint local_648 [4];
  uint *local_638;
  int local_630;
  undefined8 local_62c;
  undefined4 local_624;
  longlong local_618;
  undefined4 local_610;
  longlong local_608;
  longlong **pplStack_600;
  uint local_5f8 [4];
  uint *local_5e8;
  int local_5e0;
  undefined8 local_5dc;
  undefined4 local_5d4;
  longlong local_5c8;
  undefined4 local_5c0;
  undefined2 *local_5b8;
  undefined8 uStack_5b0;
  uint local_5a8 [4];
  uint *local_598;
  int local_590;
  undefined8 local_58c;
  undefined4 local_584;
  longlong local_578;
  undefined4 local_570;
  undefined1 local_568 [16];
  uint local_558 [4];
  uint *local_548;
  int local_540;
  undefined8 local_53c;
  undefined4 local_534;
  longlong local_528;
  undefined4 local_520;
  undefined1 local_518 [16];
  uint local_508 [4];
  uint *local_4f8;
  int local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  longlong local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [16];
  uint local_4b8 [4];
  uint *local_4a8;
  int local_4a0;
  undefined8 local_49c;
  undefined4 local_494;
  longlong local_488;
  undefined4 local_480;
  undefined1 local_478 [16];
  uint local_468 [4];
  uint *local_458;
  int local_450;
  undefined8 local_44c;
  undefined4 local_444;
  longlong local_438;
  undefined4 local_430;
  undefined1 local_428 [8];
  longlong *plStack_420;
  uint local_418 [4];
  uint *local_408;
  int local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined1 local_3d8 [16];
  uint local_3c8 [4];
  uint *local_3b8;
  int local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  longlong local_398;
  undefined4 local_390;
  undefined1 local_388 [16];
  uint local_378 [4];
  uint *local_368;
  int local_360;
  undefined8 local_35c;
  undefined4 local_354;
  longlong local_348;
  undefined4 local_340;
  longlong local_338 [2];
  uint local_328 [4];
  uint *local_318;
  int local_310;
  longlong local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  uint local_2d8 [4];
  uint *local_2c8;
  int local_2c0;
  longlong local_2a8;
  undefined4 local_2a0;
  longlong local_298 [2];
  uint local_288 [4];
  uint *local_278;
  int local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  int local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  int local_174;
  longlong local_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  uint local_148 [4];
  uint *local_138;
  uint local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [16];
  uint local_f8 [4];
  uint *local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_988;
  lVar26 = *(longlong *)(param_1 + 400);
  while ((*(byte *)(lVar26 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar26 + 0x70) + 0x20))(*(longlong **)(lVar26 + 0x70),0xffffffff);
  }
  local_7c0 = *(longlong **)(lVar26 + 0x80);
  local_7b8 = *(longlong **)(lVar26 + 0x88);
  if (local_7b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
    UNLOCK();
  }
  lVar26 = *(longlong *)(param_1 + 0x1a0);
  while ((*(byte *)(lVar26 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar26 + 0x70) + 0x20))(*(longlong **)(lVar26 + 0x70),0xffffffff,0)
    ;
  }
  lVar33 = *(longlong *)(lVar26 + 0x80);
  plVar12 = *(longlong **)(lVar26 + 0x88);
  if (plVar12 == (longlong *)0x0) {
    if ((lVar33 == 0) || (local_7c0 == (longlong *)0x0)) {
      uVar22 = 0;
      LOCK();
      *(undefined4 *)(param_1 + 0x150) = 0;
      UNLOCK();
      goto LAB_14293b02f;
    }
    local_800 = (longlong *)0x0;
LAB_14293b0bc:
    local_808 = lVar33;
    FUN_146b9011e(&local_7f8,&local_808);
    plVar9 = local_7f0;
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
      UNLOCK();
    }
    local_7f8 = local_7c0;
    local_7f0 = local_7b8;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_7c8 = 0;
    local_920 = param_1;
    FUN_140bee914(local_b8,param_1 + 0x18);
    local_810 = local_a8;
    local_818 = local_b8;
    FUN_146027ed4(local_7d8);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    lVar26 = local_920;
    local_a8[0] = 0;
    local_98 = (longlong *)0x0;
    local_b8[0] = *(longlong *)(local_920 + 0x140);
    plVar9 = (longlong *)FUN_146b90188(&local_7f8);
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9);
    local_948 = (longlong *)*puVar10;
    local_928 = (longlong *)puVar10[1];
    if (local_928 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_928 + 1) = (int)local_928[1] + 1;
      UNLOCK();
    }
    if (plVar12 != (longlong *)0x0) {
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
    local_90c = (**(code **)(*plVar9 + 0x10))(plVar9);
    local_e8 = (uint *)0x0;
    local_e0 = 0;
    local_108 = (undefined1  [16])0x0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_138 = (uint *)0x0;
    local_130 = 0;
    local_158 = (undefined1  [16])0x0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    (**(code **)(*local_7c0 + 0xc0))();
    if (*(int *)(lVar26 + 0x5c) < *(int *)(lVar26 + 0x30)) {
      FUN_146b3de84(local_108,&local_1a8,lVar26 + 0x28);
      FUN_146b3e088(local_108,&local_1a8);
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_1a8);
    }
    (**(code **)(*local_948 + 0xc0))(local_948,local_158);
    if (*(int *)(lVar26 + 0xac) < *(int *)(lVar26 + 0x80)) {
      FUN_146b3de84(local_158,&local_1a8,lVar26 + 0x78);
      FUN_146b3e088(local_158,&local_1a8);
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_1a8);
    }
    iVar32 = 0;
    local_188 = 0;
    local_180 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_17c = 0xffffffff00000080;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_228 = 0;
    local_220 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_21c = 0xffffffff00000080;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    local_278 = (uint *)0x0;
    local_270 = 0;
    local_298[0] = 0;
    local_298[1] = 0;
    local_26c = 0xffffffff00000080;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    local_950 = plVar9;
    (**(code **)(*local_7c0 + 0x1d0))(local_7c0,local_108,&local_1a8);
    (**(code **)(*local_7c0 + 0x188))(local_7c0,&local_1a8,&local_248);
    plVar12 = local_948;
    (**(code **)(*local_948 + 0x1d0))(local_948,local_158,&local_1f8);
    (**(code **)(*plVar12 + 0x188))(plVar12,&local_1f8,local_298);
    iVar37 = local_270;
    local_828 = 0;
    uStack_820 = 0;
    uVar34 = 1;
    uVar22 = 0;
    iVar7 = 0;
    if (local_270 != 0) {
      puVar23 = local_278;
      if (local_278 == (uint *)0x0) {
        puVar23 = local_288;
      }
      uVar21 = *puVar23;
      if (uVar21 == 0) {
        iVar7 = local_270 + 0x1e;
        if (-1 < local_270 + -1) {
          iVar7 = local_270 + -1;
        }
        uVar29 = iVar7 >> 5;
        if (iVar7 >> 5 < 1) {
          uVar29 = 0;
        }
        uVar22 = 0;
        iVar32 = 0;
        do {
          if (uVar29 == uVar22) {
            local_918 = 0;
            goto LAB_14293b4f8;
          }
          iVar32 = iVar32 + 0x20;
          uVar21 = puVar23[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar21 == 0);
      }
      else {
        iVar32 = 0;
        uVar22 = 0;
      }
      uVar34 = (ulonglong)(-uVar21 & uVar21);
      uVar36 = uVar34 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar7 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (local_270 <= iVar7) {
        iVar7 = local_270;
      }
    }
    if (iVar7 == local_270) {
      local_918 = 0;
    }
    else {
      uVar21 = 0xffffffff;
      local_918 = 0;
      do {
        lVar26 = (longlong)iVar7 * 0x18 + local_298[0];
        uVar8 = FUN_1447addd0(lVar26,0x10);
        iVar7 = FUN_140f5cb3a(&local_248,uVar8,lVar26);
        if (iVar7 == -1) {
          local_940 = (longlong *)(**(code **)(*local_948 + 0x1a8))(local_948,lVar26);
          if (local_928 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_928 + 1) = (int)local_928[1] + 1;
            UNLOCK();
          }
          FUN_146b43eee(&local_2e8,local_948,lVar26);
          lVar26 = (longlong)(int)uStack_820;
          uVar29 = (int)uStack_820 + 1;
          uStack_820 = CONCAT44(uStack_820._4_4_,uVar29);
          if (uStack_820._4_4_ < uVar29) {
            FUN_1447a1bd6(&local_828);
          }
          lVar26 = lVar26 * 0x10;
          *(undefined8 *)(local_828 + lVar26) = 0;
          *(longlong *)(local_828 + lVar26) = local_2e8;
          local_2e8 = 0;
          *(undefined4 *)(local_828 + 8 + lVar26) = (undefined4)local_2e0;
          *(undefined4 *)(local_828 + 0xc + lVar26) = local_2e0._4_4_;
          local_2e0 = 0;
          local_2e0 = 0;
          local_2e8 = 0;
          if (local_928 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_928 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_928)();
              LOCK();
              piVar1 = (int *)((longlong)local_928 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_928 + 0x10))();
              }
            }
          }
          local_918 = local_918 + (int)local_940;
        }
        uVar21 = uVar21 & ~(uint)uVar34;
        puVar23 = local_278;
        if (local_278 == (uint *)0x0) {
          puVar23 = local_288;
        }
        iVar7 = (int)uVar22;
        lVar26 = (longlong)iVar7;
        uVar29 = puVar23[lVar26] & uVar21;
        if (uVar29 == 0) {
          iVar19 = local_270 + 0x1e;
          if (-1 < local_270 + -1) {
            iVar19 = local_270 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar32 = iVar32 + 0x20;
          iVar15 = iVar19;
          if (iVar19 < iVar7) {
            iVar15 = iVar7;
          }
          if (iVar7 < iVar19) {
            lVar33 = 0;
            do {
              uVar29 = puVar23[lVar26 + lVar33 + 1];
              if (uVar29 != 0) {
                uVar22 = (ulonglong)(iVar7 + (int)lVar33 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14293c8e1;
              }
              iVar32 = iVar32 + 0x20;
              lVar33 = lVar33 + 1;
            } while (iVar15 - lVar26 != lVar33);
            uVar21 = 0xffffffff;
            lVar26 = (longlong)iVar15;
          }
          uVar22 = lVar26 + 1U & 0xffffffff;
          iVar7 = local_270;
        }
        else {
LAB_14293c8e1:
          uVar34 = (ulonglong)(-uVar29 & uVar29);
          uVar36 = uVar34 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar7 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (local_270 <= iVar7) {
            iVar7 = local_270;
          }
        }
      } while (iVar7 != iVar37);
    }
LAB_14293b4f8:
    FUN_145d1d460(&local_1f8,&local_2e8,&local_1a8);
    FUN_145d1d460(&local_1a8,local_338);
    local_368 = (uint *)0x0;
    local_360 = 0;
    local_388 = (undefined1  [16])0x0;
    local_35c = 0xffffffff00000080;
    local_354 = 0;
    local_348 = 0;
    local_340 = 0;
    local_3b8 = (uint *)0x0;
    local_3b0 = 0;
    local_3d8 = (undefined1  [16])0x0;
    local_3ac = 0xffffffff00000080;
    local_3a4 = 0;
    local_398 = 0;
    iVar37 = (int)uStack_1f0 - local_1c4;
    local_390 = 0;
    iVar7 = (int)uStack_1a0 - local_174;
    local_940 = &local_1f8;
    if (iVar7 < iVar37) {
      local_940 = &local_1a8;
    }
    local_938 = (uint *)(local_940 + 2);
    uVar21 = *(uint *)(local_940 + 5);
    local_930 = (ulonglong)uVar21;
    uVar22 = 1;
    if (uVar21 == 0) {
      uVar34 = 0;
      uVar11 = 0;
      iVar19 = 0;
    }
    else {
      plVar12 = &local_1f8;
      if (iVar7 < iVar37) {
        plVar12 = &local_1a8;
      }
      puVar23 = (uint *)plVar12[4];
      if ((uint *)plVar12[4] == (uint *)0x0) {
        puVar23 = local_938;
      }
      uVar29 = *puVar23;
      if (uVar29 == 0) {
        iVar32 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar32 = uVar21 - 1;
        }
        uVar24 = 0;
        uVar36 = (ulonglong)(uint)(iVar32 >> 5);
        if (iVar32 >> 5 < 1) {
          uVar36 = uVar24;
        }
        uVar34 = (ulonglong)((int)uVar36 + 1);
        iVar32 = 0;
        do {
          uVar11 = local_930;
          iVar19 = (int)uVar36 * 0x20 + 0x20;
          if (uVar36 == uVar24) goto LAB_14293b67c;
          iVar32 = iVar32 + 0x20;
          uVar29 = puVar23[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar29 == 0);
        uVar34 = uVar24 & 0xffffffff;
      }
      else {
        iVar32 = 0;
        uVar34 = 0;
      }
      uVar22 = (ulonglong)(-uVar29 & uVar29);
      uVar36 = uVar22 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar29 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      uVar11 = (ulonglong)uVar29;
      iVar19 = iVar32;
      if ((int)uVar21 <= (int)uVar29) {
        uVar11 = local_930;
      }
    }
LAB_14293b67c:
    plVar12 = &local_1f8;
    if (iVar7 < iVar37) {
      plVar12 = &local_1a8;
    }
    uVar29 = *(uint *)(plVar12 + 5);
    if (uVar21 != uVar29) {
      iVar32 = (int)uVar29 >> 5;
      uVar18 = uVar29 & 0xffffffe0;
      plVar12 = &local_1f8;
      if (iVar7 < iVar37) {
        plVar12 = &local_1a8;
      }
      puVar23 = (uint *)plVar12[4];
      if ((uint *)plVar12[4] == (uint *)0x0) {
        puVar23 = local_938;
      }
      lVar26 = (longlong)iVar32;
      uVar28 = puVar23[lVar26] >> ((byte)uVar29 & 0x1f);
      bVar4 = (byte)uVar29 & 0x1f;
      uVar29 = uVar28 << bVar4;
      if (uVar28 << bVar4 == 0) {
        iVar15 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar15 = uVar21 - 1;
        }
        iVar30 = iVar15 >> 5;
        if (iVar15 >> 5 < iVar32) {
          iVar30 = iVar32;
        }
        do {
          if (iVar30 == lVar26) goto LAB_14293b722;
          uVar18 = uVar18 + 0x20;
          uVar29 = puVar23[lVar26 + 1];
          lVar26 = lVar26 + 1;
        } while (uVar29 == 0);
      }
      uVar36 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar29 = (uVar18 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if ((int)uVar29 < (int)uVar21) {
        local_930 = (ulonglong)uVar29;
      }
    }
LAB_14293b722:
    if ((int)uVar11 != (int)local_930) {
      uVar21 = 0xffffffff;
      do {
        iVar32 = (int)uVar34;
        plVar12 = &local_1f8;
        if (iVar7 < iVar37) {
          plVar12 = &local_1a8;
        }
        lVar26 = (longlong)(int)uVar11 * 0x18 + *plVar12;
        local_418[0] = 0;
        _local_428 = ZEXT816(0);
        local_468[0] = 0;
        local_478 = ZEXT816(0);
        cVar6 = (**(code **)(*local_7c0 + 0xb8))(local_7c0,lVar26,local_428);
        if ((cVar6 != '\0') &&
           (cVar6 = (**(code **)(*local_948 + 0xb8))(local_948,lVar26,local_478), cVar6 != '\0')) {
          if (_local_428 == local_478 && local_468[0] == local_418[0]) {
            puVar16 = local_3d8;
          }
          else {
            puVar16 = local_388;
          }
          FUN_14482b35e(puVar16,local_4c8,lVar26,0);
        }
        uVar21 = uVar21 & ~(uint)uVar22;
        plVar12 = &local_1f8;
        if (iVar7 < iVar37) {
          plVar12 = &local_1a8;
        }
        puVar23 = (uint *)plVar12[4];
        if ((uint *)plVar12[4] == (uint *)0x0) {
          puVar23 = local_938;
        }
        uVar29 = *(uint *)(local_940 + 5);
        lVar26 = (longlong)iVar32;
        uVar18 = puVar23[lVar26] & uVar21;
        if (uVar18 == 0) {
          iVar15 = uVar29 + 0x1e;
          if (-1 < (int)(uVar29 - 1)) {
            iVar15 = uVar29 - 1;
          }
          iVar15 = iVar15 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar30 = iVar15;
          if (iVar15 < iVar32) {
            iVar30 = iVar32;
          }
          if (iVar32 < iVar15) {
            lVar33 = 0;
            do {
              uVar18 = puVar23[lVar26 + lVar33 + 1];
              if (uVar18 != 0) {
                uVar34 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14293b93d;
              }
              iVar19 = iVar19 + 0x20;
              lVar33 = lVar33 + 1;
            } while (iVar30 - lVar26 != lVar33);
            uVar21 = 0xffffffff;
            iVar32 = iVar30;
          }
          uVar34 = (ulonglong)(iVar32 + 1);
          uVar18 = uVar29;
        }
        else {
LAB_14293b93d:
          uVar22 = (ulonglong)(-uVar18 & uVar18);
          uVar36 = uVar22 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar18 = (iVar19 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if ((int)uVar29 <= (int)uVar18) {
            uVar18 = uVar29;
          }
        }
        uVar11 = (ulonglong)uVar18;
      } while (uVar18 != (uint)local_930);
    }
    local_900 = (**(code **)(*local_7c0 + 0x50))(local_7c0,local_108);
    local_908 = (**(code **)(*local_7c0 + 0x70))(local_7c0,local_108);
    plVar12 = local_948;
    local_8f0 = (**(code **)(*local_948 + 0x50))(local_948,local_158);
    local_8f8 = (**(code **)(*plVar12 + 0x70))(plVar12,local_158);
    plVar12 = local_7b8;
    if (local_7b8 == (longlong *)0x0) {
      plStack_420 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
      UNLOCK();
      plStack_420 = local_7b8;
      LOCK();
      *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
      UNLOCK();
    }
    local_428 = (undefined1  [8])local_7c0;
    lVar26 = (**(code **)(*local_948 + 0x60))(local_948,local_158,local_428,local_108);
    plVar9 = plStack_420;
    if (plStack_420 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_420 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_420)(plStack_420);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    local_478._0_4_ = 1;
    local_428 = (undefined1  [8])local_948;
    plStack_420 = local_928;
    if (local_928 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_928 + 1) = (int)local_928[1] + 1;
      UNLOCK();
    }
    local_8e0 = lVar26;
    local_8e8 = FUN_146b2f3b8(&local_7c0,local_428,local_478,local_158);
    plVar12 = plStack_420;
    if (plStack_420 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_420 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_420)(plStack_420);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    iVar37 = local_e0;
    plVar12 = (longlong *)0x0;
    local_408 = (uint *)0x0;
    local_400 = 0;
    _local_428 = (undefined1  [16])0x0;
    local_3fc = 0xffffffff00000080;
    local_3f4 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_458 = (uint *)0x0;
    local_450 = 0;
    local_478 = (undefined1  [16])0x0;
    local_44c = 0xffffffff00000080;
    local_444 = 0;
    local_438 = 0;
    local_430 = 0;
    local_4a8 = (uint *)0x0;
    local_4a0 = 0;
    local_4c8 = (undefined1  [16])0x0;
    local_49c = 0xffffffff00000080;
    local_494 = 0;
    local_488 = 0;
    local_480 = 0;
    local_4f8 = (uint *)0x0;
    local_4f0 = 0;
    local_518 = (undefined1  [16])0x0;
    local_4ec = 0xffffffff00000080;
    local_4e4 = 0;
    local_4d8 = 0;
    local_4d0 = 0;
    local_548 = (uint *)0x0;
    local_540 = 0;
    local_568 = (undefined1  [16])0x0;
    local_53c = 0xffffffff00000080;
    local_534 = 0;
    local_528 = 0;
    local_520 = 0;
    uVar22 = 1;
    puVar23 = (uint *)0x0;
    iVar7 = 0;
    if (local_e0 != 0) {
      puVar31 = local_e8;
      if (local_e8 == (uint *)0x0) {
        puVar31 = local_f8;
      }
      uVar21 = *puVar31;
      if (uVar21 == 0) {
        iVar7 = local_e0 + 0x1e;
        if (-1 < local_e0 + -1) {
          iVar7 = local_e0 + -1;
        }
        puVar23 = (uint *)0x0;
        puVar17 = (uint *)(ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          puVar17 = (uint *)0x0;
        }
        plVar12 = (longlong *)0x0;
        do {
          if (puVar17 == puVar23) goto LAB_14293bc66;
          plVar12 = (longlong *)(ulonglong)((int)plVar12 + 0x20);
          uVar21 = puVar31[(longlong)puVar23 + 1];
          puVar23 = (uint *)((longlong)puVar23 + 1);
        } while (uVar21 == 0);
      }
      else {
        plVar12 = (longlong *)0x0;
        puVar23 = (uint *)0x0;
      }
      uVar22 = (ulonglong)(-uVar21 & uVar21);
      uVar34 = uVar22 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar7 = ((int)plVar12 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (local_e0 <= iVar7) {
        iVar7 = local_e0;
      }
    }
    if (iVar7 != local_e0) {
      uVar21 = 0xffffffff;
      do {
        local_930 = CONCAT44(local_930._4_4_,uVar21);
        lVar26 = (longlong)iVar7 * 0x18 + local_108._0_8_;
        local_598 = (uint *)0x0;
        local_590 = 0;
        local_5b8 = (undefined2 *)0x0;
        uStack_5b0 = 0;
        local_58c = 0xffffffff00000080;
        local_584 = 0;
        local_578 = 0;
        local_570 = 0;
        local_940 = plVar12;
        local_938 = puVar23;
        FUN_14482b35e(&local_5b8,&local_608,lVar26,0);
        local_658 = (longlong *)(**(code **)(*local_7c0 + 0x50))(local_7c0,&local_5b8);
        local_608 = lVar26;
        pplStack_600 = &local_658;
        FUN_146b55f3e(local_428,&local_6a8,&local_608,0);
        local_658 = (longlong *)(**(code **)(*local_7c0 + 0x70))(local_7c0,&local_5b8);
        local_608 = lVar26;
        pplStack_600 = &local_658;
        FUN_146b55f3e(local_478,&local_6a8,&local_608,0);
        local_570 = 0;
        if (local_578 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_5b8);
        uVar21 = (uint)local_930 & ~(uint)uVar22;
        puVar31 = local_e8;
        if (local_e8 == (uint *)0x0) {
          puVar31 = local_f8;
        }
        iVar7 = (int)local_938;
        lVar26 = (longlong)iVar7;
        uVar29 = puVar31[lVar26] & uVar21;
        puVar23 = local_938;
        plVar12 = local_940;
        if (uVar29 == 0) {
          iVar32 = local_e0 + 0x1e;
          if (-1 < local_e0 + -1) {
            iVar32 = local_e0 + -1;
          }
          iVar32 = iVar32 >> 5;
          plVar12 = (longlong *)(ulonglong)((int)local_940 + 0x20);
          iVar19 = iVar32;
          if (iVar32 < iVar7) {
            iVar19 = iVar7;
          }
          if (iVar7 < iVar32) {
            lVar33 = 0;
            do {
              uVar29 = puVar31[lVar26 + lVar33 + 1];
              if (uVar29 != 0) {
                uVar21 = 0xffffffff;
                puVar23 = (uint *)(ulonglong)(iVar7 + (int)lVar33 + 1);
                goto LAB_14293cbfe;
              }
              plVar12 = (longlong *)(ulonglong)((int)plVar12 + 0x20);
              lVar33 = lVar33 + 1;
            } while (iVar19 - lVar26 != lVar33);
            uVar21 = 0xffffffff;
            iVar7 = iVar19;
          }
          puVar23 = (uint *)(ulonglong)(iVar7 + 1);
          iVar7 = local_e0;
        }
        else {
LAB_14293cbfe:
          uVar22 = (ulonglong)(-uVar29 & uVar29);
          uVar34 = uVar22 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar7 = ((int)plVar12 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (local_e0 <= iVar7) {
            iVar7 = local_e0;
          }
        }
      } while (iVar7 != iVar37);
    }
LAB_14293bc66:
    if (local_130 == 0) {
      uVar34 = 1;
      iVar7 = 0;
      puVar31 = (uint *)0x0;
      uVar21 = 0;
    }
    else {
      puVar23 = local_138;
      if (local_138 == (uint *)0x0) {
        puVar23 = local_148;
      }
      uVar21 = *puVar23;
      if (uVar21 == 0) {
        iVar7 = local_130 + 0x1e;
        if (-1 < (int)(local_130 - 1)) {
          iVar7 = local_130 - 1;
        }
        puVar31 = (uint *)0x0;
        puVar17 = (uint *)(ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          puVar17 = puVar31;
        }
        iVar7 = 0;
        do {
          if (puVar17 == puVar31) goto LAB_14293bcfd;
          iVar7 = iVar7 + 0x20;
          uVar21 = puVar23[(longlong)puVar31 + 1];
          puVar31 = (uint *)((longlong)puVar31 + 1);
        } while (uVar21 == 0);
      }
      else {
        iVar7 = 0;
        puVar31 = (uint *)0x0;
      }
      uVar34 = (ulonglong)(-uVar21 & uVar21);
      uVar22 = uVar34 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar21 = (iVar7 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if ((int)local_130 <= (int)uVar21) {
        uVar21 = local_130;
      }
    }
    if (uVar21 != local_130) {
      uVar29 = 0xffffffff;
      local_930 = (ulonglong)local_130;
      do {
        local_940 = (longlong *)CONCAT44(local_940._4_4_,iVar7);
        lVar26 = (longlong)(int)uVar21 * 0x18 + local_158._0_8_;
        local_598 = (uint *)0x0;
        local_590 = 0;
        local_5b8 = (undefined2 *)0x0;
        uStack_5b0 = 0;
        local_58c = 0xffffffff00000080;
        local_584 = 0;
        local_578 = 0;
        local_570 = 0;
        local_938 = puVar31;
        FUN_14482b35e(&local_5b8,&local_608,lVar26,0);
        plVar12 = local_948;
        local_658 = (longlong *)(**(code **)(*local_948 + 0x50))(local_948,&local_5b8);
        local_608 = lVar26;
        pplStack_600 = &local_658;
        FUN_146b55f3e(local_4c8,&local_6a8,&local_608,0);
        local_658 = (longlong *)(**(code **)(*plVar12 + 0x70))(plVar12,&local_5b8);
        local_608 = lVar26;
        pplStack_600 = &local_658;
        FUN_146b55f3e(local_518,&local_6a8,&local_608,0);
        plVar12 = local_7b8;
        if (local_7b8 == (longlong *)0x0) {
          plStack_650 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
          UNLOCK();
          plStack_650 = local_7b8;
          LOCK();
          *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
          UNLOCK();
        }
        local_658 = local_7c0;
        local_6a8 = (longlong *)
                    (**(code **)(*local_948 + 0x60))(local_948,&local_5b8,&local_658,local_108);
        pplStack_600 = &local_6a8;
        local_608 = lVar26;
        FUN_146b55f3e(local_568,local_6f8,&local_608,0);
        plVar9 = plStack_650;
        if (plStack_650 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_650 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_650)(plStack_650);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        local_570 = 0;
        if (local_578 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_5b8);
        uVar29 = uVar29 & ~(uint)uVar34;
        puVar23 = local_138;
        if (local_138 == (uint *)0x0) {
          puVar23 = local_148;
        }
        iVar37 = (int)local_938;
        lVar26 = (longlong)iVar37;
        uVar21 = puVar23[lVar26] & uVar29;
        puVar31 = local_938;
        iVar7 = (int)local_940;
        if (uVar21 == 0) {
          iVar32 = local_130 + 0x1e;
          if (-1 < (int)(local_130 - 1)) {
            iVar32 = local_130 - 1;
          }
          iVar32 = iVar32 >> 5;
          iVar7 = (int)local_940 + 0x20;
          iVar19 = iVar32;
          if (iVar32 < iVar37) {
            iVar19 = iVar37;
          }
          if (iVar37 < iVar32) {
            lVar33 = 0;
            do {
              uVar21 = puVar23[lVar26 + lVar33 + 1];
              if (uVar21 != 0) {
                puVar31 = (uint *)(ulonglong)(iVar37 + (int)lVar33 + 1);
                uVar29 = 0xffffffff;
                goto LAB_14293cf09;
              }
              iVar7 = iVar7 + 0x20;
              lVar33 = lVar33 + 1;
            } while (iVar19 - lVar26 != lVar33);
            uVar29 = 0xffffffff;
            lVar26 = (longlong)iVar19;
          }
          puVar31 = (uint *)(lVar26 + 1U & 0xffffffff);
          uVar21 = local_130;
        }
        else {
LAB_14293cf09:
          uVar34 = (ulonglong)(-uVar21 & uVar21);
          uVar22 = uVar34 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar21 = (iVar7 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if ((int)local_130 <= (int)uVar21) {
            uVar21 = local_130;
          }
        }
      } while (uVar21 != (uint)local_930);
    }
LAB_14293bcfd:
    local_940 = (longlong *)(longlong)local_90c;
    if (0 < local_90c) {
      FUN_140056680(&local_5b8);
      uVar22 = 0;
      iVar7 = (int)uStack_5b0 + -1;
      if ((int)uStack_5b0 == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        puVar20 = &DAT_149dfb77a;
        if ((int)uStack_5b0 != 0) {
          puVar20 = local_5b8;
        }
        lVar26 = 0;
        uVar22 = 0;
        do {
          uVar21 = ((uint)(0x19 < (ushort)puVar20[lVar26] - 0x61) * 0x20 +
                   (uint)(ushort)puVar20[lVar26]) - 0x20;
          uVar29 = (uint)(uVar22 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar22 ^ uVar21) & 0xff) * 4);
          uVar22 = (ulonglong)
                   (uVar29 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar29 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
          lVar26 = lVar26 + 1;
        } while (iVar7 != (int)lVar26);
      }
      plVar12 = (longlong *)FUN_146b7c7b2(local_568,uVar22,&local_5b8);
      *plVar12 = *plVar12 + (longlong)local_940;
      if (local_5b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_598 = (uint *)0x0;
    local_590 = 0;
    local_5b8 = (undefined2 *)0x0;
    uStack_5b0 = 0;
    local_58c = 0xffffffff00000080;
    local_584 = 0;
    local_578 = 0;
    local_570 = 0;
    local_5e8 = (uint *)0x0;
    local_5e0 = 0;
    local_608 = 0;
    pplStack_600 = (longlong **)0x0;
    local_5dc = 0xffffffff00000080;
    local_5d4 = 0;
    local_5c8 = 0;
    local_5c0 = 0;
    local_638 = (uint *)0x0;
    local_630 = 0;
    local_658 = (longlong *)0x0;
    plStack_650 = (longlong *)0x0;
    local_62c = 0xffffffff00000080;
    local_624 = 0;
    local_618 = 0;
    local_610 = 0;
    local_688 = (uint *)0x0;
    local_680 = 0;
    local_6a8 = (longlong *)0x0;
    uStack_6a0 = 0;
    local_67c = 0xffffffff00000080;
    local_674 = 0;
    local_668 = 0;
    local_660 = 0;
    local_6d8 = (uint *)0x0;
    local_6d0 = 0;
    local_6f8[0] = 0;
    local_6f8[1] = 0;
    local_6cc = 0xffffffff00000080;
    local_6c4 = 0;
    local_6b8 = 0;
    local_6b0 = 0;
    local_728 = (uint *)0x0;
    local_720 = 0;
    local_748[0] = 0;
    local_748[1] = 0;
    local_71c = 0xffffffff00000080;
    local_714 = 0;
    local_708 = 0;
    local_700 = 0;
    local_778 = (uint *)0x0;
    local_770 = 0;
    local_798[0] = 0;
    local_798[1] = 0;
    local_76c = 0xffffffff00000080;
    local_764 = 0;
    local_758 = 0;
    local_750 = 0;
    if ((longlong)*(int *)(local_920 + 0xd0) != 0) {
      puVar23 = *(uint **)(local_920 + 200);
      local_938 = puVar23 + (longlong)*(int *)(local_920 + 0xd0) * 0x14;
      do {
        FUN_140e83cb0(puVar23,&local_838);
        FUN_14680be7c(local_838,local_830);
        lVar26 = local_838;
        local_848 = 0;
        uStack_840 = 0;
        lVar33 = (longlong)local_830;
        if (lVar33 != 0) {
          iVar7 = 1;
          lVar35 = 0;
          do {
            if ((char)iVar7 == '\0') {
              FUN_1400020e8(&local_848,&DAT_149e19f34,2);
            }
            iVar37 = *(int *)(lVar26 + 8 + lVar35);
            iVar7 = 0;
            iVar32 = iVar37 + -1;
            if (iVar37 == 0) {
              iVar32 = iVar7;
            }
            FUN_1400020e8(&local_848,*(undefined8 *)(lVar26 + lVar35),iVar32);
            lVar35 = lVar35 + 0x10;
          } while (lVar33 * 0x10 != lVar35);
        }
        FUN_14482b35e(local_798,&local_7b0,&local_848,0);
        plVar12 = local_7b8;
        if (local_7b8 == (longlong *)0x0) {
          uStack_850 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
          UNLOCK();
          uStack_850 = local_7b8;
          LOCK();
          *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
          UNLOCK();
        }
        local_858 = (undefined1  [8])local_7c0;
        local_868 = (**(code **)(*local_948 + 0x60))(local_948,puVar23,local_858,puVar23);
        local_868 = local_868 + (longlong)local_940;
        local_7b0 = &local_848;
        local_7a8 = &local_868;
        FUN_146b55f3e(&local_5b8,local_878,&local_7b0,0);
        plVar9 = uStack_850;
        if (uStack_850 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_850 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*uStack_850)(uStack_850);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        plVar12 = local_948;
        local_858 = (undefined1  [8])(**(code **)(*local_948 + 0x70))(local_948,puVar23);
        local_7b0 = &local_848;
        local_7a8 = (longlong *)local_858;
        FUN_146b55f3e(&local_6a8,&local_868,&local_7b0,0);
        local_858 = (undefined1  [8])(**(code **)(*plVar12 + 0x50))(plVar12,puVar23);
        local_7b0 = &local_848;
        local_7a8 = (longlong *)local_858;
        FUN_146b55f3e(local_6f8,&local_868,&local_7b0,0);
        local_858 = (undefined1  [8])(**(code **)(*local_7c0 + 0x70))(local_7c0,puVar23);
        local_7b0 = &local_848;
        local_7a8 = (longlong *)local_858;
        FUN_146b55f3e(&local_608,&local_868,&local_7b0,0);
        local_858 = (undefined1  [8])(**(code **)(*local_7c0 + 0x50))(local_7c0,puVar23);
        local_7b0 = &local_848;
        local_7a8 = (longlong *)local_858;
        FUN_146b55f3e(&local_658,&local_868,&local_7b0,0);
        local_888 = (longlong *)CONCAT44(local_888._4_4_,1);
        uStack_850 = local_928;
        local_858 = (undefined1  [8])plVar12;
        if (local_928 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_928 + 1) = (int)local_928[1] + 1;
          UNLOCK();
        }
        local_868 = FUN_146b2f3b8(&local_7c0,local_858,&local_888);
        local_7b0 = &local_848;
        local_7a8 = &local_868;
        FUN_146b55f3e(local_748,local_878,&local_7b0);
        plVar12 = uStack_850;
        if (uStack_850 != (longlong *)0x0) {
          LOCK();
          plVar9 = uStack_850 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*uStack_850)(uStack_850);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (local_848 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_838,local_830);
        if (local_838 != 0) {
          FUN_1400020a8();
        }
        puVar23 = puVar23 + 0x14;
      } while (puVar23 != local_938);
    }
    FUN_140e83cb0(local_158,&local_7b0);
    FUN_14680be7c(local_7b0,(ulonglong)local_7a8 & 0xffffffff);
    FUN_140056680(&local_838,L"(untagged)");
    plVar12 = local_7b0;
    local_848 = 0;
    uStack_840 = 0;
    lVar26 = (longlong)(int)local_7a8;
    if (lVar26 != 0) {
      iVar7 = 1;
      lVar33 = 0;
      do {
        if ((char)iVar7 == '\0') {
          FUN_1400020e8(&local_848,&DAT_149e19f34,2);
        }
        iVar37 = *(int *)((longlong)plVar12 + lVar33 + 8);
        iVar7 = 0;
        iVar32 = iVar37 + -1;
        if (iVar37 == 0) {
          iVar32 = iVar7;
        }
        FUN_1400020e8(&local_848,*(undefined8 *)((longlong)plVar12 + lVar33),iVar32);
        lVar33 = lVar33 + 0x10;
      } while (lVar26 * 0x10 != lVar33);
      if (1 < (int)uStack_840) {
        lVar26 = 2;
        lVar33 = 0;
        while( true ) {
          uVar25 = *(ushort *)(local_848 + lVar33);
          uVar22 = (ulonglong)uVar25;
          uVar27 = *(ushort *)((longlong)&DAT_149e19f34 + lVar33);
          if (uVar25 != uVar27) break;
          if (uVar25 == 0) goto LAB_14293c3e4;
LAB_14293c7c4:
          lVar26 = lVar26 + -1;
          if (lVar26 == 0) goto LAB_14293c3e4;
          lVar33 = lVar33 + 2;
        }
        if ((uVar27 | uVar25) < 0x80) {
          uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
          uVar34 = (ulonglong)uVar27;
          uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar34];
          if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar34]) goto LAB_14293c7c4;
        }
        if (uVar25 != uVar27) goto LAB_14293c3fb;
      }
    }
LAB_14293c3e4:
    FUN_140e63652(&local_848,0,&local_838);
LAB_14293c3fb:
    iVar7 = local_770;
    if (local_770 == 0) {
      uVar36 = 1;
      iVar37 = 0;
      uVar22 = 0;
      iVar32 = 0;
    }
    else {
      puVar23 = local_778;
      if (local_778 == (uint *)0x0) {
        puVar23 = local_788;
      }
      uVar21 = *puVar23;
      if (uVar21 == 0) {
        iVar37 = local_770 + 0x1e;
        if (-1 < local_770 + -1) {
          iVar37 = local_770 + -1;
        }
        uVar22 = 0;
        uVar34 = (ulonglong)(uint)(iVar37 >> 5);
        if (iVar37 >> 5 < 1) {
          uVar34 = uVar22;
        }
        iVar37 = 0;
        do {
          if (uVar34 == uVar22) goto LAB_14293c493;
          iVar37 = iVar37 + 0x20;
          uVar21 = puVar23[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar21 == 0);
      }
      else {
        iVar37 = 0;
        uVar22 = 0;
      }
      uVar36 = (ulonglong)(-uVar21 & uVar21);
      uVar34 = uVar36 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (local_770 <= iVar32) {
        iVar32 = local_770;
      }
    }
    if (iVar32 != local_770) {
      uVar21 = 0xffffffff;
      do {
        puVar10 = (undefined8 *)(local_798[0] + (longlong)iVar32 * 0x18);
        if ((*(int *)(puVar10 + 1) < 2) || (*(short *)*puVar10 == 0x2c)) {
          FUN_140474144(local_858,&local_838);
        }
        else {
          uVar29 = *(uint *)(puVar10 + 1);
          auVar5._4_4_ = uStack_850._4_4_;
          auVar5._0_4_ = uVar29;
          auVar5._8_8_ = 0;
          _local_858 = auVar5 << 0x40;
          if ((longlong)(int)uVar29 == 0) {
            _local_858 = ZEXT416(uVar29) << 0x40;
          }
          else {
            local_938 = (uint *)*puVar10;
            local_930 = (longlong)(int)uVar29;
            FUN_1446dd670(local_858,uVar29,0);
            memcpy((void *)local_858,local_938,local_930 * 2);
          }
        }
        if (local_858 != (undefined1  [8])0x0) {
          FUN_1400020a8();
        }
        uVar21 = uVar21 & ~(uint)uVar36;
        puVar23 = local_778;
        if (local_778 == (uint *)0x0) {
          puVar23 = local_788;
        }
        iVar32 = (int)uVar22;
        lVar26 = (longlong)iVar32;
        uVar29 = puVar23[lVar26] & uVar21;
        if (uVar29 == 0) {
          iVar19 = local_770 + 0x1e;
          if (-1 < local_770 + -1) {
            iVar19 = local_770 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar37 = iVar37 + 0x20;
          iVar15 = iVar19;
          if (iVar19 < iVar32) {
            iVar15 = iVar32;
          }
          if (iVar32 < iVar19) {
            lVar33 = 0;
            do {
              uVar29 = puVar23[lVar26 + lVar33 + 1];
              if (uVar29 != 0) {
                uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14293d033;
              }
              iVar37 = iVar37 + 0x20;
              lVar33 = lVar33 + 1;
            } while (iVar15 - lVar26 != lVar33);
            uVar21 = 0xffffffff;
            iVar32 = iVar15;
          }
          uVar22 = (ulonglong)(iVar32 + 1);
          iVar32 = local_770;
        }
        else {
LAB_14293d033:
          uVar36 = (ulonglong)(-uVar29 & uVar29);
          uVar34 = uVar36 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (local_770 <= iVar32) {
            iVar32 = local_770;
          }
        }
      } while (iVar32 != iVar7);
    }
LAB_14293c493:
    _local_858 = (undefined1  [16])0x0;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    *puVar13 = 1;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    *puVar13 = 2;
    *(undefined8 *)((longlong)local_858 + 0x38) = 0x41324f8000000000;
    *(undefined8 *)((longlong)local_858 + 8) = 0x41324f8000000000;
    *(undefined8 *)((longlong)local_858 + 0x40) = 0x417c9c3800000000;
    *(undefined8 *)((longlong)local_858 + 0x10) = 0x417c9c3800000000;
    *(undefined8 *)((longlong)local_858 + 0x48) = 0x4177d78400000000;
    *(undefined8 *)((longlong)local_858 + 0x18) = 0x4177d78400000000;
    *(undefined8 *)((longlong)local_858 + 0x50) = 0x416312d000000000;
    *(undefined8 *)((longlong)local_858 + 0x20) = 0x416312d000000000;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    *puVar13 = 1;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    *puVar13 = 2;
    *(undefined8 *)((longlong)local_858 + 0x98) = 0x414ab3f000000000;
    *(undefined8 *)((longlong)local_858 + 0x68) = 0x414ab3f000000000;
    *(undefined8 *)((longlong)local_858 + 0xa0) = 0x41a1490c80000000;
    *(undefined8 *)((longlong)local_858 + 0x70) = 0x41a1490c80000000;
    *(undefined8 *)((longlong)local_858 + 0xa8) = 0x4191e1a300000000;
    *(undefined8 *)((longlong)local_858 + 0x78) = 0x4191e1a300000000;
    *(undefined8 *)((longlong)local_858 + 0xb0) = 0x417312d000000000;
    *(undefined8 *)((longlong)local_858 + 0x80) = 0x417312d000000000;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    *puVar13 = 1;
    puVar13 = (undefined4 *)FUN_146b60f02(local_858);
    plVar9 = local_7b8;
    lVar26 = local_920;
    plVar12 = local_950;
    *puVar13 = 2;
    *(undefined8 *)((longlong)local_858 + 0xf8) = 0x4168cba800000000;
    *(undefined8 *)((longlong)local_858 + 200) = 0x4168cba800000000;
    *(undefined8 *)((longlong)local_858 + 0x100) = 0x41b19557c0000000;
    *(undefined8 *)((longlong)local_858 + 0xd0) = 0x41b19557c0000000;
    *(undefined8 *)((longlong)local_858 + 0x108) = 0x419dcd6500000000;
    *(undefined8 *)((longlong)local_858 + 0xd8) = 0x419dcd6500000000;
    *(undefined8 *)((longlong)local_858 + 0x110) = 0x418312d000000000;
    *(undefined8 *)((longlong)local_858 + 0xe0) = 0x418312d000000000;
    local_878._8_8_ = local_928;
    local_878._0_8_ = local_948;
    if (local_928 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_928 + 1) = (int)local_928[1] + 1;
      UNLOCK();
    }
    local_888 = local_7c0;
    local_880 = local_7b8;
    local_960 = local_858;
    if (local_7b8 == (longlong *)0x0) {
      local_968 = local_158;
      FUN_146b5ec1d(&local_868,&local_888,local_108);
    }
    else {
      LOCK();
      *(int *)(local_7b8 + 1) = (int)local_7b8[1] + 1;
      UNLOCK();
      local_968 = local_158;
      FUN_146b5ec1d(&local_868,&local_888,local_108);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    uVar14 = local_878._8_8_;
    if ((longlong *)local_878._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar9 = (longlong *)(local_878._8_8_ + 8);
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (*(code *)**(undefined8 **)local_878._8_8_)(local_878._8_8_);
        LOCK();
        piVar1 = (int *)(uVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)uVar14 + 0x10))(uVar14);
        }
      }
    }
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    if (1 < *(int *)(lVar26 + 0xe0)) {
      local_878 = (undefined1  [16])0x0;
      FUN_145fe0690(&local_888,local_878,0);
      FUN_145928344(local_888);
      FUN_146b60f42(local_888,L"ManifestA");
      plVar9 = local_888;
      puVar10 = (undefined8 *)(**(code **)(*local_7c0 + 0x10))();
      local_898 = (void *)0x0;
      local_890 = *(int *)(puVar10 + 1);
      lVar26 = (longlong)local_890;
      pvVar3 = (void *)*puVar10;
      if (lVar26 == 0) {
        local_88c = 0;
      }
      else {
        FUN_1446dd670(&local_898,local_890,0);
        memcpy(local_898,pvVar3,lVar26 * 2);
      }
      FUN_146b60fca(plVar9,&local_898);
      plVar9 = local_888;
      uVar8 = (**(code **)(*local_7c0 + 8))();
      FUN_146b61046(plVar9,uVar8);
      plVar9 = local_888;
      puVar10 = (undefined8 *)(**(code **)(*local_7c0 + 0x18))();
      local_8a8 = (void *)0x0;
      local_8a0 = *(int *)(puVar10 + 1);
      lVar26 = (longlong)local_8a0;
      pvVar3 = (void *)*puVar10;
      if (lVar26 == 0) {
        local_89c = 0;
      }
      else {
        FUN_1446dd670(&local_8a8,local_8a0,0);
        memcpy(local_8a8,pvVar3,lVar26 * 2);
      }
      FUN_146b393fe(plVar9,L"VersionString",&local_8a8);
      FUN_146b610fa(local_888,local_900);
      FUN_146b611b2(local_888,local_908);
      FUN_146b6126a(local_888);
      iVar7 = local_400;
      if (local_400 == 0) {
        uVar36 = 1;
        iVar37 = 0;
        uVar22 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_408;
        if (local_408 == (uint *)0x0) {
          puVar23 = local_418;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_400 + 0x1e;
          if (-1 < local_400 + -1) {
            iVar37 = local_400 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d273;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          iVar37 = 0;
          uVar22 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_400 <= iVar32) {
          iVar32 = local_400;
        }
      }
      if (iVar32 != local_400) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,(longlong)local_428 + (longlong)iVar32 * 0x20,
                        *(undefined8 *)((longlong)local_428 + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_408;
          if (local_408 == (uint *)0x0) {
            puVar23 = local_418;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_400 + 0x1e;
            if (-1 < local_400 + -1) {
              iVar19 = local_400 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293e731;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_400;
          }
          else {
LAB_14293e731:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_400 <= iVar32) {
              iVar32 = local_400;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d273:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b61428(local_888);
      iVar7 = local_630;
      if (local_630 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_638;
        if (local_638 == (uint *)0x0) {
          puVar23 = local_648;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_630 + 0x1e;
          if (-1 < local_630 + -1) {
            iVar37 = local_630 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d34e;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_630 <= iVar32) {
          iVar32 = local_630;
        }
      }
      if (iVar32 != local_630) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_658 + (longlong)iVar32 * 4,
                        local_658[(longlong)iVar32 * 4 + 2]);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_638;
          if (local_638 == (uint *)0x0) {
            puVar23 = local_648;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_630 + 0x1e;
            if (-1 < local_630 + -1) {
              iVar19 = local_630 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293e828;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_630;
          }
          else {
LAB_14293e828:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_630 <= iVar32) {
              iVar32 = local_630;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d34e:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b614b6(local_888,L"IndividualTagBuildSizes");
      iVar7 = local_450;
      if (local_450 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_458;
        if (local_458 == (uint *)0x0) {
          puVar23 = local_468;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_450 + 0x1e;
          if (-1 < local_450 + -1) {
            iVar37 = local_450 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d430;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_450 <= iVar32) {
          iVar32 = local_450;
        }
      }
      if (iVar32 != local_450) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_478._0_8_ + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_478._0_8_ + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_458;
          if (local_458 == (uint *)0x0) {
            puVar23 = local_468;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_450 + 0x1e;
            if (-1 < local_450 + -1) {
              iVar19 = local_450 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293e91f;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_450;
          }
          else {
LAB_14293e91f:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_450 <= iVar32) {
              iVar32 = local_450;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d430:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b6153e(local_888);
      iVar7 = local_5e0;
      if (local_5e0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_5e8;
        if (local_5e8 == (uint *)0x0) {
          puVar23 = local_5f8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_5e0 + 0x1e;
          if (-1 < local_5e0 + -1) {
            iVar37 = local_5e0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d50b;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_5e0 <= iVar32) {
          iVar32 = local_5e0;
        }
      }
      if (iVar32 != local_5e0) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_608 + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_608 + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_5e8;
          if (local_5e8 == (uint *)0x0) {
            puVar23 = local_5f8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_5e0 + 0x1e;
            if (-1 < local_5e0 + -1) {
              iVar19 = local_5e0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293ea16;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_5e0;
          }
          else {
LAB_14293ea16:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_5e0 <= iVar32) {
              iVar32 = local_5e0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d50b:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      plVar2 = local_888;
      *(undefined4 *)(plVar9 + 4) = 3;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar2 + 3) = (int)plVar2[3] + -1;
      FUN_14047c610(plVar2 + 2);
      *(undefined4 *)(plVar2 + 4) = 3;
      FUN_146b60f42(local_888,L"ManifestB");
      plVar9 = local_888;
      puVar10 = (undefined8 *)(**(code **)(*local_948 + 0x10))();
      local_8b8 = (void *)0x0;
      local_8b0 = *(int *)(puVar10 + 1);
      lVar26 = (longlong)local_8b0;
      pvVar3 = (void *)*puVar10;
      if (lVar26 == 0) {
        local_8ac = 0;
      }
      else {
        FUN_1446dd670(&local_8b8,local_8b0,0);
        memcpy(local_8b8,pvVar3,lVar26 * 2);
      }
      FUN_146b60fca(plVar9,&local_8b8);
      plVar2 = local_888;
      plVar9 = local_948;
      uVar8 = (**(code **)(*local_948 + 8))(local_948);
      FUN_146b61046(plVar2,uVar8);
      plVar2 = local_888;
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x18))(plVar9);
      local_8c8 = (void *)0x0;
      local_8c0 = *(int *)(puVar10 + 1);
      lVar26 = (longlong)local_8c0;
      pvVar3 = (void *)*puVar10;
      if (lVar26 == 0) {
        local_8bc = 0;
      }
      else {
        FUN_1446dd670(&local_8c8,local_8c0,0);
        memcpy(local_8c8,pvVar3,lVar26 * 2);
      }
      FUN_146b393fe(plVar2,L"VersionString",&local_8c8);
      FUN_146b610fa(local_888,local_8f0);
      FUN_146b611b2(local_888,local_8f8);
      FUN_146b6126a(local_888);
      iVar7 = local_4a0;
      if (local_4a0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_4a8;
        if (local_4a8 == (uint *)0x0) {
          puVar23 = local_4b8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_4a0 + 0x1e;
          if (-1 < local_4a0 + -1) {
            iVar37 = local_4a0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d771;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_4a0 <= iVar32) {
          iVar32 = local_4a0;
        }
      }
      if (iVar32 != local_4a0) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_4c8._0_8_ + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_4c8._0_8_ + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_4a8;
          if (local_4a8 == (uint *)0x0) {
            puVar23 = local_4b8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_4a0 + 0x1e;
            if (-1 < local_4a0 + -1) {
              iVar19 = local_4a0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293eb0d;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_4a0;
          }
          else {
LAB_14293eb0d:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_4a0 <= iVar32) {
              iVar32 = local_4a0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d771:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b61428(local_888);
      iVar7 = local_6d0;
      if (local_6d0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_6d8;
        if (local_6d8 == (uint *)0x0) {
          puVar23 = local_6e8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_6d0 + 0x1e;
          if (-1 < local_6d0 + -1) {
            iVar37 = local_6d0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d84c;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_6d0 <= iVar32) {
          iVar32 = local_6d0;
        }
      }
      if (iVar32 != local_6d0) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_6f8[0] + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_6f8[0] + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_6d8;
          if (local_6d8 == (uint *)0x0) {
            puVar23 = local_6e8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_6d0 + 0x1e;
            if (-1 < local_6d0 + -1) {
              iVar19 = local_6d0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293ec04;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_6d0;
          }
          else {
LAB_14293ec04:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_6d0 <= iVar32) {
              iVar32 = local_6d0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d84c:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b614b6(local_888,L"IndividualTagBuildSizes");
      iVar7 = local_4f0;
      if (local_4f0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_4f8;
        if (local_4f8 == (uint *)0x0) {
          puVar23 = local_508;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_4f0 + 0x1e;
          if (-1 < local_4f0 + -1) {
            iVar37 = local_4f0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293d92e;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_4f0 <= iVar32) {
          iVar32 = local_4f0;
        }
      }
      if (iVar32 != local_4f0) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_518._0_8_ + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_518._0_8_ + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_4f8;
          if (local_4f8 == (uint *)0x0) {
            puVar23 = local_508;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_4f0 + 0x1e;
            if (-1 < local_4f0 + -1) {
              iVar19 = local_4f0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293ecfb;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_4f0;
          }
          else {
LAB_14293ecfb:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_4f0 <= iVar32) {
              iVar32 = local_4f0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293d92e:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b6153e(local_888);
      iVar7 = local_680;
      if (local_680 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_688;
        if (local_688 == (uint *)0x0) {
          puVar23 = local_698;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_680 + 0x1e;
          if (-1 < local_680 + -1) {
            iVar37 = local_680 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293da09;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_680 <= iVar32) {
          iVar32 = local_680;
        }
      }
      if (iVar32 != local_680) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_6a8 + (longlong)iVar32 * 4,
                        local_6a8[(longlong)iVar32 * 4 + 2]);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_688;
          if (local_688 == (uint *)0x0) {
            puVar23 = local_698;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_680 + 0x1e;
            if (-1 < local_680 + -1) {
              iVar19 = local_680 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293edf2;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_680;
          }
          else {
LAB_14293edf2:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_680 <= iVar32) {
              iVar32 = local_680;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293da09:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      plVar2 = local_888;
      *(undefined4 *)(plVar9 + 4) = 3;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar2 + 3) = (int)plVar2[3] + -1;
      FUN_14047c610(plVar2 + 2);
      *(undefined4 *)(plVar2 + 4) = 3;
      FUN_146b39aec(local_888,L"Differential");
      FUN_146b615cc(local_888);
      iVar7 = local_2c0;
      if (local_2c0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_2c8;
        if (local_2c8 == (uint *)0x0) {
          puVar23 = local_2d8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_2c0 + 0x1e;
          if (-1 < local_2c0 + -1) {
            iVar37 = local_2c0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293db36;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_2c0 <= iVar32) {
          iVar32 = local_2c0;
        }
      }
      if (iVar32 != local_2c0) {
        uVar21 = 0xffffffff;
        do {
          FUN_145927f78(local_888,(longlong)iVar32 * 0x18 + local_2e8);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_2c8;
          if (local_2c8 == (uint *)0x0) {
            puVar23 = local_2d8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_2c0 + 0x1e;
            if (-1 < local_2c0 + -1) {
              iVar19 = local_2c0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293eee4;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_2c0;
          }
          else {
LAB_14293eee4:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_2c0 <= iVar32) {
              iVar32 = local_2c0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293db36:
      FUN_1459282dc(local_888);
      FUN_146b39664(local_888,L"RemovedFilePaths");
      iVar7 = local_310;
      if (local_310 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_318;
        if (local_318 == (uint *)0x0) {
          puVar23 = local_328;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_310 + 0x1e;
          if (-1 < local_310 + -1) {
            iVar37 = local_310 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293dbe7;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_310 <= iVar32) {
          iVar32 = local_310;
        }
      }
      if (iVar32 != local_310) {
        uVar21 = 0xffffffff;
        do {
          FUN_145927f78(local_888,(longlong)iVar32 * 0x18 + local_338[0]);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_318;
          if (local_318 == (uint *)0x0) {
            puVar23 = local_328;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_310 + 0x1e;
            if (-1 < local_310 + -1) {
              iVar19 = local_310 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293efd6;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_310;
          }
          else {
LAB_14293efd6:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_310 <= iVar32) {
              iVar32 = local_310;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293dbe7:
      FUN_1459282dc(local_888);
      FUN_146b39664(local_888,L"ChangedFilePaths");
      iVar7 = local_360;
      if (local_360 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_368;
        if (local_368 == (uint *)0x0) {
          puVar23 = local_378;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_360 + 0x1e;
          if (-1 < local_360 + -1) {
            iVar37 = local_360 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293dc98;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_360 <= iVar32) {
          iVar32 = local_360;
        }
      }
      if (iVar32 != local_360) {
        uVar21 = 0xffffffff;
        do {
          FUN_145927f78(local_888,(longlong)iVar32 * 0x18 + local_388._0_8_);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_368;
          if (local_368 == (uint *)0x0) {
            puVar23 = local_378;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_360 + 0x1e;
            if (-1 < local_360 + -1) {
              iVar19 = local_360 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293f0c8;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_360;
          }
          else {
LAB_14293f0c8:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_360 <= iVar32) {
              iVar32 = local_360;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293dc98:
      FUN_1459282dc(local_888);
      FUN_146b6165a(local_888);
      iVar7 = local_3b0;
      if (local_3b0 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_3b8;
        if (local_3b8 == (uint *)0x0) {
          puVar23 = local_3c8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_3b0 + 0x1e;
          if (-1 < local_3b0 + -1) {
            iVar37 = local_3b0 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293dd42;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_3b0 <= iVar32) {
          iVar32 = local_3b0;
        }
      }
      if (iVar32 != local_3b0) {
        uVar21 = 0xffffffff;
        do {
          FUN_145927f78(local_888,(longlong)iVar32 * 0x18 + local_3d8._0_8_);
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_3b8;
          if (local_3b8 == (uint *)0x0) {
            puVar23 = local_3c8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_3b0 + 0x1e;
            if (-1 < local_3b0 + -1) {
              iVar19 = local_3b0 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293f1ba;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_3b0;
          }
          else {
LAB_14293f1ba:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_3b0 <= iVar32) {
              iVar32 = local_3b0;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293dd42:
      lVar26 = local_8e0 + (longlong)local_940;
      FUN_1459282dc(local_888);
      FUN_146b616e8(local_888);
      if ((longlong)(int)uStack_820 != 0) {
        lVar35 = (longlong)(int)uStack_820 << 4;
        lVar33 = local_828;
        do {
          FUN_145927f78(local_888,lVar33);
          lVar33 = lVar33 + 0x10;
          lVar35 = lVar35 + -0x10;
        } while (lVar35 != 0);
      }
      FUN_1459282dc(local_888);
      FUN_146b61776(local_888,local_918);
      FUN_146b6182e(local_888,lVar26);
      FUN_146b618e6(local_888,local_8e8);
      FUN_146b614b6(local_888,L"IndividualTagDeltaSizes");
      iVar7 = local_540;
      if (local_540 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_548;
        if (local_548 == (uint *)0x0) {
          puVar23 = local_558;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_540 + 0x1e;
          if (-1 < local_540 + -1) {
            iVar37 = local_540 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293de84;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_540 <= iVar32) {
          iVar32 = local_540;
        }
      }
      if (iVar32 != local_540) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_568._0_8_ + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_568._0_8_ + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_548;
          if (local_548 == (uint *)0x0) {
            puVar23 = local_558;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_540 + 0x1e;
            if (-1 < local_540 + -1) {
              iVar19 = local_540 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293f2b1;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_540;
          }
          else {
LAB_14293f2b1:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_540 <= iVar32) {
              iVar32 = local_540;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293de84:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b614b6(local_888,L"CompareTagSetDeltaSizes");
      iVar7 = local_590;
      if (local_590 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_598;
        if (local_598 == (uint *)0x0) {
          puVar23 = local_5a8;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_590 + 0x1e;
          if (-1 < local_590 + -1) {
            iVar37 = local_590 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293df66;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_590 <= iVar32) {
          iVar32 = local_590;
        }
      }
      if (iVar32 != local_590) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_5b8 + (longlong)iVar32 * 0x10,
                        *(undefined8 *)(local_5b8 + (longlong)iVar32 * 0x10 + 8));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_598;
          if (local_598 == (uint *)0x0) {
            puVar23 = local_5a8;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_590 + 0x1e;
            if (-1 < local_590 + -1) {
              iVar19 = local_590 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293f3a8;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_590;
          }
          else {
LAB_14293f3a8:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_590 <= iVar32) {
              iVar32 = local_590;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293df66:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b6199e(local_888);
      iVar7 = local_720;
      if (local_720 == 0) {
        uVar36 = 1;
        uVar22 = 0;
        iVar37 = 0;
        iVar32 = 0;
      }
      else {
        puVar23 = local_728;
        if (local_728 == (uint *)0x0) {
          puVar23 = local_738;
        }
        uVar21 = *puVar23;
        if (uVar21 == 0) {
          iVar37 = local_720 + 0x1e;
          if (-1 < local_720 + -1) {
            iVar37 = local_720 + -1;
          }
          uVar22 = 0;
          uVar34 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar34 = uVar22;
          }
          iVar37 = 0;
          do {
            if (uVar34 == uVar22) goto LAB_14293e041;
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar23[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar22 = 0;
          iVar37 = 0;
        }
        uVar36 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_720 <= iVar32) {
          iVar32 = local_720;
        }
      }
      if (iVar32 != local_720) {
        uVar21 = 0xffffffff;
        do {
          FUN_146b612f8(local_888,local_748[0] + (longlong)iVar32 * 0x20,
                        *(undefined8 *)(local_748[0] + 0x10 + (longlong)iVar32 * 0x20));
          uVar21 = ~(uint)uVar36 & uVar21;
          puVar23 = local_728;
          if (local_728 == (uint *)0x0) {
            puVar23 = local_738;
          }
          iVar32 = (int)uVar22;
          lVar26 = (longlong)iVar32;
          uVar29 = puVar23[lVar26] & uVar21;
          if (uVar29 == 0) {
            iVar19 = local_720 + 0x1e;
            if (-1 < local_720 + -1) {
              iVar19 = local_720 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar37 = iVar37 + 0x20;
            iVar15 = iVar19;
            if (iVar19 < iVar32) {
              iVar15 = iVar32;
            }
            if (iVar32 < iVar19) {
              lVar33 = 0;
              do {
                uVar29 = puVar23[lVar26 + lVar33 + 1];
                if (uVar29 != 0) {
                  uVar22 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_14293f49f;
                }
                iVar37 = iVar37 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar15 - lVar26 != lVar33);
              uVar21 = 0xffffffff;
              iVar32 = iVar15;
            }
            uVar22 = (ulonglong)(iVar32 + 1);
            plVar12 = local_950;
            iVar32 = local_720;
          }
          else {
LAB_14293f49f:
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar34 = uVar36 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar32 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_720 <= iVar32) {
              iVar32 = local_720;
            }
          }
        } while (iVar32 != iVar7);
      }
LAB_14293e041:
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      *(undefined4 *)(plVar9 + 4) = 3;
      FUN_146b61a2c(local_888);
      lVar26 = local_868;
      if ((longlong)local_860 != 0) {
        lVar33 = 0;
        do {
          FUN_14683e2fa(local_888,*(undefined8 *)(lVar26 + lVar33));
          lVar33 = lVar33 + 8;
        } while ((longlong)local_860 * 8 != lVar33);
      }
      FUN_1459282dc(local_888);
      plVar9 = local_888;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
      FUN_14047c610(plVar9 + 2);
      plVar2 = local_888;
      *(undefined4 *)(plVar9 + 4) = 3;
      *(int *)((longlong)local_888 + 0x24) = *(int *)((longlong)local_888 + 0x24) + -1;
      local_79a = 0x7d;
      (**(code **)(*(longlong *)local_888[1] + 0x170))((longlong *)local_888[1],&local_79a,2);
      *(int *)(plVar2 + 3) = (int)plVar2[3] + -1;
      FUN_14047c610(plVar2 + 2);
      *(undefined4 *)(plVar2 + 4) = 3;
      (**(code **)(*local_888 + 8))();
      uVar14 = FUN_14054d1d4();
      lVar26 = local_920;
      if (*(int *)(local_920 + 0xe0) == 0) {
        puVar20 = &DAT_149dfb77a;
      }
      else {
        puVar20 = *(undefined2 **)(local_920 + 0xd8);
      }
      local_8d8 = local_878._0_8_;
      local_8d0 = local_878._8_4_ + -1;
      if (local_878._8_4_ == 0) {
        local_8d0 = 0;
      }
      local_968 = (undefined1 *)((ulonglong)local_968 & 0xffffffff00000000);
      uVar21 = FUN_1415d54ec(&local_8d8,puVar20,0,uVar14);
      plVar9 = local_880;
      uVar22 = (ulonglong)uVar21;
      if (local_880 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_880 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_880)(local_880);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_878._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
    if (local_868 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_7b0,(ulonglong)local_7a8 & 0xffffffff);
    if (local_7b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_750 = 0;
    if (local_758 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_798);
    local_700 = 0;
    if (local_708 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_748);
    local_6b0 = 0;
    if (local_6b8 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_6f8);
    local_660 = 0;
    if (local_668 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(&local_6a8);
    local_610 = 0;
    if (local_618 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(&local_658);
    local_5c0 = 0;
    if (local_5c8 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(&local_608);
    local_570 = 0;
    if (local_578 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(&local_5b8);
    local_520 = 0;
    if (local_528 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_568);
    local_4d0 = 0;
    if (local_4d8 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_518);
    local_480 = 0;
    if (local_488 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_4c8);
    local_430 = 0;
    if (local_438 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_478);
    local_3e0 = 0;
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    FUN_145ec7454(local_428);
    local_390 = 0;
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_3d8);
    local_340 = 0;
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_388);
    local_2f0 = 0;
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_338);
    local_2a0 = 0;
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_2e8);
    FUN_1447a1747(local_828,uStack_820 & 0xffffffff);
    if (local_828 != 0) {
      FUN_1400020a8();
    }
    local_250 = 0;
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(local_298);
    local_200 = 0;
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_248);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_1f8);
    local_160 = 0;
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_1a8);
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_158);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_108);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)*plVar12)(plVar12,1);
    }
    if (local_a8[0] != 0) {
      plVar12 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar12 = local_88;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    FUN_146b32214(&local_7f8);
    LOCK();
    *(undefined4 *)(lVar26 + 0x150) = 0;
    UNLOCK();
    plVar12 = local_928;
    if (local_928 == (longlong *)0x0) goto LAB_14293b02f;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    if ((lVar33 != 0) && (local_7c0 != (longlong *)0x0)) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      local_800 = plVar12;
      goto LAB_14293b0bc;
    }
    uVar22 = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x150) = 0;
    UNLOCK();
  }
  LOCK();
  plVar9 = plVar12 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_14293b02f:
  plVar12 = local_7b8;
  if (local_7b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7b8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_7b8)(local_7b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return uVar22 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293f5ca FUN_14293f5ca body=404 status=ok
// SIG undefined FUN_14293f5ca(void)

/* WARNING: Removing unreachable block (ram,0x00014293f716) */

void FUN_14293f5ca(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [39];
  char local_81;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_59;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x1f0))(0,&local_58);
  if ((longlong)(int)uStack_50 != 0) {
    lVar5 = (longlong)(int)uStack_50 << 4;
    lVar7 = local_58;
    do {
      local_59 = '\0';
      FUN_1457adc9c(param_3,&local_70,lVar7,&local_59);
      if (local_59 == '\0') {
        FUN_146b43eee(&local_70,param_1,lVar7);
        if (param_4 != '\0') {
          uVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,lVar7);
          FUN_140002266(&local_80,L"\t%llu",uVar4);
          iVar2 = local_78 + -1;
          if (local_78 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(&local_70,local_80,iVar2);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
        }
        lVar6 = param_2[1];
        uVar3 = (int)lVar6 + 1;
        *(uint *)(param_2 + 1) = uVar3;
        local_81 = param_4;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar3) {
          FUN_1447a1bd6(param_2);
        }
        lVar1 = *param_2;
        lVar6 = (longlong)(int)lVar6 * 0x10;
        *(undefined8 *)(lVar1 + lVar6) = 0;
        *(undefined8 *)(lVar1 + lVar6) = local_70;
        local_70 = 0;
        *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_68;
        *(undefined4 *)(lVar1 + 0xc + lVar6) = local_68._4_4_;
        local_68 = 0;
        param_4 = local_81;
      }
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293f760 FUN_14293f760 body=335 status=ok
// SIG undefined FUN_14293f760(void)

undefined4 FUN_14293f760(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  cVar3 = (**(code **)(*param_1 + 8))();
  lVar2 = local_68;
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar10 = (longlong)(int)uStack_60;
    if (lVar10 != 0) {
      iVar7 = 1;
      lVar9 = 0;
      do {
        if ((char)iVar7 == '\0') {
          FUN_1400020e8(&local_78,&DAT_149e02010,2);
        }
        iVar1 = *(int *)(lVar2 + 8 + lVar9);
        iVar7 = 0;
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = iVar7;
        }
        FUN_1400020e8(&local_78,*(undefined8 *)(lVar2 + lVar9),iVar8);
        lVar9 = lVar9 + 0x10;
      } while (lVar10 * 0x10 != lVar9);
    }
    uVar5 = FUN_14054d1d4();
    if ((int)param_1[4] == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)param_1[3];
    }
    local_88 = local_78;
    local_80 = (int)uStack_70 + -1;
    if ((int)uStack_70 == 0) {
      local_80 = 0;
    }
    local_98 = 0;
    uVar4 = FUN_1415d54ec(&local_88,puVar6,0,uVar5);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293f8b0 FUN_14293f8b0 body=760 status=ok
// SIG undefined FUN_14293f8b0(void)

/* WARNING: Removing unreachable block (ram,0x00014293fb30) */

ulonglong FUN_14293f8b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  longlong local_110;
  undefined2 *local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8[0] = 0x1800000001;
  local_b8 = 0;
  uStack_b0 = 0;
  local_110 = param_1;
  FUN_146b447fa(param_2,local_c8);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar9 = (undefined7)((ulonglong)local_c8 >> 8);
    if ((longlong)(int)uStack_b0 == 0) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else {
      lVar13 = (longlong)(int)uStack_b0 << 5;
      uVar8 = CONCAT71(uVar9,1);
      lVar10 = local_b8;
      uVar3 = local_d8;
      uVar4 = local_d0;
      do {
        local_d0 = uVar4;
        local_d8 = uVar3;
        local_a8 = 0x4200000003;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        local_8c = 0x100000;
        local_88 = 0x100;
        uStack_70 = 0;
        uStack_6c = 0;
        local_80 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined8 *)(lVar10 + 0x10));
        FUN_146b46ec3(param_2,&local_a8);
        local_e8 = (undefined2 *)0x0;
        uStack_e0 = 0;
        FUN_1407c8a86(&uStack_78,0x14,&local_e8);
        puVar12 = &DAT_149dfb77a;
        if ((int)uStack_e0 != 0) {
          puVar12 = local_e8;
        }
        local_f8 = (undefined2 *)0x0;
        uStack_f0 = 0;
        FUN_1407c8a86(&local_80,8,&local_f8);
        puVar6 = &DAT_149dfb77a;
        if ((int)uStack_f0 != 0) {
          puVar6 = local_f8;
        }
        local_108 = (undefined2 *)0x0;
        uStack_100 = 0;
        FUN_1407c869a(lVar10,&local_108,0);
        puVar11 = &DAT_149dfb77a;
        if ((int)uStack_100 != 0) {
          puVar11 = local_108;
        }
        local_118 = puVar12;
        FUN_140002266(&local_d8,L"%s\t%s\t%s",puVar11,puVar6);
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (*(char *)(local_110 + 0x28) == '\x01') {
          FUN_140002266(&local_e8,&DAT_149f311ea,*(undefined4 *)(lVar10 + 0x18));
          iVar2 = (int)uStack_e0 + -1;
          if ((int)uStack_e0 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(&local_d8,local_e8,iVar2);
          if (local_e8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar7 = param_3[1];
        uVar5 = (int)lVar7 + 1;
        *(uint *)(param_3 + 1) = uVar5;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar5) {
          FUN_1447a1bd6(param_3);
        }
        lVar1 = *param_3;
        lVar7 = (longlong)(int)lVar7 * 0x10;
        *(undefined8 *)(lVar1 + lVar7) = 0;
        *(undefined8 *)(lVar1 + lVar7) = local_d8;
        local_d8 = 0;
        uVar3 = local_d8;
        *(undefined4 *)(lVar1 + 8 + lVar7) = (undefined4)local_d0;
        *(undefined4 *)(lVar1 + 0xc + lVar7) = local_d0._4_4_;
        local_d0 = 0;
        uVar4 = local_d0;
        local_d0 = 0;
        local_d8 = 0;
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
          uVar8 = 0;
          break;
        }
        uVar8 = CONCAT71((int7)(uVar8 >> 8),
                         (byte)uVar8 &
                         (((local_a0._4_4_ != 0 || (int)local_a0 != 0) || (int)uStack_98 != 0) ||
                         uStack_98._4_4_ != 0));
        lVar10 = lVar10 + 0x20;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
  }
  else {
    uVar8 = 0;
  }
  if (local_b8 != 0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293fbaa FUN_14293fbaa body=1124 status=ok
// SIG undefined FUN_14293fbaa(void)

/* WARNING: Removing unreachable block (ram,0x00014293ffa7) */

ulonglong FUN_14293fbaa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_118 [40];
  longlong local_f0;
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146b61b6c(&local_a0);
  pplVar5 = (longlong **)0x0;
  if (local_a0 == (undefined8 *)0x0) goto LAB_14293fbec;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_146b4422a(&local_98);
  pplVar6 = (longlong **)(ulonglong)((int)uStack_90 - 1);
  if ((int)uStack_90 == 0) {
    pplVar6 = pplVar5;
  }
  iVar9 = *(int *)(param_1 + 0x38);
  iVar2 = (int)pplVar6 + 1 + (uint)((longlong)iVar9 == 0);
  local_c8 = (undefined2 *)0x0;
  _Src = *(void **)(param_1 + 0x30);
  local_c0 = iVar9;
  if (iVar2 == 0 && iVar9 == 0) {
    local_bc = 0;
  }
  else {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2 + iVar9);
    }
    FUN_1446dd670(&local_c8,iVar2 + iVar9,0);
    if (iVar9 != 0) {
      memcpy(local_c8,_Src,(longlong)iVar9 * 2);
    }
  }
  FUN_1401aebe8(&local_c8,local_98,pplVar6);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  puVar10 = local_c8;
  if (local_c0 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  pplVar5 = &local_d8;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x90))
            (*(longlong **)(param_1 + 0x40),pplVar5,puVar10,0);
  if ((longlong)(int)uStack_d0 == 0) {
LAB_14293fd01:
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_14293f5ca(local_a0,param_3,&local_98,*(undefined1 *)(param_1 + 0x28));
    lVar12 = local_b8;
    lVar13 = (longlong)(int)uStack_b0;
    if (lVar13 != 0) {
      lVar11 = 0;
      pplVar5 = &local_98;
      do {
        FUN_14293f5ca(*(undefined8 *)(lVar12 + lVar11),param_3,pplVar5,
                      *(undefined1 *)(param_1 + 0x28));
        lVar11 = lVar11 + 8;
      } while (lVar13 * 8 != lVar11);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_98);
    pplVar5 = (longlong **)CONCAT71((int7)((ulonglong)pplVar5 >> 8),1);
  }
  else {
    plVar7 = local_d8 + (longlong)(int)uStack_d0 * 2;
    pplVar5 = (longlong **)CONCAT71((int7)((ulonglong)pplVar5 >> 8),1);
    plVar14 = local_d8;
    do {
      while( true ) {
        puVar10 = &DAT_149dfb77a;
        if ((int)plVar14[1] != 0) {
          puVar10 = (undefined2 *)*plVar14;
        }
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))
                  (*(longlong **)(param_1 + 0x40),&local_e0,puVar10,0);
        if (local_e0 != (longlong *)0x0) break;
        plVar14 = plVar14 + 2;
        pplVar5 = (longlong **)0x0;
        if (plVar14 == plVar7) goto LAB_14293fda9;
      }
      FUN_146b61b6c(&local_98);
      uVar1 = uStack_b0;
      lVar12 = (longlong)(int)uStack_b0;
      uVar3 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
      if (uStack_b0._4_4_ < uVar3) {
        FUN_146b7caf2(&local_b8,uVar1 & 0xffffffff);
      }
      *(longlong **)(local_b8 + lVar12 * 8) = local_98;
      if (local_98 == (longlong *)0x0) {
        pplVar5 = (longlong **)0x0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0x38) + (uint)(*(int *)(param_1 + 0x38) == 0);
        iVar9 = (int)plVar14[1];
        puVar10 = &DAT_149dfb77a;
        if (iVar9 != 0) {
          puVar10 = (undefined2 *)*plVar14;
        }
        uVar8 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar8 = 0;
        }
        if ((int)uVar8 <= (int)uVar3) {
          uVar3 = uVar8;
        }
        if ((int)uVar3 < 1) {
          uVar3 = 0;
        }
        FUN_14006620a(&local_98,puVar10 + uVar3,uVar8 - uVar3);
        if (*(char *)(param_1 + 0x28) == '\x01') {
          uVar4 = (**(code **)(*local_e0 + 0x30))();
          FUN_140002266(&local_f0,L"\t%llu",uVar4);
          iVar9 = local_e8 + -1;
          if (local_e8 == 0) {
            iVar9 = 0;
          }
          FUN_1400020e8(&local_98,local_f0,iVar9);
          if (local_f0 != 0) {
            FUN_1400020a8();
          }
        }
        lVar12 = param_3[1];
        uVar3 = (int)lVar12 + 1;
        *(uint *)(param_3 + 1) = uVar3;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
          FUN_1447a1bd6(param_3);
        }
        lVar13 = *param_3;
        lVar12 = (longlong)(int)lVar12 * 0x10;
        *(undefined8 *)(lVar13 + lVar12) = 0;
        *(longlong **)(lVar13 + lVar12) = local_98;
        local_98 = (longlong *)0x0;
        *(int *)(lVar13 + 8 + lVar12) = (int)uStack_90;
        *(undefined4 *)(lVar13 + 0xc + lVar12) = uStack_90._4_4_;
        uStack_90 = 0;
      }
      if (local_e0 != (longlong *)0x0) {
        (**(code **)*local_e0)(local_e0,1);
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar7);
    if ((char)pplVar5 != '\0') goto LAB_14293fd01;
    pplVar5 = (longlong **)0x0;
  }
LAB_14293fda9:
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b7cabd(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,1);
  }
LAB_14293fbec:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return (ulonglong)pplVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142940010 FUN_142940010 body=122 status=ok
// SIG undefined FUN_142940010(void)

undefined8 * FUN_142940010(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14294008a FUN_14294008a body=2026 status=ok
// SIG undefined FUN_14294008a(void)

bool FUN_14294008a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  LARGE_INTEGER LVar7;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  LARGE_INTEGER LVar10;
  byte bVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined ***pppuVar18;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined2 *local_170;
  int local_168;
  float local_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined1 local_150;
  LARGE_INTEGER local_148;
  longlong *plStack_140;
  undefined1 local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  LARGE_INTEGER local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined ***local_d8;
  undefined **local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_141054386();
  plVar13 = *(longlong **)(param_1 + 0xb0);
  FUN_140056680(&local_e8,L"Generation: Total Time");
  local_178 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,&local_e8,0,0);
  if (local_e8.QuadPart != 0) {
    FUN_1400020a8();
  }
  plVar13 = *(longlong **)(param_1 + 0xb0);
  FUN_140056680(&local_e8,L"Generation: Data stream speed");
  plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,&local_e8,2,0);
  if (local_e8.QuadPart != 0) {
    FUN_1400020a8();
  }
  QueryPerformanceCounter(&local_e8);
  LVar9 = local_e8;
  uVar12 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                     (*(longlong **)(param_1 + 0xa0),param_1 + 8,param_1 + 0x50,param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc0) = uVar12;
  uVar12 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                     (*(longlong **)(param_1 + 0xa0),param_1 + 0x18,param_1 + 0x50,param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc4) = uVar12;
  local_128 = 0;
  local_118 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_149f33780;
  local_e8.QuadPart = (LONGLONG)FUN_14294eb98;
  lStack_c0 = param_1;
  FUN_146b7d80e(&local_148);
  plVar8 = plStack_140;
  LVar7 = local_148;
  local_138 = 1;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar15 = FUN_14118da1c();
      bVar11 = FUN_14054d46e(uVar15,L"nothreading");
      DAT_14c83f0f8 = bVar11 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_146b7d76b(&local_148,&local_e8);
      goto LAB_1429403ba;
    }
  }
  FUN_145c3b830(&local_160);
  puVar14 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  local_150 = 1;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
  *puVar14 = &PTR_FUN_149f337c0;
  ((LARGE_INTEGER *)(puVar14 + 2))->QuadPart = (LONGLONG)local_e8;
  puVar14[4] = local_d8;
  local_d8 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 8) = local_b8;
  *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_b4;
  *(undefined4 *)(puVar14 + 9) = uStack_b0;
  *(undefined4 *)((longlong)puVar14 + 0x4c) = uStack_ac;
  puVar14[6] = local_c8;
  puVar14[7] = lStack_c0;
  if ((code *)local_e8.QuadPart != (code *)0x0) {
    local_e8.QuadPart = 0;
  }
  ((LARGE_INTEGER *)(puVar14 + 10))->QuadPart = (LONGLONG)local_148;
  puVar14[0xb] = plStack_140;
  local_148.QuadPart = 0;
  plStack_140 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0xc) = local_138;
  puVar14[0xd] = CONCAT44(uStack_15c,local_160);
  puVar14[0xe] = local_158;
  uVar12 = FUN_146268020();
  FUN_140002266(&local_170,L"TAsync %d",uVar12);
  puVar17 = local_170;
  if (local_168 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  local_180 = 0;
  local_188 = (undefined8 *)0xffffffffffffffff;
  uVar15 = FUN_1411b1052(puVar14,puVar17,0,0);
  *(undefined8 *)(CONCAT44(uStack_15c,local_160) + 0x80) = uVar15;
  FUN_140b576f0();
  if (local_170 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_158 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
LAB_1429403ba:
  plVar16 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_140 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((code *)local_e8.QuadPart != (code *)0x0) {
    pppuVar18 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar18 = local_d8;
    }
    (*(code *)(*pppuVar18)[2])(pppuVar18);
  }
  if (local_128 != 0) {
    plVar16 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar16 = local_108;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  QueryPerformanceCounter(&local_e8);
  LVar10 = local_e8;
  dVar5 = DAT_14c83f420;
  local_160 = 10.0;
  local_188 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"BuildPatchServices",L"StatsLoggerTimeSeconds",&local_160);
  if (60.0 <= local_160) {
    local_160 = 60.0;
  }
  if (local_160 <= 1.0) {
    local_160 = 1.0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    dVar4 = 0.0;
    dVar5 = (double)LVar10.QuadPart * dVar5 + 16777216.0;
    do {
      DAT_14c872be0 = DAT_14c872be0 + 1;
      (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      uVar15 = FUN_1401cb356();
      FUN_142746dae(uVar15,(float)dVar4);
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_1400e4168(&DAT_14c872ee0,0);
      QueryPerformanceCounter(&local_e8);
      LOCK();
      *local_178 = local_e8.QuadPart - (longlong)LVar9;
      UNLOCK();
      dVar4 = (double)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                                (*(longlong **)(param_1 + 0x88),0x7f7fffff);
      LOCK();
      *plVar13 = (longlong)dVar4;
      UNLOCK();
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))
                (*(longlong **)(param_1 + 0xb0),local_160);
      QueryPerformanceCounter(&local_e8);
      dVar4 = (dVar5 - ((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0)) +
              0.009999999776482582;
      dVar6 = 0.0;
      if (0.0 <= dVar4) {
        dVar6 = dVar4;
      }
      FUN_14000f986((float)dVar6);
      QueryPerformanceCounter(&local_e8);
      dVar6 = (double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0;
      dVar4 = dVar6 - dVar5;
      dVar5 = dVar6;
    } while (*(int *)(param_1 + 0xb8) != 0);
  }
  while ((*(byte *)(LVar7.QuadPart + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(LVar7.QuadPart + 0x70) + 0x20))
              (*(longlong **)(LVar7.QuadPart + 0x70),0xffffffff,0);
  }
  local_e8.QuadPart = 0;
  iVar3 = *(int *)(LVar7.QuadPart + 0x88);
  uVar15 = *(undefined8 *)(LVar7.QuadPart + 0x80);
  local_e0 = iVar3;
  if (iVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_140b856de(&local_e8,iVar3,0);
    FUN_140b8566a(local_e8.QuadPart,uVar15,iVar3);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_1400e4168(&DAT_14c872ee0,0);
  QueryPerformanceCounter(&local_148);
  LOCK();
  *local_178 = local_148.QuadPart - (longlong)LVar9;
  UNLOCK();
  dVar5 = (double)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                            (*(longlong **)(param_1 + 0x88),0x7f7fffff);
  LOCK();
  *plVar13 = (longlong)dVar5;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),0);
  iVar3 = *(int *)(param_1 + 0xbc);
  FUN_1447a1747(local_e8.QuadPart,local_e0);
  if (local_e8.QuadPart != 0) {
    FUN_1400020a8();
  }
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 != 0;
}



// FUNCTION 142940876 FUN_142940876 body=16092 status=ok
// SIG undefined FUN_142940876(void)

/* WARNING: Removing unreachable block (ram,0x0001429440da) */
/* WARNING: Removing unreachable block (ram,0x00014294365f) */
/* WARNING: Removing unreachable block (ram,0x000142941097) */
/* WARNING: Removing unreachable block (ram,0x000142940e23) */
/* WARNING: Removing unreachable block (ram,0x000142940ee4) */
/* WARNING: Removing unreachable block (ram,0x000142941127) */
/* WARNING: Removing unreachable block (ram,0x000142944053) */
/* WARNING: Removing unreachable block (ram,0x000142944247) */

longlong * FUN_142940876(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  LARGE_INTEGER LVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  LARGE_INTEGER *pLVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint *puVar30;
  longlong lVar31;
  LARGE_INTEGER LVar32;
  int iVar33;
  undefined8 uVar34;
  undefined2 *puVar35;
  longlong lVar36;
  LARGE_INTEGER LVar37;
  int iVar38;
  longlong lVar39;
  void *pvVar40;
  ulonglong uVar41;
  longlong lVar42;
  undefined2 *puVar43;
  ulonglong uVar44;
  size_t sVar45;
  longlong lVar46;
  uint uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_e68 [32];
  LARGE_INTEGER *local_e48;
  undefined8 local_e40;
  longlong local_e38;
  byte local_e29;
  LARGE_INTEGER local_e28;
  LARGE_INTEGER local_e20;
  byte local_e11;
  LARGE_INTEGER local_e10;
  ulonglong local_e08;
  longlong *local_e00;
  longlong *local_df8;
  undefined8 local_df0;
  longlong *local_de8;
  LARGE_INTEGER *local_de0;
  longlong *local_dd8;
  ulonglong local_dd0;
  ulonglong local_dc8;
  longlong *local_dc0;
  ulonglong local_db8;
  longlong *local_db0;
  longlong *local_da8;
  longlong *local_da0;
  longlong local_d98;
  undefined4 local_d90;
  int local_d8c;
  undefined8 *local_d88;
  longlong local_d80;
  undefined8 *local_d78;
  undefined8 *local_d70;
  undefined8 *local_d68;
  longlong *local_d60;
  wchar_t *local_d58;
  wchar_t *local_d50;
  longlong *local_d48;
  longlong *local_d40;
  LARGE_INTEGER local_d38;
  int local_d30;
  void *local_d28;
  int local_d20;
  undefined4 local_d1c;
  void *local_d18;
  int local_d10;
  undefined4 local_d0c;
  ulonglong local_d08;
  undefined8 local_d00;
  undefined2 *local_cf8;
  int local_cf0;
  void *local_ce8;
  int local_ce0;
  undefined4 local_cdc;
  void *local_cd8;
  int local_cd0;
  undefined4 local_ccc;
  undefined1 local_cc8 [16];
  void *local_cb8;
  uint local_cb0;
  undefined4 local_cac;
  undefined1 local_ca8 [16];
  void *local_c98;
  int local_c90;
  undefined4 local_c8c;
  undefined8 local_c88;
  undefined8 uStack_c80;
  void *local_c78;
  int local_c70;
  undefined4 local_c6c;
  int local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  void *local_c50;
  int local_c48;
  undefined4 local_c44;
  int local_c40;
  void *local_c38;
  ulonglong local_c30;
  longlong lStack_c28;
  longlong local_c20;
  longlong *local_c18;
  longlong *local_c10;
  undefined8 local_c08;
  LARGE_INTEGER local_c00;
  void *local_bf8;
  ulonglong local_bf0;
  longlong lStack_be8;
  longlong local_be0;
  undefined **local_bd8;
  longlong local_bd0;
  longlong *local_ba8;
  ulonglong uStack_ba0;
  longlong local_b98;
  longlong lStack_b90;
  LARGE_INTEGER local_b88;
  int local_b80;
  longlong local_b78;
  longlong lStack_b70;
  longlong *local_b68;
  undefined8 uStack_b60;
  undefined **local_b58;
  longlong *plStack_b50;
  void *local_b28;
  ulonglong local_b20;
  longlong lStack_b18;
  longlong local_b10;
  longlong *local_b08;
  longlong *local_b00;
  undefined8 local_af8;
  LARGE_INTEGER local_af0;
  void *local_ae8;
  ulonglong local_ae0;
  longlong lStack_ad8;
  longlong local_ad0;
  void *local_ac8;
  ulonglong local_ac0;
  longlong lStack_ab8;
  longlong local_ab0;
  longlong *local_aa8;
  longlong *local_aa0;
  undefined8 local_a98;
  LARGE_INTEGER local_a90;
  void *local_a88;
  ulonglong local_a80;
  longlong lStack_a78;
  longlong local_a70;
  longlong local_a68;
  longlong local_a60;
  longlong local_a58;
  longlong local_a50;
  void *local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 *local_a28;
  undefined8 local_a20;
  undefined8 *local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 *local_a00;
  undefined8 local_9f8;
  undefined8 *local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  void *local_9d8;
  undefined8 uStack_9d0;
  LARGE_INTEGER *local_9c8;
  undefined1 *local_9c0;
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  LARGE_INTEGER *local_980;
  undefined1 *local_978;
  undefined1 local_970 [16];
  undefined2 *local_960;
  int local_958;
  undefined4 local_954;
  LARGE_INTEGER local_950;
  longlong *local_948;
  LARGE_INTEGER local_940;
  longlong *local_938;
  undefined2 local_930 [2];
  undefined1 *local_92c;
  undefined8 uStack_924;
  undefined4 local_91c;
  LARGE_INTEGER local_918;
  longlong *plStack_910;
  void *local_908 [2];
  undefined8 local_8f8;
  undefined4 local_8f0;
  undefined8 local_8ec;
  undefined4 local_8e4;
  longlong local_8d8;
  undefined4 local_8d0;
  void *local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  LARGE_INTEGER local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_888;
  undefined4 local_880;
  undefined8 local_87c;
  undefined4 local_874;
  longlong local_868;
  undefined4 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_838;
  undefined4 local_830;
  undefined8 local_82c;
  undefined4 local_824;
  undefined8 local_818;
  undefined4 local_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 local_7dc;
  undefined4 local_7d4;
  undefined8 local_7c8;
  undefined4 local_7c0;
  longlong local_7b8;
  ulonglong uStack_7b0;
  undefined8 local_798;
  undefined4 local_790;
  undefined8 local_78c;
  undefined4 local_784;
  longlong local_778;
  undefined4 local_770;
  LARGE_INTEGER local_718;
  undefined8 uStack_710;
  uint local_708 [4];
  uint *local_6f8;
  uint local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  longlong local_6d8;
  undefined4 local_6d0;
  longlong local_6c0 [10];
  longlong local_670 [22];
  undefined1 local_5c0 [8];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_598;
  undefined4 local_590;
  undefined8 local_58c;
  undefined4 local_584;
  longlong local_578;
  undefined4 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_53c;
  undefined4 local_534;
  longlong local_528;
  undefined4 local_520;
  undefined1 local_510 [8];
  undefined1 local_508 [224];
  longlong local_428;
  uint local_420;
  uint local_41c;
  ulonglong local_418;
  int local_410;
  undefined1 auStack_408 [432];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  _RTL_CRITICAL_SECTION local_1b0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  _RTL_CRITICAL_SECTION local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  _RTL_CRITICAL_SECTION local_130;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_e68;
  local_930[0] = 0x100;
  local_92c = &DAT_100000004;
  uStack_924 = 0x100000144;
  local_91c = 1;
  lVar36 = *(longlong *)(param_1 + 0xf8);
  while ((*(byte *)(lVar36 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar36 + 0x70) + 0x20))(*(longlong **)(lVar36 + 0x70),0xffffffff);
  }
  local_940 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar36 + 0x80))->QuadPart;
  local_938 = *(longlong **)(lVar36 + 0x88);
  if (local_938 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_938 + 1) = (int)local_938[1] + 1;
    UNLOCK();
  }
  lVar36 = *(longlong *)(param_1 + 0x108);
  while ((*(byte *)(lVar36 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar36 + 0x70) + 0x20))(*(longlong **)(lVar36 + 0x70),0xffffffff,0)
    ;
  }
  local_950 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar36 + 0x80))->QuadPart;
  local_948 = *(longlong **)(lVar36 + 0x88);
  if (local_948 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_948 + 1) = (int)local_948[1] + 1;
    UNLOCK();
  }
  *param_2 = 0;
  param_2[1] = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0xbc) = 1;
  UNLOCK();
  if ((longlong *)local_940.QuadPart == (longlong *)0x0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xbc) = 0;
    UNLOCK();
  }
  if ((longlong *)local_950.QuadPart == (longlong *)0x0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xbc) = 0;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0xbc) == 0) goto LAB_142940a03;
  local_e38 = param_1;
  InitializeCriticalSection(&local_130);
  SetCriticalSectionSpinCount(&local_130,4000);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  InitializeCriticalSection(&local_170);
  SetCriticalSectionSpinCount(&local_170,4000);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  InitializeCriticalSection(&local_1b0);
  SetCriticalSectionSpinCount(&local_1b0,4000);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  FUN_146b341de(&local_130);
  LVar37 = local_940;
  local_1e8 = 0;
  local_1e0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1dc = 0xffffffff00000080;
  local_1d4 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_238 = 0;
  local_230 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  (**(code **)(*(longlong *)local_940 + 0x1e8))(local_940.QuadPart);
  LVar32 = local_950;
  (**(code **)(*(longlong *)local_950 + 0x1e8))(local_950.QuadPart,&local_258);
  iVar38 = *(int *)(LVar37.QuadPart + 8);
  local_d50 = L"ChunksV4";
  local_d58 = L"ChunksV4";
  if (iVar38 < 0xf) {
    local_d58 = L"ChunksV3";
  }
  if (iVar38 < 6) {
    local_d58 = L"ChunksV2";
  }
  if (iVar38 < 3) {
    local_d58 = L"Chunks";
  }
  iVar19 = *(int *)(LVar32.QuadPart + 8);
  if (iVar19 < 0xf) {
    local_d50 = L"ChunksV3";
  }
  if (iVar19 < 6) {
    local_d50 = L"ChunksV2";
  }
  if (iVar19 < 3) {
    local_d50 = L"Chunks";
  }
  if ((iVar19 < iVar38) && (local_d58 != local_d50)) {
    LOCK();
    *(undefined4 *)(local_e38 + 0xbc) = 0;
    UNLOCK();
    iVar19 = *(int *)(local_950.QuadPart + 8);
    LVar32 = local_950;
  }
  uVar20 = 0x100000;
  if (0xf < iVar19) {
    uVar20 = *(undefined4 *)(local_e38 + 0x3c);
  }
  local_df8 = param_2;
  FUN_146b37170(local_510);
  LVar37 = local_940;
  FUN_146b2f100(&local_718,local_940.QuadPart,LVar32.QuadPart);
  iVar38 = (int)uStack_710 + -1;
  if ((int)uStack_710 == 0) {
    iVar38 = 0;
  }
  iVar19 = *(int *)(local_e38 + 0x30);
  iVar16 = iVar38 + 1 + (uint)((longlong)iVar19 == 0);
  local_960 = (undefined2 *)0x0;
  pvVar40 = *(void **)(local_e38 + 0x28);
  local_958 = iVar19;
  if (iVar16 == 0 && iVar19 == 0) {
    local_954 = 0;
  }
  else {
    iVar33 = iVar16 + iVar19;
    if (iVar16 < 0) goto LAB_14294396b;
    FUN_1446dd670(&local_960,iVar33,0);
    if (iVar19 != 0) {
      memcpy(local_960,pvVar40,(longlong)iVar19 * 2);
    }
  }
  FUN_1401aebe8(&local_960,local_718.QuadPart,iVar38);
  if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
  param_2 = local_df8;
  puVar43 = local_960;
  if (local_958 == 0) {
    puVar43 = &DAT_149dfb77a;
  }
  bVar14 = (**(code **)(**(longlong **)(local_e38 + 0x70) + 0x80))
                     (*(longlong **)(local_e38 + 0x70),puVar43);
  if (bVar14 != 0) {
    cVar15 = FUN_146b37fc0(local_510,&local_960);
    if (cVar15 == '\0') {
      LOCK();
      *(undefined4 *)(local_e38 + 0xbc) = 0;
      UNLOCK();
      LVar32 = local_950;
      LVar37 = local_940;
    }
    else {
      FUN_140002266(&local_718,
                    L"** Chunk delta optimisation already completed for provided manifests. **");
      iVar38 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar38 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
        FUN_1447a1bd6(param_2,iVar38);
      }
      lVar36 = *param_2;
      lVar39 = (longlong)iVar38 * 0x10;
      *(undefined8 *)(lVar36 + lVar39) = 0;
      *(LARGE_INTEGER *)(lVar36 + lVar39) = local_718;
      *(int *)(lVar36 + 8 + lVar39) = (int)uStack_710;
      *(undefined4 *)(lVar36 + 0xc + lVar39) = uStack_710._4_4_;
      uStack_710 = (longlong *)0x0;
      local_718.QuadPart = 0;
      puVar43 = local_960;
      if (local_958 == 0) {
        puVar43 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_718,L"Loaded optimised delta file %s",puVar43);
      iVar38 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar38 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
        FUN_1447a1bd6(param_2,iVar38);
      }
      lVar36 = *param_2;
      lVar39 = (longlong)iVar38 * 0x10;
      *(undefined8 *)(lVar36 + lVar39) = 0;
      ((LARGE_INTEGER *)(lVar36 + lVar39))->QuadPart = (LONGLONG)local_718;
      local_718.QuadPart = 0;
      *(int *)(lVar36 + 8 + lVar39) = (int)uStack_710;
      *(undefined4 *)(lVar36 + 0xc + lVar39) = uStack_710._4_4_;
      uStack_710 = (longlong *)0x0;
    }
  }
  local_548 = 0;
  local_540 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_53c = 0xffffffff00000080;
  local_534 = 0;
  local_528 = 0;
  local_520 = 0;
  local_598 = 0;
  local_590 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_58c = 0xffffffff00000080;
  local_584 = 0;
  local_578 = 0;
  local_570 = 0;
  (**(code **)(*(longlong *)LVar37 + 0xc0))(LVar37.QuadPart);
  (**(code **)(*(longlong *)LVar32 + 0xc0))(LVar32.QuadPart,&local_5b8);
  plVar26 = local_938;
  if (local_938 == (longlong *)0x0) {
    uStack_710 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_938 + 1) = (int)local_938[1] + 1;
    UNLOCK();
    uStack_710 = local_938;
    LOCK();
    *(int *)(local_938 + 1) = (int)local_938[1] + 1;
    UNLOCK();
  }
  local_718 = LVar37;
  uVar21 = (**(code **)(*(longlong *)LVar32 + 0x60))
                     (LVar32.QuadPart,&local_5b8,&local_718,&local_568);
  plVar25 = uStack_710;
  if (uStack_710 != (longlong *)0x0) {
    LOCK();
    plVar27 = uStack_710 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
      (**(code **)*uStack_710)(uStack_710);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar26 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  uVar44 = *(ulonglong *)(local_e38 + 0x40);
  if (uVar44 <= uVar21 && bVar14 == 0) {
    FUN_140002266(&local_718,
                  L"** Aborting delta optimisation due to original delta over threshold. **");
    iVar38 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar38 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
      FUN_1447a1bd6(param_2,iVar38);
    }
    lVar36 = *param_2;
    lVar39 = (longlong)iVar38 * 0x10;
    *(undefined8 *)(lVar36 + lVar39) = 0;
    *(LARGE_INTEGER *)(lVar36 + lVar39) = local_718;
    *(int *)(lVar36 + 8 + lVar39) = (int)uStack_710;
    *(undefined4 *)(lVar36 + 0xc + lVar39) = uStack_710._4_4_;
    uStack_710 = (longlong *)0x0;
    local_718.QuadPart = 0;
    FUN_140002266(&local_718,L"%llu >= %llu",uVar21,*(undefined8 *)(local_e38 + 0x40));
    iVar38 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar38 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
      FUN_1447a1bd6(param_2,iVar38);
    }
    lVar36 = *param_2;
    lVar39 = (longlong)iVar38 * 0x10;
    *(undefined8 *)(lVar36 + lVar39) = 0;
    ((LARGE_INTEGER *)(lVar36 + lVar39))->QuadPart = (LONGLONG)local_718;
    local_718.QuadPart = 0;
    *(int *)(lVar36 + 8 + lVar39) = (int)uStack_710;
    *(undefined4 *)(lVar36 + 0xc + lVar39) = uStack_710._4_4_;
    uStack_710 = (longlong *)0x0;
  }
  local_e29 = (*(int *)(local_e38 + 0xbc) != 0 && uVar21 < uVar44) & ~bVar14;
  param_1 = local_e38;
  local_e11 = bVar14;
  local_db8 = uVar21;
  if (local_e29 == 1) {
    uVar34 = *(undefined8 *)(local_e38 + 0x70);
    local_d88 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_d88 = &PTR_FUN_149f2ed90;
    local_d88[1] = uVar34;
    *(undefined4 *)(local_d88 + 2) = 0x12;
    local_de8 = (longlong *)FUN_14001cc68(8,0x10);
    plVar26 = local_938;
    *local_de8 = (longlong)&PTR_FUN_149f33110;
    local_998 = 0;
    uStack_990 = 0;
    local_9a8 = 0;
    uStack_9a0 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_808 = 0;
    uStack_800 = 0;
    local_7dc = 0xffffffff00000080;
    local_7d4 = 0;
    local_7c8 = 0;
    local_7c0 = 0;
    local_e08 = CONCAT44(local_e08._4_4_,uVar20);
    if (local_938 == (longlong *)0x0) {
      uStack_8a0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_938 + 1) = (int)local_938[1] + 1;
      UNLOCK();
      uStack_8a0 = local_938;
      LOCK();
      *(int *)(local_938 + 1) = (int)local_938[1] + 1;
      UNLOCK();
    }
    local_8a8 = local_940;
    local_e48 = (LARGE_INTEGER *)&local_998;
    FUN_146b436cc(&local_7b8,&local_8a8,&local_808,&local_9a8);
    FUN_146b527a0(&local_718,&local_7b8);
    local_980 = &local_718;
    local_978 = local_5c0;
    FUN_146b632e8(local_970);
    puVar22 = (undefined8 *)FUN_146b34196(local_970);
    FUN_146b5263a(&local_718);
    FUN_146b4388a(&local_7b8);
    plVar25 = uStack_8a0;
    if (uStack_8a0 != (longlong *)0x0) {
      LOCK();
      plVar27 = uStack_8a0 + 1;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)*plVar27 == 0) {
        (**(code **)*uStack_8a0)(uStack_8a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar25 = plVar26 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
    plVar26 = local_948;
    local_9d8 = (void *)0x0;
    uStack_9d0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_838 = 0;
    local_830 = 0;
    local_858 = 0;
    uStack_850 = 0;
    local_82c = 0xffffffff00000080;
    local_824 = 0;
    local_818 = 0;
    local_810 = 0;
    if (local_948 == (longlong *)0x0) {
      uStack_8a0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_948 + 1) = (int)local_948[1] + 1;
      UNLOCK();
      uStack_8a0 = local_948;
      LOCK();
      *(int *)(local_948 + 1) = (int)local_948[1] + 1;
      UNLOCK();
    }
    local_8a8 = local_950;
    local_e48 = (LARGE_INTEGER *)&local_9d8;
    FUN_146b436cc(&local_7b8,&local_8a8,&local_858,&local_9e8);
    FUN_146b527a0(&local_718,&local_7b8);
    local_9c8 = &local_718;
    local_9c0 = local_5c0;
    FUN_146b632e8(local_9b8);
    puVar23 = (undefined8 *)FUN_146b34196(local_9b8);
    FUN_146b5263a(&local_718);
    FUN_146b4388a(&local_7b8);
    plVar25 = uStack_8a0;
    if (uStack_8a0 != (longlong *)0x0) {
      LOCK();
      plVar27 = uStack_8a0 + 1;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)*plVar27 == 0) {
        (**(code **)*uStack_8a0)(uStack_8a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    lVar36 = local_e38 + 0x28;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar25 = plVar26 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
    uVar34 = *(undefined8 *)(local_e38 + 0x70);
    uVar2 = *(undefined8 *)(local_e38 + 0xa0);
    uVar3 = *(undefined8 *)(local_e38 + 0xa8);
    local_db0 = (longlong *)FUN_14001cc68(0xf8,0x10);
    puVar28 = local_d88;
    local_a00 = local_d88;
    local_a10 = uVar34;
    local_a08 = uVar2;
    local_9f8 = uVar3;
    local_9f0 = puVar22;
    FUN_146b63344(local_db0,lVar36);
    local_da8 = (longlong *)FUN_14001cc68(0xf8,0x10);
    lVar39 = local_e38;
    local_a28 = puVar28;
    local_a38 = uVar34;
    local_a30 = uVar2;
    local_a20 = uVar3;
    local_a18 = puVar23;
    FUN_146b63344(local_da8,lVar36);
    iVar38 = *(int *)(lVar39 + 0x38);
    iVar33 = iVar38 * 0x21;
    local_a48 = (void *)0x0;
    uStack_a40 = 0;
    if (iVar33 < 0) {
LAB_14294396b:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar33);
    }
    if (iVar38 != 0) {
      FUN_144893a1c(&local_a48);
    }
    FUN_1461c8dd4(&local_208,&local_718,&local_258);
    FUN_146b63506(&local_a58,&local_940,&local_718);
    local_6d0 = 0;
    if (local_6d8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_718);
    FUN_1461c8dd4(&local_258,&local_718,&local_208);
    FUN_146b63506(&local_a68,&local_950,&local_718);
    local_6d0 = 0;
    if (local_6d8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_718);
    uVar21 = 0;
    for (lVar36 = local_a68; lVar36 != 0; lVar36 = *(longlong *)(lVar36 + 0x18)) {
      uVar21 = uVar21 + *(longlong *)(lVar36 + 8);
    }
    local_a88 = (void *)0x0;
    uVar18 = *(uint *)(lVar39 + 0x30);
    pvVar40 = *(void **)(lVar39 + 0x28);
    local_a80 = CONCAT44(local_a80._4_4_,uVar18);
    local_dc8 = (ulonglong)(uint)(iVar38 * 0x20);
    local_d70 = puVar23;
    local_d68 = puVar22;
    if ((longlong)(int)uVar18 == 0) {
      local_a80 = (ulonglong)uVar18;
    }
    else {
      FUN_1446dd670(&local_a88,uVar18,0);
      memcpy(local_a88,pvVar40,(longlong)(int)uVar18 * 2);
    }
    FUN_146b31318(&lStack_a78,&local_a58);
    LVar32 = local_940;
    lVar36 = local_e38;
    local_a98 = *(undefined8 *)(local_e38 + 0xb0);
    local_aa8 = local_de8;
    local_aa0 = local_db0;
    local_a90.s = local_940.s;
    local_ac8 = local_a88;
    local_a88 = (void *)0x0;
    local_ac0 = local_a80;
    lStack_ab8 = lStack_a78;
    local_a80 = 0;
    local_ab0 = local_a70;
    lStack_a78 = 0;
    local_a70 = 0;
    puVar22 = (undefined8 *)FUN_146b6362a();
    uVar20 = *(undefined4 *)(lVar36 + 0x38);
    uVar34 = *(undefined8 *)(lVar36 + 0xb0);
    pLVar24 = (LARGE_INTEGER *)FUN_14001cc68(0x2f0,0x10);
    local_e48 = (LARGE_INTEGER *)CONCAT44(local_e48._4_4_,uVar20);
    local_d78 = puVar22;
    FUN_146b671b0(pLVar24,puVar22,uVar34,LVar32.QuadPart);
    FUN_146b341de(&local_170);
    local_de0 = pLVar24;
    (**(code **)(pLVar24->QuadPart + 8))(pLVar24);
    FUN_146b3441a(&local_170);
    plVar26 = *(longlong **)(lVar36 + 0xb0);
    FUN_140056680(&local_718,L"BuildB: Scanner backlog");
    local_d40 = (longlong *)(**(code **)(*plVar26 + 8))(plVar26,&local_718,4,0);
    if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar26 = *(longlong **)(local_e38 + 0xb0);
    FUN_140056680(&local_718,L"BuildB: Scanner forks");
    local_d60 = (longlong *)(**(code **)(*plVar26 + 8))(plVar26,&local_718,4,0);
    if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar26 = *(longlong **)(local_e38 + 0xb0);
    FUN_140056680(&local_718,L"BuildB: Scanning time");
    local_dd8 = (longlong *)(**(code **)(*plVar26 + 8))(plVar26,&local_718,0,0);
    if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar26 = *(longlong **)(local_e38 + 0xb0);
    FUN_140056680(&local_718,L"BuildB: Progress");
    local_dc0 = (longlong *)(**(code **)(*plVar26 + 8))(plVar26,&local_718,3,0);
    if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_ae8 = (void *)0x0;
    uVar18 = *(uint *)(local_e38 + 0x30);
    pvVar40 = *(void **)(local_e38 + 0x28);
    local_ae0 = CONCAT44(local_ae0._4_4_,uVar18);
    if ((longlong)(int)uVar18 == 0) {
      local_ae0 = (ulonglong)uVar18;
    }
    else {
      FUN_1446dd670(&local_ae8,uVar18,0);
      memcpy(local_ae8,pvVar40,(longlong)(int)uVar18 * 2);
    }
    FUN_146b31318(&lStack_ad8,&local_a68);
    LVar37 = local_950;
    lVar36 = local_e38;
    local_af8 = *(undefined8 *)(local_e38 + 0xb0);
    local_b08 = local_de8;
    local_b00 = local_da8;
    local_af0.s = local_950.s;
    local_b28 = local_ae8;
    local_ae8 = (void *)0x0;
    local_b20 = local_ae0;
    lStack_b18 = lStack_ad8;
    local_ae0 = 0;
    local_b10 = local_ad0;
    lStack_ad8 = 0;
    local_ad0 = 0;
    plVar25 = (longlong *)FUN_146b6362a();
    FUN_146b341de(&local_1b0);
    FUN_146b636f0(&local_b58,LVar37.QuadPart);
    lVar39 = FUN_14001cc68(0x60,0x10);
    FUN_146b6384c(lVar39,LVar32.QuadPart,LVar37.QuadPart);
    iVar16 = *(int *)(lVar36 + 0x38) + -1;
    plVar26 = (longlong *)FUN_14001cc68(0x198);
    FUN_146b64270(plVar26);
    uVar44 = local_dc8;
    iVar19 = (int)local_dc8;
    local_b68 = (longlong *)0x0;
    uStack_b60 = 0;
    iVar38 = (uint)uStack_a40;
    uVar18 = uStack_a40._4_4_;
    local_d8c = iVar16;
    if ((int)(uint)uStack_a40 < 0) {
      uVar17 = -(uint)uStack_a40;
      uStack_a40 = (ulonglong)uStack_a40._4_4_ << 0x20;
      if (uVar18 - iVar38 < uVar17) {
        FUN_1447403be(&local_a48);
      }
    }
    else if ((uint)uStack_a40 != 0) {
      uStack_a40 = (ulonglong)uStack_a40._4_4_ << 0x20;
    }
    plVar27 = (longlong *)(**(code **)(local_de0->QuadPart + 0x28))();
    QueryPerformanceCounter(&local_718);
    local_e20.s = local_718.s;
    cVar15 = (**(code **)(*plVar25 + 0x10))(plVar25);
    local_e00 = plVar26;
    local_da0 = plVar25;
    local_d98 = lVar39;
    if ((cVar15 == '\0') || (0 < (int)uStack_b60)) {
      local_df0 = local_df0 & 0xffffffff00000000;
      uVar20 = 0;
      local_d80 = 0;
      dVar7 = 0.0;
      dVar6 = 0.0;
      local_e10.QuadPart = 0;
      local_d48 = plVar27;
      do {
        uVar18 = (uint)uStack_a40 - uVar20;
        cVar15 = (**(code **)(*plVar25 + 0x10))(plVar25);
        if ((cVar15 == '\0') && (uVar18 < (uint)uVar44)) {
          if (uVar18 == 0) {
            uVar41 = 0;
          }
          else {
            uVar41 = (ulonglong)uVar18;
            memcpy(local_a48,(void *)((longlong)local_a48 + (longlong)(int)uVar20),uVar41);
          }
          local_d80 = local_d80 + (int)uVar20;
          local_e28.QuadPart = local_e28.QuadPart & 0xffffffff00000000;
          FUN_140393c76(&local_a48,uVar18 + (uint)uVar44,0);
          iVar38 = (**(code **)(*plVar25 + 8))
                             (plVar25,uVar41 + (longlong)local_a48,uVar44 & 0xffffffff,1);
          FUN_140393c76(&local_a48,uVar18 + iVar38);
          uVar18 = (uint)uStack_a40;
        }
        else {
          local_e28.s.LowPart = uVar20;
        }
        if ((0 < (int)uStack_b60) &&
           (cVar15 = (**(code **)(**(longlong **)(*local_b68 + 0x30) + 8))
                               (*(longlong **)(*local_b68 + 0x30),&local_7b8), cVar15 != '\0')) {
          lVar36 = *local_b68;
          if (*(char *)(lVar36 + 0x39) == '\0') {
            dVar48 = (double)(**(code **)(**(longlong **)(lVar36 + 0x30) + 0x18))();
            dVar6 = dVar6 + dVar48;
            dVar7 = dVar7 + dVar48 * dVar48;
            local_e10.QuadPart = local_e10.QuadPart + 1;
          }
          (**(code **)(**(longlong **)(lVar36 + 0x30) + 0x10))
                    (*(longlong **)(lVar36 + 0x30),&local_718);
          plVar26 = local_e00;
          if ((longlong)(int)uStack_710 != 0) {
            plVar25 = (longlong *)((longlong)(int)uStack_710 * 0x20 + local_718.QuadPart);
            LVar32 = local_718;
            do {
              local_7b8 = 0;
              uStack_7b0 = 0;
              lVar39 = *(longlong *)LVar32 + *(longlong *)(lVar36 + 0x40);
              *(longlong *)LVar32 = lVar39;
              FUN_146b30ae2(&local_a68,lVar39,*(int *)(LVar32.QuadPart + 0x18),&local_7b8);
              local_b78 = local_7b8;
              lStack_b70 = uStack_7b0;
              (**(code **)(*plVar26 + 8))(plVar26,0,LVar32.QuadPart,&local_b78);
              LVar32.QuadPart = LVar32.QuadPart + 0x20;
            } while ((longlong *)LVar32.QuadPart != plVar25);
          }
          plVar25 = local_da0;
          lVar39 = (longlong)*(int *)(lVar36 + 8);
          if (*(char *)(lVar36 + 0x38) == '\0') {
            lVar39 = 0;
          }
          if (lVar39 + *(longlong *)(lVar36 + 0x40) != 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26,0);
          }
          FUN_146b7dc82(&local_b68);
          FUN_146b7dcd8(&local_b68);
          plVar27 = local_d48;
          uVar44 = local_dc8;
          if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_718.QuadPart = 0;
        uStack_710 = (longlong *)0x0;
        (**(code **)(*plVar26 + 0x18))(plVar26,&local_7b8,0,&local_718);
        lVar36 = local_d98;
        if (uStack_7b0 != 0) {
          if ((longlong)(int)uStack_710 != 0) {
            lVar39 = (longlong)(int)uStack_710 * 0x30;
            plVar26 = (longlong *)(local_718.QuadPart + 0x20);
            do {
              uVar20 = FUN_1447addd0(plVar26 + -3,0x10);
              iVar38 = FUN_146b7dd74(plVar27,uVar20,plVar26 + -3);
              lVar29 = 0;
              if (iVar38 != -1) {
                lVar29 = (longlong)iVar38 * 0x88 + *plVar27;
              }
              FUN_146b6398a(lVar36,lVar29 + 0x10);
              plVar26 = plVar26 + 6;
              lVar39 = lVar39 + -0x30;
            } while (lVar39 != 0);
          }
        }
        uVar47 = (uint)uVar44;
        uVar17 = uVar18;
        if (uVar47 < uVar18) {
          uVar17 = uVar47;
        }
        uVar20 = local_e28._0_4_;
        if ((((uVar47 <= uVar18) ||
             ((cVar15 = (**(code **)(*plVar25 + 0x10))(plVar25), plVar26 = local_e00, cVar15 != '\0'
              && (uVar18 != 0)))) && (plVar26 = local_e00, DAT_14c991e18 <= DAT_14c991e28)) &&
           (cVar15 = FUN_146b7ddf2(&local_b68), plVar26 = local_e00, cVar15 == '\0')) {
          puVar22 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[2] = &PTR_FUN_149f33270;
          puVar22[6] = 0;
          *(undefined2 *)(puVar22 + 7) = 0;
          puVar22[8] = 0;
          puVar22[3] = 0;
          puVar22[4] = 0;
          *(undefined4 *)(puVar22 + 5) = 0;
          *(uint *)(puVar22 + 1) = uVar17;
          if (uVar17 != 0) {
            pvVar40 = (void *)((longlong)local_a48 + (longlong)(int)uVar20);
            FUN_1447403be(puVar22,0);
            memcpy((void *)*puVar22,pvVar40,(longlong)(int)uVar17);
          }
          lVar36 = (int)uVar20 + local_d80;
          puVar22[8] = lVar36;
          local_8a8.QuadPart = 0;
          uStack_8a0 = (longlong *)0x0;
          FUN_146b30ae2(&local_a68,lVar36,uVar17,&local_8a8);
          pLVar24 = local_de0;
          FUN_146b62ad2(&local_b58,local_de0,&local_8a8,puVar22 + 2);
          uVar34 = *(undefined8 *)(local_e38 + 0xb0);
          uVar20 = *(undefined4 *)(local_e38 + 0x38);
          puVar28 = (undefined8 *)FUN_14001cc68(0x100,0x10);
          local_e48 = pLVar24;
          local_e40 = uVar34;
          FUN_146b68232(puVar28,uVar20,puVar22,puVar22 + 2);
          puVar23 = (undefined8 *)puVar22[6];
          if ((puVar23 != puVar28) && (puVar22[6] = puVar28, puVar23 != (undefined8 *)0x0)) {
            (**(code **)*puVar23)(puVar23,1);
          }
          plVar25 = local_da0;
          iVar38 = local_e28._0_4_ + uVar17;
          bVar14 = (**(code **)(*local_da0 + 0x10))(local_da0);
          uVar41 = uStack_b60;
          uVar44 = local_dc8;
          local_e28.s.LowPart = iVar38;
          bVar14 = (int)(uint)uStack_a40 <= iVar38 & bVar14;
          *(byte *)(puVar22 + 7) = bVar14;
          iVar38 = local_d8c;
          if (bVar14 != 0) {
            iVar38 = 0;
          }
          lVar36 = (longlong)(int)uStack_b60;
          uVar18 = (int)uStack_b60 + 1;
          uStack_b60 = CONCAT44(uStack_b60._4_4_,uVar18);
          if (uStack_b60._4_4_ < uVar18) {
            FUN_146b7decc(&local_b68,uVar41 & 0xffffffff);
          }
          plVar26 = local_e00;
          local_b68[lVar36] = (longlong)puVar22;
          LVar32 = local_8a8;
          while ((longlong *)LVar32.QuadPart != (longlong *)0x0) {
            LVar32 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar32.QuadPart + 0x18))->QuadPart;
            FUN_1400020a8();
          }
          uVar20 = local_e28._0_4_ - iVar38;
          uVar41 = local_df0 >> 0x20;
          local_df0 = CONCAT44((int)uVar41,(int)local_df0 + 1);
        }
        if ((5 < (ulonglong)local_e10 && 0 < (int)uStack_b60) &&
           (cVar15 = FUN_146b62963(), cVar15 != '\0')) {
          plVar4 = (longlong *)*local_b68;
          dVar49 = (double)(**(code **)(*(longlong *)plVar4[6] + 0x18))();
          auVar53._8_4_ = local_e10.s.HighPart;
          auVar53._0_8_ = local_e10.QuadPart;
          auVar53._12_4_ = 0x45300000;
          dVar52 = ((double)CONCAT44(0x43300000,local_e10.s.LowPart) - 4503599627370496.0) +
                   (auVar53._8_8_ - 1.9342813113834067e+25);
          dVar48 = dVar6 / dVar52;
          dVar52 = dVar7 / dVar52 - dVar48 * dVar48;
          if (dVar52 < 0.0) {
            dVar52 = sqrt(dVar52);
          }
          else {
            dVar52 = SQRT(dVar52);
          }
          dVar50 = 0.25;
          if (0.25 <= dVar48 + dVar52) {
            dVar50 = dVar48 + dVar52;
          }
          if ((dVar50 < dVar49) &&
             (cVar15 = (**(code **)(*(longlong *)plVar4[6] + 0x20))(), cVar15 != '\0')) {
            *(undefined1 *)((longlong)plVar4 + 0x39) = 1;
            LOCK();
            *local_d60 = *local_d60 + 1;
            UNLOCK();
            (**(code **)(*(longlong *)plVar4[6] + 0x28))((longlong *)plVar4[6],&local_8a8);
            plVar12 = uStack_8a0;
            uVar41 = (ulonglong)uStack_8a0 >> 1;
            if ((longlong *)(uVar41 + 1) < uStack_8a0) {
              local_e28.s.LowPart = uVar20;
              lVar39 = local_8a8.QuadPart + ~uVar41 + -1;
              lVar29 = uVar41 + 2;
              puVar22 = (undefined8 *)FUN_14001cc68(0x48,0x10);
              *puVar22 = 0;
              puVar22[1] = 0;
              puVar22[2] = &PTR_FUN_149f33270;
              puVar22[6] = 0;
              *(undefined2 *)(puVar22 + 7) = 0;
              puVar22[8] = 0;
              puVar22[3] = 0;
              puVar22[4] = 0;
              *(undefined4 *)(puVar22 + 5) = 0;
              lVar36 = *plVar4;
              iVar38 = (int)lVar29;
              *(int *)(puVar22 + 1) = iVar38;
              if (iVar38 != 0) {
                FUN_1447403be(puVar22,0);
                memcpy((void *)*puVar22,(void *)((longlong)plVar12 + lVar36 + lVar39),
                       (longlong)iVar38);
              }
              lVar36 = (longlong)plVar12 + plVar4[8] + lVar39;
              puVar22[8] = lVar36;
              local_918.QuadPart = 0;
              plStack_910 = (longlong *)0x0;
              local_dd0 = lVar29;
              FUN_146b30ae2(&local_a68,lVar36,lVar29,&local_918);
              pLVar24 = local_de0;
              FUN_146b62ad2(&local_b58,local_de0,&local_918,puVar22 + 2);
              uVar34 = *(undefined8 *)(local_e38 + 0xb0);
              local_d90 = *(undefined4 *)(local_e38 + 0x38);
              puVar28 = (undefined8 *)FUN_14001cc68(0x100,0x10);
              local_e48 = pLVar24;
              local_e40 = uVar34;
              FUN_146b68232(puVar28,local_d90,puVar22,puVar22 + 2);
              puVar23 = (undefined8 *)puVar22[6];
              if ((puVar23 != puVar28) && (puVar22[6] = puVar28, puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)(puVar23,1);
              }
              uVar44 = uStack_b60;
              *(char *)(puVar22 + 7) = (char)plVar4[7];
              *(undefined1 *)((longlong)puVar22 + 0x39) = 1;
              iVar38 = (int)uStack_b60;
              uStack_b60 = CONCAT44(uStack_b60._4_4_,(int)uStack_b60 + 1);
              if (uStack_b60._4_4_ == iVar38) {
                FUN_146b7decc(&local_b68,uVar44 & 0xffffffff);
              }
              plVar26 = local_b68;
              memmove(local_b68 + 2,local_b68 + 1,(ulonglong)(iVar38 - 1) << 3);
              LVar32 = local_8a8;
              plVar26[1] = (longlong)puVar22;
              puVar22 = (undefined8 *)FUN_14001cc68(0x48,0x10);
              uVar44 = local_dd0;
              *puVar22 = 0;
              puVar22[1] = 0;
              puVar22[2] = &PTR_FUN_149f33270;
              puVar22[6] = 0;
              *(undefined2 *)(puVar22 + 7) = 0;
              puVar22[8] = 0;
              puVar22[3] = 0;
              puVar22[4] = 0;
              *(undefined4 *)(puVar22 + 5) = 0;
              lVar36 = *plVar4;
              iVar38 = (int)local_dd0;
              *(int *)(puVar22 + 1) = iVar38;
              if (iVar38 != 0) {
                FUN_1447403be(puVar22,0);
                memcpy((void *)*puVar22,(void *)(lVar36 + LVar32.QuadPart),(longlong)iVar38);
              }
              lVar36 = LVar32.QuadPart + plVar4[8];
              puVar22[8] = lVar36;
              LVar32 = local_918;
              if ((longlong *)local_918.QuadPart != (longlong *)0x0) {
                do {
                  LVar32 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar32.QuadPart + 0x18))->QuadPart;
                  FUN_1400020a8();
                } while ((longlong *)LVar32.QuadPart != (longlong *)0x0);
                local_918.QuadPart = 0;
                plStack_910 = (longlong *)0x0;
                lVar36 = puVar22[8];
                uVar44 = local_dd0;
              }
              FUN_146b30ae2(&local_a68,lVar36,uVar44,&local_918);
              pLVar24 = local_de0;
              FUN_146b62ad2(&local_b58,local_de0,&local_918,puVar22 + 2);
              uVar34 = *(undefined8 *)(local_e38 + 0xb0);
              local_dd0 = CONCAT44(local_dd0._4_4_,*(undefined4 *)(local_e38 + 0x38));
              puVar28 = (undefined8 *)FUN_14001cc68(0x100,0x10);
              local_e48 = pLVar24;
              local_e40 = uVar34;
              FUN_146b68232(puVar28,local_dd0 & 0xffffffff,puVar22,puVar22 + 2);
              puVar23 = (undefined8 *)puVar22[6];
              if ((puVar23 != puVar28) && (puVar22[6] = puVar28, puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)(puVar23,1);
              }
              uVar44 = uStack_b60;
              plVar26 = local_e00;
              *(undefined2 *)(puVar22 + 7) = 0x100;
              iVar38 = (int)uStack_b60;
              uStack_b60 = CONCAT44(uStack_b60._4_4_,(int)uStack_b60 + 1);
              if (uStack_b60._4_4_ == iVar38) {
                FUN_146b7decc(&local_b68,uVar44 & 0xffffffff);
              }
              plVar12 = local_b68;
              memmove(local_b68 + 2,local_b68 + 1,(ulonglong)(iVar38 - 1) << 3);
              plVar12[1] = (longlong)puVar22;
              *(undefined1 *)(plVar4 + 7) = 0;
              FUN_140393c76(plVar4,local_8a8.QuadPart & 0xffffffff,0);
              uVar44 = local_dc8;
              LVar32 = local_918;
              while (local_dc8 = uVar44, (longlong *)LVar32.QuadPart != (longlong *)0x0) {
                LVar32 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar32.QuadPart + 0x18))->QuadPart;
                FUN_1400020a8();
                uVar44 = local_dc8;
              }
              uVar20 = local_e28._0_4_;
            }
          }
        }
        LOCK();
        *local_dc0 = (longlong)
                     (((double)((int)local_df0 - (int)uStack_b60) /
                      (double)(int)(uVar21 / (uint)(iVar19 - iVar16))) * 10000.0);
        UNLOCK();
        LOCK();
        *local_d40 = (longlong)(int)uStack_b60;
        UNLOCK();
        QueryPerformanceCounter(&local_8a8);
        LOCK();
        *local_dd8 = *local_dd8 + (local_8a8.QuadPart - (longlong)local_e20);
        UNLOCK();
        QueryPerformanceCounter(&local_8a8);
        local_e20.s = local_8a8.s;
        FUN_146b502e3(local_718.QuadPart,(ulonglong)uStack_710 & 0xffffffff);
        if ((longlong *)local_718.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        cVar15 = (**(code **)(*plVar25 + 0x10))(plVar25);
      } while ((cVar15 == '\0') || (0 < (int)uStack_b60));
    }
    QueryPerformanceCounter(&local_718);
    LOCK();
    *local_dd8 = *local_dd8 + (local_718.QuadPart - (longlong)local_e20);
    UNLOCK();
    LOCK();
    *local_dc0 = 10000;
    UNLOCK();
    FUN_146b3441a(&local_1b0);
    FUN_146b63a1a(local_d98,&local_b88);
    local_b98 = 0;
    lStack_b90 = 0;
    local_ba8 = (longlong *)0x0;
    uStack_ba0 = 0;
    if ((longlong)local_b80 != 0) {
      local_e10.QuadPart = (longlong)local_b80 * 0x60 + local_b88.QuadPart;
      lVar36 = 0;
      LVar32 = local_b88;
      uVar18 = (uint)local_e08;
      do {
        local_e20 = LVar32;
        if ((longlong)*(int *)(LVar32.QuadPart + 0x50) != 0) {
          plVar26 = *(longlong **)(LVar32.QuadPart + 0x48);
          local_e28.QuadPart = (LONGLONG)(plVar26 + (longlong)*(int *)(LVar32.QuadPart + 0x50) * 3);
          do {
            if ((((*(int *)((longlong)plVar26 + 4) == 0 && (int)*plVar26 == 0) &&
                 (int)plVar26[1] == 0) && *(int *)((longlong)plVar26 + 0xc) == 0) &&
               (iVar38 = *(int *)((longlong)plVar26 + 0x14), lVar39 = lVar36, iVar38 != 0)) {
              do {
                if (((int)uStack_ba0 == 0) ||
                   (lVar29 = (longlong)((int)uStack_ba0 + -1),
                   uVar18 <= *(uint *)((longlong)local_ba8 + lVar29 * 0x28 + 0x24))) {
                  local_718.QuadPart = 0;
                  uStack_710 = (longlong *)0x0;
                  CoCreateGuid((GUID *)&local_718.s);
                  lVar29 = FUN_146b63a6e(&local_ba8);
                  ((LARGE_INTEGER *)(lVar29 + 0x10))->QuadPart = (LONGLONG)local_718;
                  *(longlong **)(lVar29 + 0x18) = uStack_710;
                  lVar29 = (longlong)((int)uStack_ba0 + -1);
                }
                uVar17 = *(int *)((longlong)local_ba8 + lVar29 * 0x28 + 0x24) + iVar38;
                iVar19 = 0;
                if (uVar18 <= uVar17) {
                  iVar19 = uVar17 - uVar18;
                }
                plVar25 = local_ba8 + lVar29 * 5;
                uVar21 = (ulonglong)(uint)(iVar38 - iVar19);
                FUN_146b31154(&local_b98,lVar39,uVar21,1);
                FUN_146b31154(plVar25,lVar39,uVar21,1);
                piVar1 = (int *)((longlong)plVar25 + 0x24);
                *piVar1 = *piVar1 + (iVar38 - iVar19);
                lVar39 = lVar39 + uVar21;
                uVar18 = (uint)local_e08;
                iVar38 = iVar19;
              } while ((uint)local_e08 < uVar17);
            }
            lVar36 = lVar36 + (ulonglong)*(uint *)((longlong)plVar26 + 0x14);
            plVar26 = plVar26 + 3;
          } while (plVar26 != (longlong *)local_e28.QuadPart);
        }
        LVar32.QuadPart = local_e20.QuadPart + 0x60;
      } while (LVar32.QuadPart != local_e10.QuadPart);
    }
    local_798 = 0;
    local_790 = 0;
    local_7b8 = 0;
    uStack_7b0 = 0;
    local_78c = 0xffffffff00000080;
    local_784 = 0;
    local_778 = 0;
    local_770 = 0;
    local_888 = 0;
    local_880 = 0;
    local_8a8.QuadPart = 0;
    uStack_8a0 = (longlong *)0x0;
    local_87c = 0xffffffff00000080;
    local_874 = 0;
    local_868 = 0;
    local_860 = 0;
    FUN_146b63aae(&local_bd8,&local_b88);
    local_bf8 = (void *)0x0;
    uVar18 = *(uint *)(local_e38 + 0x30);
    pvVar40 = *(void **)(local_e38 + 0x28);
    local_bf0 = CONCAT44(local_bf0._4_4_,uVar18);
    if ((longlong)(int)uVar18 == 0) {
      local_bf0 = (ulonglong)uVar18;
      lVar36 = local_e38;
    }
    else {
      FUN_1446dd670(&local_bf8,uVar18,0);
      lVar36 = local_e38;
      memcpy(local_bf8,pvVar40,(longlong)(int)uVar18 * 2);
    }
    FUN_146b31318(&lStack_be8,&local_b98);
    LVar32 = local_950;
    local_c08 = *(undefined8 *)(lVar36 + 0xb0);
    local_c18 = local_de8;
    local_c10 = local_da8;
    local_c00.s = local_950.s;
    local_c38 = local_bf8;
    local_bf8 = (void *)0x0;
    local_c30 = local_bf0;
    lStack_c28 = lStack_be8;
    local_bf0 = 0;
    local_c20 = local_be0;
    lStack_be8 = 0;
    local_be0 = 0;
    plVar26 = (longlong *)FUN_146b6362a();
    iVar38 = *(int *)(LVar32.QuadPart + 8);
    uVar34 = *(undefined8 *)(lVar36 + 0x70);
    puVar22 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar22 = &PTR_FUN_149f2ed90;
    puVar22[1] = uVar34;
    *(int *)(puVar22 + 2) = iVar38;
    local_c60 = 0x40a0000000000005;
    uStack_c58 = 0x800000032;
    local_c50 = (void *)0x0;
    local_c48 = *(int *)(lVar36 + 0x30);
    lVar39 = (longlong)local_c48;
    pvVar40 = *(void **)(lVar36 + 0x28);
    if (lVar39 == 0) {
      local_c44 = 0;
      iVar38 = 0;
    }
    else {
      FUN_1446dd670(&local_c50,local_c48,0);
      memcpy(local_c50,pvVar40,lVar39 * 2);
      iVar38 = local_c48;
    }
    pvVar40 = local_c50;
    local_c40 = *(int *)(LVar32.QuadPart + 8);
    uVar34 = *(undefined8 *)(local_e38 + 0x70);
    uVar2 = *(undefined8 *)(local_e38 + 0xb0);
    local_c88 = local_c60;
    uStack_c80 = uStack_c58;
    local_c78 = (void *)0x0;
    local_c70 = iVar38;
    if (iVar38 == 0) {
      local_c6c = 0;
    }
    else {
      FUN_1446dd670(&local_c78,iVar38,0);
      memcpy(local_c78,pvVar40,(longlong)iVar38 * 2);
    }
    local_dc0 = puVar22;
    local_c68 = local_c40;
    local_e20.QuadPart = FUN_146b63baa(&local_c88,uVar34,puVar22,uVar2);
    iVar38 = (uint)uStack_a40;
    uVar18 = uStack_a40._4_4_;
    if ((int)(uint)uStack_a40 < 0) {
      uVar17 = -(uint)uStack_a40;
      uStack_a40 = (ulonglong)uStack_a40._4_4_ << 0x20;
      if (uVar18 - iVar38 < uVar17) {
        FUN_1447403be();
      }
    }
    else if ((uint)uStack_a40 != 0) {
      uStack_a40 = (ulonglong)uStack_a40._4_4_ << 0x20;
    }
    if ((longlong)(int)uStack_ba0 != 0) {
      local_e28.QuadPart = (LONGLONG)(local_ba8 + (longlong)(int)uStack_ba0 * 5);
      plVar25 = local_ba8;
      do {
        LVar32.QuadPart = (LONGLONG)(plVar25 + 2);
        uStack_710 = (longlong *)((longlong)plVar25 + 0x24);
        local_718.QuadPart = LVar32.QuadPart;
        FUN_146b4e46a(&local_7b8,&local_918,&local_718,0);
        FUN_146b629d9(LVar32.QuadPart,plVar25,&local_bd8,&local_8a8);
        lVar36 = *plVar25;
        FUN_140393c76(&local_a48,*(int *)((longlong)plVar25 + 0x24));
        if (lVar36 != 0) {
          uVar21 = 0;
          do {
            (**(code **)(*plVar26 + 8))
                      (plVar26,(longlong)local_a48 + (uVar21 & 0xffffffff),
                       *(undefined4 *)(lVar36 + 8),1);
            uVar21 = (uVar21 & 0xffffffff) + *(longlong *)(lVar36 + 8);
            lVar36 = *(longlong *)(lVar36 + 0x18);
          } while (lVar36 != 0);
        }
        FUN_1401211f6(&local_a48,local_e08 & 0xffffffff);
        uVar21 = uStack_a40 & 0xffffffff;
        if (uVar21 == 0) {
          uVar21 = 0;
          local_918.QuadPart = 0;
        }
        else {
          uVar44 = 0;
          local_918.QuadPart = 0;
          do {
            local_918.QuadPart =
                 (local_918.QuadPart << 1 | (ulonglong)(local_918.QuadPart < 0)) ^
                 (&DAT_14c9912e0)[*(byte *)((longlong)local_a48 + uVar44)];
            uVar44 = uVar44 + 1;
          } while (uVar21 != uVar44);
        }
        local_718.QuadPart = 0;
        uStack_710 = (longlong *)0x0;
        local_708[0] = 0;
        FUN_140f0be04(local_a48,uVar21,&local_718);
        pvVar40 = local_a48;
        local_c98 = (void *)0x0;
        sVar45 = (size_t)(int)(uint)uStack_a40;
        local_c90 = (uint)uStack_a40;
        if (sVar45 == 0) {
          local_c8c = 0;
        }
        else {
          FUN_1447a127e(&local_c98,uStack_a40 & 0xffffffff,0);
          memcpy(local_c98,pvVar40,sVar45);
        }
        local_e48 = &local_718;
        (**(code **)(*(longlong *)local_e20 + 8))(local_e20,&local_c98,LVar32.QuadPart);
        plVar25 = plVar25 + 5;
      } while (plVar25 != (longlong *)local_e28.QuadPart);
    }
    if (local_d58 != local_d50) {
      local_6f8 = (uint *)0x0;
      local_6f0 = 0;
      local_718.QuadPart = 0;
      uStack_710 = (longlong *)0x0;
      local_6ec = 0xffffffff00000080;
      local_6e4 = 0;
      local_6d8 = 0;
      local_6d0 = 0;
      if (local_bd0 != 0) {
        lVar36 = local_bd0;
        do {
          for (lVar39 = *(longlong *)(lVar36 + 0x20); lVar39 != 0;
              lVar39 = *(longlong *)(lVar39 + 0x28)) {
            lVar29 = (**(code **)(*(longlong *)local_940 + 0x218))(local_940.QuadPart,lVar39 + 0x10)
            ;
            if (lVar29 != 0) {
              FUN_1457adc9c(&local_718,&local_918,lVar39 + 0x10,0);
            }
          }
          lVar36 = *(longlong *)(lVar36 + 0x38);
        } while (lVar36 != 0);
      }
      FUN_146b63c58(&local_718,local_ca8);
      plVar25 = (longlong *)(**(code **)*local_de8)(local_de8,local_ca8);
      local_e28.QuadPart = (**(code **)*local_db0)(local_db0,plVar25);
      uVar21 = 1;
      iVar38 = 0;
      uVar44 = 0;
      uVar18 = 0;
      if (local_6f0 != 0) {
        puVar30 = local_6f8;
        if (local_6f8 == (uint *)0x0) {
          puVar30 = local_708;
        }
        uVar18 = *puVar30;
        if (uVar18 == 0) {
          iVar38 = local_6f0 + 0x1e;
          if (-1 < (int)(local_6f0 - 1)) {
            iVar38 = local_6f0 - 1;
          }
          uVar44 = 0;
          uVar21 = (ulonglong)(uint)(iVar38 >> 5);
          if (iVar38 >> 5 < 1) {
            uVar21 = 0;
          }
          iVar38 = 0;
          do {
            if (uVar21 == uVar44) goto LAB_142942db2;
            iVar38 = iVar38 + 0x20;
            uVar18 = puVar30[uVar44 + 1];
            uVar44 = uVar44 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar44 = 0;
        }
        uVar21 = (ulonglong)(-uVar18 & uVar18);
        uVar41 = uVar21 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar18 = (iVar38 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if ((int)local_6f0 <= (int)uVar18) {
          uVar18 = local_6f0;
        }
      }
      if (uVar18 != local_6f0) {
        local_e10 = local_940;
        uVar17 = 0xffffffff;
        local_df0 = (ulonglong)local_6f0;
        local_dd8 = plVar25;
        do {
          lVar39 = (longlong)(int)uVar18 * 0x18 + local_718.QuadPart;
          local_e08 = uVar21;
          lVar36 = (**(code **)(*(longlong *)local_e10 + 0x218))(local_e10.QuadPart,lVar39);
          local_918.QuadPart = (**(code **)(*(longlong *)local_e28 + 8))(local_e28.QuadPart,lVar39);
          (**(code **)(*(longlong *)local_918 + 8))(local_918.QuadPart,local_908,&plStack_910);
          pvVar40 = local_908[0];
          uVar18 = *(uint *)((longlong)plStack_910 + 0x1c);
          local_8c8 = (void *)0x0;
          if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((ulonglong)uVar18);
          }
          if (uVar18 == 0) {
            local_cac = 0;
            local_cb0 = 0;
            local_cb8 = (void *)0x0;
          }
          else {
            uStack_8c0._0_4_ = uVar18;
            FUN_1447a127e(&local_8c8,uVar18,0);
            memcpy(local_8c8,pvVar40,(ulonglong)uVar18);
            local_cb8 = local_8c8;
            local_cb0 = (uint)uStack_8c0;
            local_cac = uStack_8c0._4_4_;
          }
          local_e48 = (LARGE_INTEGER *)(lVar36 + 0x18);
          local_8c8 = (void *)0x0;
          uStack_8c0 = 0;
          (**(code **)(*(longlong *)local_e20 + 8))(local_e20,&local_cb8,lVar39,lVar36 + 0x10);
          plVar25 = local_dd8;
          (**(code **)(*local_dd8 + 0x30))(local_dd8,lVar39);
          if (local_8c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          (**(code **)(*(longlong *)local_918 + 0x18))();
          uVar17 = uVar17 & ~(uint)local_e08;
          puVar30 = local_6f8;
          if (local_6f8 == (uint *)0x0) {
            puVar30 = local_708;
          }
          iVar19 = (int)uVar44;
          lVar36 = (longlong)iVar19;
          uVar18 = puVar30[lVar36] & uVar17;
          if (uVar18 == 0) {
            iVar16 = local_6f0 + 0x1e;
            if (-1 < (int)(local_6f0 - 1)) {
              iVar16 = local_6f0 - 1;
            }
            iVar16 = iVar16 >> 5;
            iVar38 = iVar38 + 0x20;
            iVar33 = iVar16;
            if (iVar16 < iVar19) {
              iVar33 = iVar19;
            }
            if (iVar19 < iVar16) {
              lVar39 = 0;
              do {
                uVar18 = puVar30[lVar36 + lVar39 + 1];
                if (uVar18 != 0) {
                  uVar44 = (ulonglong)(iVar19 + (int)lVar39 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_142943901;
                }
                iVar38 = iVar38 + 0x20;
                lVar39 = lVar39 + 1;
              } while (iVar33 - lVar36 != lVar39);
              uVar17 = 0xffffffff;
              iVar19 = iVar33;
            }
            uVar44 = (ulonglong)(iVar19 + 1);
            plVar25 = local_dd8;
            uVar21 = local_e08;
            uVar18 = local_6f0;
          }
          else {
LAB_142943901:
            uVar21 = (ulonglong)(-uVar18 & uVar18);
            uVar41 = uVar21 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar41 != 0) {
              for (; uVar41 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar18 = (iVar38 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
            if ((int)local_6f0 <= (int)uVar18) {
              uVar18 = local_6f0;
            }
          }
        } while (uVar18 != (uint)local_df0);
      }
LAB_142942db2:
      if ((longlong *)local_e28.QuadPart != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_e28)(local_e28.QuadPart,1);
      }
      if (plVar25 != (longlong *)0x0) {
        (**(code **)*plVar25)(plVar25,1);
      }
      local_6d0 = 0;
      if (local_6d8 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(&local_718);
    }
    local_8c8 = (void *)0x0;
    uStack_8c0 = 0;
    local_8b8 = 0;
    local_cc8._0_12_ = ZEXT812(1);
    local_cc8._12_4_ = 0;
    uStack_710 = (longlong *)&DAT_149f31470;
    lVar36 = 0;
    local_718.QuadPart = (LONGLONG)local_cc8;
    FUN_146b4e46a(&local_7b8,&local_918,&local_718,0);
    uVar34 = 0x100000;
    FUN_140393c76(&local_a48,0x100000,1);
    pvVar40 = local_a48;
    memset(local_a48,(int)CONCAT71((int7)((ulonglong)uVar34 >> 8),local_cc8[0xc]),0x100000);
    FUN_140f0be04(pvVar40,0x100000,&local_8c8);
    pvVar40 = local_a48;
    local_718.QuadPart = 0;
    do {
      local_718.QuadPart =
           (local_718.QuadPart << 1 | (ulonglong)(local_718.QuadPart < 0)) ^
           (&DAT_14c9912e0)[*(byte *)((longlong)local_a48 + lVar36)];
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x100000);
    local_cd8 = (void *)0x0;
    sVar45 = (size_t)(int)(uint)uStack_a40;
    local_cd0 = (uint)uStack_a40;
    if (sVar45 == 0) {
      local_ccc = 0;
    }
    else {
      FUN_1447a127e(&local_cd8,uStack_a40 & 0xffffffff,0);
      memcpy(local_cd8,pvVar40,sVar45);
    }
    local_e48 = (LARGE_INTEGER *)&local_8c8;
    (**(code **)(*(longlong *)local_e20 + 8))(local_e20,&local_cd8,local_cc8,&local_718);
    iVar38 = 1;
    do {
      local_718.QuadPart = (LONGLONG)local_cc8;
      local_cc8._12_4_ = iVar38;
      uStack_710 = (longlong *)&DAT_149f31470;
      pLVar24 = &local_918;
      FUN_146b4e46a(&local_7b8,pLVar24,&local_718,0);
      pvVar40 = local_a48;
      memset(local_a48,(int)CONCAT71((int7)((ulonglong)pLVar24 >> 8),local_cc8[0xc]),0x100000);
      FUN_140f0be04(pvVar40,0x100000,&local_8c8);
      pvVar40 = local_a48;
      lVar36 = 0;
      local_718.QuadPart = 0;
      do {
        local_718.QuadPart =
             (local_718.QuadPart << 1 | (ulonglong)(local_718.QuadPart < 0)) ^
             (&DAT_14c9912e0)[*(byte *)((longlong)local_a48 + lVar36)];
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x100000);
      local_ce8 = (void *)0x0;
      sVar45 = (size_t)(int)(uint)uStack_a40;
      local_ce0 = (uint)uStack_a40;
      if (sVar45 == 0) {
        local_cdc = 0;
      }
      else {
        FUN_1447a127e(&local_ce8,uStack_a40 & 0xffffffff,0);
        memcpy(local_ce8,pvVar40,sVar45);
      }
      local_e48 = (LARGE_INTEGER *)&local_8c8;
      (**(code **)(*(longlong *)local_e20 + 8))(local_e20,&local_ce8,local_cc8);
      iVar38 = iVar38 + 1;
    } while (iVar38 != 0x100);
    (**(code **)(*(longlong *)local_e20 + 0x10))(local_e20,&local_718);
    FUN_146b63d98(&local_bd8,&local_918);
    FUN_146b498ee(&local_b88,&local_918);
    FUN_146b498c7(local_918.QuadPart,(ulonglong)plStack_910 & 0xffffffff);
    if ((longlong *)local_918.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (0 < local_b80) {
      uVar21 = 0;
      do {
        iVar38 = (int)uVar21;
        local_918 = local_940;
        plStack_910 = local_938;
        if (local_938 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_938 + 1) = (int)local_938[1] + 1;
          UNLOCK();
        }
        cVar15 = (**(code **)(*(longlong *)local_950 + 0x240))
                           (local_950.QuadPart,&local_918,
                            (longlong *)(uVar21 * 0x60 + local_b88.QuadPart));
        plVar25 = plStack_910;
        if (plStack_910 != (longlong *)0x0) {
          LOCK();
          plVar27 = plStack_910 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*plStack_910)(plStack_910);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
          }
        }
        if (cVar15 == '\0') {
          FUN_146b7e1b4(&local_b88,uVar21);
          iVar38 = iVar38 + -1;
        }
        uVar21 = (ulonglong)(iVar38 + 1U);
      } while ((int)(iVar38 + 1U) < local_b80);
    }
    LVar32 = local_950;
    FUN_146b41976(local_508,(longlong *)(local_950.QuadPart + 8));
    local_e28.s = LVar32.s;
    FUN_14058acb2(auStack_408,(longlong *)(LVar32.QuadPart + 0x108));
    FUN_146b498ee(&local_418,&local_b88);
    local_8f8 = 0;
    local_8f0 = 0;
    local_918.QuadPart = 0;
    plStack_910 = (longlong *)0x0;
    local_8ec = 0xffffffff00000080;
    local_8e4 = 0;
    local_8d8 = 0;
    local_8d0 = 0;
    local_e10 = local_940;
    if ((longlong)local_410 != 0) {
      local_e08 = (longlong)local_410 * 0x60 + local_418;
      uVar21 = local_418;
      do {
        if ((longlong)*(int *)(uVar21 + 0x50) != 0) {
          puVar22 = *(undefined8 **)(uVar21 + 0x48);
          lVar36 = (longlong)*(int *)(uVar21 + 0x50) * 0x18;
          do {
            local_d08 = local_d08 & 0xffffffffffffff00;
            FUN_1457adc9c(&local_918,&local_cf8,puVar22,&local_d08);
            if ((char)local_d08 == '\0') {
              puVar23 = (undefined8 *)
                        (**(code **)(*(longlong *)local_e28 + 0x218))(local_e28.QuadPart,puVar22);
              if ((puVar23 == (undefined8 *)0x0) &&
                 (puVar23 = (undefined8 *)
                            (**(code **)(*(longlong *)local_e10 + 0x218))
                                      (local_e10.QuadPart,puVar22), puVar23 == (undefined8 *)0x0)) {
                puVar23 = (undefined8 *)FUN_146b63eac(&local_428);
                uVar34 = puVar22[1];
                *puVar23 = *puVar22;
                puVar23[1] = uVar34;
                uVar20 = FUN_1447addd0(puVar22,0x10);
                iVar38 = FUN_146b7e2ba(local_6c0,uVar20,puVar22);
                lVar39 = (longlong)iVar38 * 0x20 + local_6c0[0];
                if (iVar38 == -1) {
                  lVar39 = 0;
                }
                puVar23[2] = *(undefined8 *)(lVar39 + 0x10);
                uVar20 = FUN_1447addd0(puVar22,0x10);
                iVar38 = FUN_146b505d2(local_670,uVar20,puVar22);
                lVar39 = (longlong)iVar38 * 0x2c + local_670[0];
                if (iVar38 == -1) {
                  lVar39 = 0;
                }
                uVar34 = *(undefined8 *)(lVar39 + 0x18);
                puVar23[3] = *(undefined8 *)(lVar39 + 0x10);
                puVar23[4] = uVar34;
                *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(lVar39 + 0x20);
                uVar18 = (*(code *)PTR_FUN_14c75b148)(puVar22,0x10,0);
                *(char *)((longlong)puVar23 + 0x2c) = (char)uVar18 + (char)(uVar18 / 100) * -100;
                uVar20 = FUN_1447addd0(puVar22,0x10);
                iVar38 = FUN_146b4e728(&local_7b8,uVar20,puVar22);
                lVar39 = (longlong)iVar38 * 0x1c + local_7b8;
                if (iVar38 == -1) {
                  lVar39 = 0;
                }
                *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(lVar39 + 0x10);
                uVar20 = FUN_1447addd0(puVar22,0x10);
                iVar38 = FUN_146b51d36(&uStack_710,uVar20,puVar22);
                plVar25 = uStack_710 + (longlong)iVar38 * 4;
                if (iVar38 == -1) {
                  plVar25 = (longlong *)0x0;
                }
                puVar23[7] = plVar25[2];
              }
              else {
                uVar18 = local_420;
                lVar39 = (longlong)(int)local_420;
                local_420 = local_420 + 1;
                if (local_41c < local_420) {
                  FUN_146b55398(&local_428,uVar18);
                }
                lVar39 = lVar39 * 0x40;
                uVar34 = *puVar23;
                uVar2 = puVar23[1];
                uVar3 = puVar23[2];
                uVar8 = puVar23[3];
                uVar9 = puVar23[4];
                uVar10 = puVar23[5];
                uVar11 = puVar23[7];
                puVar28 = (undefined8 *)(local_428 + 0x30 + lVar39);
                *puVar28 = puVar23[6];
                puVar28[1] = uVar11;
                puVar23 = (undefined8 *)(local_428 + 0x20 + lVar39);
                *puVar23 = uVar9;
                puVar23[1] = uVar10;
                puVar23 = (undefined8 *)(local_428 + 0x10 + lVar39);
                *puVar23 = uVar3;
                puVar23[1] = uVar8;
                *(undefined8 *)(local_428 + lVar39) = uVar34;
                ((undefined8 *)(local_428 + lVar39))[1] = uVar2;
              }
            }
            puVar22 = puVar22 + 3;
            lVar36 = lVar36 + -0x18;
          } while (lVar36 != 0);
        }
        uVar21 = uVar21 + 0x60;
      } while (uVar21 != local_e08);
    }
    FUN_146b377ca(local_510);
    iVar38 = (**(code **)(*(longlong *)local_e28 + 0x180))();
    iVar19 = (**(code **)(*(longlong *)local_e10 + 0x180))();
    puVar43 = local_960;
    if (iVar38 < iVar19) {
      iVar38 = iVar19;
    }
    iVar19 = 0x11;
    if (0x11 < iVar38) {
      iVar19 = iVar38;
    }
    lVar36 = (longlong)local_958;
    local_cf8 = (undefined2 *)0x0;
    local_cf0 = local_958;
    FUN_1446dd670(&local_cf8,(uint)(lVar36 == 0) + local_958 + 3,0);
    if (lVar36 != 0) {
      memcpy(local_cf8,puVar43,lVar36 * 2);
    }
    FUN_1400020e8(&local_cf8,&DAT_149f2f624,3);
    FUN_146b37e38(local_510,&local_cf8,iVar19);
    param_2 = local_df8;
    param_1 = local_e38;
    puVar43 = &DAT_149dfb77a;
    if (local_cf0 != 0) {
      puVar43 = local_cf8;
    }
    puVar35 = &DAT_149dfb77a;
    if (local_958 != 0) {
      puVar35 = local_960;
    }
    (**(code **)(**(longlong **)(local_e38 + 0x70) + 0x70))
              (*(longlong **)(local_e38 + 0x70),puVar35,puVar43);
    puVar43 = &DAT_149dfb77a;
    if (local_958 != 0) {
      puVar43 = local_960;
    }
    FUN_140002266(&local_d08,L"Saved new optimised delta file %s",puVar43);
    iVar38 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar38 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
      FUN_1447a1bd6(param_2,iVar38);
    }
    lVar36 = *param_2;
    lVar39 = (longlong)iVar38 * 0x10;
    *(undefined8 *)(lVar36 + lVar39) = 0;
    *(ulonglong *)(lVar36 + lVar39) = local_d08;
    *(undefined4 *)(lVar36 + 8 + lVar39) = (undefined4)local_d00;
    *(undefined4 *)(lVar36 + 0xc + lVar39) = local_d00._4_4_;
    local_d00 = 0;
    local_d08 = 0;
    if (local_cf8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_8d0 = 0;
    if (local_8d8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_918);
    FUN_146b31adc(&local_718);
    if (local_e20 != (LARGE_INTEGER)0x0) {
      (*(code *)**(undefined8 **)local_e20)(local_e20,1);
    }
    if (local_c50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_dc0 != (undefined8 *)0x0) {
      (**(code **)*local_dc0)(local_dc0,1);
    }
    if (plVar26 != (longlong *)0x0) {
      (**(code **)*plVar26)(plVar26,1);
    }
    while (plVar26 = local_e00, lStack_be8 != 0) {
      local_be0 = *(longlong *)(lStack_be8 + 0x18);
      FUN_1400020a8();
      lStack_be8 = local_be0;
    }
    if (local_bf8 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_bd8 = &PTR_FUN_149f33280;
    FUN_146b76cf6();
    local_860 = 0;
    if (local_868 != 0) {
      FUN_1400020a8();
    }
    FUN_146b7d546(&local_8a8);
    local_770 = 0;
    if (local_778 != 0) {
      FUN_1400020a8();
    }
    FUN_146b48006(&local_7b8);
    FUN_146b7df51(local_ba8,uStack_ba0 & 0xffffffff);
    if (local_ba8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    while (local_b98 != 0) {
      lStack_b90 = *(longlong *)(local_b98 + 0x18);
      FUN_1400020a8();
      local_b98 = lStack_b90;
    }
    FUN_146b498c7(local_b88.QuadPart,local_b80);
    if ((longlong *)local_b88.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_146b7dbf6(local_b68,uStack_b60 & 0xffffffff);
    if (local_b68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar26 != (longlong *)0x0) {
      (**(code **)*plVar26)(plVar26,1);
    }
    lVar36 = local_d98;
    if (local_d98 != 0) {
      FUN_146b7dae6(local_d98);
      FUN_1400020a8(lVar36);
    }
    local_b58 = &PTR_FUN_149f33280;
    FUN_146b76cf6();
    if (local_da0 != (longlong *)0x0) {
      (**(code **)*local_da0)(local_da0,1);
    }
    while (lStack_ad8 != 0) {
      local_ad0 = *(longlong *)(lStack_ad8 + 0x18);
      FUN_1400020a8();
      lStack_ad8 = local_ad0;
    }
    if (local_ae8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_de0 != (LARGE_INTEGER *)0x0) {
      (**(code **)*local_de0)(local_de0,1);
    }
    if (local_d78 != (undefined8 *)0x0) {
      (**(code **)*local_d78)(local_d78,1);
    }
    while (lStack_a78 != 0) {
      local_a70 = *(longlong *)(lStack_a78 + 0x18);
      FUN_1400020a8();
      lStack_a78 = local_a70;
    }
    if (local_a88 != (void *)0x0) {
      FUN_1400020a8();
    }
    while (local_a68 != 0) {
      local_a60 = *(longlong *)(local_a68 + 0x18);
      FUN_1400020a8();
      local_a68 = local_a60;
    }
    while (local_a58 != 0) {
      local_a50 = *(longlong *)(local_a58 + 0x18);
      FUN_1400020a8();
      local_a58 = local_a50;
    }
    if (local_a48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_da8 != (longlong *)0x0) {
      (**(code **)(*local_da8 + 8))(local_da8,1);
    }
    if (local_db0 != (longlong *)0x0) {
      (**(code **)(*local_db0 + 8))(local_db0,1);
    }
    if (local_d70 != (undefined8 *)0x0) {
      (**(code **)*local_d70)(local_d70,1);
    }
    if (local_d68 != (undefined8 *)0x0) {
      (**(code **)*local_d68)(local_d68,1);
    }
    if (local_de8 != (longlong *)0x0) {
      (**(code **)(*local_de8 + 8))(local_de8,1);
    }
    if (local_d88 != (undefined8 *)0x0) {
      (**(code **)*local_d88)(local_d88,1);
    }
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_1461c8dd4(&local_258,&local_718,&local_208);
    LVar32 = local_950;
    local_7b8 = 0;
    uStack_7b0 = 0;
    (**(code **)(*(longlong *)local_950 + 0x1c8))(local_950.QuadPart,&local_7b8);
    if ((longlong)(int)uStack_7b0 == 0) {
      uVar21 = 0;
      lVar39 = 0;
    }
    else {
      lVar29 = (longlong)(int)uStack_7b0 * 0x10 + local_7b8;
      lVar39 = 0;
      lVar36 = local_7b8;
      do {
        lVar42 = (**(code **)(*(longlong *)LVar32 + 0x1f8))(LVar32.QuadPart,lVar36);
        if ((longlong)*(int *)(lVar42 + 0x50) != 0) {
          lVar46 = *(longlong *)(lVar42 + 0x48);
          lVar42 = (longlong)*(int *)(lVar42 + 0x50) * 0x18;
          do {
            uVar20 = FUN_1447addd0(lVar46,0x10);
            iVar38 = FUN_140f5cb3a(&local_718,uVar20,lVar46);
            if (iVar38 != -1) {
              lVar39 = lVar39 + (ulonglong)*(uint *)(lVar46 + 0x14);
            }
            lVar46 = lVar46 + 0x18;
            lVar42 = lVar42 + -0x18;
          } while (lVar42 != 0);
        }
        lVar36 = lVar36 + 0x10;
      } while (lVar36 != lVar29);
      uVar21 = uStack_7b0 & 0xffffffff;
    }
    FUN_1447a1747(local_7b8,uVar21);
    if (local_7b8 != 0) {
      FUN_1400020a8();
    }
    LVar37 = local_940;
    if ((longlong)local_410 == 0) {
      lVar36 = 0;
    }
    else {
      lVar36 = 0;
      uVar21 = local_418;
      do {
        if ((longlong)*(int *)(uVar21 + 0x50) != 0) {
          lVar29 = *(longlong *)(uVar21 + 0x48);
          lVar42 = (longlong)*(int *)(uVar21 + 0x50) * 0x18;
          do {
            lVar46 = (**(code **)(*(longlong *)LVar37 + 0x218))(LVar37.QuadPart,lVar29);
            if ((lVar46 == 0) &&
               (lVar46 = (**(code **)(*(longlong *)LVar32 + 0x218))(LVar32.QuadPart,lVar29),
               lVar46 == 0)) {
              lVar36 = lVar36 + (ulonglong)*(uint *)(lVar29 + 0x14);
            }
            lVar29 = lVar29 + 0x18;
            lVar42 = lVar42 + -0x18;
          } while (lVar42 != 0);
        }
        uVar21 = uVar21 + 0x60;
      } while (uVar21 != (longlong)local_410 * 0x60 + local_418);
    }
    param_1 = local_e38;
    local_798 = 0;
    local_790 = 0;
    local_7b8 = 0;
    uStack_7b0 = 0;
    local_78c = 0xffffffff00000080;
    local_784 = 0;
    local_778 = 0;
    lVar29 = 0;
    local_770 = 0;
    if ((longlong)(int)local_420 != 0) {
      lVar46 = (longlong)(int)local_420 << 6;
      lVar29 = 0;
      lVar42 = local_428;
      do {
        lVar31 = (**(code **)(*(longlong *)local_940 + 0x218))(local_940.QuadPart,lVar42);
        if ((lVar31 == 0) &&
           (lVar31 = (**(code **)(*(longlong *)local_950 + 0x218))(local_950.QuadPart,lVar42),
           lVar31 == 0)) {
          lVar29 = lVar29 + *(longlong *)(lVar42 + 0x38);
          FUN_1457adc9c(&local_7b8,&local_8a8,lVar42,0);
        }
        lVar42 = lVar42 + 0x40;
        lVar46 = lVar46 + -0x40;
      } while (lVar46 != 0);
    }
    uVar21 = local_db8;
    param_2 = local_df8;
    local_bd8 = (undefined **)0x0;
    if (local_e29 == 0) {
      FUN_146b3441a(&local_130);
      param_2 = local_df8;
      uVar21 = local_db8;
      if (local_e11 != 0) goto LAB_142943fc9;
    }
    else {
      puVar43 = local_960;
      if (local_958 == 0) {
        puVar43 = &DAT_149dfb77a;
      }
      cVar15 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
                         (*(longlong **)(param_1 + 0x70),puVar43,&local_bd8);
      if (cVar15 == '\0') {
        LOCK();
        *(undefined4 *)(param_1 + 0xbc) = 0;
        UNLOCK();
        local_bd8 = (undefined **)0x0;
      }
      FUN_146b3441a(&local_130);
LAB_142943fc9:
      uVar44 = lVar29 + (longlong)local_bd8;
      FUN_140002266(&local_8a8,L"Final unknown compressed bytes, plus meta %llu",uVar44);
      iVar38 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar38 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
        FUN_1447a1bd6(param_2,iVar38);
      }
      lVar29 = *param_2;
      lVar42 = (longlong)iVar38 * 0x10;
      *(undefined8 *)(lVar29 + lVar42) = 0;
      *(LARGE_INTEGER *)(lVar29 + lVar42) = local_8a8;
      *(int *)(lVar29 + 8 + lVar42) = (int)uStack_8a0;
      *(undefined4 *)(lVar29 + 0xc + lVar42) = uStack_8a0._4_4_;
      uStack_8a0 = (longlong *)0x0;
      local_8a8.QuadPart = 0;
      FUN_140002266(&local_8a8,L"Original unknown compressed bytes         %llu",uVar21);
      iVar38 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar38 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
        FUN_1447a1bd6(param_2,iVar38);
      }
      lVar29 = *param_2;
      lVar42 = (longlong)iVar38 * 0x10;
      *(undefined8 *)(lVar29 + lVar42) = 0;
      ((LARGE_INTEGER *)(lVar29 + lVar42))->QuadPart = (LONGLONG)local_8a8;
      *(int *)(lVar29 + 8 + lVar42) = (int)uStack_8a0;
      *(undefined4 *)(lVar29 + 0xc + lVar42) = uStack_8a0._4_4_;
      uStack_8a0 = (longlong *)0x0;
      local_8a8.QuadPart = 0;
      if (uVar44 < uVar21) {
        auVar51._8_4_ = (int)(uVar44 >> 0x20);
        auVar51._0_8_ = uVar44;
        auVar51._12_4_ = 0x45300000;
        auVar54._8_4_ = (int)(uVar21 >> 0x20);
        auVar54._0_8_ = uVar21;
        auVar54._12_4_ = 0x45300000;
        local_b58 = (undefined **)0x0;
        plStack_b50 = (longlong *)0x0;
        FUN_1467d04fa(&local_918,
                      1.0 - (((double)CONCAT44(0x43300000,(int)uVar44) - 4503599627370496.0) +
                            (auVar51._8_8_ - 1.9342813113834067e+25)) /
                            (((double)CONCAT44(0x43300000,(int)uVar21) - 4503599627370496.0) +
                            (auVar54._8_8_ - 1.9342813113834067e+25)),local_930);
        LVar32 = local_918;
        if (*(code **)(*(longlong *)local_918 + 0x50) != FUN_144828418) {
          LVar32.QuadPart = (**(code **)(*(longlong *)local_918 + 0x50))();
        }
        FUN_1447a1fc0(LVar32.QuadPart);
        pcVar5 = *(code **)(*(longlong *)local_918 + 0x28);
        if (pcVar5 == FUN_14482841c) {
          plVar26 = (longlong *)(local_918.QuadPart + 0x18);
          if (*(longlong *)(local_918.QuadPart + 0x28) != 0) {
            plVar26 = (longlong *)(*(longlong *)(local_918.QuadPart + 0x28) + 8);
          }
        }
        else if (pcVar5 == (code *)&LAB_14010c34c) {
          plVar26 = (longlong *)(local_918.QuadPart + 0x10);
        }
        else {
          plVar26 = (longlong *)(*pcVar5)(local_918.QuadPart);
        }
        if ((int)plVar26[1] == 0) {
          puVar43 = &DAT_149dfb77a;
        }
        else {
          puVar43 = (undefined2 *)*plVar26;
        }
        FUN_140002266(&local_8a8,L"Improvement: %s",puVar43);
        iVar38 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar38 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
          FUN_1447a1bd6(param_2,iVar38);
        }
        lVar29 = *param_2;
        lVar42 = (longlong)iVar38 * 0x10;
        *(undefined8 *)(lVar29 + lVar42) = 0;
        *(LARGE_INTEGER *)(lVar29 + lVar42) = local_8a8;
        *(int *)(lVar29 + 8 + lVar42) = (int)uStack_8a0;
        *(undefined4 *)(lVar29 + 0xc + lVar42) = uStack_8a0._4_4_;
        uStack_8a0 = (longlong *)0x0;
        local_8a8.QuadPart = 0;
        if ((longlong *)local_918.QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_918 + 0x10))();
        }
        plVar26 = plStack_b50;
        if (plStack_b50 != (longlong *)0x0) {
          LOCK();
          plVar25 = plStack_b50 + 1;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)*plVar25 == 0) {
            (**(code **)*plStack_b50)(plStack_b50);
            LOCK();
            piVar1 = (int *)((longlong)plVar26 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
      if (local_e29 != 0) {
        local_e48 = (LARGE_INTEGER *)CONCAT44(local_e48._4_4_,1);
        local_e08 = uVar44;
        FUN_140807d8e(&local_960,&local_8a8,L"Deltas/",L"DeltaMetas/");
        FUN_1448097c4(&local_8a8,L".delta",L".json",1);
        LVar37 = local_8a8;
        uVar20 = (int)uStack_8a0;
        local_8a8.QuadPart = 0;
        uStack_8a0 = (longlong *)0x0;
        FUN_145fe0690(&local_918,&local_8a8,0);
        FUN_145928344(local_918.QuadPart);
        LVar32 = local_918;
        puVar22 = (undefined8 *)(**(code **)(*(longlong *)local_940 + 0x18))();
        local_d18 = (void *)0x0;
        local_d10 = *(int *)(puVar22 + 1);
        lVar29 = (longlong)local_d10;
        pvVar40 = (void *)*puVar22;
        local_e28.s.LowPart = uVar20;
        if (lVar29 == 0) {
          local_d0c = 0;
        }
        else {
          FUN_1446dd670(&local_d18,local_d10,0);
          memcpy(local_d18,pvVar40,lVar29 * 2);
        }
        FUN_146b39472(LVar32.QuadPart,L"SourceBuildVersion",&local_d18);
        LVar32 = local_918;
        puVar22 = (undefined8 *)(**(code **)(*(longlong *)local_950 + 0x18))();
        local_d28 = (void *)0x0;
        local_d20 = *(int *)(puVar22 + 1);
        lVar29 = (longlong)local_d20;
        pvVar40 = (void *)*puVar22;
        if (lVar29 == 0) {
          local_d1c = 0;
        }
        else {
          FUN_1446dd670(&local_d28,local_d20,0);
          memcpy(local_d28,pvVar40,lVar29 * 2);
        }
        param_2 = local_df8;
        uVar20 = local_e28._0_4_;
        FUN_146b63eec(LVar32.QuadPart,&local_d28);
        FUN_146b63f68(local_918.QuadPart,lVar39);
        FUN_146b64020(local_918.QuadPart,lVar36);
        FUN_146b640d8(local_918.QuadPart,local_db8);
        FUN_146b64190(local_918.QuadPart,local_e08);
        LVar32 = local_918;
        uVar34 = FUN_146b34570(&local_170);
        FUN_146b551be(LVar32.QuadPart,L"ChunkBuildATime");
        FUN_145928232(*(longlong *)(LVar32.QuadPart + 8),uVar34);
        LVar13 = local_918;
        *(int *)(LVar32.QuadPart + 0x20) = 8;
        uVar34 = FUN_146b34570(&local_1b0);
        FUN_146b551be(LVar13.QuadPart,L"ScanBuildBTime");
        FUN_145928232(*(longlong *)(LVar13.QuadPart + 8),uVar34);
        LVar32 = local_918;
        *(int *)(LVar13.QuadPart + 0x20) = 8;
        uVar34 = FUN_146b34570(&local_130);
        FUN_146b551be(LVar32.QuadPart,L"TotalProcessTime");
        FUN_145928232(*(longlong *)(LVar32.QuadPart + 8),uVar34);
        LVar13 = local_918;
        *(int *)(LVar32.QuadPart + 0x20) = 8;
        *(int *)(local_918.QuadPart + 0x24) = *(int *)(local_918.QuadPart + 0x24) + -1;
        local_b58 = (undefined **)CONCAT62(local_b58._2_6_,0x7d);
        (**(code **)(**(longlong **)(local_918.QuadPart + 8) + 0x170))
                  (*(longlong **)(local_918.QuadPart + 8),&local_b58,2);
        *(int *)(LVar13.QuadPart + 0x18) = *(int *)(LVar13.QuadPart + 0x18) + -1;
        FUN_14047c610((longlong *)(LVar13.QuadPart + 0x10));
        *(int *)(LVar13.QuadPart + 0x20) = 3;
        (**(code **)(*(longlong *)local_918 + 8))();
        uVar34 = FUN_14054d1d4();
        LVar32.QuadPart = (LONGLONG)&DAT_149dfb77a;
        if (uVar20 != 0) {
          LVar32 = LVar37;
        }
        local_d38.s = local_8a8.s;
        local_d30 = (int)uStack_8a0 + -1;
        if ((int)uStack_8a0 == 0) {
          local_d30 = 0;
        }
        local_e48 = (LARGE_INTEGER *)((ulonglong)local_e48 & 0xffffffff00000000);
        cVar15 = FUN_1415d54ec(&local_d38,LVar32.QuadPart,0,uVar34);
        plVar26 = plStack_910;
        if (cVar15 == '\0') {
          LOCK();
          *(undefined4 *)(param_1 + 0xbc) = 0;
          UNLOCK();
        }
        if (plStack_910 != (longlong *)0x0) {
          LOCK();
          plVar25 = plStack_910 + 1;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)*plVar25 == 0) {
            (**(code **)*plStack_910)(plStack_910);
            LOCK();
            piVar1 = (int *)((longlong)plVar26 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
        if ((longlong *)local_8a8.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong *)LVar37.QuadPart != (longlong *)0x0) {
          FUN_1400020a8(LVar37.QuadPart);
        }
      }
    }
    local_770 = 0;
    if (local_778 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_7b8);
    local_6d0 = 0;
    if (local_6d8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_718);
  }
  local_570 = 0;
  if (local_578 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_5b8);
  local_520 = 0;
  if (local_528 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_568);
  if (local_960 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b37ad4(local_510);
  local_210 = 0;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_258);
  local_1c0 = 0;
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_208);
  DeleteCriticalSection(&local_1b0);
  DeleteCriticalSection(&local_170);
  DeleteCriticalSection(&local_130);
LAB_142940a03:
  plVar26 = local_948;
  LOCK();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  UNLOCK();
  if (local_948 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_948 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*local_948)(local_948);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  plVar26 = local_938;
  if (local_938 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_938 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*local_938)(local_938);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_e68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142944753 FUN_142944753 body=843 status=ok
// SIG undefined FUN_142944753(void)

longlong * FUN_142944753(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  code *local_88;
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = (code *)*param_2;
  local_78 = (longlong *)param_2[2];
  param_2[2] = 0;
  local_68 = (undefined4)param_2[4];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = (undefined4)param_2[5];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_58 = (undefined4)param_2[6];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_50 = (undefined4)param_2[7];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_88 != (code *)0x0) {
    *param_2 = 0;
  }
  FUN_14170b918(&local_a8,param_3);
  plVar10 = plStack_a0;
  lVar2 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar6 = FUN_14118da1c();
      bVar4 = FUN_14054d46e(uVar6,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar3 = local_88;
    if (DAT_14c83f0f8 != 1) {
      plVar8 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar8 = (longlong *)&local_68;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar6);
      *(undefined4 *)(local_a8 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_142944864;
    }
  }
  FUN_145c3b830(&local_c0);
  puVar7 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  local_b0 = 1;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  *puVar7 = TAsyncRunnable<void>::vftable;
  puVar7[2] = local_88;
  puVar7[4] = local_78;
  local_78 = (longlong *)0x0;
  *(undefined4 *)(puVar7 + 8) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_54;
  *(undefined4 *)(puVar7 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_4c;
  puVar7[6] = CONCAT44(uStack_64,local_68);
  puVar7[7] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar7[10] = local_a8;
  puVar7[0xb] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar7[0xd] = local_c0;
  puVar7[0xe] = local_b8;
  uVar5 = FUN_146268020();
  FUN_140002266(&local_d0,L"TAsync %d",uVar5);
  puVar9 = local_d0;
  if (local_c8 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  local_e0 = 0;
  local_e8 = 0xffffffffffffffff;
  uVar6 = FUN_1411b1052(puVar7,puVar9,0,0);
  *(undefined8 *)(local_c0 + 0x80) = uVar6;
  FUN_140b576f0();
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
LAB_142944864:
  plVar8 = plStack_a0;
  *param_1 = lVar2;
  param_1[1] = (longlong)plVar10;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    plVar10 = (longlong *)&local_68;
    if (local_78 != (longlong *)0x0) {
      plVar10 = local_78;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (*param_3 != 0) {
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142944a9f FUN_142944a9f body=578 status=ok
// SIG undefined FUN_142944a9f(void)

undefined8 * FUN_142944a9f(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  longlong local_78 [2];
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = *param_2;
  local_68 = (longlong *)param_2[2];
  param_2[2] = 0;
  local_58 = (undefined4)param_2[4];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_50 = (undefined4)param_2[5];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_48 = (undefined4)param_2[6];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = (undefined4)param_2[7];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_78[0] != 0) {
    *param_2 = 0;
  }
  FUN_146b80148(&local_98,param_3);
  plVar7 = plStack_90;
  uVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar6 = FUN_14118da1c();
        bVar4 = FUN_14054d46e(uVar6,L"nothreading");
        DAT_14c83f0f8 = bVar4 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_146b800b1(&local_98,local_78);
      goto LAB_142944bef;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_149f33920;
  puVar5[2] = local_78[0];
  puVar5[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar5 + 8) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_44;
  *(undefined4 *)(puVar5 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_3c;
  puVar5[6] = CONCAT44(uStack_54,local_58);
  puVar5[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78[0] != 0) {
    local_78[0] = 0;
  }
  puVar5[10] = local_98;
  puVar5[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar5 + 0xc) = local_88;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,3);
LAB_142944bef:
  plVar2 = plStack_90;
  *param_1 = uVar3;
  param_1[1] = plVar7;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78[0] != 0) {
    plVar7 = (longlong *)&local_58;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142944ce2 FUN_142944ce2 body=1661 status=ok
// SIG undefined FUN_142944ce2(void)

byte FUN_142944ce2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined2 **ppuVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  short *psVar16;
  byte unaff_R13B;
  byte bVar17;
  longlong *plVar18;
  short *psVar19;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  byte local_119;
  undefined2 **local_118;
  undefined8 local_110;
  undefined2 **local_108;
  undefined2 *local_100;
  short *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined2 **local_88;
  undefined8 uStack_80;
  undefined2 **local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  bVar2 = 0;
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),puVar8,0);
  if (plVar7 == (longlong *)0x0) goto LAB_142945328;
  local_e8 = 0;
  uStack_e0 = 0;
  iVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar5);
  if (iVar5 == 0) {
    lVar14 = 0;
    lVar13 = 0;
  }
  else {
    FUN_1447403be(&local_e8,0);
    lVar13 = (longlong)(int)uStack_e0;
    lVar14 = local_e8;
  }
  bVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar14,lVar13);
  if (bVar2 != 0) {
    local_f8 = (short *)0x0;
    uStack_f0 = 0;
    FUN_14170ac0e(&local_f8,local_e8,uStack_e0 & 0xffffffff);
    psVar16 = local_f8;
    if ((int)uStack_f0 == 0) {
      psVar16 = &DAT_149dfb77a;
    }
    sVar4 = *psVar16;
    if (sVar4 == 0) {
      unaff_R13B = 1;
    }
    else {
      plVar18 = (longlong *)(param_1 + 0x10);
      bVar17 = 1;
      unaff_R13B = 0;
      do {
        psVar19 = psVar16 + 2;
        psVar9 = psVar16;
        while( true ) {
          psVar9 = psVar9 + 1;
          if (sVar4 == 0) goto LAB_1429452ff;
          if (sVar4 == 0x22) break;
          sVar4 = *psVar9;
          psVar19 = psVar19 + 1;
        }
        iVar5 = 0;
        while( true ) {
          sVar4 = psVar19[-1];
          if ((sVar4 == 0) || (sVar4 == 10)) goto LAB_1429452f7;
          if (sVar4 == 0x22) break;
          iVar5 = iVar5 + 1;
          psVar19 = psVar19 + 1;
        }
        iVar12 = 0;
        psVar16 = psVar19;
        while( true ) {
          sVar4 = *psVar16;
          if (sVar4 == 0x22) goto LAB_1429452f7;
          if ((sVar4 == 0) || (sVar4 == 10)) break;
          psVar16 = psVar16 + 1;
          iVar12 = iVar12 + 1;
        }
        FUN_14006620a(&local_88,psVar9,iVar5);
        FUN_1448097c4(&local_88,&DAT_149e01f64,&DAT_149e065c6,1);
        local_118 = local_88;
        local_70 = local_88;
        local_68 = (int)uStack_80;
        local_64 = uStack_80._4_4_;
        uVar11 = 0;
        iVar5 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar5 = 0;
        }
        if (0 < iVar5) {
          if ((int)uStack_80 == 0) {
            local_118 = (undefined2 **)&DAT_149dfb77a;
          }
          lVar14 = 0;
          uVar11 = 0;
          do {
            uVar1 = *(ushort *)((longlong)local_118 + lVar14 * 2);
            uVar6 = ((uint)uVar1 + (uint)(0x19 < uVar1 - 0x61) * 0x20) - 0x20;
            uVar15 = (uint)(uVar11 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar6) & 0xff) * 4);
            uVar11 = (ulonglong)
                     (uVar15 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar6 >> 8 & 0xff) * 4))
            ;
            lVar14 = lVar14 + 1;
          } while (iVar5 != (int)lVar14);
        }
        local_110 = FUN_146b8286c(param_3,uVar11,&local_70);
        local_88 = (undefined2 **)0x0;
        uStack_80 = 0;
        FUN_14006620a(local_98,psVar19,iVar12);
        local_138 = CONCAT31(local_138._1_3_,1);
        FUN_144a38a52(local_98,&local_88,&PTR_DAT_149e00c20,4);
        if ((longlong)(int)uStack_80 != 0) {
          local_108 = local_88 + (longlong)(int)uStack_80 * 2;
          ppuVar10 = local_88;
          do {
            local_119 = bVar17;
            local_a8 = (undefined2 *)0x0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            FUN_140056680(local_c8,&DAT_149e31048);
            local_130 = 0;
            local_138 = 1;
            cVar3 = FUN_1407cdbc6(ppuVar10,local_c8,&local_a8,&local_b8);
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            if (&local_a8 != ppuVar10 && cVar3 == '\0') {
              uVar6 = *(uint *)(ppuVar10 + 1);
              puVar8 = *ppuVar10;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
              if (uVar6 == 0 && uStack_a0._4_4_ == 0) {
                uStack_a0 = (ulonglong)uVar6;
              }
              else {
                FUN_1446dd670(&local_a8,uVar6);
                if (uVar6 != 0) {
                  memcpy(local_a8,puVar8,(longlong)(int)uVar6 * 2);
                }
              }
            }
            iVar5 = (int)uStack_a0 + -1;
            if ((int)uStack_a0 == 0) {
              iVar5 = 0;
            }
            local_118 = ppuVar10;
            if (iVar5 < 1) {
              uVar6 = 0;
              iVar5 = FUN_146b82550(plVar18,0,&local_a8);
              bVar17 = 0;
              if (iVar5 != -1) goto LAB_142945208;
            }
            else {
              local_100 = &DAT_149dfb77a;
              if ((int)uStack_a0 != 0) {
                local_100 = local_a8;
              }
              lVar14 = 0;
              uVar11 = 0;
              do {
                uVar6 = ((uint)(ushort)local_100[lVar14] +
                        (uint)(0x19 < (ushort)local_100[lVar14] - 0x61) * 0x20) - 0x20;
                uVar15 = (uint)(uVar11 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar6) & 0xff) * 4);
                uVar11 = (ulonglong)
                         (uVar15 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar15 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
                lVar14 = lVar14 + 1;
              } while (iVar5 != (int)lVar14);
              iVar12 = FUN_146b82550(plVar18,uVar11,&local_a8);
              uVar6 = 0;
              bVar17 = 0;
              if (iVar12 != -1) {
                lVar14 = 0;
                do {
                  uVar15 = ((uint)(ushort)local_100[lVar14] +
                           (uint)(0x19 < (ushort)local_100[lVar14] - 0x61) * 0x20) - 0x20;
                  uVar6 = uVar6 >> 8 ^
                          *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar15) & 0xff) * 4);
                  uVar6 = uVar6 >> 8 ^
                          *(uint *)(&DAT_14c75d150 +
                                   (ulonglong)(uVar6 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
                  lVar14 = lVar14 + 1;
                } while (iVar5 != (int)lVar14);
LAB_142945208:
                iVar5 = FUN_146b82550(plVar18,uVar6,&local_a8);
                if (iVar5 == -1) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (longlong)iVar5 * 0x20 + *plVar18;
                }
                local_d8 = (undefined4)local_b8;
                uStack_d4 = local_b8._4_4_;
                uStack_d0 = (undefined4)uStack_b0;
                uStack_cc = uStack_b0._4_4_;
                local_b8 = 0;
                uStack_b0 = 0;
                (**(code **)(lVar14 + 0x10))(local_110,&local_d8);
                bVar17 = local_119;
              }
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            ppuVar10 = local_118 + 2;
          } while (ppuVar10 != local_108);
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
        if (local_88 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        if (local_70 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        sVar4 = *psVar16;
        unaff_R13B = bVar17;
      } while (sVar4 != 0);
    }
    goto LAB_1429452ff;
  }
LAB_142945309:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  bVar2 = bVar2 & unaff_R13B;
  (**(code **)*plVar7)(plVar7,1);
LAB_142945328:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
LAB_1429452f7:
  unaff_R13B = 0;
LAB_1429452ff:
  if (local_f8 != (short *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_142945309;
}



// FUNCTION 142945360 FUN_142945360 body=117 status=ok
// SIG undefined FUN_142945360(void)

void FUN_142945360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  FUN_146b30c62(param_1 + 0x78,param_3,0);
  uVar2 = FUN_1447addd0(param_2,0x10);
  plVar3 = (longlong *)FUN_146b83088(param_1 + 0x88,uVar2,param_2);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_146b83638(plVar3,iVar1);
  }
  FUN_146b31318((longlong)iVar1 * 0x10 + *plVar3,param_3);
  return;
}



// FUNCTION 1429453d6 FUN_1429453d6 body=2229 status=ok
// SIG undefined FUN_1429453d6(void)

ulonglong FUN_1429453d6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  byte bVar26;
  bool bVar27;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  byte local_171;
  longlong local_170;
  longlong *local_168;
  undefined8 *local_160;
  longlong *local_158;
  int local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined1 local_12c [4];
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_170 = param_1;
  local_158 = param_3;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar25 = (undefined8 *)*param_2;
    local_160 = puVar25 + (longlong)*(int *)(param_2 + 1) * 9;
    local_168 = (longlong *)(param_1 + 0x28);
    do {
      iVar8 = *(int *)(puVar25 + 1);
      uVar24 = 0;
      iVar14 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar14 = 0;
      }
      if (0 < iVar14) {
        puVar11 = &DAT_149dfb77a;
        if (iVar8 != 0) {
          puVar11 = (undefined2 *)*puVar25;
        }
        lVar18 = 0;
        uVar24 = 0;
        do {
          uVar16 = ((uint)(0x19 < (ushort)puVar11[lVar18] - 0x61) * 0x20 +
                   (uint)(ushort)puVar11[lVar18]) - 0x20;
          uVar19 = (uint)(uVar24 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar24 ^ uVar16) & 0xff) * 4);
          uVar24 = (ulonglong)
                   (uVar19 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar16 >> 8 & 0xff) * 4));
          lVar18 = lVar18 + 1;
        } while (iVar14 != (int)lVar18);
      }
      iVar8 = FUN_146b828f2(local_168,uVar24,puVar25);
      if ((iVar8 == -1) || (lVar18 = (longlong)iVar8 * 0x70 + *local_168, lVar18 == 0)) {
        local_118 = local_118 & 0xffffffffff000000;
        local_f0 = 0;
        local_e8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        local_e4 = 0xffffffff00000080;
        local_dc = 0;
        local_d0 = 0;
        local_c8 = 0;
      }
      else {
        local_118 = CONCAT62(CONCAT51(local_118._3_5_,*(undefined1 *)(lVar18 + 0x12)),
                             *(undefined2 *)(lVar18 + 0x10));
        local_f0 = 0;
        local_e8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        local_e4 = 0xffffffff00000080;
        local_dc = 0;
        local_d0 = 0;
        local_c8 = 0;
        FUN_1410b2022(&uStack_110,lVar18 + 0x18);
      }
      FUN_146b6b3a4(*(longlong *)(param_1 + 0x18) + 0xf8);
      puVar21 = (undefined8 *)
                ((longlong)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x100) + -1) * 0x60 +
                *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xf8));
      if (puVar21 != puVar25) {
        iVar8 = *(int *)(puVar25 + 1);
        pvVar3 = (void *)*puVar25;
        *(int *)(puVar21 + 1) = iVar8;
        if (iVar8 == 0 && *(int *)((longlong)puVar21 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar21 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar21,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*puVar21,pvVar3,(longlong)iVar8 * 2);
          }
        }
      }
      *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(puVar25 + 6);
      uVar9 = *(undefined4 *)((longlong)puVar25 + 0x24);
      uVar5 = *(undefined4 *)(puVar25 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar25 + 0x2c);
      *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(puVar25 + 4);
      *(undefined4 *)((longlong)puVar21 + 0x24) = uVar9;
      *(undefined4 *)(puVar21 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar6;
      FUN_140e83cb0(&uStack_110,&local_128);
      FUN_1410e5bda(puVar21 + 7,&local_128);
      FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar21 + 2;
      if (puVar1 != puVar25 + 7) {
        iVar8 = *(int *)(puVar25 + 8);
        pvVar3 = (void *)puVar25[7];
        *(int *)(puVar21 + 3) = iVar8;
        if (iVar8 == 0 && *(int *)((longlong)puVar21 + 0x1c) == 0) {
          *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*puVar1,pvVar3,(longlong)iVar8 * 2);
          }
        }
      }
      param_1 = local_170;
      if ((char)local_118 == '\x01') {
        *(byte *)((longlong)puVar21 + 0x34) = *(byte *)((longlong)puVar21 + 0x34) | 1;
      }
      if (local_118._1_1_ == '\x01') {
        *(byte *)((longlong)puVar21 + 0x34) = *(byte *)((longlong)puVar21 + 0x34) | 2;
      }
      if ((local_118._2_1_ != '\0') || (*(char *)((longlong)puVar25 + 0x34) == '\x01')) {
        *(byte *)((longlong)puVar21 + 0x34) = *(byte *)((longlong)puVar21 + 0x34) | 4;
      }
      local_188 = local_b8;
      FUN_146b6b3e2(local_170,&local_128,puVar25[3],puVar25[2]);
      if (puVar21 + 9 != &local_128) {
        if (puVar21[9] != 0) {
          FUN_1400020a8();
        }
        puVar21[9] = local_128;
        local_128 = 0;
        *(undefined4 *)(puVar21 + 10) = (undefined4)uStack_120;
        *(undefined4 *)((longlong)puVar21 + 0x54) = uStack_120._4_4_;
        uStack_120 = 0;
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      local_c8 = 0;
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&uStack_110);
      puVar25 = puVar25 + 9;
    } while (puVar25 != local_160);
  }
  lVar18 = *(longlong *)(param_1 + 0x18);
  if ((longlong *)(lVar18 + 0xe8) != local_158) {
    if (*(longlong *)(lVar18 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar18 + 0xe8) = *local_158;
    *local_158 = 0;
    *(int *)(lVar18 + 0xf0) = (int)local_158[1];
    *(undefined4 *)(lVar18 + 0xf4) = *(undefined4 *)((longlong)local_158 + 0xc);
    local_158[1] = 0;
    lVar18 = *(longlong *)(param_1 + 0x18);
  }
  iVar8 = *(int *)(lVar18 + 0xf0);
  lVar17 = (longlong)iVar8;
  if (lVar17 != 0) {
    lVar22 = *(longlong *)(lVar18 + 0xe8);
    local_148 = lVar18;
    uVar9 = FUN_1447addd0(lVar22,0x10);
    iVar14 = FUN_140f5cb3a(local_b8,uVar9,lVar22);
    bVar26 = iVar14 == -1;
    local_138 = lVar22 + 0x40;
    iVar14 = 0;
    iVar23 = 0;
    local_140 = lVar22;
    do {
      local_160 = (undefined8 *)CONCAT44(local_160._4_4_,iVar14);
      local_168 = (longlong *)(CONCAT71(local_168._1_7_,bVar26) ^ 1);
      lVar18 = (longlong)iVar23;
      iVar14 = iVar23 + 1;
      if (iVar23 + 1 < iVar8) {
        iVar14 = iVar8;
      }
      lVar20 = lVar18 * 0x40;
      lVar22 = local_138 + lVar20;
      local_171 = bVar26;
      local_14c = iVar23;
      do {
        lVar18 = lVar18 + 1;
        iVar15 = iVar14;
        if (lVar17 <= lVar18) break;
        uVar9 = FUN_1447addd0(lVar22,0x10);
        iVar10 = FUN_140f5cb3a(local_b8,uVar9,lVar22);
        iVar23 = iVar23 + 1;
        lVar22 = lVar22 + 0x40;
        iVar15 = iVar23;
      } while ((bool)(bVar26 & 1) == (iVar10 == -1));
      iVar23 = iVar15;
      iVar14 = (int)local_160;
      if ((local_171 & 1) == 0) {
        iVar15 = iVar23 - local_14c;
        if ((int)local_160 != local_14c) {
          memmove((void *)((longlong)(int)local_160 * 0x40 + local_140),(void *)(lVar20 + local_140)
                  ,(longlong)iVar15 << 6);
        }
        iVar14 = iVar14 + iVar15;
        bVar26 = (byte)local_168;
      }
      else {
        bVar26 = (byte)local_168;
      }
    } while (lVar18 < lVar17);
    *(int *)(local_148 + 0xf0) = iVar14;
    lVar18 = *(longlong *)(local_170 + 0x18);
    param_1 = local_170;
  }
  FUN_146b5b6ce(lVar18 + 0xf8);
  FUN_146b377ca(*(undefined8 *)(param_1 + 0x18));
  iVar8 = local_90;
  if (local_90 == 0) {
    uVar13 = 1;
    uVar24 = 0;
    iVar23 = 0;
    iVar14 = 0;
  }
  else {
    puVar12 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar12 = local_a8;
    }
    uVar16 = *puVar12;
    if (uVar16 == 0) {
      iVar14 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar14 = local_90 + -1;
      }
      uVar24 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar24;
      }
      iVar23 = 0;
      do {
        if (uVar13 == uVar24) goto LAB_142945b33;
        iVar23 = iVar23 + 0x20;
        uVar16 = puVar12[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar24 = 0;
      iVar23 = 0;
    }
    uVar13 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar13 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar14 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (local_90 <= iVar14) {
      iVar14 = local_90;
    }
  }
  if (iVar14 == local_90) {
LAB_142945b33:
    lVar18 = local_170;
    plVar4 = *(longlong **)(local_170 + 0x18);
    if (((int)plVar4[0xc] == *(int *)((longlong)plVar4 + 0x8c)) && (1 < (int)plVar4[0x18])) {
      local_118 = 0;
      uStack_110 = 0;
      uStack_108 = uStack_108 & 0xffffffff00000000;
      (**(code **)(*plVar4 + 0xb8))(plVar4,plVar4 + 0x17,&local_118);
      lVar18 = *(longlong *)(lVar18 + 0x18);
      local_128 = 0;
      uStack_120 = 0;
      FUN_1407c8a86(&local_118,0x14,&local_128);
      FUN_140e830ae(lVar18 + 0x58,local_12c,&local_128,0);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    lVar17 = local_170;
    lVar18 = *(longlong *)(local_170 + 0x78);
    if (lVar18 == 0) {
      bVar27 = true;
LAB_142945be6:
      uVar24 = 0;
      if ((!bVar27) || (*(char *)(local_170 + 0x10) == '\0')) goto LAB_142945c0e;
    }
    else {
      uVar24 = *(ulonglong *)(lVar18 + 8);
      bVar27 = *(longlong *)(lVar18 + 0x18) == 0;
      if (uVar24 == 0) goto LAB_142945be6;
      if (*(longlong *)(lVar18 + 0x18) != 0) goto LAB_142945c0c;
    }
    uVar13 = (**(code **)(**(longlong **)(local_170 + 0x18) + 0x78))();
    if (uVar24 == uVar13) {
      *(undefined1 *)(lVar17 + 0xd8) = 1;
      uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
      goto LAB_142945c0e;
    }
  }
  else {
    uVar16 = 0xffffffff;
    bVar27 = true;
    do {
      cVar7 = (**(code **)(**(longlong **)(local_170 + 0x18) + 0x208))
                        (*(longlong **)(local_170 + 0x18),(longlong)iVar14 * 0x18 + local_b8[0],
                         &local_118);
      if (cVar7 == '\0') {
        bVar27 = false;
      }
      uVar16 = ~(uint)uVar13 & uVar16;
      puVar12 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar12 = local_a8;
      }
      iVar14 = (int)uVar24;
      lVar18 = (longlong)iVar14;
      uVar19 = puVar12[lVar18] & uVar16;
      if (uVar19 == 0) {
        iVar15 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar15 = local_90 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar10 = iVar15;
        if (iVar15 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar14 < iVar15) {
          lVar17 = 0;
          do {
            uVar19 = puVar12[lVar18 + lVar17 + 1];
            if (uVar19 != 0) {
              uVar24 = (ulonglong)(iVar14 + (int)lVar17 + 1);
              uVar16 = 0xffffffff;
              goto LAB_142945ae4;
            }
            iVar23 = iVar23 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar10 - lVar18 != lVar17);
          uVar16 = 0xffffffff;
          iVar14 = iVar10;
        }
        uVar24 = (ulonglong)(iVar14 + 1);
        iVar14 = local_90;
      }
      else {
LAB_142945ae4:
        uVar13 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar13 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar14 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (local_90 <= iVar14) {
          iVar14 = local_90;
        }
      }
    } while (iVar14 != iVar8);
    if (bVar27) goto LAB_142945b33;
  }
LAB_142945c0c:
  uVar24 = 0;
LAB_142945c0e:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_b8);
  if (*local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 142945c8c FUN_142945c8c body=258 status=ok
// SIG undefined FUN_142945c8c(void)

byte FUN_142945c8c(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    local_30 = *(int *)(param_2 + 1);
    lVar5 = (longlong)local_30;
    local_38 = (undefined2 *)0x0;
    _Src = (void *)*param_2;
    FUN_1446dd670(&local_38,(uint)(lVar5 == 0) + local_30 + 3,0);
    if (lVar5 != 0) {
      memcpy(local_38,_Src,lVar5 * 2);
    }
    FUN_1400020e8(&local_38,&DAT_149f2f624,3);
    plVar1 = *(longlong **)(param_1 + 0x18);
    bVar2 = (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,(int)plVar1[1]);
    puVar4 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar4 = (undefined2 *)*param_2;
    }
    bVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                      (*(longlong **)(param_1 + 8),puVar4,puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar2 = bVar2 & bVar3;
  }
  else {
    bVar2 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142945d90 FUN_142945d90 body=1058 status=ok
// SIG undefined FUN_142945d90(void)

/* WARNING: Removing unreachable block (ram,0x000142946133) */
/* WARNING: Removing unreachable block (ram,0x000142946142) */
/* WARNING: Removing unreachable block (ram,0x000142946146) */

void FUN_142945d90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_178 [40];
  longlong *local_150;
  code **local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_110 [16];
  int local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((*(longlong *)(param_1 + 0x138) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x138) + 0x78) & 1) != 0)) &&
      (*(longlong *)(param_1 + 0x148) != 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x148) + 0x78) & 1) != 0 &&
      (*(char *)(param_1 + 0xf0) == '\0')))) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
    lVar4 = *(longlong *)(param_1 + 0x138);
    while ((*(byte *)(lVar4 + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x20))(*(longlong **)(lVar4 + 0x70),0xffffffff);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x80);
    lVar4 = *(longlong *)(lVar4 + 0x88);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = uVar5;
    *(longlong *)(param_1 + 0x160) = lVar4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    lVar4 = *(longlong *)(param_1 + 0x148);
    while ((*(byte *)(lVar4 + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x20))(*(longlong **)(lVar4 + 0x70),0xffffffff,0)
      ;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x80);
    lVar4 = *(longlong *)(lVar4 + 0x88);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x168) = uVar5;
    *(longlong *)(param_1 + 0x170) = lVar4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (*(longlong *)(param_1 + 0x158) == 0) {
      LOCK();
      *(undefined4 *)(param_1 + 0xf8) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0xf4) = 0;
      UNLOCK();
    }
    if ((1 < *(int *)(param_1 + 0x28)) && (*(longlong *)(param_1 + 0x168) == 0)) {
      LOCK();
      *(undefined4 *)(param_1 + 0xf8) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0xf4) = 0;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0xf8) != 0) {
      local_140 = *(undefined8 *)(param_1 + 0x158);
      local_138 = *(longlong *)(param_1 + 0x160);
      if (local_138 != 0) {
        LOCK();
        *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
        UNLOCK();
      }
      FUN_146b9011e(&local_130,&local_140);
      plVar1 = local_128;
      local_130 = *(undefined8 *)(param_1 + 0x168);
      plVar8 = *(longlong **)(param_1 + 0x170);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_128 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar6 = (undefined8 *)*local_128;
          local_128 = plVar8;
          (*(code *)*puVar6)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = local_128;
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            plVar8 = local_128;
          }
        }
      }
      local_128 = plVar8;
      local_100 = (uint)(*(int *)(param_1 + 8) < 0x11) * 2;
      FUN_140bee914(local_b8,param_1 + 0x10);
      local_148 = &local_a8;
      local_150 = local_b8;
      FUN_146027ed4(local_110);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      local_b8[0] = *(longlong *)(param_1 + 0x1f0);
      local_48 = (undefined4)local_88;
      uStack_44 = local_88._4_4_;
      uStack_40 = (undefined4)uStack_80;
      uStack_3c = uStack_80._4_4_;
      local_38 = (undefined4)local_78;
      uStack_34 = local_78._4_4_;
      uStack_30 = uStack_70;
      uStack_2c = uStack_6c;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
      local_a8 = FUN_142951fee;
      local_98 = (longlong *)0x0;
      local_88 = &PTR_LAB_149f33b40;
      uStack_80 = param_1;
      local_78 = FUN_146b6db8c;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      uStack_54 = 0;
      local_58 = 0;
      uStack_64 = 0;
      local_68 = 0;
      local_78 = FUN_146b6db8c;
      local_88 = &PTR_LAB_149f33b40;
      local_98 = (longlong *)0x0;
      local_a8 = FUN_142951fee;
      uStack_dc = uStack_8c;
      uStack_e0 = uStack_90;
      local_e8 = 0;
      uStack_ec = uStack_9c;
      uStack_f0 = uStack_a0;
      local_f8 = 0;
      puVar7 = (undefined8 *)FUN_146b90188(&local_130,local_b8);
      puVar6 = *(undefined8 **)(param_1 + 0x208);
      if ((puVar6 != puVar7) &&
         (*(undefined8 **)(param_1 + 0x208) = puVar7, puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
      if (local_a8 != (code *)0x0) {
        plVar8 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar8 = &local_88;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      FUN_146b32214(&local_130);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429461b4 FUN_1429461b4 body=5317 status=ok
// SIG undefined FUN_1429461b4(void)

void FUN_1429461b4(longlong param_1)

{
  int *piVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  uchar auVar18 [8];
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined4 *puVar34;
  undefined2 *puVar35;
  longlong *plVar36;
  ulonglong uVar37;
  uint uVar38;
  wchar_t *pwVar39;
  longlong lVar40;
  bool bVar41;
  undefined1 auStack_608 [32];
  undefined ***local_5e8;
  wchar_t *local_5e0;
  undefined1 **local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined8 local_5b8;
  undefined8 *local_5b0;
  longlong local_5a0;
  int local_594;
  ulonglong local_590;
  longlong *local_588;
  longlong local_580;
  ulonglong local_578;
  longlong local_570;
  wchar_t *local_568;
  ulonglong local_560;
  longlong local_558;
  undefined4 local_54c;
  longlong local_548;
  ulonglong local_540;
  longlong *local_538;
  longlong local_530;
  uint *local_528;
  undefined8 local_520;
  int local_518;
  undefined4 local_514;
  undefined1 local_510 [96];
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined8 local_484;
  void **local_478;
  undefined1 *local_470;
  undefined1 local_468 [16];
  longlong local_458;
  undefined8 uStack_450;
  undefined8 local_440;
  longlong local_430;
  undefined8 uStack_428;
  undefined **local_420;
  longlong *local_418;
  byte local_3f8;
  byte local_3f7;
  longlong *local_3c8;
  longlong local_3a8;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong local_378;
  ulonglong uStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  longlong local_348;
  ulonglong uStack_340;
  undefined1 *local_338 [2];
  undefined8 local_328;
  undefined **local_318;
  longlong local_310;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  GUID local_2a8;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  uint5 local_268;
  undefined3 uStack_263;
  undefined4 local_260;
  undefined1 local_248 [64];
  longlong local_208;
  undefined4 local_200;
  undefined1 local_1f8 [64];
  longlong local_1b8;
  undefined4 local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  int local_100;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_608;
  cVar5 = *(char *)(param_1 + 0x180);
  pwVar39 = L".chunkdb";
  if (cVar5 != '\0') {
    pwVar39 = L".delta.chunkdb";
  }
  local_348 = 0;
  uStack_340 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_146b6de70(&local_348);
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  else {
    FUN_146b6dea8(&local_348);
  }
  lVar32 = (longlong)(int)(uint)uStack_340;
  iVar28 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar28 + (uint)uStack_340;
  if ((uint)(*(int *)(param_1 + 0x1a4) - iVar28) < (uint)uStack_340) {
    FUN_140bfc2d4(param_1 + 0x198);
  }
  memset((void *)((longlong)iVar28 * 0x10 + *(longlong *)(param_1 + 0x198)),0,lVar32 << 4);
  plVar36 = *(longlong **)(param_1 + 0x168);
  if (plVar36 == (longlong *)0x0) {
    local_420 = *(undefined ***)(param_1 + 0x158);
    local_418 = *(longlong **)(param_1 + 0x160);
    if (local_418 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_418 + 1) = (int)local_418[1] + 1;
      UNLOCK();
    }
    FUN_146b6c969(local_368,&local_348,&local_420);
    puVar22 = (undefined8 *)FUN_146b600f6(local_368);
    puVar6 = *(undefined8 **)(param_1 + 0x1f8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x1f8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
      (**(code **)(*plVar36 + 0xc0))(plVar36,&local_b8);
    }
    else {
      FUN_1410b2022(&local_b8,param_1 + 0x40);
    }
    local_420 = *(undefined ***)(param_1 + 0x168);
    local_418 = *(longlong **)(param_1 + 0x170);
    if (local_418 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_418 + 1) = (int)local_418[1] + 1;
      UNLOCK();
    }
    local_2a8._0_8_ = *(undefined8 *)(param_1 + 0x158);
    local_2a8.Data4 = *(uchar (*) [8])(param_1 + 0x160);
    if (local_2a8.Data4 != (uchar  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_2a8.Data4 + 8) = *(int *)((longlong)local_2a8.Data4 + 8) + 1;
      UNLOCK();
    }
    local_5e8 = &local_420;
    FUN_146b6c4bc(local_358,&local_348,&local_2a8,&local_b8);
    puVar22 = (undefined8 *)FUN_146b600f6(local_358);
    puVar6 = *(undefined8 **)(param_1 + 0x1f8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x1f8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    auVar18 = local_2a8.Data4;
    if (local_2a8.Data4 != (uchar  [8])0x0) {
      LOCK();
      plVar36 = (longlong *)((longlong)local_2a8.Data4 + 8);
      *(int *)plVar36 = *(int *)plVar36 + -1;
      UNLOCK();
      if (*(int *)plVar36 == 0) {
        (*(code *)**(undefined8 **)local_2a8.Data4)(local_2a8.Data4);
        LOCK();
        piVar1 = (int *)((longlong)auVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)auVar18 + 0x10))(auVar18);
        }
      }
    }
  }
  plVar36 = local_418;
  if (local_418 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_418 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*local_418)(local_418);
      LOCK();
      piVar1 = (int *)((longlong)plVar36 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
      }
    }
  }
  local_378 = 0;
  uStack_370 = 0;
  memset(&local_420,0,0x90);
  FUN_144869430(&local_420);
  local_390 = 0;
  local_380 = 0;
  local_3f8 = local_3f8 | 4;
  local_3f7 = local_3f7 & 0xfe;
  local_420 = &PTR_FUN_149e1e330;
  local_440 = 0x1800000001;
  local_430 = 0;
  uStack_428 = 0;
  local_388 = &local_378;
  FUN_146b447fa(&local_420);
  local_548 = (longlong)(int)uStack_370;
  local_390 = 0;
  bVar41 = (longlong)uStack_370 < 0;
  uStack_370 = uStack_370 & 0xffffffff00000000;
  if (bVar41) {
    FUN_144893a1c(&local_378,0);
  }
  local_2a8._0_8_ = (undefined2 *)0x0;
  local_2a8.Data4[0] = '\0';
  local_2a8.Data4[1] = '\0';
  local_2a8.Data4[2] = '\0';
  local_2a8.Data4[3] = '\0';
  local_2a8.Data4[4] = '\0';
  local_2a8.Data4[5] = '\0';
  local_2a8.Data4[6] = '\0';
  local_2a8.Data4[7] = '\0';
  CoCreateGuid(&local_2a8);
  uVar33 = uStack_428;
  local_298 = 0;
  uStack_290 = 0;
  lVar32 = (longlong)(int)uStack_428;
  uVar19 = (int)uStack_428 + 1;
  uStack_428 = CONCAT44(uStack_428._4_4_,uVar19);
  if (uStack_428._4_4_ < uVar19) {
    FUN_146b5a946(&local_430,uVar33 & 0xffffffff);
  }
  puVar34 = (undefined4 *)(local_430 + 0x10 + lVar32 * 0x20);
  *puVar34 = (undefined4)local_298;
  puVar34[1] = local_298._4_4_;
  puVar34[2] = uStack_290;
  puVar34[3] = uStack_28c;
  puVar2 = (ulong *)(local_430 + lVar32 * 0x20);
  *puVar2 = local_2a8.Data1;
  puVar2[1] = local_2a8._4_4_;
  puVar2[2] = local_2a8.Data4._0_4_;
  puVar2[3] = local_2a8.Data4._4_4_;
  FUN_146b447fa(&local_420);
  local_558 = (longlong)(int)uStack_370;
  (**(code **)(**(longlong **)(param_1 + 0x1f8) + 8))(*(longlong **)(param_1 + 0x1f8),local_108);
  if (local_d4 < local_100) {
    local_458 = 0;
    uStack_450 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_5a0 = param_1;
    local_568 = pwVar39;
    if ((longlong)(int)(uint)uStack_340 != 0) {
      local_578 = CONCAT71(local_578._1_7_,cVar5);
      local_558 = local_558 - local_548;
      lVar32 = (longlong)(int)(uint)uStack_340 * 0x50;
      local_590 = local_590 & 0xffffffff00000000;
      lVar40 = local_348;
      do {
        lVar29 = local_5a0;
        local_288 = 0;
        local_280 = 0;
        local_2a8._0_8_ = (undefined2 *)0x0;
        local_2a8.Data4[0] = '\0';
        local_2a8.Data4[1] = '\0';
        local_2a8.Data4[2] = '\0';
        local_2a8.Data4[3] = '\0';
        local_2a8.Data4[4] = '\0';
        local_2a8.Data4[5] = '\0';
        local_2a8.Data4[6] = '\0';
        local_2a8.Data4[7] = '\0';
        local_27c = 0xffffffff00000080;
        local_274 = 0;
        _local_268 = 0;
        local_260 = 0;
        local_188 = 0;
        local_180 = 0;
        local_1a8 = (void *)0x0;
        uStack_1a0 = 0;
        local_17c = 0xffffffff00000080;
        local_174 = 0;
        local_168 = 0;
        local_160 = 0;
        (**(code **)(**(longlong **)(local_5a0 + 0x158) + 0x1d0))
                  (*(longlong **)(local_5a0 + 0x158),lVar40,&local_1a8);
        (**(code **)(**(longlong **)(lVar29 + 0x158) + 0x188))
                  (*(longlong **)(lVar29 + 0x158),&local_1a8,&local_2a8);
        FUN_146b35124(&local_2a8,local_248,local_108);
        FUN_1461c8dd4(local_248,local_1f8,&local_158);
        FUN_14681b5ea(&local_2a8,local_1f8);
        local_1b0 = 0;
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(local_1f8);
        local_200 = 0;
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(local_248);
        if (local_274 < (int)local_2a8.Data4._0_4_) {
          local_590 = CONCAT44(local_590._4_4_,(int)local_590 + 1);
          FUN_146b6df08(&local_158,&local_2a8);
        }
        uVar33 = uStack_450;
        lVar29 = (longlong)(int)uStack_450;
        uVar19 = (int)uStack_450 + 1;
        uStack_450 = CONCAT44(uStack_450._4_4_,uVar19);
        if (uStack_450._4_4_ < uVar19) {
          FUN_146b83ac6(&local_458,uVar33 & 0xffffffff);
        }
        FUN_1409e67a4(lVar29 * 0x50 + local_458,&local_2a8);
        local_160 = 0;
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_1a8);
        local_260 = 0;
        if (_local_268 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_2a8);
        lVar40 = lVar40 + 0x50;
        lVar32 = lVar32 + -0x50;
      } while (lVar32 != 0);
      local_594 = 0;
      if (1 < (int)local_590) {
        local_594 = FUN_146b6c458();
      }
      param_1 = local_5a0;
      if (0 < (int)uStack_450) {
        local_588 = (longlong *)(local_5a0 + 0x188);
        local_54c = 8;
        if ((char)local_578 != '\0') {
          local_54c = 0xe;
        }
        lVar32 = 0;
        do {
          lVar40 = lVar32 * 0x50;
          if (*(int *)(local_458 + 0x34 + lVar40) < *(int *)(local_458 + 8 + lVar40)) {
            plVar36 = (longlong *)(local_458 + lVar40);
            local_580 = (longlong)*(int *)(param_1 + 400);
            uVar19 = *(uint *)(plVar36 + 5);
            if (uVar19 == 0) {
              uVar30 = 1;
              uVar33 = 0;
              iVar28 = 0;
              uVar20 = 0;
            }
            else {
              puVar23 = (uint *)plVar36[4];
              if ((uint *)plVar36[4] == (uint *)0x0) {
                puVar23 = (uint *)(plVar36 + 2);
              }
              uVar20 = *puVar23;
              if (uVar20 == 0) {
                iVar28 = uVar19 + 0x1e;
                if (-1 < (int)(uVar19 - 1)) {
                  iVar28 = uVar19 - 1;
                }
                uVar33 = 0;
                uVar30 = (ulonglong)(uint)(iVar28 >> 5);
                if (iVar28 >> 5 < 1) {
                  uVar30 = uVar33;
                }
                iVar28 = 0;
                do {
                  if (uVar30 == uVar33) goto LAB_142946def;
                  iVar28 = iVar28 + 0x20;
                  uVar20 = puVar23[uVar33 + 1];
                  uVar33 = uVar33 + 1;
                } while (uVar20 == 0);
              }
              else {
                uVar33 = 0;
                iVar28 = 0;
              }
              uVar30 = (ulonglong)(-uVar20 & uVar20);
              uVar37 = uVar30 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              uVar20 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if ((int)uVar19 <= (int)uVar20) {
                uVar20 = uVar19;
              }
            }
            if (uVar20 != uVar19) {
              local_590 = CONCAT44(local_590._4_4_,*(int *)(param_1 + 400) + -1);
              uVar38 = 0xffffffff;
              local_560 = 0;
              uVar37 = 0;
              local_570 = lVar32;
              local_540 = (ulonglong)uVar19;
              local_538 = plVar36;
              local_528 = (uint *)(plVar36 + 2);
              do {
                puVar34 = (undefined4 *)((longlong)(int)uVar20 * 0x18 + *local_538);
                local_578 = uVar33;
                lVar32 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x1a8))
                                   (*(longlong **)(param_1 + 0x158),puVar34);
                uVar33 = lVar32 + local_558;
                iVar31 = (int)local_590;
                if ((uVar37 < uVar33) &&
                   (((int)local_590 < (int)local_580 ||
                    (0 < *(int *)(*local_588 + 0x18 + (longlong)(int)local_590 * 0x20))))) {
                  FUN_146b6e072(local_588);
                  lVar32 = *(longlong *)(param_1 + 0xb0);
                  lVar40 = *(longlong *)(param_1 + 0x198);
                  lVar29 = local_570 * 0x10;
                  iVar31 = *(int *)(lVar40 + 8 + lVar29);
                  *(uint *)(lVar40 + 8 + lVar29) = iVar31 + 1U;
                  if (*(uint *)(lVar40 + 0xc + lVar29) < iVar31 + 1U) {
                    FUN_1446f48e2((longlong *)(lVar40 + lVar29),iVar31);
                  }
                  local_560 = (ulonglong)((int)local_560 + 1);
                  uVar37 = lVar32 - local_548;
                  *(int *)(*(longlong *)(lVar40 + lVar29) + (longlong)iVar31 * 4) =
                       (int)local_590 + 1;
                  iVar31 = (int)local_590 + 1;
                }
                local_590 = CONCAT44(local_590._4_4_,iVar31);
                local_530 = (longlong)iVar31 * 0x20;
                lVar40 = *local_588 + local_530;
                iVar31 = *(int *)(lVar40 + 0x18);
                *(uint *)(lVar40 + 0x18) = iVar31 + 1U;
                if (*(uint *)(lVar40 + 0x1c) < iVar31 + 1U) {
                  FUN_140c60952((longlong *)(lVar40 + 0x10),iVar31);
                }
                uVar17 = local_560;
                lVar32 = local_570;
                param_1 = local_5a0;
                uVar21 = puVar34[1];
                uVar15 = puVar34[2];
                uVar16 = puVar34[3];
                bVar41 = uVar33 <= uVar37;
                uVar33 = uVar37 - uVar33;
                uVar37 = 0;
                if (bVar41) {
                  uVar37 = uVar33;
                }
                puVar3 = (undefined4 *)(*(longlong *)(lVar40 + 0x10) + (longlong)iVar31 * 0x10);
                *puVar3 = *puVar34;
                puVar3[1] = uVar21;
                puVar3[2] = uVar15;
                puVar3[3] = uVar16;
                uVar38 = uVar38 & ~(uint)uVar30;
                puVar23 = (uint *)local_538[4];
                if ((uint *)local_538[4] == (uint *)0x0) {
                  puVar23 = local_528;
                }
                uVar19 = *(uint *)(local_538 + 5);
                iVar31 = (int)local_578;
                lVar40 = (longlong)iVar31;
                uVar20 = puVar23[lVar40] & uVar38;
                uVar33 = local_578;
                if (uVar20 == 0) {
                  iVar26 = uVar19 + 0x1e;
                  if (-1 < (int)(uVar19 - 1)) {
                    iVar26 = uVar19 - 1;
                  }
                  iVar26 = iVar26 >> 5;
                  iVar28 = iVar28 + 0x20;
                  iVar27 = iVar26;
                  if (iVar26 < iVar31) {
                    iVar27 = iVar31;
                  }
                  if (iVar31 < iVar26) {
                    lVar29 = 0;
                    do {
                      uVar20 = puVar23[lVar40 + lVar29 + 1];
                      if (uVar20 != 0) {
                        uVar38 = 0xffffffff;
                        uVar33 = (ulonglong)(iVar31 + (int)lVar29 + 1);
                        goto LAB_142946b7b;
                      }
                      iVar28 = iVar28 + 0x20;
                      lVar29 = lVar29 + 1;
                    } while (iVar27 - lVar40 != lVar29);
                    uVar38 = 0xffffffff;
                    iVar31 = iVar27;
                  }
                  uVar33 = (ulonglong)(iVar31 + 1);
                  uVar20 = uVar19;
                }
                else {
LAB_142946b7b:
                  uVar30 = (ulonglong)(-uVar20 & uVar20);
                  uVar4 = uVar30 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar4 != 0) {
                    for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  uVar20 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if ((int)uVar19 <= (int)uVar20) {
                    uVar20 = uVar19;
                  }
                }
              } while (uVar20 != (uint)local_540);
              if ((int)local_560 < 2) {
                if ((int)local_560 != 1) goto LAB_142946def;
                local_2a8._0_8_ = (undefined2 *)0x0;
                uVar19 = *(uint *)(local_5a0 + 0x98);
                pvVar7 = *(void **)(local_5a0 + 0x90);
                local_2a8.Data4[0] = (char)uVar19;
                local_2a8.Data4[1] = (char)(uVar19 >> 8);
                local_2a8.Data4[2] = (char)(uVar19 >> 0x10);
                local_2a8.Data4[3] = (char)(uVar19 >> 0x18);
                if ((longlong)(int)uVar19 == 0) {
                  local_2a8.Data4[4] = '\0';
                  local_2a8.Data4[5] = '\0';
                  local_2a8.Data4[6] = '\0';
                  local_2a8.Data4[7] = '\0';
                  local_2a8.Data4[0] = (char)uVar19;
                  local_2a8.Data4[1] = (char)(uVar19 >> 8);
                  local_2a8.Data4[2] = (char)(uVar19 >> 0x10);
                  local_2a8.Data4[3] = (char)(uVar19 >> 0x18);
                }
                else {
                  FUN_1446dd670(&local_2a8,uVar19,0);
                  memcpy((void *)local_2a8._0_8_,pvVar7,(longlong)(int)uVar19 * 2);
                }
                FUN_140b127b8(&local_2a8,L".delta.chunkdb",0xe,1);
                FUN_140b127b8(&local_2a8,L".chunkdb",8,1);
                FUN_1448097c4(&local_2a8,&DAT_149e1dd00,&DAT_149f32092,1);
                if (0 < local_594) {
                  FUN_140002266(&local_1a8,L".tagset%0*d",local_594,(int)lVar32 + 1);
                  iVar28 = (int)uStack_1a0 + -1;
                  if ((int)uStack_1a0 == 0) {
                    iVar28 = 0;
                  }
                  FUN_1400020e8(&local_2a8,local_1a8,iVar28);
                  if (local_1a8 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                FUN_1400020e8(&local_2a8,local_568,local_54c);
                iVar28 = local_2a8.Data4._0_4_ + -1;
                if (local_2a8.Data4._0_4_ == 0) {
                  iVar28 = 0;
                }
                FUN_1402980a2(local_530 + *local_588,local_2a8._0_8_,iVar28);
              }
              else {
                local_2a8._0_8_ = (undefined2 *)0x0;
                uVar19 = *(uint *)(local_5a0 + 0x98);
                pvVar7 = *(void **)(local_5a0 + 0x90);
                local_2a8.Data4[0] = (char)uVar19;
                local_2a8.Data4[1] = (char)(uVar19 >> 8);
                local_2a8.Data4[2] = (char)(uVar19 >> 0x10);
                local_2a8.Data4[3] = (char)(uVar19 >> 0x18);
                if ((longlong)(int)uVar19 == 0) {
                  local_2a8.Data4[4] = '\0';
                  local_2a8.Data4[5] = '\0';
                  local_2a8.Data4[6] = '\0';
                  local_2a8.Data4[7] = '\0';
                  local_2a8.Data4[0] = (char)uVar19;
                  local_2a8.Data4[1] = (char)(uVar19 >> 8);
                  local_2a8.Data4[2] = (char)(uVar19 >> 0x10);
                  local_2a8.Data4[3] = (char)(uVar19 >> 0x18);
                }
                else {
                  FUN_1446dd670(&local_2a8,uVar19,0);
                  memcpy((void *)local_2a8._0_8_,pvVar7,(longlong)(int)uVar19 * 2);
                }
                pwVar39 = local_568;
                lVar32 = local_570;
                FUN_140b127b8(&local_2a8,L".delta.chunkdb",0xe,1);
                FUN_140b127b8(&local_2a8,L".chunkdb",8,1);
                if (0 < local_594) {
                  FUN_140002266(&local_1a8,L".tagset%0*d",local_594,(int)lVar32 + 1);
                  iVar28 = (int)uStack_1a0 + -1;
                  if ((int)uStack_1a0 == 0) {
                    iVar28 = 0;
                  }
                  FUN_1400020e8(&local_2a8,local_1a8,iVar28);
                  if (local_1a8 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                uVar21 = FUN_146b6c458(uVar17 & 0xffffffff);
                if ((int)local_580 < *(int *)(param_1 + 400)) {
                  lVar40 = local_580 << 5;
                  iVar28 = 1;
                  do {
                    puVar35 = &DAT_149dfb77a;
                    if (local_2a8.Data4._0_4_ != 0) {
                      puVar35 = (undefined2 *)local_2a8._0_8_;
                    }
                    local_5e0 = pwVar39;
                    local_5e8 = (undefined ***)CONCAT44(local_5e8._4_4_,iVar28);
                    FUN_140002266(&local_1a8,L"%s.part%0*d%s",puVar35,uVar21);
                    lVar32 = *local_588;
                    if ((void **)(lVar32 + lVar40) != &local_1a8) {
                      if (*(longlong *)(lVar32 + lVar40) != 0) {
                        FUN_1400020a8();
                      }
                      *(void **)(lVar32 + lVar40) = local_1a8;
                      local_1a8 = (void *)0x0;
                      *(int *)(lVar32 + 8 + lVar40) = (int)uStack_1a0;
                      *(undefined4 *)(lVar32 + 0xc + lVar40) = uStack_1a0._4_4_;
                      uStack_1a0 = 0;
                    }
                    lVar32 = local_570;
                    if (local_1a8 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    local_580 = local_580 + 1;
                    lVar40 = lVar40 + 0x20;
                    iVar28 = iVar28 + 1;
                  } while (local_580 < *(int *)(param_1 + 400));
                }
              }
              if ((undefined2 *)local_2a8._0_8_ != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_142946def:
          lVar32 = lVar32 + 1;
        } while (lVar32 < (int)uStack_450);
      }
    }
    local_1a8 = (void *)0x0;
    uVar19 = *(uint *)(param_1 + 0xa8);
    pvVar7 = *(void **)(param_1 + 0xa0);
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
    if ((longlong)(int)uVar19 == 0) {
      uStack_1a0 = (ulonglong)uVar19;
    }
    else {
      FUN_1446dd670(&local_1a8,uVar19,0);
      memcpy(local_1a8,pvVar7,(longlong)(int)uVar19 * 2);
    }
    local_478 = &local_1a8;
    local_470 = local_198;
    FUN_141469cae(local_468);
    FUN_146b34f2e(&local_2a8,local_468);
    if (local_1a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_268 = (uint5)(uint)local_268;
    local_298 = CONCAT44(local_298._4_4_,0x1e);
    puVar22 = (undefined8 *)FUN_146b93500(*(undefined8 *)(param_1 + 0x200));
    puVar6 = *(undefined8 **)(param_1 + 0x2b8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x2b8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    puVar22 = (undefined8 *)
              FUN_146b906de(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x210,
                            *(undefined8 *)(param_1 + 0x200));
    puVar6 = *(undefined8 **)(param_1 + 0x2c0);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x2c0) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    puVar22 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar22 = &PTR_FUN_149f2ed90;
    puVar22[1] = uVar8;
    *(undefined4 *)(puVar22 + 2) = 0x12;
    puVar6 = *(undefined8 **)(param_1 + 0x2c8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x2c8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1f8);
    puVar24 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar24 = &PTR_FUN_149f323e8;
    puVar24[1] = uVar8;
    puVar6 = *(undefined8 **)(param_1 + 0x2d0);
    puVar22 = puVar6;
    if ((puVar6 != puVar24) &&
       (*(undefined8 **)(param_1 + 0x2d0) = puVar24, puVar22 = puVar24, puVar6 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar6)(puVar6,1);
      puVar22 = *(undefined8 **)(param_1 + 0x2d0);
    }
    local_5e8 = (undefined ***)0x0;
    puVar22 = (undefined8 *)FUN_146b8f298(0x200,puVar22,0,*(undefined8 *)(param_1 + 0x2b8));
    puVar6 = *(undefined8 **)(param_1 + 0x2d8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(param_1 + 0x2d8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    local_4b0 = 100;
    uStack_4ac = 8;
    uStack_4a8 = 8;
    uStack_4a4 = 8;
    local_4a0 = 4;
    local_498 = 0x3feb333333333333;
    local_490 = 0x3fe4cccccccccccd;
    local_488 = 0;
    local_484 = 0x800000010;
    plVar25 = (longlong *)FUN_146b884a4(&local_4b0,*(undefined8 *)(param_1 + 0x1e8));
    plVar36 = *(longlong **)(param_1 + 0x2e0);
    if ((plVar36 != plVar25) &&
       (*(longlong **)(param_1 + 0x2e0) = plVar25, plVar36 != (longlong *)0x0)) {
      (**(code **)(*plVar36 + 8))(plVar36,1);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2cc = 0xffffffff00000080;
    local_2c4 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    FUN_145ff0016(&local_2f8,local_108);
    local_588 = *(longlong **)(param_1 + 0x2c0);
    uVar8 = *(undefined8 *)(local_5a0 + 0x2e0);
    uVar9 = *(undefined8 *)(local_5a0 + 0x1c8);
    uVar10 = *(undefined8 *)(local_5a0 + 0x1c0);
    uVar11 = *(undefined8 *)(local_5a0 + 0x2c8);
    uVar12 = *(undefined8 *)(local_5a0 + 0x1f8);
    local_590 = *(ulonglong *)(local_5a0 + 0x1f0);
    local_578 = *(ulonglong *)(local_5a0 + 0x2d8);
    uVar13 = *(undefined8 *)(local_5a0 + 0x178);
    uVar14 = *(undefined8 *)(local_5a0 + 0x1a8);
    FUN_146b6e0aa(local_510,&local_2a8);
    lVar32 = local_5a0;
    local_5c0 = local_588;
    local_5e8 = (undefined ***)uVar12;
    local_5e0 = (wchar_t *)uVar11;
    local_5d8 = (undefined1 **)uVar10;
    local_5d0 = uVar9;
    local_5c8 = uVar8;
    local_5b8 = uVar13;
    local_5b0 = &local_2f8;
    puVar22 = (undefined8 *)FUN_14294767a(local_510,uVar14,local_578,local_590);
    puVar6 = *(undefined8 **)(lVar32 + 0x2e8);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(lVar32 + 0x2e8) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    local_328 = 0;
    local_318 = &PTR_LAB_149f33ae0;
    local_310 = lVar32;
    local_338[0] = &LAB_142951df4;
    local_520 = 0;
    iVar28 = *(int *)(lVar32 + 400);
    uVar8 = *(undefined8 *)(lVar32 + 0x188);
    local_518 = iVar28;
    if (iVar28 == 0) {
      local_514 = 0;
    }
    else {
      FUN_146b83bec(&local_520,iVar28);
      FUN_146b83c44(local_520,uVar8,iVar28);
    }
    local_5e8 = *(undefined ****)(lVar32 + 0x2c8);
    local_5d8 = local_338;
    local_5e0 = (wchar_t *)&local_520;
    puVar22 = (undefined8 *)
              FUN_146b62816(*(undefined8 *)(lVar32 + 0x2e8),*(undefined8 *)(lVar32 + 0x1b8),
                            *(undefined8 *)(lVar32 + 0x1c8),*(undefined8 *)(lVar32 + 0x1f8));
    puVar6 = *(undefined8 **)(lVar32 + 0x2f0);
    if ((puVar6 != puVar22) &&
       (*(undefined8 **)(lVar32 + 0x2f0) = puVar22, puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146b35076(&local_2a8);
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_158);
    FUN_146b83a8a(local_458,uStack_450 & 0xffffffff);
    if (local_458 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_142947824(param_1,1);
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_108);
  if (local_430 != 0) {
    FUN_1400020a8();
  }
  local_420 = &PTR__purecall_149e35f70;
  if (local_3c8 != (longlong *)0x0) {
    if (*local_3c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_3c8);
  }
  if (local_3a8 != 0) {
    if (*(longlong *)(local_3a8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_3a8);
  }
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  FUN_146b7c2fd(local_348,uStack_340 & 0xffffffff);
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14294767a FUN_14294767a body=425 status=ok
// SIG undefined FUN_14294767a(void)

undefined8
FUN_14294767a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong param_12)

{
  undefined8 uVar1;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined4 uStack_df;
  undefined4 uStack_db;
  undefined1 local_d0 [80];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar1 = FUN_14001cc68(0x270,0x10);
  FUN_1409e67a4(local_d0,param_12);
  local_130 = *param_1;
  *param_1 = 0;
  local_128 = *(undefined4 *)(param_1 + 1);
  local_124 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  local_118 = *(undefined4 *)(param_1 + 3);
  local_120 = param_1[2];
  local_110 = param_1[4];
  param_1[4] = 0;
  local_108 = *(undefined4 *)(param_1 + 5);
  local_104 = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_1[5] = 0;
  local_100 = param_1[6];
  param_1[6] = 0;
  local_f8 = *(undefined4 *)(param_1 + 7);
  local_f4 = *(undefined4 *)((longlong)param_1 + 0x3c);
  param_1[7] = 0;
  uStack_f0 = *(undefined4 *)(param_1 + 8);
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_e8 = *(undefined4 *)(param_1 + 9);
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uStack_df = *(undefined4 *)((longlong)param_1 + 0x51);
  uStack_db = *(undefined4 *)((longlong)param_1 + 0x55);
  uStack_e0 = (undefined1)((uint)*(undefined4 *)((longlong)param_1 + 0x4d) >> 0x18);
  local_140 = param_11;
  local_150 = param_9;
  uStack_148 = param_10;
  local_160 = param_7;
  uStack_158 = param_8;
  local_170 = param_5;
  uStack_168 = param_6;
  local_178 = param_4;
  local_138 = local_d0;
  FUN_146b72a84(uVar1,&local_130,param_2,param_3);
  FUN_146b35076(param_1);
  *(undefined4 *)(param_12 + 0x48) = 0;
  if (*(longlong *)(param_12 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_12);
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142947824 FUN_142947824 body=606 status=ok
// SIG undefined FUN_142947824(void)

undefined4 FUN_142947824(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  LOCK();
  *(uint *)(param_1 + 0xf8) = (uint)(*(int *)(param_1 + 0xf8) != 0 & param_2);
  UNLOCK();
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))();
  if (cVar3 != '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0xf8) = 0;
    UNLOCK();
  }
  if ((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(param_1 + 0xc0))) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_145fe0690(&local_68,&local_58,0);
    FUN_145928344(local_68);
    FUN_146b39664(local_68,L"ChunkDbFilePaths");
    if ((longlong)*(int *)(param_1 + 400) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x188);
      lVar7 = (longlong)*(int *)(param_1 + 400) << 5;
      do {
        FUN_145927f78(local_68,lVar9);
        lVar9 = lVar9 + 0x20;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    FUN_1459282dc(local_68);
    if (0 < *(int *)(param_1 + 0x38)) {
      FUN_146b6e1b4(local_68);
      if ((longlong)*(int *)(param_1 + 0x1a0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x198);
        plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x1a0) * 2;
        do {
          FUN_14683e51e(local_68);
          lVar9 = plVar8[1];
          if ((longlong)(int)lVar9 != 0) {
            lVar7 = *plVar8;
            lVar11 = 0;
            do {
              FUN_146841d1c(local_68,*(undefined4 *)(lVar7 + lVar11));
              lVar11 = lVar11 + 4;
            } while ((longlong)(int)lVar9 * 4 != lVar11);
          }
          FUN_1459282dc(local_68);
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar10);
      }
      FUN_1459282dc(local_68);
    }
    plVar8 = local_68;
    *(int *)((longlong)local_68 + 0x24) = *(int *)((longlong)local_68 + 0x24) + -1;
    local_3a = 0x7d;
    (**(code **)(*(longlong *)local_68[1] + 0x170))((longlong *)local_68[1],&local_3a,2);
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    FUN_14047c610(plVar8 + 2);
    *(undefined4 *)(plVar8 + 4) = 3;
    (**(code **)(*local_68 + 8))();
    uVar5 = FUN_14054d1d4();
    if (*(int *)(param_1 + 0xc0) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0xb8);
    }
    local_78 = local_58;
    local_70 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      local_70 = 0;
    }
    local_88 = 0;
    bVar4 = FUN_1415d54ec(&local_78,puVar6,0,uVar5);
    LOCK();
    *(uint *)(param_1 + 0xf8) = (uint)bVar4;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  UNLOCK();
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142947a84 FUN_142947a84 body=253 status=ok
// SIG undefined FUN_142947a84(void)

void FUN_142947a84(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [80];
  undefined1 local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145aeb3d6(local_a0);
  local_50 = 1;
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_146b6f1d6(param_1 + 0x1d0,local_a0);
  FUN_146b6f244(local_a0);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))();
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2);
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_142947b51;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_142947b51:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142947b82 FUN_142947b82 body=253 status=ok
// SIG undefined FUN_142947b82(void)

void FUN_142947b82(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [80];
  undefined1 local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145aeb3d6(local_a0);
  local_50 = 0;
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_146b6f1d6(param_1 + 0x1d0,local_a0);
  FUN_146b6f244(local_a0);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))();
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2);
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_142947c4f;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_142947c4f:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142947c80 FUN_142947c80 body=194 status=ok
// SIG undefined FUN_142947c80(void)

undefined8 FUN_142947c80(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))();
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_1403c1b2e(param_1 + 0x1f0,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_1403c1b2e(param_1 + 0x1f0,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142947d43 FUN_142947d43 body=255 status=ok
// SIG undefined FUN_142947d43(void)

longlong FUN_142947d43(longlong *param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar6 = *param_1;
    lVar7 = 0;
    lVar9 = 0;
    do {
      if (*(char *)(lVar6 + 0x3c + lVar7) == '\0') {
        lVar4 = (**(code **)(**(longlong **)(lVar6 + 0x20 + lVar7) + 0x30))();
        lVar9 = lVar9 + lVar4;
      }
      lVar7 = lVar7 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar7);
  }
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    piVar8 = (int *)*param_3;
    piVar1 = piVar8 + *(int *)(param_3 + 1);
    do {
      lVar3 = param_1[1];
      if ((longlong)(int)lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        iVar2 = *piVar8;
        lVar7 = *param_1;
        lVar4 = 0;
        lVar6 = 0;
        do {
          if ((*(char *)(lVar7 + 0x3c + lVar4) == '\0') &&
             (*(int *)(lVar7 + 0x38 + lVar4) < param_2 - iVar2)) {
            lVar5 = (**(code **)(**(longlong **)(lVar7 + 0x20 + lVar4) + 0x30))();
            lVar6 = lVar6 + lVar5;
          }
          lVar4 = lVar4 + 0x40;
        } while ((longlong)(int)lVar3 * 0x40 != lVar4);
      }
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_14479d316(param_4,iVar2);
      }
      *(longlong *)(*param_4 + (longlong)iVar2 * 8) = lVar6;
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
  }
  return lVar9;
}



// FUNCTION 142947e42 FUN_142947e42 body=1001 status=ok
// SIG undefined FUN_142947e42(void)

undefined8 *
FUN_142947e42(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149f322e0;
  param_1[1] = &PTR_FUN_149f32320;
  local_d0 = param_1 + 2;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 3) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  lVar8 = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar9 = param_2[3];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x21);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x29) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x2d) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x31) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x35) = uVar7;
  *(int *)(param_1 + 4) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(int *)(param_1 + 5) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)param_7;
  *(undefined4 *)((longlong)param_1 + 100) = param_7._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)param_8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_8._4_4_;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)param_9;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_9._4_4_;
  *(undefined4 *)(param_1 + 0xf) = (undefined4)param_10;
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_10._4_4_;
  FUN_145d28d24(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(byte *)((longlong)param_1 + 0xb2) = *(byte *)((longlong)param_2 + 0x1c) ^ 1;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  param_1[0x55] = puVar10;
  param_1[0x54] = puVar10;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  param_1[0x61] = puVar10;
  param_1[0x60] = puVar10;
  *(undefined4 *)(param_1 + 0x62) = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  (**(code **)(*param_6 + 0x40))(param_6,&local_b8);
  *(undefined4 *)(param_1 + 0x62) = (undefined4)uStack_b0;
  local_e8 = param_1 + 0x2c;
  local_e0 = param_1 + 0x40;
  FUN_146b70600(local_d0,param_1[9],&local_b8,param_1 + 0x2a);
  FUN_146b70cf6(param_1);
  if (0 < *(int *)(param_1 + 0x2b)) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    local_c8 = param_1[0x10];
    local_c0 = (longlong *)param_1[0x11];
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14614a64a(param_1 + 0x13,&local_c8);
    plVar11 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 8))();
    param_1[0x15] = plVar11;
    local_98 = 0;
    local_88 = &PTR_LAB_149f33d40;
    local_a8 = FUN_142953b5c;
    local_80 = param_1;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294822c FUN_14294822c body=595 status=ok
// SIG undefined FUN_14294822c(void)

longlong FUN_14294822c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [40];
  undefined2 *local_a0;
  int local_98;
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  if (lVar6 == 0) {
    LOCK();
    *(undefined1 *)(param_1 + 0xb2) = 1;
    UNLOCK();
    uVar3 = FUN_1447addd0(param_2,0x10);
    iVar4 = FUN_146b84130((longlong *)(param_1 + 0x160),uVar3,param_2);
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x160);
      if ((lVar6 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
        uVar3 = FUN_1447addd0(param_2,0x10);
        iVar5 = FUN_140f5cb3a(param_1 + 0x200,uVar3,param_2);
        if (iVar5 != -1) {
          lVar6 = lVar6 + (longlong)iVar4 * 0x28;
          if (*(char *)(*(longlong *)(lVar6 + 0x18) + 0x3c) == '\x01') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
            {
              FUN_1459825b0(&DAT_14c872ee0);
              atexit(FUN_1427868a5);
              _Init_thread_footer(&DAT_14c872ef8);
            }
            plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 0x20);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_a0);
            puVar7 = local_a0;
            if (local_98 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            FUN_140047918(&DAT_14c872ee0,
                          L"BAD!!!!!!!! Accessed chunk after chunkdb %s retired - invalid chunk reference order."
                          ,puVar7);
            if (local_a0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          cVar2 = FUN_146b71000(param_1,param_2);
          while (cVar2 == '\0') {
            lVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                              (*(longlong **)(param_1 + 0x50),param_2);
            if (lVar6 != 0) goto LAB_1429483a4;
            if ((*(byte *)(param_1 + 0xb1) & 1) != 0) break;
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
                      (*(longlong **)(param_1 + 0x40),0x3a83126f);
            cVar2 = FUN_146b71000(param_1,param_2);
          }
          lVar6 = 0;
LAB_1429483a4:
          if ((*(longlong *)(param_1 + 0xc0) != 0) &&
             (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x108))) {
            FUN_1409e67a4(local_90,param_1 + 0x100);
            FUN_146b710fe(param_1 + 0xc0,local_90);
          }
          goto LAB_14294826c;
        }
      }
    }
    lVar6 = 0;
  }
LAB_14294826c:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142948480 FUN_142948480 body=271 status=ok
// SIG undefined FUN_142948480(void)

undefined8
FUN_142948480(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = FUN_14001cc68(800,0x10);
  local_90 = *param_1;
  *param_1 = 0;
  local_88 = (undefined4)param_1[1];
  local_84 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  uStack_80 = (undefined4)param_1[2];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_78 = (undefined4)param_1[3];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_6f = *(undefined4 *)((longlong)param_1 + 0x21);
  uStack_6b = *(undefined4 *)((longlong)param_1 + 0x25);
  uStack_70 = (undefined1)((uint)*(undefined4 *)((longlong)param_1 + 0x1d) >> 0x18);
  local_a0 = param_9;
  local_b0 = param_7;
  uStack_a8 = param_8;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_c8 = param_4;
  FUN_142947e42(uVar1,&local_90,param_2,param_3);
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142948590 FUN_142948590 body=1100 status=ok
// SIG undefined FUN_142948590(void)

void FUN_142948590(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined1 auStack_a8 [40];
  longlong local_80;
  ulonglong local_78;
  uint *local_70;
  longlong local_68;
  undefined1 local_5c [4];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_78 = CONCAT44(local_78._4_4_,param_3);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (uint *)(param_2 + 2);
  iVar7 = (int)param_2[5];
  iVar8 = iVar7;
  local_80 = param_4;
  local_68 = param_1;
  if (iVar7 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = local_70;
    }
    uVar6 = *puVar12;
    if (uVar6 == 0) {
      iVar5 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar5 = iVar7 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar15 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_14294864d;
        iVar15 = iVar15 + 0x20;
        uVar6 = puVar12[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar16 = 0;
      iVar15 = 0;
    }
    uVar17 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar5) {
      iVar5 = iVar7;
    }
  }
  if (iVar5 != iVar7) {
    uVar6 = 0xffffffff;
    do {
      lVar14 = (longlong)iVar5 * 0x20 + *param_2;
      iVar8 = (**(code **)(**(longlong **)(local_68 + 8) + 0x10))
                        (*(longlong **)(local_68 + 8),lVar14);
      if (iVar8 == 0) {
        FUN_1457adc9c(local_80,&local_58,lVar14,0);
      }
      uVar6 = uVar6 & ~(uint)uVar17;
      puVar12 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar12 = local_70;
      }
      iVar8 = (int)param_2[5];
      iVar5 = (int)uVar16;
      lVar14 = (longlong)iVar5;
      uVar11 = puVar12[lVar14] & uVar6;
      if (uVar11 == 0) {
        iVar13 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar13 = iVar8 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar9 = iVar13;
        if (iVar13 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar13) {
          lVar19 = 0;
          do {
            uVar11 = puVar12[lVar14 + lVar19 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar19 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14294879b;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar9 - lVar14 != lVar19);
          uVar6 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar16 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar8;
      }
      else {
LAB_14294879b:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar5) {
          iVar5 = iVar8;
        }
      }
    } while (iVar5 != iVar7);
  }
LAB_14294864d:
  uVar6 = ((int)param_2[1] -
          ((int)local_78 + *(int *)((longlong)param_2 + 0x34) + *(int *)(local_80 + 8))) +
          *(int *)(local_80 + 0x34);
  uVar16 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = uVar16;
    if (iVar8 == 0) {
      uVar17 = 0;
      uVar16 = 1;
      iVar5 = 0;
      iVar7 = 0;
    }
    else {
      puVar12 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar12 = local_70;
      }
      uVar6 = *puVar12;
      if (uVar6 == 0) {
        iVar7 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar7 = iVar8 + -1;
        }
        uVar17 = 0;
        uVar16 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar16 = uVar17;
        }
        iVar5 = 0;
        do {
          if (uVar16 == uVar17) goto LAB_142948809;
          iVar5 = iVar5 + 0x20;
          uVar6 = puVar12[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar17 = 0;
        iVar5 = 0;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar7) {
        iVar7 = iVar8;
      }
    }
    if (iVar7 != iVar8) {
      uVar6 = 0xffffffff;
      lVar14 = local_80;
      do {
        puVar20 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_2);
        uVar10 = FUN_1447addd0(puVar20,0x10);
        iVar7 = FUN_140f5cb3a(lVar14,uVar10,puVar20);
        uVar2 = uStack_50;
        if (iVar7 == -1) {
          lVar14 = (longlong)(int)uStack_50;
          uVar11 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
          if (uStack_50._4_4_ < uVar11) {
            FUN_140c60952(&local_58,uVar2 & 0xffffffff);
          }
          uVar10 = puVar20[1];
          uVar3 = puVar20[2];
          uVar4 = puVar20[3];
          puVar1 = (undefined4 *)(local_58 + lVar14 * 0x10);
          *puVar1 = *puVar20;
          puVar1[1] = uVar10;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          lVar14 = local_80;
        }
        uVar6 = uVar6 & ~(uint)uVar16;
        puVar12 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar12 = local_70;
        }
        iVar15 = (int)param_2[5];
        iVar7 = (int)uVar17;
        lVar19 = (longlong)iVar7;
        uVar11 = puVar12[lVar19] & uVar6;
        if (uVar11 == 0) {
          iVar13 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar13 = iVar15 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar9 = iVar13;
          if (iVar13 < iVar7) {
            iVar9 = iVar7;
          }
          if (iVar7 < iVar13) {
            lVar18 = 0;
            do {
              uVar11 = puVar12[lVar19 + lVar18 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                uVar6 = 0xffffffff;
                goto LAB_14294898b;
              }
              iVar5 = iVar5 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar19 != lVar18);
            uVar6 = 0xffffffff;
            iVar7 = iVar9;
          }
          uVar17 = (ulonglong)(iVar7 + 1);
          lVar14 = local_80;
          iVar7 = iVar15;
        }
        else {
LAB_14294898b:
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar16 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar7 = (iVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar7) {
            iVar7 = iVar15;
          }
        }
      } while (iVar7 != iVar8);
    }
LAB_142948809:
    (**(code **)(**(longlong **)(local_68 + 8) + 0x18))(*(longlong **)(local_68 + 8),&local_58,1);
    if (0 < (int)uStack_50) {
      lVar14 = 1;
      lVar19 = 0;
      uVar16 = local_78;
      do {
        FUN_1457adc9c(param_5,local_5c,local_58 + lVar19,0);
        if ((int)uStack_50 <= lVar14) break;
        iVar7 = (int)uVar16;
        lVar14 = lVar14 + 1;
        lVar19 = lVar19 + 0x10;
        uVar16 = (ulonglong)(iVar7 - 1);
      } while (1 < iVar7);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429489de FUN_1429489de body=8747 status=ok
// SIG undefined FUN_1429489de(void)

void FUN_1429489de(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  LPCRITICAL_SECTION p_Var9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  LARGE_INTEGER *pLVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  int iVar25;
  uint uVar26;
  undefined8 **ppuVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined ***pppuVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  undefined8 *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  double dVar41;
  longlong **pplVar42;
  undefined8 *puVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined1 auStack_6c8 [32];
  longlong **local_6a8;
  undefined8 *local_6a0;
  undefined8 *local_698;
  undefined8 *local_690;
  longlong *local_688;
  undefined4 local_680;
  byte local_669;
  undefined8 local_668;
  int local_65c;
  longlong *local_658;
  longlong local_650;
  int local_644;
  ulonglong local_640;
  double local_638;
  double local_630;
  ulonglong local_628;
  longlong *local_620;
  ulonglong local_618;
  undefined8 *local_610;
  undefined1 local_608 [16];
  double local_5f0;
  ulonglong local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  undefined1 local_5c8 [16];
  longlong local_5b8;
  LPCRITICAL_SECTION local_5b0;
  LPCRITICAL_SECTION local_5a8;
  longlong local_5a0;
  longlong local_598;
  longlong local_590;
  undefined4 local_584;
  longlong *local_580;
  undefined4 local_578;
  undefined8 *local_570;
  LARGE_INTEGER local_568;
  LARGE_INTEGER LStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  longlong local_548;
  undefined8 uStack_540;
  undefined1 local_538 [32];
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  undefined8 uStack_500;
  undefined1 local_4ec [4];
  code *local_4e8;
  undefined8 *local_4d8;
  code *local_4a8 [2];
  undefined ***local_498;
  undefined **local_488;
  longlong **local_480;
  undefined8 *local_478;
  LARGE_INTEGER local_468;
  LARGE_INTEGER LStack_460;
  undefined4 local_458;
  longlong local_428;
  undefined4 local_420;
  undefined8 *local_418;
  undefined8 uStack_410;
  LARGE_INTEGER local_408;
  LARGE_INTEGER LStack_400;
  LARGE_INTEGER *local_3f8;
  uint local_3f0;
  undefined8 local_3ec;
  int local_3e4;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  int local_394;
  longlong local_388;
  undefined4 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_34c;
  undefined4 local_344;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  int local_2a4;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  int local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  uint local_188 [4];
  uint *local_178;
  uint local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_218 = 0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_268 = 0;
  local_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_25c = 0xffffffff00000080;
  local_254 = 0;
  local_248 = 0;
  local_240 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_669 = *(byte *)(param_1 + 100);
  local_2b8 = 0;
  local_2b0 = 0;
  local_2d8 = (longlong *)0x0;
  uStack_2d0 = 0;
  local_2ac = 0xffffffff00000080;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  FUN_145ff0016(&local_2d8,param_1 + 200);
  lVar17 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                     (*(longlong **)(param_1 + 0xc0),&local_2d8);
  local_620 = (longlong *)FUN_146b85e85();
  local_308 = 0;
  local_300 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_2fc = 0xffffffff00000080;
  local_2f4 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_358 = 0;
  local_350 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_34c = 0xffffffff00000080;
  local_344 = 0;
  local_338 = 0;
  local_330 = 0;
  local_650 = lVar17;
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x38))(*(longlong **)(param_1 + 0xb8),lVar17);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))(*(longlong **)(param_1 + 0xb8),0);
  local_65c = 4;
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))(*(longlong **)(param_1 + 0xb8),4);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))();
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))(*(longlong **)(param_1 + 0xb8),0);
  dVar3 = 0.0;
  uVar16 = 0;
  uVar49 = 0;
  dVar5 = 0.0;
  dVar4 = 0.0;
  dVar41 = 0.0;
  if (*(int *)(param_1 + 0x174) == 0) {
    plVar28 = local_620 + 2;
    local_669 = local_669 ^ 1;
    local_5d0 = param_1 + 0x230;
    local_5a8 = (LPCRITICAL_SECTION)(param_1 + 0x1f0);
    local_5b0 = (LPCRITICAL_SECTION)(param_1 + 0x178);
    local_5b8 = param_1 + 0x1a0;
    local_590 = param_1 + 0x148;
    local_598 = param_1 + 0x158;
    local_65c = 4;
    local_5c8 = ZEXT816(0);
    local_638 = 0.0;
    uVar14 = 0;
    uVar51 = 0;
    local_630 = 0.0;
    local_5f0 = 1.0;
    local_5e8 = 0;
    local_644 = 0;
    local_5e0 = 0;
    local_5d8 = 0;
    local_640 = 0;
    local_658 = plVar28;
    do {
      dVar4 = (double)CONCAT44(uVar51,uVar14);
      local_518 = 0;
      uStack_510 = 0;
      bVar34 = false;
      lVar17 = **(longlong **)(param_1 + 0x248);
      while (lVar17 != 0) {
        local_518 = *(undefined8 *)(lVar17 + 8);
        uStack_510 = *(undefined8 *)(lVar17 + 0x10);
        lVar36 = *(longlong *)(param_1 + 0x248);
        *(longlong *)(param_1 + 0x248) = lVar17;
        *(undefined8 *)(lVar17 + 8) = 0;
        *(undefined8 *)(lVar17 + 0x10) = 0;
        if (lVar36 != 0) {
          FUN_1400020a8();
        }
        iVar13 = FUN_146b71246(&local_238,&local_518);
        if (0 < iVar13) {
          lVar17 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                             (*(longlong **)(param_1 + 0xc0),&local_518);
          local_5d8 = local_5d8 + lVar17;
          bVar34 = true;
        }
        lVar17 = **(longlong **)(param_1 + 0x248);
      }
      local_3a8 = 0;
      local_3a0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_39c = 0xffffffff00000080;
      local_394 = 0;
      local_388 = 0;
      local_380 = 0;
      cVar12 = FUN_146b73928(local_5d0,&local_3c8);
      while (cVar12 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 8))
                  (*(longlong **)(param_1 + 0x98),&local_468);
        FUN_146b35124(&local_3c8,&local_418,&local_468);
        FUN_14681b5ea(&local_3c8,&local_418);
        local_3d0 = 0;
        if (local_3d8 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_418);
        local_420 = 0;
        if (local_428 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_468);
        FUN_1461c8dd4(&local_3c8,&local_418);
        FUN_14681b5ea(&local_3c8,&local_418);
        local_3d0 = 0;
        if (local_3d8 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_418);
        if (local_394 < (int)uStack_3c0) {
          lVar17 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                             (*(longlong **)(param_1 + 0xc0),&local_3c8);
          local_650 = local_650 + lVar17;
          FUN_146b73a22(&local_2d8,&local_3c8);
          bVar34 = true;
        }
        cVar12 = FUN_146b73928(local_5d0,&local_3c8);
      }
      local_498 = (undefined ***)0x0;
      local_488 = &PTR_LAB_149f34010;
      local_478 = &local_328;
      local_4a8[0] = FUN_142954cc8;
      local_480 = &local_2d8;
      if ((int)uStack_2d0 == local_2a4) {
        local_610 = (undefined8 *)0x0;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))
                  (*(longlong **)(param_1 + 0x98),&local_418,*(undefined4 *)(param_1 + 0x38),
                   local_4a8);
        lVar17 = (longlong)(int)uStack_410;
        local_610 = local_418;
        if (lVar17 != 0) {
          lVar36 = 0;
          do {
            pLVar19 = (LARGE_INTEGER *)((longlong)local_610 + lVar36);
            FUN_1457adc9c(&local_328,&local_418,pLVar19,0);
            local_408.QuadPart = 0;
            LStack_400 = (LARGE_INTEGER)0x0;
            local_418 = (undefined8 *)0x0;
            uStack_410 = (longlong *)0x0;
            uVar14 = FUN_1447addd0(pLVar19,0x10);
            lVar18 = FUN_146b85f4e(&local_148,uVar14,pLVar19);
            iVar13 = *(int *)(param_1 + 600);
            *(int *)(lVar18 + 4) = iVar13;
            ppuVar27 = (undefined8 **)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x20));
            if (&local_418 != ppuVar27) {
              uVar15 = *(uint *)(ppuVar27 + 1);
              puVar35 = *ppuVar27;
              uStack_410 = (longlong *)CONCAT44(uStack_410._4_4_,uVar15);
              if (uVar15 == 0 && uStack_410._4_4_ == 0) {
                uStack_410 = (longlong *)(ulonglong)uVar15;
              }
              else {
                FUN_1446dd670(&local_418,uVar15);
                if (uVar15 != 0) {
                  memcpy(local_418,puVar35,(longlong)(int)uVar15 * 2);
                }
              }
            }
            (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))
                      (*(longlong **)(param_1 + 0xc0),&local_468,pLVar19);
            if (local_408.QuadPart != 0) {
              FUN_1400020a8();
            }
            local_408 = local_468;
            LStack_400 = LStack_460;
            FUN_140c540b4(&local_408,&DAT_149e065c6,1);
            plVar1 = local_620;
            plVar28 = local_658;
            plVar2 = *(longlong **)(param_1 + 0xa8);
            if (local_620 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_620 + 1) = (int)local_620[1] + 1;
              UNLOCK();
            }
            local_468 = *pLVar19;
            LStack_460 = pLVar19[1];
            local_4e8 = (code *)0x0;
            local_4d8 = (undefined8 *)0x0;
            local_4d8 = (undefined8 *)FUN_14001cc68(0x28,8);
            *local_4d8 = &PTR_FUN_149f34030;
            local_4d8[1] = plVar28;
            local_4d8[2] = plVar1;
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
            *(LARGE_INTEGER *)(local_4d8 + 3) = local_468;
            *(LARGE_INTEGER *)(local_4d8 + 4) = LStack_460;
            if (local_4d8 != (undefined8 *)&DAT_fffffffffffffff8) {
              local_4e8 = FUN_142954d70;
            }
            FUN_146b73b96(local_538,&local_418);
            (**(code **)(*plVar2 + 0x18))(plVar2,local_538);
            plVar2 = local_620;
            if (local_620 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_620 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_620)(local_620);
                LOCK();
                piVar21 = (int *)((longlong)plVar2 + 0xc);
                *piVar21 = *piVar21 + -1;
                UNLOCK();
                if (*piVar21 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            if ((undefined4 *)local_408.QuadPart != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            if (local_418 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            lVar36 = lVar36 + 0x10;
          } while (lVar17 * 0x10 != lVar36);
        }
      }
      local_548 = 0;
      uStack_540 = 0;
      local_558 = 0;
      uStack_550 = 0;
      cVar12 = FUN_146b73c32(plVar28,&local_558);
      p_Var9 = local_5a8;
      while (local_5a8 = p_Var9, cVar12 != '\0') {
        local_418 = &local_558;
        uStack_410 = &local_548;
        FUN_146b86492(&local_378,&local_468);
        cVar12 = FUN_146b73c32(plVar28,&local_558);
        p_Var9 = local_5a8;
      }
      EnterCriticalSection(p_Var9);
      lVar17 = *(longlong *)(param_1 + 0x218);
      iVar13 = *(int *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      LeaveCriticalSection(p_Var9);
      local_5a0 = lVar17;
      if ((longlong)iVar13 != 0) {
        lVar36 = (longlong)iVar13 << 4;
        do {
          uVar14 = FUN_1447addd0(lVar17,0x10);
          iVar13 = FUN_146b85e12(&local_148,uVar14);
          if (iVar13 == -1) {
            uVar14 = FUN_1447addd0(lVar17,0x10);
            iVar13 = FUN_140f5cb3a(&local_238,uVar14);
            if (iVar13 == -1) {
              FUN_1457adc9c(&local_288,&local_418,lVar17,0);
              uVar14 = FUN_1447addd0(lVar17,0x10);
              iVar13 = FUN_140f5cb3a(&local_2d8,uVar14);
              if (iVar13 == -1) {
                FUN_1457adc9c(&local_2d8,&local_418,lVar17,0);
                lVar18 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                                   (*(longlong **)(param_1 + 0xc0),lVar17);
                local_650 = local_650 + lVar18;
                bVar34 = true;
              }
            }
          }
          lVar17 = lVar17 + 0x10;
          lVar36 = lVar36 + -0x10;
        } while (lVar36 != 0);
        local_669 = 1;
      }
      if (((local_5e8 & 1) == 0) && ((local_669 & 1) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 8))
                  (*(longlong **)(param_1 + 0x98),&local_468);
        FUN_146b35124(&local_2d8,&local_418);
        FUN_14681b5ea(&local_2d8,&local_418);
        local_3d0 = 0;
        if (local_3d8 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_418);
        local_420 = 0;
        if (local_428 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(&local_468);
        plVar28 = *(longlong **)(param_1 + 0xc0);
        lVar17 = (**(code **)(*plVar28 + 0x20))(plVar28,&local_2d8);
        local_5e8 = CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
        if ((bool)(lVar17 != local_650 | bVar34)) {
LAB_1429494f9:
          (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x38))
                    (*(longlong **)(param_1 + 0xb8),lVar17 + local_5d8);
          local_650 = lVar17;
        }
      }
      else {
        lVar17 = local_650;
        if (bVar34) goto LAB_1429494f9;
      }
      p_Var9 = local_5b0;
      local_3f8 = (LARGE_INTEGER *)0x0;
      local_3f0 = 0;
      local_418 = (undefined8 *)0x0;
      uStack_410 = (longlong *)0x0;
      local_3ec = 0xffffffff00000080;
      local_3e4 = 0;
      local_3d8 = 0;
      uVar40 = 0;
      local_3d0 = 0;
      EnterCriticalSection(local_5b0);
      FUN_146b7b498(&local_418,local_5b8);
      LeaveCriticalSection(p_Var9);
      uVar29 = CONCAT44(0,local_3f0);
      uVar39 = 1;
      uVar38 = 0;
      uVar15 = 0;
      if (local_3f0 != 0) {
        pLVar19 = local_3f8;
        if (local_3f8 == (LARGE_INTEGER *)0x0) {
          pLVar19 = &local_408;
        }
        uVar15 = (pLVar19->s).LowPart;
        if (uVar15 == 0) {
          iVar13 = local_3f0 + 0x1e;
          if (-1 < (int)(local_3f0 - 1)) {
            iVar13 = local_3f0 - 1;
          }
          uVar38 = 0;
          uVar39 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar39 = 0;
          }
          uVar40 = 0;
          do {
            if (uVar39 == uVar38) goto LAB_142949622;
            uVar40 = (ulonglong)((int)uVar40 + 0x20);
            uVar15 = *(uint *)((longlong)pLVar19 + (uVar38 + 1) * 4);
            uVar38 = uVar38 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar40 = 0;
          uVar38 = 0;
        }
        uVar39 = (ulonglong)(-uVar15 & uVar15);
        uVar37 = uVar39 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar15 = ((int)uVar40 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)local_3f0 <= (int)uVar15) {
          uVar15 = local_3f0;
        }
      }
      if (uVar15 != local_3f0) {
        uVar31 = 0xffffffff;
        local_608._0_8_ = uVar29;
        do {
          local_618 = CONCAT44(local_618._4_4_,uVar31);
          if ((int)uStack_190 != local_164) {
            puVar22 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar22 = local_160;
            }
            iVar13 = *(int *)(puVar22 +
                             (ulonglong)
                             (local_150 - 1U & *(uint *)(local_418 + (longlong)(int)uVar15 * 4)) * 4
                             );
            while (iVar13 != -1) {
              lVar17 = local_198 + (longlong)iVar13 * 0x1c;
              if (*(uint *)(local_198 + (longlong)iVar13 * 0x1c) ==
                  *(uint *)(local_418 + (longlong)(int)uVar15 * 4)) goto LAB_1429498c6;
              iVar13 = *(int *)(lVar17 + 0x14);
            }
          }
          lVar17 = 0;
LAB_1429498c6:
          puVar35 = local_418 + (longlong)(int)uVar15 * 4;
          lVar17 = lVar17 + 4;
          local_668 = uVar38;
          uVar14 = FUN_1447addd0(lVar17,0x10);
          puVar22 = (undefined1 *)FUN_146b85f4e(&local_148,uVar14,lVar17);
          *puVar22 = 0;
          cVar12 = (**(code **)(*(longlong *)puVar35[1] + 0x10))();
          if (cVar12 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))
                      (*(longlong **)(param_1 + 0xb8),lVar17,puVar22 + 8);
LAB_142949b6c:
            FUN_1457adc9c(&local_1e8,&local_468,lVar17,0);
            iVar13 = *(int *)(puVar22 + 0x18);
            if ((-1 < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x30) <= iVar13)) {
              plVar28 = *(longlong **)(param_1 + 0xb0);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
                uVar29 = local_608._0_8_;
              }
              local_580 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              local_578 = DAT_14c844848;
              local_6a8 = &local_580;
              (**(code **)(*plVar28 + 0x38))(plVar28,1,&DAT_149f2f964,0);
              LOCK();
              *(undefined4 *)(param_1 + 0x174) = 1;
              UNLOCK();
              iVar13 = *(int *)(puVar22 + 0x18);
            }
            *(int *)(puVar22 + 0x18) = iVar13 + 1;
            piVar21 = (int *)(*(longlong *)(param_1 + 0x260) + (longlong)*(int *)(puVar22 + 4) * 4);
            *piVar21 = *piVar21 + 1;
            piVar21 = *(int **)(param_1 + 0x260);
            if (0x6400000 < piVar21[*(int *)(puVar22 + 4)]) {
              piVar21[*(int *)(puVar22 + 4)] = 0x6400000;
              piVar21 = *(int **)(param_1 + 0x260);
            }
            uVar14 = 0;
            if (1 < (longlong)*(int *)(param_1 + 0x268)) {
              iVar13 = *piVar21;
              uVar38 = 0;
              uVar37 = 1;
              do {
                if (piVar21[uVar37] < iVar13) {
                  uVar38 = uVar37 & 0xffffffff;
                  iVar13 = piVar21[uVar37];
                }
                uVar14 = (undefined4)uVar38;
                uVar37 = uVar37 + 1;
              } while ((longlong)*(int *)(param_1 + 0x268) != uVar37);
            }
            *(undefined4 *)(param_1 + 600) = uVar14;
            QueryPerformanceCounter(&local_468);
            auVar45._8_4_ = local_468.s.HighPart;
            auVar45._0_8_ = local_468.QuadPart;
            auVar45._12_4_ = 0x45300000;
            *(double *)(puVar22 + 0x28) =
                 (((double)CONCAT44(0x43300000,local_468.s.LowPart) - 4503599627370496.0) +
                 (auVar45._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
            FUN_146b71246(&local_328,lVar17);
            FUN_146b86afa(&local_378,lVar17);
          }
          else {
            local_628 = uVar40;
            puVar20 = (undefined8 *)(**(code **)(*(longlong *)puVar35[1] + 0x20))();
            local_568.QuadPart = 0;
            uVar15 = *(uint *)(puVar20 + 1);
            _Src = (void *)*puVar20;
            LStack_560.s.LowPart = uVar15;
            if ((longlong)(int)uVar15 == 0) {
              LStack_560.s.HighPart = 0;
            }
            else {
              FUN_1447a127e(&local_568,uVar15,0);
              memcpy((void *)local_568,_Src,(longlong)(int)uVar15);
            }
            local_468.QuadPart = 0;
            LStack_460.QuadPart = 0;
            local_458 = 0;
            cVar12 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x30))
                               (*(longlong **)(param_1 + 0xc0),lVar17,&local_468);
            if (cVar12 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))
                        (*(longlong **)(param_1 + 0xa0),&local_568,&local_468);
            }
            puVar20 = (undefined8 *)
                      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
                                (*(longlong **)(param_1 + 0xa0),&local_568,&local_584);
            cVar12 = (char)local_584;
            if ((char)local_584 == '\0') {
              lVar36 = local_5e0 + *(int *)(puVar22 + 0x1c);
              FUN_146b869d6(&local_148,lVar17);
              FUN_1457adc9c(&local_238,local_4ec,lVar17,0);
              local_570 = puVar20;
              (**(code **)(**(longlong **)(param_1 + 0x88) + 8))
                        (*(longlong **)(param_1 + 0x88),lVar17,&local_570);
              (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                        (*(longlong **)(param_1 + 0xb8),lVar17);
              uVar29 = local_608._0_8_;
              local_5e0 = lVar36;
              (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))
                        (*(longlong **)(param_1 + 0xb8),lVar36);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))
                        (*(longlong **)(param_1 + 0xb8),lVar17,puVar22 + 8,
                         CONCAT71((int7)((ulonglong)_Src >> 8),(char)local_584) & 0xffffffff);
              if (puVar20 != (undefined8 *)0x0) {
                (**(code **)*puVar20)(puVar20,1);
              }
            }
            uVar40 = local_628;
            if ((undefined4 *)local_568.QuadPart != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            if (cVar12 != '\0') goto LAB_142949b6c;
            QueryPerformanceCounter(&local_468);
            auVar44._8_4_ = local_468.s.HighPart;
            auVar44._0_8_ = local_468.QuadPart;
            auVar44._12_4_ = 0x45300000;
            dVar41 = (((double)CONCAT44(0x43300000,local_468.s.LowPart) - 4503599627370496.0) +
                     (auVar44._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 -
                     *(double *)(puVar22 + 0x20);
            local_638 = local_638 + dVar41;
            uVar14 = local_5c8._12_4_;
            local_5c8._8_4_ = local_5c8._8_4_;
            local_5c8._0_8_ = local_5c8._0_8_ + dVar41 * dVar41;
            local_5c8._12_4_ = uVar14;
            local_640 = local_640 + 1;
            local_630 = local_630 + 1.0;
            dVar3 = dVar3 + 1.0;
          }
          FUN_146b86c1e(&local_198,*(undefined4 *)puVar35);
          uVar31 = (uint)local_618 & ~(uint)uVar39;
          pLVar19 = local_3f8;
          if (local_3f8 == (LARGE_INTEGER *)0x0) {
            pLVar19 = &local_408;
          }
          iVar13 = (int)local_668;
          lVar17 = (longlong)iVar13;
          uVar15 = *(uint *)((longlong)pLVar19 + lVar17 * 4) & uVar31;
          uVar38 = local_668;
          if (uVar15 == 0) {
            iVar25 = local_3f0 + 0x1e;
            if (-1 < (int)(local_3f0 - 1)) {
              iVar25 = local_3f0 - 1;
            }
            iVar25 = iVar25 >> 5;
            uVar40 = (ulonglong)((int)uVar40 + 0x20);
            iVar32 = iVar25;
            if (iVar25 < iVar13) {
              iVar32 = iVar13;
            }
            if (iVar13 < iVar25) {
              lVar36 = 0;
              do {
                uVar15 = *(uint *)((longlong)pLVar19 + (lVar17 + lVar36 + 1) * 4);
                if (uVar15 != 0) {
                  uVar38 = (ulonglong)(iVar13 + (int)lVar36 + 1);
                  uVar31 = 0xffffffff;
                  goto LAB_142949d96;
                }
                uVar40 = (ulonglong)((int)uVar40 + 0x20);
                lVar36 = lVar36 + 1;
              } while (iVar32 - lVar17 != lVar36);
              uVar31 = 0xffffffff;
              iVar13 = iVar32;
            }
            uVar38 = (ulonglong)(iVar13 + 1);
            uVar29 = local_608._0_8_;
            uVar15 = local_3f0;
          }
          else {
LAB_142949d96:
            uVar39 = (ulonglong)(-uVar15 & uVar15);
            uVar37 = uVar39 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar15 = ((int)uVar40 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)local_3f0 <= (int)uVar15) {
              uVar15 = local_3f0;
            }
          }
          dVar5 = dVar5 + 1.0;
          dVar4 = dVar4 + 1.0;
        } while (uVar15 != (uint)uVar29);
      }
LAB_142949622:
      bVar34 = local_164 < (int)uStack_190 || local_1b4 < (int)uStack_1e0;
      if (local_170 == 0) {
        uVar38 = 1;
        uVar40 = 0;
        iVar13 = 0;
        uVar15 = 0;
      }
      else {
        puVar23 = local_178;
        if (local_178 == (uint *)0x0) {
          puVar23 = local_188;
        }
        uVar15 = *puVar23;
        if (uVar15 == 0) {
          iVar13 = local_170 + 0x1e;
          if (-1 < (int)(local_170 - 1)) {
            iVar13 = local_170 - 1;
          }
          uVar40 = 0;
          uVar29 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar29 = uVar40;
          }
          iVar13 = 0;
          do {
            if (uVar29 == uVar40) goto LAB_142949edc;
            iVar13 = iVar13 + 0x20;
            uVar15 = puVar23[uVar40 + 1];
            uVar40 = uVar40 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar40 = 0;
          iVar13 = 0;
        }
        uVar38 = (ulonglong)(-uVar15 & uVar15);
        uVar29 = uVar38 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar15 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)local_170 <= (int)uVar15) {
          uVar15 = local_170;
        }
      }
      if ((int)uVar15 < (int)local_170 &&
          (local_164 < (int)uStack_190 || local_1b4 < (int)uStack_1e0)) {
        uVar31 = 0xffffffff;
        do {
          lVar17 = local_198 + (longlong)(int)uVar15 * 0x1c + 4;
          uVar14 = FUN_1447addd0(lVar17,0x10);
          lVar17 = FUN_146b85f4e(&local_148,uVar14,lVar17);
          bVar34 = *(int *)(lVar17 + 0x18) != 0;
          uVar31 = ~(uint)uVar38 & uVar31;
          puVar23 = local_178;
          if (local_178 == (uint *)0x0) {
            puVar23 = local_188;
          }
          iVar25 = (int)uVar40;
          lVar36 = (longlong)iVar25;
          uVar15 = puVar23[lVar36] & uVar31;
          if (uVar15 == 0) {
            iVar32 = local_170 + 0x1e;
            if (-1 < (int)(local_170 - 1)) {
              iVar32 = local_170 - 1;
            }
            iVar32 = iVar32 >> 5;
            iVar33 = iVar32;
            if (iVar32 < iVar25) {
              iVar33 = iVar25;
            }
            if (iVar32 <= iVar25) break;
            lVar18 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar15 = puVar23[lVar36 + lVar18 + 1];
              if (uVar15 != 0) break;
              lVar18 = lVar18 + 1;
              if (iVar33 - lVar36 == lVar18) goto LAB_142949edc;
            }
            uVar40 = (ulonglong)(iVar25 + (int)lVar18 + 1);
            uVar31 = 0xffffffff;
          }
          uVar38 = (ulonglong)(-uVar15 & uVar15);
          uVar29 = uVar38 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar15 = (iVar13 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (((int)local_170 <= (int)uVar15) || (*(int *)(lVar17 + 0x18) == 0)) break;
        } while( true );
      }
LAB_142949edc:
      QueryPerformanceCounter(&local_468);
      if (bVar34) {
        lVar17 = local_468.QuadPart - *(longlong *)(param_1 + 0x168);
        auVar46._8_4_ = (int)((ulonglong)lVar17 >> 0x20);
        auVar46._0_8_ = lVar17;
        auVar46._12_4_ = 0x45300000;
        fVar50 = (float)(double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar3 / dVar5));
        if ((((double)CONCAT44(0x43300000,(int)lVar17) - 4503599627370496.0) +
            (auVar46._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 <=
            (double)*(float *)(param_1 + 0x60)) goto LAB_142949f81;
        iVar13 = 0;
        bVar34 = true;
      }
      else {
        fVar50 = (float)(double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar3 / dVar5));
LAB_142949f81:
        lVar17 = *(longlong *)(param_1 + 0x50);
        if (*(float *)(lVar17 + 0x10) <= fVar50) {
          iVar13 = 4;
        }
        else if (*(float *)(lVar17 + 0xc) <= fVar50) {
          iVar13 = 3;
        }
        else {
          iVar13 = 2 - (uint)(fVar50 < *(float *)(lVar17 + 8));
        }
        bVar34 = false;
      }
      if (local_65c != iVar13) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))(*(longlong **)(param_1 + 0xb8),iVar13)
        ;
        local_65c = iVar13;
      }
      if (local_3e4 < (int)uStack_410) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))(*(longlong **)(param_1 + 0xb8),fVar50)
        ;
      }
      if (3.0 <= dVar4) {
        local_5f0 = local_630 / dVar4;
        local_630 = 0.0;
      }
      uVar14 = (undefined4)(local_668 >> 0x20);
      local_668 = local_668 & 0xffffffff00000000;
      if (!bVar34) {
        fVar50 = (float)local_5f0;
        lVar17 = *(longlong *)(param_1 + 0x50);
        local_668 = CONCAT44(uVar14,4);
        if ((fVar50 < *(float *)(lVar17 + 0x10)) &&
           (local_668 = CONCAT44(uVar14,3), fVar50 < *(float *)(lVar17 + 0xc))) {
          local_668 = CONCAT44(uVar14,2 - (uint)(fVar50 < *(float *)(lVar17 + 8)));
        }
      }
      if ((local_669 & 1) != 0) {
        local_568.QuadPart = 0;
        LStack_560.QuadPart = 0;
        while( true ) {
          local_6a0 = &local_288;
          local_698 = &local_1e8;
          local_680 = (int)local_668;
          local_688 = &local_508;
          local_690 = &local_238;
          local_6a8 = &local_2d8;
          FUN_146b7342c(param_1,&local_468);
          local_568.s = local_468.s;
          LVar10.s = local_568.s;
          LStack_560.s = LStack_460.s;
          LVar11.s = LStack_560.s;
          local_568.s.HighPart = local_468.s.HighPart;
          local_568.s.LowPart = local_468.s.LowPart;
          LStack_560._0_4_ = LStack_460.s.LowPart;
          LStack_560._4_4_ = LStack_460.s.HighPart;
          bVar7 = local_568.s.HighPart == 0;
          bVar8 = local_568.s.LowPart == 0;
          bVar6 = LStack_560._0_4_ == 0;
          bVar34 = LStack_560._4_4_ == 0;
          local_568.s = LVar10.s;
          LStack_560.s = LVar11.s;
          if (((bVar7 && bVar8) && bVar6) && bVar34) break;
          uVar14 = FUN_1447addd0(&local_568,0x10);
          iVar13 = FUN_146b86734(&local_378,uVar14);
          if ((iVar13 == -1) || (lVar17 = (longlong)iVar13 * 0x28 + local_378, lVar17 == 0)) break;
          uVar14 = FUN_1447addd0(&local_568,0x10);
          puVar22 = (undefined1 *)FUN_146b85f4e(&local_148,uVar14,&local_568);
          *puVar22 = 1;
          iVar13 = *(int *)(lVar17 + 0x18) + -1;
          if (*(int *)(lVar17 + 0x18) == 0) {
            iVar13 = 0;
          }
          FUN_1402980a2(puVar22 + 8,*(undefined8 *)(lVar17 + 0x10),iVar13);
          uVar14 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                             (*(longlong **)(param_1 + 0xc0),&local_568);
          *(undefined4 *)(puVar22 + 0x1c) = uVar14;
          QueryPerformanceCounter(&local_468);
          auVar47._8_4_ = local_468.s.HighPart;
          auVar47._0_8_ = local_468.QuadPart;
          auVar47._12_4_ = 0x45300000;
          *(double *)(puVar22 + 0x20) =
               (((double)CONCAT44(0x43300000,local_468.s.LowPart) - 4503599627370496.0) +
               (auVar47._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
          local_584 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))
                                (*(longlong **)(param_1 + 0x90),puVar22 + 8,local_598,local_590);
          local_468.QuadPart = (LONGLONG)&local_584;
          LStack_460.QuadPart = (LONGLONG)&local_568;
          FUN_146b86d5c(&local_198,local_4ec,&local_468);
          FUN_146b71246(&local_288,&local_568);
          FUN_146b71246(&local_1e8,&local_568);
          (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                    (*(longlong **)(param_1 + 0xb8),&local_568);
        }
      }
      iVar13 = ((int)uStack_1e0 - local_1b4) + ((int)uStack_190 - local_164);
      if (local_644 != iVar13) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))(*(longlong **)(param_1 + 0xb8),iVar13)
        ;
        local_644 = iVar13;
      }
      plVar28 = local_658;
      if (10 < local_640) {
        if (local_170 == 0) {
          uVar38 = 1;
          uVar40 = 0;
          iVar13 = 0;
          uVar15 = 0;
        }
        else {
          puVar23 = local_178;
          if (local_178 == (uint *)0x0) {
            puVar23 = local_188;
          }
          uVar15 = *puVar23;
          if (uVar15 == 0) {
            iVar13 = local_170 + 0x1e;
            if (-1 < (int)(local_170 - 1)) {
              iVar13 = local_170 - 1;
            }
            uVar40 = 0;
            uVar29 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar29 = uVar40;
            }
            iVar13 = 0;
            do {
              if (uVar29 == uVar40) goto LAB_14294a6e2;
              iVar13 = iVar13 + 0x20;
              uVar15 = puVar23[uVar40 + 1];
              uVar40 = uVar40 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar40 = 0;
            iVar13 = 0;
          }
          uVar38 = (ulonglong)(-uVar15 & uVar15);
          uVar29 = uVar38 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar15 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)local_170 <= (int)uVar15) {
            uVar15 = local_170;
          }
        }
        if (uVar15 != local_170) {
          local_608._8_4_ = uVar16;
          local_608._0_8_ = dVar3;
          local_608._12_4_ = uVar49;
          auVar48._8_4_ = (int)(local_640 >> 0x20);
          auVar48._0_8_ = local_640;
          auVar48._12_4_ = 0x45300000;
          dVar41 = ((double)CONCAT44(0x43300000,(int)local_640) - 4503599627370496.0) +
                   (auVar48._8_8_ - 1.9342813113834067e+25);
          dVar3 = local_638 / dVar41;
          dVar41 = (double)local_5c8._0_8_ / dVar41 - dVar3 * dVar3;
          uVar31 = 0xffffffff;
          local_628 = local_628 & 0xffffffff00000000;
          local_618 = (ulonglong)local_170;
          do {
            lVar17 = local_198;
            local_668 = CONCAT44(local_668._4_4_,iVar13);
            lVar18 = local_198 + (longlong)(int)uVar15 * 0x1c + 4;
            uVar16 = FUN_1447addd0(lVar18,0x10);
            lVar36 = FUN_146b85f4e(&local_148,uVar16,lVar18);
            if (*(int *)(lVar36 + 0x18) == 0) {
              QueryPerformanceCounter(&local_468);
              puVar35 = (undefined8 *)
                        ((((double)CONCAT44(0x43300000,local_468.s.LowPart) - 4503599627370496.0) +
                         ((double)CONCAT44(0x45300000,local_468.s.HighPart) - 1.9342813113834067e+25
                         )) * DAT_14c83f418 - *(double *)(lVar36 + 0x20));
              pplVar42 = (longlong **)SQRT(dVar41);
              if (dVar41 < 0.0) {
                pplVar42 = (longlong **)sqrt(dVar41);
              }
              puVar43 = (undefined8 *)((double)pplVar42 * 4.0 + dVar3);
              puVar20 = (undefined8 *)(double)*(float *)(param_1 + 0x68);
              if ((double)*(float *)(param_1 + 0x68) <= (double)puVar43) {
                puVar20 = puVar43;
              }
              if ((double)puVar20 < (double)puVar35) {
                cVar12 = FUN_144a38768(lVar36 + 8,L".chunk",6,1);
                if (cVar12 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                            (*(longlong **)(param_1 + 0x90),
                             *(undefined4 *)(lVar17 + (longlong)(int)uVar15 * 0x1c));
                  local_6a8 = pplVar42;
                  local_6a0 = puVar35;
                  local_698 = puVar20;
                  uVar24 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))
                                     (*(longlong **)(param_1 + 0xb8),lVar18,lVar36 + 8,dVar3);
                  local_628 = CONCAT44(local_628._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)uVar24 >> 8),1));
                }
              }
            }
            uVar31 = uVar31 & ~(uint)uVar38;
            puVar23 = local_178;
            if (local_178 == (uint *)0x0) {
              puVar23 = local_188;
            }
            iVar25 = (int)uVar40;
            lVar17 = (longlong)iVar25;
            uVar15 = puVar23[lVar17] & uVar31;
            iVar13 = (int)local_668;
            if (uVar15 == 0) {
              iVar32 = local_170 + 0x1e;
              if (-1 < (int)(local_170 - 1)) {
                iVar32 = local_170 - 1;
              }
              iVar32 = iVar32 >> 5;
              iVar13 = (int)local_668 + 0x20;
              iVar33 = iVar32;
              if (iVar32 < iVar25) {
                iVar33 = iVar25;
              }
              if (iVar25 < iVar32) {
                lVar36 = 0;
                do {
                  uVar15 = puVar23[lVar17 + lVar36 + 1];
                  if (uVar15 != 0) {
                    uVar40 = (ulonglong)(iVar25 + (int)lVar36 + 1);
                    uVar31 = 0xffffffff;
                    goto LAB_14294a603;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar36 = lVar36 + 1;
                } while (iVar33 - lVar17 != lVar36);
                uVar31 = 0xffffffff;
                iVar25 = iVar33;
              }
              uVar40 = (ulonglong)(iVar25 + 1);
              uVar15 = local_170;
            }
            else {
LAB_14294a603:
              uVar38 = (ulonglong)(-uVar15 & uVar15);
              uVar29 = uVar38 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              uVar15 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if ((int)local_170 <= (int)uVar15) {
                uVar15 = local_170;
              }
            }
          } while (uVar15 != (uint)local_618);
          dVar3 = local_608._0_8_;
          uVar16 = local_608._8_4_;
          uVar49 = local_608._12_4_;
          plVar28 = local_658;
          if ((local_628 & 1) != 0) {
            local_638 = 0.0;
            local_640 = 0;
            local_5c8 = ZEXT816(0);
          }
        }
      }
LAB_14294a6e2:
      while( true ) {
        if ((*(int *)(param_1 + 0x170) == 0) || (*(int *)(param_1 + 0x174) != 0)) break;
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
                  (*(longlong **)(param_1 + 0x80),0x3dcccccd);
      }
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
      local_3d0 = 0;
      if (local_3d8 != 0) {
        FUN_1400020a8();
      }
      FUN_146b7b30c(&local_418);
      if (local_5a0 != 0) {
        FUN_1400020a8();
      }
      if (local_548 != 0) {
        FUN_1400020a8();
      }
      if (local_610 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_4a8[0] != (code *)0x0) {
        pppuVar30 = local_498;
        if (local_498 == (undefined ***)0x0) {
          pppuVar30 = &local_488;
        }
        (*(code *)(*pppuVar30)[2])();
      }
      local_380 = 0;
      if (local_388 != 0) {
        FUN_1400020a8();
      }
      uVar40 = (ulonglong)dVar4 & -(ulonglong)(dVar4 < 3.0);
      uVar14 = (undefined4)uVar40;
      uVar51 = (undefined4)(uVar40 >> 0x20);
      FUN_140149fc2(&local_3c8);
      dVar4 = dVar5;
      dVar41 = dVar3;
    } while (*(int *)(param_1 + 0x174) == 0);
  }
  uVar15 = local_170;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (local_170 == 0) {
      uVar38 = 1;
      uVar40 = 0;
      iVar13 = 0;
      uVar31 = 0;
    }
    else {
      puVar23 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar23 = local_188;
      }
      uVar31 = *puVar23;
      if (uVar31 == 0) {
        iVar13 = local_170 + 0x1e;
        if (-1 < (int)(local_170 - 1)) {
          iVar13 = local_170 - 1;
        }
        uVar40 = 0;
        uVar29 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar29 = uVar40;
        }
        iVar13 = 0;
        do {
          if (uVar29 == uVar40) goto LAB_14294a89f;
          iVar13 = iVar13 + 0x20;
          uVar31 = puVar23[uVar40 + 1];
          uVar40 = uVar40 + 1;
        } while (uVar31 == 0);
      }
      else {
        uVar40 = 0;
        iVar13 = 0;
      }
      uVar38 = (ulonglong)(-uVar31 & uVar31);
      uVar29 = uVar38 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar31 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)local_170 <= (int)uVar31) {
        uVar31 = local_170;
      }
    }
    if (uVar31 != local_170) {
      uVar26 = 0xffffffff;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
                  (*(longlong **)(param_1 + 0x90),
                   *(undefined4 *)(local_198 + (longlong)(int)uVar31 * 0x1c));
        uVar26 = ~(uint)uVar38 & uVar26;
        puVar23 = local_178;
        if (local_178 == (uint *)0x0) {
          puVar23 = local_188;
        }
        iVar25 = (int)uVar40;
        lVar17 = (longlong)iVar25;
        uVar31 = puVar23[lVar17] & uVar26;
        if (uVar31 == 0) {
          iVar32 = local_170 + 0x1e;
          if (-1 < (int)(local_170 - 1)) {
            iVar32 = local_170 - 1;
          }
          iVar32 = iVar32 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar33 = iVar32;
          if (iVar32 < iVar25) {
            iVar33 = iVar25;
          }
          if (iVar25 < iVar32) {
            lVar36 = 0;
            do {
              uVar31 = puVar23[lVar17 + lVar36 + 1];
              if (uVar31 != 0) {
                uVar40 = (ulonglong)(iVar25 + (int)lVar36 + 1);
                uVar26 = 0xffffffff;
                goto LAB_14294abb6;
              }
              iVar13 = iVar13 + 0x20;
              lVar36 = lVar36 + 1;
            } while (iVar33 - lVar17 != lVar36);
            uVar26 = 0xffffffff;
            iVar25 = iVar33;
          }
          uVar40 = (ulonglong)(iVar25 + 1);
          uVar31 = local_170;
        }
        else {
LAB_14294abb6:
          uVar38 = (ulonglong)(-uVar31 & uVar31);
          uVar29 = uVar38 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar31 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)local_170 <= (int)uVar31) {
            uVar31 = local_170;
          }
        }
      } while (uVar31 != uVar15);
    }
  }
LAB_14294a89f:
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))(*(longlong **)(param_1 + 0xb8),local_65c);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))
            (*(longlong **)(param_1 + 0xb8),
             (float)(double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar41 / dVar4)));
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))(*(longlong **)(param_1 + 0xb8),0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x80) = 0;
  FUN_140b576f0();
  local_330 = 0;
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  FUN_146b7b69a(&local_378);
  plVar28 = local_620;
  local_2e0 = 0;
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_328);
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar21 = (int *)((longlong)plVar28 + 0xc);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  local_290 = 0;
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_2d8);
  if (local_508 != 0) {
    FUN_1400020a8();
  }
  local_240 = 0;
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_288);
  local_1f0 = 0;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_238);
  local_1a0 = 0;
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_1e8);
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b7b808(&local_198);
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_146b7b896(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294ac50 FUN_14294ac50 body=55 status=ok
// SIG undefined FUN_14294ac50(void)

bool FUN_14294ac50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x10);
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(uVar1,uVar2,param_2);
  return iVar3 == -1;
}



// FUNCTION 14294aca6 FUN_14294aca6 body=12 status=ok
// SIG undefined FUN_14294aca6(void)

void FUN_14294aca6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294acaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294acb2 FUN_14294acb2 body=29 status=ok
// SIG undefined FUN_14294acb2(void)

undefined8 FUN_14294acb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294acd0 FUN_14294acd0 body=138 status=ok
// SIG undefined FUN_14294acd0(void)

ulonglong FUN_14294acd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_140f5cb3a(uVar1,uVar3,param_2);
  uVar6 = (undefined7)((ulonglong)uVar1 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (iVar4 == -1) {
    uVar3 = FUN_1447addd0(param_2,0x10);
    iVar4 = FUN_140f5cb3a(lVar2 + 0x50,uVar3,param_2);
    if (iVar4 == -1) {
      uVar3 = FUN_1447addd0(param_2,0x10);
      iVar4 = FUN_140f5cb3a(lVar2 + 0xa0,uVar3,param_2);
      uVar5 = CONCAT71(uVar6,iVar4 != -1);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14294ad78 FUN_14294ad78 body=12 status=ok
// SIG undefined FUN_14294ad78(void)

void FUN_14294ad78(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294ad81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294ad84 FUN_14294ad84 body=29 status=ok
// SIG undefined FUN_14294ad84(void)

undefined8 FUN_14294ad84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294ada2 FUN_14294ada2 body=99 status=ok
// SIG undefined FUN_14294ada2(void)

bool FUN_14294ada2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(lVar1 + 0x50,uVar2,param_2);
  if (iVar3 == -1) {
    lVar1 = param_1[1];
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_140f5cb3a(lVar1,uVar2,param_2);
    bVar4 = iVar3 != -1;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 14294ae24 FUN_14294ae24 body=12 status=ok
// SIG undefined FUN_14294ae24(void)

void FUN_14294ae24(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294ae2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294ae30 FUN_14294ae30 body=29 status=ok
// SIG undefined FUN_14294ae30(void)

undefined8 FUN_14294ae30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294ae4d FUN_14294ae4d body=773 status=ok
// SIG undefined FUN_14294ae4d(void)

undefined8 * FUN_14294ae4d(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f331e0;
  uStack_60 = *param_2;
  local_88[0] = FUN_146b7603c;
  FUN_146b767d8(&local_a8,param_3);
  plVar10 = plStack_a0;
  uVar3 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar7 = FUN_14118da1c();
      bVar4 = FUN_14054d46e(uVar7,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_146b75f99(&local_a8,local_88);
      goto LAB_14294b06c;
    }
  }
  FUN_145c3b830(&local_c0);
  puVar6 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  local_b0 = 1;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  *puVar6 = &PTR_FUN_149f33220;
  puVar6[2] = local_88[0];
  puVar6[4] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_54;
  *(undefined4 *)(puVar6 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_4c;
  puVar6[6] = local_68;
  puVar6[7] = uStack_60;
  if (local_88[0] != (code *)0x0) {
    local_88[0] = (code *)0x0;
  }
  puVar6[10] = local_a8;
  puVar6[0xb] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = local_98;
  puVar6[0xd] = local_c0;
  puVar6[0xe] = local_b8;
  uVar5 = FUN_146268020();
  FUN_140002266(&local_d0,L"TAsync %d",uVar5);
  puVar8 = local_d0;
  if (local_c8 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_e0 = 0;
  local_e8 = 0xffffffffffffffff;
  uVar7 = FUN_1411b1052(puVar6,puVar8,0,0);
  *(undefined8 *)(local_c0 + 0x80) = uVar7;
  FUN_140b576f0();
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
LAB_14294b06c:
  plVar1 = plStack_a0;
  *param_1 = uVar3;
  param_1[1] = plVar10;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar9 = local_78;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if (*param_3 != 0) {
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14294b17a FUN_14294b17a body=1056 status=ok
// SIG undefined FUN_14294b17a(void)

undefined8 * FUN_14294b17a(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 local_89;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f33250;
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_88 = FUN_146b769ae;
  FUN_14170b918(&local_a8,param_3);
  plVar13 = plStack_a0;
  uVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_a0 + 8) = *(int *)((longlong)plStack_a0 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar2;
  if (puVar8 != (uint *)0x0) goto LAB_14294b297;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_14294b153);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar2 = puVar7;
    FUN_140217a48(puVar2);
    puVar8 = (uint *)*puVar2;
LAB_14294b297:
    puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar14 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar11 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar2;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar14 + 0x22);
      uVar10 = 0;
      if (puVar11 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_14294b317;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_14294b317:
  *(uint **)(puVar8 + 0x10) = puVar11;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar14,0);
  *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar14[0x16] = local_88;
  puVar14[0x18] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 0x1c) = uStack_58;
  *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_54;
  *(undefined4 *)(puVar14 + 0x1d) = uStack_50;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_4c;
  puVar14[0x1a] = local_68;
  puVar14[0x1b] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar14[0x1e] = local_a8;
  puVar14[0x1f] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0x20) = 0;
  *(undefined4 *)(puVar14 + 0x21) = 0xff;
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar14[0xf] = uVar9;
  puVar14[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_89 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    local_89 = 1;
    FUN_1447439e4(puVar14);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  plVar6 = plStack_a0;
  *param_1 = uVar5;
  param_1[1] = plVar13;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar12 = local_78;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294b59b FUN_14294b59b body=829 status=ok
// SIG undefined FUN_14294b59b(void)

longlong * FUN_14294b59b(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f334a0;
  uStack_60 = *param_2;
  local_88 = FUN_146b79a18;
  FUN_14170b918(&local_a8,param_3);
  plVar11 = plStack_a0;
  lVar3 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar7 = FUN_14118da1c();
      bVar5 = FUN_14054d46e(uVar7,L"nothreading");
      DAT_14c83f0f8 = bVar5 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar4 = local_88;
    if (DAT_14c83f0f8 != 1) {
      pppuVar9 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar9 = &local_68;
      }
      uVar7 = (*(code *)(*pppuVar9)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_a8 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_14294b69e;
    }
  }
  FUN_145c3b830(&local_c0);
  puVar8 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  local_b0 = 1;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  *puVar8 = TAsyncRunnable<void>::vftable;
  puVar8[2] = local_88;
  puVar8[4] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar8 + 8) = local_58;
  *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_54;
  *(undefined4 *)(puVar8 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_4c;
  puVar8[6] = local_68;
  puVar8[7] = uStack_60;
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar8[10] = local_a8;
  puVar8[0xb] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar8 + 0xc) = 0;
  puVar8[0xd] = local_c0;
  puVar8[0xe] = local_b8;
  uVar6 = FUN_146268020();
  FUN_140002266(&local_d0,L"TAsync %d",uVar6);
  puVar10 = local_d0;
  if (local_c8 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  local_e0 = 0;
  local_e8 = 0xffffffffffffffff;
  uVar7 = FUN_1411b1052(puVar8,puVar10,0,0);
  *(undefined8 *)(local_c0 + 0x80) = uVar7;
  FUN_140b576f0();
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
LAB_14294b69e:
  plVar2 = plStack_a0;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar11;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_a0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar9 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar9 = local_78;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if (*param_3 != 0) {
    plVar11 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14294b8da FUN_14294b8da body=208 status=ok
// SIG undefined FUN_14294b8da(void)

void FUN_14294b8da(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xd0)) {
    do {
      FUN_14000f986(0);
    } while (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xd0));
  }
  LOCK();
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  UNLOCK();
  lVar6 = *param_2;
  lVar7 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_4;
  puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar9 = 0;
  puVar9[1] = lVar6;
  puVar9[2] = lVar7;
  uVar8 = param_3[1];
  puVar9[3] = *param_3;
  puVar9[4] = uVar8;
  puVar9[5] = uVar1;
  *(undefined4 *)(puVar9 + 8) = param_5[4];
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)(puVar9 + 6) = *param_5;
  *(undefined4 *)((longlong)puVar9 + 0x34) = uVar3;
  *(undefined4 *)(puVar9 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
  if (puVar9 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar9;
    *puVar2 = puVar9;
    if (*param_2 != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 14294b9aa FUN_14294b9aa body=1906 status=ok
// SIG undefined FUN_14294b9aa(void)

void FUN_14294b9aa(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  LARGE_INTEGER LVar12;
  undefined2 *puVar13;
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_1b8 [44];
  uint local_18c;
  undefined8 *local_188;
  LARGE_INTEGER local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  LARGE_INTEGER local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  LARGE_INTEGER local_128;
  undefined8 uStack_120;
  int local_118;
  int local_114;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  local_d8.QuadPart = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    do {
      if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0xd0) < 1)) break;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
      cVar6 = FUN_146b79a54(param_1 + 0xc0,&local_e8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
      if (cVar6 == '\0') {
        FUN_14000f986(0x3dcccccd);
      }
      else {
        LOCK();
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
        UNLOCK();
        local_130 = 0x4200000003;
        local_128 = local_d8;
        uStack_120 = uStack_d0;
        local_118 = (int)uStack_e0;
        local_114 = (int)uStack_e0;
        local_110 = 0x300;
        local_108 = local_c8;
        local_f0 = uStack_b0;
        local_100 = CONCAT44(local_bc,uStack_c0);
        uStack_f8 = CONCAT44(uStack_b4,uStack_b8);
        local_188 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *local_188 = &PTR_FUN_149f33500;
        local_188[1] = &local_e8;
        local_188[2] = &local_130;
        FUN_146b43a58(&local_158,*(undefined4 *)(param_1 + 0x28),&local_d8,&local_c8);
        iVar14 = (int)uStack_150 + -1;
        if ((int)uStack_150 == 0) {
          iVar14 = 0;
        }
        iVar2 = *(int *)(param_1 + 0x20);
        iVar9 = iVar14 + 1 + (uint)((longlong)iVar2 == 0);
        local_168 = (undefined2 *)0x0;
        _Src = *(void **)(param_1 + 0x18);
        local_160 = iVar2;
        if (iVar9 == 0 && iVar2 == 0) {
          local_15c = 0;
        }
        else {
          if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar9 + iVar2);
          }
          FUN_1446dd670(&local_168,iVar9 + iVar2,0);
          if (iVar2 != 0) {
            memcpy(local_168,_Src,(longlong)iVar2 * 2);
          }
        }
        FUN_1401aebe8(&local_168,local_158.QuadPart,iVar14);
        if ((undefined2 *)local_158.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_170 = 0xffffffffffffffff;
        puVar13 = &DAT_149dfb77a;
        if (local_160 != 0) {
          puVar13 = local_168;
        }
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                          (*(longlong **)(param_1 + 0x30),puVar13,&local_170);
        uVar4 = local_170;
        if (cVar6 == '\0') {
          if (*(int *)(param_1 + 0x8c) == 0) {
            iVar14 = *(int *)(param_1 + 8) + 1;
            local_18c = 0;
            do {
              if ((local_18c & 1) != 0) goto LAB_14294bdcb;
              iVar14 = iVar14 + -1;
              if (iVar14 < 0) goto LAB_14294bda0;
              QueryPerformanceCounter(&local_158);
              local_180.s = local_158.s;
              plVar3 = *(longlong **)(param_1 + 0x30);
              FUN_140bee914(&local_158,&local_168);
              LVar12.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if ((int)uStack_150 != 0) {
                LVar12 = local_158;
              }
              (**(code **)(*plVar3 + 0x10))(plVar3,LVar12.QuadPart);
              if ((undefined2 *)local_158.QuadPart != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar13 = &DAT_149dfb77a;
              if (local_160 != 0) {
                puVar13 = local_168;
              }
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                        (*(longlong **)(param_1 + 0x30),&local_178,puVar13,0);
              if (local_178 == (longlong *)0x0) {
                FUN_14000f986();
              }
              else {
                cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                                  (*(longlong **)(param_1 + 0x38),local_178,local_188);
                plVar3 = *(longlong **)(param_1 + 0x50);
                QueryPerformanceCounter(&local_158);
                LOCK();
                *plVar3 = *plVar3 + (local_158.QuadPart - (longlong)local_180);
                UNLOCK();
                lVar11 = (**(code **)(*local_178 + 0x30))();
                cVar7 = (**(code **)(*local_178 + 0x1f8))();
                puVar13 = &DAT_149dfb77a;
                if (local_160 != 0) {
                  puVar13 = local_168;
                }
                cVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x80))
                                  (*(longlong **)(param_1 + 0x30),puVar13);
                if (((cVar7 == '\0') || (cVar6 != '\0')) || (cVar8 == '\0')) {
                  FUN_14000f986();
                }
                else {
                  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                  uVar4 = local_c8;
                  *puVar10 = 0;
                  *(LARGE_INTEGER *)(puVar10 + 1) = local_d8;
                  puVar10[2] = uStack_d0;
                  puVar10[3] = lVar11;
                  if (puVar10 != (undefined8 *)0x0) {
                    LOCK();
                    puVar1 = *(undefined8 **)(param_1 + 0xe0);
                    *(undefined8 **)(param_1 + 0xe0) = puVar10;
                    UNLOCK();
                    LOCK();
                    *puVar1 = puVar10;
                    UNLOCK();
                  }
                  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                  *puVar10 = 0;
                  *(LARGE_INTEGER *)(puVar10 + 1) = local_d8;
                  puVar10[2] = uStack_d0;
                  puVar10[3] = uVar4;
                  if (puVar10 != (undefined8 *)0x0) {
                    LOCK();
                    puVar1 = *(undefined8 **)(param_1 + 0xf0);
                    *(undefined8 **)(param_1 + 0xf0) = puVar10;
                    UNLOCK();
                    LOCK();
                    *puVar1 = puVar10;
                    UNLOCK();
                  }
                  local_158 = local_d8;
                  uStack_150 = uStack_d0;
                  local_138 = uStack_b0;
                  local_148 = CONCAT44(local_bc,uStack_c0);
                  uStack_140 = CONCAT44(uStack_b4,uStack_b8);
                  puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                  *puVar10 = 0;
                  *(LARGE_INTEGER *)(puVar10 + 1) = local_158;
                  puVar10[2] = uStack_150;
                  puVar10[3] = local_148;
                  puVar10[4] = uStack_140;
                  *(undefined4 *)(puVar10 + 5) = local_138;
                  if (puVar10 != (undefined8 *)0x0) {
                    LOCK();
                    puVar1 = *(undefined8 **)(param_1 + 0x100);
                    *(undefined8 **)(param_1 + 0x100) = puVar10;
                    UNLOCK();
                    LOCK();
                    *puVar1 = puVar10;
                    UNLOCK();
                  }
                  LOCK();
                  **(longlong **)(param_1 + 0x58) = **(longlong **)(param_1 + 0x58) + 1;
                  UNLOCK();
                  LOCK();
                  **(longlong **)(param_1 + 0x60) = **(longlong **)(param_1 + 0x60) + lVar11;
                  UNLOCK();
                  LOCK();
                  *(longlong *)(param_1 + 0x48) =
                       *(longlong *)(param_1 + 0x48) +
                       (ulonglong)(uint)(local_114 + local_130._4_4_);
                  UNLOCK();
                  if (0 < *(longlong *)(param_1 + 0x48)) {
                    LOCK();
                    **(longlong **)(param_1 + 0x70) =
                         (longlong)
                         (((double)**(longlong **)(param_1 + 0x60) /
                          (double)*(longlong *)(param_1 + 0x48)) * 10000.0);
                    UNLOCK();
                  }
                  uVar4 = **(undefined8 **)(param_1 + 0x50);
                  auVar16._8_4_ = (int)((ulonglong)uVar4 >> 0x20);
                  auVar16._0_8_ = uVar4;
                  auVar16._12_4_ = 0x45300000;
                  dVar15 = (((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0) +
                           (auVar16._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
                  local_18c = (uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
                  if (0.0 < dVar15) {
                    LOCK();
                    **(longlong **)(param_1 + 0x68) =
                         (longlong)((double)**(longlong **)(param_1 + 0x60) / dVar15);
                    UNLOCK();
                  }
                }
              }
              if (local_178 != (longlong *)0x0) {
                (**(code **)*local_178)(local_178,1);
              }
            } while (*(int *)(param_1 + 0x8c) == 0);
            if ((local_18c & 1) != 0) goto LAB_14294bdcb;
          }
LAB_14294bda0:
          puVar13 = &DAT_149dfb77a;
          if (local_160 != 0) {
            puVar13 = local_168;
          }
          FUN_140033559(".\\Runtime/Online/BuildPatchServices/Private/Generation/ChunkWriter.cpp",
                        0xda,L"Chunk save failure (%s).",puVar13);
        }
        else {
          puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          uVar5 = local_c8;
          *puVar10 = 0;
          *(LARGE_INTEGER *)(puVar10 + 1) = local_d8;
          puVar10[2] = uStack_d0;
          puVar10[3] = uVar4;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = *(undefined8 **)(param_1 + 0xe0);
            *(undefined8 **)(param_1 + 0xe0) = puVar10;
            UNLOCK();
            LOCK();
            *puVar1 = puVar10;
            UNLOCK();
          }
          puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          *puVar10 = 0;
          *(LARGE_INTEGER *)(puVar10 + 1) = local_d8;
          puVar10[2] = uStack_d0;
          puVar10[3] = uVar5;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = *(undefined8 **)(param_1 + 0xf0);
            *(undefined8 **)(param_1 + 0xf0) = puVar10;
            UNLOCK();
            LOCK();
            *puVar1 = puVar10;
            UNLOCK();
          }
          local_158 = local_d8;
          uStack_150 = uStack_d0;
          local_138 = uStack_b0;
          local_148 = CONCAT44(local_bc,uStack_c0);
          uStack_140 = CONCAT44(uStack_b4,uStack_b8);
          puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          *puVar10 = 0;
          *(LARGE_INTEGER *)(puVar10 + 1) = local_158;
          puVar10[2] = uStack_150;
          puVar10[3] = local_148;
          puVar10[4] = uStack_140;
          *(undefined4 *)(puVar10 + 5) = local_138;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = *(undefined8 **)(param_1 + 0x100);
            *(undefined8 **)(param_1 + 0x100) = puVar10;
            UNLOCK();
            LOCK();
            *puVar1 = puVar10;
            UNLOCK();
          }
        }
LAB_14294bdcb:
        if (local_168 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (undefined8 *)0x0) {
          (**(code **)*local_188)(local_188,1);
        }
      }
    } while (*(int *)(param_1 + 0x8c) == 0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14294c11e FUN_14294c11e body=340 status=ok
// SIG undefined FUN_14294c11e(void)

void FUN_14294c11e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_FUN_149f332c0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  UNLOCK();
  plVar7 = (longlong *)param_1[0xf];
  uVar5 = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      lVar2 = *plVar7;
      if (*plVar7 != 0) {
        while( true ) {
          do {
            lVar4 = lVar2;
            lVar2 = 0;
          } while (lVar4 == 0);
          plVar1 = *(longlong **)(lVar4 + 0x70);
          cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
          if (cVar3 != '\0') break;
          lVar2 = *plVar7;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    plVar7 = (longlong *)param_1[0xf];
  }
  FUN_146b79bb5(plVar7,uVar5);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_146b79bfe(param_1 + 0xf);
  }
  FUN_146b31adc(param_1 + 0x22);
  while ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    param_1[0x21] = *(undefined8 *)param_1[0x21];
    FUN_1400020a8();
  }
  while ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    param_1[0x1f] = *(undefined8 *)param_1[0x1f];
    FUN_1400020a8();
  }
  while ((undefined8 *)param_1[0x1d] != (undefined8 *)0x0) {
    param_1[0x1d] = *(undefined8 *)param_1[0x1d];
    FUN_1400020a8();
  }
  FUN_146b79b76(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  FUN_146b79bb5(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14294c2a6 FUN_14294c2a6 body=84 status=ok
// SIG undefined FUN_14294c2a6(void)

void FUN_14294c2a6(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140e830ae(param_1 + 8,local_14,param_2,0);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294c2fb FUN_14294c2fb body=116 status=ok
// SIG undefined FUN_14294c2fb(void)

void FUN_14294c2fb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xf0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -1) = 0;
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(plVar1 + -10);
      *(undefined4 *)(plVar1 + -0xb) = 0;
      if (plVar1[-0xc] != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(plVar1 + -0x14);
      plVar1 = plVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14294c370 FUN_14294c370 body=248 status=ok
// SIG undefined FUN_14294c370(void)

void FUN_14294c370(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
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
      uVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = uVar4 * 0x100;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar4 & 0xffffffffffffff) * 0x10]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    iVar3 = (int)(uVar5 >> 8);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6;
    FUN_1446f8d3c(param_1,param_2,iVar6,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14294c468 FUN_14294c468 body=8 status=ok
// SIG undefined FUN_14294c468(void)

void FUN_14294c468(undefined8 *param_1)

{
  FUN_14293af20(*param_1);
  return;
}



// FUNCTION 14294c474 FUN_14294c474 body=5 status=ok
// SIG undefined FUN_14294c474(void)

longlong FUN_14294c474(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14294c47a FUN_14294c47a body=12 status=ok
// SIG undefined FUN_14294c47a(void)

void FUN_14294c47a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294c483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294c486 FUN_14294c486 body=29 status=ok
// SIG undefined FUN_14294c486(void)

undefined8 FUN_14294c486(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294c4a3 FUN_14294c4a3 body=2434 status=ok
// SIG undefined FUN_14294c4a3(void)

longlong * FUN_14294c4a3(longlong *param_1,int param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = (undefined ***)0x0;
  local_68 = UE::Core::Private::Function::
             TFunction_OwnedObject<`public:_virtual_unsigned_int___cdecl_TAsyncRunnable<bool>::Run(void)___ptr64'::`1'::<lambda_1>,1,0>
             ::vftable;
  uStack_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_88 = FUN_146b7c6ae;
  FUN_14170b918(&local_a8,param_4);
  plVar17 = plStack_a0;
  lVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  switch(param_2) {
  case 0:
  case 1:
    uVar8 = 1;
    if (param_2 == 0) {
      uVar8 = 0xff;
    }
    local_d8 = CONCAT44(local_d8._4_4_,uVar8);
    puVar9 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar12 = (uint *)*puVar9;
    if (puVar12 != (uint *)0x0) goto LAB_14294c9db;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14294b153);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar9 = puVar11;
      FUN_140217a48(puVar9);
      puVar12 = (uint *)*puVar9;
LAB_14294c9db:
      puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar15 = (uint *)(puVar19 + 0x22);
      uVar13 = puVar12[0x12];
      if (puVar15 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar12 = (uint *)*puVar9;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar9 = puVar12;
        puVar19 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar19 + 0x22);
        uVar13 = 0;
        if (puVar15 <= puVar12 + 0x4000) {
          uVar13 = 1;
          goto LAB_14294ca5b;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14294ca5b:
    *(uint **)(puVar12 + 0x10) = puVar15;
    puVar12[0x12] = uVar13;
    FUN_1447247dc(puVar19,0);
    *puVar19 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
    puVar19[0x16] = local_88;
    puVar19[0x18] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar19 + 0x1c) = uStack_58;
    *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_54;
    *(undefined4 *)(puVar19 + 0x1d) = uStack_50;
    *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_4c;
    puVar19[0x1a] = local_68;
    puVar19[0x1b] = CONCAT44(uStack_5c,uStack_60);
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar19[0x1e] = local_a8;
    puVar19[0x1f] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar19 + 0x20) = 0;
    *(undefined4 *)(puVar19 + 0x21) = (undefined4)local_d8;
    uVar18 = 0x2800000000000000;
    if (param_2 == 0) {
      uVar18 = 0x800000000000000;
    }
    if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
      local_d8 = uVar18;
      (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      uVar18 = local_d8;
    }
    puVar19[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar19[9] = puVar19;
    puVar19[10] = puVar19;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar19[0xf] = uVar10;
    puVar19[0x10] = uVar18 | 0xc00000527800b400;
    *(uint *)((longlong)puVar19 + 0x1c) = (uint)(param_2 != 0) * 3;
    if (puVar19 == (undefined8 *)0x0) {
      local_c0 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      local_c0 = 1;
      FUN_1447439e4(puVar19);
      LOCK();
      piVar1 = (int *)(puVar19 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar19)(puVar19,1);
      }
    }
    break;
  case 2:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) {
LAB_14294c84f:
        pcVar6 = local_88;
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        uVar10 = (*(code *)(*pppuVar14)[1])();
        (*pcVar6)(uVar10);
        *(undefined4 *)(local_a8 + 0x80) = 0;
        FUN_140b576f0();
        break;
      }
    }
    FUN_145c3b830(&local_c0);
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar9 = TAsyncRunnable<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = uStack_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = CONCAT44(uStack_5c,uStack_60);
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = CONCAT71(uStack_bf,local_c0);
    puVar9[0xe] = local_b8;
    uVar8 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsync %d",uVar8);
    puVar16 = local_d0;
    if (local_c8 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    uVar10 = FUN_1411b1052(puVar9,puVar16,0,0);
    goto LAB_14294cca3;
  case 3:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) goto LAB_14294c84f;
    }
    FUN_145c3b830(&local_c0);
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar9 = TAsyncRunnable<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = uStack_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = CONCAT44(uStack_5c,uStack_60);
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = CONCAT71(uStack_bf,local_c0);
    puVar9[0xe] = local_b8;
    uVar8 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsync %d",uVar8);
    puVar16 = local_d0;
    if (local_c8 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    uVar10 = FUN_14275bfaa(puVar9,puVar16,0,0);
LAB_14294cca3:
    *(undefined8 *)(CONCAT71(uStack_bf,local_c0) + 0x80) = uVar10;
    FUN_140b576f0();
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    break;
  case 4:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) goto LAB_14294c84f;
    }
    plVar2 = DAT_14c8442c0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar9[1] = 0;
    *puVar9 = TAsyncQueuedWork<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = uStack_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = CONCAT44(uStack_5c,uStack_60);
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar9,3);
  }
  plVar2 = plStack_a0;
  *param_1 = lVar5;
  param_1[1] = (longlong)plVar17;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_a0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar14 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar14 = local_78;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (*param_4 != 0) {
    plVar17 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294ce26 FUN_14294ce26 body=255 status=ok
// SIG undefined FUN_14294ce26(void)

void FUN_14294ce26(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar4 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f2f9a0;
  plVar5[2] = (longlong)plVar4;
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0x20))();
  cVar3 = (**(code **)(*plVar4 + 0x160))(plVar4,uVar6);
  if (cVar3 == '\0') {
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
    lVar2 = *(longlong *)param_1[2];
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  else {
    lVar2 = *(longlong *)param_1[2];
    *(longlong **)(lVar2 + 0x80) = plVar4;
    *(longlong **)(lVar2 + 0x88) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_140b576f0();
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
          return;
        }
      }
      return;
    }
  }
  FUN_140b576f0();
  return;
}



// FUNCTION 14294cf2a FUN_14294cf2a body=5 status=ok
// SIG undefined FUN_14294cf2a(void)

longlong FUN_14294cf2a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14294cf30 FUN_14294cf30 body=12 status=ok
// SIG undefined FUN_14294cf30(void)

void FUN_14294cf30(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294cf39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294cf3c FUN_14294cf3c body=83 status=ok
// SIG undefined FUN_14294cf3c(void)

undefined8 * FUN_14294cf3c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f33610;
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



// FUNCTION 14294cf90 FUN_14294cf90 body=3019 status=ok
// SIG undefined FUN_14294cf90(void)

void FUN_14294cf90(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  longlong lVar19;
  undefined1 auStack_148 [32];
  longlong **local_128;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar16 = *param_1;
  if (0 < *(int *)(lVar16 + 0x38)) {
    bVar5 = true;
    lVar15 = 0;
    local_118 = lVar16;
    do {
      if (((!bVar5) || (*(int *)(lVar16 + 0xa0) != 0)) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x18) + 8))(), cVar7 != '\0')) break;
      local_110 = *(undefined8 **)(lVar16 + 0x30);
      lVar19 = lVar15 * 0x20;
      local_80 = *(int *)((longlong)local_110 + 8 + lVar19);
      lVar17 = (longlong)local_80;
      local_88 = (void *)0x0;
      pvVar3 = *(void **)((longlong)local_110 + lVar19);
      local_100 = lVar15;
      FUN_1446dd670(&local_88,(uint)(lVar17 == 0) + local_80 + 3,0);
      if (lVar17 != 0) {
        memcpy(local_88,pvVar3,lVar17 * 2);
      }
      FUN_1400020e8(&local_88,&DAT_149f2f624,3);
      uVar9 = FUN_14001cc68(0x28,0x10);
      pvVar3 = local_88;
      local_98 = (void *)0x0;
      lVar15 = (longlong)local_80;
      local_90 = local_80;
      if (lVar15 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_80,0);
        memcpy(local_98,pvVar3,lVar15 * 2);
      }
      FUN_142940010(uVar9,&local_98,0xffffffffffffffff);
      puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar10[1] = &DAT_100000001;
      *puVar10 = &PTR_LAB_149f33670;
      puVar10[2] = uVar9;
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = uVar9;
      puVar11[2] = puVar10;
      if (puVar11 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(lVar16 + 0xb0);
        *(undefined8 **)(lVar16 + 0xb0) = puVar11;
        *puVar10 = puVar11;
      }
      puVar10 = (undefined8 *)((longlong)local_110 + lVar19);
      (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
      local_b8 = 0x1800000001;
      local_a8 = 0;
      uStack_a0 = 0;
      iVar2 = *(int *)(puVar10 + 3);
      local_110 = puVar10;
      if ((longlong)iVar2 != 0) {
        lVar15 = puVar10[2];
        lVar17 = 0;
        do {
          uVar6 = uStack_a0;
          puVar1 = (undefined4 *)(lVar15 + lVar17);
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uStack_70 = puVar1[2];
          uStack_6c = puVar1[3];
          lVar19 = (longlong)(int)uStack_a0;
          uVar8 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
          if (uStack_a0._4_4_ < uVar8) {
            FUN_146b5a946(&local_a8,uVar6 & 0xffffffff);
          }
          lVar19 = lVar19 * 0x20;
          puVar1 = (undefined4 *)(local_a8 + lVar19);
          *puVar1 = local_78;
          puVar1[1] = uStack_74;
          puVar1[2] = uStack_70;
          puVar1[3] = uStack_6c;
          *(undefined8 *)(local_a8 + 0x10 + lVar19) = 0;
          *(undefined4 *)(local_a8 + 0x18 + lVar19) = 0;
          lVar17 = lVar17 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar17);
      }
      puVar11 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      FUN_144893a1c(puVar11 + 3,0x200000);
      puVar10 = (undefined8 *)FUN_14001cc68(0xa8);
      memset(puVar10,0,0x90);
      FUN_144869430(puVar10);
      puVar10[0x12] = 0;
      puVar10[0x13] = puVar11 + 3;
      puVar10[0x14] = 0;
      *(byte *)(puVar10 + 5) = *(byte *)(puVar10 + 5) | 4;
      *(byte *)((longlong)puVar10 + 0x29) = *(byte *)((longlong)puVar10 + 0x29) & 0xfe;
      *puVar10 = &PTR_FUN_149e1e330;
      FUN_146b447fa(puVar10,&local_b8);
      local_108 = (longlong)*(int *)(puVar11 + 4);
      puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar12[1] = &DAT_100000001;
      *puVar12 = &PTR_LAB_149f33670;
      puVar12[2] = puVar11;
      puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar13 = 0;
      puVar13[1] = puVar11;
      puVar13[2] = puVar12;
      if (puVar13 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)(lVar16 + 0xb0);
        *(undefined8 **)(lVar16 + 0xb0) = puVar13;
        *puVar11 = puVar13;
      }
      (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
      if (0 < *(int *)(local_110 + 3)) {
        lVar15 = 0;
        lVar17 = 0;
        do {
          if (((!bVar5) || (*(int *)(lVar16 + 0xa0) != 0)) ||
             (cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x18) + 8))(), cVar7 != '\0')) break;
          lVar19 = local_110[2];
          lVar14 = (**(code **)(**(longlong **)(lVar16 + 8) + 8))
                             (*(longlong **)(lVar16 + 8),lVar19 + lVar15);
          if (lVar14 == 0) {
LAB_14294d5a0:
            plVar4 = *(longlong **)(lVar16 + 0x18);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
              lVar16 = local_118;
            }
            local_e8 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_e0 = DAT_14c844848;
            local_128 = &local_e8;
            bVar5 = false;
            (**(code **)(*plVar4 + 0x38))(plVar4,2,&DAT_149f2f964);
          }
          else {
            puVar11 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = local_108;
            puVar11[3] = 0;
            puVar11[4] = 0;
            FUN_144893a1c(puVar11 + 3,0x200000);
            if (puVar11 == (undefined8 *)0x0) {
              puVar11 = (undefined8 *)0x0;
            }
            else {
              FUN_146b7cc18(0);
            }
            puVar13 = (undefined8 *)FUN_14001cc68(0xa8);
            memset(puVar13,0,0x90);
            FUN_144869430(puVar13);
            lVar16 = local_118;
            puVar13[0x12] = 0;
            puVar13[0x13] = puVar11 + 3;
            puVar13[0x14] = 0;
            *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) | 4;
            *(byte *)((longlong)puVar13 + 0x29) = *(byte *)((longlong)puVar13 + 0x29) & 0xfe;
            *puVar13 = &PTR_FUN_149e1e330;
            puVar12 = puVar10;
            if ((puVar10 != puVar13) && (puVar12 = puVar13, puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)(puVar10,1);
            }
            cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x28) + 0x30))
                              (*(longlong **)(lVar16 + 0x28),puVar12,lVar14);
            if (cVar7 != '\0') {
              puVar18 = &DAT_149f2f9b8;
              if ((cVar7 != '\x01') && (puVar18 = &DAT_149f2f700, cVar7 != '\x03')) {
                puVar18 = &DAT_149f2f964;
              }
              plVar4 = *(longlong **)(lVar16 + 0x18);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
                lVar16 = local_118;
              }
              local_c8 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              local_c0 = DAT_14c844848;
              local_128 = &local_c8;
              (**(code **)(*plVar4 + 0x38))(plVar4,2,puVar18,0);
            }
            *(longlong *)(local_a8 + 0x10 + lVar15 * 2) = local_108;
            uVar8 = *(uint *)(puVar11 + 4);
            *(uint *)(local_a8 + 0x18 + lVar15 * 2) = uVar8;
            puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            puVar10[1] = &DAT_100000001;
            *puVar10 = &PTR_LAB_149f33670;
            puVar10[2] = puVar11;
            puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *puVar13 = 0;
            puVar13[1] = puVar11;
            puVar13[2] = puVar10;
            if (puVar13 != (undefined8 *)0x0) {
              puVar10 = *(undefined8 **)(lVar16 + 0xb0);
              *(undefined8 **)(lVar16 + 0xb0) = puVar13;
              *puVar10 = puVar13;
            }
            local_108 = local_108 + (ulonglong)uVar8;
            (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
            cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x20) + 0x30))
                              (*(longlong **)(lVar16 + 0x20),lVar19 + lVar15);
            bVar5 = true;
            puVar10 = puVar12;
            if (cVar7 == '\0') {
              plVar4 = *(longlong **)(lVar16 + 0x18);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
                lVar16 = local_118;
              }
              local_d8 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              local_d0 = DAT_14c844848;
              local_128 = &local_d8;
              (**(code **)(*plVar4 + 0x38))(plVar4,9,&DAT_149f2f706);
              goto LAB_14294d5a0;
            }
          }
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 0x10;
        } while (lVar17 < *(int *)(local_110 + 3));
      }
      if (bVar5) {
        local_b0 = local_108 - (local_b8 >> 0x20);
        puVar11 = (undefined8 *)FUN_14001cc68(0x28,0x10);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        FUN_144893a1c(puVar11 + 3,0x200000);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_146b7cc18(0);
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0xa8);
        memset(puVar13,0,0x90);
        FUN_144869430(puVar13);
        lVar16 = local_118;
        puVar13[0x12] = 0;
        puVar13[0x13] = puVar11 + 3;
        puVar13[0x14] = 0;
        *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) | 4;
        *(byte *)((longlong)puVar13 + 0x29) = *(byte *)((longlong)puVar13 + 0x29) & 0xfe;
        *puVar13 = &PTR_FUN_149e1e330;
        puVar12 = puVar10;
        if ((puVar10 != puVar13) && (puVar12 = puVar13, puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)(puVar10,1);
        }
        FUN_146b447fa(puVar12,&local_b8);
        puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        puVar10[1] = &DAT_100000001;
        *puVar10 = &PTR_LAB_149f33670;
        puVar10[2] = puVar11;
        puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar13 = 0;
        puVar13[1] = puVar11;
        puVar13[2] = puVar10;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = *(undefined8 **)(lVar16 + 0xb0);
          *(undefined8 **)(lVar16 + 0xb0) = puVar13;
          *puVar10 = puVar13;
        }
        (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
        puVar10 = puVar12;
      }
      uVar9 = FUN_14001cc68(0x28,0x10);
      local_f8 = (void *)0x0;
      local_f0 = *(int *)(local_110 + 1);
      lVar15 = (longlong)local_f0;
      pvVar3 = (void *)*local_110;
      if (lVar15 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_f0,0);
        memcpy(local_f8,pvVar3,lVar15 * 2);
      }
      FUN_142940010(uVar9,&local_f8);
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar11[1] = &DAT_100000001;
      *puVar11 = &PTR_LAB_149f33670;
      puVar11[2] = uVar9;
      puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar12 = 0;
      puVar12[1] = uVar9;
      puVar12[2] = puVar11;
      if (puVar12 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)(lVar16 + 0xb0);
        *(undefined8 **)(lVar16 + 0xb0) = puVar12;
        *puVar11 = puVar12;
      }
      (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
      lVar15 = local_100;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      FUN_146b7cc18(0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar16 + 0x38));
  }
  LOCK();
  *(undefined4 *)(lVar16 + 0xa4) = 1;
  UNLOCK();
  (**(code **)(**(longlong **)(lVar16 + 0xc0) + 0x10))();
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14294db60 FUN_14294db60 body=5 status=ok
// SIG undefined FUN_14294db60(void)

longlong FUN_14294db60(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14294db66 FUN_14294db66 body=12 status=ok
// SIG undefined FUN_14294db66(void)

void FUN_14294db66(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294db6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294db72 FUN_14294db72 body=29 status=ok
// SIG undefined FUN_14294db72(void)

undefined8 FUN_14294db72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294db90 FUN_14294db90 body=2500 status=ok
// SIG undefined FUN_14294db90(void)

void FUN_14294db90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_178 [32];
  longlong **local_158;
  longlong *local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  longlong *plStack_120;
  longlong local_118;
  undefined8 uStack_110;
  code *local_108;
  longlong **local_f8;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_c0;
  longlong **local_b8;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = *param_1;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (undefined8 *)0x0;
  plStack_120 = (longlong *)0x0;
  if (*(int *)(lVar5 + 0xa0) == 0) {
    bVar23 = false;
    pcVar13 = (code *)0x0;
    do {
      while( true ) {
        cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x18) + 8))();
        if (cVar8 != '\0') goto LAB_14294df58;
        cVar8 = FUN_146b6272a(lVar5 + 0xb0,&local_128);
        if (cVar8 == '\0') {
          if (*(int *)(lVar5 + 0xa4) != 0) goto LAB_14294df58;
          (**(code **)(**(longlong **)(lVar5 + 0xc0) + 0x20))(*(longlong **)(lVar5 + 0xc0),1000,0);
          (**(code **)(**(longlong **)(lVar5 + 0xc0) + 0x18))();
          goto LAB_14294dd98;
        }
        lVar12 = local_128[2];
        if (lVar12 == -1) {
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(local_128 + 1) != 0) {
            puVar18 = (undefined2 *)*local_128;
          }
          (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x50))
                    (*(longlong **)(lVar5 + 0x10),&local_c8,puVar18,0);
          pcVar7 = local_c8;
          local_c8 = (code *)0x0;
          if ((pcVar13 != (code *)0x0) &&
             ((*(code *)**(undefined8 **)pcVar13)(pcVar13,1), local_c8 != (code *)0x0)) {
            (*(code *)**(undefined8 **)local_c8)(local_c8,1);
          }
          uVar6 = uStack_110;
          puVar20 = local_128;
          lVar12 = (longlong)(int)uStack_110;
          uVar9 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar9);
          if (uStack_110._4_4_ < uVar9) {
            FUN_1447a1bd6(&local_118,uVar6 & 0xffffffff);
          }
          lVar12 = lVar12 * 0x10;
          puVar3 = (undefined8 *)(local_118 + lVar12);
          *(undefined8 *)(local_118 + lVar12) = 0;
          iVar4 = *(int *)(puVar20 + 1);
          _Src = (void *)*puVar20;
          *(int *)(local_118 + 8 + lVar12) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar3,iVar4,0);
            memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
          }
          pcVar13 = pcVar7;
          if (pcVar7 != (code *)0x0) goto LAB_14294dd98;
          plVar14 = *(longlong **)(lVar5 + 0x18);
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
          local_138 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            (**(code **)(*DAT_14c844840 + 8))();
          }
          local_158 = &local_138;
          local_130 = DAT_14c844848;
          (**(code **)(*plVar14 + 0x38))(plVar14,2,&DAT_149f2f9b8,0);
          goto LAB_14294df86;
        }
        if (lVar12 < 0 || (bool)(~bVar23 & 1)) break;
        lVar12 = (**(code **)(*(longlong *)pcVar13 + 0x28))(pcVar13);
        if (lVar12 != local_128[2]) {
          (**(code **)(*(longlong *)pcVar13 + 0x1a0))(pcVar13);
        }
        (**(code **)(*(longlong *)pcVar13 + 0x170))(pcVar13,local_128[3]);
        if (*(int *)(lVar5 + 0xa0) != 0) goto LAB_14294df58;
      }
      if ((byte)~bVar23 != 0 || lVar12 != -2) {
        plVar14 = *(longlong **)(lVar5 + 0x18);
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
        local_138 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_158 = &local_138;
        local_130 = DAT_14c844848;
        (**(code **)(*plVar14 + 0x38))(plVar14,2,&DAT_149f2f976,0);
        if (pcVar13 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar13)(pcVar13,1);
        }
        goto LAB_14294df86;
      }
      (**(code **)(*(longlong *)pcVar13 + 0x18))(pcVar13,&local_c8);
      cVar8 = (**(code **)(*(longlong *)pcVar13 + 0x1f8))(pcVar13);
      (*(code *)**(undefined8 **)pcVar13)(pcVar13,1);
      if (cVar8 == '\0') {
        plVar14 = *(longlong **)(lVar5 + 0x18);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30);
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
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_140 = DAT_14c844848;
        local_158 = &local_148;
        (**(code **)(*plVar14 + 0x38))(plVar14,2);
      }
      else {
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(local_128 + 1) != 0) {
          puVar18 = (undefined2 *)*local_128;
        }
        (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x70))(*(longlong **)(lVar5 + 0x10),puVar18);
      }
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar8 == '\0') goto LAB_14294df86;
      pcVar13 = (code *)0x0;
LAB_14294dd98:
      bVar23 = pcVar13 != (code *)0x0;
    } while (*(int *)(lVar5 + 0xa0) == 0);
LAB_14294df58:
    if (pcVar13 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcVar13)(pcVar13,1);
    }
  }
  if (*(int *)(lVar5 + 0xa0) == 0) {
    cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x18) + 8))();
    uVar19 = 1;
    if (cVar8 != '\0') goto LAB_14294df86;
  }
  else {
LAB_14294df86:
    lVar12 = local_118;
    lVar21 = (longlong)(int)uStack_110;
    if (lVar21 != 0) {
      lVar22 = 0;
      do {
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(lVar12 + 8 + lVar22) != 0) {
          puVar18 = *(undefined2 **)(lVar12 + lVar22);
        }
        (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x68))(*(longlong **)(lVar5 + 0x10),puVar18);
        lVar22 = lVar22 + 0x10;
      } while (lVar21 * 0x10 != lVar22);
    }
    uVar19 = 0;
  }
  pcVar13 = (code *)FUN_14001cc68(0x18,0x10);
  FUN_145d28d24(pcVar13);
  pcVar13[0x10] = (code)0x0;
  plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_149f2f980;
  plVar14[2] = (longlong)pcVar13;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_b8 = *(longlong ***)(lVar5 + 0x40);
  local_a8 = (longlong *)0x0;
  local_c8 = pcVar13;
  local_c0 = plVar14;
  if (local_b8 != (longlong **)0x0) {
    puVar20 = (undefined8 *)(lVar5 + 0x60);
    if (*(undefined8 **)(lVar5 + 0x50) != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)(lVar5 + 0x50);
    }
    (**(code **)*puVar20)(puVar20,&local_a8);
  }
  local_108 = (code *)0x0;
  local_78 = uVar19;
  pplVar15 = (longlong **)FUN_14001cc68(0x70,0x10);
  *pplVar15 = (longlong *)&PTR_FUN_149f33690;
  pplVar15[2] = (longlong *)local_c8;
  pplVar15[3] = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  pplVar15[4] = (longlong *)local_b8;
  pplVar15[6] = (longlong *)0x0;
  local_f8 = pplVar15;
  if (local_b8 != (longlong **)0x0) {
    plVar17 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar17 = (longlong *)&local_98;
    }
    (**(code **)*plVar17)(plVar17,pplVar15 + 6);
  }
  *(undefined1 *)(pplVar15 + 0xc) = local_78;
  if (pplVar15 != (longlong **)&DAT_fffffffffffffff0) {
    local_108 = FUN_14294e58a;
  }
  if (local_b8 != (longlong **)0x0) {
    plVar17 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar17 = (longlong *)&local_98;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  plVar17 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14294e317;
    }
    local_c8 = local_108;
    local_b8 = local_f8;
    local_f8 = (longlong **)0x0;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    if (local_108 != (code *)0x0) {
      local_108 = (code *)0x0;
    }
    FUN_1407461b0(1,&local_c8);
  }
  else {
LAB_14294e317:
    pcVar7 = local_108;
    pplVar15 = local_f8;
    if (local_f8 == (longlong **)0x0) {
      pplVar15 = &local_e8;
    }
    uVar16 = (*(code *)(*pplVar15)[1])();
    (*pcVar7)(uVar16);
  }
  pcVar13[0x10] = (code)0x1;
  lVar5 = *(longlong *)pcVar13;
  plVar17 = *(longlong **)(pcVar13 + 8);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  if (local_108 != (code *)0x0) {
    pplVar15 = local_f8;
    if (local_f8 == (longlong **)0x0) {
      pplVar15 = &local_e8;
    }
    (*(code *)(*pplVar15)[2])();
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (lVar5 != 0) {
    do {
      plVar14 = *(longlong **)(lVar5 + 0x70);
      cVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar17 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  plVar14 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_120 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294e55a FUN_14294e55a body=5 status=ok
// SIG undefined FUN_14294e55a(void)

longlong FUN_14294e55a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14294e560 FUN_14294e560 body=12 status=ok
// SIG undefined FUN_14294e560(void)

void FUN_14294e560(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294e569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294e56c FUN_14294e56c body=29 status=ok
// SIG undefined FUN_14294e56c(void)

undefined8 FUN_14294e56c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294e58a FUN_14294e58a body=119 status=ok
// SIG undefined FUN_14294e58a(void)

void FUN_14294e58a(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = *(undefined1 *)(param_1 + 10);
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_21);
  *(undefined4 *)(*(longlong *)*param_1 + 0x80) = 0;
  FUN_140b576f0();
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294e602 FUN_14294e602 body=138 status=ok
// SIG undefined FUN_14294e602(void)

undefined8 * FUN_14294e602(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f33690;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(param_1 + 0x60);
  return puVar2 + 2;
}



// FUNCTION 14294e68c FUN_14294e68c body=5 status=ok
// SIG undefined FUN_14294e68c(void)

longlong FUN_14294e68c(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14294e692 FUN_14294e692 body=29 status=ok
// SIG undefined FUN_14294e692(void)

void FUN_14294e692(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14294e6b0 FUN_14294e6b0 body=111 status=ok
// SIG undefined FUN_14294e6b0(void)

undefined8 * FUN_14294e6b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f33690;
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294e720 FUN_14294e720 body=668 status=ok
// SIG undefined FUN_14294e720(void)

void FUN_14294e720(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong lStack_68;
  int local_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)*param_4;
  lVar1 = *param_3;
  local_80 = lVar1;
  FUN_146b7cc54(*param_1,&local_a8);
  lVar15 = param_2[1];
  plVar11 = (longlong *)param_1[1];
  lVar2 = *(longlong *)param_1[2];
  local_58 = (undefined4)*plVar11;
  uStack_54 = *(undefined4 *)((longlong)plVar11 + 4);
  lVar6 = *plVar11;
  uStack_50 = (undefined4)plVar11[1];
  uStack_4c = *(undefined4 *)((longlong)plVar11 + 0xc);
  lVar7 = plVar11[1];
  iVar14 = (int)plVar11[2] + (int)lVar2;
  *(longlong *)param_1[2] = lVar2 + lVar15;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar4 = *plVar9;
  lVar5 = plVar9[1];
  uVar17 = (uint)lVar15;
  if ((lVar2 == lVar4) && (lVar5 == lVar3)) {
    *(undefined4 *)(plVar9 + 2) = local_58;
    *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_54;
    *(undefined4 *)(plVar9 + 3) = uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
    *(int *)(plVar9 + 4) = iVar14;
    *(uint *)((longlong)plVar9 + 0x24) = uVar17;
    goto LAB_14294e7ae;
  }
  uVar12 = lVar2 - lVar4;
  iVar16 = (int)lVar3;
  if (uVar12 == 0) {
    *(int *)(plVar9 + 4) = (int)plVar9[4] + iVar16;
    *(int *)((longlong)plVar9 + 0x24) = *(int *)((longlong)plVar9 + 0x24) - (int)param_2[1];
    *plVar9 = lVar3 + lVar2;
    plVar9[1] = lVar5 - lVar3;
    plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
    *plVar9 = lVar2;
    plVar9[1] = lVar3;
    plVar9[2] = CONCAT44(uStack_54,local_58);
    plVar9[3] = CONCAT44(uStack_4c,uStack_50);
    *(int *)(plVar9 + 4) = iVar14;
    *(uint *)((longlong)plVar9 + 0x24) = uVar17;
    plVar9[5] = 0;
    plVar9[6] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  local_80 = lVar3 + lVar2;
  if (local_80 == lVar4 + lVar5) {
    uVar8 = *(int *)((longlong)plVar9 + 0x24) - iVar16;
    *(uint *)((longlong)plVar9 + 0x24) = uVar8;
    plVar9[1] = (ulonglong)uVar8;
    uStack_78 = param_2[1];
    local_80 = lVar4 + (ulonglong)uVar8;
    lVar15 = plVar9[5];
    local_70 = lVar6;
    lStack_68 = lVar7;
    local_60 = iVar14;
    uStack_5c = uVar17;
    if (lVar15 != 0) {
      plVar9 = &local_70;
      puVar10 = (undefined4 *)FUN_14001cc68(0x38,0x10);
      uVar18 = (undefined4)local_80;
      uVar19 = local_80._4_4_;
      uVar20 = (undefined4)uStack_78;
      uVar21 = uStack_78._4_4_;
LAB_14294e9b0:
      *puVar10 = uVar18;
      puVar10[1] = uVar19;
      puVar10[2] = uVar20;
      puVar10[3] = uVar21;
      *(longlong *)(puVar10 + 8) = plVar9[2];
      lVar2 = plVar9[1];
      *(longlong *)(puVar10 + 4) = *plVar9;
      *(longlong *)(puVar10 + 6) = lVar2;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      FUN_146b7d140(lVar1 + 0x18,puVar10,lVar15);
      goto LAB_14294e7ae;
    }
    puVar13 = &local_80;
  }
  else {
    local_60 = (iVar16 + (int)lVar2) - (int)lVar4;
    uStack_5c = (int)lVar5 - local_60;
    uStack_78 = (ulonglong)uStack_5c;
    local_70 = plVar9[2];
    lStack_68 = plVar9[3];
    local_60 = local_60 + (int)plVar9[4];
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    *(int *)((longlong)plVar9 + 0x24) = (int)uVar12;
    plVar9[1] = uVar12 & 0xffffffff;
    lVar15 = plVar9[5];
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_88 = iVar14;
    local_84 = uVar17;
    if (lVar15 == 0) {
      FUN_146b7d1aa(lVar1 + 0x18,&local_80);
    }
    else {
      plVar11 = (longlong *)FUN_14001cc68(0x38,0x10);
      *plVar11 = local_80;
      plVar11[1] = uStack_78;
      plVar11[4] = CONCAT44(uStack_5c,local_60);
      plVar11[2] = local_70;
      plVar11[3] = lStack_68;
      plVar11[5] = 0;
      plVar11[6] = 0;
      FUN_146b7d140(lVar1 + 0x18,plVar11,lVar15);
    }
    lVar15 = plVar9[5];
    if (lVar15 != 0) {
      plVar9 = (longlong *)&local_98;
      puVar10 = (undefined4 *)FUN_14001cc68(0x38,0x10);
      uVar18 = (undefined4)local_a8;
      uVar19 = local_a8._4_4_;
      uVar20 = (undefined4)uStack_a0;
      uVar21 = uStack_a0._4_4_;
      goto LAB_14294e9b0;
    }
    puVar13 = &local_a8;
  }
  FUN_146b7d1aa(lVar1 + 0x18,puVar13);
LAB_14294e7ae:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294ea02 FUN_14294ea02 body=12 status=ok
// SIG undefined FUN_14294ea02(void)

void FUN_14294ea02(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294ea0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294ea0e FUN_14294ea0e body=29 status=ok
// SIG undefined FUN_14294ea0e(void)

undefined8 FUN_14294ea0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294ea2c FUN_14294ea2c body=282 status=ok
// SIG undefined FUN_14294ea2c(void)

void FUN_14294ea2c(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_3 = (longlong *)*param_3;
  (**(code **)(**(longlong **)*param_1 + 0x48))(*(longlong **)*param_1,&local_c4,*param_3);
  lVar1 = *param_2;
  lVar2 = param_3[1];
  uVar3 = param_1[1];
  local_a8 = param_2[1];
  local_b0 = *(undefined8 *)param_1[2];
  local_a0 = local_c4;
  local_c0 = *(undefined8 *)(*param_3 + 0x38);
  local_b8 = *(undefined4 *)(*param_3 + 0x40);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14282d1cc(&local_98);
  local_48 = lVar1 - lVar2;
  FUN_146b7d226(uVar3,&local_b0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  *(longlong *)param_1[2] = *(longlong *)param_1[2] + param_2[1];
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294eb6e FUN_14294eb6e body=12 status=ok
// SIG undefined FUN_14294eb6e(void)

void FUN_14294eb6e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294eb77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294eb7a FUN_14294eb7a body=29 status=ok
// SIG undefined FUN_14294eb7a(void)

undefined8 FUN_14294eb7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294eb98 FUN_14294eb98 body=28 status=ok
// SIG undefined FUN_14294eb98(void)

undefined8 FUN_14294eb98(undefined8 param_1,undefined8 *param_2)

{
  FUN_142940876(*param_2,param_1);
  return param_1;
}



// FUNCTION 14294ebbe FUN_14294ebbe body=12 status=ok
// SIG undefined FUN_14294ebbe(void)

void FUN_14294ebbe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294ebc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294ebca FUN_14294ebca body=29 status=ok
// SIG undefined FUN_14294ebca(void)

undefined8 FUN_14294ebca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14294ebe7 FUN_14294ebe7 body=1056 status=ok
// SIG undefined FUN_14294ebe7(void)

undefined8 * FUN_14294ebe7(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 local_89;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f337f0;
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_88 = FUN_146b7d9e2;
  FUN_14170b918(&local_a8,param_3);
  plVar13 = plStack_a0;
  uVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_a0 + 8) = *(int *)((longlong)plStack_a0 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar2;
  if (puVar8 != (uint *)0x0) goto LAB_14294ed04;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_14294b153);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar2 = puVar7;
    FUN_140217a48(puVar2);
    puVar8 = (uint *)*puVar2;
LAB_14294ed04:
    puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar14 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar11 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar2;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar14 + 0x22);
      uVar10 = 0;
      if (puVar11 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_14294ed84;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_14294ed84:
  *(uint **)(puVar8 + 0x10) = puVar11;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar14,0);
  *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar14[0x16] = local_88;
  puVar14[0x18] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 0x1c) = uStack_58;
  *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_54;
  *(undefined4 *)(puVar14 + 0x1d) = uStack_50;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_4c;
  puVar14[0x1a] = local_68;
  puVar14[0x1b] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar14[0x1e] = local_a8;
  puVar14[0x1f] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0x20) = 0;
  *(undefined4 *)(puVar14 + 0x21) = 0xff;
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar14[0xf] = uVar9;
  puVar14[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_89 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    local_89 = 1;
    FUN_1447439e4(puVar14);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  plVar6 = plStack_a0;
  *param_1 = uVar5;
  param_1[1] = plVar13;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar12 = local_78;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14294f008 FUN_14294f008 body=255 status=ok
// SIG undefined FUN_14294f008(void)

void FUN_14294f008(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar4 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f2f9a0;
  plVar5[2] = (longlong)plVar4;
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0x20))();
  cVar3 = (**(code **)(*plVar4 + 0x160))(plVar4,uVar6);
  if (cVar3 == '\0') {
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
    lVar2 = *(longlong *)param_1[2];
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  else {
    lVar2 = *(longlong *)param_1[2];
    *(longlong **)(lVar2 + 0x80) = plVar4;
    *(longlong **)(lVar2 + 0x88) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_140b576f0();
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
          return;
        }
      }
      return;
    }
  }
  FUN_140b576f0();
  return;
}



// FUNCTION 14294f10c FUN_14294f10c body=5 status=ok
// SIG undefined FUN_14294f10c(void)

longlong FUN_14294f10c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14294f112 FUN_14294f112 body=12 status=ok
// SIG undefined FUN_14294f112(void)

void FUN_14294f112(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014294f11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14294f11e FUN_14294f11e body=83 status=ok
// SIG undefined FUN_14294f11e(void)

undefined8 * FUN_14294f11e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f33830;
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



// FUNCTION 14294f172 FUN_14294f172 body=3758 status=ok
// SIG undefined FUN_14294f172(void)

void FUN_14294f172(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined2 *puVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  LARGE_INTEGER LVar26;
  uint uVar27;
  LARGE_INTEGER LVar28;
  longlong lVar29;
  code *pcVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  LARGE_INTEGER local_250;
  undefined8 *local_248;
  longlong local_240;
  longlong local_238;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  longlong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  char local_16d;
  undefined1 local_16c [4];
  LARGE_INTEGER local_168;
  longlong *plStack_160;
  undefined1 local_158;
  LARGE_INTEGER local_148;
  undefined8 *local_140;
  longlong *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_f8 [2];
  uint local_e8 [4];
  uint *local_d8;
  int local_d0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar29 = *param_1;
  plVar12 = (longlong *)FUN_14054d1d4();
  QueryPerformanceCounter(&local_148);
  LVar26 = local_148;
  if (*(int *)(lVar29 + 0x10) == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  else {
    puVar20 = *(undefined2 **)(lVar29 + 8);
  }
  cVar8 = (**(code **)(*plVar12 + 0x50))(plVar12,puVar20);
  if (cVar8 != '\0') {
    local_188 = 0;
    uStack_180 = 0;
    iVar4 = *(int *)(lVar29 + 0x10);
    lVar21 = (longlong)iVar4;
    local_148.QuadPart = 0;
    pvVar5 = *(void **)(lVar29 + 8);
    local_140 = (undefined8 *)CONCAT44(local_140._4_4_,iVar4);
    FUN_1446dd670(&local_148,(uint)(lVar21 == 0) + iVar4 + 0xb,0);
    if (lVar21 != 0) {
      memcpy((void *)local_148,pvVar5,lVar21 * 2);
    }
    FUN_1401aebe8(&local_148,L"*.manifest",10);
    LVar28 = local_148;
    if ((int)local_140 == 0) {
      LVar28.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    local_258 = 0;
    (**(code **)(*plVar12 + 0x78))(plVar12,&local_188,LVar28.QuadPart,1);
    if ((code *)local_148.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
    plVar12 = *(longlong **)(lVar29 + 0x330);
    QueryPerformanceCounter(&local_148);
    LOCK();
    *plVar12 = *plVar12 + (local_148.QuadPart - (longlong)LVar26);
    UNLOCK();
    QueryPerformanceCounter(&local_148);
    lVar21 = local_188;
    local_198 = (longlong *)0x0;
    uStack_190 = 0;
    lVar32 = (longlong)(int)uStack_180;
    if (lVar32 == 0) {
      uVar24 = 0;
      LVar26 = local_148;
    }
    else {
      local_250.s = local_148.s;
      lVar22 = 0;
      do {
        iVar4 = *(int *)(lVar21 + 8 + lVar22);
        iVar23 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar23 = 0;
        }
        iVar4 = *(int *)(lVar29 + 0x10);
        iVar9 = iVar23 + 1 + (uint)((longlong)iVar4 == 0);
        local_a8 = (void *)0x0;
        pvVar5 = *(void **)(lVar29 + 8);
        local_a0 = iVar4;
        if (iVar9 == 0 && iVar4 == 0) {
          local_9c = 0;
        }
        else {
          if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar9 + iVar4);
          }
          FUN_1446dd670(&local_a8,iVar9 + iVar4,0);
          if (iVar4 != 0) {
            memcpy(local_a8,pvVar5,(longlong)iVar4 * 2);
          }
        }
        FUN_1401aebe8(&local_a8,*(undefined8 *)(lVar21 + lVar22),iVar23);
        FUN_146b6515c(lVar29,&local_148);
        uVar24 = uStack_190;
        lVar34 = (longlong)(int)uStack_190;
        uVar10 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar10);
        if (uStack_190._4_4_ < uVar10) {
          FUN_146b7e822(&local_198,uVar24 & 0xffffffff);
        }
        *(LARGE_INTEGER *)(local_198 + lVar34 * 2) = local_148;
        local_198[lVar34 * 2 + 1] = (longlong)local_140;
        pcVar30 = QueryPerformanceCounter_exref;
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar22 = lVar22 + 0x10;
      } while (lVar32 * 0x10 != lVar22);
      uVar24 = 0;
      LVar26 = local_250;
      if ((longlong)(int)uStack_190 != 0) {
        plVar12 = local_198 + (longlong)(int)uStack_190 * 2;
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar2 = (undefined8 *)(lVar21 + 0x308);
        local_248 = (undefined8 *)(lVar21 + 0x310);
        local_1e8 = (longlong *)(lVar21 + 0x2b8);
        local_1f0 = 0xc80000527800b400;
        local_1d0 = lVar29 + 0x28;
        local_208 = lVar29 + 0x78;
        local_210 = lVar29 + 200;
        local_218 = lVar29 + 0x118;
        local_238 = lVar29 + 0x168;
        local_240 = lVar29 + 0x1b8;
        local_220 = lVar29 + 0x2a8;
        local_228 = lVar29 + 600;
        local_1b8 = lVar29 + 0x208;
        plVar16 = local_198;
        local_1f8 = lVar29;
        local_1e0 = plVar12;
        do {
          lVar21 = *plVar16;
          local_1b0 = plVar16;
          while ((*(byte *)(lVar21 + 0x78) & 1) == 0) {
            (**(code **)(**(longlong **)(lVar21 + 0x70) + 0x20))
                      (*(longlong **)(lVar21 + 0x70),0xffffffff,0);
          }
          plVar16 = *(longlong **)(lVar21 + 0x80);
          plVar33 = *(longlong **)(lVar21 + 0x88);
          if (plVar33 == (longlong *)0x0) {
            if (plVar16 != (longlong *)0x0) {
              local_1a0 = (longlong *)0x0;
              goto LAB_14294f688;
            }
          }
          else {
            LOCK();
            *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
            UNLOCK();
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
              UNLOCK();
              local_1a0 = plVar33;
LAB_14294f688:
              local_1c0 = *(wchar_t **)(lVar29 + 0x20);
              local_230 = plVar33;
              local_1a8 = plVar16;
              uVar10 = (**(code **)(*plVar16 + 0x180))();
              local_1c8 = L"ChunksV4";
              if ((int)uVar10 < 0xf) {
                local_1c8 = L"ChunksV3";
              }
              if (uVar10 < 6) {
                local_1c8 = L"ChunksV2";
              }
              if ((int)uVar10 < 3) {
                local_1c8 = L"Chunks";
              }
              local_a8 = (void *)0x0;
              local_98 = (longlong *)0x0;
              local_138 = (longlong *)0x0;
              local_128 = &PTR_LAB_149f33890;
              local_118 = &local_1a8;
              local_148.QuadPart = (LONGLONG)FUN_14295020e;
              uStack_120 = lVar29;
              FUN_146b7e944(&local_168,&local_a8);
              plVar12 = plStack_160;
              LVar28 = local_168;
              local_158 = 1;
              if (plStack_160 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
                UNLOCK();
              }
              puVar14 = (uint *)*puVar2;
              if (puVar14 != (uint *)0x0) goto LAB_14294f7cd;
LAB_14294f765:
              uVar10 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar10 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar10 | 1;
                __tlregdtor(&LAB_14294b153);
              }
              puVar13 = (undefined4 *)*local_248;
              *local_248 = 0;
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar13 = 0xffffffff;
              *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              FUN_140217a48(puVar2);
              puVar14 = (uint *)*puVar2;
LAB_14294f7cd:
              uVar24 = *(longlong *)(puVar14 + 0x10) + 0xf;
              uVar10 = puVar14[0x12];
LAB_14294f7ea:
              puVar25 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar25 + 0x22 <= puVar14 + 0x4000) {
                *(undefined8 **)(puVar14 + 0x10) = puVar25 + 0x22;
                puVar14[0x12] = uVar10 + 1;
                FUN_1447247dc(puVar25,0);
                *puVar25 = &PTR_FUN_149f338c8;
                ((LARGE_INTEGER *)(puVar25 + 0x16))->QuadPart = (LONGLONG)local_148;
                puVar25[0x18] = local_138;
                local_138 = (longlong *)0x0;
                *(undefined4 *)(puVar25 + 0x1c) = (undefined4)local_118;
                *(undefined4 *)((longlong)puVar25 + 0xe4) = local_118._4_4_;
                *(undefined4 *)(puVar25 + 0x1d) = uStack_110;
                *(undefined4 *)((longlong)puVar25 + 0xec) = uStack_10c;
                *(undefined4 *)(puVar25 + 0x1a) = (undefined4)local_128;
                *(undefined4 *)((longlong)puVar25 + 0xd4) = local_128._4_4_;
                *(undefined4 *)(puVar25 + 0x1b) = (undefined4)uStack_120;
                *(undefined4 *)((longlong)puVar25 + 0xdc) = uStack_120._4_4_;
                if ((code *)local_148.QuadPart != (code *)0x0) {
                  local_148.QuadPart = 0;
                }
                ((LARGE_INTEGER *)(puVar25 + 0x1e))->QuadPart = (LONGLONG)local_168;
                puVar25[0x1f] = plStack_160;
                local_168.QuadPart = 0;
                plStack_160 = (longlong *)0x0;
                *(undefined1 *)(puVar25 + 0x20) = local_158;
                *(undefined4 *)(puVar25 + 0x21) = 0xff;
                if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
                }
                puVar25[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar25[9] = puVar25;
                puVar25[10] = puVar25;
                if (*local_1e8 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = *(undefined8 *)(*local_1e8 + 0x30);
                }
                puVar25[0xf] = uVar15;
                puVar25[0x10] = local_1f0;
                *(undefined4 *)((longlong)puVar25 + 0x1c) = 0;
                if (puVar25 == (undefined8 *)0x0) {
                  local_178 = CONCAT71(local_178._1_7_,1);
                  FUN_1447439e4(0,&local_178);
                }
                else {
                  LOCK();
                  *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                  UNLOCK();
                  local_178 = CONCAT71(local_178._1_7_,1);
                  FUN_1447439e4(puVar25,&local_178);
                  LOCK();
                  piVar3 = (int *)(puVar25 + 1);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)*puVar25)(puVar25,1);
                  }
                }
                plVar16 = plStack_160;
                if (plStack_160 != (longlong *)0x0) {
                  LOCK();
                  plVar33 = plStack_160 + 1;
                  *(int *)plVar33 = (int)*plVar33 + -1;
                  UNLOCK();
                  if ((int)*plVar33 == 0) {
                    (**(code **)*plStack_160)(plStack_160);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar16 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
                if ((code *)local_148.QuadPart != (code *)0x0) {
                  plVar16 = local_138;
                  if (local_138 == (longlong *)0x0) {
                    plVar16 = &local_128;
                  }
                  (**(code **)(*plVar16 + 0x10))();
                }
                if (local_a8 != (void *)0x0) {
                  plVar16 = local_98;
                  if (local_98 == (longlong *)0x0) {
                    plVar16 = local_88;
                  }
                  (**(code **)(*plVar16 + 0x10))();
                }
                local_1d8 = plVar12;
                local_168.QuadPart = 0;
                plStack_160 = (longlong *)0x0;
                local_250 = LVar26;
                (**(code **)(*local_1a8 + 0x1f0))(local_1a8,&local_168);
                cVar8 = (**(code **)(*local_1a8 + 0x200))();
                if (cVar8 == '\0') {
                  if ((longlong)(int)plStack_160 != 0) {
                    lVar21 = (longlong)(int)plStack_160 << 4;
                    LVar26 = local_168;
                    do {
                      lVar32 = (**(code **)(*local_1a8 + 0x218))(local_1a8,LVar26.QuadPart);
                      if ((lVar32 == 0) || (lVar22 = *(longlong *)(lVar32 + 0x10), lVar22 == 0)) {
                        LOCK();
                        **(longlong **)(lVar29 + 0x328) = **(longlong **)(lVar29 + 0x328) + 1;
                        UNLOCK();
                      }
                      else {
                        local_16d = '\0';
                        uVar15 = FUN_146b50890(local_1d0,
                                               (int)((ulonglong)lVar22 >> 0x20) * 0x17 + (int)lVar22
                                               ,lVar32 + 0x10);
                        FUN_1457adc9c(uVar15,&local_148,LVar26.QuadPart,&local_16d);
                        if (local_16d == '\0') {
                          local_178 = (**(code **)(*local_1a8 + 0x1a8))(local_1a8,LVar26.QuadPart);
                          local_140 = &local_178;
                          local_148 = LVar26;
                          FUN_146b7ed02(local_208,local_16c,&local_148);
                          local_148 = LVar26;
                          local_140 = (undefined8 *)(lVar32 + 0x10);
                          FUN_146b7e32e(local_210,&local_178,&local_148);
                          local_200 = lVar32 + 0x18;
                          uVar11 = FUN_1447addd0(LVar26.QuadPart,0x10);
                          puVar13 = (undefined4 *)FUN_146b7ee46(local_218,uVar11,LVar26.QuadPart);
                          uVar11 = *(undefined4 *)(lVar32 + 0x1c);
                          uVar6 = *(undefined4 *)(lVar32 + 0x20);
                          uVar7 = *(undefined4 *)(lVar32 + 0x24);
                          *puVar13 = *(undefined4 *)(lVar32 + 0x18);
                          puVar13[1] = uVar11;
                          puVar13[2] = uVar6;
                          puVar13[3] = uVar7;
                          puVar13[4] = *(undefined4 *)(lVar32 + 0x28);
                          FUN_144980568(local_238,&local_148,lVar32 + 0x30,0);
                          local_148 = LVar26;
                          local_140 = (undefined8 *)(lVar32 + 0x30);
                          FUN_146b4e46a(local_240,&local_178,&local_148,0);
                          uVar15 = FUN_146b7eff2(local_220,*(undefined4 *)(lVar32 + 0x18),local_200)
                          ;
                          FUN_1457adc9c(uVar15,&local_148,LVar26.QuadPart,0);
                          LOCK();
                          **(longlong **)(lVar29 + 800) = **(longlong **)(lVar29 + 800) + 1;
                          UNLOCK();
                        }
                        if (local_1c0 == local_1c8) {
                          FUN_1457adc9c(local_228,&local_148,LVar26.QuadPart,0);
                        }
                      }
                      LVar26.QuadPart = LVar26.QuadPart + 0x10;
                      lVar21 = lVar21 + -0x10;
                    } while (lVar21 != 0);
                  }
                }
                else {
                  LOCK();
                  **(longlong **)(lVar29 + 0x318) = **(longlong **)(lVar29 + 0x318) + 1;
                  UNLOCK();
                }
                while (((byte)*(code *)(LVar28.QuadPart + 0x78) & 1) == 0) {
                  (**(code **)(**(longlong **)(LVar28.QuadPart + 0x70) + 0x20))
                            (*(longlong **)(LVar28.QuadPart + 0x70),0xffffffff,0);
                }
                FUN_146b7a25e(&local_148,(code *)(LVar28.QuadPart + 0x80));
                FUN_146b653f4(local_238,&local_148);
                FUN_146b6555e(local_240,local_f8);
                iVar4 = local_d0;
                if (local_d0 == 0) {
                  uVar31 = 1;
                  uVar24 = 0;
                  iVar23 = 0;
                  iVar9 = 0;
LAB_14294fd93:
                  if (iVar9 != local_d0) {
                    uVar10 = 0xffffffff;
                    do {
                      lVar29 = local_f8[0] + (longlong)iVar9 * 0x1c;
                      uVar15 = FUN_146b7f974(local_1b8,
                                             *(undefined4 *)
                                              (local_f8[0] + (longlong)iVar9 * 0x1c + 0x10));
                      FUN_1457adc9c(uVar15,&local_178,lVar29,0);
                      uVar10 = ~(uint)uVar31 & uVar10;
                      puVar14 = local_d8;
                      if (local_d8 == (uint *)0x0) {
                        puVar14 = local_e8;
                      }
                      iVar9 = (int)uVar24;
                      lVar29 = (longlong)iVar9;
                      uVar27 = puVar14[lVar29] & uVar10;
                      if (uVar27 == 0) {
                        iVar18 = local_d0 + 0x1e;
                        if (-1 < local_d0 + -1) {
                          iVar18 = local_d0 + -1;
                        }
                        iVar18 = iVar18 >> 5;
                        iVar23 = iVar23 + 0x20;
                        iVar19 = iVar18;
                        if (iVar18 < iVar9) {
                          iVar19 = iVar9;
                        }
                        if (iVar9 < iVar18) {
                          lVar21 = 0;
                          do {
                            uVar27 = puVar14[lVar29 + lVar21 + 1];
                            if (uVar27 != 0) {
                              uVar24 = (ulonglong)(iVar9 + (int)lVar21 + 1);
                              uVar10 = 0xffffffff;
                              goto LAB_14294ff2d;
                            }
                            iVar23 = iVar23 + 0x20;
                            lVar21 = lVar21 + 1;
                          } while (iVar19 - lVar29 != lVar21);
                          uVar10 = 0xffffffff;
                          iVar9 = iVar19;
                        }
                        uVar24 = (ulonglong)(iVar9 + 1);
                        iVar9 = local_d0;
                      }
                      else {
LAB_14294ff2d:
                        uVar31 = (ulonglong)(-uVar27 & uVar27);
                        uVar17 = uVar31 * 2 + 1;
                        lVar29 = 0x3f;
                        if (uVar17 != 0) {
                          for (; uVar17 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                          }
                        }
                        iVar9 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
                        if (local_d0 <= iVar9) {
                          iVar9 = local_d0;
                        }
                      }
                    } while (iVar9 != iVar4);
                  }
                }
                else {
                  puVar14 = local_d8;
                  if (local_d8 == (uint *)0x0) {
                    puVar14 = local_e8;
                  }
                  uVar10 = *puVar14;
                  if (uVar10 != 0) {
                    uVar24 = 0;
                    iVar23 = 0;
LAB_14294fd6f:
                    uVar31 = (ulonglong)(-uVar10 & uVar10);
                    uVar17 = uVar31 * 2 + 1;
                    lVar29 = 0x3f;
                    if (uVar17 != 0) {
                      for (; uVar17 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                      }
                    }
                    iVar9 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
                    if (local_d0 <= iVar9) {
                      iVar9 = local_d0;
                    }
                    goto LAB_14294fd93;
                  }
                  iVar23 = local_d0 + 0x1e;
                  if (-1 < local_d0 + -1) {
                    iVar23 = local_d0 + -1;
                  }
                  uVar24 = 0;
                  uVar17 = (ulonglong)(uint)(iVar23 >> 5);
                  if (iVar23 >> 5 < 1) {
                    uVar17 = uVar24;
                  }
                  iVar23 = 0;
                  while (uVar17 != uVar24) {
                    iVar23 = iVar23 + 0x20;
                    uVar10 = puVar14[uVar24 + 1];
                    uVar24 = uVar24 + 1;
                    if (uVar10 != 0) goto LAB_14294fd6f;
                  }
                }
                lVar29 = local_1f8;
                LOCK();
                **(longlong **)(local_1f8 + 0x338) =
                     (longlong)*(int *)(local_1f8 + 0x170) - (longlong)*(int *)(local_1f8 + 0x19c);
                UNLOCK();
                FUN_146b656e8(&local_148);
                if ((code *)local_168.QuadPart != (code *)0x0) {
                  FUN_1400020a8();
                }
                plVar16 = local_1d8;
                plVar12 = local_1e0;
                LVar26 = local_250;
                pcVar30 = QueryPerformanceCounter_exref;
                if (local_1d8 != (longlong *)0x0) {
                  LOCK();
                  plVar33 = local_1d8 + 1;
                  *(int *)plVar33 = (int)*plVar33 + -1;
                  UNLOCK();
                  if ((int)*plVar33 == 0) {
                    (**(code **)*local_1d8)(local_1d8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar16 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
                plVar16 = local_1a0;
                plVar33 = local_230;
                if (local_1a0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_1a0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_1a0)(local_1a0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar16 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    plVar33 = local_230;
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                      plVar33 = local_230;
                    }
                  }
                }
                goto LAB_14294f607;
              }
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar27 = *puVar14;
              *puVar14 = *puVar14 + uVar10 + 1;
              UNLOCK();
              if ((uVar27 ^ uVar10) == 0xffffffff) goto code_r0x00014294f80c;
              goto LAB_14294f765;
            }
          }
LAB_14294f607:
          plVar16 = *(longlong **)(lVar29 + 0x330);
          (*pcVar30)(&local_148);
          LOCK();
          *plVar16 = *plVar16 + (local_148.QuadPart - (longlong)LVar26);
          UNLOCK();
          (*pcVar30)(&local_148);
          LVar26 = local_148;
          if (plVar33 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar33 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar3 = (int *)((longlong)plVar33 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          plVar16 = local_1b0 + 2;
        } while (plVar16 != plVar12);
        uVar24 = uStack_190 & 0xffffffff;
      }
    }
    FUN_146b7e7d8(local_198,uVar24);
    if (local_198 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
  }
  plVar12 = *(longlong **)(lVar29 + 0x330);
  QueryPerformanceCounter(&local_148);
  LOCK();
  *plVar12 = *plVar12 + (local_148.QuadPart - (longlong)LVar26);
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014294f80c:
  puVar14 = (uint *)*puVar2;
  *puVar14 = 0xffffffff;
  *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
  puVar14[0x12] = 0;
  *puVar2 = puVar14;
  uVar24 = (longlong)puVar14 + 0x67;
  uVar10 = 0;
  goto LAB_14294f7ea;
}



// FUNCTION 142950040 FUN_142950040 body=12 status=ok
// SIG undefined FUN_142950040(void)

void FUN_142950040(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142950049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295004c FUN_14295004c body=29 status=ok
// SIG undefined FUN_14295004c(void)

undefined8 FUN_14295004c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295006a FUN_14295006a body=339 status=ok
// SIG undefined FUN_14295006a(void)

undefined8 * FUN_14295006a(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  plVar4 = (longlong *)FUN_14054d1d4();
  if ((int)param_2[2] == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)param_2[1];
  }
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_38,puVar6);
  if (local_38 < *(longlong *)(lVar2 + 0x18)) {
    LOCK();
    **(longlong **)(lVar2 + 0x318) = **(longlong **)(lVar2 + 0x318) + 1;
    UNLOCK();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar4 = (longlong *)FUN_14001cc68(0x2b8,0x10);
    FUN_146b37170(plVar4);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149f2f9a0;
    plVar5[2] = (longlong)plVar4;
    cVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,param_2 + 1);
    if (cVar3 == '\0') {
      LOCK();
      **(longlong **)(lVar2 + 0x318) = **(longlong **)(lVar2 + 0x318) + 1;
      UNLOCK();
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar5 == (longlong *)0x0) goto LAB_1429500d4;
    }
    else {
      LOCK();
      **(longlong **)(lVar2 + 0x310) = **(longlong **)(lVar2 + 0x310) + 1;
      UNLOCK();
      *param_1 = plVar4;
      param_1[1] = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_1429500d4;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
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
LAB_1429500d4:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429501c8 FUN_1429501c8 body=12 status=ok
// SIG undefined FUN_1429501c8(void)

void FUN_1429501c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429501d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429501d4 FUN_1429501d4 body=57 status=ok
// SIG undefined FUN_1429501d4(void)

undefined8 * FUN_1429501d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f33870;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295020e FUN_14295020e body=32 status=ok
// SIG undefined FUN_14295020e(void)

undefined8 FUN_14295020e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146b6573c(*param_2,param_1,param_2[1]);
  return param_1;
}



// FUNCTION 142950238 FUN_142950238 body=12 status=ok
// SIG undefined FUN_142950238(void)

void FUN_142950238(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142950241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142950244 FUN_142950244 body=29 status=ok
// SIG undefined FUN_142950244(void)

undefined8 FUN_142950244(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142950262 FUN_142950262 body=282 status=ok
// SIG undefined FUN_142950262(void)

undefined8 * FUN_142950262(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14294b153);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14295037c FUN_14295037c body=113 status=ok
// SIG undefined FUN_14295037c(void)

undefined8 * FUN_14295037c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  FUN_146b66c28(lVar1,&local_30);
  LOCK();
  DAT_14c991e18 = DAT_14c991e18 + -1;
  UNLOCK();
  plVar2 = *(longlong **)(lVar1 + 0xd0);
  LOCK();
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295040c FUN_14295040c body=12 status=ok
// SIG undefined FUN_14295040c(void)

void FUN_14295040c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142950415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142950418 FUN_142950418 body=29 status=ok
// SIG undefined FUN_142950418(void)

undefined8 FUN_142950418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142950436 FUN_142950436 body=302 status=ok
// SIG undefined FUN_142950436(void)

void FUN_142950436(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_4 = (longlong *)*param_4;
  param_3 = (longlong *)*param_3;
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[1];
  uVar11 = FUN_1447addd0(lVar4,0x10);
  plVar12 = (longlong *)FUN_146b8179e(plVar3 + 0x4a,uVar11,lVar4);
  lVar4 = *param_2;
  lVar5 = *param_4;
  lVar6 = param_2[1];
  lVar15 = param_4[1];
  iVar14 = (int)plVar12[1];
  if (iVar14 == 0) {
    local_60 = lVar15;
    (**(code **)(*plVar3 + 0x48))(plVar3,&local_58,*param_3);
    lVar15 = local_60;
    *(undefined4 *)(plVar12 + 2) = (undefined4)local_58;
    local_58 = *(undefined8 *)(*param_3 + 0x38);
    local_50 = *(undefined4 *)(*param_3 + 0x40);
    FUN_14282d1cc(plVar12 + 3,&local_58);
    plVar12[0xd] = (*param_4 + (lVar4 - lVar5)) - param_3[1];
    iVar14 = (int)plVar12[1];
  }
  lVar9 = param_4[4];
  iVar2 = *(int *)((longlong)param_4 + 0x24);
  *(uint *)(plVar12 + 1) = iVar14 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
    FUN_146b55304(plVar12,iVar14);
  }
  lVar7 = *plVar12;
  lVar13 = (longlong)iVar14;
  uVar11 = *(undefined4 *)((longlong)param_4 + 0x14);
  lVar10 = param_4[3];
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar1 = (undefined4 *)(lVar7 + lVar13 * 0x18);
  *puVar1 = (int)param_4[2];
  puVar1[1] = uVar11;
  puVar1[2] = (int)lVar10;
  puVar1[3] = uVar8;
  *(int *)(lVar7 + 0x10 + lVar13 * 0x18) = (int)lVar9 + (int)(lVar4 - lVar5);
  *(int *)(lVar7 + 0x14 + lVar13 * 0x18) = iVar2 + ((int)lVar6 - (int)lVar15);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142950584 FUN_142950584 body=12 status=ok
// SIG undefined FUN_142950584(void)

void FUN_142950584(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295058d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142950590 FUN_142950590 body=29 status=ok
// SIG undefined FUN_142950590(void)

undefined8 FUN_142950590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429505ae FUN_1429505ae body=113 status=ok
// SIG undefined FUN_1429505ae(void)

undefined8 * FUN_1429505ae(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  FUN_146b68a52(lVar1,&local_30);
  LOCK();
  DAT_14c991e18 = DAT_14c991e18 + -1;
  UNLOCK();
  plVar2 = *(longlong **)(lVar1 + 200);
  LOCK();
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295063e FUN_14295063e body=12 status=ok
// SIG undefined FUN_14295063e(void)

void FUN_14295063e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142950647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295064a FUN_14295064a body=29 status=ok
// SIG undefined FUN_14295064a(void)

undefined8 FUN_14295064a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142950668 FUN_142950668 body=4037 status=ok
// SIG undefined FUN_142950668(void)

void FUN_142950668(longlong *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong *plVar7;
  DWORD DVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  undefined2 *puVar20;
  int iVar21;
  undefined2 *puVar22;
  ushort uVar23;
  uint uVar24;
  LARGE_INTEGER LVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_268 [32];
  LARGE_INTEGER *local_248;
  undefined4 local_240;
  longlong *local_238;
  longlong *local_230;
  ulonglong local_228;
  ulonglong local_220;
  void *local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *local_200;
  uint local_1f4;
  LPCRITICAL_SECTION local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  uint local_194;
  LARGE_INTEGER local_190;
  int local_188;
  longlong *local_180;
  longlong *local_178;
  ulonglong uStack_170;
  LARGE_INTEGER local_168;
  ulonglong uStack_160;
  longlong local_150 [9];
  LARGE_INTEGER local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar27 = *param_1;
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Open Time");
  local_1e8 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,0,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Read Time");
  local_1b8 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,0,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Hash Time");
  local_1c0 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,0,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Enqueue Time");
  local_1c8 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,0,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Data Access Speed");
  local_1d0 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,2,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Potential Throughput");
  local_1d8 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,2,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = *(longlong **)(lVar27 + 0x38);
  FUN_140056680(&local_108,L"Build Stream: Total Data Read");
  local_1e0 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,&local_108,1,0);
  if ((void *)local_108.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  p_Var1 = (LPCRITICAL_SECTION)(lVar27 + 0x48);
  EnterCriticalSection(p_Var1);
  memset(*(void **)(lVar27 + 0x78),0,(ulonglong)*(uint *)(lVar27 + 0x70));
  *(undefined8 *)(lVar27 + 0x80) = 0;
  *(undefined8 *)(lVar27 + 0x88) = 0;
  local_1f0 = p_Var1;
  LeaveCriticalSection(p_Var1);
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  QueryPerformanceCounter(&local_108);
  puVar20 = &DAT_149dfb77a;
  if (*(int *)(lVar27 + 0x20) < 2) {
    if (*(int *)(lVar27 + 0x10) == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = *(undefined2 **)(lVar27 + 8);
    }
    (**(code **)(**(longlong **)(lVar27 + 0x40) + 0x90))
              (*(longlong **)(lVar27 + 0x40),&local_178,puVar22,0);
  }
  else {
    FUN_146b6a85a(lVar27,&local_178);
  }
  QueryPerformanceCounter(&local_108);
  FUN_140e836da(local_178,uStack_170 & 0xffffffff);
  FUN_140056680(local_150,&DAT_149dfb77a);
  if (*(int *)(lVar27 + 0x30) != 0) {
    puVar20 = *(undefined2 **)(lVar27 + 0x28);
  }
  local_210 = lVar27;
  FUN_140f7cb10(local_150,puVar20,0,0);
  local_168.QuadPart = 0;
  uStack_160 = 0;
  local_248 = (LARGE_INTEGER *)CONCAT71(local_248._1_7_,1);
  FUN_144a38a52(local_150);
  if ((longlong)(int)uStack_170 != 0) {
    lVar27 = (longlong)(int)uStack_170 << 4;
    plVar14 = local_178;
    do {
      FUN_1448097c4(plVar14,&DAT_149e01f64);
      plVar14 = plVar14 + 2;
      lVar27 = lVar27 + -0x10;
    } while (lVar27 != 0);
  }
  if ((longlong)(int)uStack_160 != 0) {
    lVar27 = (longlong)(int)uStack_160 << 4;
    LVar25 = local_168;
    do {
      local_240 = 0xffffffff;
      local_248 = (LARGE_INTEGER *)((ulonglong)local_248 & 0xffffffff00000000);
      uVar12 = FUN_1447ee042(LVar25.QuadPart,&DAT_149e01e02,1);
      DVar8 = (((LARGE_INTEGER *)(LVar25.QuadPart + 8))->s).LowPart;
      if (uVar12 != 0xffffffff) {
        uVar24 = DVar8 - 1;
        if (DVar8 == 0) {
          uVar24 = 0;
        }
        if ((int)uVar24 <= (int)uVar12) {
          uVar12 = uVar24;
        }
        uVar18 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar18 = 0;
        }
        uVar24 = uVar24 - (int)uVar18;
        if (0 < (int)uVar24) {
          iVar21 = DVar8 - (uVar24 + (int)uVar18);
          if (iVar21 != 0) {
            pvVar6 = (void *)(uVar18 * 2 + *(longlong *)LVar25);
            memmove(pvVar6,(void *)((longlong)pvVar6 + (ulonglong)uVar24 * 2),(longlong)iVar21 * 2);
            DVar8 = (((LARGE_INTEGER *)(LVar25.QuadPart + 8))->s).LowPart;
          }
          DVar8 = DVar8 - uVar24;
          (((LARGE_INTEGER *)(LVar25.QuadPart + 8))->s).LowPart = DVar8;
        }
      }
      iVar21 = 0;
      if (DVar8 != 0) {
        iVar21 = DVar8 - 1;
      }
      uVar12 = *(uint *)(local_210 + 0x10);
      iVar19 = iVar21 + 1 + (uint)((longlong)(int)uVar12 == 0);
      local_108.QuadPart = 0;
      pvVar6 = *(void **)(local_210 + 8);
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar12);
      if (iVar19 == 0 && uVar12 == 0) {
        uStack_100 = (ulonglong)uVar12;
      }
      else {
        if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar19 + uVar12);
        }
        FUN_1446dd670(&local_108,iVar19 + uVar12,0);
        if (uVar12 != 0) {
          memcpy((void *)local_108,pvVar6,(longlong)(int)uVar12 * 2);
        }
      }
      FUN_1401aebe8(&local_108,*(longlong *)LVar25,iVar21);
      if ((LARGE_INTEGER *)LVar25.QuadPart == &local_108) {
        if ((void *)local_108.QuadPart != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)LVar25 != 0) {
          FUN_1400020a8();
        }
        *(LARGE_INTEGER *)LVar25 = (LONGLONG)local_108;
        local_108.QuadPart = 0;
        (((LARGE_INTEGER *)(LVar25.QuadPart + 8))->s).LowPart = (DWORD)uStack_100;
        *(undefined4 *)(LVar25.QuadPart + 0xc) = uStack_100._4_4_;
      }
      FUN_1448097c4(LVar25.QuadPart,&DAT_149e01f64);
      LVar25.QuadPart = LVar25.QuadPart + 0x10;
      lVar27 = lVar27 + -0x10;
    } while (lVar27 != 0);
  }
  uVar12 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108.QuadPart = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  FUN_140e82fa0(&local_108,&local_168);
  local_228 = (ulonglong)(int)uStack_170;
  if (local_228 == 0) goto LAB_142950ffb;
  local_230 = local_178;
  iVar21 = (int)local_178[1];
  iVar19 = iVar21 + -1;
  if (iVar21 == 0) {
    iVar19 = 0;
  }
  if (0 < iVar19) {
    if (iVar21 == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    else {
      puVar20 = (undefined2 *)*local_178;
    }
    lVar27 = 0;
    uVar18 = 0;
    do {
      uVar12 = ((uint)(0x19 < (ushort)puVar20[lVar27] - 0x61) * 0x20 + (uint)(ushort)puVar20[lVar27]
               ) - 0x20;
      uVar24 = (uint)(uVar18 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar12) & 0xff) * 4);
      uVar12 = uVar24 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
      uVar18 = (ulonglong)uVar12;
      lVar27 = lVar27 + 1;
    } while (iVar19 != (int)lVar27);
  }
  if ((DWORD)uStack_100 != local_d4) {
    puVar10 = local_c8;
    if (local_c8 == (undefined1 *)0x0) {
      puVar10 = local_d0;
    }
    iVar19 = *(int *)(puVar10 + (ulonglong)(local_c0 - 1U & uVar12) * 4);
    if (*(int *)(puVar10 + (ulonglong)(local_c0 - 1U & uVar12) * 4) != -1) {
LAB_142950cc8:
      iVar9 = iVar19;
      lVar27 = (longlong)iVar9;
      iVar19 = *(int *)(local_108.QuadPart + 8 + lVar27 * 0x18);
      if (iVar19 == iVar21) {
        if (1 < iVar21) {
          lVar16 = 0;
          do {
            uVar23 = *(ushort *)(*(longlong *)(local_108.QuadPart + lVar27 * 0x18) + lVar16);
            uVar18 = (ulonglong)uVar23;
            uVar11 = *(ushort *)(*local_178 + lVar16);
            if (uVar23 == uVar11) {
              if (uVar23 == 0) break;
            }
            else {
              if (0x7f < (uVar11 | uVar23)) goto LAB_142950d43;
              uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
              uVar15 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[uVar15]) goto LAB_142950d43;
            }
            lVar16 = lVar16 + 2;
          } while( true );
        }
      }
      else if (iVar19 + iVar21 != 1) goto LAB_142950ce5;
      goto LAB_142950d53;
    }
  }
  local_238._0_4_ = 0;
LAB_142950d61:
  uVar18 = 0;
  uVar15 = 0;
LAB_142950d76:
  do {
    local_220 = uVar15;
    pvVar6 = (void *)(uVar18 & 0xffffffff);
    iVar21 = (int)uVar18;
    if ((int)(iVar21 + 1U) < (int)local_228) {
      local_1b0 = (longlong)iVar21;
      uVar15 = local_1b0 + 1;
      local_200 = (longlong *)CONCAT44(local_200._4_4_,(DWORD)uStack_100);
      local_208 = CONCAT44(local_208._4_4_,local_d4);
      puVar10 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar10 = local_d0;
      }
      local_1f4 = local_c0 - 1;
      bVar3 = true;
      do {
        iVar19 = (int)local_230[uVar15 * 2 + 1];
        uVar12 = 0;
        iVar9 = iVar19 + -1;
        if (iVar19 == 0) {
          iVar9 = 0;
        }
        if (0 < iVar9) {
          puVar20 = &DAT_149dfb77a;
          if (iVar19 != 0) {
            puVar20 = (undefined2 *)local_230[uVar15 * 2];
          }
          lVar27 = 0;
          uVar18 = 0;
          do {
            uVar12 = ((uint)(ushort)puVar20[lVar27] +
                     (uint)(0x19 < (ushort)puVar20[lVar27] - 0x61) * 0x20) - 0x20;
            uVar24 = (uint)(uVar18 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar12) & 0xff) * 4);
            uVar12 = uVar24 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar12 >> 8 & 0xff) * 4)
            ;
            uVar18 = (ulonglong)uVar12;
            lVar27 = lVar27 + 1;
          } while (iVar9 != (int)lVar27);
        }
        uVar18 = uVar15;
        local_218 = pvVar6;
        if ((DWORD)uStack_100 != local_d4) {
          iVar9 = *(int *)(puVar10 + (ulonglong)(uVar12 & local_1f4) * 4);
LAB_142950e7a:
          if (iVar9 != -1) {
            lVar27 = (longlong)iVar9;
            iVar9 = *(int *)(local_108.QuadPart + 8 + lVar27 * 0x18);
            if (iVar9 == iVar19) {
              if (1 < iVar19) {
                lVar16 = 0;
                do {
                  uVar23 = *(ushort *)(*(longlong *)(local_108.QuadPart + lVar27 * 0x18) + lVar16);
                  uVar13 = (ulonglong)uVar23;
                  uVar11 = *(ushort *)(local_230[uVar15 * 2] + lVar16);
                  if (uVar23 == uVar11) {
                    if (uVar23 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar11 | uVar23)) goto LAB_142950ef2;
                    uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    uVar5 = (ulonglong)uVar11;
                    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                    if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar5]) goto LAB_142950ef2;
                  }
                  lVar16 = lVar16 + 2;
                } while( true );
              }
              goto LAB_142950ef8;
            }
            if (iVar9 + iVar19 == 1) goto LAB_142950ef8;
            goto LAB_142950e9b;
          }
        }
        if ((char)local_238 != '\0') {
          FUN_1447a1747(local_230 + local_1b0 * 2,(int)uVar15 - iVar21);
          goto joined_r0x000142950f8c;
        }
LAB_142950f0b:
        uVar15 = uVar15 + 1;
        bVar3 = (longlong)uVar15 < (longlong)local_228;
        uVar18 = local_228;
      } while (uVar15 != local_228);
    }
    else {
      bVar3 = false;
      uVar18 = (ulonglong)(iVar21 + 1U);
    }
    iVar19 = (int)uVar18 - iVar21;
    if ((char)local_238 != '\0') {
      FUN_1447a1747(local_230 + (longlong)iVar21 * 2,iVar19);
joined_r0x000142950f8c:
      local_238 = (longlong *)((ulonglong)local_238 & 0xffffffff00000000);
      uVar15 = local_220;
      if (!bVar3) {
        uVar12 = (uint)local_220;
        break;
      }
      goto LAB_142950d76;
    }
LAB_142950f9d:
    iVar9 = (int)local_220;
    if (iVar9 != iVar21) {
      pvVar6 = memmove(local_230 + (longlong)iVar9 * 2,local_230 + (longlong)iVar21 * 2,
                       (longlong)iVar19 << 4);
      iVar9 = (int)local_220;
    }
    uVar12 = iVar9 + iVar19;
    local_238 = (longlong *)
                CONCAT44(local_238._4_4_,(int)CONCAT71((int7)((ulonglong)pvVar6 >> 8),1));
    uVar15 = (ulonglong)uVar12;
  } while (bVar3);
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar12);
LAB_142950ffb:
  lVar27 = local_210;
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_108);
  FUN_1447a1747(local_168.QuadPart,uStack_160 & 0xffffffff);
  if ((LARGE_INTEGER *)local_168.QuadPart != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  if (local_150[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146b6aa52(lVar27,&local_178);
  local_108.QuadPart = -0x1032547698badcff;
  uStack_100 = 0x1032547698badcfe;
  local_f8 = 0xc3d2e1f0;
  local_f0 = 0;
  local_228 = FUN_14001cc68(0xa00000,0x10);
  if ((longlong)(int)uStack_170 != 0) {
    plVar14 = local_178 + (longlong)(int)uStack_170 * 2;
    plVar26 = local_178;
    while( true ) {
      if (*(int *)(lVar27 + 0x230) != 0) break;
      QueryPerformanceCounter(&local_168);
      LVar25 = local_168;
      puVar20 = &DAT_149dfb77a;
      if ((int)plVar26[1] != 0) {
        puVar20 = (undefined2 *)*plVar26;
      }
      (**(code **)(**(longlong **)(lVar27 + 0x40) + 0x48))
                (*(longlong **)(lVar27 + 0x40),&local_180,puVar20,0);
      FUN_140056680(&local_168,&DAT_149dfb77a);
      QueryPerformanceCounter(&local_190);
      LOCK();
      *local_1e8 = *local_1e8 + (local_190.QuadPart - (longlong)LVar25);
      UNLOCK();
      if (local_180 == (longlong *)0x0) {
        LOCK();
        *(undefined4 *)(lVar27 + 0x230) = 1;
        UNLOCK();
        plVar17 = local_180;
      }
      else {
        local_238 = local_180;
        local_188 = *(int *)(lVar27 + 0x10);
        lVar16 = (longlong)local_188;
        local_190.QuadPart = 0;
        pvVar6 = *(void **)(lVar27 + 8);
        FUN_1446dd670(&local_190,(uint)(lVar16 == 0) + local_188 + 1,0);
        if (lVar16 != 0) {
          memcpy((void *)local_190,pvVar6,lVar16 * 2);
        }
        FUN_1400020e8(&local_190,&DAT_149e065c6,1);
        LVar25.QuadPart = (LONGLONG)&DAT_149dfb77a;
        if (local_188 != 0) {
          LVar25 = local_190;
        }
        FUN_14107002a(plVar26,LVar25.QuadPart);
        plVar17 = local_238;
        if ((undefined2 *)local_190.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar7 = (longlong *)(**(code **)(*local_180 + 0x30))();
        p_Var1 = local_1f0;
        if ((longlong)plVar7 < 1) {
          if (plVar7 == (longlong *)0x0) {
            local_1a8 = (void *)0x0;
            local_1a0 = (int)plVar26[1];
            lVar16 = (longlong)local_1a0;
            pvVar6 = (void *)*plVar26;
            if (lVar16 == 0) {
              local_19c = 0;
            }
            else {
              FUN_1446dd670(&local_1a8,local_1a0,0);
              memcpy(local_1a8,pvVar6,lVar16 * 2);
            }
            FUN_146b6abf4(lVar27,&local_1a8);
            plVar17 = local_238;
          }
        }
        else {
          local_108.QuadPart = -0x1032547698badcff;
          uStack_100 = 0x1032547698badcfe;
          local_f8 = 0xc3d2e1f0;
          local_f0 = 0;
          local_200 = plVar14;
          EnterCriticalSection(local_1f0);
          uVar2 = *(undefined8 *)(lVar27 + 0x88);
          LeaveCriticalSection(p_Var1);
          local_248 = &local_168;
          local_230 = plVar7;
          local_208 = uVar2;
          FUN_146b6a78a(local_150,plVar26,plVar7);
          FUN_146b6aa9a(lVar27,local_150);
          while( true ) {
            cVar4 = (**(code **)(*local_180 + 0x38))();
            if ((cVar4 != '\0') || (*(int *)(lVar27 + 0x230) != 0)) break;
            lVar27 = (**(code **)(*local_180 + 0x28))();
            uVar18 = (longlong)local_230 - lVar27;
            if (0x9fffff < (longlong)uVar18) {
              uVar18 = 0xa00000;
            }
            local_194 = (uint)uVar18;
            QueryPerformanceCounter(&local_190);
            LVar25 = local_190;
            uVar15 = local_228;
            (**(code **)(*local_180 + 0x170))(local_180,local_228,uVar18 & 0xffffffff);
            QueryPerformanceCounter(&local_190);
            plVar7 = local_1b8;
            plVar14 = local_1e0;
            lVar27 = local_210;
            LOCK();
            *local_1b8 = *local_1b8 + (local_190.QuadPart - (longlong)LVar25);
            UNLOCK();
            LOCK();
            *local_1e0 = *local_1e0 + (ulonglong)local_194;
            UNLOCK();
            QueryPerformanceCounter(&local_190);
            LVar25 = local_190;
            FUN_140c54e34(&local_108,uVar15,local_194);
            QueryPerformanceCounter(&local_190);
            plVar17 = local_1c0;
            LOCK();
            *local_1c0 = *local_1c0 + (local_190.QuadPart - (longlong)LVar25);
            UNLOCK();
            QueryPerformanceCounter(&local_190);
            LVar25 = local_190;
            FUN_146b69ae2(local_1f0,uVar15,&local_194);
            QueryPerformanceCounter(&local_190);
            LOCK();
            *local_1c8 = *local_1c8 + (local_190.QuadPart - (longlong)LVar25);
            UNLOCK();
            lVar16 = *plVar7 + *local_1e8;
            auVar28._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
            auVar28._0_8_ = lVar16;
            auVar28._12_4_ = 0x45300000;
            LOCK();
            *local_1d0 = (longlong)
                         ((double)*plVar14 /
                         ((((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
                          (auVar28._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418));
            UNLOCK();
            lVar16 = *plVar17 + *plVar7 + *local_1e8;
            auVar29._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
            auVar29._0_8_ = lVar16;
            auVar29._12_4_ = 0x45300000;
            LOCK();
            *local_1d8 = (longlong)
                         ((double)*plVar14 /
                         ((((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
                          (auVar29._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418));
            UNLOCK();
          }
          FUN_140c54d7a(&local_108);
          FUN_146b6ab44(lVar27,local_208,&local_108);
          plVar14 = local_200;
          plVar17 = local_238;
        }
        (**(code **)(*local_180 + 0x1f8))();
      }
      if ((LARGE_INTEGER *)local_168.QuadPart != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      if (local_180 != (longlong *)0x0) {
        (**(code **)*local_180)(local_180,1);
      }
      if ((plVar17 == (longlong *)0x0) || (plVar26 = plVar26 + 2, plVar26 == plVar14)) break;
    }
  }
  LOCK();
  *(undefined4 *)(lVar27 + 0x90) = 1;
  UNLOCK();
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142950d43:
  if (uVar23 == uVar11) goto LAB_142950d53;
LAB_142950ce5:
  iVar19 = *(int *)(local_108.QuadPart + 0x10 + lVar27 * 0x18);
  iVar9 = -1;
  if (iVar19 == -1) goto LAB_142950d53;
  goto LAB_142950cc8;
LAB_142950d53:
  local_238._0_4_ = CONCAT31((int3)((uint)iVar21 >> 8),iVar9 != -1);
  goto LAB_142950d61;
LAB_142950ef2:
  if (uVar23 == uVar11) {
LAB_142950ef8:
    if ((char)local_238 != '\0') goto LAB_142950f0b;
    iVar19 = (int)uVar15 - iVar21;
    goto LAB_142950f9d;
  }
LAB_142950e9b:
  iVar9 = *(int *)(local_108.QuadPart + 0x10 + lVar27 * 0x18);
  goto LAB_142950e7a;
}



// FUNCTION 14295164e FUN_14295164e body=12 status=ok
// SIG undefined FUN_14295164e(void)

void FUN_14295164e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142951657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295165a FUN_14295165a body=29 status=ok
// SIG undefined FUN_14295165a(void)

undefined8 FUN_14295165a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951678 FUN_142951678 body=207 status=ok
// SIG undefined FUN_142951678(void)

void FUN_142951678(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = *param_1;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149f33aa0;
  local_58 = &LAB_142951c26;
  FUN_14295178f(&local_68);
  if (local_68 != 0) {
    do {
      cVar3 = (**(code **)(**(longlong **)(local_68 + 0x70) + 0x20))
                        (*(longlong **)(local_68 + 0x70),0xffffffff,0);
    } while (cVar3 == '\0');
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    pppuVar4 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar4 = &local_38;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142951772 FUN_142951772 body=29 status=ok
// SIG undefined FUN_142951772(void)

undefined8 FUN_142951772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295178f FUN_14295178f body=492 status=ok
// SIG undefined FUN_14295178f(void)

undefined8 * FUN_14295178f(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_b0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  FUN_145d28d24(puVar8);
  *(undefined1 *)(puVar8 + 2) = 0;
  local_b8 = puVar8;
  local_b0 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_b0[1] = (longlong)&DAT_100000001;
  *local_b0 = (longlong)&PTR_FUN_149f2f980;
  local_b0[2] = (longlong)puVar8;
  FUN_14295197c(local_68,&local_b8,param_2);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14295193c;
    }
    local_a8[0] = local_68[0];
    local_98 = local_58;
    local_58 = (longlong *)0x0;
    local_88 = local_48;
    uStack_80 = uStack_40;
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    if (local_68[0] != (code *)0x0) {
      local_68[0] = (code *)0x0;
    }
    FUN_1407461b0(1,local_a8);
  }
  else {
LAB_14295193c:
    pcVar5 = local_68[0];
    plVar10 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar10 = &local_48;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar9);
  }
  *(undefined1 *)(puVar8 + 2) = 1;
  *param_1 = *puVar8;
  lVar4 = puVar8[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_68[0] != (code *)0x0) {
    plVar10 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar10 = &local_48;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  plVar10 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14295197c FUN_14295197c body=334 status=ok
// SIG undefined FUN_14295197c(void)

undefined8 * FUN_14295197c(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_48 [2];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  local_60 = (longlong *)param_2[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_58 = *param_3;
  local_48[0] = (longlong *)0x0;
  if (local_58 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)*plVar4)(plVar4,local_48);
  }
  *param_1 = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  param_1[2] = puVar3;
  *puVar3 = &PTR_FUN_149f33a80;
  puVar3[2] = local_68;
  puVar3[3] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  puVar3[4] = local_58;
  puVar3[6] = 0;
  if (local_58 != 0) {
    plVar4 = local_48[0];
    if (local_48[0] == (longlong *)0x0) {
      plVar4 = local_38;
    }
    (**(code **)*plVar4)(plVar4,puVar3 + 6);
  }
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff0) {
    *param_1 = FUN_142951acc;
  }
  if (local_58 != 0) {
    plVar4 = local_48[0];
    if (local_48[0] == (longlong *)0x0) {
      plVar4 = local_38;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142951acc FUN_142951acc body=66 status=ok
// SIG undefined FUN_142951acc(void)

void FUN_142951acc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  *(undefined4 *)(*(longlong *)*param_1 + 0x80) = 0;
  FUN_140b576f0();
  return;
}



// FUNCTION 142951b0e FUN_142951b0e body=131 status=ok
// SIG undefined FUN_142951b0e(void)

undefined8 * FUN_142951b0e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f33a80;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 142951b98 FUN_142951b98 body=29 status=ok
// SIG undefined FUN_142951b98(void)

void FUN_142951b98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142951bb6 FUN_142951bb6 body=111 status=ok
// SIG undefined FUN_142951bb6(void)

undefined8 * FUN_142951bb6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f33a80;
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951c60 FUN_142951c60 body=12 status=ok
// SIG undefined FUN_142951c60(void)

void FUN_142951c60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142951c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142951c6c FUN_142951c6c body=29 status=ok
// SIG undefined FUN_142951c6c(void)

undefined8 FUN_142951c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951c8a FUN_142951c8a body=255 status=ok
// SIG undefined FUN_142951c8a(void)

void FUN_142951c8a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar4 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f2f9a0;
  plVar5[2] = (longlong)plVar4;
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0x20))();
  cVar3 = (**(code **)(*plVar4 + 0x160))(plVar4,uVar6);
  if (cVar3 == '\0') {
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
    lVar2 = *(longlong *)param_1[2];
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  else {
    lVar2 = *(longlong *)param_1[2];
    *(longlong **)(lVar2 + 0x80) = plVar4;
    *(longlong **)(lVar2 + 0x88) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_140b576f0();
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
          return;
        }
      }
      return;
    }
  }
  FUN_140b576f0();
  return;
}



// FUNCTION 142951d8e FUN_142951d8e body=5 status=ok
// SIG undefined FUN_142951d8e(void)

longlong FUN_142951d8e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142951d94 FUN_142951d94 body=12 status=ok
// SIG undefined FUN_142951d94(void)

void FUN_142951d94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142951d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142951da0 FUN_142951da0 body=83 status=ok
// SIG undefined FUN_142951da0(void)

undefined8 * FUN_142951da0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f33ac0;
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



// FUNCTION 142951e28 FUN_142951e28 body=29 status=ok
// SIG undefined FUN_142951e28(void)

undefined8 FUN_142951e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951e7a FUN_142951e7a body=29 status=ok
// SIG undefined FUN_142951e7a(void)

undefined8 FUN_142951e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951e98 FUN_142951e98 body=111 status=ok
// SIG undefined FUN_142951e98(void)

void FUN_142951e98(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14295178f(local_28,param_1);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142951f18 FUN_142951f18 body=106 status=ok
// SIG undefined FUN_142951f18(void)

undefined8 * FUN_142951f18(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f33b20;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 142951f88 FUN_142951f88 body=29 status=ok
// SIG undefined FUN_142951f88(void)

void FUN_142951f88(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142951fa6 FUN_142951fa6 body=71 status=ok
// SIG undefined FUN_142951fa6(void)

undefined8 * FUN_142951fa6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f33b20;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142951fee FUN_142951fee body=425 status=ok
// SIG undefined FUN_142951fee(void)

void FUN_142951fee(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *param_1;
  if ((&DAT_149f2f800)[*(byte *)(param_2 + 2)] == '\x01') {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149f340d0;
    plVar5[2] = *param_2;
    lVar4 = param_2[1];
    plVar5[3] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(plVar5 + 4) = 0;
  }
  else {
    local_78[0] = param_2;
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_146b83d8c(plVar5,local_78);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  lVar4 = param_1[1];
  local_78[0] = (longlong *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_149f33b60;
  local_68[1] = lVar3;
  local_68[2] = lVar4;
  local_68[3] = (longlong)(plVar5 + 2);
  local_68[4] = (longlong)plVar5;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = (longlong *)&LAB_1429521e0;
  }
  FUN_14295178f(local_88,local_78);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_78[0] != (longlong *)0x0) {
    plVar5 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429521b6 FUN_1429521b6 body=12 status=ok
// SIG undefined FUN_1429521b6(void)

void FUN_1429521b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429521bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429521c2 FUN_1429521c2 body=29 status=ok
// SIG undefined FUN_1429521c2(void)

undefined8 FUN_1429521c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429521f2 FUN_1429521f2 body=87 status=ok
// SIG undefined FUN_1429521f2(void)

undefined8 * FUN_1429521f2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_149f33b60;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}



// FUNCTION 142952250 FUN_142952250 body=29 status=ok
// SIG undefined FUN_142952250(void)

void FUN_142952250(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14295226e FUN_14295226e body=83 status=ok
// SIG undefined FUN_14295226e(void)

undefined8 * FUN_14295226e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f33b60;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 1429522c2 FUN_1429522c2 body=3567 status=ok
// SIG undefined FUN_1429522c2(void)

/* WARNING: Removing unreachable block (ram,0x000142952be7) */
/* WARNING: Removing unreachable block (ram,0x000142952bfa) */
/* WARNING: Removing unreachable block (ram,0x000142952bfe) */

void FUN_1429522c2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined ***pppuVar14;
  undefined ******ppppppuVar15;
  longlong *plVar16;
  longlong *****ppppplVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  int iVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_528 [32];
  longlong *local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined1 *local_4d0;
  undefined8 *local_4c0;
  longlong local_4b8;
  undefined8 *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  LARGE_INTEGER local_480;
  undefined8 *local_478;
  longlong *local_470;
  undefined8 local_468;
  undefined8 local_460;
  LARGE_INTEGER local_458;
  longlong *plStack_450;
  undefined ***local_448;
  int local_440;
  undefined **local_438;
  undefined4 local_430;
  undefined4 local_42c;
  longlong *local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  uint uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_407;
  uint uStack_403;
  undefined8 *local_3f8;
  undefined8 local_3f0;
  int local_3e8;
  undefined4 local_3e4;
  undefined8 local_3e0;
  longlong local_3d8;
  ulonglong uStack_3d0;
  LARGE_INTEGER local_3c8;
  longlong *plStack_3c0;
  undefined ***local_3b8;
  int local_3b0;
  undefined **local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  uint uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_377;
  uint uStack_373;
  undefined1 *local_358 [2];
  undefined8 local_348;
  undefined **local_338;
  undefined8 **local_330;
  undefined1 local_318 [80];
  LARGE_INTEGER local_2c8 [2];
  longlong *local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [80];
  code *local_238;
  undefined8 uStack_230;
  undefined *****local_228 [2];
  longlong ****local_218;
  int local_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  longlong local_1f8;
  undefined4 local_1f0;
  _RTL_CRITICAL_SECTION local_1e8;
  LARGE_INTEGER local_1c0;
  longlong lStack_1b8;
  ushort local_1b0;
  undefined1 local_1a8 [104];
  undefined1 local_140 [104];
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  lVar2 = *param_1;
  local_d8 = *(undefined8 *)(lVar2 + 0x50);
  plVar9 = *(longlong **)(lVar2 + 0x160);
  local_d0 = *(longlong *)(lVar2 + 0x58);
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_d8);
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3e0 = 0;
  if (*(int *)(lVar2 + 0x1a0) == 0) {
    lVar18 = lVar2 + 0x1d0;
    local_4b8 = lVar18;
    do {
      cVar6 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x10))();
      if (cVar6 != '\0') {
        do {
          uVar8 = FUN_146b6f3e2(&local_3d8);
          cVar6 = FUN_146b6f2c4(lVar18,uVar8);
        } while (cVar6 != '\0');
        FUN_146b6f41e(&local_3d8,&local_d8);
        FUN_146b6f244(&local_d8);
        if (0 < (int)uStack_3d0) {
          local_3b8 = (undefined ***)0x0;
          local_3a8 = &PTR_LAB_149f33bc0;
          local_3c8.QuadPart = (LONGLONG)FUN_142953122;
          local_3a0 = lVar2;
          local_398 = &local_3d8;
          FUN_146b6f4ce(lVar2,&local_3c8);
          if ((code *)local_3c8.QuadPart != (code *)0x0) {
            pppuVar14 = local_3b8;
            if (local_3b8 == (undefined ***)0x0) {
              pppuVar14 = &local_3a8;
            }
            (*(code *)(*pppuVar14)[2])();
          }
          FUN_146b83e06(local_3d8,uStack_3d0 & 0xffffffff);
          uVar24 = uStack_3d0 >> 0x20;
          uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
          if ((int)uVar24 != 0) {
            FUN_146b8406c(&local_3d8);
          }
        }
      }
      if (*(char *)(lVar2 + 0x48) == '\x01') {
        do {
          uVar8 = FUN_146b6f3e2(&local_3d8);
          cVar6 = FUN_146b6f2c4(lVar18,uVar8);
        } while (cVar6 != '\0');
        puVar25 = local_140;
LAB_1429524ba:
        FUN_146b6f41e(&local_3d8);
        FUN_146b6f244(puVar25);
      }
      else {
        FUN_146b6f3e2(&local_3d8);
        cVar6 = FUN_146b6f2c4(lVar18);
        puVar25 = local_1a8;
        if (cVar6 == '\0') goto LAB_1429524ba;
      }
      if ((longlong)(int)uStack_3d0 < 1) {
        (**(code **)(**(longlong **)(lVar2 + 0x200) + 0x20))
                  (*(longlong **)(lVar2 + 0x200),0xffffffff,0);
      }
      else {
        lVar18 = 0;
        do {
          lVar23 = (ulonglong)*(byte *)(local_3d8 + 0x50 + lVar18) * 0x20;
          plVar9 = (longlong *)(lVar23 + 0x218 + lVar2);
          *plVar9 = *plVar9 + 1;
          plVar9 = (longlong *)(lVar23 + 0x270 + lVar2);
          *plVar9 = *plVar9 + 1;
          lVar18 = lVar18 + 0x68;
        } while ((longlong)(int)uStack_3d0 * 0x68 - lVar18 != 0);
        InitializeCriticalSection(&local_1e8);
        SetCriticalSectionSpinCount(&local_1e8,4000);
        local_1c0 = (LARGE_INTEGER)0x0;
        lStack_1b8 = 0;
        local_1b0 = 1;
        QueryPerformanceCounter(&local_3c8);
        local_1c0.s = local_3c8.s;
        (**(code **)(**(longlong **)(lVar2 + 0x168) + 0x50))();
        FUN_146b28af0(&local_3c8);
        plVar9 = plStack_3c0;
        LVar5 = local_3c8;
        if (plStack_3c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_3c0 + 1) = (int)plStack_3c0[1] + 1;
          UNLOCK();
          if (plStack_3c0 != (longlong *)0x0) {
            LOCK();
            plVar16 = plStack_3c0 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plStack_3c0)(plStack_3c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
        }
        local_4a0 = plVar9;
        (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x50))();
        lVar18 = (**(code **)(*(longlong *)LVar5 + 0x50))(LVar5.QuadPart);
        *(float *)(lVar2 + 0x25c) = (float)lVar18 * 0.0009765625 * 0.0009765625;
        lVar18 = (**(code **)(*(longlong *)LVar5 + 0x48))(LVar5.QuadPart);
        fVar28 = (float)lVar18 * 0.0009765625 * 0.0009765625;
        *(float *)(lVar2 + 600) = fVar28;
        *(undefined4 *)(lVar2 + 0x2b4) = *(undefined4 *)(lVar2 + 0x25c);
        *(float *)(lVar2 + 0x2b0) = fVar28;
        local_218 = (longlong ****)0x0;
        local_210 = 0;
        local_238 = (code *)0x0;
        uStack_230 = 0;
        uStack_20c = 0x80;
        uStack_208._0_4_ = 0xffffffff;
        uStack_208._4_4_ = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        if ((longlong)(int)uStack_3d0 != 0) {
          lVar23 = (longlong)(int)uStack_3d0 * 0x68;
          lVar18 = local_3d8;
          do {
            if (*(char *)(lVar18 + 0x50) == '\x01') {
              (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x1d0))
                        (*(longlong **)(lVar2 + 0x50),lVar18,&local_238);
            }
            else {
              FUN_146b6f6ea(&local_238,lVar18);
            }
            lVar18 = lVar18 + 0x68;
            lVar23 = lVar23 + -0x68;
          } while (lVar23 != 0);
          if (local_210 != 0) {
            ppppppuVar15 = (undefined ******)local_218;
            if ((undefined ******)local_218 == (undefined ******)0x0) {
              ppppppuVar15 = local_228;
            }
            uVar22 = *(uint *)ppppppuVar15;
            if (uVar22 == 0) {
              iVar20 = local_210 + 0x1e;
              if (-1 < local_210 + -1) {
                iVar20 = local_210 + -1;
              }
              uVar24 = 0;
              uVar19 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar19 = uVar24;
              }
              iVar20 = 0;
              do {
                if (uVar19 == uVar24) goto LAB_1429528e7;
                iVar20 = iVar20 + 0x20;
                uVar22 = *(uint *)((longlong)ppppppuVar15 + (uVar24 + 1) * 4);
                uVar24 = uVar24 + 1;
              } while (uVar22 == 0);
            }
            else {
              uVar24 = 0;
              iVar20 = 0;
            }
            uVar21 = (ulonglong)(-uVar22 & uVar22);
            uVar19 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar26 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar26 < local_210) {
              uVar22 = 0xffffffff;
              do {
                lVar18 = (**(code **)(**(longlong **)(lVar2 + 0x108) + 0x68))
                                   (*(longlong **)(lVar2 + 0x108),
                                    local_238 + (longlong)iVar26 * 0x18);
                if (lVar18 != 0) {
                  cVar6 = (**(code **)(*(longlong *)LVar5 + 0x20))(LVar5.QuadPart,lVar18 + 0x20);
                  if (cVar6 == '\0') {
                    *(float *)(lVar2 + 0x260) =
                         (float)*(ulonglong *)(lVar18 + 0x58) * 0.0009765625 * 0.0009765625 +
                         *(float *)(lVar2 + 0x260);
                    *(float *)(lVar2 + 0x2b8) =
                         (float)*(ulonglong *)(lVar18 + 0x58) * 0.0009765625 * 0.0009765625 +
                         *(float *)(lVar2 + 0x2b8);
                  }
                  else {
                    FUN_1411a5a1c(&local_238,iVar26);
                  }
                }
                uVar22 = uVar22 & ~(uint)uVar21;
                ppppppuVar15 = (undefined ******)local_218;
                if ((undefined ******)local_218 == (undefined ******)0x0) {
                  ppppppuVar15 = local_228;
                }
                iVar26 = (int)uVar24;
                lVar18 = (longlong)iVar26;
                uVar11 = *(uint *)((longlong)ppppppuVar15 + lVar18 * 4) & uVar22;
                if (uVar11 == 0) {
                  iVar12 = local_210 + 0x1e;
                  if (-1 < local_210 + -1) {
                    iVar12 = local_210 + -1;
                  }
                  iVar12 = iVar12 >> 5;
                  iVar13 = iVar12;
                  if (iVar12 < iVar26) {
                    iVar13 = iVar26;
                  }
                  if (iVar12 <= iVar26) break;
                  lVar23 = 0;
                  while( true ) {
                    iVar20 = iVar20 + 0x20;
                    uVar11 = *(uint *)((longlong)ppppppuVar15 + (lVar18 + lVar23 + 1) * 4);
                    if (uVar11 != 0) break;
                    lVar23 = lVar23 + 1;
                    if (iVar13 - lVar18 == lVar23) goto LAB_1429528e7;
                  }
                  uVar24 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                  uVar22 = 0xffffffff;
                }
                uVar21 = (ulonglong)(-uVar11 & uVar11);
                uVar19 = uVar21 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar26 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              } while (iVar26 < local_210);
            }
          }
        }
LAB_1429528e7:
        local_3f0 = 0;
        iVar20 = *(int *)(lVar2 + 0x40);
        uVar8 = *(undefined8 *)(lVar2 + 0x38);
        local_3e8 = iVar20;
        if (iVar20 == 0) {
          local_3e4 = 0;
        }
        else {
          FUN_140b856de(&local_3f0,iVar20,0);
          FUN_140b8566a(local_3f0,uVar8,iVar20);
        }
        FUN_146b34f2e(&local_3c8,&local_3f0);
        uStack_384 = uStack_384 & 0xffffff00;
        uStack_373 = uStack_373 & 0xffffff;
        uVar8 = *(undefined8 *)(lVar2 + 0x108);
        plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
        FUN_146b71642(plVar9,uVar8,&local_238);
        local_4b0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *local_4b0 = &PTR_FUN_149f323e8;
        local_4b0[1] = plVar9;
        iVar20 = local_3b0;
        if (0x1ff < local_3b0) {
          iVar20 = 0x200;
        }
        if (iVar20 < 0x41) {
          iVar20 = 0x40;
        }
        local_508 = (longlong *)0x0;
        local_4c0 = (undefined8 *)FUN_146b8f298(iVar20,local_4b0,0,*(undefined8 *)(lVar2 + 0x170));
        (**(code **)(*plVar9 + 8))(plVar9,local_288);
        local_4e0 = *(undefined8 *)(lVar2 + 0x178);
        local_4e8 = *(undefined8 *)(lVar2 + 0x188);
        local_4f0 = *(undefined8 *)(lVar2 + 0x138);
        local_4f8 = *(undefined8 *)(lVar2 + 0x198);
        local_4d8 = *(undefined8 *)(lVar2 + 0x108);
        local_500 = *(undefined8 *)(lVar2 + 0x120);
        local_458 = local_3c8;
        plStack_450 = plStack_3c0;
        local_3c8.QuadPart = 0;
        plStack_3c0 = (longlong *)0x0;
        local_440 = local_3b0;
        local_448 = local_3b8;
        local_438 = local_3a8;
        local_3a8 = (undefined **)0x0;
        local_430 = (undefined4)local_3a0;
        local_42c = local_3a0._4_4_;
        local_3a0 = 0;
        local_428 = local_398;
        local_398 = (longlong *)0x0;
        local_420 = local_390;
        local_41c = local_38c;
        local_390 = 0;
        local_38c = 0;
        uStack_407 = uStack_377;
        uStack_403 = uStack_373;
        uStack_418 = local_388;
        uStack_414 = uStack_384;
        uStack_410 = uStack_380;
        uStack_40c = uStack_37c;
        local_4d0 = local_288;
        local_508 = plVar9;
        local_3f8 = (undefined8 *)
                    FUN_14294767a(&local_458,*(undefined8 *)(lVar2 + 0x128),local_4c0,
                                  *(undefined8 *)(lVar2 + 400));
        local_2a8 = &PTR_LAB_149f33be0;
        uStack_2a0 = &local_3f8;
        puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar10 = 0;
        puVar10[2] = &LAB_14295333e;
        puVar10[4] = 0;
        local_2b8 = (longlong *)0x0;
        *(undefined4 *)(puVar10 + 8) = (undefined4)local_298;
        *(undefined4 *)((longlong)puVar10 + 0x44) = local_298._4_4_;
        *(undefined4 *)(puVar10 + 9) = (undefined4)uStack_290;
        *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_290._4_4_;
        *(undefined4 *)(puVar10 + 6) = (undefined4)local_2a8;
        *(undefined4 *)((longlong)puVar10 + 0x34) = local_2a8._4_4_;
        *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_2a0;
        *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_2a0._4_4_;
        local_2c8[0].QuadPart = 0;
        if (puVar10 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(lVar2 + 0x1e0);
          *(undefined8 **)(lVar2 + 0x1e0) = puVar10;
          *puVar3 = puVar10;
        }
        (**(code **)(**(longlong **)(lVar2 + 0x208) + 0x10))();
        local_488 = *(undefined8 *)(lVar2 + 0x108);
        local_468 = *(undefined8 *)(lVar2 + 0x138);
        local_460 = *(undefined8 *)(lVar2 + 0x180);
        local_480.s = LVar5.s;
        local_478 = local_3f8;
        local_4a8 = plVar9;
        local_470 = plVar9;
        FUN_145aeb3d6(local_318,&local_238);
        lVar23 = FUN_146b9430c(local_318,&local_488);
        local_498 = (longlong *)0x0;
        puVar10 = local_3f8 + 1;
        if (local_3f8 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        uStack_490 = 1;
        FUN_146b48fbe(&local_498,0);
        *local_498 = (longlong)puVar10;
        local_348 = 0;
        local_338 = &PTR_LAB_149f33c00;
        local_330 = &local_3f8;
        local_358[0] = &LAB_142953394;
        uVar7 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x40))
                          (*(longlong **)(lVar2 + 0x138),local_358);
        FUN_14295956e(lVar23);
        if (((char)local_1b0 == '\x01') &&
           (uVar4 = local_1b0 >> 8, local_1b0 = local_1b0 & 0xff00, (char)uVar4 == '\0')) {
          QueryPerformanceCounter(local_2c8);
          lStack_1b8 = lStack_1b8 + (local_2c8[0].QuadPart - (longlong)local_1c0);
        }
        local_3e0 = FUN_146b6f908(&local_1e8);
        lVar18 = local_4b8;
        plVar9 = *(longlong **)(lVar2 + 0x10);
        if (plVar9 == (longlong *)0x0) {
LAB_142952da4:
          plVar9 = (longlong *)0x0;
        }
        else {
          iVar20 = (int)plVar9[1];
          do {
            if (iVar20 == 0) goto LAB_142952da4;
            LOCK();
            iVar26 = (int)plVar9[1];
            bVar27 = iVar20 == iVar26;
            if (bVar27) {
              *(int *)(plVar9 + 1) = iVar20 + 1;
              iVar26 = iVar20;
            }
            iVar20 = iVar26;
            UNLOCK();
          } while (!bVar27);
        }
        local_2b8 = (longlong *)0x0;
        local_2a8 = &PTR_LAB_149f33c20;
        uStack_290 = &local_3e0;
        local_2c8[0].QuadPart = (LONGLONG)FUN_1429533ee;
        uStack_2a0 = (undefined8 **)lVar2;
        local_298 = &local_3d8;
        FUN_146b6f4ce(lVar2,local_2c8);
        if ((code *)local_2c8[0].QuadPart != (code *)0x0) {
          plVar16 = local_2b8;
          if (local_2b8 == (longlong *)0x0) {
            plVar16 = &local_2a8;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x48))(*(longlong **)(lVar2 + 0x138),uVar7);
        FUN_146b83e06(local_3d8,uStack_3d0 & 0xffffffff);
        uVar24 = uStack_3d0 >> 0x20;
        uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
        if ((int)uVar24 != 0) {
          FUN_146b8406c(&local_3d8);
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar9 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (local_498 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar16 = local_4a0;
        plVar9 = local_4a8;
        if (lVar23 != 0) {
          FUN_146b942e2(lVar23);
          FUN_1400020a8(lVar23);
        }
        if (local_3f8 != (undefined8 *)0x0) {
          (**(code **)*local_3f8)(local_3f8,1);
        }
        if (local_4c0 != (undefined8 *)0x0) {
          (**(code **)*local_4c0)(local_4c0,1);
        }
        if (local_4b0 != (undefined8 *)0x0) {
          (**(code **)*local_4b0)(local_4b0,1);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)*plVar9)(plVar9,1);
        }
        FUN_146b35076(&local_3c8);
        local_1f0 = 0;
        if (local_1f8 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_238);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar16 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        DeleteCriticalSection(&local_1e8);
      }
    } while (*(int *)(lVar2 + 0x1a0) == 0);
  }
  do {
    uVar8 = FUN_146b6f3e2(&local_3d8);
    cVar6 = FUN_146b6f2c4(lVar2 + 0x1d0,uVar8);
  } while (cVar6 != '\0');
  FUN_146b6f41e(&local_3d8,&local_3c8);
  FUN_146b6f244(&local_3c8);
  if (0 < (int)uStack_3d0) {
    local_228[0] = (undefined *****)0x0;
    local_218 = (longlong ****)&PTR_LAB_149f33bc0;
    local_210 = (int)lVar2;
    uStack_20c = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_238 = FUN_142953122;
    uStack_208 = &local_3d8;
    FUN_146b6f4ce(lVar2,&local_238);
    if (local_238 != (code *)0x0) {
      ppppplVar17 = (longlong *****)local_228[0];
      if ((longlong *****)local_228[0] == (longlong *****)0x0) {
        ppppplVar17 = &local_218;
      }
      (*(code *)(*ppppplVar17)[2])();
    }
  }
  FUN_146b83e06(local_3d8,(int)uStack_3d0);
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429530b6 FUN_1429530b6 body=5 status=ok
// SIG undefined FUN_1429530b6(void)

longlong FUN_1429530b6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1429530bc FUN_1429530bc body=12 status=ok
// SIG undefined FUN_1429530bc(void)

void FUN_1429530bc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429530c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429530c8 FUN_1429530c8 body=29 status=ok
// SIG undefined FUN_1429530c8(void)

undefined8 FUN_1429530c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429530e6 FUN_1429530e6 body=8 status=ok
// SIG undefined FUN_1429530e6(void)

void FUN_1429530e6(undefined8 *param_1)

{
  FUN_146b6f9b2(*param_1);
  return;
}



// FUNCTION 1429530f2 FUN_1429530f2 body=5 status=ok
// SIG undefined FUN_1429530f2(void)

longlong FUN_1429530f2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1429530f8 FUN_1429530f8 body=12 status=ok
// SIG undefined FUN_1429530f8(void)

void FUN_1429530f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142953101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142953104 FUN_142953104 body=29 status=ok
// SIG undefined FUN_142953104(void)

undefined8 FUN_142953104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142953122 FUN_142953122 body=467 status=ok
// SIG undefined FUN_142953122(void)

void FUN_142953122(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_188 [40];
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [80];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar3 != 0) {
    lVar2 = *param_1;
    local_160 = (longlong *)(lVar2 + 0x278);
    lVar3 = lVar3 * 0x68;
    lVar5 = *(longlong *)param_1[1] + 0x58;
    do {
      cVar1 = *(char *)(lVar5 + -8);
      local_b8 = 0;
      local_b0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_146b3e088(&local_d8,lVar5 + -0x58);
      local_88 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x20))();
      (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x28))(*(longlong **)(lVar2 + 0x138),&local_158)
      ;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      local_80 = CONCAT44(uStack_154,local_158);
      uStack_78._0_4_ = uStack_150;
      uStack_78._4_4_ = uStack_14c;
      local_70 = 0;
      if (cVar1 == '\0') {
        *(longlong *)(lVar2 + 0x220) = *(longlong *)(lVar2 + 0x220) + 1;
        plVar4 = local_160;
      }
      else {
        *(longlong *)(lVar2 + 0x228) = *(longlong *)(lVar2 + 0x228) + 1;
        plVar4 = (longlong *)(lVar2 + 0x280);
      }
      *plVar4 = *plVar4 + 1;
      FUN_145aeb3d6(local_148,&local_d8);
      uStack_e4 = uStack_78._4_4_;
      local_e8 = (undefined4)uStack_78;
      local_f8 = local_88;
      local_f0 = local_80;
      local_80 = 0;
      uStack_78 = 0;
      uStack_e0 = (undefined4)local_70;
      uStack_dc = local_70._4_4_;
      FUN_146b83f92(lVar5,local_148);
      FUN_146b84034(&local_d8);
      lVar5 = lVar5 + 0x68;
      lVar3 = lVar3 + -0x68;
    } while (lVar3 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142953314 FUN_142953314 body=12 status=ok
// SIG undefined FUN_142953314(void)

void FUN_142953314(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295331d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142953320 FUN_142953320 body=29 status=ok
// SIG undefined FUN_142953320(void)

undefined8 FUN_142953320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295336a FUN_14295336a body=12 status=ok
// SIG undefined FUN_14295336a(void)

void FUN_14295336a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142953373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142953376 FUN_142953376 body=29 status=ok
// SIG undefined FUN_142953376(void)

undefined8 FUN_142953376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429533d0 FUN_1429533d0 body=29 status=ok
// SIG undefined FUN_1429533d0(void)

undefined8 FUN_1429533d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429533ee FUN_1429533ee body=909 status=ok
// SIG undefined FUN_1429533ee(void)

void FUN_1429533ee(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [80];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = *param_1;
  uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x168) + 0x20))();
  local_188 = *(longlong *)(lVar2 + 0x210);
  local_190 = *(longlong *)(lVar2 + 0x230);
  local_198 = *(longlong *)(lVar2 + 0x288);
  local_180 = *(longlong *)(lVar2 + 0x268);
  lVar4 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar4 != 0) {
    local_160 = (longlong *)(lVar2 + 0x210);
    local_168 = (longlong *)(lVar2 + 0x230);
    local_170 = (longlong *)(lVar2 + 0x268);
    local_178 = (longlong *)(lVar2 + 0x288);
    lVar4 = lVar4 * 0x68;
    lVar8 = *(longlong *)param_1[1] + 0x58;
    do {
      cVar1 = *(char *)(lVar8 + -8);
      local_b8 = 0;
      local_b0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_146b3e088(&local_d8,lVar8 + -0x58);
      local_88 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x20))();
      (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x28))(*(longlong **)(lVar2 + 0x138),&local_158)
      ;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      bVar9 = cVar1 != '\0';
      plVar5 = local_160;
      if (bVar9) {
        plVar5 = local_168;
      }
      local_80 = local_158;
      uStack_78 = uStack_150;
      plVar6 = local_170;
      if (bVar9) {
        plVar6 = local_178;
      }
      *plVar5 = *plVar5 + 1;
      *plVar6 = *plVar6 + 1;
      local_70 = uVar3;
      FUN_145aeb3d6(local_148,&local_d8);
      local_e8 = uStack_78;
      local_f8 = local_88;
      local_f0 = local_80;
      local_80 = 0;
      uStack_78 = 0;
      uStack_e0 = local_70;
      FUN_146b83f92(lVar8,local_148);
      FUN_146b84034(&local_d8);
      lVar8 = lVar8 + 0x68;
      lVar4 = lVar4 + -0x68;
    } while (lVar4 != 0);
  }
  fVar10 = (float)uVar3 * 0.0009765625 * 0.0009765625;
  *(float *)(lVar2 + 0x240) = *(float *)(lVar2 + 0x240) + fVar10;
  *(float *)(lVar2 + 0x298) = fVar10 + *(float *)(lVar2 + 0x298);
  dVar11 = *(double *)param_1[2];
  if (*(double *)(lVar2 + 0x248) <= dVar11 && dVar11 != *(double *)(lVar2 + 0x248)) {
    *(double *)(lVar2 + 0x248) = dVar11;
    dVar11 = *(double *)param_1[2];
  }
  if (*(double *)(lVar2 + 0x2a0) <= dVar11 && dVar11 != *(double *)(lVar2 + 0x2a0)) {
    *(double *)(lVar2 + 0x2a0) = dVar11;
    dVar11 = *(double *)param_1[2];
  }
  lVar7 = local_180 + local_198;
  lVar4 = local_188 + local_190;
  auVar14._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
  auVar14._0_8_ = lVar4;
  auVar14._12_4_ = 0x45300000;
  lVar8 = *(longlong *)(lVar2 + 0x210) + *(longlong *)(lVar2 + 0x230);
  auVar12._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
  auVar12._0_8_ = lVar8;
  auVar12._12_4_ = 0x45300000;
  auVar13._8_4_ = (int)((ulonglong)lVar7 >> 0x20);
  auVar13._0_8_ = lVar7;
  auVar13._12_4_ = 0x45300000;
  *(double *)(lVar2 + 0x250) =
       ((((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
        (auVar14._8_8_ - 1.9342813113834067e+25)) * *(double *)(lVar2 + 0x250) + dVar11) /
       (((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
       (auVar12._8_8_ - 1.9342813113834067e+25));
  lVar4 = *(longlong *)(lVar2 + 0x268) + *(longlong *)(lVar2 + 0x288);
  auVar15._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
  auVar15._0_8_ = lVar4;
  auVar15._12_4_ = 0x45300000;
  *(double *)(lVar2 + 0x2a8) =
       ((((double)CONCAT44(0x43300000,(int)lVar7) - 4503599627370496.0) +
        (auVar13._8_8_ - 1.9342813113834067e+25)) * *(double *)(lVar2 + 0x2a8) +
       *(double *)param_1[2]) /
       (((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
       (auVar15._8_8_ - 1.9342813113834067e+25));
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429537a2 FUN_1429537a2 body=12 status=ok
// SIG undefined FUN_1429537a2(void)

void FUN_1429537a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429537ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429537ae FUN_1429537ae body=29 status=ok
// SIG undefined FUN_1429537ae(void)

undefined8 FUN_1429537ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429537cc FUN_1429537cc body=29 status=ok
// SIG undefined FUN_1429537cc(void)

undefined8 FUN_1429537cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429537fe FUN_1429537fe body=93 status=ok
// SIG undefined FUN_1429537fe(void)

void FUN_1429537fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f33cb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14295385c FUN_14295385c body=93 status=ok
// SIG undefined FUN_14295385c(void)

void FUN_14295385c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f33cb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f33c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1429538ba FUN_1429538ba body=126 status=ok
// SIG undefined FUN_1429538ba(void)

void FUN_1429538ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f33cb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f33c40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142953929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142953938 FUN_142953938 body=30 status=ok
// SIG undefined FUN_142953938(void)

void FUN_142953938(longlong param_1,undefined8 param_2)

{
  FUN_142953978(param_1 + 0x18);
  FUN_146b84034(param_2);
  return;
}



// FUNCTION 142953956 FUN_142953956 body=33 status=ok
// SIG undefined FUN_142953956(void)

undefined1 FUN_142953956(longlong param_1,undefined8 param_2)

{
  FUN_142953978(param_1 + 0x18);
  FUN_146b84034(param_2);
  return 1;
}



// FUNCTION 142953978 FUN_142953978 body=141 status=ok
// SIG undefined FUN_142953978(void)

void FUN_142953978(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145aeb3d6(local_90);
  local_40 = *(undefined4 *)(param_2 + 0x50);
  local_38 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  local_30 = *(undefined4 *)(param_2 + 0x60);
  local_2c = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  local_28 = *(undefined8 *)(param_2 + 0x68);
  *(undefined1 *)*param_1 = 1;
  FUN_146b84034(local_90);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142953a06 FUN_142953a06 body=269 status=ok
// SIG undefined FUN_142953a06(void)

void FUN_142953a06(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_148 [40];
  undefined1 local_120 [8];
  int local_118;
  int local_ec;
  longlong local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [80];
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1409e67a4(local_120);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_1409e67a4(local_d0,local_120);
  FUN_146b70254(lVar1,local_80,local_d0,(int)lVar2);
  FUN_14681b5ea(local_120,local_80);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_80);
  if ((local_ec < local_118) && (*(longlong *)(lVar1 + 0x20) != 0)) {
    FUN_1409e67a4(local_80,local_120);
    FUN_146b710fe(lVar1 + 0x20,local_80);
  }
  local_d8 = 0;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_120);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142953b3e FUN_142953b3e body=29 status=ok
// SIG undefined FUN_142953b3e(void)

undefined8 FUN_142953b3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142953b5c FUN_142953b5c body=2671 status=ok
// SIG undefined FUN_142953b5c(void)

void FUN_142953b5c(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  UINT UVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined ***pppuVar16;
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong **pplVar20;
  longlong lVar21;
  LARGE_INTEGER LVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong *local_230;
  ulonglong local_228;
  longlong **local_220;
  longlong *local_218;
  longlong local_210;
  longlong local_208;
  int local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e0 [2];
  undefined1 local_1d8 [16];
  longlong *local_1c8;
  undefined4 local_1c0 [2];
  undefined1 local_1b8 [16];
  code *local_1a8 [2];
  undefined ***local_198;
  undefined **local_188;
  longlong local_180;
  code *local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  longlong local_140;
  LARGE_INTEGER local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  longlong local_100;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER LStack_e0;
  undefined ***local_d8;
  undefined **local_c8;
  longlong local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0xb1) & 1) == 0) {
    plVar1 = (longlong *)(lVar3 + 0x160);
    local_210 = lVar3 + 0x1b0;
    do {
      if ((*(byte *)(lVar3 + 0xb2) & 1) == 0) {
LAB_142953c79:
        (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x10))(*(longlong **)(lVar3 + 0x40),0x3c23d70a)
        ;
      }
      else {
        local_1f8 = 0;
        uStack_1f0 = 0;
        while (lVar21 = **(longlong **)(lVar3 + 0x308), lVar21 != 0) {
          local_1f8 = *(undefined8 *)(lVar21 + 8);
          uStack_1f0 = *(undefined8 *)(lVar21 + 0x10);
          lVar14 = *(longlong *)(lVar3 + 0x308);
          *(longlong *)(lVar3 + 0x308) = lVar21;
          *(undefined8 *)(lVar21 + 8) = 0;
          *(undefined8 *)(lVar21 + 0x10) = 0;
          if (lVar14 != 0) {
            FUN_1400020a8();
          }
          FUN_146b71246(lVar3 + 0x250,&local_1f8);
        }
        local_158 = (undefined ***)0x0;
        local_148 = &PTR_LAB_149f33d60;
        local_168[0] = FUN_142954600;
        iVar10 = *(int *)(lVar3 + 0x20);
        local_140 = lVar3;
        iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x50) + 0x20))();
        if (iVar10 <= iVar8) {
          iVar10 = iVar8;
        }
        (**(code **)(**(longlong **)(lVar3 + 0x58) + 0x28))
                  (*(longlong **)(lVar3 + 0x58),&local_208,iVar10,local_168);
        local_198 = (undefined ***)0x0;
        local_188 = &PTR_LAB_149f33d80;
        local_1a8[0] = FUN_142954680;
        local_180 = lVar3;
        FUN_146b712e6(&local_208,local_1a8);
        iVar10 = *(int *)(lVar3 + 0x24);
        if (local_200 < *(int *)(lVar3 + 0x24)) {
          iVar10 = local_200;
        }
        FUN_146b71430(&local_208,iVar10,0);
        (**(code **)(**(longlong **)(lVar3 + 0x78) + 8))(*(longlong **)(lVar3 + 0x78),&local_208);
        if (local_200 < 1) {
LAB_14295455e:
          if (local_1a8[0] != (code *)0x0) {
            pppuVar16 = local_198;
            if (local_198 == (undefined ***)0x0) {
              pppuVar16 = &local_188;
            }
            (*(code *)(*pppuVar16)[2])();
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          if (local_168[0] != (code *)0x0) {
            pppuVar16 = local_158;
            if (local_158 == (undefined ***)0x0) {
              pppuVar16 = &local_148;
            }
            (*(code *)(*pppuVar16)[2])();
          }
          goto LAB_142953c79;
        }
        lVar21 = 0;
        do {
          if ((*(byte *)(lVar3 + 0xb1) & 1) != 0) break;
          puVar26 = (undefined8 *)(lVar21 * 0x10 + local_208);
          uVar9 = FUN_1447addd0(puVar26,0x10);
          iVar10 = FUN_146b84130(plVar1,uVar9,puVar26);
          if (iVar10 == -1) {
LAB_142953dde:
            puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *puVar13 = 0;
            uVar7 = puVar26[1];
            puVar13[1] = *puVar26;
            puVar13[2] = uVar7;
            if (puVar13 != (undefined8 *)0x0) {
              puVar26 = *(undefined8 **)(lVar3 + 0x2a0);
              *(undefined8 **)(lVar3 + 0x2a0) = puVar13;
              *puVar26 = puVar13;
            }
          }
          else {
            (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x10))
                      (*(longlong **)(lVar3 + 0x78),puVar26);
            uVar9 = FUN_1447addd0(puVar26,0x10);
            iVar10 = FUN_146b84130(plVar1,uVar9,puVar26);
            if (iVar10 == -1) {
              lVar14 = 0;
            }
            else {
              lVar14 = (longlong)iVar10 * 0x28 + *plVar1;
            }
            plVar24 = (*(longlong ***)(lVar14 + 0x18))[4];
            bVar17 = (*(byte *)((longlong)plVar24 + 0x29) & 2) >> 1;
            uVar19 = *(ulonglong *)(lVar14 + 0x10);
            bVar18 = bVar17 ^ 1;
            if ((*(byte *)((longlong)plVar24 + 0x29) & 2) != 0) {
              local_228 = CONCAT71(local_228._1_7_,bVar17) ^ 1;
              local_240 = plVar24;
              local_238 = *(ulonglong *)(lVar14 + 0x10);
              local_220 = *(longlong ***)(lVar14 + 0x18);
              QueryPerformanceCounter(&local_e8);
              dVar5 = (((double)CONCAT44(0x43300000,local_e8.s.LowPart) - 4503599627370496.0) +
                      ((double)CONCAT44(0x45300000,local_e8.s.HighPart) - 1.9342813113834067e+25)) *
                      DAT_14c83f418;
              (**(code **)(*local_240 + 0x18))();
              uVar19 = 0;
              uVar15 = LStack_e0._0_4_ - 1;
              if (LStack_e0._0_4_ == 0) {
                uVar15 = 0;
              }
              if (0 < (int)uVar15) {
                LVar22.QuadPart = (LONGLONG)&DAT_149dfb77a;
                if (LStack_e0._0_4_ != 0) {
                  LVar22 = local_e8;
                }
                local_248 = (longlong *)(ulonglong)uVar15;
                lVar14 = 0;
                uVar19 = 0;
                do {
                  uVar2 = *(ushort *)(LVar22.QuadPart + lVar14 * 2);
                  uVar11 = ((uint)uVar2 + (uint)(0x19 < uVar2 - 0x61) * 0x20) - 0x20;
                  uVar25 = (uint)(uVar19 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar19 ^ uVar11) & 0xff) * 4);
                  uVar19 = (ulonglong)
                           (uVar25 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar25 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
                  lVar14 = lVar14 + 1;
                } while (uVar15 != (uint)lVar14);
              }
              local_248 = (longlong *)FUN_146b8489c(local_210,uVar19,&local_e8);
              if ((code *)local_e8.QuadPart != (code *)0x0) {
                FUN_1400020a8();
              }
              if ((int)*local_248 == 0) {
                local_230 = *(longlong **)(lVar3 + 0x68);
                local_1c0[0] = 0;
                (**(code **)(*local_240 + 0x18))(local_240,local_1b8);
                (**(code **)(*local_230 + 0x10))(local_230,local_1c0);
                UVar12 = SetErrorMode(1);
                local_230 = (longlong *)CONCAT44(local_230._4_4_,UVar12);
                local_d8 = (undefined ***)0x0;
                local_c8 = &PTR_LAB_149f33dc0;
                local_e8.QuadPart = (LONGLONG)FUN_142954750;
                local_118 = (undefined ***)0x0;
                local_108 = &PTR_LAB_149f33da0;
                local_128[0].QuadPart = (LONGLONG)&LAB_142954700;
                local_100 = lVar3;
                local_c0 = lVar3;
                FUN_146b714a4(lVar3,local_128,&local_e8);
                if ((longlong *)local_128[0].QuadPart != (longlong *)0x0) {
                  pppuVar16 = local_118;
                  if (local_118 == (undefined ***)0x0) {
                    pppuVar16 = &local_108;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                if ((code *)local_e8.QuadPart != (code *)0x0) {
                  pppuVar16 = local_d8;
                  if (local_d8 == (undefined ***)0x0) {
                    pppuVar16 = &local_c8;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                SetErrorMode((UINT)local_230);
              }
              else if (dVar5 - (double)local_248[1] < (double)*(float *)(lVar3 + 0x28)) {
                uVar19 = local_238;
                plVar24 = local_240;
                bVar18 = (byte)local_228;
                goto LAB_142953e87;
              }
              local_248[1] = (longlong)dVar5;
              UVar12 = SetErrorMode(1);
              local_230 = (longlong *)CONCAT44(local_230._4_4_,UVar12);
              local_218 = *(longlong **)(lVar3 + 0x48);
              (**(code **)(*local_240 + 0x18))(local_240,&local_e8);
              LVar22.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if (LStack_e0._0_4_ != 0) {
                LVar22 = local_e8;
              }
              (**(code **)(*local_218 + 0x48))(local_218,&local_1c8,LVar22.QuadPart,0);
              if ((code *)local_e8.QuadPart != (code *)0x0) {
                FUN_1400020a8();
              }
              plVar24 = local_1c8;
              if (local_1c8 == (longlong *)0x0) {
                *(int *)local_248 = (int)*local_248 + 1;
                local_248 = local_240;
              }
              else {
                pplVar20 = local_220 + 4;
                plVar4 = *pplVar20;
                plVar23 = plVar4;
                if (pplVar20 != &local_1c8) {
                  *pplVar20 = local_1c8;
                  local_1c8 = (longlong *)0x0;
                  plVar23 = plVar24;
                  local_220 = pplVar20;
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)*plVar4)(plVar4,1);
                    plVar23 = *local_220;
                  }
                }
                *(int *)local_248 = 0;
                local_240 = *(longlong **)(lVar3 + 0x68);
                local_1e0[0] = 1;
                local_248 = plVar23;
                (**(code **)(*plVar23 + 0x18))(plVar23,local_1d8);
                (**(code **)(*local_240 + 0x10))(local_240,local_1e0);
                local_d8 = (undefined ***)0x0;
                local_c8 = &PTR_LAB_149f33e00;
                local_e8.QuadPart = (LONGLONG)FUN_142954912;
                local_118 = (undefined ***)0x0;
                local_108 = &PTR_LAB_149f33de0;
                local_128[0].QuadPart = (LONGLONG)&LAB_1429548c2;
                local_100 = lVar3;
                local_c0 = lVar3;
                FUN_146b714a4(lVar3,local_128,&local_e8);
                if ((longlong *)local_128[0].QuadPart != (longlong *)0x0) {
                  pppuVar16 = local_118;
                  if (local_118 == (undefined ***)0x0) {
                    pppuVar16 = &local_108;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                if ((code *)local_e8.QuadPart != (code *)0x0) {
                  pppuVar16 = local_d8;
                  if (local_d8 == (undefined ***)0x0) {
                    pppuVar16 = &local_c8;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                local_228 = CONCAT71(local_228._1_7_,1);
              }
              SetErrorMode((UINT)local_230);
              if (local_1c8 != (longlong *)0x0) {
                (**(code **)*local_1c8)(local_1c8,1);
              }
              uVar19 = local_238;
              plVar24 = local_248;
              bVar18 = (byte)local_228;
            }
LAB_142953e87:
            if (bVar18 == 0) goto LAB_142953dde;
            local_248 = plVar24;
            local_238 = uVar19;
            lVar14 = (**(code **)(*plVar24 + 0x30))(plVar24);
            uVar19 = (ulonglong)*(uint *)(local_238 + 0x18) + *(longlong *)(local_238 + 0x10);
            if (lVar14 < (longlong)uVar19) {
              local_e8.QuadPart = 0;
              LStack_e0.QuadPart = 0;
              local_d8 = (undefined ***)0x0;
              (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x18))
                        (*(longlong **)(lVar3 + 0x78),puVar26,3,&local_e8);
              goto LAB_142953dde;
            }
            local_e8.QuadPart = 0;
            LStack_e0 = (LARGE_INTEGER)0x0;
            local_d8 = (undefined ***)0x0;
            local_228 = uVar19;
            QueryPerformanceCounter(&local_e8);
            lVar14 = (**(code **)(*local_248 + 0x28))();
            if (lVar14 != *(longlong *)(local_238 + 0x10)) {
              (**(code **)(*local_248 + 0x1a0))();
            }
            local_240 = (longlong *)
                        (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x18))
                                  (*(longlong **)(lVar3 + 0x60),local_248,&local_1c8);
            QueryPerformanceCounter(local_128);
            LStack_e0 = local_128[0];
            uVar19 = (**(code **)(*local_248 + 0x28))();
            local_d8 = (undefined ***)(uVar19 - *(longlong *)(local_238 + 0x10));
            if ((char)local_1c8 != '\0') {
              cVar6 = ((char)local_1c8 != '\x06') * '\x03' + '\x01';
              if ((char)local_1c8 == '\t') {
                cVar6 = '\x02';
              }
              (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x18))
                        (*(longlong **)(lVar3 + 0x78),puVar26,cVar6,&local_e8);
LAB_142954008:
              if (local_240 != (longlong *)0x0) {
                (**(code **)*local_240)(local_240,1);
              }
              goto LAB_142953dde;
            }
            local_238 = uVar19;
            (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x18))
                      (*(longlong **)(lVar3 + 0x78),puVar26,0,&local_e8);
            if ((local_240 == (longlong *)0x0) || (local_238 != local_228)) goto LAB_142954008;
            FUN_1457adc9c(lVar3 + 0x250,local_128,puVar26,0);
            local_128[0].QuadPart = (LONGLONG)local_240;
            (**(code **)(**(longlong **)(lVar3 + 0x50) + 8))
                      (*(longlong **)(lVar3 + 0x50),puVar26,local_128);
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < local_200);
        if (local_200 < 1) goto LAB_14295455e;
        bVar18 = *(byte *)(lVar3 + 0xb1);
        if (local_1a8[0] != (code *)0x0) {
          pppuVar16 = local_198;
          if (local_198 == (undefined ***)0x0) {
            pppuVar16 = &local_188;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        if (local_168[0] != (code *)0x0) {
          pppuVar16 = local_158;
          if (local_158 == (undefined ***)0x0) {
            pppuVar16 = &local_148;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        if ((bVar18 & 1) != 0) goto LAB_142953c79;
      }
    } while ((*(byte *)(lVar3 + 0xb1) & 1) == 0);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x80) = 0;
  FUN_140b576f0();
  if ((local_a0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429545e2 FUN_1429545e2 body=29 status=ok
// SIG undefined FUN_1429545e2(void)

undefined8 FUN_1429545e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954600 FUN_142954600 body=56 status=ok
// SIG undefined FUN_142954600(void)

bool FUN_142954600(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(lVar1 + 0x200,uVar2,param_2);
  return iVar3 != -1;
}



// FUNCTION 142954656 FUN_142954656 body=12 status=ok
// SIG undefined FUN_142954656(void)

void FUN_142954656(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295465f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954662 FUN_142954662 body=29 status=ok
// SIG undefined FUN_142954662(void)

undefined8 FUN_142954662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954680 FUN_142954680 body=56 status=ok
// SIG undefined FUN_142954680(void)

bool FUN_142954680(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(lVar1 + 0x250,uVar2,param_2);
  return iVar3 != -1;
}



// FUNCTION 1429546d6 FUN_1429546d6 body=12 status=ok
// SIG undefined FUN_1429546d6(void)

void FUN_1429546d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429546df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429546e2 FUN_1429546e2 body=29 status=ok
// SIG undefined FUN_1429546e2(void)

undefined8 FUN_1429546e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954726 FUN_142954726 body=12 status=ok
// SIG undefined FUN_142954726(void)

void FUN_142954726(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295472f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954732 FUN_142954732 body=29 status=ok
// SIG undefined FUN_142954732(void)

undefined8 FUN_142954732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954750 FUN_142954750 body=297 status=ok
// SIG undefined FUN_142954750(void)

void FUN_142954750(longlong *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined4 local_40 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 == '\0') {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0x68);
    uVar8 = 0;
    local_40[0] = 0;
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar5 = local_48 + -1;
    if (local_48 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      puVar3 = local_50;
      if (local_48 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      uVar8 = 0;
      do {
        uVar7 = ((uint)(0x19 < (ushort)puVar3[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar6]) -
                0x20;
        uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar7) & 0xff) * 4);
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
        lVar6 = lVar6 + 1;
      } while (iVar5 != (int)lVar6);
    }
    puVar4 = (undefined4 *)FUN_146b8489c(lVar1 + 0x1b0,uVar8,&local_50);
    *puVar4 = 1;
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142954898 FUN_142954898 body=12 status=ok
// SIG undefined FUN_142954898(void)

void FUN_142954898(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429548a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429548a4 FUN_1429548a4 body=29 status=ok
// SIG undefined FUN_1429548a4(void)

undefined8 FUN_1429548a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429548e8 FUN_1429548e8 body=12 status=ok
// SIG undefined FUN_1429548e8(void)

void FUN_1429548e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429548f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429548f4 FUN_1429548f4 body=29 status=ok
// SIG undefined FUN_1429548f4(void)

undefined8 FUN_1429548f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954912 FUN_142954912 body=295 status=ok
// SIG undefined FUN_142954912(void)

void FUN_142954912(longlong *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == '\x01') {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0x68);
    local_38[0] = 1;
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_38);
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar6 = 0;
    iVar5 = local_40 + -1;
    if (local_40 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      puVar3 = local_48;
      if (local_40 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar8 = 0;
      uVar6 = 0;
      do {
        uVar7 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar5 != (int)lVar8);
    }
    puVar4 = (undefined4 *)FUN_146b8489c(lVar1 + 0x1b0,uVar6,&local_48);
    *puVar4 = 0;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142954a58 FUN_142954a58 body=12 status=ok
// SIG undefined FUN_142954a58(void)

void FUN_142954a58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142954a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954a64 FUN_142954a64 body=29 status=ok
// SIG undefined FUN_142954a64(void)

undefined8 FUN_142954a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954a82 FUN_142954a82 body=74 status=ok
// SIG undefined FUN_142954a82(void)

undefined4 FUN_142954a82(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140133992(plVar1,uVar2,param_2);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x1c + *plVar1;
  }
  return *(undefined4 *)(lVar4 + 0x10);
}



// FUNCTION 142954acc FUN_142954acc body=74 status=ok
// SIG undefined FUN_142954acc(void)

undefined4 FUN_142954acc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140133992(plVar1,uVar2,param_2);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x1c + *plVar1;
  }
  return *(undefined4 *)(lVar4 + 0x10);
}



// FUNCTION 142954b36 FUN_142954b36 body=29 status=ok
// SIG undefined FUN_142954b36(void)

undefined8 FUN_142954b36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954b54 FUN_142954b54 body=51 status=ok
// SIG undefined FUN_142954b54(void)

bool FUN_142954b54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(uVar1,uVar2,param_2);
  return iVar3 != -1;
}



// FUNCTION 142954ba6 FUN_142954ba6 body=12 status=ok
// SIG undefined FUN_142954ba6(void)

void FUN_142954ba6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142954baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954bb2 FUN_142954bb2 body=29 status=ok
// SIG undefined FUN_142954bb2(void)

undefined8 FUN_142954bb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954bd0 FUN_142954bd0 body=167 status=ok
// SIG undefined FUN_142954bd0(void)

bool FUN_142954bd0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  plVar2 = (longlong *)*param_1;
  uVar4 = FUN_1447addd0(param_2,0x10);
  iVar5 = FUN_146b85e12(plVar2,uVar4,param_2);
  if (iVar5 != -1) {
    lVar1 = *plVar2 + (longlong)iVar5 * 0x48;
    pcVar6 = (char *)(lVar1 + 0x10);
    if ((pcVar6 != (char *)0x0 && lVar1 != 0) && (*pcVar6 != '\0')) {
      return true;
    }
  }
  uVar3 = param_1[1];
  uVar4 = FUN_1447addd0(param_2,0x10);
  iVar5 = FUN_140f5cb3a(uVar3,uVar4,param_2);
  bVar7 = true;
  if (iVar5 == -1) {
    uVar3 = param_1[2];
    uVar4 = FUN_1447addd0(param_2,0x10);
    iVar5 = FUN_140f5cb3a(uVar3,uVar4,param_2);
    bVar7 = iVar5 != -1;
  }
  return bVar7;
}



// FUNCTION 142954c9e FUN_142954c9e body=12 status=ok
// SIG undefined FUN_142954c9e(void)

void FUN_142954c9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142954ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954caa FUN_142954caa body=29 status=ok
// SIG undefined FUN_142954caa(void)

undefined8 FUN_142954caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954cc8 FUN_142954cc8 body=95 status=ok
// SIG undefined FUN_142954cc8(void)

bool FUN_142954cc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(uVar1,uVar2,param_2);
  if (iVar3 == -1) {
    bVar4 = false;
  }
  else {
    uVar1 = param_1[1];
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_140f5cb3a(uVar1,uVar2,param_2);
    bVar4 = iVar3 == -1;
  }
  return bVar4;
}



// FUNCTION 142954d46 FUN_142954d46 body=12 status=ok
// SIG undefined FUN_142954d46(void)

void FUN_142954d46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142954d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142954d52 FUN_142954d52 body=29 status=ok
// SIG undefined FUN_142954d52(void)

undefined8 FUN_142954d52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142954d70 FUN_142954d70 body=86 status=ok
// SIG undefined FUN_142954d70(void)

undefined8 FUN_142954d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar5 = 0;
  uVar4 = param_1[3];
  puVar5[1] = param_1[2];
  puVar5[2] = uVar4;
  puVar5[3] = uVar6;
  puVar5[4] = uVar3;
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar5;
    UNLOCK();
    LOCK();
    uVar6 = *puVar1;
    *puVar1 = puVar5;
    UNLOCK();
  }
  return uVar6;
}



// FUNCTION 142954dc6 FUN_142954dc6 body=87 status=ok
// SIG undefined FUN_142954dc6(void)

undefined8 * FUN_142954dc6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_149f34030;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[4] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 142954e24 FUN_142954e24 body=29 status=ok
// SIG undefined FUN_142954e24(void)

void FUN_142954e24(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142954e42 FUN_142954e42 body=83 status=ok
// SIG undefined FUN_142954e42(void)

undefined8 * FUN_142954e42(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f34030;
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



// FUNCTION 142954e95 FUN_142954e95 body=160 status=ok
// SIG undefined FUN_142954e95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142954e95(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 5;
  FUN_14282b410(L"/Script/BuildPatchServices",&PTR_FUN_149f30e60,1,&PTR_FUN_149f30d90);
  local_18 = "UnixSocketPath";
  local_10 = 0xe;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  _DAT_14c991e08 = (ulonglong)uVar1;
  DAT_14c991e18 = 0;
  DAT_14c991e28 = 0;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142954f38 FUN_142954f38 body=544 status=ok
// SIG undefined FUN_142954f38(void)

undefined4 FUN_142954f38(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_58 [40];
  double local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar5 = (undefined4 *)(param_1 + 0x3c);
    goto LAB_142954fea;
  }
  puVar5 = (undefined4 *)(param_1 + 0x4c);
  uVar6 = *(uint *)(param_1 + 0x4c);
  if (uVar6 - param_2 < *(uint *)(param_1 + 0x70)) {
    uVar3 = *(uint *)(param_1 + 0x10);
    if (param_2 < uVar3) {
      bVar2 = true;
      if (1 < param_3 - 3U) {
        uVar7 = *(uint *)(param_1 + 0x54);
        bVar2 = true;
        if ((uVar7 != 0) && (uVar7 % *(uint *)(param_1 + 0x40) == 0)) goto LAB_142954f9e;
        goto LAB_142955010;
      }
LAB_142954fc2:
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
LAB_142954f9e:
      uVar7 = *(uint *)(param_1 + 0x14);
      uVar6 = uVar6 - (uVar7 < uVar6);
      if (uVar3 <= uVar6) {
        uVar6 = uVar3;
      }
      if (uVar6 < uVar7) {
        uVar6 = uVar7;
      }
      *(uint *)(param_1 + 0x4c) = uVar6;
      if (param_3 - 3U < 2) {
        bVar2 = false;
        goto LAB_142954fc2;
      }
      uVar7 = *(uint *)(param_1 + 0x54);
      bVar2 = false;
LAB_142955010:
      *(uint *)(param_1 + 0x54) = uVar7 + 1;
    }
    plVar1 = *(longlong **)(param_1 + 8);
    if (bVar2 && plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1,&local_30,*(undefined4 *)(param_1 + 0x1c));
      if (local_28 < *(uint *)(param_1 + 0x1c)) goto LAB_142954fea;
      if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)) {
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
        goto LAB_142954fea;
      }
      dVar8 = *(double *)(param_1 + 0x58);
      if (local_30 <= *(double *)(param_1 + 0x28) * dVar8) {
        if (*(double *)(param_1 + 0x60) <= local_30) goto LAB_14295514c;
        if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x48)) {
          uVar6 = *(uint *)(param_1 + 0x14);
          uVar3 = *(uint *)(param_1 + 0x4c) - (uint)(uVar6 < *(uint *)(param_1 + 0x4c));
          if (*(uint *)(param_1 + 0x10) <= uVar3) {
            uVar3 = *(uint *)(param_1 + 0x10);
          }
          if (uVar3 < uVar6) {
            uVar3 = uVar6;
          }
          *(uint *)(param_1 + 0x4c) = uVar3;
          if (local_30 <= dVar8) goto LAB_142955126;
          goto LAB_142955115;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        iVar4 = *(uint *)(param_1 + 0x48) + 1;
      }
      else {
        if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) + 1;
          *(undefined4 *)(param_1 + 0x48) = 0;
          goto LAB_142954fea;
        }
        uVar6 = *(int *)(param_1 + 0x4c) + 1;
        if (*(uint *)(param_1 + 0x10) <= uVar6) {
          uVar6 = *(uint *)(param_1 + 0x10);
        }
        if (uVar6 < *(uint *)(param_1 + 0x14)) {
          uVar6 = *(uint *)(param_1 + 0x14);
        }
        *(uint *)(param_1 + 0x4c) = uVar6;
        if (dVar8 < local_30) {
LAB_142955115:
          *(double *)(param_1 + 0x58) = local_30;
          *(double *)(param_1 + 0x60) = local_30 * *(double *)(param_1 + 0x30);
        }
        else if (local_30 < *(double *)(param_1 + 0x60)) {
LAB_142955126:
          *(double *)(param_1 + 0x60) = local_30;
          dVar8 = local_30 / *(double *)(param_1 + 0x30);
          *(double *)(param_1 + 0x58) = dVar8;
          if (dVar8 <= local_30) {
            *(double *)(param_1 + 0x60) = dVar8 * 0.6;
          }
        }
LAB_14295514c:
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x48) = iVar4;
      goto LAB_142954fea;
    }
    if (!bVar2) goto LAB_142954fea;
    uVar7 = uVar6 + 1;
    if (uVar3 <= uVar6 + 1) {
      uVar7 = uVar3;
    }
    if (uVar7 < *(uint *)(param_1 + 0x14)) {
      uVar7 = *(uint *)(param_1 + 0x14);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar7 = uVar6 - (uVar3 < uVar6);
    if (*(uint *)(param_1 + 0x10) <= uVar7) {
      uVar7 = *(uint *)(param_1 + 0x10);
    }
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
  }
  *(uint *)(param_1 + 0x4c) = uVar7;
LAB_142954fea:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar5;
}



// FUNCTION 14295516a FUN_14295516a body=1287 status=ok
// SIG undefined FUN_14295516a(void)

undefined8 *
FUN_14295516a(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int *piVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *lpTlsValue;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_1;
  plStack_80 = (longlong *)param_1[1];
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_80 + 0xc) = *(int *)((longlong)plStack_80 + 0xc) + 1;
    UNLOCK();
  }
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_4 + 1);
  lVar11 = (longlong)local_68;
  pvVar2 = (void *)*param_4;
  local_90 = param_1;
  local_78 = param_3;
  if (lVar11 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar2,lVar11 * 2);
  }
  local_60 = param_5;
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar6 = (undefined8 *)lpTlsValue[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*lpTlsValue;
    if (puVar6 == (undefined8 *)0x0) {
      uVar10 = (uint)DAT_14c896180;
      uVar3 = DAT_14c896180;
      while (DAT_14c896180 = uVar3, local_58 = uVar3, (uVar3 & 0x3ffffff) != 0) {
        local_98 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (local_98 >> 0x1a < uVar3 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar8 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
        uVar12 = (ulonglong)((uint)uVar3 & 0x3fff);
        local_98 = local_98 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + 0x10 + uVar12 * 0x18);
        LOCK();
        bVar13 = local_58 == DAT_14c896180;
        uVar3 = local_98;
        if (!bVar13) {
          uVar3 = DAT_14c896180;
        }
        DAT_14c896180 = uVar3;
        UNLOCK();
        if (bVar13) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + uVar12 * 0x18 + 0x10) = 0;
          puVar6 = *(undefined8 **)
                    (*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + 8 +
                    (ulonglong)(uVar10 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar10 & 0x3ffffff);
          lpTlsValue[1] = puVar6;
          if (puVar6 != (undefined8 *)0x0) goto LAB_14295537b;
          goto LAB_142955628;
        }
        uVar10 = (uint)DAT_14c896180;
        uVar3 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_142955628:
      puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar6;
      iVar4 = 0xff;
      puVar7 = puVar6;
      do {
        puVar5 = puVar7 + 0x20;
        *puVar7 = puVar5;
        iVar4 = iVar4 + -1;
        puVar7 = puVar5;
      } while (iVar4 != 0);
    }
    else {
      lpTlsValue[1] = puVar6;
      puVar5 = lpTlsValue;
    }
    *puVar5 = 0;
LAB_14295537b:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar4 = 0xff;
  }
  else {
    iVar4 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar6;
  *(int *)(lpTlsValue + 2) = iVar4;
  *puVar6 = UE::Tasks::Private::FTaskBase::vftable;
  puVar6[1] = &DAT_100000002;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  puVar6[6] = 0;
  puVar6[7] = 0x100000000;
  *(undefined1 *)(puVar6 + 8) = 1;
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0xe800000000000020;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0x100000000;
  *(undefined2 *)(puVar6 + 0x14) = 0;
  LOCK();
  bVar13 = *(char *)(puVar6 + 8) == '\x01';
  if (bVar13) {
    *(char *)(puVar6 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_14008cdb0(puVar6 + 8);
  }
  *puVar6 = &PTR_FUN_149f35cf8;
  if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
  }
  pvVar2 = local_70;
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar6[9] = puVar6;
  puVar6[10] = puVar6;
  lVar11 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x30);
  }
  puVar6[0xf] = uVar9;
  puVar6[0x10] = 0xd00000527cd06600;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6[0x15] = local_90;
  puVar6[0x16] = local_88;
  puVar6[0x17] = plStack_80;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  *(undefined4 *)(puVar6 + 0x18) = local_78;
  puVar6[0x19] = 0;
  lVar11 = (longlong)local_68;
  *(int *)(puVar6 + 0x1a) = local_68;
  if (lVar11 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 0x19,local_68,0);
    memcpy((void *)puVar6[0x19],pvVar2,lVar11 * 2);
  }
  puVar6[0x1b] = local_60;
  *puVar6 = &PTR_FUN_149f35ce8;
  local_58 = CONCAT71(local_58._1_7_,1);
  FUN_1447439e4(puVar6);
  *param_2 = puVar6;
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_80 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142955672 FUN_142955672 body=1350 status=ok
// SIG undefined FUN_142955672(void)

undefined8 *
FUN_142955672(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
             longlong *param_9)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_158 [40];
  undefined8 *local_130;
  longlong *local_128;
  longlong local_120;
  undefined8 *local_118;
  uint *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = &PTR_FUN_149f34260;
  param_1[1] = &PTR_FUN_149f342a0;
  FUN_1409e67a4(param_1 + 2);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  param_1[0xf] = param_5;
  param_1[0x10] = param_6;
  param_1[0x11] = param_7;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  uVar14 = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  param_1[0x51] = puVar5;
  param_1[0x50] = puVar5;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_130 = param_1;
  (**(code **)(*param_9 + 0x18))(param_9);
  local_110 = (uint *)(param_8 + 2);
  iVar2 = (int)param_8[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar6 = (uint *)param_8[4];
    if ((uint *)param_8[4] == (uint *)0x0) {
      puVar6 = local_110;
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_142955943;
        iVar10 = iVar10 + 0x20;
        uVar15 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    local_118 = local_130 + 0x30;
    local_128 = local_130 + 0x3a;
    uVar15 = 0xffffffff;
    local_120 = param_2;
    do {
      lVar11 = *param_8 + (longlong)iVar4 * 0x28;
      iVar4 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x230))
                        (*(longlong **)(lVar11 + 0x10),lVar11,&local_b8,local_118);
      if (0 < iVar4) {
        iVar4 = *(int *)(local_130 + 0x3b);
        *(uint *)(local_130 + 0x3b) = iVar4 + 1U;
        if (*(uint *)((longlong)local_130 + 0x1dc) < iVar4 + 1U) {
          FUN_146b96dca(local_128,iVar4);
        }
        FUN_146b57a56((longlong)iVar4 * 0x20 + *local_128,lVar11);
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x1b8))
                  (*(longlong **)(lVar11 + 0x10),&local_108);
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_108);
        param_2 = local_120;
      }
      uVar15 = uVar15 & ~(uint)uVar13;
      puVar6 = (uint *)param_8[4];
      if ((uint *)param_8[4] == (uint *)0x0) {
        puVar6 = local_110;
      }
      iVar3 = (int)param_8[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar9 = puVar6[lVar11] & uVar15;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_142955aa5;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar15 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_142955aa5:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_142955943:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_b8);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_2);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_130;
}



// FUNCTION 142955bba FUN_142955bba body=454 status=ok
// SIG undefined FUN_142955bba(void)

longlong FUN_142955bba(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  if (lVar3 == 0) {
    uVar1 = FUN_1447addd0(param_2,0x10);
    iVar2 = FUN_140f5cb3a(param_1 + 0x180,uVar1,param_2);
    if (iVar2 == -1) {
      lVar3 = 0;
    }
    else {
      local_a8 = 0;
      uStack_a0 = 0;
      lVar3 = **(longlong **)(param_1 + 0x288);
      if (lVar3 != 0) {
        do {
          local_a8 = *(undefined8 *)(lVar3 + 8);
          uStack_a0 = *(undefined8 *)(lVar3 + 0x10);
          lVar4 = *(longlong *)(param_1 + 0x288);
          *(longlong *)(param_1 + 0x288) = lVar3;
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x10) = 0;
          if (lVar4 != 0) {
            FUN_1400020a8();
          }
          FUN_146b71246(param_1 + 0x1e0,&local_a8);
          lVar3 = **(longlong **)(param_1 + 0x288);
        } while (lVar3 != 0);
      }
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_140c608a8(&local_b8,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),&local_b8);
      if (0 < (int)uStack_b0) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          if (*(int *)(param_1 + 0x94) != 0) break;
          FUN_142955d82(param_1,local_b8 + lVar3);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x10;
        } while (lVar4 < (int)uStack_b0);
      }
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))
                        (*(longlong **)(param_1 + 0x70),param_2);
      if ((*(longlong *)(param_1 + 0xa0) != 0) &&
         (*(int *)(param_1 + 0x114) < *(int *)(param_1 + 0xe8))) {
        FUN_1409e67a4(local_90,param_1 + 0xe0);
        FUN_146b710fe(param_1 + 0xa0,local_90);
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142955d82 FUN_142955d82 body=2310 status=ok
// SIG undefined FUN_142955d82(void)

void FUN_142955d82(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  void *_Src;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_208 [39];
  byte local_1e1;
  longlong local_1e0;
  uint local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong local_168;
  int local_160;
  char local_151;
  ulonglong local_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined1 local_12c [4];
  undefined1 local_128 [16];
  int local_118;
  byte local_100;
  longlong *local_d0;
  longlong local_b0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x1d0);
    lVar15 = (longlong)*(int *)(param_1 + 0x1d8) << 5;
    do {
      cVar3 = (**(code **)(*(longlong *)puVar13[2] + 0x208))
                        ((longlong *)puVar13[2],param_2,local_128);
      if (cVar3 != '\0') {
        plVar9 = (longlong *)puVar13[2];
        if (plVar9 != (longlong *)0x0 && puVar13 != (undefined8 *)0x0) {
          local_148 = (undefined1  [16])0x0;
          local_138 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                    (*(longlong **)(param_1 + 0x88),param_2);
          local_150 = 0;
          local_78 = (undefined1  [16])0x0;
          local_68 = 0;
          uVar5 = (**(code **)(*plVar9 + 0x210))(plVar9,param_2);
          uVar11 = (ulonglong)uVar5;
          bVar4 = (**(code **)(*plVar9 + 0x208))(plVar9,param_2,&local_150);
          QueryPerformanceCounter((LARGE_INTEGER *)local_148);
          bVar4 = bVar4 | (char)uVar5 * '\x02';
          local_151 = bVar4 == 0;
          if ((bool)local_151) goto LAB_142955ea5;
          (**(code **)(*plVar9 + 0x248))(plVar9,&local_168,param_2);
          local_1c8 = (**(code **)(*plVar9 + 0x218))(plVar9);
          if (local_1c8 == 0) {
            local_151 = '\x02';
            goto LAB_14295665a;
          }
          local_151 = (local_160 < 1) * '\x02';
          if (local_160 < 1) goto LAB_14295665a;
          local_178 = (undefined1  [16])0x0;
          local_188 = (undefined1  [16])0x0;
          if (*(int *)(param_1 + 0x94) != 0) {
            local_1e0 = 0;
            uVar5 = 0;
            goto LAB_1429563ea;
          }
          local_1b8 = (longlong *)(param_1 + 0x290);
          uVar5 = 0;
          lVar15 = 0;
          local_1e1 = bVar4;
          local_1c0 = uVar11;
          goto LAB_142955ff7;
        }
        break;
      }
      puVar13 = puVar13 + 4;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != 0);
  }
  goto LAB_142955ee5;
  while (*(int *)(param_1 + 0x94) == 0) {
LAB_142955ff7:
    lVar8 = local_168;
    lVar16 = lVar15 * 0x30;
    local_1d4 = *(int *)(local_168 + 0x2c + lVar16) + *(int *)(local_168 + 0x28 + lVar16);
    if (local_1d4 <= uVar5) {
      local_1d4 = uVar5;
    }
    uVar5 = 0x100000;
    if (0x100000 < local_1d4) {
      uVar5 = local_1d4;
    }
    local_1b0 = lVar15;
    FUN_1401211f6(local_188,uVar5,1);
    local_1e0 = local_188._0_8_;
    iVar7 = *(int *)(lVar8 + 8 + lVar16);
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    iVar7 = *(int *)(puVar13 + 1);
    iVar6 = iVar6 + 1 + (uint)((longlong)iVar7 == 0);
    local_198 = (undefined8 *)0x0;
    _Src = (void *)*puVar13;
    local_190 = iVar7;
    if (iVar6 == 0 && iVar7 == 0) {
      local_18c = 0;
    }
    else {
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6 + iVar7);
      }
      FUN_1446dd670(&local_198,iVar6 + iVar7,0);
      if (iVar7 != 0) {
        memcpy(local_198,_Src,(longlong)iVar7 * 2);
      }
    }
    local_1d0 = lVar8 + lVar16;
    FUN_1401aebe8(&local_198);
    iVar7 = local_190;
    plVar9 = local_1b8;
    uVar11 = local_1c0;
    uVar12 = 0;
    iVar6 = local_190 + -1;
    if (local_190 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      puVar10 = (undefined8 *)&DAT_149dfb77a;
      if (local_190 != 0) {
        puVar10 = local_198;
      }
      lVar15 = 0;
      uVar12 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar10 + lVar15 * 2);
        uVar5 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
        uVar14 = (uint)(uVar12 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar5) & 0xff) * 4);
        uVar12 = (ulonglong)
                 (uVar14 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
        lVar15 = lVar15 + 1;
      } while (iVar6 != (int)lVar15);
    }
    iVar6 = FUN_146b97066(local_1b8,uVar12,&local_198);
    if ((iVar6 == -1) || (lVar15 = (longlong)iVar6 * 0x20 + *plVar9, lVar15 == 0)) {
      puVar10 = (undefined8 *)&DAT_149dfb77a;
      if (iVar7 != 0) {
        puVar10 = local_198;
      }
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))
                (*(longlong **)(param_1 + 0x68),&local_1a0,puVar10,0);
      if (local_1a0 != (undefined8 *)0x0) {
        local_128._8_8_ = &local_1a0;
        local_128._0_8_ = &local_198;
        FUN_146b97132(plVar9,local_12c,local_128);
        uVar12 = 0;
        iVar7 = local_190 + -1;
        if (local_190 == 0) {
          iVar7 = 0;
        }
        if (0 < iVar7) {
          puVar10 = (undefined8 *)&DAT_149dfb77a;
          if (local_190 != 0) {
            puVar10 = local_198;
          }
          lVar15 = 0;
          uVar12 = 0;
          do {
            uVar1 = *(ushort *)((longlong)puVar10 + lVar15 * 2);
            uVar5 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
            uVar14 = (uint)(uVar12 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar5) & 0xff) * 4);
            uVar12 = (ulonglong)
                     (uVar14 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar5 >> 8 & 0xff) * 4))
            ;
            lVar15 = lVar15 + 1;
          } while (iVar7 != (int)lVar15);
        }
        iVar7 = FUN_146b97066(plVar9,uVar12,&local_198);
        if (iVar7 == -1) {
          lVar15 = 0;
        }
        else {
          lVar15 = (longlong)iVar7 * 0x20 + *plVar9;
        }
        if (local_1a0 != (undefined8 *)0x0) {
          (**(code **)*local_1a0)();
        }
        if (lVar15 != 0) goto LAB_1429562ac;
      }
      local_151 = '\x03';
    }
    else {
LAB_1429562ac:
      lVar8 = (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x30))();
      if (local_151 == '\0') {
        lVar16 = (ulonglong)*(uint *)(local_1d0 + 0x2c) + *(longlong *)(local_1d0 + 0x10);
        local_151 = (lVar8 < lVar16) << 2;
        if (lVar16 <= lVar8) {
          (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x1a0))();
          lVar8 = local_1d0;
          (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x170))
                    (*(longlong **)(lVar15 + 0x10),
                     (ulonglong)*(uint *)(local_1d0 + 0x28) + local_1e0,
                     *(undefined4 *)(local_1d0 + 0x2c));
          FUN_146b31154(local_178,*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c));
          local_138 = local_138 + (ulonglong)*(uint *)(lVar8 + 0x2c);
        }
      }
    }
    uVar5 = local_1d4;
    bVar4 = local_1e1;
    bVar17 = false;
    if ((local_178._0_8_ != 0) && (bVar17 = false, local_178._0_8_ == local_178._8_8_)) {
      bVar17 = *(ulonglong *)(local_178._0_8_ + 8) == (ulonglong)*(uint *)(local_1c8 + 0x30);
    }
    while ((*(int *)(param_1 + 0x90) != 0 && (*(int *)(param_1 + 0x94) == 0))) {
      FUN_14000f986(0x3f000000);
    }
    if (local_198 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar15 = local_1b0 + 1;
    if (local_160 <= lVar15 || bVar17) {
      if (bVar17) {
        local_151 = '\0';
      }
      break;
    }
  }
LAB_1429563ea:
  if (*(int *)(param_1 + 0x94) == 0) {
    if (local_151 == '\0') {
      if ((char)uVar11 == '\0') {
        if (uVar5 == 0) {
          uVar11 = 0;
        }
        else {
          uVar12 = 0;
          uVar11 = 0;
          do {
            uVar11 = (uVar11 << 1 | (ulonglong)((longlong)uVar11 < 0)) ^
                     (&DAT_14c9912e0)[*(byte *)(local_1e0 + uVar12)];
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
        }
        if (uVar11 == local_150) goto LAB_1429564c7;
      }
      else {
        local_128 = (undefined1  [16])0x0;
        local_118 = 0;
        FUN_140f0be04(local_1e0,uVar5,local_128);
        if (local_128 == local_78 && local_68 == local_118) {
LAB_1429564c7:
          plVar9 = (longlong *)FUN_146b47588(uVar5);
          (**(code **)(*plVar9 + 8))(plVar9,&local_1a0,&local_198);
          memset(local_128,0,0x90);
          FUN_144869430(local_128);
          local_98 = 0;
          local_128._0_8_ = &PTR_FUN_149e1e050;
          local_90 = local_188;
          local_88 = 0x7fffffffffffffff;
          local_100 = local_100 | 1;
          FUN_1449c2eca(local_128,0);
          FUN_14004e24c(local_128,local_1a0,uVar5);
          uVar2 = param_2[1];
          local_198[1] = *param_2;
          local_198[2] = uVar2;
          *(undefined1 *)(local_198 + 4) = 0;
          *(uint *)(local_198 + 3) = uVar5;
          *(uint *)((longlong)local_198 + 0x1c) = uVar5;
          *(byte *)((longlong)local_198 + 0x21) = bVar4;
          local_198[5] = local_150;
          local_198[6] = local_78._0_8_;
          local_198[7] = local_78._8_8_;
          *(int *)(local_198 + 8) = local_68;
          (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_1457adc9c(param_1 + 0x1e0,local_12c,param_2,0);
          local_1a8 = plVar9;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 8))(*(longlong **)(param_1 + 0x70),param_2)
          ;
          local_128._0_8_ = &PTR__purecall_149e35f70;
          if (local_d0 != (longlong *)0x0) {
            if (*local_d0 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_d0);
          }
          if (local_b0 != 0) {
            if (*(longlong *)(local_b0 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_b0);
          }
          goto LAB_14295646e;
        }
      }
      local_151 = '\x05';
    }
  }
  else {
    local_151 = '\x06';
  }
LAB_14295646e:
  if (local_188._0_8_ != 0) {
    FUN_1400020a8();
  }
  lVar15 = local_178._0_8_;
  while (lVar15 != 0) {
    local_178._8_8_ = *(longlong *)(lVar15 + 0x18);
    FUN_1400020a8();
    local_178._0_8_ = local_178._8_8_;
    lVar15 = local_178._8_8_;
  }
LAB_14295665a:
  FUN_146b5688a(local_168,local_160);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
LAB_142955ea5:
  QueryPerformanceCounter((LARGE_INTEGER *)local_128);
  local_148._8_8_ = local_128._0_8_;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
            (*(longlong **)(param_1 + 0x88),param_2,&local_151);
  if (local_151 != '\0') {
    FUN_1457adc9c(param_1 + 0xe0,local_128,param_2,0);
    FUN_1457adc9c(param_1 + 0x130,local_128,param_2,0);
  }
LAB_142955ee5:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14295668a FUN_14295668a body=1018 status=ok
// SIG undefined FUN_14295668a(void)

void FUN_14295668a(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *_Src;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined ***pppuVar6;
  uint uVar7;
  code *pcVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 *_Src_00;
  undefined8 *puVar15;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  longlong local_f8;
  int local_f0;
  code *local_e8;
  int local_e0;
  undefined ***local_d8;
  undefined **local_c8;
  longlong local_c0;
  void **local_b8;
  longlong local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    puVar15 = *(undefined8 **)(param_1 + 0x1d0);
    puVar4 = puVar15 + (longlong)*(int *)(param_1 + 0x1d8) * 4;
    iVar3 = *(int *)(param_2 + 1);
    _Src = (undefined2 *)*param_2;
    puVar5 = _Src;
    if ((longlong)iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
LAB_1429566f3:
    iVar10 = *(int *)(puVar15 + 1);
    uVar7 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar7 = 0;
    }
    local_100 = param_2;
    if (0 < (int)uVar7) {
      _Src_00 = (undefined2 *)*puVar15;
      puVar12 = _Src_00;
      if (iVar10 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      uVar13 = (ulonglong)uVar7;
      lVar14 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar14);
        uVar2 = *(ushort *)((longlong)puVar12 + lVar14);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_142956789;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar11 = (uint)uVar1 - (uint)uVar2;
            goto LAB_142956762;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto code_r0x00014295675f;
        }
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_142956789;
        lVar14 = lVar14 + 2;
      } while( true );
    }
    goto LAB_142956767;
  }
  goto LAB_142956a45;
code_r0x00014295675f:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_142956762:
  if (iVar11 != 0) {
LAB_142956767:
    puVar15 = puVar15 + 4;
    if (puVar15 == puVar4) goto LAB_142956a45;
    goto LAB_1429566f3;
  }
LAB_142956789:
  local_98 = (void *)0x0;
  uStack_90 = CONCAT44(uStack_90._4_4_,iVar3);
  if (iVar3 == 0) {
    uStack_90 = 0;
  }
  else {
    FUN_1446dd670(&local_98,iVar3,0);
    memcpy(local_98,_Src,(longlong)iVar3 * 2);
    iVar10 = *(int *)(puVar15 + 1);
    _Src_00 = (undefined2 *)*puVar15;
  }
  param_2 = local_100;
  local_e8 = (code *)0x0;
  local_e0 = iVar10;
  FUN_1446dd670(&local_e8,(uint)(iVar10 == 0) + iVar10 + 1,0);
  if (iVar10 != 0) {
    memcpy(local_e8,_Src_00,(longlong)iVar10 * 2);
  }
  FUN_1401aebe8(&local_e8,&DAT_149dfb77a,0);
  pcVar8 = (code *)&DAT_149dfb77a;
  if (local_e0 != 0) {
    pcVar8 = local_e8;
  }
  FUN_14107002a(&local_98,pcVar8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = (**(code **)(*(longlong *)puVar15[2] + 0x1f8))((longlong *)puVar15[2],&local_98);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar14 == 0) goto LAB_142956a45;
  local_78 = 0;
  local_70 = 0;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
    lVar9 = *(longlong *)(lVar14 + 0x48);
    lVar14 = (longlong)*(int *)(lVar14 + 0x50) * 0x18;
    do {
      FUN_1457adc9c(&local_98,&local_e8,lVar9,0);
      lVar9 = lVar9 + 0x18;
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != 0);
  }
  FUN_146b35124(&local_98,&local_e8,param_1 + 0x180);
  FUN_14681b5ea(&local_98,&local_e8);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_e8);
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_149f35d60;
  local_e8 = FUN_14295c090;
  local_c0 = param_1;
  local_b8 = &local_98;
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x20))
            (*(longlong **)(param_1 + 0x78),&local_f8,0x7fffffff,&local_e8);
  if ((0 < local_f0) &&
     ((**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),&local_f8),
     0 < local_f0)) {
    lVar14 = 0;
    lVar9 = 0;
    do {
      if (*(int *)(param_1 + 0x94) != 0) break;
      FUN_142955d82(param_1,local_f8 + lVar14);
      lVar9 = lVar9 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar9 < local_f0);
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (code *)0x0) {
    pppuVar6 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar6 = &local_c8;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_98);
LAB_142956a45:
  FUN_146b96e50(param_1 + 0x290,param_2);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142956a86 FUN_142956a86 body=143 status=ok
// SIG undefined FUN_142956a86(void)

void FUN_142956a86(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x20 + lVar3;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                (*(longlong **)(param_1 + 8),lVar3,lVar3 + 0x10);
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  FUN_146b97623(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_146b9781e(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x000142956b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 142956c2e FUN_142956c2e body=579 status=ok
// SIG undefined FUN_142956c2e(void)

void FUN_142956c2e(longlong *param_1,int param_2,wchar_t *param_3,int param_4,longlong *param_5)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  cVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar3 == '\0') {
    *(int *)(param_1 + 6) = param_2;
    plVar6 = param_1 + 7;
    FUN_14020fad6(plVar6,(&PTR_DAT_149f351b0)[param_2]);
    sVar5 = wcslen(param_3);
    FUN_1400020e8(plVar6,param_3,sVar5 & 0xffffffff);
    if (param_4 == 0) {
      FUN_140056680(&local_58,&DAT_149dfb77a);
    }
    else {
      FUN_140002266(&local_58,&DAT_149e2ca20,param_4);
    }
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(plVar6,local_58,iVar2);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)*param_5;
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = (longlong *)*param_5;
    pcVar1 = *(code **)(*plVar6 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar7 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar7 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar7 = plVar6 + 2;
    }
    else {
      plVar7 = (longlong *)(*pcVar1)(plVar6);
    }
    if ((int)plVar7[1] < 2) {
      FUN_146b8befb(&local_58,(int)param_1[6]);
    }
    else {
      FUN_14023423e(&local_58,param_5);
    }
    FUN_140008f88(param_1 + 9,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    FUN_146b8d5b2(param_1 + 0xc,&local_48);
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((longlong)(int)uStack_40 == 0) {
    uVar8 = 0;
  }
  else {
    puVar9 = local_48 + (longlong)(int)uStack_40 * 8;
    puVar10 = local_48;
    do {
      pcVar1 = (code *)*puVar10;
      plVar6 = puVar10 + 4;
      if ((longlong *)puVar10[2] != (longlong *)0x0) {
        plVar6 = (longlong *)puVar10[2];
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar4);
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar9);
    uVar8 = uStack_40 & 0xffffffff;
  }
  FUN_144a6a7e8(local_48,uVar8);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_5 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142956e72 FUN_142956e72 body=334 status=ok
// SIG undefined FUN_142956e72(void)

undefined8 * FUN_142956e72(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 local_460;
  undefined1 local_458;
  undefined2 *local_450;
  undefined2 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined2 local_430 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_450 = local_430;
  local_438 = '\0';
  local_440 = &local_30;
  local_448 = local_450;
  FUN_140212e80(&local_450,L"%s #%d",*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48)
               );
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar2 = &PTR_FUN_149f35210;
  puVar2[1] = &PTR_FUN_149f35220;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar3 = 0;
  puVar2[4] = puVar3;
  puVar2[5] = puVar3;
  *local_448 = 0;
  puVar1 = local_450;
  uVar4 = FUN_1405d8a54(0);
  puVar2[2] = uVar4;
  local_460 = 0;
  local_458 = 1;
  local_468 = 0xffffffffffffffff;
  lVar5 = FUN_14275bfaa(puVar2 + 1,puVar1,0,0);
  puVar2[3] = lVar5;
  if ((lVar5 == 0) || (puVar2[2] == 0)) {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  if (local_438 == '\x01') {
    FUN_1400020a8(local_450);
  }
  if ((local_30 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142956fc2 FUN_142956fc2 body=213 status=ok
// SIG undefined FUN_142956fc2(void)

void FUN_142956fc2(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149f35250;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 3);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(lVar2 + lVar4) + 8) + 0x10))
                (*(longlong *)(lVar2 + lVar4) + 8);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    iVar1 = *(int *)(param_1 + 2);
    if ((longlong)iVar1 != 0) {
      lVar2 = param_1[1];
      lVar4 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + lVar4);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_146b97f98(param_1 + 1,0);
  }
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142957098 FUN_142957098 body=114 status=ok
// SIG undefined FUN_142957098(void)

longlong FUN_142957098(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    LeaveCriticalSection(lpCriticalSection);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  lVar2 = FUN_142956e72(param_1);
  LeaveCriticalSection(lpCriticalSection);
  return lVar2;
}



// FUNCTION 14295710a FUN_14295710a body=622 status=ok
// SIG undefined FUN_14295710a(void)

undefined8 * FUN_14295710a(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  puVar9 = *(undefined8 **)(param_1 + 0x100);
  if ((((*(int *)(param_1 + 0xf0) == *param_2) && (*(int *)(param_1 + 0xf4) == param_2[1])) &&
      (*(int *)(param_1 + 0xf8) == param_2[2])) && (*(int *)(param_1 + 0xfc) == param_2[3]))
  goto LAB_142957173;
  piVar2 = (int *)(param_1 + 0xf0);
  ppuVar3 = (undefined8 **)(param_1 + 0x100);
  if (puVar9 == (undefined8 *)0x0) {
    piVar2[0] = 0;
    piVar2[1] = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  else {
    if (((*(int *)(param_1 + 0xf4) != 0 || *(int *)(param_1 + 0xf0) != 0) ||
        *(int *)(param_1 + 0xf8) != 0) || *(int *)(param_1 + 0xfc) != 0) {
      uVar7 = FUN_1447addd0(piVar2,0x10);
      iVar8 = FUN_146b982c6(param_1 + 0x10,uVar7,piVar2);
      if (iVar8 == -1) {
        plVar1 = *(longlong **)(param_1 + 0x78);
        if (plVar1 != (longlong *)0x0) {
          iVar8 = (**(code **)(*plVar1 + 0x10))(plVar1,piVar2);
          if (iVar8 == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))
                      (*(longlong **)(param_1 + 0x70),piVar2);
            goto LAB_14295723b;
          }
        }
        local_40 = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0x100) = 0;
        FUN_146b8e9c6(param_1,piVar2,&local_40,0);
      }
    }
LAB_14295723b:
    puVar9 = *ppuVar3;
    piVar2[0] = 0;
    piVar2[1] = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      *ppuVar3 = (undefined8 *)0x0;
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar7 = FUN_1447addd0(param_2,0x10);
  iVar8 = FUN_146b982c6(plVar1,uVar7,param_2);
  if (iVar8 == -1) {
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,param_2);
      puVar9 = local_48;
      if (ppuVar3 == &local_48) {
LAB_1429572c3:
        if (local_48 != (undefined8 *)0x0) {
          (**(code **)*local_48)(local_48,1);
        }
        puVar9 = *ppuVar3;
      }
      else {
        puVar4 = *ppuVar3;
        *ppuVar3 = local_48;
        local_48 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
          goto LAB_1429572c3;
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 8))(*(longlong **)(param_1 + 0x70),param_2);
        FUN_146b8edc8(param_1);
      }
    }
  }
  else {
    uVar7 = FUN_1447addd0(param_2,0x10);
    iVar8 = FUN_146b982c6(plVar1,uVar7,param_2);
    if (iVar8 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar8 * 0x20 + *plVar1;
    }
    ppuVar11 = (undefined8 **)(lVar10 + 0x10);
    if (ppuVar3 != ppuVar11) {
      puVar9 = *ppuVar3;
      *ppuVar3 = *ppuVar11;
      *ppuVar11 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    FUN_146b9833a(plVar1,param_2);
  }
  puVar9 = *ppuVar3;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    iVar8 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    *piVar2 = *param_2;
    *(int *)(param_1 + 0xf4) = iVar8;
    *(int *)(param_1 + 0xf8) = iVar5;
    *(int *)(param_1 + 0xfc) = iVar6;
  }
LAB_142957173:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295737a FUN_14295737a body=1057 status=ok
// SIG undefined FUN_14295737a(void)

undefined8 * FUN_14295737a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  void *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149f35300;
  FUN_146b8fd5e(param_1 + 1);
  param_1[8] = *param_3;
  puVar1 = param_1 + 9;
  if (param_1[1] == 0) {
    FUN_140056680(puVar1,&DAT_149dfb77a);
  }
  else {
    FUN_146b2f100(puVar1,param_1[1],param_1[3]);
  }
  iVar20 = *(int *)(param_1 + 6);
  local_50 = (void *)CONCAT44(local_50._4_4_,6);
  local_58 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"DeltaRetries",&local_50);
  iVar14 = 1000;
  if ((int)local_50 < 1000) {
    iVar14 = (int)local_50;
  }
  if (iVar14 < iVar20) {
    iVar14 = iVar20;
  }
  *(int *)(param_1 + 0xb) = iVar14;
  param_1[0xc] = param_3[2];
  param_1[0xe] = param_3[4];
  param_3[4] = 0;
  uVar6 = *(undefined4 *)(param_3 + 6);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar8 = *(undefined4 *)(param_3 + 7);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x3c);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar11 = *(undefined4 *)(param_3 + 9);
  uVar12 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar10;
  *(undefined4 *)(param_1 + 0x13) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar12;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
  *(undefined4 *)(param_1 + 0x11) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar9;
  if (param_1[0xc] != 0) {
    param_3[2] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 7);
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_1446efa72(param_1 + 0x18,0,3,0x10);
  *(undefined4 *)(param_1 + 0x19) = 3;
  puVar5 = (undefined8 *)param_1[0x18];
  *puVar5 = &PTR_LAB_149f34060;
  LOCK();
  UNLOCK();
  lVar19 = DAT_14c758608 + 1;
  lVar18 = DAT_14c758608 + 1;
  if (lVar19 == 0) {
    LOCK();
    UNLOCK();
    lVar19 = DAT_14c758608 + 2;
    lVar18 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar18;
  puVar5[2] = lVar19;
  *puVar5 = &PTR_FUN_149f35ed0;
  puVar5[3] = param_1;
  puVar5[4] = FUN_14295779e;
  FUN_146b98f90(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  lVar18 = param_1[0x1b];
  param_1[0x1d] = param_1[0x1a];
  param_1[0x1e] = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  bVar22 = *(int *)((longlong)param_1 + 0x3c) == 3;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    bVar23 = false;
    bVar22 = true;
  }
  else {
    plVar15 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x150))();
    plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[3] + 0x150))();
    iVar20 = (int)plVar15[1];
    if (iVar20 == (int)plVar16[1]) {
      bVar23 = true;
      if (1 < iVar20) {
        lVar18 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*plVar15 + lVar18);
          uVar17 = (uint)uVar3;
          uVar4 = *(ushort *)(*plVar16 + lVar18);
          uVar21 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1429575c1;
            }
            iVar20 = uVar17 - uVar21;
            goto LAB_1429575f3;
          }
          if (uVar3 == 0) break;
LAB_1429575c1:
          lVar18 = lVar18 + 2;
        }
        iVar20 = 0;
LAB_1429575f3:
        bVar23 = iVar20 == 0;
      }
    }
    else {
      bVar23 = (int)plVar16[1] + iVar20 == 1;
    }
  }
  cVar13 = FUN_146b8fdf4(param_1);
  if (((bVar22) || (bVar23)) || (cVar13 == '\0')) {
    *(undefined4 *)(param_1 + 0x14) = 2;
  }
  else if (*(int *)(param_1 + 0x14) != 2) {
    plVar15 = (longlong *)param_1[8];
    lVar18 = (longlong)*(int *)((longlong)param_1 + 0xa4) * 0x10;
    iVar20 = *(int *)(param_1 + 10) + -1;
    if (*(int *)(param_1 + 10) == 0) {
      iVar20 = 0;
    }
    uVar17 = *(uint *)(param_1[5] + 8 + lVar18);
    iVar14 = iVar20 + 1 + (uint)((longlong)(int)uVar17 == 0);
    local_50 = (void *)0x0;
    _Src = *(void **)(param_1[5] + lVar18);
    local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar17);
    if (iVar14 == 0 && uVar17 == 0) {
      local_48 = (longlong *)(ulonglong)uVar17;
    }
    else {
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar14 + uVar17);
      }
      FUN_1446dd670(&local_50,iVar14 + uVar17,0);
      if (uVar17 != 0) {
        memcpy(local_50,_Src,(longlong)(int)uVar17 * 2);
      }
    }
    FUN_1401aebe8(&local_50,*puVar1,iVar20);
    (**(code **)(*plVar15 + 8))(plVar15,&local_50,param_1 + 0x18,param_1 + 0x16);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1429576db;
  }
  local_50 = (void *)param_1[3];
  plVar15 = (longlong *)param_1[4];
  local_48 = plVar15;
  if (plVar15 == (longlong *)0x0) {
    FUN_146b8fef4(param_1,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    FUN_146b8fef4(param_1);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
LAB_1429576db:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14295779e FUN_14295779e body=1124 status=ok
// SIG undefined FUN_14295779e(void)

void FUN_14295779e(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *lpTlsValue;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar10 = (undefined8 *)lpTlsValue[1];
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*lpTlsValue;
    if (puVar10 == (undefined8 *)0x0) {
      uVar13 = (uint)DAT_14c896180;
      uVar6 = DAT_14c896180;
      while (DAT_14c896180 = uVar6, local_68 = uVar6, (uVar6 & 0x3ffffff) != 0) {
        local_70 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
        if (local_70 >> 0x1a < uVar6 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar12 = (ulonglong)((uVar13 & 0x3ffffff) >> 0xe);
        uVar14 = (ulonglong)((uint)uVar6 & 0x3fff);
        local_70 = local_70 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 0x10 + uVar14 * 0x18);
        LOCK();
        bVar15 = local_68 == DAT_14c896180;
        uVar6 = local_70;
        if (!bVar15) {
          uVar6 = DAT_14c896180;
        }
        DAT_14c896180 = uVar6;
        UNLOCK();
        if (bVar15) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + uVar14 * 0x18 + 0x10) = 0;
          puVar10 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 8 +
                     (ulonglong)(uVar13 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar13 & 0x3ffffff);
          lpTlsValue[1] = puVar10;
          if (puVar10 != (undefined8 *)0x0) goto LAB_142957953;
          goto LAB_142957bb9;
        }
        uVar13 = (uint)DAT_14c896180;
        uVar6 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_142957bb9:
      puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar10;
      iVar7 = 0xff;
      puVar11 = puVar10;
      do {
        puVar8 = puVar11 + 0x20;
        *puVar11 = puVar8;
        iVar7 = iVar7 + -1;
        puVar11 = puVar8;
      } while (iVar7 != 0);
    }
    else {
      lpTlsValue[1] = puVar10;
      puVar8 = lpTlsValue;
    }
    *puVar8 = 0;
LAB_142957953:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar7 = 0xff;
  }
  else {
    iVar7 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar10;
  *(int *)(lpTlsValue + 2) = iVar7;
  *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
  puVar10[1] = &DAT_100000002;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  puVar10[6] = 0;
  puVar10[7] = 0x100000000;
  *(undefined1 *)(puVar10 + 8) = 1;
  puVar10[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0xe800000000000020;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0x100000000;
  *(undefined2 *)(puVar10 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar10 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar10 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar10 + 8);
  }
  *puVar10 = &PTR_FUN_149f35f68;
  if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
  }
  puVar10[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar10[9] = puVar10;
  puVar10[10] = puVar10;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar10[0xf] = uVar9;
  puVar10[0x10] = 0xd00000527cd4c600;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
  puVar10[0x15] = param_1;
  *(undefined4 *)(puVar10 + 0x16) = param_2;
  puVar10[0x17] = uVar3;
  puVar10[0x18] = plVar4;
  if (plVar4 == (longlong *)0x0) {
    *puVar10 = &PTR_FUN_149f35f58;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar10 = &PTR_FUN_149f35f58;
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1447439e4(puVar10);
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar10 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
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
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142957c04 FUN_142957c04 body=437 status=ok
// SIG undefined FUN_142957c04(void)

void FUN_142957c04(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  code *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xa0) == 0) {
    local_68 = *(code **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x20);
    local_60 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_146b8fef4(param_1,&local_68);
      goto LAB_142957d5c;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_146b8fef4(param_1);
  }
  else {
    plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149f340d0;
    plVar7 = plVar4 + 2;
    FUN_140056680(plVar7,*(undefined8 *)(param_1 + 0x100));
    *(undefined1 *)(plVar4 + 4) = 1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    pcVar2 = *(code **)(param_1 + 0x60);
    local_58 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    local_48 = *(undefined4 *)(param_1 + 0x80);
    uStack_44 = *(undefined4 *)(param_1 + 0x84);
    uStack_40 = *(undefined4 *)(param_1 + 0x88);
    uStack_3c = *(undefined4 *)(param_1 + 0x8c);
    local_38 = *(undefined4 *)(param_1 + 0x90);
    uStack_34 = *(undefined4 *)(param_1 + 0x94);
    uStack_30 = *(undefined4 *)(param_1 + 0x98);
    uStack_2c = *(undefined4 *)(param_1 + 0x9c);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0xd0);
    *(longlong **)(lVar3 + 0x80) = plVar7;
    *(longlong **)(lVar3 + 0x88) = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_68 = pcVar2;
    FUN_140b576f0();
    if (pcVar2 != (code *)0x0) {
      plVar6 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar6 = (longlong *)&local_48;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar5,plVar7);
      if (local_68 != (code *)0x0) {
        plVar7 = (longlong *)&local_48;
        if (local_58 != (longlong *)0x0) {
          plVar7 = local_58;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_142957d5c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142957dba FUN_142957dba body=3094 status=ok
// SIG undefined FUN_142957dba(void)

ulonglong FUN_142957dba(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                       longlong *param_5)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  undefined4 local_1e0;
  undefined2 **local_1d8;
  longlong local_1d0;
  uint local_1c4;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  undefined2 *local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined4 local_160;
  undefined2 *local_158;
  int local_150;
  undefined2 *local_148;
  int local_140;
  undefined2 *local_138;
  int local_130;
  undefined2 *local_128;
  uint local_120;
  undefined4 local_11c;
  longlong local_118;
  ulonglong uStack_110;
  undefined2 *local_100;
  undefined8 local_f8;
  int local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  int local_a8;
  int local_a4;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_b0 = (undefined2 *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_100 = (undefined2 *)CONCAT44(local_100._4_4_,9);
  local_1d0 = param_1;
  local_1b8 = param_3;
  local_1b0 = param_4;
  (**(code **)(*param_5 + 0x18))(param_5);
  local_118 = 0;
  uStack_110 = 0;
  (**(code **)(*param_2 + 0x80))(param_2,&local_118);
  lVar3 = local_118;
  if ((longlong)(int)uStack_110 != 0) {
    plVar15 = (longlong *)((longlong)(int)uStack_110 * 0xa8);
    local_1c4 = (uint)CONCAT71((int7)(int3)(uStack_110 >> 8),1);
    param_2 = (longlong *)0x0;
    local_1c0 = plVar15;
    do {
      uVar1 = *(uint *)(lVar3 + 0x68 + (longlong)param_2);
      if (1 < (int)uVar1) {
        puVar13 = (undefined8 *)((longlong)param_2 + lVar3 + 0x60);
        local_128 = (undefined2 *)0x0;
        pvVar2 = (void *)*puVar13;
        local_120 = uVar1;
        FUN_1446dd670(&local_128,(ulonglong)uVar1,0);
        memcpy(local_128,pvVar2,(ulonglong)uVar1 * 2);
        local_130 = *(int *)(local_1b8 + 0x28);
        lVar16 = (longlong)local_130;
        local_138 = (undefined2 *)0x0;
        pvVar2 = *(void **)(local_1b8 + 0x20);
        FUN_1446dd670(&local_138,(uint)(lVar16 == 0) + local_130 + 1,0);
        if (lVar16 != 0) {
          memcpy(local_138,pvVar2,lVar16 * 2);
        }
        FUN_1401aebe8(&local_138,&DAT_149dfb77a,0);
        local_140 = *(int *)(local_1b0 + 1);
        lVar16 = (longlong)local_140;
        local_148 = (undefined2 *)0x0;
        pvVar2 = (void *)*local_1b0;
        FUN_1446dd670(&local_148,(uint)(lVar16 == 0) + local_140 + 1,0);
        if (lVar16 != 0) {
          memcpy(local_148,pvVar2,lVar16 * 2);
        }
        FUN_1401aebe8(&local_148,&DAT_149dfb77a,0);
        uVar9 = FUN_14047ac8c();
        FUN_1449b8608(&local_100,uVar9,L"Logs/");
        iVar7 = (uint)local_f8;
        iVar6 = ((uint)local_f8 == 0) + 1;
        local_b0 = local_100;
        local_100 = (undefined2 *)0x0;
        local_a8 = (uint)local_f8;
        iVar4 = local_f8._4_4_;
        local_a4 = local_f8._4_4_;
        local_f8 = 0;
        iVar10 = iVar6 + iVar7;
        if (iVar10 < iVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar10);
        }
        if (iVar4 < iVar10) {
          FUN_1446f8c06(&local_b0);
        }
        FUN_1401aebe8(&local_b0,&DAT_149dfb77a,0);
        FUN_140aa5ef8(&local_158,&local_b0);
        if (local_b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_100 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(**(longlong **)(local_1d0 + 8) + 8))(*(longlong **)(local_1d0 + 8),&local_b0);
        if ((*(char *)(lVar3 + 0xa0 + (longlong)param_2) == '\0') &&
           (*(int *)(lVar3 + 0x34 + (longlong)param_2) < *(int *)(lVar3 + 8 + (longlong)param_2))) {
          FUN_145d1d460(lVar3 + (longlong)param_2,&local_100);
          iVar4 = local_cc;
          iVar7 = (uint)local_f8;
          local_b8 = 0;
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          FUN_1408910a4(&local_100);
          plVar15 = local_1c0;
          if (iVar7 != iVar4) goto LAB_1429580a0;
        }
        else {
LAB_1429580a0:
          if (*(int *)(local_1b8 + 0x78) == 0) {
            puVar11 = &DAT_149dfb77a;
            if (local_140 != 0) {
              puVar11 = local_148;
            }
            iVar7 = FUN_1448097c4(&local_128,L"$[RootDirectory]",puVar11,1);
            if (iVar7 == 0) {
              FUN_140474144(&local_100,&local_148,puVar13);
              if (local_128 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_128 = local_100;
              local_120 = (uint)local_f8;
              local_11c = local_f8._4_4_;
            }
            puVar11 = local_128;
            if (local_120 == 0) {
              puVar11 = &DAT_149dfb77a;
            }
            cVar5 = (**(code **)(**(longlong **)(local_1d0 + 0x20) + 0x18))
                              (*(longlong **)(local_1d0 + 0x20),puVar11,&local_100);
            if (cVar5 == '\0') goto LAB_142958174;
          }
          else {
LAB_142958174:
            puVar11 = &DAT_149dfb77a;
            if (local_130 != 0) {
              puVar11 = local_138;
            }
            iVar7 = FUN_1448097c4(&local_128,L"$[RootDirectory]",puVar11,1);
            if (iVar7 == 0) {
              FUN_140474144(&local_100,&local_138,puVar13);
              if (local_128 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_128 = local_100;
              local_120 = (uint)local_f8;
              local_11c = local_f8._4_4_;
            }
            puVar11 = local_128;
            if (local_120 == 0) {
              puVar11 = &DAT_149dfb77a;
            }
            cVar5 = (**(code **)(**(longlong **)(local_1d0 + 0x20) + 0x18))
                              (*(longlong **)(local_1d0 + 0x20),puVar11,&local_100);
            if (cVar5 == '\0') {
              plVar15 = *(longlong **)(local_1d0 + 0x18);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
              local_168 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              local_160 = DAT_14c844848;
              local_1e8 = &local_168;
              local_1c4 = 0;
              (**(code **)(*plVar15 + 0x38))(plVar15,8,&DAT_149f2f964,0);
              plVar15 = local_1c0;
              goto LAB_142958684;
            }
          }
          puVar11 = &DAT_149dfb77a;
          if (local_130 != 0) {
            puVar11 = local_138;
          }
          local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,1);
          FUN_140807d8e((longlong)param_2 + lVar3 + 0x70,&local_188,L"$[RootDirectory]",puVar11);
          puVar11 = &DAT_149dfb77a;
          if (local_150 != 0) {
            puVar11 = local_158;
          }
          FUN_1448097c4(&local_188,L"$[LogDirectory]",puVar11,1);
          local_178 = local_188;
          uStack_170._0_4_ = (int)uStack_180;
          uStack_170._4_4_ = uStack_180._4_4_;
          local_188 = (undefined2 *)0x0;
          uStack_180 = 0;
          FUN_1448097c4(&local_178,L"$[Quote]",&DAT_149e01f5a,1);
          iVar7 = (int)uStack_170;
          local_100 = local_178;
          local_178 = (undefined2 *)0x0;
          local_f8 = CONCAT44(uStack_170._4_4_,(int)uStack_170);
          uStack_170 = 0;
          if (local_188 != (undefined2 *)0x0) {
            FUN_1400020a8();
            iVar7 = (uint)local_f8;
          }
          local_188 = (undefined2 *)CONCAT44(local_188._4_4_,0xffffffff);
          puVar11 = local_100;
          if (iVar7 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          puVar12 = &DAT_149dfb77a;
          if (local_120 != 0) {
            puVar12 = local_128;
          }
          cVar5 = (**(code **)(**(longlong **)(local_1d0 + 0x28) + 8))
                            (*(longlong **)(local_1d0 + 0x28),puVar12,puVar11,&local_188);
          lVar16 = local_1d0;
          puVar11 = &DAT_149dfb77a;
          if (cVar5 == '\0') {
            uVar8 = (**(code **)(**(longlong **)(local_1d0 + 0x28) + 0x18))();
            local_188 = (undefined2 *)CONCAT44(local_188._4_4_,uVar8);
            plVar15 = *(longlong **)(lVar16 + 0x10);
            FUN_140056680(&local_178,L"Failed to start installer");
            local_1e0 = (int)local_188;
            local_1e8 = (longlong **)&local_100;
            local_1d8 = &local_178;
            (**(code **)(*plVar15 + 0x28))
                      (plVar15,lVar3 + 0x80 + (longlong)param_2,(longlong)param_2 + lVar3 + 0x90,
                       &local_128);
            if (local_178 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            plVar15 = *(longlong **)(local_1d0 + 0x18);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
            }
            local_198 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_190 = DAT_14c844848;
            FUN_140002266(&local_178,L"%s%u",&DAT_149e8ad72,(ulonglong)local_188 & 0xffffffff);
            if ((int)uStack_170 != 0) {
              puVar11 = local_178;
            }
            lVar16 = *plVar15;
            local_1e8 = &local_198;
LAB_142958632:
            (**(code **)(lVar16 + 0x38))(plVar15,8,puVar11,0);
            if (local_178 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            bVar17 = 0;
          }
          else {
            if ((int)local_188 != 0) {
              plVar15 = *(longlong **)(local_1d0 + 0x10);
              FUN_140056680(&local_178,L"Failed to install");
              local_1e0 = (int)local_188;
              local_1e8 = (longlong **)&local_100;
              local_1d8 = &local_178;
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,lVar3 + 0x80 + (longlong)param_2,(longlong)param_2 + lVar3 + 0x90,
                         &local_128);
              if (local_178 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              plVar15 = *(longlong **)(local_1d0 + 0x18);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
              local_1a8 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              local_1a0 = DAT_14c844848;
              FUN_140002266(&local_178,L"%s%u",&DAT_149ebbc0e,(ulonglong)local_188 & 0xffffffff);
              if ((int)uStack_170 != 0) {
                puVar11 = local_178;
              }
              lVar16 = *plVar15;
              local_1e8 = &local_1a8;
              goto LAB_142958632;
            }
            FUN_146b6f6ea(&local_b0,lVar3 + (longlong)param_2);
            (**(code **)(**(longlong **)(local_1d0 + 8) + 0x10))
                      (*(longlong **)(local_1d0 + 8),&local_b0);
            bVar17 = 1;
          }
          plVar15 = local_1c0;
          if (local_100 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_1c4 = CONCAT31((int3)(local_1c4 >> 8),(byte)local_1c4 & bVar17);
        }
LAB_142958684:
        local_68 = 0;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_b0);
        if (local_158 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_148 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_138 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_128 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      param_2 = param_2 + 0x15;
    } while (plVar15 != param_2);
    if ((local_1c4 & 1) == 0) {
      uVar14 = 0;
      goto LAB_142958965;
    }
  }
  local_b0 = (undefined2 *)CONCAT44(local_b0._4_4_,0x3f800000);
  local_100 = (undefined2 *)CONCAT44(local_100._4_4_,9);
  (**(code **)(*param_5 + 0x18))(param_5);
  uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
LAB_142958965:
  FUN_146b48f94(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1429589d2 FUN_1429589d2 body=317 status=ok
// SIG undefined FUN_1429589d2(void)

undefined8 FUN_1429589d2(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70 [5];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(local_70);
  dVar3 = 0.008333333333333333 / DAT_14c83f418;
  uVar2 = 0xffffffffffffffff;
  if (dVar3 < 1.8446744073709552e+19) {
    uVar2 = (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)dVar3 >> 0x3f | (longlong)dVar3;
  }
  local_48 = 0xff;
  QueryPerformanceCounter(&local_78);
  if ((ulonglong)local_78 < uVar2 + local_70[0].QuadPart) {
    do {
      cVar1 = FUN_146b92a52(param_1 + 0xe0,local_70);
      if (cVar1 == '\0') break;
      switch(local_48) {
      case 0:
        FUN_146b92aec(param_1,local_70);
        break;
      case 1:
        FUN_146b92cb8(param_1,local_70);
        break;
      case 2:
        FUN_146b92d50(param_1,local_70);
        break;
      case 3:
        FUN_146b92e08(param_1,local_70);
      }
      QueryPerformanceCounter(&local_78);
    } while ((ulonglong)local_78 < uVar2 + local_70[0].QuadPart);
  }
  FUN_146b99ca0(local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142958b10 FUN_142958b10 body=763 status=ok
// SIG undefined FUN_142958b10(void)

byte FUN_142958b10(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined2 *local_138;
  int local_130;
  undefined1 local_128 [16];
  longlong local_118;
  LARGE_INTEGER local_110;
  undefined1 local_108 [16];
  int local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_84 [16];
  int local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = (undefined1  [16])0x0;
  local_118 = 0;
  FUN_146b93f9a(0,&local_138);
  puVar7 = local_138;
  if (local_130 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))
            (*(longlong **)(param_1 + 0x28),&local_140,puVar7,0);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),param_3,0);
  if (local_140 == (longlong *)0x0) {
    puVar7 = local_138;
    if (local_130 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
                      (*(longlong **)(param_1 + 0x28),puVar7);
    bVar3 = bVar3 | 2;
  }
  else {
    lVar4 = (**(code **)(*local_140 + 0x30))();
    bVar3 = 5;
    if (lVar4 == *(longlong *)(param_4 + 0x58)) {
      local_e8 = 0xefcdab8967452301;
      uStack_e0 = 0x1032547698badcfe;
      local_d8 = 0xc3d2e1f0;
      local_d0 = 0;
      local_108 = ZEXT816(0);
      local_f8 = 0;
      cVar2 = (**(code **)(*local_140 + 0x38))();
      if (cVar2 == '\0') {
        do {
          if (*(int *)(param_1 + 0xfc) != 0) break;
          while ((*(int *)(param_1 + 0xf8) != 0 && (*(int *)(param_1 + 0xfc) == 0))) {
            FUN_14000f986();
          }
          QueryPerformanceCounter(&local_110);
          local_128._0_8_ = local_110.QuadPart;
          lVar5 = (**(code **)(*local_140 + 0x28))();
          local_118 = lVar4 - lVar5;
          if ((longlong)*(int *)(param_2 + 1) < lVar4 - lVar5) {
            local_118 = (longlong)*(int *)(param_2 + 1);
          }
          (**(code **)(*local_140 + 0x170))(local_140,*param_2);
          FUN_140c54e34(&local_e8,*param_2,local_118);
          QueryPerformanceCounter(&local_110);
          local_128._8_8_ = local_110.QuadPart;
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                    (*(longlong **)(param_1 + 0x30),local_128);
          plVar1 = *(longlong **)(param_1 + 0x30);
          uVar6 = (**(code **)(*local_140 + 0x28))();
          (**(code **)(*plVar1 + 0x10))(plVar1,param_3,uVar6);
          LOCK();
          *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + local_118;
          UNLOCK();
          cVar2 = (**(code **)(*local_140 + 0x38))();
        } while (cVar2 == '\0');
      }
      FUN_140c54d7a(&local_e8);
      local_108 = local_84;
      local_f8 = local_74;
      if (*(undefined1 (*) [16])(param_4 + 0x20) == local_84 && *(int *)(param_4 + 0x30) == local_74
         ) {
        bVar3 = 0;
      }
      else {
        bVar3 = (*(int *)(param_1 + 0xfc) == 0) * '\x03' + 1;
      }
    }
    (**(code **)(*local_140 + 0x1f8))();
    if (bVar3 == 0) {
      bVar3 = 0;
      goto LAB_142958db1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),param_3,*(undefined8 *)(param_4 + 0x58));
LAB_142958db1:
  if (local_140 != (longlong *)0x0) {
    (**(code **)*local_140)(local_140,1);
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 142958e0c FUN_142958e0c body=1888 status=ok
// SIG undefined FUN_142958e0c(void)

int FUN_142958e0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  void **ppvVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  ulonglong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8 [2];
  undefined8 local_e8;
  undefined **local_d8;
  longlong local_d0;
  longlong local_b0 [2];
  uint local_a0 [4];
  uint *local_90;
  uint local_88;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  LOCK();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  UNLOCK();
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1408be2c4(param_2,0);
  }
  if ((*(uint *)(param_1 + 0x50) & 0xfffffffd) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
              (*(longlong **)(param_1 + 0x38),param_1 + 0x58);
  }
  local_120 = param_1 + 0xa8;
  FUN_145d1d460(param_1 + 0x58,local_b0);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30),0);
  plVar19 = *(longlong **)(param_1 + 0x30);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))
                    (*(longlong **)(param_1 + 0x38),local_b0);
  (**(code **)(*plVar19 + 0x30))(plVar19,uVar9);
  local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x50));
  local_130 = (longlong *)(param_1 + 0x130);
  iVar14 = *(int *)(param_1 + 0x13c);
  FUN_146b9bb3d(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x13c) != 0)) {
    FUN_146b9bb6c(local_130);
  }
  local_140 = (longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) < 0) {
    FUN_146b9bb9c(local_140);
  }
  LOCK();
  *(undefined8 *)(param_1 + 0x110) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x118) = 0;
  UNLOCK();
  uVar21 = 0;
  local_138 = param_2;
  if (local_88 == 0) {
    uVar17 = 1;
    iVar14 = 0;
    uVar8 = 0;
  }
  else {
    puVar10 = local_90;
    if (local_90 == (uint *)0x0) {
      puVar10 = local_a0;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar14 = local_88 + 0x1e;
      if (-1 < (int)(local_88 - 1)) {
        iVar14 = local_88 - 1;
      }
      uVar21 = 0;
      uVar17 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar17 = uVar21;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar21) goto LAB_142958fe5;
        iVar14 = iVar14 + 0x20;
        uVar8 = puVar10[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)local_88 <= (int)uVar8) {
      uVar8 = local_88;
    }
  }
  if (uVar8 != local_88) {
    uVar15 = 0xffffffff;
    local_128 = (ulonglong)local_88;
    do {
      ppvVar18 = (void **)((longlong)(int)uVar8 * 0x18 + local_b0[0]);
      local_108 = (void *)0x0;
      uStack_100 = 0;
      if (&local_108 != ppvVar18) {
        uVar8 = *(uint *)(ppvVar18 + 1);
        pvVar5 = *ppvVar18;
        uStack_100 = (ulonglong)uVar8;
        if ((longlong)(int)uVar8 == 0) {
          uStack_100 = (ulonglong)uVar8;
        }
        else {
          FUN_1446dd670(&local_108,uVar8,0);
          memcpy(local_108,pvVar5,(longlong)(int)uVar8 * 2);
        }
      }
      local_118 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
      uVar7 = 1;
      if (1 < (uint)local_148) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))();
      }
      iVar20 = *(int *)(param_1 + 0x138);
      uVar8 = iVar20 + 1;
      *(uint *)(param_1 + 0x138) = uVar8;
      local_110 = uVar7;
      if (*(uint *)(param_1 + 0x13c) < uVar8) {
        FUN_146b9bbcc(local_130);
      }
      lVar16 = *(longlong *)(param_1 + 0x130);
      lVar22 = (longlong)iVar20 * 0x20;
      *(undefined1 *)(lVar16 + 8 + lVar22) = local_110;
      *(undefined8 *)(lVar16 + lVar22) = local_118;
      *(undefined8 *)(lVar16 + 0x10 + lVar22) = 0;
      *(void **)(lVar16 + 0x10 + lVar22) = local_108;
      local_108 = (void *)0x0;
      *(undefined4 *)(lVar16 + 0x18 + lVar22) = (undefined4)uStack_100;
      *(undefined4 *)(lVar16 + 0x1c + lVar22) = uStack_100._4_4_;
      uStack_100 = 0;
      iVar20 = *(int *)(param_1 + 0x128);
      *(uint *)(param_1 + 0x128) = iVar20 + 1U;
      if (*(uint *)(param_1 + 300) < iVar20 + 1U) {
        FUN_146b9bc52(local_140,iVar20);
      }
      *(undefined4 *)(*local_140 + (longlong)iVar20 * 4) = 1;
      if (local_108 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = local_90;
      if (local_90 == (uint *)0x0) {
        puVar10 = local_a0;
      }
      iVar20 = (int)uVar21;
      lVar16 = (longlong)iVar20;
      uVar8 = puVar10[lVar16] & uVar15;
      if (uVar8 == 0) {
        iVar11 = local_88 + 0x1e;
        if (-1 < (int)(local_88 - 1)) {
          iVar11 = local_88 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar20) {
          iVar12 = iVar20;
        }
        if (iVar20 < iVar11) {
          lVar22 = 0;
          do {
            uVar8 = puVar10[lVar16 + lVar22 + 1];
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar22 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1429592f3;
            }
            iVar14 = iVar14 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar12 - lVar16 != lVar22);
          uVar15 = 0xffffffff;
          lVar16 = (longlong)iVar12;
        }
        uVar21 = lVar16 + 1U & 0xffffffff;
        uVar8 = local_88;
      }
      else {
LAB_1429592f3:
        uVar17 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)local_88 <= (int)uVar8) {
          uVar8 = local_88;
        }
      }
    } while (uVar8 != (uint)local_128);
  }
LAB_142958fe5:
  LOCK();
  *(undefined4 *)(param_1 + 0x10c) = 0;
  UNLOCK();
  uVar9 = FUN_1405d8a54(0);
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x108) = 1;
    UNLOCK();
    FUN_146b93ca8(param_1);
    plVar19 = local_138;
  }
  else {
    local_118 = CONCAT44(local_118._4_4_,1);
    local_158 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"BuildPatchTool",L"VerificationThreadCount",&local_118);
    LOCK();
    *(int *)(param_1 + 0x108) = (int)local_118;
    UNLOCK();
    lVar16 = (longlong)(int)local_118;
    if (0 < lVar16) {
      local_148 = param_1 + 0x140;
      lVar22 = 0;
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
        iVar14 = *(int *)(param_1 + 0x148);
        *(uint *)(param_1 + 0x148) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x14c) < iVar14 + 1U) {
          FUN_146b97ff8(local_148,iVar14);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar14 * 8) = uVar9;
        plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x140) + lVar22 * 8);
        local_e8 = 0;
        local_d8 = &PTR_LAB_149f35ff0;
        local_f8[0] = &LAB_14295cfba;
        local_d0 = param_1;
        (**(code **)(*plVar19 + 8))(plVar19,local_f8);
        lVar22 = lVar22 + 1;
      } while (lVar16 != lVar22);
    }
    while (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
                             (*(longlong **)(param_1 + 0x100),100,0), cVar6 == '\0') {
      if (*(int *)(param_1 + 0xfc) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
                  (*(longlong **)(param_1 + 0x100),0xffffffff,0);
        break;
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x110));
    }
    plVar19 = local_138;
    lVar16 = (longlong)(int)local_118;
    if (0 < lVar16) {
      lVar22 = 0;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
                  (*(longlong **)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x140) + lVar22 * 8));
        lVar22 = lVar22 + 1;
      } while (lVar16 != lVar22);
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(int *)(param_1 + 0x14c) != 0) {
      FUN_146b97f98(param_1 + 0x140,0);
    }
  }
  FUN_14018802a(*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x138) < 1) {
    iVar14 = 0;
  }
  else {
    lVar16 = 0;
    lVar22 = 0x10;
    iVar14 = 0;
    do {
      iVar20 = *(int *)(*local_140 + lVar16 * 4);
      lVar3 = *local_130;
      if (iVar20 == 0) {
        if (*(char *)(lVar3 + -8 + lVar22) == '\x01') {
          FUN_14482b35e(local_120,&local_118,lVar3 + lVar22,0);
        }
      }
      else {
        local_148 = CONCAT44(local_148._4_4_,iVar14);
        iVar14 = (int)plVar19[1];
        *(uint *)(plVar19 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar19 + 0xc) < iVar14 + 1U) {
          FUN_1447a1bd6(plVar19,iVar14);
        }
        lVar4 = *plVar19;
        lVar13 = (longlong)iVar14 * 0x10;
        puVar1 = (undefined8 *)(lVar4 + lVar13);
        *(undefined8 *)(lVar4 + lVar13) = 0;
        iVar14 = *(int *)(lVar3 + 8 + lVar22);
        pvVar5 = *(void **)(lVar3 + lVar22);
        *(int *)(lVar4 + 8 + lVar13) = iVar14;
        if ((longlong)iVar14 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar14,0);
          memcpy((void *)*puVar1,pvVar5,(longlong)iVar14 * 2);
        }
        plVar19 = local_138;
        iVar14 = (uint)local_148;
        if ((uint)local_148 == 0) {
          iVar14 = iVar20;
        }
      }
      lVar16 = lVar16 + 1;
      lVar22 = lVar22 + 0x20;
    } while (lVar16 < *(int *)(param_1 + 0x138));
  }
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_b0);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar14;
}



// FUNCTION 14295956e FUN_14295956e body=1986 status=ok
// SIG undefined FUN_14295956e(void)

ulonglong FUN_14295956e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined8 unaff_RBX;
  undefined7 uVar13;
  ulonglong uVar12;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  void *_Src;
  undefined1 auStack_2d8 [32];
  longlong **local_2b8;
  uint local_2b0;
  int local_2ac;
  uint *local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  undefined4 local_278;
  longlong *local_270;
  undefined4 local_268;
  longlong *local_260;
  undefined4 local_258;
  longlong local_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  int local_228;
  undefined1 local_21c [260];
  undefined1 local_118 [16];
  int local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_94;
  undefined8 uStack_8c;
  int local_84;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  puVar17 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  uVar13 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar3 == 0) {
    uVar19 = 1;
    uVar22 = 0;
    iVar14 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar17;
    }
    uVar21 = *puVar11;
    if (uVar21 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar22 = 0;
      uVar19 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar19 = uVar22;
      }
      iVar14 = 0;
      do {
        if (uVar19 == uVar22) {
          uVar12 = CONCAT71(uVar13,1);
          goto LAB_142959ce9;
        }
        iVar14 = iVar14 + 0x20;
        uVar21 = puVar11[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar22 = 0;
      iVar14 = 0;
    }
    uVar19 = (ulonglong)(-uVar21 & uVar21);
    uVar12 = uVar19 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  uVar12 = CONCAT71(uVar13,1);
  if (iVar3 <= iVar7) {
LAB_142959ce9:
    if ((local_70 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
      return uVar12 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar21 = 0xffffffff;
  local_2a8 = puVar17;
  local_288 = param_1;
  do {
    local_f8 = 0xefcdab8967452301;
    uStack_f0 = 0x1032547698badcfe;
    local_e8 = 0xc3d2e1f0;
    local_e0 = 0;
    local_118 = ZEXT816(0);
    local_108 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_290 = (longlong)iVar7 * 0x18 + *param_1;
    lVar5 = (**(code **)(*(longlong *)param_1[10] + 0x68))();
    if (lVar5 == 0) {
      plVar6 = (longlong *)param_1[0xe];
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
        puVar17 = local_2a8;
      }
      local_280 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_278 = DAT_14c844848;
      local_2b8 = &local_280;
      uVar12 = 0;
      (**(code **)(*plVar6 + 0x38))(plVar6,2,&DAT_149f2f976,0);
    }
    else {
      uVar12 = *(ulonglong *)(lVar5 + 0x58);
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12 & 0xffffffff);
      }
      local_2b0 = uVar21;
      local_2ac = iVar14;
      local_2a0 = uVar19;
      local_298 = uVar22;
      if (uStack_240._4_4_ < (int)uVar12) {
        FUN_144893a1c(&local_248,uVar12 & 0xffffffff);
        uVar12 = *(ulonglong *)(lVar5 + 0x58);
      }
      lVar16 = local_290;
      (**(code **)(*(longlong *)param_1[0xf] + 0x20))((longlong *)param_1[0xf],local_290,uVar12);
      (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf],lVar16,0);
      if (0 < *(int *)(lVar5 + 0x50)) {
        lVar20 = 0;
        lVar16 = 0;
        do {
          lVar15 = *(longlong *)(lVar5 + 0x48);
          lVar1 = lVar20 + lVar15;
          (**(code **)(*(longlong *)param_1[0xf] + 0x18))((longlong *)param_1[0xf],lVar1);
          plVar6 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0xc] + 8))((longlong *)param_1[0xc],lVar1);
          uVar22 = local_298;
          uVar19 = local_2a0;
          puVar17 = local_2a8;
          uVar21 = local_2b0;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)param_1[0xe];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
              puVar17 = local_2a8;
              uVar19 = local_2a0;
              uVar22 = local_298;
              uVar21 = local_2b0;
            }
            iVar14 = local_2ac;
            local_270 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_268 = DAT_14c844848;
            lVar5 = *plVar6;
            local_2b8 = &local_270;
            puVar18 = &DAT_149f2f970;
LAB_142959a61:
            uVar12 = 0;
            (**(code **)(lVar5 + 0x38))(plVar6,2,puVar18,0);
            goto LAB_142959a67;
          }
          (**(code **)(*plVar6 + 8))(plVar6,&local_250,0);
          _Src = (void *)((ulonglong)*(uint *)(lVar15 + 0x10 + lVar20) + local_250);
          FUN_140c54e34(&local_f8,_Src,*(undefined4 *)(lVar15 + 0x14 + lVar20));
          uVar19 = uStack_240;
          uVar21 = *(uint *)(lVar15 + 0x14 + lVar20);
          iVar3 = (int)uStack_240;
          lVar15 = (longlong)(int)uStack_240;
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + uVar21);
          if ((uint)(uStack_240._4_4_ - iVar3) < uVar21) {
            FUN_1447403be(&local_248,uVar19 & 0xffffffff);
LAB_1429597c7:
            memcpy((void *)(lVar15 + local_248),_Src,(longlong)(int)uVar21);
          }
          else if (uVar21 != 0) goto LAB_1429597c7;
          (**(code **)(*plVar6 + 0x18))(plVar6);
          param_1 = local_288;
          (**(code **)(*(longlong *)local_288[0xf] + 0x28))((longlong *)local_288[0xf],local_290);
          cVar4 = (**(code **)(*(longlong *)param_1[0xd] + 0x30))((longlong *)param_1[0xd],lVar1);
          puVar17 = local_2a8;
          uVar21 = local_2b0;
          if (cVar4 == '\0') {
            plVar6 = (longlong *)param_1[0xe];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
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
              puVar17 = local_2a8;
              param_1 = local_288;
              uVar21 = local_2b0;
            }
            uVar22 = local_298;
            uVar19 = local_2a0;
            iVar14 = local_2ac;
            local_260 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_258 = DAT_14c844848;
            lVar5 = *plVar6;
            local_2b8 = &local_260;
            puVar18 = &DAT_149f2f96a;
            goto LAB_142959a61;
          }
          lVar16 = lVar16 + 1;
          lVar20 = lVar20 + 0x18;
        } while (lVar16 < *(int *)(lVar5 + 0x50));
      }
      FUN_140c54d7a(&local_f8);
      local_118._8_8_ = uStack_8c;
      local_118._0_8_ = local_94;
      local_108 = local_84;
      if (*(undefined1 (*) [16])(lVar5 + 0x20) == local_118 && *(int *)(lVar5 + 0x30) == local_84) {
        local_2b8 = (longlong **)(longlong)(int)uStack_240;
        local_238 = local_94;
        uStack_230 = uStack_8c;
        local_228 = local_84;
        (**(code **)(*(longlong *)param_1[0xb] + 0x10))
                  ((longlong *)param_1[0xb],local_21c,&local_238,local_248);
        uVar12 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        puVar17 = local_2a8;
        uVar19 = local_2a0;
        uVar22 = local_298;
        iVar14 = local_2ac;
        uVar21 = local_2b0;
      }
      else {
        uVar12 = 0;
        puVar17 = local_2a8;
        uVar19 = local_2a0;
        uVar22 = local_298;
        iVar14 = local_2ac;
        uVar21 = local_2b0;
      }
LAB_142959a67:
      (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                ((longlong *)param_1[0xf],local_290,uVar12 & 0xffffffff);
    }
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    uVar21 = uVar21 & ~(uint)uVar19;
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar17;
    }
    iVar3 = (int)param_1[5];
    iVar7 = (int)uVar22;
    lVar5 = (longlong)iVar7;
    uVar8 = puVar11[lVar5] & uVar21;
    if (uVar8 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      iVar9 = iVar9 >> 5;
      iVar10 = iVar9;
      if (iVar9 < iVar7) {
        iVar10 = iVar7;
      }
      if (iVar9 <= iVar7) goto LAB_142959ce9;
      lVar16 = 0;
      while( true ) {
        iVar14 = iVar14 + 0x20;
        uVar8 = puVar11[lVar5 + lVar16 + 1];
        if (uVar8 != 0) break;
        lVar16 = lVar16 + 1;
        if (iVar10 - lVar5 == lVar16) goto LAB_142959ce9;
      }
      uVar22 = (ulonglong)(iVar7 + (int)lVar16 + 1);
      uVar21 = 0xffffffff;
    }
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar19 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if ((iVar3 <= iVar7) || ((char)uVar12 == '\0')) goto LAB_142959ce9;
  } while( true );
}



// FUNCTION 142959d32 FUN_142959d32 body=2585 status=ok
// SIG undefined FUN_142959d32(void)

void FUN_142959d32(longlong *param_1)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined2 *local_100;
  int local_f8;
  longlong *local_f0;
  longlong **pplStack_e8;
  undefined1 local_dc [4];
  longlong local_d8 [2];
  longlong *local_c8;
  char local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *param_1;
  local_f8 = *(int *)(lVar1 + 0x28);
  lVar18 = (longlong)local_f8;
  local_100 = (undefined2 *)0x0;
  _Src = *(void **)(lVar1 + 0x20);
  FUN_1446dd670(&local_100,local_f8 + (uint)(lVar18 == 0) + 10,0);
  if (lVar18 != 0) {
    memcpy(local_100,_Src,lVar18 * 2);
  }
  FUN_1401aebe8(&local_100,L"chunkdump",9);
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  puVar15 = &DAT_149dfb77a;
  if (local_f8 != 0) {
    puVar15 = local_100;
  }
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))
            (*(longlong **)(lVar1 + 8),&local_108,puVar15,0x10);
  puVar15 = &DAT_149dfb77a;
  if (local_f8 != 0) {
    puVar15 = local_100;
  }
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x48))(*(longlong **)(lVar1 + 8),&local_110,puVar15,4);
  bVar21 = local_108 != (longlong *)0x0 && local_110 != (longlong *)0x0;
  if (local_108 != (longlong *)0x0 && local_110 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x1a0))(local_108,0);
  }
  local_c0 = -1;
  if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
    lVar18 = lVar1 + 0x150;
    local_128 = lVar18;
    do {
      cVar3 = FUN_146b87b50(lVar18,local_d8);
      if (cVar3 == '\0') {
        if (bVar21 == false) {
          puVar15 = &DAT_149dfb77a;
          if (local_f8 != 0) {
            puVar15 = local_100;
          }
          (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))
                    (*(longlong **)(lVar1 + 8),&local_f0,puVar15,0x10);
          plVar24 = local_108;
          local_108 = local_f0;
          local_f0 = (longlong *)0x0;
          if ((plVar24 != (longlong *)0x0) &&
             ((**(code **)*plVar24)(plVar24,1), local_f0 != (longlong *)0x0)) {
            (**(code **)*local_f0)(local_f0,1);
          }
          puVar15 = &DAT_149dfb77a;
          if (local_f8 != 0) {
            puVar15 = local_100;
          }
          (**(code **)(**(longlong **)(lVar1 + 8) + 0x48))
                    (*(longlong **)(lVar1 + 8),&local_f0,puVar15,4);
          plVar24 = local_110;
          local_110 = local_f0;
          local_f0 = (longlong *)0x0;
          if ((plVar24 != (longlong *)0x0) &&
             ((**(code **)*plVar24)(plVar24,1), local_f0 != (longlong *)0x0)) {
            (**(code **)*local_f0)(local_f0,1);
          }
          if (local_110 == (longlong *)0x0) {
            bVar21 = false;
          }
          else {
            bVar21 = local_108 != (longlong *)0x0;
          }
        }
        else {
          lVar20 = (**(code **)(*local_110 + 0x30))();
          lVar8 = (**(code **)(*local_108 + 0x30))();
          if (lVar20 != lVar8) {
            puVar15 = &DAT_149dfb77a;
            if (local_f8 != 0) {
              puVar15 = local_100;
            }
            (**(code **)(**(longlong **)(lVar1 + 8) + 0x48))
                      (*(longlong **)(lVar1 + 8),&local_f0,puVar15,4);
            plVar24 = local_110;
            local_110 = local_f0;
            local_f0 = (longlong *)0x0;
            if ((plVar24 != (longlong *)0x0) &&
               ((**(code **)*plVar24)(plVar24,1), local_f0 != (longlong *)0x0)) {
              (**(code **)*local_f0)(local_f0,1);
            }
            bVar21 = local_110 != (longlong *)0x0;
            goto LAB_14295a5ee;
          }
          (**(code **)(*local_108 + 0x1f0))();
          bVar21 = (*(byte *)((longlong)local_108 + 0x29) & 2) == 0;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c991e88) &&
           (FUN_144b3d300(&DAT_14c991e88), DAT_14c991e88 == -1)) {
          DAT_14c991e84 = (undefined4)(longlong)(*(double *)(lVar1 + 0x38) * 1000.0);
          _Init_thread_footer(&DAT_14c991e88);
        }
        (**(code **)(**(longlong **)(lVar1 + 0x1a0) + 0x20))
                  (*(longlong **)(lVar1 + 0x1a0),DAT_14c991e84,0);
        (**(code **)(**(longlong **)(lVar1 + 0x1a0) + 0x18))();
      }
      else {
        LOCK();
        *(int *)(lVar1 + 0x160) = *(int *)(lVar1 + 0x160) + -1;
        UNLOCK();
        (**(code **)(**(longlong **)(lVar1 + 0x168) + 0x10))();
        plVar24 = local_c8;
        if (local_c0 == '\x01') {
          uVar5 = FUN_1447addd0(local_d8,0x10);
          iVar6 = FUN_146b51d36(local_b8,uVar5);
          plVar2 = local_108;
          if (iVar6 == -1) {
            if (bVar21 == false) {
LAB_14295a382:
              FUN_146b88392(lVar1,local_d8);
            }
            else {
              uVar10 = (**(code **)(*local_108 + 0x30))(local_108);
              (**(code **)(*plVar2 + 0x1a0))(plVar2,uVar10);
              local_118 = (longlong *)(**(code **)(*local_108 + 0x28))();
              cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x38))
                                (*(longlong **)(lVar1 + 0x10),local_108,plVar24);
              (**(code **)(*local_108 + 0x28))();
              bVar4 = *(byte *)((longlong)local_108 + 0x29) & 2;
              bVar21 = (bool)(bVar4 >> 1 ^ 1);
              if (bVar4 != 0 || cVar3 != '\0') goto LAB_14295a382;
              pplStack_e8 = &local_118;
              local_f0 = local_d8;
              FUN_146b51a92(local_b8,local_dc,&local_f0,0);
            }
            (**(code **)(**(longlong **)(lVar1 + 0x18) + 8))(*(longlong **)(lVar1 + 0x18),local_d8);
          }
          if (plVar24 != (longlong *)0x0) {
            (**(code **)*plVar24)(plVar24,1);
          }
        }
        else {
          if (local_c0 != '\0') goto LAB_14295a5ee;
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x10))(*(longlong **)(lVar1 + 0x18),local_d8)
          ;
          local_f0 = (longlong *)CONCAT71(local_f0._1_7_,2);
          pplStack_e8 = (longlong **)0x0;
          uVar5 = FUN_1447addd0(local_d8,0x10);
          iVar6 = FUN_146b51d36(local_b8,uVar5,local_d8);
          if (iVar6 != -1) {
            uVar5 = FUN_1447addd0(local_d8,0x10);
            iVar6 = FUN_146b51d36(local_b8,uVar5,local_d8);
            lVar20 = 0;
            if (iVar6 != -1) {
              lVar20 = (longlong)iVar6 * 0x20 + local_b8[0];
            }
            if (bVar21 != false) {
              lVar8 = (**(code **)(*local_110 + 0x30))();
              lVar9 = (**(code **)(*local_108 + 0x30))();
              if (lVar8 != lVar9) {
                puVar15 = &DAT_149dfb77a;
                if (local_f8 != 0) {
                  puVar15 = local_100;
                }
                (**(code **)(**(longlong **)(lVar1 + 8) + 0x48))
                          (*(longlong **)(lVar1 + 8),&local_118,puVar15,4);
                plVar2 = local_110;
                local_110 = local_118;
                local_118 = (longlong *)0x0;
                if ((plVar2 != (longlong *)0x0) &&
                   ((**(code **)*plVar2)(plVar2,1), local_118 != (longlong *)0x0)) {
                  (**(code **)*local_118)(local_118,1);
                }
                bVar21 = local_110 != (longlong *)0x0;
              }
            }
            if (bVar21 == false) {
LAB_14295a0b7:
              if ((char)local_f0 == '\0') goto LAB_14295a5b9;
            }
            else {
              lVar8 = *(longlong *)(lVar20 + 0x10);
              lVar9 = (**(code **)(*local_110 + 0x30))();
              if (lVar9 <= lVar8) goto LAB_14295a0b7;
              (**(code **)(*local_108 + 0x1f0))();
              (**(code **)(*local_110 + 0x1a0))(local_110,*(undefined8 *)(lVar20 + 0x10));
              pplStack_e8 = (longlong **)
                            (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x18))
                                      (*(longlong **)(lVar1 + 0x10),local_110,&local_f0);
              if (((*(byte *)((longlong)local_110 + 0x29) & 2) == 0) &&
                 ((*(byte *)((longlong)local_108 + 0x29) & 2) == 0)) {
                cVar3 = FUN_146b8830c(pplStack_e8,local_d8);
                bVar21 = true;
                if (cVar3 != '\0') goto LAB_14295a0b7;
              }
              else {
                bVar21 = false;
              }
              local_f0 = (longlong *)CONCAT71(local_f0._1_7_,7);
            }
            FUN_146b9566e(local_b8,local_d8);
            FUN_146b88392(lVar1,local_d8);
            local_118 = (longlong *)0x0;
            puVar15 = &DAT_149dfb77a;
            if (local_f8 != 0) {
              puVar15 = local_100;
            }
            (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))
                      (*(longlong **)(lVar1 + 8),puVar15,&local_118);
            local_120 = plVar24;
            lVar18 = local_128;
            if (local_90 == 0) {
              uVar19 = 1;
              uVar22 = 0;
              iVar6 = 0;
              iVar23 = 0;
            }
            else {
              puVar14 = local_98;
              if (local_98 == (uint *)0x0) {
                puVar14 = local_a8;
              }
              uVar17 = *puVar14;
              if (uVar17 == 0) {
                iVar6 = local_90 + 0x1e;
                if (-1 < local_90 + -1) {
                  iVar6 = local_90 + -1;
                }
                uVar22 = 0;
                uVar16 = (ulonglong)(uint)(iVar6 >> 5);
                if (iVar6 >> 5 < 1) {
                  uVar16 = uVar22;
                }
                iVar6 = 0;
                do {
                  if (uVar16 == uVar22) goto LAB_14295a5b9;
                  iVar6 = iVar6 + 0x20;
                  uVar17 = puVar14[uVar22 + 1];
                  uVar22 = uVar22 + 1;
                } while (uVar17 == 0);
              }
              else {
                uVar22 = 0;
                iVar6 = 0;
              }
              uVar19 = (ulonglong)(-uVar17 & uVar17);
              uVar16 = uVar19 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar23 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (local_90 <= iVar23) {
                iVar23 = local_90;
              }
            }
            if (iVar23 < local_90) {
              uVar17 = 0xffffffff;
              iVar7 = local_90;
              do {
                if ((longlong)local_118 <=
                    *(longlong *)(local_b8[0] + 0x10 + (longlong)iVar23 * 0x20)) {
                  FUN_146b88392(lVar1,local_b8[0] + (longlong)iVar23 * 0x20);
                  FUN_146b95706(local_b8,iVar23);
                  iVar7 = local_90;
                }
                uVar17 = uVar17 & ~(uint)uVar19;
                puVar14 = local_98;
                if (local_98 == (uint *)0x0) {
                  puVar14 = local_a8;
                }
                iVar23 = (int)uVar22;
                lVar20 = (longlong)iVar23;
                uVar11 = puVar14[lVar20] & uVar17;
                plVar24 = local_120;
                lVar18 = local_128;
                if (uVar11 == 0) {
                  iVar12 = iVar7 + 0x1e;
                  if (-1 < iVar7 + -1) {
                    iVar12 = iVar7 + -1;
                  }
                  iVar12 = iVar12 >> 5;
                  iVar13 = iVar12;
                  if (iVar12 < iVar23) {
                    iVar13 = iVar23;
                  }
                  if (iVar12 <= iVar23) break;
                  lVar8 = 0;
                  while( true ) {
                    iVar6 = iVar6 + 0x20;
                    uVar11 = puVar14[lVar20 + lVar8 + 1];
                    if (uVar11 != 0) break;
                    lVar8 = lVar8 + 1;
                    if (iVar13 - lVar20 == lVar8) goto LAB_14295a5b9;
                  }
                  uVar22 = (ulonglong)(iVar23 + (int)lVar8 + 1);
                  uVar17 = 0xffffffff;
                }
                uVar19 = (ulonglong)(-uVar11 & uVar11);
                uVar16 = uVar19 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar23 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              } while (iVar23 < iVar7);
            }
          }
LAB_14295a5b9:
          lVar20 = *plVar24;
          *(longlong **)(lVar20 + 0x80) = local_f0;
          *(longlong ***)(lVar20 + 0x88) = pplStack_e8;
          FUN_140b576f0();
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x18))(*(longlong **)(lVar1 + 0x18),local_d8)
          ;
          FUN_146b95624(plVar24);
        }
      }
LAB_14295a5ee:
    } while ((*(byte *)(lVar1 + 0x140) & 1) != 0);
  }
  plVar24 = local_108;
  if (local_108 != (longlong *)0x0) {
    local_108 = (longlong *)0x0;
    (**(code **)*plVar24)(plVar24,1);
  }
  plVar24 = local_110;
  if (local_110 != (longlong *)0x0) {
    local_110 = (longlong *)0x0;
    (**(code **)*plVar24)(plVar24,1);
  }
  puVar15 = local_100;
  if (local_f8 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x68))(*(longlong **)(lVar1 + 8),puVar15);
  *(undefined4 *)(*(longlong *)(lVar1 + 0x170) + 0x80) = 0;
  FUN_140b576f0();
  if (local_110 != (longlong *)0x0) {
    (**(code **)*local_110)(local_110,1);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)*local_108)(local_108,1);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146b4803c(local_b8);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295a762 FUN_14295a762 body=29 status=ok
// SIG undefined FUN_14295a762(void)

undefined8 FUN_14295a762(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295a780 FUN_14295a780 body=64 status=ok
// SIG undefined FUN_14295a780(void)

undefined8 * FUN_14295a780(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f35bc0;
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



// FUNCTION 14295a7c4 FUN_14295a7c4 body=81 status=ok
// SIG undefined FUN_14295a7c4(void)

undefined8 FUN_14295a7c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14295a81a FUN_14295a81a body=89 status=ok
// SIG undefined FUN_14295a81a(void)

bool FUN_14295a81a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14295a865;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14295a865:
  return lVar6 == param_2;
}



// FUNCTION 14295a890 FUN_14295a890 body=118 status=ok
// SIG undefined FUN_14295a890(void)

void FUN_14295a890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ad60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35bc0;
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



// FUNCTION 14295a906 FUN_14295a906 body=118 status=ok
// SIG undefined FUN_14295a906(void)

void FUN_14295a906(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ad60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35bc0;
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



// FUNCTION 14295a97c FUN_14295a97c body=156 status=ok
// SIG undefined FUN_14295a97c(void)

void FUN_14295a97c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2ad60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f35bc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014295aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14295aa18 FUN_14295aa18 body=115 status=ok
// SIG undefined FUN_14295aa18(void)

void FUN_14295aa18(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_4;
  FUN_14295ab2e(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295aa9c FUN_14295aa9c body=144 status=ok
// SIG undefined FUN_14295aa9c(void)

ulonglong FUN_14295aa9c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_4;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    FUN_14295ab2e(param_1 + 0x28,param_2,&local_20);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295ab2e FUN_14295ab2e body=268 status=ok
// SIG undefined FUN_14295ab2e(void)

void FUN_14295ab2e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  uVar3 = *param_3;
  plVar4 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x100);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar5 + 0x130) != *(int *)(lVar5 + 0x15c)) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar7 = lVar5 + 0x160;
    if (*(longlong *)(lVar5 + 0x168) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x168);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 0x170) - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *(longlong *)(lVar5 + 0x128) + (longlong)iVar8 * 0x30;
        if (*(uint *)(*(longlong *)(lVar5 + 0x128) + (longlong)iVar8 * 0x30) == uVar2) {
          if ((((lVar7 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar7 + 0x20) != 0)) &&
             (plVar6 = *(longlong **)(lVar7 + 0x18), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x60))(plVar6,uVar2,uVar3);
          }
          break;
        }
        iVar8 = *(int *)(lVar7 + 0x28);
      } while (iVar8 != -1);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x10))
            (*(longlong **)(lVar5 + 0x20),(int)param_1[1],uVar3);
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
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014295ac29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14295ac3a FUN_14295ac3a body=78 status=ok
// SIG undefined FUN_14295ac3a(void)

undefined8 * FUN_14295ac3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f35c30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14295ac8c FUN_14295ac8c body=81 status=ok
// SIG undefined FUN_14295ac8c(void)

undefined8 FUN_14295ac8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14295ace2 FUN_14295ace2 body=89 status=ok
// SIG undefined FUN_14295ace2(void)

bool FUN_14295ace2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14295ad2d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14295ad2d:
  return lVar6 == param_2;
}



// FUNCTION 14295ad58 FUN_14295ad58 body=222 status=ok
// SIG undefined FUN_14295ad58(void)

void FUN_14295ad58(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149f2a800;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f35c30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar2[0xc] = uVar6;
  puVar2[9] = uVar4;
  puVar2[10] = uVar5;
  return;
}



// FUNCTION 14295ae36 FUN_14295ae36 body=222 status=ok
// SIG undefined FUN_14295ae36(void)

void FUN_14295ae36(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149f2a800;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f35c30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar2[0xc] = uVar6;
  puVar2[9] = uVar4;
  puVar2[10] = uVar5;
  return;
}



// FUNCTION 14295af14 FUN_14295af14 body=281 status=ok
// SIG undefined FUN_14295af14(void)

void FUN_14295af14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149f2a800;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_149f35c30;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x20);
  p_Var3->EntryCount = (int)lVar4;
  p_Var3->ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var3->Flags = (int)uVar5;
  p_Var3->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar5 >> 0x20);
  p_Var3->SpareWORD = (short)((ulonglong)uVar5 >> 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var3[1].Type = (short)uVar1;
  p_Var3[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  p_Var3[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar2 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var3[1].ProcessLocksList.Flink = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var3[1].CriticalSection,iVar2,0);
    memcpy(p_Var3[1].CriticalSection,_Src,(longlong)iVar2 * 2);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  DVar7 = *(DWORD *)(param_1 + 0x50);
  DVar8 = *(DWORD *)(param_1 + 0x54);
  uVar9 = *(undefined4 *)(param_1 + 0x5c);
  uVar10 = *(undefined4 *)(param_1 + 0x60);
  uVar11 = *(undefined4 *)(param_1 + 100);
  p_Var3[1].Flags = *(DWORD *)(param_1 + 0x58);
  p_Var3[1].CreatorBackTraceIndexHigh = (short)uVar9;
  p_Var3[1].SpareWORD = (short)((uint)uVar9 >> 0x10);
  p_Var3[2].Type = (short)uVar10;
  p_Var3[2].CreatorBackTraceIndex = (short)((uint)uVar10 >> 0x10);
  *(undefined4 *)&p_Var3[2].field_0x4 = uVar11;
  *(undefined4 *)&p_Var3[1].ProcessLocksList.Blink = uVar1;
  *(undefined4 *)((longlong)&p_Var3[1].ProcessLocksList.Blink + 4) = uVar6;
  p_Var3[1].EntryCount = DVar7;
  p_Var3[1].ContentionCount = DVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014295b017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14295b02e FUN_14295b02e body=159 status=ok
// SIG undefined FUN_14295b02e(void)

void FUN_14295b02e(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_4;
  FUN_14295b19e(param_1 + 0x28,param_2,param_3,&local_19);
  plVar3 = *(longlong **)(param_2 + 8);
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
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295b0de FUN_14295b0de body=190 status=ok
// SIG undefined FUN_14295b0de(void)

ulonglong FUN_14295b0de(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = param_4;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    FUN_14295b19e(param_1 + 0x28,param_2,param_3,&local_21);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295b19e FUN_14295b19e body=1186 status=ok
// SIG undefined FUN_14295b19e(void)

void FUN_14295b19e(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong lVar9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_c8 [40];
  LARGE_INTEGER local_a0;
  int local_94;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  LARGE_INTEGER local_70;
  int local_68;
  LARGE_INTEGER local_60;
  int local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = *param_4;
  plVar12 = (longlong *)*param_3;
  plVar5 = (longlong *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_90 = *param_2;
  local_88 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *param_1;
  local_49 = uVar4;
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x30))(*(longlong **)(lVar6 + 0x28),&local_90);
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (plVar12 == (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    QueryPerformanceCounter(&local_70);
    *(LARGE_INTEGER *)(param_1 + 6) = local_70;
    lVar9 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar12 + 0x58))(plVar12);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
    QueryPerformanceCounter(&local_70);
    *(LARGE_INTEGER *)(param_1 + 6) = local_70;
    lVar9 = (**(code **)(*plVar12 + 0x48))(plVar12);
    lVar9 = (longlong)*(int *)(lVar9 + 8);
  }
  param_1[7] = lVar9;
  local_70.QuadPart = 0;
  local_68 = 0;
  local_60.QuadPart = 0;
  local_58 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x100);
  EnterCriticalSection(lpCriticalSection);
  bVar7 = true;
  if (*(int *)(lVar6 + 0x130) != *(int *)(lVar6 + 0x15c)) {
    lVar9 = lVar6 + 0x160;
    if (*(longlong *)(lVar6 + 0x168) != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x168);
    }
    iVar15 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar6 + 0x170) - 1U & *(uint *)(param_1 + 1)) * 4
                     );
    if (iVar15 != -1) {
      lVar9 = *(longlong *)(lVar6 + 0x128);
      do {
        lVar14 = (longlong)iVar15 * 0x30;
        if (*(uint *)(lVar9 + lVar14) == *(uint *)(param_1 + 1)) {
          lVar9 = lVar9 + lVar14;
          LVar10.QuadPart = *(LONGLONG *)(lVar9 + 8);
          *(LONGLONG *)(lVar9 + 8) = 0;
          iVar13 = *(int *)(lVar9 + 0x10);
          *(undefined4 *)(lVar9 + 0x10) = 0;
          if (local_68 == 0) {
LAB_14295b31f:
            if ((longlong *)local_70.QuadPart != (longlong *)0x0) {
              local_a0 = LVar10;
              local_94 = iVar13;
              FUN_1400020a8();
              LVar10 = local_a0;
              iVar13 = local_94;
            }
          }
          else if ((longlong *)local_70.QuadPart != (longlong *)0x0) {
            local_a0.QuadPart = LVar10.QuadPart;
            local_94 = iVar13;
            (*(code *)**(undefined8 **)local_70)(local_70.QuadPart,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            local_68 = 0;
            LVar10 = local_a0;
            iVar13 = local_94;
            goto LAB_14295b31f;
          }
          local_68 = iVar13;
          LVar11 = *(LARGE_INTEGER *)(lVar9 + 0x18);
          *(undefined8 *)(lVar9 + 0x18) = 0;
          iVar13 = *(int *)(lVar9 + 0x20);
          *(undefined4 *)(lVar9 + 0x20) = 0;
          local_70 = LVar10;
          if (local_58 == 0) {
LAB_14295b35d:
            if ((longlong *)local_60.QuadPart != (longlong *)0x0) {
              local_a0 = LVar11;
              FUN_1400020a8();
              LVar11 = local_a0;
            }
          }
          else if ((longlong *)local_60.QuadPart != (longlong *)0x0) {
            local_a0 = LVar11;
            (*(code *)**(undefined8 **)local_60)(local_60.QuadPart,0);
            FUN_1446efa72(&local_60,0,0,0x10);
            local_58 = 0;
            LVar11 = local_a0;
            goto LAB_14295b35d;
          }
          local_60 = LVar11;
          local_58 = iVar13;
          FUN_146b9635a((longlong *)(lVar6 + 0x128),iVar15);
          bVar7 = false;
          break;
        }
        iVar15 = *(int *)(lVar14 + lVar9 + 0x28);
      } while (iVar15 != -1);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  param_1 = param_1 + 1;
  if (!bVar7) {
    plVar12 = (longlong *)FUN_146b963ff(&local_90,&local_49);
    local_80 = plVar12 + 2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_78 = plVar12;
    if ((longlong *)local_70.QuadPart != (longlong *)0x0 && local_68 != 0) {
      (**(code **)(*(longlong *)local_70 + 0x60))(local_70.QuadPart,(int)*param_1,&local_80);
    }
    plVar3 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x38));
  FUN_146b9661c(lVar6 + 0x60,(int)*param_1);
  if ((LPCRITICAL_SECTION)(lVar6 + 0x38) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x38));
  }
  (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x18))(*(longlong **)(lVar6 + 0x20),param_1);
  if (local_58 == 0) {
LAB_14295b49b:
    if ((longlong *)local_60.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((longlong *)local_60.QuadPart != (longlong *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60.QuadPart,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_14295b49b;
  }
  if (local_68 != 0) {
    if ((longlong *)local_70.QuadPart == (longlong *)0x0) goto LAB_14295b4ee;
    (*(code *)**(undefined8 **)local_70)(local_70.QuadPart,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if ((longlong *)local_70.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14295b4ee:
  plVar12 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14295b642 FUN_14295b642 body=547 status=ok
// SIG undefined FUN_14295b642(void)

longlong * FUN_14295b642(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14295b866 FUN_14295b866 body=1978 status=ok
// SIG undefined FUN_14295b866(void)

void FUN_14295b866(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  LARGE_INTEGER LVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  byte bVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  LARGE_INTEGER local_e0;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  LARGE_INTEGER local_c0;
  int local_b8;
  longlong *local_b0;
  DWORD local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [8];
  longlong local_88;
  byte local_78;
  undefined4 local_74;
  LARGE_INTEGER local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 == (longlong *)0x0) goto LAB_14295b8d9;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  iVar10 = (int)plVar4[1];
  do {
    if (iVar10 == 0) goto LAB_14295b8d9;
    LOCK();
    iVar15 = (int)plVar4[1];
    bVar22 = iVar10 == iVar15;
    if (bVar22) {
      *(int *)(plVar4 + 1) = iVar10 + 1;
      iVar15 = iVar10;
    }
    iVar10 = iVar15;
    UNLOCK();
  } while (!bVar22);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    bVar18 = *(byte *)(*(longlong *)(param_1 + 0xd8) + 8);
    local_a0 = (void *)0x0;
    local_98 = *(int *)(param_1 + 0xd0);
    lVar21 = (longlong)local_98;
    _Src = *(void **)(param_1 + 200);
    if (lVar21 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,_Src,lVar21 * 2);
    }
    FUN_146b8905e(local_90,*(undefined4 *)(param_1 + 0xc0),&local_a0);
    if ((bVar18 & 1) == 0) {
      if (*(int *)(param_1 + 0xd0) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(param_1 + 200);
      }
      bVar18 = 0;
      (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x48))
                (*(longlong **)(lVar5 + 0x18),&local_d0,puVar19,0);
      if (local_d0 != (longlong *)0x0) {
        lVar21 = (**(code **)(*local_d0 + 0x30))();
        uVar11 = uStack_50._4_4_;
        iVar10 = 0;
        if ((longlong)uStack_50 < 0) {
          uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
          FUN_144893a1c(&local_58,0);
          uVar11 = uStack_50._4_4_;
          iVar10 = (int)uStack_50;
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,iVar10 + (uint)lVar21);
        if (uVar11 - iVar10 < (uint)lVar21) {
          FUN_1447403be(&local_58,iVar10);
        }
        if (lVar21 < 1) {
          lVar17 = 0;
        }
        else {
          p_Var3 = (LPCRITICAL_SECTION)(lVar5 + 0x100);
          local_e8 = (longlong *)(lVar5 + 0x160);
          lVar17 = 0;
          do {
            if ((*(byte *)(*(longlong *)(param_1 + 0xd8) + 8) & 1) != 0) break;
            if ((*(byte *)(*(longlong *)(param_1 + 0xd8) + 8) & 1) != 0) {
              bVar18 = 0;
              local_60 = lVar17;
              goto LAB_14295bb95;
            }
            lVar20 = lVar21 - lVar17;
            if (0x1fffff < lVar20) {
              lVar20 = 0x200000;
            }
            (**(code **)(*local_d0 + 0x170))(local_d0,local_58 + lVar17,lVar20);
            lVar17 = lVar17 + lVar20;
            EnterCriticalSection(p_Var3);
            if (*(int *)(lVar5 + 0x130) != *(int *)(lVar5 + 0x15c)) {
              uVar11 = *(uint *)(param_1 + 0xc0);
              plVar14 = *(longlong **)(lVar5 + 0x168);
              if (*(longlong **)(lVar5 + 0x168) == (longlong *)0x0) {
                plVar14 = local_e8;
              }
              iVar10 = *(int *)((longlong)plVar14 +
                               (ulonglong)(*(int *)(lVar5 + 0x170) - 1U & uVar11) * 4);
              if (iVar10 != -1) {
                do {
                  lVar20 = *(longlong *)(lVar5 + 0x128) + (longlong)iVar10 * 0x30;
                  if (*(uint *)(*(longlong *)(lVar5 + 0x128) + (longlong)iVar10 * 0x30) == uVar11) {
                    if ((((lVar20 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar20 + 0x20) != 0)
                        ) && (plVar14 = *(longlong **)(lVar20 + 0x18), plVar14 != (longlong *)0x0))
                    {
                      (**(code **)(*plVar14 + 0x60))(plVar14,uVar11,lVar17);
                    }
                    break;
                  }
                  iVar10 = *(int *)(lVar20 + 0x28);
                } while (iVar10 != -1);
              }
            }
            if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection(p_Var3);
            }
            (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x10))
                      (*(longlong **)(lVar5 + 0x20),*(undefined4 *)(param_1 + 0xc0),lVar17);
          } while (lVar17 < lVar21);
        }
        local_60 = lVar17;
        bVar18 = (**(code **)(*local_d0 + 0x1f8))();
        bVar18 = lVar17 == lVar21 & bVar18;
      }
LAB_14295bb95:
      QueryPerformanceCounter(&local_c0);
      local_68 = local_c0;
      local_74 = 0x194;
      if (bVar18 != 0) {
        local_74 = 200;
      }
      local_78 = bVar18;
      if (local_d0 != (longlong *)0x0) {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
    else {
      bVar18 = ~bVar18 & 1;
    }
    if ((bVar18 == 0) &&
       (uVar6 = uStack_50 >> 0x20, uStack_50 = uStack_50 & 0xffffffff00000000, (int)uVar6 != 0)) {
      FUN_144893a1c(&local_58,0);
    }
    local_c0.QuadPart = 0;
    local_b8 = 0;
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
    p_Var3 = (LPCRITICAL_SECTION)(lVar5 + 0x100);
    EnterCriticalSection(p_Var3);
    bVar22 = true;
    if (*(int *)(lVar5 + 0x130) != *(int *)(lVar5 + 0x15c)) {
      lVar21 = lVar5 + 0x160;
      if (*(longlong *)(lVar5 + 0x168) != 0) {
        lVar21 = *(longlong *)(lVar5 + 0x168);
      }
      iVar10 = *(int *)(lVar21 + (ulonglong)
                                 (*(int *)(lVar5 + 0x170) - 1U & *(uint *)(param_1 + 0xc0)) * 4);
      if (iVar10 != -1) {
        plVar14 = (longlong *)(lVar5 + 0x128);
        lVar21 = *plVar14;
        do {
          lVar17 = (longlong)iVar10 * 0x30;
          if (*(uint *)(lVar21 + lVar17) == *(uint *)(param_1 + 0xc0)) {
            lVar21 = lVar21 + lVar17;
            LVar12.QuadPart = *(LONGLONG *)(lVar21 + 8);
            *(LONGLONG *)(lVar21 + 8) = 0;
            iVar15 = *(int *)(lVar21 + 0x10);
            *(undefined4 *)(lVar21 + 0x10) = 0;
            if (local_b8 == 0) {
LAB_14295bcd0:
              if ((longlong *)local_c0.QuadPart != (longlong *)0x0) {
                local_e8 = plVar14;
                local_e0 = LVar12;
                local_d4 = iVar15;
                FUN_1400020a8();
                LVar12 = local_e0;
                plVar14 = local_e8;
                iVar15 = local_d4;
              }
            }
            else if ((longlong *)local_c0.QuadPart != (longlong *)0x0) {
              local_e8 = plVar14;
              local_e0.QuadPart = LVar12.QuadPart;
              local_d4 = iVar15;
              (*(code *)**(undefined8 **)local_c0)(local_c0.QuadPart,0);
              FUN_1446efa72(&local_c0,0,0,0x10);
              local_b8 = 0;
              LVar12 = local_e0;
              plVar14 = local_e8;
              iVar15 = local_d4;
              goto LAB_14295bcd0;
            }
            local_b8 = iVar15;
            plVar13 = *(longlong **)(lVar21 + 0x18);
            *(undefined8 *)(lVar21 + 0x18) = 0;
            uVar16 = *(DWORD *)(lVar21 + 0x20);
            *(undefined4 *)(lVar21 + 0x20) = 0;
            local_c0 = LVar12;
            if (local_a8 == 0) {
LAB_14295bd0e:
              if (local_b0 != (longlong *)0x0) {
                local_e0.s.LowPart = uVar16;
                local_e8 = plVar14;
                FUN_1400020a8();
                plVar14 = local_e8;
                uVar16 = local_e0._0_4_;
              }
            }
            else if (local_b0 != (longlong *)0x0) {
              local_e0.s.LowPart = uVar16;
              local_e8 = plVar13;
              (**(code **)*local_b0)(local_b0,0);
              FUN_1446efa72(&local_b0,0,0,0x10);
              local_a8 = 0;
              plVar13 = local_e8;
              uVar16 = local_e0._0_4_;
              goto LAB_14295bd0e;
            }
            local_a8 = uVar16;
            local_b0 = plVar13;
            FUN_146b9635a(plVar14,iVar10);
            bVar22 = false;
            break;
          }
          iVar10 = *(int *)(lVar17 + lVar21 + 0x28);
        } while (iVar10 != -1);
      }
    }
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var3);
    }
    if (!bVar22) {
      plVar14 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar14[1] = (longlong)&DAT_100000001;
      *plVar14 = (longlong)&PTR_FUN_149f35d10;
      local_d0 = plVar14 + 2;
      uVar16 = (undefined4)local_58;
      uVar7 = local_58._4_4_;
      uVar8 = (int)uStack_50;
      uVar9 = uStack_50._4_4_;
      local_58 = 0;
      uStack_50 = 0;
      plVar14[2] = (longlong)&PTR_FUN_149f35d30;
      *(undefined4 *)(plVar14 + 3) = uVar16;
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar7;
      *(undefined4 *)(plVar14 + 4) = uVar8;
      *(undefined4 *)((longlong)plVar14 + 0x24) = uVar9;
      *(byte *)(plVar14 + 5) = bVar18;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_c8 = plVar14;
      if ((longlong *)local_c0.QuadPart != (longlong *)0x0 && local_b8 != 0) {
        (**(code **)(*(longlong *)local_c0 + 0x60))
                  (local_c0.QuadPart,*(undefined4 *)(param_1 + 0xc0),&local_d0);
      }
      plVar13 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_c8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar14 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x38));
    FUN_146b96cd8(lVar5 + 0xb0,*(undefined4 *)(param_1 + 0xc0));
    if ((LPCRITICAL_SECTION)(lVar5 + 0x38) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x38));
    }
    (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x18))(*(longlong **)(lVar5 + 0x20),local_90);
    if (local_a8 == 0) {
LAB_14295be92:
      if (local_b0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_b0 != (longlong *)0x0) {
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
      goto LAB_14295be92;
    }
    if (local_b8 == 0) {
LAB_14295bed7:
      if ((longlong *)local_c0.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if ((longlong *)local_c0.QuadPart != (longlong *)0x0) {
      (*(code *)**(undefined8 **)local_c0)(local_c0.QuadPart,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
      goto LAB_14295bed7;
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  plVar14 = plVar4 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14295b8d9:
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14295c022 FUN_14295c022 body=110 status=ok
// SIG undefined FUN_14295c022(void)

undefined8 * FUN_14295c022(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295c090 FUN_14295c090 body=183 status=ok
// SIG undefined FUN_14295c090(void)

bool FUN_14295c090(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_140f5cb3a(lVar1 + 0x1e0,uVar3,param_2);
  if (iVar4 == -1) {
    lVar2 = param_1[1];
    uVar3 = FUN_1447addd0(param_2,0x10);
    iVar4 = FUN_140f5cb3a(lVar2,uVar3,param_2);
    if (iVar4 != -1) {
      uVar3 = FUN_1447addd0(param_2,0x10);
      iVar4 = FUN_140f5cb3a(lVar1 + 0x10,uVar3,param_2);
      if (iVar4 != -1) {
        uVar3 = FUN_1447addd0(param_2,0x10);
        iVar4 = FUN_140f5cb3a(lVar1 + 0x230,uVar3,param_2);
        return iVar4 != -1;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 14295c166 FUN_14295c166 body=12 status=ok
// SIG undefined FUN_14295c166(void)

void FUN_14295c166(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295c16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295c172 FUN_14295c172 body=29 status=ok
// SIG undefined FUN_14295c172(void)

undefined8 FUN_14295c172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295c190 FUN_14295c190 body=87 status=ok
// SIG undefined FUN_14295c190(void)

void FUN_14295c190(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014295c1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14295c1e8 FUN_14295c1e8 body=156 status=ok
// SIG undefined FUN_14295c1e8(void)

void FUN_14295c1e8(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)*param_1;
  pcVar2 = (code *)param_1[2];
  plVar5 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(local_70,uVar4);
  lVar3 = *plVar1;
  FUN_145aeb3d6(lVar3 + 0x80,local_70);
  FUN_140b576f0(lVar3);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295c286 FUN_14295c286 body=131 status=ok
// SIG undefined FUN_14295c286(void)

undefined8 * FUN_14295c286(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f35e50;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 14295c30a FUN_14295c30a body=5 status=ok
// SIG undefined FUN_14295c30a(void)

longlong FUN_14295c30a(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14295c310 FUN_14295c310 body=29 status=ok
// SIG undefined FUN_14295c310(void)

void FUN_14295c310(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14295c32e FUN_14295c32e body=111 status=ok
// SIG undefined FUN_14295c32e(void)

undefined8 * FUN_14295c32e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35e50;
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295c39e FUN_14295c39e body=29 status=ok
// SIG undefined FUN_14295c39e(void)

undefined8 FUN_14295c39e(undefined8 param_1,longlong *param_2)

{
  FUN_146b8dea7(param_1,*param_2 + 8);
  return param_1;
}



// FUNCTION 14295c3bc FUN_14295c3bc body=24 status=ok
// SIG undefined FUN_14295c3bc(void)

longlong FUN_14295c3bc(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f35e70;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14295c3da FUN_14295c3da body=12 status=ok
// SIG undefined FUN_14295c3da(void)

void FUN_14295c3da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295c3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295c3e6 FUN_14295c3e6 body=29 status=ok
// SIG undefined FUN_14295c3e6(void)

undefined8 FUN_14295c3e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295c404 FUN_14295c404 body=87 status=ok
// SIG undefined FUN_14295c404(void)

void FUN_14295c404(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014295c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}


