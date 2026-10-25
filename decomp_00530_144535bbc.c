// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144535bbc FUN_144535bbc body=55 status=ok
// SIG undefined FUN_144535bbc(void)

void FUN_144535bbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1d848 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1d848 = FUN_14171c317(FUN_14673c3e6,uVar1,L"EOptimusNodePinStorageType");
  }
  return;
}



// FUNCTION 144535bf3 FUN_144535bf3 body=55 status=ok
// SIG undefined FUN_144535bf3(void)

void FUN_144535bf3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1d860 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1d860 = FUN_14171c317(FUN_14673c415,uVar1,L"EOptimusNodePinDirection");
  }
  return;
}



// FUNCTION 144535c54 FUN_144535c54 body=494 status=ok
// SIG undefined FUN_144535c54(void)

void FUN_144535c54(void)

{
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd1f2f0,1,0,0,0,0);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd1f6d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd1fe00,1,0,0,&PTR_FUN_14bd1fdc0,2);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd202e0,1,0,0,0,0);
  FUN_1446f470e(&DAT_14cc1d968,L"Default Component Binding",1);
  FUN_1446f470e(&DAT_14cc1d970,L"InputBindings",1);
  FUN_1446f470e(&DAT_14cc1d978,L"OutputBindings",1);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd20830,1,0,0,0,0);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd20c00,1,0,0,0,0);
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd20cf0,1,0,0);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd21530,2,0,0,0,0);
  FUN_1446f470e(&DAT_14cc1d918,L"Value",1);
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd21660,1,0,0);
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd21d70,1,&PTR_FUN_14bd21d40,1,0,0);
  return;
}



// FUNCTION 144535e44 FUN_144535e44 body=57 status=ok
// SIG undefined FUN_144535e44(void)

void FUN_144535e44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1d9b8 == 0) {
    uVar1 = FUN_14673c941();
    DAT_14cc1d9b8 = FUN_14171c317(FUN_14673c9fb,uVar1,L"EOptimusGroomExecDomain");
  }
  return;
}



// FUNCTION 144535eb9 FUN_144535eb9 body=475 status=ok
// SIG undefined FUN_144535eb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144535eb9(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsDeformer",&PTR_FUN_14bd22ab0,2,0);
  ppuStack_60 = &PTR_FUN_14bd234d0;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/HairStrandsDeformer",&PTR_FUN_14bd234f0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsDeformer",&PTR_FUN_14bd23d00,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsDeformer",&PTR_FUN_14bd24510,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsDeformer",&PTR_FUN_14bd248e0,1,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc1da88);
  if (cVar1 == '\0') {
    _DAT_14cc1da88 = 0;
    uRam000000014cc1da90 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = "ControlPoint";
  local_40 = 0xc;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cc1da98 = (ulonglong)uVar2;
  local_48 = "Curve";
  local_40 = 5;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cc1daa0 = (ulonglong)uVar2;
  local_48 = (char *)0x800000014bd25288;
  local_34 = 0x13;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14cc1daa8,&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144536098 FUN_144536098 body=102 status=ok
// SIG undefined FUN_144536098(void)

void FUN_144536098(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd255a2;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14673cdfa(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144536100 FUN_144536100 body=181 status=ok
// SIG undefined FUN_144536100(void)

void FUN_144536100(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_2 + 0x10)) {
    lVar1 = param_1[5];
    uVar2 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    (**(code **)(*param_1 + 0x40))(param_1,local_90);
    uVar3 = FUN_14001cc68(0x40,0);
    FUN_1494f419a(uVar3,param_1 + 1,param_1 + 3,param_2);
    FUN_1494f1e22(lVar1,uVar3,local_90,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445361b6 FUN_1445361b6 body=2091 status=ok
// SIG undefined FUN_1445361b6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1445361b6(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar22;
  uint uVar23;
  int *piVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  LARGE_INTEGER *local_1c0;
  int **local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  LPCRITICAL_SECTION local_1a0;
  uint *local_198;
  undefined8 local_190;
  longlong local_188 [2];
  int *local_178;
  undefined8 uStack_170;
  LARGE_INTEGER local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 7);
  EnterCriticalSection(lpCriticalSection);
  if (1 < *param_2) {
    piVar10 = (int *)(**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((longlong)(int)param_1[0xd] != 0) {
      piVar24 = (int *)param_1[0xc];
      lVar25 = (longlong)(int)param_1[0xd] * 0x18;
      do {
        if ((((*piVar24 == *piVar10) && (piVar24[1] == piVar10[1])) && (piVar24[2] == piVar10[2]))
           && (piVar24[3] == piVar10[3])) {
          if (piVar24 != (int *)0x0) goto LAB_144536255;
          break;
        }
        piVar24 = piVar24 + 6;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
    }
    local_b8 = *piVar10;
    iStack_b4 = piVar10[1];
    iStack_b0 = piVar10[2];
    iStack_ac = piVar10[3];
    QueryPerformanceCounter(&local_168);
    dVar7 = (double)local_168.QuadPart * DAT_14c83f420;
    iVar9 = (int)param_1[0xd];
    *(uint *)(param_1 + 0xd) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6c) < iVar9 + 1U) {
      FUN_1494f3400(param_1 + 0xc,iVar9);
    }
    lVar25 = param_1[0xc];
    piVar24 = (int *)(lVar25 + (longlong)iVar9 * 0x18);
    *piVar24 = local_b8;
    piVar24[1] = iStack_b4;
    piVar24[2] = iStack_b0;
    piVar24[3] = iStack_ac;
    *(double *)(lVar25 + 0x10 + (longlong)iVar9 * 0x18) = dVar7 + 16777216.0;
    local_198 = (uint *)(param_1 + 0x14);
    iVar9 = (int)param_1[0x17];
    local_1a0 = lpCriticalSection;
    if (iVar9 == 0) {
      uVar22 = 1;
      uVar14 = 0;
      iVar20 = 0;
      iVar19 = 0;
    }
    else {
      puVar11 = (uint *)param_1[0x16];
      if ((uint *)param_1[0x16] == (uint *)0x0) {
        puVar11 = local_198;
      }
      uVar15 = *puVar11;
      if (uVar15 == 0) {
        iVar20 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar20 = iVar9 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar20 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_1445363a0;
          iVar20 = iVar20 + 0x20;
          uVar15 = puVar11[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar14 = 0;
        iVar20 = 0;
      }
      uVar22 = (ulonglong)(-uVar15 & uVar15);
      uVar16 = uVar22 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar19 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar19) {
        iVar19 = iVar9;
      }
    }
    if (iVar19 != iVar9) {
      uVar15 = 0xffffffff;
      do {
        puVar2 = (undefined8 *)(param_1[0x12] + (longlong)iVar19 * 0xb8);
        FUN_1494efeca(param_1,*puVar2,puVar2 + 1);
        FUN_14000f986(0x3dcccccd);
        FUN_1494f02f6(param_1,*puVar2,puVar2 + 1);
        uVar15 = ~(uint)uVar22 & uVar15;
        puVar11 = (uint *)param_1[0x16];
        if ((uint *)param_1[0x16] == (uint *)0x0) {
          puVar11 = local_198;
        }
        iVar3 = (int)param_1[0x17];
        iVar19 = (int)uVar14;
        lVar25 = (longlong)iVar19;
        uVar23 = puVar11[lVar25] & uVar15;
        if (uVar23 == 0) {
          iVar17 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar17 = iVar3 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar19) {
            iVar18 = iVar19;
          }
          if (iVar19 < iVar17) {
            lVar26 = 0;
            do {
              uVar23 = puVar11[lVar25 + lVar26 + 1];
              if (uVar23 != 0) {
                uVar14 = (ulonglong)(iVar19 + (int)lVar26 + 1);
                uVar15 = 0xffffffff;
                goto LAB_14453694e;
              }
              iVar20 = iVar20 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar18 - lVar25 != lVar26);
            uVar15 = 0xffffffff;
            lVar25 = (longlong)iVar18;
          }
          uVar14 = lVar25 + 1U & 0xffffffff;
          iVar19 = iVar3;
        }
        else {
LAB_14453694e:
          uVar22 = (ulonglong)(-uVar23 & uVar23);
          uVar16 = uVar22 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar19 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar19) {
            iVar19 = iVar3;
          }
        }
      } while (iVar19 != iVar9);
    }
LAB_1445363a0:
    local_178 = (int *)0x0;
    uStack_170 = 1;
    FUN_14706f770(&local_178,0);
    iVar9 = piVar10[1];
    iVar20 = piVar10[2];
    iVar19 = piVar10[3];
    *local_178 = *piVar10;
    local_178[1] = iVar9;
    local_178[2] = iVar20;
    local_178[3] = iVar19;
    (**(code **)(*param_1 + 0x40))(param_1,&local_b8);
    FUN_140056680(local_188,&DAT_149dfb77a);
    local_168.QuadPart = (LONGLONG)&DAT_14cc1de1c;
    plStack_160 = local_188;
    FUN_145739864(&local_b8,&local_190,&local_168,0);
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_188,&DAT_149dfb77a);
    local_168.QuadPart = (LONGLONG)&DAT_14cc1de24;
    plStack_160 = local_188;
    FUN_145739864(&local_b8,&local_190,&local_168,0);
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)param_1[0xf] != 0) {
      lVar26 = param_1[0xe] + 0x38;
      lVar25 = (longlong)(int)param_1[0xf] * 0x88;
      do {
        FUN_1494f14f8(&local_b8,lVar26);
        lVar4 = param_1[5];
        local_188[0] = 0x2bca2875f4373fff;
        local_190 = 0;
        local_168.QuadPart = 0;
        plStack_160 = (longlong *)0x0;
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_140bb2e20(&local_108,&local_b8);
        uVar12 = FUN_1492dc406(lVar26 + -0x28);
        uVar13 = FUN_1494f1672(lVar26 + -0x28);
        local_1a8 = local_188;
        local_1b0 = &local_190;
        local_1b8 = &local_178;
        local_1c0 = &local_168;
        local_1c8 = &local_108;
        FUN_1494f0154(lVar4,uVar13,uVar12,1);
        plVar1 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_160 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar10 = (int *)((longlong)plVar1 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        lVar26 = lVar26 + 0x88;
        lVar25 = lVar25 + -0x88;
      } while (lVar25 != 0);
    }
    FUN_14000f986(0x3dcccccd);
    if ((longlong)(int)param_1[0x11] != 0) {
      lVar25 = (longlong)(int)param_1[0x11] << 7;
      lVar26 = param_1[0x10] + 0x30;
      do {
        FUN_1494f14f8(&local_b8,lVar26);
        lVar4 = param_1[5];
        local_188[0] = 0x2bca2875f4373fff;
        local_190 = 0;
        local_168.QuadPart = 0;
        plStack_160 = (longlong *)0x0;
        local_138 = 0;
        local_130 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_12c = 0xffffffff00000080;
        local_124 = 0;
        local_118 = 0;
        local_110 = 0;
        FUN_140bb2e20(&local_158,&local_b8);
        uVar12 = FUN_1492dc4d4(lVar26 + -0x28);
        uVar13 = FUN_1494f1c4c(lVar26 + -0x28);
        local_1a8 = local_188;
        local_1b0 = &local_190;
        local_1b8 = &local_178;
        local_1c0 = &local_168;
        local_1c8 = &local_158;
        FUN_1494f0154(lVar4,uVar13,uVar12,0);
        plVar1 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_160 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar10 = (int *)((longlong)plVar1 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        lVar26 = lVar26 + 0x80;
        lVar25 = lVar25 + -0x80;
      } while (lVar25 != 0);
    }
    iVar9 = *(int *)((longlong)param_1 + 0xf4);
    *(int *)((longlong)param_1 + 0xf4) = iVar9 + 1;
    uVar14 = (ulonglong)(int)param_1[0x1d];
    if ((longlong)uVar14 < 1) {
      *(int *)((longlong)param_1 + 0xf4) = iVar9;
    }
    else {
      plVar1 = param_1 + 0x1c;
      bVar21 = false;
      do {
        lVar25 = uVar14 * 0x10 + -8;
        uVar16 = uVar14;
        while (((*(int *)(*plVar1 + lVar25) != 0 &&
                (plVar5 = *(longlong **)(*plVar1 + -8 + lVar25), plVar5 != (longlong *)0x0)) &&
               (cVar8 = (**(code **)(*plVar5 + 0x60))(), cVar8 != '\0'))) {
          lVar25 = lVar25 + -0x10;
          bVar6 = uVar16 < 2;
          uVar16 = uVar16 - 1;
          if (bVar6) {
            iVar9 = *(int *)((longlong)param_1 + 0xf4) + -1;
            *(int *)((longlong)param_1 + 0xf4) = iVar9;
            if (!bVar21) goto LAB_144536839;
            goto LAB_1445367c4;
          }
        }
        uVar14 = uVar16 - 1;
        bVar21 = true;
      } while (1 < uVar16);
      iVar9 = *(int *)((longlong)param_1 + 0xf4) + -1;
      *(int *)((longlong)param_1 + 0xf4) = iVar9;
LAB_1445367c4:
      if (iVar9 < 1) {
        iVar9 = (int)param_1[0x1d];
        iVar20 = iVar9;
        if (0 < iVar9) {
          iVar19 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(*plVar1 + (longlong)iVar19 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar5 + 0x28))(), cVar8 != '\0')) {
              FUN_14005b288(plVar1,iVar19);
              FUN_14005b248(plVar1);
            }
            else {
              iVar19 = iVar19 + 1;
            }
            iVar20 = (int)param_1[0x1d];
          } while (iVar19 < iVar20);
        }
        iVar19 = 2;
        if (2 < iVar20 * 2) {
          iVar19 = iVar20 * 2;
        }
        *(int *)(param_1 + 0x1e) = iVar19;
        if ((iVar19 < iVar9) && (*(int *)((longlong)param_1 + 0xec) != iVar20)) {
          FUN_14045812c(plVar1);
        }
      }
    }
LAB_144536839:
    lpCriticalSection = local_1a0;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(&local_b8);
    if (local_178 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144536255:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144536a44 FUN_144536a44 body=218 status=ok
// SIG undefined FUN_144536a44(void)

void FUN_144536a44(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 7;
  FUN_14282b410(L"/Script/LiveLinkMessageBusFramework",0,0,&PTR_FUN_14bd25fa0);
  local_28 = 0x800000014bd260b8;
  local_14 = 0x1b;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14673d320(&local_28);
  FUN_1446f470e(&DAT_14cc1de1c,L"SubjectName",1);
  FUN_1446f470e(&DAT_14cc1de24,L"Role",1);
  FUN_1446f470e(&DAT_14cc1de2c,L"OriginalSource",1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144536b20 FUN_144536b20 body=55 status=ok
// SIG undefined FUN_144536b20(void)

void FUN_144536b20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1df00 == 0) {
    uVar1 = FUN_1413257ed();
    DAT_14cc1df00 = FUN_14171c317(FUN_14673d76c,uVar1,L"EBoneTransformResolution");
  }
  return;
}



// FUNCTION 144536b58 FUN_144536b58 body=4113 status=ok
// SIG undefined FUN_144536b58(void)

void FUN_144536b58(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  void *_Src;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong **pplVar24;
  ulonglong *puVar25;
  int *piVar26;
  undefined8 *puVar27;
  ulonglong *puVar28;
  longlong lVar29;
  longlong *plVar30;
  uint uVar31;
  int iVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  int local_3cc;
  ulonglong local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_39c [4];
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  int local_364;
  undefined1 local_360 [8];
  undefined1 *local_358;
  int local_350;
  longlong *local_348;
  ulonglong uStack_340;
  undefined1 local_338 [16];
  longlong local_328;
  undefined4 local_320;
  uint local_31c;
  undefined4 uStack_318;
  undefined4 local_314;
  longlong local_308;
  undefined4 local_300;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  uint local_2e8 [4];
  uint *local_2d8;
  uint local_2d0;
  uint local_2cc;
  undefined4 uStack_2c8;
  int local_2c4;
  longlong local_2b8;
  undefined4 local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 *local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  undefined1 local_270 [8];
  undefined1 *local_268;
  int local_260;
  longlong local_258 [3];
  ulonglong uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_c8;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3d8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    lVar23 = *(longlong *)(param_1 + 0x178);
    lVar19 = (longlong)*(int *)(param_1 + 0x180) * 0x60;
    do {
      cVar5 = FUN_1494f7980(lVar23,param_1 + 0x38);
      if (cVar5 != '\0') {
        local_378 = 0;
        local_370 = 0;
        local_398 = 0;
        uStack_390 = 0;
        local_36c = 0xffffffff00000080;
        local_364 = 0;
        local_358 = (undefined1 *)0x0;
        local_350 = 0;
        if ((longlong)*(int *)(local_3d8 + 0x180) != 0) {
          puVar27 = *(undefined8 **)(local_3d8 + 0x178);
          lVar23 = (longlong)*(int *)(local_3d8 + 0x180) * 0x60;
          do {
            if (puVar27[2] != 0) {
              uVar3 = *puVar27;
              uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
              uVar6 = (uint)uVar3 & 0xffff;
              plVar13 = (longlong *)
                        FUN_149516cc0(&local_398,
                                      ((uint)uVar3 << 0x10 | uVar6) +
                                      (int)((ulonglong)uVar3 >> 0x20) +
                                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4),puVar27);
              iVar7 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar7 + 1U) {
                FUN_149517260(plVar13,iVar7);
              }
              *(undefined8 *)(*plVar13 + (longlong)iVar7 * 8) = puVar27[2];
            }
            puVar27 = puVar27 + 0xc;
            lVar23 = lVar23 + -0x60;
          } while (lVar23 != 0);
        }
        local_288 = (undefined1 *)0x0;
        local_280 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_27c = 0xffffffff00000080;
        local_274 = 0;
        local_268 = (undefined1 *)0x0;
        local_260 = 0;
        local_c8 = 0;
        local_258[0] = 0;
        local_258[1] = 0;
        local_258[2] = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_2d8 = (uint *)0x0;
        local_2d0 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2cc = 0x80;
        uStack_2c8 = 0xffffffff;
        local_2c4 = 0;
        local_2b8 = 0;
        local_2b0 = 0;
        uVar8 = *(uint *)(local_3d8 + 0x40);
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        if ((longlong)(int)uVar8 != 0) {
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar8);
          }
          FUN_1495172e6(&local_b8,uVar8);
          iVar7 = 1;
          if (3 < uVar8) {
            uVar6 = (uVar8 | 1) + 0xe;
            iVar7 = 0x1f;
            if (uVar6 != 0) {
              for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            iVar7 = 1 << ((byte)iVar7 & 0x1f);
          }
          if ((local_70 == 0) || (local_70 < iVar7)) {
            local_70 = iVar7;
            FUN_14951747a();
          }
        }
        local_3b8._0_4_ = 0;
        iVar7 = (int)local_3b8;
        local_3b8._0_4_ = 0;
        if ((longlong)*(int *)(local_3d8 + 0x40) != 0) {
          puVar27 = *(undefined8 **)(local_3d8 + 0x38);
          lVar23 = (longlong)*(int *)(local_3d8 + 0x40) << 3;
          do {
            local_348 = (longlong *)CONCAT44(local_348._4_4_,0xffffffff);
            uVar3 = *puVar27;
            uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
            uVar31 = (uint)uVar3 & 0xffff;
            piVar10 = (int *)FUN_149517654(&local_b8,
                                           ((uint)uVar3 << 0x10 | uVar31) +
                                           (int)((ulonglong)uVar3 >> 0x20) +
                                           (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar31 >> 4),puVar27,
                                           &local_348);
            iVar7 = (int)local_3b8 + 1;
            *piVar10 = (int)local_3b8;
            puVar27 = puVar27 + 1;
            lVar23 = lVar23 + -8;
            local_3b8._0_4_ = iVar7;
          } while (lVar23 != 0);
        }
        local_3b8._0_4_ = iVar7;
        FUN_140bfc200(local_258,uVar8,1);
        FUN_140bfc200(local_258 + 2);
        iVar7 = (int)uStack_230;
        lVar23 = (longlong)(int)uStack_230;
        if ((int)uStack_230 < (int)uVar8) {
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
          uVar8 = uVar8 - iVar7;
          if ((uint)(uStack_230._4_4_ - iVar7) < uVar8) {
            FUN_1446f48e2(&local_238);
          }
          memset((void *)(lVar23 * 4 + local_238),0,(longlong)(int)uVar8 << 2);
        }
        else {
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar8);
          }
          if ((int)uVar8 < (int)uStack_230) {
            uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
            FUN_14479f406(&local_238);
          }
        }
        local_3b8 = (ulonglong)local_3b8._4_4_ << 0x20;
        if ((longlong)*(int *)(local_3d8 + 0x40) != 0) {
          plVar21 = *(longlong **)(local_3d8 + 0x38);
          plVar13 = plVar21 + *(int *)(local_3d8 + 0x40);
          do {
            if ((int)uStack_390 != local_364) {
              lVar23 = *plVar21;
              uVar8 = (uint)((ulonglong)lVar23 >> 0x10);
              uVar6 = (uint)lVar23 & 0xffff;
              puVar12 = local_358;
              if (local_358 == (undefined1 *)0x0) {
                puVar12 = local_360;
              }
              iVar7 = *(int *)(puVar12 +
                              (ulonglong)
                              (local_350 - 1U &
                              (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar6) +
                              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4)) * 4);
              while (iVar7 != -1) {
                lVar19 = local_398 + (longlong)iVar7 * 0x20;
                if (*(longlong *)(local_398 + (longlong)iVar7 * 0x20) == lVar23) {
                  if ((lVar19 + 8U & 0xfffffffffffffff7) != 0) {
                    local_348 = (longlong *)0x0;
                    uVar8 = *(uint *)(lVar19 + 0x10);
                    _Src = *(void **)(lVar19 + 8);
                    uStack_340 = CONCAT44(uStack_340._4_4_,uVar8);
                    if ((longlong)(int)uVar8 == 0) {
                      uStack_340 = (ulonglong)uVar8;
                      goto LAB_14453759a;
                    }
                    FUN_149517a04(&local_348,uVar8);
                    memcpy(local_348,_Src,(longlong)(int)uVar8 << 3);
                    plVar33 = (longlong *)((longlong)(int)local_3b8 * 0x10 + local_258[2]);
                    if ((longlong)(int)uStack_340 != 0) {
                      plVar30 = local_348 + (int)uStack_340;
                      plVar22 = local_348;
                      do {
                        if ((int)uStack_b0 != local_84) {
                          lVar23 = *plVar22;
                          uVar8 = (uint)((ulonglong)lVar23 >> 0x10);
                          uVar6 = (uint)lVar23 & 0xffff;
                          puVar12 = local_78;
                          if (local_78 == (undefined1 *)0x0) {
                            puVar12 = local_80;
                          }
                          iVar7 = *(int *)(puVar12 +
                                          (ulonglong)
                                          (local_70 - 1U &
                                          (int)((ulonglong)lVar23 >> 0x20) +
                                          ((uint)lVar23 << 0x10 | uVar6) +
                                          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4)) * 4);
                          while (iVar7 != -1) {
                            plVar1 = (longlong *)(local_b8 + (longlong)iVar7 * 0x14);
                            if (*plVar1 == lVar23) {
                              if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                                iVar7 = (int)plVar33[1];
                                *(uint *)(plVar33 + 1) = iVar7 + 1U;
                                if (*(uint *)((longlong)plVar33 + 0xc) < iVar7 + 1U) {
                                  FUN_1446f48e2(plVar33,iVar7);
                                }
                                *(int *)(*plVar33 + (longlong)iVar7 * 4) = (int)plVar1[1];
                              }
                              break;
                            }
                            iVar7 = *(int *)((longlong)plVar1 + 0xc);
                          }
                        }
                        plVar22 = plVar22 + 1;
                      } while (plVar22 != plVar30);
                    }
                    goto LAB_1445375ab;
                  }
                  break;
                }
                iVar7 = *(int *)(lVar19 + 0x18);
              }
            }
            uStack_340 = 0;
LAB_14453759a:
            local_348 = (longlong *)0x0;
            plVar33 = (longlong *)((longlong)(int)local_3b8 * 0x10 + local_258[2]);
LAB_1445375ab:
            FUN_1406de246(*plVar33);
            iVar7 = (int)plVar33[1];
            iVar9 = iVar7;
            if ((longlong)iVar7 < 2) {
LAB_144537614:
              if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar9);
              }
              if (iVar9 < iVar7) {
                *(int *)(plVar33 + 1) = iVar9;
                iVar7 = iVar9;
              }
            }
            else {
              piVar10 = (int *)*plVar33;
              lVar23 = (longlong)iVar7 * 4 + -4;
              piVar14 = piVar10;
              piVar26 = piVar10;
              do {
                piVar15 = piVar14;
                if ((*piVar14 != piVar26[1]) && (piVar15 = piVar14 + 1, piVar26 != piVar14)) {
                  *piVar15 = piVar26[1];
                }
                piVar26 = piVar26 + 1;
                lVar23 = lVar23 + -4;
                piVar14 = piVar15;
              } while (lVar23 != 0);
              iVar7 = (int)plVar33[1];
              iVar9 = (int)((ulonglong)((longlong)piVar15 + (4 - (longlong)piVar10)) >> 2);
              uVar8 = iVar9 - iVar7;
              if (uVar8 == 0 || iVar9 < iVar7) goto LAB_144537614;
              *(int *)(plVar33 + 1) = iVar9;
              if ((uint)(*(int *)((longlong)plVar33 + 0xc) - iVar7) < uVar8) {
                FUN_1446f48e2(plVar33);
              }
              memset((void *)((longlong)iVar7 * 4 + *plVar33),0,(longlong)(int)uVar8 << 2);
              iVar7 = (int)plVar33[1];
            }
            *(int *)(local_238 + (longlong)(int)local_3b8 * 4) = iVar7;
            if (iVar7 == 0) {
              FUN_1447cbafe(&local_2f8,local_39c,&local_3b8,0);
            }
            lVar23 = plVar33[1];
            if ((longlong)(int)lVar23 == 0) {
            }
            else {
              lVar19 = *plVar33;
              lVar29 = 0;
              do {
                lVar16 = (longlong)*(int *)(lVar19 + lVar29) * 0x10;
                plVar33 = (longlong *)(local_258[0] + lVar16);
                iVar7 = *(int *)(local_258[0] + 8 + lVar16);
                uVar8 = iVar7 + 1;
                *(uint *)(local_258[0] + 8 + lVar16) = uVar8;
                if (*(uint *)(local_258[0] + 0xc + lVar16) < uVar8) {
                  FUN_1446f48e2(plVar33);
                }
                *(int *)(*plVar33 + (longlong)iVar7 * 4) = (int)local_3b8;
                lVar29 = lVar29 + 4;
              } while ((longlong)(int)lVar23 * 4 != lVar29);
            }
            local_3b8 = CONCAT44(local_3b8._4_4_,(int)local_3b8 + 1);
            if (local_348 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar21 = plVar21 + 1;
          } while (plVar21 != plVar13);
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_149517a5e(&local_b8);
        uVar20 = uStack_240;
        local_328 = 0;
        local_320 = 0;
        local_348 = (longlong *)0x0;
        uStack_340 = 0;
        local_31c = 0x80;
        uStack_318 = 0xffffffff;
        local_314 = 0;
        local_308 = 0;
        local_300 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        uVar8 = (uint)uStack_240;
        uVar34 = uStack_240 & 0xffffffff;
        if ((int)(uint)uStack_240 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar34);
        }
        if (uVar34 != 0) {
          FUN_14481578e(&local_3b8,uVar34);
          if ((uint)((int)uStack_2a0 - local_274) < uVar8) {
            FUN_1400bac10(&local_2a8,uVar20 & 0xffffffff);
            iVar7 = 1;
            if (3 < uVar8) {
              uVar6 = (uVar8 | 1) + 0xe;
              iVar7 = 0x1f;
              if (uVar6 != 0) {
                for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                }
              }
              iVar7 = 1 << ((byte)iVar7 & 0x1f);
            }
            if ((local_260 == 0) || (local_260 < iVar7)) {
              local_260 = iVar7;
              FUN_144a56d22();
            }
          }
          local_b8 = local_b8 & 0xffffffff00000000;
          do {
            FUN_1447cbafe(&local_2a8,local_39c,&local_b8,0);
            iVar7 = (int)local_b8 + 1;
            local_b8 = CONCAT44(local_b8._4_4_,iVar7);
          } while (iVar7 < (int)uVar8);
        }
        if (local_274 < (int)uStack_2a0) {
          while (local_3c0 = uVar34, (int)uStack_2f0 != local_2c4) {
            FUN_1402226aa(&local_348);
            if (local_2d0 == 0) {
              uVar20 = 1;
              uVar34 = 0;
              iVar7 = 0;
              uVar8 = 0;
            }
            else {
              puVar11 = local_2d8;
              if (local_2d8 == (uint *)0x0) {
                puVar11 = local_2e8;
              }
              uVar8 = *puVar11;
              if (uVar8 == 0) {
                iVar7 = local_2d0 + 0x1e;
                if (-1 < (int)(local_2d0 - 1)) {
                  iVar7 = local_2d0 - 1;
                }
                uVar34 = 0;
                uVar20 = (ulonglong)(uint)(iVar7 >> 5);
                if (iVar7 >> 5 < 1) {
                  uVar20 = uVar34;
                }
                iVar7 = 0;
                do {
                  if (uVar20 == uVar34) goto LAB_144537076;
                  iVar7 = iVar7 + 0x20;
                  uVar8 = puVar11[uVar34 + 1];
                  uVar34 = uVar34 + 1;
                } while (uVar8 == 0);
              }
              else {
                uVar34 = 0;
                iVar7 = 0;
              }
              uVar20 = (ulonglong)(-uVar8 & uVar8);
              uVar2 = uVar20 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              uVar8 = (iVar7 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if ((int)local_2d0 <= (int)uVar8) {
                uVar8 = local_2d0;
              }
            }
            if (uVar8 != local_2d0) {
              uVar6 = 0xffffffff;
              local_3c8 = (ulonglong)local_2d0;
              do {
                iVar9 = *(int *)(local_2f8 + (longlong)(int)uVar8 * 0xc);
                lVar23 = (longlong)iVar9 * 0x10;
                lVar19 = (longlong)*(int *)(local_258[0] + 8 + lVar23);
                local_3cc = iVar7;
                if (lVar19 != 0) {
                  lVar23 = *(longlong *)(local_258[0] + lVar23);
                  lVar29 = 0;
                  do {
                    iVar7 = *(int *)(lVar23 + lVar29);
                    local_b8 = CONCAT44(local_b8._4_4_,iVar7);
                    iVar18 = *(int *)(local_238 + (longlong)iVar7 * 4);
                    if ((iVar18 != -1) &&
                       (iVar18 = iVar18 + -1, *(int *)(local_238 + (longlong)iVar7 * 4) = iVar18,
                       iVar18 == 0)) {
                      FUN_1447cbafe(&local_348,local_39c,&local_b8,0);
                    }
                    lVar29 = lVar29 + 4;
                  } while (lVar19 * 4 != lVar29);
                }
                uVar2 = uStack_3b0;
                if ((int)uStack_2a0 != local_274) {
                  puVar12 = local_268;
                  if (local_268 == (undefined1 *)0x0) {
                    puVar12 = local_270;
                  }
                  piVar10 = (int *)(puVar12 + ((longlong)local_260 - 1U & (longlong)iVar9) * 4);
                  do {
                    iVar7 = *piVar10;
                    lVar23 = (longlong)iVar7;
                    if (lVar23 == -1) break;
                    piVar14 = (int *)(local_2a8 + lVar23 * 0xc);
                    iVar18 = *piVar14;
                    if (iVar18 == iVar9) {
                      puVar12 = local_268;
                      if (local_268 == (undefined1 *)0x0) {
                        puVar12 = local_270;
                      }
                      iVar32 = *(int *)(puVar12 + (longlong)piVar14[2] * 4);
                      if (iVar32 == iVar7) {
                        piVar26 = (int *)(puVar12 + (longlong)piVar14[2] * 4);
                      }
                      else {
                        do {
                          piVar26 = (int *)(local_2a8 + (longlong)iVar32 * 0xc + 4);
                          iVar32 = *piVar26;
                        } while (iVar32 != iVar7);
                      }
                      *piVar26 = piVar14[1];
                      if (local_274 != 0) {
                        *(int *)(local_2a8 + (longlong)local_27c._4_4_ * 0xc) = iVar7;
                      }
                      *(undefined4 *)(local_2a8 + lVar23 * 0xc) = 0xffffffff;
                      iVar32 = -1;
                      if (0 < local_274) {
                        iVar32 = local_27c._4_4_;
                      }
                      *(int *)(local_2a8 + 4 + lVar23 * 0xc) = iVar32;
                      local_27c = CONCAT44(iVar7,(undefined4)local_27c);
                      local_274 = local_274 + 1;
                      puVar12 = local_288;
                      if (local_288 == (undefined1 *)0x0) {
                        puVar12 = local_298;
                      }
                      iVar32 = iVar7 + 0x1f;
                      if (-1 < iVar7) {
                        iVar32 = iVar7;
                      }
                      bVar4 = (byte)iVar7 & 0x1f;
                      *(uint *)(puVar12 + (longlong)(iVar32 >> 5) * 4) =
                           *(uint *)(puVar12 + (longlong)(iVar32 >> 5) * 4) &
                           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                    }
                    else {
                      piVar10 = piVar14 + 1;
                    }
                  } while (iVar18 != iVar9);
                }
                lVar23 = (longlong)(int)uStack_3b0;
                uVar8 = (int)uStack_3b0 + 1;
                uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar8);
                if (uStack_3b0._4_4_ < uVar8) {
                  FUN_1446f48e2(&local_3b8,uVar2 & 0xffffffff);
                }
                *(int *)(local_3b8 + lVar23 * 4) = iVar9;
                uVar6 = uVar6 & ~(uint)uVar20;
                puVar11 = local_2d8;
                if (local_2d8 == (uint *)0x0) {
                  puVar11 = local_2e8;
                }
                iVar9 = (int)uVar34;
                lVar23 = (longlong)iVar9;
                uVar8 = puVar11[lVar23] & uVar6;
                iVar7 = local_3cc;
                if (uVar8 == 0) {
                  iVar18 = local_2d0 + 0x1e;
                  if (-1 < (int)(local_2d0 - 1)) {
                    iVar18 = local_2d0 - 1;
                  }
                  iVar18 = iVar18 >> 5;
                  iVar7 = local_3cc + 0x20;
                  iVar32 = iVar18;
                  if (iVar18 < iVar9) {
                    iVar32 = iVar9;
                  }
                  if (iVar9 < iVar18) {
                    lVar19 = 0;
                    do {
                      uVar8 = puVar11[lVar23 + lVar19 + 1];
                      if (uVar8 != 0) {
                        uVar34 = (ulonglong)(iVar9 + (int)lVar19 + 1);
                        uVar6 = 0xffffffff;
                        goto LAB_14453736b;
                      }
                      iVar7 = iVar7 + 0x20;
                      lVar19 = lVar19 + 1;
                    } while (iVar32 - lVar23 != lVar19);
                    uVar6 = 0xffffffff;
                    iVar9 = iVar32;
                  }
                  uVar34 = (ulonglong)(iVar9 + 1);
                  uVar8 = local_2d0;
                }
                else {
LAB_14453736b:
                  uVar20 = (ulonglong)(-uVar8 & uVar8);
                  uVar2 = uVar20 * 2 + 1;
                  lVar23 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                    }
                  }
                  uVar8 = (iVar7 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                  if ((int)local_2d0 <= (int)uVar8) {
                    uVar8 = local_2d0;
                  }
                }
              } while (uVar8 != (uint)local_3c8);
            }
LAB_144537076:
            pplVar24 = &local_348;
            puVar25 = &local_b8;
            for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
              *puVar25 = (ulonglong)*pplVar24;
              pplVar24 = pplVar24 + 1;
              puVar25 = puVar25 + 1;
            }
            puVar25 = &local_2f8;
            pplVar24 = &local_348;
            for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
              *pplVar24 = (longlong *)*puVar25;
              puVar25 = puVar25 + 1;
              pplVar24 = pplVar24 + 1;
            }
            puVar25 = &local_b8;
            puVar28 = &local_2f8;
            for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
              *puVar28 = *puVar25;
              puVar25 = puVar25 + 1;
              puVar28 = puVar28 + 1;
            }
            uVar34 = local_3c0;
            if ((int)uStack_2a0 <= local_274) goto LAB_1445373c1;
          }
        }
        else {
LAB_1445373c1:
          local_b8 = 0;
          uStack_b0 = 0;
          if (uVar34 != 0) {
            FUN_149517aec(&local_b8);
          }
          iVar7 = *(int *)(local_3d8 + 0x40);
          if ((longlong)iVar7 != 0) {
            lVar23 = *(longlong *)(local_3d8 + 0x38);
            lVar19 = 0;
            do {
              lVar29 = (longlong)(int)uStack_b0;
              uVar8 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
              if (uStack_b0._4_4_ < uVar8) {
                FUN_149517260(&local_b8);
              }
              *(undefined8 *)(local_b8 + lVar29 * 8) = *(undefined8 *)(lVar23 + lVar19);
              lVar19 = lVar19 + 8;
            } while ((longlong)iVar7 * 8 != lVar19);
            if ((longlong)*(int *)(local_3d8 + 0x40) != 0) {
              lVar23 = *(longlong *)(local_3d8 + 0x38);
              lVar19 = (longlong)*(int *)(local_3d8 + 0x40) << 3;
              lVar29 = 0;
              do {
                *(undefined8 *)(lVar23 + lVar29 * 2) =
                     *(undefined8 *)(local_b8 + (longlong)*(int *)(local_3b8 + lVar29) * 8);
                lVar29 = lVar29 + 4;
                lVar19 = lVar19 + -8;
              } while (lVar19 != 0);
            }
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_3b8 != 0) {
          FUN_1400020a8();
        }
        local_300 = 0;
        if (local_308 != 0) {
          FUN_1400020a8();
        }
        uVar20 = uStack_340 >> 0x20;
        uStack_340 = uStack_340 & 0xffffffff00000000;
        if ((int)uVar20 != 0) {
          FUN_1447a08a2(&local_348,0);
        }
        uStack_318 = 0xffffffff;
        local_314 = 0;
        local_320 = 0;
        if (0x80 < local_31c) {
          local_31c = 0x80;
          FUN_1446efbd8(local_338,0);
        }
        if (local_328 != 0) {
          FUN_1400020a8();
        }
        if (local_348 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_2b0 = 0;
        if (local_2b8 != 0) {
          FUN_1400020a8();
        }
        uVar20 = uStack_2f0 >> 0x20;
        uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
        if ((int)uVar20 != 0) {
          FUN_1447a08a2(&local_2f8,0);
        }
        uStack_2c8 = 0xffffffff;
        local_2c4 = 0;
        local_2d0 = 0;
        if (0x80 < local_2cc) {
          local_2cc = 0x80;
          FUN_1446efbd8(local_2e8,0);
        }
        if (local_2d8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_2f8 != 0) {
          FUN_1400020a8();
        }
        FUN_14759d360(&local_2a8);
        uVar8 = *(uint *)(local_3d8 + 0x40);
        lVar23 = (longlong)(int)uVar8;
        if (1 < lVar23) {
          puVar27 = *(undefined8 **)(local_3d8 + 0x38);
          lVar19 = 0;
          puVar17 = puVar27;
          do {
            uVar3 = *puVar17;
            *puVar17 = puVar27[lVar23 + lVar19 + -1];
            puVar27[lVar23 + lVar19 + -1] = uVar3;
            lVar19 = lVar19 + -1;
            puVar17 = puVar17 + 1;
          } while (-lVar19 != (ulonglong)(uVar8 >> 1));
        }
        *(undefined1 *)(local_3d8 + 0x238) = 0;
        local_350 = 0;
        if (local_358 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1495140f0(&local_398);
        break;
      }
      lVar23 = lVar23 + 0x60;
      lVar19 = lVar19 + -0x60;
    } while (lVar19 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144537b6b FUN_144537b6b body=69 status=ok
// SIG undefined FUN_144537b6b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144537b6b(void)

{
  _DAT_14cc1e060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144537bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e068,1);
  return;
}



// FUNCTION 144537bb0 FUN_144537bb0 body=69 status=ok
// SIG undefined FUN_144537bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144537bb0(void)

{
  _DAT_14cc1e078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144537bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e080,1);
  return;
}



