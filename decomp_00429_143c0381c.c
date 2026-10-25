// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c0381c FUN_143c0381c body=102 status=ok
// SIG undefined FUN_143c0381c(void)

void FUN_143c0381c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afba070;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a7c48(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c03884 FUN_143c03884 body=57 status=ok
// SIG undefined FUN_143c03884(void)

void FUN_143c03884(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51b88 == 0) {
    uVar1 = FUN_1464a7d8a();
    DAT_14cb51b88 = FUN_14171c317(FUN_1464a7dbb,uVar1,L"EDLSSSettingOverride");
  }
  return;
}



// FUNCTION 143c038bd FUN_143c038bd body=57 status=ok
// SIG undefined FUN_143c038bd(void)

void FUN_143c038bd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51ba0 == 0) {
    uVar1 = FUN_1464a7d8a();
    DAT_14cb51ba0 = FUN_14171c317(FUN_1464a7dec,uVar1,L"EDLSSPreset");
  }
  return;
}



// FUNCTION 143c038f6 FUN_143c038f6 body=57 status=ok
// SIG undefined FUN_143c038f6(void)

void FUN_143c038f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51bb8 == 0) {
    uVar1 = FUN_1464a7d8a();
    DAT_14cb51bb8 = FUN_14171c317(FUN_1464a7e1d,uVar1,L"EDLSSRRPreset");
  }
  return;
}



// FUNCTION 143c0392f FUN_143c0392f body=57 status=ok
// SIG undefined FUN_143c0392f(void)

void FUN_143c0392f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51c00 == 0) {
    uVar1 = FUN_1464a7d8a();
    DAT_14cb51c00 = FUN_14171c317(FUN_143c03968,uVar1,L"EDLSSUpscalerModularFeatureQuality");
  }
  return;
}



// FUNCTION 143c03968 FUN_143c03968 body=47 status=ok
// SIG undefined FUN_143c03968(void)

longlong FUN_143c03968(void)

{
  if (DAT_14cb51bf8 == 0) {
    FUN_1409ce572(&DAT_14cb51bf8,&PTR_FUN_14afbba60);
  }
  return DAT_14cb51bf8;
}



// FUNCTION 143c03998 FUN_143c03998 body=57 status=ok
// SIG undefined FUN_143c03998(void)

void FUN_143c03998(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51c18 == 0) {
    uVar1 = FUN_1464a7d8a();
    DAT_14cb51c18 = FUN_140002ddd(FUN_143c039d1,uVar1,L"DLSSUpscalerModularFeatureSettings");
  }
  return;
}



// FUNCTION 143c039d1 FUN_143c039d1 body=47 status=ok
// SIG undefined FUN_143c039d1(void)

longlong FUN_143c039d1(void)

{
  if (DAT_14cb51c10 == 0) {
    FUN_14086a14e(&DAT_14cb51c10,&PTR_FUN_14afbbb98);
  }
  return DAT_14cb51c10;
}



// FUNCTION 143c03a00 FUN_143c03a00 body=48 status=ok
// SIG undefined FUN_143c03a00(void)

void FUN_143c03a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14afbe9f0;
  return;
}



// FUNCTION 143c03a52 FUN_143c03a52 body=69 status=ok
// SIG undefined FUN_143c03a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03a52(void)

{
  _DAT_14cb51c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51c60,1);
  return;
}



// FUNCTION 143c03a97 FUN_143c03a97 body=69 status=ok
// SIG undefined FUN_143c03a97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03a97(void)

{
  _DAT_14cb51c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51c78,1);
  return;
}



// FUNCTION 143c03adc FUN_143c03adc body=69 status=ok
// SIG undefined FUN_143c03adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03adc(void)

{
  _DAT_14cb51c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51c90,1);
  return;
}



// FUNCTION 143c03b21 FUN_143c03b21 body=69 status=ok
// SIG undefined FUN_143c03b21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03b21(void)

{
  _DAT_14cb51ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51ca8,1);
  return;
}



// FUNCTION 143c03b66 FUN_143c03b66 body=69 status=ok
// SIG undefined FUN_143c03b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03b66(void)

{
  _DAT_14cb51cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51cc0,1);
  return;
}



// FUNCTION 143c03bab FUN_143c03bab body=69 status=ok
// SIG undefined FUN_143c03bab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03bab(void)

{
  _DAT_14cb51cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51cd8,1);
  return;
}



// FUNCTION 143c03bf0 FUN_143c03bf0 body=69 status=ok
// SIG undefined FUN_143c03bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03bf0(void)

{
  _DAT_14cb51ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51cf0,1);
  return;
}



// FUNCTION 143c03c35 FUN_143c03c35 body=69 status=ok
// SIG undefined FUN_143c03c35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c03c35(void)

{
  _DAT_14cb51d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c03c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51d08,1);
  return;
}



// FUNCTION 143c03c7a FUN_143c03c7a body=3788 status=ok
// SIG undefined FUN_143c03c7a(void)

void FUN_143c03c7a(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  byte bVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  size_t sVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte bVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  byte bVar28;
  uint uVar29;
  wchar_t *pwVar30;
  bool bVar31;
  undefined1 uVar32;
  byte bVar33;
  wchar_t *pwVar34;
  longlong lVar35;
  bool bVar36;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  longlong local_c8 [2];
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  float local_74;
  float local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  longlong lStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14ca83900 == (wchar_t *)0x0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    goto LAB_143c03cb0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  local_b8 = L"DLSS";
  local_b0 = 4;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_98);
  (**(code **)(*(longlong *)local_98 + 0x20))(local_98,&local_a8);
  plVar20 = uStack_90;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar21 = uStack_90 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  local_98 = local_a8;
  if (local_a0 == 0) {
    local_98 = L"";
  }
  uVar13 = 0;
  if (local_98 != (wchar_t *)0x0) {
    sVar18 = wcslen(local_98);
    uVar13 = (int)sVar18;
  }
  uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar13);
  local_88 = L"Binaries/ThirdParty/Win64/";
  uStack_80 = 0x1a;
  FUN_140bee87a(local_c8,&local_98,2);
  (**(code **)(*(longlong *)DAT_14ca83900 + 0x20))();
  FUN_140056680(local_d8);
  piVar9 = DAT_14cb51c80;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar14 = *piVar1;
  if (iVar14 == 0x40000002) {
    bVar36 = *DAT_14cb51c80 != 0;
LAB_143c03e51:
    uVar19 = 0;
    lVar35 = DAT_14cb51c98;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      bVar36 = *DAT_14cb51c80 != 0;
    }
    else if (iVar14 == 2) {
      bVar36 = *DAT_14cb51c80 != 0;
      iVar14 = 2;
    }
    else {
      if (iVar14 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        bVar36 = DVar16 == DVar17;
        iVar14 = *piVar1;
      }
      else {
        bVar36 = false;
      }
      bVar36 = piVar9[bVar36 ^ 1] != 0;
      if (iVar14 == 0x40000002) goto LAB_143c03e51;
    }
    lVar35 = DAT_14cb51c98;
    uVar19 = 1;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar14 != 2)) {
      if (iVar14 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        uVar19 = (ulonglong)(DVar16 == DVar17);
      }
      else {
        uVar19 = 0;
      }
    }
    uVar19 = uVar19 ^ 1;
  }
  bVar31 = bVar36;
  if (*(int *)(lVar35 + uVar19 * 4) != 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar12 = FUN_14054d46e(&DAT_14c846b20);
    bVar31 = true;
    if (cVar12 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar11 = FUN_14054d46e(&DAT_14c846b20);
      bVar31 = (bool)((bVar11 ^ 1) & bVar36);
    }
  }
  lVar35 = DAT_14cb51cb0;
  iVar14 = *piVar1;
  if (iVar14 == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar36 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar14 != 2)) {
      if (iVar14 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        bVar36 = DVar16 == DVar17;
      }
      else {
        bVar36 = false;
      }
    }
    uVar19 = (ulonglong)(bVar36 ^ 1);
  }
  if (DAT_14ca84df4 == 0x10de) {
    if ((*(int *)(lVar35 + uVar19 * 4) < 1) || (cVar12 = FUN_145db1694(10), cVar12 != '\0')) {
      if (bVar31 != false) {
        iVar14 = (**(code **)(*(longlong *)DAT_14ca83900 + 0x28))();
        if (iVar14 == 2) {
          plVar20 = (longlong *)FUN_1414c207a();
          lVar35 = plVar20[0x22];
          if (lVar35 == 0) {
            (**(code **)(*plVar20 + 1000))();
            lVar35 = plVar20[0x22];
          }
          bVar11 = *(byte *)(lVar35 + 0x29);
LAB_143c04005:
          bVar24 = 0;
LAB_143c04007:
          bVar28 = 0;
        }
        else {
          if (iVar14 != 4) {
            if (iVar14 != 3) {
              bVar11 = 0;
              goto LAB_143c04005;
            }
            plVar20 = (longlong *)FUN_1414c207a();
            lVar35 = plVar20[0x22];
            if (lVar35 == 0) {
              (**(code **)(*plVar20 + 1000))(plVar20);
              lVar35 = plVar20[0x22];
            }
            bVar24 = *(byte *)(lVar35 + 0x28);
            bVar11 = 0;
            goto LAB_143c04007;
          }
          plVar20 = (longlong *)FUN_1414c207a();
          lVar35 = plVar20[0x22];
          if (lVar35 == 0) {
            (**(code **)(*plVar20 + 1000))();
            lVar35 = plVar20[0x22];
          }
          bVar28 = *(byte *)(lVar35 + 0x2a);
          bVar11 = 0;
          bVar24 = 0;
        }
        bVar33 = ~(bVar11 | bVar24 | bVar28) & 1;
        *(byte *)(param_1 + 0x40) = bVar33;
        if (bVar33 == 0) {
          pwVar34 = (wchar_t *)0x0;
          if (bVar28 != 0) {
            pwVar34 = L"NGXVulkanRHI";
          }
          pwVar30 = L"NGXD3D12RHI";
          if (bVar24 == 0) {
            pwVar30 = pwVar34;
          }
          pwVar34 = L"NGXD3D11RHI";
          if (bVar11 == 0) {
            pwVar34 = pwVar30;
          }
          plVar20 = (longlong *)FUN_1414c207a();
          lVar35 = plVar20[0x22];
          if (lVar35 == 0) {
            (**(code **)(*plVar20 + 1000))(plVar20);
            lVar35 = plVar20[0x22];
          }
          iVar14 = *(int *)(lVar35 + 0x44);
          plVar20 = (longlong *)FUN_1414c207a();
          lVar35 = plVar20[0x22];
          if (lVar35 == 0) {
            (**(code **)(*plVar20 + 1000))(plVar20);
            lVar35 = plVar20[0x22];
          }
          uVar3 = *(undefined1 *)(lVar35 + 0x59);
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar12 = FUN_14054d46e(&DAT_14c846b20,L"ngxenableota");
          uVar32 = 1;
          if (cVar12 == '\0') {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar12 = FUN_14054d46e(&DAT_14c846b20,L"ngxdisableota");
            uVar32 = 0;
            if (cVar12 == '\0') {
              uVar32 = uVar3;
            }
          }
          pwVar30 = local_a8;
          local_98 = (wchar_t *)0x0;
          local_88 = (wchar_t *)0x0;
          uStack_80 = 0;
          iStack_7c = 0;
          local_78 = 0;
          local_70 = 0.0;
          uStack_6c = 0;
          uStack_68 = 0;
          local_60 = (longlong *)0x0;
          lStack_58 = 0;
          local_50 = 1;
          uStack_90 = (longlong *)(ulonglong)local_a0;
          if ((longlong)(int)local_a0 != 0) {
            FUN_1446dd670(&local_98,local_a0,0);
            memcpy(local_98,pwVar30,(longlong)(int)local_a0 * 2);
          }
          lVar35 = DAT_14cb51c68;
          local_88 = DAT_14ca83900;
          iVar15 = *piVar1;
          uVar19 = 0;
          if (iVar15 == 0x40000002) {
            iVar15 = 0x40000002;
            uVar26 = 0;
          }
          else {
            bVar36 = true;
            if ((DAT_14c86a9f8 == 1) && (iVar15 != 2)) {
              if (iVar15 == 1) {
                DVar16 = FUN_140ad26c0();
                DVar17 = GetCurrentThreadId();
                bVar36 = DVar16 == DVar17;
                iVar15 = *piVar1;
              }
              else {
                bVar36 = false;
              }
            }
            uVar26 = (ulonglong)(bVar36 ^ 1);
          }
          lVar27 = DAT_14cb51cc8;
          uVar5 = *(uint *)(lVar35 + uVar26 * 4);
          uVar29 = 3;
          if ((int)uVar5 < 3) {
            uVar29 = uVar5;
          }
          uVar26 = (ulonglong)uVar29;
          if ((int)uVar29 < 1) {
            uVar26 = uVar19;
          }
          uStack_80 = (undefined4)uVar26;
          if (iVar15 != 0x40000002) {
            bVar36 = true;
            if ((DAT_14c86a9f8 == 1) && (iVar15 != 2)) {
              if (iVar15 == 1) {
                DVar16 = FUN_140ad26c0();
                DVar17 = GetCurrentThreadId();
                bVar36 = DVar16 == DVar17;
              }
              else {
                bVar36 = false;
              }
            }
            uVar19 = (ulonglong)(bVar36 ^ 1);
          }
          iVar15 = *(int *)(lVar27 + uVar19 * 4);
          iVar25 = 2;
          if (iVar15 < 2) {
            iVar25 = iVar15;
          }
          iStack_7c = 0;
          if (0 < iVar25) {
            iStack_7c = iVar25;
          }
          local_78 = iVar14;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
            FUN_145c3c252(&DAT_14c8686c8);
            DAT_14c868708 = &DAT_14c8686c8;
            atexit(thunk_FUN_14626bbac);
            _Init_thread_footer(&DAT_14c868710);
          }
          uVar4 = DAT_14c868708[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
            FUN_145c3c252(&DAT_14c8686c8);
            DAT_14c868708 = &DAT_14c8686c8;
            atexit(thunk_FUN_14626bbac);
            _Init_thread_footer(&DAT_14c868710);
          }
          FUN_140002266(&local_e8,L"%u.%u",*DAT_14c868708,uVar4);
          if (CONCAT44(uStack_6c,local_70) != 0) {
            FUN_1400020a8();
          }
          local_70 = (float)local_e8;
          uStack_6c = local_e8._4_4_;
          plVar20 = (longlong *)FUN_145a50fcc();
          lVar35 = plVar20[0x22];
          if (lVar35 == 0) {
            (**(code **)(*plVar20 + 1000))(plVar20);
            lVar35 = plVar20[0x22];
          }
          local_e8 = (longlong *)0x0;
          uStack_e0 = 0;
          FUN_1407c869a(lVar35 + 0x98,&local_e8,0);
          if (local_60 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_60 = local_e8;
          lStack_58 = uStack_e0;
          local_50 = uVar32;
          FUN_1446f470e(&local_f0,pwVar34,1);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          plVar20 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_f0,&local_e8,1);
          (**(code **)(*plVar20 + 0x40))(plVar20,&local_e8,&local_98);
          plVar21 = local_e8;
          plVar20 = (longlong *)(param_1 + 0x18);
          if (plVar20 == &local_e8) {
LAB_143c043bf:
            if (local_e8 != (longlong *)0x0) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
            plVar21 = (longlong *)*plVar20;
          }
          else {
            plVar6 = (longlong *)*plVar20;
            *plVar20 = (longlong)local_e8;
            local_e8 = (longlong *)0x0;
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
              goto LAB_143c043bf;
            }
          }
          if (plVar21 == (longlong *)0x0) {
            *(undefined1 *)(param_1 + 0x40) = 1;
          }
          else {
            if ((char)plVar21[3] == '\x01') {
              *(undefined1 *)(param_1 + 0x41) = 0;
              if (*(char *)((longlong)plVar21 + 0x19) == '\x01') {
                *(undefined1 *)(param_1 + 0x42) = 0;
              }
            }
            else if (DAT_14cb51b59 == '\0') {
              if ((int)plVar21[8] == -0x452fffff) {
                *(undefined2 *)(param_1 + 0x41) = 0x202;
              }
              else if ((int)plVar21[8] == -0x452ffff4) {
                *(undefined2 *)(param_1 + 0x41) = 0x303;
              }
              else {
                *(undefined2 *)(param_1 + 0x41) = 0x101;
              }
            }
            else {
              *(undefined2 *)(param_1 + 0x41) = 0x505;
            }
            bVar11 = *(byte *)((longlong)plVar21 + 0x1c);
            *(ulonglong *)(param_1 + 0x44) = plVar21[4] << 0x20 | (ulonglong)plVar21[4] >> 0x20;
            if (((bVar11 & 1) != 0) && (*(char *)(param_1 + 0x40) != '\0')) {
              *(undefined2 *)(param_1 + 0x41) = 0x303;
            }
            bVar11 = *(byte *)((longlong)plVar21 + 0x34);
            *(ulonglong *)(param_1 + 0x4c) = plVar21[7] << 0x20 | (ulonglong)plVar21[7] >> 0x20;
            if ((bVar11 & 1) != 0) {
              *(undefined1 *)(param_1 + 0x42) = 3;
            }
          }
          FUN_1464a7ed6(&local_98);
          goto LAB_143c04476;
        }
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 4;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 2;
  }
LAB_143c04476:
  puVar22 = DAT_14ca4cb10;
  uVar8 = DAT_14ca94d90;
  if (*(char *)(param_1 + 0x41) == '\0') {
    puVar22 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    DAT_14cb51ed0 = *(longlong *)(param_1 + 0x18);
    *puVar22 = &PTR_FUN_14afbe4b0;
    *(undefined4 *)(puVar22 + 1) = 0xbf800000;
    local_78 = 0;
    local_74 = 0.0;
    local_70 = 0.0;
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    iStack_7c = 0;
    local_98 = (wchar_t *)0x0;
    uStack_90 = (longlong *)0x0;
    FUN_146030da2(&local_98);
    lVar35 = 0;
    do {
      lVar27 = DAT_14cb51ed0 + 0x10;
      local_e8 = (longlong *)0x3e8000003e8;
      switch(*(undefined4 *)((longlong)&DAT_14afbe570 + lVar35)) {
      case 0:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 1;
        break;
      case 1:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 2;
        break;
      case 2:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,4);
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 4;
        break;
      case 3:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,5);
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 5;
        break;
      case 0xfffffffe:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 3;
        break;
      default:
        uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
        FUN_143bfbc72(lVar27,&local_98,&local_e8);
        lVar27 = 0;
      }
      lVar10 = DAT_14cb51ee0;
      lVar27 = lVar27 * 0x2c;
      piVar1 = (int *)(DAT_14cb51ee0 + 0x1c + lVar27);
      *piVar1 = iStack_7c;
      piVar1[1] = local_78;
      piVar1[2] = (int)local_74;
      piVar1[3] = (int)local_70;
      puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar27);
      *puVar2 = (undefined4)local_88;
      puVar2[1] = local_88._4_4_;
      puVar2[2] = uStack_80;
      puVar2[3] = iStack_7c;
      puVar2 = (undefined4 *)(lVar10 + lVar27);
      *puVar2 = (undefined4)local_98;
      puVar2[1] = local_98._4_4_;
      puVar2[2] = (undefined4)uStack_90;
      puVar2[3] = uStack_90._4_4_;
      if ((char)iStack_7c == '\x01') {
        if ((local_74 != local_70) || (NAN(local_74) || NAN(local_70))) {
          if (local_74 <= DAT_14c76302c) {
            DAT_14c76302c = local_74;
          }
          if (DAT_14c763030 <= local_70) {
            DAT_14c763030 = local_70;
          }
        }
        DAT_14cb51ed8 = DAT_14cb51ed8 + 1;
      }
      lVar35 = lVar35 + 4;
    } while (lVar35 != 0x18);
    puVar7 = *(undefined8 **)(param_1 + 8);
    if ((puVar7 != puVar22) &&
       (*(undefined8 **)(param_1 + 8) = puVar22, puVar7 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    if (DAT_14cb51ed8 == 0) {
      *(undefined2 *)(param_1 + 0x41) = 0x101;
      if (*(longlong *)(param_1 + 8) != 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        FUN_1400020a8();
      }
      plVar20 = *(longlong **)(param_1 + 0x18);
      if (plVar20 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
    puVar22 = DAT_14ca4cb10;
    uVar8 = DAT_14ca94d90;
    if (*(char *)(param_1 + 0x41) == '\0') {
      FUN_1464a7f14(&local_98);
      plVar20 = uStack_90;
      if (uStack_90 == (longlong *)0x0) {
        *(wchar_t **)(param_1 + 0x20) = local_98;
        plVar21 = *(longlong **)(param_1 + 0x28);
        if (plVar21 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x28) = 0;
LAB_143c04701:
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar14 = *piVar1;
            UNLOCK();
joined_r0x000143c046f4:
            if (iVar14 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
        UNLOCK();
        *(wchar_t **)(param_1 + 0x20) = local_98;
        plVar21 = *(longlong **)(param_1 + 0x28);
        if (uStack_90 == plVar21) {
          LOCK();
          plVar21 = uStack_90 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*uStack_90)(uStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar14 = *piVar1;
            UNLOCK();
            plVar21 = plVar20;
            goto joined_r0x000143c046f4;
          }
        }
        else {
          *(longlong **)(param_1 + 0x28) = uStack_90;
          if (plVar21 != (longlong *)0x0) goto LAB_143c04701;
        }
      }
      plVar20 = uStack_90;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        plVar21 = uStack_90 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*uStack_90)(uStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb51d20) && (FUN_144b3d300(&DAT_14cb51d20), DAT_14cb51d20 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb51d18 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Reflections.Denoiser",1);
        _Init_thread_footer(&DAT_14cb51d20);
      }
      if (DAT_14cb51d18 != (longlong *)0x0) {
        (**(code **)(*DAT_14cb51d18 + 0xb0))();
      }
      puVar23 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar22 = DAT_14ca4cb10;
      uVar8 = *(undefined8 *)(param_1 + 8);
      *puVar23 = &PTR_FUN_14afbccb0;
      puVar23[1] = puVar22;
      puVar23[2] = uVar8;
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      puVar22 = puVar7;
      if ((puVar7 != puVar23) &&
         (*(undefined8 **)(param_1 + 0x10) = puVar23, puVar22 = puVar23, puVar7 != (undefined8 *)0x0
         )) {
        FUN_1400020a8();
        puVar22 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + 8);
      }
    }
  }
  DAT_14ca94d90 = uVar8;
  DAT_14ca4cb10 = puVar22;
  FUN_145df1caa(&local_98);
  plVar20 = uStack_90;
  if (uStack_90 == (longlong *)0x0) {
    *(wchar_t **)(param_1 + 0x30) = local_98;
    plVar21 = *(longlong **)(param_1 + 0x38);
    if (plVar21 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_143c0482d:
      LOCK();
      plVar20 = plVar21 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
joined_r0x000143c04858:
        if (iVar14 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
    UNLOCK();
    *(wchar_t **)(param_1 + 0x30) = local_98;
    plVar21 = *(longlong **)(param_1 + 0x38);
    if (uStack_90 == plVar21) {
      LOCK();
      plVar21 = uStack_90 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
        plVar21 = plVar20;
        goto joined_r0x000143c04858;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = uStack_90;
      if (plVar21 != (longlong *)0x0) goto LAB_143c0482d;
    }
  }
  plVar20 = uStack_90;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar21 = uStack_90 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143c03cb0:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c04b48 FUN_143c04b48 body=291 status=ok
// SIG undefined FUN_143c04b48(void)

void FUN_143c04b48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
  if (*(char *)(param_1 + 0x41) == '\0') {
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
    if (DAT_14ca94d90 == *(longlong *)(param_1 + 8)) {
      DAT_14ca94d90 = 0;
    }
    if (DAT_14ca4cb10 == *(longlong *)(param_1 + 0x10)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      bVar5 = DAT_14ca4cb10 != 0;
      DAT_14ca4cb10 = lVar4;
      if (bVar5) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        FUN_1400020a8();
      }
    }
    DAT_14cb51ee8 = 0;
    if (DAT_14cb51eec != 0) {
      FUN_146030e3e(0);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_1400020a8();
    }
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143c04c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 143c04c71 FUN_143c04c71 body=69 status=ok
// SIG undefined FUN_143c04c71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04c71(void)

{
  _DAT_14cb51d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51d30,1);
  return;
}



// FUNCTION 143c04cb6 FUN_143c04cb6 body=69 status=ok
// SIG undefined FUN_143c04cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04cb6(void)

{
  _DAT_14cb51d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51d48,1);
  return;
}



// FUNCTION 143c04cfb FUN_143c04cfb body=69 status=ok
// SIG undefined FUN_143c04cfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04cfb(void)

{
  _DAT_14cb51d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51d60,1);
  return;
}



// FUNCTION 143c04d40 FUN_143c04d40 body=69 status=ok
// SIG undefined FUN_143c04d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04d40(void)

{
  _DAT_14cb51d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51d88,1);
  return;
}



// FUNCTION 143c04d85 FUN_143c04d85 body=69 status=ok
// SIG undefined FUN_143c04d85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04d85(void)

{
  _DAT_14cb51d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51da0,1);
  return;
}



// FUNCTION 143c04dca FUN_143c04dca body=69 status=ok
// SIG undefined FUN_143c04dca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04dca(void)

{
  _DAT_14cb51db0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51db8,1);
  return;
}



// FUNCTION 143c04e0f FUN_143c04e0f body=69 status=ok
// SIG undefined FUN_143c04e0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04e0f(void)

{
  _DAT_14cb51dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51dd0,1);
  return;
}



// FUNCTION 143c04e54 FUN_143c04e54 body=69 status=ok
// SIG undefined FUN_143c04e54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04e54(void)

{
  _DAT_14cb51de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51de8,1);
  return;
}



// FUNCTION 143c04e99 FUN_143c04e99 body=69 status=ok
// SIG undefined FUN_143c04e99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04e99(void)

{
  _DAT_14cb51df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e00,1);
  return;
}



// FUNCTION 143c04ede FUN_143c04ede body=69 status=ok
// SIG undefined FUN_143c04ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04ede(void)

{
  _DAT_14cb51e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e18,1);
  return;
}



// FUNCTION 143c04f23 FUN_143c04f23 body=69 status=ok
// SIG undefined FUN_143c04f23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04f23(void)

{
  _DAT_14cb51e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e30,1);
  return;
}



// FUNCTION 143c04f68 FUN_143c04f68 body=69 status=ok
// SIG undefined FUN_143c04f68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04f68(void)

{
  _DAT_14cb51e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e48,1);
  return;
}



// FUNCTION 143c04fad FUN_143c04fad body=69 status=ok
// SIG undefined FUN_143c04fad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04fad(void)

{
  _DAT_14cb51e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c04fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e60,1);
  return;
}



// FUNCTION 143c04ff2 FUN_143c04ff2 body=69 status=ok
// SIG undefined FUN_143c04ff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c04ff2(void)

{
  _DAT_14cb51e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c05034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e78,1);
  return;
}



// FUNCTION 143c05037 FUN_143c05037 body=69 status=ok
// SIG undefined FUN_143c05037(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c05037(void)

{
  _DAT_14cb51e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c05079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51e90,1);
  return;
}



// FUNCTION 143c0507c FUN_143c0507c body=69 status=ok
// SIG undefined FUN_143c0507c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0507c(void)

{
  _DAT_14cb51ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c050be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51ea8,1);
  return;
}



// FUNCTION 143c050c1 FUN_143c050c1 body=69 status=ok
// SIG undefined FUN_143c050c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c050c1(void)

{
  _DAT_14cb51eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c05103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51ec0,1);
  return;
}



// FUNCTION 143c05118 FUN_143c05118 body=973 status=ok
// SIG undefined FUN_143c05118(void)

void FUN_143c05118(undefined8 param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_138 [40];
  longlong local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  float *local_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((*(int *)(param_2 + 0x28) == 3) && (*(longlong *)(param_2 + 0x40) != 0)) &&
      (2 < *(int *)(*(longlong *)(param_2 + 0x40) + 8))) &&
     ((*(char *)(param_2 + 0xc9) == '\x01' && ((longlong)*(int *)(param_2 + 0x10) != 0)))) {
    lVar4 = 0;
    bVar2 = false;
    do {
      bVar12 = bVar2;
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar4);
      if (((*(longlong *)(lVar5 + 0x10) == 0) || (*(char *)(lVar5 + 0x23e8) != '\0')) ||
         (*(char *)(lVar5 + 0x30eb) != '\0')) goto LAB_143c054b0;
      bVar13 = *(int *)(lVar5 + 0x3024) == 1;
      lVar4 = lVar4 + 8;
      bVar2 = (bool)(bVar12 | bVar13);
    } while ((longlong)*(int *)(param_2 + 0x10) * 8 != lVar4);
    if (((bVar12 || bVar13) && ((*(byte *)(param_2 + 0x48) & 0x10) != 0)) &&
       (*(longlong *)(param_2 + 0x188) == 0)) {
      lVar4 = FUN_14008c0ca();
      if ((longlong)*(int *)(param_2 + 0x10) != 0) {
        lVar5 = 0;
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar5);
          if ((*(int *)(lVar11 + 0x4e0) - *(int *)(lVar11 + 0x4d8) < 0x20) ||
             (*(int *)(lVar11 + 0x4e4) - *(int *)(lVar11 + 0x4dc) < 0x20)) goto LAB_143c054b0;
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(param_2 + 0x10) * 8 != lVar5);
      }
      local_110 = lVar4;
      (**(code **)(**(longlong **)(param_2 + 0x180) + 8))(*(longlong **)(param_2 + 0x180),local_b0);
      puVar6 = local_b0;
      if (local_70 != (undefined1 *)0x0) {
        puVar6 = local_70;
      }
      fVar1 = *(float *)(puVar6 + (longlong)DAT_14cad82fc * 4);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = local_110;
      local_b8 = (float *)(DAT_14cb51ee0 + 0xd4);
      local_c0 = (float *)(DAT_14cb51ee0 + 0xd8);
      local_c8 = (float *)(DAT_14cb51ee0 + 0x7c);
      local_d0 = (float *)(DAT_14cb51ee0 + 0x80);
      local_d8 = (float *)(DAT_14cb51ee0 + 0x50);
      local_e0 = (float *)(DAT_14cb51ee0 + 0x54);
      local_e8 = (float *)(DAT_14cb51ee0 + 0x100);
      local_f0 = (float *)(DAT_14cb51ee0 + 0x104);
      local_f8 = (float *)(DAT_14cb51ee0 + 0xa8);
      local_100 = (float *)(DAT_14cb51ee0 + 0xac);
      local_108 = (float *)(DAT_14cb51ee0 + 0x24);
      lVar5 = 0;
      bVar2 = false;
      do {
        uVar7 = *(uint *)((longlong)&DAT_14afbe570 + lVar5) + 2;
        if (uVar7 < 6) {
          lVar11 = (&DAT_14afbf1a8)[uVar7];
        }
        else {
          lVar11 = 0;
        }
        if (*(char *)(DAT_14cb51ee0 + 0x1c + lVar11 * 0x2c) == '\x01') {
          switch(uVar7) {
          case 0:
            lVar11 = 3;
            pfVar8 = local_100;
            pfVar10 = local_f8;
            break;
          default:
            lVar11 = 0;
            pfVar8 = (float *)(DAT_14cb51ee0 + 0x28);
            pfVar10 = local_108;
            break;
          case 2:
            lVar11 = 1;
            pfVar8 = local_e0;
            pfVar10 = local_d8;
            break;
          case 3:
            lVar11 = 2;
            pfVar8 = local_d0;
            pfVar10 = local_c8;
            break;
          case 4:
            lVar11 = 4;
            pfVar8 = local_c0;
            pfVar10 = local_b8;
            break;
          case 5:
            lVar11 = 5;
            pfVar8 = local_f0;
            pfVar10 = local_e8;
          }
          bVar12 = false;
          if ((fVar1 <= 1.0) && (*pfVar10 + -0.01 <= fVar1)) {
            bVar12 = fVar1 <= *pfVar8 + 0.01;
          }
          bVar13 = bVar12;
          if (bVar2) {
            uVar7 = (int)puVar6 + 2;
            if (uVar7 < 6) {
              lVar9 = (&DAT_14afbf1a8)[uVar7];
            }
            else {
              lVar9 = 0;
            }
            bVar13 = ABS(*(float *)(DAT_14cb51ee0 + 0x20 + lVar11 * 0x2c) - fVar1) <
                     ABS(*(float *)(DAT_14cb51ee0 + 0x20 + lVar9 * 0x2c) - fVar1);
          }
          puVar6 = (undefined1 *)((ulonglong)puVar6 & 0xffffffff);
          if ((bool)(bVar12 & bVar13)) {
            puVar6 = (undefined1 *)(ulonglong)*(uint *)((longlong)&DAT_14afbe570 + lVar5);
            bVar2 = true;
          }
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x18);
      if (bVar2) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar3 = &PTR_FUN_14afbeb70;
        puVar3[1] = lVar4;
        *(int *)(puVar3 + 2) = (int)puVar6;
        *(undefined8 **)(param_2 + 0x188) = puVar3;
      }
      *(float *)(lVar4 + 8) = fVar1;
    }
  }
LAB_143c054b0:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c05542 FUN_143c05542 body=1203 status=ok
// SIG undefined FUN_143c05542(void)

undefined8 *
FUN_143c05542(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined1 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong **local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)param_5[0xe];
  local_1b8 = param_3;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  local_190 = param_5[10];
  uVar16 = param_5[8];
  uVar19 = param_5[9];
  local_f8 = param_5[5];
  local_f0 = param_5[6];
  local_1a8 = *param_5;
  local_1b0 = param_5[1];
  local_198 = param_5[2];
  local_d0 = *(undefined4 *)(param_5 + 3);
  local_cc = 0;
  local_c0 = param_5[4];
  local_b8 = 0;
  local_1a0 = param_5[7];
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_5[0xd];
  uVar18 = 0;
  local_1c0 = param_4;
  local_188 = param_1;
  local_180 = param_2;
  local_e8 = local_1a8;
  local_e0 = local_1b0;
  local_d8 = local_198;
  local_b0 = local_1a0;
  local_70 = uVar16;
  uStack_68 = uVar19;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar9 = (**(code **)(*DAT_14cb51ed0 + 0x18))();
    if ((cVar9 != '\0') && (*(char *)((longlong)DAT_14cb51ed0 + 0x19) == '\x01')) {
      uVar18 = (uint)(0 < *(int *)(DAT_14cb51e98 + 4));
    }
  }
  lVar14 = DAT_14cb51ec8;
  iVar2 = *(int *)(DAT_14cb51e08 + 4);
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_c8 = uVar18;
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar17 = 0;
  }
  else if (iVar3 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar17 = 1;
  }
  uVar4 = *(uint *)(lVar14 + uVar17 * 4);
  if ((int)uVar4 < 1) {
    plVar13 = (longlong *)FUN_1414c207a();
    lVar14 = plVar13[0x22];
    if (lVar14 == 0) {
      (**(code **)(*plVar13 + 1000))(plVar13);
      lVar14 = plVar13[0x22];
    }
    uVar10 = *(undefined1 *)(lVar14 + 0x5a);
  }
  else {
    uVar6 = 0xff;
    if (uVar4 < 0xff) {
      uVar6 = uVar4;
    }
    uVar10 = (undefined1)uVar6;
  }
  uVar21 = local_1b8;
  lVar7 = local_1c0;
  bVar20 = uVar18 == 0 && iVar2 != 0;
  lVar14 = *(longlong *)(*(longlong *)(local_1c0 + 8) + 0x348);
  if (*(longlong *)(lVar14 + 0x238) == 0 || *(longlong *)(lVar14 + 0x230) == 0) {
    uVar15 = 0;
  }
  else {
    local_108 = *(undefined4 *)(lVar14 + 0x240);
    uStack_104 = *(undefined4 *)(lVar14 + 0x244);
    uStack_100 = *(undefined4 *)(lVar14 + 0x248);
    uStack_fc = *(undefined4 *)(lVar14 + 0x24c);
    local_1e8 = (undefined8 *)CONCAT71(local_1e8._1_7_,uVar10);
    local_118 = *(longlong *)(lVar14 + 0x230);
    local_110 = *(longlong *)(lVar14 + 0x238);
    uVar15 = FUN_143bf7798(local_1b8,local_1c0,&local_70);
    uVar16 = local_70;
    uVar19 = uStack_68;
  }
  local_1d8 = &local_128;
  local_128 = local_1a8;
  local_120 = local_1b0;
  local_1e0 = (longlong **)&local_138;
  local_1d0 = local_198;
  local_1e8 = (undefined8 *)0x0;
  local_1c8 = bVar20;
  local_138 = uVar16;
  local_130 = uVar19;
  uVar16 = FUN_143bf8bc4(uVar21,lVar7,local_1a0,local_190);
  local_cc = bVar20;
  local_a8 = uVar15;
  if (local_c8 == 1) {
    local_1e8 = (undefined8 *)&local_170;
    local_170 = (undefined4)local_70;
    uStack_16c = local_70._4_4_;
    uStack_168 = (undefined4)uStack_68;
    uStack_164 = uStack_68._4_4_;
    local_1e0 = (longlong **)CONCAT71(local_1e0._1_7_,1);
    local_b8 = uVar16;
    FUN_143bf7e18(&local_160,uVar21,lVar7,param_5);
    uStack_a0 = CONCAT44(uStack_15c,local_160);
    local_98 = CONCAT44(uStack_154,uStack_158);
    uStack_90 = local_150;
    local_88 = uStack_148;
    local_b0 = local_140;
  }
  puVar8 = local_180;
  lVar14 = local_188;
  puVar1 = local_180 + 3;
  local_178 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    local_1e0 = &local_178;
    local_1e8 = &local_f8;
    local_1d8 = puVar1;
    local_b8 = uVar16;
    FUN_143c059f6(local_188,&local_160,uVar21,local_1c0);
    uVar16 = CONCAT44(uStack_15c,local_160);
    uVar19 = local_e8;
    uVar21 = local_e0;
  }
  else {
    local_b8 = uVar16;
    (**(code **)(*plVar5 + 8))(plVar5);
    local_1e0 = &local_178;
    local_1e8 = &local_f8;
    local_1d8 = puVar1;
    FUN_143c059f6(lVar14,&local_160,uVar21,local_1c0);
    uVar21 = local_e0;
    uVar19 = local_e8;
    uVar16 = CONCAT44(uStack_15c,local_160);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  *puVar8 = uVar16;
  puVar8[1] = uVar19;
  puVar8[2] = uVar21;
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c059f6 FUN_143c059f6 body=4020 status=ok
// SIG undefined FUN_143c059f6(void)

ulonglong *
FUN_143c059f6(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  ulonglong *puVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  ulonglong *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  DWORD DVar15;
  DWORD DVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined1 **ppuVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 **local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined1 local_189;
  ulonglong local_188;
  ulonglong local_180;
  longlong *local_178;
  ulonglong local_170;
  int local_168;
  undefined4 local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  longlong *local_150;
  longlong local_148;
  ulonglong *local_140;
  ulonglong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined1 local_f9;
  undefined8 *local_f8;
  longlong local_f0;
  undefined *local_e8;
  undefined2 local_db;
  undefined1 local_d9;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined2 local_a5;
  undefined1 local_a3;
  ulonglong local_70;
  
  lVar23 = DAT_14ca97170;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_189 = true;
  if (*(char *)(param_4 + 0x23cc) == '\0') {
    local_189 = *param_6 == 0;
  }
  uVar26 = *(uint *)(param_5[7] + 0x84);
  uVar13 = *(uint *)(param_5[7] + 0x88);
  iVar4 = *(int *)(param_5 + 3);
  iVar29 = *(int *)((longlong)param_5 + 0x1c);
  iVar12 = *(int *)((longlong)param_5 + 0x14);
  iVar5 = *(int *)(param_5 + 2);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar7 + 0xc60);
  local_180 = param_1;
  local_138 = param_2;
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar22 = 0;
  }
  else if (iVar6 == 1) {
    uVar14 = FUN_140ad26c0();
    local_188 = CONCAT44(local_188._4_4_,uVar14);
    DVar15 = GetCurrentThreadId();
    uVar22 = (ulonglong)((DWORD)local_188 != DVar15);
  }
  else {
    uVar22 = 1;
  }
  puVar10 = local_138;
  iVar6 = *(int *)(lVar23 + uVar22 * 4);
  uVar21 = (uint)(0 < iVar6);
  local_b0 = (uint)(iVar6 < 1) << 2 | 0xfffffff8;
  local_b4 = (iVar4 - iVar5) + 3 + uVar21 * 4 & local_b0;
  local_b0 = (iVar29 - iVar12) + uVar21 * 4 + 3 & local_b0;
  if ((int)local_b0 <= (int)uVar13) {
    local_b0 = uVar13;
  }
  if ((int)local_b4 <= (int)uVar26) {
    local_b4 = uVar26;
  }
  *local_138 = 0;
  local_c0 = DAT_14ca83a40;
  local_d0 = DAT_14ca83a30;
  uStack_cc = DAT_14ca83a34;
  uStack_c8 = DAT_14ca83a38;
  uStack_c4 = DAT_14ca83a3c;
  local_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_a6 = 0;
  local_d8 = &DAT_00020008;
  local_a5 = 10;
  local_ac = 0x10001;
  local_a8 = 0x101;
  local_b8 = 0;
  local_a3 = 0xff;
  if ((int)DAT_14ca84e40 <= (int)local_b4) {
    local_b4 = DAT_14ca84e40;
  }
  if ((int)local_b4 < 2) {
    local_b4 = 1;
  }
  if ((int)DAT_14ca84e40 <= (int)local_b0) {
    local_b0 = DAT_14ca84e40;
  }
  if ((int)local_b0 < 2) {
    local_b0 = 1;
  }
  puVar1 = (ulonglong *)(param_3 + 0x70);
  uVar31 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar22 = uVar31 + 0x120;
  if (*(ulonglong *)(param_3 + 0x78) < uVar22) {
    FUN_140023dd8(puVar1,0x128);
    uVar31 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar22 = uVar31 + 0x120;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar22;
  FUN_1456bbb8c(uVar31,L"DLSSOutputSceneColor",&local_d8,0);
  iVar4 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_3 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar4 * 8) = uVar31;
  *(int *)(uVar31 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  *puVar10 = uVar31;
  plVar18 = (longlong *)*param_6;
  if (((plVar18 == (longlong *)0x0) ||
      (pwVar17 = (wchar_t *)(**(code **)(*plVar18 + 0x20))(plVar18),
      pwVar17 != L"FDLSSSceneViewFamilyUpscaler" &&
      pwVar17 != L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")) ||
     (local_150 = (longlong *)plVar18[3], local_150 == (longlong *)0x0)) {
    plVar18 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_FUN_14afbef60;
    local_150 = plVar18 + 2;
    plVar18[2] = 0;
    plVar18[3] = 0;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar18 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      goto LAB_143c05d0c;
    }
  }
  else {
    plVar18 = (longlong *)plVar18[4];
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      goto LAB_143c05d0c;
    }
  }
  plVar18 = (longlong *)0x0;
LAB_143c05d0c:
  puVar28 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar28 + 0x14;
  if (*(undefined8 **)(param_3 + 0x78) < puVar19) {
    FUN_140023dd8(puVar1,0xb0);
    puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar19 = puVar28 + 0x14;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar19;
  *puVar28 = &PTR_FUN_14afbef78;
  puVar28[2] = 0;
  puVar28[3] = 0;
  puVar28[4] = 0;
  puVar28[5] = 0;
  puVar28[6] = 0;
  puVar28[7] = 0;
  puVar28[8] = 0;
  puVar28[9] = 0;
  puVar28[10] = 0;
  puVar28[0xb] = 0;
  *(undefined8 *)((longlong)puVar28 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar28 + 100) = 0;
  puVar28[0xe] = 0;
  puVar28[0xf] = 0;
  *(undefined4 *)(puVar28 + 0x10) = 0;
  puVar28[0x11] = 0;
  puVar28[0x12] = 0;
  *(undefined4 *)(puVar28 + 0x13) = 0;
  iVar4 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar4 + 1U;
  local_140 = puVar1;
  if (*(uint *)(param_3 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_3 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar4 * 8) = puVar28;
  local_170 = param_5[1];
  lVar23 = param_5[7];
  local_154 = (int)local_170 - *(int *)(lVar23 + 0x84);
  local_188 = local_170 >> 0x20;
  iVar29 = (int)(local_170 >> 0x20) - *(int *)(lVar23 + 0x88);
  if (iVar29 < DAT_14c967818._4_4_) {
    iVar29 = DAT_14c967818._4_4_;
  }
  if (local_154 < (int)DAT_14c967818) {
    local_154 = (int)DAT_14c967818;
  }
  local_108 = *param_5;
  puVar28[2] = lVar23;
  puVar28[3] = param_5[9];
  puVar28[5] = param_5[8];
  puVar28[6] = param_5[10];
  puVar28[4] = param_5[0x10];
  puVar28[7] = param_5[0xb];
  puVar28[8] = param_5[0xc];
  puVar28[9] = param_5[0xd];
  puVar28[10] = param_5[0xe];
  uVar22 = *puVar10;
  if (uVar22 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(uVar22 + 0xac);
  }
  puVar28[0xb] = uVar22;
  puVar28[0xc] = uVar25;
  *(undefined4 *)(puVar28 + 0xd) = 0x400;
  cVar11 = (**(code **)*DAT_14cb51ed0)();
  if (cVar11 != '\0') {
    FUN_143c069ab(param_3,puVar28 + 0xe);
  }
  fVar3 = *(float *)(*(longlong *)(param_4 + 8) + 0x9c);
  local_160 = *(int *)(DAT_14cb51e20 + 4);
  local_15c = *(int *)(DAT_14cb51e38 + 4);
  local_158 = *(int *)(DAT_14cb51e50 + 4);
  local_178 = plVar18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb51ef8) && (FUN_144b3d300(&DAT_14cb51ef8), DAT_14cb51ef8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb51ef0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PostProcessing.PropagateAlpha",1);
    _Init_thread_footer(&DAT_14cb51ef8);
  }
  piVar2 = (int *)(lVar7 + 0xc60);
  if ((DAT_14cb51ef0 == (longlong *)0x0) ||
     (iVar12 = (**(code **)(*DAT_14cb51ef0 + 0xb0))(), iVar12 == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (undefined4)CONCAT71((int7)(int3)((uint)iVar4 >> 8),*(undefined1 *)(DAT_14cb51eb0 + 1))
    ;
  }
  lVar23 = DAT_14cb51df0;
  iVar4 = *piVar2;
  if (iVar4 == 0x40000002) {
    uVar22 = 0;
  }
  else {
    bVar32 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar32 = DVar15 == DVar16;
      }
      else {
        bVar32 = false;
      }
    }
    uVar22 = (ulonglong)(bVar32 ^ 1);
  }
  fVar35 = *(float *)(lVar23 + uVar22 * 4);
  local_110 = DAT_14cb51ed0;
  local_164 = uVar14;
  switch(*(undefined4 *)(local_180 + 0x10)) {
  case 0:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x5f);
    break;
  case 1:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x5e);
    break;
  case 2:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x5d);
    break;
  case 3:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x5c);
    break;
  case 0xfffffffe:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x61);
    break;
  case 0xffffffff:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    cVar11 = *(char *)(lVar23 + 0x60);
    break;
  default:
    cVar11 = '\0';
  }
  lVar23 = DAT_14cb51dc0;
  iVar4 = *piVar2;
  uVar26 = 0;
  if (iVar4 == 0x40000002) {
    uVar22 = 0;
  }
  else {
    bVar32 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar32 = DVar15 == DVar16;
      }
      else {
        bVar32 = false;
      }
    }
    uVar22 = (ulonglong)(bVar32 ^ 1);
  }
  uVar13 = *(uint *)(lVar23 + uVar22 * 4);
  uVar21 = 0;
  if (uVar13 < 0x10) {
    uVar21 = uVar13;
  }
  if (uVar13 != 0) {
    cVar11 = (char)uVar21;
  }
  local_168 = (byte)(cVar11 - 1U) + 1;
  if (0xe < (byte)(cVar11 - 1U)) {
    local_168 = 0;
  }
  switch(*(undefined4 *)(local_180 + 0x10)) {
  case 0:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 0x65);
    break;
  case 1:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 100);
    break;
  case 2:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 99);
    break;
  case 3:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 0x62);
    break;
  case 0xfffffffe:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 0x67);
    break;
  case 0xffffffff:
    plVar18 = (longlong *)FUN_1414c207a();
    lVar23 = plVar18[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar23 = plVar18[0x22];
    }
    uVar26 = (uint)*(byte *)(lVar23 + 0x66);
  }
  lVar23 = DAT_14cb51dd8;
  iVar4 = *piVar2;
  uVar22 = 0;
  if (iVar4 == 0x40000002) {
    uVar31 = 0;
  }
  else {
    bVar32 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar32 = DVar15 == DVar16;
      }
      else {
        bVar32 = false;
      }
    }
    uVar31 = (ulonglong)(bVar32 ^ 1);
  }
  uVar13 = *(uint *)(lVar23 + uVar31 * 4);
  uVar21 = 0;
  if (uVar13 < 0x10) {
    uVar21 = uVar13;
  }
  if (uVar13 != 0) {
    uVar26 = uVar21;
  }
  if (0xf < (byte)uVar26) {
    uVar26 = 0;
  }
  uVar13 = *(int *)(local_180 + 0x10) + 2;
  if (uVar13 < 6) {
    uVar22 = (ulonglong)*(uint *)(&DAT_14afbf190 + (ulonglong)uVar13 * 4);
  }
  local_118 = *param_5;
  local_120 = param_5[1];
  local_128 = param_5[2];
  local_130 = param_5[3];
  puVar19 = param_5 + 4;
  ppuVar27 = &local_d8;
  for (lVar23 = 0xd; lVar23 != 0; lVar23 = lVar23 + -1) {
    *ppuVar27 = (undefined1 *)*puVar19;
    puVar19 = puVar19 + 1;
    ppuVar27 = ppuVar27 + 1;
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
  }
  local_188 = (ulonglong)(uint)((int)local_188 - iVar29);
  bVar32 = local_160 != 0;
  bVar33 = local_15c != 0;
  bVar34 = local_158 != 0;
  uVar9 = (undefined1)local_164;
  local_180 = uVar22;
  local_148 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb51fa0) && (FUN_144b3d300(&DAT_14cb51fa0), DAT_14cb51fa0 == -1)) {
    FUN_145ef38da(&local_f8);
    local_1a0 = 0;
    local_1b0 = 0;
    local_1d0 = "Unknown";
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1e8 = L"FDLSSShaderParameters";
    local_1a8 = 0;
    local_1c0 = 0x90;
    local_1c8 = 0xb5;
    local_1b8 = &local_f8;
    FUN_140b49562(&DAT_14cb51f20,0,1);
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143c076e6);
    _Init_thread_footer(&DAT_14cb51fa0);
    param_3 = local_148;
  }
  local_170 = (ulonglong)(uint)((int)local_170 - local_154);
  FUN_140069376(param_3);
  puVar10 = local_140;
  plVar18 = local_178;
  uVar14 = 0x2b;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = 0x2d;
  }
  lVar23 = local_188 << 0x20;
  if (1.0 <= fVar35) {
    fVar35 = 1.0;
  }
  puVar30 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar19 = puVar30 + 0x52;
  if (*(undefined8 **)(param_3 + 0x78) < puVar19) {
    FUN_140023dd8(local_140,0x298);
    puVar30 = (undefined8 *)(*puVar10 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar30 + 0x52;
  }
  if (fVar35 <= -1.0) {
    fVar35 = -1.0;
  }
  lVar23 = lVar23 + local_170;
  *local_140 = (ulonglong)puVar19;
  local_f0 = DAT_14cb51f68;
  if (DAT_14cb51f68 != 0) {
    LOCK();
    *(int *)(DAT_14cb51f68 + 8) = *(int *)(DAT_14cb51f68 + 8) + 1;
    UNLOCK();
  }
  local_e8 = &DAT_14cb51f20;
  local_1e8 = (wchar_t *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  local_f8 = puVar28 + 2;
  FUN_140068f1a(puVar30,&local_f9,&local_f8,uVar14);
  lVar7 = local_148;
  plVar8 = local_150;
  *puVar30 = &PTR_FUN_14afbef80;
  puVar30[0x37] = local_110;
  puVar30[0x38] = puVar28 + 2;
  puVar30[0x39] = local_118;
  puVar30[0x3a] = local_120;
  puVar30[0x3b] = local_128;
  puVar30[0x3c] = local_130;
  ppuVar27 = &local_d8;
  puVar19 = puVar30 + 0x3d;
  for (lVar24 = 0xd; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar19 = *ppuVar27;
    ppuVar27 = ppuVar27 + 1;
    puVar19 = puVar19 + 1;
  }
  puVar30[0x4a] = local_108;
  puVar30[0x4b] = lVar23;
  *(undefined1 *)(puVar30 + 0x4c) = local_189;
  *(undefined2 *)((longlong)puVar30 + 0x261) = local_db;
  *(undefined1 *)((longlong)puVar30 + 0x263) = local_d9;
  *(float *)((longlong)puVar30 + 0x264) = fVar3 * 1000.0;
  *(float *)(puVar30 + 0x4d) = fVar35;
  *(int *)((longlong)puVar30 + 0x26c) = local_168;
  *(uint *)(puVar30 + 0x4e) = uVar26 & 0xff;
  *(int *)((longlong)puVar30 + 0x274) = (int)local_180;
  puVar30[0x4f] = local_150;
  puVar30[0x50] = plVar18;
  *(uint *)(puVar30 + 0x51) = CONCAT13(bVar33,CONCAT12(bVar34,CONCAT11(uVar9,bVar32)));
  iVar4 = *(int *)(local_148 + 0x170);
  *(uint *)(local_148 + 0x170) = iVar4 + 1U;
  if (*(uint *)(local_148 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(local_148 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar7 + 0x168) + (longlong)iVar4 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x2c) = *(int *)(lVar7 + 0x170) + -1;
  FUN_140069100(lVar7,puVar30);
  plVar20 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar14 = *(undefined4 *)(param_5 + 6);
  if (plVar18 == (longlong *)0x0) {
    *(undefined4 *)(plVar20 + 2) = 0;
    *plVar20 = (longlong)&PTR_FUN_14afbe590;
    plVar20[1] = (longlong)&PTR_LAB_14afbe5c0;
    plVar20[3] = (longlong)plVar8;
    plVar20[4] = 0;
    *(undefined4 *)(plVar20 + 5) = uVar14;
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    *(undefined4 *)(plVar20 + 2) = 0;
    *plVar20 = (longlong)&PTR_FUN_14afbe590;
    plVar20[1] = (longlong)&PTR_LAB_14afbe5c0;
    plVar20[3] = (longlong)plVar8;
    plVar20[4] = (longlong)plVar18;
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    *(undefined4 *)(plVar20 + 5) = uVar14;
    LOCK();
    plVar8 = plVar18 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  plVar8 = (longlong *)*param_7;
  if (plVar8 != plVar20) {
    *param_7 = (longlong)plVar20;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar18 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  puVar10 = local_138;
  if ((longlong *)*param_6 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_6 + 0x10))();
  }
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10;
}



// FUNCTION 143c069ab FUN_143c069ab body=772 status=ok
// SIG undefined FUN_143c069ab(void)

void FUN_143c069ab(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = DAT_14ca83a40;
  local_b8 = DAT_14ca83a30;
  uStack_b4 = DAT_14ca83a34;
  uStack_b0 = DAT_14ca83a38;
  uStack_ac = DAT_14ca83a3c;
  uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_66 = 0xa00;
  uStack_64 = 0xff00;
  local_98 = 1;
  uStack_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_88 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  local_78 = 0;
  uStack_80 = CONCAT44(uVar4,DAT_14ca83a40);
  uStack_74 = 1;
  uStack_70 = 1;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar3 = uVar5 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar3) {
    FUN_140023dd8(plVar1,0x128);
    uVar5 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar3 = uVar5 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar3;
  FUN_1456bbb8c(uVar5,L"UE5.5AndOlderDebugLayerCompatibilityHelperSource",&local_98,0);
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 8) = uVar5;
  *(int *)(uVar5 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(uVar5 + 0xac);
  }
  *param_2 = uVar5;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = 0x80;
  uStack_66 = 0xa00;
  uStack_64 = 0xff00;
  local_98 = 1;
  uStack_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  uStack_88 = CONCAT44(uStack_ac,uStack_b0);
  local_78 = 0;
  uStack_80 = CONCAT44(uVar4,local_a8);
  uStack_74 = 1;
  uStack_70 = 1;
  uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar3 = uVar5 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar3) {
    FUN_140023dd8(plVar1,0x128);
    uVar5 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar3 = uVar5 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar3;
  FUN_1456bbb8c(uVar5,L"UE5.5AndOlderDebugLayerCompatibilityHelperDest",&local_98,0);
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 8) = uVar5;
  *(int *)(uVar5 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(uVar5 + 0xac);
  }
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  *(undefined4 *)(param_2 + 5) = 0x2000;
  local_78 = 0;
  uStack_74 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 1;
  uStack_6c = 0;
  local_68 = 1;
  uStack_66 = 0;
  FUN_1401a4871(param_1,*param_2,&local_98);
  local_78 = 0;
  uStack_74 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 1;
  uStack_6c = 0;
  local_68 = 1;
  uStack_66 = 0;
  FUN_1401a4871(param_1,param_2[3],&local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c06cc8 FUN_143c06cc8 body=13 status=ok
// SIG undefined FUN_143c06cc8(void)

int FUN_143c06cc8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 143c06cd6 FUN_143c06cd6 body=29 status=ok
// SIG undefined FUN_143c06cd6(void)

undefined8 FUN_143c06cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c06d66 FUN_143c06d66 body=59 status=ok
// SIG undefined FUN_143c06d66(void)

undefined8 FUN_143c06d66(longlong *param_1)

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



// FUNCTION 143c06e12 FUN_143c06e12 body=31 status=ok
// SIG undefined FUN_143c06e12(void)

undefined8 FUN_143c06e12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c06e32 FUN_143c06e32 body=94 status=ok
// SIG undefined FUN_143c06e32(void)

undefined8 * FUN_143c06e32(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afbef80;
  plVar3 = (longlong *)param_1[0x50];
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c06e90 FUN_143c06e90 body=1848 status=ok
// SIG undefined FUN_143c06e90(void)

void FUN_143c06e90(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong **pplVar16;
  undefined8 *puVar17;
  undefined1 auStack_318 [43];
  undefined1 local_2ed;
  undefined1 local_2ec;
  undefined1 local_2eb;
  undefined1 local_2ea;
  undefined1 local_2e9;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
  longlong *local_268;
  longlong **local_260;
  longlong *local_258 [4];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong **local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8;
  undefined2 local_c7;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined8 local_a4;
  int local_9c;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_318;
  pplVar16 = &local_268;
  FUN_144b1c6fa(param_1 + 0x10,&local_268);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    pplVar16 = (longlong **)0x0;
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = (int)local_258[0];
  if ((longlong)(int)local_258[0] == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    pplVar16 = &local_268;
    if (local_260 != (longlong **)0x0) {
      pplVar16 = local_260;
    }
    FUN_1446fe144(puVar17 + 2,(int)local_258[0],0);
    puVar12 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 2;
    }
    memcpy(puVar12,pplVar16,(longlong)(int)local_258[0]);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = (int)local_208;
  if ((longlong)(int)local_208 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    pplVar16 = local_210;
    if (local_210 == (longlong **)0x0) {
      pplVar16 = local_258 + 1;
    }
    FUN_1446fe1b8(puVar17 + 5,(int)local_208,0);
    puVar12 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 5;
    }
    memcpy(puVar12,pplVar16,(longlong)(int)local_208 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)local_200;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = local_200._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_1f8;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_1f8._4_4_;
  if (local_210 != (longlong **)0x0) {
    FUN_1400020a8(local_210);
  }
  if (local_260 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x1c0);
  local_2e0 = CONCAT71((int7)((ulonglong)pplVar16 >> 8),*(char *)(param_1 + 0x28b));
  if ((*(char *)(param_1 + 0x28b) == '\x01') && (plVar5[4] != 0)) {
    local_2e8 = *(undefined8 *)(plVar5[4] + 0x10);
  }
  else {
    local_2e8 = 0;
    local_2e0 = 0;
  }
  local_2cc = *(int *)(param_1 + 0x1f8);
  if (local_2cc == 1) {
    local_2b0 = *(undefined8 *)(plVar5[5] + 0x10);
    local_2b8 = *(undefined8 *)(plVar5[6] + 0x10);
    local_2c0 = *(undefined8 *)(plVar5[7] + 0x10);
    local_2c8 = *(undefined8 *)(plVar5[8] + 0x10);
  }
  else {
    local_2b0 = 0;
    local_2b8 = 0;
    local_2c0 = 0;
    local_2c8 = 0;
  }
  local_280 = *(undefined8 *)(param_1 + 0x250);
  local_288 = *(undefined8 *)(param_1 + 600);
  local_290 = *(undefined8 *)(param_1 + 0x1d8);
  local_298 = *(undefined8 *)(param_1 + 0x1e0);
  uVar2 = *(undefined4 *)(param_1 + 0x268);
  local_2ea = *(undefined1 *)(param_1 + 0x260);
  local_2a0 = *(undefined8 *)(param_1 + 0x1e8);
  local_2a8 = DAT_14c8461b4;
  local_2ec = *(undefined1 *)(param_1 + 500);
  uVar3 = *(undefined4 *)(param_1 + 0x264);
  local_2e9 = *(undefined1 *)(param_1 + 0x28a);
  local_2d0 = *(undefined4 *)(param_1 + 0x26c);
  local_2d4 = *(undefined4 *)(param_1 + 0x270);
  plVar6 = *(longlong **)(*plVar5 + 0x10);
  uVar7 = *(undefined8 *)(plVar5[3] + 0x10);
  uVar8 = *(undefined8 *)(plVar5[1] + 0x10);
  uVar9 = *(undefined8 *)(plVar5[2] + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x1f0);
  local_2eb = *(undefined1 *)(param_1 + 0x288);
  uVar10 = *(undefined8 *)(plVar5[9] + 0x10);
  local_2ed = *(undefined1 *)(param_1 + 0x289);
  local_2d8 = *(undefined4 *)(param_1 + 0x274);
  cVar11 = (**(code **)**(undefined8 **)(param_1 + 0x1b8))();
  if (cVar11 == '\0') {
    local_208 = 0;
    local_200 = 0;
  }
  else {
    local_208 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x60) + 0x10);
    local_200 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x78) + 0x10);
  }
  local_268 = *(longlong **)(param_1 + 0x1b8);
  local_238 = local_2e8;
  local_230 = local_2b0;
  local_228 = local_2b8;
  local_220 = local_2c0;
  local_218 = local_2c8;
  uStack_1f8 = local_280;
  local_1f0 = local_288;
  local_1e8 = local_290;
  local_1e0 = local_298;
  local_1d8 = local_2a0;
  local_1d0 = local_2a8;
  local_258[0] = plVar6;
  local_258[1] = (longlong *)uVar8;
  local_258[2] = (longlong *)uVar7;
  local_258[3] = (longlong *)uVar9;
  local_210 = (longlong **)uVar10;
  memset(local_1c8,0,0x100);
  local_c8 = local_2ec;
  local_c7 = 0;
  local_c5 = 0;
  local_c4 = uVar2;
  local_c0 = local_2ea;
  local_bf = 0;
  local_bd = 0;
  local_bc = local_2d0;
  local_b8 = local_2d4;
  local_b4 = local_2d8;
  local_b0 = uVar3;
  local_ac = uVar4;
  local_a8 = local_2eb;
  local_a7 = local_2ed;
  local_a6 = (char)local_2e0;
  local_a5 = local_2e9;
  local_a4 = 0;
  local_9c = local_2cc;
  local_98 = *(undefined8 *)(param_1 + 0x278);
  local_90 = *(longlong **)(param_1 + 0x280);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar14 = *(uint *)(DAT_14cb51e68 + 4);
    if (uVar14 == 0xffffffff) {
      uVar14 = *(uint *)((longlong)param_2 + 0x17c);
      if (uVar14 == 0) {
        uVar13 = 0x20;
      }
      else {
        uVar13 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
      }
    }
    else {
      uVar13 = DAT_14c760da4 - 1U;
      if (uVar14 < DAT_14c760da4 - 1U) {
        uVar13 = uVar14;
      }
    }
    if (*(uint *)(DAT_14cb51e80 + 4) == 0xffffffff) {
      uVar14 = 1;
      if (DAT_14ca81480 == 0) {
        uVar14 = *(uint *)((longlong)param_2 + 0x17c);
      }
    }
    else {
      uVar14 = 1;
      if (DAT_14ca81480 == 0) {
        uVar14 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      }
      uVar14 = uVar14 & *(uint *)(DAT_14cb51e80 + 4);
    }
    local_a4 = CONCAT44(uVar14,uVar13);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    local_278 = local_98;
    local_270 = local_90;
    (**(code **)(*local_268 + 0x10))(local_268,param_2,local_258,&local_278);
    plVar5 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_90)(local_90);
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
  else {
    puVar17 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar17 + 0x3e;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x200);
      puVar17 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
      puVar12 = puVar17 + 0x3e;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar17;
    param_2[6] = (ulonglong)(puVar17 + 1);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14afbef98;
    puVar17[2] = local_268;
    pplVar16 = local_258;
    puVar12 = puVar17 + 4;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar12 = *pplVar16;
      pplVar16 = pplVar16 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar17[0x10] = uStack_1f8;
    puVar17[0x11] = local_1f0;
    puVar17[0x12] = local_1e8;
    puVar17[0x13] = local_1e0;
    memcpy(puVar17 + 0x14,&local_1d8,0x140);
    puVar17[0x3c] = local_98;
    puVar17[0x3d] = local_90;
  }
  if ((local_80 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c075ca FUN_143c075ca body=283 status=ok
// SIG undefined FUN_143c075ca(void)

void FUN_143c075ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = *(uint *)(DAT_14cb51e68 + 4);
  uVar3 = *(uint *)(DAT_14cb51e80 + 4);
  if (uVar6 == 0xffffffff) {
    uVar6 = *(uint *)(param_2 + 0x17c);
    if (uVar6 == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
  }
  else {
    uVar5 = DAT_14c760da4 - 1U;
    if (uVar6 < DAT_14c760da4 - 1U) {
      uVar5 = uVar6;
    }
  }
  *(uint *)(param_1 + 0x1d4) = uVar5;
  if (uVar3 == 0xffffffff) {
    uVar6 = 1;
    if (DAT_14ca81480 == 0) {
      uVar6 = *(uint *)(param_2 + 0x17c);
    }
  }
  else {
    uVar6 = 1;
    if (DAT_14ca81480 == 0) {
      uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    }
    uVar6 = uVar6 & uVar3;
  }
  *(uint *)(param_1 + 0x1d8) = uVar6;
  plVar4 = *(longlong **)(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x1e0);
  local_18 = *(longlong *)(param_1 + 0x1e8);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,param_2,param_1 + 0x20,&local_20);
  plVar4 = *(longlong **)(param_1 + 0x1e8);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c0770a FUN_143c0770a body=1726 status=ok
// SIG undefined FUN_143c0770a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0770a(void)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = &PTR_FUN_14afbb900;
  local_78 = 3;
  local_88 = 0;
  FUN_14282b410(L"/Script/DLSS",&PTR_FUN_14afbb960,2,0);
  local_78 = 1;
  local_80 = &PTR_FUN_14afbbbd0;
  local_88 = 1;
  FUN_14282b410(L"/Script/DLSS",0,0,&PTR_FUN_14afbbbf0);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_68,&DAT_14cb51c28);
  if (cVar2 == '\0') {
    _DAT_14cb51c28 = 0;
    uRam000000014cb51c30 = 0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb51c38 = (undefined2 *)0x0;
  _DAT_14cb51c40 = 3;
  FUN_1464a8156();
  puVar1 = DAT_14cb51c38;
  *DAT_14cb51c38 = 0x201;
  *(undefined1 *)(puVar1 + 1) = 3;
  atexit((_func_5014 *)&LAB_143c03a30);
  DAT_14cb51c48 = 0;
  uRam000000014cb51c50 = 0;
  atexit((_func_5014 *)&LAB_143c03a41);
  local_68._0_4_ = 0;
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb51c58,L"r.NGX.BinarySearchOrder",&local_68,
                L"0: automatic: (default)\n   use custom binaries from project and launch folder $(ProjectDir)/Binaries/ThirdParty/NVIDIA/NGX/$(Platform) if present\n   fallback to generic binaries from plugin folder\n1: force generic binaries from plugin folder, fail if not found\n2: force custom binaries from project or launch folder, fail if not found\n3: force generic development binaries from plugin folder, fail if not found. This is only supported in non-shipping build configurations\n"
               );
  atexit(FUN_143c03a52);
  local_68._0_4_ = 1;
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb51c70,L"r.NGX.Enable",&local_68,
                L"Whether the NGX library should be loaded. This allow to have the DLSS plugin enabled but avoiding potential incompatibilities by skipping the driver side NGX parts of DLSS. Can also be set on the command line via -ngxenable and -ngxdisable"
               );
  atexit(FUN_143c03a97);
  local_68._0_4_ = 0;
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb51c88,L"r.NGX.Enable.AllowCommandLine",&local_68,
                L"Whether to allow to override r.NGX.Enable with -ngxenable and -ngxdisable");
  atexit(FUN_143c03adc);
  local_68._0_4_ = 0x3fab;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb51ca0,L"r.NGX.DLSS.MinimumWindowsBuildVersion",&local_68,
                L"Sets the minimum Windows 10 build version required to enable DLSS. (default: 16299 for v1709, Windows 10 Fall 2017 Creators Update 64-bit)"
               );
  atexit(FUN_143c03b21);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb51cb8,L"r.NGX.ProjectIdentifier",&local_68,
                L"0: automatic: (default)\n   use NVIDIA NGX Application ID if non-zero, otherwise use UE Project ID)\n1: force UE Project ID\n2: force NVIDIA NGX Application ID (set via the Project Settings -> NVIDIA DLSS plugin)\n"
               );
  atexit(FUN_143c03b66);
  local_68 = local_68 & 0xffffffffffffff00;
  local_88._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cb51cd0,L"r.NGX.Automation.Enable",&local_68,
                L"Enable automation for NGX DLSS image quality and performance evaluation. (default = 0)\n"
               );
  atexit(FUN_143c03bab);
  local_68 = local_68 & 0xffffffff00000000;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51ce8,L"r.NGX.Automation.ViewIndex",&local_68,
                L"Select which view to use with NGX DLSS image quality and performance automation. (default = 0). \n"
               );
  atexit(FUN_143c03bf0);
  local_68 = local_68 & 0xffffffff00000000;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51d00,L"r.NGX.Automation.NonGameViews",&local_68,
                L"Enable NGX DLSS image quality and performance automation for non-game views. (default = 0). \n"
               );
  atexit(FUN_143c03c35);
  local_68 = 0x800000014afb77b4;
  local_54 = 4;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_1464a806c(&local_68);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51d28,L"r.NGX.DLSS.Reflections.TemporalAA",&local_68,
                L"Apply a temporal AA pass on the denoised reflections");
  atexit(FUN_143c04c71);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51d40,L"r.NGX.DLSS.WaterReflections.TemporalAA",&local_68,
                L"Apply a temporal AA pass on the denoised water reflections");
  atexit(FUN_143c04cb6);
  local_68._0_4_ = 0xffffffff;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51d58,L"r.NGX.DLSS.BuiltInDenoiserOverride",&local_68,
                L"Change what happens to the built-in denoisers\n-1: automatic, depending on r.NGX.DLSS.DenoiserMode (default)\n 0: skip all built-in denoising\n 1: use built-in denoising\n"
               );
  atexit(FUN_143c04cfb);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51d80,L"r.NGX.DLSS.Enable",&local_68,L"Enable/Disable DLSS entirely.");
  atexit(FUN_143c04d40);
  local_68._0_4_ = 0;
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cb51d98,L"r.NGX.DLSS.AutomationTesting",&local_68,
                L"Whether the NGX library should be loaded when GIsAutomationTesting is true.(default is false)\nMust be set to true before startup. This can be enabled for cases where running automation testing with DLSS desired"
               );
  atexit(FUN_143c04d85);
  local_68._0_4_ = 0;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51db0,L"r.NGX.DLSS.Preset",&local_68,
                L"DLSS-SR/DLAA preset setting. Allows selecting a different DL model than the default\n  0: Use default preset or ini value\n  1: Force preset A\n  2: Force preset B\n  3: Force preset C\n  4: Force preset D\n  5: Force preset E\n  6: Force preset F\n  7: Force preset G\n  8,9: Unsupported preset\n 10: Force preset J\n 11: Force preset K\n 12: Force preset L\n 13: Force preset M\n 14: Force preset N\n 15: Force preset O"
               );
  atexit(FUN_143c04dca);
  local_68._0_4_ = 0;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51dc8,L"r.NGX.DLSSRR.Preset",&local_68,
                L"DLSS-RR/DLAA preset setting. Allows selecting a different DL model than the default\n  0: Use default preset or ini value\n  1: Force preset A\n  2: Force preset B\n  3: Force preset C\n  4: Force preset D\n  5: Force preset E\n  6: Force preset F\n  7: Force preset G\n  8: Force preset H\n  9: Force preset I\n 10: Force preset J\n 11: Force preset K\n 12: Force preset L\n 13: Force preset M\n 14: Force preset N\n 15: Force preset O"
               );
  atexit(FUN_143c04e0f);
  local_68._0_4_ = 0;
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cb51de0,L"r.NGX.DLSS.Sharpness",&local_68,
                L"[deprecated] -1.0 to 1.0: Softening/sharpening to apply to the DLSS pass. Negative values soften the image, positive values sharpen. (default: 0.0f)"
               );
  atexit(FUN_143c04e54);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51df8,L"r.NGX.DLSS.DilateMotionVectors",&local_68,
                L" 0: pass low resolution motion vectors into DLSS-SR\n 1: pass dilated high resolution motion vectors into DLSS-SR. This can help with improving image quality of thin details. (default)"
               );
  atexit(FUN_143c04e99);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e10,L"r.NGX.DLSS.AutoExposure",&local_68,
                L"0: Use the engine-computed exposure value for input images to DLSS - in some cases this may reduce artifacts\n1: Enable DLSS internal auto-exposure instead of the application provided one (default)\n"
               );
  atexit(FUN_143c04ede);
  local_68._0_4_ = 0;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e28,L"r.NGX.DLSS.BiasCurrentColorMask",&local_68,
                L"Enable/Disable support for BiasCurrentColorMask.");
  atexit(FUN_143c04f23);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e40,L"r.NGX.DLSS.ReleaseMemoryOnDelete",&local_68,
                L"Enabling/disable releasing DLSS related memory on the NGX side when DLSS features get released.(default=1)"
               );
  atexit(FUN_143c04f68);
  local_68._0_4_ = 0xffffffff;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e58,L"r.NGX.DLSS.FeatureCreationNode",&local_68,
                L"Determines which GPU the DLSS feature is getting created on\n-1: Create on the GPU the command list is getting executed on (default)\n 0: Create on GPU node 0 \n 1: Create on GPU node 1 \n"
               );
  atexit(FUN_143c04fad);
  local_68._0_4_ = 0xffffffff;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e70,L"r.NGX.DLSS.FeatureVisibilityMask",&local_68,
                L"Determines which GPU the DLSS feature is visible to\n-1: Visible to the GPU the command list is getting executed on (default)\n 1: visible to GPU node 0 \n 2:  visible to GPU node 1 \n 3:  visible to GPU node 0 and GPU node 1\n"
               );
  atexit(FUN_143c04ff2);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb51e88,L"r.NGX.DLSS.DenoiserMode",&local_68,
                L"Configures how DLSS denoises\n0: off, no denoising (default)\n1: DLSS-RR enabled\n"
               );
  atexit(FUN_143c05037);
  local_68 = local_68 & 0xffffffffffffff00;
  local_88._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cb51ea0,L"r.NGX.DLSS.EnableAlphaUpscaling",&local_68,
                L"Enables Alpha channel upscaling\nNote: r.PostProcessing.PropagateAlpha MUST be enabled for this feature to work.\n0: off (default)\n1: on \n"
               );
  atexit(FUN_143c0507c);
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb51eb8,L"r.NGX.DLSS.BiasCurrentColorMaskStencilValue",&local_68,
                L"The value that would be considered as Bias Color in the custom depth stencil buffer, Must not be set to 0!\n -1: Use project settings value\n>=1: Use CVar Value as stencil value, Note: must be positive, non-zero.\n"
               );
  atexit(FUN_143c050c1);
  DAT_14cb51ee0 = 0;
  _DAT_14cb51ee8 = 0;
  atexit((_func_5014 *)&LAB_143c05106);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c07dcc FUN_143c07dcc body=57 status=ok
// SIG undefined FUN_143c07dcc(void)

void FUN_143c07dcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52050 == 0) {
    uVar1 = FUN_1464a83fc();
    DAT_14cb52050 = FUN_14171c317(FUN_1464a842d,uVar1,L"UDLSSSupport");
  }
  return;
}



// FUNCTION 143c07e05 FUN_143c07e05 body=57 status=ok
// SIG undefined FUN_143c07e05(void)

void FUN_143c07e05(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52068 == 0) {
    uVar1 = FUN_1464a83fc();
    DAT_14cb52068 = FUN_14171c317(FUN_1464a845c,uVar1,L"UDLSSMode");
  }
  return;
}



// FUNCTION 143c07e3e FUN_143c07e3e body=71 status=ok
// SIG undefined FUN_143c07e3e(void)

void FUN_143c07e3e(byte param_1)

{
  char cVar1;
  
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    return;
  }
  DAT_14cb52189 = DAT_14c763034 == '\0' & param_1;
  if (DAT_14cb52189 != 0) {
    FUN_143c07e86(1);
    return;
  }
  FUN_1415c1c42();
  return;
}



// FUNCTION 143c07e86 FUN_143c07e86 body=401 status=ok
// SIG undefined FUN_143c07e86(void)

void FUN_143c07e86(char param_1)

{
  char cVar1;
  
  cVar1 = FUN_143c09d32();
  if ((cVar1 != '\0') && (DAT_14c763034 == '\0')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb52198) {
      FUN_144b3d300(&DAT_14cb52198);
      if (DAT_14cb52198 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb52190 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.Enable",1);
        _Init_thread_footer(&DAT_14cb52198);
      }
    }
    if (DAT_14cb52190 != 0) {
      FUN_140635eb8(DAT_14cb52190,param_1,0x6000000,0);
      if (param_1 != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb521a8) {
          FUN_144b3d300(&DAT_14cb521a8);
          if (DAT_14cb521a8 == -1) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb521a0 =
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1);
            _Init_thread_footer(&DAT_14cb521a8);
          }
        }
        FUN_140635eb8(DAT_14cb521a0,1,0xc000000,0);
        FUN_143c08018(DAT_14cb52178);
        return;
      }
      cVar1 = FUN_143c0958c();
      if (cVar1 != '\0') {
        FUN_143c08018(0);
        DAT_14cb52178 = 1;
      }
    }
  }
  return;
}



// FUNCTION 143c08018 FUN_143c08018 body=1045 status=ok
// SIG undefined FUN_143c08018(void)

void FUN_143c08018(char param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_143c09d32();
  if ((cVar1 != '\0') && (DAT_14c763035 == '\0')) {
    DAT_14cb52178 = param_1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb521b8) {
      FUN_144b3d300(&DAT_14cb521b8);
      if (DAT_14cb521b8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb521b0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.DenoiserMode",1);
        _Init_thread_footer(&DAT_14cb521b8);
      }
    }
    iVar2 = (**(code **)(*DAT_14cb521b0 + 0xb0))();
    if ((iVar2 == 0) == (bool)param_1) {
      if (param_1 == '\0') {
        FUN_140635eb8(DAT_14cb521b0,0,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Denoiser",1);
        FUN_140635eb8(uVar4,DAT_14c763038,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
        FUN_140635eb8(uVar4,DAT_14c76303c,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.Reflections.Temporal",1)
        ;
        FUN_140635eb8(uVar4,DAT_14c763040,0xd000000,0);
        return;
      }
      cVar1 = FUN_1415c1b86();
      if (cVar1 != '\0') {
        FUN_140635eb8(DAT_14cb521b0,1,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Denoiser",1);
        DAT_14c763038 = (**(code **)(*plVar3 + 0xb0))(plVar3);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Denoiser",1);
        FUN_140635eb8(uVar4,0,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
        DAT_14c76303c = (**(code **)(*plVar3 + 0xb0))(plVar3);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Lumen.Reflections.Temporal",1);
        DAT_14c763040 = (**(code **)(*plVar3 + 0xb0))(plVar3);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
        FUN_140635eb8(uVar4,0,0xd000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        uVar4 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.Reflections.Temporal",1)
        ;
        FUN_140635eb8(uVar4,0,0xd000000,0);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb521c8) {
          FUN_144b3d300(&DAT_14cb521c8);
          if (DAT_14cb521c8 == -1) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb521c0 =
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1);
            _Init_thread_footer(&DAT_14cb521c8);
          }
        }
        FUN_140635eb8(DAT_14cb521c0,1,0xc000000,0);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Lumen.Reflections.BilateralFilter",1);
                    /* WARNING: Could not recover jumptable at 0x000143c0828c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0xb0))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c0842e FUN_143c0842e body=50 status=ok
// SIG undefined FUN_143c0842e(void)

byte FUN_143c0842e(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_143c09d32();
  if ((cVar1 != '\0') && (cVar1 = FUN_143c09d32(), cVar1 != '\0')) {
    bVar2 = FUN_143c09d32();
    return DAT_14c763034 == '\0' & bVar2;
  }
  return 0;
}



// FUNCTION 143c08460 FUN_143c08460 body=1116 status=ok
// SIG undefined FUN_143c08460(void)

void FUN_143c08460(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  uStack_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_34);
            goto LAB_143c085f5;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &uStack_34) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_34,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_34,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&uStack_34,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_34,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_143c085f5:
    pbVar8 = *(byte **)(param_2 + 0x20);
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_34);
      goto LAB_143c085f5;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_34);
      goto LAB_143c085f5;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_34);
      goto LAB_143c085f5;
    }
    uVar1 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    uStack_34 = (undefined4)uVar1;
    local_30 = (undefined4)((ulonglong)uVar1 >> 0x20);
    puVar9 = (undefined4 *)0x0;
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_143c087af;
          }
        }
        puVar10 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      local_38 = (undefined4)uVar1;
      uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
LAB_143c087af:
  puVar10 = &uStack_34;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = puVar9;
  }
  puVar9 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c09d32();
  *puVar10 = DAT_14cb52168;
  *puVar9 = DAT_14cb5216c;
  if ((CONCAT44(uStack_2c,local_30) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c088be FUN_143c088be body=387 status=ok
// SIG undefined FUN_143c088be(void)

undefined1 FUN_143c088be(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb52208) && (FUN_144b3d300(&DAT_14cb52208), DAT_14cb52208 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb52200 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1)
      ;
      _Init_thread_footer(&DAT_14cb52208);
    }
    if (DAT_14cb52200 == (longlong *)0x0) {
      bVar5 = true;
    }
    else {
      iVar3 = (**(code **)(*DAT_14cb52200 + 0xb0))();
      bVar5 = iVar3 == 0;
    }
    cVar1 = DAT_14c763034;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb52218) && (FUN_144b3d300(&DAT_14cb52218), DAT_14cb52218 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb52210 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.Enable",1);
      _Init_thread_footer(&DAT_14cb52218);
    }
    if (DAT_14cb52210 == (longlong *)0x0) {
      bVar6 = true;
    }
    else {
      iVar3 = (**(code **)(*DAT_14cb52210 + 0xb0))();
      bVar6 = iVar3 == 0;
    }
    uVar2 = 0;
    uVar4 = uVar2;
    if (DAT_14cb52189 == '\0') {
      uVar4 = DAT_14c763044;
      if (bVar6) {
        uVar4 = uVar2;
      }
      if (cVar1 != '\0') {
        uVar4 = uVar2;
      }
      if (bVar5) {
        uVar4 = uVar2;
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c08a42 FUN_143c08a42 body=709 status=ok
// SIG undefined FUN_143c08a42(void)

void FUN_143c08a42(uint param_1,double *param_2,byte *param_3,float *param_4,undefined1 *param_5,
                  float *param_6,float *param_7,undefined4 *param_8)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_4 = 0.0;
  *param_5 = 0;
  *param_6 = 50.0;
  *param_7 = 200.0;
  *param_8 = 0;
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    *param_3 = 0;
    return;
  }
  bVar2 = FUN_1415c1e8e(param_1);
  *param_3 = bVar2;
  if (((char)param_1 != '\0' & bVar2) == 0) {
    if ((char)param_1 != '\x01') {
      return;
    }
    cVar1 = FUN_143c09d32();
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_143c09d32();
    if (cVar1 == '\0') {
      return;
    }
    if (DAT_14c763034 != '\0') {
      return;
    }
switchD_143c08ad1_caseD_1:
    iVar3 = 0x7fffffff;
    if ((float)(*param_2 * param_2[1]) < 2.1474836e+09) {
      iVar3 = (int)(*param_2 * param_2[1]);
    }
    if (iVar3 < 8300000) {
      if (0x384e0f < iVar3) goto LAB_143c08c28;
      if (iVar3 < 0x1ef9b0) {
        return;
      }
    }
    else {
      if (*(char *)(DAT_14cb51ee0 + 0xa0) != '\0') goto LAB_143c08bb7;
LAB_143c08c28:
      if (*(char *)(DAT_14cb51ee0 + 0x1c) != '\0') goto LAB_143c08c2e;
    }
    if (*(char *)(DAT_14cb51ee0 + 0x74) == '\0') {
      return;
    }
LAB_143c08c68:
    pfVar6 = (float *)(DAT_14cb51ee0 + 0x7c);
    pfVar4 = (float *)(DAT_14cb51ee0 + 0x80);
    lVar5 = 2;
    lVar7 = 0x80;
    lVar8 = 0x7c;
    lVar9 = 0x78;
  }
  else {
    switch(param_1 & 0xff) {
    case 1:
      goto switchD_143c08ad1_caseD_1;
    case 2:
      pfVar6 = (float *)(DAT_14cb51ee0 + 0x100);
      pfVar4 = (float *)(DAT_14cb51ee0 + 0x104);
      lVar5 = 5;
      lVar7 = 0x104;
      lVar8 = 0x100;
      lVar9 = 0xfc;
      break;
    case 3:
      pfVar6 = (float *)(DAT_14cb51ee0 + 0xd4);
      pfVar4 = (float *)(DAT_14cb51ee0 + 0xd8);
      lVar5 = 4;
      lVar7 = 0xd8;
      lVar8 = 0xd4;
      lVar9 = 0xd0;
      break;
    case 4:
      goto LAB_143c08c68;
    case 5:
      pfVar6 = (float *)(DAT_14cb51ee0 + 0x50);
      pfVar4 = (float *)(DAT_14cb51ee0 + 0x54);
      lVar5 = 1;
      lVar7 = 0x54;
      lVar8 = 0x50;
      lVar9 = 0x4c;
      break;
    default:
LAB_143c08c2e:
      pfVar6 = (float *)(DAT_14cb51ee0 + 0x24);
      pfVar4 = (float *)(DAT_14cb51ee0 + 0x28);
      lVar7 = 0x28;
      lVar8 = 0x24;
      lVar9 = 0x20;
      lVar5 = 0;
      break;
    case 7:
LAB_143c08bb7:
      pfVar6 = (float *)(DAT_14cb51ee0 + 0xa8);
      pfVar4 = (float *)(DAT_14cb51ee0 + 0xac);
      lVar5 = 3;
      lVar7 = 0xac;
      lVar8 = 0xa8;
      lVar9 = 0xa4;
    }
  }
  *param_5 = *pfVar6 == *pfVar4;
  *param_4 = *(float *)(DAT_14cb51ee0 + lVar9) * 100.0;
  *param_6 = *(float *)(DAT_14cb51ee0 + lVar8) * 100.0;
  *param_7 = *(float *)(DAT_14cb51ee0 + lVar7) * 100.0;
  *param_8 = *(undefined4 *)(DAT_14cb51ee0 + 0x18 + lVar5 * 0x2c);
  return;
}



// FUNCTION 143c08d08 FUN_143c08d08 body=1116 status=ok
// SIG undefined FUN_143c08d08(void)

void FUN_143c08d08(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  uStack_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_34);
            goto LAB_143c08e9d;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &uStack_34) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_34,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_34,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&uStack_34,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_34,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_143c08e9d:
    pbVar8 = *(byte **)(param_2 + 0x20);
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_34);
      goto LAB_143c08e9d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_34);
      goto LAB_143c08e9d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_34);
      goto LAB_143c08e9d;
    }
    uVar1 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    uStack_34 = (undefined4)uVar1;
    local_30 = (undefined4)((ulonglong)uVar1 >> 0x20);
    puVar9 = (undefined4 *)0x0;
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_143c09057;
          }
        }
        puVar10 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      local_38 = (undefined4)uVar1;
      uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
LAB_143c09057:
  puVar10 = &uStack_34;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = puVar9;
  }
  puVar9 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c09d32();
  *puVar10 = DAT_14cb52170;
  *puVar9 = DAT_14cb52174;
  if ((CONCAT44(uStack_2c,local_30) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c09166 FUN_143c09166 body=107 status=ok
// SIG undefined FUN_143c09166(void)

void FUN_143c09166(float *param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_143c09d32();
  if (cVar1 != '\0') {
    cVar1 = FUN_143c09d32();
    if (cVar1 != '\0') {
      cVar1 = FUN_143c09d32();
      if ((cVar1 != '\0') && (DAT_14c763034 == '\0')) {
        *param_1 = DAT_14c76302c * 100.0;
        fVar2 = DAT_14c763030 * 100.0;
        goto LAB_143c091c6;
      }
    }
  }
  *param_1 = 100.0;
  fVar2 = 100.0;
LAB_143c091c6:
  *param_2 = fVar2;
  return;
}



// FUNCTION 143c091d2 FUN_143c091d2 body=687 status=ok
// SIG undefined FUN_143c091d2(void)

undefined8 FUN_143c091d2(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  cVar3 = FUN_143c09d32();
  if (cVar3 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb52258) && (FUN_144b3d300(&DAT_14cb52258), DAT_14cb52258 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb52250 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.Sharpness",1);
      _Init_thread_footer(&DAT_14cb52258);
    }
    if (DAT_14cb52250 != (longlong *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb52268) && (FUN_144b3d300(&DAT_14cb52268), DAT_14cb52268 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb52260 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NIS.Sharpness",1);
        _Init_thread_footer(&DAT_14cb52268);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb52278) && (FUN_144b3d300(&DAT_14cb52278), DAT_14cb52278 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb52270 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NIS.Enable",1);
        _Init_thread_footer(&DAT_14cb52278);
      }
      bVar8 = DAT_14cb52270 != (longlong *)0x0 && DAT_14cb52260 != (longlong *)0x0;
      if (DAT_14cb52270 != (longlong *)0x0 && DAT_14cb52260 != (longlong *)0x0) {
        bVar4 = (**(code **)(*DAT_14cb52270 + 0xa8))();
      }
      else {
        bVar4 = 0;
      }
      lVar2 = DAT_14cb52150;
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar7 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar7 = 1;
      }
      iVar1 = *(int *)(lVar2 + uVar7 * 4);
      if (((bVar8 & iVar1 == 1 & bVar4) == 0) &&
         (uVar9 = (**(code **)(*DAT_14cb52250 + 0xb8))(),
         (bVar8 & bVar4 & iVar1 == 2 & 0.0 <= (float)uVar9) != 1)) {
        return uVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x000143c0933c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*DAT_14cb52260 + 0xb8))();
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 143c09482 FUN_143c09482 body=203 status=ok
// SIG undefined FUN_143c09482(void)

longlong * FUN_143c09482(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar4 = FUN_143c09d32();
  if (cVar4 != '\0') {
    if (DAT_14cb52068 == 0) {
      uVar6 = FUN_1464a83fc();
      DAT_14cb52068 = FUN_14171c317(FUN_1464a845c,uVar6,L"UDLSSMode");
    }
    lVar3 = DAT_14cb52068;
    if (0 < *(int *)(DAT_14cb52068 + 0x48)) {
      lVar8 = 8;
      lVar7 = 0;
      do {
        uVar2 = *(ulonglong *)(*(longlong *)(lVar3 + 0x40) + lVar8);
        uVar5 = FUN_1404d8156(lVar3);
        if ((uVar2 != uVar5) && (cVar4 = FUN_1415c1e8e(uVar2 & 0xffffffff), cVar4 != '\0')) {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1485f475e(param_1,iVar1);
          }
          *(char *)(*param_1 + (longlong)iVar1) = (char)uVar2;
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 < *(int *)(lVar3 + 0x48));
    }
  }
  return param_1;
}



// FUNCTION 143c0954e FUN_143c0954e body=61 status=ok
// SIG undefined FUN_143c0954e(void)

void FUN_143c0954e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_143c09d32();
  uVar2 = DAT_14cb52189;
  if (DAT_14c763034 != '\0') {
    uVar2 = 0;
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 143c0958c FUN_143c0958c body=188 status=ok
// SIG undefined FUN_143c0958c(void)

byte FUN_143c0958c(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  cVar2 = FUN_143c09d32();
  cVar1 = DAT_14c763034;
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb521e8) {
      FUN_144b3d300(&DAT_14cb521e8);
      if (DAT_14cb521e8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb521e0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.DenoiserMode",1);
        _Init_thread_footer(&DAT_14cb521e8);
      }
    }
    if (DAT_14cb521e0 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      iVar4 = (**(code **)(*DAT_14cb521e0 + 0xb0))();
      bVar5 = iVar4 != 0;
    }
    bVar3 = cVar1 == '\0' & bVar5;
  }
  return bVar3;
}



// FUNCTION 143c09648 FUN_143c09648 body=55 status=ok
// SIG undefined FUN_143c09648(void)

void FUN_143c09648(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_143c096be();
    bVar2 = cVar1 == '\0';
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 143c09680 FUN_143c09680 body=62 status=ok
// SIG undefined FUN_143c09680(void)

void FUN_143c09680(undefined8 param_1,longlong param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_143c09d32();
    bVar2 = DAT_14c763034 == '\0' & bVar2;
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 143c096be FUN_143c096be body=634 status=ok
// SIG undefined FUN_143c096be(void)

ulonglong FUN_143c096be(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar4 = FUN_143c09d32();
  if (cVar4 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb5218c) {
      FUN_144b3d300(&DAT_14cb5218c);
      if (DAT_14cb5218c == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb52288) {
          FUN_144b3d300(&DAT_14cb52288);
          if (DAT_14cb52288 == -1) {
            FUN_1446f470e(&local_20,L"DLSS",1);
            DAT_14cb52280 = (longlong *)FUN_1447c1074(local_20);
            _Init_thread_footer(&DAT_14cb52288);
          }
        }
        if (DAT_14cb52280 == (longlong *)0x0) {
          DAT_14cb5218a = '\0';
        }
        else {
          DAT_14cb5218a = (**(code **)(*DAT_14cb52280 + 0x80))();
        }
        _Init_thread_footer(&DAT_14cb5218c);
      }
    }
    if (DAT_14cb5218a == '\x01') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca97070) {
        FUN_144b3d300(&DAT_14ca97070);
        if (DAT_14ca97070 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar7 = (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
          if (plVar7 == (longlong *)0x0) {
            DAT_14ca97068 = 0;
          }
          else {
            DAT_14ca97068 = (**(code **)(*plVar7 + 0x68))(plVar7);
          }
          _Init_thread_footer(&DAT_14ca97070);
        }
      }
      lVar3 = DAT_14ca97068;
      bVar9 = true;
      cVar4 = DAT_14ca96da8;
      if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        cVar4 = '\x02';
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar8 = 0;
        }
        else if (iVar1 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar5 != DVar6);
          cVar4 = DAT_14ca96da8;
        }
        else {
          uVar8 = 1;
        }
        bVar9 = *(int *)(lVar3 + uVar8 * 4) != 0;
      }
      uVar2 = (uint)DAT_14c763035;
      if (cVar4 == '\0') {
        uVar2 = 1;
      }
      uVar8 = (ulonglong)uVar2;
      if (!bVar9) {
        uVar8 = 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0993a FUN_143c0993a body=54 status=ok
// SIG undefined FUN_143c0993a(void)

void FUN_143c0993a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_143c09d32();
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = DAT_14c763034;
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 143c09970 FUN_143c09970 body=891 status=ok
// SIG undefined FUN_143c09970(void)

void FUN_143c09970(float param_1)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_143c09d32();
  if (cVar4 == '\0') goto LAB_143c09b98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb52228) && (FUN_144b3d300(&DAT_14cb52228), DAT_14cb52228 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb52220 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.Sharpness",1);
    _Init_thread_footer(&DAT_14cb52228);
  }
  if (DAT_14cb52220 == (longlong *)0x0) goto LAB_143c09b98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb52238) && (FUN_144b3d300(&DAT_14cb52238), DAT_14cb52238 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb52230 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NIS.Sharpness",1);
    _Init_thread_footer(&DAT_14cb52238);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb52248) && (FUN_144b3d300(&DAT_14cb52248), DAT_14cb52248 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb52240 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NIS.Enable",1)
    ;
    _Init_thread_footer(&DAT_14cb52248);
  }
  if ((DAT_14cb52240 == (longlong *)0x0 || DAT_14cb52230 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*DAT_14cb52240 + 0xa8))(), lVar3 = DAT_14cb52150, cVar4 == '\0')) {
    uVar10 = SUB84((double)param_1,0);
    plVar9 = DAT_14cb52220;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    plVar9 = DAT_14cb52220;
    iVar1 = *(int *)(lVar3 + uVar7 * 4);
    if (iVar1 == 1) {
LAB_143c09ac8:
      if (1.0 <= param_1) {
        param_1 = 1.0;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar2 = (double)param_1;
      param_1 = 0.0;
    }
    else {
      dVar2 = 0.0;
      if ((0.0 < param_1) && (dVar2 = 0.0, iVar1 == 2)) goto LAB_143c09ac8;
    }
    uVar10 = SUB84(dVar2,0);
    FUN_140002266(&local_50,L"%2.2f",(double)param_1);
    puVar8 = local_50;
    if (local_48 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar9 + 0x98))(plVar9,puVar8,0xc000000,0);
    plVar9 = DAT_14cb52230;
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
      plVar9 = DAT_14cb52230;
    }
  }
  FUN_140002266(&local_50,L"%2.2f",uVar10);
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar9 + 0x98))(plVar9,puVar8,0xc000000,0);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143c09b98:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c09cec FUN_143c09cec body=69 status=ok
// SIG undefined FUN_143c09cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c09cec(void)

{
  _DAT_14cb52140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c09d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52148,1);
  return;
}



// FUNCTION 143c09d32 FUN_143c09d32 body=279 status=ok
// SIG undefined FUN_143c09d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143c09d32(void)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (DAT_14cb52188 == '\0') {
    FUN_1446f470e(&local_30,L"DLSS",1);
    plVar2 = (longlong *)FUN_1447c1074(local_30);
    if (plVar2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      _DAT_14cb52180 = (**(code **)(*plVar2 + 0x68))(plVar2);
      bVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
      DAT_14c763034 = (undefined1)(0x60403020100 >> (bVar1 * '\b' & 0x3f));
      if (5 < bVar1) {
        DAT_14c763034 = 1;
      }
      bVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
      DAT_14c763035 = (undefined1)(0x60403020100 >> (bVar1 * '\b' & 0x3f));
      if (5 < bVar1) {
        DAT_14c763035 = 1;
      }
      (**(code **)(*plVar2 + 0x50))(plVar2,&DAT_14cb52168,&DAT_14cb5216c);
      (**(code **)(*plVar2 + 0x58))(plVar2,&DAT_14cb52170,&DAT_14cb52174);
      DAT_14cb52188 = '\x01';
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c09e4a FUN_143c09e4a body=238 status=ok
// SIG undefined FUN_143c09e4a(void)

void FUN_143c09e4a(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f30) {
    FUN_144b3d300(&DAT_14c926f30);
    if (DAT_14c926f30 == -1) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
  }
  local_30 = L"DLSS";
  local_28 = 4;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,local_20);
  FUN_143c09d32();
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c09f3b FUN_143c09f3b body=316 status=ok
// SIG undefined FUN_143c09f3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c09f3b(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &PTR_FUN_14afc0e10;
  local_48 = 2;
  local_58 = 0;
  FUN_14282b410(L"/Script/DLSSBlueprint",&PTR_FUN_14afc0e50,1,0);
  local_38 = (char *)CONCAT44(local_38._4_4_,2);
  local_58 = CONCAT44(local_58._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb52140,L"r.NGX.DLSS.PreferNISSharpen",&local_38,
                L"Prefer sharpening with an extra NIS plugin sharpening pass instead of DLSS sharpening if the NIS plugin is also enabled for the project. (default: 1)\nRequires the NIS plugin to be enabled\n   0: Softening/sharpening with the DLSS pass.\n   1: Sharpen with the NIS plugin. Softening is not supported. Requires the NIS plugin to be enabled.\n   2: Sharpen with the NIS plugin. Softening (i.e. negative sharpness) with the DLSS plugin. Requires the NIS plugin to be enabled.\nNote: This cvar is only evaluated when using the deprecated `SetDLSSSharpness` Blueprint function, from either C++ or a Blueprint event graph!Note: DLSS sharpening is deprecated, future plugin versions will remove DLSS sharpening. Use the NIS plugin for sharpening instead\n"
               );
  atexit(FUN_143c09cec);
  local_38 = "SetDLSSModeInvalidEnumValueError";
  local_30 = 0x20;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb52158 = (ulonglong)uVar1;
  local_38 = "IsDLSSModeSupportedInvalidEnumValueError";
  local_30 = 0x28;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb52160 = (ulonglong)uVar1;
  local_38 = (char *)0x800000014afc150e;
  local_24 = 0xd;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1464a88de(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0a078 FUN_143c0a078 body=282 status=ok
// SIG undefined FUN_143c0a078(void)

void FUN_143c0a078(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_58 = L"StreamlineCore";
  local_50 = 0xe;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_48);
  (**(code **)(*local_48 + 0x20))(local_48,&local_78);
  local_38 = local_78;
  local_30 = local_70 + -1;
  if (local_70 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_68,&local_38,2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38,L"/Plugin/StreamlineCore");
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0a19f FUN_143c0a19f body=1069 status=ok
// SIG undefined FUN_143c0a19f(void)

ulonglong FUN_143c0a19f(longlong param_1,float param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_d8 [32];
  int *local_b8;
  longlong *local_b0;
  undefined1 local_a5;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)*param_3;
  if (*(char *)(*param_3 + 0x52) != '\0') {
    plVar3 = (longlong *)0x0;
  }
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  iVar10 = *(int *)(lVar4 + 0x24);
  plVar3 = (longlong *)0x0;
  if (*(char *)(*param_3 + 0x52) == '\0') {
    plVar3 = (longlong *)*param_3;
  }
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  local_80 = DAT_14ca83a40;
  uStack_90 = DAT_14ca83a30;
  uStack_8c = DAT_14ca83a34;
  uStack_88 = DAT_14ca83a38;
  uStack_84 = DAT_14ca83a3c;
  iVar10 = iVar10 - (int)DAT_14c967818;
  iVar11 = *(int *)(lVar4 + 0x28) - (int)((ulonglong)DAT_14c967818 >> 0x20);
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_66 = 0;
  local_98 = (longlong *)&DAT_00020008;
  local_65 = 2;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_78 = 0;
  local_63 = 0xff;
  local_74 = DAT_14ca84e40;
  if (iVar10 < DAT_14ca84e40) {
    local_74 = iVar10;
  }
  if (local_74 < 2) {
    local_74 = 1;
  }
  local_70 = DAT_14ca84e40;
  if (iVar11 < DAT_14ca84e40) {
    local_70 = iVar11;
  }
  if (local_70 < 2) {
    local_70 = 1;
  }
  plVar3 = (longlong *)(param_1 + 0x70);
  uVar9 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar5 = uVar9 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(plVar3,0x128);
    uVar9 = *plVar3 + 7U & 0xfffffffffffffff8;
    uVar5 = uVar9 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bbb8c(uVar9,L"Streamline.UIColorAndAlpha",&local_98,0);
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 8) = uVar9;
  *(int *)(uVar9 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar3,0x40);
    puVar8 = (undefined8 *)(*plVar3 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14afc1ba0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar8;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(puVar8 + 2) = param_2;
  local_b0 = plVar3;
  FUN_1447ec05f(&local_98,*param_3,L"InBackBuffer");
  uVar6 = FUN_14473c272(param_1,&local_98,0);
  puVar8[3] = uVar6;
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x38))();
  }
  plVar3 = local_b0;
  uVar1 = *(undefined1 *)(uVar9 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_b0,0x50);
    puVar12 = (undefined8 *)(*plVar3 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar12[1] = *(undefined8 *)(uVar9 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar1;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = uVar9;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[4] = puVar12;
  uVar6 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145e68258();
  FUN_1448e935e(uVar6,&local_98,&DAT_14cb522f8,0);
  FUN_145e68258();
  local_a0 = iVar11 + 0xe;
  if (-1 < iVar11 + 7) {
    local_a0 = iVar11 + 7;
  }
  local_a0 = local_a0 >> 3;
  local_a4 = iVar10 + 0xe;
  if (-1 < iVar10 + 7) {
    local_a4 = iVar10 + 7;
  }
  local_a4 = local_a4 >> 3;
  local_b8 = &local_a4;
  local_9c = 1;
  FUN_1485f4a06(param_1,&local_a5,&local_98,puVar8 + 2);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0a5d9 FUN_143c0a5d9 body=1529 status=ok
// SIG undefined FUN_143c0a5d9(void)

ulonglong FUN_143c0a5d9(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong param_5,byte param_6)

{
  longlong *plVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong lVar9;
  undefined1 **ppuVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  int *local_128;
  longlong *local_118;
  undefined8 *local_110;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar5 = *(undefined8 *)(param_2 + 0x30f8);
  local_100 = *(undefined8 *)(param_2 + 0x3100);
  if (param_6 == 0) {
    iVar15 = (int)((ulonglong)local_100 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
    local_104 = (int)local_100 - (int)uVar5;
  }
  else {
    fVar18 = *(float *)(*(longlong *)(param_2 + 8) + 0x110);
    fVar17 = (float)(*(int *)(param_2 + 0x4e4) - *(int *)(param_2 + 0x4dc)) * fVar18 *
             *(float *)(param_2 + 0x45c);
    iVar15 = -((int)ROUND(-0.5 - (fVar17 + fVar17)) >> 1);
    fVar18 = (float)(*(int *)(param_2 + 0x4e0) - *(int *)(param_2 + 0x4d8)) * fVar18 *
             *(float *)(param_2 + 0x45c);
    local_104 = -((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
  }
  local_a0 = DAT_14ca83a40;
  uStack_b0 = DAT_14ca83a30;
  uStack_ac = DAT_14ca83a34;
  uStack_a8 = DAT_14ca83a38;
  uStack_a4 = DAT_14ca83a3c;
  uVar13 = iVar15 - (int)((ulonglong)DAT_14c967818 >> 0x20);
  local_f0 = (ulonglong)uVar13;
  local_f8 = DAT_14c967818;
  uVar12 = local_104 - (int)DAT_14c967818;
  local_e8 = (ulonglong)uVar12;
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = &DAT_00020008;
  local_85 = 0xf;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  local_94 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    local_94 = uVar12;
  }
  if ((int)local_94 < 2) {
    local_94 = 1;
  }
  local_90 = DAT_14ca84e40;
  if ((int)uVar13 < (int)DAT_14ca84e40) {
    local_90 = uVar13;
  }
  if ((int)local_90 < 2) {
    local_90 = 1;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar16 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar16 + 0x120;
  local_118 = plVar1;
  local_110 = (undefined8 *)param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
    FUN_140023dd8(plVar1,0x128);
    uVar16 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar6 = uVar16 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar16,L"Streamline.CombinedVelocity",&local_b8,0);
  iVar4 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar4);
  }
  plVar1 = local_118;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar16;
  *(int *)(uVar16 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar14 + 0x2a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_118,0x160);
    puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar14 + 0x2a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar14 = &PTR_FUN_14afc1bc8;
  puVar14[0x16] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  *(undefined1 *)(puVar14 + 0x17) = 1;
  puVar14[0x18] = 0;
  puVar14[0x28] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  puVar7 = local_110;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar14;
  puVar14[2] = param_4;
  puVar14[3] = DAT_14c9c0d80;
  local_d0 = *(undefined8 *)((longlong)local_110 + 0x84);
  local_c0 = local_100;
  local_c8 = uVar5;
  FUN_144a2c7c2(&local_b8);
  plVar1 = local_118;
  ppuVar10 = &local_b8;
  puVar11 = puVar14 + 4;
  for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar14[0x12] = puVar7;
  puVar14[0x13] = DAT_14c9c0d80;
  puVar14[0x28] = param_5;
  uVar3 = *(undefined1 *)(uVar16 + 0x94);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_118,0x50);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  local_110 = puVar14 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(uVar16 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar11 + 6) = uVar3;
  *(undefined1 *)(puVar11 + 7) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
  puVar11[8] = uVar16;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  local_c0 = CONCAT44(iVar15,local_104);
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[0x18] = puVar11;
  local_d0 = *(undefined8 *)(uVar16 + 0x84);
  local_c8 = local_f8;
  FUN_144a2c7c2(&local_b8);
  ppuVar10 = &local_b8;
  puVar7 = puVar14 + 0x1a;
  for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  dVar2 = *(double *)(param_2 + 0x125a8);
  *(float *)(puVar14 + 0x14) = (float)*(double *)(param_2 + 0x125a0);
  *(float *)((longlong)puVar14 + 0xa4) = (float)dVar2;
  lVar9 = FUN_1447e4f80();
  cVar8 = '\x02';
  if (*(char *)(lVar9 + 0x41) != '\x03') {
    cVar8 = *(char *)(lVar9 + 0x41);
  }
  puVar14[0x16] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar14 + 0x17) = cVar8;
  uVar5 = *(undefined8 *)(param_2 + 0x13818);
  FUN_145f1f6b8();
  FUN_1448e935e(uVar5,&local_b8,&DAT_14cb52438,(uint)param_6 + (uint)(param_5 != 0) * 2);
  FUN_145f1f6b8();
  local_d8 = ((int)local_f0 + DAT_14cb523cc + -1) / DAT_14cb523cc;
  local_dc = ((int)local_e8 + DAT_14cb523c8 + -1) / DAT_14cb523c8;
  local_128 = &local_dc;
  local_d4 = 1;
  FUN_1485f4bae(param_1,&local_d0,&local_b8,local_110);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0abec FUN_143c0abec body=481 status=ok
// SIG undefined FUN_143c0abec(void)

void FUN_143c0abec(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1485f5051(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0adce FUN_143c0adce body=232 status=ok
// SIG undefined FUN_143c0adce(void)

void FUN_143c0adce(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143c0aeb6 FUN_143c0aeb6 body=81 status=ok
// SIG undefined FUN_143c0aeb6(void)

void FUN_143c0aeb6(undefined8 param_1,longlong *param_2)

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
  FUN_1485f50f4(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143c0af08 FUN_143c0af08 body=481 status=ok
// SIG undefined FUN_143c0af08(void)

void FUN_143c0af08(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1485f5411(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0b0ea FUN_143c0b0ea body=232 status=ok
// SIG undefined FUN_143c0b0ea(void)

void FUN_143c0b0ea(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143c0b1d2 FUN_143c0b1d2 body=81 status=ok
// SIG undefined FUN_143c0b1d2(void)

void FUN_143c0b1d2(undefined8 param_1,longlong *param_2)

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
  FUN_1485f54b4(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143c0b223 FUN_143c0b223 body=254 status=ok
// SIG undefined FUN_143c0b223(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0b223(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined *)0x800000014afc188a;
  local_1c = 0x11;
  uVar2 = FUN_14577453c();
  local_28._0_5_ = CONCAT14(1,uVar2);
  FUN_1464a8a48(&local_30);
  local_28 = FUN_145e68258;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb523a8,&local_30);
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_30,&DAT_14cb523b8);
  if (cVar1 == '\0') {
    _DAT_14cb523b8 = 0;
    uRam000000014cb523c0 = 0;
  }
  if (local_30 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb523c8 = 0x800000008;
  local_28 = FUN_145f1f6b8;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb524e8);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0b324 FUN_143c0b324 body=57 status=ok
// SIG undefined FUN_143c0b324(void)

void FUN_143c0b324(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52688 == 0) {
    uVar1 = FUN_1464a8ed2();
    DAT_14cb52688 = FUN_14171c317(FUN_1464a8f03,uVar1,L"EStreamlineSettingOverride");
  }
  return;
}



// FUNCTION 143c0b35d FUN_143c0b35d body=69 status=ok
// SIG undefined FUN_143c0b35d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0b35d(void)

{
  _DAT_14cb526c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c0b39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb526d0,1);
  return;
}



// FUNCTION 143c0b3a2 FUN_143c0b3a2 body=69 status=ok
// SIG undefined FUN_143c0b3a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0b3a2(void)

{
  _DAT_14cb526e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c0b3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb526e8,1);
  return;
}



// FUNCTION 143c0b3e7 FUN_143c0b3e7 body=69 status=ok
// SIG undefined FUN_143c0b3e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0b3e7(void)

{
  _DAT_14cb52788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c0b429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52790,1);
  return;
}



// FUNCTION 143c0b42c FUN_143c0b42c body=69 status=ok
// SIG undefined FUN_143c0b42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0b42c(void)

{
  _DAT_14cb527a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c0b46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb527a8,1);
  return;
}



// FUNCTION 143c0b482 FUN_143c0b482 body=63 status=ok
// SIG undefined FUN_143c0b482(void)

PRTL_CRITICAL_SECTION_DEBUG FUN_143c0b482(LPCRITICAL_SECTION param_1,int param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_2) {
    param_1[1].LockCount = param_2;
    (*DAT_14cb52770)(param_1 + 1,&param_1[1].LockCount);
  }
  p_Var1 = param_1[1].DebugInfo;
  LeaveCriticalSection(param_1);
  return p_Var1;
}



// FUNCTION 143c0b4c2 FUN_143c0b4c2 body=127 status=ok
// SIG undefined FUN_143c0b4c2(void)

undefined8 * FUN_143c0b4c2(undefined8 *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_1 = &PTR_LAB_14afc32a0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x38,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].LockCount = (LONG)DAT_14c872be0;
  (*DAT_14cb52770)(lpCriticalSection + 1,&lpCriticalSection[1].LockCount);
  param_1[3] = lpCriticalSection;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143c0b542 FUN_143c0b542 body=84 status=ok
// SIG undefined FUN_143c0b542(void)

void FUN_143c0b542(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_1 = &PTR_LAB_14afc32a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[3];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FUN_1400020a8(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 143c0b5b2 FUN_143c0b5b2 body=7317 status=ok
// SIG undefined FUN_143c0b5b2(void)

/* WARNING: Removing unreachable block (ram,0x000143c0ccad) */
/* WARNING: Removing unreachable block (ram,0x000143c0cd78) */
/* WARNING: Type propagation algorithm not settling */

void FUN_143c0b5b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  size_t sVar14;
  undefined8 uVar15;
  int iVar16;
  undefined *puVar17;
  wchar_t ******ppppppwVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  void *pvVar23;
  void *pvVar24;
  longlong lVar25;
  wchar_t **ppwVar26;
  undefined7 uVar28;
  wchar_t *pwVar27;
  ushort uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ushort uVar32;
  wchar_t *******pppppppwVar33;
  wchar_t *******pppppppwVar34;
  int iVar35;
  undefined2 *puVar36;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined4 local_31c;
  longlong local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  void *local_2f8;
  undefined8 uStack_2f0;
  void *local_2e8;
  int local_2e0;
  wchar_t *local_2d8;
  int local_2d0;
  wchar_t *local_2c8;
  int local_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined8 local_270;
  undefined8 local_268;
  char local_260;
  undefined7 uStack_25f;
  int local_258;
  undefined2 *local_250;
  undefined8 local_248;
  wchar_t ******local_240;
  int local_238;
  wchar_t *******local_230;
  int local_228;
  undefined4 uStack_224;
  wchar_t *******local_220;
  int local_218;
  int local_214;
  wchar_t *******local_1a0;
  wchar_t *******local_198;
  int local_190;
  wchar_t *******local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  wchar_t *******local_168;
  int local_160;
  undefined4 local_15c;
  wchar_t *******local_108;
  wchar_t *******local_100;
  int local_f8;
  void *local_f0;
  uint local_e8;
  undefined1 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *local_a0;
  ulonglong local_98;
  void *local_90;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  wchar_t *******local_78;
  wchar_t *******local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_288 = 0;
  uStack_280 = 0;
  local_188 = (wchar_t *******)0x0;
  uVar12 = *(uint *)(param_1 + 0x10);
  pvVar23 = *(void **)(param_1 + 8);
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
  if ((longlong)(int)uVar12 == 0) {
    uStack_180 = (ulonglong)uVar12;
    uStack_280 = 1;
    iVar20 = 0;
LAB_143c0b666:
    FUN_1447a1bd6(&local_288,iVar20);
  }
  else {
    FUN_1446dd670(&local_188,uVar12,0);
    memcpy(local_188,pvVar23,(longlong)(int)uVar12 * 2);
    iVar20 = (int)uStack_280;
    uStack_280 = CONCAT44(uStack_280._4_4_,(int)uStack_280 + 1);
    if (uStack_280._4_4_ == iVar20) goto LAB_143c0b666;
  }
  FUN_140b8566a((longlong)iVar20 * 0x10 + local_288,&local_188,1);
  if (local_188 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  ppwVar26 = &local_2a8;
  local_2a8 = L"DLSS";
  local_2a0 = 4;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8);
  if (local_298 == (longlong *)0x0) {
    local_31c = 0;
  }
  else {
    cVar7 = (**(code **)(*local_298 + 0x48))();
    if (cVar7 == '\0') {
      local_31c = 0;
      cVar7 = (**(code **)(*local_298 + 0x50))();
      if (cVar7 == '\0') goto LAB_143c0bba6;
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    uVar15 = CONCAT71((int7)((ulonglong)ppwVar26 >> 8),1);
    plVar13 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.Enable",uVar15);
    if (plVar13 == (longlong *)0x0) {
      bVar8 = 0;
    }
    else {
      bVar8 = (**(code **)(*plVar13 + 0xa8))(plVar13);
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    uVar28 = (undefined7)((ulonglong)uVar15 >> 8);
    local_31c = (undefined4)CONCAT71(uVar28,1);
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.NGX.Enable.AllowCommandLine",CONCAT71(uVar28,1));
    if ((plVar13 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar13 + 0xa8))(plVar13), cVar7 == '\0')) {
joined_r0x000143c0b824:
      if (bVar8 == 0) goto LAB_143c0bba6;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar7 = FUN_14054d46e(&DAT_14c846b20,L"ngxenable");
      if (cVar7 == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        puVar17 = &DAT_14c846b20;
        bVar9 = FUN_14054d46e(&DAT_14c846b20);
        local_31c = (undefined4)CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
        bVar8 = bVar8 & (bVar9 ^ 1);
        goto joined_r0x000143c0b824;
      }
    }
    FUN_140056680(&local_220,L"Win64");
    uVar15 = FUN_140d6afb0();
    FUN_140056680(&local_230,uVar15);
    iVar20 = local_228 + -1;
    if (local_228 == 0) {
      iVar20 = 0;
    }
    local_188 = local_230;
    uStack_180 = CONCAT44(uStack_180._4_4_,iVar20);
    local_178 = L"Binaries/ThirdParty/NVIDIA/NGX/";
    local_170 = 0x1f;
    local_168 = local_220;
    local_160 = local_218 + -1;
    if (local_218 == 0) {
      local_160 = 0;
    }
    FUN_140bee87a(&local_f0,&local_188,3);
    if (local_230 != (wchar_t *******)0x0) {
      FUN_1400020a8();
    }
    uVar15 = FUN_14598c0e0();
    FUN_140056680(&local_240,uVar15);
    local_188 = (wchar_t *******)local_240;
    iVar20 = local_238 + -1;
    if (local_238 == 0) {
      iVar20 = 0;
    }
    uStack_180 = CONCAT44(uStack_180._4_4_,iVar20);
    local_178 = L"Binaries/ThirdParty/NVIDIA/NGX/";
    local_170 = 0x1f;
    local_168 = local_220;
    local_160 = local_218 + -1;
    if (local_218 == 0) {
      local_160 = 0;
    }
    FUN_140bee87a(&local_230,&local_188,3);
    if (local_240 != (wchar_t ******)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*local_298 + 0x20))(local_298,&local_240);
    local_188 = (wchar_t *******)local_240;
    if (local_238 == 0) {
      local_188 = (wchar_t *******)&DAT_149dfb77a;
    }
    uVar11 = 0;
    if (local_188 != (wchar_t *******)0x0) {
      sVar14 = wcslen((wchar_t *)local_188);
      uVar11 = (int)sVar14;
    }
    local_178 = L"Binaries/ThirdParty/";
    local_170 = 0x14;
    local_168 = local_220;
    local_160 = local_218 + -1;
    if (local_218 == 0) {
      local_160 = 0;
    }
    uStack_180._0_4_ = uVar11;
    FUN_140bee87a(&local_250,&local_188,3);
    pvVar23 = local_f0;
    local_188 = (wchar_t *******)0x0;
    uStack_180 = CONCAT44(uStack_180._4_4_,local_e8);
    if ((longlong)(int)local_e8 == 0) {
      uStack_180 = (ulonglong)local_e8;
    }
    else {
      FUN_1446dd670(&local_188,local_e8,0);
      memcpy(local_188,pvVar23,(longlong)(int)local_e8 * 2);
    }
    pppppppwVar33 = local_230;
    local_178 = (wchar_t *)0x0;
    lVar21 = (longlong)local_228;
    local_170 = local_228;
    if (lVar21 == 0) {
      local_16c = 0;
    }
    else {
      FUN_1446dd670(&local_178,local_228,0);
      memcpy(local_178,pppppppwVar33,lVar21 * 2);
    }
    puVar36 = local_250;
    local_168 = (wchar_t *******)0x0;
    lVar21 = (longlong)(int)local_248;
    local_160 = (int)local_248;
    if (lVar21 == 0) {
      local_15c = 0;
    }
    else {
      FUN_1446dd670(&local_168,local_248 & 0xffffffff,0);
      memcpy(local_168,puVar36,lVar21 * 2);
    }
    uVar19 = uStack_280;
    iVar20 = (int)uStack_280;
    lVar21 = (longlong)(int)uStack_280;
    uStack_280 = CONCAT44(uStack_280._4_4_,(int)uStack_280 + 3);
    if ((uint)(uStack_280._4_4_ - iVar20) < 3) {
      FUN_1447a1bd6(&local_288,uVar19 & 0xffffffff);
    }
    uVar15 = FUN_140b8566a(lVar21 * 0x10 + local_288,&local_188,3);
    lVar21 = 0x30;
    do {
      if (*(longlong *)((longlong)&local_198 + lVar21) != 0) {
        uVar15 = FUN_1400020a8();
      }
      lVar21 = lVar21 + -0x10;
    } while (lVar21 != 0);
    if (local_250 != (undefined2 *)0x0) {
      uVar15 = FUN_1400020a8();
    }
    if (local_240 != (wchar_t ******)0x0) {
      uVar15 = FUN_1400020a8();
    }
    if (local_230 != (wchar_t *******)0x0) {
      uVar15 = FUN_1400020a8();
    }
    if (local_f0 != (void *)0x0) {
      uVar15 = FUN_1400020a8();
    }
    if (local_220 != (wchar_t *******)0x0) {
      uVar15 = FUN_1400020a8();
    }
    local_31c = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
  }
LAB_143c0bba6:
  local_2b8 = 0;
  uStack_2b0 = 0;
  if (0 < (int)uStack_280) {
    lVar21 = 0;
    do {
      lVar25 = lVar21 * 0x10;
      FUN_1401aea18(&local_188,local_288 + lVar25);
      pppppppwVar33 = (wchar_t *******)(local_288 + lVar25);
      if ((wchar_t ********)pppppppwVar33 != &local_188) {
        if (*pppppppwVar33 != (wchar_t ******)0x0) {
          FUN_1400020a8();
        }
        *pppppppwVar33 = (wchar_t ******)local_188;
        local_188 = (wchar_t *******)0x0;
        *(int *)(pppppppwVar33 + 1) = (int)uStack_180;
        *(undefined4 *)((longlong)pppppppwVar33 + 0xc) = uStack_180._4_4_;
        uStack_180 = 0;
      }
      if (local_188 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
      pppppppwVar34 = (wchar_t *******)(local_288 + lVar25);
      FUN_1400b22c2(&local_188,&DAT_14afb88ae);
      uVar31 = 0;
      pppppppwVar33 = local_188;
      uVar19 = (ulonglong)((int)uStack_180 - 1);
      if ((int)uStack_180 == 0) {
        pppppppwVar33 = (wchar_t *******)&DAT_149dfb77a;
        uVar19 = uVar31;
      }
      if (0 < (int)uVar19) {
        ppppppwVar18 = (wchar_t ******)&DAT_149dfb77a;
        if (*(int *)(pppppppwVar34 + 1) != 0) {
          ppppppwVar18 = *pppppppwVar34;
        }
        lVar30 = 0;
LAB_143c0bca9:
        uVar29 = *(ushort *)((longlong)ppppppwVar18 + lVar30);
        uVar32 = *(ushort *)((longlong)pppppppwVar33 + lVar30);
        if (uVar29 == uVar32) {
          iVar20 = 0;
          if ((uVar29 == 0) || (uVar19 == 1)) goto LAB_143c0bd09;
LAB_143c0bcc6:
          uVar19 = uVar19 - 1;
          lVar30 = lVar30 + 2;
          goto LAB_143c0bca9;
        }
        if ((uVar32 | uVar29) < 0x80) {
          if ((&DAT_149e05da0)[uVar29] != (&DAT_149e05da0)[(uint)uVar32]) {
            iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar29] -
                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar32];
            goto LAB_143c0bd09;
          }
          if (uVar19 == 1) {
            iVar20 = 0;
            goto LAB_143c0bd09;
          }
          goto LAB_143c0bcc6;
        }
        iVar20 = (uint)uVar29 - (uint)uVar32;
LAB_143c0bd09:
        uVar31 = (ulonglong)(iVar20 == 0);
      }
      if (local_188 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
      FUN_1401ae99a(pppppppwVar34);
      if ((char)uVar31 != '\0') {
        FUN_1400b22c2(&local_220,L"/Disabled");
        iVar16 = local_214;
        iVar20 = local_218;
        if (local_218 < 2) {
          local_188 = (wchar_t *******)0x0;
          uVar12 = *(uint *)(pppppppwVar34 + 1);
          ppppppwVar18 = *pppppppwVar34;
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
          if ((longlong)(int)uVar12 == 0) {
            uStack_180 = (ulonglong)uVar12;
          }
          else {
            FUN_1446dd670(&local_188,uVar12,0);
            memcpy(local_188,ppppppwVar18,(longlong)(int)uVar12 * 2);
          }
        }
        else {
          iVar35 = *(int *)(pppppppwVar34 + 1) + -1;
          if (*(int *)(pppppppwVar34 + 1) == 0) {
            iVar35 = 0;
          }
          local_188 = local_220;
          local_220 = (wchar_t *******)0x0;
          uStack_180 = CONCAT44(local_214,local_218);
          local_218 = 0;
          local_214 = 0;
          iVar3 = iVar20 + iVar35;
          if (iVar3 < iVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar35);
          }
          if (iVar16 < iVar3) {
            FUN_1446f8c06(&local_188);
          }
          FUN_1400020e8(&local_188,*pppppppwVar34,iVar35);
        }
        if (&local_188 != (wchar_t ********)pppppppwVar34) {
          if (*pppppppwVar34 != (wchar_t ******)0x0) {
            FUN_1400020a8();
          }
          *pppppppwVar34 = (wchar_t ******)local_188;
          local_188 = (wchar_t *******)0x0;
          *(int *)(pppppppwVar34 + 1) = (int)uStack_180;
          *(undefined4 *)((longlong)pppppppwVar34 + 0xc) = uStack_180._4_4_;
          uStack_180 = 0;
        }
        if (local_188 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
        if (local_220 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_145a3c032(local_288 + lVar25);
      FUN_140e4328c(local_288 + lVar25);
      uVar19 = uStack_2b0;
      puVar36 = &DAT_149dfb77a;
      if (*(int *)(local_288 + 8 + lVar25) != 0) {
        puVar36 = *(undefined2 **)(local_288 + lVar25);
      }
      lVar30 = (longlong)(int)uStack_2b0;
      uVar12 = (int)uStack_2b0 + 1;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar12);
      if (uStack_2b0._4_4_ < uVar12) {
        FUN_1414d5cb2(&local_2b8,uVar19 & 0xffffffff);
      }
      *(undefined2 **)(local_2b8 + lVar30 * 8) = puVar36;
      plVar13 = (longlong *)FUN_140e92164();
      local_188 = *(wchar_t ********)(local_288 + lVar25);
      iVar20 = *(int *)(local_288 + 8 + lVar25);
      iVar16 = iVar20 + -1;
      if (iVar20 == 0) {
        iVar16 = 0;
      }
      uStack_180 = CONCAT44(uStack_180._4_4_,iVar16);
      local_178 = L"sl.interposer.dll";
      local_170 = 0x11;
      FUN_140bee87a(&local_220,&local_188,2);
      (**(code **)(*plVar13 + 0x78))(plVar13);
      if (local_220 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
      if ((char)local_31c != '\0') {
        plVar13 = (longlong *)FUN_140e92164();
        local_188 = *(wchar_t ********)(local_288 + lVar25);
        iVar20 = *(int *)(local_288 + 8 + lVar25);
        iVar16 = iVar20 + -1;
        if (iVar20 == 0) {
          iVar16 = 0;
        }
        uStack_180 = CONCAT44(uStack_180._4_4_,iVar16);
        local_178 = L"nvngx_dlss.dll";
        local_170 = 0xe;
        FUN_140bee87a(&local_220,&local_188,2);
        (**(code **)(*plVar13 + 0x78))(plVar13);
        if (local_220 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)uStack_280);
  }
  memset(&local_f0,0,0x90);
  local_cc = 1;
  local_188 = (wchar_t *******)0x0;
  uStack_180 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_328 = (undefined8 *)0x0;
  cVar7 = FUN_14063337c(&DAT_14c846b20,L"slloglevel=",&local_188,1);
  if (cVar7 != '\0') {
    pppppppwVar33 = local_188;
    if ((int)uStack_180 == 0) {
      pppppppwVar33 = (wchar_t *******)&DAT_149dfb77a;
    }
    lVar21 = 0;
    while( true ) {
      uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
      uVar19 = (ulonglong)uVar29;
      uVar32 = *(ushort *)((longlong)&DAT_149e25dfc + lVar21);
      if (uVar29 != uVar32) break;
      if (uVar29 == 0) goto LAB_143c0c215;
LAB_143c0c0e3:
      lVar21 = lVar21 + 2;
    }
    if ((uVar32 | uVar29) < 0x80) {
      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      uVar31 = (ulonglong)uVar32;
      uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c0e3;
    }
    if (uVar29 != uVar32) {
      lVar21 = 0;
      goto LAB_143c0c11c;
    }
LAB_143c0c215:
    local_cc = 0;
  }
  goto LAB_143c0c220;
LAB_143c0c11c:
  uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
  uVar19 = (ulonglong)uVar29;
  uVar32 = *(ushort *)((longlong)&DAT_149e0209e + lVar21);
  if (uVar29 == uVar32) {
    if (uVar29 == 0) goto LAB_143c0c4eb;
LAB_143c0c135:
    lVar21 = lVar21 + 2;
    goto LAB_143c0c11c;
  }
  if ((uVar32 | uVar29) < 0x80) {
    uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar31 = (ulonglong)uVar32;
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c135;
  }
  if (uVar29 != uVar32) {
    lVar21 = 0;
    goto LAB_143c0c16e;
  }
LAB_143c0c4eb:
  local_cc = 1;
  goto LAB_143c0c220;
LAB_143c0c16e:
  uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
  uVar19 = (ulonglong)uVar29;
  uVar32 = *(ushort *)((longlong)&DAT_149e01eac + lVar21);
  if (uVar29 == uVar32) {
    if (uVar29 == 0) goto LAB_143c0c4fb;
LAB_143c0c187:
    lVar21 = lVar21 + 2;
    goto LAB_143c0c16e;
  }
  if ((uVar32 | uVar29) < 0x80) {
    uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar31 = (ulonglong)uVar32;
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c187;
  }
  if (uVar29 != uVar32) {
    lVar21 = 0;
    goto LAB_143c0c1c0;
  }
LAB_143c0c4fb:
  local_cc = 2;
  goto LAB_143c0c220;
LAB_143c0c2d0:
  uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
  uVar19 = (ulonglong)uVar29;
  uVar32 = *(ushort *)((longlong)&DAT_149e0209e + lVar21);
  if (uVar29 == uVar32) {
    if (uVar29 == 0) goto LAB_143c0c310;
LAB_143c0c2e5:
    lVar21 = lVar21 + 2;
    goto LAB_143c0c2d0;
  }
  if ((uVar32 | uVar29) < 0x80) {
    uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar31 = (ulonglong)uVar32;
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c2e5;
  }
  if (uVar29 != uVar32) goto LAB_143c0c31d;
LAB_143c0c310:
  local_d0 = 1;
  goto LAB_143c0c31d;
LAB_143c0c1c0:
  uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
  uVar19 = (ulonglong)uVar29;
  uVar32 = *(ushort *)((longlong)&DAT_149e01ea4 + lVar21);
  if (uVar29 == uVar32) {
    if (uVar29 == 0) goto LAB_143c0c201;
LAB_143c0c1d5:
    lVar21 = lVar21 + 2;
    goto LAB_143c0c1c0;
  }
  if ((uVar32 | uVar29) < 0x80) {
    uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar31 = (ulonglong)uVar32;
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c1d5;
  }
  if (uVar29 != uVar32) goto LAB_143c0c220;
LAB_143c0c201:
  local_cc = 2;
  DAT_14cb526d8 = 1;
LAB_143c0c220:
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_328 = (undefined8 *)0x0;
  cVar7 = FUN_14063337c(&DAT_14c846b20,L"sllogconsole=",&local_188,1);
  if (cVar7 != '\0') {
    pppppppwVar33 = (wchar_t *******)&DAT_149dfb77a;
    if ((int)uStack_180 != 0) {
      pppppppwVar33 = local_188;
    }
    lVar21 = 0;
    while( true ) {
      uVar29 = *(ushort *)((longlong)pppppppwVar33 + lVar21);
      uVar19 = (ulonglong)uVar29;
      uVar32 = *(ushort *)((longlong)&DAT_149e25dfc + lVar21);
      if (uVar29 != uVar32) break;
      if (uVar29 == 0) goto LAB_143c0c314;
LAB_143c0c29b:
      lVar21 = lVar21 + 2;
    }
    if ((uVar32 | uVar29) < 0x80) {
      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      uVar31 = (ulonglong)uVar32;
      uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar31]) goto LAB_143c0c29b;
    }
    if (uVar29 != uVar32) {
      lVar21 = 0;
      goto LAB_143c0c2d0;
    }
LAB_143c0c314:
    local_d0 = 0;
  }
LAB_143c0c31d:
  if (local_188 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  local_c8 = local_2b8;
  local_c0 = (int)uStack_2b0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = FUN_143c0d248;
  local_98 = 5;
  local_80 = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  uVar4 = DAT_14c868708[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_140002266(&local_2c8,L"%u.%u",*DAT_14c868708,uVar4);
  pwVar22 = local_2c8;
  if (local_2c0 == 0) {
    pwVar22 = L"";
  }
  local_108 = (wchar_t *******)0x0;
  if (pwVar22 == (wchar_t *)0x0) {
    local_100 = (wchar_t *******)0x0;
    local_f8 = 0;
  }
  else {
    sVar14 = wcslen(pwVar22);
    local_230 = (wchar_t *******)((ulonglong)local_230 & 0xffffffff00000000);
    local_220 = (wchar_t *******)CONCAT44(local_220._4_4_,0x7fffffff);
    uVar19 = sVar14 & 0xffffffff;
    pwVar27 = pwVar22;
    do {
      iVar20 = (int)uVar19;
      if (iVar20 < 1) {
LAB_143c0c616:
        local_f8 = (int)local_230;
        uVar12 = (int)local_230 + 1;
        if (uVar12 < 0x81) goto LAB_143c0c636;
        FUN_1446efa72(&local_108,0,uVar12,1);
        pppppppwVar33 = local_108;
        goto LAB_143c0c638;
      }
      wVar5 = *pwVar27;
      uVar12 = (uint)(ushort)wVar5;
      pwVar6 = pwVar27 + 1;
      uVar19 = (ulonglong)(iVar20 - 1);
      if ((wVar5 & 0xfc00U) == 0xd800) {
        if (iVar20 == 1) {
          cVar7 = FUN_140024707(uVar12,&local_230,&local_220);
          if (cVar7 != '\0') goto LAB_143c0c616;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar5 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar19 = (ulonglong)(iVar20 - 2);
          pwVar6 = pwVar27 + 2;
        }
      }
      pwVar27 = pwVar6;
      cVar7 = FUN_140024707(uVar12,&local_230,&local_220);
    } while (cVar7 != '\0');
    local_f8 = -1;
    uVar12 = 0;
LAB_143c0c636:
    pppppppwVar33 = (wchar_t *******)0x0;
LAB_143c0c638:
    local_220 = (wchar_t *******)&local_188;
    if (pppppppwVar33 != (wchar_t *******)0x0) {
      local_220 = pppppppwVar33;
    }
    iVar20 = (int)sVar14 + 1;
    local_230 = (wchar_t *******)CONCAT44(local_230._4_4_,uVar12);
    local_100 = local_220;
    do {
      if (iVar20 < 1) break;
      wVar5 = *pwVar22;
      uVar12 = (uint)(ushort)wVar5;
      pwVar27 = pwVar22 + 1;
      iVar16 = iVar20 + -1;
      if ((wVar5 & 0xfc00U) == 0xd800) {
        if (iVar20 == 1) {
          FUN_1400247af(uVar12,&local_220,&local_230);
          break;
        }
        if (((ushort)*pwVar27 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar5 * 0x400 + (uint)(ushort)*pwVar27 + 0xfca02400;
          pwVar27 = pwVar22 + 2;
          iVar16 = iVar20 + -2;
        }
      }
      iVar20 = iVar16;
      pwVar22 = pwVar27;
      cVar7 = FUN_1400247af(uVar12,&local_220,&local_230);
    } while (cVar7 != '\0');
  }
  local_78 = local_100;
  FUN_140056680(&local_2d8,&DAT_149e25dfc);
  local_328 = &DAT_14c872af8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectID",
                &local_2d8);
  pwVar22 = local_2d8;
  if (local_2d0 == 0) {
    pwVar22 = L"";
  }
  local_1a0 = (wchar_t *******)0x0;
  if (pwVar22 == (wchar_t *)0x0) {
    local_198 = (wchar_t *******)0x0;
    local_190 = 0;
  }
  else {
    sVar14 = wcslen(pwVar22);
    local_240 = (wchar_t ******)((ulonglong)local_240 & 0xffffffff00000000);
    local_230 = (wchar_t *******)CONCAT44(local_230._4_4_,0x7fffffff);
    uVar19 = sVar14 & 0xffffffff;
    pwVar27 = pwVar22;
    do {
      iVar20 = (int)uVar19;
      if (iVar20 < 1) {
LAB_143c0c85f:
        local_190 = (int)local_240;
        uVar12 = (int)local_240 + 1;
        if (uVar12 < 0x81) goto LAB_143c0c87f;
        FUN_1446efa72(&local_1a0,0,uVar12,1);
        local_230 = local_1a0;
        goto LAB_143c0c881;
      }
      wVar5 = *pwVar27;
      uVar12 = (uint)(ushort)wVar5;
      pwVar6 = pwVar27 + 1;
      uVar19 = (ulonglong)(iVar20 - 1);
      if ((wVar5 & 0xfc00U) == 0xd800) {
        if (iVar20 == 1) {
          cVar7 = FUN_140024707(uVar12,&local_240,&local_230);
          if (cVar7 != '\0') goto LAB_143c0c85f;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar5 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar19 = (ulonglong)(iVar20 - 2);
          pwVar6 = pwVar27 + 2;
        }
      }
      pwVar27 = pwVar6;
      cVar7 = FUN_140024707(uVar12,&local_240,&local_230);
    } while (cVar7 != '\0');
    local_190 = -1;
    uVar12 = 0;
LAB_143c0c87f:
    local_230 = (wchar_t *******)0x0;
LAB_143c0c881:
    if (local_230 == (wchar_t *******)0x0) {
      local_230 = (wchar_t *******)&local_220;
    }
    iVar20 = (int)sVar14 + 1;
    local_240 = (wchar_t ******)CONCAT44(local_240._4_4_,uVar12);
    local_198 = local_230;
    do {
      if (iVar20 < 1) break;
      wVar5 = *pwVar22;
      uVar12 = (uint)(ushort)wVar5;
      pwVar27 = pwVar22 + 1;
      iVar16 = iVar20 + -1;
      if ((wVar5 & 0xfc00U) == 0xd800) {
        if (iVar20 == 1) {
          FUN_1400247af(uVar12,&local_230,&local_240);
          break;
        }
        if (((ushort)*pwVar27 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar5 * 0x400 + (uint)(ushort)*pwVar27 + 0xfca02400;
          pwVar27 = pwVar22 + 2;
          iVar16 = iVar20 + -2;
        }
      }
      iVar20 = iVar16;
      pwVar22 = pwVar27;
      cVar7 = FUN_1400247af(uVar12,&local_230,&local_240);
    } while (cVar7 != '\0');
  }
  local_230 = (wchar_t *******)((ulonglong)local_230 & 0xffffffff00000000);
  local_328 = &DAT_14c872ce8;
  local_70 = local_198;
  FUN_1414d73b6(DAT_14c872ce0,L"/Script/StreamlineRHI.StreamlineSettings",L"NVIDIANGXApplicationId")
  ;
  if ((char)local_31c == '\0') {
    local_84 = (int)local_230;
  }
  else {
    local_240 = (wchar_t ******)((ulonglong)local_240 & 0xffffffff00000000);
    local_328 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"/Script/DLSS.DLSSSettings",L"NVIDIANGXApplicationId",&local_240);
    local_84 = (int)local_230;
    if ((int)local_230 == 0) {
      local_84 = (int)local_240;
    }
    if ((int)local_240 == (int)local_230) {
      local_84 = (int)local_230;
    }
    if ((int)local_240 == 0) {
      local_84 = (int)local_230;
    }
  }
  local_2e8 = (void *)0x0;
  local_2e0 = 4;
  FUN_143c0e7b6(&local_2e8);
  pvVar23 = local_2e8;
  memcpy(local_2e8,&DAT_14afc3898,0xc0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
    pvVar23 = local_2e8;
  }
  plVar13 = DAT_14c8407a8;
  lVar21 = (longlong)local_2e0;
  if (lVar21 == 0) {
    pvVar24 = pvVar23;
    iVar20 = 0;
  }
  else {
    lVar25 = 0;
    do {
      FUN_140056680(&local_230,*(undefined8 *)((longlong)pvVar23 + lVar25 + 0x20));
      FUN_140002266(&local_240,
                    L"Determines whether feature %s is loaded. This can be useful to resolve conflicts where multiple SL features are incompatible with each other.\n"
                    ,*(undefined8 *)((longlong)pvVar23 + lVar25 + 0x10));
      ppppppwVar18 = (wchar_t ******)&DAT_149dfb77a;
      if (local_238 != 0) {
        ppppppwVar18 = local_240;
      }
      pppppppwVar33 = (wchar_t *******)&DAT_149dfb77a;
      if (local_228 != 0) {
        pppppppwVar33 = local_230;
      }
      local_328 = (undefined8 *)CONCAT44(local_328._4_4_,0x24);
      (**(code **)(*plVar13 + 0x20))
                (plVar13,pppppppwVar33,*(undefined1 *)((longlong)pvVar23 + lVar25 + 0x28),
                 ppppppwVar18);
      if (local_240 != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      if (local_230 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
      lVar25 = lVar25 + 0x30;
      pvVar24 = local_2e8;
      iVar20 = local_2e0;
    } while (lVar21 * 0x30 != lVar25);
  }
  uStack_2f0._0_4_ = 0;
  local_2f8 = (void *)0x0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  if (iVar20 != 0) {
    lVar21 = 0;
    do {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1))
      {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
      local_240 = *(wchar_t *******)((longlong)pvVar24 + lVar21 + 8);
      if (local_240 == (wchar_t ******)0x0) {
        local_238 = 0;
      }
      else {
        sVar14 = wcslen((wchar_t *)local_240);
        local_238 = (int)sVar14;
      }
      (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_230,&local_240);
      if ((local_230 != (wchar_t *******)0x0) &&
         ((cVar7 = (*(code *)(*local_230)[9])(), cVar7 != '\0' ||
          (cVar7 = (*(code *)(*local_230)[10])(local_230,0), cVar7 != '\0')))) {
        cVar7 = *(char *)((longlong)pvVar24 + lVar21 + 0x28);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar13 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))
                            (DAT_14c8407a8,*(undefined8 *)((longlong)pvVar24 + lVar21 + 0x20),1);
        if (plVar13 != (longlong *)0x0) {
          FUN_140056680(&local_250);
          lVar25 = (longlong)(int)uStack_310;
          uVar12 = (int)uStack_310 + 1;
          uStack_310 = CONCAT44(uStack_310._4_4_,uVar12);
          if (uStack_310._4_4_ < uVar12) {
            FUN_1447a1bd6(&local_318);
          }
          lVar25 = lVar25 * 0x10;
          *(undefined8 *)(local_318 + lVar25) = 0;
          *(undefined2 **)(local_318 + lVar25) = local_250;
          *(int *)(local_318 + 8 + lVar25) = (int)local_248;
          *(undefined4 *)(local_318 + 0xc + lVar25) = local_248._4_4_;
          local_248 = 0;
          local_250 = (undefined2 *)0x0;
          cVar7 = (**(code **)(*plVar13 + 0xa8))(plVar13);
        }
        FUN_140002266(&local_250,L"sl%s",*(undefined8 *)((longlong)pvVar24 + lVar21 + 0x18));
        FUN_140002266(&local_260,L"slno%s",*(undefined8 *)((longlong)pvVar24 + lVar21 + 0x18));
        FUN_140002266(&local_270,L"-sl{no}%s",*(undefined8 *)((longlong)pvVar24 + lVar21 + 0x18));
        lVar25 = (longlong)(int)uStack_300;
        uVar12 = (int)uStack_300 + 1;
        uStack_300 = CONCAT44(uStack_300._4_4_,uVar12);
        if (uStack_300._4_4_ < uVar12) {
          FUN_1447a1bd6(&local_308);
        }
        lVar25 = lVar25 * 0x10;
        *(undefined8 *)(local_308 + lVar25) = 0;
        *(undefined8 *)(local_308 + lVar25) = local_270;
        *(undefined4 *)(local_308 + 8 + lVar25) = (undefined4)local_268;
        *(undefined4 *)(local_308 + 0xc + lVar25) = local_268._4_4_;
        local_268 = 0;
        local_270 = 0;
        puVar36 = &DAT_149dfb77a;
        if ((int)local_248 != 0) {
          puVar36 = local_250;
        }
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar10 = FUN_14054d46e(&DAT_14c846b20,puVar36);
        if (cVar10 == '\0') {
          puVar36 = &DAT_149dfb77a;
          if (local_258 != 0) {
            puVar36 = (undefined2 *)CONCAT71(uStack_25f,local_260);
          }
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar10 = FUN_14054d46e(&DAT_14c846b20,puVar36);
          if ((cVar10 == '\0') && (cVar7 != '\0')) goto LAB_143c0cdf4;
        }
        else {
LAB_143c0cdf4:
          uVar19 = uStack_2f0;
          lVar25 = (longlong)(int)uStack_2f0;
          uVar12 = (int)uStack_2f0 + 1;
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar12);
          if (uStack_2f0._4_4_ < uVar12) {
            FUN_1447808da(&local_2f8,uVar19 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_2f8 + lVar25 * 4) =
               *(undefined4 *)((longlong)pvVar24 + lVar21);
        }
        if (CONCAT71(uStack_25f,local_260) != 0) {
          FUN_1400020a8();
        }
        if (local_250 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar13 = (longlong *)CONCAT44(uStack_224,local_228);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      lVar21 = lVar21 + 0x30;
    } while ((longlong)iVar20 * 0x30 != lVar21);
  }
  local_240 = (wchar_t ******)CONCAT71(local_240._1_7_,1);
  local_250 = (undefined2 *)CONCAT71(local_250._1_7_,1);
  local_328 = &DAT_14c872ce8;
  local_90 = local_2f8;
  local_88 = (int)uStack_2f0;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/StreamlineRHI.StreamlineSettings",L"bEnableStreamlineD3D11")
  ;
  local_328 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/StreamlineRHI.StreamlineSettings",L"bEnableStreamlineD3D12",
                &local_250);
  uVar15 = (**(code **)(*DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_230,uVar15);
  if ((char)local_250 == '\0') {
LAB_143c0cfab:
    if ((char)local_240 != '\x01') goto LAB_143c0d085;
    iVar20 = (**(code **)(*DAT_14ca83900 + 0x28))();
    uVar11 = 0;
    if (iVar20 != 2) goto LAB_143c0d085;
  }
  else {
    iVar20 = (**(code **)(*DAT_14ca83900 + 0x28))();
    uVar11 = 1;
    if (iVar20 != 3) goto LAB_143c0cfab;
  }
  local_260 = '\x01';
  local_328 = &DAT_14c872ce8;
  local_68 = uVar11;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/StreamlineRHI.StreamlineSettings",L"bAllowOTAUpdate",
                &local_260);
  pvVar23 = local_2f8;
  if (local_260 == '\x01') {
    local_98 = local_98 | 0x48;
  }
  iVar20 = (int)uStack_2f0;
  lVar21 = (longlong)(int)uStack_2f0;
  DAT_14cb527c0 = (int)uStack_2f0;
  if ((int)uStack_2f0 == 0 && DAT_14cb527c4 == 0) {
    DAT_14cb527c4 = 0;
  }
  else {
    FUN_1447bda9e(&DAT_14cb527b8,uStack_2f0 & 0xffffffff);
    if (iVar20 != 0) {
      memcpy(DAT_14cb527b8,pvVar23,lVar21 << 2);
    }
  }
  iVar20 = (*DAT_14cb526f8)(&local_f0,0x20007001efedc);
  DAT_14cb527d0 = iVar20 == 0;
LAB_143c0d085:
  if (local_230 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_318,uStack_310 & 0xffffffff);
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_308,uStack_300 & 0xffffffff);
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a0 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_290 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar2 = (int *)((longlong)local_290 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_290 + 0x10))(local_290);
      }
    }
  }
  FUN_1447a1747(local_288,uStack_280 & 0xffffffff);
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c0d248 FUN_143c0d248 body=362 status=ok
// SIG undefined FUN_143c0d248(void)

void FUN_143c0d248(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  longlong local_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_30 = 0;
  if (param_2 == (char *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_130,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_150,local_28);
  FUN_140ded26a(&local_150);
  local_140 = local_150;
  uStack_138 = uStack_148;
  local_150 = 0;
  uStack_148 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_160 = 0xffffffff;
  local_168 = 0;
  iVar1 = FUN_1447ee042(&local_140,L"[operator ()] \'kFeatureDLSS_G\' is missing",0x29,1);
  if (iVar1 == -1) {
    local_160 = 0xffffffff;
    local_168 = 0;
    iVar1 = FUN_1447ee042(&local_140,L"[streamline][error]commoninterface.h",0x24,1);
    if (iVar1 != -1) {
      local_160 = 0xffffffff;
      local_168 = 0;
      FUN_1447ee042(&local_140,L"same frame is NOT allowed!",0x1a,1);
    }
  }
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0d3b4 FUN_143c0d3b4 body=5005 status=ok
// SIG undefined FUN_143c0d3b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0d3b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *hMem;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar13;
  INT_PTR IVar14;
  HLOCAL hMem_00;
  HMODULE pHVar15;
  INT_PTR IVar16;
  HLOCAL hMem_01;
  INT_PTR IVar17;
  INT_PTR IVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_2e8 [32];
  wchar_t **local_2c8;
  longlong lStack_2c0;
  void **local_2b8;
  int *local_2b0;
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined2 *local_288;
  int local_280;
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  int local_260;
  undefined8 local_258;
  char *local_250;
  wchar_t *local_248;
  ulonglong local_240;
  undefined8 uStack_238;
  undefined8 *local_230;
  longlong *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  wchar_t **local_1d8;
  longlong local_1d0;
  undefined2 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  longlong local_1b0 [2];
  int local_19c;
  void *local_198;
  uint local_18c;
  undefined8 local_188;
  undefined8 local_180;
  int local_174;
  undefined8 local_170;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  wchar_t *local_158;
  undefined8 local_150;
  uint local_148 [4];
  wchar_t *local_138;
  longlong *plStack_130;
  wchar_t *local_128;
  undefined4 local_120;
  undefined2 *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_60;
  size_t sVar12;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar11 = (longlong *)
            (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if ((plVar11 != (longlong *)0x0) &&
     (cVar7 = (**(code **)(*plVar11 + 0xa8))(plVar11), cVar7 == '\0')) goto LAB_143c0d795;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,L"slno");
  if (cVar7 != '\0') goto LAB_143c0d795;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_143c0d54c;
LAB_143c0d49c:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    local_278 = L"StreamlineCore";
    local_270 = 0xe;
    (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_138);
    (**(code **)(*(longlong *)local_138 + 0x20))(local_138,&local_268);
    plVar11 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_130 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_138 = local_268;
    if (local_260 == 0) {
      local_138 = L"";
    }
    if (local_138 == (wchar_t *)0x0) {
      uVar8 = 0;
    }
    else {
      sVar12 = wcslen(local_138);
      uVar8 = (undefined4)sVar12;
    }
    plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,uVar8);
    local_128 = L"Binaries/ThirdParty/Win64";
    local_120 = 0x19;
    local_118 = &DAT_149dfb77a;
    local_110 = 0;
    FUN_140bee87a(&local_228,&local_138,3);
    if ((longlong **)(param_1 + 8) == &local_228) {
      if (local_228 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_1 + 8) = local_228;
      local_228 = (longlong *)0x0;
      *(int *)(param_1 + 0x10) = (int)uStack_220;
      *(uint *)(param_1 + 0x14) = uStack_220._4_4_;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      local_138 = L"";
LAB_143c0d647:
      sVar12 = wcslen(local_138);
      uVar8 = (undefined4)sVar12;
    }
    else {
      local_138 = *(wchar_t **)(param_1 + 8);
      if (local_138 != (wchar_t *)0x0) goto LAB_143c0d647;
      uVar8 = 0;
    }
    plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,uVar8);
    local_128 = L"sl.interposer.dll";
    local_120 = 0x11;
    FUN_140bee87a(&local_288,&local_138,2);
    puVar20 = local_288;
    if (DAT_14cb526f4 == 0) {
      local_168 = (undefined2 *)0x0;
      lVar23 = (longlong)local_280;
      local_160 = local_280;
      if (lVar23 == 0) {
        local_15c = 0;
      }
      else {
        FUN_1446dd670(&local_168,local_280,0);
        memcpy(local_168,puVar20,lVar23 * 2);
      }
      FUN_1401aea18(local_1b0);
      if (local_1b0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_145a3c032(&local_168);
      puVar20 = &DAT_149dfb77a;
      if (local_160 != 0) {
        puVar20 = local_168;
      }
      local_1d0 = 0x20;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1c8 = puVar20;
      if (DAT_14cb52828 == (FARPROC)0x0) {
        bVar26 = false;
        pHVar15 = LoadLibraryExW(L"wintrust.dll",(HANDLE)0x0,0x800);
        if (pHVar15 != (HMODULE)0x0) {
          if ((DAT_14cb52828 != (FARPROC)0x0) ||
             (DAT_14cb52828 = GetProcAddress(pHVar15,"WinVerifyTrust"),
             DAT_14cb52828 != (FARPROC)0x0)) goto LAB_143c0db9f;
          bVar26 = false;
        }
      }
      else {
LAB_143c0db9f:
        local_148[0] = 0xaac56b;
        local_148[1] = 0x11d0cd44;
        local_148[2] = 0xc000c28c;
        local_148[3] = 0xee95c24f;
        uStack_1e0 = 0;
        local_228 = (longlong *)&DAT_00000058;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 2;
        local_208 = 1;
        local_1f8 = 1;
        uStack_1f0 = 0;
        local_1e8 = 0;
        plStack_200 = &local_1d0;
        local_1d8 = &local_248;
        uStack_238 = 0;
        local_248 = (wchar_t *)&DAT_00000020;
        local_240 = 3;
        local_230 = &local_258;
        local_258 = 0x200000010;
        local_250 = s_1_3_6_1_4_1_311_72_1_1_14c7631f0;
        bVar26 = false;
        IVar14 = (*DAT_14cb52828)(0);
        if ((int)IVar14 != 0) goto LAB_143c0e0fe;
        if (*(int *)((longlong)local_1d8 + 0xc) == 1) {
          local_180 = 0;
          local_188 = 0;
          if (DAT_14cb527d8 == (FARPROC)0x0) {
            bVar26 = false;
            pHVar15 = LoadLibraryExW(L"crypt32.dll",(HANDLE)0x0,0x800);
            if (pHVar15 == (HMODULE)0x0) goto LAB_143c0e0fe;
            if (((((((DAT_14cb527e0 == (FARPROC)0x0) &&
                    (DAT_14cb527e0 = GetProcAddress(pHVar15,"CryptMsgClose"),
                    DAT_14cb527e0 == (FARPROC)0x0)) ||
                   ((DAT_14cb527d8 == (FARPROC)0x0 &&
                    (DAT_14cb527d8 = GetProcAddress(pHVar15,"CertOpenStore"),
                    DAT_14cb527d8 == (FARPROC)0x0)))) ||
                  ((DAT_14cb527e8 == (FARPROC)0x0 &&
                   (DAT_14cb527e8 = GetProcAddress(pHVar15,"CertCloseStore"),
                   DAT_14cb527e8 == (FARPROC)0x0)))) ||
                 (((DAT_14cb527f0 == (FARPROC)0x0 &&
                   (DAT_14cb527f0 = GetProcAddress(pHVar15,"CertFreeCertificateContext"),
                   DAT_14cb527f0 == (FARPROC)0x0)) ||
                  ((((DAT_14cb527f8 == (FARPROC)0x0 &&
                     (DAT_14cb527f8 = GetProcAddress(pHVar15,"CertFindCertificateInStore"),
                     DAT_14cb527f8 == (FARPROC)0x0)) ||
                    ((DAT_14cb52800 == (FARPROC)0x0 &&
                     (DAT_14cb52800 = GetProcAddress(pHVar15,"CryptMsgGetParam"),
                     DAT_14cb52800 == (FARPROC)0x0)))) ||
                   ((DAT_14cb52808 == (FARPROC)0x0 &&
                    (DAT_14cb52808 = GetProcAddress(pHVar15,"CryptMsgUpdate"),
                    DAT_14cb52808 == (FARPROC)0x0)))))))) ||
                ((DAT_14cb52810 == (FARPROC)0x0 &&
                 (DAT_14cb52810 = GetProcAddress(pHVar15,"CryptMsgOpenToDecode"),
                 DAT_14cb52810 == (FARPROC)0x0)))) ||
               (((DAT_14cb52818 == (FARPROC)0x0 &&
                 (DAT_14cb52818 = GetProcAddress(pHVar15,"CryptQueryObject"),
                 DAT_14cb52818 == (FARPROC)0x0)) ||
                ((DAT_14cb52820 == (FARPROC)0x0 &&
                 (DAT_14cb52820 = GetProcAddress(pHVar15,"CryptDecodeObjectEx"),
                 DAT_14cb52820 == (FARPROC)0x0)))))) goto LAB_143c0e0fb;
          }
          local_2a0 = &local_188;
          local_2a8 = &local_180;
          local_2b0 = &local_174;
          local_2b8 = (void **)&local_170;
          lStack_2c0 = (longlong)&local_170 + 4;
          local_298 = 0;
          local_2c8 = (wchar_t **)((ulonglong)local_2c8 & 0xffffffff00000000);
          IVar14 = (*DAT_14cb52818)(1,puVar20,0x400,2);
          if ((int)IVar14 == 0) goto LAB_143c0e0fb;
          bVar26 = false;
          local_2c8 = (wchar_t **)&local_18c;
          IVar14 = (*DAT_14cb52800)(local_188,6,0,0);
          if ((int)IVar14 != 0) {
            hMem_00 = LocalAlloc(0x40,(ulonglong)local_18c);
            if (hMem_00 != (HLOCAL)0x0) {
              local_2c8 = (wchar_t **)&local_18c;
              IVar14 = (*DAT_14cb52800)(local_188,6,0,hMem_00);
              hMem_01 = hMem_00;
              if ((int)IVar14 != 0) {
                uVar9 = *(uint *)((longlong)hMem_00 + 0x78);
                if ((ulonglong)uVar9 != 0) {
                  lVar23 = *(longlong *)((longlong)hMem_00 + 0x80);
                  lVar24 = 0;
                  do {
                    iVar10 = strcmp("1.3.6.1.4.1.311.2.4.1",*(char **)(lVar23 + lVar24));
                    if (iVar10 == 0) {
                      local_2c8 = (wchar_t **)0x0;
                      lStack_2c0 = 0;
                      bVar26 = false;
                      IVar14 = (*DAT_14cb52810)(0x10001,0,0,0);
                      if (IVar14 == 0) goto LAB_143c0e573;
                      puVar4 = *(uint **)(*(longlong *)((longlong)hMem_00 + 0x80) + 0x10 + lVar24);
                      IVar16 = (*DAT_14cb52808)(IVar14,*(undefined8 *)(puVar4 + 2),
                                                (ulonglong)*puVar4,1);
                      if ((int)IVar16 == 0) {
LAB_143c0e515:
                        bVar26 = false;
                      }
                      else {
                        local_18c = 0;
                        bVar26 = false;
                        local_2c8 = (wchar_t **)&local_18c;
                        (*DAT_14cb52800)(IVar14,6,0,0);
                        if ((ulonglong)local_18c != 0) {
                          hMem_01 = LocalAlloc(0x40,(ulonglong)local_18c);
                          if (hMem_01 == (HLOCAL)0x0) goto LAB_143c0e515;
                          bVar26 = false;
                          local_2c8 = (wchar_t **)&local_18c;
                          IVar16 = (*DAT_14cb52800)(IVar14,6,0,hMem_01);
                          if ((int)IVar16 != 0) {
                            puVar5 = *(undefined4 **)
                                      (*(longlong *)((longlong)hMem_00 + 0x80) + 0x10 + lVar24);
                            local_150 = *(undefined8 *)(puVar5 + 2);
                            local_2c8 = &local_158;
                            local_158 = (wchar_t *)CONCAT44(local_158._4_4_,*puVar5);
                            IVar16 = (*DAT_14cb527d8)(5,0x10001,0,0);
                            if (IVar16 == 0) goto LAB_143c0e0f5;
                            memset(&local_138,0,0xd0);
                            local_108 = *(undefined8 *)((longlong)hMem_01 + 8);
                            uStack_100 = *(undefined8 *)((longlong)hMem_01 + 0x10);
                            plStack_130 = *(longlong **)((longlong)hMem_01 + 0x18);
                            local_128 = *(wchar_t **)((longlong)hMem_01 + 0x20);
                            lStack_2c0 = 0;
                            local_2c8 = &local_138;
                            IVar17 = (*DAT_14cb527f8)(IVar16,0x10001,0,0xb0000);
                            if (IVar17 == 0) {
                              LocalFree(hMem_01);
                              (*DAT_14cb527e8)(IVar16,1);
                              goto LAB_143c0e0fb;
                            }
                            bVar26 = false;
                            local_2b8 = &local_198;
                            local_198 = (void *)0x0;
                            local_2b0 = &local_19c;
                            local_19c = 0;
                            lStack_2c0 = 0;
                            local_2c8 = (wchar_t **)CONCAT44(local_2c8._4_4_,0x8000);
                            IVar18 = (*DAT_14cb52820)(0x10001,0x48,
                                                      *(undefined8 *)
                                                       (*(longlong *)(IVar17 + 0x18) + 0x80),
                                                      (ulonglong)
                                                      *(uint *)(*(longlong *)(IVar17 + 0x18) + 0x78)
                                                     );
                            hMem = local_198;
                            if ((int)IVar18 != 0) {
                              if (local_19c == 0x19b) {
                                iVar10 = memcmp(&DAT_14c763050,local_198,0x19b);
                                bVar26 = iVar10 == 0;
                              }
                              else {
                                bVar26 = false;
                              }
                              LocalFree(hMem);
                            }
                            (*DAT_14cb527f0)(IVar17);
                            (*DAT_14cb527e8)(IVar16,1);
                          }
                          LocalFree(hMem_01);
                        }
                      }
                      (*DAT_14cb527e0)(IVar14);
                      goto LAB_143c0e573;
                    }
                    lVar24 = lVar24 + 0x18;
                  } while ((ulonglong)uVar9 * 0x18 != lVar24);
                }
                bVar26 = false;
LAB_143c0e573:
                LocalFree(hMem_00);
                (*DAT_14cb527e0)(local_188);
                (*DAT_14cb527e8)(local_180,1);
                goto LAB_143c0e0fe;
              }
LAB_143c0e0f5:
              LocalFree(hMem_01);
            }
            goto LAB_143c0e0fb;
          }
        }
        else {
LAB_143c0e0fb:
          bVar26 = false;
        }
LAB_143c0e0fe:
        local_1f8 = CONCAT44(local_1f8._4_4_,2);
        (*DAT_14cb52828)(0,local_148);
      }
      if (local_168 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar26) {
        puVar20 = local_288;
        if (local_280 == 0) {
          puVar20 = &DAT_149dfb77a;
        }
        DAT_14cb52780 = FUN_14155261e(puVar20);
        if (DAT_14cb52780 != 0) {
          DAT_14cb526f8 = FUN_14170ce66(DAT_14cb52780,L"slInit");
          _DAT_14cb52700 = FUN_14170ce66(DAT_14cb52780,L"slShutdown");
          DAT_14cb52708 = (code *)FUN_14170ce66(DAT_14cb52780,L"slIsFeatureSupported");
          DAT_14cb52710 = (code *)FUN_14170ce66(DAT_14cb52780,L"slIsFeatureLoaded");
          _DAT_14cb52718 = FUN_14170ce66(DAT_14cb52780,L"slSetFeatureLoaded");
          DAT_14cb52720 = FUN_14170ce66(DAT_14cb52780,L"slEvaluateFeature");
          _DAT_14cb52728 = FUN_14170ce66(DAT_14cb52780,L"slAllocateResources");
          DAT_14cb52730 = FUN_14170ce66(DAT_14cb52780,L"slFreeResources");
          DAT_14cb52738 = FUN_14170ce66(DAT_14cb52780,L"slSetTag");
          DAT_14cb52740 = FUN_14170ce66(DAT_14cb52780,L"slGetFeatureRequirements");
          DAT_14cb52748 = FUN_14170ce66(DAT_14cb52780,L"slGetFeatureVersion");
          _DAT_14cb52750 = FUN_14170ce66(DAT_14cb52780,L"slUpgradeInterface");
          DAT_14cb52758 = FUN_14170ce66(DAT_14cb52780,L"slSetConstants");
          DAT_14cb52760 = FUN_14170ce66(DAT_14cb52780,L"slGetNativeInterface");
          DAT_14cb52768 = FUN_14170ce66(DAT_14cb52780,L"slGetFeatureFunction");
          DAT_14cb52770 = FUN_14170ce66(DAT_14cb52780,L"slGetNewFrameToken");
          DAT_14cb52778 = FUN_14170ce66(DAT_14cb52780,L"slSetD3DDevice");
          DAT_14cb526f4 = 1;
        }
      }
    }
    if (local_288 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_268 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_143c0d49c;
LAB_143c0d54c:
    FUN_14020fad6(param_1 + 8,&DAT_149dfb77a);
  }
  uVar13 = (**(code **)(*(longlong *)DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_1d0,uVar13);
  uVar9 = (**(code **)(*(longlong *)DAT_14ca83900 + 0x28))();
  DAT_14c763048 = ((uVar9 & 0xfffffffe) != 2) * '\x02';
  if ((uVar9 & 0xfffffffe) == 2) {
    pwVar19 = (wchar_t *)0x0;
    if (uVar9 == 3) {
      pwVar19 = L"StreamlineD3D12RHI";
    }
    pwVar21 = L"StreamlineD3D11RHI";
    if (uVar9 != 2) {
      pwVar21 = pwVar19;
    }
    FUN_1446f470e(local_1b0,pwVar21,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar11 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_1b0[0],&local_138,1);
    if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1))
      {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
      local_158 = L"StreamlineCore";
      local_150 = CONCAT44(local_150._4_4_,0xe);
      (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_138);
      (**(code **)(*(longlong *)local_138 + 0x20))(local_138,&local_248);
      plVar1 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_130 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      local_138 = local_248;
      if ((int)local_240 == 0) {
        local_138 = L"";
      }
      uVar8 = 0;
      if (local_138 != (wchar_t *)0x0) {
        sVar12 = wcslen(local_138);
        uVar8 = (undefined4)sVar12;
      }
      plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,uVar8);
      local_128 = L"Binaries/ThirdParty/Win64/";
      local_120 = 0x1a;
      FUN_140bee87a(&local_168,&local_138,2);
      pwVar19 = local_248;
      local_138 = (wchar_t *)0x0;
      local_128 = (wchar_t *)0x0;
      lVar23 = (longlong)(int)local_240;
      plStack_130 = (longlong *)(local_240 & 0xffffffff);
      if (lVar23 != 0) {
        FUN_1446dd670(&local_138,local_240 & 0xffffffff,0);
        memcpy(local_138,pwVar19,lVar23 * 2);
      }
      local_128 = DAT_14ca83900;
      (**(code **)(*plVar11 + 0x40))(plVar11,&local_228);
      plVar11 = DAT_14cb527c8;
      DAT_14cb527c8 = local_228;
      local_228 = (longlong *)0x0;
      if ((plVar11 != (longlong *)0x0) &&
         ((**(code **)*plVar11)(plVar11,1), local_228 != (longlong *)0x0)) {
        (**(code **)*local_228)(local_228,1);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      FUN_1457f751e(&DAT_14c874628,L"RenderDocPlugin",0);
      plVar11 = DAT_14cb527c8;
      lVar23 = DAT_14cb527b8;
      if (((DAT_14cb527c8 == (longlong *)0x0) || (DAT_14cb527d0 != '\x01')) ||
         ((DAT_14cb526f4 & 1) == 0)) {
        DAT_14c763048 = '\x01';
      }
      else {
        DAT_14c763048 = '\0';
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        lVar24 = (longlong)DAT_14cb527c0;
        if (lVar24 != 0) {
          lVar22 = 0;
          do {
            local_148[0] = local_148[0] & 0xffffff00;
            (*DAT_14cb52710)(*(undefined4 *)(lVar23 + lVar22),local_148);
            uVar6 = uStack_220;
            if ((char)local_148[0] == '\x01') {
              lVar25 = (longlong)(int)uStack_220;
              uVar9 = (int)uStack_220 + 1;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar9);
              if (uStack_220._4_4_ < uVar9) {
                FUN_1447808da(&local_228,uVar6 & 0xffffffff);
              }
              *(undefined4 *)((longlong)local_228 + lVar25 * 4) = *(undefined4 *)(lVar23 + lVar22);
            }
            lVar22 = lVar22 + 4;
          } while (lVar24 * 4 != lVar22);
        }
        if ((longlong **)(plVar11 + 5) == &local_228) {
          if (local_228 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (plVar11[5] != 0) {
            FUN_1400020a8();
          }
          plVar11[5] = (longlong)local_228;
          *(int *)(plVar11 + 6) = (int)uStack_220;
          *(uint *)((longlong)plVar11 + 0x34) = uStack_220._4_4_;
        }
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        lVar23 = plVar11[6];
        if ((longlong)(int)lVar23 != 0) {
          lVar24 = plVar11[5];
          lVar22 = 0;
          do {
            uVar8 = *(undefined4 *)(lVar24 + lVar22);
            uVar13 = (**(code **)(*plVar11 + 0x18))(plVar11);
            iVar10 = (*DAT_14cb52708)(uVar8,uVar13);
            uVar6 = uStack_220;
            if (iVar10 == 0) {
              lVar25 = (longlong)(int)uStack_220;
              uVar9 = (int)uStack_220 + 1;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar9);
              if (uStack_220._4_4_ < uVar9) {
                FUN_1447808da(&local_228,uVar6 & 0xffffffff);
              }
              *(undefined4 *)((longlong)local_228 + lVar25 * 4) = *(undefined4 *)(lVar24 + lVar22);
            }
            lVar22 = lVar22 + 4;
          } while ((longlong)(int)lVar23 * 4 != lVar22);
        }
        if ((longlong **)(plVar11 + 7) == &local_228) {
          if (local_228 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (plVar11[7] != 0) {
            FUN_1400020a8();
          }
          plVar11[7] = (longlong)local_228;
          *(int *)(plVar11 + 8) = (int)uStack_220;
          *(uint *)((longlong)plVar11 + 0x44) = uStack_220._4_4_;
        }
      }
      if (local_138 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_168 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_248 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      DAT_14c763048 = '\x01';
    }
  }
  if (local_1d0 != 0) {
    FUN_1400020a8();
  }
LAB_143c0d795:
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c0e742 FUN_143c0e742 body=115 status=ok
// SIG undefined FUN_143c0e742(void)

void FUN_143c0e742(void)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if ((plVar3 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3), cVar2 == '\0'))
  {
    return;
  }
  puVar1 = DAT_14cb527c8;
  if (DAT_14cb527c8 == (undefined8 *)0x0) {
    return;
  }
  DAT_14cb527c8 = (undefined8 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000143c0e7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 143c0e7b6 FUN_143c0e7b6 body=152 status=ok
// SIG undefined FUN_143c0e7b6(void)

void FUN_143c0e7b6(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0xc0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0c];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc0,8);
  }
  iVar2 = (int)(uVar1 / 0x30);
  iVar3 = 0x7fffffff;
  if (3 < iVar2) {
    iVar3 = iVar2;
  }
  FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 143c0e84e FUN_143c0e84e body=414 status=ok
// SIG undefined FUN_143c0e84e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0e84e(void)

{
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &PTR_FUN_14afc26c0;
  local_58 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/StreamlineRHI",&PTR_FUN_14afc26e0,2,0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb526c8,L"r.Streamline.LogFunctions",&DAT_14cb526d8,
                L"Enable/disable whether streamline functions calls and thread are written to the log. Is also set to true with -slloglevel=3 \n"
               );
  atexit(FUN_143c0b35d);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb526e0,L"r.Streamline.LogFunctions.LogLevel",&DAT_14cb526f0,
                L"Determines which functions are logged and noe\n0: Log subset of features, don\'t log Get Functions\n1: Log all features, don\'t log Get functions\n2: Log all features, log Get functions\n"
               );
  atexit(FUN_143c0b3a2);
  local_40 = CONCAT44(local_40._4_4_,0xffffffff);
  local_58._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb52788,L"r.Streamline.MaxNumSwapchainProxies",&local_40,
                L"Determines how many Streamline swapchain proxies can be created. This impacts compatibility with some Streamline features that have restrictions on that\n -1: automatic, depending on enabled Streamline features (default)\n 0: no swap chain proxy. Likely means features needing one won\'t work 1..n: only create a Streamline swapchain proxy for that many swapchains/windows"
               );
  atexit(FUN_143c0b3e7);
  local_40 = CONCAT71(local_40._1_7_,1);
  local_58 = CONCAT44(local_58._4_4_,0x20);
  FUN_140bd5914(&DAT_14cb527a0,L"r.Streamline.FilterRedundantSetOptionsCalls",&local_40,
                L"Determines whether the UE plugin filters redundant calls into\n 0: call every streamline sl{Feature}SetOptions function, regardless of whether UE plugin side changed or not. Helpful for debugging. Can also be override with -sl{no}filter command line option  \n 1: only call sl{Feature}SetOptions when the UE plugin side changed(default)"
               );
  atexit(FUN_143c0b42c);
  DAT_14cb527b8 = 0;
  _DAT_14cb527c0 = 0;
  atexit((_func_5014 *)&LAB_143c0b471);
  DAT_14cb527c8 = 0;
  atexit((_func_5014 *)&LAB_143c0b596);
  local_40 = 0x800000014afc3bbe;
  local_2c = 0xd;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1464a8fee(&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0e9f0 FUN_143c0e9f0 body=618 status=ok
// SIG undefined FUN_143c0e9f0(void)

void FUN_143c0e9f0(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    if (cVar1 == '\0') goto LAB_143c0eb6b;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"slno");
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8442bc) {
      FUN_144b3d300(&DAT_14c8442bc);
      if (DAT_14c8442bc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
    }
    if (((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) &&
       (DAT_14ca83900 != (longlong *)0x0 && DAT_14c8442b8 == '\0')) {
      iVar2 = (**(code **)(*DAT_14ca83900 + 0x28))();
      if (iVar2 == 2) {
        FUN_1446f470e(&local_20,L"StreamlineRHI",1);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c874a20) {
          FUN_144b3d300(&DAT_14c874a20);
          if (DAT_14c874a20 == -1) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
        }
        uVar4 = FUN_1402c9134(&DAT_14c874628,local_20,local_14,1);
        if (DAT_14cb526f4 == 1) {
          FUN_143c0b5b2(uVar4);
          if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
            uVar4 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
            (*DAT_14cb52778)(uVar4);
          }
        }
      }
    }
  }
LAB_143c0eb6b:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0ec5c FUN_143c0ec5c body=75 status=ok
// SIG undefined FUN_143c0ec5c(void)

void FUN_143c0ec5c(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c0ec9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 143c0eca8 FUN_143c0eca8 body=532 status=ok
// SIG undefined FUN_143c0eca8(void)

undefined8 * FUN_143c0eca8(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  char local_168 [8];
  longlong local_160;
  undefined1 local_150 [296];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_143c0b4c2();
  *param_1 = &PTR_FUN_14afc45f0;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
  param_1[9] = plVar2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x677315f;
  *(undefined2 *)((longlong)param_1 + 100) = 0xa746;
  *(undefined2 *)((longlong)param_1 + 0x66) = 0x4492;
  *(undefined1 *)(param_1 + 0xd) = 0x9f;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0x42;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0xcb;
  *(undefined1 *)((longlong)param_1 + 0x6b) = 0x61;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0x42;
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0xc9;
  *(undefined1 *)((longlong)param_1 + 0x6e) = 0xc3;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 0xd4;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x520))(plVar2);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_150);
  param_1[10] = local_28;
  param_1[0xf] = param_1 + 10;
  *(undefined4 *)(param_1 + 0x10) = 8;
  param_1[0x11] = 0;
  if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
    FUN_145cb9a7e(param_1,local_168,param_1 + 0xb);
    if (local_168[0] == '\x01') {
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar3 = &PTR_LAB_14afc4660;
      puVar3[1] = param_1;
      plVar2 = (longlong *)param_1[0x12];
      param_1[0x12] = puVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
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
      lVar4 = param_1[0x12] + 8;
      if (param_1[0x12] == 0) {
        lVar4 = 0;
      }
      FUN_146319cd6(&local_170);
      (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,local_170,lVar4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar1;
    if (local_160 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0eebe FUN_143c0eebe body=95 status=ok
// SIG undefined FUN_143c0eebe(void)

void FUN_143c0eebe(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  iVar2 = *param_2;
  uVar1 = iVar2 + 0xf785ffff;
  if ((7 < uVar1) || (uVar1 == 2)) {
    plVar3 = *(longlong **)(param_1 + 0x48);
    uVar4 = (**(code **)(*plVar3 + 0x510))(plVar3);
    (**(code **)(*plVar3 + 0x580))
              (plVar3,uVar4,iVar2,"Streamline/DLSSG present",
               ".\\../Plugins/Nvidia/StreamlineCore/Source/StreamlineD3D11RHI/Private/StreamlineD3D11RHI.cpp"
               ,0x110);
  }
  return;
}



// FUNCTION 143c0ef1e FUN_143c0ef1e body=111 status=ok
// SIG undefined FUN_143c0ef1e(void)

bool FUN_143c0ef1e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  iVar2 = (*DAT_14cb52760)(param_2,&local_28);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1 != param_2 && iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0ef8e FUN_143c0ef8e body=306 status=ok
// SIG undefined FUN_143c0ef8e(void)

void FUN_143c0ef8e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14afc45f0;
  if (param_1[0x12] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    lVar2 = param_1[0x12] + 8;
    if (param_1[0x12] == 0) {
      lVar2 = 0;
    }
    FUN_146319cd6(&local_28);
    (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_28,lVar2);
    plVar1 = (longlong *)param_1[0x12];
    if (plVar1 != (longlong *)0x0) {
      param_1[0x12] = 0;
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      plVar1 = (longlong *)param_1[0x12];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
    }
  }
  FUN_143c0b542(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0f0c1 FUN_143c0f0c1 body=102 status=ok
// SIG undefined FUN_143c0f0c1(void)

void FUN_143c0f0c1(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afc3596;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a918e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0f128 FUN_143c0f128 body=618 status=ok
// SIG undefined FUN_143c0f128(void)

void FUN_143c0f128(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    if (cVar1 == '\0') goto LAB_143c0f2a3;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"slno");
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8442bc) {
      FUN_144b3d300(&DAT_14c8442bc);
      if (DAT_14c8442bc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
    }
    if (((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) &&
       (DAT_14ca83900 != (longlong *)0x0 && DAT_14c8442b8 == '\0')) {
      iVar2 = (**(code **)(*DAT_14ca83900 + 0x28))();
      if (iVar2 == 3) {
        FUN_1446f470e(&local_20,L"StreamlineRHI",1);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c874a20) {
          FUN_144b3d300(&DAT_14c874a20);
          if (DAT_14c874a20 == -1) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
        }
        uVar4 = FUN_1402c9134(&DAT_14c874628,local_20,local_14,1);
        if (DAT_14cb526f4 == 1) {
          FUN_143c0b5b2(uVar4);
          if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
            uVar4 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
            (*DAT_14cb52778)(uVar4);
          }
        }
      }
    }
  }
LAB_143c0f2a3:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0f394 FUN_143c0f394 body=75 status=ok
// SIG undefined FUN_143c0f394(void)

void FUN_143c0f394(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c0f3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 143c0f3e0 FUN_143c0f3e0 body=1568 status=ok
// SIG undefined FUN_143c0f3e0(void)

void FUN_143c0f3e0(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  int iVar20;
  undefined1 auStack_988 [32];
  undefined4 local_968;
  int local_958;
  int local_954;
  longlong *local_950;
  longlong local_948;
  undefined4 local_940;
  undefined4 local_93c;
  undefined8 local_938;
  undefined8 local_930;
  longlong *local_928;
  longlong local_920;
  undefined1 *local_914;
  undefined4 local_90c;
  undefined8 local_908;
  undefined4 local_900;
  undefined8 local_8fc;
  undefined4 local_8f4;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined8 local_8c0;
  undefined4 local_8b8;
  longlong *local_8a0;
  undefined1 local_5d0 [112];
  undefined1 *local_560;
  undefined8 local_558;
  undefined1 local_550 [448];
  undefined1 *local_390;
  undefined8 local_388;
  undefined1 local_380 [784];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_988;
  local_950 = param_1;
  if ((longlong)(int)param_4[1] != 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x700000000;
    local_390 = (undefined1 *)0x0;
    local_388 = 0x700000000;
    local_560 = (undefined1 *)0x0;
    local_558 = 0x700000000;
    lVar15 = *param_4;
    lVar17 = (longlong)(int)param_4[1] * 0x30;
    lVar16 = 0;
    local_930 = 0;
    local_938 = 0;
    local_948 = lVar17;
    local_940 = param_3;
    local_928 = param_4;
    local_920 = param_2;
    do {
      uVar7 = *(int *)(lVar15 + 0x18 + lVar16) - 1;
      local_93c = 0;
      if (uVar7 < 6) {
        local_93c = *(undefined4 *)(&DAT_14afc4a38 + (ulonglong)uVar7 * 4);
      }
      uVar19 = 9;
      if ((*(longlong *)(lVar15 + lVar16) == 0) ||
         (uVar7 = *(uint *)(*(longlong *)(lVar15 + lVar16) + 8),
         (uVar7 & 0x3fffffff) == 0 || ((byte)(uVar7 >> 0x1e) & 1) != 0)) {
        iVar14 = 0;
        local_958 = 0;
        local_954 = 0;
        iVar20 = 0;
        uVar7 = 0;
        uVar11 = 0;
      }
      else {
        cVar6 = (**(code **)(*local_950 + 0x58))();
        if (cVar6 != '\0') {
          local_930 = *(undefined8 *)(lVar15 + 0x20 + lVar16);
          local_938 = *(undefined8 *)(lVar15 + 0x28 + lVar16);
        }
        uVar11 = (**(code **)(**(longlong **)(lVar15 + lVar16) + 0x20))();
        uVar4 = local_558;
        local_954 = *(int *)(lVar15 + 8 + lVar16);
        iVar20 = *(int *)(lVar15 + 0xc + lVar16);
        local_958 = *(int *)(lVar15 + 0x10 + lVar16);
        iVar14 = *(int *)(lVar15 + 0x14 + lVar16);
        uVar9 = *(uint *)(lVar15 + 0x1c + lVar16);
        uVar7 = uVar9 >> 0xb & 0x10 | uVar9 >> 4 & 0x20 | uVar9 >> 3 & 0x400 | (uVar9 & 0x80) << 4;
        uVar8 = uVar7 + 0x80 + (uVar9 & 0x10) * 4;
        if ((uVar9 & 0x60) == 0) {
          uVar8 = uVar7 + (uVar9 & 0x10) * 4;
        }
        uVar7 = uVar8 | 8;
        if ((uVar9 & 0xc00) == 0) {
          uVar7 = uVar8;
        }
        lVar17 = (longlong)(int)local_558;
        uVar8 = (int)local_558 + 1;
        local_558 = CONCAT44(local_558._4_4_,uVar8);
        if (local_558._4_4_ < uVar8) {
          FUN_1485f6468(local_5d0,uVar4 & 0xffffffff);
        }
        local_958 = local_958 - local_954;
        iVar14 = iVar14 - iVar20;
        uVar7 = (uVar9 & 4) << 7 | uVar9 >> 10 & 4 | uVar7;
        puVar12 = local_560;
        if (local_560 == (undefined1 *)0x0) {
          puVar12 = local_5d0;
        }
        lVar17 = lVar17 * 0x10;
        *(undefined8 *)(puVar12 + lVar17) = *(undefined8 *)(lVar15 + lVar16);
        *(uint *)(puVar12 + lVar17 + 8) = uVar7;
        *(undefined4 *)(puVar12 + lVar17 + 0xc) = 0xffffffff;
        uVar19 = 0;
        lVar17 = local_948;
      }
      uVar4 = local_68;
      lVar18 = (longlong)(int)local_68;
      uVar9 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar9);
      if (local_68._4_4_ < uVar9) {
        FUN_1485f655c(local_380,uVar4 & 0xffffffff);
        lVar17 = local_948;
      }
      uVar4 = local_388;
      puVar12 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar12 = local_380;
      }
      lVar18 = lVar18 * 0x70;
      *(undefined8 *)(puVar12 + lVar18 + 0x10) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18 + 0x10) + 8) = 0;
      *(undefined8 *)(puVar12 + lVar18) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18) + 8) = 0;
      puVar12[lVar18 + 0x20] = uVar19;
      *(undefined4 *)(puVar12 + lVar18 + 0x21) = 0;
      *(undefined4 *)(puVar12 + lVar18 + 0x24) = 0;
      *(undefined8 *)(puVar12 + lVar18 + 0x28) = uVar11;
      *(undefined8 *)(puVar12 + lVar18 + 0x30) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18 + 0x30) + 8) = 0;
      *(uint *)(puVar12 + lVar18 + 0x40) = uVar7;
      *(undefined8 *)(puVar12 + lVar18 + 0x44) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18 + 0x44) + 8) = 0;
      *(undefined8 *)(puVar12 + lVar18 + 0x54) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18 + 0x54) + 8) = 0;
      *(undefined8 *)(puVar12 + lVar18 + 0x60) = 0;
      *(undefined8 *)((longlong)(puVar12 + lVar18 + 0x60) + 8) = 0;
      iVar5 = (int)local_68;
      puVar12 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar12 = local_380;
      }
      lVar18 = (longlong)(int)local_388;
      uVar7 = (int)local_388 + 1;
      local_388 = CONCAT44(local_388._4_4_,uVar7);
      if (local_388._4_4_ < uVar7) {
        FUN_1485f6670(local_550,uVar4 & 0xffffffff);
        lVar17 = local_948;
      }
      lVar3 = local_920;
      puVar13 = local_390;
      if (local_390 == (undefined1 *)0x0) {
        puVar13 = local_550;
      }
      lVar18 = lVar18 * 0x40;
      *(undefined8 *)(puVar13 + lVar18) = 0;
      *(undefined8 *)(puVar13 + lVar18 + 8) = 0x496cb4454c6a5aad;
      *(undefined8 *)(puVar13 + lVar18 + 0x10) = 0x53e65b84f31aff87;
      *(undefined8 *)(puVar13 + lVar18 + 0x18) = 1;
      *(undefined1 **)(puVar13 + lVar18 + 0x20) = puVar12 + (longlong)(iVar5 + -1) * 0x70;
      *(undefined4 *)(puVar13 + lVar18 + 0x28) = local_93c;
      *(undefined4 *)(puVar13 + lVar18 + 0x2c) = 0;
      *(int *)(puVar13 + lVar18 + 0x30) = iVar20;
      *(int *)(puVar13 + lVar18 + 0x34) = local_954;
      *(int *)(puVar13 + lVar18 + 0x38) = local_958;
      *(int *)(puVar13 + lVar18 + 0x3c) = iVar14;
      lVar16 = lVar16 + 0x30;
    } while (lVar17 != lVar16);
    lVar15 = (longlong)(int)local_558;
    puVar12 = local_5d0;
    if (local_560 != (undefined1 *)0x0) {
      puVar12 = local_560;
    }
    if (lVar15 != 0) {
      lVar17 = 0;
      do {
        if (*(longlong *)(puVar12 + lVar17) != 0) {
          local_968 = *(undefined4 *)(puVar12 + lVar17 + 0xc);
          (**(code **)(*(longlong *)local_950[9] + 0x5b0))
                    ((longlong *)local_950[9],lVar3,*(longlong *)(puVar12 + lVar17),
                     *(undefined4 *)(puVar12 + lVar17 + 8));
        }
        lVar17 = lVar17 + 0x10;
      } while (lVar15 * 0x10 != lVar17);
    }
    cVar6 = (**(code **)(*local_950 + 0x58))();
    if (cVar6 != '\0') {
      FUN_140048e76(&local_8d8,*(undefined8 *)(lVar3 + 0x38));
      local_900 = DAT_14c9a52a0;
      local_908 = DAT_14c9a5298;
      local_8fc = DAT_14c9a5298;
      local_8f4 = DAT_14c9a52a0;
      local_8f0 = 0;
      uStack_8ec = 0;
      uStack_8e8 = 1;
      uStack_8e4 = 0;
      local_8e0 = 0x100000000;
      local_914 = &DAT_100000001;
      local_90c = 1;
      (**(code **)(*local_8a0 + 0x228))(local_8a0,local_930);
      FUN_140048db6(&local_8d8);
    }
    uVar2 = local_940;
    if ((longlong)(int)local_928[1] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      lVar15 = 0;
      do {
        if (*(longlong *)(*local_928 + lVar15) != 0) {
          plVar1 = (longlong *)local_950[9];
          uVar10 = (**(code **)(*plVar1 + 0x570))
                             (plVar1,*(longlong *)(*local_928 + lVar15),lVar15,0);
          uVar11 = (**(code **)(*plVar1 + 0x538))(plVar1,lVar3,uVar10);
          break;
        }
        lVar15 = lVar15 + 0x30;
      } while ((longlong)(int)local_928[1] * 0x30 != lVar15);
    }
    puVar12 = local_550;
    if (local_390 != (undefined1 *)0x0) {
      puVar12 = local_390;
    }
    local_8d8 = 0;
    local_8d0 = 0x171b6435;
    uStack_8cc = 0x4fc89b3c;
    uStack_8c8 = 0xe5fb9499;
    uStack_8c4 = 0xa4aa6925;
    local_8c0 = 1;
    local_8b8 = uVar2;
    (*DAT_14cb52738)(&local_8d8,puVar12,local_388 & 0xffffffff,uVar11);
    if (local_560 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_390 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c0fa02 FUN_143c0fa02 body=197 status=ok
// SIG undefined FUN_143c0fa02(void)

void FUN_143c0fa02(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_878 [32];
  char *local_858;
  undefined4 local_850;
  undefined8 *local_848;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined1 local_828 [2056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_878;
  if ((4 < *param_2 + 0xf785fffcU) && (1 < *param_2 + 0xf785ffffU)) {
    FUN_14682f6b8(local_828,0x400);
    plVar2 = *(longlong **)(param_1 + 0x48);
    local_838 = 0;
    uStack_830 = 0;
    iVar1 = *param_2;
    uVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2);
    local_858 = 
    ".\\../Plugins/Nvidia/StreamlineCore/Source/StreamlineD3D12RHI/Private/StreamlineD3D12RHI.cpp";
    local_850 = 0x222;
    local_848 = &local_838;
    (**(code **)(*plVar2 + 0x5c8))(plVar2,uVar3,iVar1,"Streamline/DLSSG present");
  }
  if ((local_20 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0fac8 FUN_143c0fac8 body=111 status=ok
// SIG undefined FUN_143c0fac8(void)

bool FUN_143c0fac8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  iVar2 = (*DAT_14cb52760)(param_2,&local_28);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1 != param_2 && iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0fb38 FUN_143c0fb38 body=102 status=ok
// SIG undefined FUN_143c0fb38(void)

void FUN_143c0fb38(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afc35bc;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a92ae(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c0fba0 FUN_143c0fba0 body=69 status=ok
// SIG undefined FUN_143c0fba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c0fba0(void)

{
  _DAT_14cb52848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c0fbe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52850,1);
  return;
}



// FUNCTION 143c0fbe6 FUN_143c0fbe6 body=3192 status=ok
// SIG undefined FUN_143c0fbe6(void)

void FUN_143c0fbe6(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_80;
  int local_78;
  undefined4 uStack_74;
  ulonglong local_48;
  
  lVar14 = DAT_14cb52858;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar17 + 0xc60);
  if (iVar8 == 0x40000002) {
    uVar13 = 0;
  }
  else {
    bVar18 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        bVar18 = DVar9 == DVar10;
      }
      else {
        bVar18 = false;
      }
    }
    uVar13 = (ulonglong)(bVar18 ^ 1);
  }
  if ((*(char *)(lVar14 + uVar13) != '\x01') || (DAT_14c763048 != '\0')) goto LAB_143c0fc6a;
  iVar8 = FUN_1401433c5();
  bVar18 = true;
  if (iVar8 != 0) {
    iVar8 = FUN_14166e5c4();
    bVar18 = iVar8 == 0;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar6 = FUN_14054d46e(&DAT_14c846b20,L"slviewextension");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,L"slnoviewextension");
  if ((cVar7 == '\0') && ((bVar18 | bVar6) == 1)) {
    local_90 = DAT_14cb527c8;
    FUN_14624865c(&local_80);
    plVar12 = (longlong *)CONCAT44(uStack_74,local_78);
    if (plVar12 == (longlong *)0x0) {
      *(undefined8 **)(param_1 + 8) = local_80;
      plVar16 = *(longlong **)(param_1 + 0x10);
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
LAB_143c0fdb1:
        LOCK();
        plVar12 = plVar16 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
joined_r0x000143c0fda4:
          if (iVar8 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      *(undefined8 **)(param_1 + 8) = local_80;
      plVar16 = *(longlong **)(param_1 + 0x10);
      if (plVar12 == plVar16) {
        LOCK();
        plVar16 = plVar12 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
          plVar16 = plVar12;
          goto joined_r0x000143c0fda4;
        }
      }
      else {
        *(longlong **)(param_1 + 0x10) = plVar12;
        if (plVar16 != (longlong *)0x0) goto LAB_143c0fdb1;
      }
    }
    plVar12 = (longlong *)CONCAT44(uStack_74,local_78);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar12 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar14 = *plVar12;
LAB_143c0fdf2:
          (**(code **)(lVar14 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
    plVar12 = *(longlong **)(param_1 + 0x10);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      plVar16 = plVar12 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar14 = *plVar12;
          goto LAB_143c0fdf2;
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  piVar1 = (int *)(lVar17 + 0xc60);
  local_a0 = L"Reflex";
  local_98 = 6;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_90);
  if ((local_90 != (longlong *)0x0) &&
     ((cVar7 = (**(code **)(*local_90 + 0x48))(), cVar7 != '\0' ||
      (cVar7 = (**(code **)(*local_90 + 0x50))(local_90,0), cVar7 != '\0')))) {
    lVar17 = DAT_14cb52a28;
    iVar8 = *piVar1;
    if (iVar8 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar18 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          bVar18 = DVar9 == DVar10;
        }
        else {
          bVar18 = false;
        }
      }
      uVar13 = (ulonglong)(bVar18 ^ 1);
    }
    if (*(char *)(lVar17 + uVar13) == '\x01') {
      FUN_1401c23cc(&local_a8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1485f6e94(&DAT_14c8337f0,&local_80,local_a8);
      puVar5 = local_80;
      lVar17 = (longlong)local_78;
      if (lVar17 != 0) {
        lVar14 = 0;
        do {
          uVar11 = *(undefined8 *)((longlong)puVar5 + lVar14);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
            FUN_1456d85e6(&DAT_14c8337f0);
            atexit((_func_5014 *)&LAB_142748837);
            _Init_thread_footer(&DAT_14c8338a0);
          }
          (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_a8,uVar11);
          lVar14 = lVar14 + 8;
        } while (lVar17 * 8 != lVar14);
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_1400020a8(local_80);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1))
      {
        FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
        _Init_thread_footer(&DAT_14cb0d2a8);
      }
      uVar11 = DAT_14cb0d2a0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1485f6e94(&DAT_14c8337f0,&local_80,uVar11);
      puVar5 = local_80;
      lVar17 = (longlong)local_78;
      if (lVar17 != 0) {
        lVar14 = 0;
        do {
          uVar4 = *(undefined8 *)((longlong)puVar5 + lVar14);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
            FUN_1456d85e6(&DAT_14c8337f0);
            atexit((_func_5014 *)&LAB_142748837);
            _Init_thread_footer(&DAT_14c8338a0);
          }
          (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,uVar11,uVar4);
          lVar14 = lVar14 + 8;
        } while (lVar17 * 8 != lVar14);
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_1400020a8(local_80);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  lVar14 = FUN_14589669c();
  lVar17 = lVar14 + 8;
  if (lVar14 == 0) {
    lVar17 = 0;
  }
  FUN_14589669c();
  FUN_1401c23cc(&local_a8);
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,local_a8,lVar17);
  cVar7 = FUN_145787e4e();
  if (cVar7 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    lVar14 = FUN_1456d850a();
    lVar17 = lVar14 + 8;
    if (lVar14 == 0) {
      lVar17 = 0;
    }
    FUN_1456d850a();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
      FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
      _Init_thread_footer(&DAT_14cb0d2a8);
    }
    (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,DAT_14cb0d2a0,lVar17);
    plVar16 = DAT_14c968090;
    plVar12 = DAT_14c968088;
    if (DAT_14c968090 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    lVar17 = FUN_1456d850a();
    (**(code **)(*plVar12 + 0x120))(plVar12,lVar17 + 8);
    lVar15 = DAT_14c98e618 + 0x580;
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,2,0x10);
    local_78 = 2;
    *local_80 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar17 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    local_80[2] = lVar14;
    *local_80 = &PTR_FUN_14afc86c0;
    FUN_1448b6402(lVar15,local_b0,&local_80);
    if (local_78 != 0) {
      if (local_80 == (undefined8 *)0x0) goto LAB_143c10131;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143c10131:
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_88 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb529e4) && (FUN_144b3d300(), DAT_14cb529e4 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
    _Init_thread_footer();
  }
  lVar17 = DAT_14cb52978;
  if (DAT_14cb529e0 == '\0') {
    iVar8 = *piVar1;
    if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
      uVar13 = 0;
    }
    else if (iVar8 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar9 != DVar10);
    }
    else {
      uVar13 = 1;
    }
    if ((*(char *)(lVar17 + uVar13) != '\0') || (iVar8 = FUN_1401433c5(), iVar8 == 0))
    goto LAB_143c1023d;
  }
  else {
LAB_143c1023d:
    lVar17 = *(longlong *)(DAT_14c98e618 + 0x20);
    FUN_1464a9756(&local_80);
    FUN_14574c986(lVar17 + 0x78,&local_90,&local_80);
    FUN_1401cb1ee(&local_80);
    DAT_14cb528b8 = local_90;
    lVar15 = DAT_14c98e618 + 0x580;
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,2,0x10);
    local_78 = 2;
    *local_80 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar17 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    local_80[2] = lVar14;
    *local_80 = &PTR_FUN_14afc8140;
    FUN_1448b6402(lVar15,&local_90,&local_80);
    if (local_78 != 0) {
      if (local_80 == (undefined8 *)0x0) goto LAB_143c101d3;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143c101d3:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb529e4) && (FUN_144b3d300(&DAT_14cb529e4), DAT_14cb529e4 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
    _Init_thread_footer(&DAT_14cb529e4);
  }
  if ((((DAT_14cb529e0 == '\0') && (*piVar1 != 0x40000002)) && (*piVar1 == 1)) &&
     (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  uVar11 = (**(code **)(*DAT_14cb527c8 + 0x18))();
  FUN_1401435b5(9999,uVar11);
LAB_143c0fc6a:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c10860 FUN_143c10860 body=714 status=ok
// SIG undefined FUN_143c10860(void)

void FUN_143c10860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar9 = DAT_14cb52858;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar8 = 0;
  }
  else if (iVar3 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  if (*(char *)(lVar9 + uVar8) == '\x01') {
    *(undefined8 *)(param_1 + 8) = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
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
    if (DAT_14c763048 == '\0') {
      FUN_1401433c5();
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8338a0) {
        FUN_144b3d300(&DAT_14c8338a0);
        if (DAT_14c8338a0 == -1) {
          FUN_1456d85e6(&DAT_14c8337f0);
          atexit((_func_5014 *)&LAB_142748837);
          _Init_thread_footer(&DAT_14c8338a0);
        }
      }
      lVar7 = FUN_14589669c();
      lVar9 = lVar7 + 8;
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      FUN_14589669c();
      FUN_1401c23cc(&local_28);
      (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_28,lVar9);
      plVar4 = DAT_14cb52ac0;
      if (DAT_14cb52ac0 != (longlong *)0x0) {
        DAT_14cb52ac0 = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x38))(plVar4,1);
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
      lVar7 = FUN_1456d850a();
      lVar9 = lVar7 + 8;
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      FUN_1456d850a();
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb0d2a8) {
        FUN_144b3d300(&DAT_14cb0d2a8);
        if (DAT_14cb0d2a8 == -1) {
          FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
          _Init_thread_footer(&DAT_14cb0d2a8);
        }
      }
      (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,DAT_14cb0d2a0,lVar9);
      lVar9 = DAT_14cb52ac8;
      if (DAT_14cb52ac8 != 0) {
        DAT_14cb52ac8 = 0;
        (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x30))(lVar9 + 0x10,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c10b2b FUN_143c10b2b body=69 status=ok
// SIG undefined FUN_143c10b2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c10b2b(void)

{
  _DAT_14cb52868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c10b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52870,1);
  return;
}



// FUNCTION 143c10b70 FUN_143c10b70 body=69 status=ok
// SIG undefined FUN_143c10b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c10b70(void)

{
  _DAT_14cb52880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c10bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52888,1);
  return;
}



// FUNCTION 143c10bb5 FUN_143c10bb5 body=69 status=ok
// SIG undefined FUN_143c10bb5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c10bb5(void)

{
  _DAT_14cb52898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c10bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb528a0,1);
  return;
}



// FUNCTION 143c10bfa FUN_143c10bfa body=1051 status=ok
// SIG undefined FUN_143c10bfa(void)

void FUN_143c10bfa(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  undefined6 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  longlong lStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar15 + 0xc;
  local_8c = param_3;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x70);
    puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar15 + 0xc;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *puVar15 = &PTR_FUN_14afc8048;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *(undefined4 *)(puVar15 + 4) = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  *(undefined4 *)(puVar15 + 8) = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  *(undefined4 *)(puVar15 + 0xb) = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar15;
  if (param_5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_5 + 0xac);
  }
  puVar15[2] = param_5;
  puVar15[3] = uVar11;
  *(undefined4 *)(puVar15 + 4) = 0x400;
  cVar9 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar9 != '\0') {
    FUN_143c069ab(param_2,puVar15 + 6);
  }
  uVar11 = *param_4;
  uVar3 = param_4[1];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb52e10) {
    FUN_144b3d300(&DAT_14cb52e10);
    if (DAT_14cb52e10 == -1) {
      uVar18 = 0;
      local_88 = 0;
      uStack_80 = 0;
      pcVar12 = FUN_143c15d3c;
      do {
        pcVar12 = (code *)(*pcVar12)(uVar18,&local_88);
        uVar18 = extraout_XMM0_Da;
      } while (pcVar12 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_80) {
        lVar13 = (longlong)(int)(uint)uStack_80 * 0x30;
        lVar16 = 0;
        do {
          lVar13 = lVar13 + -0x30;
          local_78 = *(undefined8 **)(local_88 + lVar16);
          lStack_70 = ((undefined8 *)(local_88 + lVar16))[1];
          puVar10 = (undefined8 *)(local_88 + 0x10 + lVar16);
          local_68 = (undefined *)*puVar10;
          uStack_60 = puVar10[1];
          puVar10 = (undefined8 *)(local_88 + 0x20 + lVar16);
          local_58 = *puVar10;
          uStack_50 = puVar10[1];
          uVar4 = *(undefined8 *)(local_88 + lVar13);
          uVar5 = ((undefined8 *)(local_88 + lVar13))[1];
          puVar10 = (undefined8 *)(local_88 + 0x10 + lVar13);
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          puVar10 = (undefined8 *)(local_88 + 0x20 + lVar13);
          uVar8 = puVar10[1];
          puVar17 = (undefined8 *)(local_88 + 0x20 + lVar16);
          *puVar17 = *puVar10;
          puVar17[1] = uVar8;
          puVar10 = (undefined8 *)(local_88 + 0x10 + lVar16);
          *puVar10 = uVar6;
          puVar10[1] = uVar7;
          *(undefined8 *)(local_88 + lVar16) = uVar4;
          ((undefined8 *)(local_88 + lVar16))[1] = uVar5;
          puVar10 = (undefined8 *)(local_88 + 0x20 + lVar13);
          *puVar10 = local_58;
          puVar10[1] = uStack_50;
          puVar10 = (undefined8 *)(local_88 + 0x10 + lVar13);
          *puVar10 = local_68;
          puVar10[1] = uStack_60;
          *(undefined8 *)(local_88 + lVar13) = local_78;
          ((undefined8 *)(local_88 + lVar13))[1] = lStack_70;
          lVar16 = lVar16 + 0x30;
        } while ((ulonglong)((uint)uStack_80 >> 1) * 0x30 != lVar16);
      }
      local_a0 = 0;
      local_b0 = 0;
      local_d0 = "Unknown";
      local_e0 = 0;
      uStack_d8 = 0;
      local_e8 = L"FSLDeepDVCShaderParameters";
      local_a8 = 0;
      local_c0 = 0x50;
      local_c8 = 0xb1;
      local_b8 = &local_88;
      FUN_140b49562(&DAT_14cb52d90,0,1);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c15d30);
      _Init_thread_footer(&DAT_14cb52e10);
    }
  }
  FUN_140069376(param_2);
  uVar14 = (undefined6)((ulonglong)param_5 >> 0x10);
  uVar18 = (undefined4)CONCAT62(uVar14,0x3b);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar18 = (undefined4)CONCAT62(uVar14,0x3d);
  }
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar17 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar17 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar10;
  lStack_70 = DAT_14cb52dd8;
  if (DAT_14cb52dd8 != 0) {
    LOCK();
    *(int *)(DAT_14cb52dd8 + 8) = *(int *)(DAT_14cb52dd8 + 8) + 1;
    UNLOCK();
  }
  local_68 = &DAT_14cb52d90;
  local_e8 = (wchar_t *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_78 = puVar15 + 2;
  FUN_140068f1a(puVar17,&local_88,&local_78,uVar18);
  *puVar17 = &PTR_FUN_14afc8050;
  puVar17[0x37] = param_1;
  puVar17[0x38] = puVar15 + 2;
  *(undefined4 *)(puVar17 + 0x39) = local_8c;
  *(undefined8 *)((longlong)puVar17 + 0x1cc) = uVar11;
  *(undefined8 *)((longlong)puVar17 + 0x1d4) = uVar3;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar17);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c11016 FUN_143c11016 body=69 status=ok
// SIG undefined FUN_143c11016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c11016(void)

{
  _DAT_14cb528c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c11058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb528c8,1);
  return;
}



// FUNCTION 143c1105b FUN_143c1105b body=69 status=ok
// SIG undefined FUN_143c1105b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1105b(void)

{
  _DAT_14cb528d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1109d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb528e0,1);
  return;
}



// FUNCTION 143c110a0 FUN_143c110a0 body=69 status=ok
// SIG undefined FUN_143c110a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c110a0(void)

{
  _DAT_14cb528f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c110e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb528f8,1);
  return;
}



// FUNCTION 143c110e5 FUN_143c110e5 body=69 status=ok
// SIG undefined FUN_143c110e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c110e5(void)

{
  _DAT_14cb52908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c11127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52910,1);
  return;
}



// FUNCTION 143c1112a FUN_143c1112a body=69 status=ok
// SIG undefined FUN_143c1112a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1112a(void)

{
  _DAT_14cb52920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52928,1);
  return;
}



// FUNCTION 143c1116f FUN_143c1116f body=69 status=ok
// SIG undefined FUN_143c1116f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1116f(void)

{
  _DAT_14cb52938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c111b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52940,1);
  return;
}



// FUNCTION 143c111b4 FUN_143c111b4 body=69 status=ok
// SIG undefined FUN_143c111b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c111b4(void)

{
  _DAT_14cb52950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c111f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52958,1);
  return;
}



// FUNCTION 143c111f9 FUN_143c111f9 body=69 status=ok
// SIG undefined FUN_143c111f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c111f9(void)

{
  _DAT_14cb52968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1123b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52970,1);
  return;
}



// FUNCTION 143c1123e FUN_143c1123e body=69 status=ok
// SIG undefined FUN_143c1123e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1123e(void)

{
  _DAT_14cb52980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c11280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52988,1);
  return;
}



// FUNCTION 143c11283 FUN_143c11283 body=69 status=ok
// SIG undefined FUN_143c11283(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c11283(void)

{
  _DAT_14cb52998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c112c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb529a0,1);
  return;
}



// FUNCTION 143c112c8 FUN_143c112c8 body=69 status=ok
// SIG undefined FUN_143c112c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c112c8(void)

{
  _DAT_14cb529b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1130a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb529b8,1);
  return;
}



// FUNCTION 143c1130d FUN_143c1130d body=69 status=ok
// SIG undefined FUN_143c1130d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1130d(void)

{
  _DAT_14cb529c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1134f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb529d0,1);
  return;
}



// FUNCTION 143c11352 FUN_143c11352 body=3365 status=ok
// SIG undefined FUN_143c11352(void)

void FUN_143c11352(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  char cVar21;
  undefined4 uVar22;
  longlong *plVar23;
  undefined8 *puVar25;
  char cVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_798 [32];
  undefined1 local_778;
  undefined8 local_770;
  longlong *local_768;
  undefined8 local_760;
  longlong local_758;
  undefined8 uStack_750;
  undefined1 local_741;
  undefined8 local_740;
  char cStack_738;
  char cStack_737;
  undefined2 uStack_736;
  undefined4 uStack_734;
  undefined8 *local_730;
  undefined8 local_728;
  undefined8 local_720;
  longlong local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined8 *local_700;
  longlong local_6f8;
  undefined *local_6f0;
  undefined1 local_6e8 [112];
  undefined8 *local_678;
  undefined8 *local_670;
  longlong local_650;
  uint local_648;
  uint local_644;
  longlong local_580;
  uint local_578;
  uint local_574;
  ulonglong local_70;
  undefined6 uVar24;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_798;
  if (*(int *)(param_1 + 0x304) == 5) {
    lVar29 = 0;
    if (*(char *)(*param_2 + 0x52) == '\0') {
      lVar29 = *param_2;
    }
    plVar14 = *(longlong **)(param_1 + 0x3a8);
    local_768 = param_2;
    if (plVar14 != (longlong *)0x0) {
      iVar8 = (int)plVar14[1];
      do {
        if (iVar8 == 0) goto LAB_143c11414;
        LOCK();
        iVar18 = (int)plVar14[1];
        bVar30 = iVar8 == iVar18;
        if (bVar30) {
          *(int *)(plVar14 + 1) = iVar8 + 1;
          iVar18 = iVar8;
        }
        iVar8 = iVar18;
        UNLOCK();
      } while (!bVar30);
      lVar16 = *(longlong *)(param_1 + 0x3a0);
      if (lVar16 != 0) {
        plVar11 = (longlong *)(**(code **)(*(longlong *)(lVar16 + -0xc0) + 0x10))(lVar16 + -0xc0);
        lVar16 = *plVar11;
        if ((lVar16 != 0) && (lVar29 = 0, *(char *)(lVar16 + 0x52) == '\0')) {
          lVar29 = lVar16;
        }
      }
      LOCK();
      plVar11 = plVar14 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
LAB_143c11414:
    local_758 = 0;
    uStack_750 = 0;
    if (0 < DAT_14cb52b80) {
      iVar18 = 0;
      lVar16 = DAT_14cb52b78;
      iVar8 = DAT_14cb52b80;
      do {
        uVar13 = uStack_750;
        lVar28 = *(longlong *)(lVar16 + 0x30 + (longlong)iVar18 * 0x40);
        if (*(char *)(lVar28 + 0x52) != '\0') {
          lVar28 = 0;
        }
        if (lVar28 == lVar29) {
          lVar28 = (longlong)(int)uStack_750;
          uVar7 = (int)uStack_750 + 1;
          uStack_750 = CONCAT44(uStack_750._4_4_,uVar7);
          if (uStack_750._4_4_ < uVar7) {
            FUN_14184205e(&local_758,uVar13 & 0xffffffff);
          }
          puVar27 = (undefined8 *)(lVar16 + (longlong)iVar18 * 0x40);
          lVar28 = lVar28 * 0x40;
          *(undefined8 *)(local_758 + lVar28) = *puVar27;
          *(undefined8 *)(local_758 + 8 + lVar28) = puVar27[1];
          *(undefined8 *)(local_758 + 0x10 + lVar28) = puVar27[2];
          *(undefined8 *)(local_758 + 0x18 + lVar28) = puVar27[3];
          *(undefined8 *)(local_758 + 0x20 + lVar28) = puVar27[4];
          *(undefined8 *)(local_758 + 0x28 + lVar28) = puVar27[5];
          lVar16 = puVar27[6];
          *(longlong *)(local_758 + 0x30 + lVar28) = lVar16;
          if (lVar16 != 0) {
            LOCK();
            *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(local_758 + lVar28 + 0x38) = *(undefined4 *)(puVar27 + 7);
          FUN_143c152c8(iVar18);
          FUN_14184215e();
          lVar16 = DAT_14cb52b78;
          iVar8 = DAT_14cb52b80;
        }
        else {
          iVar18 = iVar18 + 1;
        }
      } while (iVar18 < iVar8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb52ca8) && (FUN_144b3d300(&DAT_14cb52ca8), DAT_14cb52ca8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb52ca0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.ViewIndexToTag");
      _Init_thread_footer(&DAT_14cb52ca8);
    }
    if (((DAT_14cb52ca0 != (longlong *)0x0) &&
        (iVar8 = (**(code **)(*DAT_14cb52ca0 + 0xb0))(), iVar8 != -1)) && (1 < (int)uStack_750)) {
      uVar17 = *(undefined8 *)(local_758 + 0x40);
      uVar19 = *(undefined8 *)(local_758 + 0x48);
      uVar15 = *(undefined8 *)(local_758 + 0x50);
      uVar3 = *(undefined8 *)(local_758 + 0x58);
      local_770 = *(undefined8 *)(local_758 + 0x60);
      local_760 = *(undefined8 *)(local_758 + 0x68);
      lVar29 = *(longlong *)(local_758 + 0x70);
      if (lVar29 != 0) {
        LOCK();
        *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
        UNLOCK();
      }
      uVar22 = *(undefined4 *)(local_758 + 0x78);
      FUN_1418421fa(local_758,(int)uStack_750);
      uVar13 = uStack_750 >> 0x20;
      uStack_750 = uStack_750 & 0xffffffff00000000;
      iVar8 = 0;
      uVar7 = 0;
      if ((int)uVar13 != 0) {
        FUN_1485f6e46();
        iVar8 = (int)uStack_750;
        uVar7 = uStack_750._4_4_;
      }
      uStack_750 = CONCAT44(uStack_750._4_4_,iVar8 + 1U);
      if (uVar7 < iVar8 + 1U) {
        FUN_14184205e(&local_758,iVar8);
      }
      lVar16 = (longlong)iVar8 * 0x40;
      *(undefined8 *)(local_758 + lVar16) = uVar17;
      *(undefined8 *)(local_758 + 8 + lVar16) = uVar19;
      *(undefined8 *)(local_758 + 0x10 + lVar16) = uVar15;
      *(undefined8 *)(local_758 + 0x18 + lVar16) = uVar3;
      *(undefined8 *)(local_758 + 0x20 + lVar16) = local_770;
      *(undefined8 *)(local_758 + 0x28 + lVar16) = local_760;
      *(longlong *)(local_758 + 0x30 + lVar16) = lVar29;
      if (lVar29 == 0) {
        *(undefined4 *)(local_758 + lVar16 + 0x38) = uVar22;
      }
      else {
        LOCK();
        *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
        UNLOCK();
        *(undefined4 *)(local_758 + lVar16 + 0x38) = uVar22;
        LOCK();
        puVar2 = (uint *)(lVar29 + 8);
        uVar7 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar29 + 8);
          LOCK();
          uVar7 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar7 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar29 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar29;
            plVar14 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar14;
                LOCK();
                bVar30 = plVar14 != DAT_14ca843c0;
                plVar11 = plVar12;
                if (bVar30) {
                  plVar14 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar30);
            }
            else {
              do {
                *plVar12 = (longlong)plVar11;
                LOCK();
                bVar30 = plVar11 != DAT_14ca843c8;
                plVar14 = plVar12;
                if (bVar30) {
                  plVar11 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar30);
            }
          }
        }
      }
    }
    bVar5 = FUN_140143230();
    if (((int)uStack_750 != 0 & bVar5) == 1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb529e4) && (FUN_144b3d300(&DAT_14cb529e4), DAT_14cb529e4 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
        }
        DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
        _Init_thread_footer(&DAT_14cb529e4);
      }
      lVar29 = DAT_14cb52978;
      local_770 = CONCAT71(local_770._1_7_,1);
      if (DAT_14cb529e0 == '\0') {
        iVar8 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar8 == 0x40000002) {
          uVar13 = 0;
        }
        else {
          bVar30 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
            if (iVar8 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              bVar30 = DVar9 == DVar10;
            }
            else {
              bVar30 = false;
            }
          }
          uVar13 = (ulonglong)(bVar30 ^ 1);
        }
        if (*(char *)(lVar29 + uVar13) == '\0') {
          local_770 = CONCAT71(local_770._1_7_,*(undefined1 *)(DAT_14cb52900 + 1));
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb529e4) && (FUN_144b3d300(&DAT_14cb529e4), DAT_14cb529e4 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
        }
        DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
        _Init_thread_footer(&DAT_14cb529e4);
      }
      lVar29 = DAT_14cb52978;
      cVar26 = '\x01';
      if (DAT_14cb529e0 == '\0') {
        iVar8 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar8 == 0x40000002) {
          uVar13 = 0;
        }
        else {
          bVar30 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar8 != 2)) {
            if (iVar8 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              bVar30 = DVar9 == DVar10;
            }
            else {
              bVar30 = false;
            }
          }
          uVar13 = (ulonglong)(bVar30 ^ 1);
        }
        if (*(char *)(lVar29 + uVar13) == '\0') {
          cVar26 = *(char *)(DAT_14cb52918 + 1);
        }
      }
      FUN_1407779ba(local_6e8,&DAT_14ca85100);
      puVar25 = (undefined8 *)((longlong)local_678 + 0xfU & 0xfffffffffffffff0);
      puVar27 = puVar25 + 0xe;
      if (local_670 < puVar27) {
        FUN_140023dd8(&local_678,0x80);
        puVar25 = (undefined8 *)((longlong)local_678 + 0xfU & 0xfffffffffffffff0);
        puVar27 = puVar25 + 0xe;
      }
      uVar7 = local_648;
      *puVar25 = &PTR_FUN_14afc7e10;
      puVar25[2] = 0;
      puVar25[3] = 0;
      *(undefined4 *)(puVar25 + 4) = 0;
      puVar25[5] = 0;
      puVar25[6] = 0;
      *(undefined4 *)(puVar25 + 7) = 0;
      puVar25[8] = 0;
      puVar25[9] = 0;
      *(undefined4 *)(puVar25 + 10) = 0;
      puVar25[0xb] = 0;
      puVar25[0xc] = 0;
      *(undefined4 *)(puVar25 + 0xd) = 0;
      lVar29 = (longlong)(int)local_648;
      local_648 = local_648 + 1;
      local_678 = puVar27;
      if (local_644 < local_648) {
        FUN_1448cfae8(&local_650,uVar7);
      }
      plVar11 = local_768;
      *(undefined8 **)(local_650 + lVar29 * 8) = puVar25;
      plVar14 = DAT_14cb527c8;
      plVar12 = (longlong *)*local_768;
      if (*(char *)(*local_768 + 0x52) != '\0') {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)(*plVar12 + 8))();
      plVar12 = (longlong *)0x0;
      if (*(char *)(*plVar11 + 0x52) == '\0') {
        plVar12 = (longlong *)*plVar11;
      }
      (**(code **)(*plVar12 + 8))(plVar12);
      uVar17 = DAT_14c967818;
      fVar31 = *(float *)(param_1 + 0x398);
      lVar29 = param_1 + 0x390;
      if (fVar31 != 0.0) {
        lVar29 = param_1 + 0x398;
      }
      if (NAN(fVar31)) {
        lVar29 = param_1 + 0x398;
      }
      fVar31 = *(float *)(param_1 + 0x390 + (ulonglong)(-(uint)(fVar31 != 0.0) & 1) * 8);
      uVar19 = CONCAT44((int)ROUND(*(float *)(lVar29 + 4) + *(float *)(lVar29 + 4) + 0.5) >> 1,
                        (int)ROUND(fVar31 + fVar31 + 0.5) >> 1);
      plVar12 = *(longlong **)(param_1 + 0x3a8);
      if (plVar12 == (longlong *)0x0) {
LAB_143c1197f:
        cVar21 = (char)local_770;
      }
      else {
        iVar8 = (int)plVar12[1];
        do {
          if (iVar8 == 0) goto LAB_143c1197f;
          LOCK();
          iVar18 = (int)plVar12[1];
          bVar30 = iVar8 == iVar18;
          if (bVar30) {
            *(int *)(plVar12 + 1) = iVar8 + 1;
            iVar18 = iVar8;
          }
          iVar8 = iVar18;
          UNLOCK();
        } while (!bVar30);
        plVar23 = *(longlong **)(param_1 + 0x3a0);
        if (plVar23 != (longlong *)0x0) {
          (**(code **)(*plVar23 + 0x158))(plVar23,&local_740);
          plVar23 = (longlong *)
                    CONCAT44(uStack_734,CONCAT22(uStack_736,CONCAT11(cStack_737,cStack_738)));
          if (plVar23 != (longlong *)0x0) {
            iVar8 = (int)plVar23[1];
            do {
              if (iVar8 == 0) {
                plVar23 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar18 = (int)plVar23[1];
              bVar30 = iVar8 == iVar18;
              if (bVar30) {
                *(int *)(plVar23 + 1) = iVar8 + 1;
                iVar18 = iVar8;
              }
              iVar8 = iVar18;
              UNLOCK();
            } while (!bVar30);
            plVar4 = (longlong *)
                     CONCAT44(uStack_734,CONCAT22(uStack_736,CONCAT11(cStack_737,cStack_738)));
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            if (plVar23 != (longlong *)0x0) {
              if (local_740 != (longlong *)0x0) {
                fVar32 = (float)DAT_14c84635c * *(float *)((longlong)local_740 + 0xb4) +
                         DAT_14c84635c._4_4_ * *(float *)((longlong)local_740 + 0xbc) +
                         *(float *)((longlong)local_740 + 0xc4);
                fVar31 = (float)DAT_14c84635c * *(float *)(local_740 + 0x17) +
                         *(float *)(local_740 + 0x18) * DAT_14c84635c._4_4_ +
                         *(float *)(local_740 + 0x19);
                uVar17 = CONCAT44((int)fVar31,(int)fVar32);
                uVar19 = CONCAT44((int)(*(float *)(local_740 + 0x17) * *(float *)(local_740 + 0x13)
                                        + *(float *)(local_740 + 0x18) *
                                          *(float *)((longlong)local_740 + 0x9c) + fVar31),
                                  (int)(*(float *)(local_740 + 0x13) *
                                        *(float *)((longlong)local_740 + 0xb4) +
                                        *(float *)((longlong)local_740 + 0xbc) *
                                        *(float *)((longlong)local_740 + 0x9c) + fVar32));
              }
              LOCK();
              plVar4 = plVar23 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
          }
        }
        LOCK();
        plVar23 = plVar12 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        cVar21 = (char)local_770;
        if ((int)*plVar23 == 0) {
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
      if ((longlong)(int)uStack_750 != 0) {
        lVar29 = 0;
        do {
          piVar1 = (int *)(local_758 + 0x10 + lVar29);
          *piVar1 = *piVar1 + (int)uVar17;
          piVar1 = (int *)(local_758 + 0x14 + lVar29);
          iVar8 = (int)((ulonglong)uVar17 >> 0x20);
          *piVar1 = *piVar1 + iVar8;
          piVar1 = (int *)(local_758 + 0x18 + lVar29);
          *piVar1 = *piVar1 + (int)uVar17;
          piVar1 = (int *)(local_758 + 0x1c + lVar29);
          *piVar1 = *piVar1 + iVar8;
          lVar29 = lVar29 + 0x40;
        } while ((longlong)(int)uStack_750 * 0x40 != lVar29);
      }
      if (cVar26 != '\0') {
        FUN_1447ec05f(&local_740,*plVar11,L"InBackBuffer");
        uVar15 = 0;
        lVar29 = FUN_14473c272(local_6e8,&local_740,0);
        if (lVar29 != 0) {
          uVar15 = *(undefined8 *)(lVar29 + 0xac);
        }
        puVar25[2] = lVar29;
        puVar25[3] = uVar15;
        *(undefined4 *)(puVar25 + 4) = 0x80;
        cVar21 = (char)local_770;
        plVar11 = local_768;
        if (local_740 != (longlong *)0x0) {
          (**(code **)(*local_740 + 0x38))();
          plVar11 = local_768;
        }
      }
      if (cVar21 != '\0') {
        lVar29 = FUN_143c0a19f(local_6e8,*(undefined4 *)(DAT_14cb52930 + 4),plVar11);
        if (lVar29 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar29 + 0xac);
        }
        puVar25[5] = lVar29;
        puVar25[6] = uVar15;
        *(undefined4 *)(puVar25 + 7) = 0x80;
      }
      cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14);
      if (cVar6 != '\0') {
        FUN_143c069ab(local_6e8,puVar25 + 8);
      }
      puVar25 = puVar25 + 2;
      iVar8 = (**(code **)(*DAT_14cb52c50 + 0xb0))();
      if (iVar8 == -1) {
        iVar8 = (**(code **)(*DAT_14cb52c68 + 0xb0))();
        bVar30 = iVar8 != -1;
      }
      else {
        iVar8 = (**(code **)(*DAT_14cb52c50 + 0xb0))();
        bVar30 = iVar8 == 1;
      }
      uVar13 = uStack_750;
      lVar29 = local_758;
      local_740 = plVar14;
      local_718 = 0;
      local_710 = CONCAT44(local_710._4_4_,(int)uStack_750);
      cStack_738 = cVar26;
      cStack_737 = cVar21;
      local_730 = puVar25;
      local_728 = uVar17;
      local_720 = uVar19;
      if ((int)uStack_750 == 0) {
        local_710 = uStack_750 & 0xffffffff;
      }
      else {
        FUN_1485f7636(&local_718,uStack_750 & 0xffffffff);
        FUN_1485f768e(local_718,lVar29,uVar13 & 0xffffffff);
      }
      local_708 = bVar30;
      FUN_1485f76f2();
      FUN_140069376(local_6e8);
      uVar24 = (undefined6)((ulonglong)lVar29 >> 0x10);
      uVar22 = (undefined4)CONCAT62(uVar24,0x7b);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar22 = (undefined4)CONCAT62(uVar24,0x7d);
      }
      puVar20 = (undefined8 *)((longlong)local_678 + 7U & 0xfffffffffffffff8);
      puVar27 = puVar20 + 0x3f;
      if (local_670 < puVar27) {
        FUN_140023dd8(&local_678,0x200);
        puVar20 = (undefined8 *)((longlong)local_678 + 7U & 0xfffffffffffffff8);
        puVar27 = puVar20 + 0x3f;
      }
      local_6f8 = DAT_14cb52ea8;
      if (DAT_14cb52ea8 != 0) {
        LOCK();
        *(int *)(DAT_14cb52ea8 + 8) = *(int *)(DAT_14cb52ea8 + 8) + 1;
        UNLOCK();
      }
      local_6f0 = &DAT_14cb52e60;
      local_778 = 0;
      local_700 = puVar25;
      local_678 = puVar27;
      FUN_140068f1a(puVar20,&local_741,&local_700,uVar22);
      uVar7 = local_578;
      *puVar20 = &PTR_FUN_14afc8980;
      *(undefined4 *)(puVar20 + 0x37) = (undefined4)local_740;
      *(undefined4 *)((longlong)puVar20 + 0x1bc) = local_740._4_4_;
      *(uint *)(puVar20 + 0x38) = CONCAT22(uStack_736,CONCAT11(cStack_737,cStack_738));
      *(undefined4 *)((longlong)puVar20 + 0x1c4) = uStack_734;
      puVar20[0x39] = local_730;
      puVar20[0x3a] = local_728;
      puVar20[0x3b] = local_720;
      puVar20[0x3c] = local_718;
      local_718 = 0;
      *(undefined4 *)(puVar20 + 0x3d) = (undefined4)local_710;
      *(undefined4 *)((longlong)puVar20 + 0x1ec) = local_710._4_4_;
      local_710 = 0;
      *(undefined1 *)(puVar20 + 0x3e) = local_708;
      lVar29 = (longlong)(int)local_578;
      local_578 = local_578 + 1;
      if (local_574 < local_578) {
        FUN_14470e57a(&local_580,uVar7);
      }
      *(undefined8 **)(local_580 + lVar29 * 8) = puVar20;
      *(uint *)((longlong)puVar20 + 0x2c) = local_578 - 1;
      FUN_140069100(local_6e8,puVar20);
      FUN_1418421fa(local_718,local_710 & 0xffffffff);
      if (local_718 != 0) {
        FUN_1400020a8();
      }
      FUN_140779360(local_6e8);
      FUN_140778010(local_6e8);
    }
    FUN_1418421fa(local_758,(int)uStack_750);
    if (local_758 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_798) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c12078 FUN_143c12078 body=137 status=ok
// SIG undefined FUN_143c12078(void)

uint FUN_143c12078(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = DAT_14cb529ec;
  lVar3 = DAT_14cb529d8;
  uVar7 = (uint)DAT_14cb529f0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  uVar2 = *(uint *)(lVar3 + uVar6 * 4);
  if ((int)uVar2 < (int)uVar8) {
    uVar8 = uVar2;
  }
  if ((int)uVar8 < (int)uVar7) {
    uVar8 = uVar7;
  }
  return uVar8;
}



// FUNCTION 143c12101 FUN_143c12101 body=69 status=ok
// SIG undefined FUN_143c12101(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c12101(void)

{
  _DAT_14cb52a00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a08,1);
  return;
}



// FUNCTION 143c12146 FUN_143c12146 body=69 status=ok
// SIG undefined FUN_143c12146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c12146(void)

{
  _DAT_14cb52a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a20,1);
  return;
}



// FUNCTION 143c1218b FUN_143c1218b body=69 status=ok
// SIG undefined FUN_143c1218b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1218b(void)

{
  _DAT_14cb52a30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c121cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a38,1);
  return;
}



// FUNCTION 143c121d0 FUN_143c121d0 body=69 status=ok
// SIG undefined FUN_143c121d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c121d0(void)

{
  _DAT_14cb52a48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a50,1);
  return;
}



// FUNCTION 143c12215 FUN_143c12215 body=69 status=ok
// SIG undefined FUN_143c12215(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c12215(void)

{
  _DAT_14cb52a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a68,1);
  return;
}



// FUNCTION 143c1225a FUN_143c1225a body=69 status=ok
// SIG undefined FUN_143c1225a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1225a(void)

{
  _DAT_14cb52a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1229c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a80,1);
  return;
}



// FUNCTION 143c1229f FUN_143c1229f body=69 status=ok
// SIG undefined FUN_143c1229f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1229f(void)

{
  _DAT_14cb52a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c122e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52a98,1);
  return;
}



// FUNCTION 143c122e4 FUN_143c122e4 body=69 status=ok
// SIG undefined FUN_143c122e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c122e4(void)

{
  _DAT_14cb52aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52ab0,1);
  return;
}



// FUNCTION 143c12366 FUN_143c12366 body=426 status=ok
// SIG undefined FUN_143c12366(void)

void FUN_143c12366(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1b8 [32];
  longlong local_198 [2];
  longlong local_188 [3];
  ulonglong uStack_170;
  short local_168 [128];
  longlong local_68;
  short *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (DAT_14cb52e30 == (code *)0x0) {
    (*DAT_14cb52768)(3,"slReflexSetOptions",&DAT_14cb52e30);
  }
  local_188[2] = 0;
  uStack_170 = 0;
  FUN_1464a9818(local_188 + 2,param_1);
  lVar2 = local_188[2];
  local_188[0] = 0;
  local_188[1] = 0;
  lVar6 = (longlong)(int)uStack_170;
  if (lVar6 != 0) {
    iVar3 = 1;
    lVar5 = 0;
    do {
      if ((char)iVar3 == '\0') {
        FUN_1400020e8(local_188,&DAT_149e19f34,2);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      iVar3 = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      FUN_1400020e8(local_188,*(undefined8 *)(lVar2 + lVar5),iVar4);
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  local_60 = local_168;
  local_68 = 0;
  local_58 = 0x12;
  lVar2 = 0;
  do {
    local_168[lVar2] = (short)"slReflexSetOptions"[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x13);
  FUN_140002266(local_198,&DAT_149e0625e,local_60);
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52e30)(param_1);
  FUN_1447a1747(local_188[2],uStack_170 & 0xffffffff);
  if (local_188[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c12512 FUN_143c12512 body=73 status=ok
// SIG undefined FUN_143c12512(void)

void FUN_143c12512(longlong *param_1,char param_2)

{
  char cVar1;
  undefined2 *puVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  puVar2 = &DAT_149e0209e;
  if (param_2 == '\0') {
    puVar2 = &DAT_149e25dfc;
  }
  if (cVar1 == '\0') {
    puVar2 = &DAT_149e25dfc;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c12558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14cb52a38 + 0x98))(DAT_14cb52a38,puVar2,0xc000000,0);
  return;
}



// FUNCTION 143c1257e FUN_143c1257e body=1207 status=ok
// SIG undefined FUN_143c1257e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143c1257e(longlong *param_1,float param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar2;
  LARGE_INTEGER *pLVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  PRTL_CRITICAL_SECTION_DEBUG p_Var12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [8];
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  LARGE_INTEGER *local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined8 local_1a0;
  undefined4 local_198;
  int local_194;
  undefined1 local_190;
  undefined2 local_18e;
  undefined4 local_18c;
  LARGE_INTEGER local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined2 local_15e;
  undefined4 local_15c;
  longlong local_88;
  LARGE_INTEGER *local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar4 = (**(code **)(*param_1 + 0x10))();
  if (cVar4 == '\0') {
    uVar11 = 0;
    local_188.QuadPart = 0;
    local_180 = 0x49026d0bf03af81a;
    local_178 = 0x3454215e96c451a6;
    local_170 = 1;
    local_15e = 0;
    local_15c = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_143c12a36();
  }
  else {
    QueryPerformanceCounter(&local_188);
    dVar2 = (double)local_188.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb52ae0) {
      FUN_144b3d300(&DAT_14cb52ae0);
      if (DAT_14cb52ae0 == -1) {
        _DAT_14cb52ad8 = dVar2 + -0.0001;
        _Init_thread_footer(&DAT_14cb52ae0);
      }
    }
    dVar2 = dVar2 - _DAT_14cb52ad8;
    local_1b8 = 0;
    local_1b0 = 0x49026d0bf03af81a;
    local_1a8 = 0xa6;
    local_1a7 = 0x51;
    local_1a6 = 0xc4;
    local_1a5 = 0x96;
    local_1a4 = 0x5e;
    local_1a3 = 0x21;
    local_1a2 = 0x54;
    local_1a1 = 0x34;
    local_1a0 = 1;
    local_18e = 0;
    local_18c = 0;
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    lVar14 = DAT_14cb52ab8;
    local_198 = *(undefined4 *)(&DAT_14afc8b68 + (ulonglong)(uVar5 & 3) * 4);
    iVar15 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    local_194 = 0;
    if (((iVar15 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar15 == 2)) {
      uVar9 = 0;
    }
    else if (iVar15 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar7 != DVar8);
    }
    else {
      uVar9 = 1;
    }
    uVar11 = 0;
    if (*(char *)(lVar14 + uVar9) == '\x01') {
      local_194 = 0;
      uVar11 = 0;
      if ((char)param_1[1] == '\0') {
        fVar16 = (float)(-(uint)(0.0 < param_2) & (uint)(1.0 / param_2));
        local_194 = (int)(float)(~-(uint)(fVar16 < (float)dVar2) & (uint)(fVar16 * 1e+06));
        uVar11 = 1;
      }
    }
    local_190 = 1;
    FUN_143c12a36();
    p_Var12 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    FUN_1403937d4(local_1f0,0);
    iVar15 = (int)DAT_14c872be0;
    lpCriticalSection = *(LPCRITICAL_SECTION *)(DAT_14cb527c8 + 0x18);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      if (lpCriticalSection[1].LockCount != iVar15) {
        lpCriticalSection[1].LockCount = iVar15;
        (*DAT_14cb52770)(lpCriticalSection + 1,&lpCriticalSection[1].LockCount);
      }
      p_Var12 = lpCriticalSection[1].DebugInfo;
      LeaveCriticalSection(lpCriticalSection);
    }
    if (DAT_14cb52e38 == (code *)0x0) {
      (*DAT_14cb52768)(3,"slReflexSleep",&DAT_14cb52e38);
    }
    local_1c8 = (LARGE_INTEGER *)0x0;
    uStack_1c0 = 0;
    uVar6 = (*(code *)**(undefined8 **)p_Var12)(p_Var12);
    FUN_140002266(&local_188,L"frame=%u",uVar6);
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
    FUN_1447a1bd6(&local_1c8,0);
    pLVar3 = local_1c8;
    local_1c8->QuadPart = 0;
    *local_1c8 = local_188;
    local_188.QuadPart = 0;
    local_1c8[1].s.LowPart = (DWORD)local_180;
    *(undefined4 *)((longlong)local_1c8 + 0xc) = local_180._4_4_;
    lVar14 = (longlong)(int)uStack_1c0;
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    if (lVar14 != 0) {
      iVar15 = 1;
      lVar10 = 0;
      do {
        if ((char)iVar15 == '\0') {
          FUN_1400020e8(local_1d8,&DAT_149e19f34,2);
        }
        iVar1 = *(int *)((longlong)pLVar3 + lVar10 + 8);
        iVar15 = 0;
        iVar13 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar13 = iVar15;
        }
        FUN_1400020e8(local_1d8,*(undefined8 *)((longlong)pLVar3 + lVar10),iVar13);
        lVar10 = lVar10 + 0x10;
      } while (lVar14 * 0x10 != lVar10);
    }
    local_88 = 0;
    local_78 = 0xd;
    lVar14 = 0;
    do {
      *(short *)((longlong)&local_188 + lVar14 * 2) = (short)"slReflexSleep"[lVar14];
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xe);
    local_80 = &local_188;
    FUN_140002266(local_1e8,&DAT_149e0625e,&local_188);
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
    (*DAT_14cb52e38)(p_Var12);
    FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
    if (local_1c8 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    QueryPerformanceCounter(&local_188);
    _DAT_14cb52ad8 = (double)local_188.QuadPart * DAT_14c83f420 + 16777216.0;
    FUN_140248952(local_1f0);
  }
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c12a36 FUN_143c12a36 body=280 status=ok
// SIG undefined FUN_143c12a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c12a36(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb52ce0) {
    FUN_144b3d300(&DAT_14cb52ce0);
    if (DAT_14cb52ce0 == -1) {
      _DAT_14cb52cb0 = 0;
      _DAT_14cb52cb8 = 0x49026d0bf03af81a;
      _DAT_14cb52cc0 = 0x3454215e96c451a6;
      _DAT_14cb52cc8 = 1;
      _DAT_14cb52cd0 = 0;
      _DAT_14cb52cd8 = (ulonglong)((uint3)((ulonglong)_DAT_14cb52cd8 >> 8) & 0xff) << 8;
      _Init_thread_footer(&DAT_14cb52ce0);
    }
  }
  if ((((DAT_14cb52cd0 != *(int *)(param_1 + 4)) ||
       (DAT_14cb52cd4 != *(int *)((longlong)param_1 + 0x24))) ||
      (DAT_14cb52cd8 != *(char *)(param_1 + 5))) ||
     ((DAT_14cb52cda != *(short *)((longlong)param_1 + 0x2a) ||
      (DAT_14cb52cdc != *(int *)((longlong)param_1 + 0x2c))))) {
    FUN_143c12366(param_1);
    _DAT_14cb52cb0 = *param_1;
    _DAT_14cb52cb8 = param_1[1];
    _DAT_14cb52cc0 = param_1[2];
    _DAT_14cb52cc8 = param_1[3];
    _DAT_14cb52cd0 = param_1[4];
    _DAT_14cb52cd8 = param_1[5];
  }
  return;
}



// FUNCTION 143c12b4e FUN_143c12b4e body=1124 status=ok
// SIG undefined FUN_143c12b4e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143c12b4e(longlong param_1)

{
  char cVar1;
  undefined1 auStack_2668 [32];
  undefined1 local_2648 [33];
  char local_2627;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2668;
  cVar1 = FUN_140242cd6();
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + -0x10) + 0x18))(param_1 + -0x10), cVar1 != '\0'))
  {
    FUN_14490a810(local_2648);
    FUN_140242e09(local_2648);
    if ((local_2627 == '\x01') && (local_30 - local_88 != 0)) {
      *(float *)(param_1 + 8) =
           *(float *)(param_1 + 8) * 0.75 +
           ((float)(ulonglong)(local_30 - local_88) / 1000.0) * 0.25;
      *(float *)(param_1 + 0xc) =
           *(float *)(param_1 + 0xc) * 0.75 +
           ((float)(ulonglong)(local_50 - local_88) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x10) =
           *(float *)(param_1 + 0x10) * 0.75 +
           ((float)(ulonglong)(local_30 - local_48) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x14) =
           *(float *)(param_1 + 0x14) * 0.75 +
           ((float)(ulonglong)(local_80 - local_88) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x18) =
           *(float *)(param_1 + 0x18) * 0.75 +
           ((float)(ulonglong)(local_70 - local_78) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x1c) =
           *(float *)(param_1 + 0x1c) * 0.75 +
           ((float)(ulonglong)(local_60 - local_68) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x20) =
           *(float *)(param_1 + 0x20) * 0.75 +
           ((float)(ulonglong)(local_50 - local_58) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x24) =
           *(float *)(param_1 + 0x24) * 0.75 +
           ((float)(ulonglong)(local_40 - local_48) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x28) =
           *(float *)(param_1 + 0x28) * 0.75 +
           ((float)(ulonglong)(local_30 - local_38) / 1000.0) * 0.25;
      *(float *)(param_1 + 0x2c) = (float)(ulonglong)(local_78 - local_88) / 1000.0;
      *(float *)(param_1 + 0x30) = (float)(ulonglong)(local_68 - local_88) / 1000.0;
      *(float *)(param_1 + 0x34) = (float)(ulonglong)(local_58 - local_88) / 1000.0;
      *(float *)(param_1 + 0x38) = (float)(ulonglong)(local_48 - local_88) / 1000.0;
      *(float *)(param_1 + 0x3c) = (float)(ulonglong)(local_38 - local_88) / 1000.0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_2668);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((local_18 ^ (ulonglong)auStack_2668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c12fb6 FUN_143c12fb6 body=307 status=ok
// SIG undefined FUN_143c12fb6(void)

undefined1 FUN_143c12fb6(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      return 0;
    }
  }
  else if (DAT_14c8442b8 != 0) {
    return 0;
  }
  uVar1 = 0;
  if (((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) &&
     (uVar1 = DAT_14cb52ad2, DAT_14cb52ad3 == '\0')) {
    uVar3 = (**(code **)(*DAT_14cb527c8 + 0x18))();
    iVar2 = FUN_1456d0c02(4,uVar3);
    DAT_14cb52ad2 = iVar2 == 0;
    FUN_1401435b5(4,uVar3);
    DAT_14cb52ad3 = '\x01';
    uVar1 = DAT_14cb52ad2;
  }
  return uVar1;
}



// FUNCTION 143c130eb FUN_143c130eb body=69 status=ok
// SIG undefined FUN_143c130eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c130eb(void)

{
  _DAT_14cb52ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1312d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52af0,1);
  return;
}



// FUNCTION 143c13130 FUN_143c13130 body=69 status=ok
// SIG undefined FUN_143c13130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13130(void)

{
  _DAT_14cb52b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b08,1);
  return;
}



// FUNCTION 143c13175 FUN_143c13175 body=69 status=ok
// SIG undefined FUN_143c13175(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13175(void)

{
  _DAT_14cb52b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c131b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b20,1);
  return;
}



// FUNCTION 143c131ba FUN_143c131ba body=69 status=ok
// SIG undefined FUN_143c131ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c131ba(void)

{
  _DAT_14cb52b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c131fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b38,1);
  return;
}



// FUNCTION 143c131ff FUN_143c131ff body=69 status=ok
// SIG undefined FUN_143c131ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c131ff(void)

{
  _DAT_14cb52b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b50,1);
  return;
}



// FUNCTION 143c13244 FUN_143c13244 body=69 status=ok
// SIG undefined FUN_143c13244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13244(void)

{
  _DAT_14cb52b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b68,1);
  return;
}



// FUNCTION 143c13289 FUN_143c13289 body=49 status=ok
// SIG undefined FUN_143c13289(void)

void FUN_143c13289(void)

{
  FUN_1418421fa(DAT_14cb52b78,DAT_14cb52b80);
  if (DAT_14cb52b78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c132ba FUN_143c132ba body=69 status=ok
// SIG undefined FUN_143c132ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c132ba(void)

{
  _DAT_14cb52b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c132fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52b90,1);
  return;
}



// FUNCTION 143c132ff FUN_143c132ff body=69 status=ok
// SIG undefined FUN_143c132ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c132ff(void)

{
  _DAT_14cb52ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52ba8,1);
  return;
}



// FUNCTION 143c13344 FUN_143c13344 body=69 status=ok
// SIG undefined FUN_143c13344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13344(void)

{
  _DAT_14cb52bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52bc0,1);
  return;
}



// FUNCTION 143c13389 FUN_143c13389 body=69 status=ok
// SIG undefined FUN_143c13389(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13389(void)

{
  _DAT_14cb52bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c133cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52bd8,1);
  return;
}



// FUNCTION 143c133ce FUN_143c133ce body=69 status=ok
// SIG undefined FUN_143c133ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c133ce(void)

{
  _DAT_14cb52be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52bf0,1);
  return;
}



// FUNCTION 143c13413 FUN_143c13413 body=69 status=ok
// SIG undefined FUN_143c13413(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13413(void)

{
  _DAT_14cb52c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c08,1);
  return;
}



// FUNCTION 143c13458 FUN_143c13458 body=69 status=ok
// SIG undefined FUN_143c13458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13458(void)

{
  _DAT_14cb52c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1349a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c20,1);
  return;
}



// FUNCTION 143c1349d FUN_143c1349d body=69 status=ok
// SIG undefined FUN_143c1349d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1349d(void)

{
  _DAT_14cb52c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c134df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c38,1);
  return;
}



// FUNCTION 143c134e2 FUN_143c134e2 body=69 status=ok
// SIG undefined FUN_143c134e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c134e2(void)

{
  _DAT_14cb52c48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c50,1);
  return;
}



// FUNCTION 143c13527 FUN_143c13527 body=69 status=ok
// SIG undefined FUN_143c13527(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c13527(void)

{
  _DAT_14cb52c60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c13569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c68,1);
  return;
}



// FUNCTION 143c1356c FUN_143c1356c body=69 status=ok
// SIG undefined FUN_143c1356c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1356c(void)

{
  _DAT_14cb52c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c135ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb52c80,1);
  return;
}



// FUNCTION 143c135b4 FUN_143c135b4 body=6681 status=ok
// SIG undefined FUN_143c135b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c135b4(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  float fVar34;
  undefined1 auStack_598 [32];
  undefined8 *local_578;
  undefined4 local_570;
  undefined4 *local_568;
  longlong local_560;
  undefined1 *local_558;
  float local_544;
  double local_540;
  double local_538;
  float local_52c;
  double local_528;
  double dStack_520;
  double local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  undefined8 uStack_490;
  double local_488;
  undefined8 uStack_480;
  double local_478;
  undefined8 uStack_470;
  undefined8 *local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_420;
  double dStack_418;
  double local_410;
  undefined1 local_408 [16];
  double local_3f8;
  undefined4 local_3e8;
  undefined4 auStack_3e4 [2];
  undefined1 auStack_3dc [4];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  float local_3a0;
  float local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  double local_358;
  double dStack_350;
  undefined1 auStack_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined1 local_328 [32];
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
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [8];
  undefined1 auStack_210 [8];
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_164;
  undefined4 local_138;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  uVar8 = DAT_14c872be0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb529e4) && (FUN_144b3d300(&DAT_14cb529e4), DAT_14cb529e4 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
    _Init_thread_footer(&DAT_14cb529e4);
  }
  lVar13 = DAT_14cb52978;
  if (DAT_14cb529e0 == '\0') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 0x40000002) {
      uVar18 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar17 = DVar10 == DVar11;
        }
        else {
          bVar17 = false;
        }
      }
      uVar18 = (ulonglong)(bVar17 ^ 1);
    }
    if (*(char *)(lVar13 + uVar18) != '\x01') goto LAB_143c136cd;
  }
  if (*(ulonglong *)(param_1 + 0x6d0) == uVar8) goto LAB_143c136cd;
  local_460 = (undefined8 *)(param_1 + 0x30);
  local_538 = *(double *)(param_3 + 0x870);
  local_508 = *(double *)(param_3 + 0x878);
  local_540 = *(double *)(param_3 + 0x890);
  dVar21 = *(double *)(param_3 + 0x898);
  local_4a0 = *(double *)(param_3 + 0x8a8);
  if (1.0 <= local_4a0) {
    local_540 = local_540 - *(double *)(param_3 + 0x1088);
    dVar21 = dVar21 - *(double *)(param_3 + 0x1090);
  }
  else {
    local_538 = local_538 - *(double *)(param_3 + 0x1088);
    local_508 = local_508 - *(double *)(param_3 + 0x1090);
  }
  local_528 = dVar21;
  local_450 = (undefined8 *)(param_1 + 0x6d0);
  local_4f8 = *(double *)(param_3 + 0x830);
  local_4f0 = *(double *)(param_3 + 0x838);
  local_4e8 = *(double *)(param_3 + 0x840);
  local_4e0 = *(double *)(param_3 + 0x848);
  local_4d8 = *(double *)(param_3 + 0x850);
  local_4d0 = *(double *)(param_3 + 0x858);
  local_4c8 = *(double *)(param_3 + 0x860);
  local_4c0 = *(double *)(param_3 + 0x868);
  local_4b8 = *(double *)(param_3 + 0x880);
  local_4b0 = *(double *)(param_3 + 0x888);
  local_4a8 = *(double *)(param_3 + 0x8a0);
  dVar21 = *(double *)(param_3 + 0x9b0);
  dVar24 = *(double *)(param_3 + 0x9b8);
  dVar33 = *(double *)(param_3 + 0x9c0);
  dVar1 = *(double *)(param_3 + 0x9c8);
  local_510 = *(double *)(param_3 + 0x9d0);
  dVar26 = *(double *)(param_3 + 0x9d8);
  dVar30 = *(double *)(param_3 + 0x9e0);
  dVar32 = *(double *)(param_3 + 0x9f0);
  dVar29 = *(double *)(param_3 + 0x9f8);
  dVar20 = *(double *)(param_3 + 0xa00);
  local_478 = *(double *)(param_3 + 0x1030);
  uStack_470 = 0;
  local_488 = *(double *)(param_3 + 0x1038);
  uStack_480 = 0;
  local_498 = *(double *)(param_3 + 0x1040);
  uStack_490 = 0;
  uVar12 = FUN_144b3946c(DAT_14cb527c8,uVar8);
  FUN_1485f6c90(local_328);
  FUN_144a928e2(&local_3d8,local_460);
  local_1f8 = 1.4044474254567505e+306;
  dStack_1f0 = 1.4044474254567505e+306;
  local_208 = 1.4044474254567505e+306;
  uStack_200 = 1.4044474254567505e+306;
  local_1d8 = 1.4044474254567505e+306;
  dStack_1d0 = 1.4044474254567505e+306;
  local_1e8 = 1.4044474254567505e+306;
  dStack_1e0 = 1.4044474254567505e+306;
  lVar13 = 0xc;
  do {
    uVar7 = *(undefined8 *)(auStack_3dc + lVar13);
    *(undefined8 *)(local_218 + lVar13 + 4) = *(undefined8 *)((longlong)auStack_3e4 + lVar13);
    *(undefined8 *)(auStack_210 + lVar13 + 4) = uVar7;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x4c);
  local_258 = local_1d8;
  uStack_250 = dStack_1d0;
  local_268 = local_1e8;
  uStack_260 = dStack_1e0;
  local_278 = local_1f8;
  uStack_270 = dStack_1f0;
  local_288 = (undefined4)local_208;
  uStack_284 = local_208._4_4_;
  uStack_280 = (undefined4)uStack_200;
  uStack_27c = uStack_200._4_4_;
  local_458 = (undefined8 *)(param_1 + 0xb0);
  FUN_144a928e2(&local_3d8);
  local_1f8 = 1.4044474254567505e+306;
  dStack_1f0 = 1.4044474254567505e+306;
  local_208 = 1.4044474254567505e+306;
  uStack_200 = 1.4044474254567505e+306;
  local_1d8 = 1.4044474254567505e+306;
  dStack_1d0 = 1.4044474254567505e+306;
  local_1e8 = 1.4044474254567505e+306;
  dStack_1e0 = 1.4044474254567505e+306;
  lVar13 = 0xc;
  do {
    uVar7 = *(undefined8 *)(auStack_3dc + lVar13);
    *(undefined8 *)(local_218 + lVar13 + 4) = *(undefined8 *)((longlong)auStack_3e4 + lVar13);
    *(undefined8 *)(auStack_210 + lVar13 + 4) = uVar7;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x4c);
  local_218 = (undefined1  [8])local_1d8;
  auStack_210 = (undefined1  [8])dStack_1d0;
  local_228 = local_1e8;
  uStack_220 = dStack_1e0;
  local_238 = local_1f8;
  uStack_230 = dStack_1f0;
  local_248 = local_208;
  uStack_240 = uStack_200;
  local_3d8 = (double)CONCAT44((float)dVar24,(float)dVar21);
  fVar19 = (float)dVar1;
  uStack_3d0 = (double)CONCAT44(fVar19,(float)dVar33);
  local_3c8 = (double)CONCAT44((float)dVar26,(float)local_510);
  uStack_3c0 = (double)CONCAT44(fVar19,(float)dVar30);
  local_3b8 = CONCAT44((float)dVar29,(float)dVar32);
  uStack_3b0 = CONCAT44(fVar19,(float)dVar20);
  local_3a8 = (undefined1 *)CONCAT44((float)local_488,(float)local_478);
  local_3a0 = (float)local_498;
  local_39c = 1.0;
  local_1f8 = 1.4044474254567505e+306;
  dStack_1f0 = 1.4044474254567505e+306;
  local_208 = 1.4044474254567505e+306;
  uStack_200 = 1.4044474254567505e+306;
  local_1d8 = 1.4044474254567505e+306;
  dStack_1d0 = 1.4044474254567505e+306;
  local_1e8 = 1.4044474254567505e+306;
  dStack_1e0 = 1.4044474254567505e+306;
  lVar13 = 0xc;
  do {
    uVar7 = *(undefined8 *)(auStack_3dc + lVar13);
    *(undefined8 *)(local_218 + lVar13 + 4) = *(undefined8 *)((longlong)auStack_3e4 + lVar13);
    *(undefined8 *)(auStack_210 + lVar13 + 4) = uVar7;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x4c);
  local_2d8 = local_1d8;
  uStack_2d0 = dStack_1d0;
  local_2e8 = local_1e8;
  uStack_2e0 = dStack_1e0;
  local_2f8 = local_1f8;
  uStack_2f0 = dStack_1f0;
  local_308 = local_208;
  uStack_300 = uStack_200;
  local_3d8 = (double)CONCAT44((float)local_4f0,(float)local_4f8);
  uStack_3d0 = (double)CONCAT44((float)local_4e0,(float)local_4e8);
  local_3c8 = (double)CONCAT44((float)local_4d0,(float)local_4d8);
  uStack_3c0 = (double)CONCAT44((float)local_4c0,(float)local_4c8);
  local_3b8 = CONCAT44((float)local_508,(float)local_538);
  uStack_3b0 = CONCAT44((float)local_4b0,(float)local_4b8);
  local_3a8 = (undefined1 *)CONCAT44((float)local_528,(float)local_540);
  local_3a0 = (float)local_4a8;
  local_39c = (float)local_4a0;
  local_1f8 = 1.4044474254567505e+306;
  dStack_1f0 = 1.4044474254567505e+306;
  local_208 = 1.4044474254567505e+306;
  uStack_200 = 1.4044474254567505e+306;
  local_1d8 = 1.4044474254567505e+306;
  dStack_1d0 = 1.4044474254567505e+306;
  local_1e8 = 1.4044474254567505e+306;
  dStack_1e0 = 1.4044474254567505e+306;
  lVar13 = 0xc;
  do {
    uVar7 = *(undefined8 *)(auStack_3dc + lVar13);
    *(undefined8 *)(local_218 + lVar13 + 4) = *(undefined8 *)((longlong)auStack_3e4 + lVar13);
    *(undefined8 *)(auStack_210 + lVar13 + 4) = uVar7;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x4c);
  local_298 = local_1d8;
  uStack_290 = dStack_1d0;
  local_2a8 = local_1e8;
  uStack_2a0 = dStack_1e0;
  local_2b8 = local_1f8;
  uStack_2b0 = dStack_1f0;
  local_2c8 = local_208;
  uStack_2c0 = uStack_200;
  local_358 = 0.0;
  dStack_350 = 2.2259568777566557e+76;
  auStack_348._8_8_ = 1;
  auStack_348._0_8_ = 0xa4aa6925e5fb9499;
  local_338 = 0;
  if (DAT_14cb52e58 == (code *)0x0) {
    (*DAT_14cb52768)(3,"slReflexSetCameraData",&DAT_14cb52e58);
  }
  local_3b8 = CONCAT44(uStack_334,local_338);
  local_3c8 = (double)auStack_348._0_8_;
  uStack_3c0 = (double)auStack_348._8_8_;
  local_3d8 = local_358;
  uStack_3d0 = dStack_350;
  local_408 = ZEXT816(0);
  uStack_3b0 = uVar12;
  local_3a8 = local_328;
  FUN_141842240(local_408);
  FUN_1418422e6(local_408,uVar12);
  FUN_1485f73dc(local_408);
  FUN_144a8b2a0(&local_420,local_408,&DAT_149e19f34);
  FUN_144a81018(&local_208,"slReflexSetCameraData");
  FUN_140002266(&local_3e8,&DAT_149e0625e,local_100);
  if (CONCAT44(auStack_3e4[0],local_3e8) != 0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_420 != 0.0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52e58)(&local_358,uVar12,local_328);
  FUN_1447a1747(local_408._0_8_,local_408._8_4_);
  if (local_408._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_544 = (float)DAT_14c759090;
  local_1e8 = local_510;
  local_190 = 0x3ff0000000000000;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_208 = dVar21;
  uStack_200 = dVar24;
  local_1f8 = dVar33;
  dStack_1f0 = dVar1;
  dStack_1e0 = dVar26;
  local_1d8 = dVar30;
  dStack_1d0 = dVar1;
  local_1c8 = dVar32;
  local_1c0 = dVar29;
  local_1b8 = dVar20;
  local_1b0 = dVar1;
  FUN_141706d54(&local_208,&local_3d8);
  if (*(double *)(param_3 + 0x8a8) <= 1.0 && *(double *)(param_3 + 0x8a8) != 1.0) {
    fVar19 = (float)*(double *)(param_3 + 0x930);
  }
  else {
    fVar19 = 1.0;
  }
  local_438 = local_3d8;
  dStack_430 = uStack_3d0;
  local_448 = local_3c8;
  dStack_440 = uStack_3c0;
  local_52c = atanf(fVar19);
  if (((*(char *)(param_3 + 0x23cc) == '\0') && (*DAT_14cb52b10 == '\x01')) &&
     (*(longlong *)(param_1 + 0x6d0) + 1U == uVar8 &&
      *(longlong *)(param_1 + 0x720) + 1 == *(longlong *)(param_1 + 0x6d0))) {
    lVar13 = (uVar8 % 3) * 0x1e0;
    *(double *)(param_1 + 0x210 + lVar13) = dVar21;
    *(double *)(param_1 + 0x218 + lVar13) = dVar24;
    *(double *)(param_1 + 0x220 + lVar13) = dVar33;
    *(double *)(param_1 + 0x228 + lVar13) = dVar1;
    *(double *)(param_1 + 0x230 + lVar13) = local_510;
    *(double *)(param_1 + 0x238 + lVar13) = dVar26;
    *(double *)(param_1 + 0x240 + lVar13) = dVar30;
    *(double *)(param_1 + 0x248 + lVar13) = dVar1;
    *(double *)(param_1 + 0x250 + lVar13) = dVar32;
    *(double *)(param_1 + 600 + lVar13) = dVar29;
    *(double *)(param_1 + 0x260 + lVar13) = dVar20;
    *(double *)(param_1 + 0x268 + lVar13) = dVar1;
    *(double *)(param_1 + 0x270 + lVar13) = local_478;
    *(double *)(param_1 + 0x278 + lVar13) = local_488;
    *(double *)(param_1 + 0x280 + lVar13) = local_498;
    *(undefined8 *)(param_1 + 0x288 + lVar13) = 0x3ff0000000000000;
    *(double *)(param_1 + 0x290 + lVar13) = local_4f8;
    *(double *)(param_1 + 0x298 + lVar13) = local_4f0;
    *(double *)(param_1 + 0x2a0 + lVar13) = local_4e8;
    *(double *)(param_1 + 0x2a8 + lVar13) = local_4e0;
    *(double *)(param_1 + 0x2b0 + lVar13) = local_4d8;
    *(double *)(param_1 + 0x2b8 + lVar13) = local_4d0;
    *(double *)(param_1 + 0x2c0 + lVar13) = local_4c8;
    *(double *)(param_1 + 0x2c8 + lVar13) = local_4c0;
    *(double *)(param_1 + 0x2d0 + lVar13) = local_538;
    *(double *)(param_1 + 0x2d8 + lVar13) = local_508;
    *(double *)(param_1 + 0x2e0 + lVar13) = local_4b8;
    *(double *)(param_1 + 0x2e8 + lVar13) = local_4b0;
    *(double *)(param_1 + 0x2f0 + lVar13) = local_540;
    *(double *)(param_1 + 0x2f8 + lVar13) = local_528;
    *(double *)(param_1 + 0x300 + lVar13) = local_4a8;
    *(double *)(param_1 + 0x308 + lVar13) = local_4a0;
    local_508 = *(double *)(param_1 + 0x730);
    dStack_500 = *(double *)(param_1 + 0x738);
    uVar18 = -(ulonglong)
              (0.0 <= *(double *)(param_1 + 0x748) * *(double *)(param_1 + 0x6f8) +
                      *(double *)(param_1 + 0x740) * *(double *)(param_1 + 0x6f0) +
                      local_508 * *(double *)(param_1 + 0x6e0) +
                      dStack_500 * *(double *)(param_1 + 0x6e8));
    dVar20 = (double)(~uVar18 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar18 >> 0x20) & 0x3ff00000) << 0x20);
    dVar30 = *(double *)(param_1 + 0x6e0) * dVar20;
    dVar33 = *(double *)(param_1 + 0x6e8) * dVar20;
    dVar1 = *(double *)(param_1 + 0x6f0) * dVar20;
    dVar20 = dVar20 * *(double *)(param_1 + 0x6f8);
    uVar18 = -(ulonglong)
              (0.0 <= dVar20 * dStack_440 +
                      dVar1 * local_448 + dVar30 * local_438 + dStack_430 * dVar33);
    dVar25 = (double)(~uVar18 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar18 >> 0x20) & 0x3ff00000) << 0x20);
    local_528 = local_438 * dVar25;
    dStack_520 = dStack_430 * dVar25;
    dVar21 = local_448 * dVar25;
    dVar25 = dVar25 * dStack_440;
    dVar26 = dVar1 * -1.0;
    dVar32 = dVar20 * 1.0;
    dVar29 = dVar32 * dVar21 + dStack_520 * dVar30 + (dVar26 * dVar25 - local_528 * dVar33);
    dVar24 = (dVar26 * dStack_520 + (dVar32 * local_528 * 1.0 - dVar25 * dVar30)) -
             dVar33 * dVar21 * -1.0;
    dVar26 = (dVar32 * dStack_520 + (dVar26 * local_528 * -1.0 - dVar25 * dVar33)) -
             dVar30 * dVar21 * 1.0;
    local_540 = (double)CONCAT44(local_540._4_4_,*(float *)(param_1 + 0x6d8));
    if (*DAT_14cb52af8 == '\0') {
      dVar32 = *(double *)(param_1 + 0x740) * -1.0;
      dVar3 = *(double *)(param_1 + 0x748) * 1.0;
      dVar5 = (double)(2.0 / *(float *)(param_1 + 0x6d8));
      dVar4 = (double)(2.0 / local_544);
      dVar29 = dVar29 * dVar4;
      dVar26 = dVar26 * dVar4;
      dVar24 = dVar24 * dVar4;
      dVar6 = (double)local_544;
      dVar4 = 1.0 / dVar6;
      dVar29 = (dVar29 - (dVar3 * dVar1 +
                         dVar33 * local_508 + (dVar20 * dVar32 - dStack_500 * dVar30)) * dVar5) *
               dVar4 * dVar6 + dVar29;
      dVar26 = (dVar26 - (((dVar30 * dVar32 * -1.0 - dStack_500 * dVar20) + dVar3 * dVar33) -
                         local_508 * dVar1 * 1.0) * dVar5) * dVar4 * dVar6 + dVar26;
      dVar24 = dVar4 * (dVar24 - (((dVar30 * dVar3 * 1.0 - local_508 * dVar20) + dVar32 * dVar33) -
                                 dStack_500 * dVar1 * -1.0) * dVar5) * dVar6 + dVar24;
    }
    else {
      dVar33 = (double)(2.0 / local_544);
      dVar29 = dVar29 * dVar33;
      dVar26 = dVar26 * dVar33;
      dVar24 = dVar24 * dVar33;
    }
    lVar14 = param_1 + 0x130 + lVar13;
    fVar19 = (float)SQRT(dVar29 * dVar29 + dVar24 * dVar24 + dVar26 * dVar26);
    dVar33 = DAT_14c8463e0;
    dVar1 = DAT_14c8463d8;
    dVar30 = DAT_14c8463d0;
    dVar32 = DAT_14c8463e8;
    if (0.0 < fVar19) {
      fVar27 = local_544 * fVar19 * 0.5;
      fVar27 = (float)(longlong)
                      (fVar27 * 0.15915494 +
                      *(float *)(&DAT_14a184448 + (ulonglong)(fVar27 < 0.0) * 4)) * -6.2831855 +
               fVar27;
      if (fVar27 <= 1.5707964) {
        if (fVar27 < -1.5707964) {
          fVar28 = -3.1415927;
          goto LAB_143c149ae;
        }
        fVar28 = 1.0;
      }
      else {
        fVar28 = 3.1415927;
LAB_143c149ae:
        fVar27 = fVar28 - fVar27;
        fVar28 = -1.0;
      }
      fVar34 = fVar27 * fVar27;
      dVar30 = (double)((((((fVar34 * -2.3889859e-08 + 2.7525562e-06) * fVar34 + -0.00019840874) *
                           fVar34 + 0.008333331) * fVar34 + -0.16666667) * fVar34 + 1.0) * fVar27);
      dVar32 = (double)fVar19;
      dVar33 = (dVar29 * dVar30) / dVar32;
      dVar1 = (dVar26 * dVar30) / dVar32;
      dVar30 = (dVar24 * dVar30) / dVar32;
      dVar32 = (double)((((((fVar34 * -2.6051615e-07 + 2.4760495e-05) * fVar34 + -0.0013888378) *
                           fVar34 + 0.041666638) * fVar34 + -0.5) * fVar34 + 1.0) * fVar28);
    }
    dVar26 = dStack_520 * dVar33 * -1.0 +
             dVar21 * dVar1 + dVar25 * dVar30 * 1.0 + local_528 * dVar32;
    dVar29 = local_528 * dVar33 * 1.0 +
             dVar25 * dVar1 + dVar21 * dVar30 * -1.0 + dStack_520 * dVar32;
    dVar20 = dVar25 * dVar33 * 1.0 +
             ((dVar30 * dStack_520 * 1.0 + dVar32 * dVar21) - dVar1 * local_528);
    dVar33 = dVar21 * dVar33 * -1.0 +
             ((dVar30 * local_528 * -1.0 + dVar32 * dVar25) - dVar1 * dStack_520);
    dVar21 = dVar20 * dVar20 + dVar26 * dVar26;
    dVar24 = dVar33 * dVar33 + dVar29 * dVar29;
    auVar22._0_8_ = dVar21 + dVar24;
    auVar22._8_8_ = dVar21 + dVar24;
    uVar18 = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar23 = sqrtpd(auVar22,auVar22);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar31._0_8_ = auVar23._0_8_ * dVar20;
    auVar31._8_8_ = auVar23._8_8_ * dVar33;
    local_358 = (double)((ulonglong)(dVar26 * auVar23._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
    dStack_350 = (double)((ulonglong)(dVar29 * auVar23._8_8_) & uVar18);
    auVar23._8_4_ = (int)uVar18;
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar23._12_4_ = (int)(uVar18 >> 0x20);
    auStack_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar23);
    FUN_14076d742();
    dVar1 = 1.0 / (double)local_540._0_4_;
    dVar33 = (double)local_544;
    dVar26 = 1.0 / dVar33;
    dVar21 = (local_498 - *(double *)(param_1 + 0x710)) * dVar26;
    dVar24 = (local_488 - *(double *)(param_1 + 0x708)) * dVar26;
    dVar32 = (local_478 - *(double *)(param_1 + 0x700)) * dVar26;
    dVar21 = ((dVar21 - (*(double *)(param_1 + 0x710) - *(double *)(param_1 + 0x760)) * dVar1) *
              dVar26 * 0.5 * dVar33 + dVar21) * dVar33 + local_498;
    dVar30 = ((dVar24 - (*(double *)(param_1 + 0x708) - *(double *)(param_1 + 0x758)) * dVar1) *
              dVar26 * 0.5 * dVar33 + dVar24) * dVar33 + local_488;
    dVar24 = ((dVar32 - dVar1 * (*(double *)(param_1 + 0x700) - *(double *)(param_1 + 0x750))) *
              dVar26 * 0.5 * dVar33 + dVar32) * dVar33 + local_478;
    *(double *)(lVar14 + 0xe0) = local_3d8;
    *(double *)(lVar14 + 0xe8) = uStack_3d0;
    *(double *)(lVar14 + 0xf0) = local_3c8;
    *(undefined8 *)(lVar14 + 0xf8) = 0;
    *(undefined8 *)(lVar14 + 0x100) = local_3b8;
    *(undefined8 *)(lVar14 + 0x108) = uStack_3b0;
    *(undefined1 **)(lVar14 + 0x110) = local_3a8;
    *(undefined8 *)(lVar14 + 0x118) = 0;
    *(undefined8 *)(lVar14 + 0x120) = local_398;
    *(undefined8 *)(lVar14 + 0x128) = uStack_390;
    *(undefined8 *)(lVar14 + 0x130) = local_388;
    *(undefined8 *)(lVar14 + 0x138) = 0;
    *(double *)(lVar14 + 0x140) = dVar24;
    *(double *)(lVar14 + 0x148) = dVar30;
    *(double *)(lVar14 + 0x150) = dVar21;
    *(undefined8 *)(lVar14 + 0x158) = 0x3ff0000000000000;
    if (*DAT_14cb52b28 == '\x01') {
      local_3f8 = -local_498;
      local_408._8_4_ = SUB84(local_488,0);
      local_408._0_8_ = -local_478;
      local_408._12_4_ = (uint)((ulonglong)local_488 >> 0x20) ^ 0x80000000;
      local_410 = -dVar21;
      local_420 = -dVar24;
      dStack_418 = -dVar30;
      memset(&local_208,0,0x100);
      local_138 = 0xffffffff;
      local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
      local_164 = 0xffffffff;
      auStack_3e4[0] = *DAT_14cb52b40;
      local_3e8 = 2;
      local_560 = lVar14 + 0x58;
      local_558 = &DAT_14cad0f10;
      local_568 = &local_3e8;
      local_578 = &DAT_14c8463d0;
      local_570 = 4;
      cVar9 = FUN_14021655c(*(undefined8 *)(lVar14 + 0xd8),&local_208,local_408,&local_420);
      if (cVar9 != '\0') {
        *(double *)(lVar14 + 0x140) = -local_1f8;
        *(double *)(lVar14 + 0x148) = -dStack_1f0;
        *(double *)(lVar14 + 0x150) = -local_1e8;
      }
    }
    if (*(double *)(param_3 + 0x8a8) <= 1.0 && *(double *)(param_3 + 0x8a8) != 1.0) {
      fVar19 = tanf(((local_52c - *(float *)(param_1 + 0x718)) / local_544) * local_544 + local_52c)
      ;
      dVar21 = *(double *)(lVar14 + 0x160);
      *(double *)(lVar14 + 0x160) = (double)(1.0 / fVar19);
      *(double *)(lVar14 + 0x188) =
           (double)((float)(*(double *)(lVar14 + 0x188) / dVar21) * (1.0 / fVar19));
    }
    puVar15 = (undefined8 *)(param_1 + lVar13 + 0x210);
    puVar16 = local_460;
    for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar15 = (undefined8 *)(lVar13 + param_1 + 0x290);
    puVar16 = local_458;
    for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  else {
    *(double *)(param_1 + 0x30) = dVar21;
    *(double *)(param_1 + 0x38) = dVar24;
    *(double *)(param_1 + 0x40) = dVar33;
    *(double *)(param_1 + 0x48) = dVar1;
    *(double *)(param_1 + 0x50) = local_510;
    *(double *)(param_1 + 0x58) = dVar26;
    *(double *)(param_1 + 0x60) = dVar30;
    *(double *)(param_1 + 0x68) = dVar1;
    *(double *)(param_1 + 0x70) = dVar32;
    *(double *)(param_1 + 0x78) = dVar29;
    *(double *)(param_1 + 0x80) = dVar20;
    *(double *)(param_1 + 0x88) = dVar1;
    *(double *)(param_1 + 0x90) = local_478;
    *(double *)(param_1 + 0x98) = local_488;
    *(double *)(param_1 + 0xa0) = local_498;
    *(undefined8 *)(param_1 + 0xa8) = 0x3ff0000000000000;
    *(double *)(param_1 + 0xb0) = local_4f8;
    *(double *)(param_1 + 0xb8) = local_4f0;
    *(double *)(param_1 + 0xc0) = local_4e8;
    *(double *)(param_1 + 200) = local_4e0;
    *(double *)(param_1 + 0xd0) = local_4d8;
    *(double *)(param_1 + 0xd8) = local_4d0;
    *(double *)(param_1 + 0xe0) = local_4c8;
    *(double *)(param_1 + 0xe8) = local_4c0;
    *(double *)(param_1 + 0xf0) = local_538;
    *(double *)(param_1 + 0xf8) = local_508;
    *(double *)(param_1 + 0x100) = local_4b8;
    *(double *)(param_1 + 0x108) = local_4b0;
    *(double *)(param_1 + 0x110) = local_540;
    *(double *)(param_1 + 0x118) = local_528;
    *(double *)(param_1 + 0x120) = local_4a8;
    *(double *)(param_1 + 0x128) = local_4a0;
  }
  puVar15 = local_450;
  puVar16 = (undefined8 *)(param_1 + 0x720);
  for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(ulonglong *)(param_1 + 0x6d0) = uVar8;
  *(float *)(param_1 + 0x6d8) = local_544;
  *(double *)(param_1 + 0x6e0) = local_438;
  *(double *)(param_1 + 0x6e8) = dStack_430;
  *(double *)(param_1 + 0x6f0) = local_448;
  *(double *)(param_1 + 0x6f8) = dStack_440;
  *(double *)(param_1 + 0x700) = local_478;
  *(double *)(param_1 + 0x708) = local_488;
  *(double *)(param_1 + 0x710) = local_498;
  *(float *)(param_1 + 0x718) = local_52c;
LAB_143c136cd:
  if ((local_f0 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c14fce FUN_143c14fce body=757 status=ok
// SIG undefined FUN_143c14fce(void)

void FUN_143c14fce(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  uVar1 = DAT_14c867d10;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb529e4) {
    FUN_144b3d300(&DAT_14cb529e4);
    if (DAT_14cb529e4 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
      _Init_thread_footer(&DAT_14cb529e4);
    }
  }
  lVar8 = DAT_14cb52978;
  if (DAT_14cb529e0 == '\0') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar9 = 0;
    }
    else if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(char *)(lVar8 + uVar9) != '\x01') goto LAB_143c15093;
  }
  if (((uVar1 != 0) && (*(char *)(param_3 + 0x23cc) == '\0')) &&
     ((*(char *)(DAT_14cb52b10 + 1) == '\x01' &&
      (lVar8 = (uVar1 % 3) * 0x1e0, *(ulonglong *)(param_1 + 0x130 + lVar8) == uVar1)))) {
    param_1 = param_1 + lVar8;
    FUN_1417ed356(param_3,param_1 + 0x290);
    uVar1 = *(ulonglong *)(param_1 + 0x280);
    uVar3 = *(uint *)(param_1 + 0x274);
    uVar4 = *(undefined4 *)(param_1 + 0x278);
    uVar5 = *(uint *)(param_1 + 0x27c);
    *(undefined4 *)(param_3 + 0x10a0) = *(undefined4 *)(param_1 + 0x270);
    *(uint *)(param_3 + 0x10a4) = uVar3 ^ 0x80000000;
    *(undefined4 *)(param_3 + 0x10a8) = uVar4;
    *(uint *)(param_3 + 0x10ac) = uVar5 ^ 0x80000000;
    *(ulonglong *)(param_3 + 0x10b0) = uVar1 ^ 0x8000000000000000;
    local_98 = *(undefined8 *)(param_1 + 600);
    local_b8 = *(undefined8 *)(param_1 + 0x250);
    local_d8 = *(undefined8 *)(param_1 + 0x260);
    local_a0 = *(undefined8 *)(param_1 + 0x238);
    local_c0 = *(undefined8 *)(param_1 + 0x230);
    local_e0 = *(undefined8 *)(param_1 + 0x240);
    local_c8 = *(undefined8 *)(param_1 + 0x210);
    local_a8 = *(undefined8 *)(param_1 + 0x218);
    local_e8 = *(undefined8 *)(param_1 + 0x220);
    local_d0 = 0;
    local_b0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0x3ff0000000000000;
    FUN_144a90b9e(&local_e8,&local_100);
    *(undefined8 *)(param_3 + 0x10c8) = local_f0;
    *(undefined4 *)(param_3 + 0x10b8) = local_100;
    *(undefined4 *)(param_3 + 0x10bc) = uStack_fc;
    *(undefined4 *)(param_3 + 0x10c0) = uStack_f8;
    *(undefined4 *)(param_3 + 0x10c4) = uStack_f4;
    FUN_147cefcbc(param_3);
  }
LAB_143c15093:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c152c8 FUN_143c152c8 body=136 status=ok
// SIG undefined FUN_143c152c8(void)

void FUN_143c152c8(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = DAT_14cb52b78;
  lVar3 = *(longlong *)(DAT_14cb52b78 + 0x30 + (longlong)(int)param_1 * 0x40);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  iVar6 = ~param_1 + DAT_14cb52b80;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_1 * 0x40 + lVar4),
            (void *)((longlong)(DAT_14cb52b80 - iVar5) * 0x40 + lVar4),(longlong)iVar5 << 6);
  }
  DAT_14cb52b80 = DAT_14cb52b80 + -1;
  return;
}



// FUNCTION 143c15350 FUN_143c15350 body=31 status=ok
// SIG undefined FUN_143c15350(void)

undefined8 FUN_143c15350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c15370 FUN_143c15370 body=38 status=ok
// SIG undefined FUN_143c15370(void)

undefined8 FUN_143c15370(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c15396 FUN_143c15396 body=835 status=ok
// SIG undefined FUN_143c15396(void)

void FUN_143c15396(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 *_Dst;
  ulonglong uVar9;
  undefined4 *_Src;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((undefined4 *)CONCAT44(uStack_ac,local_b0) != (undefined4 *)0x0) {
      _Src = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar10 + 2,local_a8,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,_Src,(longlong)local_a8);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    puVar8 = local_60;
    if (local_60 == (undefined8 *)0x0) {
      puVar8 = &local_a0;
    }
    FUN_1446fe1b8(puVar10 + 5,local_58,0);
    _Dst = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      _Dst = puVar10 + 5;
    }
    memcpy(_Dst,puVar8,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar10 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_44;
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14cb52878;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  uStack_7c = *(undefined4 *)(DAT_14cb52890 + 4);
  uStack_78 = *(undefined4 *)(DAT_14cb528a8 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0x1c0);
  uVar3 = *(undefined8 *)(param_1 + 0x1c4);
  uStack_b4 = (undefined4)uVar3;
  local_b0 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x1cc);
  uStack_ac = (undefined4)uVar4;
  local_a8 = (int)((ulonglong)uVar4 >> 0x20);
  local_a0 = 0;
  uStack_98 = 0x23288aad;
  uStack_94 = 0xbe2a7e7e;
  local_90 = 0x6b04a330da276791;
  uStack_88 = 1;
  local_80 = (uint)(*(int *)(lVar5 + uVar9 * 4) == 1);
  local_70 = *(undefined8 *)(param_1 + 0x1d8);
  local_b8 = uVar2;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_143c156da(&local_b8);
  }
  else {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0xc;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x68);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar10 + 0xc;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14afc8008;
    *(undefined4 *)(puVar10 + 2) = uVar2;
    *(undefined8 *)((longlong)puVar10 + 0x14) = uVar3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = uVar4;
    *(undefined4 *)(puVar10 + 5) = (undefined4)local_a0;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = local_a0._4_4_;
    *(undefined4 *)(puVar10 + 6) = uStack_98;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_94;
    puVar10[7] = local_90;
    puVar10[8] = uStack_88;
    puVar10[9] = CONCAT44(uStack_7c,local_80);
    puVar10[10] = CONCAT44(uStack_74,uStack_78);
    puVar10[0xb] = local_70;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c156da FUN_143c156da body=535 status=ok
// SIG undefined FUN_143c156da(void)

void FUN_143c156da(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  longlong local_1f8 [2];
  longlong local_1e8 [3];
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  short local_1a0 [128];
  longlong local_a0;
  short *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a8 = *param_1;
  param_1 = param_1 + 6;
  local_1c8 = 0;
  local_1c0 = 0x171b6435;
  uStack_1bc = 0x4fc89b3c;
  uStack_1b8 = 0xe5fb9499;
  uStack_1b4 = 0xa4aa6925;
  local_1b0 = 1;
  if (DAT_14cb52d00 == (code *)0x0) {
    (*DAT_14cb52768)(5,"slDeepDVCSetOptions",&DAT_14cb52d00);
  }
  local_68 = CONCAT44(uStack_1a4,local_1a8);
  local_80 = CONCAT44(uStack_1bc,local_1c0);
  local_78 = CONCAT44(uStack_1b4,uStack_1b8);
  local_70 = local_1b0;
  local_88 = local_1c8;
  local_1e8[2] = 0;
  uStack_1d0 = 0;
  local_60 = param_1;
  FUN_141842240(local_1e8 + 2);
  FUN_1485f70ca(local_1e8 + 2,param_1);
  lVar2 = local_1e8[2];
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  lVar6 = (longlong)(int)uStack_1d0;
  if (lVar6 != 0) {
    iVar3 = 1;
    lVar5 = 0;
    do {
      if ((char)iVar3 == '\0') {
        FUN_1400020e8(local_1e8,&DAT_149e19f34,2);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      iVar3 = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      FUN_1400020e8(local_1e8,*(undefined8 *)(lVar2 + lVar5),iVar4);
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  local_98 = local_1a0;
  local_a0 = 0;
  local_90 = 0x13;
  lVar2 = 0;
  do {
    local_1a0[lVar2] = (short)"slDeepDVCSetOptions"[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_140002266(local_1f8,&DAT_149e0625e,local_98);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8[0] != 0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52d00)(&local_1c8,param_1);
  FUN_1447a1747(local_1e8[2],uStack_1d0 & 0xffffffff);
  if (local_1e8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c15908 FUN_143c15908 body=29 status=ok
// SIG undefined FUN_143c15908(void)

undefined8 FUN_143c15908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c15926 FUN_143c15926 body=38 status=ok
// SIG undefined FUN_143c15926(void)

undefined8 FUN_143c15926(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1594c FUN_143c1594c body=867 status=ok
// SIG undefined FUN_143c1594c(void)

void FUN_143c1594c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  PRTL_CRITICAL_SECTION_DEBUG p_Var14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar10 = &local_c0;
    if (local_b8 != (undefined8 *)0x0) {
      puVar10 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_b0,0);
    puVar11 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar11 = puVar12 + 2;
    }
    memcpy(puVar11,puVar10,(longlong)(int)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar10 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar10 = &local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar12 + 5;
    }
    memcpy(puVar11,puVar10,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar2 = **(longlong **)(param_1 + 0x1c0);
  if (lVar2 == 0) {
    uVar13 = 0;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar13 = (undefined4)(*(longlong **)(param_1 + 0x1c0))[2];
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1cc);
  uVar4 = *(undefined8 *)(param_1 + 0x1d4);
  cVar9 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x58))();
  iVar8 = (int)DAT_14c872be0;
  if (cVar9 == '\0') {
    uStack_98 = 0;
    local_90 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x20) + 0x10);
    local_90 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x38) + 0x10);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  local_a0 = 6;
  uVar1 = *(undefined4 *)(param_1 + 0x1c8);
  uVar6 = *(undefined8 *)(param_1 + 0x1cc);
  uVar7 = *(undefined8 *)(param_1 + 0x1d4);
  local_c0 = uVar5;
  local_b8 = puVar10;
  local_b0 = uVar3;
  local_a8 = uVar4;
  uStack_9c = uVar13;
  local_88 = uVar1;
  local_84 = uVar6;
  local_7c = uVar7;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(DAT_14cb527c8 + 0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      p_Var14 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      EnterCriticalSection(lpCriticalSection);
      if (lpCriticalSection[1].LockCount != iVar8) {
        lpCriticalSection[1].LockCount = iVar8;
        (*DAT_14cb52770)(lpCriticalSection + 1,&lpCriticalSection[1].LockCount);
      }
      p_Var14 = lpCriticalSection[1].DebugInfo;
      LeaveCriticalSection(lpCriticalSection);
    }
    local_c8 = uVar1;
    FUN_1485f5b36(uVar5,param_2,&local_b8,p_Var14);
  }
  else {
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 0xc;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x68);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar11 + 0xc;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_14afc8068;
    puVar11[2] = uVar5;
    puVar11[3] = puVar10;
    puVar11[4] = uVar3;
    puVar11[5] = uVar4;
    *(undefined4 *)(puVar11 + 6) = local_a0;
    *(undefined4 *)((longlong)puVar11 + 0x34) = uStack_9c;
    *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_98._4_4_;
    puVar11[8] = local_90;
    *(undefined4 *)(puVar11 + 9) = uVar1;
    *(undefined8 *)((longlong)puVar11 + 0x4c) = uVar6;
    *(undefined8 *)((longlong)puVar11 + 0x54) = uVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c15cb0 FUN_143c15cb0 body=128 status=ok
// SIG undefined FUN_143c15cb0(void)

void FUN_143c15cb0(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  iVar1 = (int)DAT_14c872be0;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(DAT_14cb527c8 + 0x18);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    EnterCriticalSection(lpCriticalSection);
    if (lpCriticalSection[1].LockCount != iVar1) {
      lpCriticalSection[1].LockCount = iVar1;
      (*DAT_14cb52770)(lpCriticalSection + 1,&lpCriticalSection[1].LockCount);
    }
    p_Var2 = lpCriticalSection[1].DebugInfo;
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_1485f5b36(*(undefined8 *)(param_1 + 0x10),param_2,param_1 + 0x18,p_Var2,
                *(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143c15d3c FUN_143c15d3c body=142 status=ok
// SIG undefined FUN_143c15d3c(void)

code * FUN_143c15d3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e30f70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DebugLayerCompatibility";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDebugLayerCompatibilityShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143c15dca;
}



// FUNCTION 143c15dca FUN_143c15dca body=130 status=ok
// SIG undefined FUN_143c15dca(void)

undefined1 * FUN_143c15dca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorWithoutHUD";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_143c15e4c;
}



// FUNCTION 143c15e50 FUN_143c15e50 body=23 status=ok
// SIG undefined FUN_143c15e50(void)

undefined8 FUN_143c15e50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 143c15e68 FUN_143c15e68 body=29 status=ok
// SIG undefined FUN_143c15e68(void)

undefined8 FUN_143c15e68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c15e9a FUN_143c15e9a body=85 status=ok
// SIG undefined FUN_143c15e9a(void)

void FUN_143c15e9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8140;
  return;
}



// FUNCTION 143c15ef0 FUN_143c15ef0 body=85 status=ok
// SIG undefined FUN_143c15ef0(void)

void FUN_143c15ef0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8140;
  return;
}



// FUNCTION 143c15f46 FUN_143c15f46 body=118 status=ok
// SIG undefined FUN_143c15f46(void)

void FUN_143c15f46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afc8140;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c15fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c15fde FUN_143c15fde body=43 status=ok
// SIG undefined FUN_143c15fde(void)

undefined8 FUN_143c15fde(void)

{
  if (DAT_14cb528b8 != 0) {
    FUN_141092d32(*(longlong *)(DAT_14c98e618 + 0x20) + 0x78);
  }
  return 1;
}



// FUNCTION 143c1600a FUN_143c1600a body=38 status=ok
// SIG undefined FUN_143c1600a(void)

undefined8 FUN_143c1600a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c16030 FUN_143c16030 body=874 status=ok
// SIG undefined FUN_143c16030(void)

void FUN_143c16030(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *_Dst;
  longlong lVar7;
  int iVar8;
  undefined4 *_Src;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined1 *local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_d8);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_c8;
  if ((longlong)local_c8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    _Src = &local_d8;
    if ((undefined4 *)CONCAT44(uStack_cc,local_d0) != (undefined4 *)0x0) {
      _Src = (undefined4 *)CONCAT44(uStack_cc,local_d0);
    }
    FUN_1446fe144(puVar9 + 2,local_c8,0);
    puVar5 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar5 = puVar9 + 2;
    }
    memcpy(puVar5,_Src,(longlong)local_c8);
  }
  puVar9[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  *(int *)(puVar9 + 0xe) = iStack_78;
  if ((longlong)iStack_78 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &local_c0;
    }
    FUN_1446fe1b8(puVar9 + 5,iStack_78,0);
    _Dst = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      _Dst = puVar9 + 5;
    }
    memcpy(_Dst,puVar5,(longlong)iStack_78 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  }
  *(undefined4 *)(puVar9 + 0xf) = uStack_74._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = (undefined4)uStack_6c;
  *(undefined4 *)(puVar9 + 0x10) = uStack_6c._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_64;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  cVar4 = '\x01';
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846570 != (code *)0x0)) {
    cVar4 = (*DAT_14c846570)();
  }
  iVar8 = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1c8);
  iVar6 = *(int *)(param_1 + 0x1cc) - *(int *)(param_1 + 0x1c4);
  if (iVar8 <= iVar6) {
    iVar6 = iVar8;
  }
  local_a0 = 0;
  if ((cVar4 != '\0') && (DAT_14cb529fc <= iVar6)) {
    local_a0 = FUN_14014334e();
  }
  iVar8 = (uint)*(byte *)(DAT_14cb52990 + 1) * 0x10;
  iVar6 = iVar8 + 2;
  if (*(int *)(DAT_14cb529c0 + 4) == 0) {
    iVar6 = iVar8;
  }
  iVar8 = iVar6 + 8;
  if (*(char *)(DAT_14cb529a8 + 1) == '\0') {
    iVar8 = iVar6;
  }
  local_9c = FUN_143c12078();
  uVar1 = *(undefined4 *)(param_1 + 0x1c0);
  uVar2 = *(undefined8 *)(param_1 + 0x1c4);
  uStack_d4 = (undefined4)uVar2;
  local_d0 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x1cc);
  uStack_cc = (undefined4)uVar3;
  local_c8 = (int)((ulonglong)uVar3 >> 0x20);
  local_c0 = 0;
  local_b8 = 0xfac5f1cb;
  local_b4 = 0x2dfd;
  local_b2 = 0x4f36;
  local_b0 = 0xc55652869e3ae6a1;
  local_a8 = 3;
  local_98 = iVar8;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  local_60 = &LAB_143c1639b;
  local_58 = 2;
  local_54 = 0;
  local_50 = *(undefined8 *)(param_1 + 0x1d8);
  local_d8 = uVar1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_143c163b0(&local_d8);
  }
  else {
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 0x14;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0xa8);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar9 + 0x14;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14afc8260;
    *(undefined4 *)(puVar9 + 2) = uVar1;
    *(undefined8 *)((longlong)puVar9 + 0x14) = uVar2;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = uVar3;
    puVar5 = &local_c0;
    puVar9 = puVar9 + 5;
    for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c163b0 FUN_143c163b0 body=849 status=ok
// SIG undefined FUN_143c163b0(void)

/* WARNING: Removing unreachable block (ram,0x000143c166ee) */

void FUN_143c163b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  ulonglong uVar4;
  char *_Str;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_218 [32];
  longlong local_1f8 [2];
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 *local_170;
  short local_160 [128];
  short *local_60;
  short *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a0 = *param_1;
  local_1c0 = 0;
  local_1b8 = 0x171b6435;
  uStack_1b4 = 0x4fc89b3c;
  uStack_1b0 = 0xe5fb9499;
  uStack_1ac = 0xa4aa6925;
  local_1a8 = 1;
  if (DAT_14cb52e20 == (code *)0x0) {
    (*DAT_14cb52768)(1000,"slDLSSGSetOptions",&DAT_14cb52e20);
  }
  local_178 = CONCAT44(uStack_19c,local_1a0);
  local_190 = CONCAT44(uStack_1b4,local_1b8);
  local_188 = CONCAT44(uStack_1ac,uStack_1b0);
  local_180 = local_1a8;
  local_198 = local_1c0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_170 = param_1 + 6;
  FUN_141842240();
  if ((ulonglong)(uint)param_1[0xe] < 4) {
    _Str = &DAT_14afc8b78 + *(int *)(&DAT_14afc8b78 + (ulonglong)(uint)param_1[0xe] * 4);
  }
  else {
    _Str = "Unknown";
  }
  uVar1 = param_1[0xf];
  local_60 = (short *)0x0;
  sVar3 = strlen(_Str);
  iVar10 = (int)sVar3;
  uVar5 = iVar10 + 1;
  local_50 = iVar10;
  if (uVar5 < 0x81) {
    psVar8 = (short *)0x0;
  }
  else {
    FUN_1446efa72(&local_60,0,uVar5,2);
    psVar8 = local_60;
  }
  if (psVar8 == (short *)0x0) {
    psVar8 = local_160;
  }
  local_58 = psVar8;
  if (-1 < iVar10) {
    uVar4 = 0;
    do {
      psVar8[uVar4] = (short)_Str[uVar4];
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  FUN_140002266(&local_1d8,L"%s numFramesToGenerate=%u",local_58,uVar1);
  uVar4 = uStack_1e0;
  lVar6 = (longlong)(int)uStack_1e0;
  uVar5 = (int)uStack_1e0 + 1;
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar5);
  if (uStack_1e0._4_4_ < uVar5) {
    FUN_1447a1bd6(&local_1e8,uVar4 & 0xffffffff);
  }
  lVar6 = lVar6 * 0x10;
  *(undefined8 *)(local_1e8 + lVar6) = 0;
  *(longlong *)(local_1e8 + lVar6) = local_1d8;
  *(undefined4 *)(local_1e8 + 8 + lVar6) = (undefined4)uStack_1d0;
  *(undefined4 *)(local_1e8 + 0xc + lVar6) = uStack_1d0._4_4_;
  uStack_1d0 = 0;
  local_1d8 = 0;
  if (local_60 != (short *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = local_1e8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  lVar11 = (longlong)(int)uStack_1e0;
  if (lVar11 != 0) {
    iVar10 = 1;
    lVar9 = 0;
    do {
      if ((char)iVar10 == '\0') {
        FUN_1400020e8(&local_1d8,&DAT_149e19f34,2);
      }
      iVar2 = *(int *)(lVar6 + 8 + lVar9);
      iVar10 = 0;
      iVar7 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar7 = iVar10;
      }
      FUN_1400020e8(&local_1d8,*(undefined8 *)(lVar6 + lVar9),iVar7);
      lVar9 = lVar9 + 0x10;
    } while (lVar11 * 0x10 != lVar9);
  }
  local_60 = (short *)0x0;
  local_50 = 0x11;
  lVar6 = 0;
  do {
    local_160[lVar6] = (short)"slDLSSGSetOptions"[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x12);
  local_58 = local_160;
  FUN_140002266(local_1f8,&DAT_149e0625e,local_160);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (short *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52e20)(&local_1c0,param_1 + 6);
  FUN_1447a1747(local_1e8,uStack_1e0 & 0xffffffff);
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c16714 FUN_143c16714 body=29 status=ok
// SIG undefined FUN_143c16714(void)

undefined8 FUN_143c16714(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c16746 FUN_143c16746 body=85 status=ok
// SIG undefined FUN_143c16746(void)

void FUN_143c16746(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc86c0;
  return;
}



// FUNCTION 143c1679c FUN_143c1679c body=85 status=ok
// SIG undefined FUN_143c1679c(void)

void FUN_143c1679c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc86c0;
  return;
}



// FUNCTION 143c167f2 FUN_143c167f2 body=118 status=ok
// SIG undefined FUN_143c167f2(void)

void FUN_143c167f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afc86c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c16859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c1686e FUN_143c1686e body=16 status=ok
// SIG undefined FUN_143c1686e(void)

undefined1 FUN_143c1686e(void)

{
  FUN_143c1687e();
  return 1;
}



// FUNCTION 143c1687e FUN_143c1687e body=89 status=ok
// SIG undefined FUN_143c1687e(void)

void FUN_143c1687e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = DAT_14c968090;
  plVar3 = DAT_14c968088;
  if (DAT_14c968090 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
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
  lVar5 = FUN_1456d850a();
                    /* WARNING: Could not recover jumptable at 0x000143c168d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x128))(plVar3,lVar5 + 8);
  return;
}



// FUNCTION 143c1691c FUN_143c1691c body=29 status=ok
// SIG undefined FUN_143c1691c(void)

undefined8 FUN_143c1691c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1693a FUN_143c1693a body=29 status=ok
// SIG undefined FUN_143c1693a(void)

undefined8 FUN_143c1693a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1696c FUN_143c1696c body=93 status=ok
// SIG undefined FUN_143c1696c(void)

void FUN_143c1696c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc88a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c169ca FUN_143c169ca body=93 status=ok
// SIG undefined FUN_143c169ca(void)

void FUN_143c169ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc88a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c16a28 FUN_143c16a28 body=126 status=ok
// SIG undefined FUN_143c16a28(void)

void FUN_143c16a28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aa9a7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc88a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c16a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c16aa6 FUN_143c16aa6 body=66 status=ok
// SIG undefined FUN_143c16aa6(void)

void FUN_143c16aa6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143c16b30(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c16aea FUN_143c16aea body=68 status=ok
// SIG undefined FUN_143c16aea(void)

undefined8 FUN_143c16aea(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143c16b30(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c16b30 FUN_143c16b30 body=209 status=ok
// SIG undefined FUN_143c16b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c16b30(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar4 = *param_1;
  plVar9 = *(longlong **)*param_2;
  if (plVar9 == (longlong *)0x0) {
    uVar6 = (**(code **)(_DAT_00000000 + 8))(0);
    plVar9 = *(longlong **)(lVar4 + 0x28);
    cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar6);
    if (cVar5 != '\0') {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
    }
  }
  else {
    puVar1 = (uint *)(plVar9 + 1);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    plVar8 = *(longlong **)(lVar4 + 0x28);
    cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,uVar6);
    if (cVar5 != '\0') {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)plVar9 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = (longlong)plVar9;
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
  return;
}



// FUNCTION 143c16c02 FUN_143c16c02 body=29 status=ok
// SIG undefined FUN_143c16c02(void)

undefined8 FUN_143c16c02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c16c34 FUN_143c16c34 body=85 status=ok
// SIG undefined FUN_143c16c34(void)

void FUN_143c16c34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8910;
  return;
}



// FUNCTION 143c16c8a FUN_143c16c8a body=85 status=ok
// SIG undefined FUN_143c16c8a(void)

void FUN_143c16c8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8910;
  return;
}



// FUNCTION 143c16ce0 FUN_143c16ce0 body=118 status=ok
// SIG undefined FUN_143c16ce0(void)

void FUN_143c16ce0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afc8910;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c16d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c16d5c FUN_143c16d5c body=16 status=ok
// SIG undefined FUN_143c16d5c(void)

undefined1 FUN_143c16d5c(void)

{
  FUN_143c16d6c();
  return 1;
}



// FUNCTION 143c16d6c FUN_143c16d6c body=73 status=ok
// SIG undefined FUN_143c16d6c(void)

void FUN_143c16d6c(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_14c98e618 + 0x20);
  if (DAT_14cb52c90 != 0) {
    FUN_14480f766(lVar1 + 0x48);
  }
  if (DAT_14cb52c98 != 0) {
    FUN_14480f766(lVar1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 143c16db6 FUN_143c16db6 body=170 status=ok
// SIG undefined FUN_143c16db6(void)

void FUN_143c16db6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = (longlong)*(int *)(lVar2 + 0x30);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    lVar2 = *(longlong *)(lVar2 + 0x28);
    lVar4 = 0;
    do {
      local_78 = 0;
      local_70 = 0x4fc89b3c171b6435;
      uStack_68 = 0xa4aa6925e5fb9499;
      local_60 = 1;
      local_58 = uVar1;
      (*DAT_14cb52730)(*(undefined4 *)(lVar2 + lVar4),&local_78);
      lVar4 = lVar4 + 4;
    } while (lVar3 * 4 != lVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c16e62 FUN_143c16e62 body=86 status=ok
// SIG undefined FUN_143c16e62(void)

undefined8 * FUN_143c16e62(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afc8980;
  FUN_1418421fa(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c16eb8 FUN_143c16eb8 body=1238 status=ok
// SIG undefined FUN_143c16eb8(void)

void FUN_143c16eb8(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **_Src;
  undefined1 *_Src_00;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_188 [40];
  longlong ***local_160;
  undefined4 local_158;
  longlong *local_150;
  longlong **local_148;
  int local_140;
  undefined1 local_138 [64];
  undefined1 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,&local_150);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_140;
  if ((longlong)local_140 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    _Src = &local_150;
    if (local_148 != (longlong **)0x0) {
      _Src = local_148;
    }
    FUN_1446fe144(puVar7 + 2,local_140,0);
    puVar4 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 2;
    }
    memcpy(puVar4,_Src,(longlong)local_140);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_f0;
  if ((longlong)local_f0 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    _Src_00 = local_f8;
    if (local_f8 == (undefined1 *)0x0) {
      _Src_00 = local_138;
    }
    FUN_1446fe1b8(puVar7 + 5,local_f0,0);
    puVar4 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 5;
    }
    memcpy(puVar4,_Src_00,(longlong)local_f0 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = (undefined4)local_e8;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = local_e8._4_4_;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_e0._4_4_;
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8(local_f8);
  }
  if (local_148 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x1e8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x1e0);
    lVar8 = (longlong)*(int *)(param_1 + 0x1e8) * 0x40 + lVar9;
    do {
      local_70 = (undefined8 *)0x0;
      plVar1 = *(longlong **)(param_1 + 0x1c8);
      if (*plVar1 == 0) {
        local_b4 = 0;
        local_d0 = 0;
      }
      else {
        local_b4 = (undefined4)plVar1[2];
        local_d0 = *(undefined8 *)(*plVar1 + 0x10);
      }
      local_c8 = *(undefined8 *)(lVar9 + 0x10);
      local_c0 = *(undefined8 *)(lVar9 + 0x18);
      local_b8 = 5;
      local_b0 = 0;
      uStack_a8 = 0;
      uVar10 = 0;
      if (plVar1[3] == 0) {
        local_84 = 0;
        local_a0 = 0;
      }
      else {
        local_84 = (undefined4)plVar1[5];
        local_a0 = *(undefined8 *)(plVar1[3] + 0x10);
      }
      local_68 = &DAT_200000002;
      local_88 = 4;
      local_80 = 0;
      uStack_78 = 0;
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
        uVar10 = *(undefined4 *)(lVar9 + 0x38);
      }
      local_98 = local_c8;
      local_90 = local_c0;
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x58))();
      if (cVar3 != '\0') {
        puVar4 = local_70;
        if (local_70 == (undefined8 *)0x0) {
          puVar4 = &local_d0;
        }
        if ((int)local_68 != 0) {
          lVar5 = (longlong)(int)local_68;
          lVar2 = *(longlong *)(param_1 + 0x1c8);
          lVar6 = 0;
          do {
            *(undefined8 *)((longlong)puVar4 + lVar6 + 0x20) =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x10);
            *(undefined8 *)((longlong)puVar4 + lVar6 + 0x28) =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0x48) + 0x10);
            lVar6 = lVar6 + 0x30;
          } while (lVar5 * 0x30 != lVar6);
        }
      }
      local_150 = *(longlong **)(param_1 + 0x1b8);
      local_e8 = (longlong ***)0x0;
      puVar4 = local_70;
      if (local_70 == (undefined8 *)0x0) {
        puVar4 = &local_d0;
      }
      FUN_1485f77f6(&local_148,puVar4);
      local_d8 = uVar10;
      if (*(char *)((longlong)param_2 + 100) == '\0') {
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar7 + 0x12;
        if ((undefined8 *)param_2[1] < puVar4) {
          FUN_140023dd8(param_2,0x98);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar4 = puVar7 + 0x12;
        }
        *param_2 = (ulonglong)puVar4;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar7;
        param_2[6] = (ulonglong)(puVar7 + 1);
        puVar7[1] = 0;
        *puVar7 = &PTR_FUN_14afc8998;
        puVar7[2] = local_150;
        if (local_e8 == (longlong ***)0x0) {
          memmove(puVar7 + 3,&local_148,0x60);
        }
        puVar7[0xf] = local_e8;
        local_e8 = (longlong ***)0x0;
        *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_e0._4_4_;
        uStack_e0 = 0x200000000;
        *(undefined4 *)(puVar7 + 0x11) = local_d8;
      }
      else {
        local_160 = local_e8;
        if (local_e8 == (longlong ***)0x0) {
          local_160 = &local_148;
        }
        local_158 = (undefined4)uStack_e0;
        (**(code **)(*local_150 + 0x10))(local_150,param_2);
        if (local_e8 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x40;
    } while (lVar9 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c17390 FUN_143c17390 body=115 status=ok
// SIG undefined FUN_143c17390(void)

void FUN_143c17390(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_20 = *(longlong *)(param_1 + 0x78);
  }
  local_18 = *(undefined4 *)(param_1 + 0x80);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c17410 FUN_143c17410 body=31 status=ok
// SIG undefined FUN_143c17410(void)

undefined8 FUN_143c17410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c17430 FUN_143c17430 body=38 status=ok
// SIG undefined FUN_143c17430(void)

undefined8 FUN_143c17430(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c17456 FUN_143c17456 body=1477 status=ok
// SIG undefined FUN_143c17456(void)

void FUN_143c17456(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **_Src;
  undefined1 *_Src_00;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_308 [32];
  int *local_2e8;
  undefined4 local_2e0 [2];
  undefined8 local_2d8 [3];
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  int local_1f8 [2];
  undefined1 local_1f0 [64];
  undefined1 *local_1b0;
  int local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_144b1c6fa(param_1 + 0x10,&local_208);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_1f8[0];
  if ((longlong)local_1f8[0] == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    _Src = &local_208;
    if ((longlong **)CONCAT44(uStack_1fc,local_200) != (longlong **)0x0) {
      _Src = (longlong **)CONCAT44(uStack_1fc,local_200);
    }
    FUN_1446fe144(puVar8 + 2,local_1f8[0],0);
    puVar5 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar5 = puVar8 + 2;
    }
    memcpy(puVar5,_Src,(longlong)local_1f8[0]);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_1a8;
  if ((longlong)local_1a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    _Src_00 = local_1b0;
    if (local_1b0 == (undefined1 *)0x0) {
      _Src_00 = local_1f0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_1a8,0);
    puVar5 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar8 + 5;
    }
    memcpy(puVar5,_Src_00,(longlong)local_1a8 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_1a0;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_19c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_198;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_194;
  if (local_1b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_1b0);
  }
  if (CONCAT44(uStack_1fc,local_200) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  local_208 = plVar1;
  memcpy(local_1f8,(void *)(param_1 + 0x1d0),0x1a8);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  else {
    puVar8 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar8 + 0x3a;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x1e0);
      puVar8 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar8 + 0x3a;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_14afc8af8;
    memcpy(puVar8 + 2,&local_208,0x1c0);
  }
  local_218 = (undefined8 *)0x0;
  local_20c = 4;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  local_2d8[1] = *(undefined8 *)(param_1 + 0x380);
  local_2d8[2] = *(undefined8 *)(param_1 + 0x388);
  local_28c = 0;
  if (*plVar1 == 0) {
    local_2bc = 0;
    local_2d8[0] = 0;
  }
  else {
    local_2bc = (undefined4)plVar1[2];
    local_2d8[0] = *(undefined8 *)(*plVar1 + 0x10);
  }
  local_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  lVar6 = plVar1[3];
  if (lVar6 == 0) {
    local_2a8 = 0;
  }
  else {
    local_28c = (undefined4)plVar1[5];
    local_2a8 = *(undefined8 *)(lVar6 + 0x10);
  }
  puVar5 = &DAT_14c967818;
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar6 + 0x84);
  }
  local_298 = *puVar5;
  local_2a0 = DAT_14c967818;
  local_290 = 1;
  local_288 = 0;
  uStack_280 = 0;
  local_22c = 0;
  if (plVar1[6] == 0) {
    local_25c = 0;
    local_278 = 0;
  }
  else {
    local_25c = (undefined4)plVar1[8];
    local_278 = *(undefined8 *)(plVar1[6] + 0x10);
  }
  local_240 = *(undefined8 *)(param_1 + 0x3a8);
  local_238 = *(undefined8 *)(param_1 + 0x3b0);
  local_260 = 2;
  local_258 = 0;
  uStack_250 = 0;
  if (plVar1[9] == 0) {
    local_248 = 0;
  }
  else {
    local_22c = (undefined4)plVar1[0xb];
    local_248 = *(undefined8 *)(plVar1[9] + 0x10);
  }
  local_210 = 4;
  local_230 = 3;
  local_228 = 0;
  uStack_220 = 0;
  local_270 = local_2d8[1];
  local_268 = local_2d8[2];
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x58))();
  if (cVar4 == '\0') {
    puVar5 = (undefined8 *)0x0;
    uVar7 = 4;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x60) + 0x10);
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x78) + 0x10);
    lVar6 = 0x28;
    do {
      *(undefined8 *)((longlong)local_2e0 + lVar6) = uVar2;
      *(undefined8 *)((longlong)local_2d8 + lVar6) = uVar3;
      lVar6 = lVar6 + 0x30;
      puVar5 = local_218;
      uVar7 = local_210;
    } while (lVar6 != 0xe8);
  }
  local_200 = *(undefined4 *)(param_1 + 0x1d0);
  local_208 = *(longlong **)(param_1 + 0x1c0);
  local_138 = (int *)0x0;
  puVar8 = local_2d8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar8 = puVar5;
  }
  FUN_1485f7e90(local_1f8,puVar8,uVar7);
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x1e;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0xf8);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar8 + 0x1e;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14afc8b00;
    *(undefined4 *)(puVar8 + 3) = local_200;
    puVar8[2] = local_208;
    if (local_138 == (int *)0x0) {
      memmove(puVar8 + 4,local_1f8,0xc0);
    }
    puVar8[0x1c] = local_138;
    local_138 = (int *)0x0;
    *(undefined4 *)(puVar8 + 0x1d) = local_130;
    *(undefined4 *)((longlong)puVar8 + 0xec) = local_12c;
  }
  else {
    local_2e8 = local_1f8;
    if (local_138 != (int *)0x0) {
      local_2e8 = local_138;
    }
    local_2e0[0] = local_130;
    (**(code **)(*local_208 + 0x10))(local_208,param_2,local_200);
    if (local_138 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_218 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c17a32 FUN_143c17a32 body=118 status=ok
// SIG undefined FUN_143c17a32(void)

void FUN_143c17a32(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    local_20 = *(longlong *)(param_1 + 0xe0);
  }
  local_18 = *(undefined4 *)(param_1 + 0xe8);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c17ab6 FUN_143c17ab6 body=38 status=ok
// SIG undefined FUN_143c17ab6(void)

undefined8 FUN_143c17ab6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c17adc FUN_143c17adc body=615 status=ok
// SIG undefined FUN_143c17adc(void)

void FUN_143c17adc(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 2;
    }
    memcpy(puVar5,puVar6,(longlong)local_b0);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 5;
    }
    memcpy(puVar5,puVar6,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 0x1bc);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar7 + 2) = (float)iVar3;
  *(float *)((longlong)puVar7 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(float *)((longlong)puVar7 + 0x1c) = (float)iVar2;
  *(float *)(puVar7 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  FUN_1431f0c86(param_2,0);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c17d50 FUN_143c17d50 body=2459 status=ok
// SIG undefined FUN_143c17d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c17d50(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb52838);
  if (cVar1 == '\0') {
    _DAT_14cb52838 = 0;
    uRam000000014cb52840 = 0;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 4;
  FUN_140bd5914(&DAT_14cb52848,L"r.Streamline.InitializePlugin",&local_50,
                L"Enable/disable initializing the Streamline plugin (default = true)");
  atexit(FUN_143c0fba0);
  local_50 = 0x800000014afb864c;
  local_3c = 0xe;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_1464a9410(&local_50);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb52868,L"r.Streamline.DeepDVC.Enable",&local_50,
                L"DeepDVC mode (default = 0)\n0: off\n1: always on\n");
  atexit(FUN_143c10b2b);
  local_50._0_4_ = 0x3f000000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14cb52880,L"r.Streamline.DeepDVC.Intensity",&local_50,
                L"DeepDVC Intensity (default = 0.5, range [0..1])\nControls how strong or subtle the filter effect will be on an image.\nA low intensity will keep the images closer to the original, while a high intensity will make the filter effect more pronounced.\nNote: \'0\' disables DeepDVC implicitely\n"
               );
  atexit(FUN_143c10b70);
  local_50._0_4_ = 0x3f000000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14cb52898,L"r.Streamline.DeepDVC.SaturationBoost",&local_50,
                L"DeepDVC SaturationBoost(default = 0.5) [0..1]\nEnhances the colors in them image, making them more vibrant and eye-catching.\nThis setting will only be active if r.Streamline.DeepDVC.Intensity is relatively high. Once active, colors pop up more, making the image look more lively.\nNote: Applied only when r.Streamline.DeepDVC.Intensity > 0\n"
               );
  atexit(FUN_143c10bb5);
  DAT_14cb528b8 = 0;
  local_50._0_4_ = 0;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb528c0,L"r.Streamline.DLSSG.Enable",&local_50,
                L"DLSS-FG mode (default = 0)\n0: off\n1: always on\n2: auto mode (on only when it helps)\n"
               );
  atexit(FUN_143c11016);
  local_50 = CONCAT44(local_50._4_4_,2);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb528d8,L"r.Streamline.DLSSG.AdjustMotionBlurTimeScale",&local_50,
                L"When DLSS-G is active, adjust the motion blur timescale based on the generated frames\n0: disabled\n1: enabled, not supporting auto mode\n2: enabled, supporting auto mode by using last frame\'s actually presented frames (default)\n"
               );
  atexit(FUN_143c1105b);
  local_50._0_1_ = 1;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb528f0,L"r.Streamline.TagUIColorAlpha",&local_50,
                L"Pass UI color and alpha into Streamline (default = true)\n");
  atexit(FUN_143c110a0);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52908,L"r.Streamline.TagBackbuffer",&local_50,
                L"Pass backbuffer extent into Streamline (default = true)\n");
  atexit(FUN_143c110e5);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 0x20;
  FUN_140a6b41e(&DAT_14cb52920,L"r.Streamline.TagUIColorAlphaThreshold",&local_50,
                L"UI extraction pass alpha threshold value(default = 0.0) \n");
  atexit(FUN_143c1112a);
  local_50 = local_50 & 0xffffffffffffff00;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52938,L"r.Streamline.Editor.TagUIColorAlpha",&local_50,
                L"Experimental: Pass UI color and alpha into Streamline in Editor PIE windows (default = false)\n"
               );
  atexit(FUN_143c1116f);
  local_50._0_1_ = 1;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52950,L"r.Streamline.DLSSG.CheckStatusPerFrame",&local_50,
                L"Check the DLSSG status at runtime and assert if it\'s failing somehow (default = true)\n"
               );
  atexit(FUN_143c111b4);
  local_50._0_1_ = 0;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52968,L"r.Streamline.ForceTagging",&local_50,
                L"Force tagging Streamline resources even if they are not required based on active Streamline features (default = false)\n"
               );
  atexit(FUN_143c111f9);
  local_50._0_1_ = 0;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52980,L"r.Streamline.DLSSG.FullScreenMenuDetection",&local_50,
                L"Automatically disable DLSS-FG if full screen menus are detected (default = false)\n"
               );
  atexit(FUN_143c1123e);
  local_50 = (ulonglong)local_50._1_7_ << 8;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52998,L"r.Streamline.DLSSG.RetainResourcesWhenOff",&local_50,
                L"Instruct DLSS-G to not release resources when turned off (default = false)");
  atexit(FUN_143c11283);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb529b0,L"r.Streamline.DLSSG.DynamicResolutionMode",&local_50,
                L"Experimental: Pass in sl::DLSSGFlags::eDynamicResolutionEnabled (default = 0)\n0: off\n1: on\n"
               );
  atexit(FUN_143c112c8);
  local_50._0_4_ = 1;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb529c8,L"r.Streamline.DLSSG.FramesToGenerate",&local_50,
                L"Number of frames to generate  (default = 1)\n1..3: \n");
  atexit(FUN_143c1130d);
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb52a00,L"r.Streamline.Latewarp.Enable",&local_50,
                L"Enable/disable Latewarp (default = 1)\n");
  atexit(FUN_143c12101);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 4;
  FUN_140bd5914(&DAT_14cb52a18,L"r.Streamline.UnregisterReflexPlugin",&local_50,&DAT_14afc5d8a);
  atexit(FUN_143c12146);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52a30,L"t.Streamline.Reflex.Enable",&local_50,
                L"Enable Streamline Reflex extension. (default = 0)\n0: Disabled\n1: Enabled)\n");
  atexit(FUN_143c1218b);
  local_50._0_4_ = 1;
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52a48,L"t.Streamline.Reflex.EnableLatencyMarkers",&local_50,
                L"Enable Streamline PC Latency metrics. (default = 1)\n0: Disabled\n1: Enabled)\n");
  atexit(FUN_143c121d0);
  local_50 = CONCAT44(local_50._4_4_,1);
  local_58 = 4;
  FUN_14078dbce(&DAT_14cb52a60,L"t.Streamline.Reflex.Auto",&local_50,
                L"Enable Streamline Reflex extension when other SL features need it. (default = 1)\n0: Disabled\n1: Enabled)\n"
               );
  atexit(FUN_143c12215);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52a78,L"t.Streamline.Reflex.EnableInEditor",&local_50,
                L"Enable Streamline Reflex and PC Latency in the editor. (default = 1)\n0: Disabled\n1: Enabled)\n"
               );
  atexit(FUN_143c1225a);
  local_50 = CONCAT44(local_50._4_4_,1);
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52a90,L"t.Streamline.Reflex.Mode",&local_50,
                L"Streamline Reflex mode (default = 1)\n0: off \n1: low latency\n2: low latency with boost\n"
               );
  atexit(FUN_143c1229f);
  local_50._0_1_ = 1;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb52aa8,L"t.Streamline.Reflex.HandleMaxTickRate",&local_50,
                L"Controls whether Streamline Reflex handles frame rate limiting instead of the engine (default = true)"
               );
  atexit(FUN_143c122e4);
  DAT_14cb52ac0 = 0;
  atexit((_func_5014 *)&LAB_143c12329);
  DAT_14cb52ac8 = 0;
  atexit((_func_5014 *)&LAB_143c12345);
  local_50._0_1_ = 0;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52ae8,L"r.Streamline.Reflex.CameraPredictor",&local_50,
                L"Which predictive rendering camera predictor to use (default = 0)\n0: Use the first person predictor\n1: Use the third person predictor\n"
               );
  atexit(FUN_143c130eb);
  local_50._0_1_ = 0;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52b00,L"r.Streamline.Reflex.PredictiveRendering",&local_50,
                L"Whether predictive rendering is enabled or not. (default = 0), since stock engine\n"
               );
  atexit(FUN_143c13130);
  local_50 = (ulonglong)local_50._1_7_ << 8;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52b18,L"r.Streamline.Reflex.ClipCorrection",&local_50,
                L"Whether clip correction is enabled or not. (default = 0)\n");
  atexit(FUN_143c13175);
  local_50._0_4_ = 0x41200000;
  local_58 = 0x20;
  FUN_140a6b41e(&DAT_14cb52b30,L"r.Streamline.Reflex.ClipRadius",&local_50,
                L"Collision radius for camera extrapolation clipping. (default = 10.f)\n");
  atexit(FUN_143c131ba);
  local_50._0_4_ = 0;
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52b48,L"r.Streamline.Reflex.ActorDebug",&local_50,
                L"Whether Actor debug messages are shown. (default = 0)\n");
  atexit(FUN_143c131ff);
  local_50 = CONCAT44(local_50._4_4_,1);
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52b60,L"r.Streamline.Reflex.PredictiveRendering.LateUpdateMode",&local_50,
                L"Select how the late update matrix is applied. (default = 1)\n");
  atexit(FUN_143c13244);
  DAT_14cb52b78 = 0;
  _DAT_14cb52b80 = 0;
  atexit(FUN_143c13289);
  local_50._0_1_ = 1;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52b88,L"r.Streamline.TagSceneColorWithoutHUD",&local_50,
                L"Pass scene color without HUD into DLSS Frame Generation (default = true)\n");
  atexit(FUN_143c132ba);
  local_50._0_1_ = 1;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52ba0,L"r.Streamline.Editor.TagSceneColorWithoutHUD",&local_50,
                L"Pass scene color without HUD into DLSS Frame Generation in the editor (default = true)\n"
               );
  atexit(FUN_143c132ff);
  local_50._0_1_ = 0;
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52bb8,L"r.Streamline.TagCustomDepth",&local_50,
                L"Pass custom depth into Streamline  (default = false)\n");
  atexit(FUN_143c13344);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52bd0,L"r.Streamline.TagVelocities",&local_50,
                L"Pass motion vectors into Streamline  (default = true)\n");
  atexit(FUN_143c13389);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 0x20;
  FUN_14078dbce(&DAT_14cb52be8,L"r.Streamline.DilateMotionVectors",&local_50,
                L" 0: pass low resolution motion vectors into DLSS Frame Generation (default)\n 1: pass dilated high resolution motion vectors into DLSS Frame Generation. This can help with improving image quality of thin details."
               );
  atexit(FUN_143c133ce);
  local_50._0_4_ = 0x3f800000;
  local_58 = 0x20;
  FUN_140a6b41e(&DAT_14cb52c00,L"r.Streamline.MotionVectorScale",&local_50,
                L"Scale DLSS Frame Generation motion vectors by this constant, in addition to the scale by 1/ the view rect size. (default = 1)\n"
               );
  atexit(FUN_143c13413);
  local_50._0_4_ = 0x3c23d70a;
  local_58 = 0x20;
  FUN_140a6b41e(&DAT_14cb52c18,L"r.Streamline.CustomCameraNearPlane",&local_50,
                L"Custom distance to camera near plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 0.01f)\n"
               );
  atexit(FUN_143c13458);
  local_50._0_4_ = 0x47927c00;
  local_58 = 0x20;
  FUN_140a6b41e(&DAT_14cb52c30,L"r.Streamline.CustomCameraFarPlane",&local_50,
                L"Custom distance to camera far plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 75000.0f)\n"
               );
  atexit(FUN_143c1349d);
  local_50._0_4_ = 0xffffffff;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb52c48,L"r.Streamline.ViewIdOverride",&local_50,
                L"Replace the view id passed into Streamline based on\n-1: Automatic, based on the state of r.Streamline.ViewIndexToTag (default)\n0: use ViewState.UniqueID \n1: overrride to 0 )\n"
               );
  atexit(FUN_143c134e2);
  local_50 = CONCAT44(local_50._4_4_,0xffffffff);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb52c60,L"r.Streamline.ViewIndexToTag",&local_50,
                L"Which view of a view family to tag\n-1: all views (default)\n0: first view\n1..n: nth view, typically up to 3 when having 4 player split screen view families\n"
               );
  atexit(FUN_143c13527);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_58 = 0x20;
  FUN_140bd5914(&DAT_14cb52c78,L"r.Streamline.ClearSceneColorAlpha",&local_50,
                L"Clear alpha of scenecolor at the end of the Streamline view extension to allow subsequent UI drawcalls be represented correctly in the alpha channel (default = true)\n"
               );
  atexit(FUN_143c1356c);
  DAT_14cb52c90 = 0;
  DAT_14cb52c98 = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c186ec FUN_143c186ec body=57 status=ok
// SIG undefined FUN_143c186ec(void)

void FUN_143c186ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52f90 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52f90 = FUN_14171c317(FUN_1464a99d9,uVar1,L"EStreamlineFeature");
  }
  return;
}



// FUNCTION 143c18725 FUN_143c18725 body=57 status=ok
// SIG undefined FUN_143c18725(void)

void FUN_143c18725(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52fa8 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52fa8 = FUN_14171c317(FUN_1464a9a0a,uVar1,L"EStreamlineFeatureSupport");
  }
  return;
}



// FUNCTION 143c1875e FUN_143c1875e body=57 status=ok
// SIG undefined FUN_143c1875e(void)

void FUN_143c1875e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52fc0 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52fc0 = FUN_14171c317(FUN_1464a9a3b,uVar1,L"EStreamlineFeatureRequirementsFlags");
  }
  return;
}



// FUNCTION 143c18797 FUN_143c18797 body=111 status=ok
// SIG undefined FUN_143c18797(void)

bool FUN_143c18797(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_14cb52fc0 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52fc0 = FUN_14171c317(FUN_1464a9a3b,uVar1);
  }
  param_1 = param_1 & 0xff;
  if (1 < *(int *)(DAT_14cb52fc0 + 0x48)) {
    lVar2 = 0;
    do {
      param_1 = param_1 & ~*(ulonglong *)(*(longlong *)(DAT_14cb52fc0 + 0x40) + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)(*(int *)(DAT_14cb52fc0 + 0x48) - 1) << 4 != lVar2);
  }
  return param_1 == 0;
}



// FUNCTION 143c18806 FUN_143c18806 body=139 status=ok
// SIG undefined FUN_143c18806(void)

bool FUN_143c18806(byte param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14cb52f90 == 0) {
    uVar3 = FUN_145a24fed();
    DAT_14cb52f90 = FUN_14171c317(FUN_1464a99d9,uVar3);
  }
  uVar2 = (ulonglong)*(int *)(DAT_14cb52f90 + 0x48);
  if ((longlong)uVar2 < 1) {
LAB_143c18861:
    bVar7 = false;
  }
  else {
    uVar5 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cb52f90 + 0x40) + 8) != uVar5) {
      uVar6 = 0;
      puVar4 = (ulonglong *)(*(longlong *)(DAT_14cb52f90 + 0x40) + 0x18);
      do {
        if (uVar2 - 1 == uVar6) goto LAB_143c18861;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar1 != uVar5);
      if (uVar2 <= uVar6) goto LAB_143c18861;
    }
    uVar2 = FUN_1404d8156();
    bVar7 = uVar2 != uVar5;
  }
  return bVar7;
}



// FUNCTION 143c18892 FUN_143c18892 body=89 status=ok
// SIG undefined FUN_143c18892(void)

void FUN_143c18892(void)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2), cVar1 == '\0'))
  {
    return;
  }
  if (DAT_14cb53038 == '\0') {
    DAT_14cb53038 = '\x01';
  }
  return;
}



// FUNCTION 143c18908 FUN_143c18908 body=164 status=ok
// SIG undefined FUN_143c18908(void)

void FUN_143c18908(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14afc9e10;
  local_38 = 3;
  local_48 = 2;
  FUN_14282b410(L"/Script/StreamlineBlueprint",&PTR_FUN_14afc9ec0,1,&PTR_FUN_14afc9e70);
  local_28 = 0x800000014afc9ee8;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a9c96(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c189b0 FUN_143c189b0 body=57 status=ok
// SIG undefined FUN_143c189b0(void)

void FUN_143c189b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53048 == 0) {
    uVar1 = FUN_1464a9e44();
    DAT_14cb53048 = FUN_14171c317(FUN_1464a9e73,uVar1,L"EStreamlineReflexMode");
  }
  return;
}



// FUNCTION 143c189ea FUN_143c189ea body=423 status=ok
// SIG undefined FUN_143c189ea(void)

uint FUN_143c189ea(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_1401c23cc(&local_60);
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_60);
  uVar10 = 0;
  if (0 < (int)uVar5) {
    do {
      lVar7 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_60,uVar10);
      uVar3 = uStack_50;
      lVar9 = lVar7 + -8;
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      lVar7 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_1401c24ca(&local_58,uVar3 & 0xffffffff);
      }
      lVar2 = local_58;
      *(longlong *)(local_58 + lVar7 * 8) = lVar9;
      uVar10 = uVar10 + 1;
    } while (uVar5 != uVar10);
    lVar9 = (longlong)(int)uStack_50;
    if (lVar9 == 0) {
      uVar10 = 0;
    }
    else {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar7);
        plVar8 = (longlong *)FUN_14589669c();
        if ((plVar1 == plVar8) && (cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1), cVar4 != '\0')) {
          uVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
          uVar10 = 0;
          if ((uVar5 & 3) != 2) {
            uVar10 = uVar5;
          }
          goto LAB_143c18b02;
        }
        lVar7 = lVar7 + 8;
      } while (lVar9 * 8 != lVar7);
      uVar10 = 0;
    }
  }
LAB_143c18b02:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 143c18b92 FUN_143c18b92 body=91 status=ok
// SIG undefined FUN_143c18b92(void)

void FUN_143c18b92(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  uVar2 = FUN_1456d839c();
  FUN_1459a8670(2,uVar2);
  return;
}



// FUNCTION 143c18bed FUN_143c18bed body=160 status=ok
// SIG undefined FUN_143c18bed(void)

void FUN_143c18bed(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14afcb470;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/StreamlineReflexBlueprint",&PTR_FUN_14afcb490,1,0);
  local_28 = 0x800000014afcb542;
  local_14 = 0x19;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464aa0f2(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c18c90 FUN_143c18c90 body=34 status=ok
// SIG undefined FUN_143c18c90(void)

void FUN_143c18c90(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x000143c18cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x510))(plVar1);
  return;
}



// FUNCTION 143c18cb4 FUN_143c18cb4 body=173 status=ok
// SIG undefined FUN_143c18cb4(void)

void FUN_143c18cb4(longlong *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x538))(plVar1,param_5,0);
  uStack_50 = (**(code **)(*param_1 + 0x20))(param_1);
  local_58 = 0;
  uStack_40 = (ulonglong)param_3;
  _local_48 = CONCAT44(param_2,param_4);
  (**(code **)(*plVar1 + 0xd0))(plVar1,1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c18d64 FUN_143c18d64 body=15 status=ok
// SIG undefined FUN_143c18d64(void)

undefined8 FUN_143c18d64(void)

{
  return **(undefined8 **)(DAT_14ca83900 + 0x48);
}



// FUNCTION 143c18d73 FUN_143c18d73 body=12 status=ok
// SIG undefined FUN_143c18d73(void)

undefined8 FUN_143c18d73(void)

{
  return *(undefined8 *)(DAT_14ca83900 + 0x20);
}



// FUNCTION 143c18d7f FUN_143c18d7f body=19 status=ok
// SIG undefined FUN_143c18d7f(void)

undefined8 FUN_143c18d7f(void)

{
  return *(undefined8 *)(*(longlong *)(DAT_14ca83900 + 0x48) + 0xae8);
}



// FUNCTION 143c18d94 FUN_143c18d94 body=151 status=ok
// SIG undefined FUN_143c18d94(void)

undefined8 FUN_143c18d94(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  FUN_143c1a3d4(param_1,&local_30);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 200))(plVar1,puVar3,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143c18e2c FUN_143c18e2c body=294 status=ok
// SIG undefined FUN_143c18e2c(void)

void FUN_143c18e2c(longlong *param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined4 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_30 = (**(code **)(*param_1 + 0x48))(param_1);
  local_58 = local_38;
  local_38[0] = 5;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = &local_18;
  FUN_1407adb6e(&local_48);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_68,L"r.{0}.ModuleDisabled",&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  puVar2 = local_68;
  if (local_60 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 200))(plVar1,puVar2,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88,&DAT_149e0209e);
  }
                    /* WARNING: Could not recover jumptable at 0x000143c18f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,&DAT_149e0209e,0xc000000,0);
  return;
}



// FUNCTION 143c18f54 FUN_143c18f54 body=3168 status=ok
// SIG undefined FUN_143c18f54(void)

void FUN_143c18f54(longlong *param_1)

{
  int *piVar1;
  wchar_t *_Str;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong **pplVar17;
  longlong lVar18;
  int iVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_100;
  longlong local_f8 [3];
  longlong **local_e0;
  wchar_t **local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  int local_c0;
  longlong **local_b8;
  wchar_t **local_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  ulonglong local_90;
  undefined *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_cc = 0;
  local_90 = (**(code **)(*param_1 + 0x48))();
  local_98 = (longlong *)CONCAT44(local_98._4_4_,5);
  local_88 = (undefined *)0x0;
  uStack_80 = 0;
  local_e0 = &local_98;
  local_d8 = &local_78;
  FUN_1407adb6e(&local_b8);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_a8,L"{0}LogLevel=",&local_b8);
  plVar12 = local_a8;
  if (local_a0 == 0) {
    plVar12 = (longlong *)&DAT_149dfb77a;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_141369f9a(&DAT_14c846b20,plVar12,&local_cc);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_b8,(ulonglong)local_b0 & 0xffffffff);
  if (local_b8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = DAT_14c8407a8;
    local_90 = (**(code **)(*param_1 + 0x48))(param_1);
    local_98 = (longlong *)CONCAT44(local_98._4_4_,5);
    local_88 = (undefined *)0x0;
    uStack_80 = 0;
    local_b8 = &local_98;
    local_b0 = &local_78;
    FUN_1407adb6e(&local_a8);
    FUN_140230a63();
    FUN_140230ad0(&DAT_14c8731a8,&local_c8,L"r.{0}.LogLevel",&local_a8);
    FUN_1407adb3e(local_a8,local_a0);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined *)0x0) {
      FUN_1400020a8();
    }
    plVar10 = local_c8;
    if (local_c0 == 0) {
      plVar10 = (longlong *)&DAT_149dfb77a;
    }
    uVar9 = (**(code **)(*plVar12 + 200))(plVar12,plVar10,1);
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140635eb8(uVar9,local_cc,0xc000000,0);
  }
  local_100 = param_1;
  if (DAT_14cb53100 == '\0') {
    DAT_14cb53100 = '\x01';
    lVar21 = 0;
    do {
      _Str = *(wchar_t **)((longlong)&PTR_u_libxess_dll_14afcb900 + lVar21);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1))
      {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
      (**(code **)(DAT_14c926ca8 + 0x68))(&DAT_14c926ca8,&local_a8,&DAT_14afcb7b6);
      (**(code **)(*local_a8 + 0x20))(local_a8,&local_c8);
      local_98 = local_c8;
      uVar20 = 0;
      iVar6 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar6 = 0;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6);
      local_88 = PTR_u__Binaries_ThirdParty_Win64_14c7632e8;
      uVar7 = 0;
      if (PTR_u__Binaries_ThirdParty_Win64_14c7632e8 != (undefined *)0x0) {
        sVar11 = wcslen((wchar_t *)PTR_u__Binaries_ThirdParty_Win64_14c7632e8);
        uVar7 = (int)sVar11;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
      local_78 = _Str;
      if (_Str != (wchar_t *)0x0) {
        sVar11 = wcslen(_Str);
        uVar20 = (int)sVar11;
      }
      local_70 = uVar20;
      FUN_140bee87a(&local_b8,&local_98,3);
      if (local_c8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)FUN_14054d1d4();
      pplVar17 = (longlong **)&DAT_149dfb77a;
      if ((int)local_b0 != 0) {
        pplVar17 = local_b8;
      }
      cVar4 = (**(code **)(*plVar12 + 0x48))(plVar12,pplVar17);
      if (cVar4 == '\0') {
LAB_143c19453:
        plVar12 = (longlong *)0x0;
      }
      else {
        pplVar17 = (longlong **)&DAT_149dfb77a;
        if ((int)local_b0 != 0) {
          pplVar17 = local_b8;
        }
        FUN_140056680(&local_98,pplVar17);
        uVar14 = FUN_14682fd18(&local_98);
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (uVar14 == 0) goto LAB_143c19453;
        local_110 = CONCAT44(local_110._4_4_,(int)uVar14) & 0xffffffff0000ffff;
        local_118 = CONCAT44(local_118._4_4_,(int)(uVar14 >> 0x10)) & 0xffffffff0000ffff;
        FUN_140002266(&local_98,L"%d.%d.%d.%d",uVar14 >> 0x30,(uint)(uVar14 >> 0x20) & 0xffff);
        plVar12 = local_98;
      }
      if (local_b8 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      plVar10 = (longlong *)CONCAT44(uStack_9c,local_a0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar10 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      if (plVar12 != (longlong *)0x0) {
        FUN_1400020a8(plVar12);
      }
      lVar21 = lVar21 + 8;
    } while (lVar21 != 0x20);
  }
  plVar12 = local_100;
  bVar5 = *(byte *)(local_100 + 2);
  if (bVar5 == 0) {
    uVar9 = (**(code **)(*DAT_14ca83900 + 0x20))();
    FUN_14020fad6(local_f8,uVar9);
    cVar4 = (**(code **)(*plVar12 + 0x88))(plVar12,local_f8);
    if (cVar4 != '\0') {
      bVar5 = *(byte *)(plVar12 + 2);
      goto LAB_143c191d2;
    }
    *(undefined1 *)(plVar12 + 2) = 1;
LAB_143c1957d:
    plVar10 = (longlong *)FUN_143c18d94(plVar12);
    (**(code **)(*plVar10 + 0x98))(plVar10,&DAT_149e25dfc,0xd000000,0);
  }
  else {
LAB_143c191d2:
    if ((bVar5 & 1) != 0) goto LAB_143c1957d;
    cVar4 = (**(code **)(*plVar12 + 0x90))(plVar12);
    plVar10 = (longlong *)FUN_143c18d94(plVar12);
    puVar16 = &DAT_149e25dfc;
    if (cVar4 != '\0') {
      puVar16 = &DAT_149e0209e;
    }
    (**(code **)(*plVar10 + 0x98))(plVar10,puVar16,0xd000000,0);
    if (cVar4 != '\0') {
      local_e0 = (longlong **)0x0;
      FUN_1458f4e7e();
      iVar6 = (**(code **)(*plVar12 + 0xa0))(plVar12,&local_e0);
      FUN_145be8020();
      if (iVar6 != 0) goto LAB_143c19777;
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar10 = DAT_14c8407a8;
      local_90 = (**(code **)(*plVar12 + 0x48))(plVar12);
      local_98 = (longlong *)CONCAT44(local_98._4_4_,5);
      local_88 = (undefined *)0x0;
      uStack_80 = 0;
      local_b8 = &local_98;
      local_b0 = &local_78;
      FUN_1407adb6e(&local_a8);
      FUN_140230a63();
      FUN_140230ad0(&DAT_14c8731a8,&local_c8,L"r.{0}.Version",&local_a8);
      FUN_1407adb3e(local_a8,local_a0);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      plVar13 = local_c8;
      if (local_c0 == 0) {
        plVar13 = (longlong *)&DAT_149dfb77a;
      }
      plVar10 = (longlong *)(**(code **)(*plVar10 + 200))(plVar10,plVar13,1);
      if (local_c8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_143c19e98(&local_e0,&local_98);
      plVar13 = local_98;
      if ((int)local_90 == 0) {
        plVar13 = (longlong *)&DAT_149dfb77a;
      }
      (**(code **)(*plVar10 + 0x98))(plVar10,plVar13,0xd000000,0);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar14 = (**(code **)(*DAT_14ca83900 + 0x20))();
      uVar15 = FUN_145ac82ba(DAT_14ca84df4);
      FUN_143c19e98(&local_e0,&local_98);
      plVar10 = local_98;
      if ((int)local_90 == 0) {
        plVar10 = (longlong *)&DAT_149dfb77a;
      }
      uVar9 = (**(code **)(*plVar12 + 0x48))(plVar12);
      local_118 = uVar15;
      local_110 = uVar14;
      FUN_143c19f8a(L"[%s] %s SDK version: %s, vendor: %s, RHI: %s",L"LogXeSSCommonCoreModuleBase",
                    uVar9,plVar10);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_98 = (longlong *)0x0;
      local_90 = local_90 & 0xffffffff00000000;
      FUN_1446efa72(&local_98,0,3,0x10);
      local_90 = CONCAT44(local_90._4_4_,3);
      *local_98 = (longlong)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar21 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar21 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar21;
      local_98[2] = lVar18;
      *local_98 = (longlong)&PTR_FUN_14afcbdf0;
      local_98[3] = (longlong)plVar12;
      local_98[4] = (longlong)&LAB_143c1a370;
      iVar6 = 3;
      if (local_98 == (longlong *)0x0) {
LAB_143c19b80:
        if (iVar6 != 0) {
          if (local_98 == (longlong *)0x0) goto LAB_143c19777;
          (**(code **)*local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          goto LAB_143c19a85;
        }
      }
      else {
        cVar4 = (**(code **)(*local_98 + 0x30))();
        uVar3 = DAT_14c872d00;
        if (cVar4 == '\0') {
          iVar6 = (int)local_90;
          goto LAB_143c19b80;
        }
        if ((DAT_14c872d0c < 1) &&
           (DAT_14c872d08 = DAT_14c872d08 + -1, DAT_14c872d08 <= (int)DAT_14c872d00)) {
          if (0 < (int)DAT_14c872d00) {
            iVar6 = 0;
            do {
              if (((*(int *)(DAT_14c872cf8 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                  (plVar12 = *(longlong **)(DAT_14c872cf8 + (longlong)iVar6 * 0x10),
                  plVar12 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar12 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(&DAT_14c872cf8,iVar6);
                FUN_14005b248(&DAT_14c872cf8);
              }
              else {
                iVar6 = iVar6 + 1;
              }
            } while (iVar6 < (int)DAT_14c872d00);
          }
          DAT_14c872d08 = 2;
          if (2 < (int)(DAT_14c872d00 * 2)) {
            DAT_14c872d08 = DAT_14c872d00 * 2;
          }
          if ((DAT_14c872d08 < (int)uVar3) && (DAT_14c872d04 != DAT_14c872d00)) {
            FUN_14045812c();
          }
        }
        if (((int)local_90 != 0) && (local_98 != (longlong *)0x0)) {
          (**(code **)(*local_98 + 0x38))(local_98,&local_a8);
        }
        uVar3 = DAT_14c872d00;
        lVar21 = (longlong)(int)DAT_14c872d00;
        DAT_14c872d00 = DAT_14c872d00 + 1;
        if (DAT_14c872d04 < DAT_14c872d00) {
          FUN_1447a71f6(&DAT_14c872cf8,uVar3);
        }
        lVar18 = DAT_14c872cf8;
        lVar21 = lVar21 * 0x10;
        *(undefined8 *)(DAT_14c872cf8 + lVar21) = 0;
        *(undefined4 *)(lVar18 + 8 + lVar21) = 0;
        *(longlong **)(lVar18 + lVar21) = local_98;
        local_98 = (longlong *)0x0;
        *(int *)(lVar18 + 8 + lVar21) = (int)local_90;
LAB_143c19a85:
        local_90 = local_90 & 0xffffffff00000000;
      }
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143c19777;
    }
  }
  plVar10 = (longlong *)FUN_143c19bb6(plVar12);
  plVar13 = (longlong *)(**(code **)(*plVar10 + 0xd0))(plVar10);
  local_98 = (longlong *)0x0;
  local_90 = local_90 & 0xffffffff00000000;
  FUN_1446efa72(&local_98,0,3,0x10);
  local_90 = CONCAT44(local_90._4_4_,3);
  *local_98 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar21 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar21 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar21;
  local_98[2] = lVar18;
  *local_98 = (longlong)&PTR_FUN_14afcbd80;
  local_98[3] = (longlong)plVar12;
  local_98[4] = (longlong)FUN_143c19cc2;
  iVar6 = 3;
  if (local_98 == (longlong *)0x0) {
LAB_143c19b28:
    if (iVar6 == 0) goto LAB_143c19763;
    if (local_98 != (longlong *)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      goto LAB_143c19750;
    }
  }
  else {
    cVar4 = (**(code **)(*local_98 + 0x30))();
    if (cVar4 == '\0') {
      iVar6 = (int)local_90;
      goto LAB_143c19b28;
    }
    if (*(int *)((longlong)plVar13 + 0x14) < 1) {
      iVar6 = (int)plVar13[1];
      iVar8 = (int)plVar13[2] + -1;
      *(int *)(plVar13 + 2) = iVar8;
      if (iVar8 <= iVar6) {
        iVar8 = iVar6;
        if (0 < iVar6) {
          iVar19 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar13 + (longlong)iVar19 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar13,iVar19);
              FUN_14005b248(plVar13);
            }
            else {
              iVar19 = iVar19 + 1;
            }
            iVar8 = (int)plVar13[1];
          } while (iVar19 < iVar8);
        }
        iVar19 = 2;
        if (2 < iVar8 * 2) {
          iVar19 = iVar8 * 2;
        }
        *(int *)(plVar13 + 2) = iVar19;
        if ((iVar19 < iVar6) && (*(int *)((longlong)plVar13 + 0xc) != iVar8)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)local_90 != 0) && (local_98 != (longlong *)0x0)) {
      (**(code **)(*local_98 + 0x38))(local_98,&local_a8);
    }
    iVar6 = (int)plVar13[1];
    *(uint *)(plVar13 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar13 + 0xc) < iVar6 + 1U) {
      FUN_1447a71f6(plVar13,iVar6);
    }
    lVar21 = *plVar13;
    lVar18 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar21 + lVar18) = 0;
    *(undefined4 *)(lVar21 + 8 + lVar18) = 0;
    *(longlong **)(lVar21 + lVar18) = local_98;
    local_98 = (longlong *)0x0;
    *(int *)(lVar21 + 8 + lVar18) = (int)local_90;
LAB_143c19750:
    local_90 = local_90 & 0xffffffff00000000;
LAB_143c19763:
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_143c19cc2(plVar12,plVar10);
LAB_143c19777:
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c19bb6 FUN_143c19bb6 body=266 status=ok
// SIG undefined FUN_143c19bb6(void)

undefined8 FUN_143c19bb6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined4 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_30 = (**(code **)(*param_1 + 0x48))(param_1);
  local_58 = local_38;
  local_38[0] = 5;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = &local_18;
  FUN_1407adb6e(&local_48);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_68,L"r.{0}.Enabled",&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_68;
  if (local_60 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 200))(plVar1,puVar3,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143c19cc2 FUN_143c19cc2 body=468 status=ok
// SIG undefined FUN_143c19cc2(void)

void FUN_143c19cc2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0xa8))(param_2);
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    FUN_14626b538(DAT_14c868708,&local_38,2);
    puVar3 = local_38;
    if (local_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_140002266(local_48,
                  L"%s not supported with Engine version: %s, please check any Engine source patch available and applied"
                  ,uVar2,puVar3);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = (**(code **)(*DAT_14ca83900 + 0x20))();
    FUN_14020fad6(&local_28,uVar2);
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1,&local_28);
    if (cVar1 == '\0') {
      puVar3 = local_28;
      if ((int)uStack_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_140002266(&local_38,L"%s not supported on RHI: %s",uVar2,puVar3);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_140002266(&local_38,L"%s not supported, please check log for details",uVar2);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c19e98 FUN_143c19e98 body=240 status=ok
// SIG undefined FUN_143c19e98(void)

undefined8 FUN_143c19e98(ushort *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  ulonglong local_70;
  longlong local_68 [2];
  undefined4 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = (ulonglong)*param_1;
  local_98 = local_78;
  local_78[0] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_50 = (ulonglong)param_1[1];
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = (ulonglong)param_1[2];
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_90 = &local_18;
  FUN_1407adb6e(&local_88);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,param_2,L"{0}.{1}.{2}",&local_88);
  FUN_1407adb3e(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)&local_88 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c19f8a FUN_143c19f8a body=996 status=ok
// SIG undefined FUN_143c19f8a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143c19f8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  wchar_t *_Str;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_2138 [32];
  undefined8 local_2118;
  undefined8 *local_2110;
  wchar_t *local_2100;
  int local_20f8;
  undefined8 **local_20f0;
  uint local_20e4;
  undefined8 *local_20e0;
  int local_20d8;
  undefined8 **local_2060;
  undefined8 **local_2058;
  uint local_2050;
  undefined1 local_2048 [8192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2138;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb53118);
  if (DAT_14cb53150 == '\x01') {
    local_20e0 = &local_res10;
    puVar4 = (undefined8 *)FUN_144737586();
    local_2118 = 0;
    local_2110 = &local_res10;
    __stdio_common_vswprintf(*puVar4,local_2048,0x1000,param_1);
    FUN_1402160b8(&local_20f0);
    FUN_14047ad2e(&local_20f0,&local_20e0,L"%Y.%m.%d-%H.%M.%S");
    puVar4 = local_20e0;
    if (local_20d8 == 0) {
      puVar4 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_2100,L"[%s] %s\n",puVar4,local_2048);
    if (local_20e0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar5 = (longlong *)FUN_1400dbadc();
    plVar6 = (longlong *)*plVar5;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_140e92164();
      *plVar5 = (longlong)plVar6;
    }
    puVar11 = DAT_14cb53140;
    if (DAT_14cb53148 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x100))(plVar6,puVar11,1,0);
    if (plVar6 != (longlong *)0x0) {
      _Str = local_2100;
      if (local_20f8 == 0) {
        _Str = L"";
      }
      local_2060 = (undefined8 **)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_2058 = (undefined8 **)0x0;
        local_2050 = 0;
      }
      else {
        sVar7 = wcslen(_Str);
        local_20e4 = 0;
        local_20f0 = (undefined8 **)CONCAT44(local_20f0._4_4_,0x7fffffff);
        uVar12 = sVar7 & 0xffffffff;
        pwVar14 = _Str;
        do {
          iVar15 = (int)uVar12;
          if (iVar15 < 1) {
LAB_143c1a281:
            local_2050 = local_20e4;
            uVar10 = local_20e4 + 1;
            if (uVar10 < 0x81) goto LAB_143c1a29e;
            FUN_1446efa72(&local_2060,0,uVar10,1);
            ppuVar9 = local_2060;
            goto LAB_143c1a2a0;
          }
          wVar1 = *pwVar14;
          uVar10 = (uint)(ushort)wVar1;
          pwVar13 = pwVar14 + 1;
          uVar16 = iVar15 - 1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar15 == 1) {
              cVar3 = FUN_140024707(uVar10,&local_20e4,&local_20f0);
              if (cVar3 != '\0') goto LAB_143c1a281;
              break;
            }
            if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
              uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
              pwVar13 = pwVar14 + 2;
              uVar16 = iVar15 - 2;
            }
          }
          cVar3 = FUN_140024707(uVar10,&local_20e4,&local_20f0);
          uVar12 = (ulonglong)uVar16;
          pwVar14 = pwVar13;
        } while (cVar3 != '\0');
        local_2050 = 0xffffffff;
        uVar10 = 0;
LAB_143c1a29e:
        ppuVar9 = (undefined8 **)0x0;
LAB_143c1a2a0:
        local_20f0 = &local_20e0;
        if (ppuVar9 != (undefined8 **)0x0) {
          local_20f0 = ppuVar9;
        }
        iVar15 = (int)sVar7 + 1;
        local_20e4 = uVar10;
        local_2058 = local_20f0;
        do {
          if (iVar15 < 1) break;
          wVar1 = *_Str;
          uVar10 = (uint)(ushort)wVar1;
          pwVar14 = _Str + 1;
          iVar2 = iVar15 + -1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar15 == 1) {
              FUN_1400247af(uVar10,&local_20f0,&local_20e4);
              break;
            }
            if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
              uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
              pwVar14 = _Str + 2;
              iVar2 = iVar15 + -2;
            }
          }
          iVar15 = iVar2;
          _Str = pwVar14;
          cVar3 = FUN_1400247af(uVar10,&local_20f0,&local_20e4);
        } while (cVar3 != '\0');
      }
      uVar8 = (**(code **)(*plVar6 + 0x50))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6,uVar8);
      (**(code **)(*plVar6 + 0x30))(plVar6,local_2058,(longlong)(int)local_2050);
      (**(code **)(*plVar6 + 0x38))(plVar6,0);
      if (local_2060 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
      (**(code **)*plVar6)(plVar6,1);
    }
    if (local_2100 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb53118);
  if ((local_48 ^ (ulonglong)auStack_2138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c1a37e FUN_143c1a37e body=85 status=ok
// SIG undefined FUN_143c1a37e(void)

void FUN_143c1a37e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_143c19bb6();
  uVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1);
  FUN_140457ffc(uVar2,param_1);
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  if (((char)param_1[2] == '\0') && (*(char *)((longlong)param_1 + 0x11) == '\0')) {
    (**(code **)(*param_1 + 0x98))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  }
  return;
}



// FUNCTION 143c1a3d4 FUN_143c1a3d4 body=183 status=ok
// SIG undefined FUN_143c1a3d4(void)

undefined8 FUN_143c1a3d4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = (**(code **)(*param_1 + 0x48))();
  local_58 = local_38;
  local_38[0] = 5;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = &local_18;
  FUN_1407adb6e(&local_48);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,param_2,L"r.{0}.Supported",&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1a48c FUN_143c1a48c body=1660 status=ok
// SIG undefined FUN_143c1a48c(void)

void FUN_143c1a48c(longlong *param_1)

{
  int *piVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  size_t sVar10;
  longlong **pplVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  wchar_t *_Str;
  uint uVar15;
  undefined2 *puVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong **local_120;
  int local_118;
  uint local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  longlong *local_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [96];
  longlong **local_68;
  longlong **local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (DAT_14cb53102 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"XeSSLogEnabled");
    if (cVar5 != '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb53118);
      if (DAT_14cb53150 == '\0') {
        uVar7 = FUN_14047ac8c();
        FUN_1449b8608(&local_f8,uVar7,L"Logs/");
        local_e8 = local_f8;
        iVar6 = local_f0 + -1;
        if (local_f0 == 0) {
          iVar6 = 0;
        }
        local_e0 = (longlong *)CONCAT44(local_e0._4_4_,iVar6);
        local_d8 = L"xess.log";
        uStack_d0 = CONCAT44(uStack_d0._4_4_,8);
        FUN_140bee87a(&local_108,&local_e8,2);
        if (CONCAT44(DAT_14cb53140._4_4_,(undefined4)DAT_14cb53140) != 0) {
          FUN_1400020a8();
        }
        DAT_14cb53140._0_4_ = (undefined4)local_108;
        DAT_14cb53140._4_4_ = local_108._4_4_;
        DAT_14cb53148 = (int)uStack_100;
        uRam000000014cb5314c = uStack_100._4_4_;
        plVar8 = (longlong *)FUN_1400dbadc();
        plVar9 = (longlong *)*plVar8;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)FUN_140e92164();
          *plVar8 = (longlong)plVar9;
        }
        if (DAT_14cb53148 == 0) {
          puVar16 = &DAT_149dfb77a;
        }
        else {
          puVar16 = (undefined2 *)CONCAT44(DAT_14cb53140._4_4_,(undefined4)DAT_14cb53140);
        }
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x100))(plVar9,puVar16,0,0);
        if (plVar9 == (longlong *)0x0) {
          DAT_14cb53150 = '\0';
        }
        else {
          FUN_1402160b8(&local_120);
          FUN_14047ad2e(&local_120,&local_e8,L"%Y.%m.%d-%H.%M.%S");
          plVar8 = local_e8;
          if ((int)local_e0 == 0) {
            plVar8 = (longlong *)&DAT_149dfb77a;
          }
          FUN_140002266(&local_108,L"XeSS Plugin Log - %s\n",plVar8);
          if (local_e8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          _Str = (wchar_t *)local_108;
          if ((int)uStack_100 == 0) {
            _Str = L"";
          }
          local_68 = (longlong **)0x0;
          if (_Str == (wchar_t *)0x0) {
            local_60 = (longlong **)0x0;
            local_58 = 0;
            lVar18 = 0;
          }
          else {
            local_128 = plVar9;
            sVar10 = wcslen(_Str);
            local_10c = 0;
            local_120 = (longlong **)CONCAT44(local_120._4_4_,0x7fffffff);
            uVar14 = sVar10 & 0xffffffff;
            pwVar17 = _Str;
            do {
              iVar6 = (int)uVar14;
              if (iVar6 < 1) {
LAB_143c1a75f:
                local_58 = local_10c;
                uVar13 = local_10c + 1;
                if (uVar13 < 0x81) goto LAB_143c1a77c;
                FUN_1446efa72(&local_68,0,uVar13,1);
                pplVar11 = local_68;
                goto LAB_143c1a77e;
              }
              wVar2 = *pwVar17;
              uVar13 = (uint)(ushort)wVar2;
              pwVar3 = pwVar17 + 1;
              uVar15 = iVar6 - 1;
              if ((wVar2 & 0xfc00U) == 0xd800) {
                if (iVar6 == 1) {
                  cVar5 = FUN_140024707(uVar13,&local_10c,&local_120);
                  if (cVar5 != '\0') goto LAB_143c1a75f;
                  break;
                }
                if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
                  uVar13 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
                  uVar15 = iVar6 - 2;
                  pwVar3 = pwVar17 + 2;
                }
              }
              pwVar17 = pwVar3;
              cVar5 = FUN_140024707(uVar13,&local_10c,&local_120);
              uVar14 = (ulonglong)uVar15;
            } while (cVar5 != '\0');
            local_58 = 0xffffffff;
            uVar13 = 0;
LAB_143c1a77c:
            pplVar11 = (longlong **)0x0;
LAB_143c1a77e:
            local_120 = &local_e8;
            if (pplVar11 != (longlong **)0x0) {
              local_120 = pplVar11;
            }
            iVar6 = (int)sVar10 + 1;
            local_10c = uVar13;
            local_60 = local_120;
            do {
              if (iVar6 < 1) break;
              wVar2 = *_Str;
              uVar13 = (uint)(ushort)wVar2;
              pwVar17 = _Str + 1;
              iVar4 = iVar6 + -1;
              if ((wVar2 & 0xfc00U) == 0xd800) {
                if (iVar6 == 1) {
                  FUN_1400247af(uVar13,&local_120,&local_10c);
                  break;
                }
                if (((ushort)*pwVar17 & 0xfc00) == 0xdc00) {
                  uVar13 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar17 + 0xfca02400;
                  pwVar17 = _Str + 2;
                  iVar4 = iVar6 + -2;
                }
              }
              iVar6 = iVar4;
              _Str = pwVar17;
              cVar5 = FUN_1400247af(uVar13,&local_120,&local_10c);
            } while (cVar5 != '\0');
            lVar18 = (longlong)(int)local_58;
            plVar9 = local_128;
          }
          (**(code **)(*plVar9 + 0x30))(plVar9,local_60,lVar18);
          (**(code **)(*plVar9 + 0x38))(plVar9,0);
          DAT_14cb53150 = '\x01';
          if (local_68 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          if (local_108 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          (**(code **)*plVar9)(plVar9,1);
        }
        if (local_f8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb53118);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    (**(code **)(DAT_14c926ca8 + 0x68))(&DAT_14c926ca8,&local_e8,&DAT_14afcb7b6);
    lVar18 = (**(code **)(*local_e8 + 0x98))();
    if (*(int *)(lVar18 + 0x10) == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    else {
      puVar16 = *(undefined2 **)(lVar18 + 8);
    }
    puVar12 = (undefined4 *)(**(code **)(*local_e8 + 0x98))();
    FUN_143c19f8a(L"[%s] XeSS plugin version: %u, version name: %s",L"LogXeSSCommonModuleBase",
                  *puVar12,puVar16);
    plVar9 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    DAT_14cb53102 = '\x01';
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  local_e0 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  local_108 = &local_e8;
  local_e8 = (longlong *)CONCAT44(local_e8._4_4_,5);
  local_d8 = (wchar_t *)0x0;
  uStack_d0 = 0;
  uStack_100 = local_c8;
  FUN_1407adb6e(&local_f8);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_120,L"{0}Disabled",&local_f8);
  FUN_1407adb3e(local_f8,local_f0);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pplVar11 = local_120;
  if (local_118 == 0) {
    pplVar11 = (longlong **)&DAT_149dfb77a;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar5 = FUN_14054d46e(&DAT_14c846b20,pplVar11);
  if (local_120 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  lVar18 = 0x58;
  if (cVar5 == '\0') {
    if ((DAT_14c872bf0 == '\x01') &&
       (cVar5 = (**(code **)(*param_1 + 0x50))(param_1), cVar5 == '\0')) goto LAB_143c1aa7c;
    *(undefined1 *)(param_1 + 1) = 1;
    lVar18 = 0x60;
  }
  (**(code **)(*param_1 + lVar18))(param_1);
LAB_143c1aa7c:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c1ab52 FUN_143c1ab52 body=29 status=ok
// SIG undefined FUN_143c1ab52(void)

undefined8 FUN_143c1ab52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1ab8c FUN_143c1ab8c body=93 status=ok
// SIG undefined FUN_143c1ab8c(void)

void FUN_143c1ab8c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c1abea FUN_143c1abea body=93 status=ok
// SIG undefined FUN_143c1abea(void)

void FUN_143c1abea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c1ac48 FUN_143c1ac48 body=126 status=ok
// SIG undefined FUN_143c1ac48(void)

void FUN_143c1ac48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afcbd80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c1acb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c1acd4 FUN_143c1acd4 body=21 status=ok
// SIG undefined FUN_143c1acd4(void)

undefined8 FUN_143c1acd4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143c1acea FUN_143c1acea body=29 status=ok
// SIG undefined FUN_143c1acea(void)

undefined8 FUN_143c1acea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1ad24 FUN_143c1ad24 body=93 status=ok
// SIG undefined FUN_143c1ad24(void)

void FUN_143c1ad24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c1ad82 FUN_143c1ad82 body=93 status=ok
// SIG undefined FUN_143c1ad82(void)

void FUN_143c1ad82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c1ade0 FUN_143c1ade0 body=126 status=ok
// SIG undefined FUN_143c1ade0(void)

void FUN_143c1ade0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afcbdf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c1ae4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


