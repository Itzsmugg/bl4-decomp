// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431accb2 FUN_1431accb2 body=4188 status=ok
// SIG undefined FUN_1431accb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1431accb2(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  ushort uVar2;
  wchar_t wVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Src;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  size_t sVar15;
  undefined8 uVar16;
  uint **ppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  ushort *puVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  uint uVar23;
  longlong lVar24;
  ushort *puVar25;
  wchar_t *pwVar26;
  longlong lVar27;
  int iVar28;
  uint **ppuVar29;
  wchar_t *pwVar30;
  undefined2 *puVar31;
  int iVar32;
  char *pcVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  char local_391;
  undefined8 *local_390;
  void *local_388;
  int local_380;
  longlong local_378 [3];
  int local_35c;
  undefined2 *local_358;
  undefined8 uStack_350;
  longlong local_348;
  int local_340;
  uint local_338 [6];
  undefined8 *puStack_320;
  int iStack_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  uint *local_2e8;
  undefined8 uStack_2e0;
  uint *local_2d8;
  undefined8 uStack_2d0;
  wchar_t *local_2c8;
  int local_2c0;
  short local_2b2 [5];
  uint local_2a8 [32];
  uint *local_228;
  uint *local_220;
  uint local_218;
  longlong local_210 [16];
  uint *local_190;
  uint *local_188;
  uint local_180;
  uint *local_178;
  int local_170;
  undefined4 local_16c;
  uint **local_78;
  uint **local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  DAT_14c760db4 = FUN_1473a4f0a(param_2);
  local_2b2[0] = 0x9b;
  local_2b2[1] = 0x11;
  local_2b2[2] = 0x9b;
  local_2b2[3] = 0x14;
  local_2b2[4] = 0x33;
  DAT_14ca85550 = local_2b2[DAT_14c760db4];
  puVar12 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &PTR_FUN_14a362550;
  uVar19 = 0;
  *(undefined4 *)((longlong)puVar12 + 0x84) = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  *(undefined8 *)((longlong)puVar12 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x79) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar12 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar12 + 0x11),4000);
  *(undefined4 *)(puVar12 + 0x16) = 0;
  DAT_14ca84ed0 = 0;
  DAT_14ca84ec8 = 0;
  bVar35 = true;
  DAT_14ca84d98 = 1;
  DAT_14ca84e2b = 1;
  DAT_14ca84f59 = 1;
  _DAT_14ca84ab0 = 0x160;
  DAT_14ca84ab8 = 8;
  local_3a8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_14ca84ed0);
  lVar27 = DAT_14ca78798;
  DAT_14ca8507c = 1;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar28 = *(int *)(lVar14 + 0xc60);
  if (iVar28 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
      if (iVar28 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar35 = DVar10 == DVar11;
      }
      else {
        bVar35 = false;
      }
    }
    uVar19 = (ulonglong)(bVar35 ^ 1);
  }
  lVar24 = DAT_14ca787b0;
  piVar1 = (int *)(lVar14 + 0xc60);
  DAT_14ca84f5a = *(char *)(lVar27 + uVar19);
  uVar6 = 1;
  if (DAT_14ca84f5a == '\x01') {
    iVar28 = *piVar1;
    if (iVar28 == 0x40000002) {
      uVar19 = 0;
    }
    else {
      bVar35 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
        if (iVar28 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar35 = DVar10 == DVar11;
        }
        else {
          bVar35 = false;
        }
      }
      uVar19 = (ulonglong)(bVar35 ^ 1);
    }
    uVar6 = *(undefined1 *)(lVar24 + uVar19);
  }
  DAT_14ca84f59 = uVar6;
  DAT_14c760dac._0_1_ = (byte)DAT_14c760dac & 0x7f;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar13 = (longlong *)
            (**(code **)(*DAT_14c8407a8 + 200))
                      (DAT_14c8407a8,L"r.DisableEngineAndAppRegistration",1);
  if ((plVar13 == (longlong *)0x0) ||
     (lVar14 = (**(code **)(*plVar13 + 0x68))(plVar13), lVar14 == 0)) {
LAB_1431acf1e:
    lVar14 = DAT_14ca9ed28;
    iVar28 = *piVar1;
    if (iVar28 == 0x40000002) {
      uVar19 = 0;
    }
    else {
      bVar35 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
        if (iVar28 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar35 = DVar10 == DVar11;
        }
        else {
          bVar35 = false;
        }
      }
      uVar19 = (ulonglong)(bVar35 ^ 1);
    }
    bVar35 = *(int *)(lVar14 + uVar19 * 4) != 0;
  }
  else {
    iVar28 = *piVar1;
    if (iVar28 == 0x40000002) {
      uVar19 = 0;
    }
    else {
      bVar35 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
        if (iVar28 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar35 = DVar10 == DVar11;
        }
        else {
          bVar35 = false;
        }
      }
      uVar19 = (ulonglong)(bVar35 ^ 1);
    }
    bVar35 = true;
    if (*(int *)(lVar14 + uVar19 * 4) == 0) goto LAB_1431acf1e;
  }
  uVar8 = FUN_1431ae757(DAT_14c760db4,0);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
  cVar7 = FUN_1473a5586();
  lVar14 = DAT_14ca77fc8;
  if (cVar7 != '\0') {
    iVar28 = *piVar1;
    if (iVar28 == 0x40000002) {
      uVar19 = 0;
    }
    else {
      bVar36 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
        if (iVar28 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar36 = DVar10 == DVar11;
        }
        else {
          bVar36 = false;
        }
      }
      uVar19 = (ulonglong)(bVar36 ^ 1);
    }
    if (*(int *)(lVar14 + uVar19 * 4) != 0) {
      bVar36 = DAT_14ca85550 == 0x33;
      bVar37 = DAT_14ca85550 == 0x30;
      cVar7 = FUN_1431aca28(DAT_14c760db4,1);
      if ((bVar36 || bVar37) && (cVar7 != '\0')) {
        uVar8 = FUN_1431ae757(DAT_14c760db4,1);
        *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
      }
      else {
        FUN_140635eb8(DAT_14ca77fc0,0,0xd000000,0);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_14626b538(DAT_14c868708,&local_178,1);
  FUN_140056680(local_210,L"UnrealEngine");
  FUN_1401c7f3e(&local_2c8,local_210,&local_178);
  if (local_210[0] != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (uint *)0x0) {
    FUN_1400020a8();
  }
  pwVar21 = local_2c8;
  if (local_2c0 == 0) {
    pwVar21 = L"";
  }
  local_190 = (uint *)0x0;
  local_3a0 = puVar12;
  local_391 = bVar35;
  if (pwVar21 == (wchar_t *)0x0) {
    local_188 = (uint *)0x0;
    local_180 = 0;
  }
  else {
    sVar15 = wcslen(pwVar21);
    local_2a8[0] = 0;
    local_178 = (uint *)CONCAT44(local_178._4_4_,0x7fffffff);
    uVar19 = sVar15 & 0xffffffff;
    pwVar30 = pwVar21;
    do {
      iVar28 = (int)uVar19;
      if (iVar28 < 1) {
LAB_1431adb96:
        local_180 = local_2a8[0];
        uVar23 = local_2a8[0] + 1;
        if (uVar23 < 0x81) goto LAB_1431adbb6;
        FUN_1446efa72(&local_190,0,uVar23,1);
        puVar18 = local_190;
        goto LAB_1431adbb8;
      }
      wVar3 = *pwVar30;
      uVar23 = (uint)(ushort)wVar3;
      pwVar26 = pwVar30 + 1;
      uVar34 = iVar28 - 1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar28 == 1) {
          cVar7 = FUN_140024707(uVar23,local_2a8,&local_178);
          if (cVar7 != '\0') goto LAB_1431adb96;
          break;
        }
        if (((ushort)*pwVar26 & 0xfc00) == 0xdc00) {
          uVar23 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar26 + 0xfca02400;
          pwVar26 = pwVar30 + 2;
          uVar34 = iVar28 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar23,local_2a8,&local_178);
      uVar19 = (ulonglong)uVar34;
      pwVar30 = pwVar26;
    } while (cVar7 != '\0');
    local_180 = 0xffffffff;
    uVar23 = 0;
LAB_1431adbb6:
    puVar18 = (uint *)0x0;
LAB_1431adbb8:
    local_188 = (uint *)local_210;
    if (puVar18 != (uint *)0x0) {
      local_188 = puVar18;
    }
    iVar28 = (int)sVar15 + 1;
    puVar12 = local_3a0;
    local_2a8[0] = uVar23;
    local_178 = local_188;
    do {
      if (iVar28 < 1) break;
      wVar3 = *pwVar21;
      uVar23 = (uint)(ushort)wVar3;
      pwVar30 = pwVar21 + 1;
      iVar32 = iVar28 + -1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar28 == 1) {
          FUN_1400247af(uVar23,&local_178,local_2a8);
          puVar12 = local_3a0;
          break;
        }
        puVar12 = local_3a0;
        if (((ushort)*pwVar30 & 0xfc00) == 0xdc00) {
          uVar23 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar30 + 0xfca02400;
          pwVar30 = pwVar21 + 2;
          iVar32 = iVar28 + -2;
        }
      }
      iVar28 = iVar32;
      cVar7 = FUN_1400247af(uVar23,&local_178,local_2a8);
      pwVar21 = pwVar30;
    } while (cVar7 != '\0');
  }
  local_390 = puVar12 + 0x16;
  local_228 = (uint *)0x0;
  sVar15 = wcslen(&DAT_14c764000);
  local_338[0] = 0;
  local_178 = (uint *)CONCAT44(local_178._4_4_,0x7fffffff);
  uVar19 = sVar15 & 0xffffffff;
  puVar20 = &DAT_14c764000;
  do {
    iVar28 = (int)uVar19;
    if (iVar28 < 1) {
LAB_1431ad2cc:
      local_218 = local_338[0];
      uVar23 = local_338[0] + 1;
      if (uVar23 < 0x81) goto LAB_1431ad2ec;
      FUN_1446efa72(&local_228,0,uVar23,1);
      local_220 = local_228;
      goto LAB_1431ad2ee;
    }
    uVar2 = *puVar20;
    uVar23 = (uint)uVar2;
    puVar25 = puVar20 + 1;
    uVar19 = (ulonglong)(iVar28 - 1);
    if ((uVar2 & 0xfc00) == 0xd800) {
      if (iVar28 == 1) {
        cVar7 = FUN_140024707(uVar23,local_338,&local_178);
        if (cVar7 != '\0') goto LAB_1431ad2cc;
        break;
      }
      if ((*puVar25 & 0xfc00) == 0xdc00) {
        uVar23 = (uint)uVar2 * 0x400 + (uint)*puVar25 + 0xfca02400;
        puVar25 = puVar20 + 2;
        uVar19 = (ulonglong)(iVar28 - 2);
      }
    }
    cVar7 = FUN_140024707(uVar23,local_338,&local_178);
    puVar20 = puVar25;
  } while (cVar7 != '\0');
  local_218 = 0xffffffff;
  uVar23 = 0;
LAB_1431ad2ec:
  local_220 = (uint *)0x0;
LAB_1431ad2ee:
  if (local_220 == (uint *)0x0) {
    local_220 = local_2a8;
  }
  iVar28 = (int)sVar15 + 1;
  puVar20 = &DAT_14c764000;
  puVar12 = local_3a0;
  local_338[0] = uVar23;
  local_178 = local_220;
  do {
    if (iVar28 < 1) break;
    uVar2 = *puVar20;
    uVar23 = (uint)uVar2;
    puVar25 = puVar20 + 1;
    iVar32 = iVar28 + -1;
    if ((uVar2 & 0xfc00) == 0xd800) {
      if (iVar28 == 1) {
        FUN_1400247af(uVar23,&local_178,local_338);
        puVar12 = local_3a0;
        break;
      }
      puVar12 = local_3a0;
      if ((*puVar25 & 0xfc00) == 0xdc00) {
        uVar23 = (uint)uVar2 * 0x400 + (uint)*puVar25 + 0xfca02400;
        puVar25 = puVar20 + 2;
        iVar32 = iVar28 + -2;
      }
    }
    iVar28 = iVar32;
    puVar20 = puVar25;
    cVar7 = FUN_1400247af(uVar23,&local_178,local_338);
  } while (cVar7 != '\0');
  uStack_2d0 = 0;
  local_2e8 = (uint *)0x0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  if (local_391 == '\0') {
    local_2e8 = local_220;
    local_2d8 = local_188;
  }
  else {
    local_2d8 = (uint *)0x0;
  }
  uStack_2e0 = 0x804ade3d;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  puStack_320 = &local_2f8;
  uStack_2d0 = CONCAT44(*(undefined4 *)((longlong)puVar12 + 0x1c),(uint)(ushort)DAT_14c868708[1]);
  local_338[0] = 1;
  local_338[5] = 0;
  iStack_318 = 0;
  local_338[1] = 0;
  local_338[2] = 0;
  local_338[3] = 0;
  local_338[4] = 0;
  local_314 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  iStack_308 = 0;
  uStack_304 = 0;
  local_300 = 0;
  FUN_1431989c0(&local_348);
  FUN_14319acd6(puVar12,&local_178,&local_348);
  if (puVar12[7] != 0) {
    FUN_1400020a8();
  }
  lVar14 = local_348;
  puVar12[7] = local_178;
  local_178 = (uint *)0x0;
  *(int *)(puVar12 + 8) = local_170;
  *(undefined4 *)((longlong)puVar12 + 0x44) = local_16c;
  lVar27 = (longlong)local_340;
  if (lVar27 != 0) {
    plVar13 = local_3a0 + 5;
    lVar24 = 0;
    do {
      lVar4 = *(longlong *)(lVar14 + lVar24);
      if (((*(char *)(lVar4 + 0x14) == '\x01') && (*(char *)(lVar4 + 0x15) == '\x01')) &&
         (*(char *)(lVar4 + 0x16) == '\x01')) {
        uVar16 = *(undefined8 *)(lVar4 + 8);
        iVar28 = *(int *)(local_3a0 + 6);
        *(uint *)(local_3a0 + 6) = iVar28 + 1U;
        if (*(uint *)((longlong)local_3a0 + 0x34) < iVar28 + 1U) {
          FUN_140ca86cc(plVar13,iVar28);
        }
        *(undefined8 *)(*plVar13 + (longlong)iVar28 * 8) = uVar16;
        plVar5 = *(longlong **)(lVar14 + lVar24);
        (**(code **)(*plVar5 + 8))(plVar5,local_338,local_390);
      }
      lVar24 = lVar24 + 8;
    } while (lVar27 * 8 != lVar24);
  }
  puVar12 = local_3a0;
  iStack_308 = *(int *)(local_3a0 + 6);
  if (iStack_308 == 0) {
    local_300 = 0;
  }
  else {
    local_300 = local_3a0[5];
  }
  iStack_318 = *(int *)(local_3a0 + 8);
  if (iStack_318 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = local_3a0[7];
  }
  uStack_310 = (undefined4)uVar16;
  uStack_30c = (undefined4)((ulonglong)uVar16 >> 0x20);
  puVar22 = local_3a0 + 4;
  iVar28 = (*DAT_14ca79360)(local_338,0,puVar22);
  if (iVar28 != 0) {
    if (iVar28 != -7) {
      if (iVar28 == -9) {
        pwVar21 = 
        L"Cannot find a compatible Vulkan driver (ICD).\n\nPlease look at the Getting Started guide for additional information."
        ;
        pwVar30 = L"Incompatible Vulkan driver found!";
      }
      else {
        pwVar21 = 
        L"Vulkan failed to create instance (apiVersion=0x%x)\n\nDo you have a compatible Vulkan driver (ICD) installed?\nPlease look at the Getting Started guide for additional information."
        ;
        pwVar30 = L"No Vulkan driver found!";
      }
      FUN_14682f732(0,pwVar21,pwVar30);
      FUN_142797bc0(1,1,0);
      goto LAB_1431ad73d;
    }
    local_358 = (undefined2 *)0x0;
    uStack_350 = 0;
    local_390 = puVar22;
    (*DAT_14ca79368)(0,&local_35c,0);
    local_378[0] = 0;
    local_378[1] = 0;
    FUN_1473be9e4(local_378,local_35c);
    (*DAT_14ca79368)(0,&local_35c,local_378[0]);
    if ((longlong)*(int *)(puVar12 + 6) != 0) {
      puVar22 = (undefined8 *)local_3a0[5];
      puVar12 = puVar22 + *(int *)(puVar12 + 6);
      do {
        iVar28 = local_35c;
        lVar14 = local_378[0];
        pcVar33 = (char *)*puVar22;
        if (local_35c != 0) {
          iVar32 = 0;
          do {
            iVar9 = strcmp((char *)((longlong)iVar32 * 0x104 + lVar14),pcVar33);
            if (iVar9 == 0) goto LAB_1431ada64;
            iVar32 = iVar32 + 1;
          } while (iVar28 != iVar32);
        }
        local_78 = (uint **)0x0;
        if (pcVar33 == (char *)0x0) {
          local_70 = (uint **)0x0;
          local_68 = 0;
        }
        else {
          sVar15 = strlen(pcVar33);
          iVar28 = (int)sVar15;
          uVar23 = iVar28 + 1;
          local_68 = iVar28;
          if (uVar23 < 0x81) {
            ppuVar17 = (uint **)0x0;
          }
          else {
            FUN_1446efa72(&local_78,0,uVar23,2);
            ppuVar17 = local_78;
          }
          if (ppuVar17 == (uint **)0x0) {
            ppuVar17 = &local_178;
          }
          local_70 = ppuVar17;
          if (-1 < iVar28) {
            uVar19 = 0;
            do {
              *(short *)((longlong)ppuVar17 + uVar19 * 2) = (short)pcVar33[uVar19];
              uVar19 = uVar19 + 1;
            } while (uVar23 != uVar19);
          }
        }
        FUN_140056680(&local_388,local_70);
        if (local_78 != (uint **)0x0) {
          FUN_1400020a8();
        }
        _Src = local_388;
        lVar14 = (longlong)local_380;
        local_178 = (uint *)0x0;
        local_170 = local_380;
        FUN_1446dd670(&local_178,(uint)(lVar14 == 0) + local_380 + 1,0);
        if (lVar14 != 0) {
          memcpy(local_178,_Src,lVar14 * 2);
        }
        FUN_1400020e8(&local_178,&DAT_149e01f72,1);
        FUN_1400020e8(&local_358);
        if (local_178 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_388 != (void *)0x0) {
          FUN_1400020a8();
        }
LAB_1431ada64:
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar12);
    }
    puVar31 = &DAT_149dfb77a;
    if ((int)uStack_350 != 0) {
      puVar31 = local_358;
    }
    FUN_140002266(&local_178,
                  L"Vulkan driver doesn\'t contain specified extensions:\n%s;\n\t\t\tmake sure your layers path is set appropriately."
                  ,puVar31);
    puVar12 = local_3a0;
    puVar18 = (uint *)&DAT_149dfb77a;
    if (local_170 != 0) {
      puVar18 = local_178;
    }
    FUN_14682f732(0,puVar18,L"Incomplete Vulkan driver found!");
    if (local_178 != (uint *)0x0) {
      FUN_1400020a8();
    }
    puVar22 = local_390;
    if (local_378[0] != 0) {
      FUN_1400020a8();
    }
    if (local_358 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1431b4552(0xfffffff9,"Result",".\\Runtime/VulkanRHI/Private/VulkanRHI.cpp",0x32f);
  }
  cVar7 = FUN_1431be802(*puVar22);
  if (cVar7 == '\0') {
    FUN_14682f732(0,L"Failed to find all required Vulkan entry points! Try updating your driver.",
                  L"No Vulkan entry points found!");
  }
LAB_1431ad73d:
  FUN_1473d0932(local_348,local_340);
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = FUN_1431ae87c(*puVar22);
  if (lVar14 == 0) {
    FUN_14682f732(0,L"Vulkan failed to select physical device after passing profile checks.",
                  L"No Vulkan driver found!");
    FUN_142797bc0(1,1,0);
  }
  else {
    lVar27 = FUN_14001cc68(0x25f0,0x10);
    FUN_1431927d8(lVar27,puVar12,lVar14);
    puVar12[9] = lVar27;
    DAT_14ca84df4 = *(uint *)(lVar27 + 0xaf8);
    if ((0xffff < DAT_14ca84df4) && (DAT_14ca84df4 - 0x10001 < 5)) {
      DAT_14ca84df4 = *(uint *)(&DAT_14a3699ac + (ulonglong)(DAT_14ca84df4 - 0x10001) * 4);
    }
    local_78 = (uint **)0x0;
    pcVar33 = (char *)(lVar27 + 0xb04);
    if (pcVar33 == (char *)0x0) {
      local_70 = (uint **)0x0;
      local_68 = 0;
    }
    else {
      sVar15 = strlen(pcVar33);
      iVar28 = (int)sVar15;
      uVar23 = iVar28 + 1;
      local_68 = iVar28;
      if (uVar23 < 0x81) {
        ppuVar17 = (uint **)0x0;
      }
      else {
        FUN_1446efa72(&local_78,0,uVar23,2);
        ppuVar17 = local_78;
      }
      ppuVar29 = &local_178;
      if (ppuVar17 != (uint **)0x0) {
        ppuVar29 = ppuVar17;
      }
      local_70 = ppuVar29;
      if (-1 < iVar28) {
        uVar19 = 0;
        do {
          *(short *)((longlong)ppuVar29 + uVar19 * 2) = (short)pcVar33[uVar19];
          uVar19 = uVar19 + 1;
        } while (uVar23 != uVar19);
      }
    }
    FUN_14020fad6(&DAT_14ca84da0,local_70);
    if (local_78 != (uint **)0x0) {
      FUN_1400020a8();
    }
    DAT_14ca84de8 = *(undefined4 *)(lVar27 + 0xafc);
    DAT_14ca84d8c = 0x5a0;
  }
  DAT_14ca79348 = puVar12;
  if ((local_60 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431add10 FUN_1431add10 body=644 status=ok
// SIG undefined FUN_1431add10(void)

void FUN_1431add10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 in_register_00001244 [12];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1431adf96();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145af9b74(&local_28);
  iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_28);
  if (iVar4 < 1) {
    uVar3 = 0;
  }
  else {
    plVar7 = (longlong *)FUN_147364b50();
    uVar3 = (**(code **)(*plVar7 + 0x90))(plVar7);
  }
  *(undefined1 *)(param_1 + 0x80) = uVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca787e8) && (FUN_144b3d300(&DAT_14ca787e8), DAT_14ca787e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streaming.PoolSize",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14ca787e0 = 0;
    }
    else {
      DAT_14ca787e0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14ca787e8);
  }
  lVar2 = DAT_14ca787e0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar8 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  if (DAT_14ca84ed0 < 1) {
    uVar1 = *(uint *)(lVar2 + uVar8 * 4);
    uVar8 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) goto LAB_1431ade97;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if ((ulonglong)*(uint *)(lVar2 + 0x274) == 0) {
      fVar10 = 0.0;
    }
    else {
      lVar9 = 0;
      uVar8 = 0;
      do {
        if ((*(byte *)(lVar2 + 0x280 + lVar9) & 1) != 0) {
          uVar8 = uVar8 + *(longlong *)(lVar2 + 0x278 + lVar9);
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulonglong)*(uint *)(lVar2 + 0x274) << 4 != lVar9);
      if ((longlong)uVar8 < 0) {
        fVar10 = (float)uVar8;
      }
      else {
        fVar10 = (float)(longlong)uVar8;
      }
    }
    auVar11._4_12_ = in_register_00001244;
    auVar11._0_4_ = (float)DAT_14ca84ed0 * 0.01 * fVar10 * 0.0009765625 * 0.0009765625;
    auVar11 = roundss(ZEXT816(0),auVar11,0xb);
    uVar8 = (ulonglong)auVar11._0_4_;
  }
  DAT_14ca84ec8 = uVar8 << 0x14;
LAB_1431ade97:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431adf96 FUN_1431adf96 body=1934 status=ok
// SIG undefined FUN_1431adf96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431adf96(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca84d88 != '\0') goto LAB_1431adfba;
  FUN_14080c2b4();
  bVar12 = 0;
  DAT_14ca84e06 = 0;
  FUN_143192cf6(*(undefined8 *)(param_1 + 0x48));
  lVar9 = *(longlong *)(param_1 + 0x48);
  _DAT_14ca84ef1 = 1;
  DAT_14ca84e03 = 1;
  DAT_14ca84e1e = *(int *)(*(longlong *)(param_1 + 0x48) + 0xf30) != 0;
  DAT_14ca84dfa = 0;
  DAT_14ca84eb0 = 1;
  _DAT_14ca84e01 = 0x101;
  DAT_14ca84e1b = (byte)(*(uint *)(*(longlong *)(param_1 + 0x48) + 0x20f8) >> 0x17) & 1;
  DAT_14ca8507e = (byte)(*(ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x20f8) >> 0x26) & 1;
  if (((uint)(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] >> 0x16 & 1) != 0) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x20f8);
    if ((~uVar2 & 0x4c0002400) == 0 && (uVar2 & 0x1800) != 0) {
      bVar12 = (byte)(uVar2 >> 0x20) & 1;
    }
    else {
      bVar12 = 0;
    }
  }
  _DAT_14ca84ef4 = CONCAT11(DAT_14ca84ef5,bVar12);
  if (DAT_14c760c94 == 0) {
    bVar13 = false;
LAB_1431ae0ce:
    if (bVar12 != 0) {
      if (((uint)(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] >> 0x16 & 1) == 0) {
        _DAT_14ca84ef4 = (ushort)bVar12;
LAB_1431ae152:
        DAT_14ca84efa = 0;
      }
      else {
        uVar8 = *(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 4);
        if ((uVar8 >> 0x19 & 1) == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)(*(uint *)(*(longlong *)(param_1 + 0x48) + 0x20f8) >> 0xb) & 1;
        }
        _DAT_14ca84ef4 = CONCAT11(bVar7,bVar12);
        if ((uVar8 >> 0x18 & 1) == 0 || bVar13) goto LAB_1431ae152;
        DAT_14ca84efa = (byte)(*(uint *)(*(longlong *)(param_1 + 0x48) + 0x20f8) >> 0xc) & 1;
      }
      DAT_14ca84efb = 0;
      DAT_14ca84f00 = 0x100;
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x2470);
      DAT_14ca84f04 = 0x100;
      if (0x100 < uVar8) {
        DAT_14ca84f04 = uVar8;
      }
      DAT_14ca84f0c = 0x40;
      DAT_14ca84efd = 1;
    }
  }
  else {
    bVar13 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x1a94) == 0x1002;
    if ((*(int *)(*(longlong *)(param_1 + 0x48) + 0x2110) != 3) ||
       (0x6003001 < *(uint *)(lVar9 + 0xaf4))) goto LAB_1431ae0ce;
    _DAT_14ca84ef4 = 0;
    DAT_14ca84efa = 0;
  }
  iVar5 = (**(code **)(*DAT_14ca788e0 + 0xb0))();
  DAT_14ca84f1d = iVar5 != 0;
  iVar5 = (**(code **)(*DAT_14ca788e0 + 0xb0))();
  DAT_14ca84f1f = 1 < iVar5;
  DAT_14ca84e0d = DAT_14ca84f1d;
  lVar11 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar11 + 0x20d0) == *(longlong *)(lVar11 + 0x20c8)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(int *)(lVar11 + 0x1a94) != 0x1002) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      uVar4 = FUN_14054d46e(&DAT_14c846b20,L"ForceAsyncCompute");
    }
  }
  DAT_14ca84e15 = 1;
  DAT_14ca84e2c = 1;
  DAT_14ca84e40 = *(int *)(lVar9 + 0xc1c);
  if (DAT_14ca84e40 < DAT_14ca84e38) {
    DAT_14ca84e38 = DAT_14ca84e40;
  }
  if (DAT_14ca84e40 < DAT_14ca84e3c) {
    DAT_14ca84e3c = DAT_14ca84e40;
  }
  _DAT_14ca84e48 = (ulonglong)*(uint *)(lVar9 + 0xc2c);
  DAT_14ca84e58 = (ulonglong)*(uint *)(lVar9 + 0xcf0);
  uVar2 = (ulonglong)(DAT_14ca84e40 + -1 + (uint)(DAT_14ca84e40 == 0)) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  uVar8 = ((uint)lVar11 ^ 0xffffffc0) + 0x41;
  DAT_14ca84d90 = 0xf;
  if (uVar8 < 0xf) {
    DAT_14ca84d90 = uVar8;
  }
  DAT_14ca84e64 = *(undefined4 *)(lVar9 + 0xc24);
  DAT_14ca84e60 = *(undefined4 *)(lVar9 + 0xc20);
  DAT_14ca84e74 = *(undefined4 *)(lVar9 + 0xd00);
  DAT_14ca84e6c = *(undefined4 *)(lVar9 + 0xc28);
  DAT_14ca84ef0 = 1;
  DAT_14ca84e16 = 1;
  DAT_14ca84e17 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xf14) == 1;
  DAT_14ca84e6a = (~*(ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x20f8) & 0x41004000000) == 0;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x6b0) + 8) == '\x01') {
    DAT_14ca85065 =
         (byte)((uint)*(undefined4 *)
                       ((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 4) >> 0x1b) & 3
    ;
  }
  else {
    DAT_14ca85065 = 0;
  }
  _DAT_14ca84e70 = *(uint *)(lVar9 + 0xc5c);
  if (0x7ffffffe < _DAT_14ca84e70) {
    _DAT_14ca84e70 = 0x7fffffff;
  }
  DAT_14ca84f24 = *(uint *)(lVar9 + 0xcf4);
  if (0x7ffffffe < DAT_14ca84f24) {
    DAT_14ca84f24 = 0x7fffffff;
  }
  DAT_14ca84f28 = *(uint *)(lVar9 + 0xcf8);
  if (0x7ffffffe < DAT_14ca84f28) {
    DAT_14ca84f28 = 0x7fffffff;
  }
  DAT_14ca84f2c = 0x7fffffff;
  if (*(uint *)(lVar9 + 0xcfc) < 0x7fffffff) {
    DAT_14ca84f2c = *(uint *)(lVar9 + 0xcfc);
  }
  _DAT_14ca85070 = 0x14009b0011009b;
  DAT_14ca85078 = 0x33;
  DAT_14ca84e26 = 1;
  DAT_14ca84e1a = 0;
  lVar9 = *(longlong *)(param_1 + 0x48);
  bVar14 = *(int *)(lVar9 + 0xf08) != 0;
  uVar8 = (uint)bVar14 * 8 + 0x31;
  uVar10 = (uint)bVar14 << 6;
  _DAT_14ca788d4 = uVar10 | 0x888;
  if ((!bVar13) && ((*(byte *)(lVar9 + 0x20fa) & 4) != 0)) {
    uVar1 = *(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c);
    DAT_14ca84f63 = (byte)(uVar1 >> 8) & 1;
    DAT_14ca84f64 = (byte)(uVar1 >> 9) & 1;
    _DAT_14ca788d4 = uVar10 | 0x180888;
    uVar8 = uVar8 | 0xc0;
    lVar9 = *(longlong *)(param_1 + 0x48);
  }
  if ((uVar8 & ~*(uint *)(lVar9 + 0xee4)) == 0) {
    DAT_14ca84f10 = (*(uint *)(lVar9 + 0xee8) & 0x1f) == 0x1f;
    if (((bool)DAT_14ca84f10) && ((DAT_14ca84f14 == 0 || (DAT_14ca84f18 == 0)))) {
      DAT_14ca84f14 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xee0);
      DAT_14ca84f18 = DAT_14ca84f14;
    }
  }
  else {
    DAT_14ca84f10 = false;
  }
  DAT_14ca84e23 = uVar4;
  FUN_140056680(local_68,&DAT_14a3588aa);
  local_50 = &local_58;
  local_58 = DAT_14cae4098;
  local_48 = local_68;
  FUN_1406e263c(&DAT_14cae4048,local_3c,&local_50,0);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  local_50 = (undefined8 *)0x0;
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_50[2] = lVar11;
  *local_50 = &PTR_FUN_149e062c0;
  local_50[3] = FUN_1473be940;
  local_78 = 0;
  uVar6 = (**(code **)(*plVar3 + 0xb0))
                    (plVar3,L"r.Vulkan.SavePipelineCache",L"Save pipeline cache.",&local_50);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  if ((int)local_48 == 0) {
LAB_1431ae5c6:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_1431ae5c6;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  local_50 = (undefined8 *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = (longlong *)CONCAT44(local_48._4_4_,2);
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_50[2] = lVar11;
  *local_50 = &PTR_FUN_149e062c0;
  local_50[3] = FUN_1473bea2c;
  local_78 = 0;
  uVar6 = (**(code **)(*plVar3 + 0xb0))
                    (plVar3,L"r.Vulkan.RebuildPipelineCache",L"Rebuilds pipeline cache.",&local_50);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  if ((int)local_48 == 0) {
LAB_1431ae6b4:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    goto LAB_1431ae6b4;
  }
  FUN_145ec9638();
  DAT_14ca84d88 = '\x01';
LAB_1431adfba:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ae757 FUN_1431ae757 body=292 status=ok
// SIG undefined FUN_1431ae757(void)

int FUN_1431ae757(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [128];
  longlong local_138;
  char *local_130;
  undefined4 local_128;
  char local_11c [260];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1473a55e6(&local_1c8,param_1,param_2);
  memset(local_11c,0,0x104);
  _Str = local_1c8;
  if (local_1c0 == 0) {
    _Str = L"";
  }
  local_138 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_130 = (char *)0x0;
    local_128 = 0;
    strcpy(local_11c,(char *)0x0);
  }
  else {
    sVar4 = wcslen(_Str);
    FUN_1449b853c(local_1b8,_Str,sVar4 & 0xffffffff,1);
    lVar1 = local_138;
    strcpy(local_11c,local_130);
    if (lVar1 != 0) {
      FUN_1400020a8(lVar1);
    }
  }
  iVar2 = FUN_1473c5bd5(local_11c);
  if (local_1c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar3 = 0x401000;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1431ae87c FUN_1431ae87c body=2538 status=ok
// SIG undefined FUN_1431ae87c(void)

undefined8 FUN_1431ae87c(undefined8 param_1)

{
  uint *puVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  uint *_Src;
  ulonglong uVar21;
  int *piVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_758 [32];
  longlong *local_738;
  uint local_72c;
  longlong local_728;
  undefined8 uStack_720;
  void *local_718;
  ulonglong uStack_710;
  uint local_6fc;
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8 [188];
  undefined1 local_3f8 [920];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_758;
  local_6fc = 0;
  uVar17 = 0;
  iVar5 = (*DAT_14ca79420)(param_1,&local_6fc,0);
  if (local_6fc == 0 || iVar5 != 0) goto LAB_1431ae8d5;
  lVar18 = (longlong)(int)local_6fc;
  local_718 = (void *)0x0;
  uStack_710 = (ulonglong)local_6fc;
  FUN_1473c6b36(&local_718);
  memset(local_718,0,lVar18 << 3);
  iVar5 = (*DAT_14ca79420)(param_1,&local_6fc,local_718);
  if (iVar5 != 0) {
    FUN_1431b4552(iVar5,
                  "VulkanRHI::vkEnumeratePhysicalDevices(InInstance, &PhysicalDeviceCount, PhysicalDevices.GetData())"
                  ,".\\Runtime/VulkanRHI/Private/VulkanRHI.cpp",0x98);
  }
  local_728 = 0;
  uStack_720 = 0;
  if ((int)local_6fc < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_6fc);
  }
  if ((local_6fc != 0) && (FUN_1431b17f4(&local_728), local_6fc != 0)) {
    uVar24 = 0;
    do {
      pvVar3 = local_718;
      lVar18 = (longlong)(int)uStack_720;
      uVar6 = (int)uStack_720 + 1;
      uStack_720 = CONCAT44(uStack_720._4_4_,uVar6);
      if (uStack_720._4_4_ < uVar6) {
        FUN_1431b1938(&local_728);
      }
      lVar2 = local_728;
      lVar18 = lVar18 * 0x398;
      uVar17 = *(undefined8 *)((longlong)pvVar3 + (longlong)(int)uVar24 * 8);
      puVar23 = (uint *)(local_728 + lVar18);
      *puVar23 = uVar24;
      *(undefined8 *)(puVar23 + 2) = uVar17;
      puVar23[4] = 0x3b9bb079;
      lVar19 = local_728 + lVar18;
      memset((void *)(lVar19 + 0x14),0,0x344);
      lVar2 = lVar2 + lVar18;
      *(undefined4 *)(lVar2 + 0x358) = 0x3b9bdf5c;
      *(undefined8 *)(lVar2 + 0x35c) = 0;
      *(undefined8 *)(lVar2 + 0x364) = 0;
      *(undefined8 *)(lVar2 + 0x36c) = 0;
      *(undefined8 *)(lVar2 + 0x374) = 0;
      *(undefined8 *)(lVar2 + 0x37c) = 0;
      *(undefined8 *)(lVar2 + 900) = 0;
      *(undefined8 *)(lVar2 + 0x388) = 0;
      *(undefined8 *)(lVar2 + 0x390) = 0;
      *(undefined4 **)(lVar19 + 0x18) = (undefined4 *)(lVar2 + 0x358);
      (*DAT_14ca79370)(uVar17);
      uVar24 = uVar24 + 1;
    } while (uVar24 < local_6fc);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar11 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GraphicsAdapter",1);
  if ((plVar11 == (longlong *)0x0) ||
     (lVar18 = (**(code **)(*plVar11 + 0x68))(plVar11), lVar18 == 0)) {
    local_72c = 0xffffffff;
  }
  else {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar21 = 0;
    }
    else if (iVar5 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      uVar21 = (ulonglong)(DVar9 != DVar10);
    }
    else {
      uVar21 = 1;
    }
    local_72c = *(uint *)(lVar18 + uVar21 * 4);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20);
  lVar18 = local_728;
  iVar5 = (int)uStack_720;
  if ((int)local_72c < 0) {
    if (local_72c == 0xfffffffe) {
      puVar12 = (undefined8 *)(local_728 + 8);
      goto LAB_1431aeb2b;
    }
    if ((local_72c == 0xffffffff) && (lVar19 = (longlong)(int)uStack_720, 1 < lVar19)) {
      memset(local_6e8,0,0x2f0);
      local_6f8 = lVar18;
      local_6f0 = lVar19 * 0x398 + lVar18 + -0x398;
      fVar27 = logf((float)iVar5);
      local_6e8[0] = (int)(longlong)(fVar27 + fVar27);
      plVar11 = &local_6f8;
      do {
        _Src = (uint *)*plVar11;
        puVar23 = (uint *)plVar11[1];
        iVar5 = (int)plVar11[2];
        iVar7 = (int)((ulonglong)((longlong)puVar23 - (longlong)_Src) >> 3) * 0x61f2a4bb;
        uVar21 = (ulonglong)(iVar7 + 1);
        local_738 = plVar11;
        if (iVar5 != 0) {
LAB_1431aebee:
          plVar11 = local_738;
          if (8 < (int)(uint)uVar21) {
            memcpy(local_3f8,_Src + (ulonglong)((uint)uVar21 >> 1) * 0xe6,0x398);
            memcpy(_Src + (ulonglong)((uint)uVar21 >> 1) * 0xe6,_Src,0x398);
            memcpy(_Src,local_3f8,0x398);
            puVar15 = puVar23 + 0xe6;
            puVar20 = _Src;
            do {
              puVar20 = puVar20 + 0xe6;
              if (puVar20 <= puVar23) {
                do {
                  if (_Src[0xc] == puVar20[0xc]) {
                    if (*_Src < *puVar20) break;
                  }
                  else if ((_Src[0xc] == 2) || (puVar20[0xc] == 4)) break;
                  puVar20 = puVar20 + 0xe6;
                } while (puVar20 <= puVar23);
              }
              puVar25 = puVar15 + -0xe6;
              puVar16 = puVar15;
              if (_Src < puVar25) {
                do {
                  if (puVar25[0xc] == _Src[0xc]) {
                    if (*puVar25 < *_Src) {
                      puVar16 = puVar25 + 0xe6;
                      break;
                    }
                  }
                  else {
                    puVar16 = puVar15;
                    if ((_Src[0xc] == 4) || (puVar25[0xc] == 2)) break;
                  }
                  puVar1 = puVar25 + -0xe6;
                  puVar16 = puVar25;
                  puVar15 = puVar25;
                  puVar25 = puVar1;
                } while (_Src < puVar1);
              }
              puVar15 = puVar25;
              if (puVar15 < puVar20) goto LAB_1431aed02;
              memcpy(local_3f8,puVar20,0x398);
              memcpy(puVar20,puVar15,0x398);
              memcpy(puVar15,local_3f8,0x398);
            } while( true );
          }
          for (; puVar20 = _Src, puVar15 = _Src, _Src < puVar23; puVar23 = puVar23 + -0xe6) {
            while (puVar25 = puVar20, puVar15 = puVar15 + 0xe6, puVar15 <= puVar23) {
              if (puVar25[0xc] == puVar15[0xc]) {
                bVar26 = *puVar25 < *puVar15;
              }
              else {
                bVar26 = puVar15[0xc] == 4 || puVar25[0xc] == 2;
              }
              puVar20 = puVar15;
              if (!bVar26) {
                puVar20 = puVar25;
              }
            }
            memcpy(local_3f8,puVar25,0x398);
            memcpy(puVar25,puVar23,0x398);
            memcpy(puVar23,local_3f8,0x398);
          }
          goto LAB_1431af136;
        }
LAB_1431aedca:
        plVar11 = local_738;
        iVar5 = (int)uVar21;
        if (iVar5 != 0) {
          iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
          iVar14 = iVar7;
joined_r0x0001431aedf4:
          do {
            iVar8 = iVar7 * 2 + 1;
            if (iVar8 < iVar5) {
              iVar13 = iVar7 * 2 + 2;
              if (iVar13 < iVar5) {
                if (_Src[(longlong)iVar13 * 0xe6 + 0xc] == _Src[(longlong)iVar8 * 0xe6 + 0xc]) {
                  bVar26 = _Src[(longlong)iVar13 * 0xe6] < _Src[(longlong)iVar8 * 0xe6];
                }
                else {
                  bVar26 = _Src[(longlong)iVar8 * 0xe6 + 0xc] == 4 ||
                           _Src[(longlong)iVar13 * 0xe6 + 0xc] == 2;
                }
                if (!bVar26) {
                  iVar8 = iVar13;
                }
              }
              puVar23 = _Src + (longlong)iVar7 * 0xe6;
              puVar15 = _Src + (longlong)iVar8 * 0xe6;
              if (_Src[(longlong)iVar7 * 0xe6 + 0xc] == _Src[(longlong)iVar8 * 0xe6 + 0xc]) {
                if (*puVar23 < *puVar15) {
LAB_1431aee99:
                  memcpy(local_3f8,puVar23,0x398);
                  memcpy(puVar23,puVar15,0x398);
                  memcpy(puVar15,local_3f8,0x398);
                  iVar7 = iVar8;
                  goto joined_r0x0001431aedf4;
                }
              }
              else if ((_Src[(longlong)iVar7 * 0xe6 + 0xc] == 2) ||
                      (_Src[(longlong)iVar8 * 0xe6 + 0xc] == 4)) goto LAB_1431aee99;
            }
            bVar26 = iVar14 != 0;
            iVar7 = iVar14 + -1;
            iVar14 = iVar7;
          } while (bVar26);
          if (1 < iVar5) {
            memcpy(local_3f8,_Src,0x398);
            memcpy(_Src,_Src + (uVar21 - 1) * 0xe6,0x398);
            memcpy(_Src + (uVar21 - 1) * 0xe6,local_3f8,0x398);
            uVar21 = uVar21 - 1;
            if (iVar5 != 2) {
              do {
                iVar5 = 0;
                iVar14 = 1;
                iVar7 = 0;
                do {
                  lVar18 = (longlong)(iVar5 + 2);
                  iVar8 = iVar14;
                  if (lVar18 < (longlong)uVar21) {
                    if (_Src[lVar18 * 0xe6 + 0xc] == _Src[(longlong)iVar14 * 0xe6 + 0xc]) {
                      bVar26 = _Src[lVar18 * 0xe6] < _Src[(longlong)iVar14 * 0xe6];
                    }
                    else {
                      bVar26 = _Src[(longlong)iVar14 * 0xe6 + 0xc] == 4 ||
                               _Src[lVar18 * 0xe6 + 0xc] == 2;
                    }
                    if (!bVar26) {
                      iVar8 = iVar5 + 2;
                    }
                  }
                  puVar23 = _Src + (longlong)iVar7 * 0xe6;
                  puVar15 = _Src + (longlong)iVar8 * 0xe6;
                  if (_Src[(longlong)iVar7 * 0xe6 + 0xc] == _Src[(longlong)iVar8 * 0xe6 + 0xc]) {
                    if (*puVar15 <= *puVar23) break;
                  }
                  else if ((_Src[(longlong)iVar7 * 0xe6 + 0xc] != 2) &&
                          (_Src[(longlong)iVar8 * 0xe6 + 0xc] != 4)) break;
                  memcpy(local_3f8,puVar23,0x398);
                  memcpy(puVar23,puVar15,0x398);
                  memcpy(puVar15,local_3f8,0x398);
                  iVar5 = iVar8 * 2;
                  iVar14 = iVar8 * 2 + 1;
                  iVar7 = iVar8;
                } while ((longlong)iVar14 < (longlong)uVar21);
                memcpy(local_3f8,_Src,0x398);
                memcpy(_Src,_Src + (uVar21 - 1) * 0xe6,0x398);
                memcpy(_Src + (uVar21 - 1) * 0xe6,local_3f8,0x398);
                bVar26 = 2 < uVar21;
                uVar21 = uVar21 - 1;
              } while (bVar26);
            }
          }
        }
LAB_1431af136:
        plVar11 = plVar11 + -3;
      } while (&local_6f8 <= plVar11);
    }
    iVar5 = FUN_14631b780();
    if ((iVar5 != -1) && (0 < (int)uStack_720)) {
      lVar19 = 0x28;
      lVar18 = 0;
      do {
        iVar7 = FUN_147364bce(*(undefined4 *)(local_728 + lVar19));
        if (iVar7 == iVar5) {
          puVar12 = (undefined8 *)(local_728 + lVar19 + -0x20);
          goto LAB_1431aeb2b;
        }
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + 0x398;
      } while (lVar18 < (int)uStack_720);
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
    }
    cVar4 = FUN_14054d46e(&DAT_14c846b20,L"AllowCPUDevices");
    if ((longlong)(int)uStack_720 < 1) {
      uVar17 = 0;
    }
    else {
      piVar22 = (int *)(local_728 + 0x30);
      uVar17 = 0;
      uVar21 = 0;
      do {
        if (cVar4 != '\0') {
          uVar21 = 0;
LAB_1431af1eb:
          uVar21 = uVar21 & 0xffffffff;
          goto LAB_1431aeb14;
        }
        if (*piVar22 != 4) goto LAB_1431af1eb;
        uVar21 = uVar21 + 1;
        piVar22 = piVar22 + 0xe6;
      } while ((longlong)(int)uStack_720 != uVar21);
    }
  }
  else {
    uVar21 = 0;
    if ((int)local_72c < (int)uStack_720) {
      uVar21 = (ulonglong)local_72c;
    }
LAB_1431aeb14:
    puVar12 = (undefined8 *)(uVar21 * 0x398 + local_728 + 8);
LAB_1431aeb2b:
    uVar17 = *puVar12;
  }
  if (local_728 != 0) {
    FUN_1400020a8();
  }
  if (local_718 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1431ae8d5:
  if ((local_60 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
LAB_1431aed02:
  memcpy(local_3f8,_Src,0x398);
  memcpy(_Src,puVar15,0x398);
  memcpy(puVar15,local_3f8,0x398);
  iVar5 = iVar5 + -1;
  puVar16 = puVar16 + -0x1cc;
  if ((longlong)puVar16 - (longlong)_Src < (longlong)puVar23 - (longlong)puVar20) {
    if (puVar20 < puVar23) {
      *local_738 = (longlong)puVar20;
      local_738[1] = (longlong)puVar23;
      *(int *)(local_738 + 2) = iVar5;
      local_738 = local_738 + 3;
    }
    plVar11 = local_738;
    if (puVar15 <= _Src + 0xe6) goto LAB_1431af136;
  }
  else {
    if (_Src + 0xe6 < puVar15) {
      *local_738 = (longlong)_Src;
      local_738[1] = (longlong)puVar16;
      *(int *)(local_738 + 2) = iVar5;
      local_738 = local_738 + 3;
    }
    plVar11 = local_738;
    puVar16 = puVar23;
    _Src = puVar20;
    if (puVar23 <= puVar20) goto LAB_1431af136;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar16 - (longlong)_Src) >> 3) * 0x61f2a4bb;
  uVar21 = (ulonglong)(iVar7 + 1);
  puVar23 = puVar16;
  if (iVar5 == 0) goto LAB_1431aedca;
  goto LAB_1431aebee;
}



// FUNCTION 1431af268 FUN_1431af268 body=295 status=ok
// SIG undefined FUN_1431af268(void)

void FUN_1431af268(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    FUN_14739859c(lVar4,0,0);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  FUN_1473da096(*(undefined8 *)(param_1 + 0x570),uVar5);
  FUN_1431bc6f8(param_2,param_1,uVar5,*(undefined8 *)(param_1 + 0x128),
                *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x1a88),param_4);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x60);
  if (lVar4 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x60) = 0;
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    FUN_14739859c(lVar4,0,0);
  }
  FUN_1473d9d78(*(undefined8 *)(param_1 + 0x570),*(undefined8 *)(lVar4 + 0x78));
  return;
}



// FUNCTION 1431af39d FUN_1431af39d body=47 status=ok
// SIG undefined FUN_1431af39d(void)

void FUN_1431af39d(void)

{
  DAT_14ca78860 = 0;
  if (DAT_14ca78858 != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(&DAT_14ca78818);
  return;
}



// FUNCTION 1431af3cc FUN_1431af3cc body=176 status=ok
// SIG undefined FUN_1431af3cc(void)

undefined8 FUN_1431af3cc(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [136];
  undefined8 local_b0;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_20 = 0x1100000000;
  local_b0 = 0x1100000000;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_a8);
  }
  if (param_2 == (longlong *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2,local_138);
    iVar2 = (int)local_b0;
  }
  if ((int)local_20 == iVar2) {
    uVar1 = FUN_1473d1407(local_a8,local_138);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431af47d FUN_1431af47d body=183 status=ok
// SIG undefined FUN_1431af47d(void)

void FUN_1431af47d(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [30];
  undefined4 uStack_8a;
  undefined2 uStack_86;
  undefined2 local_84 [26];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 local_4a [29];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_50 + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4c + lVar1) = 1;
    *(undefined1 *)((longlong)local_4a + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8a + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_86 + lVar1) = 1;
    *(undefined1 *)((longlong)local_84 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_4a);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,local_84);
  }
  FUN_140622c95(local_4a,local_84);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431af535 FUN_1431af535 body=198 status=ok
// SIG undefined FUN_1431af535(void)

undefined8 FUN_1431af535(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  float local_34;
  float fStack_30;
  char cStack_2c;
  char cStack_2b;
  undefined1 uStack_2a;
  undefined2 local_28;
  float local_24;
  float fStack_20;
  char cStack_1c;
  char cStack_1b;
  undefined1 uStack_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_24 = 0.0;
  fStack_20 = 0.0;
  cStack_1c = '\0';
  cStack_1b = '\0';
  uStack_1a = 0;
  local_38 = 0;
  local_34 = 0.0;
  fStack_30 = 0.0;
  cStack_2c = '\0';
  cStack_2b = '\0';
  uStack_2a = 0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_28);
  }
  if (param_2 == (longlong *)0x0) {
    cVar1 = '\0';
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 8))(param_2,&local_38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    cVar1 = (char)local_38;
  }
  if (((char)local_28 == cVar1) && (local_28._1_1_ == local_38._1_1_)) {
    if ((local_24 == local_34) && (!NAN(local_24) && !NAN(local_34))) {
      if (((fStack_20 == fStack_30) && (!NAN(fStack_20) && !NAN(fStack_30))) &&
         (cStack_1c == cStack_2c)) {
        uVar2 = CONCAT71(uVar3,cStack_1b == cStack_2b);
        goto LAB_1431af5de;
      }
    }
  }
  uVar2 = 0;
LAB_1431af5de:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431af5fc FUN_1431af5fc body=146 status=ok
// SIG undefined FUN_1431af5fc(void)

void FUN_1431af5fc(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 local_20;
  undefined8 local_1e;
  undefined4 local_16;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1e = 0x7000101;
  local_16 = 7;
  local_12 = 0xffff;
  local_2c = 0x7000101;
  local_24 = 7;
  local_20 = 0xffff;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_1e);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_2c);
  }
  FUN_140924781(&local_1e,&local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431af690 FUN_1431af690 body=461 status=ok
// SIG undefined FUN_1431af690(void)

undefined8 * FUN_1431af690(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined5 uStack_55;
  undefined3 local_50;
  undefined5 uStack_4d;
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
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_14737f20c();
  *param_1 = &PTR_FUN_14a369490;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  lVar4 = FUN_14737f5f3(param_2);
  param_1[4] = lVar4;
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    uVar8 = param_1[4];
  }
  plVar7 = param_1 + 5;
  param_1[5] = 0;
  local_68 = &local_58;
  uStack_4d = 0;
  uStack_55 = 0;
  local_50 = 0;
  local_58 = 0;
  local_56 = 4;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2,uVar8);
  if (plVar7 != &local_60) {
    lVar4 = *plVar7;
    *plVar7 = local_60;
    local_60 = 0;
    if (lVar4 == 0) goto LAB_1431af809;
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
  lVar4 = local_60;
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_60 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_60 + 0xd);
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
LAB_1431af809:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431af886 FUN_1431af886 body=91 status=ok
// SIG undefined FUN_1431af886(void)

void FUN_1431af886(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a360920;
  (*DAT_14ca79260)(*(undefined8 *)param_1[1],param_1[2],0);
  (*DAT_14ca79268)(*(undefined8 *)param_1[1],param_1[3],0);
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431af8e2 FUN_1431af8e2 body=402 status=ok
// SIG undefined FUN_1431af8e2(void)

void FUN_1431af8e2(undefined8 *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  iVar4 = 1;
  if (param_3 != '\0') {
    iVar4 = 0x3b9f9490;
  }
  puVar3 = (undefined4 *)FUN_1473a8308(param_1[2] + 0x108,*(undefined8 *)(lVar2 + 0x98));
  if (puVar3[6] == 0) {
    iVar1 = puVar3[3];
    if (param_3 == '\0') {
      if (iVar1 == 1) goto LAB_1431af9cd;
    }
    else if ((iVar1 == 5) || (iVar1 == 0x3b9f9490)) goto LAB_1431af9cd;
  }
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,iVar4);
  FUN_1473968ca(*param_1,*(undefined8 *)(lVar2 + 0x98),*(undefined4 *)(lVar2 + 0x100),puVar3);
  local_68 = *puVar3;
  uStack_64 = puVar3[1];
  uStack_60 = puVar3[2];
  iStack_5c = puVar3[3];
  local_58 = (void *)0x0;
  local_50 = puVar3[6];
  lVar5 = (longlong)local_50;
  _Src = *(void **)(puVar3 + 4);
  if (lVar5 == 0) {
    local_4c = 0;
LAB_1431af990:
    if (iStack_5c == 0) {
      iStack_5c = iVar4;
    }
  }
  else {
    FUN_14739c0ea(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar5 << 2);
    if (local_50 == 0) goto LAB_1431af990;
    if (0 < local_50) {
      lVar5 = 0;
      do {
        if (*(int *)((longlong)local_58 + lVar5 * 4) == 0) {
          *(int *)((longlong)local_58 + lVar5 * 4) = iVar4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < local_50);
    }
  }
  local_78 = &local_68;
  FUN_147396ab8(param_1[1],*(undefined8 *)(lVar2 + 0x98),*(undefined4 *)(lVar2 + 0x100),iVar4);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1431af9cd:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431afa9e FUN_1431afa9e body=3 status=ok
// SIG undefined FUN_1431afa9e(void)

void FUN_1431afa9e(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001431afa9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 1431afaa2 FUN_1431afaa2 body=3 status=ok
// SIG undefined FUN_1431afaa2(void)

void FUN_1431afaa2(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001431afaa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 1431afaaa FUN_1431afaaa body=3 status=ok
// SIG undefined FUN_1431afaaa(void)

void FUN_1431afaaa(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001431afaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 1431afc88 FUN_1431afc88 body=141 status=ok
// SIG undefined FUN_1431afc88(void)

void FUN_1431afc88(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_28;
  local_18 = 0;
  local_28 = 0x3ba0196d;
  uStack_20 = 0;
  local_60 = local_50;
  local_50[0] = 0x3b9d13fd;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68[0] = 0x3b9e2948;
  local_58 = 0;
  *(undefined4 **)(param_1 + 8) = local_68;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431afd36 FUN_1431afd36 body=141 status=ok
// SIG undefined FUN_1431afd36(void)

void FUN_1431afd36(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_28;
  local_18 = 0;
  local_28 = 0x3ba0196d;
  uStack_20 = 0;
  local_60 = local_50;
  local_50[0] = 0x3b9d13fd;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68[0] = 0x3b9e2948;
  local_58 = 0;
  *(undefined4 **)(param_1 + 8) = local_68;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431afde4 FUN_1431afde4 body=141 status=ok
// SIG undefined FUN_1431afde4(void)

void FUN_1431afde4(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_28;
  local_18 = 0;
  local_28 = 0x3ba0196d;
  uStack_20 = 0;
  local_60 = local_50;
  local_50[0] = 0x3b9d13fd;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68[0] = 0x3b9e2948;
  local_58 = 0;
  *(undefined4 **)(param_1 + 8) = local_68;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431aff50 FUN_1431aff50 body=141 status=ok
// SIG undefined FUN_1431aff50(void)

void FUN_1431aff50(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_28;
  local_18 = 0;
  local_28 = 0x3ba0196d;
  uStack_20 = 0;
  local_60 = local_50;
  local_50[0] = 0x3b9d13fd;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68[0] = 0x3b9e2948;
  local_58 = 0;
  *(undefined4 **)(param_1 + 8) = local_68;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0140 FUN_1431b0140 body=302 status=ok
// SIG undefined FUN_1431b0140(void)

void FUN_1431b0140(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_168 [32];
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  *(undefined4 **)(param_1 + 8) = local_148;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0270 FUN_1431b0270 body=117 status=ok
// SIG undefined FUN_1431b0270(void)

void FUN_1431b0270(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b02ea FUN_1431b02ea body=82 status=ok
// SIG undefined FUN_1431b02ea(void)

void FUN_1431b02ea(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b034a FUN_1431b034a body=302 status=ok
// SIG undefined FUN_1431b034a(void)

void FUN_1431b034a(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_168 [32];
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  *(undefined4 **)(param_1 + 8) = local_148;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b047a FUN_1431b047a body=117 status=ok
// SIG undefined FUN_1431b047a(void)

void FUN_1431b047a(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b04f4 FUN_1431b04f4 body=82 status=ok
// SIG undefined FUN_1431b04f4(void)

void FUN_1431b04f4(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b06dc FUN_1431b06dc body=302 status=ok
// SIG undefined FUN_1431b06dc(void)

void FUN_1431b06dc(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_168 [32];
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  *(undefined4 **)(param_1 + 8) = local_148;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b080c FUN_1431b080c body=117 status=ok
// SIG undefined FUN_1431b080c(void)

void FUN_1431b080c(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0886 FUN_1431b0886 body=82 status=ok
// SIG undefined FUN_1431b0886(void)

void FUN_1431b0886(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0b1a FUN_1431b0b1a body=428 status=ok
// SIG undefined FUN_1431b0b1a(void)

void FUN_1431b0b1a(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_208 [32];
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_158 = local_148;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_180 = local_160;
  local_160[0] = 0x3ba0196d;
  local_150 = 0;
  local_1a8 = local_188;
  local_188[0] = 0x3ba01578;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_1c8 = local_1b0;
  local_1b0[0] = 0x3b9d13fd;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1e0 = local_1d0;
  local_1d0[0] = 0x3b9f9c62;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1e8[0] = 0x3ba220e8;
  local_1d8 = 0;
  *(undefined4 **)(param_1 + 8) = local_1e8;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0cc8 FUN_1431b0cc8 body=117 status=ok
// SIG undefined FUN_1431b0cc8(void)

void FUN_1431b0cc8(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0d42 FUN_1431b0d42 body=82 status=ok
// SIG undefined FUN_1431b0d42(void)

void FUN_1431b0d42(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0da2 FUN_1431b0da2 body=428 status=ok
// SIG undefined FUN_1431b0da2(void)

void FUN_1431b0da2(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_208 [32];
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_158 = local_148;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_180 = local_160;
  local_160[0] = 0x3ba0196d;
  local_150 = 0;
  local_1a8 = local_188;
  local_188[0] = 0x3ba01578;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_1c8 = local_1b0;
  local_1b0[0] = 0x3b9d13fd;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1e0 = local_1d0;
  local_1d0[0] = 0x3b9f9c62;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1e8[0] = 0x3ba220e8;
  local_1d8 = 0;
  *(undefined4 **)(param_1 + 8) = local_1e8;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0f50 FUN_1431b0f50 body=117 status=ok
// SIG undefined FUN_1431b0f50(void)

void FUN_1431b0f50(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b0fca FUN_1431b0fca body=82 status=ok
// SIG undefined FUN_1431b0fca(void)

void FUN_1431b0fca(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b11b2 FUN_1431b11b2 body=428 status=ok
// SIG undefined FUN_1431b11b2(void)

void FUN_1431b11b2(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_208 [32];
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_158 = local_148;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_180 = local_160;
  local_160[0] = 0x3ba0196d;
  local_150 = 0;
  local_1a8 = local_188;
  local_188[0] = 0x3ba01578;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_1c8 = local_1b0;
  local_1b0[0] = 0x3b9d13fd;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1e0 = local_1d0;
  local_1d0[0] = 0x3b9f9c62;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1e8[0] = 0x3ba220e8;
  local_1d8 = 0;
  *(undefined4 **)(param_1 + 8) = local_1e8;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b1360 FUN_1431b1360 body=117 status=ok
// SIG undefined FUN_1431b1360(void)

void FUN_1431b1360(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b13da FUN_1431b13da body=82 status=ok
// SIG undefined FUN_1431b13da(void)

void FUN_1431b13da(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b1578 FUN_1431b1578 body=428 status=ok
// SIG undefined FUN_1431b1578(void)

void FUN_1431b1578(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_208 [32];
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puStack_80 = &local_28;
  local_18 = 0;
  local_28 = 0x3b9e5c10;
  uStack_20 = 0;
  local_98 = &local_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0x3b9d3ee9;
  local_b0 = local_a0;
  local_a0[0] = 0x3b9d8920;
  local_90 = 0;
  local_c8 = local_b8;
  local_b8[0] = 0x3b9e7768;
  local_a8 = 0;
  local_e0 = local_d0;
  local_d0[0] = 0x3b9f9497;
  local_c0 = 0;
  local_100 = local_e8;
  local_e8[0] = 0x3ba11748;
  local_d8 = 0;
  local_118 = local_108;
  local_108[0] = 0x3b9eb5e8;
  local_f8 = 0;
  local_f0 = 0;
  local_140 = local_120;
  local_120[0] = 0x3b9e2948;
  local_110 = 0;
  local_158 = local_148;
  local_148[0] = 0x3b9fcb40;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_180 = local_160;
  local_160[0] = 0x3ba0196d;
  local_150 = 0;
  local_1a8 = local_188;
  local_188[0] = 0x3ba01578;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_1c8 = local_1b0;
  local_1b0[0] = 0x3b9d13fd;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1e0 = local_1d0;
  local_1d0[0] = 0x3b9f9c62;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1e8[0] = 0x3ba220e8;
  local_1d8 = 0;
  *(undefined4 **)(param_1 + 8) = local_1e8;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b1726 FUN_1431b1726 body=117 status=ok
// SIG undefined FUN_1431b1726(void)

void FUN_1431b1726(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_c8[0] = 0x3b9fcb41;
  *(undefined4 **)(param_1 + 8) = local_c8;
  (*param_3)(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b17a0 FUN_1431b17a0 body=82 status=ok
// SIG undefined FUN_1431b17a0(void)

void FUN_1431b17a0(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = 0x3ba04840;
  *(undefined8 **)(param_1 + 8) = &local_38;
  (*param_3)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b17f4 FUN_1431b17f4 body=324 status=ok
// SIG undefined FUN_1431b17f4(void)

undefined8 FUN_1431b17f4(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_2 * 0x398;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (param_2 < 0x24) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0x3fffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1431b1855;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar5 & 0x3fffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
  }
LAB_1431b1855:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4 >> 3;
  uVar6 = SUB168(auVar3 * ZEXT816(0x239e0d5b450239e1),0);
  uVar4 = (uVar4 >> 3) / 0x73;
  uVar5 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar4) {
    uVar5 = uVar4 & 0xffffffff;
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x398,8);
  }
  return uVar6;
}



// FUNCTION 1431b1938 FUN_1431b1938 body=366 status=ok
// SIG undefined FUN_1431b1938(void)

void FUN_1431b1938(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x398;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1431b19cd;
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
LAB_1431b19cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x398)) {
    uVar7 = uVar5 / 0x398 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x398,8);
  return;
}



// FUNCTION 1431b1aa6 FUN_1431b1aa6 body=133 status=ok
// SIG undefined FUN_1431b1aa6(void)

void FUN_1431b1aa6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c7076(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c71f8(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431b1b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca791c0)(**(undefined8 **)(param_1 + 8),*(longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 1431b1b2c FUN_1431b1b2c body=289 status=ok
// SIG undefined FUN_1431b1b2c(void)

undefined4 FUN_1431b1b2c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  undefined4 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [17];
  byte local_b7;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)*param_1;
  lVar2 = *param_2;
  if ((int)param_2[2] != 0) {
    pRVar3 = (PSRWLOCK)param_2[3];
    AcquireSRWLockShared(pRVar3);
    local_d0 = lVar2 + 0x50;
    local_d8 = 0;
    (*DAT_14ca79228)(*(undefined8 *)*plVar1,param_2[1],1,param_1[1]);
    ReleaseSRWLockShared(pRVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  uVar4 = 0x3b9f5228;
  if ((*(byte *)(*plVar1 + 0x20fd) & 0x10) != 0) {
    pRVar3 = (PSRWLOCK)param_2[3];
    AcquireSRWLockShared(pRVar3);
    memcpy(local_c8,(void *)param_1[1],0x90);
    local_b7 = local_b7 | 1;
    local_d0 = lVar2 + 0x50;
    local_d8 = 0;
    uVar4 = (*DAT_14ca79228)(*(undefined8 *)*plVar1,param_2[1],1,local_c8);
    ReleaseSRWLockShared(pRVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b1c6c FUN_1431b1c6c body=29 status=ok
// SIG undefined FUN_1431b1c6c(void)

undefined8 FUN_1431b1c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431b1c8a FUN_1431b1c8a body=92 status=ok
// SIG undefined FUN_1431b1c8a(void)

void FUN_1431b1c8a(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca79428)(*(undefined8 *)param_1[1],*param_1);
  while (iVar1 == 0x3b9ee0e0) {
    FUN_14000f986(0x3c23d70a);
    iVar1 = (*DAT_14ca79428)(*(undefined8 *)param_1[1],*param_1);
  }
  if (iVar1 == 0) {
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



// FUNCTION 1431b1ce6 FUN_1431b1ce6 body=698 status=ok
// SIG undefined FUN_1431b1ce6(void)

void FUN_1431b1ce6(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  uint local_130;
  longlong local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined4 local_10c;
  ulonglong local_108;
  void *local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar12 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 8));
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 == '\x02') {
    local_120 = *(undefined4 *)((longlong)plVar12 + 0x14);
    local_128 = plVar12[5];
    uVar3 = *(ushort *)((longlong)plVar12 + 0x1a);
    local_138 = plVar12[4];
    uVar7 = *(undefined4 *)((longlong)plVar12 + 0xc);
    uVar8 = (undefined4)plVar12[2];
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    local_118 = 7;
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 == '\0') {
        lVar9 = *plVar12;
        lVar11 = plVar12[2];
        lVar15 = *(longlong *)(param_1 + 0x10);
        lVar10 = *(longlong *)(param_1 + 0x18);
        uVar4 = *(uint *)((longlong)plVar12 + 0xc);
        uVar5 = *(uint *)(lVar10 + 0x38);
        if ((lVar9 != 0) && (*(int *)(lVar10 + 0x3c) == 0)) {
          uVar16 = (ulonglong)(int)plVar12[1];
          if ((uVar5 & 2) != 0) {
            local_10c = *(undefined4 *)((longlong)plVar12 + 0x14);
            local_100 = (void *)plVar12[5];
            local_108 = (ulonglong)*(ushort *)((longlong)plVar12 + 0x1a);
            lVar13 = plVar12[4];
            uVar17 = *(undefined8 *)(*(longlong *)(lVar15 + 0x58) + (longlong)(int)lVar11 * 8);
            local_f8 = uVar16;
            local_f0 = lVar15;
            memcpy(&local_e8,(void *)(uVar16 * 0x98 + *(longlong *)(lVar9 + 0xa8)),0x98);
            uStack_e0 = CONCAT44(local_10c,(undefined4)uStack_e0);
            FUN_1431b2579(&local_e8,lVar10,lVar13,uVar17);
            memcpy((void *)((longlong)
                            (int)(*(int *)(lVar10 + 0x150) * uVar4 + *(int *)(lVar10 + 0x1fc)) +
                           *(longlong *)(lVar10 + 0x110)),&local_e8,0x98);
            *(undefined1 *)(lVar10 + 0x160) = 1;
            lVar15 = local_f0;
            uVar16 = local_f8;
            if (local_108 != 0 && local_100 != (void *)0x0) {
              memcpy((void *)((longlong)
                              (int)(*(int *)(lVar10 + 0x1fc) + *(int *)(lVar10 + 0x150) * uVar4 +
                                   0x98) + *(longlong *)(lVar10 + 0x110)),local_100,local_108);
              *(undefined1 *)(lVar10 + 0x160) = 1;
              lVar15 = local_f0;
              uVar16 = local_f8;
            }
          }
          if (((uVar5 & 1) != 0) && (uVar6 = *(uint *)(lVar10 + 0x1c), uVar4 % uVar6 == 0)) {
            local_e8 = 0;
            uStack_e0 = 0;
            local_d8 = 0;
            FUN_1473b8d2c(lVar9,uVar16 & 0xffffffff,&local_e8);
            lVar9 = *(longlong *)(lVar10 + 0x1c8);
            lVar13 = (longlong)(int)((uVar4 / uVar6) * 0x18);
            *(undefined8 *)(lVar9 + 0x10 + lVar13) = local_d8;
            puVar1 = (undefined8 *)(lVar9 + lVar13);
            *puVar1 = local_e8;
            puVar1[1] = uStack_e0;
          }
        }
        if ((uVar5 & 2) != 0) {
          memcpy((void *)((longlong)(int)(uVar4 * *(int *)(lVar10 + 0x150)) +
                         *(longlong *)(lVar10 + 0x110)),
                 (void *)((longlong)(int)((int)lVar11 * *(uint *)(lVar10 + 0x1f8)) +
                         *(longlong *)(lVar15 + 0x68)),(ulonglong)*(uint *)(lVar10 + 0x1f8));
          *(undefined1 *)(lVar10 + 0x160) = 1;
        }
      }
      if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_120 = *(undefined4 *)((longlong)plVar12 + 0x14);
    local_128 = plVar12[5];
    uVar3 = *(ushort *)((longlong)plVar12 + 0x1a);
    local_138 = plVar12[4];
    uVar7 = *(undefined4 *)((longlong)plVar12 + 0xc);
    uVar8 = (undefined4)plVar12[2];
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    local_118 = 9;
  }
  local_130 = (uint)uVar3;
  FUN_1431b23fb(uVar14,uVar7,uVar17,uVar8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
}



// FUNCTION 1431b1fa2 FUN_1431b1fa2 body=125 status=ok
// SIG undefined FUN_1431b1fa2(void)

void FUN_1431b1fa2(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_1431b2ce4(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b2020 FUN_1431b2020 body=913 status=ok
// SIG undefined FUN_1431b2020(void)

ulonglong FUN_1431b2020(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
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
  local_da = param_2;
  local_d0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar15) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  plVar5 = local_d0;
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
  local_c0 = -0x8000000000000000;
  lVar8 = *plVar5;
  if (local_da == 0) {
    lVar8 = *plVar5;
    iVar9 = *(int *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= iVar9) {
      FUN_1431b1fa2(plVar5);
      lVar8 = *plVar5;
    }
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c0 = (longlong)auVar18._0_8_;
      iVar13 = 0;
      if (0 < DAT_14c7585cc) {
        iVar13 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar13 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_d8 = (longlong)auVar18._0_8_;
      lVar8 = *plVar5;
      bVar15 = true;
      goto LAB_1431b21ad;
    }
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x34);
  }
  bVar15 = false;
  local_d8 = 0;
LAB_1431b21ad:
  iVar13 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  local_c4 = iVar9 + -1;
  local_d9 = local_da ^ 1;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar9 < iVar13) {
      bVar3 = local_c4 <= iVar11;
      if (local_c4 <= iVar11) {
        iVar11 = local_c4;
      }
      if ((local_d9 & bVar3) != 0) goto LAB_1431b22d7;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar4 = iVar13;
    if (iVar14 < iVar13) {
      iVar4 = iVar14;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      do {
        FUN_1431b1ce6(uVar2,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
    plVar5 = local_d0;
    if (iVar11 < iVar13) {
      LOCK();
      piVar1 = (int *)(*local_d0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        if (local_da == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d0 + 0x48) + 0x10))();
        }
        goto LAB_1431b22d9;
      }
    }
    if (iVar14 < iVar13 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_d8 < (longlong)auVar18._0_8_ - local_c0) {
        *(undefined1 *)((longlong)plVar5 + 0xc) = 1;
LAB_1431b22d7:
        uVar12 = 0;
LAB_1431b22d9:
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
    else if (iVar13 <= iVar14) goto LAB_1431b22d7;
    lVar8 = *plVar5;
  } while( true );
}



// FUNCTION 1431b23b2 FUN_1431b23b2 body=73 status=ok
// SIG undefined FUN_1431b23b2(void)

void FUN_1431b23b2(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_1431b2ce4(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431b23f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431b23fb FUN_1431b23fb body=381 status=ok
// SIG undefined FUN_1431b23fb(void)

void FUN_1431b23fb(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  uint param_6,void *param_7,undefined4 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [12];
  undefined4 local_d4;
  ulonglong local_48;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_9);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = (longlong *)FUN_1473ba2da(param_3);
  uVar1 = *(undefined8 *)(*plVar2 + (longlong)param_4 * 8);
  memset(local_e0,0,0x98);
  local_d4 = param_8;
  FUN_1431b2579(local_e0,param_1,param_5,uVar1);
  lVar3 = FUN_1473b9404(param_1,uVar5 & 0xffffffff);
  memcpy((void *)((longlong)(*(int *)(lVar3 + 0x48) * param_2 + *(int *)(param_1 + 0x1fc)) +
                 *(longlong *)(lVar3 + 8)),local_e0,0x98);
  *(undefined1 *)(lVar3 + 0x58) = 1;
  if (param_6 != 0 && param_7 != (void *)0x0) {
    lVar3 = FUN_1473b9404(param_1,uVar5 & 0xffffffff);
    memcpy((void *)((longlong)(*(int *)(param_1 + 0x1fc) + *(int *)(lVar3 + 0x48) * param_2 + 0x98)
                   + *(longlong *)(lVar3 + 8)),param_7,(ulonglong)param_6);
    *(undefined1 *)(lVar3 + 0x58) = 1;
  }
  lVar3 = FUN_1473ba2da(param_3,uVar5 & 0xffffffff);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  lVar4 = FUN_1473b9404(param_1,uVar5 & 0xffffffff);
  memcpy((void *)((longlong)(param_2 * *(int *)(lVar4 + 0x48)) + *(longlong *)(lVar4 + 8)),
         (void *)((int)(param_4 * *(uint *)(param_1 + 0x1f8)) + lVar3),
         (ulonglong)*(uint *)(param_1 + 0x1f8));
  *(undefined1 *)(lVar4 + 0x58) = 1;
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b2579 FUN_1431b2579 body=694 status=ok
// SIG undefined FUN_1431b2579(void)

void FUN_1431b2579(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  byte local_a1;
  longlong local_a0;
  longlong local_98 [3];
  uint local_7c;
  uint *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < *(int *)(param_4 + 0xe0)) {
    lVar11 = 0;
    do {
      lVar6 = *(longlong *)(param_3 + lVar11 * 8);
      lVar3 = *(longlong *)(param_4 + 0xd8);
      if (lVar6 == 0) {
        local_7c = *(uint *)(lVar3 + lVar11 * 8);
        uVar4 = *(undefined8 *)(param_2 + 0x30);
        AcquireSRWLockShared((PSRWLOCK)&DAT_14ca78618);
        if (DAT_14ca78628 != DAT_14ca78654) {
          puVar10 = DAT_14ca78660;
          if (DAT_14ca78660 == (undefined *)0x0) {
            puVar10 = &DAT_14ca78658;
          }
          uVar2 = *(uint *)(puVar10 + (ulonglong)(DAT_14ca78668 - 1U & local_7c) * 4);
          while (uVar2 != 0xffffffff) {
            puVar1 = (uint *)(DAT_14ca78620 + (longlong)(int)uVar2 * 0x18);
            if (*puVar1 == local_7c) {
              if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
                lVar6 = *(longlong *)(puVar1 + 2);
                ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca78618);
                goto LAB_1431b279c;
              }
              break;
            }
            uVar2 = puVar1[4];
          }
        }
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca78618);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca78618);
        lVar6 = FUN_144948f1d(local_7c);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar6 + 0x48);
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            local_98[0] = 0;
            local_98[1] = 0;
            FUN_1401211f6(local_98,*(undefined4 *)(lVar5 + 0x84),1);
            lVar6 = FUN_14001cc68(0x78,0x10);
            local_b0 = 0;
            local_b8 = 2;
            FUN_1473d9584(lVar6,uVar4,lVar5,local_98[0]);
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            local_78 = &local_7c;
            local_70 = &local_a0;
            local_a0 = lVar6;
            FUN_1473cdcd6(local_64,&local_78);
            lVar5 = local_a0;
            if (local_a0 != 0) {
              LOCK();
              puVar1 = (uint *)(local_a0 + 8);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar2 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_a0 + 8);
                LOCK();
                uVar2 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar2 >> 0x1e & 1) == 0) {
                  local_a1 = *(byte *)(local_a0 + 0xd);
                  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar7[1] = lVar5;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((local_a1 & 2) == 0) {
                    do {
                      *plVar7 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar7;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar7 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar7;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
            }
            if (local_98[0] != 0) {
              FUN_1400020a8();
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca78618);
      }
LAB_1431b279c:
      FUN_1473d9aa6(lVar6,&local_78);
      *(undefined4 *)(param_1 + 0x18 + (ulonglong)*(byte *)(lVar3 + 5 + lVar11 * 8) * 4) =
           local_78._0_4_;
      FUN_1473cdc4c(param_2,lVar6);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_4 + 0xe0));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b2830 FUN_1431b2830 body=434 status=ok
// SIG undefined FUN_1431b2830(void)

undefined8 * FUN_1431b2830(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a3696d0;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_1431b2cb4(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431af85e);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_1431b28fa;
      }
      _aligned_free(piVar3);
    }
  }
LAB_1431b28fa:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431af85e);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 1431b29e2 FUN_1431b29e2 body=53 status=ok
// SIG undefined FUN_1431b29e2(void)

void FUN_1431b29e2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1431b2a18 FUN_1431b2a18 body=667 status=ok
// SIG undefined FUN_1431b2a18(void)

void FUN_1431b2a18(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1431b2b13;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_1431af85e);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_1431b2b13:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_1431b2b8d;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1431b2b8d:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_1431b2c34;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1431af85e);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_1431b2c34;
    }
    _aligned_free(_Memory);
  }
LAB_1431b2c34:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1431b2cb4 FUN_1431b2cb4 body=47 status=ok
// SIG undefined FUN_1431b2cb4(void)

void FUN_1431b2cb4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1431b2ce4 FUN_1431b2ce4 body=369 status=ok
// SIG undefined FUN_1431b2ce4(void)

void FUN_1431b2ce4(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a3696e0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_1431b23b2(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_1431b23b2(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1431b2e74 FUN_1431b2e74 body=450 status=ok
// SIG undefined FUN_1431b2e74(void)

void FUN_1431b2e74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a3696e0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a369720;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1431b2f51;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1431af85e);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1431b2f51:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1431b2fcb;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1431b2fcb:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1431b3036 FUN_1431b3036 body=26 status=ok
// SIG undefined FUN_1431b3036(void)

undefined8 FUN_1431b3036(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1431b2020(param_2,0);
  }
  return 0;
}



// FUNCTION 1431b3050 FUN_1431b3050 body=72 status=ok
// SIG undefined FUN_1431b3050(void)

undefined8
FUN_1431b3050(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_1431b2020(param_3,0);
  }
  FUN_1431b2e74(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 1431b30ca FUN_1431b30ca body=26 status=ok
// SIG undefined FUN_1431b30ca(void)

undefined8 FUN_1431b30ca(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1431b2020(*param_2,0);
  }
  return 0;
}



// FUNCTION 1431b30e4 FUN_1431b30e4 body=70 status=ok
// SIG undefined FUN_1431b30e4(void)

undefined8
FUN_1431b30e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1431b2020(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a369720;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1431b312a FUN_1431b312a body=179 status=ok
// SIG undefined FUN_1431b312a(void)

void FUN_1431b312a(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_1431b23b2(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431af85e);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001431b31a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1431b31ec FUN_1431b31ec body=838 status=ok
// SIG undefined FUN_1431b31ec(void)

void FUN_1431b31ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar2 = *param_1;
  FUN_1473b808a(lVar2);
  FUN_1431baa7c(lVar2 + 0x498);
  FUN_147399d10(*(undefined8 *)(lVar2 + 0x150),0);
  FUN_1473a83aa(*(longlong *)(lVar2 + 0x120) + 0x5d0,0);
  FUN_1473a7048(*(longlong *)(lVar2 + 0x120) + 0x3d8,lVar2);
  FUN_1431a02cc(*(longlong *)(lVar2 + 0x120) + 0x590,0);
  lVar5 = *(longlong *)(lVar2 + 0x120);
  if (DAT_14c760db4 < 2) {
    lVar3 = *(longlong *)(lVar5 + 0x6a0);
    iVar9 = *(int *)(lVar3 + 0x10);
    if (DAT_14c760c78 < iVar9) {
      plVar1 = (longlong *)(lVar3 + 0x18);
      do {
        lVar5 = *(longlong *)(lVar3 + 8);
        lVar4 = *(longlong *)(lVar5 + -8 + (longlong)iVar9 * 8);
        if ((uint)(DAT_14c7590b0 - *(int *)(lVar4 + 0xf0)) < 4) break;
        plVar7 = (longlong *)(lVar5 + (longlong)iVar9 * 8 + -8);
        if (plVar1 != plVar7) {
          lVar5 = *plVar1;
          *plVar1 = lVar4;
          *plVar7 = 0;
          if (lVar5 != 0) {
            *(undefined4 *)(lVar5 + 0xe8) = 0;
            if (*(longlong *)(lVar5 + 0xe0) != 0) {
              FUN_1400020a8();
            }
            FUN_1473c7076(lVar5 + 0xa0);
            *(undefined4 *)(lVar5 + 0x98) = 0;
            if (*(longlong *)(lVar5 + 0x90) != 0) {
              FUN_1400020a8();
            }
            FUN_1473c71f8(lVar5 + 0x50);
            if (*(longlong *)(lVar5 + 0x18) != 0) {
              (*DAT_14ca791c0)(**(undefined8 **)(lVar5 + 8));
            }
            FUN_1400020a8(lVar5);
          }
        }
        FUN_1473c7400((longlong *)(lVar3 + 8),iVar9 + -1);
        iVar9 = *(int *)(lVar3 + 0x10);
      } while (DAT_14c760c78 < iVar9);
      lVar5 = *(longlong *)(lVar2 + 0x120);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x6a8);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
  iVar9 = *(int *)(lVar5 + 0x40);
  if (0 < (longlong)iVar9) {
    lVar3 = *(longlong *)(lVar5 + 0x38);
    uVar8 = (longlong)iVar9 + 1;
    iVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + uVar8 * 8 + -0x10);
      if ((*(char *)(lVar4 + 0x5c) == '\0') && (3 < (uint)(DAT_14c7590b0 - *(int *)(lVar4 + 0x58))))
      {
        if (iVar10 != 0) {
          iVar11 = 1;
          if (iVar10 < 1) {
            iVar11 = iVar10;
          }
          memmove((void *)(lVar3 + uVar8 * 8 + -0x10),
                  (void *)(lVar3 + (ulonglong)(uint)(iVar9 - iVar11) * 8),(longlong)iVar11 << 3);
          iVar9 = *(int *)(lVar5 + 0x40);
        }
        *(int *)(lVar5 + 0x40) = iVar9 + -1;
        FUN_1473c6e60((longlong *)(lVar5 + 0x38));
        lVar3 = *(longlong *)(lVar5 + 8);
        if (lVar3 == 0) {
          puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar6[1] = 0;
          *puVar6 = &PTR_FUN_149e06640;
          *(undefined4 *)(puVar6 + 2) = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          *(undefined2 *)(puVar6 + 5) = 3;
          puVar6[6] = 0xffffffffffffffff;
          puVar6[7] = 0;
          *puVar6 = &PTR_FUN_14a3694a0;
          puVar6[9] = lVar4;
          *(undefined8 **)(lVar5 + 8) = puVar6;
        }
        else {
          if (*(int *)(lVar3 + 0x10) == 0) {
            if (*(longlong *)(lVar3 + 0x20) != 0) {
              (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x20))
                        (*(longlong **)(lVar3 + 0x18),0xffffffff,0);
              *(undefined8 *)(lVar3 + 0x20) = 0;
            }
          }
          else {
            FUN_140187fa0(*(undefined8 *)(lVar5 + 8),1,0);
          }
          *(longlong *)(*(longlong *)(lVar5 + 8) + 0x48) = lVar4;
          puVar6 = *(undefined8 **)(lVar5 + 8);
        }
        FUN_1402a8900(puVar6,0,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
        break;
      }
      iVar10 = iVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
  FUN_1473b56b2(*(undefined8 *)(*(longlong *)(lVar2 + 0x120) + 0x25e8));
  lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x120) + 0x6b0);
  if ((*(char *)(lVar5 + 8) == '\x01') && (*(longlong *)(lVar5 + 0x3a0) != 0)) {
    FUN_1473a30fc();
  }
  FUN_1473a30fc(*(undefined8 *)(lVar2 + 0x138));
  *(longlong *)(lVar2 + 0x490) = *(longlong *)(lVar2 + 0x490) + 1;
  return;
}



// FUNCTION 1431b3532 FUN_1431b3532 body=133 status=ok
// SIG undefined FUN_1431b3532(void)

void FUN_1431b3532(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18 [3];
  
  local_18[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18[0] = 0;
  local_18[1] = 0;
  local_28 = local_18[0];
  local_20 = local_18[1];
  for (bVar2 = *(byte *)(param_1 + 0x18); local_18[0] = local_28, local_18[1] = local_20, bVar2 != 0
      ; bVar2 = bVar2 - 1 & bVar2) {
    uVar1 = (ulonglong)((-bVar2 & bVar2) == 2);
    local_18[uVar1] = *(ulonglong *)(param_2 + 0x50 + uVar1 * 8);
    local_28 = local_18[0];
    local_20 = local_18[1];
  }
  FUN_1431b31ec();
  if ((local_18[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b35b8 FUN_1431b35b8 body=167 status=ok
// SIG undefined FUN_1431b35b8(void)

void FUN_1431b35b8(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  for (bVar2 = *(byte *)(param_1 + 0x18); bVar2 != 0; bVar2 = bVar2 - 1 & bVar2) {
    uVar1 = (ulonglong)((-bVar2 & bVar2) == 2);
    local_28[uVar1] = *(longlong *)(param_2 + 0x50 + uVar1 * 8);
  }
  DAT_14ca77fd0 = DAT_14ca77fd0 + 1;
  FUN_1431ba77a(local_28[0] + 0x498);
  if (DAT_14ca84ef4 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28[2] ^ (ulonglong)auStack_48);
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b3672 FUN_1431b3672 body=509 status=ok
// SIG undefined FUN_1431b3672(void)

void FUN_1431b3672(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar10 = (longlong *)*param_1;
    plVar2 = plVar10 + (longlong)(int)param_1[1] * 3;
    do {
      if ((char)plVar10[2] == '\x01') {
        lVar5 = *plVar10;
        if (plVar10[1] == 0) {
          puVar6 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined1 *)((longlong)puVar6 + 0xc) = 0x21;
          *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) | 3;
          puVar1 = (uint *)(puVar6 + 1);
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2e) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x36) = 0;
          *(undefined1 *)((longlong)puVar6 + 0x3e) = 1;
          *(undefined8 *)((longlong)puVar6 + 0x3f) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x47) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x4f) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x57) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x5f) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x67) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x6c) = 0;
          *puVar6 = &PTR_FUN_14a361140;
          puVar6[0xf] = 0;
          puVar6[0x10] = 0;
          *(undefined8 *)((longlong)puVar6 + 0x81) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x89) = 0;
          puVar6[0x13] = 0;
          puVar6[0x14] = 0;
          puVar6[0x15] = 0;
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
          puVar6[0x18] = 0;
          *(undefined4 *)(puVar6 + 0x19) = 0xffffffff;
          *(undefined1 *)((longlong)puVar6 + 0xcc) = 0xff;
          puVar6[0x1a] = 0;
          puVar6[0x1b] = 0;
          *(undefined4 *)(puVar6 + 0x1c) = 0;
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            *puVar1 = *puVar1 + 1;
            UNLOCK();
          }
          if (*(char *)(lVar5 + 0x90) == '\x01') {
            FUN_1473b8a12(*(undefined8 *)(*(longlong *)(lVar5 + 0xa0) + 0xef0),lVar5);
            *(undefined1 *)(lVar5 + 0x90) = 0;
          }
          FUN_1473b8962(lVar5,puVar6);
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              LOCK();
              uVar3 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)puVar6 + 0xd);
                plVar7 = (longlong *)FUN_14001cc68(0x10,8);
                plVar7[1] = (longlong)puVar6;
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar7 = (longlong)plVar9;
                    LOCK();
                    bVar11 = plVar9 != DAT_14ca843c0;
                    plVar8 = plVar7;
                    if (bVar11) {
                      plVar9 = DAT_14ca843c0;
                      plVar8 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar8;
                    UNLOCK();
                  } while (bVar11);
                }
                else {
                  do {
                    *plVar7 = (longlong)plVar8;
                    LOCK();
                    bVar11 = plVar8 != DAT_14ca843c8;
                    plVar9 = plVar7;
                    if (bVar11) {
                      plVar8 = DAT_14ca843c8;
                      plVar9 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar9;
                    UNLOCK();
                  } while (bVar11);
                }
              }
            }
          }
        }
        else {
          FUN_1473b8962(lVar5);
        }
      }
      else if ((char)plVar10[2] == '\0') {
        lVar5 = *plVar10;
        if (plVar10[1] == 0) {
          FUN_147398476();
        }
        else {
          FUN_14739882a(lVar5);
        }
        (**(code **)(*(longlong *)(lVar5 + 0x30) + 8))(lVar5 + 0x30);
      }
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar2);
  }
  return;
}



// FUNCTION 1431b3870 FUN_1431b3870 body=43 status=ok
// SIG undefined FUN_1431b3870(void)

void FUN_1431b3870(longlong param_1)

{
  FUN_1431b3672(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431b389b FUN_1431b389b body=2283 status=ok
// SIG undefined FUN_1431b389b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b389b(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_e8;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined1 local_d1;
  undefined4 local_d0;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined1 local_c1;
  undefined8 *local_c0;
  ulonglong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1400b22c2(&local_b0,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_b0,&DAT_14ca78364);
  if (cVar1 == '\0') {
    _DAT_14ca78364 = 0;
    uRam000000014ca7836c = 0;
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_f8 = 0x24;
  FUN_141471170(&DAT_14ca78378,L"r.Vulkan.DSetCacheTargetSetsPerPool",&DAT_14c760c74,
                L"Target number of descriptor set allocations per single pool.\n");
  atexit(FUN_1431a1544);
  local_f8 = 0x24;
  FUN_141471170(&DAT_14ca78388,L"r.Vulkan.DSetCacheMaxPoolLookups",&DAT_14c760c78,
                L"Maximum count of pool\'s caches to lookup before allocating new descriptor.\n");
  atexit(FUN_1431a1589);
  local_b0._0_4_ = 0;
  local_f8 = 0x24;
  FUN_14078dbce(&DAT_14ca78398,L"r.Vulkan.PipelineDebugForceEvictImmediately",&local_b0,
                L"1: Force all created PSOs to be evicted immediately. Only for debugging");
  atexit(FUN_1431a1d9f);
  local_b0._0_4_ = 0;
  local_f8 = 0x20;
  FUN_14078dbce(&DAT_14ca783b0,L"r.Vulkan.PipelineLRUCacheEvictBinaryPreloadScreen",&local_b0,
                L"1: Use a preload screen while loading preevicted PSOs ala r.Vulkan.PipelineLRUCacheEvictBinary"
               );
  atexit(FUN_1431a1de4);
  local_b0._0_4_ = 0;
  local_f8 = 0x24;
  FUN_14078dbce(&DAT_14ca783c8,L"r.Vulkan.EnablePipelineLRUCache",&local_b0,
                L"Pipeline LRU cache.\n0: disable LRU\n1: Enable LRU");
  atexit(FUN_1431a1e29);
  local_b0._0_4_ = 0;
  local_f8 = 0x24;
  FUN_14078dbce(&DAT_14ca783e0,L"r.Vulkan.PipelineLRUCacheEvictBinary",&local_b0,
                L"0: create pipelines in from the binary PSO cache and binary shader cache and evict them only as it fills up.\n1: don\'t create pipelines....just immediately evict them"
               );
  atexit(FUN_1431a1e6e);
  local_b0._0_4_ = 0x20000000;
  local_f8 = 0x20;
  FUN_14078dbce(&DAT_14ca783f8,L"r.Vulkan.PipelineLRUSize",&local_b0,
                L"Maximum size of shader memory .");
  atexit(FUN_1431a1eb3);
  local_b0._0_4_ = 0x2000;
  local_f8 = 0x24;
  FUN_14078dbce(&DAT_14ca78410,L"r.Vulkan.PipelineLRUCapactiy",&local_b0,
                L"Maximum no. of PSOs in LRU.");
  atexit(FUN_1431a1ef8);
  local_b0._0_4_ = 1;
  local_f8 = 0;
  FUN_14078dbce(&DAT_14ca78428,L"r.Vulkan.PipelineCacheLoad",&local_b0,
                L"0 to disable loading the pipeline cache1 to enable using pipeline cache");
  atexit(FUN_1431a1f3d);
  local_b0 = (undefined1 *)((ulonglong)local_b0._4_4_ << 0x20);
  local_f8 = 4;
  FUN_14078dbce(&DAT_14ca78440,L"r.Vulkan.PipelineCacheFromShaderPipelineCache",&local_b0,
                L"0 look for a pipeline cache in the normal locations with the normal names.1 tie the vulkan pipeline cache to the shader pipeline cache, use the PSOFC guid as part of the filename, etc."
               );
  atexit(FUN_1431a1f82);
  local_f8 = 0x20;
  FUN_141471170(&DAT_14ca78458,L"r.Vulkan.PipelineCacheCompression",&DAT_14c760c7c,
                L"Enable/disable compression on the Vulkan pipeline cache disk file\n");
  atexit(FUN_1431a1fc7);
  local_f8 = 0x24;
  FUN_141471170(&DAT_14ca78468,L"r.Vulkan.ForcePSOSingleThreaded",&DAT_14ca78478,
                L"Enable to force singlethreaded creation of PSOs. Only intended as a workaround for buggy drivers\n0: (default) Allow Async precompile PSO creation.\n1: force singlethreaded creation of all PSOs.\n2: force singlethreaded creation of precompile PSOs only.\n3: force singlethreaded creation of non-precompile PSOs only."
               );
  atexit(FUN_1431a200c);
  local_f8 = 0x20;
  FUN_141471170(&DAT_14ca78480,L"r.Vulkan.PSOLRUEvictAfterUnusedFrames",&DAT_14ca78490,
                L"0: unused PSOs are not removed from the PSO LRU cache. (default)\n>0: The number of frames an unused PSO can remain in the PSO LRU cache. When this is exceeded the PSO is destroyed and memory returned to the system. This can save memory with the risk of increased hitching."
               );
  atexit(FUN_1431a2051);
  local_f8 = 0x20;
  FUN_141471170(&DAT_14ca78498,L"r.Vulkan.ReleaseShaderModuleWhenEvictingPSO",&DAT_14ca784a8,
                L"0: shader modules remain when a PSO is removed from the PSO LRU cache. (default)\n1: shader modules are destroyed when a PSO is removed from the PSO LRU cache. This can save memory at the risk of increased hitching and cpu cost."
               );
  atexit(FUN_1431a2096);
  local_b0 = &local_c1;
  local_c1 = 0;
  local_a8 = &local_c8;
  local_c8 = 0;
  local_a0 = &local_c9;
  local_c9 = 1;
  local_98 = &local_d0;
  local_d0 = 1;
  local_90 = &local_d1;
  local_d1 = 2;
  local_88 = &local_d8;
  local_d8 = 2;
  local_80 = &local_d9;
  local_d9 = 3;
  local_78 = &local_e0;
  local_e0 = 3;
  local_70 = &local_e1;
  local_e1 = 4;
  local_68 = &local_e8;
  local_e8 = 3;
  local_b8 = local_60;
  local_c0 = &local_b0;
  FUN_145c846b6();
  atexit(FUN_1431a3c8d);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78500);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78500,4000);
  atexit((_func_5014 *)&LAB_1431a4f9b);
  local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_f8 = 0x20;
  FUN_14078dbce(&DAT_14ca78528,L"r.Vulkan.TimestampQueryStage",&local_b0,
                L"Defines which pipeline stage is used for timestamp queries.\n 0: Use VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, less precise measures but less likely to alter performance (default)\n 1: Use VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, more precise measures but may alter performance on some platforms"
               );
  atexit(FUN_1431a6106);
  local_f8 = 0;
  FUN_141471170(&DAT_14ca78540,L"r.Vulkan.WaitForIdleOnSubmit",&DAT_14ca78910,
                L"Waits for the GPU to be idle after submitting a command buffer. Useful for tracking GPU hangs.\n 0: Do not wait(default)\n 1: Wait on every submit\n 2: Wait when submitting an upload buffer\n 3: Wait when submitting an active buffer (one that has gfx commands)\n"
               );
  atexit(FUN_1431a68a4);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78550,L"r.Vulkan.RayTracing.AllowCompaction",&DAT_14c760c80,
                L"Whether to automatically perform compaction for static acceleration structures to save GPU memory. (default = 1)\n"
               );
  atexit(FUN_1431a6b7b);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78560,L"r.Vulkan.RayTracing.MaxBatchedCompaction",&DAT_14c760c84,
                L"Maximum of amount of compaction requests and rebuilds per frame. (default = 64)\n"
               );
  atexit(FUN_1431a6bc0);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78570,L"r.Vulkan.RayTracing.AllowDeferredOperation",&DAT_14ca78580,
                L"Whether to use Vulkan Deferred Operation for RT pipeline creation. (default = -1)\n <0: Disabled\n 0: Enabled, auto detect the maximum number of threads >0: Enabled, use the specified number of threads"
               );
  atexit(FUN_1431a6c05);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78588,L"r.Vulkan.SubmitOnTraceRays",&DAT_14ca78598,
                L"0 to not do anything special on trace rays (default)\n1 to submit the cmd buffer after each trace rays"
               );
  atexit(FUN_1431a6c4a);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca785a0,L"r.Vulkan.RayTracing.MaxShaderGroupStride",&DAT_14c760c88,
                L"The default size to allocate for each record (default: 4096).");
  atexit(FUN_1431a6c8f);
  InitializeSRWLock((PSRWLOCK)&DAT_14ca78618);
  DAT_14ca78640 = 0;
  DAT_14ca78648 = 0;
  DAT_14ca78620 = 0;
  _DAT_14ca78628 = 0;
  _DAT_14ca7864c = 0xffffffff00000080;
  DAT_14ca78654 = 0;
  DAT_14ca78660 = 0;
  DAT_14ca78668 = 0;
  atexit(FUN_1431a9ea0);
  local_f8 = 0;
  FUN_141471170(&DAT_14ca78698,L"r.Vulkan.FlushOnMapStaging",&DAT_14ca786a8,
                L"Flush GPU on MapStagingSurface calls without any fence.\n 0: Do not Flush (default)\n 1: Flush"
               );
  atexit(FUN_1431ab455);
  local_f8 = 0;
  FUN_141471170(&DAT_14ca786b0,L"r.Vulkan.IgnoreCPUReads",&DAT_14ca786c0,
                L"Debugging utility for GPU->CPU reads.\n 0 will read from the GPU (default).\n 1 will NOT read from the GPU and fill with zeros.\n"
               );
  atexit(FUN_1431ab49a);
  local_b0._0_4_ = 1;
  local_f8 = 0x20;
  FUN_14078dbce(&DAT_14ca786c8,L"r.Vulkan.SubmitOcclusionBatchCmdBuffer",&local_b0,
                L"1 to submit the cmd buffer after end occlusion query batch (default)");
  atexit(FUN_1431ab4df);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca786e0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca786e0,4000);
  atexit((_func_5014 *)&LAB_1431ab524);
  DAT_14ca78728 = 0;
  _DAT_14ca78730 = 0;
  DAT_14ca78708 = 0;
  _DAT_14ca78710 = 0;
  _DAT_14ca78734 = 0xffffffff00000080;
  _DAT_14ca7873c = 0;
  DAT_14ca78748 = 0;
  _DAT_14ca78750 = 0;
  atexit(FUN_1431ab532);
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,1);
  local_f8 = 0;
  FUN_14078dbce(&DAT_14ca788d8,L"r.Vulkan.RHIThread",&local_b0,
                L"0 to only use Render Thread\n1 to use ONE RHI Thread\n2 to use multiple RHI Thread\n"
               );
  atexit(FUN_1431ac845);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78768,L"r.Vulkan.InputAttachmentShaderRead",&DAT_14ca78760,
                L"Whether to use VK_ACCESS_SHADER_READ_BIT an input attachments to workaround rendering issues\n0 use: VK_ACCESS_INPUT_ATTACHMENT_READ_BIT (default)\n1 use: VK_ACCESS_INPUT_ATTACHMENT_READ_BIT | VK_ACCESS_SHADER_READ_BIT\n"
               );
  atexit(FUN_1431ac88a);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca78778,L"r.Vulkan.EnableTransientResourceAllocator",&DAT_14c760c8c,
                L"Whether to enable the TransientResourceAllocator to reduce memory usage\n0 to disabled (default)\n1 to enable\n"
               );
  atexit(FUN_1431ac8cf);
  local_b0._0_1_ = 1;
  local_f8 = 0x24;
  FUN_140bd5914(&DAT_14ca78788,L"r.Vulkan.AllowPSOPrecaching",&local_b0,
                L"true: if r.PSOPrecaching=1 Vulkan RHI will use precaching. (default)\nfalse: Vulkan RHI will disable precaching (even if r.PSOPrecaching=1)."
               );
  atexit(FUN_1431ac914);
  local_b0 = (undefined1 *)((ulonglong)local_b0._1_7_ << 8);
  local_f8 = 0x24;
  FUN_140bd5914(&DAT_14ca787a0,L"r.Vulkan.EnablePSOFileCacheWhenPrecachingActive",&local_b0,
                L"false: If precaching is available (r.PSOPrecaching=1, r.Vulkan.UseChunkedPSOCache=1) then disable the PSO filecache. (default)\ntrue: Allow both PSO file cache and precaching."
               );
  atexit(FUN_1431ac959);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca787b8,L"r.Vulkan.TempBlockSize",&DAT_14c760c90,
                L"Size of the temporary blocks allocate by contexts, used for single use ub allocs and copies (default: 4MB)."
               );
  atexit(FUN_1431ac99e);
  local_f8 = 4;
  FUN_141471170(&DAT_14ca787c8,L"r.Vulkan.AMDCompatibilityMode",&DAT_14c760c94,
                L"Used to tweak enabled Vulkan feature set in order to ensure wider compatibility with all AMD GPUs on all platforms. (default:1)"
               );
  atexit(FUN_1431ac9e3);
  local_b0 = (undefined1 *)0x800000014a362058;
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,9);
  uVar2 = FUN_14577453c(L"VulkanRHI",&local_c0);
  local_a8._0_5_ = CONCAT14(1,uVar2);
  FUN_14631a71e(&local_b0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca787f0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca787f0,4000);
  atexit((_func_5014 *)&LAB_1431af38f);
  if ((local_60[0] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b4188 FUN_1431b4188 body=69 status=ok
// SIG undefined FUN_1431b4188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4188(void)

{
  _DAT_14ca79398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b41ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca793a0,1);
  return;
}



// FUNCTION 1431b41cd FUN_1431b41cd body=69 status=ok
// SIG undefined FUN_1431b41cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b41cd(void)

{
  _DAT_14ca78928 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b420f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78930,1);
  return;
}



// FUNCTION 1431b4220 FUN_1431b4220 body=391 status=ok
// SIG undefined FUN_1431b4220(void)

undefined8 *
FUN_1431b4220(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = &PTR_LAB_14a369f50;
  param_1[1] = param_7;
  param_1[2] = param_6;
  FUN_1473d1b4a(param_1 + 3,param_4);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  param_1[0x1d] = 0;
  param_1[0x1d] = *param_5;
  *param_5 = 0;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_5 + 2);
  param_1[0x20] = param_2;
  uVar1 = *(uint *)(param_1 + 6);
  if ((int)(uint)(*(int *)((longlong)param_1 + 0x4c) != 0) < (int)uVar1) {
    if (*(int *)(param_1[1] + 0xc) < (int)uVar1) {
      FUN_144893a1c();
      if ((longlong)*(int *)(param_1 + 6) == 0) {
        return param_1;
      }
      puVar5 = (undefined4 *)param_1[5];
      puVar6 = puVar5 + (longlong)*(int *)(param_1 + 6) * 2;
    }
    else {
      puVar5 = (undefined4 *)param_1[5];
      puVar6 = puVar5 + (ulonglong)uVar1 * 2;
    }
    do {
      lVar4 = FUN_144948f1d(*puVar5);
      plVar3 = (longlong *)param_1[1];
      if (lVar4 == 0) {
        iVar2 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
          FUN_1447403be(plVar3,iVar2);
        }
        *(undefined1 *)(*plVar3 + (longlong)iVar2) = 0xff;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x48);
        iVar2 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
          FUN_1447403be(plVar3,iVar2);
        }
        *(undefined1 *)(*plVar3 + (longlong)iVar2) = *(undefined1 *)(lVar4 + 0x8a);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
  }
  return param_1;
}



// FUNCTION 1431b43a7 FUN_1431b43a7 body=258 status=ok
// SIG undefined FUN_1431b43a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1431b43a7(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = *param_3;
  local_48 = 0x10;
  local_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  local_34 = 0;
  local_30 = (longlong)*(int *)(param_3 + 1) << 2;
  if ((*(byte *)(param_2 + 0x41f) & 1) != 0) {
    puStack_40 = &local_60;
    local_60 = 0x3b9d3b01;
    local_5c = 0;
    local_54 = 0;
    local_50 = param_2[0x4bc];
  }
  iVar1 = (*DAT_14ca78f88)(*param_2,&local_48,0,&local_20);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = &PTR_FUN_149e002e8;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_14a369f48;
  puVar2[2] = local_20;
  _DAT_14ca78940 = param_2;
  *param_1 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b44aa FUN_1431b44aa body=165 status=ok
// SIG undefined FUN_1431b44aa(void)

undefined8 FUN_1431b44aa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  FUN_1473d1a0a(local_60,param_3);
  FUN_1431b43a7(param_2,*(undefined8 *)(lVar1 + 0x1b0),local_60);
  local_40 = param_1[1];
  local_38 = param_2;
  FUN_1473de6d4(lVar1 + 0x140,local_2c);
  if (local_50 != 0) {
    FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b4552 FUN_1431b4552 body=1257 status=ok
// SIG undefined FUN_1431b4552(void)

void FUN_1431b4552(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_1e8 [32];
  longlong local_1c8 [8];
  uint local_188 [6];
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  if (param_1 < -1000000000) {
    if (param_1 < -0x3b9af4f9) {
      if (param_1 < -0x3b9bd788) {
        if (param_1 == -0x3b9d71b1) {
          pwVar7 = L"VK_ERROR_NOT_PERMITTED_EXT";
        }
        else {
          if (param_1 != -0x3b9be343) goto switchD_1431b45a2_caseD_0;
          pwVar7 = L"VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR";
        }
      }
      else if (param_1 == -0x3b9bd788) {
        pwVar7 = L"VK_ERROR_OUT_OF_POOL_MEMORY_KHR";
      }
      else {
        if (param_1 != -0x3b9af8e0) goto switchD_1431b45a2_caseD_0;
        pwVar7 = L"VK_ERROR_INVALID_SHADER_NV";
      }
    }
    else if (param_1 < -0x3b9acdec) {
      if (param_1 == -0x3b9af4f9) {
        pwVar7 = L"VK_ERROR_VALIDATION_FAILED_EXT";
      }
      else {
        if (param_1 != -0x3b9ad5b9) goto switchD_1431b45a2_caseD_0;
        pwVar7 = L"VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
      }
    }
    else if (param_1 == -0x3b9acdec) {
      pwVar7 = L"VK_ERROR_OUT_OF_DATE_KHR";
    }
    else {
      if (param_1 != -0x3b9aca01) goto switchD_1431b45a2_caseD_0;
      pwVar7 = L"VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
    }
    goto LAB_1431b4758;
  }
  switch(param_1) {
  case 0:
    goto switchD_1431b45a2_caseD_0;
  case 1:
    pwVar7 = L"VK_NOT_READY";
    break;
  case 2:
    pwVar7 = L"VK_TIMEOUT";
    break;
  case 3:
    pwVar7 = L"VK_EVENT_SET";
    break;
  case 4:
    pwVar7 = L"VK_EVENT_RESET";
    break;
  case 5:
    pwVar7 = L"VK_INCOMPLETE";
    break;
  case -0xc:
    pwVar7 = L"VK_ERROR_FRAGMENTED_POOL";
    break;
  case -0xb:
    pwVar7 = L"VK_ERROR_FORMAT_NOT_SUPPORTED";
    break;
  case -10:
    pwVar7 = L"VK_ERROR_TOO_MANY_OBJECTS";
    break;
  case -9:
    pwVar7 = L"VK_ERROR_INCOMPATIBLE_DRIVER";
    break;
  case -8:
    pwVar7 = L"VK_ERROR_FEATURE_NOT_PRESENT";
    break;
  case -7:
    pwVar7 = L"VK_ERROR_EXTENSION_NOT_PRESENT";
    break;
  case -6:
    pwVar7 = L"VK_ERROR_LAYER_NOT_PRESENT";
    break;
  case -5:
    pwVar7 = L"VK_ERROR_MEMORY_MAP_FAILED";
    break;
  case -4:
    FUN_14020fad6(local_1c8,L"VK_ERROR_DEVICE_LOST");
    DAT_14c868882 = '\x01';
    goto switchD_1431b45a2_caseD_0;
  case -3:
    pwVar7 = L"VK_ERROR_INITIALIZATION_FAILED";
    break;
  case -2:
    pwVar7 = L"VK_ERROR_OUT_OF_DEVICE_MEMORY";
    break;
  case -1:
    pwVar7 = L"VK_ERROR_OUT_OF_HOST_MEMORY";
    break;
  default:
    if (param_1 == -1000000000) {
      pwVar7 = L"VK_ERROR_SURFACE_LOST_KHR";
    }
    else {
      if (param_1 != 0x3b9acdeb) goto switchD_1431b45a2_caseD_0;
      pwVar7 = L"VK_SUBOPTIMAL_KHR";
    }
  }
LAB_1431b4758:
  FUN_14020fad6(local_1c8,pwVar7);
switchD_1431b45a2_caseD_0:
  if (DAT_14c868882 == '\x01') {
    puVar1 = *(undefined8 **)(DAT_14ca79348 + 0x48);
    cVar5 = FUN_1474121fd();
    if ((cVar5 != '\0') && ((*(byte *)(*(longlong *)(puVar1[0x419] + 0x4e8) + 0x20fa) & 0x10) != 0))
    {
      local_168 = 0;
      uStack_160 = 0;
      local_188[0] = 0;
      uVar2 = **(undefined8 **)(*(longlong *)(puVar1[0x419] + 0x4e8) + 0x1a70);
      (*DAT_14ca791a0)(uVar2,local_188,0);
      uVar4 = uStack_160;
      uVar3 = local_188[0];
      if (local_188[0] != 0) {
        iVar6 = (int)uStack_160;
        lVar8 = (longlong)(int)uStack_160;
        uStack_160 = CONCAT44(uStack_160._4_4_,(int)uStack_160 + local_188[0]);
        if ((uint)(uStack_160._4_4_ - iVar6) < local_188[0]) {
          FUN_1431c15d4(&local_168,uVar4 & 0xffffffff);
        }
        FUN_1431c15b9(lVar8 * 0x20 + local_168,uVar3);
        (*DAT_14ca791a0)(uVar2,local_188,local_168);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        FUN_146816410(&DAT_14c872ee0);
      }
      if (local_168 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(byte *)((longlong)puVar1 + 0x20fa) & 1) != 0) {
      uVar2 = *puVar1;
      local_188[0] = 0x3b9ffe09;
      local_188[1] = 0;
      local_188[2] = 0;
      local_188[3] = 0;
      local_188[4] = 0;
      local_188[5] = 0;
      local_170 = 0;
      iVar6 = (*DAT_14ca791a8)(uVar2,local_188,0);
      if (iVar6 == 0) {
        local_168 = CONCAT44(local_168._4_4_,0x3b9ffe0a);
        memset((void *)((longlong)&local_168 + 4),0,0x10c);
        local_1c8[6] = 0;
        local_1c8[7] = 0;
        FUN_1473dabd6(local_1c8 + 6,local_188[4]);
        local_58 = local_1c8[6];
        local_1c8[4] = 0;
        local_1c8[5] = 0;
        FUN_1473dac52(local_1c8 + 4,local_188[5]);
        local_50 = local_1c8[4];
        local_1c8[2] = 0;
        local_1c8[3] = 0;
        FUN_1401211f6(local_1c8 + 2,local_170 & 0xffffffff,1);
        local_48 = local_1c8[2];
        (*DAT_14ca791a8)(uVar2,local_188,&local_168);
        if (local_1c8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_1c8[4] != 0) {
          FUN_1400020a8();
        }
        if (local_1c8[6] != 0) {
          FUN_1400020a8();
        }
      }
    }
    local_168 = 0;
    uStack_160 = 0;
    FUN_142b777d0(&local_168);
    FUN_145e08fc8(local_168,uStack_160 & 0xffffffff);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431b4a3c FUN_1431b4a3c body=382 status=ok
// SIG undefined FUN_1431b4a3c(void)

longlong *
FUN_1431b4a3c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  ulonglong uStack_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_68 = param_6;
  FUN_147403f78(&local_48,param_3,param_4,param_5);
  if (local_48 == 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)((longlong)puVar4 + 0xc) = 0x10;
    *(byte *)((longlong)puVar4 + 0xd) = *(byte *)((longlong)puVar4 + 0xd) | 3;
    *puVar4 = &PTR_FUN_14a369f78;
    local_68 = param_6;
    uStack_58 = uStack_58 & 0xffffffffffffff00;
    local_60 = puVar4;
    FUN_147403b22(puVar4 + 2,param_3,param_4,param_5);
    FUN_147403e44(puVar4 + 2);
    *param_2 = (longlong)puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      if (local_48 != 0) {
        LOCK();
        puVar1 = (uint *)(local_48 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_48 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_48 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = local_48;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar8 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar8) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar8);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar8 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar8) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar8);
            }
          }
        }
      }
    }
  }
  else {
    *param_2 = local_48;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431b4bc9 FUN_1431b4bc9 body=69 status=ok
// SIG undefined FUN_1431b4bc9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4bc9(void)

{
  _DAT_14ca78970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78978,1);
  return;
}



// FUNCTION 1431b4c0e FUN_1431b4c0e body=69 status=ok
// SIG undefined FUN_1431b4c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4c0e(void)

{
  _DAT_14ca78988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78990,1);
  return;
}



// FUNCTION 1431b4c53 FUN_1431b4c53 body=69 status=ok
// SIG undefined FUN_1431b4c53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4c53(void)

{
  _DAT_14ca78998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca789a0,1);
  return;
}



// FUNCTION 1431b4c98 FUN_1431b4c98 body=69 status=ok
// SIG undefined FUN_1431b4c98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4c98(void)

{
  _DAT_14ca789a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca789b0,1);
  return;
}



// FUNCTION 1431b4cdd FUN_1431b4cdd body=69 status=ok
// SIG undefined FUN_1431b4cdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4cdd(void)

{
  _DAT_14ca789b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca789c0,1);
  return;
}



// FUNCTION 1431b4d22 FUN_1431b4d22 body=69 status=ok
// SIG undefined FUN_1431b4d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4d22(void)

{
  _DAT_14ca789d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca789d8,1);
  return;
}



// FUNCTION 1431b4d67 FUN_1431b4d67 body=69 status=ok
// SIG undefined FUN_1431b4d67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b4d67(void)

{
  _DAT_14ca789e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b4da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca789e8,1);
  return;
}



// FUNCTION 1431b4dac FUN_1431b4dac body=41 status=ok
// SIG undefined FUN_1431b4dac(void)

void FUN_1431b4dac(void)

{
  DAT_14ca78a40 = 0;
  if (DAT_14ca78a38 != 0) {
    FUN_1400020a8();
  }
  FUN_145d702e8();
  return;
}



// FUNCTION 1431b4dd6 FUN_1431b4dd6 body=3808 status=ok
// SIG undefined FUN_1431b4dd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1431b4dd6(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   byte *param_5,uint param_6,uint param_7,byte param_8,uint *param_9,
                   undefined8 *param_10,undefined1 param_11,longlong *param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  void *_Dst;
  undefined4 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  int *piVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  ulonglong local_148;
  int *local_140;
  longlong *local_138;
  uint local_12c;
  int local_128 [7];
  undefined1 local_10c [4];
  LARGE_INTEGER local_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  int local_78;
  byte local_74;
  void *local_68;
  ulonglong uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = param_3;
  plVar13 = (longlong *)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = param_4;
  param_1[10] = -1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = param_11;
  param_1[0x23] = 0;
  QueryPerformanceCounter(&local_108);
  *(double *)(param_1 + 0x16) =
       ((double)CONCAT44(local_108.s.HighPart,local_108.s.LowPart) * DAT_14c83f420 + 16777216.0) -
       _DAT_14c86a9d8;
  if ((param_12 == (longlong *)0x0) || (*param_12 == 0)) {
    FUN_1473d60e2(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),plVar13);
  }
  else {
    *plVar13 = param_12[1];
    param_12[1] = 0;
  }
  iVar6 = (*DAT_14ca78a48)(*(undefined8 *)(*(longlong *)(param_1 + 4) + 0xae8),
                           *(undefined8 *)(param_1 + 6),&local_4c,0);
  if (iVar6 < 0) {
    FUN_1431b4552();
  }
  local_68 = (void *)0x0;
  uStack_60 = (ulonglong)local_4c;
  local_138 = plVar13;
  if ((longlong)(int)local_4c != 0) {
    FUN_1473e0b0a(&local_68);
  }
  memset(local_68,0,(longlong)(int)local_4c << 3);
  iVar6 = (*DAT_14ca78a48)(*(undefined8 *)(*(longlong *)(param_1 + 4) + 0xae8),
                           *(undefined8 *)(param_1 + 6),&local_4c);
  if (iVar6 < 0) {
    FUN_1431b4552(iVar6);
  }
  iVar6 = *(int *)((longlong)local_68 + 4);
  if (1 < (longlong)(int)uStack_60) {
    lVar15 = 0;
    do {
      if (*(int *)((longlong)local_68 + lVar15 * 8 + 0xc) != iVar6) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca78a58) &&
           (FUN_144b3d300(&DAT_14ca78a58), DAT_14ca78a58 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar13 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))
                              (DAT_14c8407a8,L"r.HDR.Display.OutputDevice",1);
          if (plVar13 == (longlong *)0x0) {
            DAT_14ca78a50 = 0;
          }
          else {
            DAT_14ca78a50 = (**(code **)(*plVar13 + 0x68))(plVar13);
          }
          _Init_thread_footer(&DAT_14ca78a58);
        }
        lVar15 = DAT_14ca78a50;
        iVar6 = 0;
        if (DAT_14ca78a50 != 0) {
          iVar7 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          iVar6 = 0;
          if (iVar7 == 0x40000002) {
            uVar12 = 0;
          }
          else {
            bVar27 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                bVar27 = DVar9 == DVar10;
              }
              else {
                bVar27 = false;
              }
            }
            uVar12 = (ulonglong)(bVar27 ^ 1);
          }
          uVar18 = *(int *)(lVar15 + uVar12 * 4) - 1;
          if (uVar18 < 4) {
            iVar6 = *(int *)(&DAT_14a36bf98 + (ulonglong)uVar18 * 4);
          }
        }
        break;
      }
      lVar15 = lVar15 + 1;
    } while ((longlong)(int)uStack_60 + -1 != lVar15);
  }
  bVar4 = *param_5;
  if (bVar4 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca78a68) && (FUN_144b3d300(&DAT_14ca78a68), DAT_14ca78a68 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar13 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
      if (plVar13 == (longlong *)0x0) {
        DAT_14ca78a60 = (uint *)0x0;
      }
      else {
        DAT_14ca78a60 = (uint *)(**(code **)(*plVar13 + 0x68))(plVar13);
      }
      _Init_thread_footer(&DAT_14ca78a68);
    }
    if (DAT_14ca78a60 != (uint *)0x0) {
      uVar18 = *DAT_14ca78a60;
      if (3 < (int)uVar18) {
        uVar18 = 4;
      }
      uVar12 = (ulonglong)uVar18;
      if ((int)uVar18 < 1) {
        uVar12 = 0;
      }
      uVar18 = 4;
      if ((int)(&DAT_14aa61900)[uVar12] < 4) {
        uVar18 = (&DAT_14aa61900)[uVar12];
      }
      uVar12 = (ulonglong)uVar18;
      if ((int)uVar18 < 1) {
        uVar12 = 0;
      }
      bVar4 = (&DAT_14aa618f0)[uVar12];
      *param_5 = bVar4;
      goto LAB_1431b509f;
    }
LAB_1431b5240:
    uVar26 = 0;
    uVar20 = 0;
LAB_1431b5198:
    iVar7 = (int)uVar20;
    *param_5 = 0;
    lVar15 = (longlong)(int)uStack_60;
    if (lVar15 < 1) {
      local_108.s.LowPart = 0;
      local_108.s.HighPart = 0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
    }
    else {
      lVar24 = 0;
      do {
        piVar25 = &DAT_14c873434;
        lVar23 = 0;
        do {
          if ((*(int *)((longlong)local_68 + lVar24 * 8) == *piVar25) &&
             (*(int *)((longlong)local_68 + lVar24 * 8 + 4) == iVar6)) {
            *param_5 = -(char)lVar23;
            uVar26 = *(ulonglong *)((longlong)local_68 + lVar24 * 8);
            uVar20 = uVar26 >> 0x20;
            iVar7 = (int)(uVar26 >> 0x20);
            if ((char)lVar23 != '\0') goto LAB_1431b5375;
            break;
          }
          lVar23 = lVar23 + -1;
          piVar25 = piVar25 + 0xc;
        } while (lVar23 != -0x5d);
        iVar7 = (int)uVar20;
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar15);
      lVar24 = 0;
      do {
        if ((*(int *)((longlong)local_68 + lVar24 * 8) == DAT_14c873434) &&
           (*(int *)((longlong)local_68 + lVar24 * 8 + 4) == iVar6)) {
          local_148 = *(ulonglong *)((longlong)local_68 + lVar24 * 8);
          iVar7 = (int)(local_148 >> 0x20);
          break;
        }
        lVar24 = lVar24 + 1;
        local_148 = uVar26;
      } while (lVar15 != lVar24);
      local_108.s.LowPart = 0;
      local_108.s.HighPart = 0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      lVar15 = 0;
      local_140 = param_1;
      do {
        if (lVar15 == 0) {
          puVar16 = &DAT_149e06140;
          uVar22 = 1;
        }
        else {
          puVar16 = &DAT_149e19f34;
          uVar22 = 2;
        }
        FUN_1400020e8(&local_108,puVar16,uVar22);
        FUN_140002266(&local_a0,L"%d/%d",*(undefined4 *)((longlong)local_68 + lVar15 * 8),
                      *(undefined4 *)((longlong)local_68 + lVar15 * 8 + 4));
        iVar6 = local_98 - 1;
        if (local_98 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(&local_108,CONCAT44(uStack_9c,local_a0),iVar6);
        if (CONCAT44(uStack_9c,local_a0) != 0) {
          FUN_1400020a8();
        }
        lVar15 = lVar15 + 1;
        param_1 = local_140;
        uVar26 = local_148;
      } while (lVar15 < (int)uStack_60);
    }
    uVar12 = 0;
    if ((int)uStack_60 != 0) {
      FUN_1400020e8(&local_108,&DAT_149e06144,1,0);
      uVar12 = uStack_60 & 0xffffffff;
    }
    if ((uint)uStack_100 == 0) {
      local_158 = &DAT_149dfb77a;
    }
    else {
      local_158 = (undefined2 *)CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
    }
    FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanSwapChain.cpp",0x146,
                  L"Unable to find a pixel format for the swapchain; swapchain returned %d Vulkan formats %s"
                  ,uVar12);
    if (CONCAT44(local_108.s.HighPart,local_108.s.LowPart) != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_1431b509f:
    uVar12 = (ulonglong)((uint)bVar4 * 0x30);
    if (((&DAT_14c873438)[uVar12] & 1) == 0) goto LAB_1431b5240;
    lVar15 = (longlong)(int)uStack_60;
    if (lVar15 < 1) {
      uVar20 = 0;
      uVar26 = 0;
LAB_1431b5136:
      if (DAT_14ca78a00 != DAT_14ca78a2c) {
        puVar21 = &DAT_14ca78a30;
        if (DAT_14ca78a38 != (undefined *)0x0) {
          puVar21 = DAT_14ca78a38;
        }
        for (iVar7 = *(int *)(puVar21 + (ulonglong)(DAT_14ca78a40 - 1U & (uint)bVar4) * 4);
            iVar7 != -1; iVar7 = *(int *)(DAT_14ca789f8 + (longlong)iVar7 * 0xc + 4)) {
          if (*(byte *)(DAT_14ca789f8 + (longlong)iVar7 * 0xc) == bVar4) goto LAB_1431b5198;
        }
      }
      FUN_1473e0b88(&local_108);
      goto LAB_1431b5198;
    }
    lVar24 = 0;
    bVar27 = false;
    uVar20 = 0;
    uVar26 = 0;
    do {
      while (lVar24 = lVar24 + 1,
            *(int *)((longlong)local_68 + lVar24 * 8 + -8) !=
            *(int *)((longlong)&DAT_14c873434 + uVar12)) {
        if (lVar24 == lVar15) {
          iVar7 = (int)uVar20;
          if (!bVar27) goto LAB_1431b5136;
          goto LAB_1431b5375;
        }
      }
      uVar26 = *(ulonglong *)((longlong)local_68 + lVar24 * 8 + -8);
      uVar20 = uVar26 >> 0x20;
      iVar19 = (int)(uVar26 >> 0x20);
      iVar7 = iVar6;
    } while ((iVar6 != iVar19) && (bVar27 = true, iVar7 = iVar19, lVar24 != lVar15));
  }
LAB_1431b5375:
  lVar15 = *(longlong *)(param_1 + 4);
  uVar22 = *(undefined8 *)(param_1 + 6);
  local_148 = uVar26;
  if (*(longlong *)(lVar15 + 0x1a88) == 0) {
    local_108.s.LowPart = 0;
    iVar6 = (*DAT_14ca78a80)(*(undefined8 *)(lVar15 + 0xae8),
                             *(undefined4 *)(*(longlong *)(lVar15 + 0x1a70) + 8),uVar22);
    if (iVar6 != 0) {
      FUN_1431b4552(iVar6);
    }
    if (local_108.s.LowPart != 1) {
      FUN_14682f732(0,
                    L"Cannot find a compatible Vulkan device that supports surface presentation.\n\n"
                    ,L"Vulkan device not available");
      FUN_142797bc0(1,1,0);
    }
    local_108.s.LowPart = 0;
    iVar6 = (*DAT_14ca78a80)(*(undefined8 *)(lVar15 + 0xae8),
                             *(undefined4 *)(*(longlong *)(lVar15 + 0x1a78) + 8),uVar22);
    if (iVar6 != 0) {
      FUN_1431b4552(iVar6);
    }
    uVar17 = local_108.s.LowPart;
    plVar13 = (longlong *)(lVar15 + 0x1a78);
    iVar6 = *(int *)(*(longlong *)(lVar15 + 0x1a80) + 8);
    if ((iVar6 != *(int *)(*(longlong *)(lVar15 + 0x1a70) + 8)) && (iVar6 != *(int *)(*plVar13 + 8))
       ) {
      local_108.s.LowPart = 0;
      iVar6 = (*DAT_14ca78a80)(*(undefined8 *)(lVar15 + 0xae8),iVar6,uVar22);
      if (iVar6 != 0) {
        FUN_1431b4552(iVar6);
      }
    }
    lVar24 = DAT_14ca77ff8;
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
      uVar12 = 0;
    }
    else if (iVar6 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar9 != DVar10);
    }
    else {
      uVar12 = 1;
    }
    plVar11 = (longlong *)(lVar15 + 0x1a70);
    if (((*(int *)(lVar24 + uVar12 * 4) != 0) && (uVar17 == 1)) &&
       (*(int *)(*plVar13 + 8) != *(int *)(*plVar11 + 8))) {
      *(bool *)(lVar15 + 0x1a91) = *(int *)(lVar15 + 0x1a94) == 0x1002;
      plVar11 = plVar13;
    }
    *(longlong *)(lVar15 + 0x1a88) = *plVar11;
    lVar15 = *(longlong *)(param_1 + 4);
    uVar22 = *(undefined8 *)(param_1 + 6);
  }
  local_a0 = 0;
  iVar6 = (*DAT_14ca78a70)(*(undefined8 *)(lVar15 + 0xae8),uVar22,&local_a0,0);
  if (iVar6 != 0) {
    FUN_1431b4552();
  }
  local_108.s.LowPart = 0;
  local_108.s.HighPart = 0;
  uStack_100._4_4_ = 0;
  lVar15 = (longlong)(int)local_a0;
  uStack_100._0_4_ = local_a0;
  if (lVar15 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1473e1086(&local_108);
    _Dst = (void *)CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
  }
  memset(_Dst,0,lVar15 << 2);
  iVar6 = (*DAT_14ca78a70)(*(undefined8 *)(*(longlong *)(param_1 + 4) + 0xae8),
                           *(undefined8 *)(param_1 + 6),&local_a0,
                           CONCAT44(local_108.s.HighPart,local_108.s.LowPart));
  if (iVar6 != 0) {
    FUN_1431b4552(iVar6);
  }
  uVar12 = (ulonglong)local_a0;
  if (uVar12 == 0) {
    bVar1 = false;
    bVar27 = false;
    bVar2 = false;
  }
  else {
    lVar15 = 0;
    bVar2 = false;
    bVar27 = false;
    bVar1 = false;
    do {
      iVar6 = *(int *)(CONCAT44(local_108.s.HighPart,local_108.s.LowPart) + (lVar15 >> 0x1e));
      if (iVar6 == 0) {
        bVar27 = true;
      }
      else if (iVar6 == 2) {
        bVar2 = true;
      }
      else if (iVar6 == 1) {
        bVar1 = true;
      }
      lVar15 = lVar15 + 0x100000000;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_128[0] = -1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar5 = FUN_141369f9a(&DAT_14c846b20,L"vulkanpresentmode=",local_128);
  if (cVar5 == '\0') {
    uVar17 = 2;
    if (local_128[0] == -1) goto LAB_1431b564f;
LAB_1431b56b0:
    puVar14 = (undefined4 *)CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
  }
  else {
    if (local_128[0] == 0) {
      if (!bVar27) goto LAB_1431b564f;
LAB_1431b56ae:
      uVar17 = 0;
      goto LAB_1431b56b0;
    }
    if (local_128[0] == 2) {
      uVar17 = 2;
      bVar3 = bVar2;
    }
    else {
      if (local_128[0] != 1) goto LAB_1431b564f;
      uVar17 = 1;
      bVar3 = bVar1;
    }
    if (bVar3) goto LAB_1431b56b0;
LAB_1431b564f:
    if (DAT_14ca77fd8 == (longlong *)0x0) {
      if (bVar27) {
LAB_1431b5673:
        if ((char)param_1[0x22] == '\0') goto LAB_1431b56ae;
      }
    }
    else {
      cVar5 = (**(code **)(*DAT_14ca77fd8 + 0x10))();
      if (bVar27) {
        if (cVar5 == '\0') goto LAB_1431b5673;
        goto LAB_1431b56ae;
      }
    }
    uVar17 = 1;
    if ((bVar1) || (uVar17 = 2, bVar2)) goto LAB_1431b56b0;
    puVar14 = (undefined4 *)CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
    uVar17 = *puVar14;
  }
  if (puVar14 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  iVar6 = (*DAT_14ca78a78)(*(undefined8 *)(*(longlong *)(param_1 + 4) + 0xae8),
                           *(undefined8 *)(param_1 + 6),&local_a0);
  if (iVar6 < 0) {
    FUN_1431b4552(iVar6);
  }
  cVar5 = FUN_1473d605b(DAT_14ca85550);
  local_b8 = 1;
  if (cVar5 != '\0') {
    local_b8 = local_78;
  }
  *param_1 = local_b8;
  local_b4 = 1;
  if ((local_74 & 1) == 0) {
    local_b4 = 8;
  }
  if (uStack_9c == 0) {
    uVar18 = *param_9;
  }
  else {
    if (*param_9 < uStack_9c) {
      uStack_9c = *param_9;
    }
    uVar18 = uStack_9c;
    if (uStack_9c < local_a0) {
      uVar18 = local_a0;
    }
  }
  if (local_98 == 0xffffffff) {
    local_98 = param_6;
  }
  if (local_94 == 0xffffffff) {
    local_94 = param_7;
  }
  local_108.s.LowPart = 0x3b9acde8;
  local_108.s.HighPart = 0;
  uStack_100._0_4_ = 0;
  uStack_100._4_4_ = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lVar15 = *local_138;
  uStack_f0 = (undefined4)lVar15;
  uStack_ec = (undefined4)((ulonglong)lVar15 >> 0x20);
  local_e4 = CONCAT44(iVar7,(int)local_148);
  local_d4 = 0x1600000001;
  local_a8 = 0;
  if (param_12 != (longlong *)0x0) {
    local_a8 = *param_12;
  }
  local_ac = 1;
  if (local_98 == 0) {
    local_98 = param_6;
  }
  if (local_94 == 0) {
    local_94 = param_7;
  }
  uStack_dc = CONCAT44(local_94,local_98);
  uStack_e8 = uVar18;
  local_b0 = uVar17;
  iVar6 = (*DAT_14ca78a80)(*(undefined8 *)(*(longlong *)(param_1 + 4) + 0xae8),
                           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x1a88) + 8),
                           lVar15,local_10c);
  if (iVar6 != 0) {
    FUN_1431b4552(iVar6);
  }
  local_128[0] = 0x3b9eae18;
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_128[4] = 0;
  local_128[5] = 0;
  uStack_100 = (int *)CONCAT44(uStack_100._4_4_,(uint)uStack_100);
  if ((*(byte *)((longlong)*(undefined8 **)(param_1 + 4) + 0x20f9) & 1) != 0) {
    local_128[4] = 2 - (uint)param_8;
    local_128[2] = (uint)uStack_100;
    local_128[3] = uStack_100._4_4_;
    uStack_100 = local_128;
  }
  iVar6 = *param_1;
  if ((iVar6 == 8) || (iVar6 == 2)) {
    uStack_dc = uStack_dc << 0x20 | uStack_dc >> 0x20;
  }
  iVar7 = (*DAT_14ca78e48)(**(undefined8 **)(param_1 + 4),&local_108,0,param_1 + 2);
  if ((iVar6 == 8) || (iVar6 == 2)) {
    uStack_dc = uStack_dc << 0x20 | uStack_dc >> 0x20;
  }
  if ((iVar7 == -3) && (((*(undefined8 **)(param_1 + 4))[0x41f] & 0x100) != 0)) {
    uStack_100._0_4_ = local_128[2];
    uStack_100._4_4_ = local_128[3];
    iVar7 = (*DAT_14ca78e48)(**(undefined8 **)(param_1 + 4),&local_108,0,param_1 + 2);
  }
  if (iVar7 < 0) {
    FUN_1431b4552(iVar7);
  }
  if (param_12 != (longlong *)0x0) {
    if (*param_12 != 0) {
      (*DAT_14ca78e50)(**(undefined8 **)(param_1 + 4),*param_12,0);
      *param_12 = 0;
    }
    if (param_12[1] != 0) {
      (*DAT_14ca78a88)(*(undefined8 *)(param_1 + 0x18),param_12[1],0);
      param_12[1] = 0;
    }
  }
  uVar8 = (uint)uStack_dc;
  if (param_6 < (uint)uStack_dc) {
    uVar8 = param_6;
  }
  param_1[0xe] = uVar8;
  uVar8 = uStack_dc._4_4_;
  if (param_7 < uStack_dc._4_4_) {
    uVar8 = param_7;
  }
  param_1[0xf] = uVar8;
  *(byte *)(param_1 + 0x10) = param_8;
  iVar6 = (*DAT_14ca790f0)(**(undefined8 **)(param_1 + 4),*(undefined8 *)(param_1 + 2),&local_12c,0)
  ;
  if (iVar6 < 0) {
    FUN_1431b4552(iVar6);
  }
  if (DAT_14ca78980 != 0) {
    local_12c = uVar18;
  }
  iVar6 = *(int *)(param_10 + 1);
  *(uint *)(param_10 + 1) = iVar6 + local_12c;
  if ((uint)(*(int *)((longlong)param_10 + 0xc) - iVar6) < local_12c) {
    FUN_1473e1104(param_10);
  }
  iVar6 = (*DAT_14ca790f0)(**(undefined8 **)(param_1 + 4),*(undefined8 *)(param_1 + 2),&local_12c,
                           *param_10);
  if (iVar6 < 0) {
    FUN_1431b4552(iVar6);
  }
  iVar6 = param_1[0x20];
  param_1[0x20] = iVar6 + local_12c;
  if ((uint)(param_1[0x21] - iVar6) < local_12c) {
    FUN_1473aeade(param_1 + 0x1e);
  }
  if (local_12c != 0) {
    uVar18 = 0;
    do {
      uVar22 = FUN_1473a879e(*(longlong *)(param_1 + 4) + 0x640,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)uVar18 * 8) = uVar22;
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_12c);
    iVar6 = param_1[0x1c];
    param_1[0x1c] = iVar6 + local_12c;
    if ((uint)(param_1[0x1d] - iVar6) < local_12c) {
      FUN_14739d94a(param_1 + 0x1a);
    }
    if (local_12c != 0) {
      uVar18 = 0;
      do {
        uVar22 = FUN_14001cc68(0x28,0x10);
        FUN_1473a911e(uVar22,*(undefined8 *)(param_1 + 4));
        *(undefined8 *)(*(longlong *)(param_1 + 0x1a) + (longlong)(int)uVar18 * 8) = uVar22;
        LOCK();
        piVar25 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1a) + (longlong)(int)uVar18 * 8) +
                         8);
        *piVar25 = *piVar25 + 1;
        UNLOCK();
        uVar18 = uVar18 + 1;
        uVar8 = local_12c;
      } while (uVar18 < local_12c);
      goto LAB_1431b5afa;
    }
  }
  uVar8 = 0;
LAB_1431b5afa:
  *param_9 = uVar8;
  param_1[0x23] = 0;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b5cb8 FUN_1431b5cb8 body=402 status=ok
// SIG undefined FUN_1431b5cb8(void)

undefined4 FUN_1431b5cb8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint *local_70;
  undefined1 local_60 [20];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar5 = (iVar1 + 1) % *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x2c) = iVar5;
  lVar6 = *(longlong *)(param_1 + 0x10) + 0x640;
  FUN_1473a8920(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8));
  uVar2 = **(undefined8 **)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x2c) * 8);
  iVar5 = *(int *)(param_1 + 0x70);
  FUN_1403936f2(local_60,2,1);
  local_78 = uVar2;
  local_70 = &local_4c;
  iVar3 = (*DAT_14ca790f8)(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                           0xffffffffffffffff,
                           *(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x68) +
                              (longlong)*(int *)(param_1 + 0x2c) * 8) + 0x18));
  while ((iVar5 - 1U < local_4c && ((iVar3 == 0x3b9acdeb || (iVar3 == 0))))) {
    local_78 = uVar2;
    local_70 = &local_4c;
    iVar3 = (*DAT_14ca790f8)(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                             0xffffffffffffffff,
                             *(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(param_1 + 0x68) +
                                (longlong)*(int *)(param_1 + 0x2c) * 8) + 0x18));
  }
  FUN_1402488ea(local_60);
  if (iVar3 == -1000000000) {
    *(int *)(param_1 + 0x2c) = iVar1;
    uVar4 = 0xfffffffe;
  }
  else if (iVar3 == -0x3b9acdec) {
    *(int *)(param_1 + 0x2c) = iVar1;
    uVar4 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *param_2 = *(undefined8 *)
                (*(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x2c) * 8);
    *(uint *)(param_1 + 0x28) = local_4c;
    FUN_1473a8aae(lVar6,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x2c) * 8),
                  0xffffffffffffffff);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1431b5e4c FUN_1431b5e4c body=346 status=ok
// SIG undefined FUN_1431b5e4c(void)

void FUN_1431b5e4c(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x88) != '\0') || (DAT_14ca789c8 != 0)) {
    iVar4 = FUN_147413c95();
    if ((0 < iVar4) && (DAT_14c760ca4 != 0)) {
      QueryPerformanceCounter(local_68);
      dVar1 = (double)local_68[0].QuadPart * DAT_14c83f420 + 16777216.0;
      dVar3 = (double)iVar4 * 0.016666666666666666 * 1000.0;
      dVar2 = (dVar1 - *(double *)(param_1 + 0x48)) * 1000.0 + *(double *)(param_1 + 0x50);
      *(double *)(param_1 + 0x50) = dVar2;
      uVar5 = *(int *)(param_1 + 0x44) + 1;
      *(uint *)(param_1 + 0x44) = uVar5;
      dVar2 = dVar2 / (double)uVar5 + dVar3 * 0.1;
      if (1000 < uVar5) {
        *(double *)(param_1 + 0x50) = dVar2;
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
      if (dVar2 < dVar3) {
        FUN_1403936f2(local_68,2,1);
        FUN_14279b9b6((float)((dVar3 - dVar2) * 0.0010000000474974513));
        FUN_1402488ea(local_68);
      }
      *(double *)(param_1 + 0x48) = dVar1;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b5fa7 FUN_1431b5fa7 body=69 status=ok
// SIG undefined FUN_1431b5fa7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b5fa7(void)

{
  _DAT_14ca78a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b5fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78a98,1);
  return;
}



// FUNCTION 1431b5fec FUN_1431b5fec body=69 status=ok
// SIG undefined FUN_1431b5fec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b5fec(void)

{
  _DAT_14ca78aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b602e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78ab0,1);
  return;
}



// FUNCTION 1431b603f FUN_1431b603f body=41 status=ok
// SIG undefined FUN_1431b603f(void)

void FUN_1431b603f(void)

{
  DAT_14ca78b28 = 0;
  if (DAT_14ca78b20 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70248();
  return;
}



// FUNCTION 1431b6068 FUN_1431b6068 body=1 status=ok
// SIG undefined FUN_1431b6068(void)

void FUN_1431b6068(void)

{
  return;
}



// FUNCTION 1431b606a FUN_1431b606a body=1188 status=ok
// SIG undefined FUN_1431b606a(void)

void FUN_1431b606a(undefined4 *param_1,longlong param_2,ulonglong *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_3;
  bVar15 = DAT_14ca84df4 != 0x1002;
  cVar1 = *(char *)((longlong)param_3 + 0x33);
  *param_1 = 0xe;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  local_60 = (ulonglong)*(byte *)((longlong)param_3 + 0x32);
  bVar11 = 0;
  uVar8 = 1;
  switch(local_60) {
  case 0:
    local_60 = 1;
    break;
  case 1:
    local_60 = 5;
    break;
  case 2:
    bVar4 = true;
    local_60 = 2;
    uVar8 = 2;
    bVar11 = 0;
    bVar14 = 0;
    goto LAB_1431b6149;
  case 3:
    bVar14 = 1;
    bVar11 = 0;
    goto LAB_1431b6146;
  case 4:
    bVar11 = 1;
    local_60 = 6;
    goto LAB_1431b6143;
  default:
    local_60 = 0x7fffffff;
    bVar14 = 0;
    bVar4 = false;
    goto LAB_1431b6152;
  }
  bVar11 = 0;
LAB_1431b6143:
  bVar14 = 0;
LAB_1431b6146:
  bVar4 = false;
LAB_1431b6149:
  param_1[5] = uVar8;
LAB_1431b6152:
  puVar10 = (undefined4 *)
            ((longlong)&DAT_14c873434 +
            (ulonglong)((uint)*(byte *)((longlong)param_3 + 0x33) * 0x30));
  puVar9 = &DAT_14ca781f0 + *(byte *)((longlong)param_3 + 0x33);
  if ((uVar3 & 0x10) == 0) {
    puVar9 = puVar10;
  }
  uVar8 = *puVar9;
  uVar2 = *puVar10;
  uVar5 = uVar2;
  if (((uint)uVar3 >> 0x11 & 1) == 0) {
    uVar5 = uVar8;
  }
  param_1[6] = uVar5;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar8;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  param_1[7] = *(undefined4 *)((longlong)param_3 + 0x24);
  param_1[8] = (int)param_3[5];
  uVar6 = 1;
  if (bVar4) {
    uVar6 = (uint)*(ushort *)((longlong)param_3 + 0x2c);
  }
  param_1[9] = uVar6;
  param_1[10] = (uint)(byte)param_3[6];
  param_1[0xb] = (uint)*(ushort *)((longlong)param_3 + 0x2e) * ((uint)(bVar11 | bVar14) * 5 + 1);
  uVar6 = (uint)(bVar11 | bVar14) << 4;
  param_1[4] = uVar6;
  local_58 = param_2;
  local_50 = uVar3;
  if (((uVar3 & 0x10) != 0) || (*(char *)((longlong)param_3 + 0x33) == 'T')) {
    if ((*(byte *)(param_2 + 0x20fb) & 8) != 0) {
      param_1[0x16] = 0x3b9d0838;
      *(undefined8 *)(param_1 + 0x17) = 0;
      *(undefined8 *)(param_1 + 0x19) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 2);
      *(undefined4 **)(param_1 + 2) = param_1 + 0x16;
      if ((uVar3 & 0x10) != 0) {
        puVar10 = param_1 + 0x24;
        lVar12 = (longlong)(int)param_1[0x28];
        uVar6 = param_1[0x28] + 1;
        param_1[0x28] = uVar6;
        if ((uint)param_1[0x29] < uVar6) {
          local_68 = lVar12;
          FUN_1473e118a(puVar10,lVar12);
          lVar12 = local_68;
        }
        puVar9 = *(undefined4 **)(param_1 + 0x26);
        if (*(undefined4 **)(param_1 + 0x26) == (undefined4 *)0x0) {
          puVar9 = puVar10;
        }
        puVar9[lVar12] = uVar2;
        lVar12 = (longlong)(int)param_1[0x28];
        uVar6 = param_1[0x28] + 1;
        param_1[0x28] = uVar6;
        if ((uint)param_1[0x29] < uVar6) {
          local_68 = lVar12;
          FUN_1473e118a(puVar10,lVar12);
          lVar12 = local_68;
        }
        if (*(undefined4 **)(param_1 + 0x26) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(param_1 + 0x26);
        }
        puVar10[lVar12] = uVar8;
      }
      if (*(char *)((longlong)param_3 + 0x33) == 'T') {
        puVar10 = param_1 + 0x24;
        iVar7 = param_1[0x28];
        param_1[0x28] = iVar7 + 1U;
        if ((uint)param_1[0x29] < iVar7 + 1U) {
          FUN_1473e118a(puVar10,iVar7);
        }
        puVar9 = *(undefined4 **)(param_1 + 0x26);
        if (*(undefined4 **)(param_1 + 0x26) == (undefined4 *)0x0) {
          puVar9 = puVar10;
        }
        puVar9[iVar7] = uVar2;
        uVar8 = DAT_14c8740f4;
        iVar7 = param_1[0x28];
        param_1[0x28] = iVar7 + 1U;
        if ((uint)param_1[0x29] < iVar7 + 1U) {
          FUN_1473e118a(puVar10,iVar7);
        }
        if (*(undefined4 **)(param_1 + 0x26) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(param_1 + 0x26);
        }
        puVar10[iVar7] = uVar8;
      }
      puVar10 = param_1 + 0x24;
      if (*(undefined4 **)(param_1 + 0x26) != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(param_1 + 0x26);
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar10;
      param_1[0x1a] = param_1[0x28];
      uVar6 = param_1[4];
    }
    uVar6 = uVar6 | 8;
    param_1[4] = uVar6;
  }
  lVar12 = local_58;
  if (param_1[5] == 2) {
    param_1[4] = uVar6 | 0x20;
  }
  iVar7 = 1;
  if (((bVar15 || cVar1 != '\x1c') || uVar3 != 0x200020008) && (uVar3 >> 0x13 & 1) == 0) {
    iVar7 = *(int *)(&DAT_14a36aa20 + local_60 * 4);
  }
  iVar13 = 0;
  if ((uVar3 & 0x8000007) == 0) {
    iVar13 = iVar7;
  }
  param_1[0xd] = iVar13;
  uVar8 = FUN_1431b650f(local_58,&local_50);
  param_1[0xe] = uVar8;
  if ((uVar3 >> 0x22 & 1) != 0) {
    param_1[0x1e] = 0x3b9be341;
    *(undefined8 *)(param_1 + 0x1f) = 0;
    *(undefined8 *)(param_1 + 0x21) = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 2;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 2);
    *(undefined4 **)(param_1 + 2) = param_1 + 0x1e;
  }
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  bVar11 = *(byte *)((longlong)param_3 + 0x31) != 0;
  if (iVar13 != 1) {
    bVar11 = *(byte *)((longlong)param_3 + 0x31);
  }
  uVar6 = (uint)bVar11;
  if (bVar11 < 0x10) {
    switch(bVar11) {
    case 1:
      break;
    case 2:
      uVar6 = 2;
      break;
    default:
      goto switchD_1431b6437_caseD_3;
    case 4:
      uVar6 = 4;
      break;
    case 8:
      uVar6 = 8;
    }
  }
  else if (bVar11 == 0x10) {
    uVar6 = 0x10;
  }
  else if (bVar11 == 0x20) {
    uVar6 = 0x20;
  }
  else {
    if (bVar11 != 0x40) goto switchD_1431b6437_caseD_3;
    uVar6 = 0x40;
  }
  param_1[0xc] = uVar6;
switchD_1431b6437_caseD_3:
  lVar12 = FUN_1473a3d30(lVar12,param_1[6]);
  uVar6 = *(uint *)(lVar12 + (ulonglong)(param_1[0xd] != 1) * 4);
  if ((uVar6 & 1) == 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfb;
  }
  if ((uVar6 & 2) == 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xf7;
  }
  if (-1 < (char)uVar6) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xef;
  }
  if ((uVar6 >> 9 & 1) == 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xdf;
  }
  if ((uVar6 >> 0xe & 1) == 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  }
  if (-1 < (short)uVar6) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfd;
  }
  if (((uVar3 & 4) != 0) && (DAT_14ca78aa0 != 0)) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 8;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b650f FUN_1431b650f body=153 status=ok
// SIG undefined FUN_1431b650f(void)

uint FUN_1431b650f(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0xf;
  uVar2 = (uint)uVar1;
  if ((uVar2 >> 0x12 & 1) == 0) {
    if ((uVar1 & 5) == 0) {
      uVar3 = 0x27;
      if ((uVar2 >> 0x1b & 1) == 0) {
        uVar3 = (uVar2 & 2) * 8 + 7;
      }
    }
    else {
      uVar3 = ((uVar2 & 0x200) >> 2) + (uint)((uVar1 & 1) == 0) * 0x10 + 0x17;
      if (((uVar2 >> 0xc & 1) != 0) && (*(char *)(param_1 + 0x391) == '\x01')) {
        uVar3 = uVar3 & 0xffffffb0 | 0x40;
      }
    }
  }
  if (((uVar2 >> 10 & 1) != 0) && ((byte)(DAT_14ca84f48 - 1U) < 2)) {
    uVar4 = uVar3 + 0x100;
    if (DAT_14ca84f48 != '\x01') {
      uVar4 = uVar3;
    }
    uVar3 = uVar4 + 0x200;
    if (DAT_14ca84f48 != '\x02') {
      uVar3 = uVar4;
    }
  }
  return uVar2 >> 0xe & 8 | uVar3;
}



// FUNCTION 1431b65a8 FUN_1431b65a8 body=630 status=ok
// SIG undefined FUN_1431b65a8(void)

void FUN_1431b65a8(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    FUN_1473a8b5a(param_1[0x12] + 0x590,1,*(undefined8 *)param_1[0x21]);
    FUN_1473a73fe(param_1[0x12] + 0x3d8,param_1 + 0x1c,0);
    if (param_1[0x21] == 0) {
      return;
    }
    FUN_1400020a8();
    return;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x114);
  if (1 < (byte)(cVar1 - 1U)) {
    return;
  }
  puVar9 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
  uVar4 = *puVar9;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar2 == 2) goto LAB_1431b6610;
    if (iVar2 != 1) goto LAB_1431b6607;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_1431b6610;
  }
  else {
LAB_1431b6607:
    if (iVar2 == 0x10) {
LAB_1431b6610:
      if (DAT_14c842750 != '\0') {
        puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar10 + 5;
        if (DAT_14ca85108 < puVar11) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar11 = puVar10 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar11;
        *DAT_14ca85130 = puVar10;
        lVar5 = param_1[0x12];
        lVar6 = param_1[0x13];
        DAT_14ca85130 = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_14a36b9b8;
        puVar10[2] = lVar6;
        puVar10[3] = lVar5;
        *(bool *)(puVar10 + 4) = (uVar4 & 7) != 0;
        goto LAB_1431b66af;
      }
    }
  }
  FUN_1473a4a48(param_1[0x12],param_1[0x13],(uVar4 & 7) != 0);
LAB_1431b66af:
  if (cVar1 == '\x01') {
    if ((char)*(byte *)((longlong)param_1 + 0xfb) < '\0' &&
        (*(byte *)((longlong)param_1 + 0xfb) & 0x7f) != 0) {
      uVar3 = *(uint *)((longlong)param_1 + 0xec);
      puVar9 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
      LOCK();
      (&DAT_14ca84eb8)[(*puVar9 & 0x8000020007) != 0] =
           (&DAT_14ca84eb8)[(*puVar9 & 0x8000020007) != 0] - ((ulonglong)uVar3 + 0x3ff >> 10);
      UNLOCK();
    }
    if (param_1[0x13] != 0) {
      FUN_1473a8b5a(param_1[0x12] + 0x590,3);
      FUN_1473a73fe(param_1[0x12] + 0x3d8,param_1 + 0x1c,0);
      param_1[0x13] = 0;
    }
  }
  else {
    param_1[0x13] = 0;
    if ((code *)param_1[0x1a] != (code *)0x0) {
      (*(code *)param_1[0x1a])(param_1[0x19]);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  return;
}



// FUNCTION 1431b681e FUN_1431b681e body=496 status=ok
// SIG undefined FUN_1431b681e(void)

undefined8 *
FUN_1431b681e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == (longlong *)0x0) {
    param_4 = DAT_14ca84b20;
  }
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x18))(param_4,&local_48);
    if (((int)local_48 != -1) && (local_48._4_1_ != -1)) {
      uStack_40 = 0;
      local_48 = 2;
      lVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (*(byte *)(lVar5 + 0x32) < 5) {
        local_48._0_3_ =
             CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar5 + 0x32) & 7) << 3)),
                      (undefined2)local_48);
      }
      local_48._0_5_ = CONCAT23(0x100,(undefined3)local_48);
      local_58 = &local_48;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_3,param_4);
      puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      lVar5 = local_50;
      uVar4 = *(undefined8 *)(local_50 + 0x38);
      FUN_1402b577a(puVar6,0x19);
      *puVar6 = &PTR_FUN_14a37fd30;
      puVar6[0xc] = param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      puVar6[0xd] = uVar4;
      *puVar6 = &PTR_FUN_14a36b9c0;
      puVar6[0xe] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      *param_2 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (local_50 != 0) {
        LOCK();
        puVar1 = (uint *)(local_50 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_50 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_50 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = local_50;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar10) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar10) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
      goto LAB_1431b69d2;
    }
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  FUN_147413aea(puVar6,param_4);
  *puVar6 = &PTR_FUN_14a36b9c0;
  puVar6[0xe] = 0;
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
LAB_1431b69d2:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431b6a10 FUN_1431b6a10 body=95 status=ok
// SIG undefined FUN_1431b6a10(void)

longlong * FUN_1431b6a10(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1431b6a70(lVar1,param_3,*(undefined8 *)(param_1 + 0x48),param_4,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1431b6a70 FUN_1431b6a70 body=3357 status=ok
// SIG undefined FUN_1431b6a70(void)

longlong *
FUN_1431b6a70(longlong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  void *pvVar17;
  void *_Src;
  int *piVar18;
  char cVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  byte bVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_1b8 [32];
  ulonglong *local_198;
  int local_190;
  uint local_188;
  undefined8 local_180;
  char *local_178;
  uint local_170;
  undefined1 local_168;
  uint local_160;
  undefined4 local_154;
  undefined4 *local_150;
  byte *local_148;
  ulonglong *local_140;
  uint local_134;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint uStack_f4;
  int local_f0 [7];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  int local_bc;
  uint local_b8;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1400f7c82(param_1,param_4);
  param_1[0xe] = 0;
  *param_1 = (longlong)&PTR_FUN_14a36aaf0;
  param_1[0xc] = (longlong)&PTR_LAB_14a36ab40;
  param_1[0xd] = (longlong)&PTR_FUN_14a36ab68;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (longlong)param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x100000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x7fffffff;
  plVar1 = param_1 + 0x1c;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((*param_4 & 0x80000) != 0) {
    lVar15 = FUN_14001cc68(0x80,0x10);
    param_1[0x21] = lVar15;
    uVar23 = 0;
    if ((char)param_4[6] != '\0') {
      uVar20 = 0;
      do {
        FUN_1473d6710(param_1,uVar20 & 0xffffffff,local_f0);
        *(int *)(param_1[0x21] + 8 + uVar20 * 4) = (int)uVar23;
        *(int *)(param_1[0x21] + 0x44 + uVar20 * 4) = local_f0[0];
        uVar9 = local_f0[0] + (int)uVar23;
        uVar23 = (ulonglong)uVar9;
        uVar20 = uVar20 + 1;
      } while (uVar20 < (byte)param_4[6]);
      lVar15 = param_1[0x21];
      uVar23 = (ulonglong)uVar9;
    }
    local_f0[0] = 0xc;
    local_f0[5] = 0;
    local_f0[1] = 0;
    local_f0[2] = 0;
    local_f0[3] = 0;
    local_f0[4] = 0;
    local_cc = 0;
    uStack_c4 = 0;
    local_bc = 0;
    local_f0[6] = (int)uVar23;
    uStack_d4 = 0;
    uStack_d0 = 2;
    iVar7 = (*DAT_14ca793e8)(*param_3,local_f0,0,lVar15);
    if (iVar7 != 0) {
      FUN_1431b4552(iVar7);
    }
    local_198 = (ulonglong *)param_4[8];
    local_190 = 0x10;
    FUN_14319eeca(param_3 + 0x7b,plVar1,*(undefined8 *)param_1[0x21],0x82);
    pvVar17 = (void *)FUN_1473a804a(plVar1);
    memset(pvVar17,0,uVar23);
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    uVar8 = *(undefined4 *)
             ((longlong)&DAT_14c873434 +
             (ulonglong)((uint)*(byte *)((longlong)param_4 + 0x33) * 0x30));
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar8;
    *(undefined4 *)(param_1 + 0x15) = uVar8;
    (*DAT_14ca78e10)(*param_3,*(undefined8 *)param_1[0x21],param_1 + 0x16);
    goto LAB_1431b7299;
  }
  local_150 = (undefined4 *)((longlong)param_1 + 0xa4);
  local_198 = (ulonglong *)(param_1 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  local_58 = 0;
  local_50 = 0x200000000;
  local_140 = local_198;
  FUN_1431b606a(local_f0,param_3,param_4);
  local_130 = param_1 + 0x13;
  iVar7 = (*DAT_14ca78f60)(*param_3,local_f0,0,param_1 + 0x13);
  if (iVar7 != 0) {
    FUN_1431b4552(iVar7);
  }
  pbVar2 = (byte *)(param_1 + 0x20);
  puVar12 = (ulonglong *)(param_1 + 0x16);
  (*DAT_14ca78ee0)(*param_3,param_1[0x13],puVar12);
  bVar22 = *(byte *)((longlong)param_4 + 0x33);
  if (bVar22 < 0x14) {
    if (bVar22 == 0xb) {
      uVar8 = 6;
    }
    else {
      if (bVar22 == 0xc) goto LAB_1431b6d63;
LAB_1431b6d5c:
      uVar8 = 1;
    }
  }
  else if (bVar22 == 0x14) {
LAB_1431b6d63:
    uVar8 = 2;
  }
  else {
    uVar8 = 4;
    if (bVar22 != 0x2c) goto LAB_1431b6d5c;
  }
  *(undefined4 *)pbVar2 = uVar8;
  bVar22 = *(byte *)((longlong)param_4 + 0x33);
  if (bVar22 < 0x14) {
    if ((bVar22 == 0xb) || (bVar22 == 0xc)) {
LAB_1431b6da2:
      uVar8 = 2;
    }
    else {
LAB_1431b6d9b:
      uVar8 = 1;
    }
  }
  else {
    if (bVar22 == 0x14) goto LAB_1431b6da2;
    uVar8 = 4;
    if (bVar22 != 0x2c) goto LAB_1431b6d9b;
  }
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar8;
  if (local_bc != 0) {
    *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) | 2;
  }
  uVar23 = *param_4;
  local_148 = pbVar2;
  if (param_5 == (longlong *)0x0) {
    bVar22 = (byte)(uVar23 >> 0xc) & *(byte *)((longlong)param_3 + 0x391) & (uVar23 & 7) != 0;
    iVar7 = (uint)bVar22 * 0x10 + 1;
    cVar19 = ((uVar23 & 0x20007) == 0) + '\x05';
    uVar9 = (uint)(uVar23 >> 0x20);
    if ((((uVar23 & 7) == 0) && (*puVar12 < 0xc00000)) || (bVar22 != 0 || DAT_14c760c70 == 0)) {
      local_180 = ".\\Runtime/VulkanRHI/Private/VulkanTexture.cpp";
      local_190 = CONCAT31(local_190._1_3_,cVar19);
      local_198 = (ulonglong *)CONCAT44(local_198._4_4_,iVar7);
      local_188 = CONCAT31(local_188._1_3_,(char)(uVar9 >> 2)) & 0xffffff01;
      local_178 = (char *)CONCAT44(local_178._4_4_,0x65b);
      FUN_1473a7960(param_3 + 0x7b,plVar1,param_1 + 0xc,puVar12);
    }
    else {
      local_178 = ".\\Runtime/VulkanRHI/Private/VulkanTexture.cpp";
      local_188 = CONCAT31(local_188._1_3_,cVar19);
      local_180 = (char *)(CONCAT71(local_180._1_7_,(char)(uVar9 >> 2)) & 0xffffffffffffff01);
      local_170 = 0x653;
      local_198 = puVar12;
      local_190 = iVar7;
      FUN_14319f512(param_3 + 0x7b,plVar1,param_1 + 0xc,*local_130);
    }
    uVar9 = *(uint *)((longlong)param_1 + 0xec);
    puVar12 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
    uVar20 = (ulonglong)uVar9 + 0x3ff >> 10;
    if ((*puVar12 & 0x8000020007) == 0) {
      LOCK();
      DAT_14ca84eb8 = DAT_14ca84eb8 + uVar20;
      UNLOCK();
    }
    else {
      LOCK();
      DAT_14ca84ec0 = DAT_14ca84ec0 + uVar20;
      UNLOCK();
    }
  }
  else {
    lVar15 = *param_5;
    uVar8 = *(undefined4 *)(lVar15 + 0x180);
    iVar7 = *(int *)(lVar15 + 0x188);
    uVar3 = *(undefined4 *)(lVar15 + 0x18c);
    local_128._4_4_ = (undefined4)(CONCAT14(local_128._7_1_,*(undefined4 *)(lVar15 + 399)) >> 8);
    local_128 = CONCAT44(local_128._4_4_,uVar3);
    bVar22 = *(byte *)(lVar15 + 0x193);
    uVar4 = *(undefined4 *)(lVar15 + 0x194);
    lVar13 = param_5[2];
    lVar6 = param_5[1];
    param_1[0x1c] = *(longlong *)(lVar15 + 0x158);
    *(undefined4 *)(param_1 + 0x1d) = uVar8;
    *(int *)((longlong)param_1 + 0xec) = (int)lVar6;
    *(int *)(param_1 + 0x1e) = iVar7 + (int)lVar13;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xf7) = local_128._3_4_;
    *(byte *)((longlong)param_1 + 0xfb) = bVar22 & 0x7f;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
  }
  lVar15 = param_1[0x13];
  FUN_1473a8200(plVar1,param_1[0x12],lVar15);
  *(int *)(param_1 + 0x1b) = local_bc;
  *(uint *)(param_1 + 0x14) = local_b8;
  lVar13 = (**(code **)(*param_1 + 8))(param_1);
  if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar13 + 0x33) * 0x30) + 1)
      & 2) == 0) {
    uVar21 = 0;
  }
  else {
    uVar20 = CONCAT71((int7)((ulonglong)lVar15 >> 8),(char)param_1[0x14]) & 0xffffffffffffff04;
    uVar21 = CONCAT71((int7)(uVar20 >> 8),(byte)uVar20 >> 2);
  }
  if ((uVar23 & 7) == 0) {
    bVar24 = false;
  }
  else {
    bVar24 = (*local_148 & 6) != 0;
  }
  iVar7 = FUN_1431b8bf4((int)param_4[7],bVar24,uVar21);
  bVar22 = (*param_4 & 5) != 0 & (byte)local_b8 >> 2;
  if ((iVar7 != 0) || (bVar22 != 0)) {
    if ((param_2 == (ulonglong *)0x0) || (*(char *)((longlong)param_2 + 100) != '\0')) {
      iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar5 == 2) goto LAB_1431b706c;
        if (iVar5 != 1) goto LAB_1431b7063;
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_1431b706c;
      }
      else {
LAB_1431b7063:
        if (iVar5 == 0x10) {
LAB_1431b706c:
          if (DAT_14c842750 != '\0') {
            puVar14 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            puVar16 = puVar14 + 7;
            if (DAT_14ca85108 < puVar16) {
              FUN_140023dd8(&DAT_14ca85100,0x40);
              puVar14 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
              puVar16 = puVar14 + 7;
            }
            DAT_14ca85160 = DAT_14ca85160 + 1;
            param_2 = (ulonglong *)&DAT_14ca85100;
            DAT_14ca85100 = puVar16;
            *DAT_14ca85130 = puVar14;
            DAT_14ca85130 = puVar14 + 1;
            goto LAB_1431b7131;
          }
        }
      }
      local_198 = param_4 + 1;
      local_190 = CONCAT31(local_190._1_3_,param_5 != (longlong *)0x0);
      FUN_1473d67ae(param_1,*(undefined8 *)(param_1[0x12] + 0x20c8),iVar7,
                    CONCAT71((int7)((ulonglong)plVar1 >> 8),bVar22) & 0xffffffff);
      param_2 = (ulonglong *)&DAT_14ca85100;
    }
    else {
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar14 + 7;
      if ((undefined8 *)param_2[1] < puVar16) {
        FUN_140023dd8(param_2,0x40);
        puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar14 + 7;
      }
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *param_2 = (ulonglong)puVar16;
      *(undefined8 **)param_2[6] = puVar14;
      param_2[6] = (ulonglong)(puVar14 + 1);
LAB_1431b7131:
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_14a36ba10;
      puVar14[2] = param_1;
      *(int *)(puVar14 + 3) = iVar7;
      *(undefined1 *)((longlong)puVar14 + 0x1c) = 0;
      *(byte *)((longlong)puVar14 + 0x1d) = bVar22;
      *(bool *)((longlong)puVar14 + 0x1e) = param_5 != (longlong *)0x0;
      uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
      uVar23 = param_4[2];
      uVar3 = *(undefined4 *)((longlong)param_4 + 0x14);
      *(int *)(puVar14 + 4) = (int)param_4[1];
      *(undefined4 *)((longlong)puVar14 + 0x24) = uVar8;
      *(int *)(puVar14 + 5) = (int)uVar23;
      *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar3;
      *(int *)(puVar14 + 6) = (int)param_4[3];
    }
  }
  *(int *)(param_1 + 0x22) = iVar7;
  lVar15 = (**(code **)(*param_1 + 8))(param_1);
  switch(*(undefined1 *)(lVar15 + 0x32)) {
  case 0:
    bVar24 = false;
    local_154 = 1;
    goto LAB_1431b71c7;
  case 1:
    local_154 = 5;
    break;
  case 2:
    local_154 = 2;
    break;
  case 3:
    local_154 = 3;
    break;
  case 4:
    local_154 = 6;
    break;
  default:
    local_154 = 0x7fffffff;
    bVar24 = true;
    goto LAB_1431b71c7;
  }
  bVar24 = false;
LAB_1431b71c7:
  uVar23 = *param_4;
  if ((int)*local_140 == 0) {
    *local_150 = *(undefined4 *)
                  ((longlong)&DAT_14c873434 +
                  (ulonglong)((uint)*(byte *)((longlong)param_4 + 0x33) * 0x30));
    piVar18 = (int *)((longlong)&DAT_14c873434 +
                     (ulonglong)((uint)*(byte *)((longlong)param_4 + 0x33) * 0x30));
    if ((uVar23 & 0x10) != 0) {
      piVar18 = &DAT_14ca781f0 + *(byte *)((longlong)param_4 + 0x33);
    }
    *(int *)local_140 = *piVar18;
  }
  (**(code **)(*param_1 + 8))(param_1);
  if (!bVar24) {
    local_134 = local_b8 & 0xfffffff7;
    if ((uVar23 & 0x10) == 0) {
      local_134 = local_b8;
    }
    puVar16 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar16 = param_3;
    *(undefined1 *)(puVar16 + 2) = 0;
    *(undefined1 *)(puVar16 + 5) = 0;
    FUN_1473a292c(param_3[0xd6],&local_128);
    puVar16[1] = local_128;
    lVar15 = (**(code **)(*param_1 + 8))(param_1);
    bVar24 = true;
    if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar15 + 0x33) * 0x30) + 1
                  ) & 2) != 0) {
      bVar24 = (*(byte *)(param_1 + 0x14) & 4) == 0;
    }
    local_150 = (undefined4 *)CONCAT71(local_150._1_7_,bVar24);
    lVar15 = (**(code **)(*param_1 + 8))(param_1);
    cVar19 = *(char *)(lVar15 + 0x32);
    if (cVar19 == '\x01') {
      lVar15 = (**(code **)(*param_1 + 8))(param_1);
      local_170 = (uint)*(ushort *)(lVar15 + 0x2e);
    }
    else if (cVar19 == '\x03') {
      local_170 = 6;
    }
    else if (cVar19 == '\x04') {
      lVar15 = (**(code **)(*param_1 + 8))(param_1);
      local_170 = (uint)*(ushort *)(lVar15 + 0x2e) * 6;
    }
    else {
      local_170 = 1;
    }
    local_190 = (int)*local_140;
    local_160 = local_134;
    local_168 = local_150._0_1_;
    local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
    local_188 = 0;
    local_198 = (ulonglong *)CONCAT71(local_198._1_7_,*(undefined1 *)((longlong)param_4 + 0x33));
    local_180 = (char *)(CONCAT44(local_180._4_4_,
                                  (int)param_4[6] + (uint)((char)(int)param_4[6] == '\0')) &
                        0xffffffff000000ff);
    FUN_1431b8c8e(puVar16,*local_130,local_154,*(undefined4 *)local_148);
    param_1[0xf] = (longlong)puVar16;
  }
  if ((int)param_1[0x20] == *(int *)((longlong)param_1 + 0x104)) {
    puVar16 = (undefined8 *)param_1[0xf];
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar16 = param_3;
    *(undefined4 *)(puVar16 + 1) = 0xffffffff;
    *(undefined1 *)((longlong)puVar16 + 0xc) = 0xff;
    *(undefined1 *)(puVar16 + 2) = 0;
    *(undefined1 *)(puVar16 + 5) = 0;
    FUN_1473a292c(param_3[0xd6],&local_128);
    puVar16[1] = local_128;
    lVar15 = (**(code **)(*param_1 + 8))(param_1);
    cVar19 = *(char *)(lVar15 + 0x32);
    if (cVar19 == '\x01') {
      lVar15 = (**(code **)(*param_1 + 8))(param_1);
      local_170 = (uint)*(ushort *)(lVar15 + 0x2e);
    }
    else if (cVar19 == '\x03') {
      local_170 = 6;
    }
    else if (cVar19 == '\x04') {
      lVar15 = (**(code **)(*param_1 + 8))(param_1);
      local_170 = (uint)*(ushort *)(lVar15 + 0x2e) * 6;
    }
    else {
      local_170 = 1;
    }
    local_190 = (int)param_1[0x15];
    local_160 = 0;
    local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
    local_188 = 0;
    local_198 = (ulonglong *)CONCAT71(local_198._1_7_,*(undefined1 *)((longlong)param_4 + 0x33));
    local_180 = (char *)(CONCAT44(local_180._4_4_,
                                  (int)param_4[6] + (uint)((char)(int)param_4[6] == '\0')) &
                        0xffffffff000000ff);
    local_168 = 0;
    FUN_1431b8c8e(puVar16,param_1[0x13],local_154,*(undefined4 *)((longlong)param_1 + 0x104));
  }
  param_1[0x10] = (longlong)puVar16;
  if (param_4[9] != 0) {
    *(undefined4 *)(param_1 + 0x22) = 5;
    uVar8 = (**(code **)(*(longlong *)param_4[9] + 0x10))();
    lVar15 = FUN_143192298(param_3 + 0xba,uVar8,1,4);
    pvVar17 = (void *)FUN_1473a804a(lVar15 + 0x18,*(undefined8 *)(lVar15 + 0x10));
    uVar9 = (**(code **)(*(longlong *)param_4[9] + 0x10))();
    _Src = (void *)(**(code **)(*(longlong *)param_4[9] + 8))();
    memcpy(pvVar17,_Src,(ulonglong)uVar9);
    (**(code **)(*(longlong *)param_4[9] + 0x18))();
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uVar8 = *(undefined4 *)((longlong)param_4 + 0x24);
    uVar3 = (undefined4)param_4[5];
    uStack_120 = *(undefined8 *)((longlong)param_4 + 0x24);
    lVar13 = (**(code **)(*param_1 + 8))(param_1);
    cVar19 = *(char *)(lVar13 + 0x32);
    if (cVar19 == '\x01') {
      lVar13 = (**(code **)(*param_1 + 8))(param_1);
      uVar9 = (uint)*(ushort *)(lVar13 + 0x2e);
    }
    else if (cVar19 == '\x03') {
      uVar9 = 6;
    }
    else if (cVar19 == '\x04') {
      lVar13 = (**(code **)(*param_1 + 8))(param_1);
      uVar9 = (uint)*(ushort *)(lVar13 + 0x2e) * 6;
    }
    else {
      uVar9 = 1;
    }
    uStack_110 = CONCAT44(uVar9,(undefined4)uStack_110);
    local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)local_148);
    uStack_100 = CONCAT44(uVar8,(undefined4)uStack_100);
    uStack_f4 = (uint)*(ushort *)((longlong)param_4 + 0x2c);
    local_f8 = uVar3;
    if (*(char *)((longlong)param_2 + 100) == '\0') {
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar14 + 0xb;
      if ((undefined8 *)param_2[1] < puVar16) {
        FUN_140023dd8(param_2,0x60);
        puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar14 + 0xb;
      }
      *param_2 = (ulonglong)puVar16;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar14;
      param_2[6] = (ulonglong)(puVar14 + 1);
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_14a36ba08;
      puVar14[2] = param_1;
      *(undefined4 *)(puVar14 + 3) = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = local_128._4_4_;
      *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)puVar14 + 0x24) = uStack_120._4_4_;
      puVar14[5] = local_118;
      puVar14[6] = uStack_110;
      puVar14[7] = local_108;
      puVar14[8] = uStack_100;
      puVar14[9] = CONCAT44(uStack_f4,local_f8);
      puVar14[10] = lVar15;
    }
    else {
      FUN_1473d6c28(param_3[0x419],param_1,&local_128,lVar15);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1431b7299:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b778e FUN_1431b778e body=500 status=ok
// SIG undefined FUN_1431b778e(void)

void FUN_1431b778e(longlong param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_1;
  local_b0 = param_2;
  local_b8 = (longlong *)(**(code **)(*param_4 + 0x30))(param_4);
  puVar6 = (undefined8 *)(**(code **)(*local_b8 + 8))();
  bVar5 = (byte)DAT_14c760da4 & 0x1f;
  uVar1 = *(undefined1 *)((longlong)puVar6 + 0x33);
  uVar3 = *(undefined4 *)(puVar6 + 1);
  local_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_98 = *(undefined4 *)(puVar6 + 2);
  uStack_94 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uStack_90 = *(undefined4 *)(puVar6 + 3);
  uVar4 = *puVar6;
  uVar2 = *(undefined1 *)((longlong)puVar6 + 0x31);
  local_70 = FUN_1431edf91(uVar4,0);
  local_76 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = (undefined1)param_5;
  local_88 = 0;
  local_68 = L"AsyncReallocateTexture2D_RenderThread";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_a8 = uVar4;
  local_a0 = uVar3;
  local_8c = ~(-1 << bVar5);
  local_84 = CONCAT44(param_7,param_6);
  local_77 = uVar2;
  local_75 = uVar1;
  lVar7 = FUN_14001cc68(0x118,0x10);
  local_c8 = 0;
  FUN_1431b6a70(lVar7,param_3,*(undefined8 *)(local_c0 + 0x48),&local_a8);
  puVar8 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 7;
  if ((undefined8 *)param_3[1] < puVar6) {
    FUN_140023dd8(param_3,0x40);
    puVar8 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 7;
  }
  *param_3 = (ulonglong)puVar6;
  *(int *)(param_3 + 0xc) = (int)param_3[0xc] + 1;
  *(undefined8 **)param_3[6] = puVar8;
  param_3[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a36ba00;
  puVar8[2] = local_b8;
  puVar8[3] = lVar7;
  *(undefined4 *)(puVar8 + 4) = param_5;
  *(undefined4 *)((longlong)puVar8 + 0x24) = param_6;
  *(undefined4 *)(puVar8 + 5) = param_7;
  puVar8[6] = param_8;
  *local_b0 = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b7984 FUN_1431b7984 body=398 status=ok
// SIG undefined FUN_1431b7984(void)

void FUN_1431b7984(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_bc;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_bc = param_4;
  local_b8 = param_1;
  local_b0 = param_2;
  plVar7 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7);
  bVar5 = (byte)DAT_14c760da4 & 0x1f;
  uVar1 = *(undefined1 *)((longlong)puVar8 + 0x33);
  uVar3 = *(undefined4 *)(puVar8 + 1);
  local_9c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_98 = *(undefined4 *)(puVar8 + 2);
  uStack_94 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uStack_90 = *(undefined4 *)(puVar8 + 3);
  uVar4 = *puVar8;
  uVar2 = *(undefined1 *)((longlong)puVar8 + 0x31);
  local_70 = FUN_1431edf91(uVar4,0);
  local_76 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = (undefined1)local_bc;
  local_88 = 0;
  local_68 = L"AsyncReallocateTexture2D_RenderThread";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_a8 = uVar4;
  local_a0 = uVar3;
  local_8c = ~(-1 << bVar5);
  local_84 = CONCAT44(param_6,param_5);
  local_77 = uVar2;
  local_75 = uVar1;
  lVar9 = FUN_14001cc68(0x118,0x10);
  lVar6 = local_b8;
  local_d8 = 0;
  FUN_1431b6a70(lVar9,0,*(undefined8 *)(local_b8 + 0x48),&local_a8);
  local_d0 = param_7;
  local_d8 = CONCAT44(local_d8._4_4_,param_6);
  FUN_1431b7b13(*(undefined8 *)(*(longlong *)(lVar6 + 0x48) + 0x20c8),plVar7,lVar9,param_5);
  *local_b0 = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b7b13 FUN_1431b7b13 body=861 status=ok
// SIG undefined FUN_1431b7b13(void)

void FUN_1431b7b13(longlong param_1,longlong *param_2,longlong *param_3,int param_4,int param_5,
                  int *param_6)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined1 auStack_638 [32];
  undefined4 *local_618;
  uint local_610;
  int *local_608;
  undefined8 local_600;
  longlong local_5f8;
  undefined4 local_5f0;
  int local_5ec;
  uint local_5e8;
  undefined8 local_5e4;
  undefined4 local_5dc;
  int local_5d8;
  uint local_5d4;
  undefined8 local_5d0;
  undefined1 local_5c8 [56];
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_478;
  undefined8 local_470;
  int local_468 [2];
  undefined8 auStack_460 [2];
  int aiStack_44c [2];
  undefined8 auStack_444 [2];
  int aiStack_430 [244];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_638;
  lVar4 = (**(code **)(*param_3 + 8))(param_3);
  uVar1 = *(undefined4 *)(lVar4 + 0x30);
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  bVar2 = (byte)*(undefined4 *)(lVar4 + 0x30);
  bVar10 = (byte)uVar1;
  if (bVar2 < bVar10) {
    bVar10 = bVar2;
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  iVar8 = (uint)*(byte *)(lVar4 + 0x30) - (uint)bVar10;
  lVar4 = (**(code **)(*param_3 + 8))(param_3);
  iVar9 = (uint)*(byte *)(lVar4 + 0x30) - (uint)bVar10;
  local_5f8 = FUN_1473984ce(*(undefined8 *)(param_1 + 0x150));
  local_600 = *(undefined8 *)(local_5f8 + 0x88);
  memset(local_468,0,(ulonglong)bVar10 * 0x40 + (ulonglong)bVar10 * 4);
  if (bVar10 != 0) {
    lVar4 = 0;
    iVar5 = iVar9;
    iVar6 = iVar8;
    do {
      iVar7 = param_4 >> ((byte)iVar5 & 0x1f);
      iVar3 = param_5 >> ((byte)iVar5 & 0x1f);
      *(undefined4 *)((longlong)local_468 + lVar4) = 1;
      *(int *)((longlong)local_468 + lVar4 + 4) = iVar6;
      *(undefined8 *)((longlong)auStack_460 + lVar4) = 0x100000000;
      *(undefined4 *)((longlong)aiStack_44c + lVar4) = 1;
      *(int *)((longlong)aiStack_44c + lVar4 + 4) = iVar5;
      *(undefined8 *)((longlong)auStack_444 + lVar4) = 0x100000000;
      *(uint *)((longlong)aiStack_430 + lVar4) = iVar7 + (uint)(iVar7 == 0);
      *(uint *)((longlong)aiStack_430 + lVar4 + 4) = iVar3 + (uint)(iVar3 == 0);
      *(undefined4 *)((longlong)aiStack_430 + lVar4 + 8) = 1;
      lVar4 = lVar4 + 0x44;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((ulonglong)bVar10 * 0x40 + (ulonglong)bVar10 * 4 != lVar4);
  }
  local_5dc = 1;
  local_5d0 = 0xffffffff00000000;
  local_5f0 = 1;
  local_5e4 = 0xffffffff00000000;
  local_590 = 0;
  local_588 = 0x100000000;
  local_4c0 = 0;
  local_4b8 = 0x200000000;
  local_478 = 0;
  local_470 = 0x200000000;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  local_618 = &local_5dc;
  local_5ec = iVar9;
  local_5e8 = (uint)bVar10;
  local_5d8 = iVar8;
  local_5d4 = (uint)bVar10;
  FUN_147396818(local_5c8,param_2[0x13],(int)param_2[0x22],6);
  local_618 = &local_5f0;
  FUN_147396818(local_5c8,param_3[0x13],0,7);
  lVar4 = local_5f8;
  FUN_147397068(local_5c8,local_5f8);
  FUN_1473945b6(local_5c8);
  local_608 = local_468;
  local_610 = (uint)bVar10;
  local_618 = (undefined4 *)CONCAT44(local_618._4_4_,7);
  (*DAT_14ca79078)(local_600,param_2[0x13],6,param_3[0x13]);
  local_590 = 0;
  local_588 = 0x100000000;
  local_4c0 = 0;
  local_4b8 = 0x200000000;
  local_478 = 0;
  local_470 = 0x200000000;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  local_618 = &local_5dc;
  FUN_147396818(local_5c8,param_2[0x13],6,(int)param_2[0x22]);
  local_618 = &local_5f0;
  FUN_147396818(local_5c8,param_3[0x13],7,(int)param_3[0x22]);
  FUN_147397068(local_5c8,lVar4);
  FUN_147395a74(lVar4 + 0x108,param_3,&local_5f0,(int)param_3[0x22]);
  FUN_1473945b6(local_5c8);
  LOCK();
  *param_6 = *param_6 + -1;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b7e72 FUN_1431b7e72 body=379 status=ok
// SIG undefined FUN_1431b7e72(void)

void FUN_1431b7e72(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6,ulonglong *param_7)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  local_4c = 0;
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_58 = param_2;
  local_50 = param_3;
  plVar4 = (longlong *)FUN_1473e128c((param_3 << 0x10 | uVar1 >> 0x10) ^ uVar1,&local_58);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  *param_5 = 0;
  FUN_1473d6710(plVar3,param_3,&local_58);
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar6 = (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30);
  uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar6);
  uVar2 = *(int *)(lVar5 + 0x24) >> ((byte)param_3 & 0x1f);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = ((uVar2 + uVar1) - 1) / uVar1;
  uVar2 = 2;
  if (2 < uVar1) {
    uVar2 = uVar1;
  }
  if ((*(byte *)(lVar5 + 0x33) & 0xfe) != 0x1e) {
    uVar2 = uVar1;
  }
  *param_5 = uVar2 * *(int *)((longlong)&DAT_14c873428 + uVar6);
  uVar6 = (ulonglong)local_58 & 0xffffffff;
  lVar5 = FUN_143192298(*(longlong *)(param_1 + 0x48) + 0x5d0,uVar6,1,4);
  *plVar4 = lVar5;
  if (param_7 != (ulonglong *)0x0) {
    *param_7 = uVar6;
    lVar5 = *plVar4;
  }
  FUN_1473a804a(lVar5 + 0x18,*(undefined8 *)(lVar5 + 0x10));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b7fee FUN_1431b7fee body=598 status=ok
// SIG undefined FUN_1431b7fee(void)

void FUN_1431b7fee(longlong param_1,char param_2,longlong *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  uStack_70 = (ulonglong)param_4;
  uVar2 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_78 = param_3;
  iVar3 = FUN_1473e1312((param_4 << 0x10 | uVar2 >> 0x10) ^ uVar2);
  if (iVar3 == -1) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(DAT_14ca78ae0 + 0x10 + (longlong)iVar3 * 0x20);
    FUN_1473e18b4(iVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  iVar9 = *(int *)(lVar5 + 0x24) >> ((byte)param_4 & 0x1f);
  iVar3 = *(int *)(lVar5 + 0x28) >> ((byte)param_4 & 0x1f);
  iVar3 = iVar3 + (uint)(iVar3 == 0);
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  cVar1 = *(char *)(lVar5 + 0x32);
  if (cVar1 == '\x01') {
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (uint)*(ushort *)(lVar5 + 0x2e);
  }
  else if (cVar1 == '\x03') {
    uVar2 = 6;
  }
  else if (cVar1 == '\x04') {
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (uint)*(ushort *)(lVar5 + 0x2e) * 6;
  }
  else {
    uVar2 = 1;
  }
  local_58 = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = CONCAT44(param_4,1);
  lStack_60 = (ulonglong)uVar2 << 0x20;
  lStack_50 = (ulonglong)(iVar9 + (uint)(iVar9 == 0)) << 0x20;
  uStack_44 = 1;
  local_48 = iVar3;
  if ((param_2 == '\0') || (DAT_14c842750 == '\0')) {
    FUN_1473d6c28(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20c8),plVar4,&local_78,uVar8);
  }
  else {
    puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar6 + 0xb;
    if (DAT_14ca85108 < puVar7) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar6 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar7;
    *DAT_14ca85130 = puVar6;
    DAT_14ca85130 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_14a36ba08;
    puVar6[2] = plVar4;
    *(undefined4 *)(puVar6 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(puVar6 + 4) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_70._4_4_;
    puVar6[5] = local_68;
    puVar6[6] = lStack_60;
    puVar6[7] = local_58;
    puVar6[8] = lStack_50;
    puVar6[9] = CONCAT44(uStack_44,local_48);
    puVar6[10] = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b8246 FUN_1431b8246 body=365 status=ok
// SIG undefined FUN_1431b8246(void)

void FUN_1431b8246(longlong param_1,longlong *param_2,int param_3,int param_4,undefined8 param_5,
                  int *param_6)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_58 = param_2;
  local_50 = param_4;
  local_4c = param_3;
  plVar4 = (longlong *)
           FUN_1473e128c(param_3 << 8 ^ uVar1 ^ (param_4 << 0x10 | uVar1 >> 0x10),&local_58);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  *param_6 = 0;
  FUN_1473d6710(plVar3,param_4,&local_58);
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar6 = (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30);
  uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar6);
  uVar2 = *(int *)(lVar5 + 0x24) >> ((byte)param_4 & 0x1f);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = ((uVar2 + uVar1) - 1) / uVar1;
  uVar2 = 2;
  if (2 < uVar1) {
    uVar2 = uVar1;
  }
  if ((*(byte *)(lVar5 + 0x33) & 0xfe) != 0x1e) {
    uVar2 = uVar1;
  }
  *param_6 = uVar2 * *(int *)((longlong)&DAT_14c873428 + uVar6);
  lVar5 = FUN_143192298(*(longlong *)(param_1 + 0x48) + 0x5d0,(ulonglong)local_58 & 0xffffffff,1,4);
  *plVar4 = lVar5;
  FUN_1473a804a(lVar5 + 0x18,*(undefined8 *)(lVar5 + 0x10));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b83b4 FUN_1431b83b4 body=515 status=ok
// SIG undefined FUN_1431b83b4(void)

void FUN_1431b83b4(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  uStack_60 = CONCAT44(param_3,param_4);
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_68 = param_2;
  iVar2 = FUN_1473e1312(param_3 << 8 ^ uVar1 ^ (param_4 << 0x10 | uVar1 >> 0x10));
  if (iVar2 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(DAT_14ca78ae0 + 0x10 + (longlong)iVar2 * 0x20);
    FUN_1473e18b4(iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  iVar2 = *(int *)(lVar4 + 0x24) >> ((byte)param_4 & 0x1f);
  local_38 = *(int *)(lVar4 + 0x28) >> ((byte)param_4 & 0x1f);
  local_38 = local_38 + (uint)(local_38 == 0);
  local_48 = 0;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  local_58 = CONCAT44(param_4,*(undefined4 *)((longlong)plVar3 + 0x104));
  uStack_50 = CONCAT44(1,param_3);
  lStack_40 = (ulonglong)(iVar2 + (uint)(iVar2 == 0)) << 0x20;
  uStack_34 = 1;
  if (DAT_14c842750 == '\0') {
    FUN_1473d6c28(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20c8),plVar3,&local_68,uVar7);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 0xb;
    if (DAT_14ca85108 < puVar6) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar6;
    *DAT_14ca85130 = puVar5;
    DAT_14ca85130 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_14a36ba08;
    puVar5[2] = plVar3;
    *(undefined4 *)(puVar5 + 3) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = local_68._4_4_;
    *(undefined4 *)(puVar5 + 4) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_60._4_4_;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
    puVar5[7] = local_48;
    puVar5[8] = lStack_40;
    puVar5[9] = CONCAT44(uStack_34,local_38);
    puVar5[10] = uVar7;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b85b8 FUN_1431b85b8 body=752 status=ok
// SIG undefined FUN_1431b85b8(void)

void FUN_1431b85b8(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
                  int *param_5,uint param_6,longlong param_7)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  void *_Src;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_e8 [44];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_ac = param_4;
  local_98 = param_3;
  local_90 = param_2;
  lVar6 = (**(code **)(*param_3 + 8))(param_3);
  uVar12 = (ulonglong)((uint)*(byte *)(lVar6 + 0x33) * 0x30);
  local_a0 = (ulonglong)*(uint *)((longlong)&DAT_14c87341c + uVar12);
  uVar1 = *(uint *)((longlong)&DAT_14c873420 + uVar12);
  local_b4 = param_5[2];
  local_b0 = param_5[3];
  local_bc = *(uint *)((longlong)&DAT_14c87341c + uVar12) - 1;
  uVar2 = (uint)(param_5[4] + local_bc) / local_a0;
  local_b8 = uVar1 - 1;
  uVar11 = param_5[5] + local_b8;
  uVar14 = uVar11 / uVar1;
  lVar6 = (longlong)*(int *)((longlong)&DAT_14c873428 + uVar12) * uVar2;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xd48);
  uVar13 = 0;
  local_a8 = FUN_143192298(*(longlong *)(param_1 + 0x48) + 0x5d0,
                           -iVar5 & ((int)lVar6 * uVar14 + iVar5) - 1,1,4);
  _Dst = (void *)FUN_1473a804a(local_a8 + 0x18);
  if (uVar1 <= uVar11) {
    _Src = (void *)((ulonglong)
                    (((uint)(local_b8 + local_b0) / uVar1) * param_6 *
                    *(int *)((longlong)&DAT_14c873420 + uVar12)) +
                   (ulonglong)
                   (((uint)(local_bc + local_b4) / (uint)local_a0) *
                   *(int *)((longlong)&DAT_14c873428 + uVar12)) + param_7);
    do {
      memcpy(_Dst,_Src,(ulonglong)(uint)(*(int *)((longlong)&DAT_14c873428 + uVar12) * (int)uVar2));
      _Src = (void *)((longlong)_Src + (ulonglong)param_6);
      _Dst = (void *)((longlong)_Dst + lVar6);
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  plVar3 = local_98;
  lVar6 = (**(code **)(*local_98 + 8))(local_98);
  iVar5 = *(int *)(lVar6 + 0x28) >> ((byte)local_ac & 0x1f);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  iVar10 = *(int *)(lVar6 + 0x24) >> ((byte)local_ac & 0x1f);
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = CONCAT44(local_ac,1);
  uStack_70 = 0x100000000;
  local_68 = *(undefined8 *)param_5;
  uVar1 = iVar10 - *param_5;
  if ((uint)param_5[4] < (uint)(iVar10 - *param_5)) {
    uVar1 = param_5[4];
  }
  lStack_60 = (ulonglong)uVar1 << 0x20;
  local_58 = iVar5 - param_5[1];
  if ((uint)param_5[5] < (uint)(iVar5 - param_5[1])) {
    local_58 = param_5[5];
  }
  uStack_54 = 1;
  uVar7 = (**(code **)(*plVar3 + 0x30))(plVar3);
  puVar4 = local_90;
  if (*(char *)((longlong)local_90 + 100) == '\0') {
    puVar8 = (undefined8 *)(*local_90 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 0xb;
    if ((undefined8 *)local_90[1] < puVar9) {
      FUN_140023dd8(local_90,0x60);
      puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 0xb;
    }
    *puVar4 = (ulonglong)puVar9;
    *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
    *(undefined8 **)puVar4[6] = puVar8;
    puVar4[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_14a36ba08;
    puVar8[2] = uVar7;
    *(undefined4 *)(puVar8 + 3) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = local_88._4_4_;
    *(undefined4 *)(puVar8 + 4) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_80._4_4_;
    puVar8[5] = local_78;
    puVar8[6] = uStack_70;
    puVar8[7] = local_68;
    puVar8[8] = lStack_60;
    puVar8[9] = CONCAT44(uStack_54,local_58);
    puVar8[10] = local_a8;
  }
  else {
    FUN_1473d6c28(local_90[7],uVar7,&local_88,local_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b88aa FUN_1431b88aa body=841 status=ok
// SIG undefined FUN_1431b88aa(void)

void FUN_1431b88aa(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
                  int *param_5,uint param_6,int param_7,longlong param_8)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  void *_Dst;
  undefined8 *puVar9;
  longlong *plVar10;
  byte bVar11;
  undefined8 *puVar12;
  void *_Src;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  longlong local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ac = param_4;
  local_98 = param_2;
  local_90 = param_3;
  local_a0 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  lVar8 = (**(code **)(*local_a0 + 8))();
  uVar14 = (ulonglong)((uint)*(byte *)(lVar8 + 0x33) * 0x30);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar2 = (longlong)(*(int *)((longlong)&DAT_14c873420 + uVar14) + param_5[7] + -1) /
          (longlong)*(int *)((longlong)&DAT_14c873420 + uVar14);
  iVar6 = (int)uVar2;
  uVar13 = ((param_5[6] + *(int *)((longlong)&DAT_14c87341c + uVar14) + -1) /
           *(int *)((longlong)&DAT_14c87341c + uVar14)) *
           *(int *)((longlong)&DAT_14c873428 + uVar14);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xd48);
  local_a8 = FUN_143192298(*(longlong *)(param_1 + 0x48) + 0x5d0,
                           -iVar1 & (iVar6 * uVar13 * param_5[8] + iVar1) - 1,1,4);
  _Dst = (void *)FUN_1473a804a(local_a8 + 0x18,*(undefined8 *)(local_a8 + 0x10));
  uVar15 = param_5[8];
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      if (iVar6 != 0) {
        _Src = (void *)((ulonglong)(uint)((int)uVar14 * param_7) + param_8);
        uVar16 = uVar2 & 0xffffffff;
        do {
          memcpy(_Dst,_Src,(ulonglong)uVar13);
          _Dst = (void *)((longlong)_Dst + (ulonglong)uVar13);
          _Src = (void *)((longlong)_Src + (ulonglong)param_6);
          uVar15 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 != 0);
        uVar15 = param_5[8];
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
  }
  plVar10 = local_90;
  lVar8 = (**(code **)(*local_90 + 8))(local_90);
  uVar3 = local_ac;
  bVar11 = (byte)local_ac;
  uVar15 = *(uint *)(lVar8 + 0x24) >> (bVar11 & 0x1f);
  lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
  uVar13 = *(uint *)(lVar8 + 0x28) >> (bVar11 & 0x1f);
  if (*(code **)(*plVar10 + 8) == FUN_1447d3e98) {
    plVar10 = plVar10 + 4;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10);
  }
  puVar4 = local_98;
  uVar5 = 1;
  switch(*(undefined1 *)((longlong)plVar10 + 0x32)) {
  case 0:
  case 3:
    break;
  case 1:
  case 4:
    uVar5 = *(ushort *)((longlong)plVar10 + 0x2e);
    break;
  case 2:
    uVar5 = *(ushort *)((longlong)plVar10 + 0x2c);
    break;
  default:
    uVar7 = 0;
    goto LAB_1431b8a7a;
  }
  uVar7 = (uint)uVar5;
LAB_1431b8a7a:
  uVar7 = uVar7 >> (bVar11 & 0x1f);
  local_78 = CONCAT44(uVar3,1);
  uStack_70 = CONCAT44(1,(undefined4)uStack_70);
  local_68 = *param_5;
  iStack_64 = param_5[1];
  iStack_60 = param_5[2];
  iStack_5c = (uVar15 + (uVar15 == 0)) - local_68;
  if (param_5[6] <= iStack_5c) {
    iStack_5c = param_5[6];
  }
  local_58 = (uVar13 + (uVar13 == 0)) - iStack_64;
  if (param_5[7] <= local_58) {
    local_58 = param_5[7];
  }
  iStack_54 = (uVar7 + (uVar7 == 0)) - iStack_60;
  if (param_5[8] <= iStack_54) {
    iStack_54 = param_5[8];
  }
  if (*(char *)((longlong)local_98 + 100) == '\0') {
    puVar9 = (undefined8 *)(*local_98 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar9 + 0xb;
    if ((undefined8 *)local_98[1] < puVar12) {
      FUN_140023dd8(local_98,0x60);
      puVar9 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar9 + 0xb;
    }
    *puVar4 = (ulonglong)puVar12;
    *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
    *(undefined8 **)puVar4[6] = puVar9;
    puVar4[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a36ba08;
    puVar9[2] = local_a0;
    *(undefined4 *)(puVar9 + 3) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = local_88._4_4_;
    *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_80._4_4_;
    puVar9[5] = local_78;
    puVar9[6] = uStack_70;
    puVar9[7] = CONCAT44(iStack_64,local_68);
    puVar9[8] = CONCAT44(iStack_5c,iStack_60);
    puVar9[9] = CONCAT44(iStack_54,local_58);
    puVar9[10] = local_a8;
  }
  else {
    FUN_1473d6c28(local_98[7],local_a0,&local_88,local_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431b8bf4 FUN_1431b8bf4 body=154 status=ok
// SIG undefined FUN_1431b8bf4(void)

int FUN_1431b8bf4(uint param_1,char param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  if (((param_1 != 2 && (param_1 >> 0xc & 1) == 0) && (iVar2 = 0x3b9f9491, -1 < (short)param_1)) &&
     (iVar2 = 0x3b9f9490, (param_1 >> 9 & 1) == 0)) {
    if ((param_1 & 0x70) != 0) {
      iVar2 = 0x3b9f9490;
      if (param_2 == '\0') {
        iVar2 = (uint)param_3 * 4 + 1;
      }
      return iVar2;
    }
    iVar2 = 1;
    if ((param_1 & 0xc00) == 0) {
      if (param_1 == 0x80000) {
        iVar2 = 0x3b9e1d90;
        if (DAT_14ca84f48 != '\x02') {
          iVar2 = 0;
        }
        iVar1 = 0x3b9d4aa3;
        if (DAT_14ca84f48 != '\x01') {
          iVar1 = iVar2;
        }
        return iVar1;
      }
      if (param_1 == 0x2000) {
        return 7;
      }
      iVar2 = 0;
      if (param_1 == 0x80) {
        return 6;
      }
    }
  }
  return iVar2;
}



// FUNCTION 1431b8c8e FUN_1431b8c8e body=596 status=ok
// SIG undefined FUN_1431b8c8e(void)

longlong *
FUN_1431b8c8e(longlong *param_1,longlong param_2,undefined4 param_3,uint param_4,byte param_5,
             int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10,
             char param_11,int param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *puStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((ulonglong)*(byte *)(param_1 + 5) == 0) {
    bVar6 = *(byte *)(param_1 + 2) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  (*(code *)(&PTR_LAB_14a36bc50)[*(byte *)(param_1 + 5)])();
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  local_98 = 0xf;
  local_84 = 0;
  local_94 = 0;
  uStack_88 = 0;
  uStack_80 = (undefined4)param_2;
  uStack_7c = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined4 *)0x0;
  if ((param_6 - 0x9dU < 0x1c) && ((puVar2[0x41f] & 8) != 0)) {
    bVar5 = (char)param_6 + 0x62;
    if ((bVar5 < 0x1b) && ((0x5555555U >> (bVar5 & 0x1f) & 1) != 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = &local_b0;
      local_b0 = 0x3b9bcfb8;
      local_ac = 0;
      local_9c = 0;
      uStack_a4 = 0x2500000000;
    }
  }
  if (param_11 == '\0') {
    puVar1 = puVar2 + (ulonglong)param_5 * 2 + 0x355;
    uVar7 = *(undefined4 *)puVar1;
    uVar8 = *(undefined4 *)((longlong)puVar1 + 4);
    uVar9 = *(undefined4 *)(puVar1 + 1);
    uVar10 = *(undefined4 *)((longlong)puVar1 + 0xc);
  }
  _local_74 = CONCAT44(uVar7,param_6);
  _uStack_6c = CONCAT44(uVar9,uVar8);
  _local_64 = CONCAT44(param_4,uVar10);
  uStack_5c = param_7;
  uStack_58 = param_8;
  local_54 = param_9;
  local_50 = (ulonglong)param_10;
  if (param_5 == 0x2c) {
    _local_64 = CONCAT44(4,uVar10);
  }
  puStack_90 = puVar4;
  if (param_12 != 0) {
    puStack_90 = &local_c8;
    local_c8 = 0x3b9c930a;
    local_c4 = 0;
    local_b4 = 0;
    iStack_b8 = param_12;
    uStack_c0 = SUB84(puVar4,0);
    uStack_bc = (undefined4)((ulonglong)puVar4 >> 0x20);
  }
  uStack_78 = param_3;
  iVar3 = (*DAT_14ca78f78)(*puVar2,&local_98,0,param_1 + 2);
  if (iVar3 != 0) {
    FUN_1431b4552(iVar3);
  }
  param_1[3] = param_2;
  if (DAT_14c760db4 < 2) {
    LOCK();
    UNLOCK();
    iVar3 = (int)DAT_14ca78908;
    DAT_14ca78908 = DAT_14ca78908 + 1;
    *(int *)(param_1 + 4) = iVar3 + 1;
  }
  local_d8 = bVar6;
  FUN_1473a2d60(*(undefined8 *)(*param_1 + 0x6b0),param_1[1],param_1[2],(param_4 & 6) != 0);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b8ee4 FUN_1431b8ee4 body=134 status=ok
// SIG undefined FUN_1431b8ee4(void)

void FUN_1431b8ee4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar3 = 1;
  switch((char)param_1[5]) {
  case '\0':
    uVar3 = (undefined1)param_1[2];
    goto switchD_1431b8f07_caseD_3;
  case '\x01':
    lVar1 = *param_1 + 0x590;
    lVar4 = param_1[2];
    uVar2 = 2;
    break;
  case '\x02':
    lVar1 = *param_1 + 0x590;
    lVar4 = param_1[2];
    uVar2 = 4;
    break;
  default:
    goto switchD_1431b8f07_caseD_3;
  case '\x04':
    lVar1 = *param_1 + 0x590;
    lVar4 = param_1[2];
    uVar2 = 0x10;
  }
  FUN_1473a8b5a(lVar1,uVar2,lVar4);
switchD_1431b8f07_caseD_3:
  (*(code *)(&PTR_LAB_14a36bc50)[*(byte *)(param_1 + 5)])(param_1 + 2);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



// FUNCTION 1431b8f6a FUN_1431b8f6a body=225 status=ok
// SIG undefined FUN_1431b8f6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b8f6a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14ca78b30 = _DAT_14ca78b30 + (ulonglong)*(uint *)(param_1 + 0x50);
  lVar8 = FUN_1473a8308(*(longlong *)(param_3 + 0x128) + 0x60,*(undefined8 *)(param_1 + 0x38));
  (**(code **)(*(longlong *)(param_1 + -0x60) + 8))(param_1 + -0x60);
  local_68 = *(undefined4 *)(lVar8 + 0xc);
  FUN_1473d6262(param_1 + -0x60,param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[3];
  *(undefined8 *)(param_1 + 0x90) = param_4[2];
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(param_4 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_4 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_4 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_4 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_4 + 4) = local_58._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001431b9042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b904c FUN_1431b904c body=359 status=ok
// SIG undefined FUN_1431b904c(void)

void FUN_1431b904c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  local_50 = param_5;
  local_4c = 0;
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_58 = param_2;
  plVar4 = (longlong *)FUN_1473e128c((param_5 << 0x10 | uVar1 >> 0x10) ^ uVar1,&local_58);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  *param_7 = 0;
  FUN_1473d6710(plVar3,param_5,&local_58);
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar6 = (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30);
  uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar6);
  uVar2 = *(int *)(lVar5 + 0x24) >> ((byte)param_5 & 0x1f);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = ((uVar2 + uVar1) - 1) / uVar1;
  uVar2 = 2;
  if (2 < uVar1) {
    uVar2 = uVar1;
  }
  if ((*(byte *)(lVar5 + 0x33) & 0xfe) != 0x1e) {
    uVar2 = uVar1;
  }
  *param_7 = uVar2 * *(int *)((longlong)&DAT_14c873428 + uVar6);
  lVar5 = FUN_143192298(*(longlong *)(param_1 + 0x48) + 0x5d0,(ulonglong)local_58 & 0xffffffff,1,4);
  *plVar4 = lVar5;
  FUN_1473a804a(lVar5 + 0x18,*(undefined8 *)(lVar5 + 0x10));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b91b4 FUN_1431b91b4 body=523 status=ok
// SIG undefined FUN_1431b91b4(void)

void FUN_1431b91b4(longlong param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  uStack_70 = (ulonglong)param_5;
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_78 = param_2;
  iVar2 = FUN_1473e1312((param_5 << 0x10 | uVar1 >> 0x10) ^ uVar1);
  if (iVar2 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(DAT_14ca78ae0 + 0x10 + (longlong)iVar2 * 0x20);
    FUN_1473e18b4(iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  iVar2 = *(int *)(lVar4 + 0x24) >> ((byte)param_5 & 0x1f);
  local_48 = *(int *)(lVar4 + 0x28) >> ((byte)param_5 & 0x1f);
  local_48 = local_48 + (uint)(local_48 == 0);
  local_58 = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = CONCAT44(param_5,*(undefined4 *)((longlong)plVar3 + 0x104));
  uStack_60 = CONCAT44(1,param_3 + param_4 * 6);
  lStack_50 = (ulonglong)(iVar2 + (uint)(iVar2 == 0)) << 0x20;
  uStack_44 = 1;
  if (DAT_14c842750 == '\0') {
    FUN_1473d6c28(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20c8),plVar3,&local_78,uVar7);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 0xb;
    if (DAT_14ca85108 < puVar6) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar6;
    *DAT_14ca85130 = puVar5;
    DAT_14ca85130 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_14a36ba08;
    puVar5[2] = plVar3;
    *(undefined4 *)(puVar5 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(puVar5 + 4) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_70._4_4_;
    puVar5[5] = local_68;
    puVar5[6] = uStack_60;
    puVar5[7] = local_58;
    puVar5[8] = lStack_50;
    puVar5[9] = CONCAT44(uStack_44,local_48);
    puVar5[10] = uVar7;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b93c0 FUN_1431b93c0 body=41 status=ok
// SIG undefined FUN_1431b93c0(void)

void FUN_1431b93c0(void)

{
  DAT_14ca78b88 = 0;
  if (DAT_14ca78b80 != 0) {
    FUN_1400020a8();
  }
  FUN_1473ddeb4();
  return;
}



// FUNCTION 1431b93f8 FUN_1431b93f8 body=1510 status=ok
// SIG undefined FUN_1431b93f8(void)

void FUN_1431b93f8(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_568 [32];
  uint local_548;
  undefined8 *local_540;
  undefined8 *local_538;
  int local_524;
  int local_520;
  int local_51c;
  ulonglong local_518;
  longlong local_510;
  undefined8 *local_508;
  longlong local_500;
  undefined1 local_4f8 [56];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  int local_390 [210];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_568;
  lVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  plVar5 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  lVar3 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar3 + 0x80) != 0) {
    FUN_14739859c(lVar3,0,0);
  }
  lVar3 = *(longlong *)(lVar3 + 0x78);
  FUN_1473975a6(lVar3,lVar4,0x80);
  (**(code **)(*param_3 + 8))(param_3);
  lVar6 = (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*param_3 + 8))(param_3);
  uVar1 = *(ushort *)(lVar6 + 0x2c);
  iVar8 = *(int *)(lVar6 + 0x24);
  iVar12 = *(int *)(lVar6 + 0x28);
  lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((*(byte *)(lVar6 + 2) & 8) == 0) {
    FUN_1473975a6(lVar3,plVar5,0x2000);
    local_390[0xc] = *param_4;
    local_390[0xd] = param_4[1];
    uVar9 = param_4[2];
    if (((local_390[0xc] == (int)DAT_14c9a5298) && (local_390[0xd] == DAT_14c9a5298._4_4_)) &&
       (uVar9 == DAT_14c9a52a0)) {
      local_398._4_4_ = param_4[0xc];
      bVar7 = (byte)local_398._4_4_;
      iVar8 = iVar8 >> (bVar7 & 0x1f);
      iVar12 = iVar12 >> (bVar7 & 0x1f);
      local_390[0xd] = iVar12 + (uint)(iVar12 == 0);
      local_390[0xc] = iVar8 + (uint)(iVar8 == 0);
      local_390[0xe] = (int)(uVar1 >> (bVar7 & 0x1f));
      local_390[0xe] = local_390[0xe] + (uint)(local_390[0xe] == 0);
    }
    else {
      if (local_390[0xc] < 2) {
        local_390[0xc] = 1;
      }
      if (local_390[0xd] < 2) {
        local_390[0xd] = 1;
      }
      local_390[0xe] = 1;
      if (1 < (int)uVar9) {
        local_390[0xe] = uVar9;
      }
      local_398._4_4_ = param_4[0xc];
    }
    local_398._0_4_ = *(undefined4 *)(lVar4 + 0x100);
    local_390[0] = param_4[9];
    local_390[1] = param_4[0xb];
    local_390[2] = param_4[3];
    local_390[3] = param_4[4];
    local_390[4] = param_4[5];
    local_390[5] = (int)plVar5[0x20];
    local_390[7] = param_4[10];
    local_390[6] = param_4[0xd];
    local_390[9] = param_4[6];
    local_390[10] = param_4[7];
    local_390[0xb] = param_4[8];
    local_390[8] = local_390[1];
    if (param_4[0xe] != 0) {
      uVar9 = 0;
      do {
        local_540 = (undefined8 *)CONCAT44(local_540._4_4_,1);
        local_548 = 7;
        local_538 = &local_398;
        (*DAT_14ca79078)(*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar4 + 0x98),6,plVar5[0x13])
        ;
        local_398._4_4_ = local_398._4_4_ + 1;
        local_390[6] = local_390[6] + 1;
        if (uVar9 != param_4[0xe] - 1U) {
          local_390[2] = local_390[2] / 2;
          local_390[3] = local_390[3] / 2;
          local_390[4] = local_390[4] / 2;
          local_390[9] = local_390[9] / 2;
          local_390[10] = local_390[10] / 2;
          local_390[0xb] = local_390[0xb] / 2;
          local_390[0xd] = ((uint)local_390[0xd] >> 1) + (uint)((uint)local_390[0xd] >> 1 == 0);
          local_390[0xc] = ((uint)local_390[0xc] >> 1) + (uint)((uint)local_390[0xc] >> 1 == 0);
          local_390[0xe] = ((uint)local_390[0xe] >> 1) + (uint)((uint)local_390[0xe] >> 1 == 0);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)param_4[0xe]);
    }
  }
  else {
    iVar10 = *param_4;
    iVar13 = param_4[1];
    uVar9 = param_4[2];
    local_51c = param_4[0xc];
    if (((iVar10 == (int)DAT_14c9a5298) && (iVar13 == DAT_14c9a5298._4_4_)) &&
       (uVar9 == DAT_14c9a52a0)) {
      bVar7 = (byte)local_51c;
      iVar8 = iVar8 >> (bVar7 & 0x1f);
      iVar10 = iVar8 + (uint)(iVar8 == 0);
      iVar12 = iVar12 >> (bVar7 & 0x1f);
      iVar13 = iVar12 + (uint)(iVar12 == 0);
      uVar9 = (uint)(uVar1 >> (bVar7 & 0x1f));
      uVar9 = uVar9 + (uVar9 == 0);
    }
    local_510 = lVar4;
    local_500 = lVar3;
    memset(&local_398,0,0x348);
    lVar3 = local_500;
    local_508 = (undefined8 *)plVar5[0x21];
    local_548 = param_4[0xe];
    local_518 = (ulonglong)local_548;
    if (local_518 != 0) {
      local_520 = param_4[9];
      uVar11 = param_4[0xd];
      local_524 = param_4[3];
      iVar8 = param_4[4];
      iVar12 = param_4[5];
      uVar2 = *(undefined4 *)(local_510 + 0x100);
      lVar4 = 0;
      do {
        *(ulonglong *)((longlong)&local_398 + lVar4) =
             (ulonglong)*(uint *)((longlong)local_508 + (ulonglong)uVar11 * 4 + 8);
        *(int *)((longlong)local_390 + lVar4) = iVar10;
        *(int *)((longlong)local_390 + lVar4 + 4) = iVar13;
        *(undefined4 *)((longlong)local_390 + lVar4 + 8) = uVar2;
        *(int *)((longlong)local_390 + lVar4 + 0xc) = local_51c;
        *(int *)((longlong)local_390 + lVar4 + 0x10) = local_520;
        *(undefined4 *)((longlong)local_390 + lVar4 + 0x14) = 1;
        *(int *)((longlong)local_390 + lVar4 + 0x18) = local_524;
        *(int *)((longlong)local_390 + lVar4 + 0x1c) = iVar8;
        *(int *)((longlong)local_390 + lVar4 + 0x20) = iVar12;
        *(int *)((longlong)local_390 + lVar4 + 0x24) = iVar10;
        *(int *)((longlong)local_390 + lVar4 + 0x28) = iVar13;
        *(uint *)((longlong)local_390 + lVar4 + 0x2c) = uVar9;
        iVar10 = iVar10 / 2;
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar13 = iVar13 / 2;
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        uVar9 = (int)uVar9 / 2;
        if ((int)uVar9 < 2) {
          uVar9 = 1;
        }
        lVar4 = lVar4 + 0x38;
        uVar11 = uVar11 + 1;
      } while (local_518 * 0x38 - lVar4 != 0);
    }
    local_540 = &local_398;
    (*DAT_14ca79330)(*(undefined8 *)(local_500 + 0x88),*(undefined8 *)(local_510 + 0x98),6,
                     *local_508);
    local_4c0 = 0;
    local_4b8 = 0x100000000;
    local_3f0 = 0;
    local_3e8 = 0x200000000;
    local_3a8 = 0;
    local_3a0 = 0x200000000;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = 0;
    local_548 = 0x4000;
    FUN_14739445e(local_4f8,0x1000,0x2000,0x10000);
    FUN_147397068(local_4f8,lVar3);
    FUN_1473945b6(local_4f8);
  }
  if ((local_48 ^ (ulonglong)auStack_568) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b99e0 FUN_1431b99e0 body=416 status=ok
// SIG undefined FUN_1431b99e0(void)

longlong *
FUN_1431b99e0(longlong *param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 unaff_RDI;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((ulonglong)*(byte *)(param_1 + 5) == 0) {
    uVar4 = (uint)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(char)param_1[2]) ^ 1;
  }
  else {
    uVar4 = 0;
  }
  (*(code *)(&PTR_LAB_14a36bc50)[*(byte *)(param_1 + 5)])(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  local_50 = (ulonglong)(uint)(param_4 + *(int *)(param_2 + 0x60));
  iStack_58 = (&DAT_14ca78010)[param_3 & 0xff];
  local_78 = 0xd;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  local_54 = 0;
  uStack_60 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  if (iStack_58 < 0x10) {
    if (iStack_58 == 4) goto switchD_1431b9a9b_caseD_46;
    goto switchD_1431b9a9b_caseD_27;
  }
  switch(iStack_58) {
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2c:
  case 0x40:
  case 0x4d:
  case 0x51:
  case 0x53:
  case 0x62:
  case 99:
  case 100:
  case 0x7a:
  case 0x7d:
  case 0x7e:
  case 0x81:
    lVar3 = 4;
    break;
  case 0x46:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x7c:
switchD_1431b9a9b_caseD_46:
    lVar3 = 2;
    break;
  case 0x5b:
  case 0x5c:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x6e:
  case 0x6f:
    lVar3 = 8;
    break;
  case 0x6b:
  case 0x6d:
    lVar3 = 0x10;
    break;
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    lVar3 = 0;
    break;
  default:
    if (iStack_58 == 0x10) goto switchD_1431b9a9b_caseD_46;
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5d:
  case 0x5e:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7b:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
switchD_1431b9a9b_caseD_27:
    lVar3 = 1;
  }
  local_48 = (ulonglong)*(uint *)(*param_1 + 0xc2c) * lVar3;
  if (param_5 < local_48) {
    local_48 = (ulonglong)param_5;
  }
  iVar1 = (*DAT_14ca78f50)(*(undefined8 *)*param_1,&local_78,0,param_1 + 2);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1);
  }
  uVar2 = *(uint *)(param_2 + 0x28) & 4;
  *(char *)((longlong)param_1 + 0x1c) = (char)(uVar2 >> 2);
  if ((uVar2 == 0) && (DAT_14c760db4 < 2)) {
    LOCK();
    UNLOCK();
    iVar1 = (int)DAT_14ca78900;
    DAT_14ca78900 = DAT_14ca78900 + 1;
    *(int *)(param_1 + 3) = iVar1 + 1;
  }
  FUN_1473a2f22(*(undefined8 *)(*param_1 + 0x6b0),param_1[1],&local_78,uVar4);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431b9b81 FUN_1431b9b81 body=81 status=ok
// SIG undefined FUN_1431b9b81(void)

uint FUN_1431b9b81(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  
  bVar1 = *param_1;
  if (bVar1 < 2) {
    bVar2 = param_1[2] - 1;
    if (bVar1 == 0) {
      if (3 < bVar2) {
        return 0x7fffffff;
      }
      puVar3 = &DAT_14a36bfa8;
    }
    else {
      if (3 < bVar2) {
        return 0x7fffffff;
      }
      puVar3 = &DAT_14a36bfb8;
    }
    return *(uint *)(puVar3 + (ulonglong)bVar2 * 4);
  }
  if ((bVar1 & 0xfd) != 0) {
    return 3;
  }
  return param_1[1] == 0x54 | 2;
}



// FUNCTION 1431b9bd2 FUN_1431b9bd2 body=69 status=ok
// SIG undefined FUN_1431b9bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431b9bd2(void)

{
  _DAT_14ca78bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b9c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78bd0,1);
  return;
}



// FUNCTION 1431b9c17 FUN_1431b9c17 body=446 status=ok
// SIG undefined FUN_1431b9c17(void)

void FUN_1431b9c17(longlong param_1,longlong param_2,void *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  void *_Dst;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined2 local_82;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  void *local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  size_t local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x78);
  lVar4 = *(longlong *)(param_1 + 0x120);
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x84);
  FUN_1473a8d6a(*(undefined8 *)(param_1 + 0x138),&local_60,iVar2);
  local_7c = *(undefined4 *)(local_60 + 8);
  local_80 = *(undefined4 *)(local_60 + 0x14);
  local_82 = *(undefined2 *)(local_60 + 0x18);
  local_78 = *(undefined8 *)(local_60 + 0x20);
  uVar6 = *(int *)(local_60 + 0x10) + (int)local_58;
  _Dst = (void *)((local_58 & 0xffffffff) + *(longlong *)(local_60 + 0x28));
  if (param_4 == '\0') {
    memcpy(_Dst,param_3,(longlong)iVar2);
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x20);
    cVar1 = *(char *)(*(longlong *)(lVar4 + 0x6b0) + 8);
    memcpy(_Dst,param_3,(ulonglong)*(uint *)(lVar3 + 0x84));
    if ((cVar1 == '\x01') && ((longlong)*(int *)(lVar3 + 0x28) != 0)) {
      puVar5 = *(ushort **)(lVar3 + 0x20);
      lVar4 = (longlong)*(int *)(lVar3 + 0x28) << 2;
      local_70 = param_3;
      do {
        FUN_1456c4e2c(&local_60,local_70,puVar5);
        if (((int)local_60 != -1) && (local_60._4_1_ != -1)) {
          *(int *)((longlong)_Dst + (ulonglong)*puVar5) = (int)local_60;
        }
        puVar5 = puVar5 + 2;
        lVar4 = lVar4 + -4;
      } while (lVar4 != 0);
    }
  }
  if (*(uint *)(param_2 + 0x58) < 2) {
    *(undefined2 *)(param_2 + 0x52) = 0x8000;
    *(int *)(param_2 + 0x44) = iVar2;
    *(uint *)(param_2 + 0x48) = uVar6;
    *(undefined2 *)(param_2 + 0x50) = local_82;
    *(undefined4 *)(param_2 + 0x4c) = local_80;
    *(undefined8 *)(param_2 + 0x38) = local_78;
    *(undefined4 *)(param_2 + 0x40) = local_7c;
  }
  else {
    local_60 = (ulonglong)uVar6;
    local_58 = (ulonglong)*(uint *)(param_2 + 0x48);
    local_98 = &local_60;
    local_50 = (longlong)iVar2;
    (*DAT_14ca793f0)(*(undefined8 *)(local_68 + 0x88),local_78,*(undefined8 *)(param_2 + 0x38),1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431b9dd6 FUN_1431b9dd6 body=99 status=ok
// SIG undefined FUN_1431b9dd6(void)

longlong *
FUN_1431b9dd6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x78,0x10);
  FUN_1473d9584(lVar1,*(undefined8 *)(param_1 + 0x48),param_4,param_3,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1431b9e3a FUN_1431b9e3a body=1084 status=ok
// SIG undefined FUN_1431b9e3a(void)

void FUN_1431b9e3a(longlong param_1,ulonglong *param_2,longlong param_3,void *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  void *_Dst;
  size_t _Size;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_e8 [36];
  uint local_c4;
  ushort *local_c0;
  void *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulonglong uStack_80;
  ulonglong local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = *(longlong *)(param_3 + 0x20);
  uVar4 = *(uint *)(lVar5 + 0x28);
  uVar7 = (ulonglong)uVar4;
  uVar12 = *(uint *)(lVar5 + 0x84);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  bVar16 = DAT_14c760cb0 == 0;
  bVar17 = (*(byte *)((longlong)param_2 + 0x17b) & 2) != 0;
  uVar14 = *(uint *)(param_3 + 0x58);
  if (((1 < uVar14 && (bVar17 || bVar16)) && 0 < (int)uVar12) &&
     (local_c4 = uVar14, FUN_1431a0196(*(longlong *)(param_1 + 0x48) + 0x3d8,&local_68,uVar12),
     uVar14 = local_c4, param_4 != (void *)0x0)) {
    local_b0 = param_3;
    local_b8 = (void *)FUN_1473a804a(&local_68,*(undefined8 *)(param_1 + 0x48));
    cVar3 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x6b0) + 8);
    memcpy(local_b8,param_4,(ulonglong)*(uint *)(lVar5 + 0x84));
    if ((cVar3 == '\x01') && ((longlong)*(int *)(lVar5 + 0x28) != 0)) {
      local_c0 = *(ushort **)(lVar5 + 0x20);
      lVar11 = (longlong)*(int *)(lVar5 + 0x28) << 2;
      do {
        FUN_1456c4e2c(&local_a0,param_4,local_c0);
        if (((int)local_a0 != -1) && (local_a0._4_1_ != -1)) {
          *(int *)((longlong)local_b8 + (ulonglong)*local_c0) = (int)local_a0;
        }
        local_c0 = local_c0 + 2;
        lVar11 = lVar11 + -4;
      } while (lVar11 != 0);
    }
    FUN_1473a80a4(&local_68,*(undefined8 *)(param_1 + 0x48));
    param_3 = local_b0;
    uVar14 = local_c4;
  }
  if ((int)uVar4 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar10 = uVar15 + uVar7 * 8;
    local_c4 = uVar12;
    if (param_2[1] < uVar10) {
      FUN_140023dd8(param_2,(int)(uVar7 * 8) + 8);
      uVar15 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar10 = uVar7 * 8 + uVar15;
    }
    *param_2 = uVar10;
    uVar10 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar5 + 0x20) + 2 + uVar10 * 4);
      if (((byte)(bVar2 - 10) < 0xe) && ((0x3263U >> (bVar2 - 10 & 0x1f) & 1) != 0)) {
LAB_1431b9f8f:
        lVar11 = 0;
      }
      else {
        plVar13 = (longlong *)
                  ((ulonglong)*(ushort *)(*(longlong *)(lVar5 + 0x20) + uVar10 * 4) +
                  (longlong)param_4);
        if ((bVar2 < 0x13) && ((0x67200U >> (bVar2 & 0x1f) & 1) != 0)) {
          if (*plVar13 == 0) goto LAB_1431b9f8f;
          plVar13 = (longlong *)(*plVar13 + 0x10);
        }
        lVar11 = *plVar13;
      }
      *(longlong *)(uVar15 + uVar10 * 8) = lVar11;
      uVar10 = uVar10 + 1;
      uVar12 = local_c4;
    } while (uVar7 != uVar10);
  }
  uVar6 = uStack_50;
  if (1 < uVar14 && (bVar17 || bVar16)) {
    uStack_50 = uStack_50 & 0x7fffffff;
    uStack_88 = CONCAT44(uStack_54,uStack_58);
    uStack_80 = CONCAT44(uStack_4c,uVar6) & 0xffffffff7fffffff;
    uStack_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = uStack_60;
    uStack_8c = uStack_5c;
    local_a0 = param_3;
    local_78 = uVar15;
    local_70 = uVar4;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_1473ddf54(&local_a0);
    }
    else {
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 9;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x50);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 9;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a36ba28;
      puVar8[2] = local_a0;
      puVar8[3] = CONCAT44(uStack_94,uStack_98);
      puVar8[4] = CONCAT44(uStack_8c,uStack_90);
      puVar8[5] = uStack_88;
      puVar8[6] = uStack_80;
      puVar8[7] = local_78;
      puVar8[8] = CONCAT44(uStack_6c,local_70);
    }
  }
  else {
    _Size = (size_t)(int)uVar12;
    _Dst = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (param_2[1] < uVar7) {
      FUN_140023dd8(param_2,uVar12 + 0x10);
      _Dst = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *param_2 = uVar7;
    memcpy(_Dst,param_4,_Size);
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_1431b9c17(param_2[7],param_3,_Dst,1);
      FUN_1473d9a3e(param_3,uVar15,uVar4);
    }
    else {
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 6;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x38);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 6;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_FUN_14a36ba20;
      puVar8[2] = param_3;
      puVar8[3] = uVar15;
      *(uint *)(puVar8 + 4) = uVar4;
      *(uint *)((longlong)puVar8 + 0x24) = uVar12;
      puVar8[5] = _Dst;
    }
  }
  FUN_14494c7ac(param_2,&local_a8,1);
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ba288 FUN_1431ba288 body=179 status=ok
// SIG undefined FUN_1431ba288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ba288(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14ca813bc = 0;
  if (((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (*(int *)(lVar1 + 0xdbc) == 1)) {
    fVar2 = 1e+09 / *(float *)(lVar1 + 0xdc0);
    uVar3 = (ulonglong)fVar2;
    DAT_14ca813c0 = (longlong)(fVar2 - 9.223372e+18) & (longlong)uVar3 >> 0x3f | uVar3;
    if ((*(byte *)(*param_1 + 0x20f9) & 0x40) != 0) {
      FUN_1473a4d72(*param_1,&local_20);
      _DAT_14ca81400 = local_20;
      uRam000000014ca81404 = uStack_1c;
      _DAT_14ca81408 = uStack_18;
      uRam000000014ca8140c = uStack_14;
    }
    DAT_14ca813bc = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ba33c FUN_1431ba33c body=271 status=ok
// SIG undefined FUN_1431ba33c(void)

ulonglong FUN_1431ba33c(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x48) + 0x48);
  lVar3 = (longlong)param_2 * 0x20;
  lVar1 = *(longlong *)(lVar2 + lVar3);
  if (lVar1 != 0) {
    lVar2 = lVar2 + lVar3;
    if (*(ulonglong *)(lVar2 + 8) < *(ulonglong *)(lVar1 + 0xe0)) {
      uVar4 = (ulonglong)(param_2 * 2 + 1);
      if ((*(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x48) + 0x60) + uVar4 * 8) != 0) ||
         (*(int *)(lVar2 + 0x18) == 0)) {
        if ((*(char *)param_1[1] == '\x01') &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1[2] + 0x48) + 0x48),
           *(ulonglong *)(*(longlong *)(lVar2 + lVar3) + 0xe0) <= *(ulonglong *)(lVar2 + 8 + lVar3))
           ) {
          plVar5 = (longlong *)(lVar2 + lVar3);
          if (*(char *)(*plVar5 + 0x74) == '\x04') {
            unaff_RDI = 0;
            FUN_147399c44(*(undefined8 *)(*plVar5 + 0xf0),0);
            if (*(ulonglong *)(*plVar5 + 0xe0) <= (ulonglong)plVar5[1]) goto LAB_1431ba39c;
            lVar2 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x48) + 0x48);
            lVar1 = *(longlong *)(lVar2 + lVar3);
            if (lVar1 != 0) {
              lVar2 = lVar2 + lVar3;
              unaff_RDI = 1;
              if (*(ulonglong *)(lVar2 + 8) < *(ulonglong *)(lVar1 + 0xe0)) {
                unaff_RDI = (ulonglong)
                            (*(int *)(lVar2 + 0x18) != 0 &&
                            *(longlong *)
                             (*(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x48) + 0x60) +
                             uVar4 * 8) == 0);
              }
              goto LAB_1431ba39c;
            }
            goto LAB_1431ba399;
          }
        }
        unaff_RDI = 0;
        goto LAB_1431ba39c;
      }
    }
  }
LAB_1431ba399:
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
LAB_1431ba39c:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1431ba44c FUN_1431ba44c body=812 status=ok
// SIG undefined FUN_1431ba44c(void)

longlong FUN_1431ba44c(undefined8 *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_c8 [47];
  char local_99;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined1 local_74 [20];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14ca813bc == '\x01') {
    lVar9 = *(longlong *)(param_1[8] + 0x490);
    if (param_1[2] == lVar9) {
      lVar10 = param_1[3];
    }
    else {
      param_1[2] = lVar9;
      lVar10 = 0;
      FUN_1473d9ecc(param_1,0);
      if (*(longlong *)param_1[7] != 0) {
        local_88 = lVar9 - 1;
        lVar10 = 0;
        local_99 = param_2;
        local_80 = lVar9;
        while( true ) {
          iVar2 = *(int *)(*(longlong *)param_1[7] + 8);
          iVar1 = iVar2 * 2 + 1;
          plVar11 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1[9] + 0x48));
          if ((param_2 == '\0') && ((local_80 == 0 || (local_88 < (ulonglong)plVar11[2])))) break;
          plVar12 = (longlong *)(*(longlong *)(param_1[9] + 0x48) + (longlong)(iVar2 * 2) * 0x20);
          if (((ulonglong)plVar11[1] < *(ulonglong *)(*plVar11 + 0xe0)) &&
             ((ulonglong)plVar12[1] < *(ulonglong *)(*plVar12 + 0xe0))) {
            FUN_1473a8158(*(longlong *)(param_1[9] + 0x58) + 0x18,
                          *(undefined8 *)(*(longlong *)(param_1[9] + 0x58) + 0x10));
            lVar9 = *(longlong *)(param_1[9] + 0x60);
            if ((*(longlong *)(lVar9 + 8 + (ulonglong)(uint)(iVar2 << 2) * 8) == 0) ||
               (*(longlong *)(lVar9 + 8 + (ulonglong)(uint)(iVar1 * 2) * 8) == 0)) break;
            uVar3 = *(ulonglong *)(lVar9 + (ulonglong)(uint)(iVar1 * 2) * 8);
            uVar4 = *(ulonglong *)(lVar9 + (ulonglong)(uint)(iVar2 << 2) * 8);
            lVar9 = *(longlong *)param_1[7];
            if (lVar9 != 0) {
              lVar5 = param_1[7];
              param_1[7] = lVar9;
              *(undefined4 *)(lVar9 + 8) = 0;
              if (lVar5 != 0) {
                FUN_1400020a8();
              }
            }
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            lVar9 = uVar3 - uVar4;
            if (uVar4 <= uVar3 && lVar9 != 0) {
              lVar10 = lVar9;
            }
          }
          else {
            local_98 = lVar10;
            FUN_1403936f2(local_74,1,1);
            uVar3 = plVar12[1];
            uVar4 = *(ulonglong *)(*plVar12 + 0xe0);
            uVar8 = plVar11[1];
            uVar6 = *(ulonglong *)(*plVar11 + 0xe0);
            if ((uVar6 <= uVar8) || (uVar4 <= uVar3)) {
              local_90 = uVar8;
              FUN_1473a4ba6(*param_1);
              uVar8 = local_90;
            }
            if ((uVar4 <= uVar3) && (*(ulonglong *)(*plVar12 + 0xe0) <= (ulonglong)plVar12[1])) {
              FUN_1473998ee(*(undefined8 *)(param_1[8] + 0x150),*plVar12,0x41200000);
            }
            if ((uVar6 <= uVar8) && (*(ulonglong *)(*plVar11 + 0xe0) <= (ulonglong)plVar11[1])) {
              FUN_1473998ee(*(undefined8 *)(param_1[8] + 0x150),*plVar11,0x41200000);
            }
            FUN_1402488ea(local_74);
            FUN_1473a8158(*(longlong *)(param_1[9] + 0x58) + 0x18,
                          *(undefined8 *)(*(longlong *)(param_1[9] + 0x58) + 0x10));
            lVar10 = *(longlong *)(param_1[9] + 0x60);
            uVar3 = *(ulonglong *)(lVar10 + (ulonglong)(uint)(iVar2 << 2) * 8);
            lVar9 = *(longlong *)(lVar10 + 8 + (ulonglong)(uint)(iVar2 << 2) * 8);
            uVar4 = *(ulonglong *)(lVar10 + (ulonglong)(uint)(iVar1 * 2) * 8);
            lVar5 = *(longlong *)(lVar10 + 8 + (ulonglong)(uint)(iVar1 * 2) * 8);
            lVar10 = *(longlong *)param_1[7];
            if (lVar10 != 0) {
              lVar7 = param_1[7];
              param_1[7] = lVar10;
              *(undefined4 *)(lVar10 + 8) = 0;
              if (lVar7 != 0) {
                FUN_1400020a8();
              }
            }
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            lVar10 = local_98;
            param_2 = local_99;
            if (((uVar3 < uVar4) && (lVar9 != 0)) && (lVar5 != 0)) {
              lVar10 = (local_98 - uVar3) + uVar4;
            }
          }
          if (*(longlong *)param_1[7] == 0) break;
        }
      }
      param_1[3] = lVar10;
    }
  }
  else {
    lVar10 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1431ba77a FUN_1431ba77a body=702 status=ok
// SIG undefined FUN_1431ba77a(void)

void FUN_1431ba77a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  cVar5 = FUN_1474121fd();
  if (cVar5 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca78bf8) {
      FUN_144b3d300(&DAT_14ca78bf8);
      if (DAT_14ca78bf8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gpucrash.collectionenable",1)
        ;
        if (plVar6 == (longlong *)0x0) {
          DAT_14ca78bf0 = 0;
        }
        else {
          DAT_14ca78bf0 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14ca78bf8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca78c08) {
      FUN_144b3d300(&DAT_14ca78c08);
      if (DAT_14ca78c08 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gpucrash.datadepth",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14ca78c00 = 0;
        }
        else {
          DAT_14ca78c00 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14ca78c08);
      }
    }
    if (DAT_14ca78bf0 == 0) {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(DAT_14ca78bf0 + 4) != 0;
    }
    *(bool *)(param_1 + 9) = bVar8;
    if (DAT_14ca78c00 != 0) {
      iVar1 = *(int *)(DAT_14ca78c00 + 4);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 != -1 && iVar1 < 0x801) goto LAB_1431ba837;
    }
    if (DAT_14ca78c0c == '\0') {
      DAT_14ca78c0c = '\x01';
    }
    *(undefined4 *)(param_1 + 0x14) = 0x800;
  }
LAB_1431ba837:
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  cVar5 = DAT_14ca84e99;
  *(char *)(param_1 + 10) = DAT_14ca84e99;
  cVar4 = DAT_14ca84e9a;
  *(char *)(param_1 + 0xb) = DAT_14ca84e9a;
  if (cVar4 == '\0') {
    if (cVar5 == '\0') {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        FUN_1473da452(param_1 + 0x38);
        DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
      }
      goto LAB_1431ba88f;
    }
    *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      goto LAB_1431ba88f;
    }
  }
  DAT_14c867d1c = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(param_1 + 0x58);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (longlong)&PTR_FUN_14a36ba30;
  plVar6[4] = lVar2;
  *(undefined2 *)(plVar6 + 5) = 0;
  plVar6[6] = -1;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar7 = 0;
  plVar6[0xb] = (longlong)puVar7;
  plVar6[10] = (longlong)puVar7;
  plVar6[0xc] = lVar3;
  plVar6[0xd] = 0;
  FUN_1473d9c6e(plVar6 + 4,8);
  *(longlong **)(param_1 + 0x18) = plVar6;
  (**(code **)(*plVar6 + 8))(plVar6);
LAB_1431ba88f:
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xb);
  return;
}



// FUNCTION 1431baa38 FUN_1431baa38 body=67 status=ok
// SIG undefined FUN_1431baa38(void)

void FUN_1431baa38(longlong *param_1)

{
  if (DAT_14c867d1c == '\x01') {
    while (param_1[4] != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431baa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1431baa7c FUN_1431baa7c body=116 status=ok
// SIG undefined FUN_1431baa7c(void)

void FUN_1431baa7c(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1431baa38();
  if ((*(char *)(param_1 + 10) == '\x01') && (*(char *)(param_1 + 8) == '\x01')) {
    FUN_1473a4ba6(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x120));
    DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
    FUN_1431da1f8(*(undefined8 *)(param_1 + 0x18));
    DAT_14ca84e99 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 1431baaf0 FUN_1431baaf0 body=190 status=ok
// SIG undefined FUN_1431baaf0(void)

void FUN_1431baaf0(uint param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = (**(code **)(*DAT_14ca83900 + 0x30))();
  if (((*(byte *)(*(longlong *)(lVar1 + 0x48) + 0x20fa) & 0x10) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + 0x20c8),
     *(int *)(lVar1 + 0x500) != *(int *)(lVar1 + 0x52c))) {
    lVar2 = lVar1 + 0x530;
    if (*(longlong *)(lVar1 + 0x538) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x538);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x540) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x4f8) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(lVar1 + 0x4f8) + (longlong)iVar3 * 0x20) == param_1) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (param_3 == (int *)0x0) {
            return;
          }
          if (param_2 == (undefined8 *)0x0) {
            return;
          }
          if (*(int *)(lVar2 + 0x10) < 2) {
            return;
          }
          *param_2 = *(undefined8 *)(lVar2 + 8);
          *param_3 = *(int *)(lVar2 + 0x10) * 2;
          return;
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1431babae FUN_1431babae body=1093 status=ok
// SIG undefined FUN_1431babae(void)

void FUN_1431babae(undefined4 param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_158 [40];
  undefined4 local_130;
  undefined8 *local_128;
  LARGE_INTEGER local_120;
  undefined4 local_118;
  longlong *local_110;
  LARGE_INTEGER local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  code *local_d8;
  LARGE_INTEGER *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  LARGE_INTEGER local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  QueryPerformanceCounter(&local_b8);
  LVar4 = local_b8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8.QuadPart = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  auVar10 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  QueryPerformanceCounter(&local_108);
  local_100 = 0xffffffffffffffff;
  if ((longlong)auVar10._0_8_ != 0x7fffffffffffffff) {
    dVar3 = (double)(longlong)auVar10._0_8_ / 10000000.0;
    if (dVar3 <= 0.0) {
      local_100 = 0;
    }
    else {
      dVar3 = dVar3 / DAT_14c83f418;
      local_100 = (ulonglong)dVar3;
      local_100 = (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)local_100 >> 0x3f |
                  local_100;
    }
  }
  FUN_147405cf0(&local_f8,1);
  if ((longlong)(int)uStack_f0 != 0) {
    plVar1 = local_f8 + (int)uStack_f0;
    plVar9 = local_f8;
    do {
      plVar2 = (longlong *)*plVar9;
      if (plVar2 != (longlong *)0x0) {
        if (*(char *)((longlong)plVar2 + 0xc) == '\x0e') {
          if ((DAT_14c7590b0 < *(uint *)(plVar2 + -4)) ||
             (DAT_14c7590b0 - *(uint *)(plVar2 + -4) <= param_2)) {
            FUN_1473da7b5(plVar2[2],&local_e8);
          }
        }
        else if (*(char *)((longlong)plVar2 + 0xc) == '\x0f') {
          if ((DAT_14c7590b0 < *(uint *)((longlong)plVar2 + 0xa4)) ||
             (DAT_14c7590b0 - *(uint *)((longlong)plVar2 + 0xa4) <= param_2)) {
            lVar5 = FUN_1473ba2da(plVar2,6);
            if (0 < *(int *)(lVar5 + 8)) {
              lVar5 = 0;
              do {
                plVar6 = (longlong *)FUN_1473ba2da(plVar2,6);
                FUN_1473da8b6(*(undefined8 *)(*plVar6 + lVar5 * 8),&local_e8);
                lVar5 = lVar5 + 1;
                lVar7 = FUN_1473ba2da(plVar2,6);
              } while (lVar5 < *(int *)(lVar7 + 8));
            }
            lVar5 = FUN_1473ba2da(plVar2,9);
            if (0 < *(int *)(lVar5 + 8)) {
              lVar5 = 0;
              do {
                plVar6 = (longlong *)FUN_1473ba2da(plVar2,9);
                FUN_1473da8b6(*(undefined8 *)(*plVar6 + lVar5 * 8),&local_e8);
                lVar5 = lVar5 + 1;
                lVar7 = FUN_1473ba2da(plVar2,9);
              } while (lVar5 < *(int *)(lVar7 + 8));
            }
            lVar5 = FUN_1473ba2da(plVar2,8);
            if (0 < *(int *)(lVar5 + 8)) {
              lVar5 = 0;
              do {
                plVar6 = (longlong *)FUN_1473ba2da(plVar2,8);
                FUN_1473da8b6(*(undefined8 *)(*plVar6 + lVar5 * 8),&local_e8);
                lVar5 = lVar5 + 1;
                lVar7 = FUN_1473ba2da(plVar2,8);
              } while (lVar5 < *(int *)(lVar7 + 8));
            }
            lVar5 = FUN_1473ba2da(plVar2);
            if (0 < *(int *)(lVar5 + 8)) {
              lVar5 = 0;
              do {
                plVar6 = (longlong *)FUN_1473ba2da(plVar2,7);
                FUN_1473da8b6(*(undefined8 *)(*plVar6 + lVar5 * 8),&local_e8);
                lVar5 = lVar5 + 1;
                lVar7 = FUN_1473ba2da(plVar2);
              } while (lVar5 < *(int *)(lVar7 + 8));
            }
          }
        }
        else if ((DAT_14c7590b0 < *(uint *)(plVar2 + 0x9b)) ||
                (DAT_14c7590b0 - *(uint *)(plVar2 + 0x9b) <= param_2)) {
          uVar8 = (**(code **)(*plVar2 + 8))(plVar2,0);
          FUN_1473da4b2(uVar8,&local_e8,&local_b8);
          uVar8 = (**(code **)(*plVar2 + 8))(plVar2,4);
          FUN_1473da5b3(uVar8,&local_e8,&local_b8);
          uVar8 = (**(code **)(*plVar2 + 8))(plVar2,2);
          FUN_1473da5b3(uVar8,&local_e8,&local_b8);
          uVar8 = (**(code **)(*plVar2 + 8))(plVar2,1);
          FUN_1473da5b3(uVar8,&local_e8,&local_b8);
          uVar8 = (**(code **)(*plVar2 + 8))(plVar2,3);
          FUN_1473da6b4(uVar8);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  local_d0 = &local_120;
  local_120 = LVar4;
  local_110 = &local_e8;
  local_128 = &local_c8;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = FUN_1431c16cc;
  local_130 = 0;
  local_118 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uStack_e0 & 0xffffffff,1);
  QueryPerformanceCounter(&local_120);
  FUN_1446fc3c5(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1473e1e72(&local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431baff4 FUN_1431baff4 body=41 status=ok
// SIG undefined FUN_1431baff4(void)

void FUN_1431baff4(void)

{
  DAT_14ca78c58 = 0;
  if (DAT_14ca78c50 != 0) {
    FUN_1400020a8();
  }
  FUN_146196dc6();
  return;
}



// FUNCTION 1431bb042 FUN_1431bb042 body=4424 status=ok
// SIG undefined FUN_1431bb042(void)

longlong *
FUN_1431bb042(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  uint local_128;
  uint local_120;
  undefined1 local_118;
  uint local_110;
  undefined4 local_108;
  uint local_104;
  longlong *local_100;
  undefined8 *local_f8;
  uint local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  uint local_cc;
  ulonglong local_c8;
  int *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  ulonglong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_100 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 8) = (int)param_3[0x18];
  local_c0 = (int *)((longlong)param_1 + 0x44);
  local_108 = 0;
  local_f8 = param_2;
  memset(local_c0,0,0x8c);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  cVar1 = *(char *)(param_4 + 0x378);
  *(undefined4 *)(param_1 + 3) = 0;
  if (cVar1 != '\0') {
    FUN_1473e348c(local_100);
  }
  local_c8 = 0xff00000000;
  local_ec = *(uint *)(param_4 + 0x3a0);
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8 = param_4;
  if (0 < (int)param_3[0x18]) {
    lVar13 = 0;
    local_108 = 0;
    plVar11 = param_3;
    do {
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar11 + 0x30))();
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        param_1[lVar13 + 9] = plVar6[0x13];
        local_108 = (undefined4)plVar11[1];
        lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
        if ((*(char *)(lVar8 + 0x32) == '\0') ||
           (lVar8 = (**(code **)(*plVar6 + 8))(plVar6), *(char *)(lVar8 + 0x32) == '\x01')) {
          uVar4 = 1;
          uVar3 = *(uint *)((longlong)plVar11 + 0xc);
          if (*(uint *)((longlong)plVar11 + 0xc) == 0xffffffff) {
            lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
            cVar1 = *(char *)(lVar8 + 0x32);
            local_104 = 0;
            if (cVar1 == '\x01') {
              lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
              uVar4 = (uint)*(ushort *)(lVar8 + 0x2e);
              uVar3 = local_104;
            }
            else {
              uVar3 = local_104;
              if (cVar1 == '\x03') {
                uVar4 = 6;
              }
              else if (cVar1 == '\x04') {
                lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
                uVar4 = (uint)*(ushort *)(lVar8 + 0x2e) * 6;
                uVar3 = local_104;
              }
            }
          }
          local_104 = uVar3;
          lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
          if (*(char *)(lVar8 + 0x32) == '\x01' && *(char *)(param_4 + 0x382) == '\0') {
            local_ec = uVar4;
          }
          local_cc = uVar4;
          puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          *puVar9 = local_f8;
          *(undefined1 *)(puVar9 + 2) = 0;
          *(undefined1 *)(puVar9 + 5) = 0;
          uVar4 = 0xffffffff;
          uVar12 = 0xff00000000;
          if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
            uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
            uVar12 = 0x400000000;
          }
          puVar9[1] = uVar4 | uVar12;
          iVar5 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
            FUN_1473de0ae(local_100,iVar5);
          }
          *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
          iVar5 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1456bd870(param_1,iVar5);
          }
          *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
          uVar4 = *(uint *)(plVar6 + 0x14);
          lVar8 = plVar6[0x15];
          uVar2 = *(undefined1 *)(lVar7 + 0x33);
          lVar7 = plVar6[0x20];
          lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
          uVar14 = 0x7fffffff;
          if ((ulonglong)*(byte *)(lVar10 + 0x32) < 5) {
            uVar14 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar10 + 0x32) * 4);
          }
          local_110 = uVar4 & 0x80 | 0x10;
          local_120 = local_cc;
          local_128 = local_104;
          local_138 = local_108;
          local_118 = 1;
          local_130 = 1;
          local_148 = uVar2;
          local_140 = (int)lVar8;
          FUN_1431b8c8e(puVar9,plVar6[0x13],uVar14,(int)lVar7);
          param_1 = local_e8;
          param_4 = local_d8;
          param_3 = local_e0;
        }
        else {
          lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
          if ((*(char *)(lVar8 + 0x32) == '\x03') ||
             (lVar8 = (**(code **)(*plVar6 + 8))(plVar6), *(char *)(lVar8 + 0x32) == '\x04')) {
            puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            *puVar9 = local_f8;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined1 *)(puVar9 + 5) = 0;
            uVar4 = 0xffffffff;
            uVar12 = 0xff00000000;
            if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
              uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
              uVar12 = 0x400000000;
            }
            puVar9[1] = uVar4 | uVar12;
            iVar5 = (int)param_1[3];
            *(uint *)(param_1 + 3) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
              FUN_1473de0ae(local_100,iVar5);
            }
            *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
            iVar5 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
              FUN_1456bd870(param_1,iVar5);
            }
            *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
            uVar4 = *(uint *)(plVar6 + 0x14);
            local_128 = *(uint *)((longlong)plVar11 + 0xc);
            local_140 = (undefined4)plVar6[0x15];
            local_148 = *(undefined1 *)(lVar7 + 0x33);
            uVar14 = (undefined4)plVar6[0x20];
            lVar8 = plVar6[0x13];
            local_120 = 1;
            uVar15 = 1;
          }
          else {
            lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
            if (*(char *)(lVar8 + 0x32) != '\x02') goto LAB_1431bb445;
            puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            *puVar9 = local_f8;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined1 *)(puVar9 + 5) = 0;
            uVar4 = 0xffffffff;
            uVar12 = 0xff00000000;
            if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
              uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
              uVar12 = 0x400000000;
            }
            puVar9[1] = uVar4 | uVar12;
            iVar5 = (int)param_1[3];
            *(uint *)(param_1 + 3) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
              FUN_1473de0ae(local_100,iVar5);
            }
            *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
            iVar5 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
              FUN_1456bd870(param_1,iVar5);
            }
            *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
            uVar4 = *(uint *)(plVar6 + 0x14);
            local_140 = (undefined4)plVar6[0x15];
            local_148 = *(undefined1 *)(lVar7 + 0x33);
            uVar14 = (undefined4)plVar6[0x20];
            lVar8 = plVar6[0x13];
            local_120 = (uint)*(ushort *)(lVar7 + 0x2c);
            local_128 = 0;
            uVar15 = 5;
          }
          local_110 = uVar4 & 0x80 | 0x10;
          local_118 = 1;
          local_130 = 1;
          local_138 = local_108;
          FUN_1431b8c8e(puVar9,lVar8,uVar15,uVar14);
          param_3 = local_e0;
        }
LAB_1431bb445:
        *local_c0 = *local_c0 + 1;
        if ((((char)param_3[0x31] == '\x01') && (*(char *)(param_4 + 0x37c) != '\0')) &&
           (*(int *)(param_4 + 0x6c + lVar13 * 8) != 0)) {
          plVar6 = (longlong *)(**(code **)(*(longlong *)plVar11[0x19] + 0x30))();
          param_1[lVar13 + 0x11] = plVar6[0x13];
          lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
          if ((*(char *)(lVar7 + 0x32) == '\0') ||
             (lVar7 = (**(code **)(*plVar6 + 8))(plVar6), *(char *)(lVar7 + 0x32) == '\x01')) {
            puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            *puVar9 = local_f8;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined1 *)(puVar9 + 5) = 0;
            uVar4 = 0xffffffff;
            uVar12 = 0xff00000000;
            if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
              uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
              uVar12 = 0x400000000;
            }
            puVar9[1] = uVar4 | uVar12;
            iVar5 = (int)param_1[3];
            *(uint *)(param_1 + 3) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
              FUN_1473de0ae(local_100,iVar5);
            }
            *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
            iVar5 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
              FUN_1456bd870(param_1,iVar5);
            }
            *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
            lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
            cVar1 = *(char *)(lVar7 + 0x32);
            if (cVar1 == '\x01') {
              lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
              local_104 = (uint)*(ushort *)(lVar7 + 0x2e);
            }
            else if (cVar1 == '\x03') {
              local_104 = 6;
            }
            else if (cVar1 == '\x04') {
              lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
              local_104 = (uint)*(ushort *)(lVar7 + 0x2e) * 6;
            }
            else {
              local_104 = 1;
            }
            uVar4 = *(uint *)((longlong)plVar11 + 0xc);
            if ((int)*(uint *)((longlong)plVar11 + 0xc) < 1) {
              uVar4 = 0;
            }
            lVar7 = plVar6[0x15];
            lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
            uVar2 = *(undefined1 *)(lVar8 + 0x33);
            lVar8 = plVar6[0x20];
            lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
            uVar14 = 0x7fffffff;
            if ((ulonglong)*(byte *)(lVar10 + 0x32) < 5) {
              uVar14 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar10 + 0x32) * 4);
            }
            local_120 = local_104;
            local_138 = local_108;
            local_110 = 0;
            local_118 = 1;
            local_130 = 1;
            local_148 = uVar2;
            local_140 = (int)lVar7;
            local_128 = uVar4;
            FUN_1431b8c8e(puVar9,plVar6[0x13],uVar14,(int)lVar8);
            param_1 = local_e8;
            param_4 = local_d8;
            param_3 = local_e0;
          }
        }
      }
      lVar13 = lVar13 + 1;
      plVar11 = plVar11 + 3;
    } while (lVar13 < (int)param_3[0x18]);
  }
  if (*(char *)(param_4 + 0x37b) != '\0') {
    plVar11 = (longlong *)(**(code **)(*(longlong *)param_3[0x32] + 0x30))();
    (**(code **)(*plVar11 + 8))(plVar11);
    param_1[0x19] = plVar11[0x13];
    lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
    if (*(char *)(lVar13 + 0x33) != '\v') {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    param_1[4] = plVar11[0x10];
    lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
    if ((*(char *)(lVar13 + 0x32) != '\0') &&
       (lVar13 = (**(code **)(*plVar11 + 8))(plVar11), *(char *)(lVar13 + 0x32) != '\x01')) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    if ((*local_c0 == 0) &&
       (lVar13 = (**(code **)(*plVar11 + 8))(plVar11), *(char *)(lVar13 + 0x32) == '\x03')) {
      puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar9 = local_f8;
      *(undefined1 *)(puVar9 + 2) = 0;
      *(undefined1 *)(puVar9 + 5) = 0;
      uVar4 = 0xffffffff;
      uVar12 = 0xff00000000;
      if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
        uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
        uVar12 = 0x400000000;
      }
      puVar9[1] = uVar4 | uVar12;
      iVar5 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
        FUN_1473de0ae(local_100,iVar5);
      }
      *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1456bd870(param_1,iVar5);
      }
      *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
      lVar13 = plVar11[0x15];
      lVar7 = (**(code **)(*plVar11 + 8))();
      local_148 = *(undefined1 *)(lVar7 + 0x33);
      local_110 = 0;
      local_128 = 0;
      local_138 = local_108;
      local_118 = 1;
      local_120 = 6;
      local_130 = 1;
      local_140 = (int)lVar13;
      FUN_1431b8c8e(puVar9,plVar11[0x13],5,(int)plVar11[0x20]);
      local_ec = 6;
      param_3 = local_e0;
    }
    else {
      lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
      if ((*(char *)(lVar13 + 0x32) == '\0') ||
         (lVar13 = (**(code **)(*plVar11 + 8))(plVar11), *(char *)(lVar13 + 0x32) == '\x01')) {
        puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        *puVar9 = local_f8;
        *(undefined1 *)(puVar9 + 2) = 0;
        *(undefined1 *)(puVar9 + 5) = 0;
        uVar4 = 0xffffffff;
        uVar12 = 0xff00000000;
        if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
          uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
          uVar12 = 0x400000000;
        }
        puVar9[1] = uVar4 | uVar12;
        iVar5 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1473de0ae(local_100,iVar5);
        }
        *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1456bd870(param_1,iVar5);
        }
        *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
        lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
        cVar1 = *(char *)(lVar13 + 0x32);
        if (cVar1 == '\x01') {
          lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
          uVar4 = (uint)*(ushort *)(lVar13 + 0x2e);
        }
        else if (cVar1 == '\x03') {
          uVar4 = 6;
        }
        else if (cVar1 == '\x04') {
          lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
          uVar4 = (uint)*(ushort *)(lVar13 + 0x2e) * 6;
        }
        else {
          uVar4 = 1;
        }
        lVar13 = plVar11[0x15];
        lVar7 = (**(code **)(*plVar11 + 8))(plVar11);
        uVar2 = *(undefined1 *)(lVar7 + 0x33);
        lVar7 = plVar11[0x20];
        lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
        uVar14 = 0x7fffffff;
        if ((ulonglong)*(byte *)(lVar8 + 0x32) < 5) {
          uVar14 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar8 + 0x32) * 4);
        }
        local_110 = 0;
        local_128 = 0;
        local_138 = local_108;
        local_118 = 1;
        local_130 = 1;
        local_148 = uVar2;
        local_140 = (int)lVar13;
        local_120 = uVar4;
        FUN_1431b8c8e(puVar9,plVar11[0x13],uVar14,(int)lVar7);
        param_1 = local_e8;
        param_3 = local_e0;
      }
      else {
        lVar13 = plVar11[0xf];
        iVar5 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1473de0ae(local_100,iVar5);
        }
        *(longlong *)(*local_100 + (longlong)iVar5 * 8) = lVar13;
      }
    }
    param_4 = local_d8;
    if ((*(char *)(local_d8 + 0x37d) != '\0') && (*(int *)(local_d8 + 0xac) != 0)) {
      plVar11 = (longlong *)(**(code **)(*(longlong *)param_3[0x34] + 0x30))();
      param_1[0x1a] = plVar11[0x13];
      lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
      if ((*(char *)(lVar13 + 0x32) == '\0') ||
         (lVar13 = (**(code **)(*plVar11 + 8))(plVar11), param_3 = local_e0,
         *(char *)(lVar13 + 0x32) == '\x01')) {
        puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        *puVar9 = local_f8;
        *(undefined1 *)(puVar9 + 2) = 0;
        *(undefined1 *)(puVar9 + 5) = 0;
        uVar4 = 0xffffffff;
        uVar12 = 0xff00000000;
        if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
          uVar4 = FUN_143192236(0xff00000000,local_f8[0xd6] + 0x1d8);
          uVar12 = 0x400000000;
        }
        puVar9[1] = uVar4 | uVar12;
        iVar5 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1473de0ae(local_100,iVar5);
        }
        *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1456bd870(param_1,iVar5);
        }
        *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
        lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
        cVar1 = *(char *)(lVar13 + 0x32);
        if (cVar1 == '\x01') {
          lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
          uVar4 = (uint)*(ushort *)(lVar13 + 0x2e);
        }
        else if (cVar1 == '\x03') {
          uVar4 = 6;
        }
        else if (cVar1 == '\x04') {
          lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
          uVar4 = (uint)*(ushort *)(lVar13 + 0x2e) * 6;
        }
        else {
          uVar4 = 1;
        }
        lVar13 = plVar11[0x15];
        lVar7 = (**(code **)(*plVar11 + 8))(plVar11);
        uVar2 = *(undefined1 *)(lVar7 + 0x33);
        lVar7 = plVar11[0x20];
        lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
        uVar14 = 0x7fffffff;
        if ((ulonglong)*(byte *)(lVar8 + 0x32) < 5) {
          uVar14 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar8 + 0x32) * 4);
        }
        local_110 = 0;
        local_128 = 0;
        local_138 = local_108;
        local_118 = 1;
        local_130 = 1;
        local_148 = uVar2;
        local_140 = (int)lVar13;
        local_120 = uVar4;
        FUN_1431b8c8e(puVar9,plVar11[0x13],uVar14,(int)lVar7);
        param_1 = local_e8;
        param_4 = local_d8;
        param_3 = local_e0;
      }
    }
  }
  if ((DAT_14ca84f34 == '\x01') && (*(char *)(param_4 + 0x37e) != '\0')) {
    plVar11 = (longlong *)(**(code **)(*(longlong *)param_3[0x37] + 0x30))();
    param_1[0x1b] = plVar11[0x13];
    lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
    if (*(char *)(lVar13 + 0x32) != '\0') {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar9 = local_f8;
    *(undefined1 *)(puVar9 + 2) = 0;
    *(undefined1 *)(puVar9 + 5) = 0;
    uVar12 = 0xffffffff;
    if (*(char *)(local_f8[0xd6] + 8) == '\x01') {
      uVar4 = FUN_143192236(local_f8,local_f8[0xd6] + 0x1d8);
      uVar12 = (ulonglong)uVar4;
      local_c8 = 0x400000000;
    }
    puVar9[1] = uVar12 | local_c8;
    iVar5 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
      FUN_1473de0ae(local_100,iVar5);
    }
    *(undefined8 **)(param_1[2] + (longlong)iVar5 * 8) = puVar9;
    iVar5 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_1456bd870(param_1,iVar5);
    }
    *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar9;
    lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
    cVar1 = *(char *)(lVar13 + 0x32);
    if (cVar1 == '\x01') {
      lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
      uVar4 = (uint)*(ushort *)(lVar13 + 0x2e);
    }
    else if (cVar1 == '\x03') {
      uVar4 = 6;
    }
    else if (cVar1 == '\x04') {
      lVar13 = (**(code **)(*plVar11 + 8))(plVar11);
      uVar4 = (uint)*(ushort *)(lVar13 + 0x2e) * 6;
    }
    else {
      uVar4 = 1;
    }
    lVar13 = plVar11[0x15];
    lVar7 = (**(code **)(*plVar11 + 8))(plVar11);
    uVar2 = *(undefined1 *)(lVar7 + 0x33);
    lVar7 = plVar11[0x20];
    lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
    uVar14 = 0x7fffffff;
    if ((ulonglong)*(byte *)(lVar8 + 0x32) < 5) {
      uVar14 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar8 + 0x32) * 4);
    }
    local_110 = 0;
    local_128 = 0;
    local_138 = local_108;
    local_118 = 1;
    local_130 = 1;
    local_148 = uVar2;
    local_140 = (int)lVar13;
    local_120 = uVar4;
    FUN_1431b8c8e(puVar9,plVar11[0x13],uVar14,(int)lVar7);
    param_1 = local_e8;
  }
  local_78 = 0;
  uStack_70 = 0;
  iVar5 = (int)param_1[3];
  if (-1 < iVar5) {
    if (iVar5 != 0) {
      FUN_1473e34e2(&local_78);
      lVar13 = local_e8[3];
      if ((longlong)(int)lVar13 != 0) {
        lVar7 = local_e8[2];
        lVar8 = 0;
        do {
          uVar12 = uStack_70;
          lVar10 = *(longlong *)(lVar7 + lVar8);
          lVar16 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_1473e3538(&local_78,uVar12 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar16 * 8) = *(undefined8 *)(lVar10 + 0x10);
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar13 * 8 != lVar8);
      }
    }
    lVar13 = local_d8;
    local_b8 = 0x25;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    local_94 = 0;
    uStack_a0 = (undefined4)*(undefined8 *)(param_5 + 0x3a8);
    uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 0x3a8) >> 0x20);
    uStack_98 = (int)uStack_70;
    uStack_90 = (undefined4)local_78;
    uStack_8c = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_88 = *(undefined4 *)(local_d8 + 0x398);
    local_84 = *(undefined4 *)(local_d8 + 0x39c);
    local_80 = (ulonglong)local_ec;
    iVar5 = (*DAT_14ca78fa8)(*local_f8,&local_b8,0,param_1 + 5);
    if (iVar5 < 0) {
      FUN_1431b4552(iVar5);
    }
    plVar11 = local_e8;
    local_e8[6] = 0;
    *(undefined4 *)(local_e8 + 7) = *(undefined4 *)(lVar13 + 0x398);
    *(undefined4 *)((longlong)local_e8 + 0x3c) = *(undefined4 *)(lVar13 + 0x39c);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 1431bc18c FUN_1431bc18c body=43 status=ok
// SIG undefined FUN_1431bc18c(void)

void FUN_1431bc18c(longlong param_1,longlong param_2)

{
  FUN_1473a8b5a(param_2 + 0x590,7,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1431bc1b8 FUN_1431bc1b8 body=1342 status=ok
// SIG undefined FUN_1431bc1b8(void)

void FUN_1431bc1b8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
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
  code *local_68;
  ulonglong uStack_60;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x120) == 0) ||
     (*(char *)(param_1 + 0x135) == *(char *)(*(longlong *)(param_1 + 0x120) + 0x88)))
  goto LAB_1431bc2d3;
  FUN_14080c2b4();
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1431bc226;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1431bc608;
      goto LAB_1431bc22f;
    }
LAB_1431bc608:
    uVar4 = *(undefined1 *)(param_1 + 0x119);
    local_68 = (code *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_68,5);
    local_68 = (code *)0x0;
    uStack_60 = 0;
    FUN_1473dcafc(param_1,&local_68);
    *(undefined1 *)(param_1 + 0x119) = uVar4;
    FUN_1473db96e(param_1,&local_68);
  }
  else {
LAB_1431bc226:
    if (iVar7 == 0x10) goto LAB_1431bc608;
LAB_1431bc22f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_1431bc608;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1431bc608;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1431bc395;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1431c0c11);
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
LAB_1431bc395:
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
            goto LAB_1431bc415;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1431bc415:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a36bd58;
      puVar17[0x15] = param_1;
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
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
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
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
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
      local_78 = &local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a36bd20;
      local_68 = FUN_1431c189a;
      local_40 = param_1;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateVsync",&DAT_14ca78d34);
      if (local_68 != (code *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_14080c2b4();
LAB_1431bc2d3:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431bc6f8 FUN_1431bc6f8 body=4823 status=ok
// SIG undefined FUN_1431bc6f8(void)

ulonglong FUN_1431bc6f8(longlong *param_1,undefined ***param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined4 uVar5;
  undefined1 auVar6 [8];
  undefined1 auVar7 [4];
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  byte bVar23;
  int iVar24;
  wchar_t *_Dest;
  undefined8 *puVar25;
  undefined1 auVar26 [8];
  bool bVar27;
  float fVar28;
  undefined1 auStack_808 [32];
  undefined8 *local_7e8;
  undefined4 local_7e0;
  undefined8 *local_7d8;
  undefined4 local_7d0;
  int local_7c0;
  int local_7bc;
  longlong local_7b8;
  longlong local_7b0;
  uint local_7a4;
  uint local_7a0;
  uint local_79c;
  uint local_798;
  uint local_794;
  longlong local_790;
  longlong local_788;
  undefined4 local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  code *local_768;
  undefined ***local_758;
  undefined **local_748;
  undefined8 local_740;
  undefined1 local_738 [11];
  longlong lStack_72d;
  undefined4 uStack_725;
  byte bStack_721;
  longlong local_720;
  longlong local_718;
  undefined4 local_710;
  undefined2 local_70c;
  undefined1 local_660 [16];
  undefined1 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  uint local_630;
  undefined4 uStack_62c;
  undefined3 uStack_628;
  undefined8 local_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  uint uStack_604;
  uint uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  uint local_5d8;
  undefined4 local_5d4;
  int local_5c0;
  uint local_580;
  undefined1 local_578 [96];
  undefined8 local_518;
  undefined8 local_510;
  undefined1 local_508 [16];
  undefined8 local_4f8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined2 local_4a8;
  undefined1 local_4a6;
  byte local_4a5;
  undefined8 local_498;
  longlong lStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_318;
  longlong lStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined8 local_2ac;
  undefined8 uStack_2a4;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined5 uStack_284;
  undefined3 uStack_27f;
  undefined5 uStack_27c;
  undefined8 uStack_277;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_250 [7];
  undefined1 auStack_249 [4];
  uint uStack_245;
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  undefined1 local_238 [8];
  longlong lStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  longlong lStack_185;
  undefined1 local_178 [4];
  byte local_174;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_808;
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x135) = param_6;
  UNLOCK();
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    lVar11 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(char *)(lVar11 + 0x80) != '\0') goto LAB_1431bc8cb;
    if ((DAT_14c760c6c != 1) || (param_1[0x1c] == 0)) {
      if ((longlong)*(int *)((longlong)param_1 + 0x11c) != -1) {
        plVar19 = param_1 + 3;
        plVar18 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar18 = plVar19;
        }
        lVar11 = FUN_1473a8308(param_3 + 0x108,
                               *(undefined8 *)(plVar18[*(int *)((longlong)param_1 + 0x11c)] + 0x98))
        ;
        if (lVar11 == 0) {
          uVar22 = 0;
          if ((~*(ulonglong *)(param_1[2] + 0x20f8) & 0x41004000000) == 0) {
            plVar18 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar18 = plVar19;
            }
            lVar11 = FUN_1473a8308(param_2[0x25] + 0xc,
                                   *(undefined8 *)
                                    (plVar18[*(int *)((longlong)param_1 + 0x11c)] + 0x98));
            uVar22 = 0;
            if (lVar11 != 0) goto LAB_1431bc814;
          }
        }
        else {
LAB_1431bc814:
          uVar22 = *(undefined4 *)(lVar11 + 0xc);
        }
        local_7e8 = &local_620;
        local_620._0_4_ = 1;
        local_620._4_4_ = 0;
        uStack_618 = 0xffffffff;
        uStack_614 = 0;
        local_610 = 0xffffffff;
        plVar18 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar18 = plVar19;
        }
        FUN_147397183(param_3,*(undefined8 *)(plVar18[*(int *)((longlong)param_1 + 0x11c)] + 0x98),
                      uVar22,0x3b9acdea);
        local_620._0_4_ = 1;
        local_620._4_4_ = 1;
        uStack_618 = 1;
        uStack_614 = 0;
        local_610 = 0;
        uStack_60c = 0;
        uStack_608 = 0;
        uStack_604 = 0;
        plVar18 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar18 = plVar19;
        }
        FUN_14739c216(param_3 + 0x108,
                      *(undefined8 *)(plVar18[*(int *)((longlong)param_1 + 0x11c)] + 0x98),
                      &local_620);
        if (CONCAT44(uStack_60c,local_610) != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1431bc8cb;
    }
    bVar27 = true;
    if (param_1[0x24] != 0) {
      uVar10 = FUN_1431b5cb8(param_1[0x24],param_1 + 0x27);
      if (-1 < (int)uVar10) {
        *(uint *)((longlong)param_1 + 0x11c) = uVar10;
        piVar13 = (int *)param_1[0x24];
        local_7c0 = *piVar13;
        local_798 = piVar13[0xe];
        uVar2 = *(uint *)(param_1 + 0x22);
        local_7b8 = CONCAT44(local_7b8._4_4_,uVar2);
        local_7a0 = local_798;
        if (uVar2 < local_798) {
          local_7a0 = uVar2;
        }
        local_79c = piVar13[0xf];
        local_794 = *(uint *)((longlong)param_1 + 0x114);
        local_7a4 = local_79c;
        if (local_794 < local_79c) {
          local_7a4 = local_794;
        }
        local_7b0 = param_1[0x1c];
        plVar19 = param_1 + 3;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar19 = (longlong *)param_1[9];
        }
        local_790 = plVar19[uVar10];
        bVar27 = local_7c0 == 1;
        iVar9 = 0;
        lVar12 = FUN_147394f86(param_3 + 0x108,local_7b0,0,0);
        lVar11 = local_7b0;
        local_7bc = (uint)bVar27 * 5 + 2;
        iVar24 = bVar27 + 5;
        local_5e8 = 0;
        local_5e0 = 0x100000000;
        local_518 = 0;
        local_510 = 0x200000000;
        local_4d0 = 0;
        local_4c8 = 0x200000000;
        local_508 = (undefined1  [16])0x0;
        local_4f8 = 0;
        if (lVar12 == 0) {
LAB_1431bcd9d:
          _local_238 = pmovsxbq((undefined1  [16])0x0,0x101);
          local_7e8 = (undefined8 *)local_238;
          local_228 = 0xffffffff;
          FUN_147396818(&local_620,*(undefined8 *)(local_7b0 + 0x98),iVar9,iVar24);
          FUN_1473bd608(param_3 + 0x108,lVar11,iVar24,0);
        }
        else {
          if (*(int *)(lVar12 + 0x18) == 0) {
            piVar13 = (int *)(lVar12 + 0xc);
          }
          else {
            piVar13 = *(int **)(lVar12 + 0x10);
          }
          iVar9 = *piVar13;
          if (iVar9 != iVar24) goto LAB_1431bcd9d;
        }
        lVar11 = local_790;
        local_7e8 = (undefined8 *)local_238;
        lStack_230 = 1;
        local_238 = (undefined1  [8])0x1;
        local_228 = 0xffffffff;
        FUN_147396818(&local_620,*(undefined8 *)(local_790 + 0x98),0x3b9acdea,local_7bc);
        FUN_147397068(&local_620,param_3);
        FUN_1473945b6(&local_620);
        if (local_7c0 == 1) {
          local_7d8 = &local_620;
          if (local_798 < (uint)local_7b8 || local_79c < local_794) {
            uStack_60c = 0;
            uStack_608 = 0;
            uStack_5f4 = 0;
            local_620._4_4_ = 0;
            uStack_618 = 0;
            local_610 = 0;
            uStack_604 = (uint)local_7b8;
            uStack_600 = local_794;
            uStack_5fc = 1;
            uStack_5f8 = 1;
            local_620._0_4_ = 1;
            uStack_614 = 1;
            local_5e8 = 0;
            local_5e0 = (ulonglong)local_7a0 << 0x20;
            local_5d8 = local_7a4;
            local_5d4 = 1;
            uStack_5f0._0_4_ = 0;
            uStack_5f0._4_4_ = 1;
            local_7d0 = 1;
            local_7e0 = 1;
            local_7e8 = (undefined8 *)CONCAT44(local_7e8._4_4_,7);
            (*DAT_14ca79080)(*(undefined8 *)(param_3 + 0x88),*(undefined8 *)(local_7b0 + 0x98),6,
                             *(undefined8 *)(lVar11 + 0x98));
          }
          else {
            local_620._4_4_ = 0;
            uStack_618 = 0;
            local_610 = 0;
            uStack_60c = 0;
            uStack_608 = 0;
            uStack_600 = 0;
            uStack_5fc = 0;
            uStack_5f4 = 0;
            uStack_5f0._0_4_ = 0;
            uStack_5f0._4_4_ = 0;
            local_5e8 = CONCAT44(local_794,(uint)local_7b8);
            local_5e0 = CONCAT44(local_5e0._4_4_,1);
            local_620._0_4_ = 1;
            uStack_614 = 1;
            uStack_604 = 1;
            uStack_5f8 = 1;
            local_7e0 = 1;
            local_7e8 = (undefined8 *)CONCAT44(local_7e8._4_4_,7);
            (*DAT_14ca79078)(*(undefined8 *)(param_3 + 0x88),*(undefined8 *)(local_7b0 + 0x98),6,
                             *(undefined8 *)(lVar11 + 0x98));
          }
        }
        else {
          uStack_2d0 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_308 = 0;
          uStack_300 = 0;
          local_318 = 0;
          lStack_310 = 0;
          local_2c8 = 0;
          local_2bc = 0;
          uStack_2b4 = 0;
          local_2ac = 0;
          uStack_2a4 = 0;
          local_29c = 0;
          uStack_294 = 0;
          local_28c = 0;
          uStack_284 = 0;
          uStack_27f = 0;
          uStack_27c = 0;
          uStack_277 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_258 = 0;
          local_250._0_4_ = 1;
          stack0xfffffffffffffdb8 = 0;
          local_2e8 = DAT_14c9c0d50;
          uStack_2e0 = DAT_14c9c0db0;
          local_2d8 = DAT_14c9c0d98;
          FUN_140048e76(&local_620,param_2);
          lVar12 = 0x15;
          do {
            *(undefined8 *)(local_738 + lVar12 + 3) = 0;
            *(undefined8 *)((longlong)&lStack_72d + lVar12) = 0;
            *(undefined4 *)((longlong)&uStack_725 + lVar12) = 0xffffffff;
            (&bStack_721 + lVar12)[0] = 0;
            (&bStack_721 + lVar12)[1] = 0;
            lVar12 = lVar12 + 0x18;
          } while (lVar12 != 0xd5);
          local_64c = 0;
          local_660 = (undefined1  [16])0x0;
          local_650 = 0;
          local_648 = 0xffffffff;
          uStack_644 = 0xffffffff;
          uStack_640 = 0xffffffff;
          uStack_63c = 0xffffffff;
          local_638 = 0;
          local_630 = local_630 & 0xffffff00;
          uStack_62c = 0;
          uStack_628 = 0;
          local_720 = lVar11;
          local_718 = 0;
          local_710 = 0xffffffff;
          local_70c = 0x100;
          _Dest = (wchar_t *)
                  (CONCAT44(local_620._4_4_,(undefined4)local_620) + 1U & 0xfffffffffffffffe);
          pwVar15 = _Dest + 0x11;
          if ((wchar_t *)CONCAT44(uStack_614,uStack_618) < pwVar15) {
            FUN_140023dd8(&local_620,0x24);
            _Dest = (wchar_t *)
                    (CONCAT44(local_620._4_4_,(undefined4)local_620) + 1U & 0xfffffffffffffffe);
            pwVar15 = _Dest + 0x11;
          }
          local_620._0_4_ = SUB84(pwVar15,0);
          local_620._4_4_ = (undefined4)((ulonglong)pwVar15 >> 0x20);
          wcscpy(_Dest,L"SurfaceTransform");
          puVar25 = (undefined8 *)
                    (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar25 + 0x23;
          if ((undefined8 *)CONCAT44(uStack_614,uStack_618) < puVar16) {
            FUN_140023dd8(&local_620,0x120);
            puVar25 = (undefined8 *)
                      (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar25 + 0x23;
          }
          local_620._0_4_ = SUB84(puVar16,0);
          local_620._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
          local_5c0 = local_5c0 + 1;
          *(undefined8 **)CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0) = puVar25;
          uStack_5f0 = puVar25 + 1;
          puVar25[1] = 0;
          *puVar25 = &PTR_FUN_14a217b50;
          memcpy(puVar25 + 2,&local_720,0xe8);
          puVar25[0x1f] = 0;
          puVar25[0x20] = CONCAT44(uStack_62c,local_630);
          *(uint *)((longlong)puVar25 + 0x107) = CONCAT31(uStack_628,uStack_62c._3_1_);
          puVar25[0x22] = _Dest;
          lVar11 = 0x11;
          do {
            *(undefined8 *)(auStack_249 + lVar11) = 0;
            *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
            *(undefined2 *)(local_238 + lVar11 + -1) = 0;
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != 0xd1);
          local_178 = (undefined1  [4])0x0;
          local_174 = 0;
          lVar11 = 0xd9;
          do {
            *(undefined8 *)(auStack_249 + lVar11) = 0;
            *(undefined8 *)(auStack_241 + lVar11) = 0xffffffff00000000;
            *(undefined2 *)(local_238 + lVar11 + -1) = 0;
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != 0x199);
          local_b0 = 0;
          local_80 = 0;
          local_78 = local_78 & 0xff;
          local_a8 = (undefined1  [16])0x0;
          local_98 = (undefined1  [16])0x0;
          local_88 = local_88 & 0xff00;
          lVar11 = 0x15;
          do {
            if (*(longlong *)(local_738 + lVar11 + 3) == 0) break;
            *(longlong *)(local_250 + lVar11 + 3) = *(longlong *)(local_738 + lVar11 + 3);
            bVar1 = *(byte *)((longlong)&local_720 + lVar11);
            bVar23 = bVar1 >> 2;
            auStack_241[lVar11 + 4] = bVar23;
            abStack_23c[lVar11] = bVar1 & 3;
            *(undefined4 *)(auStack_241 + lVar11) = *(undefined4 *)((longlong)&uStack_725 + lVar11);
            *(uint *)(auStack_241 + lVar11 + -4) = (uint)(&bStack_721)[lVar11];
            local_178 = (undefined1  [4])((int)local_178 + 1);
            local_174 = local_174 | bVar23 == 2;
            lVar12 = *(longlong *)((longlong)&lStack_72d + lVar11);
            if (lVar12 != 0) {
              local_b0 = 1;
              uVar14 = *(undefined8 *)(auStack_241 + lVar11 + -4);
              *(undefined8 *)((longlong)&lStack_185 + lVar11) =
                   *(undefined8 *)(local_250 + lVar11 + 3);
              *(undefined8 *)(&stack0xfffffffffffffe83 + lVar11) = uVar14;
              *(undefined8 *)(local_178 + lVar11 + 3) = *(undefined8 *)(auStack_241 + lVar11 + 4);
              *(longlong *)((longlong)&lStack_185 + lVar11) = lVar12;
            }
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != 0xd5);
          auVar7 = local_178;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_a8 = ZEXT816(0);
          if (0 < (int)local_178) {
            memcpy(local_578,local_238,(ulonglong)(uint)local_178 * 0x18);
          }
          local_4b8 = 0;
          uStack_4b0 = 0;
          local_4a6 = 0;
          local_4a8 = 0;
          local_4a5 = local_4a5 & 0xfc | 2;
          uVar14 = *(undefined8 *)
                    (&DAT_14ca8c1f0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          local_580 = (uint)auVar7;
          uVar17 = FUN_145f9b3d4();
          FUN_1448e935e(uVar14,local_238,uVar17,0);
          FUN_145f9b3d4();
          auVar6 = local_238;
          local_7b8 = lStack_230;
          uVar17 = FUN_145db0c8a();
          FUN_1448e935e(uVar14,local_238,uVar17,0);
          FUN_145db0c8a();
          auVar26 = local_238;
          local_720 = (longlong)local_238;
          local_718 = lStack_230;
          FUN_144b0e33a(&local_620,&local_318);
          lVar11 = local_7b8;
          if (auVar6 == (undefined1  [8])0x0) {
            lVar12 = 0;
          }
          else {
            lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_7b8 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)auVar6 + 0xd4) * 8);
            auVar26 = (undefined1  [8])local_720;
            if (lVar12 == 0) {
              lVar12 = FUN_1400bafc2(*(longlong *)(local_7b8 + 8),
                                     (longlong)*(int *)((longlong)auVar6 + 0xd4),1);
              auVar26 = (undefined1  [8])local_720;
            }
          }
          lStack_310 = lVar12;
          if (auVar26 == (undefined1  [8])0x0) {
            lVar12 = 0;
          }
          else {
            lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_718 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)auVar26 + 0xd4) * 8);
            if (lVar12 == 0) {
              lVar12 = FUN_1400bafc2(*(longlong *)(local_718 + 8),
                                     (longlong)*(int *)((longlong)auVar26 + 0xd4),1);
            }
          }
          local_318 = DAT_14ca94df8;
          local_2c0 = 1;
          local_308 = lVar12;
          lVar12 = FUN_140028f18(&local_620);
          if ((lVar12 != 0) && ((local_250._0_4_ & 0x10000000) == 0)) {
            local_478 = (undefined4)local_2f8;
            uStack_474 = local_2f8._4_4_;
            uStack_470 = (undefined4)uStack_2f0;
            uStack_46c = uStack_2f0._4_4_;
            local_488 = (undefined4)local_308;
            uStack_484 = local_308._4_4_;
            uStack_480 = (undefined4)uStack_300;
            uStack_47c = uStack_300._4_4_;
            local_498 = local_318;
            lStack_490 = lStack_310;
            puVar25 = (undefined8 *)
                      (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar25 + 4;
            if ((undefined8 *)CONCAT44(uStack_614,uStack_618) < puVar16) {
              FUN_140023dd8(&local_620,0x28);
              puVar25 = (undefined8 *)
                        (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar25 + 4;
            }
            local_620._0_4_ = SUB84(puVar16,0);
            local_620._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
            local_5c0 = local_5c0 + 1;
            *uStack_5f0 = puVar25;
            uStack_5f0 = puVar25 + 1;
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_14a37d348;
            puVar25[2] = lVar12;
            *(undefined4 *)(puVar25 + 3) = 0;
            *(undefined1 *)((longlong)puVar25 + 0x1c) = 1;
          }
          local_778 = 0;
          uStack_770 = 0x3f80000000000000;
          fVar28 = logf((float)local_7c0);
          lVar12 = 0;
          local_788 = (ulonglong)(uint)(fVar28 * 1.442695 * -180.0 * 0.5) << 0x20;
          local_780 = 0;
          FUN_1413df99e(local_238);
          uStack_770 = CONCAT44(uStack_224,local_228);
          local_778 = local_238;
          if (auVar6 != (undefined1  [8])0x0) {
            lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)auVar6 + 0xd4) * 8);
            if (lVar12 == 0) {
              lVar12 = FUN_1400bafc2(*(longlong *)(lVar11 + 8),
                                     (longlong)*(int *)((longlong)auVar6 + 0xd4),1);
            }
          }
          uVar14 = FUN_145f9b64a();
          local_7e8 = &local_778;
          FUN_1449cc26b(&local_620,lVar12,auVar6,uVar14);
          local_238 = (undefined1  [8])local_7b0;
          local_788 = DAT_14c9c0d80;
          if (local_720 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_718 + 8) + 0x50) +
                      (longlong)*(int *)(local_720 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(*(longlong *)(local_718 + 8),
                                     (longlong)*(int *)(local_720 + 0xd4),1);
            }
          }
          local_7e8 = (undefined8 *)local_238;
          FUN_1473de133(&local_620,&local_720,lVar11,&local_788);
          puVar25 = (undefined8 *)
                    (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar25 + 4;
          if ((undefined8 *)CONCAT44(uStack_614,uStack_618) < puVar16) {
            FUN_140023dd8(&local_620,0x28);
            puVar25 = (undefined8 *)
                      (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar25 + 4;
          }
          lVar11 = local_790;
          local_620._0_4_ = SUB84(puVar16,0);
          local_620._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
          local_5c0 = local_5c0 + 1;
          *uStack_5f0 = puVar25;
          uStack_5f0 = puVar25 + 1;
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_14a1fc200;
          puVar25[2] = 0x200000000;
          *(undefined4 *)(puVar25 + 3) = 1;
          if ((local_4a5 & 8) != 0) {
            (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&local_620,1);
            local_4a5 = local_4a5 & 0xf7;
          }
          puVar25 = (undefined8 *)
                    (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar25 + 2;
          if ((undefined8 *)CONCAT44(uStack_614,uStack_618) < puVar16) {
            FUN_140023dd8(&local_620,0x18);
            puVar25 = (undefined8 *)
                      (CONCAT44(local_620._4_4_,(undefined4)local_620) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar25 + 2;
          }
          local_620._0_4_ = SUB84(puVar16,0);
          local_620._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
          local_5c0 = local_5c0 + 1;
          *uStack_5f0 = puVar25;
          uStack_5f0 = puVar25 + 1;
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_14a217b58;
          local_4a5 = local_4a5 & 0xfd;
          local_4a8 = 0;
          FUN_140048db6();
        }
        bVar27 = false;
        local_5e8 = 0;
        local_5e0 = 0x100000000;
        local_518 = 0;
        local_510 = 0x200000000;
        local_4d0 = 0;
        local_4c8 = 0x200000000;
        local_508 = ZEXT816(0);
        local_4f8 = 0;
        lStack_230 = 1;
        local_238 = (undefined1  [8])0x1;
        local_228 = 0xffffffff;
        local_7e8 = (undefined8 *)local_238;
        FUN_147396818(&local_620,*(undefined8 *)(lVar11 + 0x98),local_7bc,0x3b9acdea);
        FUN_147397068(&local_620,param_3);
        FUN_1473945b6(&local_620);
      }
    }
  }
  else {
LAB_1431bc8cb:
    bVar27 = false;
  }
  FUN_147399046(param_3);
  lVar11 = *(longlong *)(*(longlong *)(param_1[2] + 0x20c8) + 0x150);
  FUN_1473999ec(lVar11);
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    lVar12 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(char *)(lVar12 + 0x80) != '\0') goto LAB_1431bc913;
    if (bVar27) {
      uVar21 = 0;
      FUN_1431a68ea(param_4,param_3,0,0);
      FUN_1473dc5aa(param_1,param_1[0x25]);
      FUN_1473a4ba6(param_1[2]);
      FUN_1473a4890(param_1[2]);
      goto LAB_1431bcd41;
    }
    if (DAT_14c760c6c == 1) {
      local_620 = local_238;
      local_238 = (undefined1  [8])param_1[0x27];
      uStack_618 = 1;
      FUN_1473965d8(param_3,0x2000);
    }
    if ((longlong)*(int *)((longlong)param_1 + 0x11c) < 0) goto LAB_1431bc913;
    plVar19 = param_1 + 0xb;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[0x11];
    }
    lVar12 = plVar19[*(int *)((longlong)param_1 + 0x11c)];
  }
  else {
LAB_1431bc913:
    lVar12 = 0;
  }
  FUN_147399b06(lVar11,lVar12);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = stack0xfffffffffffffdcc;
  _local_238 = auVar3 << 0x20;
  plVar19 = (longlong *)param_1[0x28];
  if (plVar19 == (longlong *)0x0) {
LAB_1431bc950:
    if (*(char *)((longlong)param_1 + 0x134) == '\0') {
      lVar12 = (**(code **)(*DAT_14ca83900 + 0x30))();
      if (((*(char *)(lVar12 + 0x80) != '\0') || (DAT_14c760c6c == 1)) || (param_1[0x1b] != 0))
      goto LAB_1431bc986;
      uVar21 = 0;
      if (plVar19 != (longlong *)0x0) goto LAB_1431bcce3;
    }
    else {
LAB_1431bc986:
      if (*(char *)((longlong)param_1 + 0x134) == '\0') {
        lVar12 = (**(code **)(*DAT_14ca83900 + 0x30))();
        if (*(char *)(lVar12 + 0x80) != '\0') goto LAB_1431bccbb;
        param_2 = &local_748;
        local_758 = (undefined ***)0x0;
        local_748 = &PTR_LAB_14a36bd70;
        local_738._0_8_ = param_5;
        local_768 = FUN_1431c1b36;
        local_620._0_4_ = SUB84(param_1,0);
        uVar22 = (undefined4)local_620;
        local_620._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uVar5 = local_620._4_4_;
        local_740 = param_4;
        iVar9 = FUN_1431c1b36();
        if (-1 < iVar9) {
          if (local_758 != (undefined ***)0x0) {
            param_2 = local_758;
          }
          (*(code *)(*param_2)[2])(param_2);
          goto LAB_1431bccbb;
        }
        uVar10 = 4;
        do {
          FUN_1473dc5aa(param_1,param_1[0x25]);
          FUN_1473a4ba6(param_1[2]);
          FUN_1473a4890(param_1[2]);
          pcVar4 = local_768;
          pppuVar20 = local_758;
          if (local_758 == (undefined ***)0x0) {
            pppuVar20 = param_2;
          }
          local_620._0_4_ = uVar22;
          local_620._4_4_ = uVar5;
          uVar14 = (*(code *)(*pppuVar20)[1])();
          iVar9 = (*pcVar4)(uVar14,&local_620);
          bVar27 = 1 < uVar10;
          uVar10 = uVar10 - 1;
        } while (iVar9 < 0 && bVar27);
        if (local_768 != (code *)0x0) {
          if (local_758 != (undefined ***)0x0) {
            param_2 = local_758;
          }
          (*(code *)(*param_2)[2])(param_2);
        }
        if (-1 < iVar9) goto LAB_1431bccbb;
        uVar21 = 0;
      }
      else {
LAB_1431bccbb:
        uVar21 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x28] + 0x38))();
        goto LAB_1431bcce3;
      }
    }
    (**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  else {
    cVar8 = (**(code **)(*plVar19 + 0x30))(plVar19,param_2,local_238);
    if (cVar8 != '\0') goto LAB_1431bc950;
    uVar21 = 0;
  }
LAB_1431bcce3:
  if (*(longlong *)(lVar11 + 0x80) != 0) {
    FUN_14739859c(lVar11,0,0);
  }
  lVar12 = *(longlong *)(lVar11 + 0x78);
  if (lVar12 != 0) {
    if (*(longlong *)(lVar11 + 0x80) != 0) {
      FUN_14739859c(lVar11,0,0);
      lVar12 = *(longlong *)(lVar11 + 0x78);
    }
    if (1 < (byte)(*(char *)(lVar12 + 0x74) - 1U)) {
      FUN_14739639c(lVar11);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(int *)(param_1 + 0x26) = (int)param_1[0x26] + 1;
  *(int *)(DAT_14ca79348 + 0x18) = *(int *)(DAT_14ca79348 + 0x18) + 1;
LAB_1431bcd41:
  if ((local_70 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 1431bd9d0 FUN_1431bd9d0 body=1768 status=ok
// SIG undefined FUN_1431bd9d0(void)

void FUN_1431bd9d0(undefined8 param_1,longlong param_2,int param_3,int param_4,char param_5,
                  char param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  int local_58;
  int local_54;
  char local_50;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_6 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca78cd8) && (FUN_144b3d300(&DAT_14ca78cd8), DAT_14ca78cd8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
      if (plVar12 == (longlong *)0x0) {
        DAT_14ca78cd0 = 0;
      }
      else {
        DAT_14ca78cd0 = (**(code **)(*plVar12 + 0x68))(plVar12);
      }
      _Init_thread_footer(&DAT_14ca78cd8);
    }
    lVar4 = DAT_14ca78cd0;
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar6 == 0x40000002) {
      uVar16 = 0;
    }
    else {
      bVar18 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar18 = DVar7 == DVar8;
        }
        else {
          bVar18 = false;
        }
      }
      uVar16 = (ulonglong)(bVar18 ^ 1);
    }
    uVar13 = *(uint *)(lVar4 + uVar16 * 4);
    if (3 < (int)uVar13) {
      uVar13 = 4;
    }
    uVar16 = (ulonglong)uVar13;
    if ((int)uVar13 < 1) {
      uVar16 = 0;
    }
    uVar13 = 4;
    if ((int)(&DAT_14aa61900)[uVar16] < 4) {
      uVar13 = (&DAT_14aa61900)[uVar16];
    }
    uVar16 = (ulonglong)uVar13;
    if ((int)uVar13 < 1) {
      uVar16 = 0;
    }
    param_6 = (&DAT_14aa618f0)[uVar16];
  }
  if (((*(int *)(param_2 + 0x110) == param_3) && (*(int *)(param_2 + 0x114) == param_4)) &&
     (*(char *)(param_2 + 0x118) == param_5)) goto LAB_1431bdbc0;
  FUN_14080c2b4();
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1431bdb03;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1431bdf37;
      goto LAB_1431bdb0c;
    }
LAB_1431bdf37:
    *(int *)(param_2 + 0x110) = param_3;
    *(int *)(param_2 + 0x114) = param_4;
    *(char *)(param_2 + 0x118) = param_5;
    local_88 = (code *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_88,5);
    local_88 = (code *)0x0;
    uStack_80 = 0;
    FUN_1473dcafc(param_2,&local_88);
    *(char *)(param_2 + 0x119) = param_6;
    FUN_1473db96e(param_2,&local_88);
  }
  else {
LAB_1431bdb03:
    if (iVar6 == 0x10) goto LAB_1431bdf37;
LAB_1431bdb0c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1431bdf37;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1431bdf37;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_1431bdc88;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1431c0c11);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_1431bdc88:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x18);
        uVar13 = puVar10[0x12];
        if (puVar15 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = 0;
          if (puVar15 <= puVar10 + 0x4000) {
            uVar13 = 1;
            goto LAB_1431bdd08;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1431bdd08:
      *(uint **)(puVar10 + 0x10) = puVar15;
      puVar10[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a36bdd0;
      puVar17[0x15] = param_2;
      *(int *)(puVar17 + 0x16) = param_3;
      *(int *)((longlong)puVar17 + 0xb4) = param_4;
      *(char *)(puVar17 + 0x17) = param_5;
      *(char *)((longlong)puVar17 + 0xb9) = param_6;
      *(undefined4 *)((longlong)puVar17 + 0xba) = (undefined4)local_88;
      *(undefined2 *)((longlong)puVar17 + 0xbe) = local_88._4_2_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_89 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_89 = 1;
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
      local_98 = &local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a36bd90;
      local_50 = param_5;
      local_88 = FUN_1431c1dd2;
      local_60 = param_2;
      local_58 = param_3;
      local_54 = param_4;
      local_4f = param_6;
      FUN_14005a792(&DAT_14ca9a440,L"ResizeViewport",&DAT_14ca78d38);
      if (local_88 != (code *)0x0) {
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_14080c2b4();
LAB_1431bdbc0:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431be0ba FUN_1431be0ba body=1411 status=ok
// SIG undefined FUN_1431be0ba(void)

void FUN_1431be0ba(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
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
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  int local_44;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_2 + 0x110) == param_3) && (*(int *)(param_2 + 0x114) == param_4))
  goto LAB_1431be1de;
  FUN_14080c2b4();
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1431be127;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1431be541;
      goto LAB_1431be130;
    }
LAB_1431be541:
    *(int *)(param_2 + 0x110) = param_3;
    *(int *)(param_2 + 0x114) = param_4;
    *(undefined1 *)(param_2 + 0x118) = param_5;
    local_78 = (code *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_78,5);
    local_78 = (code *)0x0;
    uStack_70 = 0;
    FUN_1473dcafc(param_2,&local_78);
    *(undefined1 *)(param_2 + 0x119) = 0;
    FUN_1473db96e(param_2,&local_78);
  }
  else {
LAB_1431be127:
    if (iVar7 == 0x10) goto LAB_1431be541;
LAB_1431be130:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_1431be541;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1431be541;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1431be2a2;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1431c0c11);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_1431be2a2:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x18);
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
          puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x18);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1431be322;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1431be322:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14a36be00;
      puVar16[0x15] = param_2;
      *(int *)(puVar16 + 0x16) = param_3;
      *(int *)((longlong)puVar16 + 0xb4) = param_4;
      *(undefined1 *)(puVar16 + 0x17) = param_5;
      uVar5 = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar16 + 0xb9) = uVar5;
      *(undefined4 *)((longlong)puVar16 + 0xbc) = local_78._3_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar16[0xf] = uVar12;
      puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar7;
      if (puVar16 == (undefined8 *)0x0) {
        local_79 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_79 = 1;
        FUN_1447439e4(puVar16);
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
    }
    else {
      local_88 = &local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14a36bde0;
      local_40 = param_5;
      local_78 = FUN_1431c2098;
      local_50 = param_2;
      local_48 = param_3;
      local_44 = param_4;
      FUN_14005a792(&DAT_14ca9a440,L"ResizeViewport",&DAT_14ca78d3c);
      if (local_78 != (code *)0x0) {
        pppuVar14 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar14 = &local_58;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_14080c2b4();
LAB_1431be1de:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431be63e FUN_1431be63e body=452 status=ok
// SIG undefined FUN_1431be63e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1431be63e(void)

{
  bool bVar1;
  
  if (DAT_14ca78cdc == '\x01') {
    bVar1 = DAT_14ca78d18 != (HMODULE)0x0;
  }
  else {
    DAT_14ca78cdc = '\x01';
    DAT_14ca78d18 = LoadLibraryW(L"vulkan-1.dll");
    if (DAT_14ca78d18 != (HMODULE)0x0) {
      DAT_14ca79360 = FUN_14170ce66(DAT_14ca78d18,L"vkCreateInstance");
      DAT_14ca79380 = FUN_14170ce66(DAT_14ca78d18,L"vkGetInstanceProcAddr");
      DAT_14ca79378 = FUN_14170ce66(DAT_14ca78d18,L"vkGetDeviceProcAddr");
      DAT_14ca79368 = FUN_14170ce66(DAT_14ca78d18,L"vkEnumerateInstanceExtensionProperties");
      DAT_14ca791b0 = FUN_14170ce66(DAT_14ca78d18,L"vkEnumerateInstanceLayerProperties");
      if ((((DAT_14ca791b0 != 0) && (DAT_14ca79368 != 0)) && (DAT_14ca79378 != 0)) &&
         ((DAT_14ca79380 != 0 && (DAT_14ca79360 != 0)))) {
        _DAT_14ca78ce0 = FUN_14170ce66(DAT_14ca78d18,L"vkGetPhysicalDeviceDisplayPropertiesKHR");
        _DAT_14ca78ce8 =
             FUN_14170ce66(DAT_14ca78d18,L"vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
        _DAT_14ca78cf0 = FUN_14170ce66(DAT_14ca78d18,L"vkGetDisplayPlaneSupportedDisplaysKHR");
        _DAT_14ca78cf8 = FUN_14170ce66(DAT_14ca78d18,L"vkGetDisplayModePropertiesKHR");
        _DAT_14ca78d00 = FUN_14170ce66(DAT_14ca78d18,L"vkCreateDisplayModeKHR");
        _DAT_14ca78d08 = FUN_14170ce66(DAT_14ca78d18,L"vkGetDisplayPlaneCapabilitiesKHR");
        return true;
      }
      if (DAT_14ca78d18 != (HMODULE)0x0) {
        FreeLibrary(DAT_14ca78d18);
        DAT_14ca78d18 = (HMODULE)0x0;
      }
      DAT_14ca78cdc = '\0';
    }
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1431be802 FUN_1431be802 body=9069 status=ok
// SIG undefined FUN_1431be802(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1431be802(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  longlong lVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  longlong lVar76;
  longlong lVar77;
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  longlong lVar83;
  longlong lVar84;
  longlong lVar85;
  longlong lVar86;
  longlong lVar87;
  longlong lVar88;
  longlong lVar89;
  longlong lVar90;
  longlong lVar91;
  longlong lVar92;
  longlong lVar93;
  longlong lVar94;
  longlong lVar95;
  longlong lVar96;
  longlong lVar97;
  longlong lVar98;
  longlong lVar99;
  longlong lVar100;
  longlong lVar101;
  longlong lVar102;
  longlong lVar103;
  longlong lVar104;
  longlong lVar105;
  longlong lVar106;
  longlong lVar107;
  longlong lVar108;
  longlong lVar109;
  longlong lVar110;
  longlong lVar111;
  longlong lVar112;
  longlong lVar113;
  longlong lVar114;
  longlong lVar115;
  longlong lVar116;
  longlong lVar117;
  longlong lVar118;
  longlong lVar119;
  longlong lVar120;
  longlong lVar121;
  longlong lVar122;
  longlong lVar123;
  longlong lVar124;
  longlong lVar125;
  longlong lVar126;
  longlong lVar127;
  longlong lVar128;
  longlong lVar129;
  longlong lVar130;
  longlong lVar131;
  longlong lVar132;
  longlong lVar133;
  longlong lVar134;
  longlong lVar135;
  longlong lVar136;
  longlong lVar137;
  longlong lVar138;
  longlong lVar139;
  longlong lVar140;
  longlong lVar141;
  longlong lVar142;
  longlong lVar143;
  longlong lVar144;
  longlong lVar145;
  longlong lVar146;
  longlong lVar147;
  longlong lVar148;
  longlong lVar149;
  
  if ((DAT_14ca78d18 != (HMODULE)0x0) &&
     (_DAT_14ca78d20 = FUN_14170ce66(DAT_14ca78d18,L"vkGetInstanceProcAddr"), _DAT_14ca78d20 != 0))
  {
    DAT_14ca79358 = (*DAT_14ca79380)(param_1,"vkDestroyInstance");
    DAT_14ca79420 = (*DAT_14ca79380)(param_1,"vkEnumeratePhysicalDevices");
    DAT_14ca78e58 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures");
    DAT_14ca78e00 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties");
    DAT_14ca79408 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties2");
    DAT_14ca78e60 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceImageFormatProperties");
    DAT_14ca78e68 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties");
    DAT_14ca78e08 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
    DAT_14ca79410 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
    DAT_14ca78e70 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceMemoryProperties");
    DAT_14ca79370 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties2");
    DAT_14ca79400 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures2");
    DAT_14ca78e78 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceMemoryProperties2");
    DAT_14ca79418 = (*DAT_14ca79380)(param_1,"vkCreateDevice");
    DAT_14ca78e28 = (*DAT_14ca79380)(param_1,"vkDestroyDevice");
    DAT_14ca79388 = (*DAT_14ca79380)(param_1,"vkEnumerateDeviceExtensionProperties");
    DAT_14ca78e80 = (*DAT_14ca79380)(param_1,"vkEnumerateDeviceLayerProperties");
    DAT_14ca792b8 = (*DAT_14ca79380)(param_1,"vkGetDeviceQueue");
    DAT_14ca792c0 = (*DAT_14ca79380)(param_1,"vkQueueSubmit");
    DAT_14ca78e88 = (*DAT_14ca79380)(param_1,"vkQueueWaitIdle");
    DAT_14ca78e30 = (*DAT_14ca79380)(param_1,"vkDeviceWaitIdle");
    DAT_14ca78e90 = (*DAT_14ca79380)(param_1,"vkAllocateMemory");
    DAT_14ca78e98 = (*DAT_14ca79380)(param_1,"vkFreeMemory");
    DAT_14ca78ea0 = (*DAT_14ca79380)(param_1,"vkMapMemory");
    DAT_14ca78ea8 = (*DAT_14ca79380)(param_1,"vkUnmapMemory");
    DAT_14ca78eb0 = (*DAT_14ca79380)(param_1,"vkFlushMappedMemoryRanges");
    DAT_14ca78eb8 = (*DAT_14ca79380)(param_1,"vkInvalidateMappedMemoryRanges");
    DAT_14ca78ec0 = (*DAT_14ca79380)(param_1,"vkGetDeviceMemoryCommitment");
    DAT_14ca78e18 = (*DAT_14ca79380)(param_1,"vkBindBufferMemory");
    DAT_14ca78ec8 = (*DAT_14ca79380)(param_1,"vkBindImageMemory");
    DAT_14ca78ed0 = (*DAT_14ca79380)(param_1,"vkBindBufferMemory2");
    DAT_14ca78ed8 = (*DAT_14ca79380)(param_1,"vkBindImageMemory2");
    DAT_14ca78e10 = (*DAT_14ca79380)(param_1,"vkGetBufferMemoryRequirements");
    DAT_14ca78ee0 = (*DAT_14ca79380)(param_1,"vkGetImageMemoryRequirements");
    DAT_14ca78ee8 = (*DAT_14ca79380)(param_1,"vkGetImageSparseMemoryRequirements");
    DAT_14ca78ef0 = (*DAT_14ca79380)(param_1,"vkGetImageMemoryRequirements2");
    DAT_14ca78ef8 = (*DAT_14ca79380)(param_1,"vkGetBufferMemoryRequirements2");
    DAT_14ca78f00 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties");
    DAT_14ca78f08 = (*DAT_14ca79380)(param_1,"vkQueueBindSparse");
    DAT_14ca78f10 = (*DAT_14ca79380)(param_1,"vkCreateFence");
    DAT_14ca78f18 = (*DAT_14ca79380)(param_1,"vkDestroyFence");
    DAT_14ca78f20 = (*DAT_14ca79380)(param_1,"vkResetFences");
    DAT_14ca78f28 = (*DAT_14ca79380)(param_1,"vkGetFenceStatus");
    DAT_14ca78f30 = (*DAT_14ca79380)(param_1,"vkWaitForFences");
    DAT_14ca78f38 = (*DAT_14ca79380)(param_1,"vkCreateSemaphore");
    DAT_14ca78f40 = (*DAT_14ca79380)(param_1,"vkDestroySemaphore");
    DAT_14ca79258 = (*DAT_14ca79380)(param_1,"vkCreateEvent");
    DAT_14ca79268 = (*DAT_14ca79380)(param_1,"vkDestroyEvent");
    DAT_14ca79270 = (*DAT_14ca79380)(param_1,"vkGetEventStatus");
    DAT_14ca78f48 = (*DAT_14ca79380)(param_1,"vkSetEvent");
    DAT_14ca79280 = (*DAT_14ca79380)(param_1,"vkResetEvent");
    DAT_14ca79248 = (*DAT_14ca79380)(param_1,"vkCreateQueryPool");
    DAT_14ca79260 = (*DAT_14ca79380)(param_1,"vkDestroyQueryPool");
    DAT_14ca79278 = (*DAT_14ca79380)(param_1,"vkGetQueryPoolResults");
    DAT_14ca793e8 = (*DAT_14ca79380)(param_1,"vkCreateBuffer");
    DAT_14ca78e20 = (*DAT_14ca79380)(param_1,"vkDestroyBuffer");
    DAT_14ca78f50 = (*DAT_14ca79380)(param_1,"vkCreateBufferView");
    DAT_14ca78f58 = (*DAT_14ca79380)(param_1,"vkDestroyBufferView");
    DAT_14ca78f60 = (*DAT_14ca79380)(param_1,"vkCreateImage");
    DAT_14ca78f68 = (*DAT_14ca79380)(param_1,"vkDestroyImage");
    DAT_14ca78f70 = (*DAT_14ca79380)(param_1,"vkGetImageSubresourceLayout");
    DAT_14ca78f78 = (*DAT_14ca79380)(param_1,"vkCreateImageView");
    DAT_14ca78f80 = (*DAT_14ca79380)(param_1,"vkDestroyImageView");
    DAT_14ca78f88 = (*DAT_14ca79380)(param_1,"vkCreateShaderModule");
    DAT_14ca78f90 = (*DAT_14ca79380)(param_1,"vkDestroyShaderModule");
    DAT_14ca79210 = (*DAT_14ca79380)(param_1,"vkCreatePipelineCache");
    DAT_14ca79208 = (*DAT_14ca79380)(param_1,"vkDestroyPipelineCache");
    DAT_14ca79220 = (*DAT_14ca79380)(param_1,"vkGetPipelineCacheData");
    DAT_14ca79218 = (*DAT_14ca79380)(param_1,"vkMergePipelineCaches");
    DAT_14ca79228 = (*DAT_14ca79380)(param_1,"vkCreateGraphicsPipelines");
    DAT_14ca79230 = (*DAT_14ca79380)(param_1,"vkCreateComputePipelines");
    DAT_14ca79238 = (*DAT_14ca79380)(param_1,"vkDestroyPipeline");
    DAT_14ca78dd0 = (*DAT_14ca79380)(param_1,"vkCreatePipelineLayout");
    DAT_14ca78dc8 = (*DAT_14ca79380)(param_1,"vkDestroyPipelineLayout");
    DAT_14ca78f98 = (*DAT_14ca79380)(param_1,"vkCreateSampler");
    DAT_14ca79350 = (*DAT_14ca79380)(param_1,"vkDestroySampler");
    DAT_14ca79390 = (*DAT_14ca79380)(param_1,"vkCreateDescriptorSetLayout");
    DAT_14ca79200 = (*DAT_14ca79380)(param_1,"vkDestroyDescriptorSetLayout");
    DAT_14ca791b8 = (*DAT_14ca79380)(param_1,"vkCreateDescriptorPool");
    DAT_14ca791c0 = (*DAT_14ca79380)(param_1,"vkDestroyDescriptorPool");
    DAT_14ca791c8 = (*DAT_14ca79380)(param_1,"vkResetDescriptorPool");
    DAT_14ca791d0 = (*DAT_14ca79380)(param_1,"vkAllocateDescriptorSets");
    DAT_14ca78fa0 = (*DAT_14ca79380)(param_1,"vkFreeDescriptorSets");
    DAT_14ca791f8 = (*DAT_14ca79380)(param_1,"vkUpdateDescriptorSets");
    DAT_14ca78fa8 = (*DAT_14ca79380)(param_1,"vkCreateFramebuffer");
    DAT_14ca78fb0 = (*DAT_14ca79380)(param_1,"vkDestroyFramebuffer");
    DAT_14ca79438 = (*DAT_14ca79380)(param_1,"vkCreateRenderPass");
    DAT_14ca78fb8 = (*DAT_14ca79380)(param_1,"vkDestroyRenderPass");
    DAT_14ca78fc0 = (*DAT_14ca79380)(param_1,"vkGetRenderAreaGranularity");
    DAT_14ca78fc8 = (*DAT_14ca79380)(param_1,"vkCreateCommandPool");
    DAT_14ca78fd0 = (*DAT_14ca79380)(param_1,"vkDestroyCommandPool");
    DAT_14ca78fd8 = (*DAT_14ca79380)(param_1,"vkResetCommandPool");
    DAT_14ca78fe0 = (*DAT_14ca79380)(param_1,"vkTrimCommandPool");
    DAT_14ca78fe8 = (*DAT_14ca79380)(param_1,"vkAllocateCommandBuffers");
    DAT_14ca78ff0 = (*DAT_14ca79380)(param_1,"vkFreeCommandBuffers");
    DAT_14ca78ff8 = (*DAT_14ca79380)(param_1,"vkBeginCommandBuffer");
    DAT_14ca79000 = (*DAT_14ca79380)(param_1,"vkEndCommandBuffer");
    DAT_14ca79008 = (*DAT_14ca79380)(param_1,"vkResetCommandBuffer");
    DAT_14ca79318 = (*DAT_14ca79380)(param_1,"vkCmdBindPipeline");
    DAT_14ca791e0 = (*DAT_14ca79380)(param_1,"vkCmdSetViewport");
    DAT_14ca791e8 = (*DAT_14ca79380)(param_1,"vkCmdSetScissor");
    DAT_14ca79010 = (*DAT_14ca79380)(param_1,"vkCmdSetLineWidth");
    DAT_14ca79018 = (*DAT_14ca79380)(param_1,"vkCmdSetDepthBias");
    DAT_14ca79020 = (*DAT_14ca79380)(param_1,"vkCmdSetBlendConstants");
    DAT_14ca79028 = (*DAT_14ca79380)(param_1,"vkCmdSetDepthBounds");
    DAT_14ca79030 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilCompareMask");
    DAT_14ca79038 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilWriteMask");
    DAT_14ca791f0 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilReference");
    DAT_14ca793b0 = (*DAT_14ca79380)(param_1,"vkCmdBindDescriptorSets");
    DAT_14ca79040 = (*DAT_14ca79380)(param_1,"vkCmdBindIndexBuffer");
    DAT_14ca791d8 = (*DAT_14ca79380)(param_1,"vkCmdBindVertexBuffers");
    DAT_14ca79048 = (*DAT_14ca79380)(param_1,"vkCmdDraw");
    DAT_14ca79050 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndexed");
    DAT_14ca79058 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndirect");
    DAT_14ca79060 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndexedIndirect");
    DAT_14ca79068 = (*DAT_14ca79380)(param_1,"vkCmdDispatch");
    DAT_14ca79070 = (*DAT_14ca79380)(param_1,"vkCmdDispatchIndirect");
    DAT_14ca793f0 = (*DAT_14ca79380)(param_1,"vkCmdCopyBuffer");
    DAT_14ca79078 = (*DAT_14ca79380)(param_1,"vkCmdCopyImage");
    DAT_14ca79080 = (*DAT_14ca79380)(param_1,"vkCmdBlitImage");
    DAT_14ca79088 = (*DAT_14ca79380)(param_1,"vkCmdCopyBufferToImage");
    DAT_14ca79330 = (*DAT_14ca79380)(param_1,"vkCmdCopyImageToBuffer");
    DAT_14ca79090 = (*DAT_14ca79380)(param_1,"vkCmdUpdateBuffer");
    DAT_14ca79338 = (*DAT_14ca79380)(param_1,"vkCmdFillBuffer");
    DAT_14ca79098 = (*DAT_14ca79380)(param_1,"vkCmdClearColorImage");
    DAT_14ca790a0 = (*DAT_14ca79380)(param_1,"vkCmdClearDepthStencilImage");
    DAT_14ca790a8 = (*DAT_14ca79380)(param_1,"vkCmdClearAttachments");
    DAT_14ca790b0 = (*DAT_14ca79380)(param_1,"vkCmdResolveImage");
    DAT_14ca79298 = (*DAT_14ca79380)(param_1,"vkCmdSetEvent");
    DAT_14ca790b8 = (*DAT_14ca79380)(param_1,"vkCmdResetEvent");
    DAT_14ca790c0 = (*DAT_14ca79380)(param_1,"vkCmdWaitEvents");
    DAT_14ca79290 = (*DAT_14ca79380)(param_1,"vkCmdPipelineBarrier");
    DAT_14ca792a0 = (*DAT_14ca79380)(param_1,"vkCmdBeginQuery");
    DAT_14ca792a8 = (*DAT_14ca79380)(param_1,"vkCmdEndQuery");
    DAT_14ca79288 = (*DAT_14ca79380)(param_1,"vkCmdResetQueryPool");
    DAT_14ca792b0 = (*DAT_14ca79380)(param_1,"vkCmdWriteTimestamp");
    DAT_14ca790c8 = (*DAT_14ca79380)(param_1,"vkCmdCopyQueryPoolResults");
    DAT_14ca790d0 = (*DAT_14ca79380)(param_1,"vkCmdPushConstants");
    DAT_14ca790d8 = (*DAT_14ca79380)(param_1,"vkCmdBeginRenderPass");
    DAT_14ca79340 = (*DAT_14ca79380)(param_1,"vkCmdNextSubpass");
    DAT_14ca790e0 = (*DAT_14ca79380)(param_1,"vkCmdEndRenderPass");
    DAT_14ca790e8 = (*DAT_14ca79380)(param_1,"vkCmdExecuteCommands");
    DAT_14ca78e48 = (*DAT_14ca79380)(param_1,"vkCreateSwapchainKHR");
    DAT_14ca78e50 = (*DAT_14ca79380)(param_1,"vkDestroySwapchainKHR");
    DAT_14ca790f0 = (*DAT_14ca79380)(param_1,"vkGetSwapchainImagesKHR");
    DAT_14ca790f8 = (*DAT_14ca79380)(param_1,"vkAcquireNextImageKHR");
    DAT_14ca78e40 = (*DAT_14ca79380)(param_1,"vkQueuePresentKHR");
    DAT_14ca79100 = (*DAT_14ca79380)(param_1,"vkCreateSamplerYcbcrConversion");
    lVar149 = (*DAT_14ca79380)(param_1,"vkDestroySamplerYcbcrConversion");
    lVar148 = DAT_14ca79438;
    lVar147 = DAT_14ca79420;
    lVar146 = DAT_14ca79418;
    lVar145 = DAT_14ca79410;
    lVar144 = DAT_14ca79408;
    lVar143 = DAT_14ca79400;
    lVar142 = DAT_14ca793f0;
    lVar141 = DAT_14ca793e8;
    lVar140 = DAT_14ca793b0;
    lVar139 = DAT_14ca79390;
    lVar138 = DAT_14ca79388;
    lVar137 = DAT_14ca79370;
    lVar136 = DAT_14ca79358;
    lVar135 = DAT_14ca79350;
    lVar134 = DAT_14ca79340;
    lVar133 = DAT_14ca79338;
    lVar132 = DAT_14ca79330;
    lVar131 = DAT_14ca79318;
    lVar130 = DAT_14ca792c0;
    lVar129 = DAT_14ca792b8;
    lVar128 = DAT_14ca792b0;
    lVar127 = DAT_14ca792a8;
    lVar126 = DAT_14ca792a0;
    lVar125 = DAT_14ca79298;
    lVar124 = DAT_14ca79290;
    lVar123 = DAT_14ca79288;
    lVar122 = DAT_14ca79280;
    lVar121 = DAT_14ca79278;
    lVar120 = DAT_14ca79270;
    lVar119 = DAT_14ca79268;
    lVar118 = DAT_14ca79260;
    lVar117 = DAT_14ca79258;
    lVar116 = DAT_14ca79248;
    lVar115 = DAT_14ca79238;
    lVar114 = DAT_14ca79230;
    lVar113 = DAT_14ca79228;
    lVar112 = DAT_14ca79220;
    lVar111 = DAT_14ca79218;
    lVar110 = DAT_14ca79210;
    lVar109 = DAT_14ca79208;
    lVar108 = DAT_14ca79200;
    lVar107 = DAT_14ca791f8;
    lVar106 = DAT_14ca791f0;
    lVar105 = DAT_14ca791e8;
    lVar104 = DAT_14ca791e0;
    lVar103 = DAT_14ca791d8;
    lVar102 = DAT_14ca791d0;
    lVar101 = DAT_14ca791c8;
    lVar100 = DAT_14ca791c0;
    lVar99 = DAT_14ca791b8;
    lVar98 = DAT_14ca79100;
    lVar97 = DAT_14ca790f8;
    lVar96 = DAT_14ca790f0;
    lVar95 = DAT_14ca790e8;
    lVar94 = DAT_14ca790e0;
    lVar93 = DAT_14ca790d8;
    lVar92 = DAT_14ca790d0;
    lVar91 = DAT_14ca790c8;
    lVar90 = DAT_14ca790c0;
    lVar89 = DAT_14ca790b8;
    lVar88 = DAT_14ca790b0;
    lVar87 = DAT_14ca790a8;
    lVar86 = DAT_14ca790a0;
    lVar85 = DAT_14ca79098;
    lVar84 = DAT_14ca79090;
    lVar83 = DAT_14ca79088;
    lVar82 = DAT_14ca79080;
    lVar81 = DAT_14ca79078;
    lVar80 = DAT_14ca79070;
    lVar79 = DAT_14ca79068;
    lVar78 = DAT_14ca79060;
    lVar77 = DAT_14ca79058;
    lVar76 = DAT_14ca79050;
    lVar75 = DAT_14ca79048;
    lVar74 = DAT_14ca79040;
    lVar73 = DAT_14ca79038;
    lVar72 = DAT_14ca79030;
    lVar71 = DAT_14ca79028;
    lVar70 = DAT_14ca79020;
    lVar69 = DAT_14ca79018;
    lVar68 = DAT_14ca79010;
    lVar67 = DAT_14ca79008;
    lVar66 = DAT_14ca79000;
    lVar65 = DAT_14ca78ff8;
    lVar64 = DAT_14ca78ff0;
    lVar63 = DAT_14ca78fe8;
    lVar62 = DAT_14ca78fe0;
    lVar61 = DAT_14ca78fd8;
    lVar60 = DAT_14ca78fd0;
    lVar59 = DAT_14ca78fc8;
    lVar58 = DAT_14ca78fc0;
    lVar57 = DAT_14ca78fb8;
    lVar56 = DAT_14ca78fb0;
    lVar55 = DAT_14ca78fa8;
    lVar54 = DAT_14ca78fa0;
    lVar53 = DAT_14ca78f98;
    lVar52 = DAT_14ca78f90;
    lVar51 = DAT_14ca78f88;
    lVar50 = DAT_14ca78f80;
    lVar49 = DAT_14ca78f78;
    lVar48 = DAT_14ca78f70;
    lVar47 = DAT_14ca78f68;
    lVar46 = DAT_14ca78f60;
    lVar45 = DAT_14ca78f58;
    lVar44 = DAT_14ca78f50;
    lVar43 = DAT_14ca78f48;
    lVar42 = DAT_14ca78f40;
    lVar41 = DAT_14ca78f38;
    lVar40 = DAT_14ca78f30;
    lVar39 = DAT_14ca78f28;
    lVar38 = DAT_14ca78f20;
    lVar37 = DAT_14ca78f18;
    lVar36 = DAT_14ca78f10;
    lVar35 = DAT_14ca78f08;
    lVar34 = DAT_14ca78f00;
    lVar33 = DAT_14ca78ef8;
    lVar32 = DAT_14ca78ef0;
    lVar31 = DAT_14ca78ee8;
    lVar30 = DAT_14ca78ee0;
    lVar29 = DAT_14ca78ed8;
    lVar28 = DAT_14ca78ed0;
    lVar27 = DAT_14ca78ec8;
    lVar26 = DAT_14ca78ec0;
    lVar25 = DAT_14ca78eb8;
    lVar24 = DAT_14ca78eb0;
    lVar23 = DAT_14ca78ea8;
    lVar22 = DAT_14ca78ea0;
    lVar21 = DAT_14ca78e98;
    lVar20 = DAT_14ca78e90;
    lVar19 = DAT_14ca78e88;
    lVar18 = DAT_14ca78e80;
    lVar17 = DAT_14ca78e78;
    lVar16 = DAT_14ca78e70;
    lVar15 = DAT_14ca78e68;
    lVar14 = DAT_14ca78e60;
    lVar13 = DAT_14ca78e58;
    lVar12 = DAT_14ca78e50;
    lVar11 = DAT_14ca78e48;
    lVar10 = DAT_14ca78e40;
    lVar9 = DAT_14ca78e30;
    lVar8 = DAT_14ca78e28;
    lVar7 = DAT_14ca78e20;
    lVar6 = DAT_14ca78e18;
    lVar5 = DAT_14ca78e10;
    lVar4 = DAT_14ca78e08;
    lVar3 = DAT_14ca78e00;
    lVar2 = DAT_14ca78dd0;
    lVar1 = DAT_14ca78dc8;
    _DAT_14ca79108 = lVar149;
    DAT_14ca78a88 = (*DAT_14ca79380)(param_1,"vkDestroySurfaceKHR");
    DAT_14ca78a80 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
    DAT_14ca78a78 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    DAT_14ca78a48 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
    DAT_14ca78a70 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
    if ((((DAT_14ca78a70 != 0) &&
         ((((DAT_14ca78a48 != 0 && (DAT_14ca78a78 != 0)) && (DAT_14ca78a80 != 0)) &&
          ((lVar149 != 0 && (DAT_14ca78a88 != 0)))))) &&
        ((((lVar98 != 0 &&
           ((((lVar10 != 0 && (lVar97 != 0)) &&
             ((lVar96 != 0 && (((lVar12 != 0 && (lVar11 != 0)) && (lVar95 != 0)))))) &&
            ((lVar94 != 0 && (lVar134 != 0)))))) && (lVar93 != 0)) &&
         ((((((lVar92 != 0 && (lVar91 != 0)) &&
             ((lVar128 != 0 && (((lVar123 != 0 && (lVar127 != 0)) && (lVar126 != 0)))))) &&
            (((lVar124 != 0 && (lVar90 != 0)) &&
             ((lVar89 != 0 &&
              (((lVar125 != 0 && (lVar88 != 0)) &&
               ((lVar87 != 0 &&
                (((((lVar86 != 0 && (lVar85 != 0)) && (lVar133 != 0)) &&
                  ((lVar84 != 0 && (lVar132 != 0)))) && (lVar83 != 0)))))))))))) &&
           (((lVar82 != 0 && (lVar81 != 0)) &&
            ((lVar142 != 0 &&
             ((((lVar80 != 0 && (lVar79 != 0)) && (lVar78 != 0)) &&
              (((((lVar77 != 0 && (lVar76 != 0)) &&
                 ((lVar75 != 0 && ((lVar103 != 0 && (lVar74 != 0)))))) && (lVar140 != 0)) &&
               ((((lVar106 != 0 && (lVar73 != 0)) && (lVar72 != 0)) &&
                ((lVar71 != 0 && (lVar70 != 0)))))))))))))) &&
          (((((lVar69 != 0 && ((lVar68 != 0 && (lVar105 != 0)))) && (lVar104 != 0)) &&
            (((((lVar131 != 0 && (lVar67 != 0)) && (lVar66 != 0)) &&
              ((lVar65 != 0 && (lVar64 != 0)))) &&
             ((lVar63 != 0 && ((lVar62 != 0 && (lVar61 != 0)))))))) && (lVar60 != 0)))))))) &&
       (((((((lVar59 != 0 && (lVar58 != 0)) && (lVar57 != 0)) &&
           (((((lVar148 != 0 && (lVar56 != 0)) &&
              ((lVar55 != 0 && ((lVar107 != 0 && (lVar54 != 0)))))) &&
             ((lVar102 != 0 && (((lVar101 != 0 && (lVar100 != 0)) && (lVar99 != 0)))))) &&
            (((lVar108 != 0 && (lVar139 != 0)) &&
             ((lVar135 != 0 && ((lVar53 != 0 && (lVar1 != 0)))))))))) &&
          ((lVar2 != 0 &&
           (((((lVar115 != 0 && (lVar114 != 0)) && (lVar113 != 0)) &&
             ((lVar111 != 0 && (lVar112 != 0)))) &&
            (((((lVar109 != 0 && ((lVar110 != 0 && (lVar52 != 0)))) &&
               ((lVar51 != 0 &&
                (((((lVar50 != 0 && (lVar49 != 0)) && (lVar48 != 0)) &&
                  (((lVar47 != 0 && (lVar46 != 0)) &&
                   ((lVar45 != 0 && ((lVar44 != 0 && (lVar7 != 0)))))))) && (lVar141 != 0)))))) &&
              ((((lVar121 != 0 && (lVar118 != 0)) && (lVar116 != 0)) &&
               ((lVar122 != 0 && (lVar43 != 0)))))) &&
             (((lVar120 != 0 && ((lVar119 != 0 && (lVar117 != 0)))) && (lVar42 != 0)))))))))) &&
         (((((((((lVar41 != 0 && (lVar40 != 0)) && (lVar39 != 0)) &&
               ((lVar38 != 0 && (lVar37 != 0)))) && (lVar36 != 0)) &&
             ((lVar35 != 0 && (lVar34 != 0)))) &&
            ((lVar33 != 0 && (((lVar32 != 0 && (lVar31 != 0)) && (lVar30 != 0)))))) &&
           (((lVar5 != 0 && (lVar29 != 0)) && (lVar28 != 0)))) &&
          ((((lVar27 != 0 && (lVar6 != 0)) &&
            ((lVar26 != 0 && (((lVar25 != 0 && (lVar24 != 0)) && (lVar23 != 0)))))) &&
           ((lVar22 != 0 && (lVar21 != 0)))))))) &&
        (((lVar20 != 0 &&
          ((((((lVar9 != 0 && (lVar19 != 0)) &&
              ((lVar130 != 0 &&
               ((((lVar129 != 0 && (lVar18 != 0)) && (lVar138 != 0)) &&
                ((lVar8 != 0 && (lVar146 != 0)))))))) && (lVar17 != 0)) &&
            (((lVar143 != 0 && (lVar137 != 0)) &&
             ((lVar16 != 0 && (((lVar145 != 0 && (lVar4 != 0)) && (lVar15 != 0)))))))) &&
           ((((lVar14 != 0 && (lVar144 != 0)) && (lVar3 != 0)) && ((lVar13 != 0 && (lVar147 != 0))))
           )))) && (lVar136 != 0)))))) {
      DAT_14ca792c8 = (*DAT_14ca79380)(param_1,"vkCreateAccelerationStructureKHR");
      DAT_14ca79110 = (*DAT_14ca79380)(param_1,"vkDestroyAccelerationStructureKHR");
      DAT_14ca792e0 = (*DAT_14ca79380)(param_1,"vkCmdBuildAccelerationStructuresKHR");
      DAT_14ca793e0 = (*DAT_14ca79380)(param_1,"vkGetAccelerationStructureBuildSizesKHR");
      DAT_14ca792d0 = (*DAT_14ca79380)(param_1,"vkGetAccelerationStructureDeviceAddressKHR");
      DAT_14ca79320 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysKHR");
      DAT_14ca79328 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysIndirectKHR");
      _DAT_14ca79118 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysIndirect2KHR");
      DAT_14ca792f0 = (*DAT_14ca79380)(param_1,"vkCreateRayTracingPipelinesKHR");
      DAT_14ca793f8 = (*DAT_14ca79380)(param_1,"vkGetRayTracingShaderGroupHandlesKHR");
      DAT_14ca79310 = (*DAT_14ca79380)(param_1,"vkCmdWriteAccelerationStructuresPropertiesKHR");
      DAT_14ca792d8 = (*DAT_14ca79380)(param_1,"vkCmdCopyAccelerationStructureKHR");
      DAT_14ca79430 = (*DAT_14ca79380)(param_1,"vkCreateRenderPass2KHR");
      DAT_14ca79120 = (*DAT_14ca79380)(param_1,"vkCmdBeginRenderPass2KHR");
      DAT_14ca79128 = (*DAT_14ca79380)(param_1,"vkGetDeviceImageMemoryRequirementsKHR");
      _DAT_14ca79130 = (*DAT_14ca79380)(param_1,"vkGetDeviceBufferMemoryRequirementsKHR");
      DAT_14ca79250 = (*DAT_14ca79380)(param_1,"vkResetQueryPoolEXT");
      DAT_14ca78df0 = (*DAT_14ca79380)(param_1,"vkCmdPipelineBarrier2KHR");
      _DAT_14ca79138 = (*DAT_14ca79380)(param_1,"vkCmdResetEvent2KHR");
      _DAT_14ca79140 = (*DAT_14ca79380)(param_1,"vkCmdSetEvent2KHR");
      _DAT_14ca79148 = (*DAT_14ca79380)(param_1,"vkCmdWaitEvents2KHR");
      _DAT_14ca79150 = (*DAT_14ca79380)(param_1,"vkQueueSubmit2KHR");
      _DAT_14ca79158 = (*DAT_14ca79380)(param_1,"vkCreateSharedSwapchainsKHR");
      DAT_14ca79160 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
      DAT_14ca78e38 = (*DAT_14ca79380)(param_1,"vkGetCalibratedTimestampsEXT");
      DAT_14ca79240 = (*DAT_14ca79380)(param_1,"vkGetBufferDeviceAddressKHR");
      DAT_14ca79168 = (*DAT_14ca79380)(param_1,"vkGetDescriptorSetLayoutSizeEXT");
      _DAT_14ca79170 = (*DAT_14ca79380)(param_1,"vkGetDescriptorSetLayoutBindingOffsetEXT");
      DAT_14ca78dd8 = (*DAT_14ca79380)(param_1,"vkCmdBindDescriptorBuffersEXT");
      DAT_14ca78de0 = (*DAT_14ca79380)(param_1,"vkCmdSetDescriptorBufferOffsetsEXT");
      DAT_14ca78de8 = (*DAT_14ca79380)(param_1,"vkGetDescriptorEXT");
      DAT_14ca792e8 = (*DAT_14ca79380)(param_1,"vkCreateDeferredOperationKHR");
      DAT_14ca79308 = (*DAT_14ca79380)(param_1,"vkDestroyDeferredOperationKHR");
      DAT_14ca79428 = (*DAT_14ca79380)(param_1,"vkDeferredOperationJoinKHR");
      DAT_14ca792f8 = (*DAT_14ca79380)(param_1,"vkGetDeferredOperationMaxConcurrencyKHR");
      DAT_14ca79300 = (*DAT_14ca79380)(param_1,"vkGetDeferredOperationResultKHR");
      DAT_14ca79178 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksEXT");
      _DAT_14ca79180 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksIndirectCountEXT");
      DAT_14ca79188 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksIndirectEXT");
      _DAT_14ca79190 = (*DAT_14ca79380)(param_1,"vkCmdWriteBufferMarkerAMD");
      _DAT_14ca79198 = (*DAT_14ca79380)(param_1,"vkCmdSetCheckpointNV");
      DAT_14ca791a0 = (*DAT_14ca79380)(param_1,"vkGetQueueCheckpointDataNV");
      DAT_14ca78df8 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
      DAT_14ca791a8 = (*DAT_14ca79380)(param_1,"vkGetDeviceFaultInfoEXT");
      DAT_14ca78d10 = (*DAT_14ca79380)(param_1,"vkCreateWin32SurfaceKHR");
      return 1;
    }
    if (DAT_14ca78d18 != (HMODULE)0x0) {
      FreeLibrary(DAT_14ca78d18);
      DAT_14ca78d18 = (HMODULE)0x0;
    }
    DAT_14ca78cdc = 0;
  }
  return 0;
}



// FUNCTION 1431c0b84 FUN_1431c0b84 body=52 status=ok
// SIG undefined FUN_1431c0b84(void)

void FUN_1431c0b84(longlong param_1,longlong param_2)

{
  FUN_1431b7b13(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1431c0bd6 FUN_1431c0bd6 body=50 status=ok
// SIG undefined FUN_1431c0bd6(void)

void FUN_1431c0bd6(longlong param_1,longlong param_2)

{
  FUN_1431b9c17(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x28),1);
  FUN_1473d9a3e(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1431c0c44 FUN_1431c0c44 body=164 status=ok
// SIG undefined FUN_1431c0c44(void)

void FUN_1431c0c44(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar1 = *param_1 + (longlong)(int)param_1[1];
  if ((ulonglong)(longlong)(int)param_1[1] < 4) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)*(int *)(lVar1 + -4);
  }
  lVar4 = -lVar4;
  do {
    lVar5 = lVar4;
    if (-5 < lVar5) {
      return;
    }
    uVar6 = (ulonglong)*(uint *)(lVar1 + 1 + lVar5);
    bVar8 = *(char *)(lVar1 + lVar5) != 'p';
    uVar7 = uVar6;
    if (!bVar8 && uVar6 == 5) {
      uVar7 = 0;
    }
    lVar4 = uVar7 + 5 + lVar5;
  } while (bVar8 || uVar6 != 5);
  pbVar2 = (byte *)(lVar1 + lVar5 + 5);
  if (pbVar2 != (byte *)0x0) {
    if (*(char *)(param_2 + 0x9c) == '\x05') {
      bVar3 = *(byte *)(param_2 + 0x9d) & 0xfe | *pbVar2 >> 4 & 1;
      *(byte *)(param_2 + 0x9d) = bVar3;
    }
    else {
      bVar3 = *(byte *)(param_2 + 0x9d);
    }
    *(byte *)(param_2 + 0x9d) = bVar3 & 0xfd | *pbVar2 >> 4 & 2;
    *(bool *)(param_2 + 0x191) = (*pbVar2 & 6) != 0;
  }
  return;
}



// FUNCTION 1431c0ce8 FUN_1431c0ce8 body=372 status=ok
// SIG undefined FUN_1431c0ce8(void)

void FUN_1431c0ce8(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  plVar6 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar6 = DAT_14ca84b20;
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))();
  lVar9 = *(longlong *)(*param_1 + 0x70);
  uVar5 = *(undefined8 *)(lVar9 + 0x38);
  if ((char)((ulonglong)uVar5 >> 0x20) != -1 && (int)uVar5 != -1) {
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar9 = lVar9 + 0x30;
    FUN_1431b8ee4(lVar9);
    lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
    bVar12 = true;
    if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar8 + 0x33) * 0x30) + 1)
        & 2) != 0) {
      bVar12 = (*(byte *)(plVar6 + 0x14) & 4) == 0;
    }
    lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
    cVar1 = *(char *)(lVar8 + 0x32);
    if (cVar1 == '\x01') {
      lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
      uVar11 = (uint)*(ushort *)(lVar8 + 0x2e);
    }
    else if (cVar1 == '\x03') {
      uVar11 = 6;
    }
    else if (cVar1 == '\x04') {
      lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
      uVar11 = (uint)*(ushort *)(lVar8 + 0x2e) * 6;
    }
    else {
      uVar11 = 1;
    }
    iVar3 = *(int *)(lVar7 + 0x30);
    lVar8 = plVar6[0x15];
    uVar2 = *(undefined1 *)(lVar7 + 0x33);
    uVar4 = *(undefined4 *)((longlong)plVar6 + 0x104);
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    uVar10 = 0x7fffffff;
    if ((ulonglong)*(byte *)(lVar7 + 0x32) < 5) {
      uVar10 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar7 + 0x32) * 4);
    }
    FUN_1431b8c8e(lVar9,plVar6[0x13],uVar10,uVar4,uVar2,(int)lVar8,0,
                  iVar3 + (uint)((char)iVar3 == '\0') & 0xff,0,uVar11,bVar12,0);
  }
  return;
}



// FUNCTION 1431c0e66 FUN_1431c0e66 body=323 status=ok
// SIG undefined FUN_1431c0e66(void)

undefined8 FUN_1431c0e66(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  local_50 = *(undefined8 *)param_1[1];
  local_5e = *(undefined1 *)((longlong)puVar2 + 0x32);
  local_90 = *puVar2;
  local_5d = *(undefined1 *)((longlong)puVar2 + 0x33);
  local_5c = *(undefined1 *)((longlong)puVar2 + 0x34);
  local_6c = *(undefined8 *)((longlong)puVar2 + 0x24);
  local_64 = *(undefined2 *)((longlong)puVar2 + 0x2c);
  local_62 = *(undefined2 *)((longlong)puVar2 + 0x2e);
  local_60 = *(undefined1 *)(puVar2 + 6);
  local_5f = *(undefined1 *)((longlong)puVar2 + 0x31);
  local_88 = puVar2[1];
  uStack_80 = puVar2[2];
  local_78 = *(undefined4 *)(puVar2 + 3);
  local_70 = *(undefined4 *)(puVar2 + 4);
  local_5b = *(undefined1 *)((longlong)puVar2 + 0x35);
  local_74 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  local_58 = 0x40000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar3 = FUN_14001cc68(0x118,0x10);
  local_a8 = *(undefined8 *)(param_2 + 8);
  FUN_1431b6a70(uVar3,0,*(undefined8 *)(lVar1 + 0x30),&local_90);
  uVar4 = FUN_14001cc68(0x130,0x10);
  local_98 = *param_1;
  local_a8 = *(undefined8 *)param_1[3];
  local_a0 = 0;
  FUN_1431ed9da(uVar4,uVar3,0,*(undefined8 *)(param_2 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c0faa FUN_1431c0faa body=70 status=ok
// SIG undefined FUN_1431c0faa(void)

undefined8 * FUN_1431c0faa(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a36bc10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1431c0ff6 FUN_1431c0ff6 body=29 status=ok
// SIG undefined FUN_1431c0ff6(void)

void FUN_1431c0ff6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431c1014 FUN_1431c1014 body=29 status=ok
// SIG undefined FUN_1431c1014(void)

undefined8 FUN_1431c1014(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c1032 FUN_1431c1032 body=420 status=ok
// SIG undefined FUN_1431c1032(void)

void FUN_1431c1032(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[1];
  local_58 = *(undefined8 *)*param_1;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar5 = FUN_14001cc68(0x88,0x10);
  local_a0 = *(undefined8 *)(param_2 + 8);
  local_8c = *(undefined4 *)((undefined8 *)param_1[2] + 1);
  local_94 = *(undefined8 *)param_1[2];
  local_a8 = 0;
  FUN_147397b42(lVar5,*(undefined8 *)(lVar1 + 0x30),&local_94,&local_88);
  *(undefined4 *)(lVar5 + 0x18) = 0x40000;
  puVar6 = (undefined8 *)FUN_14001cc68(0x108,0x10);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = *(undefined8 *)param_1[3];
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *puVar6 = &PTR_LAB_14a37fd70;
  puVar6[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = uVar4;
  puVar6[5] = uVar3;
  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x96) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x9e) = 0;
  *(undefined1 *)((longlong)puVar6 + 0xa6) = 1;
  *puVar6 = &PTR_FUN_14a354900;
  puVar6[0x15] = *puVar2;
  *(undefined4 *)(puVar6 + 0x16) = *(undefined4 *)(puVar2 + 1);
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0x100000000;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0x100000000;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c11d8 FUN_1431c11d8 body=70 status=ok
// SIG undefined FUN_1431c11d8(void)

undefined8 * FUN_1431c11d8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a36bc30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1431c1224 FUN_1431c1224 body=29 status=ok
// SIG undefined FUN_1431c1224(void)

void FUN_1431c1224(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431c1242 FUN_1431c1242 body=29 status=ok
// SIG undefined FUN_1431c1242(void)

undefined8 FUN_1431c1242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c1260 FUN_1431c1260 body=104 status=ok
// SIG undefined FUN_1431c1260(void)

void FUN_1431c1260(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar4 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    lVar2 = (**(code **)(*plVar4 + 0x30))();
    plVar3 = (longlong *)(lVar2 + 0x68);
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
  }
  plVar4 = plVar3 + 1;
  if (plVar3[1] == 0) {
    lVar2 = 0;
  }
  else {
    *(longlong *)(plVar3[1] + 0x40) = lVar1 + 0x60;
    lVar2 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x60) = lVar2;
  *(longlong **)(lVar1 + 0x68) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473d8aaa(lVar1 + 0x28);
  return;
}



// FUNCTION 1431c12c8 FUN_1431c12c8 body=105 status=ok
// SIG undefined FUN_1431c12c8(void)

void FUN_1431c12c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    lVar2 = (**(code **)(*plVar4 + 0x30))();
    plVar3 = (longlong *)(lVar2 + 0x68);
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
  }
  plVar4 = plVar3 + 1;
  if (plVar3[1] == 0) {
    lVar2 = 0;
  }
  else {
    *(longlong *)(plVar3[1] + 0x40) = lVar1 + 0x60;
    lVar2 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x60) = lVar2;
  *(longlong **)(lVar1 + 0x68) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473d8aaa(lVar1 + 0x28);
  return;
}



// FUNCTION 1431c1332 FUN_1431c1332 body=104 status=ok
// SIG undefined FUN_1431c1332(void)

void FUN_1431c1332(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar4 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    lVar2 = (**(code **)(*plVar4 + 0x30))();
    plVar3 = (longlong *)(lVar2 + 0x68);
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
  }
  plVar4 = plVar3 + 1;
  if (plVar3[1] == 0) {
    lVar2 = 0;
  }
  else {
    *(longlong *)(plVar3[1] + 0x40) = lVar1 + 0x60;
    lVar2 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x60) = lVar2;
  *(longlong **)(lVar1 + 0x68) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473d8e24(lVar1 + 0x28);
  return;
}



// FUNCTION 1431c139a FUN_1431c139a body=105 status=ok
// SIG undefined FUN_1431c139a(void)

void FUN_1431c139a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    lVar2 = (**(code **)(*plVar4 + 0x30))();
    plVar3 = (longlong *)(lVar2 + 0x68);
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
  }
  plVar4 = plVar3 + 1;
  if (plVar3[1] == 0) {
    lVar2 = 0;
  }
  else {
    *(longlong *)(plVar3[1] + 0x40) = lVar1 + 0x60;
    lVar2 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x60) = lVar2;
  *(longlong **)(lVar1 + 0x68) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473d8e24(lVar1 + 0x28);
  return;
}



// FUNCTION 1431c1404 FUN_1431c1404 body=413 status=ok
// SIG undefined FUN_1431c1404(void)

void FUN_1431c1404(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 local_1b0 [56];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  local_178 = 0;
  local_170 = 0x100000000;
  local_a8 = 0;
  local_a0 = 0x200000000;
  local_60 = 0;
  local_58 = 0x200000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_1b8 = 0x1000;
  FUN_14739445e(local_1b0,0x18000,0x1000,0x10000);
  FUN_147397068(local_1b0,lVar1);
  FUN_1473945b6(local_1b0);
  local_1b8 = *(undefined4 *)(param_1 + 0x38);
  (*DAT_14ca79338)(*(undefined8 *)(lVar1 + 0x88),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50),
                   *(int *)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x18) + 0x60),
                   *(undefined4 *)(param_1 + 0x2c));
  local_178 = 0;
  local_170 = 0x100000000;
  local_a8 = 0;
  local_a0 = 0x200000000;
  local_60 = 0;
  local_58 = 0x200000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_1b8 = 0x10000;
  FUN_14739445e(local_1b0,0x1000,0x18000,0x1000);
  FUN_147397068(local_1b0,lVar1);
  FUN_1473945b6(local_1b0);
  if ((local_50 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c15b9 FUN_1431c15b9 body=26 status=ok
// SIG undefined FUN_1431c15b9(void)

void FUN_1431c15b9(undefined4 *param_1,int param_2)

{
  do {
    *param_1 = 0x3b9deeb0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1 = param_1 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1431c15d4 FUN_1431c15d4 body=248 status=ok
// SIG undefined FUN_1431c15d4(void)

void FUN_1431c15d4(longlong param_1,int param_2)

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



// FUNCTION 1431c16cc FUN_1431c16cc body=391 status=ok
// SIG undefined FUN_1431c16cc(void)

void FUN_1431c16cc(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_488 [32];
  undefined4 local_468;
  longlong local_458;
  int local_450;
  undefined8 local_448;
  int local_440;
  longlong local_438;
  LARGE_INTEGER local_428;
  int local_420;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_488;
  iVar1 = *param_2;
  QueryPerformanceCounter(&local_428);
  lVar2 = local_428.QuadPart - *param_1;
  auVar3._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
  auVar3._0_8_ = lVar2;
  auVar3._12_4_ = 0x45300000;
  if ((float)((((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
              (auVar3._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) < *(float *)(param_1 + 1)) {
    lVar2 = *(longlong *)(*(longlong *)param_1[2] + 8 + (longlong)iVar1 * 0x10);
    FUN_1473d1a0a(&local_448,lVar2 + 0xe8);
    local_468 = *(undefined4 *)(lVar2 + 0x74);
    iVar1 = *(int *)(lVar2 + 0xf8);
    if (iVar1 < 0) {
      iVar1 = *(int *)(lVar2 + 0xf0);
    }
    FUN_1407bf796(&local_428,0x400,"main_%0.8x_%0.8x",iVar1);
    FUN_1400b22c2(&local_458,&local_428);
    local_428.QuadPart = local_458;
    local_420 = local_450 + -1;
    if (local_450 == 0) {
      local_420 = 0;
    }
    FUN_142b7740d(local_448,local_440 << 2,&local_428);
    if (local_458 != 0) {
      FUN_1400020a8(local_458);
    }
    if (local_438 != 0) {
      FUN_1400020a8();
    }
  }
  else if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca78d30) {
    FUN_144b3d300(&DAT_14ca78d30);
    if (DAT_14ca78d30 == -1) {
      _Init_thread_footer(&DAT_14ca78d30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c189a FUN_1431c189a body=140 status=ok
// SIG undefined FUN_1431c189a(void)

void FUN_1431c189a(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  uVar1 = *(undefined1 *)(lVar2 + 0x119);
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(lVar2,&local_38);
  *(undefined1 *)(lVar2 + 0x119) = uVar1;
  FUN_1473db96e(lVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c1932 FUN_1431c1932 body=12 status=ok
// SIG undefined FUN_1431c1932(void)

void FUN_1431c1932(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431c193b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431c193e FUN_1431c193e body=29 status=ok
// SIG undefined FUN_1431c193e(void)

undefined8 FUN_1431c193e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c195c FUN_1431c195c body=282 status=ok
// SIG undefined FUN_1431c195c(void)

undefined8 * FUN_1431c195c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1431c0c11);
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



// FUNCTION 1431c1a76 FUN_1431c1a76 body=190 status=ok
// SIG undefined FUN_1431c1a76(void)

void FUN_1431c1a76(undefined8 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  uVar2 = *(undefined1 *)(lVar3 + 0x119);
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(lVar3,&local_38);
  *(undefined1 *)(lVar3 + 0x119) = uVar2;
  FUN_1473db96e(lVar3,&local_38);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c1b36 FUN_1431c1b36 body=595 status=ok
// SIG undefined FUN_1431c1b36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1431c1b36(longlong param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_e8 [40];
  LARGE_INTEGER local_c0 [3];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *param_2;
  if ((longlong)*(int *)(lVar2 + 0x11c) != -1) {
    lVar3 = *(longlong *)(lVar2 + 0x120);
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x88) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x88);
    }
    lVar2 = *(longlong *)(lVar7 + (longlong)*(int *)(lVar2 + 0x11c) * 8);
    puVar4 = *(undefined8 **)(param_1 + 8);
    local_a0 = 0x3b9acde9;
    local_9c = 0;
    uStack_94 = 0;
    local_8c = 0;
    uStack_88 = (undefined8 *)0x0;
    local_7c = 0;
    uStack_68 = 0;
    local_a8 = 0;
    if (lVar2 != 0) {
      uStack_94 = 0x100000000;
      local_a8 = *(undefined8 *)(lVar2 + 0x18);
      uStack_88 = &local_a8;
    }
    uStack_80 = 1;
    uStack_78 = lVar3 + 8;
    uStack_70 = lVar3 + 0x28;
    if ((*(char *)(lVar3 + 0x88) != '\0') || (DAT_14ca789c8 != 0)) {
      iVar6 = FUN_1469133ca();
      if ((0 < iVar6) && (DAT_14c760ca8 != 0)) {
        QueryPerformanceCounter(local_c0);
        dVar5 = ((double)local_c0[0].QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
        dVar1 = *(double *)(lVar3 + 0x58);
        uVar9 = SUB84(dVar1,0);
        uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (0.0 < dVar1 - dVar5) {
          FUN_1403936f2(local_c0,2,1);
          FUN_14279b9b6((float)(dVar1 - dVar5));
          FUN_1402488ea(local_c0);
          uVar9 = (undefined4)*(undefined8 *)(lVar3 + 0x58);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x58) >> 0x20);
        }
        dVar1 = 1.0 / (double)iVar6 + (double)CONCAT44(uVar10,uVar9);
        if (dVar1 <= dVar5) {
          dVar1 = dVar5;
        }
        *(double *)(lVar3 + 0x58) = dVar1;
      }
    }
    *(int *)(lVar3 + 0x8c) = *(int *)(lVar3 + 0x8c) + 1;
    FUN_1403936f2(local_c0,2,1);
    iVar6 = (*DAT_14ca78e40)(*puVar4,&local_a0);
    FUN_1402488ea(local_c0);
    *(undefined4 *)(lVar3 + 0x28) = 0xffffffff;
    if (iVar6 < 0) {
      if (iVar6 == -0x3b9acdec) {
        uVar8 = 0xffffffff;
        goto LAB_1431c1c8e;
      }
      if (iVar6 == -1000000000) {
        uVar8 = 0xfffffffe;
        goto LAB_1431c1c8e;
      }
LAB_1431c1c82:
      FUN_1431b4552(iVar6);
    }
    else if ((iVar6 != 0) && (iVar6 != 0x3b9acdeb)) goto LAB_1431c1c82;
    *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
  }
  uVar8 = 0;
LAB_1431c1c8e:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c1da2 FUN_1431c1da2 body=5 status=ok
// SIG undefined FUN_1431c1da2(void)

longlong FUN_1431c1da2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1431c1da8 FUN_1431c1da8 body=12 status=ok
// SIG undefined FUN_1431c1da8(void)

void FUN_1431c1da8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431c1db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431c1db4 FUN_1431c1db4 body=29 status=ok
// SIG undefined FUN_1431c1db4(void)

undefined8 FUN_1431c1db4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c1dd2 FUN_1431c1dd2 body=157 status=ok
// SIG undefined FUN_1431c1dd2(void)

void FUN_1431c1dd2(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x11);
  lVar3 = param_1[2];
  lVar2 = *param_1;
  *(longlong *)(lVar2 + 0x110) = param_1[1];
  *(char *)(lVar2 + 0x118) = (char)lVar3;
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(lVar2,&local_38);
  *(undefined1 *)(lVar2 + 0x119) = uVar1;
  FUN_1473db96e(lVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c1e7a FUN_1431c1e7a body=12 status=ok
// SIG undefined FUN_1431c1e7a(void)

void FUN_1431c1e7a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431c1e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431c1e86 FUN_1431c1e86 body=29 status=ok
// SIG undefined FUN_1431c1e86(void)

undefined8 FUN_1431c1e86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c1ea4 FUN_1431c1ea4 body=282 status=ok
// SIG undefined FUN_1431c1ea4(void)

undefined8 * FUN_1431c1ea4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1431c0c11);
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



// FUNCTION 1431c1fbe FUN_1431c1fbe body=216 status=ok
// SIG undefined FUN_1431c1fbe(void)

void FUN_1431c1fbe(undefined8 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0xb9);
  uVar3 = *(undefined1 *)(param_1 + 0x17);
  lVar4 = param_1[0x15];
  *(undefined8 *)(lVar4 + 0x110) = param_1[0x16];
  *(undefined1 *)(lVar4 + 0x118) = uVar3;
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(lVar4,&local_38);
  *(undefined1 *)(lVar4 + 0x119) = uVar2;
  FUN_1473db96e(lVar4,&local_38);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c2098 FUN_1431c2098 body=153 status=ok
// SIG undefined FUN_1431c2098(void)

void FUN_1431c2098(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  lVar1 = *param_1;
  *(longlong *)(lVar1 + 0x110) = param_1[1];
  *(char *)(lVar1 + 0x118) = (char)lVar2;
  local_28 = 0;
  uStack_20 = uStack_20 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_28,5);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1473dcafc(lVar1,&local_28);
  *(undefined1 *)(lVar1 + 0x119) = 0;
  FUN_1473db96e(lVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c213c FUN_1431c213c body=12 status=ok
// SIG undefined FUN_1431c213c(void)

void FUN_1431c213c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431c2145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431c2148 FUN_1431c2148 body=29 status=ok
// SIG undefined FUN_1431c2148(void)

undefined8 FUN_1431c2148(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431c2166 FUN_1431c2166 body=282 status=ok
// SIG undefined FUN_1431c2166(void)

undefined8 * FUN_1431c2166(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1431c0c11);
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



// FUNCTION 1431c2280 FUN_1431c2280 body=207 status=ok
// SIG undefined FUN_1431c2280(void)

void FUN_1431c2280(undefined8 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x17);
  lVar3 = param_1[0x15];
  *(undefined8 *)(lVar3 + 0x110) = param_1[0x16];
  *(undefined1 *)(lVar3 + 0x118) = uVar2;
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(lVar3,&local_38);
  *(undefined1 *)(lVar3 + 0x119) = 0;
  FUN_1473db96e(lVar3,&local_38);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c2355 FUN_1431c2355 body=1126 status=ok
// SIG undefined FUN_1431c2355(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c2355(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14ca78914);
  if (cVar1 == '\0') {
    _DAT_14ca78914 = 0;
    uRam000000014ca7891c = 0;
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  local_60 = 2;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca79398,L"r.Vulkan.DynamicGlobalUBs",&local_60,&DAT_14a369c70);
  atexit(FUN_1431b4188);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca78928,L"r.Vulkan.CompressSPIRV",&DAT_14ca78938,
                L"0 SPIRV source is stored in RAM as-is. (default)\n1 SPIRV source is compressed on load and decompressed as when needed, this saves RAM but can introduce hitching when creating shaders."
               );
  atexit(FUN_1431b41cd);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca793b8,4000);
  atexit((_func_5014 *)&LAB_1431b4212);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78948);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78948,4000);
  atexit((_func_5014 *)&LAB_1431b4bbb);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca78970,L"r.Vulkan.KeepSwapChain",&DAT_14c760c9c,
                L"Whether to keep old swap chain to pass through when creating the next one");
  atexit(FUN_1431b4bc9);
  local_68 = 4;
  FUN_141471170(&DAT_14ca78988,L"r.Vulkan.SwapChainIgnoreExtraImages",&DAT_14ca78980,
                L"Whether to ignore extra images created in swapchain and stick with a requested number of images"
               );
  atexit(FUN_1431b4c0e);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca78998,L"r.Vulkan.CpuWaitForFence",&DAT_14c760ca0,
                L"Whether to have the Cpu wait for the fence in AcquireImageIndex");
  atexit(FUN_1431b4c53);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca789a8,L"r.Vulkan.CPURenderthreadFramePacer",&DAT_14c760ca4,
                L"Whether to enable the simple Render thread CPU Framepacer for Vulkan");
  atexit(FUN_1431b4c98);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca789b8,L"r.Vulkan.CPURHIThreadFramePacer",&DAT_14c760ca8,
                L"Whether to enable the simple RHI thread CPU Framepacer for Vulkan");
  atexit(FUN_1431b4cdd);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca789d0,L"r.Vulkan.ForcePacingWithoutVSync",&DAT_14ca789c8,
                L"Whether to CPU pacers remain enabled even if VSync is off");
  atexit(FUN_1431b4d22);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca789e0,L"r.Vulkan.PreTransform",&local_60,
                L"0: Surface transformed in Vulkan Presentation Engine1: Surface transformed in App to save bandwidth (Default)"
               );
  atexit(FUN_1431b4d67);
  DAT_14ca78a18 = 0;
  DAT_14ca78a20 = 0;
  DAT_14ca789f8 = 0;
  _DAT_14ca78a00 = 0;
  _DAT_14ca78a24 = 0xffffffff00000080;
  DAT_14ca78a2c = 0;
  DAT_14ca78a38 = 0;
  DAT_14ca78a40 = 0;
  atexit(FUN_1431b4dac);
  local_68 = 0;
  FUN_141471170(&DAT_14ca78a90,L"r.Vulkan.SubmitOnTextureUnlock",&DAT_14c760cac,
                L"Whether to submit upload cmd buffer on each texture unlock.\n 0: Do not submit\n 1: Submit (default)"
               );
  atexit(FUN_1431b5fa7);
  local_68 = 0;
  FUN_141471170(&DAT_14ca78aa8,L"r.Vulkan.DepthStencilForceStorageBit",&DAT_14ca78aa0,
                L"Whether to force Image Usage Storage on Depth (can disable framebuffer compression).\n 0: Not enabled\n 1: Enables override for IMAGE_USAGE_STORAGE"
               );
  atexit(FUN_1431b5fec);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78ab8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78ab8,4000);
  atexit((_func_5014 *)&LAB_1431b6031);
  DAT_14ca78b00 = 0;
  DAT_14ca78b08 = 0;
  DAT_14ca78ae0 = 0;
  _DAT_14ca78ae8 = 0;
  _DAT_14ca78b0c = 0xffffffff00000080;
  DAT_14ca78b14 = 0;
  DAT_14ca78b20 = 0;
  DAT_14ca78b28 = 0;
  atexit(FUN_1431b603f);
  local_68 = 0;
  FUN_141471170(&DAT_14ca78bc8,L"r.Vulkan.AllowUniformUpload",&DAT_14c760cb0,
                L"Allow Uniform Buffer uploads outside of renderpasses\n 0: Disabled, buffers are always reallocated\n 1: Enabled, buffers are uploaded outside renderpasses"
               );
  atexit(FUN_1431b9bd2);
  FUN_140056680(&DAT_14ca78bd8,L"EventTooDeep");
  atexit((_func_5014 *)&LAB_1431ba277);
  puVar2 = DAT_14ca78bd8;
  if (DAT_14ca78be0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  _DAT_14ca78be8 = FUN_144a1ccda(puVar2,0);
  DAT_14ca78c30 = 0;
  DAT_14ca78c38 = 0;
  DAT_14ca78c10 = 0;
  _DAT_14ca78c18 = 0;
  _DAT_14ca78c3c = 0xffffffff00000080;
  DAT_14ca78c44 = 0;
  DAT_14ca78c50 = 0;
  DAT_14ca78c58 = 0;
  atexit(FUN_1431baff4);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c27bc FUN_1431c27bc body=1393 status=ok
// SIG undefined FUN_1431c27bc(void)

void FUN_1431c27bc(undefined8 param_1)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_160;
  undefined2 *local_150;
  int local_148;
  undefined1 local_140 [256];
  undefined1 *local_40;
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  DAT_14c760ce0 = 0;
  (*DAT_14ca7fb40)(0x8872,&DAT_14c760ce0);
  DAT_14c760ce8 = 0;
  (*DAT_14ca7fb40)(0x8b4c,&DAT_14c760ce8);
  DAT_14c760ce4 = 0;
  (*DAT_14ca7fb40)(0x91bc,&DAT_14c760ce4);
  DAT_14c760d20 = 0;
  (*DAT_14ca7fb40)(0x8b4d,&DAT_14c760d20);
  if ((&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf] == 1) {
    DAT_14c760ce0 = 0x10;
    DAT_14c760ce8 = 0x10;
    DAT_14c760cb4 = 0;
    DAT_14c760ce4 = 0x10;
    DAT_14c760d20 = 0x30;
  }
  else if (DAT_14c760d20 < 0x30) {
    local_168 = DAT_14c760d20;
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLDrv.cpp",0x24e,
                  L"GL RHI requires a minimum combined texture unit count of %d, this device reports %d."
                  ,0x30);
  }
  local_160 = 0xffffffff;
  local_168 = 0;
  iVar1 = FUN_1447ee042(param_1,L"GL_KHR_texture_compression_astc_ldr",0x23,1);
  DAT_14ca79689 = iVar1 != -1;
  if (iVar1 == -1) {
    DAT_14ca7968a = false;
  }
  else {
    local_160 = 0xffffffff;
    local_168 = 0;
    iVar1 = FUN_1447ee042(param_1,L"GL_KHR_texture_compression_astc_hdr",0x23,1);
    DAT_14ca7968a = iVar1 != -1;
  }
  local_160 = 0xffffffff;
  local_168 = 0;
  FUN_1447ee042(param_1,L"GL_ARB_seamless_cube_map",0x18,1);
  local_160 = 0xffffffff;
  local_168 = 0;
  iVar1 = FUN_1447ee042(param_1,L"GL_EXT_texture_filter_anisotropic",0x21,1);
  DAT_14ca7a3d0 = iVar1 != -1;
  local_160 = 0xffffffff;
  local_168 = 0;
  iVar1 = FUN_1447ee042(param_1,L"GL_ARB_draw_buffers_blend",0x19,1);
  DAT_14ca7968b = iVar1 != -1;
  _Str = (char *)(*DAT_14ca7fb50)(0x1f00);
  local_40 = (undefined1 *)0x0;
  if (_Str == (char *)0x0) {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    iVar1 = (int)sVar2;
    uVar8 = iVar1 + 1;
    local_30 = iVar1;
    if (uVar8 < 0x81) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_40,0,uVar8,2);
      puVar7 = local_40;
    }
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = local_140;
    }
    local_38 = puVar7;
    if (-1 < iVar1) {
      uVar5 = 0;
      do {
        *(short *)(puVar7 + uVar5 * 2) = (short)_Str[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
  }
  FUN_140056680(&local_150,local_38);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_160 = 0xffffffff;
  local_168 = 0;
  iVar1 = FUN_1447ee042(&local_150,L"ATI ",4,1);
  if (iVar1 == -1) {
    local_160 = 0xffffffff;
    local_168 = 0;
    iVar1 = FUN_1447ee042(&local_150,L"Intel ",6,1);
    if (iVar1 == -1) {
      puVar4 = local_150;
      if (local_148 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      while( true ) {
        uVar9 = *(ushort *)((longlong)puVar4 + lVar6);
        uVar5 = (ulonglong)uVar9;
        uVar10 = *(ushort *)((longlong)L"Intel" + lVar6);
        if (uVar9 != uVar10) break;
        if (uVar9 == 0) goto LAB_1431c2ab1;
LAB_1431c2b83:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar11]) goto LAB_1431c2b83;
      }
      if (uVar9 != uVar10) {
        local_160 = 0xffffffff;
        local_168 = 0;
        iVar1 = FUN_1447ee042(&local_150,L"NVIDIA ",7,1);
        if (iVar1 != -1) {
          DAT_14ca84df4 = 0x10de;
          goto LAB_1431c2ac2;
        }
        local_160 = 0xffffffff;
        local_168 = 0;
        iVar1 = FUN_1447ee042(&local_150,L"ImgTec",6,1);
        if (iVar1 == -1) {
          local_160 = 0xffffffff;
          local_168 = 0;
          iVar1 = FUN_1447ee042(&local_150,L"Imagination",0xb,1);
          if (iVar1 == -1) {
            local_160 = 0xffffffff;
            local_168 = 0;
            iVar1 = FUN_1447ee042(&local_150,&DAT_14a3715ea,3,1);
            if (iVar1 == -1) {
              local_160 = 0xffffffff;
              local_168 = 0;
              iVar1 = FUN_1447ee042(&local_150,L"Qualcomm",8,1);
              if (iVar1 != -1) {
                DAT_14ca84df4 = 0x5143;
              }
            }
            else {
              DAT_14ca84df4 = 0x13b5;
            }
            goto LAB_1431c2ac2;
          }
        }
        DAT_14ca84df4 = 0x1010;
        goto LAB_1431c2ac2;
      }
    }
LAB_1431c2ab1:
    DAT_14ca84df4 = 0x8086;
  }
  else {
    DAT_14ca84df4 = 0x1002;
  }
  DAT_14ca7a3d1 = 1;
LAB_1431c2ac2:
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"OpenGL.UseStagingBuffer",1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x98))(plVar3,&DAT_149e25dfc,0xd000000,0);
  }
  if (local_150 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c2d2e FUN_1431c2d2e body=69 status=ok
// SIG undefined FUN_1431c2d2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c2d2e(void)

{
  _DAT_14ca79460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c2d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79468,1);
  return;
}



// FUNCTION 1431c2d73 FUN_1431c2d73 body=428 status=ok
// SIG undefined FUN_1431c2d73(void)

void FUN_1431c2d73(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar5 = FUN_1410fe39e(DAT_14c892f44,uVar1,0,0);
  lVar3 = param_2[1];
  *(int *)(param_2 + 1) = (int)lVar3 + iVar5 + 4;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar3) < iVar5 + 4U) {
    FUN_1447403be(param_2);
  }
  iVar6 = *(int *)(param_1 + 1);
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_40 = (longlong)iVar5;
  local_48 = 0;
  local_50 = 0;
  local_58 = (longlong)iVar6;
  cVar4 = FUN_1410fe780(DAT_14c892f44,lVar3 + 4,&local_40,uVar2);
  if (((int)local_40 == local_40) && (cVar4 != '\0')) {
    iVar6 = (int)local_40 + 4;
    iVar5 = (int)param_2[1];
    if (iVar5 < iVar6) {
      *(int *)(param_2 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar5) < (uint)(iVar6 - iVar5)) {
        FUN_1447403be(param_2);
      }
      memset((void *)((longlong)iVar5 + *param_2),0,(longlong)(iVar6 - iVar5));
    }
    else {
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (iVar6 < iVar5) {
        *(int *)(param_2 + 1) = iVar6;
        FUN_140b3f66e(param_2);
      }
    }
    if (*(int *)((longlong)param_2 + 0xc) != (int)param_2[1]) {
      FUN_144893a1c(param_2);
    }
    *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 1);
  }
  else {
    FUN_140393c76(param_2,*(int *)(param_1 + 1) + 4,1);
    *(undefined4 *)*param_2 = 0xffffffff;
    memcpy((void *)(*param_2 + 4),(void *)*param_1,(longlong)*(int *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c2f21 FUN_1431c2f21 body=69 status=ok
// SIG undefined FUN_1431c2f21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c2f21(void)

{
  _DAT_14ca79478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c2f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79480,1);
  return;
}



// FUNCTION 1431c2f77 FUN_1431c2f77 body=41 status=ok
// SIG undefined FUN_1431c2f77(void)

void FUN_1431c2f77(void)

{
  DAT_14ca794e0 = 0;
  if (DAT_14ca794d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70388();
  return;
}



// FUNCTION 1431c2fa0 FUN_1431c2fa0 body=244 status=ok
// SIG undefined FUN_1431c2fa0(void)

void FUN_1431c2fa0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (DAT_14ca85164 == '\x01') {
    (*DAT_14ca7fc70)(1,param_1 + 0x18);
  }
  else {
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar1 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar1;
    DAT_14ca85130 = puVar1 + 1;
    puVar1[1] = 0;
    *puVar1 = &PTR_LAB_14a371238;
    puVar1[2] = param_1;
  }
  local_20 = 0;
  local_18 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_20,5);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c3096 FUN_1431c3096 body=357 status=ok
// SIG undefined FUN_1431c3096(void)

longlong FUN_1431c3096(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  local_34 = param_3;
  if ((DAT_14ca7fd10 == 0) || (DAT_14c760ccc == 0)) {
    local_40 = 0;
    if (DAT_14ca85164 == '\x01') {
      (*DAT_14ca7fba8)(0x8f37,*(undefined4 *)(param_1 + 0x18));
      local_40 = (*DAT_14ca7fd18)(0x8f37,0,param_3,1);
      local_40 = (ulonglong)param_2 + local_40;
    }
    else {
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar3 = puVar1 + 6;
      if (DAT_14ca85108 < puVar3) {
        FUN_140023dd8(&DAT_14ca85100,0x38);
        puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar3 = puVar1 + 6;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar3;
      *DAT_14ca85130 = puVar1;
      DAT_14ca85130 = puVar1 + 1;
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_14a371240;
      puVar1[2] = param_1;
      puVar1[3] = &local_34;
      puVar1[4] = &local_40;
      puVar1[5] = &local_38;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,5);
    lVar2 = local_40;
  }
  else {
    lVar2 = (ulonglong)param_2 + *(longlong *)(param_1 + 0x20);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c31fc FUN_1431c31fc body=165 status=ok
// SIG undefined FUN_1431c31fc(void)

void FUN_1431c31fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_4 + 0x18))(param_4);
    if ((cVar1 != '\0') && ((int)param_4[2] == 0)) goto LAB_1431c3265;
  }
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
LAB_1431c3265:
  local_48 = param_6;
  (**(code **)(*DAT_14ca83900 + 0xe8))(DAT_14ca83900,param_3,param_4,param_5);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c32b9 FUN_1431c32b9 body=69 status=ok
// SIG undefined FUN_1431c32b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c32b9(void)

{
  _DAT_14ca79508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c32fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79510,1);
  return;
}



// FUNCTION 1431c32fe FUN_1431c32fe body=69 status=ok
// SIG undefined FUN_1431c32fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c32fe(void)

{
  _DAT_14ca79520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c3340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79528,1);
  return;
}



// FUNCTION 1431c3343 FUN_1431c3343 body=69 status=ok
// SIG undefined FUN_1431c3343(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c3343(void)

{
  _DAT_14ca79530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c3385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79538,1);
  return;
}



// FUNCTION 1431c3388 FUN_1431c3388 body=69 status=ok
// SIG undefined FUN_1431c3388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c3388(void)

{
  _DAT_14ca79548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c33ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79550,1);
  return;
}



// FUNCTION 1431c33cd FUN_1431c33cd body=69 status=ok
// SIG undefined FUN_1431c33cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c33cd(void)

{
  _DAT_14ca79558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c340f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79560,1);
  return;
}



// FUNCTION 1431c3412 FUN_1431c3412 body=69 status=ok
// SIG undefined FUN_1431c3412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c3412(void)

{
  _DAT_14ca79568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c3454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79570,1);
  return;
}



// FUNCTION 1431c3457 FUN_1431c3457 body=69 status=ok
// SIG undefined FUN_1431c3457(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c3457(void)

{
  _DAT_14ca79578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c3499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79580,1);
  return;
}



// FUNCTION 1431c349c FUN_1431c349c body=69 status=ok
// SIG undefined FUN_1431c349c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c349c(void)

{
  _DAT_14ca79588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c34de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79590,1);
  return;
}



// FUNCTION 1431c34e1 FUN_1431c34e1 body=69 status=ok
// SIG undefined FUN_1431c34e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c34e1(void)

{
  _DAT_14ca795a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c3523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca795a8,1);
  return;
}



// FUNCTION 1431c3526 FUN_1431c3526 body=1014 status=ok
// SIG undefined FUN_1431c3526(void)

void FUN_1431c3526(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined3 uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  uint local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_94;
  longlong local_90;
  uint local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x80);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x88);
  local_94 = param_3;
  if ((*(longlong *)(param_2 + 0x478) == lVar13) &&
     (uVar16 = *(uint *)(lVar7 + 0xe8), uVar16 == *(uint *)(param_2 + 0x6c4))) {
    uVar14 = *(uint *)(param_2 + 0x6c0);
    bVar4 = false;
    uVar12 = uVar16;
  }
  else {
    if (*(int *)(lVar13 + 0x1ec) < 1) {
      uVar14 = 0;
    }
    else {
      local_90 = param_2 + 0x480;
      pcVar8 = (char *)(lVar13 + 0x2a);
      lVar10 = 0;
      uVar14 = 0;
      local_b0 = param_4;
      local_a8 = lVar13;
      local_a0 = lVar7;
      do {
        bVar5 = pcVar8[-1];
        uVar16 = *(uint *)(pcVar8 + -0x16);
        puVar1 = (uint *)(local_90 + (ulonglong)bVar5 * 0x14);
        uVar12 = 1 << (bVar5 & 0x1f);
        if ((*(uint *)(lVar7 + 0xe8) >> (bVar5 & 0x1f) & 1) == 0) {
          if (puVar1[3] != uVar16) {
            (*DAT_14ca7fd98)(bVar5,(ulonglong)uVar16);
            puVar1[3] = uVar16;
            lVar7 = local_a0;
            lVar13 = local_a8;
          }
        }
        else if (uVar16 < 0x10) {
          uVar15 = (ulonglong)*(uint *)(pcVar8 + -10);
          local_88[uVar16] = *(uint *)(pcVar8 + -10);
          if ((puVar1[2] == *(uint *)(pcVar8 + -0x12)) &&
             (uVar15 = (ulonglong)*puVar1, *puVar1 == *(uint *)(pcVar8 + -0xe))) {
            uVar2 = puVar1[1];
            uVar15 = (ulonglong)uVar2;
            if (uVar2 != *(uint *)(pcVar8 + -0x1a)) goto LAB_1431c364c;
            uVar6 = (undefined3)(uVar2 >> 8);
            uVar15 = (ulonglong)CONCAT31(uVar6,(char)puVar1[4]);
            if (((char)puVar1[4] != pcVar8[-2]) ||
               (uVar15 = (ulonglong)CONCAT31(uVar6,*(char *)((longlong)puVar1 + 0x11)),
               *(char *)((longlong)puVar1 + 0x11) != *pcVar8)) goto LAB_1431c364c;
          }
          else {
LAB_1431c364c:
            if (*pcVar8 == '\0') {
              (*DAT_14ca7fd88)(bVar5,*(undefined4 *)(pcVar8 + -0xe),*(undefined4 *)(pcVar8 + -0x1a))
              ;
            }
            else {
              local_b8 = *(uint *)(pcVar8 + -0x12);
              (*DAT_14ca7fd90)(bVar5,*(undefined4 *)(pcVar8 + -0xe),*(undefined4 *)(pcVar8 + -0x1a),
                               CONCAT71((int7)(uVar15 >> 8),pcVar8[-2]));
            }
            puVar1[2] = *(uint *)(pcVar8 + -0x12);
            *puVar1 = *(uint *)(pcVar8 + -0xe);
            puVar1[1] = *(uint *)(pcVar8 + -0x1a);
            *(char *)(puVar1 + 4) = pcVar8[-2];
            *(char *)((longlong)puVar1 + 0x11) = *pcVar8;
          }
          if (puVar1[3] != uVar16) {
            (*DAT_14ca7fd98)(bVar5,*(undefined4 *)(pcVar8 + -0x16));
            puVar1[3] = uVar16;
          }
          uVar14 = uVar14 | 1 << (uVar16 & 0x1f);
          lVar7 = local_a0;
          lVar13 = local_a8;
          if ((*(uint *)(param_2 + 0x6c4) & uVar12) == 0) {
            *(uint *)(param_2 + 0x6c4) = *(uint *)(param_2 + 0x6c4) | uVar12;
            (*DAT_14ca7fc50)(bVar5);
            lVar7 = local_a0;
            lVar13 = local_a8;
          }
        }
        else {
          if ((*(uint *)(param_2 + 0x6c4) & uVar12) != 0) {
            *(uint *)(param_2 + 0x6c4) = *(uint *)(param_2 + 0x6c4) & ~uVar12;
            (*DAT_14ca7fc58)(bVar5);
          }
          (*DAT_14ca7fc60)(bVar5,&DAT_14ca795b0);
          lVar7 = local_a0;
          lVar13 = local_a8;
        }
        lVar10 = lVar10 + 1;
        pcVar8 = pcVar8 + 0x1c;
        param_4 = local_b0;
      } while (lVar10 < *(int *)(lVar13 + 0x1ec));
    }
    *(longlong *)(param_2 + 0x478) = lVar13;
    uVar12 = *(uint *)(param_2 + 0x6c4);
    uVar16 = *(uint *)(lVar7 + 0xe8);
    bVar4 = true;
  }
  uVar12 = ~uVar16 & uVar12;
  if (uVar12 != 0) {
    uVar16 = 0;
    do {
      if ((uVar12 & 1) != 0) {
        (*DAT_14ca7fc58)(uVar16);
        bVar5 = (byte)uVar16 & 0x1f;
        *(uint *)(param_2 + 0x6c4) =
             *(uint *)(param_2 + 0x6c4) & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      }
      if (uVar12 < 2) break;
      uVar12 = uVar12 >> 1;
      bVar17 = uVar16 < 0xf;
      uVar16 = uVar16 + 1;
    } while (bVar17);
  }
  uVar16 = ~uVar14 & *(uint *)(param_2 + 0x6c0);
  *(uint *)(param_2 + 0x6c0) = uVar14;
  if (uVar14 != 0) {
    lVar13 = 0;
    uVar15 = 0;
    do {
      if ((uVar14 & 1) != 0) {
        if (*(int *)(param_4 + lVar13) == 0) {
          (*DAT_14ca7fda0)(uVar15 & 0xffffffff,0,0,0);
          *(undefined8 *)(param_2 + 0x5c0 + lVar13) = 0;
          *(undefined4 *)(param_2 + 0x5c8 + lVar13) = 0;
        }
        else {
          iVar3 = *(int *)(param_4 + 4 + lVar13);
          iVar9 = iVar3 * local_94 + *(int *)(param_4 + 8 + lVar13);
          if (((*(int *)(param_2 + 0x5c0 + lVar13) != *(int *)(param_4 + lVar13)) ||
              (*(int *)(param_2 + 0x5c4 + lVar13) != iVar3)) ||
             (*(int *)(param_2 + 0x5c8 + lVar13) != iVar9)) {
            (*DAT_14ca7fda0)(uVar15 & 0xffffffff);
            *(undefined4 *)(param_2 + 0x5c0 + lVar13) = *(undefined4 *)(param_4 + lVar13);
            *(int *)(param_2 + 0x5c8 + lVar13) = iVar9;
            *(undefined4 *)(param_2 + 0x5c4 + lVar13) = *(undefined4 *)(param_4 + 4 + lVar13);
          }
          if ((bVar4) && (uVar12 = local_88[uVar15], *(uint *)(param_2 + 0x5cc + lVar13) != uVar12))
          {
            (*DAT_14ca7fda8)(uVar15 & 0xffffffff,uVar12);
            *(uint *)(param_2 + 0x5cc + lVar13) = uVar12;
          }
        }
      }
      if (0xe < uVar15) break;
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 0x10;
      bVar17 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar17);
  }
  if (uVar16 != 0) {
    puVar11 = (undefined4 *)(param_2 + 0x5c8);
    uVar15 = 0;
    do {
      if ((uVar16 & 1) != 0) {
        (*DAT_14ca7fda0)(uVar15 & 0xffffffff,0,0,0);
        *(undefined8 *)(puVar11 + -2) = 0;
        *puVar11 = 0;
      }
      if (0xe < uVar15) break;
      uVar15 = uVar15 + 1;
      puVar11 = puVar11 + 4;
      bVar4 = 1 < uVar16;
      uVar16 = uVar16 >> 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c391e FUN_1431c391e body=734 status=ok
// SIG undefined FUN_1431c391e(void)

void FUN_1431c391e(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar9 = 200;
  if (param_3 == 1) {
    lVar9 = 0x158;
  }
  lVar17 = 0x1e8;
  if (param_3 != 2) {
    lVar17 = lVar9;
  }
  if (*(char *)(param_2 + 0x47 + lVar17) == '\x01') {
    bVar5 = *(byte *)(param_2 + 0x45 + lVar17);
    if (bVar5 != 0) {
      uVar14 = 0;
      iVar11 = 0;
      do {
        lVar9 = *(longlong *)(param_4 + uVar14 * 8);
        if ((*(char *)(lVar9 + 0x5d) == '\x01') && (iVar11 < (int)param_5[1])) {
          lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + 0x10);
          lVar15 = (longlong)iVar11;
          lVar9 = lVar15 * 10 + 8;
          do {
            lVar3 = *param_5;
            if (uVar14 != *(byte *)(lVar3 + -6 + lVar9)) {
              iVar11 = (int)lVar15;
              break;
            }
            memcpy((void *)((ulonglong)*(ushort *)(lVar3 + -2 + lVar9) * 4 +
                           *(longlong *)(param_1 + (ulonglong)*(byte *)(lVar3 + -3 + lVar9) * 8)),
                   (void *)(lVar16 + (ulonglong)*(ushort *)(lVar3 + -8 + lVar9) * 4),
                   (ulonglong)*(ushort *)(lVar3 + lVar9) << 2);
            uVar7 = (ulonglong)*(byte *)(lVar3 + -3 + lVar9);
            uVar8 = *(ushort *)(lVar3 + lVar9) + 3 >> 2;
            uVar10 = (uint)(*(ushort *)(lVar3 + -2 + lVar9) >> 2);
            iVar6 = *(int *)(param_1 + 0x3c + uVar7 * 8);
            if (iVar6 != 0) {
              uVar1 = *(uint *)(param_1 + 0x38 + uVar7 * 8);
              uVar13 = iVar6 + uVar1;
              uVar4 = uVar8 + uVar10;
              if (uVar8 + uVar10 <= uVar13) {
                uVar4 = uVar13;
              }
              if (uVar1 < uVar10) {
                uVar10 = uVar1;
              }
              uVar8 = (uVar4 - uVar10) + 1;
            }
            *(uint *)(param_1 + 0x38 + uVar7 * 8) = uVar10;
            *(uint *)(param_1 + 0x3c + uVar7 * 8) = uVar8;
            lVar15 = lVar15 + 1;
            lVar9 = lVar9 + 10;
          } while (lVar15 < (int)param_5[1]);
          bVar5 = *(byte *)(param_2 + 0x45 + lVar17);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < bVar5);
    }
  }
  else if (*(char *)(param_2 + 0x45 + lVar17) != '\0') {
    uVar14 = 0;
    iVar11 = 0;
    do {
      lVar9 = *(longlong *)(param_4 + uVar14 * 8);
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x5d) == '\x01')) &&
         ((longlong)uVar14 < (longlong)*(int *)(param_2 + 0x88 + lVar17))) {
        lVar16 = *(longlong *)(param_2 + 0x80 + lVar17);
        if (*(int *)(lVar16 + uVar14 * 4) != *(int *)(lVar9 + 0x48)) {
          *(int *)(lVar16 + uVar14 * 4) = *(int *)(lVar9 + 0x48);
          iVar6 = (int)param_5[1];
          if (iVar11 < iVar6) {
            lVar15 = (longlong)iVar11;
            lVar16 = lVar15 * 10 + 8;
            do {
              lVar3 = *param_5;
              uVar7 = (ulonglong)*(byte *)(lVar3 + -6 + lVar16);
              if (uVar14 == uVar7) {
                memcpy((void *)((ulonglong)*(ushort *)(lVar3 + -2 + lVar16) * 4 +
                               *(longlong *)
                                (param_1 + 0x70 + (ulonglong)*(byte *)(lVar3 + -3 + lVar16) * 8)),
                       (void *)((ulonglong)*(ushort *)(lVar3 + -8 + lVar16) * 4 +
                               *(longlong *)(*(longlong *)(lVar9 + 0x50) + 0x10)),
                       (ulonglong)*(ushort *)(lVar3 + lVar16) << 2);
                iVar6 = (int)param_5[1];
              }
              else if (uVar14 < uVar7) {
                iVar11 = (int)lVar15;
                break;
              }
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 10;
            } while (lVar15 < iVar6);
          }
          lVar9 = *(longlong *)(param_2 + 0x70 + lVar17);
          lVar16 = uVar14 * 0x10;
          iVar6 = *(int *)(lVar9 + 8 + lVar16);
          if (0 < iVar6) {
            plVar12 = (longlong *)(lVar9 + lVar16);
            lVar9 = 0;
            do {
              lVar15 = *plVar12;
              iVar2 = *(int *)(lVar15 + lVar9 * 8);
              if ((-1 < iVar2) && (bVar5 = *(byte *)(lVar15 + 5 + lVar9 * 8), bVar5 < 5)) {
                (**(code **)(&PTR_DAT_14a371680)[bVar5])
                          (iVar2,*(ushort *)
                                  (*(longlong *)(*(longlong *)(param_2 + lVar17) + lVar16) +
                                  lVar9 * 4) >> 4,
                           *(undefined8 *)(param_1 + 0x70 + (ulonglong)bVar5 * 8));
                iVar6 = (int)plVar12[1];
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar6);
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(byte *)(param_2 + 0x45 + lVar17));
  }
  return;
}



// FUNCTION 1431c3bfc FUN_1431c3bfc body=212 status=ok
// SIG undefined FUN_1431c3bfc(void)

void FUN_1431c3bfc(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar8 = 200;
  if (param_3 == 1) {
    lVar8 = 0x158;
  }
  lVar11 = 0x1e8;
  if (param_3 != 2) {
    lVar11 = lVar8;
  }
  iVar9 = *(int *)(param_2 + 0x68 + lVar11);
  if (0 < iVar9) {
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x60 + lVar11);
      iVar2 = *(int *)(lVar5 + lVar8 * 8);
      if (-1 < iVar2) {
        bVar1 = *(byte *)(lVar5 + 5 + lVar8 * 8);
        uVar6 = (ulonglong)bVar1;
        uVar3 = *(uint *)(param_1 + 0x3c + uVar6 * 8);
        if (uVar3 != 0) {
          if (bVar1 < 5) {
            lVar7 = (ulonglong)bVar1 * 8;
            uVar4 = *(uint *)(param_1 + 0x38 + lVar7);
            uVar10 = (*(ushort *)(*(longlong *)(param_2 + 0x10 + lVar11) + lVar8 * 4) >> 4) - uVar4;
            if (uVar3 < uVar10) {
              uVar10 = uVar3;
            }
            (**(code **)(&PTR_DAT_14a371680)[bVar1])
                      (iVar2 + uVar4,uVar10,(ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + lVar7)
                      );
            uVar6 = (ulonglong)*(byte *)(lVar5 + 5 + lVar8 * 8);
          }
          *(undefined4 *)(param_1 + 0x38 + uVar6 * 8) = 0;
          *(undefined4 *)(param_1 + 0x3c + (ulonglong)*(byte *)(lVar5 + 5 + lVar8 * 8) * 8) = 0;
          iVar9 = *(int *)(param_2 + 0x68 + lVar11);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar9);
  }
  return;
}



// FUNCTION 1431c3cd0 FUN_1431c3cd0 body=36 status=ok
// SIG undefined FUN_1431c3cd0(void)

void FUN_1431c3cd0(void)

{
  FUN_1473e8454();
  if (DAT_14ca795c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431c3cf4 FUN_1431c3cf4 body=612 status=ok
// SIG undefined FUN_1431c3cf4(void)

void FUN_1431c3cf4(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  HGLRC pHVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar1 = param_1 + -0x18;
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(param_1 + 0x924),param_4 * param_3);
  lVar7 = *(longlong *)(param_1 + 0x14f88);
  if (lVar7 == 0) {
    lVar4 = *(longlong *)(param_1 + 86000);
    pHVar5 = wglGetCurrentContext();
    lVar7 = param_1 + 0x141e8;
    if (pHVar5 == *(HGLRC *)(lVar4 + 0x40)) {
      lVar7 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar7;
  }
  FUN_1473e84b6(lVar1,lVar7);
  FUN_1473e6a88(lVar1,lVar7);
  FUN_1473e52e2(lVar1,lVar7);
  FUN_1473e858a(lVar1,lVar7);
  FUN_1473e515a(lVar1,lVar7);
  FUN_1473e6746(lVar1,lVar7);
  FUN_1473e8658(lVar1,lVar7);
  if (*(char *)(param_1 + 0x8d6) == '\x01') {
    FUN_1473e823e(lVar1);
  }
  FUN_1473e57b8(lVar1,lVar7,param_1 + 0x4d0,DAT_14c760d20);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x78);
  FUN_1473e59a8(lVar1,lVar7,lVar4 + 0x98,*(undefined4 *)(lVar4 + 0xbc));
  FUN_1473e810c(lVar1);
  if (*(int *)(lVar7 + 0x444) != 0) {
    (*DAT_14ca7fba8)(0x8893,0);
    *(undefined4 *)(lVar7 + 0x444) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x924);
  if (iVar3 == 0) {
    iVar9 = 3;
  }
  else if (iVar3 == 2) {
    iVar9 = 2;
  }
  else {
    iVar9 = (uint)(iVar3 == 5) * 2 + 1;
  }
  FUN_1431c3526(lVar1,lVar7,param_2,param_1 + 0x3bc);
  iVar8 = param_3;
  switch(*(undefined4 *)(param_1 + 0x924)) {
  case 0:
    uVar6 = 4;
    iVar8 = param_3 * 3;
    break;
  case 1:
    uVar6 = 5;
    iVar8 = param_3 + 2;
    break;
  case 2:
    uVar6 = 1;
    iVar8 = param_3 * 2;
    break;
  default:
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLDrvPrivate.h",0x14b,
                  L"Unsupported primitive type %u");
    uVar6 = 4;
    break;
  case 4:
    uVar6 = 0;
  }
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x10);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x14);
    *piVar2 = *piVar2 + param_4 * param_3;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x18);
    *piVar2 = *piVar2 + (iVar9 * param_3 + (uint)(iVar3 == 1) * 2) * param_4;
  }
  if (param_4 == 1) {
    (*DAT_14ca7fc68)();
  }
  else {
    (*DAT_14ca7fdb0)(uVar6,0,iVar8,param_4);
  }
  FUN_1473e880c(lVar7);
  return;
}



// FUNCTION 1431c3f58 FUN_1431c3f58 body=448 status=ok
// SIG undefined FUN_1431c3f58(void)

void FUN_1431c3f58(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  HGLRC pHVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = param_1 + -0x18;
  lVar6 = *(longlong *)(param_1 + 0x14f88);
  if (lVar6 == 0) {
    lVar4 = *(longlong *)(param_1 + 86000);
    pHVar5 = wglGetCurrentContext();
    lVar6 = param_1 + 0x141e8;
    if (pHVar5 == *(HGLRC *)(lVar4 + 0x40)) {
      lVar6 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar6;
  }
  FUN_1473e84b6(lVar2,lVar6);
  FUN_1473e6a88(lVar2,lVar6);
  FUN_1473e52e2(lVar2,lVar6);
  FUN_1473e858a(lVar2,lVar6);
  FUN_1473e515a(lVar2,lVar6);
  FUN_1473e6746(lVar2,lVar6);
  FUN_1473e8658(lVar2,lVar6);
  if (*(char *)(param_1 + 0x8d6) == '\x01') {
    FUN_1473e823e(lVar2);
  }
  FUN_1473e57b8(lVar2,lVar6,param_1 + 0x4d0,DAT_14c760d20);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x78);
  FUN_1473e59a8(lVar2,lVar6,lVar4 + 0x98,*(undefined4 *)(lVar4 + 0xbc));
  FUN_1473e810c(lVar2);
  if (*(int *)(lVar6 + 0x444) != 0) {
    (*DAT_14ca7fba8)(0x8893,0);
    *(undefined4 *)(lVar6 + 0x444) = 0;
  }
  FUN_1431c3526(lVar2,lVar6,0,param_1 + 0x3bc);
  uVar3 = *(uint *)(param_1 + 0x924);
  if (((ulonglong)uVar3 < 5) && ((0x17U >> (uVar3 & 0x1f) & 1) != 0)) {
    uVar7 = *(undefined4 *)(&DAT_14a3716a8 + (ulonglong)uVar3 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLDrvPrivate.h",0x14b,
                  L"Unsupported primitive type %u");
    uVar7 = 4;
  }
  (*DAT_14ca7fba8)(0x8f3f,*(undefined4 *)(param_2 + 0x38));
  (*DAT_14ca7fdb8)(uVar7,param_3);
  (*DAT_14ca7fba8)(0x8f3f,0);
  FUN_1473e880c(lVar6);
  return;
}



// FUNCTION 1431c4118 FUN_1431c4118 body=494 status=ok
// SIG undefined FUN_1431c4118(void)

void FUN_1431c4118(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  HGLRC pHVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = param_1 + -0x18;
  lVar7 = *(longlong *)(param_1 + 0x14f88);
  if (lVar7 == 0) {
    lVar5 = *(longlong *)(param_1 + 86000);
    pHVar6 = wglGetCurrentContext();
    lVar7 = param_1 + 0x141e8;
    if (pHVar6 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar7 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar7;
  }
  FUN_1473e84b6(lVar2,lVar7);
  FUN_1473e6a88(lVar2,lVar7);
  FUN_1473e52e2(lVar2,lVar7);
  FUN_1473e858a(lVar2,lVar7);
  FUN_1473e515a(lVar2,lVar7);
  FUN_1473e6746(lVar2,lVar7);
  FUN_1473e8658(lVar2,lVar7);
  if (*(char *)(param_1 + 0x8d6) == '\x01') {
    FUN_1473e823e(lVar2);
  }
  FUN_1473e57b8(lVar2,lVar7,param_1 + 0x4d0,DAT_14c760d20);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x78);
  FUN_1473e59a8(lVar2,lVar7,lVar5 + 0x98,*(undefined4 *)(lVar5 + 0xbc));
  FUN_1473e810c(lVar2);
  iVar3 = *(int *)(param_2 + 0x38);
  if (*(int *)(lVar7 + 0x444) != iVar3) {
    (*DAT_14ca7fba8)(0x8893,iVar3);
    *(int *)(lVar7 + 0x444) = iVar3;
  }
  FUN_1431c3526(lVar2,lVar7,0,param_1 + 0x3bc);
  uVar4 = *(uint *)(param_1 + 0x924);
  if (((ulonglong)uVar4 < 5) && ((0x17U >> (uVar4 & 0x1f) & 1) != 0)) {
    uVar8 = *(undefined4 *)(&DAT_14a3716a8 + (ulonglong)uVar4 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLDrvPrivate.h",0x14b,
                  L"Unsupported primitive type %u");
    uVar8 = 4;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  (*DAT_14ca7fba8)(0x8f3f,*(undefined4 *)(param_3 + 0x38));
  (*DAT_14ca7fdc0)(uVar8,(uint)(iVar3 == 4) * 2 + 0x1403,(longlong)(param_4 * 5) << 2);
  (*DAT_14ca7fba8)(0x8f3f,0);
  FUN_1473e880c(lVar7);
  return;
}



// FUNCTION 1431c4306 FUN_1431c4306 body=638 status=ok
// SIG undefined FUN_1431c4306(void)

void FUN_1431c4306(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6,int param_7,uint param_8)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  HGLRC pHVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  lVar1 = param_1 + -0x18;
  iVar8 = param_8 * param_7;
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(param_1 + 0x924),iVar8);
  lVar7 = *(longlong *)(param_1 + 0x14f88);
  if (lVar7 == 0) {
    lVar4 = *(longlong *)(param_1 + 86000);
    pHVar5 = wglGetCurrentContext();
    lVar7 = param_1 + 0x141e8;
    if (pHVar5 == *(HGLRC *)(lVar4 + 0x40)) {
      lVar7 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar7;
  }
  FUN_1473e84b6(lVar1,lVar7);
  FUN_1473e6a88(lVar1,lVar7);
  FUN_1473e52e2(lVar1,lVar7);
  FUN_1473e858a(lVar1,lVar7);
  FUN_1473e515a(lVar1,lVar7);
  FUN_1473e6746(lVar1,lVar7);
  FUN_1473e8658(lVar1,lVar7);
  if (*(char *)(param_1 + 0x8d6) == '\x01') {
    FUN_1473e823e(lVar1);
  }
  FUN_1473e57b8(lVar1,lVar7,param_1 + 0x4d0,DAT_14c760d20);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x78);
  FUN_1473e59a8(lVar1,lVar7,lVar4 + 0x98,*(undefined4 *)(lVar4 + 0xbc));
  FUN_1473e810c(lVar1);
  iVar3 = *(int *)(param_2 + 0x38);
  if (*(int *)(lVar7 + 0x444) != iVar3) {
    (*DAT_14ca7fba8)(0x8893,iVar3);
    *(int *)(lVar7 + 0x444) = iVar3;
  }
  FUN_1431c3526(lVar1,lVar7,param_3,param_1 + 0x3bc);
  switch(*(undefined4 *)(param_1 + 0x924)) {
  case 0:
    param_7 = param_7 * 3;
    goto LAB_1431c44df;
  case 1:
    param_7 = param_7 + 2;
    uVar6 = 5;
    break;
  case 2:
    param_7 = param_7 * 2;
    uVar6 = 1;
    break;
  default:
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLDrvPrivate.h",0x14b,
                  L"Unsupported primitive type %u");
LAB_1431c44df:
    uVar6 = 4;
    break;
  case 4:
    uVar6 = 0;
  }
  bVar9 = *(int *)(param_2 + 0x24) == 4;
  param_6 = param_6 << bVar9 + 1;
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x10);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x14);
    *piVar2 = *piVar2 + iVar8;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x18);
    *piVar2 = *piVar2 + param_7 * param_8;
  }
  iVar8 = (uint)bVar9 * 2 + 0x1403;
  if (param_8 < 2) {
    (*DAT_14ca7fdd0)(uVar6,0,param_5,param_7,iVar8,param_6);
  }
  else {
    (*DAT_14ca7fdc8)(uVar6,param_7,iVar8,param_6,param_8);
  }
  FUN_1473e880c(lVar7);
  return;
}



// FUNCTION 1431c4584 FUN_1431c4584 body=522 status=ok
// SIG undefined FUN_1431c4584(void)

void FUN_1431c4584(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  HGLRC pHVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = param_1 + -0x18;
  lVar8 = *(longlong *)(param_1 + 0x14f88);
  if (lVar8 == 0) {
    lVar5 = *(longlong *)(param_1 + 86000);
    pHVar6 = wglGetCurrentContext();
    lVar8 = param_1 + 0x141e8;
    if (pHVar6 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar8 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar8;
  }
  FUN_1473e84b6(lVar2,lVar8);
  FUN_1473e6a88(lVar2,lVar8);
  FUN_1473e52e2(lVar2,lVar8);
  FUN_1473e858a(lVar2,lVar8);
  FUN_1473e515a(lVar2,lVar8);
  FUN_1473e6746(lVar2,lVar8);
  FUN_1473e8658(lVar2,lVar8);
  if (*(char *)(param_1 + 0x8d6) == '\x01') {
    FUN_1473e823e(lVar2);
  }
  FUN_1473e57b8(lVar2,lVar8,param_1 + 0x4d0,DAT_14c760d20);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x78);
  FUN_1473e59a8(lVar2,lVar8,lVar5 + 0x98,*(undefined4 *)(lVar5 + 0xbc));
  FUN_1473e810c(lVar2);
  iVar3 = *(int *)(param_2 + 0x38);
  if (*(int *)(lVar8 + 0x444) != iVar3) {
    (*DAT_14ca7fba8)(0x8893,iVar3);
    *(int *)(lVar8 + 0x444) = iVar3;
  }
  FUN_1431c3526(lVar2,lVar8,0,param_1 + 0x3bc);
  uVar4 = *(uint *)(param_1 + 0x924);
  if (((ulonglong)uVar4 < 5) && ((0x17U >> (uVar4 & 0x1f) & 1) != 0)) {
    uVar7 = *(undefined4 *)(&DAT_14a3716a8 + (ulonglong)uVar4 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLDrvPrivate.h",0x14b,
                  L"Unsupported primitive type %u");
    uVar7 = 4;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  (*DAT_14ca7fba8)(0x8f3f,*(undefined4 *)(param_3 + 0x38));
  if (param_5 != 0) {
    uVar9 = (ulonglong)-param_5;
    if ((int)-param_5 < 0) {
      uVar9 = (ulonglong)param_5;
    }
    do {
      (*DAT_14ca7fdc0)(uVar7,(uint)(iVar3 == 4) * 2 + 0x1403,param_4);
      param_4 = param_4 + 0x14;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  (*DAT_14ca7fba8)(0x8f3f,0);
  FUN_1473e880c(lVar8);
  return;
}



// FUNCTION 1431c478e FUN_1431c478e body=534 status=ok
// SIG undefined FUN_1431c478e(void)

longlong *
FUN_1431c478e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  HGLRC pHVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_5;
  local_68 = param_6;
  local_58 = param_4;
  if (param_5 == 0) {
    uVar1 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    uVar3 = FUN_1460ae29e();
    param_5 = 0;
    FUN_1448e935e(uVar1,&local_50,uVar3,0);
    FUN_1460ae29e();
    if (local_50 != 0) {
      param_5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_48 + 8) + 0x50) +
                 (longlong)*(int *)(local_50 + 0xd4) * 8);
      if (param_5 == 0) {
        param_5 = FUN_1400bafc2(*(longlong *)(local_48 + 8),(longlong)*(int *)(local_50 + 0xd4),1);
      }
    }
  }
  uVar3 = local_58;
  uVar1 = local_68;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_5;
  plVar4 = (longlong *)FUN_147403d87(param_3,local_58,param_5);
  if (plVar4 == (longlong *)0x0) {
    lVar6 = *(longlong *)(param_1 + 0x14fa0);
    if (lVar6 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x15008);
      pHVar5 = wglGetCurrentContext();
      lVar6 = param_1 + 0x14200;
      if (pHVar5 == *(HGLRC *)(lVar2 + 0x40)) {
        lVar6 = param_1 + 0x148d0;
      }
      *(longlong *)(param_1 + 0x14fa0) = lVar6;
    }
    *(undefined4 *)(lVar6 + 0x1b8) = 0xffffffff;
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    lVar6 = lVar2 + 0x3c;
    lVar7 = 0;
    do {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar6 + -4 + lVar8 * 8) = 0;
        *(uint *)(lVar6 + lVar8 * 8) = *(uint *)(lVar7 * 0xb0 + lVar2 + 0xa8) >> 4;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 7);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xb0;
    } while (lVar7 != 5);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    lVar6 = FUN_14001cc68(0xa0,0x10);
    local_78 = uVar1;
    FUN_1473eed6a(lVar6,param_3,uVar3,param_5);
  }
  else {
    lVar6 = *plVar4;
    FUN_1431cbefb();
    FUN_1473eec1a(*(undefined8 *)(lVar6 + 0x78));
    FUN_1473eecde(*(undefined8 *)(lVar6 + 0x78),&local_58,&local_60,&local_68);
  }
  *param_2 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431c49a6 FUN_1431c49a6 body=38 status=ok
// SIG undefined FUN_1431c49a6(void)

void FUN_1431c49a6(void)

{
  char cVar1;
  
  do {
    if (DAT_14ca797a8 == 0) break;
    cVar1 = FUN_1473ebcdc(DAT_14ca797a8,0);
  } while (cVar1 != '\0');
  FUN_1473ec364(0);
  return;
}



// FUNCTION 1431c49cc FUN_1431c49cc body=69 status=ok
// SIG undefined FUN_1431c49cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c49cc(void)

{
  _DAT_14ca795d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca795e0,1);
  return;
}



// FUNCTION 1431c4a11 FUN_1431c4a11 body=69 status=ok
// SIG undefined FUN_1431c4a11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4a11(void)

{
  _DAT_14ca795f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca795f8,1);
  return;
}



// FUNCTION 1431c4a56 FUN_1431c4a56 body=69 status=ok
// SIG undefined FUN_1431c4a56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4a56(void)

{
  _DAT_14ca79608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79610,1);
  return;
}



// FUNCTION 1431c4a9b FUN_1431c4a9b body=69 status=ok
// SIG undefined FUN_1431c4a9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4a9b(void)

{
  _DAT_14ca79620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79628,1);
  return;
}



// FUNCTION 1431c4ae0 FUN_1431c4ae0 body=69 status=ok
// SIG undefined FUN_1431c4ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4ae0(void)

{
  _DAT_14ca79638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79640,1);
  return;
}



// FUNCTION 1431c4b26 FUN_1431c4b26 body=1094 status=ok
// SIG undefined FUN_1431c4b26(void)

void FUN_1431c4b26(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0xb4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((DAT_14ca813bc == 1) && (*(char *)(param_1 + 0x68) == '\x01')) {
      FUN_1473ebe22(*(undefined8 *)
                     (*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x3c) * 8));
      iVar7 = *(int *)(param_1 + 0x40) + 1;
      if (*(int *)(param_1 + 0x38) <= iVar7) {
        iVar7 = *(int *)(param_1 + 0x38);
      }
      *(int *)(param_1 + 0x40) = iVar7;
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
    if ((DAT_14ca813bc & 1) == 0) {
      DAT_14ca84ac0 = *(undefined4 *)(param_1 + 0xb8);
    }
    else {
      uVar6 = FUN_1431c7cba(param_1 + 0x38,0);
      auVar11._8_4_ = (int)((ulonglong)uVar6 >> 0x20);
      auVar11._0_8_ = uVar6;
      auVar11._12_4_ = 0x45300000;
      auVar12._8_4_ = (int)((ulonglong)DAT_14ca813c0 >> 0x20);
      auVar12._0_8_ = DAT_14ca813c0;
      auVar12._12_4_ = 0x45300000;
      DAT_14ca84ac0 =
           (undefined4)
           (longlong)
           (((((double)CONCAT44(0x43300000,(int)uVar6) - 4503599627370496.0) +
             (auVar11._8_8_ - 1.9342813113834067e+25)) /
            (((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
            (auVar12._8_8_ - 1.9342813113834067e+25))) / DAT_14c83f420);
    }
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    }
    dVar3 = DAT_14c760cd8;
    if (*(char *)(param_1 + 10) == '\x01') {
      if (*(char *)(param_1 + 8) == '\x01') {
        DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
        FUN_1431da1f8(*(undefined8 *)(param_1 + 0x18));
        (*DAT_14ca7fca0)();
        uVar8 = 0;
        DAT_14ca84e99 = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        lVar10 = DAT_14ca83ad0;
        iVar7 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar7 != 0x40000002) {
          if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
            if (iVar7 == 1) {
              DVar4 = FUN_140ad26c0();
              DVar5 = GetCurrentThreadId();
              uVar8 = (ulonglong)(DVar4 != DVar5);
            }
            else {
              uVar8 = 1;
            }
          }
          else {
            uVar8 = 0;
          }
        }
        dVar3 = DAT_14c760cd8;
        if ((*(int *)(lVar10 + uVar8 * 4) != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
          plVar9 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
            FUN_1459825b0(&DAT_14c872ee0);
            atexit(FUN_1427868a5);
            _Init_thread_footer(&DAT_14c872ef8);
          }
          (**(code **)(*plVar9 + 8))(plVar9,0,L"SCREENSHOT",&DAT_14c872ee0);
          dVar3 = DAT_14c760cd8;
        }
      }
    }
    else if (*(char *)(param_1 + 0xb) == '\x01') {
      QueryPerformanceCounter(&local_48);
      dVar3 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
      if (*(char *)(param_1 + 8) == '\x01') {
        lVar10 = *(longlong *)(param_1 + 0x18);
        if ((DAT_14c760cd8 <= 0.0) || ((float)(dVar3 - DAT_14c760cd8) <= 0.1)) {
          if (lVar10 != 0) {
            iVar7 = *(int *)(param_1 + 200);
            if (3 < iVar7) {
              FUN_1473ea78e(param_1 + 0xc0);
              lVar10 = *(longlong *)(param_1 + 0x18);
              iVar7 = *(int *)(param_1 + 200);
            }
            *(uint *)(param_1 + 200) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0xcc) < iVar7 + 1U) {
              FUN_1456bd870(param_1 + 0xc0,iVar7);
            }
            *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar7 * 8) = lVar10;
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
        }
        else if (lVar10 != 0) {
          if (0 < *(int *)(param_1 + 200)) {
            lVar10 = 0;
            do {
              FUN_1431da1f8(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar10 * 8));
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(param_1 + 200));
            lVar10 = *(longlong *)(param_1 + 0x18);
          }
          FUN_1431da1f8(lVar10);
          if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0) {
            plVar9 = (longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x38);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
            {
              FUN_1459825b0(&DAT_14c872ee0);
              atexit(FUN_1427868a5);
              _Init_thread_footer(&DAT_14c872ef8);
            }
            (**(code **)(*plVar9 + 8))(plVar9,0,L"SCREENSHOT",&DAT_14c872ee0);
          }
          *(undefined4 *)(param_1 + 0x10) = 5;
          FUN_1473ea72e(param_1 + 0xc0);
        }
      }
    }
    DAT_14c760cd8 = dVar3;
    *(undefined1 *)(param_1 + 8) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c4f6d FUN_1431c4f6d body=69 status=ok
// SIG undefined FUN_1431c4f6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4f6d(void)

{
  _DAT_14ca79658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79660,1);
  return;
}



// FUNCTION 1431c4fb2 FUN_1431c4fb2 body=69 status=ok
// SIG undefined FUN_1431c4fb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c4fb2(void)

{
  _DAT_14ca79670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c4ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79678,1);
  return;
}



// FUNCTION 1431c4ff8 FUN_1431c4ff8 body=6582 status=ok
// SIG undefined FUN_1431c4ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1431c4ff8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  size_t sVar11;
  PROC pPVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  wchar_t *_Str;
  bool bVar20;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined4 local_220;
  int local_214;
  undefined8 *local_210;
  int local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8 [4];
  undefined8 *local_198;
  ulonglong uStack_190;
  undefined4 local_188;
  undefined8 **local_98;
  undefined8 **local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  param_1[4] = 0;
  lVar8 = 0x3d;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar8 + -0x15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar8 + -1) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xfd);
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11f) = 0;
  *param_1 = &PTR_FUN_14a36db50;
  param_1[3] = &PTR_FUN_14a36e0b0;
  FUN_1473e9b38(param_1 + 0x25);
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  *(undefined2 *)(param_1 + 0x127) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 6;
  FUN_1473688b2(param_1 + 0x128);
  param_1[0x128] = &PTR_FUN_14a343b20;
  FUN_147368910(param_1 + 0x128);
  FUN_1473e9ccc(param_1 + 0x2840);
  FUN_1473e9ccc(param_1 + 0x291a);
  param_1[0x29fb] = 0;
  *(undefined4 *)(param_1 + 0x29fc) = 0;
  param_1[0x29f4] = 0;
  param_1[0x29f5] = 0;
  param_1[0x29f6] = 0;
  param_1[0x29f7] = 0;
  param_1[0x29f8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14fe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14fec) = 0;
  param_1[0x29ff] = 0;
  *(undefined4 *)(param_1 + 0x2a00) = 0;
  param_1[0x2a01] = 0;
  *(undefined1 *)(param_1 + 0x2a1c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2a1d),4000);
  param_1[0x2a22] = 0;
  param_1[0x2a73] = 0;
  param_1[0x2a74] = 0x1000000000;
  *(undefined4 *)(param_1 + 0x2a75) = 0;
  DAT_14ca85064 = 0;
  DAT_14ca7a3c8 = param_1;
  FUN_1431d3b6d();
  uVar9 = FUN_1474005eb();
  param_1[0x2a01] = uVar9;
  DAT_14ca84ec8 = 0;
  DAT_14ca84ed0 = 0;
  local_228 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_14ca84ed0);
  pcVar10 = (char *)(*DAT_14ca7fb50)(0x1f01);
  local_98 = (undefined8 **)0x0;
  if (pcVar10 == (char *)0x0) {
    local_90 = (undefined8 **)0x0;
    local_88 = 0;
  }
  else {
    sVar11 = strlen(pcVar10);
    iVar5 = (int)sVar11;
    uVar18 = iVar5 + 1;
    local_88 = iVar5;
    if (uVar18 < 0x81) {
      ppuVar15 = (undefined8 **)0x0;
    }
    else {
      FUN_1446efa72(&local_98,0,uVar18,2);
      ppuVar15 = local_98;
    }
    if (ppuVar15 == (undefined8 **)0x0) {
      ppuVar15 = &local_198;
    }
    local_90 = ppuVar15;
    if (-1 < iVar5) {
      uVar14 = 0;
      do {
        *(short *)((longlong)ppuVar15 + uVar14 * 2) = (short)pcVar10[uVar14];
        uVar14 = uVar14 + 1;
      } while (uVar18 != uVar14);
    }
  }
  FUN_140056680(local_1b8 + 2);
  if (local_98 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14ca84da0 != 0) {
    FUN_1400020a8();
  }
  DAT_14ca84da0 = local_1b8[2];
  _DAT_14ca84da8 = local_1b8[3];
  pcVar10 = (char *)(*DAT_14ca7fb50)(0x1f02);
  local_98 = (undefined8 **)0x0;
  if (pcVar10 == (char *)0x0) {
    local_90 = (undefined8 **)0x0;
    local_88 = 0;
  }
  else {
    sVar11 = strlen(pcVar10);
    iVar5 = (int)sVar11;
    uVar18 = iVar5 + 1;
    local_88 = iVar5;
    if (uVar18 < 0x81) {
      ppuVar15 = (undefined8 **)0x0;
    }
    else {
      FUN_1446efa72(&local_98,0,uVar18,2);
      ppuVar15 = local_98;
    }
    if (ppuVar15 == (undefined8 **)0x0) {
      ppuVar15 = &local_198;
    }
    local_90 = ppuVar15;
    if (-1 < iVar5) {
      uVar14 = 0;
      do {
        *(short *)((longlong)ppuVar15 + uVar14 * 2) = (short)pcVar10[uVar14];
        uVar14 = uVar14 + 1;
      } while (uVar18 != uVar14);
    }
  }
  FUN_14020fad6(&DAT_14ca84db0,local_90);
  if (local_98 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  DAT_14c760db4 = 1;
  DAT_14ca85550 = (ushort)(DAT_14ca7c3e0 != '\0') * 9 + 0xf;
  DAT_14ca84e10 = 4000;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  FUN_1473eaaf9(local_1b8);
  local_220 = 0xffffffff;
  local_228 = (undefined8 *)((ulonglong)local_228 & 0xffffffff00000000);
  local_214 = FUN_1447ee042(local_1b8,L"WGL_EXT_swap_control",0x14,1);
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_1403de9f2(local_1b8,&local_1c8,&DAT_149e001d8,1);
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  FUN_14099d55c(DAT_14ca79668,local_1b8 + 2,0);
  FUN_1403de9f2(local_1b8 + 2,&local_198,&DAT_149e06196,1);
  if ((longlong)(int)uStack_190 != 0) {
    lVar8 = (longlong)(int)uStack_190 << 4;
    puVar17 = local_198;
    do {
      FUN_140ded26a(puVar17);
      FUN_140ded312(puVar17);
      puVar16 = &DAT_149dfb77a;
      if (*(int *)(puVar17 + 1) != 0) {
        puVar16 = (undefined2 *)*puVar17;
      }
      FUN_1448097c4(local_1b8,puVar16,&DAT_149dfb77a,1);
      puVar17 = puVar17 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  if (local_1b8[2] != 0) {
    FUN_1400020a8();
  }
  local_210 = param_1;
  FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
  if (local_198 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  FUN_14099d55c(DAT_14ca79680,local_1b8 + 2,0);
  FUN_1403de9f2(local_1b8 + 2,&local_198,&DAT_149e06196,1);
  if ((longlong)(int)uStack_190 != 0) {
    lVar8 = (longlong)(int)uStack_190 << 4;
    puVar17 = local_198;
    do {
      FUN_140ded26a(puVar17);
      FUN_140ded312(puVar17);
      _Str = L"";
      if (*(int *)(puVar17 + 1) != 0) {
        _Str = (wchar_t *)*puVar17;
      }
      if (_Str == (wchar_t *)0x0) {
LAB_1431c55cb:
        FUN_1400020e8(local_1b8,&DAT_149e001d8,1);
        iVar5 = *(int *)(puVar17 + 1) + -1;
        if (*(int *)(puVar17 + 1) == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(local_1b8,*puVar17,iVar5);
      }
      else {
        sVar11 = wcslen(_Str);
        local_220 = 0xffffffff;
        local_228 = (undefined8 *)((ulonglong)local_228 & 0xffffffff00000000);
        iVar5 = FUN_1447ee042(local_1b8,_Str,sVar11 & 0xffffffff,1);
        if (iVar5 == -1) goto LAB_1431c55cb;
      }
      puVar17 = puVar17 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  if (local_1b8[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
  puVar17 = local_210;
  if (local_198 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1473e3ff8(local_1b8);
  FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_214 == -1) {
    pPVar12 = wglGetProcAddress("wglGetExtensionsStringEXT");
    pcVar10 = (char *)(*pPVar12)();
    pcVar10 = strstr(pcVar10,"WGL_EXT_swap_control");
    if (pcVar10 == (char *)0x0) goto LAB_1431c56c1;
  }
  DAT_14ca7a388 = wglGetProcAddress("wglSwapIntervalEXT");
LAB_1431c56c1:
  (*DAT_14ca7fca0)(0x92e0);
  local_1c8 = local_1c8 & 0xffffffff00000000;
  (*DAT_14ca7fb40)(0xd33);
  (*DAT_14ca7fcd0)();
  local_1cc = 0;
  (*DAT_14ca7fb40)(0x8c2b);
  (*DAT_14ca7fcd0)();
  local_1d0 = 0;
  (*DAT_14ca7fb40)(0x851c);
  (*DAT_14ca7fcd0)();
  local_1d4 = 0;
  (*DAT_14ca7fb40)(0x88ff);
  (*DAT_14ca7fcd0)();
  local_1d8 = 0;
  (*DAT_14ca7fb40)(0x8073);
  (*DAT_14ca7fcd0)();
  local_1dc = 0;
  (*DAT_14ca7fb40)(0x84e8);
  (*DAT_14ca7fcd0)();
  local_1e0 = 0;
  (*DAT_14ca7fb40)(0x8872);
  (*DAT_14ca7fcd0)();
  local_1e4 = 1;
  (*DAT_14ca7fb40)(0x8824,&local_1e4);
  (*DAT_14ca7fcd0)();
  DAT_14ca79810 = 8;
  if (local_1e4 < 8) {
    DAT_14ca79810 = local_1e4;
  }
  local_1e8 = 1;
  (*DAT_14ca7fb40)(0x8cdf);
  (*DAT_14ca7fcd0)();
  local_1ec = 1;
  (*DAT_14ca7fb40)(0x8d57);
  (*DAT_14ca7fcd0)();
  local_1f0 = 1;
  (*DAT_14ca7fb40)(0x910e);
  (*DAT_14ca7fcd0)();
  local_1f4 = 1;
  (*DAT_14ca7fb40)(0x910f);
  (*DAT_14ca7fcd0)();
  local_1f8 = 1;
  (*DAT_14ca7fb40)(0x9110);
  (*DAT_14ca7fcd0)();
  local_1fc = 0;
  (*DAT_14ca7fb40)(0x8b4d);
  (*DAT_14ca7fcd0)();
  local_200 = 0;
  (*DAT_14ca7fb40)(0x8869);
  (*DAT_14ca7fcd0)();
  local_204 = 0;
  (*DAT_14ca7fb40)(0x90eb);
  (*DAT_14ca7fcd0)();
  local_208 = 0;
  (*DAT_14ca7fb40)(0x8262);
  (*DAT_14ca7fcd0)();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_14054d46e(&DAT_14c846b20,L"quad_buffer_stereo");
  if (cVar3 != '\0') {
    local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffffffffff00);
    (*DAT_14ca7fe20)(0xc33,&local_198);
    (*DAT_14ca7fcd0)();
    DAT_14ca84d94 = (char)local_198 == '\x01';
  }
  if (DAT_14ca7a3d0 == '\x01') {
    local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffff00000000);
    (*DAT_14ca7fb40)(0x84ff,&local_198);
    (*DAT_14ca7fcd0)();
    DAT_14c760d4c = local_198._0_4_;
  }
  local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffff00000000);
  (*DAT_14ca7fb40)(0x821b,&local_198);
  local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffff00000000);
  (*DAT_14ca7fb40)(0x821c,&local_198);
  lVar8 = DAT_14ca795e8;
  bVar20 = false;
  if (DAT_14c760db4 < 2) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar20 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar20 = DVar6 == DVar7;
        }
        else {
          bVar20 = false;
        }
      }
      uVar14 = (ulonglong)(bVar20 ^ 1);
    }
    bVar20 = *(int *)(lVar8 + uVar14 * 4) != 0;
  }
  DAT_14ca84e2b = bVar20;
  DAT_14ca7a384 = *(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490;
  DAT_14ca84e28 = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  DAT_14ca84f1d = DAT_14ca84e2b;
  FUN_14631b754(DAT_14c760db4);
  local_198 = *(undefined8 **)(&DAT_14ca814bc + (ulonglong)DAT_14ca85550 * 0x3c);
  FUN_1400021e4(&local_198,local_1b8);
  _DAT_14ca84e70 = local_1e0;
  uVar14 = (ulonglong)((int)local_1c8 + -1 + (uint)((int)local_1c8 == 0)) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar18 = ((uint)lVar8 ^ 0xffffffc0) + 0x41;
  DAT_14ca84d90 = 0xf;
  if (uVar18 < 0xf) {
    DAT_14ca84d90 = uVar18;
  }
  DAT_14ca84e40 = (int)local_1c8;
  _DAT_14ca84e48 = (longlong)local_1cc;
  DAT_14ca84e64 = local_1d0;
  DAT_14ca84e6c = local_1d4;
  DAT_14ca84e58 = (longlong)local_208;
  DAT_14ca84e74 = local_204;
  _DAT_14ca84e0d = 0x100;
  DAT_14ca84e14 = 1;
  DAT_14ca84e15 = DAT_14ca79454;
  DAT_14ca84d95 = 1;
  _DAT_14ca84dfa = 0x101;
  DAT_14ca84e1e = DAT_14ca7fe08 != 0;
  DAT_14ca84e16 = DAT_14ca7968b;
  DAT_14ca84e1d = 1;
  DAT_14ca84e19 = 1;
  _DAT_14ca84e1b = 0;
  DAT_14ca84e00 = 0;
  _DAT_14ca84dfc = 0;
  DAT_14ca84e38 = 0x1000;
  if (local_1dc < 0x1000) {
    DAT_14ca84e38 = local_1dc;
  }
  DAT_14ca84e05 = 0;
  DAT_14ca84e01 = 0 < DAT_14ca79450;
  _DAT_14ca84f24 = 0xffff0000ffff;
  DAT_14ca84f2c = 0xffff;
  DAT_14ca84f21 = 0;
  DAT_14ca84e35 = 1;
  _DAT_14ca85070 = 0x9b;
  DAT_14ca85072 = 0xf;
  if (DAT_14c760db4 == 1) {
    DAT_14ca85072 = DAT_14ca85550;
  }
  _DAT_14ca85074 = 0x9b009b;
  DAT_14ca84e17 = 0;
  DAT_14ca84eb0 = 1;
  DAT_14ca84e3c = DAT_14ca84e38;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca79a08) && (FUN_144b3d300(&DAT_14ca79a08), DAT_14ca79a08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.OpenGL.DisableTextureStreamingSupport",1);
    if (plVar13 == (longlong *)0x0) {
      DAT_14ca79a00 = 0;
    }
    else {
      DAT_14ca79a00 = (**(code **)(*plVar13 + 0x68))(plVar13);
    }
    _Init_thread_footer(&DAT_14ca79a08);
    puVar17 = local_210;
  }
  lVar2 = DAT_14ca79a00;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (iVar5 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar20 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar20 = DVar6 == DVar7;
      }
      else {
        bVar20 = false;
      }
    }
    uVar14 = (ulonglong)(bVar20 ^ 1);
  }
  if (*(int *)(lVar2 + uVar14 * 4) != 0) {
    DAT_14ca84eb0 = 0;
  }
  piVar1 = (int *)(lVar8 + 0xc60);
  iVar5 = 0;
  do {
    local_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    local_188 = 0;
    FUN_1431cc3f7(iVar5,&local_198);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x5d);
  uVar19 = 0;
  local_188 = 0;
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  FUN_1431cc3f7(0,&local_198);
  local_198 = (undefined8 *)0x881400008814;
  uStack_190 = 0x140600001908;
  local_188 = local_188 & 0xffff0000;
  uVar14 = 1;
  FUN_1431cc3f7(1,&local_198);
  local_188 = 0;
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  FUN_1431cc3f7(8,&local_198);
  lVar8 = DAT_14ca79618;
  iVar5 = *piVar1;
  if (iVar5 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar6 == DVar7);
      }
      else {
        uVar14 = 0;
      }
    }
    uVar19 = uVar14 ^ 1;
  }
  if (*(int *)(lVar8 + uVar19 * 4) == 0) {
    local_198 = (undefined8 *)0x8cad;
    uStack_190 = 0x8dad000084f9;
    local_188 = (uint)local_188._2_2_ << 0x10;
    FUN_1431cc3f7(0xb);
    _DAT_14c873638 = 8;
  }
  else {
    local_198 = (undefined8 *)0x88f0;
    uStack_190 = 0x84fa000084f9;
    local_188 = (uint)local_188._2_2_ << 0x10;
    FUN_1431cc3f7(0xb);
    _DAT_14c873638 = 4;
  }
  DAT_14c873c78 = DAT_14c873c78 | 1;
  local_198 = (undefined8 *)0x81a5000081a5;
  uStack_190 = 0x140500001902;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0xc,&local_198);
  local_198 = (undefined8 *)0x81a5000081a5;
  uStack_190 = 0x140500001902;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x14,&local_198);
  local_198 = (undefined8 *)0x881a0000881a;
  uStack_190 = 0x140b00001908;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x13,&local_198);
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  FUN_1431cc3f7(0x19,&local_198);
  local_198 = (undefined8 *)0x8d7600008d76;
  uStack_190 = 0x140300008d99;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x22,&local_198);
  local_198 = (undefined8 *)0x8d8800008d88;
  uStack_190 = 0x140200008d99;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x23,&local_198);
  local_198 = (undefined8 *)0x8d7000008d70;
  uStack_190 = 0x140500008d99;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x30,&local_198);
  local_198 = (undefined8 *)0x805b0000805b;
  uStack_190 = 0x140300001908;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x3e,&local_198);
  local_198 = (undefined8 *)0x805b0000805b;
  uStack_190 = 0x140200001908;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x3f,&local_198);
  local_198 = (undefined8 *)0x823a0000823a;
  uStack_190 = 0x140300008228;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x31,&local_198);
  local_198 = (undefined8 *)0x823900008239;
  uStack_190 = 0x140200008228;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x5c,&local_198);
  local_198 = (undefined8 *)0x822900008229;
  uStack_190 = 0x140100001903;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x47,&local_198);
  local_198 = (undefined8 *)0x8d6200008d62;
  uStack_190 = 0x836300001907;
  local_188 = local_188 & 0xffff0000;
  FUN_1431cc3f7(0x24,&local_198);
  local_198 = (undefined8 *)0x805700008057;
  uStack_190 = 0x836600001908;
  local_188._0_2_ = 0x100;
  FUN_1431cc3f7(0x48,&local_198);
  local_198 = (undefined8 *)0x822a0000822a;
  uStack_190 = 0x140300001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(4,&local_198);
  local_198 = (undefined8 *)0x822e0000822e;
  uStack_190 = 0x140600001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0xd,&local_198);
  local_198 = (undefined8 *)0x822f0000822f;
  uStack_190 = 0x140b00008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0xf,&local_198);
  local_198 = (undefined8 *)0x822f0000822f;
  uStack_190 = 0x140b00008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x10,&local_198);
  local_198 = (undefined8 *)0x823000008230;
  uStack_190 = 0x140600008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x11,&local_198);
  local_198 = (undefined8 *)0x805900008059;
  uStack_190 = 0x836800001908;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x12,&local_198);
  local_198 = (undefined8 *)0x822d0000822d;
  uStack_190 = 0x140b00001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x15,&local_198);
  local_198 = (undefined8 *)0x822d0000822d;
  uStack_190 = 0x140b00001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x16,&local_198);
  local_198 = (undefined8 *)0x822900008229;
  uStack_190 = 0x140100001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x1b,&local_198);
  local_198 = (undefined8 *)0x823600008236;
  uStack_190 = 0x140500008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x1c,&local_198);
  local_198 = (undefined8 *)0x823500008235;
  uStack_190 = 0x140400008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x1d,&local_198);
  local_198 = (undefined8 *)0x823400008234;
  uStack_190 = 0x140300008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x20,&local_198);
  local_198 = (undefined8 *)0x823300008233;
  uStack_190 = 0x140200008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x21,&local_198);
  local_198 = (undefined8 *)0x823200008232;
  uStack_190 = 0x140100008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x39,&local_198);
  local_198 = (undefined8 *)0x822b0000822b;
  uStack_190 = 0x140100008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x28,&local_198);
  local_198 = (undefined8 *)0x823c0000823c;
  uStack_190 = 0x140500008228;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x44,&local_198);
  local_198 = (undefined8 *)0x805800008058;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x3d,&local_198);
  local_198 = (undefined8 *)0x8c3a00008c3a;
  uStack_190 = 0x8c3b00001907;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(9,&local_198);
  local_198 = (undefined8 *)0x8c3a00008c3a;
  uStack_190 = 0x8c3b00001907;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x1a,&local_198);
  local_198 = (undefined8 *)0x881a0000881a;
  uStack_190 = 0x140b00001908;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(10,&local_198);
  local_198 = (undefined8 *)0x823800008238;
  uStack_190 = 0x140100008228;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x4f,&local_198);
  local_198 = (undefined8 *)0x8d7100008d71;
  uStack_190 = 0x140500008d98;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x50,&local_198);
  local_198 = (undefined8 *)0x8d8300008d83;
  uStack_190 = 0x140400008d98;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x51,&local_198);
  local_198 = (undefined8 *)0x881500008815;
  uStack_190 = 0x140600001907;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x52,&local_198);
  local_198 = (undefined8 *)0x823100008231;
  uStack_190 = 0x140000008d94;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x53,&local_198);
  local_198 = (undefined8 *)0x8c4300008058;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 0x100;
  FUN_1431cc3f7(2,&local_198);
  local_198 = (undefined8 *)0x8c4300008058;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x25,&local_198);
  local_198 = (undefined8 *)0x8d7c00008d7c;
  uStack_190 = 0x140100008d99;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x3c,&local_198);
  local_198 = (undefined8 *)0x822900008229;
  uStack_190 = 0x140100001903;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(3,&local_198);
  local_198 = (undefined8 *)0x8f95;
  uStack_190 = 0x140000008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x18,&local_198);
  local_198 = (undefined8 *)0x8dbd00008dbd;
  uStack_190 = 0x140100008227;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(0x17,&local_198);
  local_198 = (undefined8 *)0x8dbb00008dbb;
  uStack_190 = 0x140100001903;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(0x27,&local_198);
  local_198 = (undefined8 *)0x8e8d00008e8c;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(0x38,&local_198);
  local_198 = (undefined8 *)0x822c0000822c;
  uStack_190 = 0x140300008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0xe,&local_198);
  local_198 = (undefined8 *)0x8f9900008f99;
  uStack_190 = 0x140200008227;
  local_188._0_2_ = 0;
  FUN_1431cc3f7(0x4e,&local_198);
  local_198 = (undefined8 *)0x8c4d000083f1;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(5,&local_198);
  local_198 = (undefined8 *)0x8c4e000083f2;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(6,&local_198);
  local_198 = (undefined8 *)0x8c4f000083f3;
  uStack_190 = 0x140100001908;
  local_188._0_2_ = 1;
  FUN_1431cc3f7(7,&local_198);
  if (DAT_14ca79689 == '\x01') {
    local_198 = (undefined8 *)0x93d0000093b0;
    uStack_190 = 0x140100001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x32,&local_198);
    local_198 = (undefined8 *)0x93d4000093b4;
    uStack_190 = 0x140100001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x33,&local_198);
    local_198 = (undefined8 *)0x93d7000093b7;
    uStack_190 = 0x140100001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x34,&local_198);
    local_198 = (undefined8 *)0x93db000093bb;
    uStack_190 = 0x140100001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x35,&local_198);
    local_198 = (undefined8 *)0x93dd000093bd;
    uStack_190 = 0x140100001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x36,&local_198);
  }
  if (DAT_14ca7968a == '\x01') {
    local_198 = (undefined8 *)0x93d0000093b0;
    uStack_190 = 0x140b00001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x49,&local_198);
    local_198 = (undefined8 *)0x93d4000093b4;
    uStack_190 = 0x140b00001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x4a,&local_198);
    local_198 = (undefined8 *)0x93d7000093b7;
    uStack_190 = 0x140b00001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x4b,&local_198);
    local_198 = (undefined8 *)0x93db000093bb;
    uStack_190 = 0x140b00001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x4c,&local_198);
    local_198 = (undefined8 *)0x93dd000093bd;
    uStack_190 = 0x140b00001908;
    local_188._0_2_ = 1;
    FUN_1431cc3f7(0x4d,&local_198);
  }
  lVar8 = DAT_14ca79648;
  _DAT_14c8735d8 = 4;
  DAT_14c873608 = 8;
  DAT_14ca84e18 = 1;
  iVar5 = *piVar1;
  if (iVar5 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar20 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar20 = DVar6 == DVar7;
      }
      else {
        bVar20 = false;
      }
    }
    uVar14 = (ulonglong)(bVar20 ^ 1);
  }
  lVar2 = DAT_14ca79630;
  DAT_14ca84f5a = *(char *)(lVar8 + uVar14);
  uVar4 = 1;
  if (DAT_14ca84f5a == '\x01') {
    iVar5 = *piVar1;
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar14 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar14 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar14 = 1;
    }
    uVar4 = *(undefined1 *)(lVar2 + uVar14);
  }
  DAT_14ca8507b = 1;
  DAT_14ca84f59 = uVar4;
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[2] != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca7fe28 == '\x01') {
    FUN_1431d9992(1);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"OpenGL.UBODirectWrite",1);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x98))(plVar13,&DAT_149e25dfc,0xd000000,0);
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"OpenGL.UseStagingBuffer",1);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x98))(plVar13,&DAT_149e25dfc,0xd000000,0);
    }
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar13 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"FX.AllowGPUSorting",1);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x98))(plVar13,&DAT_149e25dfc,0xd000000,0);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  lVar8 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Occlusion.SingleRHIThreadStall",1);
  if (lVar8 != 0) {
    FUN_140635eb8(lVar8,0,0xd000000,0);
  }
  DAT_14ca79650 = puVar17;
  lVar8 = FUN_1411d089c();
  uVar18 = *(uint *)(lVar8 + 8);
  iVar5 = *(int *)(puVar17 + 0x29f6);
  *(uint *)(puVar17 + 0x29f6) = iVar5 + uVar18;
  if ((uint)(*(int *)((longlong)puVar17 + 0x14fb4) - iVar5) < uVar18) {
    FUN_1411d0a1e(puVar17 + 0x29f5);
  }
  memset((void *)((longlong)iVar5 * 8 + puVar17[0x29f5]),0,(longlong)(int)uVar18 << 3);
  if (*(char *)(puVar17 + 0x2a1c) == '\x01') {
    FUN_1473f5c54(puVar17 + 0x2a02);
  }
  FUN_1473f5b7e(puVar17 + 0x2a02);
  *(undefined1 *)(puVar17 + 0x2a1c) = 1;
  if ((local_80 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar17;
}



// FUNCTION 1431c69b0 FUN_1431c69b0 body=4872 status=ok
// SIG undefined FUN_1431c69b0(void)

void FUN_1431c69b0(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  char *_Str;
  char *_Str_00;
  size_t sVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  undefined2 *puVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong **pplVar28;
  GUID *pGVar29;
  wchar_t *pwVar30;
  bool bVar31;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined *local_1c0;
  char local_1a9;
  longlong *local_1a8;
  longlong *local_1a0;
  ulong local_198;
  ulong local_194;
  ulong local_190;
  ulong local_18c;
  int local_188;
  ulong local_184;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  longlong **local_168;
  undefined8 local_160;
  longlong **local_158;
  ulonglong uStack_150;
  undefined2 *local_148;
  ulonglong uStack_140;
  wchar_t *local_138;
  ulonglong uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  GUID local_88;
  ulong local_78;
  char local_74;
  undefined8 local_70;
  ulonglong local_60;
  
  lVar26 = DAT_14ca796c0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar12 == 0x40000002) {
    uVar15 = 0;
  }
  else {
    bVar31 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar31 = DVar13 == DVar14;
      }
      else {
        bVar31 = false;
      }
    }
    uVar15 = (ulonglong)(bVar31 ^ 1);
  }
  if ((*(int *)(lVar26 + uVar15 * 4) != 0) && (DAT_14ca7fe40 != 0)) {
    puVar16 = (undefined8 *)FUN_14047ac8c();
    iVar12 = *(int *)(puVar16 + 1);
    lVar26 = (longlong)iVar12;
    local_128 = (longlong *)0x0;
    pvVar4 = (void *)*puVar16;
    uStack_120 = (void *)CONCAT44(uStack_120._4_4_,iVar12);
    FUN_1446dd670(&local_128,(uint)(lVar26 == 0) + iVar12 + 0x13,0);
    if (lVar26 != 0) {
      memcpy(local_128,pvVar4,lVar26 * 2);
    }
    FUN_1401aebe8(&local_128,L"ProgramBinaryCache",0x12);
    plVar21 = local_128;
    iVar12 = (int)uStack_120;
    puVar16 = (undefined8 *)FUN_14047ac8c();
    local_88.Data4._0_4_ = *(undefined4 *)(puVar16 + 1);
    lVar26 = (longlong)(int)local_88.Data4._0_4_;
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    pvVar4 = (void *)*puVar16;
    FUN_1446dd670(&local_88,(uint)(lVar26 == 0) + local_88.Data4._0_4_ + 9,0);
    if (lVar26 != 0) {
      memcpy((void *)CONCAT44(local_88._4_4_,local_88.Data1),pvVar4,lVar26 * 2);
    }
    FUN_1401aebe8(&local_88,L"RHICache",8);
    uVar7 = local_88.Data4._4_4_;
    uVar6 = local_88.Data4._0_4_;
    iVar11 = (local_88.Data4._0_4_ == 0) + 0x13;
    local_128 = (longlong *)CONCAT44(local_88._4_4_,local_88.Data1);
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    uStack_120 = (void *)CONCAT44(local_88.Data4._4_4_,local_88.Data4._0_4_);
    local_88.Data4[0] = '\0';
    local_88.Data4[1] = '\0';
    local_88.Data4[2] = '\0';
    local_88.Data4[3] = '\0';
    local_88.Data4[4] = '\0';
    local_88.Data4[5] = '\0';
    local_88.Data4[6] = '\0';
    local_88.Data4[7] = '\0';
    iVar23 = iVar11 + uVar6;
    if (iVar23 < (int)uVar6) {
LAB_1431c7c3a:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (iVar23 < 0) {
LAB_1431c7c33:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    if ((int)uVar7 < iVar23) {
      FUN_1446f8c06(&local_128);
    }
    FUN_1401aebe8(&local_128,L"ProgramBinaryCache",0x12);
    pvVar4 = uStack_120;
    plVar19 = local_128;
    iVar11 = (int)uStack_120;
    local_128 = (longlong *)0x0;
    uStack_120 = (void *)0x0;
    if (CONCAT44(local_88._4_4_,local_88.Data1) != 0) {
      FUN_1400020a8();
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar8 = FUN_14054d46e(&DAT_14c846b20,L"ClearOpenGLBinaryProgramCache");
    if (cVar8 != '\0') {
      plVar17 = (longlong *)FUN_1400dbadc();
      plVar18 = (longlong *)*plVar17;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)FUN_140e92164();
        *plVar17 = (longlong)plVar18;
      }
      plVar17 = (longlong *)&DAT_149dfb77a;
      if (iVar11 != 0) {
        plVar17 = plVar19;
      }
      (**(code **)(*plVar18 + 0x1d0))(plVar18,plVar17);
    }
    local_1a8 = plVar19;
    plVar18 = (longlong *)FUN_1400dbadc();
    plVar19 = (longlong *)*plVar18;
    if (plVar19 == (longlong *)0x0) {
      plVar19 = (longlong *)FUN_140e92164();
      *plVar18 = (longlong)plVar19;
    }
    pwVar30 = L"";
    plVar18 = plVar21;
    if (iVar12 == 0) {
      plVar18 = (longlong *)&DAT_149dfb77a;
    }
    cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19,plVar18);
    if (cVar8 != '\0') {
      plVar17 = (longlong *)FUN_1400dbadc();
      plVar19 = (longlong *)*plVar17;
      if (plVar19 == (longlong *)0x0) {
        plVar19 = (longlong *)FUN_140e92164();
        *plVar17 = (longlong)plVar19;
      }
      plVar17 = (longlong *)&DAT_149dfb77a;
      if (iVar11 != 0) {
        plVar17 = local_1a8;
      }
      (**(code **)(*plVar19 + 0x1e8))(plVar19,plVar17,plVar18,0);
      plVar17 = (longlong *)FUN_1400dbadc();
      plVar19 = (longlong *)*plVar17;
      if (plVar19 == (longlong *)0x0) {
        plVar19 = (longlong *)FUN_140e92164();
        *plVar17 = (longlong)plVar19;
      }
      (**(code **)(*plVar19 + 0x1d0))(plVar19,plVar18);
    }
    plVar19 = (longlong *)FUN_14001cc68(0x1b8,0x10);
    *plVar19 = 0;
    *(int *)(plVar19 + 1) = iVar11;
    local_180 = plVar21;
    if (iVar11 == 0) {
      *(undefined4 *)((longlong)plVar19 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(plVar19,(ulonglong)pvVar4 & 0xffffffff,0);
      memcpy((void *)*plVar19,local_1a8,(longlong)iVar11 * 2);
    }
    plVar19[9] = 0;
    iVar12 = 0;
    *(undefined4 *)(plVar19 + 10) = 0;
    plVar19[0xf] = 0;
    *(undefined4 *)(plVar19 + 0x10) = 0;
    plVar19[2] = 0;
    plVar19[3] = 0;
    plVar19[4] = 0;
    plVar19[5] = 0;
    plVar19[6] = 0;
    plVar19[7] = 0;
    *(undefined4 *)(plVar19 + 8) = 0;
    plVar19[0xb] = 0;
    plVar19[0xc] = 0;
    *(undefined8 *)((longlong)plVar19 + 0x84) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar19 + 0x8c) = 0;
    plVar19[0x13] = 0;
    *(undefined4 *)(plVar19 + 0x14) = 0;
    plVar19[0x1b] = 0;
    *(undefined4 *)(plVar19 + 0x1c) = 0;
    plVar19[0x15] = 0;
    plVar19[0x16] = 0;
    plVar19[0x17] = 0;
    plVar19[0x18] = 0;
    *(undefined8 *)((longlong)plVar19 + 0xe4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar19 + 0xec) = 0;
    plVar19[0x1f] = 0;
    *(undefined4 *)(plVar19 + 0x20) = 0;
    plVar19[0x25] = 0;
    *(undefined4 *)(plVar19 + 0x26) = 0;
    plVar19[0x21] = 0;
    plVar19[0x22] = 0;
    *(undefined8 *)((longlong)plVar19 + 0x134) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar19 + 0x13c) = 0;
    plVar19[0x29] = 0;
    *(undefined4 *)(plVar19 + 0x2a) = 0;
    plVar19[0x2b] = 0;
    *(undefined1 *)((longlong)plVar19 + 0x161) = 0;
    plVar19[0x31] = 0;
    *(undefined4 *)(plVar19 + 0x32) = 0;
    plVar19[0x2d] = 0;
    plVar19[0x2e] = 0;
    *(undefined8 *)((longlong)plVar19 + 0x194) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar19 + 0x19c) = 0;
    plVar19[0x35] = 0;
    *(undefined4 *)(plVar19 + 0x36) = 0;
    _Str = (char *)(*DAT_14ca7fb50)(0x1f02);
    _Str_00 = (char *)(*DAT_14ca7fb50)(0x1f01);
    local_138 = (wchar_t *)0x0;
    uStack_130 = 0;
    sVar20 = strlen(_Str);
    FUN_14047a987(&local_138,_Str,sVar20 & 0xffffffff);
    sVar20 = strlen(_Str_00);
    FUN_14047a987(&local_138,_Str_00,sVar20 & 0xffffffff);
    local_78 = 0;
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    local_88.Data4[0] = '\0';
    local_88.Data4[1] = '\0';
    local_88.Data4[2] = '\0';
    local_88.Data4[3] = '\0';
    local_88.Data4[4] = '\0';
    local_88.Data4[5] = '\0';
    local_88.Data4[6] = '\0';
    local_88.Data4[7] = '\0';
    if ((int)uStack_130 != 0) {
      pwVar30 = local_138;
      iVar12 = (int)uStack_130 + -1;
    }
    local_a8 = 0;
    if (pwVar30 == (wchar_t *)0x0) {
      local_a0 = 0;
      local_98 = 0;
    }
    else {
      sVar20 = wcslen(pwVar30);
      FUN_1449b853c(&local_128,pwVar30,sVar20 & 0xffffffff,1);
    }
    FUN_140f0be04(local_a0,(longlong)iVar12,&local_88);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_148 = (undefined2 *)0x0;
    uStack_140 = 0;
    FUN_1407c8a86(&local_88,0x14);
    local_170 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)DAT_14ca85550 * 0x3c);
    FUN_1400021e4();
    iVar12 = (int)local_160;
    iVar11 = ((int)local_160 == 0) + 1;
    local_158 = local_168;
    local_168 = (longlong **)0x0;
    iVar5 = local_160._4_4_;
    uStack_150 = local_160;
    local_160 = 0;
    iVar23 = iVar11 + iVar12;
    if (iVar23 < iVar12) goto LAB_1431c7c3a;
    if (iVar23 < 0) goto LAB_1431c7c33;
    local_1a0 = plVar19 + 2;
    if (iVar5 < iVar23) {
      FUN_1446f8c06(&local_158);
    }
    FUN_1400020e8(&local_158,&DAT_149e01f60,1);
    FUN_1401c7f3e(&local_128,&local_158,&local_148);
    if (*local_1a0 != 0) {
      FUN_1400020a8();
    }
    plVar19[2] = (longlong)local_128;
    local_128 = (longlong *)0x0;
    *(int *)(plVar19 + 3) = (int)uStack_120;
    *(undefined4 *)((longlong)plVar19 + 0x1c) = uStack_120._4_4_;
    uStack_120 = (void *)0x0;
    if (local_158 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (local_168 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    local_178 = param_1;
    if (local_148 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar18 = (longlong *)FUN_1400dbadc();
    plVar21 = (longlong *)*plVar18;
    if (plVar21 == (longlong *)0x0) {
      plVar21 = (longlong *)FUN_140e92164();
      *plVar18 = (longlong)plVar21;
    }
    local_128 = (longlong *)0x0;
    uStack_120 = (void *)0x0;
    plVar18 = (longlong *)FUN_14054d1d4();
    iVar12 = (int)plVar19[1];
    lVar26 = (longlong)iVar12;
    local_148 = (undefined2 *)0x0;
    pvVar4 = (void *)*plVar19;
    uStack_140 = CONCAT44(uStack_140._4_4_,iVar12);
    FUN_1446dd670(&local_148,iVar12 + (uint)(lVar26 == 0) + 2,0);
    if (lVar26 != 0) {
      memcpy(local_148,pvVar4,lVar26 * 2);
    }
    FUN_1401aebe8(&local_148,&DAT_149e060b2,1);
    puVar24 = local_148;
    if ((int)uStack_140 == 0) {
      puVar24 = &DAT_149dfb77a;
    }
    local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,1);
    (**(code **)(*plVar18 + 0x78))(plVar18,&local_128,puVar24);
    if (local_148 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar15 = 0;
    if ((longlong)(int)uStack_120 != 0) {
      plVar17 = local_128 + (longlong)(int)uStack_120 * 2;
      plVar18 = local_128;
      do {
        iVar12 = (int)plVar18[1] + -1;
        if ((int)plVar18[1] == 0) {
          iVar12 = 0;
        }
        uVar22 = *(uint *)(plVar19 + 1);
        iVar12 = iVar12 + 1 + (uint)((longlong)(int)uVar22 == 0);
        local_148 = (undefined2 *)0x0;
        pvVar4 = (void *)*plVar19;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar22);
        if (iVar12 == 0 && uVar22 == 0) {
          uStack_140 = (ulonglong)uVar22;
        }
        else {
          iVar23 = iVar12 + uVar22;
          if (iVar12 < 0) goto LAB_1431c7c33;
          FUN_1446dd670(&local_148,iVar23,0);
          if (uVar22 != 0) {
            memcpy(local_148,pvVar4,(longlong)(int)uVar22 * 2);
          }
        }
        FUN_1401aebe8(&local_148,*plVar18);
        puVar24 = &DAT_149dfb77a;
        if ((int)uStack_140 != 0) {
          puVar24 = local_148;
        }
        bVar9 = (**(code **)(*plVar21 + 0x108))(plVar21,puVar24);
        iVar12 = (int)plVar18[1];
        if (iVar12 == (int)plVar19[3]) {
          bVar31 = true;
          if (1 < iVar12) {
            lVar26 = 0;
            while( true ) {
              uVar2 = *(ushort *)(*plVar18 + lVar26);
              uVar22 = (uint)uVar2;
              uVar3 = *(ushort *)(*local_1a0 + lVar26);
              uVar27 = (uint)uVar3;
              if (uVar2 != uVar3) {
                if ((uVar3 | uVar2) < 0x80) {
                  uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1431c7209;
                }
                iVar12 = uVar22 - uVar27;
                goto LAB_1431c7242;
              }
              if (uVar2 == 0) break;
LAB_1431c7209:
              lVar26 = lVar26 + 2;
            }
            iVar12 = 0;
LAB_1431c7242:
            bVar31 = iVar12 == 0;
          }
        }
        else {
          bVar31 = (int)plVar19[3] + iVar12 == 1;
        }
        if ((bVar9 & bVar31) == 0) {
          puVar24 = &DAT_149dfb77a;
          if ((int)uStack_140 != 0) {
            puVar24 = local_148;
          }
          lVar26 = 0x88;
          if (bVar9 != 0) {
            lVar26 = 0x1d0;
          }
          (**(code **)(*plVar21 + lVar26))(plVar21,puVar24);
        }
        if (local_148 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar17);
      uVar15 = (ulonglong)uStack_120 & 0xffffffff;
    }
    FUN_1447a1747(local_128,uVar15);
    param_1 = local_178;
    plVar21 = local_180;
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    DAT_14ca79780 = plVar19;
    cVar8 = FUN_1473eafb1();
    plVar19 = DAT_14ca79780;
    if (cVar8 == '\0') {
      FUN_1473eb04e(&local_128,DAT_14ca79780);
      DAT_14ca79780[0x15] = (longlong)local_128;
      FUN_1473eb12e(&local_128);
      DAT_14ca79780[0x16] = (longlong)local_128;
      plVar18 = local_1a8;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
      FUN_140056680(&local_138,L"PrecacheBinaries");
      plVar18 = local_1a8;
      iVar12 = (int)plVar19[3] + -1;
      if ((int)plVar19[3] == 0) {
        iVar12 = 0;
      }
      uVar22 = *(uint *)(plVar19 + 1);
      iVar11 = iVar12 + 1 + (uint)((longlong)(int)uVar22 == 0);
      local_148 = (undefined2 *)0x0;
      pvVar4 = (void *)*plVar19;
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar22);
      if (iVar11 == 0 && uVar22 == 0) {
        uStack_140 = (ulonglong)uVar22;
      }
      else {
        iVar23 = iVar11 + uVar22;
        if (iVar11 < 0) goto LAB_1431c7c33;
        FUN_1446dd670(&local_148,iVar23,0);
        if (uVar22 != 0) {
          memcpy(local_148,pvVar4,(longlong)(int)uVar22 * 2);
        }
      }
      FUN_1401aebe8(&local_148,plVar19[2],iVar12);
      local_158 = (longlong **)0x0;
      uStack_150 = 0;
      plVar17 = (longlong *)FUN_14054d1d4();
      puVar24 = local_148;
      if ((int)uStack_140 == 0) {
        puVar24 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar17 + 0x70))(plVar17,&local_158,puVar24,&DAT_149e060b2);
      if ((longlong)(int)uStack_150 == 0) {
LAB_1431c782f:
        local_88.Data1 = 0;
        local_88.Data2 = 0;
        local_88.Data3 = 0;
        local_88.Data4[0] = '\0';
        local_88.Data4[1] = '\0';
        local_88.Data4[2] = '\0';
        local_88.Data4[3] = '\0';
        local_88.Data4[4] = '\0';
        local_88.Data4[5] = '\0';
        local_88.Data4[6] = '\0';
        local_88.Data4[7] = '\0';
        CoCreateGuid(&local_88);
      }
      else {
        local_1a0 = plVar19;
        lVar26 = (longlong)(int)uStack_150 << 4;
        pplVar28 = local_158;
        do {
          puVar24 = local_148;
          iVar12 = *(int *)(pplVar28 + 1) + -1;
          if (*(int *)(pplVar28 + 1) == 0) {
            iVar12 = 0;
          }
          iVar11 = (int)uStack_140;
          lVar25 = (longlong)(int)uStack_140;
          iVar12 = iVar12 + 1 + (uint)(lVar25 == 0);
          local_128 = (longlong *)0x0;
          uStack_120 = (void *)CONCAT44(uStack_120._4_4_,(int)uStack_140);
          if (iVar12 == 0 && (int)uStack_140 == 0) {
            uStack_120 = (void *)(uStack_140 & 0xffffffff);
          }
          else {
            iVar23 = iVar12 + (int)uStack_140;
            if (iVar12 < 0) goto LAB_1431c7c33;
            FUN_1446dd670(&local_128,iVar23,0);
            if (iVar11 != 0) {
              memcpy(local_128,puVar24,lVar25 * 2);
            }
          }
          FUN_1401aebe8(&local_128,*pplVar28);
          if (pplVar28 == &local_128) {
            if (local_128 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*pplVar28 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            *pplVar28 = local_128;
            local_128 = (longlong *)0x0;
            *(int *)(pplVar28 + 1) = (int)uStack_120;
            *(undefined4 *)((longlong)pplVar28 + 0xc) = uStack_120._4_4_;
          }
          pplVar28 = pplVar28 + 2;
          lVar26 = lVar26 + -0x10;
        } while (lVar26 != 0);
        plVar19 = local_1a0;
        plVar18 = local_1a8;
        if ((longlong)(int)uStack_150 == 0) goto LAB_1431c782f;
        lVar26 = (longlong)(int)uStack_150 << 4;
        local_18c = 0;
        local_184 = 0xffffffff;
        local_190 = 0;
        local_194 = 0;
        local_198 = 0;
        local_188 = 0;
        pplVar28 = local_158;
        do {
          FUN_140c50e9c(&local_168,pplVar28,1);
          plVar19 = (longlong *)FUN_1400dbadc();
          plVar21 = (longlong *)*plVar19;
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)FUN_140e92164();
            *plVar19 = (longlong)plVar21;
          }
          plVar19 = (longlong *)&DAT_149dfb77a;
          if (*(int *)(pplVar28 + 1) != 0) {
            plVar19 = *pplVar28;
          }
          (**(code **)(*plVar21 + 0x120))(plVar21,&local_128,plVar19);
          if ((int)local_160 == (int)uStack_130) {
            if ((1 < (int)local_160) &&
               (iVar12 = wcscmp((wchar_t *)local_168,local_138), iVar12 != 0)) goto LAB_1431c76f4;
LAB_1431c7663:
            if ((longlong)DAT_14c760d00 * 0x100000 < CONCAT71(uStack_10f,local_110))
            goto LAB_1431c76f4;
            plVar18 = (longlong *)FUN_14054d1d4();
            plVar19 = (longlong *)&DAT_149dfb77a;
            if (*(int *)(pplVar28 + 1) != 0) {
              plVar19 = *pplVar28;
            }
            plVar19 = (longlong *)(**(code **)(*plVar18 + 0x18))(plVar18,plVar19,0);
            if (plVar19 == (longlong *)0x0) goto LAB_1431c76f4;
            local_88.Data1 = 0xffffffff;
            local_70 = 0;
            local_88.Data2 = 0;
            local_88.Data3 = 0;
            local_88.Data4[0] = '\0';
            local_88.Data4[1] = '\0';
            local_88.Data4[2] = '\0';
            local_88.Data4[3] = '\0';
            local_88.Data4[4] = '\0';
            local_88.Data4[5] = '\0';
            local_88.Data4[6] = '\0';
            local_88.Data4[7] = '\0';
            local_78 = 0;
            lVar25 = (**(code **)(*plVar19 + 0x30))(plVar19);
            if (0 < lVar25) {
              FUN_1473eb7c4(plVar19,&local_88);
            }
            (**(code **)(*plVar19 + 0x1f8))(plVar19);
            if (local_88.Data1 != 6) {
LAB_1431c76e7:
              (**(code **)*plVar19)(plVar19,1);
              goto LAB_1431c76f4;
            }
            cVar10 = FUN_1473eadf1();
            cVar8 = local_74;
            iVar12 = (int)local_70;
            if (local_74 != cVar10 || (int)local_70 == 0) goto LAB_1431c76e7;
            local_184 = local_88.Data1;
            local_18c._0_2_ = local_88.Data2;
            local_18c._2_2_ = local_88.Data3;
            local_190._0_1_ = local_88.Data4[0];
            local_190._1_1_ = local_88.Data4[1];
            local_190._2_1_ = local_88.Data4[2];
            local_190._3_1_ = local_88.Data4[3];
            local_194._0_1_ = local_88.Data4[4];
            local_194._1_1_ = local_88.Data4[5];
            local_194._2_1_ = local_88.Data4[6];
            local_194._3_1_ = local_88.Data4[7];
            local_198 = local_78;
            (**(code **)*plVar19)(plVar19,1);
            local_1a9 = cVar8;
            local_188 = iVar12;
          }
          else {
            if ((int)uStack_130 + (int)local_160 == 1) goto LAB_1431c7663;
LAB_1431c76f4:
            plVar19 = (longlong *)&DAT_149dfb77a;
            if (*(int *)(pplVar28 + 1) != 0) {
              plVar19 = *pplVar28;
            }
            (**(code **)(*plVar21 + 0x88))(plVar21,plVar19);
          }
          if (local_168 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_178;
          plVar21 = local_180;
          plVar19 = local_1a0;
          plVar18 = local_1a8;
          pplVar28 = pplVar28 + 2;
          lVar26 = lVar26 + -0x10;
        } while (lVar26 != 0);
        if ((local_184 != 6) ||
           (bVar31 = local_188 == 0, cVar8 = FUN_1473eadf1(), local_1a9 != cVar8 || bVar31))
        goto LAB_1431c782f;
        local_88.Data1 = local_18c;
        local_88.Data2 = (undefined2)local_190;
        local_88.Data3 = local_190._2_2_;
        local_88.Data4[0] = (undefined1)local_194;
        local_88.Data4[1] = local_194._1_1_;
        local_88.Data4[2] = local_194._2_1_;
        local_88.Data4[3] = local_194._3_1_;
        local_88.Data4[4] = (undefined1)local_198;
        local_88.Data4[5] = local_198._1_1_;
        local_88.Data4[6] = local_198._2_1_;
        local_88.Data4[7] = local_198._3_1_;
      }
      pwVar30 = local_138;
      local_128 = (longlong *)((ulonglong)local_128 & 0xffffffffffffff00);
      uStack_120 = (void *)0x0;
      lVar26 = (longlong)(int)uStack_130;
      local_118 = CONCAT44(local_118._4_4_,(int)uStack_130);
      if (lVar26 == 0) {
        local_118 = uStack_130 & 0xffffffff;
        DAT_14ca79788 = 0;
      }
      else {
        FUN_1446dd670(&uStack_120,uStack_130 & 0xffffffff,0);
        memcpy(uStack_120,pwVar30,lVar26 * 2);
        DAT_14ca79788 = local_128._0_1_;
      }
      if (CONCAT44(DAT_14ca79790._4_4_,(undefined4)DAT_14ca79790) != 0) {
        FUN_1400020a8();
      }
      DAT_14ca79790._0_4_ = (int)uStack_120;
      DAT_14ca79790._4_4_ = uStack_120._4_4_;
      uRam000000014ca79798 = (undefined4)local_118;
      uRam000000014ca7979c = local_118._4_4_;
      local_1c0 = &DAT_14ca79788;
      local_1c8 = (undefined8 *)&local_88;
      FUN_1431c80d0(plVar19);
      FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
      if (local_158 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_148 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
    }
    if (plVar21 != (longlong *)0x0) {
      FUN_1400020a8(plVar21);
    }
    if (plVar18 != (longlong *)0x0) {
      FUN_1400020a8(plVar18);
    }
  }
  FUN_1473e9e64(param_1);
  local_128 = (longlong *)0x1010100;
  uStack_120 = (void *)0x7f7fffff00000000;
  local_118 = 0;
  local_110 = 0;
  FUN_1473f9456(param_1,&local_88);
  pGVar29 = (GUID *)(param_1 + 0x918);
  if (pGVar29 != &local_88) {
    lVar26 = *(longlong *)pGVar29;
    pGVar29->Data1 = local_88.Data1;
    pGVar29->Data2 = local_88.Data2;
    pGVar29->Data3 = local_88.Data3;
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    if (lVar26 == 0) goto LAB_1431c7a3a;
    LOCK();
    puVar1 = (uint *)(lVar26 + 8);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar22 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar26 + 8);
      LOCK();
      uVar22 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar22 >> 0x1e & 1) == 0) {
        bVar9 = *(byte *)(lVar26 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar26;
        plVar21 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar9 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar21;
            LOCK();
            bVar31 = plVar21 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar31) {
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar31);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar31 = plVar19 != DAT_14ca843c8;
            plVar21 = plVar18;
            if (bVar31) {
              plVar19 = DAT_14ca843c8;
              plVar21 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar21;
            UNLOCK();
          } while (bVar31);
        }
      }
    }
  }
  lVar26 = CONCAT44(local_88._4_4_,local_88.Data1);
  if (lVar26 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar26 + 8);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar22 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar26 + 8);
      LOCK();
      uVar22 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar22 >> 0x1e & 1) == 0) {
        bVar9 = *(byte *)(lVar26 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar26;
        plVar21 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar9 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar21;
            LOCK();
            bVar31 = plVar21 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar31) {
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar31);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar31 = plVar19 != DAT_14ca843c8;
            plVar21 = plVar18;
            if (bVar31) {
              plVar19 = DAT_14ca843c8;
              plVar21 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar21;
            UNLOCK();
          } while (bVar31);
        }
      }
    }
  }
LAB_1431c7a3a:
  if (DAT_14ca7945c == '\0') {
    DAT_14ca7fc88 = 0;
  }
  else {
    local_88.Data1 = 0;
    (*DAT_14ca7fb40)(0x9047,&local_88);
    DAT_14ca7fc88 = (longlong)(int)local_88.Data1 << 10;
    if (((longlong)(int)local_88.Data1 != 0) && (DAT_14ca7fc90 = DAT_14ca7fc88, 0 < DAT_14ca84ed0))
    {
      DAT_14ca84ec8 =
           (longlong)
           (int)((float)DAT_14ca7fc88 * (float)DAT_14ca84ed0 * 0.01 * 0.0009765625 * 0.0009765625)
           << 0x14;
    }
  }
  (*DAT_14ca7fe30)();
  FUN_140056680(&local_138,L"OpenGL");
  local_88._0_8_ = &local_148;
  local_148 = DAT_14cae4098;
  local_88.Data4 = (uchar  [8])&local_138;
  FUN_1406e263c(&DAT_14cae4048,&local_158,&local_88,0);
  if (local_138 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ec9638();
  DAT_14ca84d88 = 1;
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c7cba FUN_1431c7cba body=462 status=ok
// SIG undefined FUN_1431c7cba(void)

longlong FUN_1431c7cba(int *param_1,byte param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [20];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14ca813bc == '\x01') {
    iVar10 = param_1[1];
    iVar9 = param_1[2];
    if (param_2 == 0) {
      if (1 < iVar9) {
        iVar11 = 1;
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)iVar10 * 8);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 8);
          cVar5 = FUN_1473ebcdc(lVar8,0);
          if (((cVar5 != '\0') && (cVar5 = FUN_1473ebcdc(lVar2,0), cVar5 != '\0')) &&
             (uVar3 = *(ulonglong *)(lVar2 + 0x10), puVar1 = (ulonglong *)(lVar8 + 0x10),
             lVar8 = uVar3 - *puVar1, *puVar1 <= uVar3 && lVar8 != 0)) goto LAB_1431c7e35;
          iVar9 = param_1[2];
          iVar10 = (iVar10 + *param_1 + -1) % *param_1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar9);
      }
      if (iVar9 < 1) goto LAB_1431c7e33;
    }
    iVar11 = *param_1;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)iVar10 * 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 8);
    FUN_1403936f2(local_8c,1,1);
    QueryPerformanceCounter(&local_78);
    dVar4 = (double)local_78.QuadPart * DAT_14c83f420;
    do {
      bVar6 = FUN_1473ebcdc(lVar8,0);
      bVar7 = FUN_1473ebcdc(lVar2);
      if ((bVar7 & bVar6) != 0 || ((param_2 ^ 1) & iVar9 != iVar11) != 0) {
        FUN_1402488ea(local_8c);
        if (((bVar7 & bVar6) == 0) ||
           (uVar3 = *(ulonglong *)(lVar2 + 0x10), puVar1 = (ulonglong *)(lVar8 + 0x10),
           lVar8 = uVar3 - *puVar1, uVar3 < *puVar1 || lVar8 == 0)) goto LAB_1431c7e33;
        goto LAB_1431c7e35;
      }
      QueryPerformanceCounter(&local_78);
    } while (((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar4 + 16777216.0) <= 0.5)
    ;
    FUN_1402488ea(local_8c);
  }
LAB_1431c7e33:
  lVar8 = 0;
LAB_1431c7e35:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1431c7e8b FUN_1431c7e8b body=69 status=ok
// SIG undefined FUN_1431c7e8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7e8b(void)

{
  _DAT_14ca79690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c7ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79698,1);
  return;
}



// FUNCTION 1431c7ed0 FUN_1431c7ed0 body=69 status=ok
// SIG undefined FUN_1431c7ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7ed0(void)

{
  _DAT_14ca796a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c7f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca796a8,1);
  return;
}



// FUNCTION 1431c7f15 FUN_1431c7f15 body=69 status=ok
// SIG undefined FUN_1431c7f15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7f15(void)

{
  _DAT_14ca796b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c7f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca796b8,1);
  return;
}



// FUNCTION 1431c7f5a FUN_1431c7f5a body=69 status=ok
// SIG undefined FUN_1431c7f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7f5a(void)

{
  _DAT_14ca796c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c7f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca796d0,1);
  return;
}



// FUNCTION 1431c7f9f FUN_1431c7f9f body=69 status=ok
// SIG undefined FUN_1431c7f9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7f9f(void)

{
  _DAT_14ca796e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c7fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca796e8,1);
  return;
}



// FUNCTION 1431c7fe4 FUN_1431c7fe4 body=69 status=ok
// SIG undefined FUN_1431c7fe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c7fe4(void)

{
  _DAT_14ca796f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c8026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca796f8,1);
  return;
}



// FUNCTION 1431c8029 FUN_1431c8029 body=69 status=ok
// SIG undefined FUN_1431c8029(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c8029(void)

{
  _DAT_14ca79700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c806b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79708,1);
  return;
}



// FUNCTION 1431c806e FUN_1431c806e body=69 status=ok
// SIG undefined FUN_1431c806e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c806e(void)

{
  _DAT_14ca79710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79718,1);
  return;
}



// FUNCTION 1431c80d0 FUN_1431c80d0 body=190 status=ok
// SIG undefined FUN_1431c80d0(void)

void FUN_1431c80d0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)(param_6 + 8)) {
    iVar2 = *(int *)(param_6 + 0x10);
    _Src = *(void **)(param_6 + 8);
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  if (param_4 != 0) {
    FUN_1431c8ace(param_1);
    if (*(char *)(param_1 + 0x161) == '\x01') {
      *param_6 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431c8187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  return;
}



// FUNCTION 1431c818e FUN_1431c818e body=323 status=ok
// SIG undefined FUN_1431c818e(void)

void FUN_1431c818e(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  cVar3 = *(char *)(param_1 + 0x161);
  FUN_1447addd0((undefined8 *)(param_1 + 0x20),0x10);
  if (cVar3 == '\x01') {
    cVar3 = FUN_1473eb36a(param_1,*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec));
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x161) = 0;
      FUN_1473eb32a(param_1 + 0xb8);
    }
    else {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      *(undefined1 *)(param_1 + 0x161) = 0;
      FUN_1473eb32a(param_1 + 0xb8);
      FUN_1431c8ace(param_1);
      if (*(char *)(param_1 + 0x161) == '\x01') {
        FUN_1473eb36a(param_1,*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x161) = 0;
  FUN_1473eb32a(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x30),0);
  }
  puVar2 = *(undefined2 **)(param_1 + 0x30);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431c82ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  return;
}



// FUNCTION 1431c82e2 FUN_1431c82e2 body=325 status=ok
// SIG undefined FUN_1431c82e2(void)

void FUN_1431c82e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))();
  if ((longlong)DAT_14c760cfc * 0x100000 + *(longlong *)(param_1 + 0x48) <= lVar2) {
    iVar5 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec);
    FUN_1431c8428(param_1,iVar5);
    plVar3 = (longlong *)FUN_14054d1d4();
    FUN_1473eb262(param_1,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar4,0);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar3 + 0x1a0))(plVar3,*(undefined8 *)(param_1 + 0x48));
    iVar1 = *(int *)(param_1 + 0x50);
    FUN_1473eb262(param_1,&local_48);
    local_58 = plVar3;
    FUN_1431c858a(param_1,iVar5 - iVar1,lVar2,&local_48);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(int *)(param_1 + 0x50) = iVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c8428 FUN_1431c8428 body=353 status=ok
// SIG undefined FUN_1431c8428(void)

void FUN_1431c8428(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x158);
  uVar6 = 1;
  if ((*(byte *)((longlong)plVar2 + 0x29) & 6) == 0) {
    uVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x1a0))(plVar2,0);
    uStack_50 = *(undefined4 *)(param_1 + 0x24);
    uStack_4c = *(uint *)(param_1 + 0x28);
    uStack_48 = *(undefined4 *)(param_1 + 0x2c);
    local_58 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0x20),6);
    local_44 = FUN_1473eadf1();
    local_3c = (undefined4)uVar5;
    local_40 = param_2;
    FUN_1473eb7c4(plVar2,&local_58);
    (**(code **)(*plVar2 + 0x1a0))(plVar2,uVar5);
    (**(code **)(*plVar2 + 0x1f0))(plVar2);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x158) + 0x29);
    bVar3 = 2;
    if ((bVar1 & 2) == 0) {
      bVar3 = bVar1 >> 1 & 2;
    }
    if (bVar3 == 0) goto LAB_1431c84cf;
    uVar6 = (uint)bVar3;
  }
  local_58 = "FailedBinaryProgramArchiveWrite";
  uStack_50 = 0x1f;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar4;
  if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
    (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_58);
  }
  local_68 = uVar6;
  FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLProgramBinaryFileCache.cpp",0x363,
                L"MarkValidContent - FArchive error bit set, failed to write binary cache. %d, %d",
                param_2);
LAB_1431c84cf:
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c858a FUN_1431c858a body=1346 status=ok
// SIG undefined FUN_1431c858a(void)

void FUN_1431c858a(longlong param_1,uint param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 local_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 uStack_110;
  int local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong **local_e8;
  undefined1 local_dc [4];
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_178;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  local_140 = param_1 + 0x108;
  if ((uint)(*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x13c)) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)param_2);
    }
    FUN_1473f724a(local_140,param_2);
    iVar11 = 1;
    if (3 < param_2) {
      uVar10 = (param_2 | 1) + 0xe;
      iVar11 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 1 << ((byte)iVar11 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0x150) < iVar11)) {
      *(int *)(param_1 + 0x150) = iVar11;
      FUN_1473f73fc(local_140);
    }
  }
  local_158 = *(longlong *)(param_1 + 0x48);
  local_150 = param_3 - local_158;
  FUN_1473eb522(param_1,&local_f8,param_4);
  lVar12 = (**(code **)(*param_5 + 0x28))(param_5);
  local_128 = param_3;
  if (lVar12 < param_3) {
    local_130 = param_1 + 0xb8;
    do {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_68 = 0;
      local_fc = 0;
      lVar12 = 0;
      do {
        puVar16 = (undefined4 *)((longlong)&local_d8 + lVar12);
        pcVar14 = *(code **)(*param_5 + 0x170);
        if (pcVar14 == FUN_14473a572) {
          plVar13 = (longlong *)param_5[0x12];
          pcVar14 = *(code **)(*plVar13 + 0x170);
          if (pcVar14 == FUN_14004e24c) {
            FUN_14004e24c(plVar13,puVar16,0x14);
          }
          else if (pcVar14 == FUN_1447395b8) {
            lVar4 = plVar13[0x12];
            lVar5 = plVar13[0x13];
            *(undefined4 *)((longlong)&local_c8 + lVar12) = *(undefined4 *)(lVar4 + 0x10 + lVar5);
            puVar3 = (undefined4 *)(lVar4 + lVar5);
            uVar7 = puVar3[1];
            uVar8 = puVar3[2];
            uVar9 = puVar3[3];
            *puVar16 = *puVar3;
            *(undefined4 *)((longlong)&local_d8 + lVar12 + 4) = uVar7;
            *(undefined4 *)((longlong)&uStack_d0 + lVar12) = uVar8;
            *(undefined4 *)((longlong)&uStack_d0 + lVar12 + 4) = uVar9;
            plVar13[0x13] = plVar13[0x13] + 0x14;
          }
          else {
            if (pcVar14 != FUN_144a6950e) goto LAB_1431c87e7;
            if ((*(byte *)((longlong)plVar13 + 0x29) & 2) == 0) {
              puVar3 = *(undefined4 **)plVar13[1];
              *(undefined4 *)((longlong)&local_c8 + lVar12) = puVar3[4];
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              *puVar16 = *puVar3;
              *(undefined4 *)((longlong)&local_d8 + lVar12 + 4) = uVar7;
              *(undefined4 *)((longlong)&uStack_d0 + lVar12) = uVar8;
              *(undefined4 *)((longlong)&uStack_d0 + lVar12 + 4) = uVar9;
              plVar13 = (longlong *)plVar13[1];
              goto LAB_1431c87d0;
            }
          }
        }
        else if (pcVar14 == FUN_140090aac) {
          FUN_140090aac(param_5,puVar16,0x14);
        }
        else {
          plVar13 = param_5;
          if (pcVar14 == FUN_144a6950e) {
            if ((*(byte *)((longlong)param_5 + 0x29) & 2) == 0) {
              plVar13 = (longlong *)param_5[1];
              puVar3 = (undefined4 *)*plVar13;
              *(undefined4 *)((longlong)&local_c8 + lVar12) = puVar3[4];
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              *puVar16 = *puVar3;
              *(undefined4 *)((longlong)&local_d8 + lVar12 + 4) = uVar7;
              *(undefined4 *)((longlong)&uStack_d0 + lVar12) = uVar8;
              *(undefined4 *)((longlong)&uStack_d0 + lVar12 + 4) = uVar9;
LAB_1431c87d0:
              *plVar13 = *plVar13 + 0x14;
            }
          }
          else {
LAB_1431c87e7:
            (*pcVar14)(plVar13,puVar16,0x14);
          }
        }
        lVar12 = lVar12 + 0x14;
      } while (lVar12 != 0x78);
      puVar6 = (ulonglong *)param_5[1];
      piVar1 = (int *)*puVar6 + 1;
      if ((int *)puVar6[1] < piVar1) {
        if ((*(byte *)((longlong)param_5 + 0x2a) & 2) == 0) {
          (**(code **)(*param_5 + 0x170))(param_5,&local_fc,4);
        }
        else {
          FUN_14572512c(param_5,&local_fc);
        }
      }
      else {
        local_fc = *(int *)*puVar6;
        *puVar6 = (ulonglong)piVar1;
      }
      if (local_fc == 0) goto LAB_1431c8a65;
      local_138 = (**(code **)(*param_5 + 0x28))(param_5);
      FUN_1473f6502(local_f8 + 6,&local_f0,&local_d8);
      FUN_1473f6502(local_130,&local_f0,&local_d8);
      iVar11 = local_fc;
      if (((local_f8[2] == 0) || (*(int *)(local_f8 + 4) == 0)) ||
         (lVar12 = *(longlong *)(local_f8[3] + (longlong)(*(int *)(local_f8 + 4) + -1) * 8),
         lVar12 == 0)) {
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        FUN_140393c76(&local_118,local_fc,1);
        (**(code **)(*param_5 + 0x170))(param_5,local_118,local_fc);
        local_120 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar13 = local_118;
        *local_120 = (longlong)local_118;
        local_118 = (longlong *)0x0;
        uVar7 = (undefined4)uStack_110;
        *(undefined4 *)(local_120 + 1) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)local_120 + 0xc) = uStack_110._4_4_;
        uStack_110 = 0;
        local_120[2] = (longlong)plVar13;
        *(undefined4 *)(local_120 + 3) = uVar7;
        local_f0 = &local_d8;
        local_e8 = &local_120;
        FUN_1473f75cc(local_140,local_dc,&local_f0);
        plVar13 = local_120;
        if (local_120 != (longlong *)0x0) {
          if (*local_120 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar13);
        }
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar2 = *(int *)(local_f8 + 5);
        iVar17 = (int)local_138;
        lVar12 = *(longlong *)(lVar12 + 8);
        local_118 = (longlong *)FUN_14001cc68(0x20,0x10);
        *local_118 = 0;
        local_118[1] = 0;
        local_118[2] = (ulonglong)(uint)(iVar17 - iVar2) + lVar12;
        *(int *)(local_118 + 3) = iVar11;
        local_f0 = &local_d8;
        local_e8 = &local_118;
        FUN_1473f75cc(local_140,&local_120,&local_f0);
        plVar13 = local_118;
        if (local_118 != (longlong *)0x0) {
          if (*local_118 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar13);
        }
        (**(code **)(*param_5 + 0x1a0))(param_5,(int)local_138 + local_fc);
      }
      lVar12 = (**(code **)(*param_5 + 0x28))(param_5);
    } while (lVar12 < local_128);
  }
  uVar15 = (**(code **)(*param_5 + 0x28))(param_5);
  *(undefined8 *)(param_1 + 0x48) = uVar15;
LAB_1431c8a65:
  if (local_f8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_f8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_f8)(local_f8,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  if ((local_60 ^ (ulonglong)local_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c8ace FUN_1431c8ace body=1130 status=ok
// SIG undefined FUN_1431c8ace(void)

void FUN_1431c8ace(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  ulonglong uStack_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1473eb262(param_1,&local_40);
  puVar7 = local_40;
  lVar8 = (longlong)local_38;
  local_50 = (undefined2 *)0x0;
  local_48 = local_38;
  FUN_1446dd670(&local_50,(uint)(lVar8 == 0) + local_38 + 5,0);
  if (lVar8 != 0) {
    memcpy(local_50,puVar7,lVar8 * 2);
  }
  FUN_1400020e8(&local_50,L".scan",5);
  plVar3 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar3;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar3 = (longlong)plVar4;
  }
  puVar7 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar7 = local_50;
  }
  (**(code **)(*plVar4 + 0x88))(plVar4,puVar7);
  puVar7 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar7 = local_40;
  }
  puVar6 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar6 = local_50;
  }
  (**(code **)(*plVar4 + 0xa0))(plVar4,puVar6,puVar7);
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar7 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar7 = local_50;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar7,0);
  if (plVar3 == (longlong *)0x0) {
LAB_1431c8d58:
    FUN_1473eb262(param_1,&local_70);
    plVar4 = (longlong *)FUN_14054d1d4();
    if (iStack_68 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)CONCAT44(uStack_6c,local_70);
    }
    lVar8 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar7,0x10);
    *(longlong *)(param_1 + 0x158) = lVar8;
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
    if (lVar8 == 0) {
      *(undefined1 *)(param_1 + 0x161) = 0;
      local_70 = 0x4a36f2e8;
      uStack_6c = 1;
      iStack_68 = 0x1e;
      uStack_64 = uStack_64 & 0xffffffffffffff00;
      local_70 = FUN_14001a6c0(&local_70,1);
      uStack_6c = 0;
      if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
        (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_70);
      }
      FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLProgramBinaryFileCache.cpp",0x2ee,
                    L"ScanProgramCacheFile - Failed to open binary cache.");
    }
    else {
      *(undefined1 *)(param_1 + 0x161) = 1;
      local_70 = 6;
      uStack_6c = *(undefined4 *)(param_1 + 0x20);
      iStack_68 = *(int *)(param_1 + 0x24);
      uStack_64 = *(ulonglong *)(param_1 + 0x28);
      local_5c = FUN_1473eadf1();
      local_58 = 0;
      plVar4 = *(longlong **)(param_1 + 0x158);
      FUN_1473eb7c4(plVar4,&local_70);
      uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    if (plVar3 == (longlong *)0x0) goto LAB_1431c8e36;
  }
  else {
    local_70 = 0xffffffff;
    local_58 = 0;
    uStack_6c = 0;
    iStack_68 = 0;
    uStack_64 = 0;
    lVar8 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if (0 < lVar8) {
      FUN_1473eb7c4(plVar3,&local_70);
    }
    cVar1 = FUN_1473eb20e(&local_70,param_1 + 0x20);
    if (cVar1 == '\0') {
      (**(code **)(*plVar3 + 0x1f8))(plVar3);
      puVar7 = local_50;
      if (local_48 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar4 + 0x88))(plVar4,puVar7);
      goto LAB_1431c8d58;
    }
    uVar9 = (uint)local_58;
    if ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec)) < (uint)local_58) {
      if ((int)(uint)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)(uint)local_58);
      }
      FUN_1473f6106(param_1 + 0xb8,local_58 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar9) {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x100) == 0) || (*(int *)(param_1 + 0x100) < iVar2)) {
        *(int *)(param_1 + 0x100) = iVar2;
        FUN_1473f62b6(param_1 + 0xb8);
      }
    }
    local_78 = plVar3;
    FUN_1431c858a(param_1,local_58 & 0xffffffff,local_58._4_4_,&local_50);
    (**(code **)(*plVar3 + 0x28))(plVar3);
    (**(code **)(*plVar3 + 0x1f8))(plVar3);
    puVar7 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar7 = local_50;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar6 = local_40;
    }
    (**(code **)(*plVar4 + 0xa0))(plVar4,puVar6,puVar7);
    *(undefined1 *)(param_1 + 0x161) = 2;
    cVar1 = FUN_1473eafb1();
    if (cVar1 != '\0') {
      FUN_1473eb262(param_1,&local_70);
      plVar4 = (longlong *)FUN_14054d1d4();
      if (iStack_68 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)CONCAT44(uStack_6c,local_70);
      }
      lVar8 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar7,0x18);
      *(longlong *)(param_1 + 0x158) = lVar8;
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      if (lVar8 != 0) {
        *(undefined1 *)(param_1 + 0x161) = 1;
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x1a0))
                  (*(longlong **)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x48));
      }
    }
  }
  (**(code **)*plVar3)(plVar3,1);
LAB_1431c8e36:
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c8f3a FUN_1431c8f3a body=628 status=ok
// SIG undefined FUN_1431c8f3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c8f3a(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  char cVar10;
  longlong *plVar11;
  code *pcVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 local_f8 [32];
  int *local_d8;
  undefined4 *local_d0;
  undefined1 local_c8 [4];
  int local_c4;
  undefined4 local_c0 [30];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_f8;
  plVar2 = *(longlong **)(param_1 + 0x158);
  puVar14 = param_2;
  puVar15 = local_c0;
  for (lVar13 = 0x1e; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  local_d8 = *(int **)(param_3 + 0x10);
  local_c4 = *(int *)(param_3 + 0x18);
  local_d0 = param_2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar13 = 0;
  do {
    puVar14 = (undefined4 *)((longlong)local_c0 + lVar13);
    pcVar12 = *(code **)(*plVar2 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      plVar11 = (longlong *)plVar2[0x12];
      pcVar12 = *(code **)(*plVar11 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(plVar11,puVar14,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar3 = plVar11[0x12];
        lVar4 = plVar11[0x13];
        *(undefined4 *)((longlong)local_c0 + lVar13 + 0x10) = *(undefined4 *)(lVar3 + 0x10 + lVar4);
        puVar15 = (undefined4 *)(lVar3 + lVar4);
        uVar6 = puVar15[1];
        uVar7 = puVar15[2];
        uVar8 = puVar15[3];
        *puVar14 = *puVar15;
        *(undefined4 *)((longlong)local_c0 + lVar13 + 4) = uVar6;
        *(undefined4 *)((longlong)local_c0 + lVar13 + 8) = uVar7;
        *(undefined4 *)((longlong)local_c0 + lVar13 + 0xc) = uVar8;
        plVar11[0x13] = plVar11[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_1431c909d;
        if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
          puVar15 = *(undefined4 **)plVar11[1];
          *(undefined4 *)((longlong)local_c0 + lVar13 + 0x10) = puVar15[4];
          uVar6 = puVar15[1];
          uVar7 = puVar15[2];
          uVar8 = puVar15[3];
          *puVar14 = *puVar15;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 4) = uVar6;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 8) = uVar7;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 0xc) = uVar8;
          plVar11 = (longlong *)plVar11[1];
          goto LAB_1431c9086;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(plVar2,puVar14,0x14);
    }
    else {
      plVar11 = plVar2;
      if (pcVar12 == FUN_144a6950e) {
        if ((*(byte *)((longlong)plVar2 + 0x29) & 2) == 0) {
          plVar11 = (longlong *)plVar2[1];
          puVar15 = (undefined4 *)*plVar11;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 0x10) = puVar15[4];
          uVar6 = puVar15[1];
          uVar7 = puVar15[2];
          uVar8 = puVar15[3];
          *puVar14 = *puVar15;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 4) = uVar6;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 8) = uVar7;
          *(undefined4 *)((longlong)local_c0 + lVar13 + 0xc) = uVar8;
LAB_1431c9086:
          *plVar11 = *plVar11 + 0x14;
        }
      }
      else {
LAB_1431c909d:
        (*pcVar12)(plVar11,puVar14,0x14);
      }
    }
    lVar13 = lVar13 + 0x14;
    if (lVar13 == 0x78) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
      piVar9 = local_d8;
      puVar5 = (ulonglong *)plVar2[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,&local_c4,4);
        }
        else {
          FUN_14572512c(plVar2,&local_c4);
        }
      }
      else {
        local_c4 = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar1;
      }
      (**(code **)(*plVar2 + 0x170))(plVar2,piVar9,local_c4);
      (**(code **)(*plVar2 + 0x28))(plVar2);
      cVar10 = FUN_1473eadf1();
      if (cVar10 != '\0') {
        _DAT_14ca797a0 = _DAT_14ca797a0 + *piVar9;
        _DAT_14ca797a4 = _DAT_14ca797a4 + local_c4;
      }
      FUN_1473f6502(param_1 + 0xb8,local_c8,local_d0);
      cVar10 = FUN_1473eafb1();
      if ((cVar10 != '\0') &&
         (DAT_14c760cf8 + *(int *)(param_1 + 0x40) <=
          *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec))) {
        FUN_1431c8428(param_1);
      }
      if ((local_48 ^ (ulonglong)local_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1431c91b0 FUN_1431c91b0 body=85 status=ok
// SIG undefined FUN_1431c91b0(void)

void FUN_1431c91b0(void)

{
  char cVar1;
  
  if (DAT_14ca79780 == 0) {
    return;
  }
  cVar1 = FUN_1473eafb1();
  if (cVar1 != '\0') {
    FUN_1431c82e2(DAT_14ca79780);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  FUN_1431c9206(DAT_14ca79780);
                    /* WARNING: Could not recover jumptable at 0x0001431c91fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  return;
}



// FUNCTION 1431c9206 FUN_1431c9206 body=776 status=ok
// SIG undefined FUN_1431c9206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c9206(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x13c) < *(int *)(param_1 + 0x110)) {
    fVar17 = (float)_DAT_14c760cf4;
    QueryPerformanceCounter(&local_b8);
    dVar3 = (double)local_b8.QuadPart * DAT_14c83f420;
    iVar2 = *(int *)(param_1 + 0x130);
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar12 = 0;
      iVar6 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x128);
      if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x118);
      }
      uVar11 = *puVar10;
      if (uVar11 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1431c94b2;
          iVar12 = iVar12 + 0x20;
          uVar11 = puVar10[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar16 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if ((iVar6 < iVar2) && (fVar17 = fVar17 / 1000.0, 0.0 < fVar17)) {
      local_c0 = param_1 + 0x108;
      uVar11 = 0xffffffff;
      do {
        dVar5 = dVar3 + 16777216.0;
        local_c4 = iVar12;
        FUN_1431c950f(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x88,
                      (longlong)iVar6 * 0x88 + *(longlong *)(param_1 + 0x108) + 0x78);
        QueryPerformanceCounter(&local_b8);
        dVar4 = (double)local_b8.QuadPart * DAT_14c83f420;
        QueryPerformanceCounter(&local_b8);
        dVar3 = (double)local_b8.QuadPart * DAT_14c83f420;
        FUN_1473f7ae8(local_c0,iVar6);
        uVar11 = ~(uint)uVar16 & uVar11;
        puVar10 = *(uint **)(param_1 + 0x128);
        if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x118);
        }
        iVar2 = *(int *)(param_1 + 0x130);
        iVar6 = (int)uVar15;
        lVar14 = (longlong)iVar6;
        uVar7 = puVar10[lVar14] & uVar11;
        iVar12 = local_c4;
        if (uVar7 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar10[lVar14 + lVar13 + 1];
            if (uVar7 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar14 == lVar13) goto LAB_1431c94b2;
          }
          uVar15 = (ulonglong)(iVar6 + (int)lVar13 + 1);
          uVar11 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((iVar2 <= iVar6) ||
           (fVar17 = fVar17 - (float)((dVar4 + 16777216.0) - dVar5), fVar17 <= 0.0)) break;
      } while( true );
    }
  }
LAB_1431c94b2:
  if ((local_b0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c950f FUN_1431c950f body=595 status=ok
// SIG undefined FUN_1431c950f(void)

void FUN_1431c950f(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  char *local_38;
  ulonglong *puStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1431cbefb();
  lVar7 = FUN_1473eea30(param_1,0);
  cVar3 = FUN_1431cbd16();
  if (cVar3 == '\0') {
    if (lVar7 == 0) {
      local_50 = local_50 & 0xffffffff00000000;
      local_38 = *(char **)(*param_2 + 0x10);
      puStack_30 = *(ulonglong **)(*param_2 + 0x18);
      cVar3 = FUN_1431cacbd();
      if (cVar3 == '\0') {
        local_38 = "FailedBinaryProgramCreateLoadRequest";
        puStack_30 = (ulonglong *)CONCAT35(puStack_30._5_3_,0x24);
        uVar4 = FUN_14001a6c0(&local_38,1);
        local_38 = (char *)(ulonglong)uVar4;
        if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
          (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_38);
        }
        FUN_1473ee780(param_1,&local_38);
        pcVar9 = local_38;
        if ((int)puStack_30 == 0) {
          pcVar9 = "";
        }
        FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLShaders.cpp",0xd74,
                      L"CompleteLoadedGLProgramRequest_internal : Failed to create GL program from binary data! [%s]"
                      ,pcVar9);
        if (local_38 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar7 = FUN_14001cc68(0x2a8,0x10);
      FUN_1473ee598(lVar7,param_1,local_50 & 0xffffffff);
      *(undefined1 *)(lVar7 + 0x288) = 0;
      *(undefined4 *)(lVar7 + 0x290) = 0xffffffff;
      puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
      *(undefined8 **)(lVar7 + 0x298) = puVar8;
      *(undefined4 *)(lVar7 + 0x2a0) = 0;
      FUN_1431cbefb();
      FUN_1473ee9b0(param_1,lVar7);
    }
  }
  else {
    if (lVar7 != 0) {
      FUN_1431cbefb();
      uVar5 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
      iVar6 = FUN_1473f2ee2(&DAT_14ca79b98,uVar5,param_1);
      if (iVar6 == -1) {
        lVar1 = *(longlong *)(lVar7 + 0x298);
        *(longlong *)(lVar7 + 0x298) = *param_2;
        *param_2 = lVar1;
        goto LAB_1431c954f;
      }
    }
    FUN_1431cbefb();
    local_50 = 0;
    puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
    local_48 = (longlong *)*param_2;
    *param_2 = (longlong)puVar8;
    local_38 = param_1;
    puStack_30 = &local_50;
    FUN_1473f431c(local_3c);
    plVar2 = local_48;
    if (local_48 != (longlong *)0x0) {
      if (*local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
  }
LAB_1431c954f:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431c9764 FUN_1431c9764 body=231 status=ok
// SIG undefined FUN_1431c9764(void)

bool FUN_1431c9764(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x14) = 0;
  plVar4 = (longlong *)(param_1 + 0x108);
  uVar1 = (*(code *)PTR_FUN_14c75b148)(param_2,0x78,0);
  iVar2 = FUN_1473f7844(plVar4,uVar1,param_2);
  if (iVar2 != -1) {
    local_38 = *(longlong **)(*plVar4 + 0x78 + (longlong)iVar2 * 0x88);
    *(longlong **)(*plVar4 + 0x78 + (longlong)iVar2 * 0x88) = plVar3;
    FUN_1473f7ae8(plVar4,iVar2);
    FUN_1431c950f(param_2,&local_38);
    plVar3 = local_38;
  }
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c984c FUN_1431c984c body=46 status=ok
// SIG undefined FUN_1431c984c(void)

void FUN_1431c984c(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)&DAT_14ca797b0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431c98a0 FUN_1431c98a0 body=78 status=ok
// SIG undefined FUN_1431c98a0(void)

undefined8 * FUN_1431c98a0(void)

{
  undefined8 *puVar1;
  
  if ((longlong)DAT_14ca797f8 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  else {
    puVar1 = *(undefined8 **)(DAT_14ca797f0 + -8 + (longlong)DAT_14ca797f8 * 8);
    DAT_14ca797f8 = DAT_14ca797f8 + -1;
    FUN_1473f03c6();
  }
  return puVar1;
}



// FUNCTION 1431c98f3 FUN_1431c98f3 body=152 status=ok
// SIG undefined FUN_1431c98f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431c98f3(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca79a60) {
    FUN_144b3d300(&DAT_14ca79a60);
    if (DAT_14ca79a60 == -1) {
      DAT_14ca79a30 = 0;
      DAT_14ca79a38 = 0;
      DAT_14ca79a10 = 0;
      _DAT_14ca79a18 = 0;
      _DAT_14ca79a3c = 0xffffffff00000080;
      DAT_14ca79a44 = 0;
      DAT_14ca79a50 = 0;
      DAT_14ca79a58 = 0;
      atexit(FUN_1431cc8d2);
      _Init_thread_footer(&DAT_14ca79a60);
      return;
    }
  }
  return;
}



// FUNCTION 1431c998b FUN_1431c998b body=263 status=ok
// SIG undefined FUN_1431c998b(void)

void FUN_1431c998b(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_158 [40];
  short local_130 [128];
  longlong local_30;
  short *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0xb4) < '\0') {
    pbVar1 = (byte *)(param_1 + 0x13);
    if ((byte *)param_1[0x14] != (byte *)0x0) {
      pbVar1 = (byte *)param_1[0x14];
    }
    if ((*pbVar1 & 1) == 0) {
      lVar2 = param_1[0xd];
      (**(code **)(*param_1 + 8))(param_1);
      (*DAT_14ca7fcc0)(0x8d41,(int)lVar2);
      local_28 = local_130;
      local_30 = 0;
      local_20 = 0x32;
      lVar2 = 0;
      do {
        local_130[lVar2] = (short)"static FOpenGLBase::RenderbufferStorageMultisample"[lVar2];
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x33);
      FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLBase.h",0x109,L"%s is not supported.",
                    local_28);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      (*DAT_14ca7fcc0)(0x8d41,0);
      FUN_1473f0510(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c9a94 FUN_1431c9a94 body=541 status=ok
// SIG undefined FUN_1431c9a94(void)

void FUN_1431c9a94(longlong param_1,longlong param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  HGLRC pHVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  void **local_a8;
  undefined8 *local_a0;
  uint local_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
  local_94 = uVar6;
  local_90 = param_2;
  FUN_14735b34c(param_4,uVar6,1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  if (DAT_14ca85164 == '\x01') {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    if (*(longlong *)(param_1 + 0x14fa0) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x15008);
      pHVar3 = wglGetCurrentContext();
      lVar5 = param_1 + 0x14200;
      if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
        lVar5 = param_1 + 0x148d0;
      }
      *(longlong *)(param_1 + 0x14fa0) = lVar5;
    }
    local_78 = *param_5;
    uStack_70 = *(undefined4 *)(param_5 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
    uStack_68 = *(undefined4 *)(param_5 + 2);
    uStack_64 = *(undefined4 *)((longlong)param_5 + 0x14);
    uStack_60 = *(undefined4 *)(param_5 + 3);
    local_a0 = &local_78;
    local_88 = *(undefined8 *)param_3;
    local_80 = *(undefined8 *)(param_3 + 2);
    local_a8 = &local_58;
    FUN_1473eca40(param_1,*(undefined4 *)((longlong)param_5 + 0xc),param_2);
    memcpy((void *)*param_4,local_58,(ulonglong)uVar6 << 2);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar2 + 8;
    if (DAT_14ca85108 < puVar4) {
      FUN_140023dd8(&DAT_14ca85100,0x48);
      puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar2 + 8;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar4;
    *DAT_14ca85130 = puVar2;
    DAT_14ca85130 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a371460;
    puVar2[2] = param_1;
    puVar2[3] = &local_90;
    puVar2[4] = param_3;
    puVar2[5] = param_5;
    puVar2[6] = param_4;
    puVar2[7] = &local_94;
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_78,5);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c9cd0 FUN_1431c9cd0 body=302 status=ok
// SIG undefined FUN_1431c9cd0(void)

void FUN_1431c9cd0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = param_2;
  if (param_2 != 0) {
    local_38 = &local_10;
    uStack_30 = param_5;
    local_28 = param_1;
    uStack_20 = param_3;
    local_18 = param_4;
    if (DAT_14ca85164 == '\x01') {
      FUN_1431cd896(&local_38);
    }
    else {
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar1 + 7;
      if (DAT_14ca85108 < puVar2) {
        FUN_140023dd8(&DAT_14ca85100,0x40);
        puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar1 + 7;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar2;
      *DAT_14ca85130 = puVar1;
      DAT_14ca85130 = puVar1 + 1;
      puVar1[1] = 0;
      *puVar1 = &PTR_LAB_14a371468;
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_30._4_4_;
      puVar1[4] = local_28;
      puVar1[5] = uStack_20;
      puVar1[6] = local_18;
    }
    local_38 = (longlong *)0x0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c9e00 FUN_1431c9e00 body=381 status=ok
// SIG undefined FUN_1431c9e00(void)

void FUN_1431c9e00(undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  longlong *local_50;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_50 = param_3;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    plVar1 = (longlong *)0x0;
    if ((param_3 != (longlong *)0x0) && (*(char *)((longlong)param_3 + 0x52) == '\0')) {
      plVar1 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    *param_7 = *(undefined4 *)(lVar2 + 0x24);
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    *param_8 = *(undefined4 *)(lVar2 + 0x28);
    local_48 = local_48 & 0xffffffff00000000;
    local_58 = &local_48;
    uVar3 = FUN_1431cf9b8(plVar1,0,0,0);
    *param_6 = uVar3;
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 6;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x38);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 6;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a371470;
    puVar4[2] = &local_50;
    puVar4[3] = param_7;
    puVar4[4] = param_8;
    puVar4[5] = param_6;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431c9f7e FUN_1431c9f7e body=326 status=ok
// SIG undefined FUN_1431c9f7e(void)

void FUN_1431c9f7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_10;
  uStack_40 = &stack0x00000038;
  local_38 = &stack0x00000028;
  puStack_30 = &stack0x00000030;
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  local_10 = param_2;
  if (DAT_14ca85164 == '\x01') {
    FUN_1431cdae2(&local_48);
  }
  else {
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 9;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x50);
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar1 + 9;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar1;
    DAT_14ca85130 = puVar1 + 1;
    puVar1[1] = 0;
    *puVar1 = &PTR_LAB_14a371480;
    *(undefined4 *)(puVar1 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_48._4_4_;
    *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_40._4_4_;
    puVar1[4] = local_38;
    puVar1[5] = puStack_30;
    puVar1[6] = local_28;
    puVar1[7] = uStack_20;
    puVar1[8] = local_18;
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = (undefined1 *)((ulonglong)uStack_40 & 0xffffffff00000000);
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ca0c6 FUN_1431ca0c6 body=299 status=ok
// SIG undefined FUN_1431ca0c6(void)

void FUN_1431ca0c6(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_10;
  local_40 = &local_18;
  uStack_28 = param_5;
  uStack_38 = param_3;
  local_20 = param_1;
  local_18 = param_2;
  local_10 = param_4;
  if (DAT_14ca85164 == '\x01') {
    FUN_1431cdd18(&local_40);
  }
  else {
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 7;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x40);
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar1 + 7;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar1;
    DAT_14ca85130 = puVar1 + 1;
    puVar1[1] = 0;
    *puVar1 = &PTR_LAB_14a371488;
    *(undefined4 *)(puVar1 + 2) = (undefined4)local_40;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_40._4_4_;
    *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_38._4_4_;
    puVar1[4] = local_30;
    puVar1[5] = uStack_28;
    puVar1[6] = local_20;
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  FUN_14007658c(&DAT_14ca850c8,&local_40,5);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ca1f2 FUN_1431ca1f2 body=69 status=ok
// SIG undefined FUN_1431ca1f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca1f2(void)

{
  _DAT_14ca79828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79830,1);
  return;
}



// FUNCTION 1431ca237 FUN_1431ca237 body=69 status=ok
// SIG undefined FUN_1431ca237(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca237(void)

{
  _DAT_14ca79840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79848,1);
  return;
}



// FUNCTION 1431ca27c FUN_1431ca27c body=69 status=ok
// SIG undefined FUN_1431ca27c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca27c(void)

{
  _DAT_14ca79858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79860,1);
  return;
}



// FUNCTION 1431ca2c1 FUN_1431ca2c1 body=69 status=ok
// SIG undefined FUN_1431ca2c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca2c1(void)

{
  _DAT_14ca79870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79878,1);
  return;
}