// FUNCTION 144537bf6 FUN_144537bf6 body=5194 status=ok
// SIG undefined FUN_144537bf6(void)

void FUN_144537bf6(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION p_Var2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  undefined1 auStack_288 [40];
  longlong *local_260;
  longlong *local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined2 uStack_1b0;
  undefined4 uStack_1ae;
  undefined2 uStack_1aa;
  undefined2 uStack_1a8;
  undefined4 uStack_1a6;
  undefined4 uStack_1a2;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong local_160;
  longlong *local_158;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 local_148;
  undefined4 uStack_146;
  undefined2 uStack_142;
  undefined1 local_140;
  undefined1 local_13f;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_59;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar1 = param_2 + 4;
  local_58 = param_2[3];
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar6 = FUN_1492dc37a(&local_58,puVar1);
  if (cVar6 == '\0') {
    lVar11 = param_2[3];
    if ((((lVar11 != 0) && (lVar10 = FUN_1411f0380(), lVar10 != 0)) &&
        (*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
         lVar10 + 0x30 && (param_2[3] != 0)))) goto LAB_144537cf7;
    FUN_1400021e4(param_2 + 2,&local_158);
  }
  else {
    local_59 = '\x01';
    plVar13 = (longlong *)param_2[3];
    if (plVar13 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)plVar13[0x22];
      if (plVar16 == (longlong *)0x0) {
        (**(code **)(*plVar13 + 1000))(plVar13);
        plVar16 = (longlong *)plVar13[0x22];
      }
    }
    cVar6 = (**(code **)(*plVar16 + 0x2c8))(plVar16,puVar1,&local_59);
    if (cVar6 != '\0') {
      local_78 = *(undefined4 *)param_2;
      uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_70 = *(undefined4 *)(param_2 + 1);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      lVar11 = FUN_1494fe768(param_1[1]);
      if ((lVar11 == 0) || (*(char *)(lVar11 + 0x38) != '\0')) goto LAB_144537d78;
      if (*(char *)(lVar11 + 0x39) == '\x01') goto LAB_144537cf7;
      local_88 = param_2[2];
      local_98 = *(undefined4 *)param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = *(undefined4 *)(param_2 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      lVar10 = FUN_1494fd646(param_1[1]);
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x19) != '\0')) {
LAB_1445380e6:
        piVar3 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar20 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60), iVar20 != 2)) {
          if (iVar20 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_144538176;
          }
          p_Var2 = (LPCRITICAL_SECTION)(piVar3 + 4);
          while( true ) {
            if (0 < piVar3[1]) {
              (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x20))
                        (*(longlong **)(piVar3 + 0xe),0xffffffff,0);
            }
            EnterCriticalSection(p_Var2);
            if (piVar3[1] == 0) break;
            LeaveCriticalSection(p_Var2);
          }
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var2);
        }
LAB_144538176:
        plVar13 = (longlong *)FUN_145988e1c();
        lVar10 = plVar13[0x22];
        if (lVar10 == 0) {
          (**(code **)(*plVar13 + 1000))(plVar13);
          lVar10 = plVar13[0x22];
        }
        lVar12 = param_2[3];
        if (((lVar12 == 0) || (lVar14 = FUN_1411f0380(), lVar14 == 0)) ||
           (*(int *)(lVar12 + 0x38) < *(int *)(lVar14 + 0x38))) {
          local_f8 = 0;
        }
        else {
          if (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30) {
            local_f8 = param_2[3];
          }
          else {
            local_f8 = 0;
          }
          if ((local_f8 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c();
          }
        }
        FUN_1494ff424(lVar10,&local_f0,&local_f8);
        lVar12 = local_e8;
        if (((local_e8 == 0) || (lVar14 = FUN_1459888c4(), lVar14 == 0)) ||
           ((*(int *)(lVar12 + 0x38) < *(int *)(lVar14 + 0x38) ||
            (local_e8 == 0 ||
             *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
             lVar14 + 0x30)))) {
          local_e8 = FUN_1459888c4();
        }
        plVar13 = (longlong *)FUN_1494ff602(DAT_14c951640,local_e8);
        if (plVar13 != (longlong *)0x0) {
          FUN_1401924dc(plVar13);
        }
        local_108 = param_2[2];
        local_118 = *(undefined4 *)param_2;
        uStack_114 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_110 = *(undefined4 *)(param_2 + 1);
        uStack_10c = *(undefined4 *)((longlong)param_2 + 0xc);
        (**(code **)(*plVar13 + 0x2a0))(plVar13);
        lVar12 = param_2[3];
        if (DAT_14c950c29 == 1) {
          if (lVar12 == 0) {
            lVar12 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar12 = param_2[3];
          }
        }
        plVar13[0xb] = lVar12;
        local_258 = plVar13;
        if (*(int *)(param_2 + 10) != *(int *)((longlong)param_2 + 0x7c)) {
          uVar7 = (uint)((ulonglong)DAT_14cc1de2c >> 0x10);
          uVar17 = (uint)DAT_14cc1de2c & 0xffff;
          puVar15 = param_2 + 0x10;
          if ((undefined8 *)param_2[0x11] != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)param_2[0x11];
          }
          iVar20 = *(int *)((longlong)puVar15 +
                           (ulonglong)
                           (*(int *)(param_2 + 0x12) - 1U &
                           (int)((ulonglong)DAT_14cc1de2c >> 0x20) +
                           ((uint)DAT_14cc1de2c << 0x10 | uVar17) + (uVar7 << 0x13 | uVar7 & 0xffff)
                           + (uVar17 >> 4)) * 4);
          if (iVar20 != -1) {
            do {
              lVar12 = param_2[9] + (longlong)iVar20 * 0x20;
              if (*(longlong *)(param_2[9] + (longlong)iVar20 * 0x20) == DAT_14cc1de2c) {
                if ((undefined8 *)(lVar12 + 8) != (undefined8 *)0x0 && lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x10) == 0) {
                    puVar21 = &DAT_149dfb77a;
                  }
                  else {
                    puVar21 = *(undefined2 **)(lVar12 + 8);
                  }
                  FUN_1446f470e(&local_158,puVar21,1);
                  *(longlong **)((longlong)local_258 + 0x6c) = local_158;
                }
                break;
              }
              iVar20 = *(int *)(lVar12 + 0x18);
            } while (iVar20 != -1);
          }
        }
        plVar13 = local_e0;
        if ((((local_e0 == (longlong *)0x0) || (lVar12 = FUN_14590a54c(), lVar12 == 0)) ||
            ((int)plVar13[7] < *(int *)(lVar12 + 0x38))) ||
           (local_e0 == (longlong *)0x0 ||
            *(longlong *)(plVar13[6] + (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) {
          lVar12 = *(longlong *)(lVar10 + 0x58);
          if (((lVar12 != 0) && (lVar14 = FUN_14590a54c(), lVar14 != 0)) &&
             ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38) &&
              ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                == lVar14 + 0x30 &&
               (plVar13 = *(longlong **)(lVar10 + 0x58), plVar13 != (longlong *)0x0)))))) {
            plVar16 = (longlong *)plVar13[0x22];
            if (plVar16 == (longlong *)0x0) {
              (**(code **)(*plVar13 + 1000))(plVar13);
              plVar16 = (longlong *)plVar13[0x22];
            }
            (**(code **)(*plVar16 + 0x2a0))(plVar16,&local_158);
            plVar16 = local_158;
            if ((((local_158 == (longlong *)0x0) || (lVar10 = FUN_1411f0380(), lVar10 == 0)) ||
                ((int)plVar16[7] < *(int *)(lVar10 + 0x38))) ||
               (plVar19 = local_158,
               *(longlong *)(plVar16[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
            {
              plVar19 = (longlong *)0x0;
            }
            lVar10 = param_2[3];
            if (((lVar10 == 0) || (lVar12 = FUN_1411f0380(), lVar12 == 0)) ||
               ((*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38) ||
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                 != lVar12 + 0x30)))) {
              lVar10 = 0;
            }
            else {
              lVar10 = param_2[3];
            }
            if (((plVar19 != (longlong *)0x0) && ((int)plVar19[7] <= *(int *)(lVar10 + 0x38))) &&
               (local_e0 = plVar13,
               *(longlong **)(*(longlong *)(lVar10 + 0x30) + (longlong)(int)plVar19[7] * 8) ==
               plVar19 + 6)) goto LAB_144538673;
          }
        }
        else {
          plVar13 = (longlong *)local_e0[0x22];
          if (plVar13 == (longlong *)0x0) {
            (**(code **)(*local_e0 + 1000))(local_e0);
            plVar13 = (longlong *)local_e0[0x22];
          }
          (**(code **)(*plVar13 + 0x2a0))(plVar13,&local_158);
          plVar13 = local_158;
          if ((((local_158 == (longlong *)0x0) || (lVar10 = FUN_1411f0380(), lVar10 == 0)) ||
              ((int)plVar13[7] < *(int *)(lVar10 + 0x38))) ||
             (plVar16 = local_158,
             *(longlong *)(plVar13[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
            plVar16 = (longlong *)0x0;
          }
          lVar10 = param_2[3];
          if (((lVar10 == 0) || (lVar12 = FUN_1411f0380(), lVar12 == 0)) ||
             ((*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
               != lVar12 + 0x30)))) {
            lVar10 = 0;
          }
          else {
            lVar10 = param_2[3];
          }
          if (((plVar16 == (longlong *)0x0) || (*(int *)(lVar10 + 0x38) < (int)plVar16[7])) ||
             (*(longlong **)(*(longlong *)(lVar10 + 0x30) + (longlong)(int)plVar16[7] * 8) !=
              plVar16 + 6)) {
            lVar10 = param_2[3];
            if ((((lVar10 == 0) || (lVar12 = FUN_1411f0380(), lVar12 == 0)) ||
                (*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                != lVar12 + 0x30)) {
              lVar10 = 0;
            }
            else {
              lVar10 = param_2[3];
            }
            local_a8[0] = *(longlong *)(lVar10 + 0x18);
            FUN_1400021e4(local_a8,&local_158);
            local_50 = (longlong *)local_e0[3];
            FUN_1400021e4(&local_50,local_a8);
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_158 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
LAB_144538673:
            lVar10 = FUN_1494ff6b2(local_258,local_e0);
            if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar10);
            }
            local_258[7] = lVar10;
            uVar7 = *(uint *)(lVar10 + 0xc);
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            FUN_14482b126(lVar10,0x4000000);
          }
        }
        lVar10 = local_d8;
        if ((longlong)local_d0 != 0) {
          local_248 = local_258 + 5;
          lVar12 = 0;
          do {
            plVar13 = *(longlong **)(lVar10 + lVar12);
            if ((DAT_14c950c29 == 1) && (plVar13 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar13);
LAB_144538854:
              lVar14 = FUN_14590a630();
              if (((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= (int)plVar13[7])) &&
                 (*(longlong *)(plVar13[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30
                 )) {
                lVar14 = FUN_14590a630();
                if ((lVar14 == 0) || ((int)plVar13[7] < *(int *)(lVar14 + 0x38))) {
                  plVar16 = (longlong *)0x0;
                }
                else {
                  plVar16 = (longlong *)0x0;
                  if (*(longlong *)(plVar13[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                      lVar14 + 0x30) {
                    plVar16 = plVar13;
                  }
                }
                plVar19 = (longlong *)plVar16[0x22];
                if (plVar19 == (longlong *)0x0) {
                  local_260 = plVar16;
                  (**(code **)(*plVar16 + 1000))(plVar16);
                  plVar19 = (longlong *)local_260[0x22];
                }
                (**(code **)(*plVar19 + 0x2a0))();
                if (local_158 == (longlong *)0x0) {
LAB_144538928:
                  plVar16 = (longlong *)0x0;
                }
                else {
                  local_260 = local_158;
                  lVar14 = FUN_1411f0380();
                  if (((lVar14 == 0) || ((int)local_260[7] < *(int *)(lVar14 + 0x38))) ||
                     (plVar16 = local_158,
                     *(longlong *)(local_260[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                     lVar14 + 0x30)) goto LAB_144538928;
                }
                if (param_2[3] == 0) {
                  lVar14 = 0;
                }
                else {
                  local_260 = plVar16;
                  local_250 = param_2[3];
                  lVar14 = FUN_1411f0380();
                  plVar16 = local_260;
                  if (((lVar14 == 0) || (*(int *)(local_250 + 0x38) < *(int *)(lVar14 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(local_250 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                      lVar14 + 0x30)) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = param_2[3];
                  }
                }
                if (((plVar16 == (longlong *)0x0) || (*(int *)(lVar14 + 0x38) < (int)plVar16[7])) ||
                   (*(longlong **)(*(longlong *)(lVar14 + 0x30) + (longlong)(int)plVar16[7] * 8) !=
                    plVar16 + 6)) {
                  local_260 = (longlong *)param_2[3];
                  if (((local_260 == (longlong *)0x0) || (lVar14 = FUN_1411f0380(), lVar14 == 0)) ||
                     (((int)local_260[7] < *(int *)(lVar14 + 0x38) ||
                      (*(longlong *)(local_260[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                       lVar14 + 0x30)))) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = param_2[3];
                  }
                  local_a8[0] = *(longlong *)(lVar14 + 0x18);
                  FUN_1400021e4(local_a8,&local_158);
                  lVar14 = FUN_14590a630();
                  if ((lVar14 == 0) || ((int)plVar13[7] < *(int *)(lVar14 + 0x38))) {
                    plVar13 = (longlong *)0x0;
                  }
                  else if (*(longlong *)(plVar13[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                           lVar14 + 0x30) {
                    plVar13 = (longlong *)0x0;
                  }
                  local_50 = (longlong *)plVar13[3];
                  FUN_1400021e4(&local_50,local_a8);
                  if (local_a8[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_158 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  lVar14 = FUN_14590a630();
                  if ((lVar14 == 0) || ((int)plVar13[7] < *(int *)(lVar14 + 0x38))) {
                    plVar13 = (longlong *)0x0;
                  }
                  else if (*(longlong *)(plVar13[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                           lVar14 + 0x30) {
                    plVar13 = (longlong *)0x0;
                  }
                  lVar14 = FUN_1494ff762(local_258,plVar13);
                  if ((lVar14 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar14);
                  }
                  local_260 = (longlong *)(longlong)(int)local_258[6];
                  uVar7 = (int)local_258[6] + 1;
                  *(uint *)(local_258 + 6) = uVar7;
                  if (*(uint *)((longlong)local_258 + 0x34) < uVar7) {
                    FUN_14951969e(local_248,local_260);
                  }
                  local_250 = *local_248;
                  *(longlong *)(local_250 + (longlong)local_260 * 8) = lVar14;
                  if ((lVar14 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar14);
                    lVar14 = *(longlong *)(local_250 + (longlong)local_260 * 8);
                  }
                  uVar7 = *(uint *)(lVar14 + 0xc);
                  if ((int)uVar7 < DAT_14c9647dc) {
                    lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                  }
                  else {
                    lVar14 = 0;
                  }
                  FUN_14482b126(lVar14,0x4000000);
                }
              }
            }
            else if (plVar13 != (longlong *)0x0) goto LAB_144538854;
            lVar12 = lVar12 + 8;
          } while ((longlong)local_d0 * 8 != lVar12);
        }
        lVar10 = FUN_1494ff812(param_1[1],param_2[2]);
        plVar13 = (longlong *)FUN_14001cc68(0x240,0x10);
        local_158 = *(longlong **)(lVar11 + 0x28);
        lVar11 = *(longlong *)(lVar11 + 0x30);
        uStack_150 = (undefined2)lVar11;
        uStack_14e = (undefined2)((ulonglong)lVar11 >> 0x10);
        uStack_14c = (undefined2)((ulonglong)lVar11 >> 0x20);
        uStack_14a = (undefined2)((ulonglong)lVar11 >> 0x30);
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        FUN_14950a92c(plVar13,&local_158);
        plVar16 = local_258;
        local_140 = lVar10 == 0;
        uVar5 = param_2[2];
        local_158 = (longlong *)*param_2;
        uStack_150 = (undefined2)*(undefined4 *)(param_2 + 1);
        uStack_14e = (undefined2)((uint)*(undefined4 *)(param_2 + 1) >> 0x10);
        uStack_14c = (undefined2)*(undefined4 *)((longlong)param_2 + 0xc);
        uStack_14a = (undefined2)((uint)*(undefined4 *)((longlong)param_2 + 0xc) >> 0x10);
        local_148 = (undefined2)uVar5;
        uStack_146 = (undefined4)((ulonglong)uVar5 >> 0x10);
        uStack_142 = (undefined2)((ulonglong)uVar5 >> 0x30);
        local_13f = 0;
        local_138 = (longlong *)0x0;
        if (local_258 != (longlong *)0x0) {
          FUN_1401924dc(local_258);
          local_138 = plVar16;
        }
        local_128 = 0;
        lVar11 = param_2[3];
        local_130 = plVar13;
        if (((lVar11 == 0) || (lVar10 = FUN_1411f0380(), plVar19 = local_258, lVar10 == 0)) ||
           (*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38))) {
          local_160 = 0;
          plVar19 = plVar16;
        }
        else {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30) {
            local_160 = param_2[3];
          }
          else {
            local_160 = 0;
          }
          if ((local_160 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c();
          }
        }
        local_168 = param_2[2];
        local_178 = *(undefined4 *)param_2;
        uStack_174 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_170 = *(undefined4 *)(param_2 + 1);
        uStack_16c = *(undefined4 *)((longlong)param_2 + 0xc);
        (**(code **)(*plVar13 + 8))(plVar13,&local_178,&local_160,param_1);
        uVar7 = *(uint *)((longlong)plVar19 + 0xc);
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        FUN_14482b126(lVar11,0x4000000);
        plVar13 = local_130;
        uStack_1b0 = uStack_150;
        local_1b8 = local_158;
        uStack_1ae = CONCAT22(uStack_14c,uStack_14e);
        uStack_1a2 = CONCAT13(local_13f,CONCAT12(local_140,uStack_142));
        uStack_1aa = uStack_14a;
        uStack_1a8 = local_148;
        uStack_1a6 = uStack_146;
        local_198 = local_138;
        local_138 = (longlong *)0x0;
        local_190 = local_130;
        local_130 = (longlong *)0x0;
        local_188 = local_128;
        local_128 = 0;
        FUN_1494ff870(param_1[1]);
        FUN_1494ff962(&local_158);
        if ((plVar19 != (longlong *)0x0) && (DAT_14c872a72 == '\0')) {
          FUN_140113f48(plVar19);
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        if (plVar13 != (longlong *)0x0) goto LAB_144538c4d;
      }
      else {
        plVar13 = *(longlong **)(lVar10 + 0x28);
        (**(code **)(*plVar13 + 0x30))(plVar13,&local_158);
        plVar16 = local_158;
        if ((local_158 == (longlong *)0x0) ||
           (((lVar10 = FUN_1411f0380(), lVar10 == 0 || ((int)plVar16[7] < *(int *)(lVar10 + 0x38)))
            || (plVar19 = local_158,
               *(longlong *)(plVar16[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)))
           ) {
          plVar19 = (longlong *)0x0;
        }
        lVar10 = param_2[3];
        if (((lVar10 == 0) || (lVar12 = FUN_1411f0380(), lVar12 == 0)) ||
           ((*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
             lVar12 + 0x30)))) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = (longlong *)param_2[3];
        }
        if (plVar19 != plVar16) {
          plVar16 = (longlong *)param_2[3];
          if (plVar16 == (longlong *)0x0) {
            plVar19 = (longlong *)0x0;
          }
          else {
            plVar19 = (longlong *)plVar16[0x22];
            if (plVar19 == (longlong *)0x0) {
              (**(code **)(*plVar16 + 1000))(plVar16);
              plVar19 = (longlong *)plVar16[0x22];
            }
          }
          (**(code **)(*plVar19 + 0x2c0))(plVar19,&local_158);
          plVar16 = local_158;
          if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
            plVar16 = (longlong *)(**(code **)(*local_158 + 0x50))();
          }
          FUN_1447a1fc0(plVar16);
          pcVar4 = *(code **)(*local_158 + 0x28);
          if (pcVar4 != (code *)&LAB_14010c34c && pcVar4 != FUN_14482841c) {
            (*pcVar4)();
          }
          (**(code **)(*plVar13 + 0x30))(plVar13,&local_50);
          plVar13 = local_50;
          if (local_50 == (longlong *)0x0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = (longlong *)local_50[0x22];
            if (plVar16 == (longlong *)0x0) {
              (**(code **)(*local_50 + 1000))(local_50);
              plVar16 = (longlong *)plVar13[0x22];
            }
          }
          (**(code **)(*plVar16 + 0x2c0))(plVar16,&local_f0);
          plVar13 = local_f0;
          if (*(code **)(*local_f0 + 0x50) != FUN_144828418) {
            plVar13 = (longlong *)(**(code **)(*local_f0 + 0x50))();
          }
          FUN_1447a1fc0(plVar13);
          pcVar4 = *(code **)(*local_f0 + 0x28);
          if (pcVar4 != (code *)&LAB_14010c34c && pcVar4 != FUN_14482841c) {
            (*pcVar4)();
          }
          FUN_1400021e4(param_2 + 2,local_a8);
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_f0 != (longlong *)0x0) {
            (**(code **)(*local_f0 + 0x10))();
          }
          if (local_158 != (longlong *)0x0) {
            (**(code **)(*local_158 + 0x10))();
          }
          local_b8 = param_2[2];
          local_c8 = *(undefined4 *)param_2;
          uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_c0 = *(undefined4 *)(param_2 + 1);
          uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
          FUN_1494ff358(param_1[1]);
          goto LAB_1445380e6;
        }
        (**(code **)(*plVar13 + 0x20))(plVar13);
        piVar3 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar20 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60), iVar20 != 2)) {
          if (iVar20 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_144537f55;
          }
          p_Var2 = (LPCRITICAL_SECTION)(piVar3 + 4);
          while( true ) {
            if (0 < piVar3[1]) {
              (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x20))
                        (*(longlong **)(piVar3 + 0xe),0xffffffff,0);
            }
            EnterCriticalSection(p_Var2);
            if (piVar3[1] == 0) break;
            LeaveCriticalSection(p_Var2);
          }
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var2);
        }
LAB_144537f55:
        if (plVar13 == (longlong *)0x0) goto LAB_144538176;
LAB_144538c4d:
        (**(code **)(*plVar13 + 0x68))(plVar13,&local_158);
        puVar15 = puVar1;
        if (local_158 != (longlong *)0x0) {
          lVar11 = (**(code **)(*param_1 + 0x210))(param_1,param_2);
          if (lVar11 != 0) {
            lVar10 = FUN_1459888c4();
            if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
               (*(longlong *)(lVar11 + 0x50) != 0)) {
              (**(code **)(*plVar13 + 0x80))(plVar13,0);
            }
          }
          puVar15 = (undefined8 *)(**(code **)(*plVar13 + 0x50))(plVar13,0);
        }
        plVar16 = (longlong *)
                  CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar3 = (int *)((longlong)plVar16 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        if ((int)param_1[0x18] != *(int *)((longlong)param_1 + 0xec)) {
          lVar11 = param_2[2];
          uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
          uVar17 = (uint)lVar11 & 0xffff;
          plVar16 = param_1 + 0x1e;
          if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
            plVar16 = (longlong *)param_1[0x1f];
          }
          uVar18 = (int)param_1[0x20] - 1;
          iVar20 = *(int *)((longlong)plVar16 +
                           (ulonglong)
                           ((int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar17) +
                            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4) & uVar18) * 4);
          if (iVar20 != -1) {
            do {
              lVar10 = param_1[0x17] + (longlong)iVar20 * 0x110;
              if (*(longlong *)(param_1[0x17] + (longlong)iVar20 * 0x110) == lVar11) {
                if (lVar10 + 8 != 0 && lVar10 != 0) {
                  local_1c0 = param_2[3];
                  if ((local_1c0 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_1c8 = param_2[2];
                  local_1d8 = *(undefined4 *)param_2;
                  uStack_1d4 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_1d0 = *(undefined4 *)(param_2 + 1);
                  uStack_1cc = *(undefined4 *)((longlong)param_2 + 0xc);
                  FUN_1494ff9c2(lVar10 + 8,&local_1d8,&local_1c0,puVar1);
                  local_1e0 = param_2[3];
                  if ((local_1e0 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_1e8 = param_2[2];
                  puVar22 = &local_1f8;
                  local_1f8 = *(undefined4 *)param_2;
                  uStack_1f4 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_1f0 = *(undefined4 *)(param_2 + 1);
                  uStack_1ec = *(undefined4 *)((longlong)param_2 + 0xc);
                  plVar16 = &local_1e0;
                  goto LAB_144538f96;
                }
                break;
              }
              iVar20 = *(int *)(lVar10 + 0x108);
            } while (iVar20 != -1);
          }
          lVar11 = param_1[0x3f];
          uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
          uVar17 = (uint)lVar11 & 0xffff;
          iVar20 = *(int *)((longlong)plVar16 +
                           (ulonglong)
                           ((int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar17) +
                            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4) & uVar18) * 4);
          if (iVar20 != -1) {
            do {
              lVar10 = param_1[0x17] + (longlong)iVar20 * 0x110;
              if (*(longlong *)(param_1[0x17] + (longlong)iVar20 * 0x110) == lVar11) {
                if (lVar10 + 8 != 0 && lVar10 != 0) {
                  local_200 = param_2[3];
                  if ((local_200 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_208 = param_2[2];
                  local_218 = *(undefined4 *)param_2;
                  uStack_214 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_210 = *(undefined4 *)(param_2 + 1);
                  uStack_20c = *(undefined4 *)((longlong)param_2 + 0xc);
                  FUN_1494ff9c2(lVar10 + 8,&local_218,&local_200,puVar1);
                  local_220 = param_2[3];
                  if ((local_220 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_228 = param_2[2];
                  puVar22 = &local_238;
                  local_238 = *(undefined4 *)param_2;
                  uStack_234 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_230 = *(undefined4 *)(param_2 + 1);
                  uStack_22c = *(undefined4 *)((longlong)param_2 + 0xc);
                  plVar16 = &local_220;
LAB_144538f96:
                  FUN_1494ff9c2(lVar10 + 0x88,puVar22,plVar16,puVar15);
                }
                break;
              }
              iVar20 = *(int *)(lVar10 + 0x108);
            } while (iVar20 != -1);
          }
        }
        local_240 = param_2[3];
        if ((local_240 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1494ffa40(plVar13,&local_240,puVar1);
      }
      piVar3 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar20 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar20 != 2)) {
        if (iVar20 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_144537d78;
        }
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
      }
      goto LAB_144537d78;
    }
    if (local_59 != '\x01') goto LAB_144537d78;
LAB_144537cf7:
    FUN_1400021e4(param_2 + 2,&local_158);
    lVar11 = param_2[3];
    if (((lVar11 == 0) || (lVar10 = FUN_1411f0380(), lVar10 == 0)) ||
       ((*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
         lVar10 + 0x30)))) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_2[3];
    }
    local_a8[0] = *(longlong *)(lVar11 + 0x18);
    FUN_1400021e4(local_a8,&local_f0);
    if (local_f0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_144537d78:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144539042 FUN_144539042 body=3168 status=ok
// SIG undefined FUN_144539042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144539042(LARGE_INTEGER param_1,longlong *param_2)

{
  int *piVar1;
  undefined ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined8 *puVar17;
  LARGE_INTEGER LVar18;
  longlong *plVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined2 *puVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong **pplVar27;
  undefined1 auStack_1b8 [40];
  undefined ***local_190;
  code *local_188;
  LARGE_INTEGER *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong *local_f8;
  char local_e9;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_88;
  longlong *local_80;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_98 = (undefined4)*param_2;
  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_90 = (undefined4)param_2[1];
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar12 = FUN_1494fe768(*(longlong *)(param_1.QuadPart + 8));
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x38) != '\0')) goto LAB_144539094;
  local_a8 = param_2[2];
  local_b8 = (undefined4)*param_2;
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_b0 = (undefined4)param_2[1];
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar13 = (undefined4 *)FUN_1494fd646(*(longlong *)(param_1.QuadPart + 8));
  if (((puVar13 == (undefined4 *)0x0) ||
      ((((*(char *)(puVar13 + 6) != '\x01' || (*(char *)((longlong)puVar13 + 0x19) != '\0')) ||
        (plVar4 = *(longlong **)(puVar13 + 10), plVar4 == (longlong *)0x0)) ||
       ((plVar4[0xd] == 0 ||
        ((**(code **)(*plVar4 + 0x30))(plVar4,&local_c0), plVar19 = local_c0,
        local_c0 == (longlong *)0x0)))))) ||
     ((lVar14 = FUN_1411f0380(), lVar14 == 0 ||
      ((((int)plVar19[7] < *(int *)(lVar14 + 0x38) ||
        (*(longlong *)(plVar19[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) ||
       (local_c0 == (longlong *)0x0)))))) goto LAB_144539094;
  local_e8 = &PTR_FUN_149eacb10;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  (**(code **)(*plVar4 + 0x68))(plVar4,&local_88);
  if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
    FUN_1492dbb32(&local_e8,param_2 + 3);
    LVar18 = local_88;
    uVar15 = (**(code **)(*plVar4 + 0x50))(plVar4,1);
    (**(code **)(*(longlong *)LVar18 + 0x10))(LVar18.QuadPart,uVar15,param_2 + 3);
  }
  plVar19 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_80 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar19 = local_c0;
  local_e9 = '\x01';
  if (local_c0 == (longlong *)0x0) {
    plVar26 = (longlong *)0x0;
  }
  else {
    plVar26 = (longlong *)local_c0[0x22];
    if (plVar26 == (longlong *)0x0) {
      (**(code **)(*local_c0 + 1000))(local_c0);
      plVar26 = (longlong *)plVar19[0x22];
    }
  }
  pppuVar2 = (undefined ***)(param_2 + 3);
  uVar15 = (**(code **)(*plVar4 + 0x50))(plVar4,1);
  cVar9 = (**(code **)(*plVar26 + 0x2d0))(plVar26,uVar15,pppuVar2,&local_e9);
  plVar19 = local_c0;
  if (cVar9 == '\0') {
    if (local_e9 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e0a8) && (FUN_144b3d300(&DAT_14cc1e0a8), DAT_14cc1e0a8 == -1))
      {
        local_88.QuadPart = 0x14bd2c5b0;
        local_80 = (longlong *)CONCAT35(local_80._5_3_,0x1f);
        uVar11 = FUN_14001a6c0(&local_88,1);
        _DAT_14cc1e0a0 = (ulonglong)uVar11;
        puVar13 = &DAT_14cc1e0a8;
LAB_144539c77:
        _Init_thread_footer(puVar13);
      }
LAB_144539379:
      FUN_1400021e4(param_2 + 2,&local_88);
      plVar4 = local_c0;
      if ((((local_c0 == (longlong *)0x0) || (lVar12 = FUN_1411f0380(), lVar12 == 0)) ||
          ((int)plVar4[7] < *(int *)(lVar12 + 0x38))) ||
         (*(longlong *)(plVar4[6] + (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) {
        local_c0 = (longlong *)0x0;
      }
      local_70[0] = local_c0[3];
      FUN_1400021e4(local_70,&local_60);
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_190 = pppuVar2;
    if (CONCAT71(uStack_d7,uStack_d8) != 0) {
      if (local_c0 == (longlong *)0x0) {
        plVar26 = (longlong *)0x0;
      }
      else {
        plVar26 = (longlong *)local_c0[0x22];
        if (plVar26 == (longlong *)0x0) {
          (**(code **)(*local_c0 + 1000))(local_c0);
          plVar26 = (longlong *)plVar19[0x22];
        }
      }
      uVar15 = (**(code **)(*plVar4 + 0x50))(plVar4,0);
      cVar9 = (**(code **)(*plVar26 + 0x2d0))(plVar26,uVar15,&local_e8,&local_e9);
      if (cVar9 == '\0') {
        if (local_e9 == '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc1e0b8) && (FUN_144b3d300(&DAT_14cc1e0b8), DAT_14cc1e0b8 == -1)) {
            local_88.QuadPart = 0x14bd2c5d0;
            local_80 = (longlong *)CONCAT35(local_80._5_3_,0x27);
            uVar11 = FUN_14001a6c0(&local_88,1);
            _DAT_14cc1e0b0 = (ulonglong)uVar11;
            puVar13 = &DAT_14cc1e0b8;
            goto LAB_144539c77;
          }
          goto LAB_144539379;
        }
        goto LAB_144539405;
      }
    }
    if (param_2[5] == 0) {
      lVar14 = 0;
    }
    else {
      QueryPerformanceCounter(&local_88);
      *(double *)(param_2[5] + 0x80) = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
      uVar8 = DAT_14c846560._4_4_;
      uVar7 = (undefined4)DAT_14c846560;
      uVar6 = uRam000000014c84655c;
      if (DAT_14c846568 == '\x01') {
        lVar14 = param_2[5];
        *(undefined4 *)(lVar14 + 0x88) = DAT_14c846558;
        *(undefined4 *)(lVar14 + 0x8c) = uVar6;
        *(undefined4 *)(lVar14 + 0x90) = uVar7;
        *(undefined4 *)(lVar14 + 0x94) = uVar8;
        uVar8 = DAT_14c846560._4_4_;
        uVar7 = (undefined4)DAT_14c846560;
        uVar6 = uRam000000014c84655c;
        lVar14 = CONCAT71(uStack_d7,uStack_d8);
        if (lVar14 != 0) {
          *(undefined4 *)(lVar14 + 0x88) = DAT_14c846558;
          *(undefined4 *)(lVar14 + 0x8c) = uVar6;
          *(undefined4 *)(lVar14 + 0x90) = uVar7;
          *(undefined4 *)(lVar14 + 0x94) = uVar8;
        }
      }
      lVar14 = param_2[5];
    }
    FUN_1494fffe8(*(undefined8 *)(lVar12 + 0x28),lVar14);
    if (*(int *)(param_1.QuadPart + 0xc0) != *(int *)(param_1.QuadPart + 0xec)) {
      lVar14 = param_2[2];
      uVar11 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar20 = (uint)lVar14 & 0xffff;
      plVar19 = (longlong *)(param_1.QuadPart + 0xf0);
      if (*(longlong **)(param_1.QuadPart + 0xf8) != (longlong *)0x0) {
        plVar19 = *(longlong **)(param_1.QuadPart + 0xf8);
      }
      uVar21 = *(int *)(param_1.QuadPart + 0x100) - 1;
      iVar10 = *(int *)((longlong)plVar19 +
                       (ulonglong)
                       ((int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar20) +
                        (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar20 >> 4) & uVar21) * 4);
      if (iVar10 != -1) {
        do {
          lVar22 = *(longlong *)(param_1.QuadPart + 0xb8) + (longlong)iVar10 * 0x110;
          if (*(longlong *)(*(longlong *)(param_1.QuadPart + 0xb8) + (longlong)iVar10 * 0x110) ==
              lVar14) {
            if ((lVar22 + 8U & 0xfffffffffffffff7) != 0) {
              local_f8 = local_c0;
              if ((local_c0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              pppuVar2 = local_190;
              local_108 = *(undefined8 *)(puVar13 + 4);
              local_118 = *puVar13;
              uStack_114 = puVar13[1];
              uStack_110 = puVar13[2];
              uStack_10c = puVar13[3];
              FUN_149500172(lVar22 + 0x48,&local_118,&local_f8,local_190);
              pppuVar16 = &local_e8;
              if (CONCAT71(uStack_d7,uStack_d8) == 0) {
                pppuVar16 = pppuVar2;
              }
              local_120 = local_c0;
              if ((local_c0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_128 = *(undefined8 *)(puVar13 + 4);
              puVar24 = &local_138;
              local_138 = *puVar13;
              uStack_134 = puVar13[1];
              uStack_130 = puVar13[2];
              uStack_12c = puVar13[3];
              pplVar27 = &local_120;
              goto LAB_144539777;
            }
            break;
          }
          iVar10 = *(int *)(lVar22 + 0x108);
        } while (iVar10 != -1);
      }
      lVar14 = *(longlong *)(param_1.QuadPart + 0x1f8);
      uVar11 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar20 = (uint)lVar14 & 0xffff;
      iVar10 = *(int *)((longlong)plVar19 +
                       (ulonglong)
                       ((int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar20) +
                        (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar20 >> 4) & uVar21) * 4);
      if (iVar10 != -1) {
        do {
          lVar22 = *(longlong *)(param_1.QuadPart + 0xb8) + (longlong)iVar10 * 0x110;
          if (*(longlong *)(*(longlong *)(param_1.QuadPart + 0xb8) + (longlong)iVar10 * 0x110) ==
              lVar14) {
            if ((lVar22 + 8U & 0xfffffffffffffff7) != 0) {
              local_140 = local_c0;
              if ((local_c0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              pppuVar2 = local_190;
              local_148 = *(undefined8 *)(puVar13 + 4);
              local_158 = *puVar13;
              uStack_154 = puVar13[1];
              uStack_150 = puVar13[2];
              uStack_14c = puVar13[3];
              FUN_149500172(lVar22 + 0x48,&local_158,&local_140,local_190);
              pppuVar16 = &local_e8;
              if (CONCAT71(uStack_d7,uStack_d8) == 0) {
                pppuVar16 = pppuVar2;
              }
              local_160 = local_c0;
              if ((local_c0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_168 = *(undefined8 *)(puVar13 + 4);
              puVar24 = &local_178;
              local_178 = *puVar13;
              uStack_174 = puVar13[1];
              uStack_170 = puVar13[2];
              uStack_16c = puVar13[3];
              pplVar27 = &local_160;
LAB_144539777:
              FUN_149500172(lVar22 + 200,puVar24,pplVar27,pppuVar16);
            }
            break;
          }
          iVar10 = *(int *)(lVar22 + 0x108);
        } while (iVar10 != -1);
      }
    }
    if ((*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0xa8) == 0) &&
       (FUN_144539ca4(param_1.QuadPart,plVar4,local_190),
       *(char *)(param_1.QuadPart + 0x202) == '\x01')) {
      local_188 = FUN_14453ddfe;
      local_180 = &local_88;
      local_88 = param_1;
      local_80 = param_2;
      FUN_14014a076(*(longlong *)(param_1.QuadPart + 8));
    }
    cVar9 = FUN_14950b620(plVar4,local_190);
    if (cVar9 != '\0') {
      if (*(int *)((longlong)plVar4 + 0x1ac) <= (int)plVar4[0x17]) {
        FUN_14950afa0(plVar4,1);
      }
      if (*(char *)((longlong)plVar4 + 0x1b9) == '\x01') {
        *(undefined1 *)((longlong)plVar4 + 0x1b9) = 0;
      }
      lVar14 = plVar4[0x2a];
      lVar12 = param_2[5];
      if ((lVar12 != 0) &&
         (FUN_1446f470e(&local_50,L"ForceSync",1),
         *(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44))) {
        uVar11 = (uint)((ulonglong)local_50 >> 0x10);
        uVar20 = (uint)local_50 & 0xffff;
        lVar22 = lVar12 + 0x48;
        if (*(longlong *)(lVar12 + 0x50) != 0) {
          lVar22 = *(longlong *)(lVar12 + 0x50);
        }
        iVar10 = *(int *)(lVar22 + (ulonglong)
                                   (*(int *)(lVar12 + 0x58) - 1U &
                                   (int)((ulonglong)local_50 >> 0x20) +
                                   ((uint)local_50 << 0x10 | uVar20) +
                                   (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar20 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            lVar22 = *(longlong *)(lVar12 + 0x10) + (longlong)iVar10 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar12 + 0x10) + (longlong)iVar10 * 0x20) == local_50) {
              if ((undefined8 *)(lVar22 + 8) != (undefined8 *)0x0 && lVar22 != 0) {
                if (*(int *)(lVar22 + 0x10) == 0) {
                  puVar23 = &DAT_149dfb77a;
                }
                else {
                  puVar23 = *(undefined2 **)(lVar22 + 8);
                }
                cVar9 = FUN_14052c20c(puVar23);
                if (cVar9 != '\0') {
                  *(undefined2 *)(plVar4 + 0x37) = 0x100;
                  FUN_14950afa0(plVar4,(int)plVar4[0x17]);
                }
                goto LAB_144539aeb;
              }
              break;
            }
            iVar10 = *(int *)(lVar22 + 0x18);
          } while (iVar10 != -1);
        }
      }
      if ((char)lVar14 == '\x02') {
        if (0 < *(int *)((longlong)plVar4 + 0x1e4)) {
          if ((*(int *)(param_2[5] + 0x68) != (int)plVar4[0x3c]) ||
             (*(int *)(param_2[5] + 0x6c) != *(int *)((longlong)plVar4 + 0x1e4))) {
            FUN_146811d30(plVar4 + 0x3c,&local_88);
            LVar18 = local_88;
            if (*(code **)(*(longlong *)local_88 + 0x50) != FUN_144828418) {
              LVar18.QuadPart = (**(code **)(*(longlong *)local_88 + 0x50))();
            }
            FUN_1447a1fc0(LVar18.QuadPart);
            pcVar5 = *(code **)(*(longlong *)local_88 + 0x28);
            if (pcVar5 != (code *)&LAB_14010c34c && pcVar5 != FUN_14482841c) {
              (*pcVar5)();
            }
            FUN_146811d30(param_2[5] + 0x68,&local_60);
            plVar19 = (longlong *)CONCAT44(uStack_5c,local_60);
            if (*(code **)(*plVar19 + 0x50) != FUN_144828418) {
              plVar19 = (longlong *)(**(code **)(*plVar19 + 0x50))();
            }
            FUN_1447a1fc0(plVar19);
            pcVar5 = *(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x28);
            if (pcVar5 != (code *)&LAB_14010c34c && pcVar5 != FUN_14482841c) {
              (*pcVar5)();
            }
            FUN_1400021e4(plVar4 + 0x27,local_70);
            if (local_70[0] != 0) {
              FUN_1400020a8();
            }
            if ((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x10))();
            }
            if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
              (**(code **)(*(longlong *)local_88 + 0x10))();
            }
            iVar10 = *(int *)((longlong)plVar4 + 0xbc);
            FUN_14951ef43(plVar4[0x16],(int)plVar4[0x17]);
            *(undefined4 *)(plVar4 + 0x17) = 0;
            if ((iVar10 < 0) && (*(int *)((longlong)plVar4 + 0xbc) != 0)) {
              FUN_14951ef6a(plVar4 + 0x16);
            }
            while (lVar12 = *(longlong *)plVar4[0x19], lVar12 != 0) {
              lVar14 = plVar4[0x19];
              plVar4[0x19] = lVar12;
              *(undefined4 *)(lVar12 + 8) = 0;
              if (lVar14 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        plVar4[0x3c] = *(longlong *)(param_2[5] + 0x68);
        iVar10 = FUN_14950ba76(plVar4,param_2[5] + 0x60);
      }
      else if ((char)lVar14 == '\x01') {
        iVar10 = FUN_14950b978(plVar4,param_2[5]);
      }
      else {
LAB_144539aeb:
        iVar10 = FUN_14950cac4(plVar4,param_2[5]);
      }
      if (iVar10 < 0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0x1d4) = *(int *)((longlong)plVar4 + 0x1d4) + 1;
        UNLOCK();
      }
      else {
        if ((longlong)(int)plVar4[4] != 0) {
          puVar17 = (undefined8 *)plVar4[3];
          puVar25 = puVar17 + (longlong)(int)plVar4[4] * 2;
          do {
            plVar19 = (longlong *)*puVar17;
            plVar26 = (longlong *)puVar17[1];
            if (plVar26 == (longlong *)0x0) {
              (**(code **)(*plVar19 + 8))(plVar19,local_190);
            }
            else {
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
              (**(code **)(*plVar19 + 8))(plVar19,local_190);
              LOCK();
              plVar19 = plVar26 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
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
            puVar17 = puVar17 + 2;
          } while (puVar17 != puVar25);
        }
        iVar3 = (int)plVar4[0x1a];
        *(int *)(plVar4 + 0x1a) = iVar3 + 1;
        puVar17 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar17 = 0;
        *(int *)(puVar17 + 1) = iVar3;
        if (puVar17 != (undefined8 *)0x0) {
          puVar25 = (undefined8 *)plVar4[0x18];
          plVar4[0x18] = (longlong)puVar17;
          *puVar25 = puVar17;
        }
        *(int *)(param_2[5] + 0x98) = iVar3;
        local_60 = *(undefined4 *)(param_2[5] + 0x60);
        FUN_14680026a(&local_88,&local_60,param_2[5] + 0x68);
        FUN_14950c0c6(plVar4 + 0x16,local_190,iVar10);
        if (((char)plVar4[0x2f] != '\0') && ((char)plVar4[0x2a] == '\x02')) {
          FUN_14950c13c(plVar4,iVar10);
        }
      }
      plVar4[0x38] = DAT_14c866ff8;
    }
  }
LAB_144539405:
  FUN_1448eac94(&local_e8);
LAB_144539094:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144539ca4 FUN_144539ca4 body=1444 status=ok
// SIG undefined FUN_144539ca4(void)

void FUN_144539ca4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined1 local_170 [24];
  longlong *local_158;
  longlong *local_150;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  undefined **local_100;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  undefined **local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  uint uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  cVar5 = (**(code **)(*param_2 + 0x70))(param_2);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_2 + 0x78))(param_2);
    if (cVar5 != '\0') {
      (**(code **)(*param_2 + 0x28))(param_2,local_170);
      FUN_1494fd316(param_1,local_170);
      (**(code **)(*param_2 + 0x80))(param_2,0);
    }
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x50))(param_2,1);
    if ((*(longlong *)(lVar6 + 0x10) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
      plVar1 = param_1 + 2;
      if (param_1[2] == 0) {
        (**(code **)(*param_1 + 0x2e8))(param_1,&local_a8);
        plVar8 = uStack_a0;
        if (plVar1 != &local_a8) {
          param_1[2] = (longlong)local_a8;
          local_a8 = (undefined **)0x0;
          plVar3 = (longlong *)param_1[3];
          if (uStack_a0 != plVar3) {
            uStack_a0 = (longlong *)0x0;
            param_1[3] = (longlong)plVar8;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar3 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
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
        plVar8 = uStack_a0;
        if (uStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_a0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_a0)(uStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (*plVar1 == 0) goto LAB_144539e7d;
      }
      local_d8 = &PTR_FUN_149eacb10;
      local_d0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      FUN_1492dbb32(&local_d8,param_3);
      if ((char)param_1[0x40] == '\x01') {
        (**(code **)(*param_2 + 0x88))(param_2,&local_d8);
      }
      local_100 = &PTR_FUN_149eacb10;
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e7 = 0;
      uVar7 = (**(code **)(*param_2 + 0x50))(param_2,1);
      FUN_1492dba98(&local_100,uVar7);
      (**(code **)(*param_2 + 0x30))(param_2,&local_108);
      if (*(char *)((longlong)param_1 + 0x201) == '\x01') {
        (**(code **)(*param_2 + 0x60))(param_2,&local_158);
        uVar9 = (ulonglong)local_150 & 0xffffffff;
        if ((int)local_150 == 0) {
          uVar9 = 0;
        }
        else {
          plVar8 = (longlong *)*local_158;
          if (plVar8 != (longlong *)0x0) {
            local_a8 = &PTR_FUN_149eacb10;
            uStack_a0 = (longlong *)0x0;
            uStack_98 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_8f = 0;
            uStack_88 = 0;
            local_80 = 0x49eacb10;
            uStack_7c = 1;
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            uStack_67 = 0;
            uStack_60 = uStack_60 & 0xffffff00;
            uVar7 = (**(code **)(*param_2 + 0x50))
                              (param_2,CONCAT71((uint7)(uint3)((ulonglong)local_150 >> 8),1));
            cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar7,&local_d8,&local_a8);
            if (cVar5 != '\0') {
              (**(code **)(*(longlong *)*local_158 + 8))((longlong *)*local_158,local_120);
              local_108 = local_120[0];
              if (DAT_14c950c29 == 1) {
                if (local_120[0] == (longlong *)0x0) {
                  local_108 = (longlong *)0x0;
                }
                else {
                  FUN_1456cec3c();
                  local_108 = local_120[0];
                }
              }
              (*(code *)local_100[9])(&local_100);
              local_f8 = uStack_a0;
              uStack_f0 = uStack_98;
              uStack_ec = uStack_94;
              uStack_e7 = CONCAT17(uStack_88,(undefined7)uStack_e7);
              uStack_88 = 0;
              (*(code *)local_a8[9])(&local_a8);
              (*(code *)local_d8[9])(&local_d8);
              local_d0 = CONCAT44(uStack_74,uStack_78);
              uStack_c8 = uStack_70;
              uStack_c4 = uStack_6c;
              uStack_bf = CONCAT17((undefined1)uStack_60,(undefined7)uStack_bf);
              uStack_60 = uStack_60 & 0xffffff00;
              (**(code **)(CONCAT44(uStack_7c,local_80) + 0x48))(&local_80);
            }
            FUN_1448eac94(&local_80);
            FUN_1448eac94(&local_a8);
            uVar9 = (ulonglong)local_150 & 0xffffffff;
          }
        }
        FUN_145a4972a(local_158,uVar9);
        if (local_158 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*param_2 + 0x28))(param_2,&local_a8);
      FUN_1494fd286(param_1,&local_110,&local_a8);
      (**(code **)(*param_2 + 0x28))(param_2,&local_a8);
      local_138 = (undefined4)local_a8;
      uStack_134 = local_a8._4_4_;
      uStack_130 = (undefined4)uStack_a0;
      uStack_12c = uStack_a0._4_4_;
      (**(code **)(*param_1 + 0x110))(param_1,local_120);
      uStack_88 = 0;
      uStack_87 = 0;
      local_80 = 0;
      local_a8 = (undefined **)0x0;
      uStack_a0 = (longlong *)0x0;
      uStack_7c = 0x80;
      uStack_78 = 0xffffffff;
      uStack_74 = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_60 = 0;
      plVar8 = local_120[0];
      if (*(code **)(*local_120[0] + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*local_120[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      pcVar4 = *(code **)(*local_120[0] + 0x28);
      if (pcVar4 == FUN_14482841c) {
        local_150 = local_120[0] + 3;
        if (local_120[0][5] != 0) {
          local_150 = (longlong *)(local_120[0][5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        local_150 = local_120[0] + 2;
      }
      else {
        local_150 = (longlong *)(*pcVar4)(local_120[0]);
      }
      local_158 = &DAT_14cc1de2c;
      FUN_1406e263c(&local_a8,local_ac,&local_158,0);
      cVar5 = (**(code **)(*param_2 + 0x78))(param_2);
      if (cVar5 == '\0') {
        plVar8 = (longlong *)*plVar1;
        local_140 = local_108;
        if ((local_108 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_178 = &local_a8;
        (**(code **)(*plVar8 + 8))(plVar8,local_110,&local_140,&local_100);
        (**(code **)(*param_2 + 0x80))(param_2,1);
        (**(code **)(*param_2 + 0x28))(param_2,&local_158);
        FUN_149519046(param_1 + 0x35,local_ac,&local_158);
      }
      (**(code **)(*(longlong *)*plVar1 + 0x18))((longlong *)*plVar1,local_110,&local_d8,&local_a8);
      uStack_60 = 0;
      if (CONCAT71(uStack_67,uStack_68) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(&local_a8);
      if (local_120[0] != (longlong *)0x0) {
        (**(code **)(*local_120[0] + 0x10))();
      }
      FUN_1448eac94(&local_100);
      FUN_1448eac94(&local_d8);
    }
  }
LAB_144539e7d:
  if ((local_50 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453a24a FUN_14453a24a body=180 status=ok
// SIG undefined FUN_14453a24a(void)

byte FUN_14453a24a(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  lVar2 = FUN_1494fd646(uVar3,&local_48);
  bVar1 = (byte)uVar3;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      plVar4 = *(longlong **)(lVar2 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28);
    }
    local_50 = *param_3;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    bVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 14453a300 FUN_14453a300 body=315 status=ok
// SIG undefined FUN_14453a300(void)

undefined8 FUN_14453a300(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x28);
        if (*plVar5 == param_2) {
          if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            local_28 = plVar5[3];
            local_38 = (undefined4)plVar5[1];
            uStack_34 = *(undefined4 *)((longlong)plVar5 + 0xc);
            uStack_30 = (undefined4)plVar5[2];
            uStack_2c = *(undefined4 *)((longlong)plVar5 + 0x14);
            lVar3 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
            if (lVar3 != 0) {
              if (*(longlong *)(lVar3 + 0x30) == 0) {
                plVar5 = *(longlong **)(lVar3 + 0x28);
              }
              else {
                plVar5 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 0x28);
              }
              local_40 = *param_3;
              if ((local_40 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,&local_40,param_4);
              goto LAB_14453a3b7;
            }
          }
          break;
        }
        iVar2 = (int)plVar5[4];
      } while (iVar2 != -1);
    }
  }
  uVar4 = 0;
LAB_14453a3b7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14453a43c FUN_14453a43c body=391 status=ok
// SIG undefined FUN_14453a43c(void)

undefined8
FUN_14453a43c(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x28);
        if (*plVar6 == param_2) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            local_38 = plVar6[3];
            local_48 = (undefined4)plVar6[1];
            uStack_44 = *(undefined4 *)((longlong)plVar6 + 0xc);
            uStack_40 = (undefined4)plVar6[2];
            uStack_3c = *(undefined4 *)((longlong)plVar6 + 0x14);
            lVar4 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
            if (lVar4 != 0) {
              lVar1 = *(longlong *)(lVar4 + 0x28);
              if (lVar1 == 0) {
                plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x30) + 0x28);
                if (*(longlong *)(lVar4 + 0x30) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                local_58 = *param_4;
                if ((local_58 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_58,param_5);
              }
              else {
                local_50 = *param_4;
                if ((local_50 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                uVar5 = FUN_149501be6(lVar1,param_3,&local_50,param_5);
              }
              goto LAB_14453a500;
            }
          }
          break;
        }
        iVar3 = (int)plVar6[4];
      } while (iVar3 != -1);
    }
  }
  uVar5 = 0;
LAB_14453a500:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14453a5c4 FUN_14453a5c4 body=385 status=ok
// SIG undefined FUN_14453a5c4(void)

undefined8
FUN_14453a5c4(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x28);
        if (*plVar6 == param_2) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            local_38 = plVar6[3];
            local_48 = (undefined4)plVar6[1];
            uStack_44 = *(undefined4 *)((longlong)plVar6 + 0xc);
            uStack_40 = (undefined4)plVar6[2];
            uStack_3c = *(undefined4 *)((longlong)plVar6 + 0x14);
            lVar4 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
            if (lVar4 != 0) {
              lVar1 = *(longlong *)(lVar4 + 0x28);
              if (lVar1 == 0) {
                plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x30) + 0x28);
                if (*(longlong *)(lVar4 + 0x30) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                local_58 = *param_4;
                if ((local_58 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_58,param_5);
              }
              else {
                local_50 = *param_4;
                if ((local_50 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                uVar5 = FUN_149502186(lVar1,param_3,&local_50,param_5);
              }
              goto LAB_14453a685;
            }
          }
          break;
        }
        iVar3 = (int)plVar6[4];
      } while (iVar3 != -1);
    }
  }
  uVar5 = 0;
LAB_14453a685:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14453a746 FUN_14453a746 body=69 status=ok
// SIG undefined FUN_14453a746(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453a746(void)

{
  _DAT_14cc1e1c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453a788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e1c8,1);
  return;
}



// FUNCTION 14453a78b FUN_14453a78b body=69 status=ok
// SIG undefined FUN_14453a78b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453a78b(void)

{
  _DAT_14cc1e1d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453a7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e1d8,1);
  return;
}



// FUNCTION 14453a7d0 FUN_14453a7d0 body=69 status=ok
// SIG undefined FUN_14453a7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453a7d0(void)

{
  _DAT_14cc1e1e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453a812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e1e8,1);
  return;
}



// FUNCTION 14453a815 FUN_14453a815 body=69 status=ok
// SIG undefined FUN_14453a815(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453a815(void)

{
  _DAT_14cc1e1f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453a857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e1f8,1);
  return;
}



// FUNCTION 14453a85a FUN_14453a85a body=880 status=ok
// SIG undefined FUN_14453a85a(void)

void FUN_14453a85a(longlong param_1,int param_2,longlong param_3,undefined8 *param_4,
                  LARGE_INTEGER *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  byte bVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  LARGE_INTEGER LVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  LPCRITICAL_SECTION local_78;
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_3 != 0) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar10) == param_3) goto LAB_14453a928;
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar10);
  }
  lVar10 = 0x68;
  if (param_2 - 1U < 3) {
    lVar10 = *(longlong *)(&DAT_14bd37dd8 + (ulonglong)(param_2 - 1U) * 8);
  }
  LOCK();
  *(int *)(param_1 + lVar10) = *(int *)(param_1 + lVar10) + 1;
  UNLOCK();
  if (param_4[2] != 0) {
    FUN_1400021e4(param_4 + 2,&local_58);
    LVar13 = local_58;
    if ((DWORD)local_50 == 0) {
      LVar13.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    FUN_1448097c4(param_5,&DAT_14bd2e150,LVar13.QuadPart,1);
    if ((undefined2 *)local_58.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_3 != 0) {
    bVar9 = *(byte *)(param_1 + 0x6c);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    lVar10 = FUN_149505faa(param_1,param_3,param_4);
    if (lVar10 == 0) {
      plVar1 = (longlong *)(param_1 + 0x40);
      iVar4 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar4 + 1U;
      local_78 = lpCriticalSection;
      if (*(uint *)(param_1 + 0x4c) < iVar4 + 1U) {
        FUN_14951c5a6(plVar1,iVar4);
      }
      bVar9 = bVar9 ^ 1;
      lVar10 = *plVar1;
      lVar12 = (longlong)iVar4 * 0x40;
      puVar7 = (undefined8 *)(lVar10 + 0x30 + lVar12);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined8 *)(lVar10 + 0x20 + lVar12);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 *)(lVar10 + lVar12) = 0;
      ((undefined8 *)(lVar10 + lVar12))[1] = 0;
      lVar5 = *plVar1;
      lVar10 = lVar5 + lVar12;
      *(longlong *)(lVar5 + lVar12) = param_3;
      uVar6 = param_4[1];
      puVar7 = (undefined8 *)(lVar5 + 8 + lVar12);
      *puVar7 = *param_4;
      puVar7[1] = uVar6;
      *(undefined8 *)(lVar5 + 0x18 + lVar12) = param_4[2];
      puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_14bd35920;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      plVar1 = *(longlong **)(lVar5 + 0x28 + lVar12);
      *(undefined8 **)(lVar5 + 0x20 + lVar12) = puVar7 + 2;
      *(undefined8 **)(lVar5 + 0x28 + lVar12) = puVar7;
      lpCriticalSection = local_78;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar1)(plVar1);
          lpCriticalSection = local_78;
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    else if (bVar9 == 0) {
      bVar9 = *(byte *)(param_1 + 0x6d);
    }
    else {
      bVar9 = 0;
    }
    LOCK();
    piVar3 = (int *)(*(longlong *)(lVar10 + 0x20) + 8);
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    QueryPerformanceCounter(&local_58);
    auVar14._0_8_ =
         ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0 + *(double *)(param_1 + 0x70)) *
         10000000.0 + 0.5;
    auVar14._8_8_ = 0;
    auVar14 = roundpd(auVar14,auVar14,1);
    LOCK();
    **(longlong **)(lVar10 + 0x20) = (longlong)auVar14._0_8_;
    UNLOCK();
    if (bVar9 != 0) {
      LVar13.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if (param_5[1].s.LowPart != 0) {
        LVar13.QuadPart = *(LONGLONG *)param_5;
      }
      local_70 = **(longlong **)(lVar10 + 0x20);
      pwVar11 = L"%d.%h:%m:%s.%f";
      if (local_70 + 863999999999U < 0x19254d37fff) {
        pwVar11 = L"%h:%m:%s.%f";
      }
      FUN_14681ea84(&local_70,&local_68,pwVar11);
      puVar8 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar8 = local_68;
      }
      local_88 = LVar13;
      FUN_140002266(&local_58,L"Occurred %d time. Last occurrence %s. %s",
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x20) + 8),puVar8);
      if (&local_58 == param_5) {
        if ((undefined2 *)local_58.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_5->QuadPart != 0) {
          FUN_1400020a8();
        }
        param_5->QuadPart = (LONGLONG)local_58;
        local_58.QuadPart = 0;
        param_5[1].s.LowPart = (DWORD)local_50;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_50._4_4_;
        local_50 = 0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_14453a928:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453abcc FUN_14453abcc body=4280 status=ok
// SIG undefined FUN_14453abcc(void)

LARGE_INTEGER *
FUN_14453abcc(longlong param_1,LARGE_INTEGER *param_2,int param_3,longlong param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  LARGE_INTEGER LVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  byte bVar15;
  LARGE_INTEGER LVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  int iVar18;
  LARGE_INTEGER LVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  byte local_131;
  LARGE_INTEGER local_130;
  longlong local_128;
  longlong *local_120;
  LPCRITICAL_SECTION local_118;
  LARGE_INTEGER local_110;
  undefined8 *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_e0 [2];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  LARGE_INTEGER local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  int local_90;
  longlong *local_88 [2];
  LARGE_INTEGER local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_4 != 0) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar12 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar12) == param_4) {
        param_2->QuadPart = 0;
        param_2[1].QuadPart = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar12);
  }
  lVar12 = 0x68;
  if (param_3 - 1U < 3) {
    lVar12 = *(longlong *)(&DAT_14bd37dd8 + (ulonglong)(param_3 - 1U) * 8);
  }
  LOCK();
  *(int *)(param_1 + lVar12) = *(int *)(param_1 + lVar12) + 1;
  UNLOCK();
  if (param_4 == 0) {
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
    local_58.QuadPart = (LONGLONG)DAT_14c844840;
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
    local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
    FUN_1467e96f6(&local_b0,param_3,&local_58);
    if ((longlong *)local_58.QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    LVar16 = local_b0;
    FUN_140009b9a(local_88,param_6);
    FUN_1467eb2e4(&local_78,local_88,1);
    local_58 = local_78;
    local_50 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(LVar16.QuadPart,local_68,&local_58);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    plVar11 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    plVar10 = local_a8;
    *(undefined8 *)(local_b0.QuadPart + 0x34) = 0;
    param_2->QuadPart = (LONGLONG)local_b0;
    param_2[1].QuadPart = (LONGLONG)local_a8;
    if (local_a8 == (longlong *)0x0) goto LAB_14453b139;
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
    if (local_a8 == (longlong *)0x0) goto LAB_14453b139;
    LOCK();
    plVar11 = local_a8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_14453b139;
    (**(code **)*local_a8)(local_a8);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14453b139;
    lVar12 = *plVar10;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x6c);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    local_108 = param_5;
    local_128 = FUN_149505faa(param_1,param_4,param_5);
    local_131 = bVar15;
    if (local_128 == 0) {
      plVar11 = (longlong *)(param_1 + 0x40);
      iVar6 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar6 + 1U;
      local_118 = lpCriticalSection;
      if (*(uint *)(param_1 + 0x4c) < iVar6 + 1U) {
        FUN_14951c5a6(plVar11,iVar6);
      }
      lVar12 = *plVar11;
      lVar13 = (longlong)iVar6 * 0x40;
      puVar8 = (undefined8 *)(lVar12 + 0x30 + lVar13);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = (undefined8 *)(lVar12 + 0x20 + lVar13);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined8 *)(lVar12 + lVar13) = 0;
      ((undefined8 *)(lVar12 + lVar13))[1] = 0;
      lVar12 = *plVar11;
      local_128 = lVar12 + lVar13;
      *(longlong *)(lVar12 + lVar13) = param_4;
      uVar5 = param_5[1];
      puVar8 = (undefined8 *)(lVar12 + 8 + lVar13);
      *puVar8 = *param_5;
      puVar8[1] = uVar5;
      *(undefined8 *)(lVar12 + 0x18 + lVar13) = param_5[2];
      puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      lpCriticalSection = local_118;
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_LAB_14bd35920;
      puVar8[2] = 0;
      *(undefined4 *)(puVar8 + 3) = 0;
      plVar11 = *(longlong **)(lVar12 + 0x28 + lVar13);
      *(undefined8 **)(lVar12 + 0x20 + lVar13) = puVar8 + 2;
      *(undefined8 **)(lVar12 + 0x28 + lVar13) = puVar8;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      plVar11 = (longlong *)0x0;
      LVar16.QuadPart = 0;
    }
    else {
      plVar11 = *(longlong **)(local_128 + 0x38);
      if (plVar11 == (longlong *)0x0) {
LAB_14453aecf:
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar11[1];
        do {
          if (iVar6 == 0) goto LAB_14453aecf;
          LOCK();
          iVar7 = (int)plVar11[1];
          bVar20 = iVar6 == iVar7;
          if (bVar20) {
            *(int *)(plVar11 + 1) = iVar6 + 1;
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
          UNLOCK();
        } while (!bVar20);
        LVar16 = (LARGE_INTEGER)((LARGE_INTEGER *)(local_128 + 0x30))->QuadPart;
        if ((longlong *)LVar16.QuadPart != (longlong *)0x0) goto LAB_14453afd7;
      }
      LOCK();
      *(undefined4 *)(*(longlong *)(local_128 + 0x20) + 8) = 0;
      UNLOCK();
      LVar16.QuadPart = 0;
    }
LAB_14453afd7:
    LOCK();
    piVar1 = (int *)(*(longlong *)(local_128 + 0x20) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    QueryPerformanceCounter(&local_b0);
    auVar21._0_8_ =
         ((double)local_b0.QuadPart * DAT_14c83f420 + 16777216.0 + *(double *)(param_1 + 0x70)) *
         10000000.0 + 0.5;
    auVar21._8_8_ = 0;
    auVar21 = roundpd(auVar21,auVar21,1);
    LOCK();
    **(longlong **)(local_128 + 0x20) = (longlong)auVar21._0_8_;
    UNLOCK();
    plVar10 = plVar11;
    if ((longlong *)LVar16.QuadPart == (longlong *)0x0) {
      uVar5 = *(undefined8 *)(local_128 + 0x20);
      local_120 = *(longlong **)(local_128 + 0x28);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
      }
      local_58.QuadPart = 0;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      local_110 = LVar16;
      FUN_1446efa72(&local_58,0,3,0x10);
      local_50 = (longlong *)CONCAT44(local_50._4_4_,3);
      *(undefined ***)local_58 = &PTR_LAB_149f05a70;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      *(longlong *)(local_58.QuadPart + 0x10) = lVar13;
      *(undefined ***)local_58 = &PTR_FUN_14bd34c40;
      *(undefined8 *)(local_58.QuadPart + 0x18) = uVar5;
      *(longlong **)(local_58.QuadPart + 0x20) = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
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
      }
      local_b0.QuadPart = (LONGLONG)DAT_14c844840;
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
      local_a8 = (longlong *)((ulonglong)local_a8._4_4_ << 0x20);
      local_a0 = 1;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      local_118 = lpCriticalSection;
      FUN_1413a4324(&local_98,&local_58);
      plVar2 = local_120;
      if ((int)local_50 == 0) {
LAB_14453b2c7:
        if ((undefined8 *)local_58.QuadPart != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if ((undefined8 *)local_58.QuadPart != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_58)(local_58.QuadPart,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
        goto LAB_14453b2c7;
      }
      FUN_1467eb9f4(&local_78,&local_b0);
      if (local_90 == 0) {
LAB_14453b32d:
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
        goto LAB_14453b32d;
      }
      if ((longlong *)local_b0.QuadPart != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_b0 + 0x10))();
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
      }
      local_58.QuadPart = (LONGLONG)DAT_14c844840;
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
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1467e96f6(&local_b0,param_3);
      plVar2 = local_a8;
      local_130 = local_b0;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
        UNLOCK();
      }
      if (local_a8 == plVar11) {
        if (plVar11 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar3 = local_a8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar3 = plVar2;
joined_r0x00014453b432:
            plVar10 = plVar11;
            if (iVar6 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
      }
      else {
        plVar10 = local_a8;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar11 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar3 = plVar11;
            plVar11 = plVar2;
            goto joined_r0x00014453b432;
          }
        }
      }
      plVar11 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if ((longlong *)local_58.QuadPart != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      local_b0 = local_78;
      local_a8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      FUN_1467eb24e(local_130.QuadPart,local_c0,&local_b0);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_b8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      plVar11 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_140 = 0xffffffff;
      local_148 = 0;
      iVar6 = FUN_1447ee042(param_6,&DAT_14bd2e150,2,1);
      if (iVar6 != -1) {
        local_108 = local_108 + 2;
        do {
          iVar7 = *(int *)(param_6 + 1);
          puVar14 = &DAT_149dfb77a;
          if (iVar7 != 0) {
            puVar14 = (undefined2 *)*param_6;
          }
          iVar18 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar18 = 0;
          }
          if (iVar6 < iVar18) {
            iVar18 = iVar6;
          }
          if (iVar18 < 1) {
            iVar18 = 0;
          }
          FUN_14006620a(local_e0,puVar14,iVar18);
          FUN_140233b1a(local_88,local_e0);
          FUN_1467eb2e4(&local_58,local_88,1);
          local_b0 = local_58;
          local_a8 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          FUN_1467eb24e(local_130.QuadPart,local_d0,&local_b0);
          plVar11 = local_c8;
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_c8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_a8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_50 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_e0[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1400021e4(local_108,local_e0);
          FUN_140233b1a(local_88,local_e0);
          FUN_1467eb2e4(&local_58,local_88,1);
          local_b0 = local_58;
          local_a8 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          FUN_1467eb24e(local_130.QuadPart,local_f0,&local_b0);
          plVar11 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_a8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_50 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_e0[0] != 0) {
            FUN_1400020a8();
          }
          iVar7 = *(int *)(param_6 + 1);
          uVar17 = iVar7 - 1;
          if (iVar7 == 0) {
            uVar17 = 0;
          }
          if ((int)(iVar6 + 2U) < (int)uVar17) {
            uVar17 = iVar6 + 2U;
          }
          if (0 < (int)uVar17) {
            if (iVar7 - uVar17 != 0) {
              memmove((void *)*param_6,(void *)((longlong)*param_6 + (ulonglong)uVar17 * 2),
                      (longlong)(int)(iVar7 - uVar17) * 2);
              iVar7 = *(int *)(param_6 + 1);
            }
            *(uint *)(param_6 + 1) = iVar7 - uVar17;
          }
          local_140 = 0xffffffff;
          local_148 = 0;
          iVar6 = FUN_1447ee042(param_6,&DAT_14bd2e150,2,1);
        } while (iVar6 != -1);
      }
      if (*(int *)(param_6 + 1) - 2U < 0x7fffffff) {
        FUN_140009b9a(local_88,param_6);
        FUN_1467eb2e4(&local_58,local_88,1);
        local_b0 = local_58;
        local_a8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_130.QuadPart,local_100,&local_b0);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_f8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_f8 + 0x10))(local_f8);
            }
          }
        }
        plVar11 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        plVar11 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        if (local_88[0] != (longlong *)0x0) {
          (**(code **)(*local_88[0] + 0x10))();
        }
      }
      lpCriticalSection = local_118;
      *(longlong *)(local_130.QuadPart + 0x34) = param_4;
      ((LARGE_INTEGER *)(local_128 + 0x30))->QuadPart = (LONGLONG)local_130;
      plVar11 = *(longlong **)(local_128 + 0x38);
      if (plVar11 != plVar10) {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          plVar11 = *(longlong **)(local_128 + 0x38);
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        *(longlong **)(local_128 + 0x38) = plVar10;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      iVar6 = *(int *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar6 + 1U) {
        FUN_1467f3144((longlong *)(param_1 + 0x30),iVar6);
      }
      lVar12 = *(longlong *)(param_1 + 0x30);
      ((LARGE_INTEGER *)(lVar12 + (longlong)iVar6 * 0x10))->QuadPart = (LONGLONG)local_130;
      *(longlong **)(lVar12 + 8 + (longlong)iVar6 * 0x10) = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_70 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      LVar16 = local_110;
      plVar11 = local_120;
      bVar15 = local_131 ^ 1;
      LVar19 = local_130;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_120 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          LVar19 = local_130;
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            LVar19 = local_130;
          }
        }
      }
LAB_14453b06d:
      LeaveCriticalSection(lpCriticalSection);
      if (bVar15 != 0) {
        FUN_1467eb3c8(LVar19.QuadPart,&local_b0);
        LVar9 = local_b0;
        if (*(code **)(*(longlong *)local_b0 + 0x50) != FUN_144828418) {
          LVar9.QuadPart = (**(code **)(*(longlong *)local_b0 + 0x50))();
        }
        FUN_1447a1fc0(LVar9.QuadPart);
        pcVar4 = *(code **)(*(longlong *)local_b0 + 0x28);
        if (pcVar4 != (code *)&LAB_14010c34c && pcVar4 != FUN_14482841c) {
          (*pcVar4)();
        }
        if ((longlong *)local_b0.QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_b0 + 0x10))();
        }
      }
      if ((longlong *)LVar16.QuadPart != (longlong *)0x0) goto LAB_14453b0f8;
      param_2->QuadPart = (LONGLONG)LVar19;
      param_2[1].QuadPart = (LONGLONG)plVar10;
      if (plVar10 == (longlong *)0x0) goto LAB_14453b139;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    else {
      if (local_131 == 0) {
        bVar15 = *(byte *)(param_1 + 0x6d);
        LVar19 = LVar16;
        goto LAB_14453b06d;
      }
      LeaveCriticalSection(lpCriticalSection);
LAB_14453b0f8:
      param_2->QuadPart = 0;
      param_2[1].QuadPart = 0;
      if (plVar10 == (longlong *)0x0) goto LAB_14453b139;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_14453b139;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14453b139;
    lVar12 = *plVar10;
  }
  (**(code **)(lVar12 + 0x10))(plVar10);
LAB_14453b139:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453bc86 FUN_14453bc86 body=273 status=ok
// SIG undefined FUN_14453bc86(void)

undefined8 FUN_14453bc86(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x50) != 0) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      if (0 < *(int *)(param_1 + 8)) {
        iVar1 = *(int *)(param_1 + 0x3c);
        FUN_145d195a5(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = 0;
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
          FUN_14951c6ee(param_1 + 0x30);
        }
        FUN_1412e3d1e(&local_50);
        *(undefined4 *)(param_1 + 0xc) = local_50;
        *(undefined4 *)(param_1 + 0x10) = uStack_4c;
        *(undefined4 *)(param_1 + 0x14) = uStack_48;
        *(undefined4 *)(param_1 + 0x18) = uStack_44;
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        puVar6 = (undefined4 *)FUN_14001cc68(0x14,0);
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = *(undefined4 *)(param_1 + 0x14);
        uVar5 = *(undefined4 *)(param_1 + 0x18);
        *puVar6 = *(undefined4 *)(param_1 + 0xc);
        puVar6[1] = uVar3;
        puVar6[2] = uVar4;
        puVar6[3] = uVar5;
        puVar6[4] = 2;
        FUN_149506168(uVar2,puVar6);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                (*(longlong **)(param_1 + 0x60),
                 (longlong)((double)*(longlong *)(param_1 + 0x28) / 10000.0),0);
    } while (*(int *)(param_1 + 0x50) != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453bd98 FUN_14453bd98 body=562 status=ok
// SIG undefined FUN_14453bd98(void)

void FUN_14453bd98(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      lVar3 = lVar3 + 0x460;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
    }
    lVar4 = FUN_14951ca54(lVar3,*(undefined8 *)(param_3 + 4),param_3[1]);
    if (lVar4 == 0) {
      FUN_149506aa4(param_1);
      puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar5 = &PTR_FUN_14bd34e60;
      puVar5[1] = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(puVar5 + 2) = *param_3;
      *(undefined4 *)(puVar5 + 3) = 0;
      if (*(longlong *)(param_3 + 4) == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(*(longlong *)(param_3 + 4) + 0xc);
        *(uint *)((longlong)puVar5 + 0x14) = uVar1;
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
          iVar6 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar2 = *(int *)(lVar4 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar4 + 0x10) = iVar6;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar6;
          }
        }
      }
      *(int *)(puVar5 + 3) = iVar2;
      *(undefined4 *)(puVar5 + 4) = 0;
      if (param_1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)((longlong)puVar5 + 0x1c) = uVar1;
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
          iVar6 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar2 = *(int *)(lVar4 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar4 + 0x10) = iVar6;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar6;
          }
        }
      }
      *(int *)(puVar5 + 4) = iVar2;
      puVar5[5] = param_5;
      *(undefined4 *)(puVar5 + 6) = param_4;
      FUN_140b1330e(lVar3,*(undefined8 *)(param_3 + 4),param_3[1],puVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14453bfca FUN_14453bfca body=534 status=ok
// SIG undefined FUN_14453bfca(void)

void FUN_14453bfca(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_20 [8];
  ulonglong local_18;
  
  puVar2 = DAT_14cc0b538;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cc0b538 != (undefined8 *)0x0) {
    DAT_14cc0b538 = (undefined8 *)0x0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = DAT_14cc0b538;
    DAT_14cc0b538 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    DAT_14cc1e1b8 = (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  FUN_14673e0a0(puVar3);
  puVar2 = DAT_14cc0b538;
  puVar1 = DAT_14cc0b538;
  DAT_14cc1e1b8 = puVar3;
  if ((DAT_14cc0b538 != puVar3) && (puVar1 = puVar3, DAT_14cc0b538 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)*DAT_14cc0b538;
    DAT_14cc0b538 = puVar3;
    (*(code *)*puVar1)(puVar2,1);
    puVar1 = DAT_14cc0b538;
  }
  DAT_14cc0b538 = puVar1;
  FUN_14673e41c(param_1);
  local_20[0] = '\0';
  local_28 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"LiveLink",L"bUseModularClientReference",local_20);
  if (local_20[0] == '\0') {
    DAT_14cc1e110 = param_1 + 8;
    LOCK();
    UNLOCK();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,DAT_14cc0b540,param_1 + 0x10);
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
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,DAT_14c9c9ad8,param_1 + 0x218);
  FUN_14673e778(local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453c1e2 FUN_14453c1e2 body=521 status=ok
// SIG undefined FUN_14453c1e2(void)

void FUN_14453c1e2(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140457ffc(&DAT_14c872c40,param_1);
  (**(code **)(**(longlong **)(param_1 + 600) + 0x18))();
  (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,DAT_14c9c9ad8,param_1 + 0x218);
  local_19 = '\0';
  local_28 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"LiveLink",L"bUseModularClientReference",&local_19);
  if (local_19 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,DAT_14cc0b540,param_1 + 0x10);
    LOCK();
    DAT_14cc1e110 = 0;
    UNLOCK();
  }
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x248) + 8))();
  FUN_145ac6b12(&DAT_14c96b458,*puVar1);
  puVar1 = DAT_14cc0b538;
  if (DAT_14cc0b538 != (undefined8 *)0x0) {
    DAT_14cc0b538 = (undefined8 *)0x0;
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = DAT_14cc0b538;
    DAT_14cc0b538 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  DAT_14cc1e1b8 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453c3ec FUN_14453c3ec body=1283 status=ok
// SIG undefined FUN_14453c3ec(void)

void FUN_14453c3ec(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cc1e308 == (uint *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar10 = &LAB_14951e6e1;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar18 = (uint *)(puVar10 + 2);
    if (param_1 == 0) {
      iVar13 = 0;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0xc);
      *puVar18 = uVar17;
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar13 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar13 = *(int *)(lVar19 + 0x10);
        bVar20 = iVar13 == 0;
        if (bVar20) {
          *(int *)(lVar19 + 0x10) = iVar15;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar13 = iVar15;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar13;
    puVar10[3] = 0x3ff0000000000000;
    puVar10[4] = 0;
    if (DAT_14cc1e308 != (uint *)0x0) {
      puVar1 = DAT_14cc1e308 + -4;
      puVar2 = DAT_14cc1e308 + -4;
      DAT_14cc1e308 = puVar18;
      (**(code **)puVar2)(puVar1);
      puVar18 = DAT_14cc1e308;
    }
    DAT_14cc1e308 = puVar18;
    if (param_1 == 0) {
      uVar17 = 0;
      uVar14 = 0;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0xc);
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar14 = (ulonglong)*(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar8 = *(uint *)(lVar19 + 0x10);
        bVar20 = uVar8 == 0;
        if (bVar20) {
          *(uint *)(lVar19 + 0x10) = uVar16;
          uVar8 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar8 = uVar16;
        }
        uVar14 = (ulonglong)uVar8;
      }
    }
    lVar19 = *param_2;
    lVar5 = param_2[2];
    param_2[2] = 0;
    local_50 = param_2[6];
    uStack_48 = param_2[7];
    local_60 = (undefined4)param_2[4];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = (undefined4)param_2[5];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x2c);
    if (lVar19 != 0) {
      *param_2 = 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    local_80 = (longlong *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,8,0x10);
    local_78 = 8;
    *local_80 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_80[2] = lVar12;
    *local_80 = (longlong)&PTR_FUN_14bd35dc0;
    local_80[4] = uVar14 << 0x20 | (ulonglong)uVar17;
    local_80[6] = lVar19;
    local_80[8] = lVar5;
    *(undefined4 *)(local_80 + 10) = local_60;
    *(undefined4 *)((longlong)local_80 + 0x54) = uStack_5c;
    *(undefined4 *)(local_80 + 0xb) = uStack_58;
    *(undefined4 *)((longlong)local_80 + 0x5c) = uStack_54;
    *(undefined4 *)(local_80 + 0xc) = (undefined4)local_50;
    *(undefined4 *)((longlong)local_80 + 100) = local_50._4_4_;
    *(undefined4 *)(local_80 + 0xd) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)local_80 + 0x6c) = uStack_48._4_4_;
    *(undefined4 *)(local_80 + 0xe) = uVar3;
    if ((local_80 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*local_80 + 0x30))(), uVar17 = DAT_14c867440, cVar7 == '\0')) {
      if (local_78 == 0) {
        uVar9 = 0;
        goto LAB_14453c761;
      }
      if (local_80 != (longlong *)0x0) {
        uVar9 = 0;
        (**(code **)*local_80)(local_80,0);
        FUN_1446efa72(&local_80,0,0,0x10);
        goto LAB_14453c754;
      }
      uVar9 = 0;
    }
    else {
      if ((DAT_14c86744c < 1) &&
         (DAT_14c867448 = DAT_14c867448 + -1, DAT_14c867448 <= (int)DAT_14c867440)) {
        if (0 < (int)DAT_14c867440) {
          iVar13 = 0;
          do {
            if (((*(int *)(DAT_14c867438 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                (plVar11 = *(longlong **)(DAT_14c867438 + (longlong)iVar13 * 0x10),
                plVar11 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar11 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(&DAT_14c867438,iVar13);
              FUN_14005b248(&DAT_14c867438);
            }
            else {
              iVar13 = iVar13 + 1;
            }
          } while (iVar13 < (int)DAT_14c867440);
        }
        DAT_14c867448 = 2;
        if (2 < (int)(DAT_14c867440 * 2)) {
          DAT_14c867448 = DAT_14c867440 * 2;
        }
        if ((DAT_14c867448 < (int)uVar17) && (DAT_14c867444 != DAT_14c867440)) {
          FUN_14045812c();
        }
      }
      uVar9 = 0;
      if ((local_78 != 0) && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x38))(local_80,&local_70);
        uVar9 = local_70;
      }
      uVar17 = DAT_14c867440;
      lVar19 = (longlong)(int)DAT_14c867440;
      DAT_14c867440 = DAT_14c867440 + 1;
      if (DAT_14c867444 < DAT_14c867440) {
        FUN_1447a71f6(&DAT_14c867438,uVar17);
      }
      lVar5 = DAT_14c867438;
      lVar19 = lVar19 * 0x10;
      *(undefined8 *)(DAT_14c867438 + lVar19) = 0;
      *(undefined4 *)(lVar5 + 8 + lVar19) = 0;
      *(longlong **)(lVar5 + lVar19) = local_80;
      local_80 = (longlong *)0x0;
      *(int *)(lVar5 + 8 + lVar19) = local_78;
LAB_14453c754:
      local_78 = 0;
LAB_14453c761:
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x48) = uVar9;
  }
  else {
    FUN_144750a86(param_1,&local_68,0,0);
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1400020a8();
    }
    pcVar4 = (code *)*param_2;
    if (pcVar4 == (code *)0x0) goto LAB_14453c78c;
    local_68 = 0;
    plVar11 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_2[2];
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar4)(uVar9,&local_68);
  }
  if (*param_2 != 0) {
    plVar11 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_14453c78c:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453c8f0 FUN_14453c8f0 body=69 status=ok
// SIG undefined FUN_14453c8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453c8f0(void)

{
  _DAT_14cc1e2e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453c932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e2f0,1);
  return;
}



// FUNCTION 14453c935 FUN_14453c935 body=69 status=ok
// SIG undefined FUN_14453c935(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453c935(void)

{
  _DAT_14cc1e2f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453c977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e300,1);
  return;
}



// FUNCTION 14453c990 FUN_14453c990 body=2415 status=ok
// SIG undefined FUN_14453c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453c990(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qa;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  auVar23._8_8_ = extraout_XMM0_Qb;
  auVar23._0_8_ = extraout_XMM0_Qa;
  if ((*(byte *)((longlong)param_1 + 0x1eb) & 1) != 0) {
    auVar23._0_8_ = (**(code **)(*param_1 + 0x20))();
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    if ((char)param_1[0x15] == '\x01') {
      auVar23._0_8_ = FUN_1448eac94();
      auVar23._8_8_ = extraout_XMM0_Qb_01;
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x1eb) = 0;
    UNLOCK();
  }
  iVar4 = *(int *)((longlong)param_1 + 0x1ac);
  iVar8 = (int)param_1[0x17] - iVar4;
  if (iVar8 != 0 && iVar4 <= (int)param_1[0x17]) {
    auVar23._0_8_ = FUN_14950afa0(param_1,iVar8 - (uint)(iVar4 == 0 & *(byte *)(param_1 + 0x36)));
    auVar23._8_8_ = extraout_XMM0_Qb_02;
  }
  plVar6 = param_1 + 0x2a;
  if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
    plVar6 = param_1 + 0x37;
  }
  if ((char)*plVar6 == '\x02') {
    if (((char)param_1[0x32] == '\x01') && (DAT_14c846568 == '\x01')) {
      if (*(char *)((longlong)param_1 + 0x184) == '\x01') {
        dVar14 = ((double)(int)param_1[0x3c] * (double)param_1[0x34]) /
                 (double)*(int *)((longlong)param_1 + 0x1e4);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar14;
        auVar26 = roundpd(auVar18,auVar18,1);
        dVar17 = auVar26._0_8_;
        dVar14 = dVar14 - dVar17;
        if (2147483647.0 <= dVar17) {
          dVar17 = 2147483647.0;
        }
        if (dVar17 <= -2147483648.0) {
          dVar17 = -2147483648.0;
        }
        fVar16 = (float)dVar14 - (float)(int)dVar14;
        iVar4 = (int)dVar17 + (int)dVar14;
        fVar13 = fVar16;
        if (0.99999994 <= fVar16) {
          fVar13 = 0.99999994;
        }
        auVar19._0_4_ = ~-(uint)(0.0 < fVar16) & (uint)fVar16;
        auVar19._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar19._8_4_ = auVar23._8_4_;
        auVar19._12_4_ = auVar23._12_4_;
        auVar19 = auVar19 | ZEXT416((uint)fVar13 & -(uint)(0.0 < fVar16));
        auVar26._4_12_ = auVar19._4_12_;
        fVar13 = auVar19._0_4_ + 0.5 + -0.5;
        if (0.99999994 <= fVar13) {
          fVar13 = 0.99999994;
        }
        auVar26._0_4_ = fVar13;
        if (fVar13 <= 0.0) {
          auVar2._12_4_ = 0;
          auVar2._0_12_ = auVar26._4_12_;
          auVar26 = auVar2 << 0x20;
        }
      }
      else {
        auVar26 = ZEXT816(0);
        iVar4 = 0;
      }
      lVar7 = param_1[0x3c];
      fVar13 = (float)((ulonglong)_DAT_14c846558 >> 0x20);
      lVar11 = _DAT_14c846558;
      if (DAT_14c846560 != lVar7) {
        local_80 = (char *)((DAT_14c846560 >> 0x20) * (longlong)(int)lVar7);
        local_68 = (longlong)(int)DAT_14c846560 * (lVar7 >> 0x20);
        lVar7 = ((longlong)local_80 * (longlong)(int)_DAT_14c846558) / local_68;
        dVar14 = ((double)fVar13 * (double)(longlong)local_80) / (double)local_68 +
                 (((double)(longlong)local_80 * (double)(int)_DAT_14c846558) / (double)local_68 -
                 (double)lVar7);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar14;
        auVar23 = roundpd(auVar24,auVar24,1);
        fVar16 = (float)(dVar14 - auVar23._0_8_);
        lVar7 = (longlong)auVar23._0_8_ + lVar7;
        fVar13 = fVar16;
        if (0.99999994 <= fVar16) {
          fVar13 = 0.99999994;
        }
        if (0x7ffffffe < lVar7) {
          lVar7 = 0x7fffffff;
        }
        lVar11 = -0x80000000;
        if (-0x80000000 < lVar7) {
          lVar11 = lVar7;
        }
        fVar13 = (float)(~-(uint)(0.0 < fVar16) & (uint)fVar16 |
                        (uint)fVar13 & -(uint)(0.0 < fVar16)) + 0.5 + -0.5;
        if (0.99999994 <= fVar13) {
          fVar13 = 0.99999994;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
      }
      iVar8 = (int)param_1[0x17];
      if ((longlong)iVar8 == 0) goto LAB_14453d210;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = (double)*(float *)(param_1 + 0x33);
      auVar23 = roundpd(auVar29,auVar29,1);
      dVar17 = auVar23._0_8_;
      dVar14 = (double)*(float *)(param_1 + 0x33) - dVar17;
      if (2147483647.0 <= dVar17) {
        dVar17 = 2147483647.0;
      }
      if (dVar17 <= -2147483648.0) {
        dVar17 = -2147483648.0;
      }
      fVar16 = (float)dVar14;
      fVar28 = 0.99999994;
      if (0.99999994 <= fVar16) {
        fVar16 = fVar28;
      }
      fVar27 = 0.0;
      if (fVar16 <= 0.0) {
        fVar16 = fVar27;
      }
      fVar16 = fVar16 + 0.5 + -0.5;
      if (0.99999994 <= fVar16) {
        fVar16 = fVar28;
      }
      if (fVar16 <= 0.0) {
        fVar16 = fVar27;
      }
      auVar20._4_12_ = auVar26._4_12_;
      auVar20._0_4_ = auVar26._0_4_ + fVar16;
      auVar23 = roundss(ZEXT416(0),auVar20,9);
      fVar16 = (auVar20._0_4_ - auVar23._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar16) {
        fVar16 = fVar28;
      }
      if (fVar16 <= 0.0) {
        fVar16 = fVar27;
      }
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fVar16;
      auVar23 = roundss(ZEXT416(0),auVar21,9);
      fVar28 = (fVar16 - auVar23._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar28) {
        fVar28 = 0.99999994;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      fVar13 = fVar13 - fVar28;
      auVar23 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
      iVar4 = ((int)lVar11 + (int)auVar23._0_4_) -
              (iVar4 + *(int *)((longlong)param_1 + 0x194) +
               ((int)ROUND(auVar20._0_4_ + auVar20._0_4_ + -0.5) >> 1) + (int)dVar17 +
              ((int)ROUND(fVar16 + fVar16 + -0.5) >> 1));
      fVar13 = (fVar13 - auVar23._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      iVar9 = 0;
      lVar7 = 0;
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1[0x16] + 0x10 + lVar7) + 0x60);
        iVar10 = (int)uVar1;
        if ((iVar4 < iVar10) ||
           (bVar12 = (float)((ulonglong)uVar1 >> 0x20) <= fVar13,
           iVar9 = iVar9 + (uint)(bVar12 || iVar4 != iVar10), !bVar12 && iVar4 == iVar10)) break;
        bVar12 = (longlong)iVar8 * 0x28 + -0x28 != lVar7;
        lVar7 = lVar7 + 0x28;
      } while (bVar12);
      if (0 < iVar9) {
        bVar12 = iVar8 == iVar9;
        goto LAB_14453d28e;
      }
    }
LAB_14453ce6a:
    if (0 < (int)param_1[0x17]) {
      plVar6 = param_1 + 0x2a;
      if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
        plVar6 = param_1 + 0x37;
      }
      if ((char)*plVar6 == '\x02') {
        if (DAT_14c846568 != '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc1e360) && (FUN_144b3d300(&DAT_14cc1e360), DAT_14cc1e360 == -1)) {
            local_80 = "LiveLinkSubject_NoCurrentFrameTime";
            local_78 = CONCAT35(local_78._5_3_,0x22);
            uVar5 = FUN_14001a6c0(&local_80,1);
            _DAT_14cc1e358 = (ulonglong)uVar5;
            _Init_thread_footer(&DAT_14cc1e360);
          }
          FUN_1400021e4(param_1 + 0x27,&local_80);
          if (local_80 != (char *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_14453d210;
        }
        iVar4 = 0;
        auVar23 = ZEXT816(0);
        if (*(char *)((longlong)param_1 + 0x184) == '\x01') {
          dVar14 = ((double)(int)DAT_14c846560 * (double)param_1[0x34]) /
                   (double)(int)((ulonglong)DAT_14c846560 >> 0x20);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = dVar14;
          auVar23 = roundpd(auVar22,auVar22,1);
          dVar17 = auVar23._0_8_;
          dVar14 = dVar14 - dVar17;
          if (2147483647.0 <= dVar17) {
            dVar17 = 2147483647.0;
          }
          if (dVar17 <= -2147483648.0) {
            dVar17 = -2147483648.0;
          }
          iVar4 = (int)dVar14;
          fVar16 = (float)dVar14 - (float)iVar4;
          iVar4 = (int)dVar17 + iVar4;
          fVar13 = fVar16;
          if (0.99999994 <= fVar16) {
            fVar13 = 0.99999994;
          }
          fVar13 = (float)(~-(uint)(0.0 < fVar16) & (uint)fVar16 |
                          (uint)fVar13 & -(uint)(0.0 < fVar16)) + 0.5 + -0.5;
          if (0.99999994 <= fVar13) {
            fVar13 = 0.99999994;
          }
          auVar23 = ZEXT416((uint)fVar13);
          if (fVar13 <= 0.0) {
            auVar23 = ZEXT416(0) << 0x20;
          }
        }
        auVar25._8_8_ = 0;
        auVar25._0_8_ = (double)*(float *)(param_1 + 0x33);
        auVar26 = roundpd(auVar25,auVar25,1);
        dVar17 = auVar26._0_8_;
        dVar14 = (double)*(float *)(param_1 + 0x33) - dVar17;
        if (2147483647.0 <= dVar17) {
          dVar17 = 2147483647.0;
        }
        if (dVar17 <= -2147483648.0) {
          dVar17 = -2147483648.0;
        }
        iVar8 = (int)dVar17;
        fVar13 = (float)dVar14;
        if (0.99999994 <= fVar13) {
          fVar13 = 0.99999994;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = fVar13 + 0.5 + -0.5;
        if (0.99999994 <= fVar13) {
          fVar13 = 0.99999994;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        lVar7 = param_1[0x3c];
        fVar16 = 0.99999994;
        if (lVar7 != DAT_14c846560) {
          lVar11 = (lVar7 >> 0x20) * (longlong)(int)DAT_14c846560;
          local_68 = (longlong)(int)lVar7 * (DAT_14c846560 >> 0x20);
          lVar7 = (lVar11 * iVar8) / local_68;
          dVar14 = ((double)fVar13 * (double)lVar11) / (double)local_68 +
                   (((double)lVar11 * (double)iVar8) / (double)local_68 - (double)lVar7);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = dVar14;
          auVar26 = roundpd(auVar30,auVar30,1);
          lVar7 = (longlong)auVar26._0_8_ + lVar7;
          fVar28 = (float)(dVar14 - auVar26._0_8_);
          fVar13 = fVar28;
          if (0.99999994 <= fVar28) {
            fVar13 = 0.99999994;
          }
          if (0x7ffffffe < lVar7) {
            lVar7 = 0x7fffffff;
          }
          lVar11 = -0x80000000;
          if (-0x80000000 < lVar7) {
            lVar11 = lVar7;
          }
          iVar8 = (int)lVar11;
          fVar13 = (float)(~-(uint)(0.0 < fVar28) & (uint)fVar28 |
                          (uint)fVar13 & -(uint)(0.0 < fVar28)) + 0.5 + -0.5;
          if (0.99999994 <= fVar13) {
            fVar13 = fVar16;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        auVar15._4_12_ = auVar23._4_12_;
        auVar15._0_4_ = auVar23._0_4_ + fVar13;
        auVar23 = roundss(ZEXT416(0),auVar15,9);
        fVar13 = (auVar15._0_4_ - auVar23._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar13) {
          fVar13 = fVar16;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = (float)((ulonglong)_DAT_14c846558 >> 0x20) - fVar13;
        auVar23 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
        fVar13 = (fVar13 - auVar23._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar13) {
          fVar13 = fVar16;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        local_80 = (char *)CONCAT44(fVar13,((int)_DAT_14c846558 -
                                           (((int)ROUND(auVar15._0_4_ + auVar15._0_4_ + -0.5) >> 1)
                                           + iVar4 + iVar8)) + (int)auVar23._0_4_);
        local_78 = DAT_14c846560;
        cVar3 = FUN_14950b17e(param_1,&local_80,param_1 + 0x1b);
      }
      else if ((char)*plVar6 == '\x01') {
        cVar3 = FUN_14950b200(param_1,((DAT_14c866ff8 - (double)*(float *)(param_1 + 0x2c)) -
                                      (double)param_1[0x2d]) - (double)param_1[0x2e],param_1 + 0x1b)
        ;
      }
      else {
        cVar3 = FUN_14950b292(param_1,param_1 + 0x1b);
      }
      if (cVar3 != '\0') {
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1[0x22] + 0x60));
        FUN_14680026a(&local_80,&local_68,param_1[0x22] + 0x68);
        goto LAB_14453d232;
      }
    }
  }
  else {
    if (((char)*plVar6 != '\x01') || ((char)param_1[0x2b] != '\x01')) goto LAB_14453ce6a;
    iVar4 = (int)param_1[0x17];
    if ((longlong)iVar4 != 0) {
      dVar14 = ((DAT_14c866ff8 - (double)*(float *)(param_1 + 0x2c)) -
               (double)*(float *)((longlong)param_1 + 0x15c)) - (double)param_1[0x2d];
      iVar9 = 0;
      lVar7 = 0;
      do {
        dVar17 = **(double **)(param_1[0x16] + 0x10 + lVar7);
        iVar9 = (uint)(dVar17 <= dVar14) + iVar9;
        if (dVar14 < dVar17) break;
        bVar12 = (longlong)iVar4 * 0x28 + -0x28 != lVar7;
        lVar7 = lVar7 + 0x28;
      } while (bVar12);
      if (iVar9 != 0) {
        bVar12 = iVar4 == iVar9;
LAB_14453d28e:
        FUN_14950afa0(param_1,iVar9 - (uint)(bVar12 & *(byte *)(param_1 + 0x36)));
      }
      goto LAB_14453ce6a;
    }
  }
LAB_14453d210:
  (**(code **)(param_1[0x20] + 0x40))(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
LAB_14453d232:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453d300 FUN_14453d300 body=172 status=ok
// SIG undefined FUN_14453d300(void)

void FUN_14453d300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_34;
  undefined8 local_2c;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_34;
  local_2c = 0xffffffffffffffff;
  local_24 = 0;
  lVar1 = **(longlong **)(param_1 + 0x28);
  local_48 = param_3;
  (**(code **)(lVar1 + 0x10))(*(longlong **)(param_1 + 0x28),lVar1,param_1 + 0x58,param_1 + 0xb0);
  lVar1 = 0x1d0;
  if ((local_24._1_1_ != '\0') || (lVar1 = 0x1cc, (char)local_24 == '\x01')) {
    LOCK();
    *(int *)(param_1 + lVar1) = *(int *)(param_1 + lVar1) + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  *(undefined8 *)(param_1 + 0x1d8) = local_34;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453d3ad FUN_14453d3ad body=55 status=ok
// SIG undefined FUN_14453d3ad(void)

void FUN_14453d3ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e468 == 0) {
    uVar1 = FUN_1413257ed();
    DAT_14cc1e468 = FUN_14171c317(FUN_14673ebab,uVar1,L"ELiveLinkTimecodeProviderEvaluationType");
  }
  return;
}



// FUNCTION 14453d3e4 FUN_14453d3e4 body=69 status=ok
// SIG undefined FUN_14453d3e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453d3e4(void)

{
  _DAT_14cc1e490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453d426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e498,1);
  return;
}



// FUNCTION 14453d429 FUN_14453d429 body=69 status=ok
// SIG undefined FUN_14453d429(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453d429(void)

{
  _DAT_14cc1e4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453d46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e4b0,1);
  return;
}



// FUNCTION 14453d46e FUN_14453d46e body=69 status=ok
// SIG undefined FUN_14453d46e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453d46e(void)

{
  _DAT_14cc1e4c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e4c8,1);
  return;
}



// FUNCTION 14453d4b3 FUN_14453d4b3 body=69 status=ok
// SIG undefined FUN_14453d4b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453d4b3(void)

{
  _DAT_14cc1e4d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014453d4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e4e0,1);
  return;
}



// FUNCTION 14453d4f8 FUN_14453d4f8 body=55 status=ok
// SIG undefined FUN_14453d4f8(void)

void FUN_14453d4f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e558 == 0) {
    uVar1 = FUN_1413257ed();
    DAT_14cc1e558 = FUN_14171c317(FUN_14673ec67,uVar1,L"ELiveLinkAxis");
  }
  return;
}



// FUNCTION 14453d54c FUN_14453d54c body=83 status=ok
// SIG undefined FUN_14453d54c(void)

undefined8 * FUN_14453d54c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd34c40;
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



// FUNCTION 14453d5b4 FUN_14453d5b4 body=110 status=ok
// SIG undefined FUN_14453d5b4(void)

void FUN_14453d5b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd34c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14453d622 FUN_14453d622 body=110 status=ok
// SIG undefined FUN_14453d622(void)

void FUN_14453d622(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd34c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14453d690 FUN_14453d690 body=148 status=ok
// SIG undefined FUN_14453d690(void)

void FUN_14453d690(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd34c40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453d714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453d724 FUN_14453d724 body=29 status=ok
// SIG undefined FUN_14453d724(void)

undefined8 FUN_14453d724(longlong param_1,undefined8 param_2)

{
  FUN_14453d794(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 14453d742 FUN_14453d742 body=81 status=ok
// SIG undefined FUN_14453d742(void)

undefined8 FUN_14453d742(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14453d794(local_20,param_1 + 0x18);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453d794 FUN_14453d794 body=565 status=ok
// SIG undefined FUN_14453d794(void)

undefined8 FUN_14453d794(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b0 [2];
  undefined2 local_a0;
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
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a0 = 0x100;
  local_9c = 0x200000000;
  uStack_94 = 0x144;
  local_8c = 3;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  FUN_1413a454c(local_b0,*(undefined4 *)(*param_2 + 8));
  local_58 = L"OccuredFrequency";
  local_50 = 0x10;
  FUN_1446e940c(local_ec,&local_58);
  local_58 = L"LiveLinkLogInstance";
  local_50 = 0x13;
  FUN_1446e940c(local_f0,&local_58);
  local_58 = L"({0})";
  local_50 = 5;
  FUN_140208c1e(local_e8,local_f0,local_ec,&local_58);
  FUN_14023409e(&local_d8,local_e8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_b0);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_d8;
  local_80 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  plVar1 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453d9e8 FUN_14453d9e8 body=330 status=ok
// SIG undefined FUN_14453d9e8(void)

void FUN_14453d9e8(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_3[5];
  if (plVar1 != (longlong *)0x0) {
    if ((char)param_3[3] != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    lVar7 = *param_1;
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_3[4];
    FUN_14950d188(plVar1,lVar2,lVar3);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    local_50 = param_3 + 2;
    local_48 = param_3;
    FUN_149518b34(lVar7 + 0x68,local_3c);
    cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
    if ((cVar4 != '\0') && (0 < *(int *)(lVar3 + 100))) {
      uVar6 = param_3[1];
      uVar8 = *param_3 + 0x9ae16a3b2f90404f;
      uVar8 = ((uVar8 << 0x27 | uVar8 >> 0x19) + uVar6) * -0x651e95c4d06fbf91;
      uVar6 = (*param_3 + (uVar6 << 0x1b | uVar6 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f
              ^ uVar8) * -0x651e95c4d06fbf91;
      lVar7 = (uVar6 >> 0x2f ^ uVar8 ^ uVar6) * -0x651e95c4d06fbf91;
      iVar5 = FUN_140f5cb3a(param_1[1],((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2f90406f
                            ,param_3);
      if (iVar5 == -1) {
        *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)(lVar3 + 0x60);
        FUN_1457adc9c(param_1[1],&local_50,param_3,0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453db4a FUN_14453db4a body=330 status=ok
// SIG undefined FUN_14453db4a(void)

void FUN_14453db4a(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_3[5];
  if (plVar1 != (longlong *)0x0) {
    if ((char)param_3[3] != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    lVar7 = *param_1;
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_3[4];
    FUN_14950d188(plVar1,lVar2,lVar3);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    local_50 = param_3 + 2;
    local_48 = param_3;
    FUN_149518b34(lVar7 + 0x68,local_3c);
    cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
    if ((cVar4 != '\0') && (0 < *(int *)(lVar3 + 100))) {
      uVar6 = param_3[1];
      uVar8 = *param_3 + 0x9ae16a3b2f90404f;
      uVar8 = ((uVar8 << 0x27 | uVar8 >> 0x19) + uVar6) * -0x651e95c4d06fbf91;
      uVar6 = (*param_3 + (uVar6 << 0x1b | uVar6 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f
              ^ uVar8) * -0x651e95c4d06fbf91;
      lVar7 = (uVar6 >> 0x2f ^ uVar8 ^ uVar6) * -0x651e95c4d06fbf91;
      iVar5 = FUN_140f5cb3a(param_1[1],((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2f90406f
                            ,param_3);
      if (iVar5 == -1) {
        *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)(lVar3 + 0x60);
        FUN_1457adc9c(param_1[1],&local_50,param_3,0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453dcac FUN_14453dcac body=162 status=ok
// SIG undefined FUN_14453dcac(void)

void FUN_14453dcac(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_3 + 0x30);
  if (lVar1 != 0) {
    if (*(char *)(param_3 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    lVar2 = *param_1;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    FUN_144539ca4(lVar2,lVar1 + 0x28,lVar1 + 0x148);
    local_40 = param_3 + 0x10;
    local_38 = param_3;
    FUN_149518b34(lVar2 + 0x68,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453dd62 FUN_14453dd62 body=78 status=ok
// SIG undefined FUN_14453dd62(void)

void FUN_14453dd62(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(char *)(param_2 + 7) != '\x01') || ((char)param_1[1] == '\x01')) &&
     (*(char *)((longlong)param_2 + 0x39) == '\0')) {
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140c60952(param_1,iVar2);
    }
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14453ddb0 FUN_14453ddb0 body=78 status=ok
// SIG undefined FUN_14453ddb0(void)

void FUN_14453ddb0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(char *)(param_2 + 7) != '\x01') || ((char)param_1[1] == '\x01')) &&
     (*(char *)((longlong)param_2 + 0x39) == '\x01')) {
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140c60952(param_1,iVar2);
    }
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14453ddfe FUN_14453ddfe body=384 status=ok
// SIG undefined FUN_14453ddfe(void)

void FUN_14453ddfe(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  longlong local_b8 [3];
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined **local_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[1];
  local_38 = *(longlong *)(puVar2 + 4);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  if (local_38 == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa8)) {
    local_98 = &PTR_FUN_149eacb10;
    local_90 = 0;
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    local_70 = &PTR_FUN_149eacb10;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    local_a0 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x58);
    puVar10 = puVar2;
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      puVar10 = (undefined4 *)param_1[1];
    }
    cVar9 = FUN_149501be6(uVar3,**(undefined8 **)(puVar10 + 10),&local_a0,&local_98);
    if (cVar9 == '\0') {
      FUN_1400021e4(&local_38,local_b8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_bc = *(undefined4 *)(*(longlong *)(puVar2 + 10) + 0x60);
      FUN_14680026a(local_b8,&local_bc,*(longlong *)(puVar2 + 10) + 0x68);
      lVar4 = *(longlong *)(puVar2 + 10);
      lVar8 = CONCAT71(uStack_5f,uStack_60);
      uVar5 = *(undefined4 *)(lVar4 + 100);
      uVar6 = *(undefined4 *)(lVar4 + 0x68);
      uVar7 = *(undefined4 *)(lVar4 + 0x6c);
      *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(lVar4 + 0x60);
      *(undefined4 *)(lVar8 + 100) = uVar5;
      *(undefined4 *)(lVar8 + 0x68) = uVar6;
      *(undefined4 *)(lVar8 + 0x6c) = uVar7;
      *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(*(longlong *)(puVar2 + 10) + 0x68);
      FUN_144539ca4(uVar1,*(undefined8 *)(param_3 + 0x28),&local_70);
    }
    FUN_1448eac94(&local_70);
    FUN_1448eac94(&local_98);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453df9a FUN_14453df9a body=98 status=ok
// SIG undefined FUN_14453df9a(void)

void FUN_14453df9a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (((*(char *)(param_3 + 3) != '\0') || (*(char *)(param_1 + 8) == '\x01')) &&
     ((*(char *)(param_1 + 9) != '\0' || (param_3[6] == 0)))) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    iVar2 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
      FUN_149519bc2(plVar3,iVar2);
    }
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = param_3[2];
    uVar5 = param_3[1];
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar5;
  }
  return;
}



// FUNCTION 14453dffc FUN_14453dffc body=206 status=ok
// SIG undefined FUN_14453dffc(void)

void FUN_14453dffc(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_3 + 0xc) == 0) {
    plVar8 = *(longlong **)(param_3 + 10);
  }
  else {
    plVar8 = (longlong *)(*(longlong *)(param_3 + 0xc) + 0x28);
  }
  local_28 = *(longlong *)(param_1 + 0x10);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar7 = (**(code **)(*plVar8 + 0x38))(plVar8,&local_28);
  if (((cVar7 != '\0') &&
      ((*(char *)(param_3 + 6) != '\0' || (*(char *)(param_1 + 0x18) == '\x01')))) &&
     ((*(char *)(param_1 + 0x19) != '\0' || (*(longlong *)(param_3 + 0xc) == 0)))) {
    plVar8 = *(longlong **)(param_1 + 8);
    iVar2 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar2 + 1U) {
      FUN_149519bc2(plVar8,iVar2);
    }
    lVar3 = *plVar8;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_3 + 4);
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453e0cc FUN_14453e0cc body=29 status=ok
// SIG undefined FUN_14453e0cc(void)

undefined8 FUN_14453e0cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453e0fe FUN_14453e0fe body=85 status=ok
// SIG undefined FUN_14453e0fe(void)

void FUN_14453e0fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35760;
  return;
}



// FUNCTION 14453e154 FUN_14453e154 body=85 status=ok
// SIG undefined FUN_14453e154(void)

void FUN_14453e154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35760;
  return;
}



// FUNCTION 14453e1aa FUN_14453e1aa body=118 status=ok
// SIG undefined FUN_14453e1aa(void)

void FUN_14453e1aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35760;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453e211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453e228 FUN_14453e228 body=19 status=ok
// SIG undefined FUN_14453e228(void)

undefined1 FUN_14453e228(undefined8 param_1,undefined8 param_2)

{
  FUN_14453e23c(param_2);
  return 1;
}



// FUNCTION 14453e23c FUN_14453e23c body=145 status=ok
// SIG undefined FUN_14453e23c(void)

void FUN_14453e23c(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_1;
    }
    FUN_1446f470e(&local_18,puVar1,1);
    if (((DAT_14cc0b538 != 0) && (DAT_14cc0b538 == DAT_14cc1e1b8)) &&
       (local_10 = local_18, local_18 != 0)) {
      FUN_14062f124(DAT_14cc1e1b8 + 0x50,&local_10,1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453e2ce FUN_14453e2ce body=29 status=ok
// SIG undefined FUN_14453e2ce(void)

undefined8 FUN_14453e2ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453e300 FUN_14453e300 body=85 status=ok
// SIG undefined FUN_14453e300(void)

void FUN_14453e300(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd357d0;
  return;
}



// FUNCTION 14453e356 FUN_14453e356 body=85 status=ok
// SIG undefined FUN_14453e356(void)

void FUN_14453e356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd357d0;
  return;
}



// FUNCTION 14453e3ac FUN_14453e3ac body=118 status=ok
// SIG undefined FUN_14453e3ac(void)

void FUN_14453e3ac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd357d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453e413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453e42a FUN_14453e42a body=19 status=ok
// SIG undefined FUN_14453e42a(void)

undefined1 FUN_14453e42a(undefined8 param_1,undefined8 param_2)

{
  FUN_14453e43e(param_2);
  return 1;
}



// FUNCTION 14453e43e FUN_14453e43e body=142 status=ok
// SIG undefined FUN_14453e43e(void)

void FUN_14453e43e(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_1;
    }
    FUN_1446f470e(&local_18,puVar1,1);
    if (((DAT_14cc0b538 != 0) && (DAT_14cc0b538 == DAT_14cc1e1b8)) &&
       (local_10 = local_18, local_18 != 0)) {
      FUN_140721fbe(DAT_14cc1e1b8 + 0x50,&local_10);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453e4ce FUN_14453e4ce body=29 status=ok
// SIG undefined FUN_14453e4ce(void)

undefined8 FUN_14453e4ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453e500 FUN_14453e500 body=85 status=ok
// SIG undefined FUN_14453e500(void)

void FUN_14453e500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35840;
  return;
}



// FUNCTION 14453e556 FUN_14453e556 body=85 status=ok
// SIG undefined FUN_14453e556(void)

void FUN_14453e556(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35840;
  return;
}



// FUNCTION 14453e5ac FUN_14453e5ac body=118 status=ok
// SIG undefined FUN_14453e5ac(void)

void FUN_14453e5ac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35840;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453e613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453e62a FUN_14453e62a body=19 status=ok
// SIG undefined FUN_14453e62a(void)

undefined1 FUN_14453e62a(undefined8 param_1,undefined8 param_2)

{
  FUN_14453e63e(param_2);
  return 1;
}



// FUNCTION 14453e63e FUN_14453e63e body=112 status=ok
// SIG undefined FUN_14453e63e(void)

void FUN_14453e63e(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 1) < 1) {
    if (DAT_14cc0b538 != DAT_14cc1e1b8 || DAT_14cc0b538 == 0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)*param_1;
    }
    uVar1 = FUN_14052c20c(puVar2);
    if (DAT_14cc0b538 == 0 || DAT_14cc0b538 != DAT_14cc1e1b8) {
      return;
    }
  }
  *(undefined1 *)(DAT_14cc1e1b8 + 0x6c) = uVar1;
  return;
}



// FUNCTION 14453e6ae FUN_14453e6ae body=29 status=ok
// SIG undefined FUN_14453e6ae(void)

undefined8 FUN_14453e6ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453e6e0 FUN_14453e6e0 body=85 status=ok
// SIG undefined FUN_14453e6e0(void)

void FUN_14453e6e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd358b0;
  return;
}



// FUNCTION 14453e736 FUN_14453e736 body=85 status=ok
// SIG undefined FUN_14453e736(void)

void FUN_14453e736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd358b0;
  return;
}



// FUNCTION 14453e78c FUN_14453e78c body=118 status=ok
// SIG undefined FUN_14453e78c(void)

void FUN_14453e78c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd358b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453e7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453e80a FUN_14453e80a body=19 status=ok
// SIG undefined FUN_14453e80a(void)

undefined1 FUN_14453e80a(undefined8 param_1,undefined8 param_2)

{
  FUN_14453e81e(param_2);
  return 1;
}



// FUNCTION 14453e81e FUN_14453e81e body=112 status=ok
// SIG undefined FUN_14453e81e(void)

void FUN_14453e81e(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 1) < 1) {
    if (DAT_14cc0b538 != DAT_14cc1e1b8 || DAT_14cc0b538 == 0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)*param_1;
    }
    uVar1 = FUN_14052c20c(puVar2);
    if (DAT_14cc0b538 == 0 || DAT_14cc0b538 != DAT_14cc1e1b8) {
      return;
    }
  }
  *(undefined1 *)(DAT_14cc1e1b8 + 0x6d) = uVar1;
  return;
}



// FUNCTION 14453e88e FUN_14453e88e body=29 status=ok
// SIG undefined FUN_14453e88e(void)

undefined8 FUN_14453e88e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453e8c0 FUN_14453e8c0 body=85 status=ok
// SIG undefined FUN_14453e8c0(void)

void FUN_14453e8c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35cd0;
  return;
}



// FUNCTION 14453e916 FUN_14453e916 body=85 status=ok
// SIG undefined FUN_14453e916(void)

void FUN_14453e916(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35cd0;
  return;
}



// FUNCTION 14453e96c FUN_14453e96c body=118 status=ok
// SIG undefined FUN_14453e96c(void)

void FUN_14453e96c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35cd0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453e9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453e9ea FUN_14453e9ea body=19 status=ok
// SIG undefined FUN_14453e9ea(void)

undefined1 FUN_14453e9ea(undefined8 param_1,undefined8 param_2)

{
  FUN_14453e9fe(param_2);
  return 1;
}



// FUNCTION 14453e9fe FUN_14453e9fe body=286 status=ok
// SIG undefined FUN_14453e9fe(void)

void FUN_14453e9fe(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((1 < DAT_14c872be0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
      local_a8 = 0;
      iVar1 = FUN_1447ee042(puVar5,L"Preset=",7,1);
      if (iVar1 != -1) {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar5 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar5;
        }
        uVar2 = FUN_145988d38();
        local_90 = 0;
        local_a0 = 0;
        local_98 = 1;
        local_a8 = 0;
        lVar3 = FUN_1412ecd05(uVar2,0,puVar4 + (longlong)iVar1 + 7,0);
        if (lVar3 != 0) {
          local_88[0] = 0;
          local_78 = 0;
          FUN_14453c3ec(lVar3,local_88);
        }
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453eb1e FUN_14453eb1e body=29 status=ok
// SIG undefined FUN_14453eb1e(void)

undefined8 FUN_14453eb1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453eb50 FUN_14453eb50 body=85 status=ok
// SIG undefined FUN_14453eb50(void)

void FUN_14453eb50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35d50;
  return;
}



// FUNCTION 14453eba6 FUN_14453eba6 body=85 status=ok
// SIG undefined FUN_14453eba6(void)

void FUN_14453eba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35d50;
  return;
}



// FUNCTION 14453ebfc FUN_14453ebfc body=118 status=ok
// SIG undefined FUN_14453ebfc(void)

void FUN_14453ebfc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35d50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453ec63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453ec7a FUN_14453ec7a body=19 status=ok
// SIG undefined FUN_14453ec7a(void)

undefined1 FUN_14453ec7a(undefined8 param_1,undefined8 param_2)

{
  FUN_14453ec8e(param_2);
  return 1;
}



// FUNCTION 14453ec8e FUN_14453ec8e body=203 status=ok
// SIG undefined FUN_14453ec8e(void)

void FUN_14453ec8e(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      iVar1 = FUN_1447ee042(puVar5,L"Preset=",7,1,0,0xffffffff);
      if (iVar1 != -1) {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar5 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar5;
        }
        uVar2 = FUN_145988d38();
        lVar3 = FUN_1412ecd05(uVar2,0,puVar4 + (longlong)iVar1 + 7,0,0,0,1,0);
        if (lVar3 != 0) {
          FUN_1495096ca(lVar3,1);
        }
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14453ed5a FUN_14453ed5a body=71 status=ok
// SIG undefined FUN_14453ed5a(void)

undefined8 * FUN_14453ed5a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd35dc0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453edb6 FUN_14453edb6 body=144 status=ok
// SIG undefined FUN_14453edb6(void)

void FUN_14453edb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35dc0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
  }
  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  return;
}



// FUNCTION 14453ee46 FUN_14453ee46 body=144 status=ok
// SIG undefined FUN_14453ee46(void)

void FUN_14453ee46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35dc0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
  }
  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  return;
}



// FUNCTION 14453eed6 FUN_14453eed6 body=182 status=ok
// SIG undefined FUN_14453eed6(void)

void FUN_14453eed6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[1].ProcessLocksList);
  }
  *(undefined4 *)&p_Var1[2].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x70);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014453ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14453ef96 FUN_14453ef96 body=20 status=ok
// SIG undefined FUN_14453ef96(void)

undefined1 FUN_14453ef96(longlong param_1)

{
  FUN_14453efaa(param_1 + 0x20);
  return 1;
}



// FUNCTION 14453efaa FUN_14453efaa body=456 status=ok
// SIG undefined FUN_14453efaa(void)

void FUN_14453efaa(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cc1e308 == 0) || (cVar3 = FUN_14951542e(), lVar6 = DAT_14cc1e308, cVar3 == '\x02'))
  goto LAB_14453f01c;
  if (DAT_14cc1e308 != 0) {
    DAT_14cc1e308 = 0;
    (**(code **)(lVar6 + -0x10))();
  }
  pcVar2 = *(code **)(param_1 + 4);
  if (pcVar2 != (code *)0x0) {
    local_29 = cVar3 == '\0';
    puVar5 = param_1 + 0xc;
    if (*(uint **)(param_1 + 8) != (uint *)0x0) {
      puVar5 = *(uint **)(param_1 + 8);
    }
    uVar4 = (**(code **)(*(longlong *)puVar5 + 8))();
    (*pcVar2)(uVar4,&local_29);
  }
  if (param_1[1] == 0) {
LAB_14453f16f:
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
      goto LAB_14453f16f;
      lVar6 = *plVar7;
    }
  }
  if (*(longlong *)(lVar6 + 0x48) != 0) {
    FUN_14480f766(&DAT_14c867438);
  }
LAB_14453f01c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453f174 FUN_14453f174 body=48 status=ok
// SIG undefined FUN_14453f174(void)

longlong FUN_14453f174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14952442c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453f1b6 FUN_14453f1b6 body=563 status=ok
// SIG undefined FUN_14453f1b6(void)

void FUN_14453f1b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14453f39a;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 0x10 + (longlong)iVar7 * 0x28);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_14453f39a;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_14453f39a:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453f3ea FUN_14453f3ea body=128 status=ok
// SIG undefined FUN_14453f3ea(void)

bool FUN_14453f3ea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  bVar3 = true;
  if (((((longlong *)*param_1 != (longlong *)0x0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
      (lVar1 = *(longlong *)*param_1, lVar1 != 0)) && (lVar2 = *(longlong *)*param_2, lVar2 != 0)) {
    pwVar5 = L"";
    pwVar6 = L"";
    if (*(int *)(lVar2 + 0x18) != 0) {
      pwVar6 = *(wchar_t **)(lVar2 + 0x10);
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      pwVar5 = *(wchar_t **)(lVar1 + 0x10);
    }
    iVar4 = wcscmp(pwVar5,pwVar6);
    if (iVar4 == 0) {
      pwVar5 = L"";
      pwVar6 = L"";
      if (*(int *)(lVar2 + 0x28) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + 0x20);
      }
      if (*(int *)(lVar1 + 0x28) != 0) {
        pwVar5 = *(wchar_t **)(lVar1 + 0x20);
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
    }
    bVar3 = iVar4 < 1;
  }
  return bVar3;
}



// FUNCTION 14453f46a FUN_14453f46a body=3191 status=ok
// SIG undefined FUN_14453f46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14453f46a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd272a0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd27740,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLink",0,0,&PTR_FUN_14bd27800);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd27bf0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLink",0,0,&PTR_FUN_14bd27e90);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd28230,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd28640,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bd28d70;
  local_78 = 0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd28d90,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2bdb0,1,0);
  local_58._0_4_ = 0x100;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc1e060,L"LiveLink.Client.MaxNewStaticDataPerUpdate",&local_58,
                L"Maximun number of new static data that can be added in a single UE frame.");
  atexit(FUN_144537b6b);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x800);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc1e078,L"LiveLink.Client.MaxNewFrameDataPerUpdate",&local_58,
                L"Maximun number of new frame data that can be added in a single UE frame.");
  atexit(FUN_144537bb0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14cc1e118);
  if (cVar2 == '\0') {
    _DAT_14cc1e118 = 0;
    uRam000000014cc1e120 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = "bone";
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2d440,1,0);
  local_58 = "LevelEditor";
  local_50 = 0xb;
  local_4c = 0;
  uVar3 = FUN_14001a6c0(&local_58,1);
  _DAT_14cc1e168 = (ulonglong)uVar3;
  _DAT_14cc1e170 = DAT_14c758d58;
  _DAT_14cc1e174 = DAT_14c758d58;
  _DAT_14cc1e178 = DAT_14c758d58;
  _DAT_14cc1e17c = 0x3f34b4b5;
  _DAT_14cc1e180 = DAT_14c758d58;
  _DAT_14cc1e184 = DAT_14c758d58;
  _DAT_14cc1e188 = DAT_14c758d58;
  _DAT_14cc1e18c = 0x3ef0f0f2;
  _DAT_14cc1e190 = DAT_14c75905c;
  _DAT_14cc1e194 = DAT_14c75905c;
  _DAT_14cc1e198 = DAT_14c75905c;
  _DAT_14cc1e19c = 0x3ef0f0f2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2dc60,1,0);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd35760;
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_1415c7246(&DAT_14cc1e1c0,L"LiveLink.Log.EnableMessage",
                L"Enable a LiveLink Message ID that was previously disabled.Use: \"LiveLink.Log.EnableMessage MessageID\""
                ,&local_58);
  if (local_50 == 0) {
LAB_14453f856:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14453f856;
  }
  atexit(FUN_14453a746);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd357d0;
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_1415c7246(&DAT_14cc1e1d0,L"LiveLink.Log.DisableMessage",
                L"Disable a LiveLink Message ID.Use: \"LiveLink.Log.DisableMessage MessageID\"",
                &local_58);
  if (local_50 == 0) {
LAB_14453f930:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14453f930;
  }
  atexit(FUN_14453a78b);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd35840;
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_1415c7246(&DAT_14cc1e1e0,L"LiveLink.Log.SilentMode",
                L"Silent all log from LiveLink.To silent: \"LiveLink.Log.SilentMode\"To set: \"LiveLink.Log.SilentMode TRUE|FALSE\""
                ,&local_58);
  if (local_50 == 0) {
LAB_14453fa0a:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14453fa0a;
  }
  atexit(FUN_14453a7d0);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd358b0;
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_1415c7246(&DAT_14cc1e1f0,L"LiveLink.Log.LogRepeated",
                L"Log all messages event if they are not log for the first time.To log: \"LiveLink.Log.LogRepeated\"To set: \"LiveLink.Log.LogRepeated TRUE|FALSE\""
                ,&local_58);
  if (local_50 == 0) {
LAB_14453fae4:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14453fae4;
  }
  atexit(FUN_14453a815);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2eb50,1,&PTR_FUN_14bd2eb20);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2f0d0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2f5f0,1,0);
  local_58 = (char *)0x800000014bd2c544;
  local_44 = 8;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14673e858(&local_58);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd2fea0,1,0);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd35cd0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cc1e2e8,L"LiveLink.Preset.Apply",
                L"Apply a LiveLinkPreset. Use: LiveLink.Preset.Apply Preset=/Game/Folder/MyLiveLinkPreset.MyLiveLinkPreset"
                ,&local_58);
  if (local_50 == 0) {
LAB_14453fc8a:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14453fc8a;
  }
  atexit(FUN_14453c8f0);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_14bd35d50;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cc1e2f8,L"LiveLink.Preset.Add",
                L"Add a LiveLinkPreset. Use: LiveLink.Preset.Add Preset=/Game/Folder/MyLiveLinkPreset.MyLiveLinkPreset"
                ,&local_58);
  if (local_50 != 0) {
    if (local_58 == (char *)0x0) goto LAB_14453fd72;
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14453fd72:
  atexit(FUN_14453c935);
  atexit((_func_5014 *)&LAB_14453c97a);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd310d0,2,&PTR_FUN_14bd310a0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bd31af0;
  local_78 = 0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd31b10,1,0);
  local_58._0_4_ = 5;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc1e490,L"LiveLink.TimedDataInput.MinBufferSize",&local_58,
                L"The min size the timed data input is allowed to set the buffer size.");
  atexit(FUN_14453d3e4);
  local_58 = (char *)CONCAT44(local_58._4_4_,200);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc1e4a8,L"LiveLink.TimedDataInput.MaxBufferSize",&local_58,
                L"The max size the timed data input is allowed to set the buffer size.");
  atexit(FUN_14453d429);
  local_58 = (char *)CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc1e4c0,L"LiveLink.TimedDataInput.UpdateClockOffset",&local_58,
                L"By default, clock offset is continuously updated for each source. You can pause it if desired with this cvar and offset will be fixed to its value."
               );
  atexit(FUN_14453d46e);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x3fc00000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cc1e4d8,L"LiveLink.TimedDataInput.NumFramesForSmoothOffset",&local_58,
                L"The fractional number of source frames used an offset to achieve smooth evaluation time."
               );
  atexit(FUN_14453d4b3);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd323d0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd32850,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bd33540;
  local_78 = 0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd33560,2,0);
  FUN_1446f470e(&DAT_14cc1e598,L"Type",1);
  FUN_1446f470e(&DAT_14cc1e5a0,L"Machine",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd33d20,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd34100,1,0);
  FUN_1446f470e(&DAT_14cc1e5d8,L"OnInitialize",1);
  FUN_1446f470e(&DAT_14cc1e5e8,L"OnUpdate",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLink",&PTR_FUN_14bd348a0,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445400e4 FUN_1445400e4 body=1608 status=ok
// SIG undefined FUN_1445400e4(void)

undefined8 FUN_1445400e4(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar7;
  undefined *puVar8;
  ulonglong *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  longlong lVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_1445402d9;
  puVar8 = *(undefined **)(lVar2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_98 = (undefined *)FUN_140342cba();
      local_90 = FUN_1468c7f1e;
      local_a0 = 0;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_90 = FUN_140b31576;
    local_98 = &DAT_14c951a38;
    local_a0 = 0;
    local_a8 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar10 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c951a90 && bVar10) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar10 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c951a90) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (bVar10) goto LAB_14454016a;
LAB_1445401f7:
    puVar8 = *(undefined **)(lVar2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_140a4831c;
      local_98 = &DAT_14c951a38;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar10 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c949688 && bVar10) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar10 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c949688) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (!bVar10) goto LAB_1445402d9;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c949690) == 0) {
LAB_1445402d9:
      uVar5 = 0;
      goto LAB_1445402db;
    }
    plVar7 = *(longlong **)(lVar2 + 0x70);
    lVar2 = FUN_14953e8de(local_68);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
              (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40;
    }
    lVar6 = *plVar7;
  }
  else {
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a98) == 0) goto LAB_1445401f7;
LAB_14454016a:
    lVar6 = *(longlong *)(lVar2 + 0x78);
    if (lVar6 == 0) goto LAB_1445402d9;
    puVar8 = *(undefined **)(lVar6 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_140a4831c;
      local_98 = &DAT_14c951a38;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar10 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c949688 && bVar10) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar10 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c949688) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar10) goto LAB_144540317;
      goto LAB_1445402d9;
    }
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c949690) == 0) goto LAB_1445402d9;
LAB_144540317:
    lVar3 = FUN_14953e8de(local_68);
    if (lVar3 == 0) {
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)((longlong)*(int *)(lVar3 + 0x44) + param_4 + local_40);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar2 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar9;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_2);
    if ((int)local_80[1] == 0) {
      lVar2 = 0;
    }
    else {
      if ((local_70 & 1) == 0) {
        uVar4 = *local_80;
      }
      else {
        uVar4 = *local_80;
        if ((uVar4 & 1) != 0) {
          uVar4 = (longlong)local_80 + ((longlong)uVar4 >> 0x18);
        }
      }
      lVar2 = (longlong)local_78 * (longlong)param_2 + uVar4;
    }
    plVar7 = *(longlong **)(lVar6 + 0x70);
    lVar6 = *plVar7;
  }
  uVar5 = (**(code **)(lVar6 + 0x220))(plVar7,lVar2);
LAB_1445402db:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14454072e FUN_14454072e body=1201 status=ok
// SIG undefined FUN_14454072e(void)

void FUN_14454072e(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  longlong local_90;
  ulonglong *local_88;
  int local_80;
  undefined4 local_7c;
  byte local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14953e9a4(param_1,local_70);
  lVar2 = FUN_14953e8de(local_70);
  if (lVar2 == 0) goto LAB_144540965;
  puVar7 = *(undefined **)(lVar2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_a8 = (undefined *)FUN_140342cba();
      local_a0 = FUN_1468c7f1e;
      local_b0 = 0;
      local_b8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_a0 = FUN_140b31576;
    local_a8 = &DAT_14c951a38;
    local_b0 = 0;
    local_b8 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar9 = puVar7 != (undefined *)0x0;
    if (puVar7 != &DAT_14c951a90 && bVar9) {
      do {
        puVar7 = *(undefined **)(puVar7 + 0x30);
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 == &DAT_14c951a90) break;
      } while (puVar7 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_1445407be;
LAB_144540848:
    plVar6 = *(longlong **)(lVar2 + 0x70);
    lVar2 = FUN_14953e8de(local_70);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
              (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_48;
    }
    lVar5 = *plVar6;
  }
  else {
    if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c951a98) == 0) goto LAB_144540848;
LAB_1445407be:
    lVar5 = *(longlong *)(lVar2 + 0x78);
    if (lVar5 == 0) goto LAB_144540965;
    puVar7 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_a8 = (undefined *)FUN_140342cba();
        local_a0 = FUN_1468c7f1e;
        local_b0 = 0;
        local_b8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_a0 = FUN_140a4831c;
      local_a8 = &DAT_14c951a38;
      local_b8 = 0x1000000008001;
      local_b0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar9 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c949688 && bVar9) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar9 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c949688) break;
        } while (puVar7 != (undefined *)0x0);
      }
      if (!bVar9) goto LAB_144540965;
    }
    else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c949690) == 0) goto LAB_144540965;
    lVar3 = FUN_14953e8de(local_70);
    if (lVar3 == 0) {
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)((longlong)*(int *)(lVar3 + 0x44) + param_4 + local_48);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_7c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_90 = *(longlong *)(lVar2 + 0x78);
    local_80 = *(int *)(local_90 + 0x34);
    local_88 = puVar8;
    local_78 = bVar1;
    FUN_140d50566(&local_90,param_2);
    if ((int)local_88[1] == 0) {
      lVar2 = 0;
    }
    else {
      if ((local_78 & 1) == 0) {
        uVar4 = *local_88;
      }
      else {
        uVar4 = *local_88;
        if ((uVar4 & 1) != 0) {
          uVar4 = (longlong)local_88 + ((longlong)uVar4 >> 0x18);
        }
      }
      lVar2 = (longlong)local_80 * (longlong)param_2 + uVar4;
    }
    plVar6 = *(longlong **)(lVar5 + 0x70);
    lVar5 = *plVar6;
  }
  (**(code **)(lVar5 + 0x1f8))(plVar6,lVar2,param_5);
LAB_144540965:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144540be0 FUN_144540be0 body=431 status=ok
// SIG undefined FUN_144540be0(void)

undefined8 * FUN_144540be0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)(param_3 + 0x108);
  FUN_1400021e4(&local_58,local_50);
  FUN_1475579bc(param_1,*(undefined8 *)(param_3 + 0x100),local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bd38a60;
  FUN_14953c9c0(param_1 + 7,param_2 + 0xf8);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x138);
  _Src = *(void **)(param_2 + 0x130);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = *(undefined8 *)(param_2 + 0x150);
  lVar3 = *(longlong *)(param_2 + 0x158);
  param_1[0x16] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_2 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x140);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      iVar2 = *(int *)(param_1 + 0x11);
      *(uint *)(param_1 + 0x11) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
        FUN_149544c26(param_1 + 0x10,iVar2);
      }
      FUN_149541fde((longlong)iVar2 * 0x10 + param_1[0x10],lVar4 + 0x28);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  bVar5 = FUN_14953c69e(param_1);
  *(byte *)(param_1 + 0x12) = bVar5 ^ 1;
  uVar6 = FUN_14953c832(param_1);
  *(undefined1 *)((longlong)param_1 + 0x91) = uVar6;
  FUN_14953ca50(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144540d90 FUN_144540d90 body=69 status=ok
// SIG undefined FUN_144540d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144540d90(void)

{
  _DAT_14cc1e6d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144540dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1e6d8,1);
  return;
}



// FUNCTION 144540dd6 FUN_144540dd6 body=1839 status=ok
// SIG undefined FUN_144540dd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144540dd6(longlong param_1,int *param_2,ulonglong *param_3,ulonglong *param_4,
                  longlong *param_5,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_178 [32];
  LARGE_INTEGER *local_158;
  int *local_150;
  longlong local_148;
  longlong local_140;
  LARGE_INTEGER local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_118;
  double local_110 [2];
  longlong local_100;
  uint local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  float local_d8;
  longlong local_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  longlong lStack_c0;
  char local_b8;
  ulonglong local_b0;
  
  cVar6 = DAT_14c846568;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_b8 = DAT_14c846568;
  if (DAT_14c846568 == '\x01') {
    local_c8 = _DAT_14c846558;
    lStack_c0 = DAT_14c846560;
  }
  iVar7 = (**(code **)(*DAT_14cc1e6d8 + 0xb0))();
  cVar11 = '\x01';
  if (iVar7 == 0 && cVar6 == '\x01') {
    if ((int)*param_3 == (int)*param_4) {
      if ((*(float *)((longlong)param_3 + 4) == *(float *)((longlong)param_4 + 4)) &&
         (!NAN(*(float *)((longlong)param_3 + 4)) && !NAN(*(float *)((longlong)param_4 + 4))))
      goto LAB_144540e9e;
    }
    cVar11 = *(char *)(param_1 + 0x90);
  }
LAB_144540e9e:
  local_e8 = 0.0;
  QueryPerformanceCounter(&local_138);
  local_f0 = (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0;
  if (cVar11 == '\0') {
    uVar22 = *param_4;
    uVar14 = *param_3;
    uVar20 = uVar14;
    uVar21 = uVar22;
    if ((int)uVar14 <= (int)uVar22) {
      uVar21 = uVar14;
      if ((int)uVar14 == (int)uVar22 && (float)(uVar22 >> 0x20) < (float)(uVar14 >> 0x20)) {
        uVar21 = uVar22;
        uVar22 = uVar14;
      }
      uVar14 = uVar22;
      uVar22 = uVar21 & 0xffffffff;
      uVar20 = uVar14 & 0xffffffff;
    }
    local_100 = 0;
    local_f8 = 0;
    local_150 = param_2;
    FUN_14953cf7c();
    iVar7 = (int)uVar22;
    iVar19 = (int)uVar20;
    if ((int)local_f8 < 1) {
      uVar10 = 0;
      iVar23 = local_f8 - 1;
    }
    else {
      iVar18 = 0;
      uVar22 = (ulonglong)local_f8;
      uVar10 = local_f8;
      do {
        uVar22 = uVar22 >> 1;
        uVar17 = (uint)uVar22 + iVar18;
        if (*(int *)(local_100 + (ulonglong)uVar17 * 4) < iVar19) {
          iVar18 = uVar17 + (uVar10 & 1);
        }
        bVar12 = 1 < uVar10;
        uVar10 = (uint)uVar22;
      } while (bVar12);
      uVar10 = 0;
      uVar17 = local_f8;
      do {
        uVar1 = (uVar17 >> 1) + uVar10;
        if (*(int *)(local_100 + (ulonglong)uVar1 * 4) <= iVar7) {
          uVar10 = uVar1 + (uVar17 & 1);
        }
        bVar12 = 1 < uVar17;
        uVar17 = uVar17 >> 1;
      } while (bVar12);
      iVar23 = local_f8 - 1;
      if (iVar18 < (int)local_f8) {
        iVar23 = iVar18;
      }
    }
    param_2 = local_150;
    if ((iVar23 != -1) && ((int)uVar10 <= iVar23)) {
      uVar22 = (ulonglong)uVar10;
      bVar12 = true;
LAB_1445410f2:
      lVar13 = local_100 + uVar22 * 4;
      iVar18 = (int)uVar22;
      lVar15 = 0;
      do {
        iVar2 = *(int *)(lVar13 + lVar15 * 4);
        if ((iVar7 < iVar2) || (iVar2 == iVar7 && (float)(uVar21 >> 0x20) < 0.0)) {
          if ((iVar2 < iVar19) || (iVar2 == iVar19 && 0.0 <= (float)(uVar14 >> 0x20)))
          goto LAB_144541140;
        }
        lVar15 = lVar15 + 1;
        if ((iVar23 - iVar18) + 1 == (int)lVar15) {
          param_2 = local_150;
          if (!bVar12) goto LAB_144541483;
          break;
        }
      } while( true );
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)plVar3[0x22];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar9 = (longlong *)plVar3[0x22];
    }
  }
  uVar8 = (**(code **)(*plVar9 + 0x2a8))();
  FUN_1446e6d0e(&local_138,uVar8);
  local_158 = &local_138;
  FUN_14953d1f0(param_1,param_2,&local_f0,&local_c8);
  iVar7 = (int)param_5[1];
  lVar13 = (longlong)iVar7;
  *(uint *)(param_5 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
    FUN_14951f00a(param_5,iVar7);
  }
  lVar15 = *param_5;
  *(undefined ***)(lVar15 + lVar13 * 0x28) = &PTR_FUN_149eacb10;
  *(undefined8 *)(lVar15 + 8 + lVar13 * 0x28) = 0;
  *(undefined8 *)(lVar15 + 0x18 + lVar13 * 0x28) = 0;
  *(undefined8 *)(lVar15 + 8 + lVar13 * 0x28) = local_130;
  *(undefined8 *)(lVar15 + 0x10 + lVar13 * 0x28) = local_128;
  *(undefined1 *)(lVar15 + 0x20 + lVar13 * 0x28) = local_118;
  local_118 = 0;
  (**(code **)(local_138.QuadPart + 0x48))(&local_138);
  FUN_1448eac94(&local_138);
LAB_144541483:
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144541140:
  fVar24 = 0.0 - (float)local_150[1];
  auVar29 = roundps(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24),1);
  iVar16 = (int)auVar29._0_4_;
  fVar24 = (fVar24 - auVar29._0_4_) + 0.5 + -0.5;
  auVar29 = ZEXT416((uint)fVar24);
  if (0.99999994 <= fVar24) {
    auVar29._4_12_ = ZEXT812(0);
    auVar29._0_4_ = 0x3f7fffff;
  }
  if (auVar29._0_4_ <= 0.0) {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar29._4_12_;
    auVar29 = auVar5 << 0x20;
  }
  local_110[0] = local_f0 + local_e8 +
                 ((double)((longlong)((iVar2 - *local_150) + iVar16) *
                          (longlong)*(int *)((longlong)param_6 + 4)) +
                 (double)*(int *)((longlong)param_6 + 4) * (double)auVar29._0_4_) /
                 (double)(int)*param_6;
  local_110[1] = 0.0;
  local_cc = 0;
  if (local_b8 == '\x01') {
    iVar16 = (*(int *)(lVar13 + lVar15 * 4) - *local_150) + iVar16;
    lVar13 = *param_6;
    if (lVar13 != lStack_c0) {
      local_138.QuadPart = (lVar13 >> 0x20) * (longlong)(int)lStack_c0;
      local_148 = (longlong)(int)lVar13 * (lStack_c0 >> 0x20);
      lVar13 = (local_138.QuadPart * iVar16) / local_148;
      dVar28 = ((double)auVar29._0_4_ * (double)local_138.QuadPart) / (double)local_148 +
               (((double)local_138.QuadPart * (double)iVar16) / (double)local_148 - (double)lVar13);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar28;
      auVar29 = roundpd(auVar25,auVar25,1);
      lVar13 = (longlong)auVar29._0_8_ + lVar13;
      dVar28 = dVar28 - auVar29._0_8_;
      fVar27 = (float)dVar28;
      uVar10 = (uint)((ulonglong)dVar28 >> 0x20);
      fVar24 = fVar27;
      if (0.99999994 <= fVar27) {
        fVar24 = 0.99999994;
      }
      if (0x7ffffffe < lVar13) {
        lVar13 = 0x7fffffff;
      }
      if (lVar13 < -0x7fffffff) {
        lVar13 = -0x80000000;
      }
      iVar16 = (int)lVar13;
      fVar24 = (float)(~-(uint)(0.0 < fVar27) & (uint)fVar27 | (uint)fVar24 & -(uint)(0.0 < fVar27))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar24) {
        fVar24 = 0.99999994;
      }
      auVar29._4_4_ = uVar10;
      auVar29._0_4_ = fVar24;
      auVar29._8_8_ = 0;
      if (fVar24 <= 0.0) {
        auVar29 = ZEXT416(uVar10) << 0x20;
      }
    }
    auVar26._4_12_ = auVar29._4_12_;
    auVar26._0_4_ = auVar29._0_4_ + local_c8._4_4_;
    auVar29 = roundss(ZEXT416(0),auVar26,9);
    local_dc = iVar16 + (int)local_c8 + ((int)ROUND(auVar26._0_4_ + auVar26._0_4_ + -0.5) >> 1);
    local_d8 = (auVar26._0_4_ - auVar29._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= local_d8) {
      local_d8 = 0.99999994;
    }
    if (local_d8 <= 0.0) {
      local_d8 = 0.0;
    }
    local_d4 = lStack_c0;
    local_cc = 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)plVar3[0x22];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar9 = (longlong *)plVar3[0x22];
    }
  }
  uVar8 = (**(code **)(*plVar9 + 0x2a8))();
  FUN_1446e6d0e(&local_138,uVar8);
  local_158 = &local_138;
  FUN_14953d0d4(param_1,(int)lVar15 + iVar18,local_110,&local_dc);
  lVar13 = (longlong)(int)param_5[1];
  uVar10 = (int)param_5[1] + 1;
  *(uint *)(param_5 + 1) = uVar10;
  if (*(uint *)((longlong)param_5 + 0xc) < uVar10) {
    local_140 = lVar13;
    FUN_14951f00a(param_5,lVar13);
    lVar13 = local_140;
  }
  lVar4 = *param_5;
  *(undefined ***)(lVar4 + lVar13 * 0x28) = &PTR_FUN_149eacb10;
  bVar12 = false;
  *(undefined8 *)(lVar4 + 8 + lVar13 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar13 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar13 * 0x28) = local_130;
  *(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x28) = local_128;
  *(undefined1 *)(lVar4 + 0x20 + lVar13 * 0x28) = local_118;
  local_118 = 0;
  (**(code **)(local_138.QuadPart + 0x48))(&local_138);
  FUN_1448eac94(&local_138);
  uVar22 = uVar22 + lVar15 + 1;
  if (iVar23 - iVar18 == (int)lVar15) goto LAB_144541483;
  goto LAB_1445410f2;
}



// FUNCTION 144541506 FUN_144541506 body=41 status=ok
// SIG undefined FUN_144541506(void)

void FUN_144541506(void)

{
  DAT_14cc1e760 = 0;
  if (DAT_14cc1e758 != 0) {
    FUN_1400020a8();
  }
  FUN_14617382c();
  return;
}



// FUNCTION 144541530 FUN_144541530 body=1595 status=ok
// SIG undefined FUN_144541530(void)

bool FUN_144541530(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  longlong local_80;
  ulonglong *local_78;
  int local_70;
  undefined4 local_6c;
  byte local_68;
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14953e9a4(param_1,local_60);
  lVar2 = FUN_14953e8de(local_60);
  if (lVar2 == 0) goto LAB_144541720;
  puVar6 = *(undefined **)(lVar2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_98 = (undefined *)FUN_140342cba();
      local_90 = FUN_1468c7f1e;
      local_a0 = 0;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_90 = FUN_140b31576;
    local_98 = &DAT_14c951a38;
    local_a0 = 0;
    local_a8 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar9 = puVar6 != (undefined *)0x0;
    if (puVar6 != &DAT_14c951a90 && bVar9) {
      do {
        puVar6 = *(undefined **)(puVar6 + 0x30);
        bVar9 = puVar6 != (undefined *)0x0;
        if (puVar6 == &DAT_14c951a90) break;
      } while (puVar6 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_1445415b5;
LAB_144541642:
    puVar7 = *(undefined8 **)(lVar2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_14067a048;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar9 = puVar7 != (undefined8 *)0x0;
      if (puVar7 != &DAT_14c951cd0 && bVar9) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          bVar9 = puVar7 != (undefined8 *)0x0;
          if (puVar7 == &DAT_14c951cd0) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if (!bVar9) goto LAB_144541720;
    }
    else if ((puVar7[3] & DAT_14c951cd8) == 0) {
LAB_144541720:
      bVar9 = false;
      goto LAB_144541722;
    }
    lVar3 = FUN_14953e8de(local_60);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)param_2 * (longlong)*(int *)(lVar3 + 0x34) +
              (longlong)*(int *)(lVar3 + 0x44) + param_4 + local_38;
    }
    bVar1 = *(byte *)(lVar3 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73);
  }
  else {
    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a98) == 0) goto LAB_144541642;
LAB_1445415b5:
    lVar3 = *(longlong *)(lVar2 + 0x78);
    if (lVar3 == 0) goto LAB_144541720;
    puVar7 = *(undefined8 **)(lVar3 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_14067a048;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar9 = puVar7 != (undefined8 *)0x0;
      if (puVar7 != &DAT_14c951cd0 && bVar9) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          bVar9 = puVar7 != (undefined8 *)0x0;
          if (puVar7 == &DAT_14c951cd0) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if (bVar9) goto LAB_14454175f;
      goto LAB_144541720;
    }
    if ((puVar7[3] & DAT_14c951cd8) == 0) goto LAB_144541720;
LAB_14454175f:
    lVar4 = FUN_14953e8de(local_60);
    if (lVar4 == 0) {
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)((longlong)*(int *)(lVar4 + 0x44) + param_4 + local_38);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_6c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_80 = *(longlong *)(lVar2 + 0x78);
    local_70 = *(int *)(local_80 + 0x34);
    local_78 = puVar8;
    local_68 = bVar1;
    FUN_140d50566(&local_80,param_2);
    if ((int)local_78[1] == 0) {
      lVar2 = 0;
    }
    else {
      if ((local_68 & 1) == 0) {
        uVar5 = *local_78;
      }
      else {
        uVar5 = *local_78;
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)local_78 + ((longlong)uVar5 >> 0x18);
        }
      }
      lVar2 = (longlong)local_70 * (longlong)param_2 + uVar5;
    }
    bVar1 = *(byte *)(lVar2 + (ulonglong)*(byte *)(lVar3 + 0x71)) & *(byte *)(lVar3 + 0x73);
  }
  bVar9 = bVar1 != 0;
LAB_144541722:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 144541b6c FUN_144541b6c body=49 status=ok
// SIG undefined FUN_144541b6c(void)

void FUN_144541b6c(void)

{
  FUN_1447a1747(DAT_14cc1e798,DAT_14cc1e7a0);
  if (DAT_14cc1e798 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144541b9d FUN_144541b9d body=49 status=ok
// SIG undefined FUN_144541b9d(void)

void FUN_144541b9d(void)

{
  FUN_1447a1747(DAT_14cc1e7d8,DAT_14cc1e7e0);
  if (DAT_14cc1e7d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144541bce FUN_144541bce body=49 status=ok
// SIG undefined FUN_144541bce(void)

void FUN_144541bce(void)

{
  FUN_1447a1747(DAT_14cc1e7e8,DAT_14cc1e7f0);
  if (DAT_14cc1e7e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144541bff FUN_144541bff body=49 status=ok
// SIG undefined FUN_144541bff(void)

void FUN_144541bff(void)

{
  FUN_1447a1747(DAT_14cc1e7f8,DAT_14cc1e800);
  if (DAT_14cc1e7f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144541c30 FUN_144541c30 body=4863 status=ok
// SIG undefined FUN_144541c30(void)

ulonglong FUN_144541c30(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  code *local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120 [2];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar7 = *(undefined8 **)(param_1 + 8);
  local_188 = param_2;
  local_180 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_190 = FUN_1408a629c;
    local_198 = &DAT_14c9520b8;
    local_1a0 = 0;
    local_1a8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  if (DAT_14c952380 == 0) {
    bVar12 = puVar7 != (undefined8 *)0x0;
    if (puVar7 != &DAT_14c952378 && bVar12) {
      do {
        puVar7 = (undefined8 *)puVar7[6];
        bVar12 = puVar7 != (undefined8 *)0x0;
        if (puVar7 == &DAT_14c952378) break;
      } while (puVar7 != (undefined8 *)0x0);
    }
    if (bVar12) goto LAB_144541ca0;
LAB_144541cfc:
    puVar7 = *(undefined8 **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_190 = FUN_1405ebbb2;
      local_198 = &DAT_14c9520b8;
      local_1a0 = 0;
      local_1a8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (DAT_14c9521c8 == 0) {
      bVar12 = puVar7 != (undefined8 *)0x0;
      if (puVar7 != &DAT_14c9521c0 && bVar12) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          bVar12 = puVar7 != (undefined8 *)0x0;
          if (puVar7 == &DAT_14c9521c0) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if (!bVar12) goto LAB_144541d3f;
    }
    else if ((puVar7[3] & DAT_14c9521c8) == 0) {
LAB_144541d3f:
      puVar7 = *(undefined8 **)(param_1 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_198 = (undefined *)FUN_140342cba();
          local_190 = FUN_1468c7f1e;
          local_1a0 = 0;
          local_1a8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_190 = FUN_14067a048;
        local_198 = &DAT_14c951a38;
        local_1a0 = 0;
        local_1a8 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      if (DAT_14c951cd8 == 0) {
        bVar12 = puVar7 != (undefined8 *)0x0;
        if (puVar7 != &DAT_14c951cd0 && bVar12) {
          do {
            puVar7 = (undefined8 *)puVar7[6];
            bVar12 = puVar7 != (undefined8 *)0x0;
            if (puVar7 == &DAT_14c951cd0) break;
          } while (puVar7 != (undefined8 *)0x0);
        }
        if (bVar12) goto LAB_144541ea3;
      }
      else if ((puVar7[3] & DAT_14c951cd8) != 0) {
LAB_144541ea3:
        FUN_147652216(local_180,(longlong)param_3 * 0x108 + *(longlong *)(local_188 + 0x38));
        goto LAB_144541cbd;
      }
      puVar8 = *(undefined **)(param_1 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_198 = (undefined *)FUN_140342cba();
          local_190 = FUN_1468c7f1e;
          local_1a0 = 0;
          local_1a8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_190 = FUN_140dafe7a;
        local_198 = &DAT_14c951a38;
        local_1a0 = 0;
        local_1a8 = 0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      if (DAT_14c963e40 == 0) {
        bVar12 = puVar8 != (undefined *)0x0;
        if (puVar8 != &DAT_14c963e38 && bVar12) {
          do {
            puVar8 = *(undefined **)(puVar8 + 0x30);
            bVar12 = puVar8 != (undefined *)0x0;
            if (puVar8 == &DAT_14c963e38) break;
          } while (puVar8 != (undefined *)0x0);
        }
        if (bVar12) goto LAB_144541f01;
      }
      else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c963e40) != 0) {
LAB_144541f01:
        FUN_146349ec4(local_180,(longlong)param_3 * 0x110 + *(longlong *)(local_188 + 0x18));
        goto LAB_144541cbd;
      }
      puVar8 = *(undefined **)(param_1 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1409f1a5c;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      if (DAT_14c951d30 == 0) {
        bVar12 = puVar8 != (undefined *)0x0;
        if (puVar8 != &DAT_14c951d28 && bVar12) {
          do {
            puVar8 = *(undefined **)(puVar8 + 0x30);
            bVar12 = puVar8 != (undefined *)0x0;
            if (puVar8 == &DAT_14c951d28) break;
          } while (puVar8 != (undefined *)0x0);
        }
        if (!bVar12) goto LAB_144541f5b;
      }
      else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951d30) == 0) {
LAB_144541f5b:
        puVar8 = *(undefined **)(param_1 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9496d8) &&
           (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_198 = (undefined *)FUN_140342cba();
            local_190 = FUN_1468c7f1e;
            local_1a0 = 0;
            local_1a8 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_190 = FUN_140a4831c;
          local_198 = &DAT_14c951a38;
          local_1a8 = 0x1000000008001;
          local_1a0 = 0;
          FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
          atexit(FUN_1427e14fe);
          _Init_thread_footer(&DAT_14c9496d8);
        }
        if (DAT_14c949690 == 0) {
          bVar12 = puVar8 != (undefined *)0x0;
          if (puVar8 != &DAT_14c949688 && bVar12) {
            do {
              puVar8 = *(undefined **)(puVar8 + 0x30);
              bVar12 = puVar8 != (undefined *)0x0;
              if (puVar8 == &DAT_14c949688) break;
            } while (puVar8 != (undefined *)0x0);
          }
          if (!bVar12) goto LAB_144541f96;
        }
        else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c949690) == 0) {
LAB_144541f96:
          puVar8 = *(undefined **)(param_1 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_198 = (undefined *)FUN_140342cba();
              local_190 = FUN_1468c7f1e;
              local_1a0 = 0;
              local_1a8 = 0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_190 = FUN_1403a682c;
            local_198 = &DAT_14c951a38;
            local_1a0 = 0;
            local_1a8 = 0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 == 0) {
            bVar12 = puVar8 != (undefined *)0x0;
            if (puVar8 != &DAT_14c952a08 && bVar12) {
              do {
                puVar8 = *(undefined **)(puVar8 + 0x30);
                bVar12 = puVar8 != (undefined *)0x0;
                if (puVar8 == &DAT_14c952a08) break;
              } while (puVar8 != (undefined *)0x0);
            }
            if (bVar12) goto LAB_144542068;
          }
          else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) {
LAB_144542068:
            uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            uVar4 = DAT_14cc1e800;
            if (uVar5 == DAT_14c892c5c) {
              uVar10 = (ulonglong)DAT_14cc1e7e0;
              if (0 < (longlong)uVar10) {
                param_3 = param_3 * DAT_14cc1e7e0;
                uVar5 = 0;
                do {
                  FUN_140009b9a(local_d8,uVar5 * 0x10 + DAT_14cc1e7d8);
                  local_e8 = (longlong *)*param_5;
                  if (local_e8 != (longlong *)0x0) {
                    (**(code **)(*local_e8 + 8))();
                  }
                  local_e0 = (undefined4)param_5[1];
                  local_88 = L"LinkLinkFormat";
                  local_80[0] = 0xe;
                  FUN_1446e940c(local_10c,&local_88);
                  local_88 = L"MovieSceneLiveLinkSubSectionProperties";
                  local_80[0] = 0x26;
                  FUN_1446e940c(local_110,&local_88);
                  local_88 = L"{0} : {1}";
                  local_80[0] = 9;
                  FUN_140208c1e(local_108,local_110,local_10c,&local_88);
                  FUN_14023409e(&local_f8,local_108,1);
                  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
                  FUN_14023423e(local_78,&local_e8);
                  local_68 = 4;
                  FUN_14023423e(local_58,local_d8);
                  local_a0 = &local_48;
                  local_a8 = &local_88;
                  FUN_14010d304(&local_98,&local_a8);
                  local_b8 = local_f8;
                  local_b0 = local_f0;
                  if (local_f0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_c8,&local_b8,&local_98);
                  FUN_14007f2db(local_98,local_90);
                  if (local_98 != 0) {
                    FUN_1400020a8();
                  }
                  lVar9 = 0x30;
                  do {
                    plVar3 = *(longlong **)((longlong)local_80 + lVar9 + -8);
                    if (plVar3 != (longlong *)0x0) {
                      (**(code **)(*plVar3 + 0x10))();
                      *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
                      *(undefined4 *)((longlong)local_80 + lVar9) = 0;
                    }
                    plVar3 = local_f0;
                    lVar9 = lVar9 + -0x20;
                  } while (lVar9 != -0x10);
                  if (local_f0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_f0 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_f0)(local_f0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                  if (local_e8 != (longlong *)0x0) {
                    (**(code **)(*local_e8 + 0x10))();
                  }
                  if (local_d8[0] != (longlong *)0x0) {
                    (**(code **)(*local_d8[0] + 0x10))();
                  }
                  if (local_108[0] != (longlong *)0x0) {
                    (**(code **)(*local_108[0] + 0x10))();
                  }
                  FUN_140f937a0(local_180,
                                uVar5 * 0x110 + *(longlong *)(local_188 + 8) +
                                (longlong)param_3 * 0x110);
                  if (local_c8[0] != (longlong *)0x0) {
                    (**(code **)(*local_c8[0] + 0x10))();
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 != uVar10);
                goto LAB_144542648;
              }
            }
            else {
              uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
              if (uVar5 != DAT_14c892c2c) {
                uVar10 = 0;
                if ((uVar5 == DAT_14c892c38) && (lVar9 = (longlong)(int)DAT_14cc1e800, 0 < lVar9)) {
                  lVar6 = 0;
                  local_178 = (longlong)(int)(param_3 * DAT_14cc1e800) * 0x110;
                  do {
                    FUN_140009b9a(local_150,lVar6 * 0x10 + DAT_14cc1e7f8);
                    local_160 = (longlong *)*param_5;
                    if (local_160 != (longlong *)0x0) {
                      (**(code **)(*local_160 + 8))();
                    }
                    local_158 = (undefined4)param_5[1];
                    local_88 = L"LinkLinkFormat";
                    local_80[0] = 0xe;
                    FUN_1446e940c(local_10c,&local_88);
                    local_88 = L"MovieSceneLiveLinkSubSectionProperties";
                    local_80[0] = 0x26;
                    FUN_1446e940c(local_110,&local_88);
                    local_88 = L"{0} : {1}";
                    local_80[0] = 9;
                    FUN_140208c1e(local_108,local_110,local_10c,&local_88);
                    FUN_14023409e(&local_170,local_108,1);
                    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
                    FUN_14023423e(local_78,&local_160);
                    local_68 = 4;
                    FUN_14023423e(local_58,local_150);
                    local_a0 = &local_48;
                    local_a8 = &local_88;
                    FUN_14010d304(&local_98,&local_a8);
                    local_b8 = local_170;
                    local_b0 = local_168;
                    if (local_168 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_168 + 1) = (int)local_168[1] + 1;
                      UNLOCK();
                    }
                    FUN_14010c016(local_c8,&local_b8,&local_98);
                    FUN_14007f2db(local_98,local_90);
                    if (local_98 != 0) {
                      FUN_1400020a8();
                    }
                    lVar11 = 0x30;
                    do {
                      plVar3 = *(longlong **)((longlong)local_80 + lVar11 + -8);
                      if (plVar3 != (longlong *)0x0) {
                        (**(code **)(*plVar3 + 0x10))();
                        *(undefined8 *)((longlong)local_80 + lVar11 + -8) = 0;
                        *(undefined4 *)((longlong)local_80 + lVar11) = 0;
                      }
                      plVar3 = local_168;
                      lVar11 = lVar11 + -0x20;
                    } while (lVar11 != -0x10);
                    if (local_168 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_168 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_168)(local_168);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    if (local_160 != (longlong *)0x0) {
                      (**(code **)(*local_160 + 0x10))();
                    }
                    if (local_150[0] != (longlong *)0x0) {
                      (**(code **)(*local_150[0] + 0x10))();
                    }
                    if (local_108[0] != (longlong *)0x0) {
                      (**(code **)(*local_108[0] + 0x10))();
                    }
                    FUN_1492121b4(local_180,
                                  lVar6 * 0x110 + *(longlong *)(local_188 + 0x48) + local_178);
                    if (local_c8[0] != (longlong *)0x0) {
                      (**(code **)(*local_c8[0] + 0x10))();
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != lVar9);
                  uVar10 = (ulonglong)uVar4;
                }
                goto LAB_144542648;
              }
              uVar10 = (ulonglong)DAT_14cc1e7f0;
              if (0 < (longlong)uVar10) {
                param_3 = param_3 * DAT_14cc1e7f0;
                uVar5 = 0;
                do {
                  FUN_140009b9a(local_120,uVar5 * 0x10 + DAT_14cc1e7e8);
                  local_130 = (longlong *)*param_5;
                  if (local_130 != (longlong *)0x0) {
                    (**(code **)(*local_130 + 8))();
                  }
                  local_128 = (undefined4)param_5[1];
                  local_88 = L"LinkLinkFormat";
                  local_80[0] = 0xe;
                  FUN_1446e940c(local_10c,&local_88);
                  local_88 = L"MovieSceneLiveLinkSubSectionProperties";
                  local_80[0] = 0x26;
                  FUN_1446e940c(local_110,&local_88);
                  local_88 = L"{0} : {1}";
                  local_80[0] = 9;
                  FUN_140208c1e(local_108,local_110,local_10c,&local_88);
                  FUN_14023409e(&local_140,local_108,1);
                  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
                  FUN_14023423e(local_78,&local_130);
                  local_68 = 4;
                  FUN_14023423e(local_58,local_120);
                  local_a0 = &local_48;
                  local_a8 = &local_88;
                  FUN_14010d304(&local_98,&local_a8);
                  local_b8 = local_140;
                  local_b0 = local_138;
                  if (local_138 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_c8,&local_b8,&local_98);
                  FUN_14007f2db(local_98,local_90);
                  if (local_98 != 0) {
                    FUN_1400020a8();
                  }
                  lVar9 = 0x30;
                  do {
                    plVar3 = *(longlong **)((longlong)local_80 + lVar9 + -8);
                    if (plVar3 != (longlong *)0x0) {
                      (**(code **)(*plVar3 + 0x10))();
                      *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
                      *(undefined4 *)((longlong)local_80 + lVar9) = 0;
                    }
                    plVar3 = local_138;
                    lVar9 = lVar9 + -0x20;
                  } while (lVar9 != -0x10);
                  if (local_138 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_138 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_138)(local_138);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                  if (local_130 != (longlong *)0x0) {
                    (**(code **)(*local_130 + 0x10))();
                  }
                  if (local_120[0] != (longlong *)0x0) {
                    (**(code **)(*local_120[0] + 0x10))();
                  }
                  if (local_108[0] != (longlong *)0x0) {
                    (**(code **)(*local_108[0] + 0x10))();
                  }
                  FUN_140f937a0(local_180,
                                uVar5 * 0x110 + *(longlong *)(local_188 + 8) +
                                (longlong)param_3 * 0x110);
                  if (local_c8[0] != (longlong *)0x0) {
                    (**(code **)(*local_c8[0] + 0x10))();
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 != uVar10);
                goto LAB_144542648;
              }
            }
          }
          uVar10 = 0;
          goto LAB_144542648;
        }
      }
      FUN_1492121b4(local_180,(longlong)param_3 * 0x110 + *(longlong *)(local_188 + 0x48));
      goto LAB_144541cbd;
    }
    FUN_146349d6c(local_180,(longlong)param_3 * 0x108 + *(longlong *)(local_188 + 0x28));
  }
  else {
    if ((puVar7[3] & DAT_14c952380) == 0) goto LAB_144541cfc;
LAB_144541ca0:
    FUN_140f937a0(local_180,(longlong)param_3 * 0x110 + *(longlong *)(local_188 + 8));
  }
LAB_144541cbd:
  uVar10 = 1;
LAB_144542648:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 144542f5a FUN_144542f5a body=73 status=ok
// SIG undefined FUN_144542f5a(void)

undefined8 FUN_144542f5a(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 144542fa4 FUN_144542fa4 body=209 status=ok
// SIG undefined FUN_144542fa4(void)

undefined8 * FUN_144542fa4(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  uint *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]),param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = &PTR_FUN_14bd3ac78;
    puVar4[1] = 0;
    puVar4[2] = 0;
    local_30 = &local_40;
    local_40 = puVar4;
    local_38 = param_2;
    FUN_1401ac3b6(*(undefined8 *)(param_1 + 8),local_24,&local_38,0);
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543076 FUN_144543076 body=1308 status=ok
// SIG undefined FUN_144543076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144543076(void)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong *local_e0 [2];
  ulonglong local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40 [4];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = 0x800000014bd37eaa;
  local_e0[0] = (ulonglong *)CONCAT44(local_e0[0]._4_4_,0x12);
  local_c8 = FUN_14577453c(L"LiveLinkMovieScene",local_e0);
  local_c4 = 1;
  FUN_14171c728(&DAT_14cc1e690,&local_d0);
  _DAT_14cc1e694 = 0xffffffff;
  _DAT_14cc1e698 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd38670,1,0);
  uStack_f0 = 0;
  local_e8 = 0;
  local_f8 = 1;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",0,0,&PTR_FUN_14bd388b0);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_f8 = local_f8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc1e6d0,L"Sequencer.AlwaysSendInterpolatedLiveLink",&local_d0,
                L"If nonzero we always interpolate when sending out live link data, if 0 we may send out frames at a higher rate than engine tick, if the data is dense."
               );
  atexit(FUN_144540d90);
  uStack_f0 = 0;
  local_e8 = 0;
  local_f8 = 2;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",0,0,&PTR_FUN_14bd390c0);
  DAT_14cc1e738 = 0;
  DAT_14cc1e740 = 0;
  DAT_14cc1e718 = 0;
  _DAT_14cc1e720 = 0;
  _DAT_14cc1e744 = 0xffffffff00000080;
  DAT_14cc1e74c = 0;
  DAT_14cc1e758 = 0;
  DAT_14cc1e760 = 0;
  atexit(FUN_144541506);
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd39540,1,0);
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd398f0,1,0);
  FUN_1400b22c2(&local_d0,"Translation-X");
  FUN_1400b22c2(local_c0,"Translation-Y");
  FUN_1400b22c2(local_b0,"Translation-Z");
  FUN_1400b22c2(local_a0,"Rotation-X");
  FUN_1400b22c2(local_90,"Rotation-Y");
  FUN_1400b22c2(local_80,"Rotation-Z");
  FUN_1400b22c2(local_70,"Scale-X");
  FUN_1400b22c2(local_60,"Scale-Y");
  FUN_1400b22c2(local_50,"Scale-Z");
  local_e0[0] = &local_d0;
  local_e0[1] = local_40;
  FUN_141469cae(&DAT_14cc1e798,local_e0);
  lVar1 = 0x90;
  do {
    if (*(longlong *)((longlong)local_e0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  atexit(FUN_144541b6c);
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd39d80,1,0);
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd3a1a0,1,0);
  FUN_1400b22c2(&local_d0,"Translation.X");
  FUN_1400b22c2(local_c0,"Translation.Y");
  FUN_1400b22c2(local_b0,"Translation.Z");
  FUN_1400b22c2(local_a0,"Rotation.X");
  FUN_1400b22c2(local_90,"Rotation.Y");
  FUN_1400b22c2(local_80,"Rotation.Z");
  FUN_1400b22c2(local_70,"Scale.X");
  FUN_1400b22c2(local_60,"Scale.Y");
  FUN_1400b22c2(local_50,"Scale.Z");
  local_e0[0] = &local_d0;
  local_e0[1] = local_40;
  FUN_141469cae(&DAT_14cc1e7d8);
  lVar1 = 0x90;
  do {
    if (*(longlong *)((longlong)local_e0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  atexit(FUN_144541b9d);
  FUN_1400b22c2(&local_d0,"Vector.X");
  FUN_1400b22c2(local_c0,"Vector.Y");
  FUN_1400b22c2(local_b0,"Vector.Z");
  local_e0[0] = &local_d0;
  local_e0[1] = (ulonglong *)local_a0;
  FUN_141469cae(&DAT_14cc1e7e8);
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)local_e0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  atexit(FUN_144541bce);
  FUN_1400b22c2(&local_d0,"Color.R");
  FUN_1400b22c2(local_c0,"Color.G");
  FUN_1400b22c2(local_b0,"Color.B");
  FUN_1400b22c2(local_a0,"Color.A");
  local_e0[0] = &local_d0;
  local_e0[1] = (ulonglong *)local_90;
  FUN_141469cae(&DAT_14cc1e7f8);
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)local_e0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  atexit(FUN_144541bff);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_14282b410(L"/Script/LiveLinkMovieScene",&PTR_FUN_14bd3a770,1,0);
  if ((local_40[0] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543594 FUN_144543594 body=248 status=ok
// SIG undefined FUN_144543594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144543594(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cc1e838 = 0xffffffff;
  _DAT_14cc1e83c = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/TakeMovieScene",&PTR_FUN_14bd3b6c0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/TakeMovieScene",&PTR_FUN_14bd3bc50,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/TakeMovieScene",&PTR_FUN_14bd3c150,1,0);
  local_48 = 0x800000014bd3c178;
  local_34 = 0xe;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14673f964(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543690 FUN_144543690 body=163 status=ok
// SIG undefined FUN_144543690(void)

ulonglong FUN_144543690(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar1 = *(uint *)(param_1 + 0x78);
  if (0 < (longlong)(int)uVar1) {
    uVar2 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar2 + uVar1;
    if (*(int *)((longlong)param_2 + 0xc) - uVar2 < uVar1) {
      FUN_14475e4ac(param_2,uVar2);
    }
    if (uVar2 < 0x2ee01) {
      memcpy((void *)((ulonglong)uVar2 * 4 + *param_2),*(void **)(param_1 + 0x70),
             (longlong)(int)uVar1 << 2);
      *(undefined4 *)(param_1 + 0x78) = 0;
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (*(int *)(param_1 + 0x7c) < 0) {
        FUN_14482f6fa(param_1 + 0x70,0);
      }
      goto LAB_14454371c;
    }
  }
  uVar3 = 0;
LAB_14454371c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return uVar3 & 0xffffffff;
}



// FUNCTION 144543734 FUN_144543734 body=178 status=ok
// SIG undefined FUN_144543734(void)

void FUN_144543734(longlong *param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *param_4;
  iVar2 = *param_3;
  _Src = (void *)*param_2;
  lVar4 = *param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x48);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(lVar4 + 0x81) == '\x01') {
    iVar3 = *(int *)(lVar4 + 0x78);
    uVar5 = (uint)((longlong)iVar2 * (longlong)iVar1);
    iVar6 = iVar3 + uVar5;
    *(int *)(lVar4 + 0x78) = iVar6;
    if ((uint)(*(int *)(lVar4 + 0x7c) - iVar3) < uVar5) {
      FUN_14475e4ac((longlong *)(lVar4 + 0x70),iVar3);
      iVar6 = *(int *)(lVar4 + 0x78);
    }
    if (iVar6 + uVar5 < 0x2ee01) {
      memcpy((void *)((longlong)iVar3 * 4 + *(longlong *)(lVar4 + 0x70)),_Src,
             (longlong)iVar2 * (longlong)iVar1 * 4);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445437d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 144543810 FUN_144543810 body=29 status=ok
// SIG undefined FUN_144543810(void)

undefined8 FUN_144543810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14454382d FUN_14454382d body=102 status=ok
// SIG undefined FUN_14454382d(void)

void FUN_14454382d(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd3c258;
  local_14 = 0x10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14673faea(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543894 FUN_144543894 body=534 status=ok
// SIG undefined FUN_144543894(void)

ulonglong FUN_144543894(longlong param_1,undefined8 param_2,int param_3)

{
  void *_Src;
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8 [4];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  void *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_3 == -1) {
    local_98 = (void *)0x0;
    iVar4 = *(int *)(param_1 + 0x80);
    _Src = *(void **)(param_1 + 0x78);
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar4);
    if ((longlong)iVar4 == 0) {
      iVar4 = 0;
      uVar2 = 0;
    }
    else {
      FUN_1446dd670(&local_98,iVar4,0);
      memcpy(local_98,_Src,(longlong)iVar4 * 2);
      iVar4 = (int)uStack_90;
      uVar2 = uStack_90._4_4_;
    }
    uStack_50 = CONCAT44(uVar2,iVar4);
    local_58 = local_98;
  }
  else {
    FUN_144544822(param_1 + 0x68,param_3,2,&local_58);
    iVar4 = (int)uStack_50;
  }
  if (1 < iVar4) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_68 = 0;
    cVar1 = FUN_14954a00a(param_1 + 0x68,&local_58);
    if (cVar1 != '\0') {
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      iVar4 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(local_c8 + 2,local_98,iVar4);
      iVar4 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(local_c8,local_88,iVar4);
      local_a8 = (undefined4)local_78;
      local_a4 = uStack_70._4_4_;
      local_a0 = 0;
      FUN_14954987c(param_2,local_c8);
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_144543965;
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar3 = 0;
LAB_144543965:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543aac FUN_144543aac body=856 status=ok
// SIG undefined FUN_144543aac(void)

ulonglong FUN_144543aac(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 auStack_188 [32];
  code **local_168;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  void *local_118;
  undefined8 uStack_110;
  code *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 local_97;
  undefined2 local_93;
  undefined1 local_91;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0x60) != 1) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    plVar17 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 2;
    FUN_144543e06();
  }
  local_118 = (void *)0x0;
  uStack_110 = 0;
  if (*(int *)(param_2 + 4) == -1) {
    local_88 = (void *)0x0;
    iVar15 = *(int *)(param_1 + 0x80);
    pvVar1 = *(void **)(param_1 + 0x78);
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar15);
    if ((longlong)iVar15 == 0) {
      iVar15 = 0;
      uVar16 = 0;
    }
    else {
      FUN_1446dd670(&local_88,iVar15,0);
      memcpy(local_88,pvVar1,(longlong)iVar15 * 2);
      iVar15 = (int)uStack_80;
      uVar16 = uStack_80._4_4_;
    }
    uStack_110 = CONCAT44(uVar16,iVar15);
    local_118 = local_88;
  }
  else {
    FUN_144544822(param_1 + 0x68,*(int *)(param_2 + 4),1,&local_118);
    iVar15 = (int)uStack_110;
  }
  if (1 < iVar15) {
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_128 = 0;
    cVar14 = FUN_14954a00a(param_1 + 0x68,&local_118);
    if ((cVar14 != '\0') && ((byte)(*(char *)(param_2 + 0x10) - 1U) < 7)) {
      iVar15 = *(int *)(param_2 + 0xc);
      if (*(int *)(param_2 + 0xc) == -1) {
        iVar15 = uStack_130._4_4_;
      }
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_63 = 0;
      uStack_61 = 0;
      uStack_60._0_1_ = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      FUN_147e14b42(&local_88,local_138 & 0xffff,iVar15);
      local_90 = FUN_147e14bc0(&local_88);
      uStack_60 = CONCAT31(uStack_60._1_3_,local_90);
      local_b8 = local_88;
      uStack_b0 = uStack_80;
      local_a8 = (undefined4)uStack_78;
      uStack_a4 = uStack_78._4_4_;
      uStack_a0 = uStack_70;
      uStack_9c = uStack_6c;
      uStack_98 = (undefined1)uStack_68;
      local_97 = CONCAT13(uStack_64,uStack_68._1_3_);
      local_93 = uStack_63;
      local_91 = uStack_61;
      local_168 = local_108;
      local_108[0] = FUN_1445450b6;
      local_f8 = 0;
      local_e8 = &PTR_LAB_14bd3c910;
      local_d8 = local_c8;
      uStack_d4 = uStack_c4;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      local_e0 = param_1;
      cVar14 = FUN_1495498fa(param_1 + 0x58,&local_118,&local_b8,param_4);
      if (cVar14 != '\0') {
        *(uint *)(param_1 + 0x50) = (uint)local_b8._2_2_;
        *(undefined4 *)(param_1 + 0x54) = local_b8._4_4_;
        pvVar1 = *(void **)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        uStack_68 = (undefined4)uVar4;
        uStack_64 = (undefined1)((ulonglong)uVar4 >> 0x20);
        uStack_63 = (undefined2)((ulonglong)uVar4 >> 0x28);
        uStack_61 = (undefined1)((ulonglong)uVar4 >> 0x38);
        uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x38);
        uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x28);
        uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
        lVar7 = *param_3;
        lVar8 = param_3[1];
        lVar9 = param_3[2];
        lVar10 = param_3[3];
        lVar11 = param_3[4];
        lVar12 = param_3[5];
        lVar13 = param_3[7];
        *(longlong *)(param_1 + 0x40) = param_3[6];
        *(longlong *)(param_1 + 0x48) = lVar13;
        *(longlong *)(param_1 + 0x30) = lVar11;
        *(longlong *)(param_1 + 0x38) = lVar12;
        *(longlong *)(param_1 + 0x20) = lVar9;
        *(longlong *)(param_1 + 0x28) = lVar10;
        *(longlong *)(param_1 + 0x10) = lVar7;
        *(longlong *)(param_1 + 0x18) = lVar8;
        local_88._0_4_ = SUB84(pvVar1,0);
        local_88._4_4_ = (undefined4)((ulonglong)pvVar1 >> 0x20);
        uStack_80._0_4_ = (int)uVar2;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_78._0_4_ = (undefined4)uVar3;
        uStack_78._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_58._0_4_ = (undefined4)uVar5;
        local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar6;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(param_3 + 6) = (undefined4)local_58;
        *(undefined4 *)((longlong)param_3 + 0x34) = local_58._4_4_;
        *(undefined4 *)(param_3 + 7) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_50._4_4_;
        *(undefined4 *)(param_3 + 4) = uStack_68;
        *(int *)((longlong)param_3 + 0x24) = (int)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(param_3 + 5) = uStack_60;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_5c;
        *(undefined4 *)(param_3 + 2) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)param_3 + 0x14) = uStack_78._4_4_;
        *(undefined4 *)(param_3 + 3) = uStack_70;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_6c;
        *(undefined4 *)param_3 = (undefined4)local_88;
        *(undefined4 *)((longlong)param_3 + 4) = local_88._4_4_;
        *(int *)(param_3 + 1) = (int)uStack_80;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_80._4_4_;
        local_88 = pvVar1;
        uStack_80 = uVar2;
        uStack_78 = uVar3;
        local_58 = uVar5;
        uStack_50 = uVar6;
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        uVar18 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_144543bb5;
      }
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  uVar18 = 0;
LAB_144543bb5:
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar17 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144543e06 FUN_144543e06 body=128 status=ok
// SIG undefined FUN_144543e06(void)

void FUN_144543e06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 8) == 4) {
    *(undefined4 *)(param_1 + 8) = 3;
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,1);
    }
    *(undefined4 *)(param_1 + 8) = 2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_14954a398(uVar4);
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 144543e86 FUN_144543e86 body=59 status=ok
// SIG undefined FUN_144543e86(void)

undefined8 FUN_144543e86(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x60) != 1) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    plVar1 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 2;
  }
  return 1;
}



// FUNCTION 144543ec2 FUN_144543ec2 body=67 status=ok
// SIG undefined FUN_144543ec2(void)

bool FUN_144543ec2(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    plVar2 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 2;
  }
  return iVar1 == 1;
}



// FUNCTION 144543f06 FUN_144543f06 body=440 status=ok
// SIG undefined FUN_144543f06(void)

bool FUN_144543f06(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  undefined8 local_c0;
  byte local_b0 [12];
  undefined4 local_a4;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  byte local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_94 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  bVar5 = false;
  if (-1 < iVar2) {
    local_98 = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_b0[2] = 0;
    local_b0[3] = 0;
    local_b0[4] = 0;
    local_b0[5] = 0;
    local_b0[6] = 0;
    local_b0[7] = 0;
    do {
      bVar5 = local_94 == 0;
      if (bVar5) break;
      local_c0 = 0;
      local_c8 = local_b0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),&local_a0,&local_a4,&local_98);
      if (iVar2 < 0) break;
      *(double *)(param_1 + 0x40) =
           (((double)CONCAT44(0x43300000,(int)local_b0._0_8_) - 4503599627370496.0) +
           ((double)CONCAT44(0x45300000,SUB84(local_b0._0_8_,4)) - 1.9342813113834067e+25)) /
           (double)*(uint *)(param_1 + 0x14);
      if ((local_98 & 2) != 0) {
        local_a0 = *(undefined8 *)(param_1 + 0x90);
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        local_80 = *(undefined8 *)(param_1 + 0x40);
        local_71 = (byte)local_98 & 1;
        local_84 = local_a4;
        local_90 = local_a0;
        pcVar1 = *(code **)(param_1 + 0x50);
        plVar4 = *(longlong **)(param_1 + 0x60);
        if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
          plVar4 = (longlong *)(param_1 + 0x70);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        local_c8 = &local_71;
        (*pcVar1)(uVar3,&local_90,&local_84,&local_80);
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_a4);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                        (*(longlong **)(param_1 + 8),&local_94);
    } while (-1 < iVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445440c6 FUN_1445440c6 body=421 status=ok
// SIG undefined FUN_1445440c6(void)

void FUN_1445440c6(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  LPVOID local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (longlong *)0x0;
  iVar2 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20),0,0);
  if (iVar1 < 0) {
    lVar3 = 0;
    bVar4 = false;
  }
  else {
    local_40 = (LPVOID)0x0;
    iVar2 = (**(code **)(*local_38 + 0x28))(local_38,&local_40);
    bVar4 = local_40 != (LPVOID)0x0 && -1 < iVar2;
    if (local_40 != (LPVOID)0x0 && -1 < iVar2) {
      FUN_140056680(&local_50);
      iVar2 = local_48;
      lVar3 = local_50;
      CoTaskMemFree(local_40);
    }
    else {
      iVar2 = 0;
      lVar3 = 0;
    }
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (bVar4) {
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1,lVar3,iVar1);
  }
  local_38 = (longlong *)0x0;
  bVar4 = false;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20),1,0);
  if (-1 < iVar1) {
    local_40 = (LPVOID)0x0;
    iVar1 = (**(code **)(*local_38 + 0x28))(local_38,&local_40);
    bVar4 = local_40 != (LPVOID)0x0 && -1 < iVar1;
    if (local_40 != (LPVOID)0x0 && -1 < iVar1) {
      FUN_140056680(&local_50);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      CoTaskMemFree(local_40);
      lVar3 = local_50;
      iVar2 = local_48;
    }
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (bVar4) {
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x10,lVar3,iVar1);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454426c FUN_14454426c body=224 status=ok
// SIG undefined FUN_14454426c(void)

bool FUN_14454426c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30 [2];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = (longlong *)0x0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                    (*(longlong **)(param_1 + 0x20),puVar3,&local_20);
  if (iVar1 < 0) {
    local_38 = 0xb2;
    FUN_140002266(local_30,L"%s -> 0x%X (line: %d)",L"IMMDeviceEnumerator::GetDevice",iVar1);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar2 = (longlong *)*param_3;
    if (plVar2 != local_20) {
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 8))();
        plVar2 = (longlong *)*param_3;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      *param_3 = (longlong)local_20;
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return -1 < iVar1;
}



// FUNCTION 14454434e FUN_14454434e body=1235 status=ok
// SIG undefined FUN_14454434e(void)

ulonglong FUN_14454434e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong local_a0;
  longlong local_98;
  LPVOID local_90;
  longlong *local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  local_88 = (longlong *)0x0;
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar5 < 0) {
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x119);
    FUN_140002266(&local_78,L"%s -> 0x%X (line: %d)",L"IMMDevice::GetId",iVar5);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    iVar11 = 0;
    lVar8 = 0;
  }
  else {
    FUN_140056680(&local_78,local_88);
    lVar8 = local_78;
    iVar11 = (int)uStack_70;
    CoTaskMemFree(local_88);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (iVar5 < 0) {
    uVar7 = 0;
    goto LAB_1445447cd;
  }
  plVar1 = (longlong *)*param_1;
  local_98 = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  local_58 = (longlong *)0x0;
  iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,0,&local_58);
  local_a0 = lVar8;
  if (iVar5 < 0) {
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x129);
    FUN_140002266(&local_78,L"%s -> 0x%X (line: %d)",L"IMMDevice::OpenPropertyStore",iVar5);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    iVar5 = 0;
    plVar9 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    iVar5 = (**(code **)(*local_58 + 0x28))(local_58,&DAT_14ab42320);
    bVar2 = iVar5 >= 0;
    if (iVar5 < 0) {
      local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x135);
      FUN_140002266(&local_88,L"%s -> 0x%X (line: %d)",L"IPropertyStore::GetValue",iVar5);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar5 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      FUN_140056680(&local_88,uStack_70);
      plVar9 = local_88;
      PropVariantClear((PROPVARIANT *)&local_78);
      iVar5 = local_80;
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (bVar2) {
    local_58 = (longlong *)0x0;
    local_a8 = &local_58;
    iVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,&DAT_14ab44250,1,0);
    plVar4 = local_58;
    if (iVar6 < 0) {
      local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0xf4);
      FUN_140002266(&local_78,L"%s -> 0x%X (line: %d)",L"IAudioClient3::Activate",iVar6);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      goto LAB_144544710;
    }
    local_90 = (LPVOID)0x0;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))(local_58);
    }
    iVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_90);
    uVar7 = CONCAT71((int7)((ulonglong)plVar1 >> 8),-1 < iVar6);
    if (-1 >= iVar6) {
      local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x165);
      FUN_140002266(&local_78,L"%s -> 0x%X (line: %d)",L"IAudioClient3::GetMixFormat",iVar6);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    lVar3 = local_98;
    lVar8 = local_a0;
    if (-1 < iVar6) {
      iVar6 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(local_98,local_a0,iVar6);
      iVar11 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar11 = 0;
      }
      FUN_1402980a2(lVar3 + 0x10,plVar9,iVar11);
      *(uint *)(lVar3 + 0x28) = (uint)*(ushort *)((longlong)local_90 + 0xe);
      *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)((longlong)local_90 + 4);
      plVar1 = (longlong *)*param_1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      local_88 = (longlong *)0x0;
      iVar5 = (**(code **)*plVar1)(plVar1,&DAT_14ab42478);
      if (iVar5 < 0) {
        local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x15a);
        pwVar10 = L"IMMDevice::QueryInterface";
LAB_144544748:
        FUN_140002266(&local_78,L"%s -> 0x%X (line: %d)",pwVar10,iVar5);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
LAB_144544765:
        iVar5 = 0;
      }
      else {
        local_4c = 0;
        iVar5 = (**(code **)(*local_88 + 0x18))();
        if (iVar5 < 0) {
          local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x155);
          pwVar10 = L"IMMEndpoint::GetDataFlow";
          goto LAB_144544748;
        }
        if (local_4c != 0) {
          if (local_4c == 1) {
            iVar5 = 2;
            goto LAB_144544767;
          }
          goto LAB_144544765;
        }
        iVar5 = 1;
      }
LAB_144544767:
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      *(int *)(lVar3 + 0x30) = iVar5;
      if (iVar5 == 1) {
        *(uint *)(lVar3 + 0x24) = (uint)*(ushort *)((longlong)local_90 + 2);
      }
      else if (iVar5 == 2) {
        *(uint *)(lVar3 + 0x20) = (uint)*(ushort *)((longlong)local_90 + 2);
      }
      CoTaskMemFree(local_90);
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  else {
LAB_144544710:
    uVar7 = 0;
    lVar8 = local_a0;
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_1400020a8(plVar9);
  }
LAB_1445447cd:
  if (lVar8 != 0) {
    FUN_1400020a8(lVar8);
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 144544822 FUN_144544822 body=350 status=ok
// SIG undefined FUN_144544822(void)

void FUN_144544822(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  LPVOID local_40;
  longlong *local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),param_3,1);
  if (iVar1 < 0) {
    local_48 = 0x6e;
    FUN_140002266(&local_30,L"%s -> 0x%X (line: %d)",L"IMMDeviceCollection::EnumAudioEndpoints",
                  iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_38 = (longlong *)0x0;
    iVar1 = (**(code **)(*local_20 + 0x20))(local_20,param_2);
    if (-1 < iVar1) {
      local_40 = (LPVOID)0x0;
      iVar1 = (**(code **)(*local_38 + 0x28))(local_38,&local_40);
      if (local_40 != (LPVOID)0x0 && -1 < iVar1) {
        FUN_140056680(&local_30);
        if (&local_30 == param_4) {
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_4 != 0) {
            FUN_1400020a8();
          }
          *param_4 = local_30;
          local_30 = 0;
          *(undefined4 *)(param_4 + 1) = local_28;
          *(undefined4 *)((longlong)param_4 + 0xc) = local_24;
        }
        CoTaskMemFree(local_40);
      }
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144544982 FUN_144544982 body=664 status=ok
// SIG undefined FUN_144544982(void)

undefined4 FUN_144544982(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong *local_78;
  uint local_6c;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = (longlong *)0x0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),1,1);
  if (iVar4 < 0) {
    local_d8 = 0xc0;
    FUN_140002266(&local_b8,L"%s -> 0x%X (line: %d)",L"IMMDeviceCollection::EnumAudioEndpoints",
                  iVar4);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    uVar8 = 0;
  }
  else {
    plVar5 = local_68;
    iVar4 = (**(code **)(*local_68 + 0x18))(local_68,&local_6c);
    local_c4 = (undefined4)CONCAT71((int7)((ulonglong)plVar5 >> 8),iVar4 >= 0);
    if (iVar4 < 0) {
      local_d8 = 200;
      FUN_140002266(&local_b8,L"%s -> 0x%X (line: %d)",L"IMMDeviceCollection::GetCount",iVar4);
      uVar8 = local_c4;
      if (local_b8 != 0) {
        FUN_1400020a8();
        uVar8 = local_c4;
      }
    }
    else {
      uVar8 = local_c4;
      if (local_6c != 0) {
        uVar7 = 0;
        do {
          local_78 = (longlong *)0x0;
          iVar4 = (**(code **)(*local_68 + 0x20))(local_68,uVar7,&local_78);
          if (-1 < iVar4) {
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_88 = 0;
            local_c0 = local_78;
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 8))();
            }
            cVar3 = FUN_14454434e(&local_c0,&local_b8);
            if (cVar3 != '\0') {
              iVar4 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                FUN_14954a644(param_2,iVar4);
              }
              lVar2 = *param_2;
              lVar6 = (longlong)iVar4 * 0x38;
              *(undefined8 *)(lVar2 + lVar6) = 0;
              *(longlong *)(lVar2 + lVar6) = local_b8;
              local_b8 = 0;
              *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)uStack_b0;
              *(undefined4 *)(lVar2 + 0xc + lVar6) = uStack_b0._4_4_;
              uStack_b0 = 0;
              *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0;
              *(longlong *)(lVar2 + 0x10 + lVar6) = local_a8;
              local_a8 = 0;
              *(undefined4 *)(lVar2 + 0x18 + lVar6) = (undefined4)uStack_a0;
              *(undefined4 *)(lVar2 + 0x1c + lVar6) = uStack_a0._4_4_;
              uStack_a0 = 0;
              *(undefined4 *)(lVar2 + 0x30 + lVar6) = local_88;
              puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar6);
              *puVar1 = (undefined4)local_98;
              puVar1[1] = local_98._4_4_;
              puVar1[2] = (undefined4)uStack_90;
              puVar1[3] = uStack_90._4_4_;
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          uVar7 = uVar7 + 1;
          uVar8 = local_c4;
        } while (uVar7 < local_6c);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 144544c1c FUN_144544c1c body=1177 status=ok
// SIG undefined FUN_144544c1c(void)

undefined8 *
FUN_144544c1c(undefined8 *param_1,longlong *param_2,undefined8 *param_3,uint param_4,
             longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  int iVar15;
  longlong lVar16;
  HANDLE pvVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  undefined1 auStack_108 [32];
  longlong **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 2) = 0x2fffe;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x2b1100000ac44;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10001600100004;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x100000;
  *(undefined4 *)(param_1 + 6) = 0xaa000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x719b3800;
  uVar14 = FUN_147e14bc0(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = uVar14;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_e8 = &local_b0;
  local_b0 = (longlong *)0x0;
  iVar15 = (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&DAT_14ab44250,1,0);
  if (iVar15 < 0) {
    local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x19);
    pwVar19 = L"IMMDevice::Activate";
  }
  else {
    local_b8 = 0;
    iVar15 = (**(code **)(*local_b0 + 0x40))();
    if (iVar15 < 0) {
      local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x21);
      pwVar19 = L"IAudioClient3::GetMixFormat";
    }
    else {
      local_c0 = 0;
      iVar15 = (**(code **)(*local_b0 + 0x48))();
      if (iVar15 < 0) {
        local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x29);
        pwVar19 = L"IAudioClient3::GetDevicePeriod";
      }
      else {
        lVar16 = (longlong)
                 (((double)param_4 / (double)*(uint *)((longlong)param_3 + 4)) * 10000000.0);
        lVar20 = local_c0;
        if (local_c0 < lVar16) {
          lVar20 = lVar16;
        }
        local_d8 = 0;
        local_e8 = (longlong **)0x0;
        local_e0 = param_3;
        iVar15 = (**(code **)(*local_b0 + 0x18))(local_b0,0,0x40000,lVar20);
        if (iVar15 < 0) {
          local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x38);
          pwVar19 = L"IAudioClient3::Initialize";
        }
        else {
          iVar15 = (**(code **)(*local_b0 + 0x20))(local_b0,(longlong)param_1 + 0x3c);
          if (iVar15 < 0) {
            local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x3f);
            pwVar19 = L"IAudioClient3::GetBufferSize";
          }
          else {
            pvVar17 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            param_1[9] = pvVar17;
            if (pvVar17 == (HANDLE)0x0) {
              local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x48);
              pwVar19 = L"CreateEvent";
            }
            else {
              iVar15 = (**(code **)(*local_b0 + 0x68))(local_b0,pvVar17);
              if (-1 < iVar15) {
                local_c8 = (longlong *)0x0;
                iVar15 = (**(code **)(*local_b0 + 0x70))(local_b0,&DAT_14bd3c8b8);
                if (iVar15 < 0) {
                  local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x57);
                  FUN_140002266(&local_a8,L"%s -> 0x%X (line: %d)",L"IAudioClient3::GetService",
                                iVar15);
                  if (local_a8 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  plVar18 = (longlong *)*param_1;
                  if (plVar18 != local_b0) {
                    if (plVar18 != (longlong *)0x0) {
                      (**(code **)(*plVar18 + 0x10))();
                    }
                    *param_1 = local_b0;
                    local_b0 = (longlong *)0x0;
                  }
                  plVar18 = (longlong *)param_1[1];
                  if (plVar18 != local_c8) {
                    if (plVar18 != (longlong *)0x0) {
                      (**(code **)(*plVar18 + 0x10))();
                    }
                    param_1[1] = local_c8;
                    local_c8 = (longlong *)0x0;
                  }
                  uVar1 = *param_3;
                  uVar2 = param_3[1];
                  uVar3 = param_3[2];
                  uVar4 = param_3[3];
                  uVar5 = *(undefined8 *)((longlong)param_3 + 0x21);
                  *(undefined8 *)((longlong)param_1 + 0x29) =
                       *(undefined8 *)((longlong)param_3 + 0x19);
                  *(undefined8 *)((longlong)param_1 + 0x31) = uVar5;
                  param_1[4] = uVar3;
                  param_1[5] = uVar4;
                  param_1[2] = uVar1;
                  param_1[3] = uVar2;
                  lVar20 = param_1[10];
                  uVar1 = param_1[0xb];
                  uVar2 = param_1[0xc];
                  uVar3 = param_1[0xd];
                  uVar4 = param_1[0xe];
                  uVar5 = param_1[0xf];
                  uVar6 = param_1[0x10];
                  uVar7 = param_1[0x11];
                  lVar16 = *param_5;
                  lVar8 = param_5[1];
                  lVar9 = param_5[2];
                  lVar10 = param_5[3];
                  lVar11 = param_5[4];
                  lVar12 = param_5[5];
                  lVar13 = param_5[7];
                  param_1[0x10] = param_5[6];
                  param_1[0x11] = lVar13;
                  param_1[0xe] = lVar11;
                  param_1[0xf] = lVar12;
                  param_1[0xc] = lVar9;
                  param_1[0xd] = lVar10;
                  param_1[10] = lVar16;
                  param_1[0xb] = lVar8;
                  local_a8._0_4_ = (undefined4)lVar20;
                  local_a8._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
                  uStack_a0._0_4_ = (undefined4)uVar1;
                  uStack_a0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
                  local_98._0_4_ = (undefined4)uVar2;
                  local_98._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
                  uStack_90._0_4_ = (undefined4)uVar3;
                  uStack_90._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                  local_88._0_4_ = (undefined4)uVar4;
                  local_88._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                  uStack_80._0_4_ = (undefined4)uVar5;
                  uStack_80._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                  local_78._0_4_ = (undefined4)uVar6;
                  local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                  uStack_70._0_4_ = (undefined4)uVar7;
                  uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
                  *(undefined4 *)(param_5 + 6) = (undefined4)local_78;
                  *(undefined4 *)((longlong)param_5 + 0x34) = local_78._4_4_;
                  *(undefined4 *)(param_5 + 7) = (undefined4)uStack_70;
                  *(undefined4 *)((longlong)param_5 + 0x3c) = uStack_70._4_4_;
                  *(undefined4 *)(param_5 + 4) = (undefined4)local_88;
                  *(undefined4 *)((longlong)param_5 + 0x24) = local_88._4_4_;
                  *(undefined4 *)(param_5 + 5) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)param_5 + 0x2c) = uStack_80._4_4_;
                  *(undefined4 *)(param_5 + 2) = (undefined4)local_98;
                  *(undefined4 *)((longlong)param_5 + 0x14) = local_98._4_4_;
                  *(undefined4 *)(param_5 + 3) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)param_5 + 0x1c) = uStack_90._4_4_;
                  *(undefined4 *)param_5 = (undefined4)local_a8;
                  *(undefined4 *)((longlong)param_5 + 4) = local_a8._4_4_;
                  *(undefined4 *)(param_5 + 1) = (undefined4)uStack_a0;
                  *(undefined4 *)((longlong)param_5 + 0xc) = uStack_a0._4_4_;
                  local_a8 = lVar20;
                  uStack_a0 = uVar1;
                  local_98 = uVar2;
                  uStack_90 = uVar3;
                  local_88 = uVar4;
                  uStack_80 = uVar5;
                  local_78 = uVar6;
                  uStack_70 = uVar7;
                  FUN_1401211f6(param_1 + 0x12,
                                (uint)(*(ushort *)((longlong)param_1 + 0x1e) >> 3) *
                                (uint)*(ushort *)((longlong)param_1 + 0x12) *
                                *(int *)((longlong)param_1 + 0x3c),0);
                  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
                }
                if (local_c8 != (longlong *)0x0) {
                  (**(code **)(*local_c8 + 0x10))();
                }
                goto LAB_144544f9c;
              }
              local_e8 = (longlong **)CONCAT44(local_e8._4_4_,0x4f);
              pwVar19 = L"IAudioClient3::SetEventHandle";
            }
          }
        }
      }
    }
  }
  FUN_140002266(&local_a8,L"%s -> 0x%X (line: %d)",pwVar19,iVar15);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_144544f9c:
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_5 != 0) {
    plVar18 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar18 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1445450b6 FUN_1445450b6 body=42 status=ok
// SIG undefined FUN_1445450b6(void)

void FUN_1445450b6(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  (**(code **)(*(longlong *)*param_1 + 0x70))
            ((longlong *)*param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}



// FUNCTION 14454510a FUN_14454510a body=29 status=ok
// SIG undefined FUN_14454510a(void)

undefined8 FUN_14454510a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144545127 FUN_144545127 body=102 status=ok
// SIG undefined FUN_144545127(void)

void FUN_144545127(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd3c4b0;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14673fc0a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144545190 FUN_144545190 body=128 status=ok
// SIG undefined FUN_144545190(void)

longlong * FUN_144545190(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = 0;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  FUN_14954a9e8();
  lVar1 = local_48;
  lVar4 = lStack_40 - local_48;
  for (uVar3 = 0; uVar3 < (ulonglong)(lVar4 >> 2); uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_14954aa50(param_1,*(undefined4 *)(lVar1 + uVar3 * 4));
    if ((longlong *)*param_1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*(longlong *)*param_1 + 0x10))();
      if (iVar2 != 0) break;
    }
  }
  FUN_1495504fc(&local_48);
  return param_1;
}



// FUNCTION 144545210 Unwind@144545210 body=40 status=ok
// SIG undefined Unwind@144545210(void)

void Unwind_144545210(undefined8 param_1,longlong param_2)

{
  FUN_1495504fc(param_2 + 0x20);
  return;
}



// FUNCTION 144545238 FUN_144545238 body=504 status=ok
// SIG undefined FUN_144545238(void)

ulonglong FUN_144545238(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined2 *puVar7;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined8 **local_d8 [3];
  ulonglong local_c0;
  undefined8 **local_b8 [3];
  ulonglong local_a0;
  undefined4 local_94;
  undefined1 local_88 [24];
  undefined4 local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  iVar4 = FUN_14454552a();
  if (param_3 != -1) {
    iVar4 = param_3;
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
            (*(longlong **)(param_1 + 0x58),local_e0,iVar4);
  pppuVar6 = local_d8;
  if (0xf < local_c0) {
    pppuVar6 = (undefined8 ***)local_d8[0];
  }
  FUN_149551118(&local_1f8,pppuVar6);
  FUN_14006620a(&local_68,local_f0,local_e8);
  uVar3 = local_5c;
  iVar2 = local_60;
  lVar1 = local_68;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  *param_2 = lVar1;
  *(int *)(param_2 + 1) = iVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  pppuVar6 = local_b8;
  if (0xf < local_a0) {
    pppuVar6 = (undefined8 ***)local_b8[0];
  }
  FUN_149551118(&local_1f8,pppuVar6);
  FUN_14006620a(&local_68,local_f0,local_e8);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  param_2[2] = local_68;
  *(int *)(param_2 + 3) = local_60;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_5c;
  if (local_f8 != 0) {
    FUN_1400020a8();
    local_60 = (int)param_2[3];
  }
  *(undefined4 *)(param_2 + 4) = local_94;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_70;
  if (local_60 < 2) {
    if ((int)param_2[1] == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_1f8,L"%s_%d",puVar7,iVar4);
    if (param_2 + 2 == &local_1f8) {
      if (local_1f8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = local_1f8;
      local_1f8 = 0;
      *(undefined4 *)(param_2 + 3) = local_1f0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_1ec;
    }
  }
  FUN_148276cee(local_88);
  FUN_1401d9a90(local_b8);
  uVar5 = FUN_1401d9a90(local_d8);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1) & 0xffffffff;
}



// FUNCTION 144545430 Unwind@144545430 body=82 status=ok
// SIG undefined Unwind@144545430(void)

void Unwind_144545430(undefined8 param_1,longlong param_2)

{
  FUN_148276cee(param_2 + 400);
  FUN_1401d9a90(param_2 + 0x160);
  FUN_1401d9a90(param_2 + 0x140);
  return;
}



// FUNCTION 144545482 Catch@144545482 body=106 status=ok
// SIG undefined Catch@144545482(void)

undefined8 Catch_144545482(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x1d0) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x1b0),uVar1);
  if (*(longlong *)(param_2 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x1c4) = 0;
  return 0x144545416;
}



// FUNCTION 1445454ec Catch_All@1445454ec body=62 status=ok
// SIG undefined Catch_All@1445454ec(void)

undefined8 Catch_All_1445454ec(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x1c4) = 0;
  return 0x144545416;
}



// FUNCTION 14454552a FUN_14454552a body=42 status=ok
// SIG undefined FUN_14454552a(void)

undefined4 FUN_14454552a(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
  return uVar1;
}



// FUNCTION 144545554 Catch@144545554 body=74 status=ok
// SIG undefined Catch@144545554(void)

undefined8 Catch_144545554(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  return 0x14454554a;
}



// FUNCTION 14454559e Catch_All@14454559e body=36 status=ok
// SIG undefined Catch_All@14454559e(void)

undefined8 Catch_All_14454559e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  return 0x14454554a;
}



// FUNCTION 1445455c2 FUN_1445455c2 body=599 status=ok
// SIG undefined FUN_1445455c2(void)

undefined4 FUN_1445455c2(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
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
  int iVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128;
  undefined1 local_120 [36];
  int local_fc;
  undefined1 local_f0 [24];
  int local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_68 = 0xfffffffffffffffe;
  local_78 = param_3;
  iVar18 = FUN_14454552a();
  if (*(int *)(param_2 + 4) != -1) {
    iVar19 = (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    iVar18 = 0;
    if (iVar19 != 0) {
      iVar21 = 0;
      do {
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        (**(code **)(*param_1 + 0x18))(param_1,&local_148,iVar18);
        if (0 < local_128) {
          if (iVar21 == *(int *)(param_2 + 4)) {
            FUN_14954a8da(&local_148);
            goto LAB_1445456bd;
          }
          iVar21 = iVar21 + 1;
        }
        FUN_14954a8da(&local_148);
        iVar18 = iVar18 + 1;
      } while (iVar19 != iVar18);
    }
    local_6c = 0;
    goto LAB_14454566c;
  }
LAB_1445456bd:
  (**(code **)(*(longlong *)param_1[0xb] + 0x18))((longlong *)param_1[0xb],&local_148,iVar18);
  local_80 = 0;
  iVar19 = 8;
  if (local_fc < 8) {
    iVar19 = local_fc;
  }
  if (*(int *)(param_2 + 8) != -1) {
    iVar19 = *(int *)(param_2 + 8);
  }
  local_88 = iVar18;
  local_84 = iVar19;
  if (*(int *)(param_1[0xb] + 300) != -0x32) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x40))();
    (**(code **)(*(longlong *)param_1[0xb] + 0x30))();
  }
  *(int *)(param_1 + 10) = iVar19;
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = param_1[4];
  lVar6 = param_1[5];
  lVar7 = param_1[6];
  lVar8 = param_1[7];
  lVar9 = param_1[8];
  lVar10 = param_1[9];
  lVar11 = *local_78;
  lVar12 = local_78[1];
  lVar13 = local_78[2];
  lVar14 = local_78[3];
  lVar15 = local_78[4];
  lVar16 = local_78[5];
  lVar17 = local_78[7];
  param_1[8] = local_78[6];
  param_1[9] = lVar17;
  param_1[6] = lVar15;
  param_1[7] = lVar16;
  param_1[4] = lVar13;
  param_1[5] = lVar14;
  param_1[2] = lVar11;
  param_1[3] = lVar12;
  local_c8._0_4_ = (undefined4)lVar3;
  local_c8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_c0._0_4_ = (undefined4)lVar4;
  uStack_c0._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_b8._0_4_ = (undefined4)lVar5;
  local_b8._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_b0._0_4_ = (undefined4)lVar6;
  uStack_b0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_a8._0_4_ = (undefined4)lVar7;
  local_a8._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_a0._0_4_ = (undefined4)lVar8;
  uStack_a0._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  local_98._0_4_ = (undefined4)lVar9;
  local_98._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_90._0_4_ = (undefined4)lVar10;
  uStack_90._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  *(undefined4 *)(local_78 + 6) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_78 + 0x34) = local_98._4_4_;
  *(undefined4 *)(local_78 + 7) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_90._4_4_;
  *(undefined4 *)(local_78 + 4) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_78 + 0x24) = local_a8._4_4_;
  *(undefined4 *)(local_78 + 5) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)local_78 + 0x2c) = uStack_a0._4_4_;
  *(undefined4 *)(local_78 + 2) = (undefined4)local_b8;
  *(undefined4 *)((longlong)local_78 + 0x14) = local_b8._4_4_;
  *(undefined4 *)(local_78 + 3) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)local_78 = (undefined4)local_c8;
  *(undefined4 *)((longlong)local_78 + 4) = local_c8._4_4_;
  *(undefined4 *)(local_78 + 1) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)local_78 + 0xc) = uStack_c0._4_4_;
  iVar18 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0xc) == -1) {
    iVar18 = local_d8;
  }
  *(int *)((longlong)param_1 + 0x54) = iVar18;
  bVar1 = *(byte *)(param_2 + 0x10);
  local_c8 = lVar3;
  uStack_c0 = lVar4;
  local_b8 = lVar5;
  uStack_b0 = lVar6;
  local_a8 = lVar7;
  uStack_a0 = lVar8;
  uStack_90 = lVar10;
  local_7c = param_4;
  if (((ulonglong)bVar1 < 8) && ((0xefU >> (bVar1 & 0x1f) & 1) != 0)) {
    uVar2 = (undefined4)local_98;
    local_98 = lVar9;
    FUN_14954ab24(param_1[0xb],&local_88,*(undefined4 *)(&DAT_14bd3d7f0 + (ulonglong)bVar1 * 4),
                  uVar2,&local_7c,param_1);
    lVar9 = local_98;
    if (*(int *)(param_1[0xb] + 300) == -0x32) goto LAB_1445457dc;
    uVar2 = *(undefined4 *)(param_1[0xb] + 0x150);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
    local_6c = (undefined4)CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
  }
  else {
LAB_1445457dc:
    local_98 = lVar9;
    local_6c = 0;
  }
  FUN_148276cee(local_f0);
  FUN_1401d9a90(local_120);
  FUN_1401d9a90(&uStack_140);
LAB_14454566c:
  if (*local_78 != 0) {
    plVar20 = local_78 + 4;
    if ((longlong *)local_78[2] != (longlong *)0x0) {
      plVar20 = (longlong *)local_78[2];
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return local_6c;
}



// FUNCTION 14454581a Unwind@14454581a body=64 status=ok
// SIG undefined Unwind@14454581a(void)

void Unwind_14454581a(undefined8 param_1,longlong param_2)

{
  FUN_14954a8da(param_2 + 0x30);
  return;
}



// FUNCTION 14454585a Unwind@14454585a body=82 status=ok
// SIG undefined Unwind@14454585a(void)

void Unwind_14454585a(undefined8 param_1,longlong param_2)

{
  FUN_148276cee(param_2 + 0x88);
  FUN_1401d9a90(param_2 + 0x58);
  FUN_1401d9a90(param_2 + 0x38);
  return;
}



// FUNCTION 1445458ac Catch@1445458ac body=113 status=ok
// SIG undefined Catch@1445458ac(void)

undefined8 Catch_1445458ac(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x118) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0xb0),uVar1);
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x10c) = 0;
  return 0x14454566c;
}



// FUNCTION 14454591e Catch_All@14454591e body=72 status=ok
// SIG undefined Catch_All@14454591e(void)

undefined8 Catch_All_14454591e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x10c) = 0;
  return 0x14454566c;
}



// FUNCTION 144545966 Unwind@144545966 body=38 status=ok
// SIG undefined Unwind@144545966(void)

void Unwind_144545966(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14454598e Unwind@14454598e body=96 status=ok
// SIG undefined Unwind@14454598e(void)

void Unwind_14454598e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (**(longlong **)(param_2 + 0x100) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x100) + 0x10);
    plVar2 = (longlong *)(*(longlong *)(param_2 + 0x100) + 0x20);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}



// FUNCTION 1445459ee FUN_1445459ee body=32 status=ok
// SIG undefined FUN_1445459ee(void)

undefined8 FUN_1445459ee(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x70))();
  return 0;
}



// FUNCTION 144545a0e FUN_144545a0e body=62 status=ok
// SIG undefined FUN_144545a0e(void)

bool FUN_144545a0e(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)((longlong)*(longlong **)(param_1 + 0x58) + 300) != -0x32;
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  }
  return bVar1;
}



// FUNCTION 144545a4c Catch@144545a4c body=74 status=ok
// SIG undefined Catch@144545a4c(void)

undefined8 Catch_144545a4c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545a42;
}



// FUNCTION 144545a96 Catch_All@144545a96 body=36 status=ok
// SIG undefined Catch_All@144545a96(void)

undefined8 Catch_All_144545a96(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545a42;
}



// FUNCTION 144545aba FUN_144545aba body=44 status=ok
// SIG undefined FUN_144545aba(void)

undefined4 FUN_144545aba(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  return 1;
}



// FUNCTION 144545ae6 Catch@144545ae6 body=74 status=ok
// SIG undefined Catch@144545ae6(void)

undefined8 Catch_144545ae6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545adc;
}



// FUNCTION 144545b30 Catch_All@144545b30 body=36 status=ok
// SIG undefined Catch_All@144545b30(void)

undefined8 Catch_All_144545b30(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545adc;
}



// FUNCTION 144545b54 FUN_144545b54 body=62 status=ok
// SIG undefined FUN_144545b54(void)

bool FUN_144545b54(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)((longlong)*(longlong **)(param_1 + 0x58) + 300) != -0x32;
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))();
  }
  return bVar1;
}



// FUNCTION 144545b92 Catch@144545b92 body=74 status=ok
// SIG undefined Catch@144545b92(void)

undefined8 Catch_144545b92(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545b88;
}



// FUNCTION 144545bdc Catch_All@144545bdc body=36 status=ok
// SIG undefined Catch_All@144545bdc(void)

undefined8 Catch_All_144545bdc(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545b88;
}



// FUNCTION 144545c00 FUN_144545c00 body=62 status=ok
// SIG undefined FUN_144545c00(void)

bool FUN_144545c00(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)((longlong)*(longlong **)(param_1 + 0x58) + 300) != -0x32;
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))();
  }
  return bVar1;
}



// FUNCTION 144545c3e Catch@144545c3e body=74 status=ok
// SIG undefined Catch@144545c3e(void)

undefined8 Catch_144545c3e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545c34;
}



// FUNCTION 144545c88 Catch_All@144545c88 body=36 status=ok
// SIG undefined Catch_All@144545c88(void)

undefined8 Catch_All_144545c88(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545c34;
}



// FUNCTION 144545cac FUN_144545cac body=51 status=ok
// SIG undefined FUN_144545cac(void)

ulonglong FUN_144545cac(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))();
  *param_2 = extraout_XMM0_Qa;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1) & 0xffffffff;
}



// FUNCTION 144545ce0 Catch@144545ce0 body=74 status=ok
// SIG undefined Catch@144545ce0(void)

undefined8 Catch_144545ce0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545cd5;
}



// FUNCTION 144545d2a Catch_All@144545d2a body=36 status=ok
// SIG undefined Catch_All@144545d2a(void)

undefined8 Catch_All_144545d2a(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0x144545cd5;
}



// FUNCTION 144545d4e FUN_144545d4e body=235 status=ok
// SIG undefined FUN_144545d4e(void)

ulonglong FUN_144545d4e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  iVar2 = (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  uVar3 = FUN_1495511b4(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    uVar3 = FUN_1495511da(param_2);
  }
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,&local_98,iVar4);
      if (0 < local_78) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14954a41e(param_2,iVar1);
        }
        FUN_14955120a((longlong)iVar1 * 0x30 + *param_2,&local_98);
      }
      uVar3 = FUN_14954a8da(&local_98);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1) & 0xffffffff;
}



// FUNCTION 144545e3a Unwind@144545e3a body=60 status=ok
// SIG undefined Unwind@144545e3a(void)

void Unwind_144545e3a(undefined8 param_1,longlong param_2)

{
  FUN_14954a8da(param_2 + 0x30);
  return;
}



// FUNCTION 144545e76 Catch@144545e76 body=103 status=ok
// SIG undefined Catch@144545e76(void)

undefined8 Catch_144545e76(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x78) + 8))();
  FUN_1400b22c2((longlong *)(param_2 + 0x20),uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x6c) = 0;
  return 0x144545e20;
}



// FUNCTION 144545ede Catch_All@144545ede body=65 status=ok
// SIG undefined Catch_All@144545ede(void)

undefined8 Catch_All_144545ede(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x6c) = 0;
  return 0x144545e20;
}



// FUNCTION 144545f1f FUN_144545f1f body=659 status=ok
// SIG undefined FUN_144545f1f(void)

undefined8 FUN_144545f1f(longlong param_1,LPCWSTR param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  longlong ******lpMultiByteStr;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *****local_98;
  longlong *local_90;
  longlong *****local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_4 + 8);
  if (*param_4 == '\x01') {
    iVar4 = Ordinal_6(param_1,&local_88,0);
    if (iVar4 != 0) {
      return 1;
    }
    local_f8 = CONCAT44(local_f8._4_4_,0x10);
    iVar4 = (*(code *)(*local_88)[4])();
    if (iVar4 != 0) {
      bVar9 = false;
      goto LAB_144545ff1;
    }
    bVar9 = local_f0._4_4_ != 0;
    uVar3 = (uint)local_f0;
  }
  else {
    iVar4 = Ordinal_1(param_1,&local_88,0);
    if (iVar4 != 0) {
      return 1;
    }
    local_f8 = CONCAT44(local_f8._4_4_,0x60);
    iVar4 = (*(code *)(*local_88)[4])(local_88,&local_f8);
    bVar9 = iVar4 == 0;
    uVar3 = local_f8._4_4_ & 3;
  }
  bVar9 = (bool)(uVar3 != 0 & bVar9);
LAB_144545ff1:
  (*(code *)(*local_88)[2])();
  iVar4 = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_88 = (longlong *****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14709ec14(&local_88,0,(longlong)(iVar4 + -1));
  lpMultiByteStr = &local_88;
  if (0xf < uStack_70) {
    lpMultiByteStr = (longlong ******)local_88;
  }
  WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)lpMultiByteStr,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
  if (param_1 == 0) {
    FUN_1401d7cf8(&local_88,"Default Device");
  }
  _Size = local_78;
  if (bVar9) {
    lVar2 = *plVar1;
    local_90 = plVar1;
    if (plVar1[1] - lVar2 != 0) {
      local_98 = local_88;
      if (uStack_70 < 0x10) {
        local_98 = (longlong *****)&local_88;
      }
      uVar7 = (plVar1[1] - lVar2 >> 3) * 0x6db6db6db6db6db7;
      uVar5 = 0;
      uVar8 = 1;
      do {
        lVar6 = uVar5 * 0x38;
        if (*(size_t *)(lVar2 + 0x28 + lVar6) == _Size) {
          _Buf1 = (undefined8 *)(lVar2 + lVar6 + 0x18);
          if (0xf < *(ulonglong *)(lVar2 + lVar6 + 0x30)) {
            _Buf1 = (undefined8 *)*_Buf1;
          }
          iVar4 = memcmp(_Buf1,local_98,_Size);
          if (iVar4 == 0) {
            *(undefined1 *)(lVar2 + 0x12 + lVar6) = 1;
            if (*param_4 == '\x01') {
              *(longlong *)(*local_90 + 8 + lVar6) = param_1;
              *(undefined1 *)(*local_90 + 0x11 + lVar6) = 1;
            }
            else {
              *(longlong *)(*local_90 + lVar6) = param_1;
              *(undefined1 *)(*local_90 + 0x10 + lVar6) = 1;
            }
            goto LAB_144546175;
          }
        }
        bVar9 = uVar8 <= uVar7;
        lVar6 = uVar7 - uVar8;
        uVar5 = uVar8;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while (bVar9 && lVar6 != 0);
    }
    local_e6 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0xf;
    local_e8 = 0;
    FUN_1401d7e14(&local_e0,&local_88);
    local_e6 = 1;
    if (*param_4 == '\x01') {
      local_e8 = CONCAT11(1,(undefined1)local_e8);
      local_f0 = param_1;
    }
    else {
      local_e8 = CONCAT11(local_e8._1_1_,1);
      local_f8 = param_1;
    }
    FUN_149550cf4(local_90,&local_f8);
    FUN_1401d9a90(&local_e0);
  }
LAB_144546175:
  FUN_1401d9a90(&local_88);
  return 1;
}



// FUNCTION 1445461b2 Unwind@1445461b2 body=64 status=ok
// SIG undefined Unwind@1445461b2(void)

void Unwind_1445461b2(undefined8 param_1,longlong param_2)

{
  FUN_1401d9a90(param_2 + 0x58);
  return;
}



// FUNCTION 1445461f2 Unwind@1445461f2 body=64 status=ok
// SIG undefined Unwind@1445461f2(void)

void Unwind_1445461f2(undefined8 param_1,longlong param_2)

{
  FUN_1401d9a90(param_2 + 0xb0);
  return;
}



// FUNCTION 144546232 FUN_144546232 body=332 status=ok
// SIG undefined FUN_144546232(void)

char * FUN_144546232(int param_1)

{
  if (param_1 < -0x7787ffce) {
    if (param_1 < -0x7ff8fff2) {
      if (param_1 == -0x7fffbfff) {
        return "Not supported";
      }
      if (param_1 == -0x7fffbffb) {
        return "Generic error";
      }
      if (param_1 == -0x7ffbfef0) {
        return "No aggregation";
      }
    }
    else if (param_1 < -0x7787fff6) {
      if (param_1 == -0x7ff8fff2) {
        return "Out of memory";
      }
      if (param_1 == -0x7ff8ffa9) {
        return "Invalid parameter";
      }
    }
    else {
      if (param_1 == -0x7787fff6) {
        return "Already allocated";
      }
      if (param_1 == -0x7787ffe2) {
        return "Control unavailable";
      }
    }
  }
  else if (param_1 < -0x7787ff7e) {
    if (param_1 < -0x7787ff9c) {
      if (param_1 == -0x7787ffce) {
        return "Invalid call";
      }
      if (param_1 == -0x7787ffba) {
        return "Priority level needed";
      }
    }
    else {
      if (param_1 == -0x7787ff9c) {
        return "The sample rate or the channel format is not supported";
      }
      if (param_1 == -0x7787ff88) {
        return "No driver";
      }
    }
  }
  else if (param_1 < -0x7787ff60) {
    if (param_1 == -0x7787ff7e) {
      return "Already initialized";
    }
    if (param_1 == -0x7787ff6a) {
      return "Buffer lost";
    }
  }
  else {
    if (param_1 == -0x7787ff60) {
      return "Another application already has priority";
    }
    if (param_1 == -0x7787ff56) {
      return "Uninitialized";
    }
  }
  return "DirectSound unknown error";
}



// FUNCTION 14454637e FUN_14454637e body=204 status=ok
// SIG undefined FUN_14454637e(void)

undefined8 * FUN_14454637e(undefined8 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  char local_58 [40];
  
  if (param_2 == (undefined4 *)0x0) {
    local_58[0] = '\0';
  }
  else {
    FUN_14626ea25(local_58,0x27,"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",*param_2,
                  *(undefined2 *)(param_2 + 1),*(undefined2 *)((longlong)param_2 + 6),
                  *(undefined1 *)(param_2 + 2),*(undefined1 *)((longlong)param_2 + 9),
                  *(undefined1 *)((longlong)param_2 + 10),*(undefined1 *)((longlong)param_2 + 0xb),
                  *(undefined1 *)(param_2 + 3),*(undefined1 *)((longlong)param_2 + 0xd),
                  *(undefined1 *)((longlong)param_2 + 0xe),*(undefined1 *)((longlong)param_2 + 0xf))
    ;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  sVar1 = strlen(local_58);
  FUN_140cd1a74(param_1,local_58,sVar1);
  return param_1;
}



// FUNCTION 14454644a FUN_14454644a body=49 status=ok
// SIG undefined FUN_14454644a(void)

undefined8 FUN_14454644a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    uVar1 = *param_1;
    do {
      FUN_14954dfc0(uVar1);
    } while (*(char *)(param_1 + 6) != '\0');
  }
  _endthreadex(0);
  return 0;
}



// FUNCTION 14454647b FUN_14454647b body=102 status=ok
// SIG undefined FUN_14454647b(void)

void FUN_14454647b(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd3cae0;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1460160a6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445464e4 FUN_1445464e4 body=66 status=ok
// SIG undefined FUN_1445464e4(void)

void FUN_1445464e4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_149551ea4(DAT_14c951640);
  cVar1 = FUN_149551d84();
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = uVar2;
  }
  *param_3 = uVar3;
  return;
}



// FUNCTION 144546526 FUN_144546526 body=282 status=ok
// SIG undefined FUN_144546526(void)

void FUN_144546526(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Audio",L"AudioCaptureModuleName");
  if (cVar1 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    puVar2 = local_28;
    if ((int)uStack_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_30,puVar2,1);
    FUN_1402c9134(&DAT_14c874628,local_30,local_14,0);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144546642 FUN_144546642 body=340 status=ok
// SIG undefined FUN_144546642(void)

ulonglong FUN_144546642(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58 [4];
  int local_38;
  int local_34;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x958);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_58,0xffffffff);
    if (cVar2 != '\0') {
      if (0 < local_34) {
        *param_2 = local_34;
      }
      *(int *)(param_1 + 0x8c8) = local_38;
      if (local_38 - 1U < 8) {
        uVar3 = FUN_14954902e(param_1 + 0x918);
        *(undefined1 *)(param_1 + 0x9b6) = uVar3;
        local_68 = 0;
        uStack_60 = 0;
        FUN_140056680(local_78,L"AudioCapture.AudioCaptureComponentInitialized");
        plVar1 = DAT_14cad8288;
        if (DAT_14cad8288 != (longlong *)0x0) {
          FUN_140ba7826(local_28,L"Audio.Usage.",local_78);
          (**(code **)(*plVar1 + 0xf0))(plVar1,local_28,&local_68);
          if (local_28[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        FUN_146b17e4e(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        goto LAB_1445466ae;
      }
    }
  }
  uVar4 = 0;
LAB_1445466ae:
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546798 FUN_144546798 body=497 status=ok
// SIG undefined FUN_144546798(void)

uint FUN_144546798(longlong param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((((*(char *)(param_1 + 0x9b6) == '\x01') &&
       (*(longlong **)(param_1 + 0x958) != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x958) + 0x60))(), cVar2 != '\0')) &&
     (*(char *)(param_1 + 0x999) != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x9a0);
    uVar4 = *(uint *)(param_1 + 0x9a8);
    if (uVar4 < 0x75301) {
      if (*(int *)(param_1 + 0x9b0) < 1) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x960));
        iVar3 = *(int *)(param_1 + 0x990);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x960));
        if (iVar3 < 0x401) goto LAB_144546967;
        uVar4 = *(uint *)(param_1 + 0x9a8);
      }
      iVar3 = *(int *)(param_1 + 0x9c0);
      uVar6 = 0;
      if ((int)uVar4 < (int)(iVar3 + param_3)) {
        uVar4 = uVar4 - iVar3;
        uVar6 = 0;
        if (0 < (int)uVar4) {
          if (479999 < iVar3 + param_3) {
            return param_3;
          }
          memcpy(param_2,(void *)((longlong)iVar3 * 4 + *plVar1),(ulonglong)uVar4 << 2);
          uVar6 = uVar4;
        }
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        if (*(int *)(param_1 + 0x9ac) < 0) {
          FUN_14482f6fa(plVar1,0);
        }
        FUN_144543690(param_1 + 0x918);
        *(undefined4 *)(param_1 + 0x9c0) = 0;
        uVar4 = *(uint *)(param_1 + 0x9a8);
        iVar3 = 0;
      }
      if (0 < (int)uVar4) {
        iVar5 = param_3 - uVar6;
        if ((int)(uVar4 - iVar3) <= (int)(param_3 - uVar6)) {
          iVar5 = uVar4 - iVar3;
        }
        if (479999 < (uint)(iVar5 + iVar3)) {
          return param_3;
        }
        memcpy((void *)((longlong)param_2 + (ulonglong)uVar6 * 4),
               (void *)((longlong)iVar3 * 4 + *(longlong *)(param_1 + 0x9a0)),(longlong)iVar5 * 4);
        *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + iVar5;
        uVar6 = iVar5 + uVar6;
      }
      *(int *)(param_1 + 0x9b0) = *(int *)(param_1 + 0x9b0) + uVar6;
      if (param_3 - uVar6 == 0 || (int)param_3 < (int)uVar6) {
        return uVar6;
      }
      memset((void *)((longlong)param_2 + (longlong)(int)uVar6 * 4),0,
             (longlong)(int)(param_3 - uVar6) << 2);
      return uVar6;
    }
    FUN_144543690(param_1 + 0x918);
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    if (*(int *)(param_1 + 0x9ac) < 0) {
      FUN_14482f6fa(plVar1);
    }
  }
LAB_144546967:
  memset(param_2,0,(longlong)(int)param_3 << 2);
  return param_3;
}



// FUNCTION 1445469e2 FUN_1445469e2 body=29 status=ok
// SIG undefined FUN_1445469e2(void)

undefined8 FUN_1445469e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144546a26 FUN_144546a26 body=29 status=ok
// SIG undefined FUN_144546a26(void)

undefined8 FUN_144546a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144546a43 FUN_144546a43 body=243 status=ok
// SIG undefined FUN_144546a43(void)

void FUN_144546a43(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AudioCapture",&PTR_FUN_14bd3e440,2,&PTR_FUN_14bd3e410);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AudioCapture",&PTR_FUN_14bd3eda0,1,&PTR_FUN_14bd3ed70);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/AudioCapture",&PTR_FUN_14bd3f560,1,0);
  local_48 = 0x800000014bd3f5b6;
  local_34 = 0xc;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146740204(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546b46 FUN_144546b46 body=47 status=ok
// SIG undefined FUN_144546b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144546b46(void)

{
  _DAT_14cc1ea70 = 0;
  if (DAT_14cc1ea68 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cc1ea28);
  return;
}



// FUNCTION 144546b86 FUN_144546b86 body=217 status=ok
// SIG undefined FUN_144546b86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144546b86(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd3fad0;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146740446(&local_28);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc1ea00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc1ea00,4000);
  atexit((_func_5014 *)&LAB_144546b38);
  _DAT_14cc1ea48 = 0;
  _DAT_14cc1ea50 = 0;
  _DAT_14cc1ea28 = 0;
  uRam000000014cc1ea30 = 0;
  _DAT_14cc1ea54 = 0xffffffff00000080;
  _DAT_14cc1ea5c = 0;
  DAT_14cc1ea68 = 0;
  _DAT_14cc1ea70 = 0;
  atexit(FUN_144546b46);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546c60 FUN_144546c60 body=289 status=ok
// SIG undefined FUN_144546c60(void)

void FUN_144546c60(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined4 local_18;
  uint uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x149f276d8;
  local_18 = 9;
  uStack_14 = uStack_14 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_20,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_20);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  plVar4 = (longlong *)CONCAT44(uStack_14,local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546d82 FUN_144546d82 body=289 status=ok
// SIG undefined FUN_144546d82(void)

void FUN_144546d82(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined4 local_18;
  uint uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x149f276d8;
  local_18 = 9;
  uStack_14 = uStack_14 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_20,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_20);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  plVar4 = (longlong *)CONCAT44(uStack_14,local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546ea4 FUN_144546ea4 body=311 status=ok
// SIG undefined FUN_144546ea4(void)

void FUN_144546ea4(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x149f276d8;
  local_28 = 9;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_30,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0xb0))(local_30,param_1,param_2);
  }
  plVar4 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144546fdc FUN_144546fdc body=379 status=ok
// SIG undefined FUN_144546fdc(void)

void FUN_144546fdc(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    FUN_144548e56(&local_50,param_3);
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1,param_2,&local_50);
    FUN_146b17e4e(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144547158 FUN_144547158 body=355 status=ok
// SIG undefined FUN_144547158(void)

void FUN_144547158(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_50;
  undefined4 local_48;
  uint uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (longlong *)0x149f276d8;
  local_48 = 9;
  uStack_44 = uStack_44 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_50,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_50,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_50);
  if (local_50 != (longlong *)0x0) {
    local_60 = param_5;
    local_68 = param_4;
    (**(code **)(*local_50 + 0xa0))(local_50,param_1,param_2,param_3);
  }
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445472bc FUN_1445472bc body=304 status=ok
// SIG undefined FUN_1445472bc(void)

void FUN_1445472bc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0xb8))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445473ee FUN_1445473ee body=365 status=ok
// SIG undefined FUN_1445473ee(void)

void FUN_1445473ee(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x149f276d8;
  local_30 = 9;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_38,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_38,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_38);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    FUN_144548e56(&local_48,param_2);
    (**(code **)(*plVar4 + 0xc0))(plVar4,param_1,&local_48);
    FUN_146b17e4e(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_2c,local_30);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454755c FUN_14454755c body=302 status=ok
// SIG undefined FUN_14454755c(void)

void FUN_14454755c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "Analytics";
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (char *)0x0) {
    FUN_1495d671c(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454768c FUN_14454768c body=460 status=ok
// SIG undefined FUN_14454768c(void)

void FUN_14454768c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  void *_Src;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  longlong local_60;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "Analytics";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar3 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar2,&local_70,1);
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_40);
  if (local_40 != 0) {
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 1);
    lVar4 = (longlong)local_78;
    _Src = (void *)*param_2;
    if (lVar4 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,_Src,lVar4 * 2);
    }
    FUN_146b280ea(&local_70,&local_80,param_3);
    FUN_1495d677a(local_40,param_1,&local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454785a FUN_14454785a body=362 status=ok
// SIG undefined FUN_14454785a(void)

void FUN_14454785a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x149f276d8;
  local_30 = 9;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_38,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_38,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_38);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    FUN_144548e56(&local_48,param_2);
    (**(code **)(*plVar4 + 0x78))(plVar4,param_1,&local_48);
    FUN_146b17e4e(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_2c,local_30);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445479c6 FUN_1445479c6 body=334 status=ok
// SIG undefined FUN_1445479c6(void)

void FUN_1445479c6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  if (local_40 != (longlong *)0x0) {
    local_48 = param_4;
    (**(code **)(*local_40 + 0x88))(local_40,param_1,param_2,param_3);
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144547b16 FUN_144547b16 body=312 status=ok
// SIG undefined FUN_144547b16(void)

void FUN_144547b16(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x149f276d8;
  local_28 = 9;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_30,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0xd0))(local_30,param_1,param_2);
  }
  plVar4 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144547c50 FUN_144547c50 body=380 status=ok
// SIG undefined FUN_144547c50(void)

void FUN_144547c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    FUN_144548e56(&local_50,param_3);
    (**(code **)(*plVar4 + 200))(plVar4,param_1,param_2,&local_50);
    FUN_146b17e4e(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144547dce FUN_144547dce body=380 status=ok
// SIG undefined FUN_144547dce(void)

void FUN_144547dce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    FUN_144548e56(&local_50,param_3);
    (**(code **)(*plVar4 + 0xd8))(plVar4,param_1,param_2,&local_50);
    FUN_146b17e4e(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144547f4c FUN_144547f4c body=311 status=ok
// SIG undefined FUN_144547f4c(void)

void FUN_144547f4c(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x149f276d8;
  local_28 = 9;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_30,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x90))(local_30,param_1,param_2);
  }
  plVar4 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548084 FUN_144548084 body=379 status=ok
// SIG undefined FUN_144548084(void)

void FUN_144548084(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    FUN_144548e56(&local_50,param_3);
    (**(code **)(*plVar4 + 0x98))(plVar4,param_1,param_2,&local_50);
    FUN_146b17e4e(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548200 FUN_144548200 body=309 status=ok
// SIG undefined FUN_144548200(void)

void FUN_144548200(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = "Analytics";
  local_28 = 9;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_30,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_30);
  if (local_30 != (char *)0x0) {
    FUN_1495d682e(local_30,param_1,param_2);
  }
  plVar4 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548336 FUN_144548336 body=379 status=ok
// SIG undefined FUN_144548336(void)

void FUN_144548336(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x149f276d8;
  local_38 = 9;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    FUN_144548e56(&local_50,param_3);
    (**(code **)(*plVar4 + 0x80))(plVar4,param_1,param_2,&local_50);
    FUN_146b17e4e(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445484b2 FUN_1445484b2 body=299 status=ok
// SIG undefined FUN_1445484b2(void)

void FUN_1445484b2(undefined4 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x70))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445485de FUN_1445485de body=301 status=ok
// SIG undefined FUN_1445485de(void)

void FUN_1445485de(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x58))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454870c FUN_14454870c body=301 status=ok
// SIG undefined FUN_14454870c(void)

void FUN_14454870c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x60))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454883a FUN_14454883a body=301 status=ok
// SIG undefined FUN_14454883a(void)

void FUN_14454883a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x68))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548968 FUN_144548968 body=301 status=ok
// SIG undefined FUN_144548968(void)

void FUN_144548968(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x18))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548a96 FUN_144548a96 body=301 status=ok
// SIG undefined FUN_144548a96(void)

void FUN_144548a96(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x149f276d8;
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,param_1);
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548bc4 FUN_144548bc4 body=302 status=ok
// SIG undefined FUN_144548bc4(void)

undefined4 FUN_144548bc4(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "Analytics";
  local_20 = 9;
  uStack_1c = uStack_1c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_28,1);
  (**(code **)(*plVar4 + 0x50))(plVar4,&local_28);
  if (local_28 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1495d66ba();
  }
  plVar4 = (longlong *)CONCAT44(uStack_1c,local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548cf4 FUN_144548cf4 body=353 status=ok
// SIG undefined FUN_144548cf4(void)

undefined4 FUN_144548cf4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  char *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = "Analytics";
  local_28 = 9;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar5 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_30,1);
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_30);
  pcVar3 = local_30;
  if (local_30 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_144548e56(&local_40,param_1);
    uVar4 = (*(code *)**(undefined8 **)pcVar3)(pcVar3,&local_40);
    FUN_146b17e4e(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_24,local_28);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144548e56 FUN_144548e56 body=286 status=ok
// SIG undefined FUN_144548e56(void)

longlong * FUN_144548e56(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_147087202(param_1);
    if ((longlong)(int)param_2[1] != 0) {
      lVar3 = (longlong)(int)param_2[1] << 5;
      lVar4 = *param_2 + 0x10;
      do {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_146b17dba(param_1,iVar1);
        }
        lVar2 = *param_1;
        local_58 = (void *)0x0;
        local_50 = *(int *)(lVar4 + -8);
        lVar5 = (longlong)local_50;
        _Src = *(void **)(lVar4 + -0x10);
        if (lVar5 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar5 * 2);
        }
        FUN_146b280ea(lVar2 + (longlong)iVar1 * 0x30,&local_58);
        lVar4 = lVar4 + 0x20;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144548f84 FUN_144548f84 body=151 status=ok
// SIG undefined FUN_144548f84(void)

void FUN_144548f84(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/AnalyticsBlueprintLibrary",&PTR_FUN_14bd4d610,1,&PTR_FUN_14bd4d5e0);
  local_28 = 0x800000014bd4d638;
  local_14 = 0x19;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146740caa(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454901c FUN_14454901c body=29 status=ok
// SIG undefined FUN_14454901c(void)

undefined8 FUN_14454901c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14454904e FUN_14454904e body=85 status=ok
// SIG undefined FUN_14454904e(void)

void FUN_14454904e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd4dd50;
  return;
}



// FUNCTION 1445490a4 FUN_1445490a4 body=85 status=ok
// SIG undefined FUN_1445490a4(void)

void FUN_1445490a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd4dd50;
  return;
}



// FUNCTION 1445490fa FUN_1445490fa body=118 status=ok
// SIG undefined FUN_1445490fa(void)

void FUN_1445490fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd4dd50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144549161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144549170 FUN_144549170 body=19 status=ok
// SIG undefined FUN_144549170(void)

void FUN_144549170(void)

{
  FUN_146153af4();
  FUN_145bc8b84();
  return;
}



// FUNCTION 144549184 FUN_144549184 body=21 status=ok
// SIG undefined FUN_144549184(void)

undefined1 FUN_144549184(void)

{
  FUN_146153af4();
  FUN_145bc8b84();
  return 1;
}



// FUNCTION 144549199 FUN_144549199 body=147 status=ok
// SIG undefined FUN_144549199(void)

void FUN_144549199(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0x800000014bd4d8fe;
  local_14 = 0x11;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146740e66(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/InterchangeExport",&PTR_FUN_14bd4dc70,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144549230 FUN_144549230 body=57 status=ok
// SIG undefined FUN_144549230(void)

void FUN_144549230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1eff8 == 0) {
    uVar1 = FUN_145a25cfb();
    DAT_14cc1eff8 = FUN_14171c317(FUN_14674109d,uVar1,L"EHoudiniAttributes");
  }
  return;
}



// FUNCTION 144549269 FUN_144549269 body=57 status=ok
// SIG undefined FUN_144549269(void)

void FUN_144549269(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1f028 == 0) {
    uVar1 = FUN_145a25cfb();
    DAT_14cc1f028 = FUN_14171c317(FUN_14674112e,uVar1,L"EHoudiniPointCacheFileType");
  }
  return;
}



// FUNCTION 1445492a2 FUN_1445492a2 body=1204 status=ok
// SIG undefined FUN_1445492a2(void)

void FUN_1445492a2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switchD_143c3d4dc::caseD_1d();
  lVar4 = *(longlong *)(param_1 + 0x78);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1445492e9;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1445492ee;
      goto LAB_144549336;
    }
  }
  else {
LAB_1445492e9:
    if (iVar7 != 0x10) {
LAB_144549336:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_1445492ee;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1445492ee;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14454948f;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14454a03d);
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
LAB_14454948f:
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
              goto LAB_14454950f;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14454950f:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14bd541c0;
        puVar17[0x15] = lVar4;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14bd54170;
        local_68[0] = &LAB_144549ffa;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FHoudiniPointCache_ToRT",&DAT_14cc1f1ec);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1445493cd;
    }
  }
LAB_1445492ee:
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_1445493cd:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454976c FUN_14454976c body=2160 status=ok
// SIG undefined FUN_14454976c(void)

void FUN_14454976c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_d8 [32];
  code **local_b8;
  code *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x78) != 0) goto LAB_14454979d;
  puVar10 = (undefined8 *)FUN_14001cc68(0x158,0x10);
  *(undefined4 *)(puVar10 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar10 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar10 + 0xe) = 0;
  *puVar10 = &PTR_FUN_14bd541d0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar10 + 100) = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x94) = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  *(undefined8 *)((longlong)puVar10 + 0xbc) = 0;
  *(undefined8 *)((longlong)puVar10 + 0xc4) = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  *(undefined8 *)((longlong)puVar10 + 0xec) = 0;
  *(undefined8 *)((longlong)puVar10 + 0xf4) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x124) = 0;
  puVar10[0x22] = 0;
  puVar10[0x23] = 0;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0;
  puVar10[0x28] = 0;
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 **)(param_1 + 0x78) = puVar10;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x3c);
  *(int *)((longlong)puVar11 + 0x74) = iVar6;
  lVar12 = 0x40;
  if ((3 < *(int *)(param_1 + 200)) &&
     (iVar7 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xc), -1 < iVar7)) {
    lVar12 = (ulonglong)(iVar6 <= iVar7) * 8 + 0x38;
  }
  *(undefined4 *)(puVar11 + 0xf) = *(undefined4 *)(param_1 + lVar12);
  iVar6 = FUN_1495dc43c(param_1);
  *(int *)((longlong)puVar11 + 0x7c) = iVar6 + 1;
  iVar6 = *(int *)(param_1 + 0x88);
  if (((longlong)iVar6 != 0) && (puVar11 != (undefined8 *)(param_1 + 0x80))) {
    pvVar3 = *(void **)(param_1 + 0x80);
    *(int *)(puVar11 + 1) = iVar6;
    FUN_1447c510a(puVar11,iVar6,*(undefined4 *)((longlong)puVar11 + 0xc));
    memcpy((void *)*puVar11,pvVar3,(longlong)iVar6 << 2);
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_14054c6c4(puVar11 + 8,param_1 + 0xc0);
  }
  iVar6 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar6 != 0) {
    if (puVar11 + 2 != (undefined8 *)(param_1 + 0x90)) {
      pvVar3 = *(void **)(param_1 + 0x90);
      *(int *)(puVar11 + 3) = iVar6;
      FUN_1447c510a(puVar11 + 2,iVar6,*(undefined4 *)((longlong)puVar11 + 0x1c));
      memcpy((void *)puVar11[2],pvVar3,(longlong)iVar6 << 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar6 != 0) {
    if (puVar11 + 4 != (undefined8 *)(param_1 + 0xa0)) {
      pvVar3 = *(void **)(param_1 + 0xa0);
      *(int *)(puVar11 + 5) = iVar6;
      FUN_1447c510a(puVar11 + 4,iVar6,*(undefined4 *)((longlong)puVar11 + 0x2c));
      memcpy((void *)puVar11[4],pvVar3,(longlong)iVar6 << 2);
    }
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_14054c6c4(puVar11 + 6,param_1 + 0xb0);
  }
  iVar6 = *(int *)(param_1 + 0xd8);
  iVar7 = FUN_1495dc43c(param_1);
  if ((iVar7 + 1) * iVar6 != 0) {
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
    FUN_1448156a8(puVar11 + 10);
    if (0 < *(int *)(param_1 + 0xd8)) {
      iVar6 = 0;
      lVar12 = 0;
      do {
        local_a8 = (code *)0x0;
        local_a0 = *(int *)(*(longlong *)(param_1 + 0xd0) + 8 + lVar12 * 0x10);
        lVar21 = (longlong)local_a0;
        pvVar3 = *(void **)(*(longlong *)(param_1 + 0xd0) + lVar12 * 0x10);
        if (lVar21 == 0) {
          local_9c = 0;
        }
        else {
          FUN_144a06ca8(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar3,lVar21 << 2);
          if (0 < local_a0) {
            lVar21 = 0;
            do {
              *(undefined4 *)(puVar11[10] + (longlong)((int)lVar21 + iVar6) * 4) =
                   *(undefined4 *)(local_a8 + lVar21 * 4);
              lVar21 = lVar21 + 1;
            } while (lVar21 < local_a0);
          }
        }
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 1;
        iVar6 = iVar6 + iVar7 + 1;
      } while (lVar12 < *(int *)(param_1 + 0xd8));
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_140bee9ec(puVar11 + 0xc,param_1 + 0x68);
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_144549b30;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_144549b35;
      goto LAB_144549bad;
    }
  }
  else {
LAB_144549b30:
    if (iVar6 != 0x10) {
LAB_144549bad:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar12 + 0xc60), iVar6 == 2))
        goto LAB_144549b35;
        if (iVar6 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_144549b35;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar10 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar14 = (uint *)*puVar10;
        if (puVar14 != (uint *)0x0) goto LAB_144549cf5;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_14454a03d);
          }
          lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar12 + 0x310);
          *(undefined8 *)(lVar12 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar10 = puVar13;
          FUN_140217a48(puVar10);
          puVar14 = (uint *)*puVar10;
LAB_144549cf5:
          puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar2 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar10;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar10 = puVar14;
            puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_144549d75;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_144549d75:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar6 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14bd54260;
        puVar19[0x15] = plVar4;
        puVar19[0x16] = puVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar6 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
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
        lVar12 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar12 == 0) {
          uVar5 = 1;
          if ((char)uVar20 != '\x06') {
            uVar5 = uVar20;
          }
          uVar20 = uVar5;
          uVar15 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar12 + 0x30);
        }
        puVar19[0xf] = uVar15;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar6;
        if (puVar19 == (undefined8 *)0x0) {
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
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
        local_b8 = &local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14bd54240;
        local_a8 = FUN_14454a1d0;
        local_80 = plVar4;
        local_78 = puVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FHoudiniPointCache_ToRT",&DAT_14cc1f1f0);
        if (local_a8 != (code *)0x0) {
          pppuVar17 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar17 = &local_88;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_14454979d;
    }
  }
LAB_144549b35:
  if (plVar4 == (longlong *)0x0) {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1495ddbc4(puVar11);
      FUN_1400020a8(puVar11);
    }
  }
  else {
    lVar12 = plVar4[0x2a];
    plVar4[0x2a] = (longlong)puVar11;
    if (lVar12 != 0) {
      FUN_1495ddbc4(lVar12);
      FUN_1400020a8(lVar12);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_14ca85100);
  }
LAB_14454979d:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454a014 FUN_14454a014 body=12 status=ok
// SIG undefined FUN_14454a014(void)

void FUN_14454a014(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014454a01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14454a020 FUN_14454a020 body=29 status=ok
// SIG undefined FUN_14454a020(void)

undefined8 FUN_14454a020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14454a064 FUN_14454a064 body=282 status=ok
// SIG undefined FUN_14454a064(void)

undefined8 * FUN_14454a064(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14454a03d);
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



// FUNCTION 14454a17e FUN_14454a17e body=81 status=ok
// SIG undefined FUN_14454a17e(void)

ulonglong FUN_14454a17e(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014454a1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14454a1d0 FUN_14454a1d0 body=58 status=ok
// SIG undefined FUN_14454a1d0(void)

void FUN_14454a1d0(longlong *param_1,undefined8 param_2)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_1495dd0c0(*param_1,param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00014454a207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  return;
}



// FUNCTION 14454a214 FUN_14454a214 body=12 status=ok
// SIG undefined FUN_14454a214(void)

void FUN_14454a214(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014454a21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14454a220 FUN_14454a220 body=72 status=ok
// SIG undefined FUN_14454a220(void)

undefined8 * FUN_14454a220(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14bd54240;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1495ddbc4(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14454a268 FUN_14454a268 body=282 status=ok
// SIG undefined FUN_14454a268(void)

undefined8 * FUN_14454a268(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14454a03d);
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



// FUNCTION 14454a382 FUN_14454a382 body=142 status=ok
// SIG undefined FUN_14454a382(void)

ulonglong FUN_14454a382(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    FUN_1495dd0c0(param_1[0x15],param_1 + 0x16);
    uVar3 = (**(code **)(*(longlong *)param_1[0x15] + 0x18))
                      ((longlong *)param_1[0x15],&DAT_14ca85100);
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    FUN_1495ddbc4(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014454a3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14454a410 FUN_14454a410 body=275 status=ok
// SIG undefined FUN_14454a410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14454a410(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_30,&DAT_14cc1efe0);
  if (cVar1 == '\0') {
    _DAT_14cc1efe0 = 0;
    uRam000000014cc1efe8 = 0;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_40 = &PTR_FUN_14bd52ff0;
  local_48 = 1;
  uStack_38 = 2;
  FUN_14282b410(L"/Script/HoudiniNiagara",&PTR_FUN_14bd53060,1,&PTR_FUN_14bd53030);
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/HoudiniNiagara",&PTR_FUN_14bd538d0,1,&PTR_FUN_14bd538a0);
  local_30 = -0x7ffffffeb42ac708;
  local_1c = 0xe;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_146741a56(&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454a612 FUN_14454a612 body=3291 status=ok
// SIG undefined FUN_14454a612(void)

void FUN_14454a612(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  code *pcVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  char *local_38;
  int local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1f4b8) {
    FUN_144b3d300();
    if (DAT_14cc1f4b8 == -1) {
      local_38 = "Attribute";
      local_30 = 9;
      local_2c = 0;
      uVar5 = FUN_14001a6c0(&local_38,1);
      DAT_14cc1f4b0 = (ulonglong)uVar5;
      _Init_thread_footer();
    }
  }
  if ((longlong)(int)param_2[6] != 0) {
    puVar7 = (ulonglong *)param_2[5];
    lVar6 = (longlong)(int)param_2[6] << 4;
    do {
      if (*puVar7 == DAT_14cc1f4b0) goto LAB_14454a686;
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_14454a686:
  lVar6 = *param_2;
  iVar1 = (int)param_2[3];
  iVar2 = (int)param_2[4];
  if (iVar2 == 1 && (iVar1 == 2 && lVar6 == DAT_14cc1f358)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((iVar1 == 1 && lVar6 == DAT_14cc1f360) && iVar2 == 1) {
    if (puVar7 != (ulonglong *)0x0) {
      FUN_1400021e4(puVar7 + 1,local_48);
      FUN_1495e8b66(param_1,param_4,local_48);
    }
    goto LAB_14454a90c;
  }
  if (iVar2 == 3 && (lVar6 == DAT_14cc1f368 && iVar1 == 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f370 && iVar1 == 1) && iVar2 == 3) {
    if (puVar7 != (ulonglong *)0x0) {
      FUN_1400021e4(puVar7 + 1,local_58);
      FUN_1495e8ce8(param_1,param_4,local_58);
    }
    goto LAB_14454a90c;
  }
  if ((iVar1 == 4 && lVar6 == DAT_14cc1f378) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((iVar1 == 3 && lVar6 == DAT_14cc1f380) && iVar2 == 3) {
    if (puVar7 != (ulonglong *)0x0) {
      FUN_1400021e4(puVar7 + 1,local_68);
      FUN_1495e8e6a(param_1,param_4,local_68);
    }
    goto LAB_14454a90c;
  }
  if (iVar2 == 4 && (lVar6 == DAT_14cc1f388 && iVar1 == 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f390 && iVar1 == 1) && iVar2 == 4) {
    if (puVar7 != (ulonglong *)0x0) {
      FUN_1400021e4(puVar7 + 1,local_78);
      FUN_1495e8fec(param_1,param_4,local_78);
    }
    goto LAB_14454a90c;
  }
  if ((lVar6 == DAT_14cc1f398 && iVar1 == 3) && iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3a0 && iVar1 == 2) && iVar2 == 4) {
    if (puVar7 != (ulonglong *)0x0) {
      FUN_1400021e4(puVar7 + 1,local_88);
      FUN_1495e916e(param_1,param_4,local_88);
    }
    goto LAB_14454a90c;
  }
  if ((lVar6 == DAT_14cc1f3a8 && iVar1 == 1) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3b0 && iVar1 == 1) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3b8 && iVar1 == 1) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3c0 && iVar1 == 1) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3c8 && iVar1 == 1) && iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3d0 && iVar1 == 1) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((lVar6 == DAT_14cc1f3d8 && iVar1 == 1) && iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  if ((iVar1 == 0 && lVar6 == DAT_14cc1f3e0) && iVar2 == 1) {
    pcVar8 = FUN_1495e96e6;
  }
  else if ((lVar6 == DAT_14cc1f3e8 && iVar1 == 0) && iVar2 == 1) {
    pcVar8 = FUN_1495e973e;
  }
  else {
    if ((lVar6 != DAT_14cc1f3f0 || iVar1 != 0) || iVar2 != 1) {
      if ((lVar6 == DAT_14cc1f3f8 && iVar1 == 1) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if (iVar2 == 6 && (iVar1 == 5 && lVar6 == DAT_14cc1f400)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f408 && iVar1 == 2) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f410 && iVar1 == 2) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f418 && iVar1 == 3) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f420 && iVar1 == 2) && iVar2 == 1) {
        if (puVar7 != (ulonglong *)0x0) {
          FUN_1400021e4(puVar7 + 1,local_98);
          FUN_1495e9adc(param_1,param_4,local_98);
        }
        goto LAB_14454a90c;
      }
      if ((lVar6 == DAT_14cc1f428 && iVar1 == 3) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f430 && iVar1 == 2) && iVar2 == 3) {
        if (puVar7 != (ulonglong *)0x0) {
          FUN_1400021e4(puVar7 + 1,local_a8);
          FUN_1495e9c5e(param_1,param_4,local_a8);
        }
        goto LAB_14454a90c;
      }
      if ((lVar6 == DAT_14cc1f438 && iVar1 == 3) && iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f440 && iVar1 == 2) && iVar2 == 4) {
        if (puVar7 != (ulonglong *)0x0) {
          FUN_1400021e4(puVar7 + 1,local_b8);
          FUN_1495e9de0(param_1,param_4,local_b8);
        }
        goto LAB_14454a90c;
      }
      if ((lVar6 == DAT_14cc1f448 && iVar1 == 5) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f450 && iVar1 == 4) && iVar2 == 3) {
        if (puVar7 != (ulonglong *)0x0) {
          FUN_1400021e4(puVar7 + 1,local_c8);
          FUN_1495e9f62(param_1,param_4,local_c8);
        }
        goto LAB_14454a90c;
      }
      if ((lVar6 == DAT_14cc1f458 && iVar1 == 4) && iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f460 && iVar1 == 3) && iVar2 == 4) {
        if (puVar7 != (ulonglong *)0x0) {
          FUN_1400021e4(puVar7 + 1,local_d8);
          FUN_1495ea0e4(param_1,param_4,local_d8);
        }
        goto LAB_14454a90c;
      }
      if ((lVar6 == DAT_14cc1f468 && iVar1 == 1) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f470 && iVar1 == 2) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f478 && iVar1 == 1) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f480 && iVar1 == 2) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f488 && iVar1 == 2) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f490 && iVar1 == 2) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f498 && iVar1 == 2) && iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f4a0 && iVar1 == 2) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((lVar6 == DAT_14cc1f4a8 && iVar1 == 2) && iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      if ((int)param_4[1] == 0) {
LAB_14454b2c9:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar3 = (undefined8 *)*param_4;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_14454b2c9;
        }
      }
      *param_4 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_14454a90c;
    }
    pcVar8 = FUN_1495e9796;
  }
  FUN_1495e9674(&local_38,param_1,pcVar8);
  iVar1 = local_30;
  pcVar4 = local_38;
  local_38 = (char *)0x0;
  local_30 = 0;
  if ((int)param_4[1] == 0) {
LAB_14454af87:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*param_4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_14454af87;
    }
  }
  *param_4 = (longlong)pcVar4;
  *(int *)(param_4 + 1) = iVar1;
  if (local_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_14454a90c;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14454a90c:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454b582 FUN_14454b582 body=1110 status=ok
// SIG undefined FUN_14454b582(void)

void FUN_14454b582(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  void *_Dst;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_68 [2];
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x28) == '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar6 = (int)param_2[1];
    plVar1 = (longlong *)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x20);
    if (iVar17 < iVar6) {
      *(int *)(param_1 + 0x20) = iVar6;
      if ((uint)(*(int *)(param_1 + 0x24) - iVar17) < (uint)(iVar6 - iVar17)) {
        FUN_1446f48e2(plVar1);
      }
      memset((void *)((longlong)iVar17 * 4 + *plVar1),0,(longlong)(iVar6 - iVar17) << 2);
    }
    else {
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (iVar6 < iVar17) {
        *(int *)(param_1 + 0x20) = iVar6;
        FUN_14479f406(plVar1);
      }
    }
    if (iVar6 != 0) {
      iVar17 = 0;
      do {
        uVar7 = *param_2;
        uVar14 = ((longlong)uVar7 >> 0x18) + (longlong)param_2;
        if ((uVar7 & 1) == 0) {
          uVar14 = uVar7;
        }
        lVar16 = (longlong)iVar17;
        local_50 = *(longlong *)(uVar14 + lVar16 * 8);
        if (local_50 == 0) {
          *(undefined4 *)(*plVar1 + lVar16 * 4) = 0xffffffff;
        }
        else {
          local_54 = 0xffffffff;
          lVar8 = *(longlong *)(param_1 + 0x10);
          FUN_1400021e4(&local_50,local_68);
          cVar10 = FUN_1495d6f70(local_68,lVar8 + 0x140,&local_54);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar10 != '\0') {
            *(undefined4 *)(*plVar1 + lVar16 * 4) = local_54;
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar6 != iVar17);
    }
    uVar15 = iVar6 * 4;
    puVar2 = (undefined8 *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x48) != uVar15) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      lVar16 = *(longlong *)(param_1 + 0x30);
      if (lVar16 != 0) {
        *puVar2 = 0;
        LOCK();
        puVar3 = (uint *)(lVar16 + 8);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar3 = (uint *)(lVar16 + 8);
          LOCK();
          uVar4 = *puVar3;
          *puVar3 = *puVar3 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar16 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar16;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar18 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar11;
                if (bVar18) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      lVar16 = *(longlong *)(param_1 + 0x38);
      if (lVar16 != 0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        LOCK();
        puVar3 = (uint *)(lVar16 + 8);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar3 = (uint *)(lVar16 + 8);
          LOCK();
          uVar4 = *puVar3;
          *puVar3 = *puVar3 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar16 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar16;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar18 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar11;
                if (bVar18) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      lVar16 = *(longlong *)(param_1 + 0x40);
      if (lVar16 != 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        LOCK();
        puVar3 = (uint *)(lVar16 + 8);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar3 = (uint *)(lVar16 + 8);
          LOCK();
          uVar4 = *puVar3;
          *puVar3 = *puVar3 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar16 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar16;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar18 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar11;
                if (bVar18) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
    }
    if (uVar15 != 0) {
      local_78 = 0;
      local_80 = 1;
      local_88 = 0x400;
      local_90 = CONCAT31(local_90._1_3_,0x1d);
      local_98 = iVar6;
      FUN_1407fe5c2(puVar2,&DAT_14ca85100,L"HoudiniGPUBufferIndexToAttributeIndex",4);
      cVar10 = DAT_14ca85169;
      uVar9 = *puVar2;
      if (DAT_14ca85169 == '\0') {
        FUN_14002049c(&DAT_14ca85100,1);
      }
      local_90 = 1;
      local_98 = uVar15;
      _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar9,0);
      if (cVar10 == '\0') {
        FUN_14002049c(&DAT_14ca85100,0);
      }
      memcpy(_Dst,(void *)*plVar1,(ulonglong)uVar15);
      uVar9 = *puVar2;
      if (DAT_14ca85169 == '\0') {
        FUN_14002049c(&DAT_14ca85100,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar9);
        FUN_14002049c(&DAT_14ca85100,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar9);
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14454b9da FUN_14454b9da body=1216 status=ok
// SIG undefined FUN_14454b9da(void)

void FUN_14454b9da(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar12 = 0;
  }
  else {
    FUN_14454976c();
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x78);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14454ba35;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14454ba3a;
      goto LAB_14454ba63;
    }
  }
  else {
LAB_14454ba35:
    if (iVar7 != 0x10) {
LAB_14454ba63:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_14454ba3a;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14454ba3a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14454bbbf;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14454bf09);
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
LAB_14454bbbf:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
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
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14454bc3f;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14454bc3f:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14bd5a128;
        puVar17[0x15] = lVar4;
        puVar17[0x16] = uVar12;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14bd5a0c0;
        local_68[0] = &LAB_14454bec2;
        local_40 = lVar4;
        local_38 = uVar12;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIHoudiniPointCache_ToRT",&DAT_14cc1f5a4);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14454bafe;
    }
  }
LAB_14454ba3a:
  *(undefined1 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar12;
LAB_14454bafe:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454be9c FUN_14454be9c body=25 status=ok
// SIG undefined FUN_14454be9c(void)

void FUN_14454be9c(void)

{
  FUN_1460792da();
  FUN_14170c56a(&DAT_14cc1f208);
  return;
}



// FUNCTION 14454bee0 FUN_14454bee0 body=12 status=ok
// SIG undefined FUN_14454bee0(void)

void FUN_14454bee0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014454bee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14454beec FUN_14454beec body=29 status=ok
// SIG undefined FUN_14454beec(void)

undefined8 FUN_14454beec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14454bf30 FUN_14454bf30 body=282 status=ok
// SIG undefined FUN_14454bf30(void)

undefined8 * FUN_14454bf30(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14454bf09);
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



// FUNCTION 14454c0b1 FUN_14454c0b1 body=2668 status=ok
// SIG undefined FUN_14454c0b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14454c0b1(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14cc1f1f4);
  if (cVar1 == '\0') {
    _DAT_14cc1f1f4 = 0;
    uRam000000014cc1f1fc = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_14454be9c;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cc1f270,6,&local_88);
  FUN_140056680(&DAT_14cc1f278,L"_NumberOfSamples");
  atexit((_func_5014 *)&LAB_14454a524);
  FUN_140056680(&DAT_14cc1f288,L"_NumberOfAttributes");
  atexit((_func_5014 *)&LAB_14454a535);
  FUN_140056680(&DAT_14cc1f298,L"_NumberOfPoints");
  atexit((_func_5014 *)&LAB_14454a546);
  FUN_140056680(&DAT_14cc1f2a8,L"_FloatValuesBuffer");
  atexit((_func_5014 *)&LAB_14454a557);
  FUN_140056680(&DAT_14cc1f2b8,L"_SpecialAttributeIndexesBuffer");
  atexit((_func_5014 *)&LAB_14454a568);
  FUN_140056680(&DAT_14cc1f2c8,L"_SpawnTimesBuffer");
  atexit((_func_5014 *)&LAB_14454a579);
  FUN_140056680(&DAT_14cc1f2d8,L"_LifeValuesBuffer");
  atexit((_func_5014 *)&LAB_14454a58a);
  FUN_140056680(&DAT_14cc1f2e8,L"_PointTypesBuffer");
  atexit((_func_5014 *)&LAB_14454a59b);
  FUN_140056680(&DAT_14cc1f2f8,L"_MaxNumberOfIndexesPerPoint");
  atexit((_func_5014 *)&LAB_14454a5ac);
  FUN_140056680(&DAT_14cc1f308,L"_PointValueIndexesBuffer");
  atexit((_func_5014 *)&LAB_14454a5bd);
  FUN_140056680(&DAT_14cc1f318,L"_LastSpawnedPointId");
  atexit((_func_5014 *)&LAB_14454a5ce);
  FUN_140056680(&DAT_14cc1f328,L"_LastSpawnTime");
  atexit((_func_5014 *)&LAB_14454a5df);
  FUN_140056680(&DAT_14cc1f338,L"_LastSpawnTimeRequest");
  atexit((_func_5014 *)&LAB_14454a5f0);
  FUN_140056680(&DAT_14cc1f348,L"_FunctionIndexToAttributeIndexBuffer");
  atexit((_func_5014 *)&LAB_14454a601);
  local_88 = (code *)0x14a8a9193;
  local_80 = 0xd;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f358 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54524;
  local_80 = 0x15;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f360 = (ulonglong)uVar2;
  local_88 = (code *)0x14a8a0fe0;
  local_80 = 0xe;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f368 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd5453a;
  local_80 = 0x16;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f370 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54551;
  local_80 = 0x10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f378 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54562;
  local_80 = 0x18;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f380 = (ulonglong)uVar2;
  local_88 = (code *)0x14adc8a1e;
  local_80 = 0xf;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f388 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd5457b;
  local_80 = 0x17;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f390 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd50f18;
  local_80 = 0xc;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f398 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54593;
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3a0 = (ulonglong)uVar2;
  local_88 = (code *)0x14a42d9f4;
  local_80 = 0xb;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3a8 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd545a8;
  local_80 = 9;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3b0 = (ulonglong)uVar2;
  local_88 = (code *)0x14a599153;
  local_80 = 7;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3b8 = (ulonglong)uVar2;
  local_88 = (code *)0x14a783470;
  local_80 = 0xb;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3c0 = (ulonglong)uVar2;
  local_88 = (code *)0x14ae568d8;
  local_80 = 8;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3c8 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd545b2;
  local_80 = 10;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3d0 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd545bd;
  local_80 = 0x12;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3d8 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4ef50;
  local_80 = 0x11;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3e0 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4efe8;
  local_80 = 0x12;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3e8 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4eeb8;
  local_80 = 0x15;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3f0 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4ec18;
  local_80 = 0x18;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f3f8 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4f450;
  local_80 = 0x18;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f400 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd512e0;
  local_80 = 0x1e;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f408 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4fa00;
  local_80 = 0x16;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f410 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd501a8;
  local_80 = 0x13;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f418 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd545d0;
  local_80 = 0x1b;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f420 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd509e8;
  local_80 = 0x19;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f428 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd545ec;
  local_80 = 0x21;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f430 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd505d8;
  local_80 = 0x1a;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f438 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd5460e;
  local_80 = 0x22;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f440 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54631;
  local_80 = 0x1b;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f448 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd5464d;
  local_80 = 0x23;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f450 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4fc10;
  local_80 = 0x17;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f458 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54671;
  local_80 = 0x1f;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f460 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4f728;
  local_80 = 0xc;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f468 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4f890;
  local_80 = 0x12;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f470 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd4ff38;
  local_80 = 0xc;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f478 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd54691;
  local_80 = 0x14;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f480 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd546a6;
  local_80 = 0x13;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f488 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd546ba;
  local_80 = 0x13;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f490 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd546ce;
  local_80 = 0x16;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f498 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd546e5;
  local_80 = 0x15;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f4a0 = (ulonglong)uVar2;
  local_88 = (code *)0x14bd546fb;
  local_80 = 0x12;
  local_7c = 0;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cc1f4a8 = (ulonglong)uVar2;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454cb20 FUN_14454cb20 body=102 status=ok
// SIG undefined FUN_14454cb20(void)

void FUN_14454cb20(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd5a138;
  local_14 = 0x10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146741c3c(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454cb88 FUN_14454cb88 body=102 status=ok
// SIG undefined FUN_14454cb88(void)

void FUN_14454cb88(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bd5a210;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146741d7a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14454cbf0 FUN_14454cbf0 body=55 status=ok
// SIG undefined FUN_14454cbf0(void)

void FUN_14454cbf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1f5b8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc1f5b8 = FUN_14171c317(FUN_146741eb7,uVar1,L"EBakeNormalSpace");
  }
  return;
}



// FUNCTION 14454cc27 FUN_14454cc27 body=55 status=ok
// SIG undefined FUN_14454cc27(void)

void FUN_14454cc27(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1f628 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc1f628 = FUN_14171c317(FUN_1467420d2,uVar1,L"EBakeCurvatureTypeMode");
  }
  return;
}


