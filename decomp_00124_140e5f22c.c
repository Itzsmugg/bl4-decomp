// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e5f22c FUN_140e5f22c body=105 status=ok
// SIG undefined FUN_140e5f22c(void)

void FUN_140e5f22c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e5f2e2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e5f296(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5f296 FUN_140e5f296 body=76 status=ok
// SIG undefined FUN_140e5f296(void)

void FUN_140e5f296(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e5f2e2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e5f2d3;
    }
  }
  lVar2 = 0;
LAB_140e5f2d3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e5f2e2 FUN_140e5f2e2 body=228 status=ok
// SIG undefined FUN_140e5f2e2(void)

longlong FUN_140e5f2e2(void)

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
  if (DAT_14cbae8a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148c403b1;
    local_40 = FUN_1465ec06e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakShiftSubsystem",&DAT_14cbae8a0,&DAT_148c403b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae8a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5f3c8 FUN_140e5f3c8 body=34 status=ok
// SIG undefined FUN_140e5f3c8(void)

undefined8 FUN_140e5f3c8(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),param_2,*(undefined8 *)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 140e5f3ea FUN_140e5f3ea body=21 status=ok
// SIG undefined FUN_140e5f3ea(void)

undefined8 FUN_140e5f3ea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e5f400 FUN_140e5f400 body=437 status=ok
// SIG undefined FUN_140e5f400(void)

void FUN_140e5f400(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_60 = &PTR_FUN_14b3f7678;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
    EnterCriticalSection(lpCriticalSection);
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    plVar12 = (longlong *)(param_1 + 8);
    uVar10 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar10 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar10 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar11;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar10 = uVar11;
      }
    }
    local_48 = CONCAT44(uVar10,uVar4);
    iVar9 = FUN_140e5f5b6(plVar12,uVar4 ^ uVar10);
    if (iVar9 == -1) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      local_48 = local_58;
      uVar7 = local_48;
      uStack_40 = plStack_50;
      plVar8 = uStack_40;
      puVar2 = (undefined8 *)(*plVar12 + 0x10 + (longlong)iVar9 * 0x28);
      uVar5 = *puVar2;
      plVar6 = (longlong *)puVar2[1];
      local_48._0_4_ = (undefined4)local_58;
      local_48._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_40._0_4_ = SUB84(plStack_50,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)plStack_50 >> 0x20);
      puVar3 = (undefined4 *)(*plVar12 + 0x10 + (longlong)iVar9 * 0x28);
      *puVar3 = (undefined4)local_48;
      puVar3[1] = local_48._4_4_;
      puVar3[2] = (undefined4)uStack_40;
      puVar3[3] = uStack_40._4_4_;
      local_58 = uVar5;
      plStack_50 = plVar6;
      local_48 = uVar7;
      uStack_40 = plVar8;
      FUN_1497e7d4a(plVar12,iVar9);
      LeaveCriticalSection(lpCriticalSection);
      FUN_145e3132c(param_2,&local_60);
      plVar12 = plStack_50;
      local_60 = &PTR_FUN_14a184350;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_50 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e5f5b6 FUN_140e5f5b6 body=180 status=ok
// SIG undefined FUN_140e5f5b6(void)

int FUN_140e5f5b6(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x28);
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140e5f644;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140e5f644:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5f66c FUN_140e5f66c body=1765 status=ok
// SIG undefined FUN_140e5f66c(void)

void FUN_140e5f66c(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  code *pcVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 auStack_118 [44];
  uint local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  uint *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  code *local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined ***local_98;
  undefined8 local_90;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((param_1[0x4a] != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
      (iVar3 = FUN_14490d72a(), iVar3 == 3)) &&
     (((param_1[0x4a] == 0 || (*(char *)(param_1[0x4a] + 0x178) != '\x03')) ||
      (-1 < (char)param_1[0x8e])))) goto LAB_140e5f9a4;
  bVar2 = *(byte *)(param_3 + 0x4d8);
  if ((bVar2 != 0) && (*(int *)((longlong)param_1 + 0x2ac) < (int)param_1[0x50])) {
    if ((0 < *(int *)((longlong)param_1 + 0x2cc)) &&
       (((*(byte *)(param_3 + 0x1d1) & 2) == 0 && (0.0 < *(float *)(param_4 + 0x18))))) {
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14b3f7290;
      local_a8 = FUN_143d0cd88;
      local_c8 = (longlong *)0x0;
      uStack_c0 = 0;
      local_80 = param_4;
      FUN_1488204d6(param_1 + 0x4e,&local_a8,&local_c8,0);
      *(byte *)(param_3 + 0x1d1) = *(byte *)(param_3 + 0x1d1) | 2;
      FUN_1403e0ef4(param_3 + 0x310,&local_c8);
      if (local_c8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (code *)0x0) {
        pppuVar11 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar11 = &local_88;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
    uVar20 = (uint)bVar2;
    if ((uVar20 == 1) || ((uVar20 == 2 && (*(int *)(param_3 + 0x318) != 0)))) {
      local_c8 = (longlong *)0x0;
      uStack_c0 = 0;
      iVar3 = (int)param_1[0x54];
      local_ec = uVar20;
      local_d8 = param_4;
      if (iVar3 == 0) {
        uVar15 = 1;
        uVar13 = 0;
        iVar7 = 0;
        iVar19 = 0;
      }
      else {
        puVar10 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x51);
        }
        uVar20 = *puVar10;
        if (uVar20 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          uVar13 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar13;
          }
          iVar19 = 0;
          do {
            if (uVar15 == uVar13) goto LAB_140e5f942;
            iVar19 = iVar19 + 0x20;
            uVar20 = puVar10[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar13 = 0;
          iVar19 = 0;
        }
        uVar15 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar15 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar7 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
      if (iVar7 < iVar3) {
        uVar20 = 0xffffffff;
        local_d0 = (uint *)(param_1 + 0x51);
        do {
          lVar16 = (longlong)iVar7 * 0x80 + param_1[0x4f];
          lVar5 = FUN_1402179b4(lVar16);
          bVar2 = *(byte *)(lVar5 + 0x18);
          if ((bVar2 & 2) != 0) {
            if (((bVar2 & 0x18) != 8) && ((bVar2 & 4) != 0 || (char)local_ec != '\x02')) {
              local_e8 = *(longlong *)(lVar16 + 0x18);
              lVar16 = FUN_1402179b4(lVar16);
              if (lVar16 == 0) {
                pcVar18 = (code *)0x0;
              }
              else {
                puVar17 = *(undefined4 **)(lVar16 + 8);
                if (puVar17 == (undefined4 *)0x0) {
                  puVar17 = &DAT_14c9485f0;
                }
                local_e0 = param_3;
                if (DAT_14c947fe0 == 0) {
                  lVar16 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar16);
                  DAT_14c947fe0 = lVar16;
                }
                FUN_140045924(DAT_14c947fe0,&local_a8,puVar17,1);
                param_3 = local_e0;
                pcVar18 = local_a8;
              }
              uVar1 = uStack_c0;
              if ((*(byte *)(lVar5 + 0x18) & 4) == 0) {
LAB_140e5f864:
                lVar5 = (longlong)(int)uStack_c0;
                uVar4 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
                if (uStack_c0._4_4_ < uVar4) {
                  FUN_140e5fe28(&local_c8,uVar1 & 0xffffffff);
                }
                local_c8[lVar5 * 4] = (longlong)pcVar18;
                *(undefined4 *)(local_c8 + lVar5 * 4 + 1) = 0x3006;
                local_c8[lVar5 * 4 + 2] = 0;
                local_c8[lVar5 * 4 + 3] = local_e8;
              }
              else if ((longlong)*(int *)(param_3 + 0x318) != 0) {
                plVar12 = *(longlong **)(param_3 + 0x310);
                plVar6 = plVar12 + (longlong)*(int *)(param_3 + 0x318) * 4;
                do {
                  if ((((code *)*plVar12 == pcVar18) && ((int)plVar12[1] == 0x3006)) &&
                     (plVar12[3] == local_e8)) goto LAB_140e5f864;
                  plVar12 = plVar12 + 4;
                } while (plVar12 != plVar6);
              }
            }
          }
          uVar20 = uVar20 & ~(uint)uVar15;
          puVar10 = (uint *)param_1[0x53];
          if ((uint *)param_1[0x53] == (uint *)0x0) {
            puVar10 = local_d0;
          }
          iVar3 = (int)param_1[0x54];
          iVar7 = (int)uVar13;
          lVar5 = (longlong)iVar7;
          uVar4 = puVar10[lVar5] & uVar20;
          if (uVar4 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar9 = iVar8;
            if (iVar8 < iVar7) {
              iVar9 = iVar7;
            }
            if (iVar8 <= iVar7) break;
            lVar16 = 0;
            while( true ) {
              iVar19 = iVar19 + 0x20;
              uVar4 = (puVar10 + lVar5 + 1)[lVar16];
              if (uVar4 != 0) break;
              lVar16 = lVar16 + 1;
              if (iVar9 - lVar5 == lVar16) goto LAB_140e5f942;
            }
            uVar13 = (ulonglong)(iVar7 + (int)lVar16 + 1);
            uVar20 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar15 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar3);
      }
LAB_140e5f942:
      uVar20 = local_ec;
      if (local_ec == 2) {
        lVar5 = FUN_1402179b4(param_3 + 0x4a8);
        if (lVar5 != 0) {
          if ((longlong)(int)uStack_c0 != 0) {
            plVar12 = local_c8;
            do {
              if (((*plVar12 == *(longlong *)(param_3 + 0x4a8)) &&
                  ((int)plVar12[1] == *(int *)(param_3 + 0x4b0))) &&
                 (plVar12[3] == *(longlong *)(param_3 + 0x4c0))) goto LAB_140e5f94f;
              plVar12 = plVar12 + 4;
            } while (plVar12 != local_c8 + (longlong)(int)uStack_c0 * 4);
          }
          lVar5 = FUN_1402179b4(param_3 + 0x4a8);
          uVar13 = uStack_c0;
          if ((lVar5 != 0) &&
             ((*(byte *)(lVar5 + 0x18) & 0x18) != 8 && (*(byte *)(lVar5 + 0x18) & 2) != 0)) {
            lVar5 = (longlong)(int)uStack_c0;
            uVar4 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
            if (uStack_c0._4_4_ < uVar4) {
              FUN_140e5fe28(&local_c8,uVar13 & 0xffffffff);
            }
            local_c8[lVar5 * 4] = *(longlong *)(param_3 + 0x4a8);
            *(undefined4 *)(local_c8 + lVar5 * 4 + 1) = *(undefined4 *)(param_3 + 0x4b0);
            local_c8[lVar5 * 4 + 2] = 0;
            local_c8[lVar5 * 4 + 3] = *(longlong *)(param_3 + 0x4c0);
          }
        }
      }
LAB_140e5f94f:
      if ((int)uStack_c0 == 0) {
        if ((longlong)(int)param_1[0x59] == -1) {
          uVar14 = 0;
LAB_140e5fa63:
          local_b0 = (code *)0x0;
        }
        else {
          lVar5 = (longlong)(int)param_1[0x59] * 0x80;
          uVar14 = *(undefined8 *)(param_1[0x4f] + 0x18 + lVar5);
          lVar5 = FUN_1402179b4(param_1[0x4f] + lVar5);
          if (lVar5 == 0) goto LAB_140e5fa63;
          puVar17 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
            puVar17 = *(undefined4 **)(lVar5 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_b0,puVar17,1);
        }
        local_a0 = 0x3006;
        local_98 = (undefined ***)0x0;
        local_a8 = local_b0;
        local_90 = uVar14;
        lVar5 = FUN_1402179b4();
        if ((lVar5 != 0) && (uVar20 != 2)) {
          if (local_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140e5f9a4;
        }
      }
      FUN_1403e0ef4(param_3 + 0x4c8,&local_c8);
      param_4 = local_d8;
      if (local_c8 != (longlong *)0x0) {
        FUN_1400020a8();
        param_4 = local_d8;
      }
    }
  }
  uVar21 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x20))(param_1,uVar21,param_3);
LAB_140e5f9a4:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5fd52 FUN_140e5fd52 body=212 status=ok
// SIG undefined FUN_140e5fd52(void)

float FUN_140e5fd52(undefined8 param_1,float param_2,longlong param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  uint uVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  longlong lVar3;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)((longlong)param_4 + 0x1c) == '\0') && (0.0 < *(float *)(param_4 + 3))) {
    FUN_1488208aa(*(float *)(param_4 + 3),&local_58,param_4);
    dVar2 = SQRT((param_4[2] - local_48) * (param_4[2] - local_48) +
                 (*param_4 - local_58) * (*param_4 - local_58) +
                 (param_4[1] - local_50) * (param_4[1] - local_50));
    uVar4 = (uint)((ulonglong)dVar2 >> 0x20);
    fVar1 = (float)dVar2 / *(float *)(param_4 + 3);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    lVar3 = CONCAT44(uVar4,fVar1);
    if (fVar1 <= 0.0) {
      lVar3 = (ulonglong)uVar4 << 0x20;
    }
    fVar1 = (float)FUN_146206072(lVar3,*(undefined8 *)(param_3 + 0x50));
    param_2 = param_2 * fVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e5fe28 FUN_140e5fe28 body=255 status=ok
// SIG undefined FUN_140e5fe28(void)

void FUN_140e5fe28(longlong param_1,int param_2)

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



// FUNCTION 140e5ff28 FUN_140e5ff28 body=3566 status=ok
// SIG undefined FUN_140e5ff28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e5ff28(longlong *param_1,float param_2,code *param_3)

{
  float fVar1;
  byte bVar2;
  code cVar3;
  code cVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_4a8 [32];
  undefined1 *local_488;
  undefined1 *local_480;
  undefined4 local_478;
  undefined8 local_470;
  wchar_t *local_468;
  code *local_460;
  undefined1 *local_458;
  code **local_450;
  code *local_448;
  code *local_440;
  undefined1 *local_438;
  undefined4 local_42c;
  undefined8 **local_428;
  code **local_420;
  code *local_418;
  code *local_410;
  undefined4 ***local_408;
  code **local_400;
  code **local_3f8;
  code ***local_3f0;
  code **local_3e8;
  code *local_3e0;
  code ***local_3d8;
  code *local_3d0;
  code **local_3c8;
  undefined1 local_3c0;
  undefined1 local_3bf;
  float local_3bc;
  longlong local_3b8;
  char local_3b0;
  undefined8 local_3ac;
  undefined1 local_3a0 [48];
  longlong local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined1 local_358 [320];
  undefined1 *local_218;
  ulonglong local_210;
  undefined1 local_208 [352];
  undefined1 *local_a8;
  ulonglong local_a0;
  code *local_98;
  ulonglong uStack_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (((((param_1[0x4a] == 0) || (lVar9 = FUN_1447210f0(), lVar9 == 0)) ||
       (lVar10 = FUN_1405e677a(DAT_14cb0d2b0,lVar9), *(char *)(lVar10 + 0x88) != '\0')) ||
      ((iVar8 = FUN_14490d72a(lVar9), iVar8 == 3 &&
       (((param_1[0x4a] == 0 || (*(char *)(param_1[0x4a] + 0x178) != '\x03')) ||
        (-1 < (char)param_1[0x8e])))))) ||
     (((bVar2 = *(byte *)(lVar9 + 0x152), bVar2 != 1 &&
       ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) ||
      (lVar9 = param_1[0x4a], (*(byte *)(lVar9 + 0x65) & 0x18) != 0x10)))) goto LAB_140e60a93;
  if ((*(byte *)(param_1 + 0x8e) & 8) != 0) {
    if (((*(byte *)(param_1 + 0x8e) & 0x10) != 0) &&
       ((((byte)param_3[0x1d0] & 4) != 0 || (param_3[0x4d8] == (code)0x1)))) goto LAB_140e60a93;
    if ((lVar9 != 0 && param_1[0x4d] != 0) &&
       ((((*(longlong *)(lVar9 + 0x1c8) != 0 && (*(longlong *)(param_1[0x4d] + 0x1c8) != 0)) &&
         (cVar7 = FUN_1414a8c54(), cVar7 != '\0')) && (param_1[0x4d] != 0)))) {
      (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
    }
    if ((*(byte *)(param_1 + 0x8e) & 0x10) != 0) goto LAB_140e60a93;
  }
  if (*(int *)(param_3 + 0x54c) == 0) {
    DAT_14cb768e0 = DAT_14cb768e0 + 1 + (uint)(DAT_14cb768e0 == -1);
    *(int *)(param_3 + 0x54c) = DAT_14cb768e0;
  }
  local_3bc = 1.0;
  local_3b8 = 0;
  local_3b0 = '\0';
  local_3ac = 0x8000000080000000;
  local_370 = 0;
  local_368 = 0x200000000;
  local_360 = 0;
  local_218 = (undefined1 *)0x0;
  local_210 = 0x400000000;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x400000000;
  cVar3 = param_3[0x548];
  local_3bf = cVar3;
  FUN_143d00e0a(param_3);
  local_3c0 = true;
  if (param_3[0x51b] != (code)0x2) {
    local_3c0 = param_3[0x548] != (code)0x0;
  }
  fVar22 = param_2;
  if ((byte)cVar3 < 4) {
    local_98 = (code *)0x0;
    uStack_90 = 0;
    (**(code **)(*(longlong *)param_3 + 0x188))(param_3,&local_3c0,&local_98,1);
    if (local_3b8 != 0) {
      *(longlong *)(param_3 + 0x50) = local_3b8;
    }
    cVar7 = (char)local_368;
    if ((char)local_368 != '\0') {
      FUN_14881d03e(param_3,local_3a0,local_360);
      puVar16 = &DAT_14cb77c90;
      if (DAT_14cb77cc0 != (undefined *)0x0) {
        puVar16 = DAT_14cb77cc0;
      }
      FUN_1400709d4(local_3a0,puVar16,DAT_14cb77cc8,local_368._4_4_);
      local_360 = 0;
    }
    FUN_143d012b8(param_3);
    pcVar6 = local_98;
    lVar9 = (longlong)(int)uStack_90;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        if ((*(int *)(pcVar6 + lVar10 + 0x14) == 0) ||
           (uVar5 = *(uint *)(pcVar6 + lVar10 + 0x10), (int)uVar5 < 0)) {
LAB_140e6029b:
          local_488 = (undefined1 *)0x0;
        }
        else {
          local_488 = (undefined1 *)0x0;
          if ((int)uVar5 < DAT_14c9647dc) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar11 == (longlong *)0x0) ||
                ((int)plVar11[2] != *(int *)(pcVar6 + lVar10 + 0x14))) ||
               ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_140e6029b;
            local_488 = (undefined1 *)*plVar11;
          }
        }
        if ((*(int *)(pcVar6 + lVar10 + 0x1c) == 0) ||
           (uVar5 = *(uint *)(pcVar6 + lVar10 + 0x18), (int)uVar5 < 0)) {
LAB_140e6029f:
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            puVar17 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((puVar17 == (undefined8 *)0x0) ||
                (*(int *)(puVar17 + 2) != *(int *)(pcVar6 + lVar10 + 0x1c))) ||
               ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140e6029f;
            uVar18 = *puVar17;
          }
        }
        local_480 = &local_3c0;
        FUN_143d01f66(param_3,*(undefined8 *)(pcVar6 + lVar10),pcVar6[lVar10 + 0x20],uVar18);
        lVar10 = lVar10 + 0x28;
      } while (lVar9 * 0x28 != lVar10);
    }
    if (0 < (longlong)(int)local_a0) {
      if ((local_3b8 == 0) || (local_3b0 != '\0')) {
        puVar14 = local_208;
        if (local_a8 != (undefined1 *)0x0) {
          puVar14 = local_a8;
        }
        lVar9 = (longlong)(int)local_a0 * 0x58;
        local_3bc = 0.0;
        lVar10 = 0;
        do {
          local_3bc = local_3bc + *(float *)(puVar14 + lVar10 + 8);
          lVar10 = lVar10 + 0x58;
        } while (lVar9 - lVar10 != 0);
        if (local_3bc <= 1.0) {
          local_3bc = 1.0 - local_3bc;
        }
        else {
          lVar10 = 0;
          do {
            *(float *)(puVar14 + lVar10 + 8) = *(float *)(puVar14 + lVar10 + 8) / local_3bc;
            lVar10 = lVar10 + 0x58;
          } while (lVar9 - lVar10 != 0);
          local_3bc = 0.0;
        }
      }
      else {
        FUN_14881d072();
      }
    }
    if ((((cVar7 != '\0') || (local_3bc != 1.0)) ||
        ((NAN(local_3bc) ||
         (((local_3b8 != 0 || ((char)local_368 != '\0')) || ((int)local_210 != 0)))))) ||
       ((int)local_a0 != 0)) {
      fVar22 = (float)(~-(uint)(local_3bc != 1.0) & (uint)param_2 |
                      (uint)(local_3bc * param_2) & -(uint)(local_3bc != 1.0));
      if (local_3b8 != 0) {
        if (*(longlong *)(param_3 + 0x50) != local_3b8) {
          *(longlong *)(param_3 + 0x50) = local_3b8;
        }
        if ((param_3[0x51b] != (code)0x2) && (*(char *)(local_3b8 + 0x38) == '\x01')) {
          FUN_143d00e0a(param_3);
        }
      }
      if ((char)local_368 != '\0') {
        FUN_14881d03e(param_3,local_3a0,local_360);
      }
    }
    FUN_143d0a685(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_143d012b8(param_3);
  }
  cVar3 = param_3[0x51b];
  cVar4 = param_3[0x548];
  if (cVar3 == (code)0x2) {
LAB_140e60455:
    if (ABS(local_3bc) <= 1e-08) {
LAB_140e6076e:
      bVar20 = cVar3 == (code)0x0;
      if (((byte)cVar3 & 0xfd) != 0) goto LAB_140e60a20;
    }
    else {
      if (cVar3 != (code)0x2) {
        if (param_3[0x4d8] == (code)0x1) {
          if ((*(longlong *)(param_3 + 0x4a8) != 0) || (*(int *)(param_3 + 0x4b0) != 0x3006)) {
            *(longlong *)(param_3 + 0x4a8) = 0;
            *(undefined4 *)(param_3 + 0x4b0) = 0x3006;
            *(longlong *)(param_3 + 0x4b8) = 0;
          }
          *(longlong *)(param_3 + 0x4c0) = 0;
          if (0 < *(int *)(param_3 + 0x4d0)) {
            lVar9 = FUN_1402179b4(*(longlong *)(param_3 + 0x4c8));
            if ((longlong)*(int *)(param_3 + 0x4d0) != 0) {
              lVar10 = *(longlong *)(param_3 + 0x4c8);
              lVar19 = (longlong)*(int *)(param_3 + 0x4d0) << 5;
              do {
                lVar13 = FUN_1402179b4(lVar10);
                if (lVar9 != lVar13) goto LAB_140e604f7;
                lVar10 = lVar10 + 0x20;
                lVar19 = lVar19 + -0x20;
              } while (lVar19 != 0);
            }
            if (lVar9 != 0) {
              plVar11 = *(longlong **)(param_3 + 0x4c8);
              if ((*(longlong *)(param_3 + 0x4a8) != *plVar11) ||
                 (*(int *)(param_3 + 0x4b0) != (int)plVar11[1])) {
                *(longlong *)(param_3 + 0x4a8) = *plVar11;
                *(int *)(param_3 + 0x4b0) = (int)plVar11[1];
                *(longlong *)(param_3 + 0x4b8) = 0;
              }
              *(longlong *)(param_3 + 0x4c0) = plVar11[3];
            }
          }
        }
LAB_140e604f7:
        (**(code **)(*(longlong *)param_3 + 0x1b8))(param_3,fVar22);
        (**(code **)(*(longlong *)param_3 + 0x170))(param_3);
        (**(code **)(*(longlong *)param_3 + 0x178))(param_3);
        (**(code **)(*(longlong *)param_3 + 0x180))(param_3);
        if ((DAT_14cb76ab4 != 0) && ('\x02' < DAT_14cb76ab0)) {
          cVar7 = (**(code **)(*(longlong *)param_3 + 0x98))(param_3);
          if ((cVar7 != '\0') && (lVar9 = *(longlong *)(param_3 + 0x418), lVar9 != 0)) {
            fVar22 = (float)(**(code **)(*(longlong *)param_3 + 0x140))(param_3,0);
            local_400 = (code **)((longlong)(fVar22 - 9.223372e+18) & (longlong)fVar22 >> 0x3f |
                                 (longlong)fVar22);
            local_428 = &local_400;
            local_418 = param_3 + 0x58;
            local_420 = (code **)&local_42c;
            local_42c = CONCAT31(local_42c._1_3_,param_3[0x540]);
            local_408 = (undefined4 ***)&local_428;
            local_3e8 = &local_410;
            local_410 = FUN_143d0be94;
            local_3f0 = &local_3e8;
            local_3f8 = (code **)FUN_140c4fb00;
            FUN_140d8b592(&local_98,lVar9);
            local_3c8 = &local_3e0;
            local_3e0 = (code *)&DAT_14cb89450;
            local_3d0 = FUN_140c4fac4;
            local_3d8 = &local_3f8;
            FUN_140d8b39e(&DAT_14cb89450,&local_98,lVar9);
            lVar10 = *(longlong *)(param_3 + 0x478);
            if (lVar10 != 0) {
              FUN_141535b30();
              FUN_143d0c086(param_3,lVar9,lVar10);
            }
          }
          cVar7 = (**(code **)(*(longlong *)param_3 + 0x90))(param_3);
          if (((cVar7 != '\0') && (*(longlong **)(param_3 + 0x478) != (longlong *)0x0)) &&
             (lVar9 = (**(code **)(**(longlong **)(param_3 + 0x478) + 0x5d0))(), lVar9 != 0)) {
            local_42c = (**(code **)(*(longlong *)param_3 + 0x140))(param_3,0);
            local_400 = (code **)&local_42c;
            local_3f0 = &local_400;
            local_3e8 = (code **)&local_3f8;
            local_3f8 = (code **)&LAB_143d0c150;
            local_3d8 = &local_3e8;
            local_3e0 = FUN_140c4fb00;
            FUN_140d8b592(&local_98,lVar9);
            local_420 = &local_3d0;
            local_3d0 = (code *)&DAT_14cb89450;
            local_428 = (undefined8 **)FUN_140c4fac4;
            local_3c8 = &local_3e0;
            FUN_140d8b39e(&DAT_14cb89450,&local_98,lVar9);
            lVar10 = *(longlong *)(param_3 + 0x410);
            if (lVar10 != 0) {
              FUN_141535b30();
              FUN_143d0c086(param_3,lVar9,lVar10);
            }
          }
        }
        if (param_3[0x358] == (code)0x1) {
          *(float *)(param_3 + 0x354) =
               ((*(float *)(param_3 + 0x338) + 1.0) / (1.0 - *(float *)(param_3 + 0x33c))) *
               *(float *)(param_3 + 0x348) *
               (*(float *)(param_3 + 0x34c) + *(float *)(param_3 + 0x340)) +
               *(float *)(param_3 + 0x344);
          param_3[0x358] = (code)0x0;
        }
        (**(code **)(*param_1 + 0x60))(param_1,param_3);
        (**(code **)(*param_1 + 0x68))(param_1,param_3);
        if (param_1[0x4a] == 0) {
          *(float *)(param_1 + 0x89) = (float)_DAT_000006d0;
        }
        else {
          lVar9 = FUN_1447210f0();
          plVar11 = (longlong *)param_1[0x4a];
          *(float *)(param_1 + 0x89) = (float)*(double *)(lVar9 + 0x6d0);
          if ((plVar11 != (longlong *)0x0) && ((*(byte *)((longlong)plVar11 + 99) & 8) != 0)) {
            (**(code **)(*plVar11 + 0x578))();
          }
        }
        pcVar6 = *(code **)(param_3 + 0x2a0);
        if (pcVar6 != (code *)0x0) {
          pcVar15 = param_3 + 0x2c0;
          if (*(code **)(param_3 + 0x2b0) != (code *)0x0) {
            pcVar15 = *(code **)(param_3 + 0x2b0);
          }
          local_98 = param_3;
          uVar18 = (**(code **)(*(longlong *)pcVar15 + 8))();
          (*pcVar6)(uVar18,&local_98);
        }
        goto LAB_140e6076e;
      }
      (**(code **)(*param_1 + 0x30))(param_1,fVar22,param_3);
      bVar20 = false;
    }
    uVar12 = local_210 & 0xffffffff;
    if (0 < (int)local_210) {
      if ((cVar4 != (code)0x3) && (cVar4 != (code)0x0)) goto LAB_140e60a20;
      puVar14 = local_218;
      if (local_218 == (undefined1 *)0x0) {
        puVar14 = local_358;
      }
      local_438 = puVar14 + 8;
      lVar9 = 0;
      do {
        if (puVar14[lVar9 + 0x4c] == '\x02') {
          if (bVar20) {
            uVar21 = (**(code **)(*(longlong *)param_3 + 0x140))(param_3,0);
            fVar22 = (float)(**(code **)(*(longlong *)param_3 + 0x168))(param_3,uVar21);
            lVar10 = *(longlong *)(param_3 + 0x410);
LAB_140e6082f:
            if (lVar10 != 0) {
              fVar1 = *(float *)(puVar14 + lVar9 + 0x48);
              if (DAT_14cb56270 == 0) {
                local_98 = FUN_1449e2820;
                local_440 = FUN_14081d0ea;
                local_448 = FUN_1427b09ee;
                local_450 = &local_98;
                local_458 = &LAB_148630fef;
                local_460 = FUN_1464b6a91;
                local_468 = L"Engine";
                local_470 = 0;
                local_478 = 0x10004001;
                local_480 = (undefined1 *)CONCAT44(local_480._4_4_,8);
                local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x28);
                FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                              &DAT_148630fee);
              }
              plVar11 = (longlong *)FUN_144718840(lVar10);
              if ((plVar11 != (longlong *)0x0) &&
                 (lVar10 = (**(code **)(*plVar11 + 0x20))(plVar11), lVar10 != 0)) {
                plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11);
                local_488 = local_438 + lVar9;
                local_480 = (undefined1 *)CONCAT71(local_480._1_7_,puVar14[lVar9 + 0x4d]);
                (**(code **)(*plVar11 + 0x90))
                          (plVar11,fVar22 * fVar1,param_3,*(undefined8 *)(puVar14 + lVar9));
              }
            }
          }
        }
        else if (puVar14[lVar9 + 0x4c] == '\x01') {
          if (bVar20) {
            uVar21 = (**(code **)(*(longlong *)param_3 + 0x140))(param_3);
            fVar22 = (float)(**(code **)(*(longlong *)param_3 + 0x168))(param_3,uVar21);
            lVar10 = *(longlong *)(param_3 + 0x28);
            goto LAB_140e6082f;
          }
        }
        else if (cVar4 == (code)0x0) {
          local_480 = local_438 + lVar9;
          local_488 = *(undefined1 **)(puVar14 + lVar9);
          local_478 = CONCAT31(local_478._1_3_,puVar14[lVar9 + 0x4d]);
          (**(code **)(*param_1 + 0x88))
                    (param_1,*(float *)(puVar14 + lVar9 + 0x48) * param_2,1,param_3);
        }
        lVar9 = lVar9 + 0x50;
      } while (uVar12 * 0x50 != lVar9);
    }
    lVar9 = (longlong)(int)local_a0;
    if (cVar4 == (code)0x0 && 0 < lVar9) {
      puVar14 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar14 = local_208;
      }
      lVar10 = 0;
      do {
        local_480 = puVar14 + lVar10 + 0x10;
        local_488 = *(undefined1 **)(puVar14 + lVar10);
        local_478 = CONCAT31(local_478._1_3_,puVar14[lVar10 + 0x50]);
        (**(code **)(*param_1 + 0x88))(param_1,*(float *)(puVar14 + lVar10 + 8) * param_2,3,param_3)
        ;
        lVar10 = lVar10 + 0x58;
      } while (lVar9 * 0x58 - lVar10 != 0);
    }
  }
  else if (cVar3 == (code)0x1) {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3);
  }
  else if (cVar3 == (code)0x0) goto LAB_140e60455;
LAB_140e60a20:
  puVar14 = local_a8;
  if (local_a8 == (undefined1 *)0x0) {
    puVar14 = local_208;
  }
  FUN_143d0a5e3(puVar14,local_a0 & 0xffffffff);
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar14 = local_218;
  if (local_218 == (undefined1 *)0x0) {
    puVar14 = local_358;
  }
  FUN_143d0a614(puVar14,local_210 & 0xffffffff);
  if (local_218 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_370 != 0) {
    FUN_1400020a8();
  }
LAB_140e60a93:
  if ((local_70 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e60d18 FUN_140e60d18 body=2162 status=ok
// SIG undefined FUN_140e60d18(void)

void FUN_140e60d18(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (undefined4)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  iStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_40 = (int)uVar2;
      local_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_40);
    }
  }
  iVar5 = iStack_40;
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (int)uVar2;
      iStack_40 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
  iVar4 = local_44;
  uStack_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined4)uVar2;
      local_44 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_48);
    }
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (undefined4)uVar2;
      uStack_48 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_4c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,local_4c);
  local_80 = CONCAT44(local_80._4_4_,uStack_48);
  local_88 = CONCAT71(local_88._1_7_,iVar4 != 0);
  FUN_140e61630(&local_58,&local_68,local_3c,iVar5 != 0);
  *param_3 = local_58;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6158c FUN_140e6158c body=164 status=ok
// SIG undefined FUN_140e6158c(void)

undefined * FUN_140e6158c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951e28) {
    FUN_144b3d300(&DAT_14c951e28);
    if (DAT_14c951e28 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951dd8,L"FDelegateProperty",0x800000,0,0x808001,0,uVar1,FUN_141719480);
      atexit(FUN_142813d36);
      _Init_thread_footer(&DAT_14c951e28);
    }
  }
  return &DAT_14c951dd8;
}



// FUNCTION 140e61630 FUN_140e61630 body=958 status=ok
// SIG undefined FUN_140e61630(void)

undefined8 *
FUN_140e61630(undefined8 *param_1,uint *param_2,float param_3,undefined1 param_4,undefined1 param_5,
             float param_6,float param_7)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  float fVar8;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  int local_100;
  undefined8 local_f8;
  int local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  if ((((*(longlong *)(param_2 + 2) == 0) || (param_2[1] == 0)) ||
      (uVar1 = *param_2, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e6197f;
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != param_2[1])) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) goto LAB_140e6197f;
  lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_2 + 2),1);
  if (lVar2 == 0) goto LAB_140e6197f;
  if (param_2[1] == 0) {
LAB_140e619d9:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_2[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_140e619d9;
      uVar3 = *puVar4;
    }
  }
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,uVar3,1);
  if (lVar2 == 0) goto LAB_140e6197f;
  uVar1 = rand();
  fVar8 = (((float)(uVar1 & 0x7fff) / 32767.0) * (param_7 + param_7) - param_7) + param_6 + param_3;
  if ((param_3 <= 0.0) || (fVar8 < 0.0)) {
    if ((param_2[1] == 0) || ((uVar1 = *param_2, (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))))
    {
LAB_140e61848:
      FUN_140056680(&local_e8,&DAT_149e01fe8);
    }
    else {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((*(uint *)(plVar5 + 2) != param_2[1] || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) ||
          (*plVar5 == 0)))) goto LAB_140e61848;
      local_f8 = *(undefined2 **)(*plVar5 + 0x18);
      FUN_1400021e4(&local_f8,&local_e8);
    }
    local_108 = *(undefined2 **)(param_2 + 2);
    FUN_1400021e4(&local_108,&local_f8);
    puVar7 = &DAT_149dfb77a;
    if (local_f0 != 0) {
      puVar7 = local_f8;
    }
    puVar6 = &DAT_149dfb77a;
    if ((int)local_e0 != 0) {
      puVar6 = local_e8;
    }
    FUN_140002266(&local_108,
                  L"%s %s SetTimer passed a negative or zero time. The associated timer may fail to be created/fire! If using InitialStartDelayVariance, be sure it is smaller than (Time + InitialStartDelay)."
                  ,puVar6,puVar7);
    puVar7 = &DAT_149dfb77a;
    if (local_100 != 0) {
      puVar7 = local_108;
    }
    FUN_1415b7ec4(puVar7,3,0);
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(lVar2 + 0x1f0) == 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x458);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar4;
  local_118 = *(undefined8 *)param_2;
  local_110 = *(undefined8 *)(param_2 + 2);
  FUN_1437437dc(uVar3,param_1);
  local_128 = &local_f8;
  local_f8._0_2_ = CONCAT11(param_5,param_4);
  local_f8 = (undefined2 *)CONCAT44(fVar8,(undefined4)local_f8);
  local_e8 = *(undefined2 **)param_2;
  local_e0 = *(undefined8 *)(param_2 + 2);
  local_a8 = 2;
  FUN_1406f4044(uVar3,param_1,&local_e8,param_3);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
LAB_140e6197f:
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e619f0 FUN_140e619f0 body=99 status=ok
// SIG undefined FUN_140e619f0(void)

void FUN_140e619f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000140e61a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e61a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 140e61a54 FUN_140e61a54 body=1450 status=ok
// SIG undefined FUN_140e61a54(void)

void FUN_140e61a54(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  uint local_d4;
  longlong *local_d0;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_88;
  float local_7c;
  code *local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
       ((lVar2 = *plVar9, lVar2 != 0 && (lVar15 = *(longlong *)(lVar2 + 0x1f0), lVar15 != 0))))))))
  {
    local_b8 = (void *)0x0;
    local_b0 = *(int *)(lVar15 + 0x40);
    lVar13 = (longlong)local_b0;
    _Src = *(void **)(lVar15 + 0x38);
    if (lVar13 == 0) {
      local_ac = 0;
    }
    else {
      FUN_140e62166(&local_b8,local_b0,0);
      memcpy(local_b8,_Src,lVar13 << 3);
    }
    if (0 < *(int *)(lVar2 + 0x238)) {
      local_d0 = (longlong *)(param_1 + 0x38);
      lVar15 = 0;
      do {
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x230) + 4 + lVar15 * 8);
        if ((((((iVar4 != 0) &&
               (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x230) + lVar15 * 8), -1 < (int)uVar1)) &&
              ((int)uVar1 < DAT_14c9647dc)) &&
             ((plVar9 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar4)))) &&
            ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) && (lVar13 = *plVar9, lVar13 != 0)) {
          if (DAT_14cbadd90 == 0) {
            local_78[0] = FUN_141030f22;
            local_e0 = FUN_14081d0ea;
            local_e8 = &LAB_1459f2e4c;
            local_f0 = local_78;
            local_f8 = &LAB_148c39de3;
            local_100 = &LAB_1457a9eb2;
            local_108 = &DAT_149e063b2;
            local_110 = 0;
            local_118 = 0x10000004;
            local_120 = 0x10;
            local_128 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
             (lVar6 = FUN_1402a1246(lVar13), lVar6 != 0)) {
            local_c4[0] = 0;
            local_c0 = 0;
            uVar1 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            uVar5 = *(uint *)(lVar10 + 0x10);
            local_88 = local_c4;
            if (*(uint *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              uVar14 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar16) {
                local_d4 = uVar14;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar14);
                uVar14 = local_d4;
              }
              LOCK();
              uVar5 = *(uint *)(lVar10 + 0x10);
              bVar16 = uVar5 == 0;
              if (bVar16) {
                *(uint *)(lVar10 + 0x10) = uVar14;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar5 = uVar14;
              }
            }
            local_78[0] = (code *)CONCAT44(uVar5,uVar1);
            iVar4 = FUN_140e620ac(local_d0,uVar1 ^ uVar5,local_78);
            if (iVar4 != -1) {
              if ((*local_d0 + (longlong)iVar4 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
                lVar10 = *local_d0 + (longlong)iVar4 * 0x20;
                lVar11 = (longlong)*(int *)(lVar10 + 0x10);
                if (lVar11 != 0) {
                  lVar10 = *(longlong *)(lVar10 + 8);
                  lVar11 = lVar11 << 3;
                  do {
                    cVar3 = FUN_144729dda(lVar10);
                    if (((cVar3 != '\0') && (lVar8 = FUN_14479d2ce(lVar10), lVar8 != 0)) &&
                       ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
                      uVar7 = FUN_14479d2ce(lVar10);
                      FUN_14423055c(&local_88,uVar7);
                    }
                    lVar10 = lVar10 + 8;
                    lVar11 = lVar11 + -8;
                  } while (lVar11 != 0);
                }
              }
            }
            lVar13 = *(longlong *)(lVar13 + 0x3d0);
            if ((lVar13 != 0) && ((longlong)*(int *)(param_1 + 0x28) != 0)) {
              puVar12 = *(uint **)(param_1 + 0x20);
              lVar10 = (longlong)*(int *)(param_1 + 0x28) << 3;
              do {
                if (((puVar12[1] != 0) && (uVar1 = *puVar12, -1 < (int)uVar1)) &&
                   (((int)uVar1 < DAT_14c9647dc &&
                    (((plVar9 = (longlong *)
                                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                      plVar9 != (longlong *)0x0 && (*(uint *)(plVar9 + 2) == puVar12[1])) &&
                     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))))) {
                  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
                    lVar11 = *plVar9;
                  }
                  else {
                    lVar11 = 0;
                  }
                  lVar8 = *(longlong *)(lVar13 + 0x1c8);
                  if (lVar8 == 0) {
                    local_98 = DAT_14c8464f0;
                    local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                    uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  }
                  else {
                    local_a8 = *(undefined8 *)(lVar8 + 0x260);
                    uStack_a0 = *(undefined8 *)(lVar8 + 0x268);
                    local_98 = *(undefined8 *)(lVar8 + 0x270);
                  }
                  plVar9 = *(longlong **)(lVar11 + 0x3a8);
                  if (((plVar9 != (longlong *)0x0) &&
                      (cVar3 = (**(code **)(*plVar9 + 0x7c0))(plVar9,&local_a8,&local_7c,local_78),
                      cVar3 != '\0')) && ((0.0 <= local_7c && (local_7c <= 0.0)))) {
                    uVar7 = FUN_14479d2ce(puVar12);
                    FUN_14423055c(&local_88,uVar7);
                  }
                }
                puVar12 = puVar12 + 2;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
            FUN_140e62000(lVar6,local_c4);
          }
        }
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < *(int *)(lVar2 + 0x238));
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e62000 FUN_140e62000 body=172 status=ok
// SIG undefined FUN_140e62000(void)

void FUN_140e62000(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  
  bVar1 = *param_2;
  bVar3 = bVar1 & 1;
  bVar5 = *(byte *)(param_1 + 0x742) != bVar3;
  if (bVar5) {
    *(byte *)(param_1 + 0x742) = bVar3;
    bVar1 = *param_2;
  }
  bVar3 = *(byte *)(param_1 + 0x74c);
  bVar4 = bVar1 >> 1 & 1;
  bVar6 = (bVar3 & 1) != bVar4;
  if (bVar6) {
    bVar3 = bVar3 & 0xfe | bVar4;
    *(byte *)(param_1 + 0x74c) = bVar3;
    bVar1 = *param_2;
  }
  if ((bVar3 >> 2 & 1) == (bVar1 & 4) >> 2) {
    lVar2 = *(longlong *)(param_2 + 4);
    if (*(longlong *)(param_1 + 0x744) == lVar2) {
      if (!bVar6 && !bVar5) {
        return;
      }
      goto LAB_140e620a0;
    }
  }
  else {
    *(byte *)(param_1 + 0x74c) = bVar3 & 0xfb | bVar1 & 4;
    lVar2 = *(longlong *)(param_2 + 4);
    if (*(longlong *)(param_1 + 0x744) == lVar2) goto LAB_140e620a0;
  }
  *(longlong *)(param_1 + 0x744) = lVar2;
LAB_140e620a0:
  FUN_1447f69b6(param_1 + 0x750);
  return;
}



// FUNCTION 140e620ac FUN_140e620ac body=185 status=ok
// SIG undefined FUN_140e620ac(void)

int FUN_140e620ac(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_148e12fa8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140e620d5;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140e620d5:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140e62166 FUN_140e62166 body=317 status=ok
// SIG undefined FUN_140e62166(void)

void FUN_140e62166(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e621d4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140e621d4:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e622a3 FUN_140e622a3 body=52 status=ok
// SIG undefined FUN_140e622a3(void)

void FUN_140e622a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e622d8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be84d20;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 140e622d8 FUN_140e622d8 body=145 status=ok
// SIG undefined FUN_140e622d8(void)

undefined8 * FUN_140e622d8(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_149fbf3e0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 140e6236a FUN_140e6236a body=1154 status=ok
// SIG undefined FUN_140e6236a(void)

void FUN_140e6236a(undefined8 param_1,longlong param_2)

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
            goto LAB_140e62455;
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
LAB_140e62455:
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
            goto LAB_140e62522;
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
LAB_140e62522:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e627ee(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e627ee FUN_140e627ee body=305 status=ok
// SIG undefined FUN_140e627ee(void)

void FUN_140e627ee(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
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
  if ((param_2 == param_1) && (param_3 != 0)) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
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



// FUNCTION 140e62934 FUN_140e62934 body=285 status=ok
// SIG undefined FUN_140e62934(void)

void FUN_140e62934(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_60 [4];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 == '\0') goto LAB_140e62960;
  lVar4 = *(longlong *)(param_1[2] + 0x38);
  if (lVar4 == 0) {
LAB_140e629b3:
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_140e629b3;
  }
  lVar2 = FUN_14058c2a0(lVar4);
  if (lVar2 != 0 && lVar4 != 0) {
    if ((char)param_2 != '\0') {
      local_70 = local_60;
      local_50 = 0;
      local_48 = 0x400000001;
      local_60[0] = 2;
      local_68 = 1;
      uVar3 = FUN_1489a5ad8(param_1);
      local_78 = 1;
      FUN_140f718e4(lVar2,uVar3,lVar4,&local_70);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_148ccc10c(lVar4,*(undefined8 *)(*(longlong *)(param_1[2] + 0x30) + 0x18),param_2);
  }
LAB_140e62960:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e62a5d FUN_140e62a5d body=97 status=ok
// SIG undefined FUN_140e62a5d(void)

void FUN_140e62a5d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e62abe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0bd540;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0x43fa0000;
  *(undefined1 *)((longlong)puVar1 + 0xa4) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 140e62abe FUN_140e62abe body=149 status=ok
// SIG undefined FUN_140e62abe(void)

undefined8 * FUN_140e62abe(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b0b3940;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 140e62b5a FUN_140e62b5a body=221 status=ok
// SIG undefined FUN_140e62b5a(void)

longlong FUN_140e62b5a(void)

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
  if (DAT_14cb4b800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148445e5d;
    local_40 = FUN_14648ee23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolPropertySet",&DAT_14cb4b800,
                  &DAT_148445e5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e62c38 FUN_140e62c38 body=94 status=ok
// SIG undefined FUN_140e62c38(void)

undefined8 * FUN_140e62c38(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b46a6d0;
  return param_1;
}



// FUNCTION 140e62c96 FUN_140e62c96 body=308 status=ok
// SIG undefined FUN_140e62c96(void)

longlong FUN_140e62c96(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  undefined **local_50;
  byte local_48;
  byte local_47;
  byte local_46;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3c;
  byte local_3b;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_3 + 0x760);
  plVar4 = *(longlong **)(param_3 + 0x768);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x868);
  }
  local_40 = lVar3 != 0;
  local_30 = *(undefined1 *)(param_3 + 0x784);
  local_34 = *(undefined4 *)(param_3 + 0x774);
  local_38 = *(undefined4 *)(param_3 + 0x780);
  local_3c = *(undefined1 *)(param_3 + 0x770);
  local_3b = (byte)*(undefined4 *)(param_3 + 0x7cc) >> 4 & 1;
  local_46 = *(byte *)(param_3 + 0x790) >> 1 & 1;
  local_47 = *(byte *)(param_3 + 0x750) & 1;
  local_48 = *(byte *)(param_3 + 0x9e) >> 4 & 1;
  local_50 = &PTR_FUN_14ad96be8;
  if ((bool)local_40) {
    local_44 = uVar5;
  }
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  FUN_140e62dcc(param_2);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e62dcc FUN_140e62dcc body=115 status=ok
// SIG undefined FUN_140e62dcc(void)

void FUN_140e62dcc(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14ad96be8;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 10);
  cVar2 = *(char *)(param_2 + 0x10);
  *(char *)(param_1 + 2) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
  return;
}



// FUNCTION 140e62e40 FUN_140e62e40 body=137 status=ok
// SIG undefined FUN_140e62e40(void)

undefined8 * FUN_140e62e40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7f1c0;
  FUN_140e62ec9(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e62ec9 FUN_140e62ec9 body=97 status=ok
// SIG undefined FUN_140e62ec9(void)

void FUN_140e62ec9(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 140e62f2a FUN_140e62f2a body=633 status=ok
// SIG undefined FUN_140e62f2a(void)

void FUN_140e62f2a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int local_5c;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  FUN_140e631a3(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148e78818(param_1);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if (0 < (int)param_2[1]) {
    lVar11 = 0;
    local_5c = 0;
    do {
      if (*(char *)(*param_2 + lVar11 * 0xe0) == '\x01') {
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1457b8d2e(param_1,iVar2);
        }
        lVar6 = *param_1;
        lVar10 = (longlong)iVar2 * 0x70;
        puVar7 = (undefined8 *)(lVar6 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + 0x60 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar6 + lVar10) = 0;
        ((undefined8 *)(lVar6 + lVar10))[1] = 0;
        FUN_140e63214(puVar7);
        puVar3 = &DAT_149dfb77a;
        if (*(int *)(lVar6 + 8 + lVar10) != 0) {
          puVar3 = (undefined2 *)*puVar7;
        }
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar3 + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar8 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
          if (uVar4 != uVar8) break;
          if (uVar4 == 0) goto LAB_140e6304b;
LAB_140e63017:
          lVar6 = lVar6 + 2;
        }
        if ((uVar8 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_140e63017;
        }
        if (uVar4 != uVar8) goto LAB_140e630f4;
LAB_140e6304b:
        puVar3 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 7) != 0) {
          puVar3 = (undefined2 *)puVar7[6];
        }
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar3 + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar8 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
          if (uVar4 != uVar8) break;
          if (uVar4 == 0) goto LAB_140e630a1;
LAB_140e6306d:
          lVar6 = lVar6 + 2;
        }
        if ((uVar8 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_140e6306d;
        }
        if (uVar4 != uVar8) goto LAB_140e630f4;
LAB_140e630a1:
        puVar3 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 3) != 0) {
          puVar3 = (undefined2 *)puVar7[2];
        }
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar3 + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar8 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
          if (uVar4 != uVar8) break;
          if (uVar4 == 0) goto LAB_140e63101;
LAB_140e630c3:
          lVar6 = lVar6 + 2;
        }
        if ((uVar8 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_140e630c3;
        }
        if (uVar4 != uVar8) {
LAB_140e630f4:
          *(int *)(puVar7 + 10) = local_5c;
          local_5c = local_5c + 1;
        }
      }
LAB_140e63101:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_2[1]);
    if (local_5c != 0) {
      return;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  FUN_140e631a3(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148e78818(param_1);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 140e631a3 FUN_140e631a3 body=113 status=ok
// SIG undefined FUN_140e631a3(void)

void FUN_140e631a3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[0xb] != 0) {
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
    }
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 140e63214 FUN_140e63214 body=1084 status=ok
// SIG undefined FUN_140e63214(void)

void FUN_140e63214(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x80);
  if ((undefined8 *)(param_2 + 8) != param_1) {
    iVar12 = *(int *)(param_2 + 0x10);
    pvVar4 = *(void **)(param_2 + 8);
    *(int *)(param_1 + 1) = iVar12;
    if (iVar12 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar12);
      if (iVar12 != 0) {
        memcpy((void *)*param_1,pvVar4,(longlong)iVar12 * 2);
      }
    }
  }
  puVar1 = param_1 + 2;
  if (puVar1 != (undefined8 *)(param_2 + 0x38)) {
    iVar12 = *(int *)(param_2 + 0x40);
    pvVar4 = *(void **)(param_2 + 0x38);
    *(int *)(param_1 + 3) = iVar12;
    if (iVar12 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar12);
      if (iVar12 != 0) {
        memcpy((void *)*puVar1,pvVar4,(longlong)iVar12 * 2);
      }
    }
  }
  puVar2 = param_1 + 4;
  if (puVar2 != (undefined8 *)(param_2 + 0x68)) {
    iVar12 = *(int *)(param_2 + 0x70);
    pvVar4 = *(void **)(param_2 + 0x68);
    *(int *)(param_1 + 5) = iVar12;
    if (iVar12 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar12);
      if (iVar12 != 0) {
        memcpy((void *)*puVar2,pvVar4,(longlong)iVar12 * 2);
      }
    }
  }
  FUN_144a2b0a4(param_2 + 0x20,&local_58);
  if ((undefined2 **)(param_1 + 6) == &local_58) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_1 + 7) = (int)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_50._4_4_;
  }
  bVar3 = *(byte *)(param_2 + 0x50);
  lVar8 = FUN_140e6367b();
  if ((longlong)*(int *)(lVar8 + 0x48) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = 0;
    lVar13 = 0;
    do {
      if (*(ulonglong *)(*(longlong *)(lVar8 + 0x40) + 8 + lVar13) == (ulonglong)bVar3) {
        local_48 = *(undefined8 *)(*(longlong *)(lVar8 + 0x40) + lVar13);
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(lVar8 + 0x48) * 0x10 != lVar13);
  }
  FUN_1400021e4(&local_48,&local_58);
  puVar9 = local_58;
  iVar12 = (int)uStack_50;
  uVar7 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar7 = 0;
  }
  if (0 < (int)uVar7) {
    uVar10 = 0;
    do {
      local_58[uVar10] = (ushort)((ushort)local_58[uVar10] - 0x41 < 0x1a) * 0x20 + local_58[uVar10];
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  uVar6 = uStack_50._4_4_;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if (param_1[8] == 0) {
    param_1[8] = puVar9;
    *(int *)(param_1 + 9) = iVar12;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  }
  else {
    FUN_1400020a8();
    param_1[8] = puVar9;
    *(int *)(param_1 + 9) = iVar12;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar2 = param_1 + 8;
  FUN_1400b22c2(&local_58,"eitemcomparisonresult::");
  iVar12 = (int)uStack_50 + -1;
  puVar9 = local_58;
  if ((int)uStack_50 == 0) {
    puVar9 = &DAT_149dfb77a;
    iVar12 = 0;
  }
  FUN_140c540b4(puVar2,puVar9,iVar12,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_58,"item_card_compare_");
  FUN_140e63652(puVar2,0,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    puVar5 = *(undefined4 **)(*(longlong *)(param_2 + 0x88) + 8);
    puVar11 = &DAT_14c9485f0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar11 = puVar5;
    }
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_1400b2348(puVar11,&local_58,1);
    if ((undefined2 **)(param_1 + 0xb) == &local_58) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0xb] != 0) {
        FUN_1400020a8();
      }
      param_1[0xb] = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_1 + 0xc) = (int)uStack_50;
      *(undefined4 *)((longlong)param_1 + 100) = uStack_50._4_4_;
    }
  }
  if (*(int *)(param_1 + 3) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*puVar1;
  }
  lVar8 = 0;
  while( true ) {
    uVar14 = *(ushort *)((longlong)puVar9 + lVar8);
    uVar10 = (ulonglong)uVar14;
    uVar15 = *(ushort *)((longlong)&DAT_149e25dfc + lVar8);
    if (uVar14 != uVar15) break;
    if (uVar14 == 0) goto LAB_140e6357c;
LAB_140e63550:
    lVar8 = lVar8 + 2;
  }
  if ((uVar15 | uVar14) < 0x80) {
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar16 = (ulonglong)uVar15;
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar16]) goto LAB_140e63550;
  }
  if (uVar14 != uVar15) goto LAB_140e6359a;
LAB_140e6357c:
  FUN_14020fad6(puVar1,&DAT_149e1419a);
  FUN_14020fad6(puVar2,L"item_card_compare_nocompare");
LAB_140e6359a:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e63652 FUN_140e63652 body=41 status=ok
// SIG undefined FUN_140e63652(void)

void FUN_140e63652(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  size_t _Size;
  uint uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  
  iVar1 = *(int *)(param_3 + 1);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar1 != 0 && iVar1 + -1 != 0) {
    _Src = (void *)*param_3;
    if ((int)param_1[1] != 0) {
      FUN_140e636b4();
      return;
    }
    if (iVar3 != 0) {
      iVar1 = (int)param_1[1];
      uVar4 = iVar3 + (uint)(iVar1 == 0);
      *(uint *)(param_1 + 1) = uVar4 + iVar1;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar4) {
        FUN_144a2dbb8(param_1,iVar1,iVar3,param_2);
      }
      lVar2 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0)) * 2;
      pvVar5 = (void *)(*param_1 + lVar2);
      _Size = (longlong)iVar3 * 2;
      memcpy(pvVar5,_Src,_Size);
      puVar6 = (undefined2 *)((longlong)pvVar5 + _Size);
      if (puVar6 == (undefined2 *)0x0) {
        pvVar5 = (void *)(lVar2 + *param_1);
        memcpy(pvVar5,_Src,_Size);
        puVar6 = (undefined2 *)((longlong)pvVar5 + (longlong)iVar3 * 2);
      }
      *puVar6 = 0;
    }
    return;
  }
  return;
}



// FUNCTION 140e6367b FUN_140e6367b body=57 status=ok
// SIG undefined FUN_140e6367b(void)

void FUN_140e6367b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68800 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68800 = FUN_14171c317(FUN_14651bd6a,uVar1,L"EItemComparisonResult");
  }
  return;
}



// FUNCTION 140e636b4 FUN_140e636b4 body=139 status=ok
// SIG undefined FUN_140e636b4(void)

int FUN_140e636b4(longlong *param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_144a2dbb8(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_4 * 2);
  memmove((void *)((longlong)_Src + (longlong)(int)param_3 * 2),_Src,
          (ulonglong)(uint)(iVar1 - param_4) * 2);
  if (param_3 != 0) {
    memcpy((void *)((longlong)param_4 * 2 + *param_1),param_2,(longlong)(int)param_3 * 2);
  }
  return param_4;
}



// FUNCTION 140e63740 FUN_140e63740 body=425 status=ok
// SIG undefined FUN_140e63740(void)

void FUN_140e63740(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  uVar3 = (**(code **)(*plVar2 + 0x250))(plVar2);
  iVar6 = (int)uVar3;
  if (iVar6 < 1) {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3 & 0xffffffff);
    }
    if (uVar3 == 0) goto LAB_140e6380f;
  }
  else {
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
    FUN_140e63d9c(&local_58,0);
    FUN_140e63a00(local_58,uVar3 & 0xffffffff);
  }
  lVar5 = 0;
  uVar7 = 0;
  do {
    (**(code **)(*plVar2 + 600))(plVar2,uVar7);
    lVar4 = (lVar5 >> 0x20) * 0x28 + local_58;
    (**(code **)(*plVar2 + 0x38))(plVar2);
    FUN_140e63a48(plVar2,lVar4);
    (**(code **)(*plVar2 + 0x48))(plVar2,lVar4);
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 + 0x100000000;
  } while (uVar3 != uVar7);
LAB_140e6380f:
  (**(code **)(*plVar2 + 0x260))(plVar2);
  local_68 = 0x10100;
  local_64 = 0;
  local_5c = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_140e63bb4(plVar2,&local_68);
  (**(code **)(*plVar2 + 0x48))(plVar2,&local_68);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),&local_58,&local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_140e027f0(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e638ec FUN_140e638ec body=91 status=ok
// SIG undefined FUN_140e638ec(void)

void FUN_140e638ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e63948();
  if (lVar1 != 0) {
    uVar2 = FUN_14001cc68(0x28,0x10);
    FUN_140e63992(uVar2,param_2,param_3);
    FUN_14039144e(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140e63948 FUN_140e63948 body=73 status=ok
// SIG undefined FUN_140e63948(void)

undefined8 FUN_140e63948(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x3c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140e63992 FUN_140e63992 body=110 status=ok
// SIG undefined FUN_140e63992(void)

undefined8 * FUN_140e63992(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b9cd988;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140e02904(param_1 + 1,iVar1,0);
    FUN_140e0282d(param_1[1],uVar2,iVar1);
  }
  uVar2 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 140e63a00 FUN_140e63a00 body=72 status=ok
// SIG undefined FUN_140e63a00(void)

void FUN_140e63a00(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_140056680(param_1 + -0x10,&DAT_149dfb77a);
      FUN_140056680(param_1,&DAT_149dfb77a);
      *(undefined2 *)(param_1 + 0x10) = 0x100;
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e63a48 FUN_140e63a48 body=363 status=ok
// SIG undefined FUN_140e63a48(void)

void FUN_140e63a48(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_60,"FOakUIHintBarEntry",param_2);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"input_action",true);
    local_50[0] = &PTR_FUN_14b9c00b0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"loc_text",true);
    local_50[0] = &PTR_FUN_14b9c00b0;
    local_38 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"is_key",true);
    local_50[0] = &PTR_FUN_14b9c0140;
    local_38 = 0x20;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"is_loc",true);
    local_50[0] = &PTR_FUN_14b9c0140;
    local_38 = 0x21;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e63bb4 FUN_140e63bb4 body=486 status=ok
// SIG undefined FUN_140e63bb4(void)

void FUN_140e63bb4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_60,"FOakUIHintBarParams",param_2);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"is_left_aligned",true);
    local_50[0] = &PTR_FUN_14b9c01d0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"show_divider",true);
    local_50[0] = &PTR_FUN_14b9c01d0;
    local_38 = 1;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"is_visible",true);
    local_50[0] = &PTR_FUN_14b9c01d0;
    local_38 = 2;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"immediate",true);
    local_50[0] = &PTR_FUN_14b9c01d0;
    local_38 = 3;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"widget_ident",true);
    local_50[0] = &PTR_FUN_14b9c0260;
    local_38 = 4;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"target_list_idx",true);
    local_50[0] = &PTR_FUN_14b9c02f0;
    local_38 = 0xc;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e63d9c FUN_140e63d9c body=370 status=ok
// SIG undefined FUN_140e63d9c(void)

void FUN_140e63d9c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e63e25;
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
LAB_140e63e25:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140e63f0e FUN_140e63f0e body=176 status=ok
// SIG undefined FUN_140e63f0e(void)

undefined8 * FUN_140e63f0e(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  puVar1 = (undefined8 *)FUN_14001cc68((longlong)(int)param_2 * 0x118,0);
  uVar3 = uVar4;
  puVar2 = puVar1;
  if ((int)param_2 < 1) {
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
  }
  else {
    do {
      FUN_140e63fbe(puVar2,param_1,1);
      puVar2[0x21] = 0;
      *puVar2 = &PTR_FUN_14bb58da0;
      *(undefined1 *)(puVar2 + 0x22) = 1;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0x23;
    } while (uVar3 != 0);
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
    puVar2 = puVar1;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,puVar2,0);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 0x23;
      } while (uVar4 != 0);
    }
  }
  return puVar1;
}



// FUNCTION 140e63fbe FUN_140e63fbe body=179 status=ok
// SIG undefined FUN_140e63fbe(void)

void FUN_140e63fbe(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14bb58d10;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x300000000;
  return;
}



// FUNCTION 140e64072 FUN_140e64072 body=343 status=ok
// SIG undefined FUN_140e64072(void)

void FUN_140e64072(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  size_t _Size;
  size_t sVar10;
  size_t sVar11;
  ulonglong uVar12;
  int iVar13;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar7 == 0) {
    if ((*(char *)(param_1 + 0x53) == '\0') && ((*(byte *)(param_1 + 0x7d) & 1) == 0)) {
      if (*(char *)(param_1 + 0x55) == '\x01') {
        lVar5 = *(longlong *)(param_1 + 8);
      }
      else {
        lVar5 = FUN_14001cc68(*(undefined8 *)(param_1 + 0x68),0);
        *(longlong *)(param_1 + 8) = lVar5;
      }
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar4 = *(longlong *)(param_1 + 0x68);
      iVar7 = (int)(lVar3 / (longlong)(ulonglong)*(uint *)(lVar2 + 0x70));
      iVar13 = (int)((lVar3 + lVar4 + -1) / (longlong)(ulonglong)*(uint *)(lVar2 + 0x70));
      if (iVar7 <= iVar13) {
        uVar12 = (ulonglong)iVar7;
        do {
          lVar6 = FUN_140320e50(lVar2,uVar12 & 0xffffffff);
          lVar8 = *(uint *)(lVar2 + 0x70) * uVar12 - lVar3;
          uVar9 = lVar8 >> 0x3f & -lVar8;
          if (lVar8 < 1) {
            lVar8 = 0;
          }
          sVar10 = (size_t)*(int *)(lVar6 + 0x28);
          sVar11 = lVar4 - lVar8;
          if ((longlong)(lVar8 + sVar10) <= lVar4) {
            sVar11 = sVar10;
          }
          _Size = sVar10 - uVar9;
          if ((longlong)(sVar11 + uVar9) <= (longlong)sVar10) {
            _Size = sVar11;
          }
          memcpy((void *)(lVar8 + lVar5),(void *)(uVar9 + *(longlong *)(lVar6 + 0x10)),_Size);
          uVar12 = uVar12 + 1;
        } while (iVar13 + 1 != (int)uVar12);
      }
    }
    FUN_14009bf40(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    *(undefined1 *)(param_1 + 0x80) = 0;
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
                    /* WARNING: Could not recover jumptable at 0x000140e641a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    return;
  }
  return;
}



// FUNCTION 140e641d2 FUN_140e641d2 body=79 status=ok
// SIG undefined FUN_140e641d2(void)

undefined8 FUN_140e641d2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (*param_2 == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb843f8);
  }
  if (((byte *)*puVar1 != (byte *)0x0) && ((*(byte *)*puVar1 & 0x6b) == 2)) {
    FUN_14135b608(param_1,param_2);
  }
  return 0;
}



// FUNCTION 140e64222 FUN_140e64222 body=792 status=ok
// SIG undefined FUN_140e64222(void)

void FUN_140e64222(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
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
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
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
  uVar4 = FUN_140e6453c(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6453c FUN_140e6453c body=103 status=ok
// SIG undefined FUN_140e6453c(void)

undefined8 FUN_140e6453c(longlong *param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000140e64597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,*(code **)(*plVar3 + 0x20));
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e645a4 FUN_140e645a4 body=162 status=ok
// SIG undefined FUN_140e645a4(void)

undefined4 FUN_140e645a4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = (**(code **)(*param_1 + 0x50))();
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  uVar1 = FUN_14096df60(uVar2,param_2,0,&local_78);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e64647 FUN_140e64647 body=297 status=ok
// SIG undefined FUN_140e64647(void)

undefined8 FUN_140e64647(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  int iVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  uVar3 = 7;
  if ((int)uVar4 < 7) {
    uVar3 = uVar4;
  }
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 1) {
    uVar6 = 0;
  }
  FUN_14006620a(&local_40,puVar2 + uVar6,uVar4 - (int)uVar6);
  iVar7 = (int)uStack_38 + -1;
  if ((int)uStack_38 == 0) {
    iVar7 = 0;
  }
  iVar5 = 1;
  if (1 < iVar7) {
    iVar5 = iVar7;
  }
  uVar4 = iVar5 - 1;
  bVar1 = 0 < (int)(iVar7 - uVar4);
  local_28 = (int)uStack_38;
  if ((int)uVar4 < iVar7) {
    iVar7 = (int)uStack_38 - (uVar4 + bVar1);
    if (iVar7 != 0) {
      memmove((void *)(local_40 + (ulonglong)uVar4 * 2),
              (void *)(local_40 + (ulonglong)uVar4 * 2 + 2),(longlong)iVar7 * 2);
    }
    local_28 = (int)uStack_38 - (uint)bVar1;
  }
  local_30 = local_40;
  local_24 = uStack_38._4_4_;
  local_40 = 0;
  uStack_38 = 0;
  FUN_140e64772(&local_30,param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e64772 FUN_140e64772 body=62 status=ok
// SIG undefined FUN_140e64772(void)

undefined8 * FUN_140e64772(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140ded26a();
  FUN_140ded312(param_1);
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140e647bc FUN_140e647bc body=183 status=ok
// SIG undefined FUN_140e647bc(void)

undefined8 * FUN_140e647bc(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b207b70;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  uVar2 = DAT_14cb8a3b8;
  uVar3 = FUN_140e64874();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x1f] = lVar4;
  iVar1 = *(int *)(param_1 + 0x21);
  *(uint *)(param_1 + 0x21) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar1 + 1U) {
    FUN_1408617ce(param_1 + 0x20,iVar1);
  }
  *(longlong *)(param_1[0x20] + (longlong)iVar1 * 8) = lVar4;
  return param_1;
}



// FUNCTION 140e64874 FUN_140e64874 body=228 status=ok
// SIG undefined FUN_140e64874(void)

longlong FUN_140e64874(void)

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
  if (DAT_14cb630e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1486ed441;
    local_40 = &LAB_140e6b15e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x208;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequenceActorStateSection",&DAT_14cb630e0,&DAT_1486ed440);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb630e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6495a FUN_140e6495a body=361 status=ok
// SIG undefined FUN_140e6495a(void)

void FUN_140e6495a(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((DAT_14c963ff1 != '\x01') ||
     (plVar4 = *(longlong **)(param_1 + 0x278), plVar4 == (longlong *)0x0)) goto LAB_140e64a3e;
  if ((DAT_14c948580 == 0) || (*(char *)(param_1 + 0x271) != '\x01')) {
LAB_140e649bc:
    uVar1 = *(uint *)((longlong)plVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar3 = 0xffffffff;
        LOCK();
        bVar6 = DAT_14c75ec34 != 0xffffffff;
        DVar2 = dwTlsIndex;
        if (bVar6) {
          DVar3 = DAT_14c75ec34;
          DVar2 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar2;
        UNLOCK();
        if (bVar6) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar3;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      plVar4 = *(longlong **)(param_1 + 0x278);
      if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
        (**(code **)(*plVar4 + 0x350))();
        plVar4 = *(longlong **)(param_1 + 0x278);
      }
    }
  }
  else {
    FUN_14019e20a(DAT_14c948580);
    *(undefined1 *)(param_1 + 0x271) = 0;
    plVar4 = *(longlong **)(param_1 + 0x278);
    if (plVar4 != (longlong *)0x0) goto LAB_140e649bc;
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*plVar4 + 0x2a0))(plVar4,1);
  *(undefined8 *)(param_1 + 0x278) = 0;
LAB_140e64a3e:
  FUN_140a58896(param_1 + 0x1e0,&DAT_14c98dec8);
  return;
}



// FUNCTION 140e64ae8 FUN_140e64ae8 body=380 status=ok
// SIG undefined FUN_140e64ae8(void)

void FUN_140e64ae8(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140e64dee();
  FUN_140e64d4c(param_1 + 0x3c,param_1);
  uVar3 = FUN_14477b072(param_1,DAT_14cab9710);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xf7;
  if (0 < (int)param_1[0x4c]) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x2000000000;
    FUN_14779d098(local_140,param_1 + 0x4b);
    puVar5 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar5 = local_140;
    }
    lVar6 = (longlong)(int)local_38;
    if (lVar6 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(puVar5 + lVar4) + 0x2b0))();
        lVar4 = lVar4 + 8;
      } while (lVar6 * 8 != lVar4);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  for (lVar6 = param_1[2]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
    lVar4 = FUN_140e64c66();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) break;
    iVar1 = *(int *)(lVar6 + 0x3c0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar6 + 0x3b8);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + lVar7);
        (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e64c66 FUN_140e64c66 body=228 status=ok
// SIG undefined FUN_140e64c66(void)

longlong FUN_140e64c66(void)

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
  if (DAT_14caba510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_14635d504;
    local_38 = &LAB_14779fb89;
    local_40 = FUN_1417ab0b9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetBlueprintGeneratedClass",&DAT_14caba510,&DAT_14779fb88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caba510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e64d4c FUN_140e64d4c body=162 status=ok
// SIG undefined FUN_140e64d4c(void)

void FUN_140e64d4c(longlong *param_1,undefined8 param_2)

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
        goto LAB_140e64dd9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e64dd9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e64dee FUN_140e64dee body=235 status=ok
// SIG undefined FUN_140e64dee(void)

uint FUN_140e64dee(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1[0x54] == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1[0x54] + 0x178);
  if (0 < iVar2) {
    uVar6 = iVar2 + 1;
    do {
      FUN_1479e0cd4(param_1[0x54]);
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
    if (param_1[0x54] == 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_140e64e66;
    }
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar5 = (longlong *)param_1[0x54];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xce8))(plVar3);
    plVar5 = (longlong *)param_1[0x54];
  }
LAB_140e64e66:
  (**(code **)(*plVar5 + 0x480))(plVar5);
  lVar4 = param_1[0x54];
  FUN_144757f48(lVar4,0x40000000);
  uVar6 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar6 = *(uint *)(lVar4 + 8);
    if ((uVar6 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar4 + 8);
    bVar7 = uVar6 == uVar1;
    if (bVar7) {
      *(uint *)(lVar4 + 8) = uVar6 | 0x200000;
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
    UNLOCK();
  } while (!bVar7);
  param_1[0x54] = 0;
  return uVar6;
}



// FUNCTION 140e64ed9 FUN_140e64ed9 body=49 status=ok
// SIG undefined FUN_140e64ed9(void)

longlong FUN_140e64ed9(void)

{
  if (DAT_14c9ab790 == 0) {
    FUN_140f50038(&DAT_14c9ab790,&PTR_s__Script_GbxPhysics_14a1da418);
  }
  return DAT_14c9ab790;
}



// FUNCTION 140e64f0a FUN_140e64f0a body=40 status=ok
// SIG undefined FUN_140e64f0a(void)

undefined8 FUN_140e64f0a(undefined8 param_1,int param_2)

{
  FUN_140e64f32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e64f32 FUN_140e64f32 body=205 status=ok
// SIG undefined FUN_140e64f32(void)

void FUN_140e64f32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0b0f20;
  param_1[5] = &PTR_FUN_14b0b1920;
  param_1[6] = &PTR_LAB_14b0b1960;
  param_1[0x55] = &PTR_FUN_14b0b19b0;
  param_1[0x56] = &PTR_FUN_14b0b1a30;
  param_1[0x57] = &PTR_FUN_14b0b1a40;
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[199],*(undefined4 *)(param_1 + 200));
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc4],*(undefined4 *)(param_1 + 0xc5));
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140e64fff FUN_140e64fff body=125 status=ok
// SIG undefined FUN_140e64fff(void)

void FUN_140e64fff(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bd1fb20;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 0;
  FUN_140e6507e(puVar1 + 6);
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(puVar1 + 0xe);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6507e FUN_140e6507e body=156 status=ok
// SIG undefined FUN_140e6507e(void)

undefined4 * FUN_140e6507e(undefined4 *param_1)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  local_30 = "Vertex";
  local_28 = 6;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 1;
  FUN_1401b309e(param_1 + 0xc,1,0);
  **(ulonglong **)(param_1 + 0xc) = (ulonglong)uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6511c FUN_140e6511c body=154 status=ok
// SIG undefined FUN_140e6511c(void)

undefined8 * FUN_140e6511c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_140e651b8(param_1,&local_28);
  plVar3 = (longlong *)param_2[1];
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e651b8 FUN_140e651b8 body=466 status=ok
// SIG undefined FUN_140e651b8(void)

void FUN_140e651b8(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar6 = (undefined2 *)param_1[4];
  }
  else {
    *param_1 = *(undefined8 *)*param_2;
    lVar7 = FUN_14479d2ce(*param_2 + 0x2c);
    if (lVar7 != 0) {
      FUN_1400bbfc4(&local_50,lVar7);
      *(undefined4 *)(param_1 + 2) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
      *(undefined4 *)(param_1 + 3) = uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_44;
      if (param_1 + 2 == (undefined8 *)&local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[4] != 0) {
          FUN_1400020a8();
        }
        param_1[4] = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 5) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x2c) = local_34;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 != '\0') {
        uVar3 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
          param_1[1] = 0;
          goto LAB_140e65212;
        }
      }
      FUN_14485c47a(param_1 + 1,lVar7);
      goto LAB_140e65212;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar6 = (undefined2 *)param_1[4];
  }
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = 0;
  }
LAB_140e65212:
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6538c FUN_140e6538c body=329 status=ok
// SIG undefined FUN_140e6538c(void)

void FUN_140e6538c(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[0x51] != '\0') {
    if (0 < (int)param_1[0x4c]) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(param_1[0x4b] + lVar2 * 8);
        (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,param_3);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[0x4c]);
    }
    FUN_140e65614(param_1);
    if (param_1[0x46] != 0) {
      FUN_1476c8cf0(param_1[0x46],param_1);
    }
    if (*DAT_14caba880 == '\0') {
      FUN_14779d108(param_1,param_3);
    }
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar2 = lVar2 + 0x460;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar2,param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
      local_38 = *(undefined8 *)(param_2 + 0xc);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      local_48 = *(undefined8 *)(param_2 + 8);
      uStack_40 = *(undefined8 *)(param_2 + 10);
      FUN_14779b2d2(param_1,&local_68,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e654d6 FUN_140e654d6 body=317 status=ok
// SIG undefined FUN_140e654d6(void)

longlong FUN_140e654d6(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((((*(int *)((longlong)param_1 + 0x2cc) == 0) ||
       (uVar1 = *(uint *)(param_1 + 0x59), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x2cc))) ||
      (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))))) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      cVar2 = FUN_141318136(param_1 + 0x57);
      plVar5 = param_1;
      if (cVar2 == '\0') goto LAB_140e655a7;
      lVar4 = FUN_140e658aa(param_1 + 0x57);
      while (lVar4 == 0) {
LAB_140e655a7:
        plVar5 = (longlong *)plVar5[4];
        if (plVar5 == (longlong *)0x0) goto LAB_140e655ea;
        lVar4 = (**(code **)(*plVar5 + 0x180))(plVar5);
      }
      uVar1 = *(uint *)(lVar4 + 0xc);
      *(uint *)(param_1 + 0x59) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar6;
        }
      }
      *(int *)((longlong)param_1 + 0x2cc) = iVar3;
    }
    else {
LAB_140e655ea:
      lVar4 = 0;
    }
  }
  return lVar4;
}



// FUNCTION 140e65614 FUN_140e65614 body=584 status=ok
// SIG undefined FUN_140e65614(void)

void FUN_140e65614(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined1 local_200 [448];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_40 = (undefined1 *)0x0;
  iVar1 = *(int *)(param_1 + 0x218);
  uVar2 = *(undefined8 *)(param_1 + 0x210);
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 8;
  }
  else {
    FUN_1477ab82e(local_200,iVar1);
    puVar4 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar4 = local_200;
    }
    FUN_1477ab8d1(puVar4,uVar2,iVar1);
    lVar3 = (longlong)local_38;
    puVar4 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar4 = local_200;
    }
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        switch(puVar4[lVar5 + 8]) {
        case 0:
          local_220 = *(undefined4 *)(puVar4 + lVar5 + 0x2c);
          local_228 = *(undefined4 *)(puVar4 + lVar5 + 0x24);
          local_218 = CONCAT31(local_218._1_3_,puVar4[lVar5 + 0x34]);
          FUN_14333c8c0(param_1,*(undefined8 *)(puVar4 + lVar5),
                        *(undefined4 *)(puVar4 + lVar5 + 0xc),*(undefined4 *)(puVar4 + lVar5 + 0x1c)
                       );
          break;
        case 1:
          local_210 = puVar4[lVar5 + 0x34];
          local_218 = *(undefined4 *)(puVar4 + lVar5 + 0x2c);
          local_220 = *(undefined4 *)(puVar4 + lVar5 + 0x24);
          local_228 = *(undefined4 *)(puVar4 + lVar5 + 0x1c);
          FUN_14333c93c(param_1,*(undefined8 *)(puVar4 + lVar5),
                        *(undefined4 *)(puVar4 + lVar5 + 0xc),*(undefined4 *)(puVar4 + lVar5 + 0x14)
                       );
          break;
        case 2:
          FUN_147797f46(param_1,*(undefined8 *)(puVar4 + lVar5),
                        *(undefined4 *)(puVar4 + lVar5 + 0x2c),puVar4[lVar5 + 0x34]);
          break;
        case 3:
          FUN_147798112(param_1,*(undefined8 *)(puVar4 + lVar5),
                        *(undefined4 *)(puVar4 + lVar5 + 0x2c),puVar4[lVar5 + 0x34]);
          break;
        case 4:
          FUN_14779b100(param_1,*(undefined8 *)(puVar4 + lVar5));
          break;
        case 5:
          FUN_147797b1e(param_1,*(undefined8 *)(puVar4 + lVar5));
        }
        lVar5 = lVar5 + 0x38;
      } while (lVar3 * 0x38 - lVar5 != 0);
    }
  }
  if (0 < *(int *)(param_1 + 0x218)) {
    FUN_140e6585d(*(undefined8 *)(param_1 + 0x210));
    *(undefined4 *)(param_1 + 0x218) = 0;
    if (*(int *)(param_1 + 0x21c) != 0) {
      FUN_1477ab9ae(param_1 + 0x210);
    }
    FUN_1417aaa18(param_1);
  }
  puVar4 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar4 = local_200;
  }
  FUN_140e6585d(puVar4,local_38);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e6585d FUN_140e6585d body=77 status=ok
// SIG undefined FUN_140e6585d(void)

void FUN_140e6585d(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x35);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-5] == '\x01') {
        pcVar1[-5] = '\0';
      }
      if (pcVar1[-0xd] == '\x01') {
        pcVar1[-0xd] = '\0';
      }
      if (pcVar1[-0x15] == '\x01') {
        pcVar1[-0x15] = '\0';
      }
      if (pcVar1[-0x1d] == '\x01') {
        pcVar1[-0x1d] = '\0';
      }
      if (pcVar1[-0x25] == '\x01') {
        pcVar1[-0x25] = '\0';
      }
      pcVar1 = pcVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e658aa FUN_140e658aa body=106 status=ok
// SIG undefined FUN_140e658aa(void)

void FUN_140e658aa(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar2 != (longlong *)0x0) &&
         ((((int)plVar2[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)
           ) && (*plVar2 != 0)))) {
        return;
      }
    }
  }
  plVar2 = (longlong *)FUN_14479d2ce();
                    /* WARNING: Could not recover jumptable at 0x000140e6590d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x180))(plVar2);
  return;
}



// FUNCTION 140e65914 FUN_140e65914 body=1919 status=ok
// SIG undefined FUN_140e65914(void)

void FUN_140e65914(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_c8 [36];
  int local_a4;
  ulonglong local_a0;
  uint local_94;
  longlong *local_90;
  uint *local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar20 = param_1 + 10;
  local_90 = param_1;
  if ((int)param_1[0xb] != 0) {
    local_a0 = param_2;
    if (0 < (int)param_1[0xb]) {
      lVar17 = 0;
      do {
        plVar15 = local_90;
        lVar21 = lVar17 * 0x18;
        plVar4 = (longlong *)FUN_140633c48(local_90,local_90[10] + lVar21);
        puVar13 = *(undefined8 **)(plVar15[10] + 8 + lVar21);
        plVar15 = *(longlong **)(plVar15[10] + 0x10 + lVar21);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        if (plVar4 != (longlong *)0x0 && puVar13 != (undefined8 *)0x0) {
          if ((longlong)*(int *)(puVar13 + 1) != 0) {
            puVar9 = (uint *)*puVar13;
            puVar8 = puVar9 + (longlong)*(int *)(puVar13 + 1) * 4;
            do {
              if ((int)plVar4[9] != 0) {
                plVar2 = *(longlong **)(puVar9 + 2);
                uVar22 = *puVar9;
                plVar11 = (longlong *)plVar4[8];
                if ((longlong *)plVar4[8] == (longlong *)0x0) {
                  plVar11 = plVar4 + 7;
                }
                iVar3 = *(int *)((longlong)plVar11 +
                                (longlong)(int)((int)plVar4[9] - 1U & uVar22) * 4);
                do {
                  iVar14 = iVar3;
                  if (iVar14 == -1) goto LAB_140e65a5f;
                  lVar21 = *plVar4;
                  lVar19 = (longlong)iVar14;
                  iVar3 = *(int *)(lVar21 + 0x10 + lVar19 * 0x18);
                } while (*(uint *)(lVar21 + lVar19 * 0x18) != uVar22);
                while (*(longlong **)(lVar21 + 8 + lVar19 * 0x18) != plVar2) {
                  do {
                    iVar14 = iVar3;
                    if (iVar14 == -1) goto LAB_140e65a5f;
                    lVar19 = (longlong)iVar14;
                    iVar3 = *(int *)(lVar21 + 0x10 + lVar19 * 0x18);
                  } while (*(uint *)(lVar21 + lVar19 * 0x18) != uVar22);
                }
                FUN_143555112(plVar4,iVar14);
                if (plVar2 != (longlong *)0x0) {
                  (**(code **)(*plVar2 + 0x18))(plVar2);
                  (**(code **)*plVar2)(plVar2,1);
                }
              }
LAB_140e65a5f:
              puVar9 = puVar9 + 4;
            } while (puVar9 != puVar8);
          }
          lVar21 = *plVar20;
          iVar3 = *(int *)(lVar21 + 4 + lVar17 * 0x18);
          if ((iVar3 == 0) || (uVar22 = *(uint *)(lVar21 + lVar17 * 0x18), (int)uVar22 < 0)) {
LAB_140e65b16:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if ((int)uVar22 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
              if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar3)) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140e65b16;
              uVar12 = *puVar13;
            }
          }
          FUN_140b13540(&DAT_14cae8d10,uVar12,0);
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar15 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar10 = (int *)((longlong)plVar15 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        lVar17 = lVar17 + 1;
      } while ((int)lVar17 < (int)local_90[0xb]);
    }
    param_1 = local_90;
    iVar3 = *(int *)((longlong)local_90 + 0x5c);
    FUN_140790c69(local_90[10]);
    param_2 = local_a0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
      FUN_147b945ec(plVar20);
    }
  }
  if (param_2 == 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      puVar9 = (uint *)(param_1 + 2);
      iVar3 = (int)param_1[5];
      if (iVar3 == 0) {
        uVar24 = 1;
        uVar23 = 0;
        iVar14 = 0;
        iVar18 = 0;
      }
      else {
        puVar8 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar8 = puVar9;
        }
        uVar22 = *puVar8;
        if (uVar22 == 0) {
          iVar14 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar14 = iVar3 + -1;
          }
          uVar23 = 0;
          uVar24 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar24 = uVar23;
          }
          iVar14 = 0;
          do {
            if (uVar24 == uVar23) goto LAB_140e66003;
            iVar14 = iVar14 + 0x20;
            uVar22 = puVar8[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar23 = 0;
          iVar14 = 0;
        }
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar24 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar18 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar18) {
          iVar18 = iVar3;
        }
      }
      if (iVar18 < iVar3) {
        local_80 = param_1 + 7;
        uVar22 = 0xffffffff;
        local_88 = puVar9;
        do {
          lVar17 = *param_1;
          lVar21 = (longlong)iVar18 * 0x20;
          iVar3 = *(int *)(lVar17 + 4 + lVar21);
          local_a0 = uVar24;
          if (((iVar3 == 0) || (uVar6 = *(uint *)(lVar17 + lVar21), (int)uVar6 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar6 ||
              (((plVar20 = (longlong *)
                           ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                plVar20 == (longlong *)0x0 || ((int)plVar20[2] != iVar3)) ||
               ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))))) {
            plVar15 = *(longlong **)(lVar17 + 8 + lVar21);
LAB_140e65d4a:
            iVar3 = (int)plVar15[5];
            local_94 = uVar22;
            local_78 = lVar21;
            local_70 = uVar23;
            if (iVar3 == 0) {
              uVar23 = 1;
              uVar24 = 0;
              iVar16 = 0;
              iVar7 = 0;
            }
            else {
              puVar9 = (uint *)plVar15[4];
              if ((uint *)plVar15[4] == (uint *)0x0) {
                puVar9 = (uint *)(plVar15 + 2);
              }
              uVar22 = *puVar9;
              if (uVar22 == 0) {
                iVar7 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar7 = iVar3 + -1;
                }
                uVar24 = 0;
                uVar23 = (ulonglong)(uint)(iVar7 >> 5);
                if (iVar7 >> 5 < 1) {
                  uVar23 = uVar24;
                }
                iVar16 = 0;
                do {
                  local_a4 = iVar14;
                  if (uVar23 == uVar24) goto LAB_140e65eb1;
                  iVar16 = iVar16 + 0x20;
                  uVar22 = puVar9[uVar24 + 1];
                  uVar24 = uVar24 + 1;
                } while (uVar22 == 0);
              }
              else {
                uVar24 = 0;
                iVar16 = 0;
              }
              uVar23 = (ulonglong)(-uVar22 & uVar22);
              uVar1 = uVar23 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar7) {
                iVar7 = iVar3;
              }
            }
            local_a4 = iVar14;
            if (iVar7 < iVar3) {
              uVar22 = 0xffffffff;
              do {
                plVar20 = *(longlong **)(*plVar15 + 8 + (longlong)iVar7 * 0x18);
                if (plVar20 != (longlong *)0x0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  (**(code **)*plVar20)(plVar20,1);
                  iVar3 = (int)plVar15[5];
                }
                uVar22 = uVar22 & ~(uint)uVar23;
                puVar9 = (uint *)plVar15[4];
                if ((uint *)plVar15[4] == (uint *)0x0) {
                  puVar9 = (uint *)(plVar15 + 2);
                }
                iVar14 = (int)uVar24;
                lVar17 = (longlong)iVar14;
                uVar6 = puVar9[lVar17] & uVar22;
                if (uVar6 == 0) {
                  iVar7 = iVar3 + 0x1e;
                  if (-1 < iVar3 + -1) {
                    iVar7 = iVar3 + -1;
                  }
                  iVar7 = iVar7 >> 5;
                  iVar5 = iVar7;
                  if (iVar7 < iVar14) {
                    iVar5 = iVar14;
                  }
                  if (iVar7 <= iVar14) break;
                  lVar21 = 0;
                  while( true ) {
                    iVar16 = iVar16 + 0x20;
                    uVar6 = puVar9[lVar17 + lVar21 + 1];
                    if (uVar6 != 0) break;
                    lVar21 = lVar21 + 1;
                    if (iVar5 - lVar17 == lVar21) goto LAB_140e65eb1;
                  }
                  uVar24 = (ulonglong)(iVar14 + (int)lVar21 + 1);
                  uVar22 = 0xffffffff;
                }
                uVar23 = (ulonglong)(-uVar6 & uVar6);
                uVar1 = uVar23 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              } while (iVar7 < iVar3);
            }
LAB_140e65eb1:
            FUN_140792310(plVar15);
            puVar9 = local_88;
            lVar21 = local_78;
            param_1 = local_90;
            uVar23 = local_70;
            iVar14 = local_a4;
            uVar22 = local_94;
          }
          else {
            plVar15 = *(longlong **)(lVar17 + 8 + lVar21);
            if (*plVar20 == 0) goto LAB_140e65d4a;
            if ((plVar15[10] != DAT_14c872be0) &&
               (*(int *)((longlong)plVar15 + 0x34) < (int)plVar15[1])) {
              local_a4 = iVar14;
              FUN_14354fdbc(param_3,plVar15);
              plVar15[10] = DAT_14c872be0;
              iVar14 = local_a4;
            }
          }
          if ((int)plVar15[1] == *(int *)((longlong)plVar15 + 0x34)) {
            plVar20 = (longlong *)param_1[8];
            if ((longlong *)param_1[8] == (longlong *)0x0) {
              plVar20 = local_80;
            }
            lVar17 = *param_1;
            lVar19 = (longlong)*(int *)(lVar17 + 0x1c + lVar21);
            iVar3 = *(int *)((longlong)plVar20 + lVar19 * 4);
            if (iVar3 == iVar18) {
              piVar10 = (int *)((longlong)plVar20 + lVar19 * 4);
            }
            else {
              do {
                piVar10 = (int *)((longlong)iVar3 * 0x20 + lVar17 + 0x18);
                iVar3 = *piVar10;
              } while (iVar3 != iVar18);
            }
            *piVar10 = *(int *)(lVar17 + lVar21 + 0x18);
            plVar20 = *(longlong **)(*param_1 + 0x10 + lVar21);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar20 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar10 = (int *)((longlong)plVar20 + 0xc);
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (*piVar10 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
            FUN_1435550a0(param_1,iVar18);
          }
          uVar22 = uVar22 & ~(uint)local_a0;
          puVar8 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar8 = puVar9;
          }
          iVar3 = (int)param_1[5];
          iVar18 = (int)uVar23;
          lVar17 = (longlong)iVar18;
          uVar6 = puVar8[lVar17] & uVar22;
          if (uVar6 == 0) {
            iVar7 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar7 = iVar3 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar16 = iVar7;
            if (iVar7 < iVar18) {
              iVar16 = iVar18;
            }
            if (iVar7 <= iVar18) break;
            lVar21 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar6 = puVar8[lVar17 + lVar21 + 1];
              if (uVar6 != 0) break;
              lVar21 = lVar21 + 1;
              if (iVar16 - lVar17 == lVar21) goto LAB_140e66003;
            }
            uVar23 = (ulonglong)(iVar18 + (int)lVar21 + 1);
            uVar22 = 0xffffffff;
          }
          uVar24 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar24 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar18 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        } while (iVar18 < iVar3);
      }
    }
  }
  else {
    local_64 = 0;
    local_68 = *(uint *)(param_2 + 0xc);
    if ((int)local_68 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((local_68 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar3 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar3 = *(int *)(lVar17 + 0x10);
      bVar25 = iVar3 == 0;
      if (bVar25) {
        *(int *)(lVar17 + 0x10) = iVar14;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar3 = iVar14;
      }
    }
    local_64 = iVar3;
    lVar17 = FUN_140633c48(param_1);
    if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0x50) != DAT_14c872be0)) {
      FUN_14354fdbc(param_3,lVar17,param_2);
      *(longlong *)(lVar17 + 0x50) = DAT_14c872be0;
    }
  }
LAB_140e66003:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6609c FUN_140e6609c body=148 status=ok
// SIG undefined FUN_140e6609c(void)

undefined8 * FUN_140e6609c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b955ef0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  local_20 = "usabilitydata_switch_default";
  local_18 = 0x1c;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (param_1[0x35] != (ulonglong)uVar1) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e66132 FUN_140e66132 body=285 status=ok
// SIG undefined FUN_140e66132(void)

undefined8 FUN_140e66132(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_140e66249;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e66249;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140e66249:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e661f3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140e661f3;
    }
  }
  uVar6 = 0;
LAB_140e661f3:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6625e FUN_140e6625e body=324 status=ok
// SIG undefined FUN_140e6625e(void)

void FUN_140e6625e(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  float fVar3;
  
  if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
    lVar2 = FUN_1414dac37();
    if ((lVar2 != 0) && (*(int *)((longlong)param_1 + 0xec) != 0)) {
      if (((int)param_1[7] != 0) && (*(char *)((longlong)param_1 + 0xa5) == '\x01')) {
        *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140e662bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e0))(param_1);
        return;
      }
      fVar3 = (float)(**(code **)(*param_1 + 800))(param_1);
      if (*(char *)((longlong)param_1 + 0xa3) == '\x01') {
        if (fVar3 <= *(float *)((longlong)param_1 + 0x84)) {
          *(undefined4 *)((longlong)param_1 + 0x84) = 0;
          *(undefined1 *)((longlong)param_1 + 0xa6) = 1;
        }
        else {
          (**(code **)(*param_1 + 0x3b0))(param_1,*(float *)((longlong)param_1 + 0x84) / fVar3);
          (**(code **)(*param_1 + 0x3b8))(param_1,1);
          *(float *)((longlong)param_1 + 0x84) = param_2 + *(float *)((longlong)param_1 + 0x84);
        }
      }
      else if (*(char *)((longlong)param_1 + 0xa4) == '\x01') {
        fVar1 = *(float *)(param_1 + 0x11);
        if (fVar3 <= fVar1) {
          *(undefined4 *)(param_1 + 0x11) = 0;
          *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x3b8);
        }
        else {
          *(float *)(param_1 + 0x11) = fVar1 + param_2;
          (**(code **)(*param_1 + 0x3b0))(param_1,0);
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x3b8);
        }
                    /* WARNING: Could not recover jumptable at 0x000140e6639f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,fVar3 > fVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e663a2 FUN_140e663a2 body=3575 status=ok
// SIG undefined FUN_140e663a2(void)

void FUN_140e663a2(longlong *param_1,longlong param_2,undefined8 **param_3,undefined8 **param_4,
                  longlong *param_5)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  DWORD DVar8;
  char cVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  LPVOID pvVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong *puVar22;
  void *_Src;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 **ppuVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStack_188 [32];
  undefined8 **local_168;
  undefined4 local_160;
  undefined8 **local_150;
  longlong *local_148;
  undefined8 **local_140;
  longlong local_138;
  undefined8 *local_130;
  undefined8 **local_128;
  longlong local_120;
  undefined8 **local_118;
  longlong local_110;
  ulonglong *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  char local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd [5];
  undefined1 uStack_d8;
  undefined2 uStack_d7;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined8 uStack_cd;
  undefined2 uStack_c5;
  undefined6 local_c3;
  undefined2 uStack_bd;
  undefined8 uStack_bb;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130 = (undefined8 *)param_4[1][3];
  local_138 = local_130[5];
  param_3[7] = (undefined8 *)0x0;
  local_150 = param_3;
  local_148 = param_1;
  local_140 = param_4;
  local_110 = param_2;
  if (0 < *(int *)(param_3 + 4)) {
    lVar23 = 0;
    do {
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_f8,L"Renderer",1);
        puVar14 = local_f8;
        uVar16 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar16,puVar14);
      }
      (**(code **)(*DAT_14cad8310 + 0x130))(DAT_14cad8310,param_3[3][lVar23]);
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(param_3 + 4));
  }
  if (*(int *)((longlong)param_3 + 0x14) < 0) {
    *(undefined4 *)(param_3 + 2) = 0;
    FUN_141787eac(param_3 + 1,0);
  }
  else {
    *(undefined4 *)(param_3 + 2) = 0;
  }
  local_128 = param_3 + 3;
  *(undefined4 *)(param_3 + 4) = 0;
  if (*(int *)((longlong)param_3 + 0x24) < 0) {
    FUN_141787eac(local_128,0);
  }
  iVar21 = *(int *)(local_138 + 400);
  if (iVar21 < 0) {
LAB_140e66fb2:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar21);
  }
  local_118 = param_3 + 1;
  *(undefined4 *)(param_3 + 2) = 0;
  if (*(int *)((longlong)param_3 + 0x14) != iVar21) {
    FUN_141787eac(local_118);
  }
  iVar21 = *(int *)(local_138 + 400);
  if (iVar21 < 0) goto LAB_140e66fb2;
  *(undefined4 *)(param_3 + 4) = 0;
  if (*(int *)((longlong)param_3 + 0x24) != iVar21) {
    FUN_141787eac(local_128);
  }
  if ((*(byte *)((longlong)local_148 + 0xac) & 8) != 0) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_f8,L"Renderer",1);
      puVar14 = local_f8;
      uVar16 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar16,puVar14);
    }
    plVar15 = local_148;
    (**(code **)(*DAT_14cad8310 + 0x160))(DAT_14cad8310,local_148);
    *(byte *)((longlong)plVar15 + 0xac) = *(byte *)((longlong)plVar15 + 0xac) & 0xf7;
  }
  local_120 = local_138 + 0x70;
  if (0 < *(int *)(local_138 + 400)) {
    puVar2 = (ulonglong *)(local_138 + 0x188);
    local_108 = (ulonglong *)(local_138 + 0xf0);
    lVar23 = 4;
    lVar27 = 0;
    do {
      uVar26 = *puVar2;
      uVar25 = ((longlong)uVar26 >> 0x18) + (longlong)puVar2;
      if ((uVar26 & 1) == 0) {
        uVar25 = uVar26;
      }
      uVar4 = *(uint *)(uVar25 + lVar27 * 0x28);
      uVar26 = (ulonglong)uVar4;
      if (*(int *)(uVar25 + 0x24 + lVar27 * 0x28) == -1) {
        if (uVar4 != 0) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = 0;
          uVar24 = 0;
          uVar13 = uVar26;
          puVar22 = local_108;
          do {
            lVar28 = (longlong)*(int *)(uVar25 + lVar23 + uVar24 * 4);
            if (lVar28 != -1) {
              uVar13 = *puVar22;
              if ((uVar13 & 1) != 0) {
                uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar22;
              }
              lVar28 = lVar28 * 0x1c;
              uVar10 = *(undefined4 *)(uVar13 + 0x14 + lVar28);
              if ((*(int *)(uVar13 + 8 + lVar28) == 0 && *(int *)(uVar13 + lVar28) == 0) ||
                 (plVar15 = *local_140, plVar15 == (longlong *)0x0)) {
LAB_140e666d1:
                puVar14 = (undefined8 *)FUN_140081bf9(local_140[1],uVar10);
              }
              else {
                uStack_d8 = 0xff;
                if (*(code **)(*plVar15 + 0x48) == FUN_144727fec) {
                  local_168 = local_140;
                  cVar9 = FUN_144727fec(plVar15,0x144727f03,uVar13 + lVar28,&local_f8);
                }
                else {
                  local_168 = local_140;
                  cVar9 = (**(code **)(*plVar15 + 0x48))(plVar15,3,uVar13 + lVar28,&local_f8);
                }
                puVar14 = local_f8;
                if (cVar9 == '\0') goto LAB_140e666d1;
              }
              (&local_a8)[uVar24] = puVar14;
              uVar13 = (ulonglong)*(uint *)(uVar25 + lVar27 * 0x28);
              puVar22 = local_108;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar13);
          lVar28 = (**(code **)(*local_148 + 0x40))();
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_de = 0xff;
          uStack_bd = 0;
          uStack_bb = 0;
          uStack_cd = 0;
          uStack_c5 = 0;
          local_c3 = 0;
          local_dd = (undefined1  [5])0x0;
          uStack_d8 = 0;
          uStack_d7 = 0;
          uStack_d5 = 0;
          uStack_d0 = 0;
          if (lVar28 != 0) {
            local_f8 = *(undefined8 **)(lVar28 + 0x18);
          }
          local_e0 = '\x02';
          local_df = (undefined1)uVar4;
          bVar31 = false;
          uVar25 = 0;
          do {
            while (((((&local_a8)[uVar25] == (undefined8 *)0x0 ||
                     (plVar15 = (longlong *)FUN_1448463c0(), plVar15 == (longlong *)0x0)) ||
                    (plVar15 = (longlong *)(**(code **)(*plVar15 + 0x90))(plVar15),
                    plVar15 == (longlong *)0x0)) || ((int)plVar15[0x11] == 0))) {
              uVar25 = uVar25 + 1;
              if (uVar26 == uVar25) {
                if (!bVar31) {
                  lVar28 = 0;
                  param_3 = local_150;
                  goto LAB_140e66908;
                }
                goto LAB_140e66885;
              }
            }
            uVar10 = (**(code **)(*plVar15 + 0xd0))(plVar15);
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar10);
            uVar10 = (**(code **)(*plVar15 + 0xd8))(plVar15);
            uStack_f0 = CONCAT44(uVar10,(undefined4)uStack_f0);
            *(int *)(local_dd + uVar25 * 4 + 1) = (int)plVar15[0x11];
            *(undefined1 *)((longlong)&uStack_bd + uVar25 + 1) = 0;
            if (DAT_14cad8310 == (longlong *)0x0) {
              FUN_1446f470e(&local_100,L"Renderer",1);
              uVar16 = local_100;
              uVar17 = FUN_144a52528();
              DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar17,uVar16);
            }
            (**(code **)(*DAT_14cad8310 + 0x158))
                      (DAT_14cad8310,plVar15 + 0x11,FUN_1435794b8,local_148);
            bVar31 = true;
            bVar30 = uVar26 - 1 != uVar25;
            uVar25 = uVar25 + 1;
          } while (bVar30);
LAB_140e66885:
          *(byte *)((longlong)local_148 + 0xac) = *(byte *)((longlong)local_148 + 0xac) | 8;
          if (DAT_14cad8310 == (longlong *)0x0) {
            FUN_1446f470e(&local_100,L"Renderer",1);
            uVar16 = local_100;
            uVar17 = FUN_144a52528();
            DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar17,uVar16);
          }
          lVar28 = (**(code **)(*DAT_14cad8310 + 0x128))(DAT_14cad8310,local_110,&local_f8);
          param_3 = local_150;
          if (lVar28 != 0) {
            iVar21 = *(int *)(local_150 + 4);
            *(uint *)(local_150 + 4) = iVar21 + 1U;
            if (*(uint *)((longlong)local_150 + 0x24) < iVar21 + 1U) {
              FUN_140430e10(local_128,iVar21);
            }
            (*local_128)[iVar21] = lVar28;
            goto LAB_140e66908;
          }
        }
LAB_140e668f1:
        lVar28 = 0;
      }
      else {
        if (uVar4 == 0) goto LAB_140e668f1;
        uVar13 = 0;
        do {
          iVar21 = *(int *)(uVar25 + lVar23 + uVar13 * 4);
          if (iVar21 != -1) {
            local_f8 = (undefined8 *)0x0;
            local_168 = &local_f8;
            FUN_1417e21ce(local_120,iVar21,local_140,local_140[1]);
            puVar14 = local_f8;
            if (local_f8 == (undefined8 *)0x0) goto LAB_140e668f1;
            if (DAT_14cad8310 == (longlong *)0x0) {
              FUN_1446f470e(&local_f8,L"Renderer",1);
              puVar6 = local_f8;
              uVar16 = FUN_144a52528();
              DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar16,puVar6);
            }
            plVar15 = local_148;
            puVar5 = (undefined4 *)puVar14[0xb];
            if (puVar5 == (undefined4 *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *puVar5;
            }
            local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,uVar10);
            (**(code **)(*DAT_14cad8310 + 0x158))(DAT_14cad8310,&local_f8,FUN_1435794b8,local_148);
            *(byte *)((longlong)plVar15 + 0xac) = *(byte *)((longlong)plVar15 + 0xac) | 8;
            lVar28 = puVar14[0xb];
            if (lVar28 == 0) goto LAB_140e668f1;
            if (*(undefined8 **)(lVar28 + 0x10) == (undefined8 *)0x0) {
              lVar28 = *(longlong *)(lVar28 + 8);
            }
            else {
              lVar28 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
            }
            break;
          }
          uVar13 = uVar13 + 1;
          lVar28 = 0;
        } while (uVar26 != uVar13);
      }
LAB_140e66908:
      iVar21 = *(int *)(param_3 + 2);
      *(uint *)(param_3 + 2) = iVar21 + 1U;
      if (*(uint *)((longlong)param_3 + 0x14) < iVar21 + 1U) {
        FUN_140430e10(local_118,iVar21);
      }
      (*local_118)[iVar21] = lVar28;
      lVar27 = lVar27 + 1;
      lVar23 = lVar23 + 0x28;
    } while (lVar27 < *(int *)(local_138 + 400));
  }
  puVar14 = local_130;
  lVar23 = local_130[9];
  if ((*param_3 != (undefined8 *)0x0) &&
     (uVar4 = *(uint *)(*param_3 + 1), (uVar4 >> 0x1e & 1) != 0 || (uVar4 & 0x3fffffff) == 0)) {
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialRenderProxy.cpp",0x21a,
                  L"The Uniformbuffer needs to be valid if it has been set");
  }
  if (param_5 == (longlong *)0x0) {
    DVar12 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar12 = TlsAlloc();
      DVar11 = 0xffffffff;
      LOCK();
      bVar31 = DAT_14c7585d0 != 0xffffffff;
      DVar8 = DVar12;
      if (bVar31) {
        DVar11 = DAT_14c7585d0;
        DVar8 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar8;
      UNLOCK();
      puVar14 = local_130;
      if (bVar31) {
        TlsFree(DVar12);
        puVar14 = local_130;
        DVar12 = DVar11;
      }
    }
    pvVar18 = TlsGetValue(DVar12);
    if (pvVar18 == (LPVOID)0x0) {
      pvVar18 = (LPVOID)FUN_140036a08(&local_f8);
      FUN_140fddf04(pvVar18);
      TlsSetValue(DVar12,pvVar18);
    }
    local_f8 = (undefined8 *)((longlong)pvVar18 + 0x10);
    uStack_f0 = *(undefined8 *)((longlong)pvVar18 + 0x10);
    local_e8 = *(longlong *)((longlong)pvVar18 + 0x20);
    local_e0 = '\0';
    uVar16 = *(undefined8 *)((longlong)pvVar18 + 0x28);
    uStack_d8 = (undefined1)uVar16;
    uStack_d7 = (undefined2)((ulonglong)uVar16 >> 8);
    uStack_d5 = (undefined5)((ulonglong)uVar16 >> 0x18);
    *(undefined8 ***)((longlong)pvVar18 + 0x28) = &local_f8;
    *(int *)((longlong)pvVar18 + 0x30) = *(int *)((longlong)pvVar18 + 0x30) + 1;
    DVar12 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar12 = TlsAlloc();
      DVar11 = 0xffffffff;
      LOCK();
      bVar31 = DAT_14c7585d0 != 0xffffffff;
      DVar8 = DVar12;
      if (bVar31) {
        DVar11 = DAT_14c7585d0;
        DVar8 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar8;
      UNLOCK();
      puVar14 = local_130;
      if (bVar31) {
        TlsFree(DVar12);
        puVar14 = local_130;
        DVar12 = DVar11;
      }
    }
    pvVar18 = TlsGetValue(DVar12);
    if (pvVar18 == (LPVOID)0x0) {
      pvVar18 = (LPVOID)FUN_140036a08(&local_a8);
      FUN_140fddf04(pvVar18);
      TlsSetValue(DVar12,pvVar18);
    }
    puVar2 = (ulonglong *)((longlong)pvVar18 + 0x10);
    uVar4 = *(uint *)(lVar23 + 0x84);
    ppuVar29 = (undefined8 **)(*(longlong *)((longlong)pvVar18 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar26 = (longlong)ppuVar29 + (ulonglong)uVar4;
    if (*(ulonglong *)((longlong)pvVar18 + 0x18) < uVar26) {
      FUN_140023dd8(puVar2,uVar4 + 0x10);
      ppuVar29 = (undefined8 **)(*puVar2 + 0xf & 0xfffffffffffffff0);
      uVar26 = (ulonglong)uVar4 + (longlong)ppuVar29;
    }
    param_3 = local_150;
    *puVar2 = uVar26;
    local_a8 = local_150[1];
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(local_150 + 2));
    local_168 = ppuVar29;
    FUN_144843986(local_120,local_140,&local_a8,lVar23);
    lVar27 = local_110;
    puVar6 = *param_3;
    if (puVar6 == (undefined8 *)0x0) {
      local_160 = 1;
      local_168 = (undefined8 **)CONCAT44(local_168._4_4_,2);
      (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_a8,ppuVar29,lVar23);
      if (&local_a8 != param_3) {
        puVar6 = *param_3;
        *param_3 = local_a8;
        local_a8 = (undefined8 *)0x0;
        if (puVar6 == (undefined8 *)0x0) goto LAB_140e66e93;
        LOCK();
        puVar1 = (uint *)(puVar6 + 1);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(puVar6 + 1);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)((longlong)puVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = (longlong)puVar6;
            plVar15 = DAT_14ca843c0;
            plVar20 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c0;
                plVar20 = plVar19;
                if (bVar31) {
                  plVar15 = DAT_14ca843c0;
                  plVar20 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar20;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar19 = (longlong)plVar20;
                LOCK();
                bVar31 = plVar20 != DAT_14ca843c8;
                plVar15 = plVar19;
                if (bVar31) {
                  plVar20 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      puVar6 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = (uint *)(local_a8 + 1);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_a8 + 1);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)((longlong)local_a8 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = (longlong)puVar6;
            plVar15 = DAT_14ca843c0;
            plVar20 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c0;
                plVar20 = plVar19;
                if (bVar31) {
                  plVar15 = DAT_14ca843c0;
                  plVar20 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar20;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar19 = (longlong)plVar20;
                LOCK();
                bVar31 = plVar20 != DAT_14ca843c8;
                plVar15 = plVar19;
                if (bVar31) {
                  plVar20 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
    }
    else if (*(char *)(local_110 + 0x69) == '\0') {
      FUN_14002049c(local_110,1);
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,lVar27,puVar6,ppuVar29);
      FUN_14002049c(lVar27,0);
      param_3 = local_150;
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,local_110,puVar6,ppuVar29);
      param_3 = local_150;
    }
LAB_140e66e93:
    if (local_e0 == '\0') {
      local_e0 = '\x01';
      *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
      if (local_e8 != local_f8[2]) {
        FUN_14004673c();
      }
      *local_f8 = uStack_f0;
      local_f8[3] = CONCAT53(uStack_d5,CONCAT21(uStack_d7,uStack_d8));
    }
    goto LAB_140e66eea;
  }
  if (*param_3 == (undefined8 *)0x0) {
    local_160 = 1;
    local_168 = (undefined8 **)CONCAT44(local_168._4_4_,2);
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_f8,0,lVar23);
    if (&local_f8 != param_3) {
      puVar6 = *param_3;
      *param_3 = local_f8;
      local_f8 = (undefined8 *)0x0;
      if (puVar6 == (undefined8 *)0x0) goto LAB_140e66a3d;
      LOCK();
      puVar1 = (uint *)(puVar6 + 1);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(puVar6 + 1);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)puVar6 + 0xd);
          plVar19 = (longlong *)FUN_14001cc68(0x10,8);
          plVar19[1] = (longlong)puVar6;
          plVar15 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar19 = (longlong)plVar15;
              LOCK();
              bVar31 = plVar15 != DAT_14ca843c0;
              plVar20 = plVar19;
              if (bVar31) {
                plVar15 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar19 = (longlong)plVar20;
              LOCK();
              bVar31 = plVar20 != DAT_14ca843c8;
              plVar15 = plVar19;
              if (bVar31) {
                plVar20 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
    puVar6 = local_f8;
    if (local_f8 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_f8 + 1);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_f8 + 1);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)local_f8 + 0xd);
          plVar19 = (longlong *)FUN_14001cc68(0x10,8);
          plVar19[1] = (longlong)puVar6;
          plVar15 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar19 = (longlong)plVar15;
              LOCK();
              bVar31 = plVar15 != DAT_14ca843c0;
              plVar20 = plVar19;
              if (bVar31) {
                plVar15 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar19 = (longlong)plVar20;
              LOCK();
              bVar31 = plVar20 != DAT_14ca843c8;
              plVar15 = plVar19;
              if (bVar31) {
                plVar20 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
  }
LAB_140e66a3d:
  iVar21 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar21 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar21 + 1U) {
    FUN_144ae6008(param_5,iVar21);
  }
  lVar27 = *param_5 + (longlong)iVar21 * 0x40;
  puVar6 = *param_3;
  *(undefined8 **)(*param_5 + (longlong)iVar21 * 0x40) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar27 + 8) = 0;
  iVar21 = *(int *)(param_3 + 2);
  puVar6 = param_3[1];
  *(int *)(lVar27 + 0x10) = iVar21;
  if ((longlong)iVar21 == 0) {
    *(undefined4 *)(lVar27 + 0x14) = 0;
  }
  else {
    FUN_144ae6218((undefined8 *)(lVar27 + 8),iVar21);
    param_3 = local_150;
    memcpy(*(void **)(lVar27 + 8),puVar6,(longlong)iVar21 << 3);
  }
  *(longlong *)(lVar27 + 0x18) = local_120;
  *(longlong *)(lVar27 + 0x20) = lVar23;
  *(undefined8 **)(lVar27 + 0x28) = *local_140;
  *(undefined8 **)(lVar27 + 0x30) = local_140[1];
  *(undefined1 *)(lVar27 + 0x38) = *(undefined1 *)(local_140 + 2);
LAB_140e66eea:
  pvVar7 = *(void **)(local_138 + 0x198);
  _Src = (void *)(local_138 + 0x198 + ((longlong)pvVar7 >> 0x18));
  if (((ulonglong)pvVar7 & 1) == 0) {
    _Src = pvVar7;
  }
  iVar21 = *(int *)(local_138 + 0x1a0);
  *(int *)(param_3 + 6) = iVar21;
  if (iVar21 == 0 && *(int *)((longlong)param_3 + 0x34) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x34) = 0;
  }
  else {
    FUN_1417246d8(param_3 + 5,iVar21);
    if (iVar21 != 0) {
      memcpy(param_3[5],_Src,(longlong)iVar21 << 4);
    }
  }
  param_3[7] = puVar14;
  *(int *)(local_148 + 0x15) = (int)local_148[0x15] + 1;
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e671d2 FUN_140e671d2 body=339 status=ok
// SIG undefined FUN_140e671d2(void)

void FUN_140e671d2(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  byte bVar8;
  float fVar9;
  float fVar10;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xb4);
  bVar5 = (byte)param_2;
  if (bVar1 == bVar5) {
    return;
  }
  bVar8 = (byte)(param_2 & 0xffffffff);
  *(byte *)((longlong)param_1 + 0xb4) = bVar5;
  uVar7 = (undefined7)(param_2 >> 8);
  if ((byte)(*(byte *)((longlong)param_1 + 0xc4) >> 2 & 1) == (byte)-((char)bVar5 >> 7))
  goto LAB_140e672bc;
  *(byte *)((longlong)param_1 + 0xc4) =
       *(byte *)((longlong)param_1 + 0xc4) & 0xfb | (byte)((param_2 & 0xffffffff) >> 5) & 4;
  if ((*(char *)(param_1[6] + 0x178) == '\x03') ||
     ((plVar2 = *(longlong **)(param_1[6] + 0x1b0), plVar2 != (longlong *)0x0 &&
      (cVar3 = (**(code **)(*plVar2 + 0x700))(), cVar3 != '\0')))) {
    fVar9 = 0.0;
    if ((char)bVar8 < '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      if (0.0 < *(float *)(param_1 + 0x18)) goto LAB_140e672a1;
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      fVar9 = (float)((double)*(float *)((longlong)param_1 +
                                        (ulonglong)((*(byte *)((longlong)param_1 + 0xc4) & 4) >> 2)
                                        * 8 + 0x94) + *(double *)(lVar4 + 0x6d0));
    }
    *(float *)(param_1 + 0x17) = fVar9;
  }
LAB_140e672a1:
  uVar6 = CONCAT71(uVar7,*(undefined1 *)((longlong)param_1 + 0xc4)) & 0xffffffffffffff04;
  FUN_140898514(param_1 + 0xd,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2));
  bVar8 = *(byte *)((longlong)param_1 + 0xb4);
LAB_140e672bc:
  if ((bVar8 & 0x7f) != (bVar1 & 0x7f)) {
    fVar9 = (float)(bVar8 & 0x7f) * 0.01;
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    fVar10 = fVar9;
    if (fVar9 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x14) = fVar10;
    if ((0.0 < fVar9) && ((*(byte *)(param_1 + 5) & 1) == 0)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      if (param_1[6] != 0) {
        FUN_140b8222c(param_1[6],param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e67336 FUN_140e67336 body=44 status=ok
// SIG undefined FUN_140e67336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e67336(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe6c0c = _DAT_14cbe6c0c + -1;
  *param_1 = DAT_14cbe6c00;
  DAT_14cbe6c00 = param_1;
  return;
}



// FUNCTION 140e67362 FUN_140e67362 body=102 status=ok
// SIG undefined FUN_140e67362(void)

ulonglong FUN_140e67362(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140e673ab:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140e673ab;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140e673e8 FUN_140e673e8 body=90 status=ok
// SIG undefined FUN_140e673e8(void)

void FUN_140e673e8(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x7c) == '\x01') &&
      ((*(longlong *)(param_1 + 0xa0) == 0 ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x28) & 2) != 0)))) &&
     ((*(longlong *)(param_1 + 0xb0) == 0 ||
      ((*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x28) & 2) == 0)))) {
    if (*(char *)(param_1 + 0x7d) == '\0') {
      *(undefined1 *)(param_1 + 0x7d) = 1;
      lVar1 = 0x80;
      goto LAB_140e67433;
    }
  }
  else if (*(char *)(param_1 + 0x7d) != '\0') {
    *(undefined1 *)(param_1 + 0x7d) = 0;
    lVar1 = 0x90;
LAB_140e67433:
    FUN_1447cd2ec(param_1 + lVar1,0);
    return;
  }
  return;
}



// FUNCTION 140e67442 FUN_140e67442 body=2048 status=ok
// SIG undefined FUN_140e67442(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e67442(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar16 = param_1[0x15];
  if (((((lVar16 != 0) && (*(char *)(lVar16 + 0x178) != '\x03')) && (param_1[0x7c] != 0)) &&
      ((*(byte *)(param_1[0x7c] + 0x590) & 8) != 0)) || (param_1[0x7a] != 0)) goto LAB_140e67905;
  (**(code **)(*param_1 + 0x5f0))(param_1);
  lVar12 = param_1[0x16];
  if (lVar12 == 0) {
    lVar12 = FUN_1448abda6(param_1);
  }
  if (((param_1[0x75] == 0) || (lVar12 == 0)) || (0xfffffffd < (int)param_1[0x76] - 1U))
  goto LAB_140e67905;
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x48);
  dVar5 = auVar21._0_8_;
  uVar24 = auVar21._0_4_;
  uVar25 = auVar21._4_4_;
  dVar7 = auVar21._8_8_;
  uVar26 = auVar21._8_4_;
  uVar27 = auVar21._12_4_;
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x4a);
  dVar6 = auVar21._0_8_;
  dVar8 = auVar21._8_8_;
  local_a8 = param_1[0x4c];
  uStack_a0 = (longlong *)param_1[0x4d];
  local_98 = param_1[0x4e];
  lStack_90 = param_1[0x4f];
  if ((*(byte *)((longlong)param_1 + 0x2a9) & 1) == 0) {
    dVar19 = dVar6 * dVar6 + dVar5 * dVar5;
    dVar22 = dVar8 * dVar8 + dVar7 * dVar7;
    auVar20._0_8_ = dVar19 + dVar22;
    auVar20._8_8_ = dVar19 + dVar22;
    uVar18 = -(ulonglong)(1e-08 <= auVar20._8_8_);
    auVar21 = sqrtpd(auVar20,auVar20);
    uVar28 = (undefined4)DAT_149934d80;
    uVar29 = DAT_149934d80._4_4_;
    uVar30 = DAT_149934d80._8_4_;
    uVar31 = DAT_149934d80._12_4_;
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar23._0_8_ = auVar21._0_8_ * dVar6;
    auVar23._8_8_ = auVar21._8_8_ * dVar8;
    uVar9 = (ulonglong)(dVar5 * auVar21._0_8_) & -(ulonglong)(1e-08 <= auVar20._0_8_);
    uVar24 = (undefined4)uVar9;
    uVar25 = (undefined4)(uVar9 >> 0x20);
    uVar9 = (ulonglong)(dVar7 * auVar21._8_8_) & uVar18;
    uVar26 = (undefined4)uVar9;
    uVar27 = (undefined4)(uVar9 >> 0x20);
    auVar21._8_4_ = (int)uVar18;
    auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
    auVar21._12_4_ = (int)(uVar18 >> 0x20);
    auVar21 = blendvpd(_DAT_149935300,auVar23,auVar21);
    uVar32 = 0;
    uVar33 = 0x3ff00000;
    uVar34 = 0;
    uVar35 = 0;
  }
  else {
    uVar28 = (undefined4)param_1[0x50];
    uVar29 = *(undefined4 *)((longlong)param_1 + 0x284);
    uVar30 = (undefined4)param_1[0x51];
    uVar31 = *(undefined4 *)((longlong)param_1 + 0x28c);
    uVar32 = (undefined4)param_1[0x52];
    uVar33 = *(undefined4 *)((longlong)param_1 + 0x294);
    uVar34 = (undefined4)param_1[0x53];
    uVar35 = *(undefined4 *)((longlong)param_1 + 0x29c);
  }
  plVar11 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b4100f0;
  plVar11[2] = (longlong)&PTR_FUN_14b40f880;
  plVar11[3] = 0;
  *(undefined4 *)(plVar11 + 4) = 0;
  plVar11[5] = param_1[0x75];
  *(int *)(plVar11 + 6) = (int)param_1[0x76];
  plVar11[7] = 0;
  plVar11[8] = 0;
  if (lVar16 == 0) {
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar16 + 0xc);
    *(uint *)(plVar11 + 8) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar10 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar10 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar15;
      }
    }
  }
  *(int *)((longlong)plVar11 + 0x44) = iVar10;
  plVar11[9] = 0;
  *(undefined4 *)(plVar11 + 10) = uVar24;
  *(undefined4 *)((longlong)plVar11 + 0x54) = uVar25;
  *(undefined4 *)(plVar11 + 0xb) = uVar26;
  *(undefined4 *)((longlong)plVar11 + 0x5c) = uVar27;
  *(undefined1 (*) [16])(plVar11 + 0xc) = auVar21;
  *(undefined4 *)(plVar11 + 0xe) = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar11 + 0x74) = local_a8._4_4_;
  *(undefined4 *)(plVar11 + 0xf) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar11 + 0x7c) = uStack_a0._4_4_;
  plVar11[0x10] = local_98;
  plVar11[0x11] = lStack_90;
  *(undefined4 *)(plVar11 + 0x12) = uVar28;
  *(undefined4 *)((longlong)plVar11 + 0x94) = uVar29;
  *(undefined4 *)(plVar11 + 0x13) = uVar30;
  *(undefined4 *)((longlong)plVar11 + 0x9c) = uVar31;
  *(undefined4 *)(plVar11 + 0x14) = uVar32;
  *(undefined4 *)((longlong)plVar11 + 0xa4) = uVar33;
  *(undefined4 *)(plVar11 + 0x15) = uVar34;
  *(undefined4 *)((longlong)plVar11 + 0xac) = uVar35;
  *(undefined2 *)(plVar11 + 0x16) = 1;
  *(undefined8 *)((longlong)plVar11 + 0xb4) = 0;
  if (((iVar10 == 0) || (uVar3 = *(uint *)(plVar11 + 8), (int)uVar3 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar3 ||
      ((((plVar14 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar14 == (longlong *)0x0 || ((int)plVar14[2] != iVar10)) ||
        ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) || (lVar16 = *plVar14, lVar16 == 0)))))) {
LAB_140e6795f:
    *(undefined4 *)(plVar11 + 9) = 0;
    iVar10 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_142b4754c;
      local_c8 = &LAB_147c45ce0;
      local_d0 = &LAB_1463f1ff4;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0x4000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_140e6795f;
    uVar3 = *(uint *)(lVar16 + 0xc);
    *(uint *)(plVar11 + 9) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar10 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar10 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar15;
      }
    }
  }
  *(int *)((longlong)plVar11 + 0x4c) = iVar10;
  if (plVar11 == (longlong *)0x0) {
    param_1[0x7a] = 0x10;
    plVar14 = (longlong *)param_1[0x7b];
    if (plVar14 != (longlong *)0x0) {
      param_1[0x7b] = 0;
LAB_140e67adf:
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
      if (plVar11 != (longlong *)0x0) goto LAB_140e6779c;
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    param_1[0x7a] = (longlong)(plVar11 + 2);
    plVar14 = (longlong *)param_1[0x7b];
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
      param_1[0x7b] = (longlong)plVar11;
      if (plVar14 != (longlong *)0x0) goto LAB_140e67adf;
    }
LAB_140e6779c:
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
  lVar16 = param_1[0x7a];
  if (*(int *)(lVar16 + 0x10) != 3) {
    FUN_1446efa72((longlong *)(lVar16 + 8),0,3,0x10);
    *(undefined4 *)(lVar16 + 0x10) = 3;
  }
  puVar4 = *(undefined8 **)(lVar16 + 8);
  *puVar4 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  puVar4[2] = lVar13;
  *puVar4 = &PTR_FUN_14b410110;
  puVar4[3] = 0;
  if (param_1 == (longlong *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar4 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar10 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar10 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_140eed980;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_140e67fb0(&local_a8,lVar12);
  if (uStack_a0 != (longlong *)0x0) {
    iVar10 = (int)uStack_a0[1];
    do {
      if (iVar10 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar15 = (int)uStack_a0[1];
      bVar17 = iVar10 == iVar15;
      if (bVar17) {
        *(int *)(uStack_a0 + 1) = iVar10 + 1;
        iVar15 = iVar10;
      }
      iVar10 = iVar15;
      UNLOCK();
      plVar11 = uStack_a0;
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)uStack_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*uStack_a0 + 0x10))();
    }
    lVar16 = local_a8;
    if (plVar11 != (longlong *)0x0) {
      if (local_a8 != 0) {
        local_a8 = param_1[0x7a];
        plVar14 = (longlong *)param_1[0x7b];
        uStack_a0 = plVar14;
        if (plVar14 == (longlong *)0x0) {
          FUN_140e67c44(lVar16,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          FUN_140e67c44();
          if (plVar14 != (longlong *)0x0) {
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
          }
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
    }
  }
LAB_140e67905:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e67c44 FUN_140e67c44 body=121 status=ok
// SIG undefined FUN_140e67c44(void)

void FUN_140e67c44(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_140e67ea2((longlong *)(param_1 + 0x30),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (iVar1 < 1) {
      FUN_140e67cbe(param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 140e67cbe FUN_140e67cbe body=214 status=ok
// SIG undefined FUN_140e67cbe(void)

void FUN_140e67cbe(longlong param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_140e67e35();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
  FUN_140e67d96(&DAT_14c9a7fc8,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
  if (*(int *)(param_1 + 8) == -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
    local_20 = param_1;
    FUN_140e680e8(&DAT_14c9a7fc8,local_24,&local_20,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e67d96 FUN_140e67d96 body=159 status=ok
// SIG undefined FUN_140e67d96(void)

undefined8 FUN_140e67d96(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1457b8dce(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e67e35 FUN_140e67e35 body=108 status=ok
// SIG undefined FUN_140e67e35(void)

undefined * FUN_140e67e35(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a8018) {
    FUN_144b3d300(&DAT_14c9a8018);
    if (DAT_14c9a8018 == -1) {
      FUN_140e68e52(&DAT_14c9a7d50);
      atexit((_func_5014 *)&LAB_142b40470);
      _Init_thread_footer(&DAT_14c9a8018);
    }
  }
  return &DAT_14c9a7d50;
}



// FUNCTION 140e67ea2 FUN_140e67ea2 body=269 status=ok
// SIG undefined FUN_140e67ea2(void)

void FUN_140e67ea2(longlong param_1,int param_2)

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



// FUNCTION 140e67fb0 FUN_140e67fb0 body=310 status=ok
// SIG undefined FUN_140e67fb0(void)

longlong * FUN_140e67fb0(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb81bb0;
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



// FUNCTION 140e680e8 FUN_140e680e8 body=858 status=ok
// SIG undefined FUN_140e680e8(void)

int * FUN_140e680e8(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_1446efaca(param_1,iVar14);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar5 = iVar13 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar10 = iVar13 + 1;
    iVar17 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar17 = iVar13;
    }
    if (iVar17 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        if (iVar13 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar13;
        }
        else {
          uVar9 = iVar13 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar9) {
              uVar6 = uVar9;
            }
          }
          else {
            uVar6 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar12 >> 2);
          iVar10 = -0x20;
          if ((int)uVar9 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar11,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar11;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar13 & 0x1f;
    puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar17 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar16 = (longlong)iVar14;
    iVar13 = *(int *)(*param_1 + 4 + lVar16 * 0x10);
    *(int *)(param_1 + 6) = iVar13;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x10) = 0xffffffff;
    }
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar13 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
  lVar3 = *param_1;
  lVar16 = lVar16 * 0x10;
  uVar12 = *param_3;
  *(ulonglong *)(lVar3 + lVar16) = uVar12;
  *(undefined4 *)(lVar3 + 8 + lVar16) = 0xffffffff;
  uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar13 != -1) {
      do {
        iVar5 = iVar13;
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar5 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x10) == uVar12) {
          *puVar1 = uVar12;
          FUN_1457b8e28(param_1,iVar14);
          cVar7 = '\x01';
          break;
        }
        iVar13 = (int)puVar1[1];
        cVar7 = '\0';
        iVar5 = iVar14;
      } while (iVar13 != -1);
      goto LAB_140e68214;
    }
  }
  cVar7 = '\0';
  iVar5 = iVar14;
LAB_140e68214:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar6) {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)(lVar3 + lVar16 + 0xc) = uVar9;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar16 + 8) =
           *(undefined4 *)
            ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           iVar5;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_140e68bfe(param_1);
    }
  }
  *param_2 = iVar5;
  return param_2;
}



// FUNCTION 140e68442 FUN_140e68442 body=376 status=ok
// SIG undefined FUN_140e68442(void)

void FUN_140e68442(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    FUN_14026e798(&local_28,*(undefined8 *)(param_1 + 0xa8));
    if (local_28 != 0) {
      FUN_14026e798(&local_38,*(undefined8 *)(param_1 + 0x2c8));
      plVar1 = local_30;
      if (local_38 != 0) {
        local_48 = local_38;
        local_40 = local_30;
        if (local_30 == (longlong *)0x0) {
          FUN_140e688ec(local_28,param_1 + 0x3c0,&local_48);
        }
        else {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          FUN_140e688ec(local_28,param_1 + 0x3c0);
          if (plVar1 != (longlong *)0x0) {
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
  }
  if (*(char *)(param_1 + 0x2e0) == '\x03') {
    FUN_140ee5bf8(param_1,0);
  }
  FUN_140e685bc(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e685bc FUN_140e685bc body=704 status=ok
// SIG undefined FUN_140e685bc(void)

void FUN_140e685bc(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  FUN_140e6887e();
  if (((DAT_14c872a72 != '\0') || (lVar5 = *(longlong *)(param_1 + 0x2c8), lVar5 == 0)) ||
     ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) goto LAB_140e685f7;
  uVar2 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  if (((*(uint *)(lVar6 + 8) >> 0x1c & 1) != 0) || (*(char *)(lVar5 + 0x178) != '\x03'))
  goto LAB_140e685f7;
  lVar5 = FUN_1447210f0();
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x155) & 0x20) != 0)) goto LAB_140e685f7;
  lVar6 = *(longlong *)(param_1 + 0x2c8);
  if (DAT_14cae8b20 == 0) {
    local_50 = &local_30;
    local_30 = (code *)&LAB_14355090c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_147b8e16d;
    local_60 = (code *)&LAB_140810a38;
    local_68 = L"Engine";
    local_70 = 0x800000000;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar4 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1468c5283;
    local_60 = FUN_142809da0;
    local_68 = L"Engine";
    local_70 = 0x400000000;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = *(longlong *)(lVar6 + 0x20);
  if (lVar6 == 0) {
LAB_140e686e0:
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x5c8))(*(longlong **)(param_1 + 0x2c8),0);
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar3) ||
         (lVar7 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
         lVar4 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x241) & 0x40) == 0)) goto LAB_140e686e0;
    FUN_140aeefbc(*(undefined8 *)(param_1 + 0x2c8),0,1);
  }
  bVar1 = *(byte *)(lVar5 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    FUN_1405691ed(*(undefined8 *)(param_1 + 0x2c8),0x35);
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
LAB_140e685f7:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6887e FUN_140e6887e body=110 status=ok
// SIG undefined FUN_140e6887e(void)

void FUN_140e6887e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1411cdc38(param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x330) = 0;
    plVar3 = *(longlong **)(param_1 + 0x338);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x338) = 0;
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
  *(undefined1 *)(param_1 + 0x340) = 0;
  return;
}



// FUNCTION 140e688ec FUN_140e688ec body=293 status=ok
// SIG undefined FUN_140e688ec(void)

void FUN_140e688ec(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x238) == *(int *)(param_1 + 0x264)) {
    return;
  }
  uVar5 = (uint)((ulonglong)lVar10 >> 0x10);
  uVar8 = (uint)lVar10 & 0xffff;
  lVar7 = param_1 + 0x268;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x270);
  }
  iVar9 = *(int *)(lVar7 + (ulonglong)
                           (*(int *)(param_1 + 0x278) - 1U &
                           (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar8) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
  if (iVar9 == -1) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x230);
  while (lVar3 = lVar7 + (longlong)iVar9 * 0x20,
        *(longlong *)(lVar7 + (longlong)iVar9 * 0x20) != lVar10) {
    iVar9 = *(int *)(lVar3 + 0x18);
    if (iVar9 == -1) {
      return;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  if ((longlong *)(lVar3 + 8) == (longlong *)0x0) {
    return;
  }
  plVar4 = *(longlong **)(lVar3 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_140e689f0:
    lVar7 = *param_3;
    lVar10 = 0;
  }
  else {
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) goto LAB_140e689f0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar11 = iVar9 == iVar6;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(lVar3 + 8);
    lVar7 = *param_3;
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
  if (lVar10 != lVar7) {
    return;
  }
  FUN_140e68a12((longlong *)(param_1 + 0x230),param_2);
  return;
}



// FUNCTION 140e68a12 FUN_140e68a12 body=156 status=ok
// SIG undefined FUN_140e68a12(void)

undefined8 FUN_140e68a12(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_140e68aae();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e68aae FUN_140e68aae body=95 status=ok
// SIG undefined FUN_140e68aae(void)

void FUN_140e68aae(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_140e68b0e(param_1,param_2,1);
  return;
}



// FUNCTION 140e68b0e FUN_140e68b0e body=96 status=ok
// SIG undefined FUN_140e68b0e(void)

void FUN_140e68b0e(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar3 = param_3;
    do {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar4 = plVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_140e68b6e(param_1,param_2,param_3);
  return;
}



// FUNCTION 140e68b6e FUN_140e68b6e body=144 status=ok
// SIG undefined FUN_140e68b6e(void)

void FUN_140e68b6e(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e68bfe FUN_140e68bfe body=594 status=ok
// SIG undefined FUN_140e68bfe(void)

void FUN_140e68bfe(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140e68e07;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140e68e07:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e68e52 FUN_140e68e52 body=1052 status=ok
// SIG undefined FUN_140e68e52(void)

undefined8 * FUN_140e68e52(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = FUN_1401cb356();
  FUN_145aa41ca(param_1,L"GbxTickerManager",0,uVar3);
  *param_1 = &PTR_FUN_14a1c96e8;
  param_1[3] = 0x3e8000003e800000;
  param_1[4] = 0;
  lVar4 = 0x30;
  do {
    *(undefined4 *)((longlong)param_1 + lVar4 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar4) = 0;
    ((undefined8 *)((longlong)param_1 + lVar4))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar4 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar4 = lVar4 + 0x28;
  } while (lVar4 != 0x198);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4a),4000);
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  DAT_14c9a7d48 = param_1;
  if (DAT_14cadbea0 != 2) {
    FUN_1446efa72(&DAT_14cadbe98,0,2,0x10);
    DAT_14cadbea0 = 2;
  }
  puVar1 = DAT_14cadbe98;
  *DAT_14cadbe98 = &PTR_LAB_14a1c9ba0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar1[2] = lVar5;
  *puVar1 = &PTR_FUN_14a1c9b30;
  puVar1[3] = FUN_140be5727;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_88 = 0;
  (**(code **)(*DAT_14c8407a8 + 0x38))
            (DAT_14c8407a8,L"gbx.TickerManager.BackgroundDeferredFrames",&DAT_14c75f7bc,
             L"Max frames for a background deferred ticker to execute before it\'s ignored.");
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_88 = 0;
  (**(code **)(*DAT_14c8407a8 + 0x30))
            (DAT_14c8407a8,L"gbx.TickerManager.TimeLimitScale",&DAT_14c75f7b8,
             L"Global scale for per-tickgroup TimeLimits.");
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_88 = 0;
  (**(code **)(*DAT_14c8407a8 + 0x30))
            (DAT_14c8407a8,L"gbx.TickerManager.PreserveExcessByGroup",param_1 + 3,
             L"Fraction of time over budget in a tick group applied to the next tick group.");
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  local_88 = 0;
  (**(code **)(*DAT_14c8407a8 + 0x30))
            (DAT_14c8407a8,L"gbx.TickerManager.PreserveExcessByFrame",(longlong)param_1 + 0x1c,
             L"Fraction of time over budget for a frame applied to the next frame.");
  FUN_1462b1950(&local_70);
  lVar4 = 0;
  do {
    param_1[lVar4 * 5 + 6] = (double)*(float *)(param_1 + lVar4 * 5 + 5) / 1000.0;
    lVar5 = FUN_14786402d();
    if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x40) + 8 + lVar6) == lVar4) {
          local_80 = *(undefined2 **)(*(longlong *)(lVar5 + 0x40) + lVar6);
          goto LAB_140e69187;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x48) * 0x10 != lVar6);
    }
    local_80 = (undefined2 *)0x0;
LAB_140e69187:
    FUN_1400021e4(&local_80,&local_70);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = DAT_14c8407a8;
    puVar7 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar7 = local_70;
    }
    FUN_140002266(&local_80,L"gbx.TickerManager.TimeLimitMs.%s",puVar7);
    puVar7 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar7 = local_80;
    }
    local_88 = 0;
    (**(code **)(*plVar2 + 0x30))
              (plVar2,puVar7,param_1 + lVar4 * 5 + 5,
               L"Max time in seconds to tick managed tickable objects in the specified tick group.")
    ;
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 9) {
      if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140e69270 FUN_140e69270 body=354 status=ok
// SIG undefined FUN_140e69270(void)

void FUN_140e69270(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 3) {
    iVar9 = 2;
  }
  else {
    if (*(uint *)(param_1 + 0x1c) < 3) {
      uVar4 = 4;
      if (4 < uVar3) {
        uVar4 = uVar3;
      }
      lVar6 = (longlong)(int)uVar4;
    }
    else {
      lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar6 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140e692fe;
              lVar6 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
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
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_140e692fe:
    iVar5 = (int)(uVar7 >> 3);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar5) {
      iVar9 = iVar5;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar9;
  FUN_14032eba2(param_1,param_2);
  return;
}



// FUNCTION 140e693d2 FUN_140e693d2 body=144 status=ok
// SIG undefined FUN_140e693d2(void)

undefined8 FUN_140e693d2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    plVar4 = *(longlong **)(param_2 + 0x60);
    plVar1 = plVar4 + *(int *)(param_2 + 0x68);
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x508) != 0) {
          if ((longlong)*(int *)(lVar2 + 0x518) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x510) + lVar5) != 0) goto LAB_140e69438;
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(lVar2 + 0x518) * 8 != lVar5);
          }
        }
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          return 1;
        }
LAB_140e69438:
        cVar3 = FUN_1407df772(lVar2 + 0x500,(longlong *)(param_1 + 0xd8));
        if (cVar3 != '\0') {
          return 1;
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return 0;
}



// FUNCTION 140e69462 FUN_140e69462 body=21 status=ok
// SIG undefined FUN_140e69462(void)

undefined8 FUN_140e69462(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e69478 FUN_140e69478 body=2252 status=ok
// SIG undefined FUN_140e69478(void)

void FUN_140e69478(longlong *param_1,int param_2)

{
  undefined8 **ppuVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  byte *pbVar12;
  longlong *plVar13;
  longlong *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  int iVar17;
  byte bVar18;
  longlong lVar19;
  uint uVar20;
  undefined *puVar21;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  byte local_80;
  int local_74;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar21 = (undefined *)(param_1[0x1c] + 0x1b0);
  if (param_1[0x1c] == 0) {
    puVar21 = &DAT_14caf78e0;
  }
  bVar18 = 1;
  if ((param_1[3] != 0) && (lVar19 = *(longlong *)(param_1[3] + 0x9c8), lVar19 != 0)) {
    bVar18 = *(byte *)(lVar19 + 0x430) ^ 1;
  }
  if (((*(int *)((longlong)param_1 + 0xec) != 0) &&
      (uVar20 = *(uint *)(param_1 + 0x1d), -1 < (int)uVar20)) && ((int)uVar20 < DAT_14c9647dc)) {
    plVar11 = (longlong *)
              ((ulonglong)((uVar20 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
    if (((plVar11 != (longlong *)0x0) && ((int)plVar11[2] == *(int *)((longlong)param_1 + 0xec))) &&
       ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
        lVar19 = *plVar11;
      }
      else {
        lVar19 = 0;
      }
      if ((*(byte *)(lVar19 + 0x9f) & 0x40) == 0) {
        uVar20 = *(int *)((longlong)param_1 + 0xac) - 1;
        bVar2 = *(byte *)(param_1 + 0x15);
        if (((bVar18 & bVar2) == 1) &&
           (plVar11 = (longlong *)param_1[0x23], plVar11 != (longlong *)0x0)) {
          uVar16 = 0;
          iVar17 = 0;
          if (1 < uVar20) {
            iVar17 = *(int *)((longlong)param_1 + 0xb4);
          }
          *(int *)((longlong)plVar11 + 0xc) = param_2;
          *(int *)(plVar11 + 1) = iVar17 + param_2;
          *(int *)(plVar11 + 2) = param_2;
          *(undefined2 *)((longlong)plVar11 + 0x14) = 0;
          if (*(int *)((longlong)param_1 + 0xec) != 0) {
            uVar3 = *(uint *)(param_1 + 0x1d);
            uVar16 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((puVar8 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0xec) ||
                  ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) {
                uVar16 = 0;
              }
              else {
                uVar16 = *puVar8;
              }
            }
          }
          (**(code **)(*plVar11 + 0x10))(plVar11,uVar16);
          (**(code **)(*(longlong *)param_1[0x21] + 0x68))
                    ((longlong *)param_1[0x21],param_2,plVar11);
        }
        if (uVar20 < 2) {
          bVar18 = 0;
        }
        else {
          pbVar12 = &DAT_14caf7c78;
          if ((puVar21[0x10] & 1) != 0) {
            pbVar12 = puVar21 + 0x14;
          }
          bVar18 = bVar18 & bVar2 & *pbVar12 ^ 1;
        }
        if ((param_1[0x1f] != 0) && (bVar18 == 0 && param_1[0x25] != 0)) {
          lVar19 = param_1[0x23];
          uVar7 = 0xffffffff;
          if ((lVar19 != 0) && (plVar11 = (longlong *)param_1[0x21], plVar11 != (longlong *)0x0)) {
            local_88 = 1;
            cVar6 = (**(code **)(*plVar11 + 0x48))(plVar11,param_2,0,lVar19);
            if (cVar6 != '\0') {
              uVar7 = *(undefined4 *)(lVar19 + 0x10);
            }
          }
          uVar16 = 0;
          plVar11 = (longlong *)param_1[0x25];
          iVar17 = 0;
          if (1 < uVar20) {
            iVar17 = *(int *)((longlong)param_1 + 0xb4);
          }
          *(int *)((longlong)plVar11 + 0xc) = param_2;
          *(int *)(plVar11 + 1) = iVar17 + param_2;
          *(undefined2 *)((longlong)plVar11 + 0x14) = 0;
          *(undefined4 *)(plVar11 + 2) = uVar7;
          if (*(int *)((longlong)param_1 + 0xec) != 0) {
            uVar20 = *(uint *)(param_1 + 0x1d);
            uVar16 = 0;
            if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
              if ((puVar8 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0xec) ||
                  ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) {
                uVar16 = 0;
              }
              else {
                uVar16 = *puVar8;
              }
            }
          }
          (**(code **)(*plVar11 + 0x10))(plVar11,uVar16);
          (**(code **)(*(longlong *)param_1[0x1f] + 0x68))
                    ((longlong *)param_1[0x1f],param_2,plVar11);
        }
      }
    }
  }
  plVar11 = (longlong *)param_1[4];
  if (plVar11 == (longlong *)0x0) {
    lVar19 = param_1[6];
    lVar4 = *(longlong *)param_1[0xf];
    if (lVar4 == 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar8 = 0xbff0000000000000;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      iVar17 = (int)param_1[0x11];
      *(uint *)(param_1 + 0x11) = iVar17 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8c) < iVar17 + 1U) {
        FUN_1457b8fdc(param_1 + 0x10,iVar17);
      }
      *(undefined8 **)(param_1[0x10] + (longlong)iVar17 * 8) = puVar8;
      plVar11 = *(longlong **)(param_1[0x10] + (longlong)((int)param_1[0x11] + -1) * 8);
    }
    else {
      plVar11 = *(longlong **)(lVar4 + 8);
      lVar5 = param_1[0xf];
      param_1[0xf] = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
    }
    *plVar11 = lVar19;
    param_1[4] = (longlong)plVar11;
  }
  if (((((char)param_1[0x15] != '\0') || (*(int *)((longlong)param_1 + 0xac) - 1U < 2)) &&
      (plVar11[1] == 0)) && (plVar14 = (longlong *)param_1[0x21], plVar14 != (longlong *)0x0)) {
    ppuVar1 = (undefined8 **)(plVar11 + 1);
    (**(code **)(*plVar14 + 8))(plVar14,&local_68);
    if (ppuVar1 == &local_68) {
LAB_140e69d01:
      if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,1);
      }
    }
    else {
      puVar8 = *ppuVar1;
      *ppuVar1 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
        goto LAB_140e69d01;
      }
    }
    (**(code **)(**ppuVar1 + 0xf8))(*ppuVar1,(short)param_1[0x26],1);
  }
  uVar20 = *(int *)((longlong)param_1 + 0xac) - 1;
  if (((uVar20 < 2) && (plVar11[2] == 0)) &&
     (plVar14 = (longlong *)param_1[0x1f], plVar14 != (longlong *)0x0)) {
    ppuVar1 = (undefined8 **)(plVar11 + 2);
    (**(code **)(*plVar14 + 8))(plVar14,&local_68);
    if (ppuVar1 == &local_68) {
LAB_140e69d28:
      if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,1);
      }
    }
    else {
      puVar8 = *ppuVar1;
      *ppuVar1 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
        goto LAB_140e69d28;
      }
    }
    (**(code **)(**ppuVar1 + 0xf8))(*ppuVar1,*(undefined2 *)((longlong)param_1 + 0x132),1);
    uVar20 = *(int *)((longlong)param_1 + 0xac) - 1;
  }
  plVar14 = (longlong *)plVar11[1];
  if ((plVar14 != (longlong *)0x0) &&
     (plVar13 = (longlong *)param_1[0x21], plVar13 != (longlong *)0x0)) {
    if ((1 < uVar20) && ((char)param_1[0x15] == '\0')) goto LAB_140e6981f;
    puVar21 = (undefined *)(param_1[0x1c] + 0x1b0);
    if (param_1[0x1c] == 0) {
      puVar21 = &DAT_14caf78e0;
    }
    iVar17 = 0;
    if (0 < param_2) {
      iVar17 = param_2;
    }
    pcVar15 = &DAT_14c761824;
    if ((puVar21[0x20] & 1) != 0) {
      pcVar15 = puVar21 + 0x24;
    }
    if (*pcVar15 == '\x01') {
      iVar9 = ~(uint)*(ushort *)(param_1 + 0x26) + iVar17;
      iVar10 = 0;
      if (0 < iVar9) {
        iVar10 = iVar9;
      }
      (**(code **)(*plVar14 + 0xf8))
                (plVar14,*(ushort *)(param_1 + 0x26),CONCAT71((int7)((ulonglong)pcVar15 >> 8),1));
      pbVar12 = &DAT_14caf7c7a;
      if ((puVar21[0x28] & 1) != 0) {
        pbVar12 = puVar21 + 0x2c;
      }
      local_80 = *pbVar12 ^ 1;
      local_88 = 1;
      (**(code **)(*(longlong *)param_1[0x21] + 0x80))
                ((longlong *)param_1[0x21],plVar11[1],iVar10,iVar17);
      plVar13 = (longlong *)param_1[0x21];
    }
    pcVar15 = &DAT_14caf7c7a;
    if ((puVar21[0x28] & 1) != 0) {
      pcVar15 = puVar21 + 0x2c;
    }
    if (*pcVar15 == '\x01') {
      iVar9 = (**(code **)(*plVar13 + 0xe8))();
      iVar10 = (int)param_1[0x1a] + 1;
      if (iVar10 < iVar17 - iVar9) {
        iVar10 = iVar17 - iVar9;
      }
      local_88 = 1;
      local_74 = (**(code **)(*(longlong *)param_1[0x21] + 0x38))
                           ((longlong *)param_1[0x21],iVar10,iVar17,0);
      plVar13 = (longlong *)param_1[0x21];
      if (0 < local_74) {
        local_70 = plVar11 + 3;
        (**(code **)(*plVar13 + 8))(plVar13,&local_68);
        iVar9 = (int)plVar11[4];
        lVar19 = (longlong)iVar9;
        *(uint *)(plVar11 + 4) = iVar9 + 1U;
        if (*(uint *)((longlong)plVar11 + 0x24) < iVar9 + 1U) {
          FUN_147c85734(local_70,iVar9);
        }
        plVar13 = local_70;
        *(undefined8 **)(*local_70 + lVar19 * 8) = local_68;
        plVar14 = *(longlong **)(*local_70 + lVar19 * 8);
        (**(code **)(*plVar14 + 0xf8))(plVar14,local_74,1);
        local_80 = 1;
        local_88 = 0;
        (**(code **)(*(longlong *)param_1[0x21] + 0x80))
                  ((longlong *)param_1[0x21],*(undefined8 *)(*plVar13 + lVar19 * 8),iVar10,iVar17);
        plVar13 = (longlong *)param_1[0x21];
      }
    }
    uVar7 = (**(code **)(*plVar13 + 0xd8))();
    *(undefined4 *)(param_1 + 0x1a) = uVar7;
    uVar20 = *(int *)((longlong)param_1 + 0xac) - 1;
  }
  if (((uVar20 < 2) && (plVar14 = (longlong *)param_1[0x1f], plVar14 != (longlong *)0x0)) &&
     (plVar13 = (longlong *)plVar11[2], plVar13 != (longlong *)0x0)) {
    puVar21 = (undefined *)(param_1[0x1c] + 0x1b0);
    if (param_1[0x1c] == 0) {
      puVar21 = &DAT_14caf78e0;
    }
    if (param_2 < 1) {
      param_2 = 0;
    }
    pcVar15 = &DAT_14c761824;
    if ((puVar21[0x20] & 1) != 0) {
      pcVar15 = puVar21 + 0x24;
    }
    if (*pcVar15 == '\x01') {
      iVar10 = ~(uint)*(ushort *)((longlong)param_1 + 0x132) + param_2;
      iVar17 = 0;
      if (0 < iVar10) {
        iVar17 = iVar10;
      }
      (**(code **)(*plVar13 + 0xf8))
                (plVar13,*(ushort *)((longlong)param_1 + 0x132),
                 CONCAT71((int7)((ulonglong)pcVar15 >> 8),1));
      pbVar12 = &DAT_14caf7c7a;
      if ((puVar21[0x28] & 1) != 0) {
        pbVar12 = puVar21 + 0x2c;
      }
      local_80 = *pbVar12 ^ 1;
      local_88 = 1;
      (**(code **)(*(longlong *)param_1[0x1f] + 0x80))
                ((longlong *)param_1[0x1f],plVar11[2],iVar17,param_2);
      plVar14 = (longlong *)param_1[0x1f];
    }
    pcVar15 = &DAT_14caf7c7a;
    if ((puVar21[0x28] & 1) != 0) {
      pcVar15 = puVar21 + 0x2c;
    }
    if (*pcVar15 == '\x01') {
      iVar10 = (**(code **)(*plVar14 + 0xe8))();
      iVar17 = *(int *)((longlong)param_1 + 0xd4) + 1;
      if (iVar17 < param_2 - iVar10) {
        iVar17 = param_2 - iVar10;
      }
      local_88 = 1;
      iVar10 = (**(code **)(*(longlong *)param_1[0x1f] + 0x38))
                         ((longlong *)param_1[0x1f],iVar17,param_2,0);
      plVar14 = (longlong *)param_1[0x1f];
      if (0 < iVar10) {
        plVar13 = plVar11 + 5;
        (**(code **)(*plVar14 + 8))(plVar14,&local_68);
        iVar9 = (int)plVar11[6];
        lVar19 = (longlong)iVar9;
        *(uint *)(plVar11 + 6) = iVar9 + 1U;
        if (*(uint *)((longlong)plVar11 + 0x34) < iVar9 + 1U) {
          FUN_147c85734(plVar13,iVar9);
        }
        *(undefined8 **)(*plVar13 + lVar19 * 8) = local_68;
        plVar11 = *(longlong **)(*plVar13 + lVar19 * 8);
        (**(code **)(*plVar11 + 0xf8))(plVar11,iVar10,1);
        local_80 = 1;
        local_88 = 0;
        (**(code **)(*(longlong *)param_1[0x1f] + 0x80))
                  ((longlong *)param_1[0x1f],*(undefined8 *)(*plVar13 + lVar19 * 8),iVar17,param_2);
        plVar14 = (longlong *)param_1[0x1f];
      }
    }
    uVar7 = (**(code **)(*plVar14 + 0xd8))();
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar7;
  }
LAB_140e6981f:
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 200))(param_1);
    param_1[4] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e69d46 FUN_140e69d46 body=70 status=ok
// SIG undefined FUN_140e69d46(void)

void FUN_140e69d46(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 140e69d8c FUN_140e69d8c body=3223 status=ok
// SIG undefined FUN_140e69d8c(void)

void FUN_140e69d8c(undefined8 *param_1,int param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  uint *puVar13;
  char *pcVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined8 unaff_RBP;
  ulonglong uVar20;
  undefined *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_88 [32];
  byte local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = param_1[5];
  local_60 = param_2;
  if (lVar8 != 0) {
    puVar21 = &DAT_14caf78e0;
    if (param_1[0x1c] != 0) {
      puVar21 = (undefined *)(param_1[0x1c] + 0x1b0);
    }
    if (*(char *)(lVar8 + 0x11) == '\x01') {
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(lVar8 + 0x10);
    }
    if (*(char *)(lVar8 + 0x18) == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(lVar8 + 0x14);
    }
    if (*(char *)(lVar8 + 0x20) == '\x01') {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(lVar8 + 0x1c);
    }
    if (*(char *)(lVar8 + 0x28) == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar8 + 0x24);
    }
    if (*(char *)(lVar8 + 0x2d) == '\x01') {
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(lVar8 + 0x2c);
    }
    if (*(char *)(lVar8 + 0x38) == '\x01') {
      lVar24 = *(longlong *)(lVar8 + 0x30);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      local_50 = (undefined8 *)0x0;
      FUN_14485c47a(&local_50,lVar24);
      param_1[0x1d] = local_50;
    }
    if (*(int *)(lVar8 + 0x4c) != -1) {
      FUN_144a787a6(param_1 + 0x18,lVar8 + 0x40);
    }
    if (*(char *)(lVar8 + 0x71) == '\x01') {
      FUN_140e6aa3c(param_1);
    }
    if (*(char *)(lVar8 + 0x73) == '\x01') {
      FUN_140e6ab0e(param_1);
    }
    if (*(char *)(lVar8 + 0x58) == '\x01') {
      uVar6 = FUN_140e6ac04(param_1);
      (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x10))(*(longlong **)(lVar8 + 0x50),&local_50);
      ppuVar2 = (undefined8 **)(param_1 + 0x23);
      if (ppuVar2 == &local_50) {
LAB_140e6a576:
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      else {
        puVar16 = *ppuVar2;
        *ppuVar2 = local_50;
        local_50 = (undefined8 *)0x0;
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
          goto LAB_140e6a576;
        }
      }
      (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x10))(*(longlong **)(lVar8 + 0x50),&local_50);
      ppuVar2 = (undefined8 **)(param_1 + 0x24);
      if (ppuVar2 == &local_50) {
LAB_140e6a5c0:
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      else {
        puVar16 = *ppuVar2;
        *ppuVar2 = local_50;
        local_50 = (undefined8 *)0x0;
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
          goto LAB_140e6a5c0;
        }
      }
      param_3 = (ulonglong)uVar6;
      (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x18))(*(longlong **)(lVar8 + 0x50),&local_50);
      puVar16 = local_50;
      local_50 = (undefined8 *)0x0;
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14aa2afa0;
      plVar7[2] = (longlong)puVar16;
      param_1[0x21] = puVar16;
      plVar12 = (longlong *)param_1[0x22];
      if (plVar7 == plVar12) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar7 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
            plVar12 = plVar7;
            goto joined_r0x000140e6a99f;
          }
        }
      }
      else {
        param_1[0x22] = plVar7;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
joined_r0x000140e6a99f:
            if (iVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,1);
      }
      FUN_140e6aa3c(param_1);
    }
    if (*(char *)(lVar8 + 0x68) == '\x01') {
      uVar6 = FUN_140e6ac04(param_1);
      (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x10))(*(longlong **)(lVar8 + 0x60),&local_50);
      ppuVar2 = (undefined8 **)(param_1 + 0x25);
      if (ppuVar2 == &local_50) {
LAB_140e6a6c1:
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      else {
        puVar16 = *ppuVar2;
        *ppuVar2 = local_50;
        local_50 = (undefined8 *)0x0;
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
          goto LAB_140e6a6c1;
        }
      }
      param_3 = (ulonglong)uVar6;
      (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x18))(*(longlong **)(lVar8 + 0x60),&local_50);
      puVar16 = local_50;
      local_50 = (undefined8 *)0x0;
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14aa2afa0;
      plVar7[2] = (longlong)puVar16;
      param_1[0x1f] = puVar16;
      plVar12 = (longlong *)param_1[0x20];
      if (plVar7 == plVar12) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar7 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
            plVar12 = plVar7;
            goto joined_r0x000140e6a9dd;
          }
        }
      }
      else {
        param_1[0x20] = plVar7;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
joined_r0x000140e6a9dd:
            if (iVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,1);
      }
      FUN_140e6aa3c(param_1);
    }
    local_50 = param_1;
    if ((*(longlong **)(lVar8 + 0x78) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x78) + 0xf0))(), cVar4 != '\0')) {
      if ((*(int *)((longlong)param_1 + 0xac) - 1U < 2) && (uVar20 = param_1[0x24], uVar20 != 0)) {
        plVar12 = *(longlong **)(lVar8 + 0x78);
        uVar5 = (**(code **)(*plVar12 + 0xd8))(plVar12);
        local_68 = 1;
        cVar4 = (**(code **)(*plVar12 + 0x48))(plVar12,uVar5,0,uVar20);
        uVar18 = 0;
        if (cVar4 != '\0') {
          uVar18 = uVar20;
        }
      }
      else {
        uVar18 = 0;
      }
      pcVar14 = &DAT_14caf7c7c;
      if ((puVar21[0x40] & 1) != 0) {
        pcVar14 = puVar21 + 0x44;
      }
      if ((((((*pcVar14 == '\0') && (*(int *)((longlong)param_1 + 0xac) - 1U < 2)) &&
            (*(int *)((longlong)param_1 + 0xec) != 0)) &&
           ((uVar6 = *(uint *)(param_1 + 0x1d), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc))))
          && (plVar12 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0)) &&
         (((int)plVar12[2] == *(int *)((longlong)param_1 + 0xec) &&
          ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
          lVar24 = *plVar12;
        }
        else {
          lVar24 = 0;
        }
        if ((*(byte *)(lVar24 + 0x9f) & 0x40) == 0) {
          if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
            lVar24 = *plVar12;
          }
          else {
            lVar24 = 0;
          }
          (**(code **)(**(longlong **)(lVar8 + 0x78) + 0xa8))(*(longlong **)(lVar8 + 0x78),lVar24);
        }
      }
      pcVar14 = &DAT_14caf7c79;
      if ((puVar21[0x18] & 1) != 0) {
        pcVar14 = puVar21 + 0x1c;
      }
      if (*pcVar14 == '\0') {
        iVar11 = *(int *)((longlong)param_1 + 0xac);
LAB_140e6a2b2:
        uVar20 = 0;
      }
      else {
        iVar11 = *(int *)((longlong)param_1 + 0xac);
        if (*(char *)(param_1 + 0x15) != '\x01') goto LAB_140e6a2b2;
        uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar11 - 3U < 0xfffffffe);
      }
      plVar12 = *(longlong **)(lVar8 + 0x78);
      param_3 = 0;
      if (1 < iVar11 - 1U) {
        param_3 = (ulonglong)*(uint *)((longlong)param_1 + 0xb4);
      }
      local_68 = 0;
      uVar5 = (**(code **)(*(longlong *)param_1[0x21] + 0x90))
                        ((longlong *)param_1[0x21],plVar12,param_3,uVar20 & 0xffffffff);
      if ((char)uVar20 != '\0') {
        FUN_1457b8e9c(param_1,uVar5);
      }
      (**(code **)(*plVar12 + 0x100))(plVar12);
      if (((*(int *)((longlong)param_1 + 0xac) - 1U < 2) &&
          (iVar11 = (**(code **)(*(longlong *)param_1[0x21] + 0xd8))(), uVar18 != 0)) &&
         (iVar11 < local_60)) {
        *(int *)(uVar18 + 0xc) = local_60;
        *(int *)(uVar18 + 8) = local_60;
        (**(code **)(*(longlong *)param_1[0x21] + 0x68))();
        param_3 = uVar18;
      }
    }
    if ((*(longlong **)(lVar8 + 0x80) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0xf0))(), puVar16 = local_50,
       cVar4 != '\0')) {
      pcVar14 = &DAT_14caf7c78;
      if ((puVar21[0x10] & 1) != 0) {
        pcVar14 = puVar21 + 0x14;
      }
      param_3 = 0;
      bVar25 = false;
      if (*pcVar14 == '\x01') {
        if (*(char *)(local_50 + 0x15) == '\x01') {
          bVar25 = *(int *)((longlong)local_50 + 0xac) - 3U < 0xfffffffe;
        }
        else {
          bVar25 = false;
        }
      }
      plVar12 = *(longlong **)(lVar8 + 0x80);
      if (1 < *(int *)((longlong)local_50 + 0xac) - 1U) {
        param_3 = (ulonglong)*(uint *)((longlong)local_50 + 0xb4);
      }
      local_68 = 0;
      uVar5 = (**(code **)(*(longlong *)param_1[0x1f] + 0x90))
                        ((longlong *)param_1[0x1f],plVar12,param_3,bVar25);
      if (bVar25 != false) {
        FUN_1457b8e9c(puVar16,uVar5);
      }
      (**(code **)(*plVar12 + 0x100))(plVar12);
    }
    iVar11 = *(int *)(lVar8 + 0x90);
    if ((longlong)iVar11 != 0) {
      lVar24 = *(longlong *)(lVar8 + 0x88);
      lVar23 = 0;
      do {
        plVar12 = *(longlong **)(lVar24 + lVar23);
        if ((plVar12 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar12 + 0xf0))(), cVar4 != '\0')) {
          puVar9 = puVar21 + 0x1c;
          if ((puVar21[0x18] & 1) == 0) {
            puVar9 = &DAT_14caf7c79;
          }
          param_3 = *(ulonglong *)(lVar24 + lVar23);
          FUN_14362e30a(&local_50,param_1[0x21],param_3,*puVar9);
        }
        lVar23 = lVar23 + 8;
      } while ((longlong)iVar11 * 8 != lVar23);
    }
    iVar11 = *(int *)(lVar8 + 0xa0);
    if ((longlong)iVar11 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x98);
      lVar24 = 0;
      do {
        plVar12 = *(longlong **)(lVar8 + lVar24);
        if ((plVar12 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar12 + 0xf0))(), cVar4 != '\0')) {
          puVar9 = puVar21 + 0x14;
          if ((puVar21[0x10] & 1) == 0) {
            puVar9 = &DAT_14caf7c78;
          }
          param_3 = *(ulonglong *)(lVar8 + lVar24);
          FUN_14362e30a(&local_50,param_1[0x1f],param_3,*puVar9);
        }
        lVar24 = lVar24 + 8;
      } while ((longlong)iVar11 * 8 != lVar24);
    }
  }
  puVar21 = &DAT_14caf78e0;
  if (param_1[0x1c] != 0) {
    puVar21 = (undefined *)(param_1[0x1c] + 0x1b0);
  }
  if ((param_1[3] == 0) || (lVar8 = *(longlong *)(param_1[3] + 0x9c8), lVar8 == 0)) {
    bVar19 = 0;
    uVar20 = 0;
  }
  else {
    bVar19 = *(byte *)(lVar8 + 0x430);
    uVar20 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(lVar8 + 0x431));
  }
  if (*(int *)((longlong)param_1 + 0xec) == 0) goto LAB_140e6a0b6;
  puVar13 = (uint *)(param_1 + 0x1d);
  uVar6 = *puVar13;
  if (((((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) ||
      (plVar12 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
      plVar12 == (longlong *)0x0)) ||
     (((int)plVar12[2] != *(int *)((longlong)param_1 + 0xec) ||
      (iVar11 = *(int *)((longlong)param_1 + 0xac), (*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
  goto LAB_140e6a0b6;
  if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
    lVar8 = *plVar12;
  }
  else {
    lVar8 = 0;
  }
  if ((*(byte *)(lVar8 + 0x9f) & 0x40) != 0) goto LAB_140e6a0b6;
  uVar18 = uVar20;
  if (((bVar19 != 0) && (param_1[0x1f] != 0)) &&
     (plVar12 = (longlong *)param_1[0x25], plVar12 != (longlong *)0x0)) {
    *(int *)((longlong)plVar12 + 0xc) = local_60;
    local_68 = DAT_14c7617fd & (byte)uVar20 ^ 1;
    uVar18 = uVar20 & 0xffffffff;
    cVar4 = (**(code **)(*(longlong *)param_1[0x1f] + 0x48))
                      ((longlong *)param_1[0x1f],local_60,uVar20,plVar12);
    if ((cVar4 != '\0') && (*(char *)((longlong)plVar12 + 0x14) == '\x01')) {
      uVar10 = FUN_14479d2ce(puVar13);
      (**(code **)(*plVar12 + 8))(plVar12,uVar10);
      uVar18 = uVar20 & 0xffffffff;
    }
  }
  if (((param_1[0x21] == 0) || (plVar12 = (longlong *)param_1[0x23], plVar12 == (longlong *)0x0)) ||
     ((byte)(*(byte *)(param_1 + 0x15) ^ 1 | bVar19) != 1)) goto LAB_140e6a0b6;
  iVar3 = *(int *)((longlong)plVar12 + 0xc);
  *(int *)((longlong)plVar12 + 0xc) = local_60;
  iVar17 = iVar3 + 1;
  local_58 = puVar13;
  if (*(int *)(param_1 + 0x1b) <= iVar3 && bVar19 == 0) {
    pcVar14 = &DAT_14caf7c7b;
    if ((puVar21[0x30] & 1) != 0) {
      pcVar14 = puVar21 + 0x34;
    }
    iVar17 = *(int *)(param_1 + 0x1b);
    if (*pcVar14 == '\x01') {
      plVar7 = (longlong *)param_1[0x21];
      local_5c = (uint)uVar18;
      uVar10 = FUN_14479d2ce(puVar13);
      local_68 = 0;
      (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined4 *)(param_1 + 0x1b),iVar3,uVar10);
      uVar18 = (ulonglong)local_5c;
      iVar17 = iVar3 + 1;
    }
  }
  pbVar15 = &DAT_14c761825;
  if ((puVar21[0x38] & 1) != 0) {
    pbVar15 = puVar21 + 0x3c;
  }
  local_68 = *pbVar15 ^ 1;
  cVar4 = (**(code **)(*(longlong *)param_1[0x21] + 0x48))
                    ((longlong *)param_1[0x21],local_60,uVar18,plVar12);
  puVar13 = local_58;
  if (cVar4 == '\0') goto LAB_140e6a0b6;
  uVar22 = iVar11 - 1;
  uVar6 = *(uint *)((longlong)plVar12 + 0xc);
  if (bVar19 == 0) {
    if (iVar17 < (int)uVar6) {
      pcVar14 = &DAT_14caf7c7b;
      if ((puVar21[0x30] & 1) != 0) {
        pcVar14 = puVar21 + 0x34;
      }
      local_5c = uVar22;
      if (*pcVar14 == '\x01') {
        do {
          local_68 = 1;
          cVar4 = (**(code **)(*(longlong *)param_1[0x21] + 0x48))
                            ((longlong *)param_1[0x21],iVar17,uVar18 & 0xffffffff,plVar12);
          if ((iVar17 < (int)uVar6) && (cVar4 != '\0')) {
            uVar10 = FUN_14479d2ce(local_58);
            (**(code **)(*plVar12 + 8))(plVar12,uVar10);
          }
          iVar17 = iVar17 + 1;
          puVar13 = local_58;
        } while (uVar6 + 1 != iVar17);
      }
      else {
        (**(code **)(*(longlong *)param_1[0x21] + 0x60))((longlong *)param_1[0x21],iVar17,plVar12);
        uVar22 = local_5c;
      }
    }
  }
  else if ((int)uVar6 < local_60) {
    fVar26 = 0.0;
    if (((param_1[3] != 0) && (lVar8 = *(longlong *)(param_1[3] + 0x1c0), lVar8 != 0)) &&
       (iVar11 = ~uVar6 + *(int *)(lVar8 + 0x3e4), 0 < iVar11)) {
      fVar26 = (float)(int)(*(int *)(lVar8 + 0x3e0) - uVar6) / (float)iVar11;
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,fVar26);
  }
  if ((uVar22 < 2) && ((int)plVar12[2] == -1)) {
    *(undefined2 *)((longlong)plVar12 + 0x14) = 1;
    *(int *)((longlong)plVar12 + 0xc) = local_60;
    (**(code **)(*(longlong *)param_1[0x21] + 0x68))((longlong *)param_1[0x21],local_60,plVar12);
  }
  if (*(int *)((longlong)param_1 + 0xec) == 0) {
LAB_140e6a4d7:
    uVar10 = 0;
  }
  else {
    uVar6 = *puVar13;
    uVar10 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar16 == (undefined8 *)0x0) ||
         ((*(int *)(puVar16 + 2) != *(int *)((longlong)param_1 + 0xec) ||
          ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_140e6a4d7;
      uVar10 = *puVar16;
    }
  }
  (**(code **)(*plVar12 + 8))(plVar12,uVar10);
LAB_140e6a0b6:
  *(undefined4 *)(param_1 + 0x1b) = 0x7fffffff;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6aa24 FUN_140e6aa24 body=24 status=ok
// SIG undefined FUN_140e6aa24(void)

void FUN_140e6aa24(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e6aa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140e6aa3c FUN_140e6aa3c body=191 status=ok
// SIG undefined FUN_140e6aa3c(void)

void FUN_140e6aa3c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1c0), lVar2 != 0)) {
    FUN_140e6ab0e();
    local_30 = *(undefined8 *)(param_1 + 0x108);
    local_28 = *(longlong **)(param_1 + 0x110);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140e6acda(lVar2 + 0x3b8,&local_30);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6ab0e FUN_140e6ab0e body=245 status=ok
// SIG undefined FUN_140e6ab0e(void)

void FUN_140e6ab0e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1c0), lVar2 != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x108);
    local_30 = *(longlong **)(param_1 + 0x110);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = &local_38;
    FUN_140e6ae16(lVar2 + 0x3b8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    local_38 = *(undefined8 *)(param_1 + 0xf8);
    local_30 = *(longlong **)(param_1 + 0x100);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = &local_38;
    FUN_140e6ae16(lVar2 + 0x3c8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6ac04 FUN_140e6ac04 body=213 status=ok
// SIG undefined FUN_140e6ac04(void)

int FUN_140e6ac04(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined **ppuVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    iVar6 = 0;
  }
  else {
    lVar4 = FUN_14091baa4();
    ppuVar5 = *(undefined ***)(lVar4 + 8);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = &PTR_PTR_14c75ef90;
    }
    fVar7 = (float)(**(code **)(*ppuVar5 + 0x60))();
    dVar8 = (double)(fVar7 * 0.001) / *(double *)(lVar1 + 0x228);
    iVar3 = -((int)ROUND(-0.5 - (dVar8 + dVar8)) >> 1);
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    if (1 < *(int *)(param_1 + 0xac) - 1U) {
      if (*(char *)(param_1 + 0xb8) == '\x02') {
        lVar4 = FUN_14091baa4();
        ppuVar5 = &PTR_PTR_14c75ef90;
        if (*(undefined ***)(lVar4 + 8) != (undefined **)0x0) {
          ppuVar5 = *(undefined ***)(lVar4 + 8);
        }
        cVar2 = (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
        if ((cVar2 != '\0') && (*(longlong *)(lVar1 + 0x1c0) == 0)) {
          FUN_145757e4e(lVar1);
        }
      }
      if (*(longlong *)(lVar1 + 0x1c0) != 0) {
        iVar6 = *(int *)(*(longlong *)(lVar1 + 0x1c0) + 0x10);
      }
    }
  }
  return iVar6;
}



// FUNCTION 140e6acda FUN_140e6acda body=316 status=ok
// SIG undefined FUN_140e6acda(void)

void FUN_140e6acda(longlong *param_1,longlong *param_2)

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
LAB_140e6ad26:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar8[1];
        do {
          if (iVar7 == 0) goto LAB_140e6ad26;
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
LAB_140e6ad92:
        lVar10 = 0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_140e6ad92;
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
    FUN_1457b9062(param_1,iVar7);
  }
  lVar5 = *param_1;
  *(longlong *)(lVar5 + (longlong)iVar7 * 0x10) = *param_2;
  *(longlong *)(lVar5 + 8 + (longlong)iVar7 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140e6ae16 FUN_140e6ae16 body=782 status=ok
// SIG undefined FUN_140e6ae16(void)

void FUN_140e6ae16(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  
  iVar2 = (int)param_1[1];
  lVar16 = (longlong)iVar2;
  if (lVar16 != 0) {
    plVar3 = (longlong *)*param_1;
    plVar4 = (longlong *)*param_2;
    plVar9 = (longlong *)plVar3[1];
    if (plVar9 == (longlong *)0x0) {
LAB_140e6ae58:
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_140e6ae58;
        LOCK();
        iVar14 = (int)plVar9[1];
        bVar17 = iVar7 == iVar14;
        if (bVar17) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar14 = iVar7;
        }
        iVar7 = iVar14;
        UNLOCK();
      } while (!bVar17);
    }
    lVar10 = *plVar3;
    plVar5 = (longlong *)plVar4[1];
    if (plVar5 == (longlong *)0x0) {
      lVar13 = 0;
    }
    else {
      iVar7 = (int)plVar5[1];
      lVar13 = 0;
      do {
        if (iVar7 == 0) goto LAB_140e6ae97;
        LOCK();
        iVar14 = (int)plVar5[1];
        bVar17 = iVar7 == iVar14;
        if (bVar17) {
          *(int *)(plVar5 + 1) = iVar7 + 1;
          iVar14 = iVar7;
        }
        iVar7 = iVar14;
        UNLOCK();
      } while (!bVar17);
      lVar13 = *plVar4;
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
LAB_140e6ae97:
    if (plVar9 == (longlong *)0x0) {
      lVar10 = 0;
    }
    else {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    iVar14 = 0;
    iVar7 = 0;
    bVar17 = lVar10 == lVar13;
    do {
      lVar13 = (longlong)iVar7;
      lVar10 = lVar13;
      iVar8 = iVar7 + 1;
      if (iVar7 + 1 < iVar2) {
        iVar8 = iVar2;
      }
      do {
        lVar10 = lVar10 + 1;
        if (lVar16 <= lVar10) goto LAB_140e6af86;
        plVar4 = (longlong *)*param_2;
        plVar9 = (longlong *)plVar3[lVar10 * 2 + 1];
        if (plVar9 == (longlong *)0x0) {
LAB_140e6af15:
          plVar9 = (longlong *)0x0;
        }
        else {
          iVar11 = (int)plVar9[1];
          do {
            if (iVar11 == 0) goto LAB_140e6af15;
            LOCK();
            iVar6 = (int)plVar9[1];
            bVar18 = iVar11 == iVar6;
            if (bVar18) {
              *(int *)(plVar9 + 1) = iVar11 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
            UNLOCK();
          } while (!bVar18);
        }
        lVar15 = plVar3[lVar10 * 2];
        plVar5 = (longlong *)plVar4[1];
        if (plVar5 == (longlong *)0x0) {
LAB_140e6b025:
          lVar12 = 0;
        }
        else {
          iVar11 = (int)plVar5[1];
          do {
            if (iVar11 == 0) goto LAB_140e6b025;
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar18 = iVar11 == iVar6;
            if (bVar18) {
              *(int *)(plVar5 + 1) = iVar11 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
            UNLOCK();
          } while (!bVar18);
          lVar12 = *plVar4;
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
        if (plVar9 == (longlong *)0x0) {
          lVar15 = 0;
        }
        else {
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      } while (bVar17 == (lVar15 == lVar12));
      iVar8 = (int)lVar10;
LAB_140e6af86:
      iVar11 = iVar8 - iVar7;
      if (bVar17) {
        FUN_140e6b124(plVar3 + lVar13 * 2,iVar11);
      }
      else {
        if (iVar14 != iVar7) {
          memmove(plVar3 + (longlong)iVar14 * 2,plVar3 + lVar13 * 2,(longlong)iVar11 << 4);
        }
        iVar14 = iVar14 + iVar11;
      }
      iVar7 = iVar8;
      bVar17 = (bool)(bVar17 ^ 1);
    } while (lVar10 < lVar16);
    *(int *)(param_1 + 1) = iVar14;
  }
  return;
}



// FUNCTION 140e6b124 FUN_140e6b124 body=58 status=ok
// SIG undefined FUN_140e6b124(void)

void FUN_140e6b124(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6b166 FUN_140e6b166 body=424 status=ok
// SIG undefined FUN_140e6b166(void)

longlong * FUN_140e6b166(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = (longlong)&PTR_FUN_14b207800;
  FUN_140e6b310(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_40 = (longlong *)0x2;
  local_38 = (longlong *)0x2;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_40);
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_140e6b3bc(plVar1,param_1 + 0x1f);
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_140aec6f8(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_140e6b258;
    param_1[0x1d] = 0;
LAB_140e6b2b0:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140e6b258;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_38 != plVar5) {
      param_1[0x1d] = (longlong)local_38;
      if (plVar5 == (longlong *)0x0) goto LAB_140e6b258;
      goto LAB_140e6b2b0;
    }
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_140e6b258;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140e6b258:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6b310 FUN_140e6b310 body=171 status=ok
// SIG undefined FUN_140e6b310(void)

void FUN_140e6b310(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a4ab3d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return;
}



// FUNCTION 140e6b3bc FUN_140e6b3bc body=197 status=ok
// SIG undefined FUN_140e6b3bc(void)

undefined8 * FUN_140e6b3bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_140e6b482();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 140e6b482 FUN_140e6b482 body=57 status=ok
// SIG undefined FUN_140e6b482(void)

void FUN_140e6b482(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4958 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4958 = FUN_140002ddd(FUN_146345ad3,uVar1,L"MovieSceneStringChannel");
  }
  return;
}



// FUNCTION 140e6b4bc FUN_140e6b4bc body=29 status=ok
// SIG undefined FUN_140e6b4bc(void)

void FUN_140e6b4bc(longlong param_1)

{
  FUN_140e6b4da(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  return;
}



// FUNCTION 140e6b4da FUN_140e6b4da body=63 status=ok
// SIG undefined FUN_140e6b4da(void)

void FUN_140e6b4da(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1401a56c2(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1403af278(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e6b522 FUN_140e6b522 body=120 status=ok
// SIG undefined FUN_140e6b522(void)

undefined8 FUN_140e6b522(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cb8d338;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8d338 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6b59c FUN_140e6b59c body=791 status=ok
// SIG undefined FUN_140e6b59c(void)

undefined4 FUN_140e6b59c(longlong *param_1,int param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float local_114;
  float local_110;
  undefined2 local_10a;
  undefined **local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined7 local_a0;
  undefined4 uStack_99;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)((longlong)param_1 + 0x37b) == '\x01') {
    if ((char)param_1[0x6f] == '\0') {
      cVar3 = *(char *)((longlong)param_1 + 0x379);
    }
    else {
      cVar3 = '\x01';
    }
    if ((param_2 == 0) && (cVar3 != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x37a) = 0;
      plVar5 = (longlong *)FUN_144a81a0a();
      (**(code **)(*plVar5 + 0x50))(plVar5,&local_74);
      uVar4 = DAT_14c9680a8;
      (**(code **)(*(longlong *)DAT_14c968088[1] + 0x20))((longlong *)DAT_14c968088[1],&local_108);
      local_128 = local_74;
      uVar4 = (**(code **)(*param_1 + 0x100))(param_1,&local_108,0,uVar4);
      goto LAB_140e6b77a;
    }
  }
  FUN_140e6b8b4(&local_90);
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_10a);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 1;
  (**(code **)(param_1[-0x29] + 0x70))(param_1 + -0x29,&local_114);
  fVar6 = (float)param_3[1];
  fVar7 = (float)*param_3;
  local_fc = (*(code *)**(undefined8 **)param_1[0xbb])();
  local_100 = local_10a;
  local_fe = 0;
  local_f0 = 0;
  local_108 = &PTR_FUN_149eda650;
  local_e0 = local_114;
  local_dc = local_110;
  local_d4 = fVar6 - local_110;
  local_d8 = fVar7 - local_114;
  local_c8 = local_90;
  local_c0 = local_88;
  local_b8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b0 = 10;
  local_a8 = 0x3f800000;
  local_a4 = 0;
  local_a0 = 0;
  uStack_99 = 0;
  local_f8 = local_fc;
  local_e8 = fVar7;
  local_e4 = fVar6;
  local_d0 = plVar1;
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
  uVar4 = FUN_140e6b9a2(param_1 + -0x29,&local_108);
  plVar5 = local_b8;
  local_108 = &PTR_FUN_149eda650;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
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
LAB_140e6b77a:
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6b8b4 FUN_140e6b8b4 body=238 status=ok
// SIG undefined FUN_140e6b8b4(void)

undefined8 * FUN_140e6b8b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = DAT_14c966e80;
  param_1[1] = DAT_14c966e88;
  lVar5 = DAT_14c966e90;
  param_1[2] = DAT_14c966e90;
  if (lVar5 != 0) {
    LOCK();
    piVar2 = (int *)(lVar5 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (param_2 == 0) {
    *param_1 = DAT_14c966e98;
    uVar4 = DAT_14c966ea0;
    lVar5 = DAT_14c966ea8;
LAB_140e6b902:
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_1[2];
    param_1[1] = uVar4;
    param_1[2] = lVar5;
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
  else {
    switch(param_2) {
    case 1:
      puVar6 = &DAT_14c966fb8;
      break;
    case 2:
      *param_1 = DAT_14c966fa0;
      uVar4 = DAT_14c966fa8;
      lVar5 = DAT_14c966fb0;
      goto LAB_140e6b902;
    case 3:
      puVar6 = &DAT_14c964d40;
      break;
    case 4:
      puVar6 = &DAT_14c964d58;
      break;
    default:
      goto switchD_140e6b95a_default;
    }
    FUN_1413a517a(param_1,puVar6);
  }
switchD_140e6b95a_default:
  return param_1;
}



// FUNCTION 140e6b9a2 FUN_140e6b9a2 body=1246 status=ok
// SIG undefined FUN_140e6b9a2(void)

ulonglong FUN_140e6b9a2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong ***ppplVar8;
  longlong *unaff_RBX;
  undefined7 uVar10;
  ulonglong uVar9;
  double dVar11;
  double dVar12;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined4 local_260;
  longlong *local_258;
  longlong *plStack_250;
  undefined1 *local_1a0;
  longlong **local_198;
  longlong *local_190;
  undefined8 **local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((int)param_1[0x6d] != -1) {
    lVar7 = FUN_14171dbb4();
    if ((int)param_1[0x6d] != -1) {
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + -1;
      *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
    }
  }
  dVar11 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  dVar12 = (double)param_1[0x6e];
  if ((dVar12 != dVar11) || (NAN(dVar12) || NAN(dVar11))) {
    param_1[0x6e] = (longlong)dVar11;
    FUN_1402c1cc6(param_1 + 0x70,dVar11);
    dVar12 = (double)param_1[0x6e];
  }
  param_1[0x6f] = (longlong)dVar12;
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  if (iVar3 == 0) {
    local_1a0 = (undefined1 *)param_2[8];
    local_198 = (longlong **)param_2[9];
    local_190 = (longlong *)param_2[10];
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_140bedc94(param_1 + 0x2a,&local_1a0);
    unaff_RBX = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_190 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)unaff_RBX + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
        }
      }
    }
  }
  local_198 = &local_258;
  local_1a0 = &LAB_1428f5dbc;
  local_258 = param_1;
  plStack_250 = param_2;
  cVar6 = FUN_1402c4aee(param_1 + 0xc9);
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (cVar6 == '\0') {
    local_1a0 = (undefined1 *)CONCAT71(local_1a0._1_7_,DAT_14c96b238);
    local_78 = (longlong ***)0x0;
    local_70 = 0x400000000;
    local_68 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_141229344(param_1,&local_258,&local_1a0,param_2);
    uVar9 = CONCAT71(uVar10,local_258._0_1_);
    FUN_14493db24(&local_258);
    if ((iVar3 == 0) && ((int)param_1[0x2b] == *(int *)((longlong)param_1 + 0x184))) {
      local_258 = (longlong *)0x0;
      plStack_250 = (longlong *)0x0;
      (**(code **)(*DAT_14c968088 + 0x48))(DAT_14c968088,&local_258);
      plVar4 = plStack_250;
      if (plStack_250 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_250 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plStack_250)(plStack_250);
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
    FUN_1447fa2ac(local_50,uStack_48 & 0xffffffff);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    ppplVar8 = (longlong ***)local_78;
    if ((longlong ***)local_78 == (longlong ***)0x0) {
      ppplVar8 = &local_198;
    }
    FUN_1447157bd(ppplVar8,local_70 & 0xffffffff);
    if ((longlong ***)local_78 != (longlong ***)0x0) {
      FUN_1400020a8();
    }
    goto LAB_140e6bd33;
  }
  uVar9 = CONCAT71(uVar10,1);
  if (*(char *)((longlong)param_2 + 100) != '\x01') goto LAB_140e6bd33;
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  if (((longlong)iVar3 < 0) || ((int)param_1[99] <= iVar3)) {
LAB_140e6be08:
    FUN_141370954(param_1,&local_258,iVar3,0);
  }
  else {
    lVar7 = (longlong)iVar3 * 0x10;
    plVar4 = *(longlong **)(param_1[0x62] + lVar7);
    plVar5 = *(longlong **)(param_1[0x62] + 8 + lVar7);
    if (plVar5 == (longlong *)0x0) {
      if (plVar4 == (longlong *)0x0) goto LAB_140e6be08;
      plStack_250 = (longlong *)0x0;
      local_258 = plVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_258 = plVar4;
        plStack_250 = plVar5;
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (plVar4 == (longlong *)0x0) goto LAB_140e6be08;
    }
  }
  lVar7 = local_258[3];
  FUN_1401b43e8(param_1,&local_268);
  local_288 = 0;
  local_280 = (int)lVar7;
  (**(code **)(*param_1 + 0x108))(param_1,&local_1a0,param_2[4],&local_268);
  FUN_1401b439d(local_268,local_260);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  local_278 = 0;
  uStack_270 = 0;
  local_288 = 1;
  FUN_14122a7a6(local_258,param_2,&local_1a0);
  FUN_1447fa2ac(local_50,uStack_48 & 0xffffffff);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  ppplVar8 = (longlong ***)local_78;
  if ((longlong ***)local_78 == (longlong ***)0x0) {
    ppplVar8 = &local_198;
  }
  FUN_1447157bd(ppplVar8,local_70 & 0xffffffff);
  if ((longlong ***)local_78 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_250;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_250 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_140e6bd33:
  if ((local_40 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6be82 FUN_140e6be82 body=254 status=ok
// SIG undefined FUN_140e6be82(void)

void FUN_140e6be82(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar2 == '\0') {
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_140d2f0ba(&local_68,param_2);
      uVar3 = uStack_60;
      if ((uint)uStack_60 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar1 + (uint)uStack_60;
        if ((uint)(*(int *)(param_1 + 0x84) - iVar1) < (uint)uStack_60) {
          FUN_140d2f4b4((longlong *)(param_1 + 0x78),iVar1);
        }
        FUN_140e6bf81((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x78),local_68,
                      uVar3 & 0xffffffff);
        uVar3 = uStack_60 & 0xffffffff;
      }
      FUN_140d2ef74(local_68,uVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (cVar2 == '\0');
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6bf81 FUN_140e6bf81 body=40 status=ok
// SIG undefined FUN_140e6bf81(void)

void FUN_140e6bf81(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140e6bfba FUN_140e6bfba body=44 status=ok
// SIG undefined FUN_140e6bfba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e6bfba(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75354 = _DAT_14cb75354 + -1;
  *param_1 = DAT_14cb75348;
  DAT_14cb75348 = param_1;
  return;
}



// FUNCTION 140e6bfe6 FUN_140e6bfe6 body=339 status=ok
// SIG undefined FUN_140e6bfe6(void)

void FUN_140e6bfe6(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_140e6c11f:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x1c0) & 0x40) == 0)) ||
       ((~*(byte *)(lVar3 + 0x1c2) & 0x41) != 0)) goto LAB_140e6c11f;
    cVar1 = (**(code **)(*param_2 + 0x460))(param_2);
    if (cVar1 != '\x02') goto LAB_140e6c11f;
    uVar2 = (**(code **)(*param_2 + 0x408))(param_2);
    if (uVar2 < 2) goto LAB_140e6c11f;
    (**(code **)(*param_2 + 0x410))(param_2,&local_2a);
    plVar4 = (longlong *)0x0;
    if (local_2a == 1) {
      plVar4 = param_2;
    }
  }
  if ((longlong *)param_1[0x151] == plVar4) goto LAB_140e6c0fe;
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x151] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) goto LAB_140e6c0ae;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0x151] = (longlong)plVar4;
LAB_140e6c0ae:
    (**(code **)(*param_1 + 0x310))(param_1);
  }
  if ((param_1[0xb5] != 0) &&
     (param_1[0x151] == 0 ||
      (DAT_14cad2be8 == 0 || (int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c)))) {
    FUN_140e6c13a(param_1[0xb5]);
  }
LAB_140e6c0fe:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6c13a FUN_140e6c13a body=1201 status=ok
// SIG undefined FUN_140e6c13a(void)

void FUN_140e6c13a(undefined8 param_1,undefined8 param_2)

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
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_78 = param_1;
  uStack_70 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140e6c182;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140e6c187;
      goto LAB_140e6c1b1;
    }
  }
  else {
LAB_140e6c182:
    if (iVar6 != 0x10) {
LAB_140e6c1b1:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140e6c187;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140e6c187;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140e6c312;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14365fa42);
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
LAB_140e6c312:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140e6c392;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140e6c392:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa5a0e0;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_78._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_70._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
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
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa5a090;
        local_40 = (undefined4)local_78;
        uStack_3c = local_78._4_4_;
        uStack_38 = (undefined4)uStack_70;
        uStack_34 = uStack_70._4_4_;
        local_68[0] = &LAB_1436633f6;
        FUN_14005a792(&DAT_14ca9a440,L"FSetCustomGlowMaterial",&DAT_14cafe23c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_140e6c24d;
    }
  }
LAB_140e6c187:
  FUN_1436630c8(&local_78);
LAB_140e6c24d:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6c5f2 FUN_140e6c5f2 body=163 status=ok
// SIG undefined FUN_140e6c5f2(void)

void FUN_140e6c5f2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_14487fd02();
    if (iVar2 == 3 && (*(byte *)(param_1 + 0x5b6) & 0x20) != 0) {
      *(byte *)(param_1 + 0x5b6) = *(byte *)(param_1 + 0x5b6) & 0xdf;
      iVar2 = 3;
    }
  }
  FUN_140e6c696(param_1);
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) ||
      (*(longlong *)(lVar3 + 0x108) == 0)) || (cVar1 = FUN_147a5faf8(), cVar1 == '\0')) {
    if ((iVar2 == 2) && (*(char *)(param_1 + 0x293) == '\x01')) {
      *(undefined1 *)(param_1 + 0x293) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x293) = 1;
  }
  return;
}



// FUNCTION 140e6c696 FUN_140e6c696 body=732 status=ok
// SIG undefined FUN_140e6c696(void)

void FUN_140e6c696(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x171);
  *(undefined1 *)((longlong)param_1 + 0x171) = 1;
  lVar8 = param_1[0x22];
  if (lVar8 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar8 = param_1[0x22];
      if (lVar8 == 0) goto LAB_140e6c6cf;
    }
    lVar7 = 0;
    if ((DAT_14cac6e60 == 0) || (lVar6 = *(longlong *)(lVar8 + 0x10), lVar6 == 0))
    goto LAB_140e6c6d1;
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      lVar7 = lVar8;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar8);
      }
      goto LAB_140e6c6d1;
    }
  }
LAB_140e6c6cf:
  lVar7 = 0;
LAB_140e6c6d1:
  param_1[0x23] = lVar7;
  FUN_144a3ee64(param_1);
  if (*(char *)((longlong)param_1 + 0x173) != '\0') {
    (**(code **)(*param_1 + 0x528))(param_1);
  }
  lVar8 = param_1[0x16];
  if (((lVar8 != 0) || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)) &&
     ((bVar5 = *(byte *)(lVar8 + 0x152), bVar5 == 1 ||
      ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))))) {
    dVar1 = (double)param_1[0x28];
    dVar2 = (double)param_1[0x29];
    dVar3 = (double)param_1[0x2a];
    dVar12 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (((dVar12 != 1.0) || (dVar9 = dVar1, dVar10 = dVar2, dVar11 = dVar3, NAN(dVar12))) &&
       (dVar9 = DAT_14c8464e0, dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar9 = dVar1 * dVar12;
      dVar10 = dVar2 * dVar12;
      dVar11 = dVar3 * dVar12;
    }
    param_1[0x28] = (longlong)dVar9;
    param_1[0x29] = (longlong)dVar10;
    param_1[0x2a] = (longlong)dVar11;
    lVar8 = param_1[0x22];
    if (lVar8 == 0) {
      if (((*(byte *)(param_1 + 0x2e) & 8) == 0) || (param_1[0x15] == 0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(param_1[0x15] + 0x1c8);
      }
    }
    (**(code **)(*param_1 + 0x4b0))(param_1,lVar8);
  }
  *(undefined1 *)((longlong)param_1 + 0x171) = uVar4;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e6c974 FUN_140e6c974 body=40 status=ok
// SIG undefined FUN_140e6c974(void)

undefined8 FUN_140e6c974(undefined8 param_1,int param_2)

{
  FUN_140e6c99c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e6c99c FUN_140e6c99c body=2496 status=ok
// SIG undefined FUN_140e6c99c(void)

void FUN_140e6c99c(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  *param_1 = &PTR_FUN_14a797be0;
  param_1[0x4a] = &PTR_FUN_14a797fe0;
  param_1[0x76] = &PTR_FUN_14a798000;
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d382(param_1[0xc3],*(undefined4 *)(param_1 + 0xc4));
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb7) = 0;
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xae;
  puVar2 = (uint *)(param_1 + 0xb0);
  iVar4 = *(int *)(param_1 + 0xb3);
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0xb2];
    if ((uint *)param_1[0xb2] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) goto LAB_140e6cbf4;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = *plVar1;
      lVar11 = (longlong)iVar5 * 0x68;
      *(undefined4 *)(lVar12 + 0x50 + lVar11) = 0;
      if (*(longlong *)(lVar12 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(lVar12 + lVar11 + 8);
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar9 = (uint *)param_1[0xb2];
      if ((uint *)param_1[0xb2] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar4 = *(int *)(param_1 + 0xb3);
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar9[lVar12 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar12 == lVar11) goto LAB_140e6cbf4;
        }
        uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140e6cbf4:
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (*(int *)((longlong)param_1 + 0x57c) != 0) {
    FUN_14059f004(plVar1,0);
  }
  param_1[0xb4] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x59c)) {
    *(undefined4 *)((longlong)param_1 + 0x59c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d3b1(param_1[0xac],*(undefined4 *)(param_1 + 0xad));
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (*(int *)((longlong)param_1 + 0x51c) != 0) {
    FUN_14494313c(param_1 + 0xa2,0);
  }
  param_1[0xa8] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x53c)) {
    *(undefined4 *)((longlong)param_1 + 0x53c) = 0x80;
    FUN_1446efbd8(param_1 + 0xa4,0);
  }
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x98;
  puVar2 = (uint *)(param_1 + 0x9a);
  iVar4 = *(int *)(param_1 + 0x9d);
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0x9c];
    if ((uint *)param_1[0x9c] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140e6ce5c;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 8 + (longlong)iVar5 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = *(int *)(param_1 + 0x9d);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[0x9c];
      if ((uint *)param_1[0x9c] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar9[lVar12 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar12 == lVar11) goto LAB_140e6ce5c;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140e6ce5c:
  *(undefined4 *)(param_1 + 0x99) = 0;
  if (*(int *)((longlong)param_1 + 0x4cc) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0x9e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4ec)) {
    *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d35c(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x7c;
  puVar2 = (uint *)(param_1 + 0x7e);
  iVar4 = *(int *)(param_1 + 0x81);
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0x80];
    if ((uint *)param_1[0x80] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140e6d0c5;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 8 + (longlong)iVar5 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = *(int *)(param_1 + 0x81);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[0x80];
      if ((uint *)param_1[0x80] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar9[lVar12 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar12 == lVar11) goto LAB_140e6d0c5;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140e6d0c5:
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (*(int *)((longlong)param_1 + 0x3ec) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0x82] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x40c)) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_14499183d(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d3e0(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 140e6d35c FUN_140e6d35c body=38 status=ok
// SIG undefined FUN_140e6d35c(void)

void FUN_140e6d35c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140002ec8(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 140e6d382 FUN_140e6d382 body=47 status=ok
// SIG undefined FUN_140e6d382(void)

void FUN_140e6d382(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6d3b1 FUN_140e6d3b1 body=47 status=ok
// SIG undefined FUN_140e6d3b1(void)

void FUN_140e6d3b1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6d3e0 FUN_140e6d3e0 body=72 status=ok
// SIG undefined FUN_140e6d3e0(void)

void FUN_140e6d3e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_140e6d428(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6d428 FUN_140e6d428 body=120 status=ok
// SIG undefined FUN_140e6d428(void)

void FUN_140e6d428(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (plVar1[0xc] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[7] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[5] != 0) {
        FUN_1400020a8();
      }
      FUN_140e6d4a0(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6d4a0 FUN_140e6d4a0 body=49 status=ok
// SIG undefined FUN_140e6d4a0(void)

void FUN_140e6d4a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e6d4da FUN_140e6d4da body=137 status=ok
// SIG undefined FUN_140e6d4da(void)

void FUN_140e6d4da(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b3f1760;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xfe;
  lVar3 = 0x30;
  do {
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x14) = 0x3f800000;
    *(undefined1 *)((longlong)param_1 + lVar3 + -0x10) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3dcccccd00000000;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x78);
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0x240000000;
  uVar2 = DAT_14c846500;
  param_1[0xe] = DAT_14c8464f8;
  param_1[0xf] = uVar2;
  param_1[0x10] = DAT_14c846508;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 2;
  *(undefined2 *)(param_1 + 2) = 0x101;
  return;
}



// FUNCTION 140e6d564 FUN_140e6d564 body=259 status=ok
// SIG undefined FUN_140e6d564(void)

longlong FUN_140e6d564(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    lVar4 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x160) - 1U &
                             ((uint)param_2 ^ (int)param_3 << 0x12)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x118);
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        lVar2 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) {
          if ((int *)(lVar2 + 0x10) != (int *)0x0 && lVar2 != 0) {
            *param_4 = 0;
            return (longlong)*(int *)(lVar2 + 0x10) * 200 + *(longlong *)(param_1 + 0x1c8);
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x18);
      } while (iVar5 != -1);
    }
  }
  *param_4 = 1;
  plVar1 = (longlong *)(param_1 + 0x1c8);
  iVar5 = *(int *)(param_1 + 0x1d0);
  uVar3 = iVar5 + 1;
  *(uint *)(param_1 + 0x1d0) = uVar3;
  if (*(uint *)(param_1 + 0x1d4) < uVar3) {
    FUN_140e6d668(plVar1);
  }
  lVar4 = (longlong)iVar5 * 200;
  memset((void *)(*plVar1 + lVar4),0,200);
  return lVar4 + *plVar1;
}



// FUNCTION 140e6d668 FUN_140e6d668 body=376 status=ok
// SIG undefined FUN_140e6d668(void)

void FUN_140e6d668(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 200;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e6d6f2;
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
LAB_140e6d6f2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 140e6d7e2 FUN_140e6d7e2 body=190 status=ok
// SIG undefined FUN_140e6d7e2(void)

longlong FUN_140e6d7e2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_140e6d878;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140e6d8a2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_140e6d878:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140e6d8a2 FUN_140e6d8a2 body=304 status=ok
// SIG undefined FUN_140e6d8a2(void)

undefined4 *
FUN_140e6d8a2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409d9a2a(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1409d996c(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1409d9c06(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6d9d4 FUN_140e6d9d4 body=32 status=ok
// SIG undefined FUN_140e6d9d4(void)

undefined8 * FUN_140e6d9d4(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aef8070;
  return param_1;
}



// FUNCTION 140e6d9f4 FUN_140e6d9f4 body=94 status=ok
// SIG undefined FUN_140e6d9f4(void)

undefined8 * FUN_140e6d9f4(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14aedbfc0;
  return param_1;
}



// FUNCTION 140e6da52 FUN_140e6da52 body=22 status=ok
// SIG undefined FUN_140e6da52(void)

undefined8 FUN_140e6da52(undefined8 param_1)

{
  FUN_140e6da68();
  return param_1;
}



// FUNCTION 140e6da68 FUN_140e6da68 body=496 status=ok
// SIG undefined FUN_140e6da68(void)

longlong * FUN_140e6da68(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(DAT_14c844be0 + 0x38);
    plVar3 = *(longlong **)(DAT_14c844be0 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = *(undefined8 *)(puVar5 + 2);
  FUN_14010d0dd(0,param_2,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 1;
  local_48 = 0;
  local_40 = 0;
  local_88 = local_78 + 2;
  uStack_50 = param_2;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6dc5a FUN_140e6dc5a body=60 status=ok
// SIG undefined FUN_140e6dc5a(void)

uint FUN_140e6dc5a(undefined2 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar2 = 1;
    if (((uVar1 & 0x600) == 0) && (((uint)uVar1 >> 0xb & 1) == 0)) {
      uVar2 = (uint)(uVar1 >> 0xc) & 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140e6dc96 FUN_140e6dc96 body=368 status=ok
// SIG undefined FUN_140e6dc96(void)

uint FUN_140e6dc96(undefined4 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  lVar2 = DAT_14ca97170;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  if (*(int *)(lVar2 + uVar7 * 4) < 1) {
    uVar6 = (uint)*(ulonglong *)(param_2 + 0x28);
    uVar3 = uVar6 * 4;
    local_2c = uVar3 & 0x40000;
    if ((*(ulonglong *)(param_2 + 0x28) & 0xc000) != 0) {
      local_2c = 0x40000;
    }
    local_2c = uVar3 & 0x180000 | (uint)*(byte *)(param_2 + 8) | (uVar6 & 0x3000) << 4 | local_2c;
  }
  else {
    uVar7 = *(ulonglong *)(param_2 + 0x28);
    uVar3 = (uint)uVar7 * 4;
    local_2c = uVar3 & 0x40000;
    if ((uVar7 & 0xcc00) != 0) {
      local_2c = 0x40000;
    }
    local_2c = uVar3 & 0x180000 | (uint)*(byte *)(param_2 + 8) |
               (uint)((uVar7 & 0x1c00) != 0) << 0x10 | ((uint)uVar7 & 0x2000) << 4 | local_2c;
  }
  local_2c = uVar3 & 0x200000 | local_2c;
  FUN_1457b90e7(param_1,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6de08 FUN_140e6de08 body=314 status=ok
// SIG undefined FUN_140e6de08(void)

void FUN_140e6de08(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  code *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') goto LAB_140e6dee6;
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  local_58 = 0;
  local_48 = &PTR_LAB_14aba0700;
  local_68[0] = &LAB_143802612;
  local_c8 = 0xaff;
  local_40 = param_1;
  FUN_14014aede(&local_b0,local_68,param_3,0);
  local_98 = 0;
  local_88 = &PTR_LAB_14aba0720;
  local_a8[0] = FUN_143802650;
  local_c8 = 1;
  local_80 = param_1;
  FUN_140e6df44(&local_b8,local_a8,param_3,&local_b0);
  ppuVar3 = (undefined8 **)(param_1 + 4);
  if (ppuVar3 == &local_b8) {
LAB_140e6df27:
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_b8)(local_b8,1);
      }
    }
  }
  else {
    puVar2 = *ppuVar3;
    *ppuVar3 = local_b8;
    local_b8 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      goto LAB_140e6df27;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_b0)(local_b0,1);
    }
  }
LAB_140e6dee6:
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6df44 FUN_140e6df44 body=274 status=ok
// SIG undefined FUN_140e6df44(void)

undefined8
FUN_140e6df44(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50 [4];
  longlong *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = (longlong *)0x0;
  local_28 = 0x400000001;
  local_50[0] = *param_4;
  if (local_50[0] != 0) {
    LOCK();
    *(int *)(local_50[0] + 8) = *(int *)(local_50[0] + 8) + 1;
    UNLOCK();
  }
  local_98[0] = *param_2;
  local_88 = param_2[2];
  param_2[2] = 0;
  local_78 = (undefined4)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_68 = (undefined4)param_2[6];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = (undefined4)param_2[7];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_98[0] != 0) {
    *param_2 = 0;
  }
  local_a8 = param_5;
  FUN_14014aede(param_1,local_98,param_3,local_50);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    plVar1 = local_50;
  }
  FUN_144717c65(plVar1,local_28 & 0xffffffff);
  if (local_30 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6e058 FUN_140e6e058 body=28 status=ok
// SIG undefined FUN_140e6e058(void)

undefined8 FUN_140e6e058(undefined8 param_1,undefined8 param_2)

{
  FUN_140e6e074(param_2,param_1);
  return param_1;
}



// FUNCTION 140e6e074 FUN_140e6e074 body=2111 status=ok
// SIG undefined FUN_140e6e074(void)

longlong * FUN_140e6e074(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  int local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = (code *)0x0;
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    if (((*(uint *)(plVar11 + 1) >> (DAT_14cb0caba & 0x1f) & 1) != 0) &&
       (uVar7 = (1 << (DAT_14cb0caba & 0x1f)) - 1U & *(uint *)(plVar11 + 1),
       uVar8 = (ulonglong)uVar7 - (ulonglong)(uVar7 >> 1 & 0x55555555),
       uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333),
       plVar11 = (longlong *)
                 ((ulonglong)
                  *(ushort *)
                   (*plVar11 +
                   (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) +
                 *plVar11), plVar11 != (longlong *)0x0)) {
      if ((*plVar11 != 0) && ((plVar11[3] == *param_1 && (plVar11[4] == param_1[1])))) {
        if (((*(int *)((longlong)plVar11 + 0xc) == 0 && (int)plVar11[1] == 0) &&
            (int)plVar11[2] == 0) && *(int *)((longlong)plVar11 + 0x14) == 0) {
          if ((int)param_1[3] == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          else {
            puVar10 = (undefined2 *)param_1[2];
          }
          FUN_1417f9cb0(*plVar11,puVar10,&local_40,0);
        }
        else {
          FUN_14125aa92(&local_50,plVar11 + 1,param_1 + 2);
          pcVar4 = local_50;
          if (local_48 == 0) {
            pcVar4 = (code *)&DAT_149dfb77a;
          }
          FUN_1417f9cb0(*plVar11,pcVar4,&local_40,0);
          if (((local_40 == (code *)0x0) && (lVar3 = FUN_1437451f0(*param_3), lVar3 != 0)) &&
             (*(longlong *)(lVar3 + 0x2c8) != 0)) {
            if (DAT_14cb10130 == 0) {
              local_70 = &local_38;
              local_38 = FUN_140754f84;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_14081d0ea;
              local_78 = &LAB_147da9a76;
              local_80 = FUN_1409f3105;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10000000;
              local_a0 = 8;
              local_a8 = 0x990;
              FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
            }
            lVar6 = DAT_14cb10130;
            if (DAT_14c951858 == 0) {
              local_70 = &local_38;
              local_38 = FUN_1449e2820;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_14081d0ea;
              local_78 = &LAB_1468c5283;
              local_80 = FUN_142809da0;
              local_88 = L"Engine";
              local_90 = 0x400000000;
              local_98 = 0x10000000;
              local_a0 = 8;
              local_a8 = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar3 = *(longlong *)(lVar3 + 0x20);
            if (lVar3 != 0) {
              iVar2 = *(int *)(lVar6 + 0x38);
              do {
                if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
                   (lVar5 = lVar3,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                   lVar6 + 0x30)) {
                  lVar5 = 0;
                }
              } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
              if (lVar5 != 0) {
                pcVar4 = local_50;
                if (local_48 == 0) {
                  pcVar4 = (code *)&DAT_149dfb77a;
                }
                FUN_1417f9cb0(lVar5,pcVar4,&local_40,0);
              }
            }
          }
          if (local_50 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      pcVar4 = local_40;
      if (local_40 != (code *)0x0) goto LAB_140e6e2d9;
    }
  }
  uVar8 = FUN_1437451f0(*param_3);
  pcVar4 = local_40;
  if (uVar8 == 0) goto LAB_140e6e2cc;
  if ((*(longlong *)(uVar8 + 0xc0) == 0) ||
     (*(ulonglong *)(*(longlong *)(uVar8 + 0xc0) + 0x30) == uVar8)) {
LAB_140e6e2b8:
    pcVar4 = (code *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (DAT_14cae90b8 != uVar8) {
      DAT_14cae90b8 = uVar8;
      if (DAT_14cae9048 != DAT_14cae9074) {
        uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar9 = &DAT_14cae9078;
        if (DAT_14cae9080 != (undefined *)0x0) {
          puVar9 = DAT_14cae9080;
        }
        iVar2 = *(int *)(puVar9 + (ulonglong)(DAT_14cae9088 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar2 * 0x18);
          if (*puVar1 == uVar8) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              DAT_14cae90c0 = (longlong *)puVar1[1];
              goto LAB_140e6e331;
            }
            break;
          }
          iVar2 = (int)puVar1[2];
        }
      }
      DAT_14cae90c0 = (longlong *)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
      goto LAB_140e6e2b8;
    }
LAB_140e6e331:
    plVar11 = DAT_14cae90c0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (plVar11 == (longlong *)0x0) goto LAB_140e6e2b8;
    if (*(longlong *)(uVar8 + 0x2c8) == 0) {
      if (DAT_14cb10130 == 0) {
        local_70 = &local_50;
        local_50 = FUN_140754f84;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_147da9a76;
        local_80 = FUN_1409f3105;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar3 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar6 = *(longlong *)(uVar8 + 0x20);
      if (lVar6 != 0) {
        iVar2 = *(int *)(lVar3 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
             (lVar5 = lVar6,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar3 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
        goto LAB_140e6e3b9;
      }
      goto LAB_140e6e2b8;
    }
    lVar5 = (**(code **)(*plVar11 + 0x2f8))(plVar11);
    uVar8 = *(ulonglong *)(lVar5 + 0x30);
    if ((uVar8 == 0) ||
       ((*(longlong *)(uVar8 + 0xc0) == 0 ||
        (*(ulonglong *)(*(longlong *)(uVar8 + 0xc0) + 0x30) == uVar8)))) goto LAB_140e6e2b8;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (DAT_14cae90b8 != uVar8) {
      DAT_14cae90b8 = uVar8;
      if (DAT_14cae9048 != DAT_14cae9074) {
        uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar9 = &DAT_14cae9078;
        if (DAT_14cae9080 != (undefined *)0x0) {
          puVar9 = DAT_14cae9080;
        }
        iVar2 = *(int *)(puVar9 + (ulonglong)(DAT_14cae9088 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar2 * 0x18);
          if (*puVar1 == uVar8) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              DAT_14cae90c0 = (longlong *)puVar1[1];
              goto LAB_140e6e3ac;
            }
            break;
          }
          iVar2 = (int)puVar1[2];
        }
      }
      DAT_14cae90c0 = (longlong *)0x0;
    }
LAB_140e6e3ac:
    plVar11 = DAT_14cae90c0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
LAB_140e6e3b9:
    pcVar4 = (code *)0x0;
    if ((plVar11 != (longlong *)0x0) && (lVar5 != 0)) {
      pcVar4 = *(code **)((longlong)plVar11 + 0x54);
      if (*(code **)((longlong)plVar11 + 0x54) == (code *)0x0) {
        (**(code **)(*plVar11 + 0x2d0))(plVar11,&local_50);
        pcVar4 = local_50;
      }
      local_50 = pcVar4;
      if ((code *)*param_1 != local_50) goto LAB_140e6e2b8;
      local_38 = (code *)0x0;
      if ((int)param_1[3] == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)param_1[2];
      }
      FUN_1417f9cb0(lVar5,puVar10,&local_38,0);
      pcVar4 = local_38;
    }
  }
LAB_140e6e2cc:
  local_40 = pcVar4;
  pcVar4 = local_40;
  if (local_40 == (code *)0x0) {
    pcVar4 = (code *)FUN_140007850(param_1);
  }
LAB_140e6e2d9:
  *param_2 = (longlong)pcVar4;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e6e8ba FUN_140e6e8ba body=57 status=ok
// SIG undefined FUN_140e6e8ba(void)

void FUN_140e6e8ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21898 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21898 = FUN_140002ddd(FUN_14643442d,uVar1,L"GbxBrainAspect_SetParam");
  }
  return;
}



// FUNCTION 140e6e8f4 FUN_140e6e8f4 body=2958 status=ok
// SIG undefined FUN_140e6e8f4(void)

undefined8 * FUN_140e6e8f4(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_14007ca06();
  FUN_140e6f92a(param_1);
  *param_1 = &PTR_FUN_14b3f2ad0;
  param_1[5] = &PTR_FUN_14b3f39c0;
  param_1[6] = &PTR_LAB_14b3f3a00;
  param_1[0x2f] = &PTR_FUN_14b3f3a50;
  param_1[0x3c] = &PTR_FUN_14b3f3b90;
  param_1[0x3d] = &PTR_FUN_14b3f3c20;
  param_1[0x20b] = &PTR_FUN_14b3f3c78;
  param_1[0x238] = &PTR_FUN_14b3f3c90;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  param_1[0x371] = 0;
  param_1[0x372] = 0x200000000;
  *(undefined1 *)(param_1 + 0x373) = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0x200000000;
  *(undefined1 *)(param_1 + 0x378) = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0x200000000;
  *(undefined1 *)(param_1 + 0x37d) = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0x200000000;
  *(undefined1 *)(param_1 + 0x382) = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0x200000000;
  *(undefined1 *)(param_1 + 0x387) = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0x200000000;
  *(undefined1 *)(param_1 + 0x38c) = 0;
  param_1[0x38f] = 0;
  param_1[0x390] = 0x200000000;
  *(undefined1 *)(param_1 + 0x391) = 0;
  param_1[0x394] = 0;
  param_1[0x395] = 0x200000000;
  *(undefined1 *)(param_1 + 0x396) = 0;
  param_1[0x399] = 0;
  param_1[0x39a] = 0x200000000;
  *(undefined1 *)(param_1 + 0x39b) = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ce9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cf1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ce4) = 0;
  *(byte *)((longlong)param_1 + 0x1d34) = *(byte *)((longlong)param_1 + 0x1d34) & 0xf0;
  param_1[0x3a7] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  *(undefined4 *)(param_1 + 0x3a6) = 0xc47a0000;
  *(undefined1 *)(param_1 + 0x3a8) = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0x3aa;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)(param_1 + 0x3ba) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dd2) = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  param_1[0x3c3] = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  param_1[0x3be] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3c0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ddc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1de4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e24) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e2c) = 0;
  param_1[0x3c7] = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  param_1[0x3e0] = 0;
  memset(param_1 + 0x3c9,0,0x9a);
  *(undefined4 *)((longlong)param_1 + 0x1ee4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ee7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1eec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ef4) = 0;
  FUN_140e6f482(param_1 + 0x3e1);
  *(undefined1 *)(param_1 + 0x572) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b94) = 0xffffffff;
  param_1[0x593] = 0;
  param_1[0x594] = 0x400000000;
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  param_1[0x577] = 0;
  param_1[0x578] = 0;
  param_1[0x579] = 0;
  param_1[0x57c] = 0;
  param_1[0x57d] = 0;
  param_1[0x57e] = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  *(undefined1 *)(param_1 + 0x598) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc4) = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0x59a;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0x5a6;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x5b2] = 0;
  param_1[0x5b3] = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 0x5b4) = 0;
  param_1[0x5b5] = &PTR_FUN_14b00bdf8;
  param_1[0x5bb] = 0;
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  param_1[0x5b7] = 0;
  param_1[0x5b8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2de4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dec) = 0;
  param_1[0x5bf] = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  param_1[0x5c1] = 0;
  param_1[0x5c2] = 0;
  *(undefined4 *)(param_1 + 0x5c3) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2e1c) = 0x404;
  param_1[0x5b6] = &DAT_14a176f00;
  param_1[0x5c4] = 0;
  param_1[0x5c5] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5c8] = 0;
  param_1[0x5c9] = 0;
  param_1[0x5ca] = 0;
  param_1[0x5cb] = &PTR_FUN_14b00bdf8;
  param_1[0x5d1] = 0;
  *(undefined4 *)(param_1 + 0x5d2) = 0;
  param_1[0x5cd] = 0;
  param_1[0x5ce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e9c) = 0;
  param_1[0x5d5] = 0;
  *(undefined4 *)(param_1 + 0x5d6) = 0;
  param_1[0x5d7] = 0;
  param_1[0x5d8] = 0;
  *(undefined4 *)(param_1 + 0x5d9) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2ecc) = 0x404;
  param_1[0x5cc] = &DAT_14a176f00;
  param_1[0x5e0] = 0;
  param_1[0x5de] = 0;
  param_1[0x5df] = 0;
  param_1[0x5dc] = 0;
  param_1[0x5dd] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0x2fac);
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0x5e2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x5f1] = 0;
  uVar3 = DAT_14c8464e8;
  param_1[0x5f2] = DAT_14c8464e0;
  param_1[0x5f3] = uVar3;
  param_1[0x5f4] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x5f5) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x2fac) = (uVar1 & 0xffffffe0) + 1;
  uVar3 = DAT_14c8464e8;
  param_1[0x5f6] = DAT_14c8464e0;
  param_1[0x5f7] = uVar3;
  param_1[0x5f8] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fdc) = 0;
  uVar3 = DAT_14c8464e8;
  param_1[0x5fc] = DAT_14c8464e0;
  param_1[0x5fd] = uVar3;
  param_1[0x5fe] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x602) = 0;
  *(undefined4 *)(param_1 + 0x603) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x301c) = 0;
  param_1[0x604] = 0xbf80000041200000;
  *(undefined4 *)(param_1 + 0x605) = 0;
  *(undefined2 *)((longlong)param_1 + 0x302c) = 0x100;
  *(undefined1 *)(param_1 + 0x606) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3034) = 0x240000000;
  *(undefined1 *)(param_1 + 0x60b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x305c) = 0;
  memset(param_1 + 0x60d,0,0x100);
  *(undefined4 *)(param_1 + 0x627) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x306c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x310c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x62d) = 0;
  param_1[0x633] = 0;
  *(undefined1 *)(param_1 + 0x636) = 0;
  param_1[0x62e] = 0;
  param_1[0x62f] = 0;
  param_1[0x630] = 0;
  param_1[0x631] = 0;
  *(undefined1 *)(param_1 + 0x632) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31cc) = 0;
  param_1[0x637] = 0;
  param_1[0x638] = 0;
  uVar3 = DAT_14c8464e8;
  param_1[0x63b] = DAT_14c8464e0;
  param_1[0x63c] = uVar3;
  param_1[0x63d] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  param_1[0x63e] = DAT_14c8464e0;
  param_1[0x63f] = uVar3;
  param_1[0x640] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x641) = 0;
  *(undefined1 *)(param_1 + 0x696) = 0;
  *(undefined1 *)(param_1 + 0x6a7) = 0;
  param_1[0x6a9] = 0;
  *(undefined1 *)(param_1 + 0x6ac) = 0;
  param_1[0x6ad] = 0;
  param_1[0x6ae] = 0;
  param_1[0x6af] = 0;
  param_1[0x6b0] = 0;
  uVar3 = DAT_14c8464e8;
  param_1[0x6b1] = DAT_14c8464e0;
  param_1[0x6b2] = uVar3;
  param_1[0x6b3] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  param_1[0x6b5] = 0;
  *(undefined4 *)(param_1 + 0x6b6) = 0;
  param_1[0x6b7] = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  *(undefined4 *)(param_1 + 0x6ba) = 2;
  param_1[0x6bf] = 0;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3604) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x360c) = 0;
  param_1[0x6c3] = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  param_1[0x6c5] = 0;
  *(undefined4 *)(param_1 + 0x6c6) = 0;
  *(undefined1 *)(param_1 + 0x6c7) = 0;
  param_1[0x6ca] = 0;
  param_1[0x6cb] = 0x200000000;
  *(undefined1 *)(param_1 + 0x6cc) = 0;
  param_1[0x6cf] = 0;
  param_1[0x6d0] = 0x200000000;
  param_1[0x6d3] = 0;
  param_1[0x6d4] = 0;
  param_1[0x6d1] = 0;
  param_1[0x6d2] = 0;
  *(undefined4 *)(param_1 + 0x6d7) = 0;
  lVar4 = 0x36d8;
  do {
    *(undefined ***)((longlong)param_1 + lVar4) = &PTR_FUN_14a83ce90;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 8);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 0x18);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 0x28);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 0x38);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 0x48);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined2 *)((longlong)param_1 + lVar4 + 0x58) = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + 0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x3828);
  param_1[0x6d6] = &PTR_FUN_14b3f4650;
  lVar4 = 0x38c8;
  do {
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x58);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x68);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x78);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x88);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x98);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined2 *)((longlong)param_1 + lVar4 + -0x48) = 0;
    puVar5 = (undefined8 *)((longlong)param_1 + lVar4 + -0x40);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar4 + -0xa0) = &PTR_FUN_14b3f4670;
    *(undefined2 *)((longlong)param_1 + lVar4 + -0x30) = 0;
    *(undefined1 *)((longlong)param_1 + lVar4 + -0x2e) = 0;
    *(undefined8 *)((longlong)param_1 + lVar4 + -0x2c) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0x24) = 0;
    *(undefined1 *)((longlong)param_1 + lVar4 + -0x10) = 0;
    *(undefined1 *)((longlong)param_1 + lVar4 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar4 + -4) = 0;
    lVar4 = lVar4 + 0xa8;
  } while (lVar4 != 0x3ac0);
  param_1[0x6d8] = param_1 + 0x705;
  param_1[0x6d9] = param_1 + 0x71a;
  param_1[0x6da] = param_1 + 0x72f;
  *(undefined4 *)(param_1 + 0x745) = 0;
  param_1[0x746] = 0;
  param_1[0x747] = 0;
  param_1[0x748] = 0;
  param_1[0x749] = 0;
  param_1[0x74a] = 0;
  param_1[0x74b] = 0;
  param_1[0x74c] = 0;
  param_1[0x74d] = 0;
  param_1[0x74e] = 0;
  param_1[0x74f] = 0;
  uVar3 = DAT_14c8462f8;
  param_1[0x750] = DAT_14c8462f0;
  param_1[0x751] = uVar3;
  param_1[0x752] = DAT_14c846300;
  param_1[0x753] = 0;
  param_1[0x754] = 0;
  *(undefined4 *)(param_1 + 0x755) = 0;
  *(undefined4 *)(param_1 + 0x756) = 0xbf800000;
  param_1[0x757] = 0;
  param_1[0x758] = 0;
  param_1[0x759] = 0;
  param_1[0x75a] = 0;
  param_1[0x744] = &PTR_FUN_14b3f51f0;
  *(undefined4 *)(param_1 + 0x75b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b1c) = 0;
  param_1[0x75c] = 0;
  param_1[0x75d] = 0;
  param_1[0x75e] = 0;
  param_1[0x75f] = 0;
  param_1[0x760] = 0;
  param_1[0x761] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b09) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b11) = 0;
  *(undefined1 *)(param_1 + 0x764) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3b34) = 0;
  *(undefined4 *)(param_1 + 0x767) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b54) = 0;
  *(undefined1 *)(param_1 + 0x788) = 0;
  param_1[0x786] = 0;
  param_1[0x787] = 0;
  param_1[0x784] = 0;
  param_1[0x785] = 0;
  param_1[0x782] = 0;
  param_1[0x783] = 0;
  param_1[0x780] = 0;
  param_1[0x781] = 0;
  param_1[0x77e] = 0;
  param_1[0x77f] = 0;
  param_1[0x77c] = 0;
  param_1[0x77d] = 0;
  param_1[0x77a] = 0;
  param_1[0x77b] = 0;
  memset(param_1 + 0x789,0,0x100);
  *(undefined8 *)((longlong)param_1 + 0x3b24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b29) = 0;
  param_1[0x768] = 0;
  param_1[0x769] = 0;
  param_1[0x76b] = 0;
  param_1[0x76c] = 0;
  param_1[0x76d] = 0;
  param_1[0x76e] = 0;
  param_1[0x76f] = 0;
  param_1[0x775] = 0;
  param_1[0x776] = 0;
  param_1[0x777] = 0;
  param_1[0x778] = 0;
  *(undefined4 *)(param_1 + 0x7a3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3cec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a9) = 0;
  param_1[0x7ae] = 0;
  *(undefined4 *)(param_1 + 0x7af) = 0;
  param_1[0x7aa] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7ac] = 0;
  *(undefined1 *)(param_1 + 0x7be) = 0;
  param_1[0x7bc] = 0;
  param_1[0x7bd] = 0;
  param_1[0x7ba] = 0;
  param_1[0x7bb] = 0;
  param_1[0x7b8] = 0;
  param_1[0x7b9] = 0;
  param_1[0x7b6] = 0;
  param_1[0x7b7] = 0;
  param_1[0x7b4] = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b2] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b1] = 0;
  memset(param_1 + 0x7bf,0,0x100);
  *(undefined4 *)(param_1 + 0x7d9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3dfc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7df) = 0;
  param_1[0x7e4] = 0;
  *(undefined4 *)(param_1 + 0x7e5) = 0;
  param_1[0x7e0] = 0;
  param_1[0x7e1] = 0;
  param_1[0x7e2] = 0;
  param_1[0x7e6] = 0;
  param_1[0x7e7] = 0;
  param_1[0x7e8] = 0;
  param_1[0x7e9] = 0;
  param_1[0x7ea] = 0;
  param_1[0x7eb] = 0;
  param_1[0x7ec] = 0;
  param_1[0x7ed] = 0;
  param_1[0x7ee] = 0;
  param_1[0x7ef] = 0;
  param_1[0x7f0] = 0;
  param_1[0x7f1] = 0;
  param_1[0x7f2] = 0;
  param_1[0x7f3] = 0;
  *(undefined1 *)(param_1 + 0x7f4) = 0;
  memset(param_1 + 0x7f5,0,0x100);
  *(undefined4 *)(param_1 + 0x80f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3fac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x404c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x815) = 0;
  param_1[0x81a] = 0;
  *(undefined4 *)(param_1 + 0x81b) = 0;
  param_1[0x816] = 0;
  param_1[0x817] = 0;
  param_1[0x818] = 0;
  *(undefined2 *)(param_1 + 0x81f) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x411c) = 0;
  param_1[0x820] = 0;
  param_1[0x821] = 0;
  param_1[0x822] = 0;
  *(undefined4 *)(param_1 + 0x824) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x4134) = 0;
  *(undefined1 *)(param_1 + 0x827) = 0;
  param_1[0x82a] = 0;
  param_1[0x82b] = 0x200000000;
  *(undefined1 *)(param_1 + 0x82c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4164) = 0;
  *(undefined1 *)(param_1 + 0x82e) = 0;
  param_1[0x831] = 0;
  param_1[0x832] = 0x200000000;
  param_1[0x833] = 0;
  param_1[0x834] = 0;
  param_1[0x835] = 2;
  *(undefined1 *)(param_1 + 0x836) = 0;
  param_1[0x839] = 0;
  param_1[0x83a] = 0x200000000;
  *(undefined1 *)((longlong)param_1 + 0x41dc) = 0;
  param_1[0x83c] = 0;
  FUN_140b967fa(param_1,1);
  param_1[0x136] = param_1 + 0x6d6;
  param_1[0x17f] = param_1 + 0x744;
  *(undefined4 *)((longlong)param_1 + 0x1ce4) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x1cdc,1);
  *(undefined4 *)(param_1 + 0x57a) = 0xbf800000;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(param_1 + 0x3d9,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cb760f8;
  iVar2 = *(int *)(param_1 + 0x3da);
  *(uint *)(param_1 + 0x3da) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ed4) < iVar2 + 1U) {
    FUN_140e6f7c8(param_1 + 0x3d9,iVar2);
  }
  *(undefined8 *)(param_1[0x3d9] + (longlong)iVar2 * 8) = DAT_14cb76100;
  return param_1;
}



// FUNCTION 140e6f482 FUN_140e6f482 body=136 status=ok
// SIG undefined FUN_140e6f482(void)

undefined8 * FUN_140e6f482(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf8;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = DAT_14c8464f0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140e6f50a(param_1 + 10);
  FUN_140e6f50a(param_1 + 0x84);
  param_1[0x101] = 0;
  memset(param_1 + 0x103,0,0x98);
  FUN_140e6f50a(param_1 + 0x116);
  *(undefined1 *)(param_1 + 400) = 0;
  return param_1;
}



// FUNCTION 140e6f50a FUN_140e6f50a body=347 status=ok
// SIG undefined FUN_140e6f50a(void)

undefined1 * FUN_140e6f50a(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x50) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 200) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  param_1[0x100] = param_1[0x100] & 0xfe;
  param_1[0x108] = param_1[0x108] & 0xfe;
  FUN_140e6f666(param_1 + 0x110);
  param_1[0x268] = 0;
  FUN_140e6f666(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  param_1[0x3cc] = 0;
  return param_1;
}



// FUNCTION 140e6f666 FUN_140e6f666 body=354 status=ok
// SIG undefined FUN_140e6f666(void)

void FUN_140e6f666(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x38) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  param_1[0x70] = param_1[0x70] & 0xfe;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x90) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  param_1[0xe0] = param_1[0xe0] & 0xfe;
  *(undefined8 *)(param_1 + 0xf8) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xe8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x100) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x128) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x118) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined8 *)(param_1 + 0x140) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x130) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  param_1[0x150] = param_1[0x150] & 0xfe;
  return;
}



// FUNCTION 140e6f7c8 FUN_140e6f7c8 body=353 status=ok
// SIG undefined FUN_140e6f7c8(void)

void FUN_140e6f7c8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e6f84d;
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
LAB_140e6f84d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140e6f92a FUN_140e6f92a body=1614 status=ok
// SIG undefined FUN_140e6f92a(void)

undefined8 * FUN_140e6f92a(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e700f4();
  *param_1 = &PTR_FUN_14ab7f540;
  param_1[5] = &PTR_FUN_14ab801b0;
  param_1[6] = &PTR_LAB_14ab801f0;
  param_1[0x2f] = &PTR_FUN_14ab80240;
  param_1[0x3c] = &PTR_FUN_14ab80380;
  param_1[0x3d] = &PTR_FUN_14ab80410;
  param_1[0x20b] = &PTR_FUN_14ab80468;
  param_1[0x238] = &PTR_FUN_14ab80480;
  *(undefined1 *)(param_1 + 0x239) = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0x200000000;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0x200000000;
  *(undefined1 *)(param_1 + 0x243) = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0x200000000;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x125c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1264) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x126c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x127c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1294) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x129c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12ec) = 0;
  param_1[0x26b] = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1334) = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1364) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x136c) = 0;
  param_1[0x26f] = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x274) = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0x200000000;
  *(undefined4 *)(param_1 + 0x273) = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x279] = 0;
  *(undefined1 *)(param_1 + 0x27a) = 0;
  param_1[0x27b] = 0;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  *(undefined1 *)(param_1 + 0x27e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13fc) = 0;
  param_1[0x296] = 0;
  *(undefined4 *)(param_1 + 0x297) = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14bc) = 4;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29c] = 2;
  param_1[0x29d] = 0;
  *(undefined4 *)(param_1 + 0x29e) = 2;
  *(undefined2 *)((longlong)param_1 + 0x14f4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x14f6) = 0;
  param_1[0x29f] = 0x404000003f800000;
  param_1[0x2a0] = 0x3f8000003fc00000;
  param_1[0x2a1] = 0x400000003f800000;
  *(undefined4 *)(param_1 + 0x2a2) = 0x3f800000;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  *(undefined1 *)(param_1 + 0x2a7) = 1;
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  *(undefined1 *)(param_1 + 699) = 0;
  param_1[700] = 0;
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  param_1[0x2ef] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x172d) = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2f1] = 0x3f800000;
  param_1[0x2f2] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x2f3) = 1;
  param_1[0x2f4] = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  param_1[0x303] = DAT_14cb1c870;
  uVar2 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0x301] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0x302] = uVar2;
  param_1[0x306] = DAT_14cb1c870;
  uVar2 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0x304] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0x305] = uVar2;
  param_1[0x307] = 0;
  param_1[0x308] = 0;
  *(undefined4 *)(param_1 + 0x309) = 0xffffffff;
  memset(param_1 + 0x30a,0,0x108);
  *(undefined4 *)(param_1 + 0x325) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x185c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32b) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  param_1[0x32d] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x32e) = 0;
  uVar2 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0x32f] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0x330] = uVar2;
  param_1[0x331] = DAT_14cb1c870;
  param_1[0x334] = DAT_14cb1c870;
  uVar5 = DAT_14cb1c868._4_4_;
  uVar4 = (undefined4)DAT_14cb1c868;
  uVar3 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(param_1 + 0x332) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)param_1 + 0x1994) = uVar3;
  *(undefined4 *)(param_1 + 0x333) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x199c) = uVar5;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  *(undefined4 *)(param_1 + 0x337) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x338) = 0x100;
  *(undefined1 *)(param_1 + 0x33c) = 0;
  *(undefined1 *)(param_1 + 0x33d) = 0;
  *(undefined1 *)(param_1 + 0x34a) = 0;
  param_1[0x34c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x34d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x351) = 0;
  *(undefined1 *)(param_1 + 0x352) = 0;
  *(undefined1 *)(param_1 + 0x354) = 0;
  param_1[0x357] = 0;
  param_1[0x358] = 0x200000000;
  *(undefined1 *)(param_1 + 0x359) = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0x200000000;
  *(undefined1 *)(param_1 + 0x35e) = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0x200000000;
  *(undefined4 *)(param_1 + 0x363) = 0x7f7fffff;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0x400000000;
  *(undefined4 *)(param_1 + 0x36c) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x36d) = 0;
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 8;
  *(undefined1 *)((longlong)param_1 + 0x1539) = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar6 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_14aba0be0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_60[2] = lVar8;
  *local_60 = &PTR_FUN_14aba0670;
  local_60[3] = 0;
  iVar7 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar7;
  puVar6[4] = &LAB_1437fc190;
  *(undefined4 *)(puVar6 + 5) = 0;
  FUN_140e6ff7a(param_1 + 0x25a,local_68,&local_60);
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_140e6feaf;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140e6feaf:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e6ff7a FUN_140e6ff7a body=376 status=ok
// SIG undefined FUN_140e6ff7a(void)

undefined8 * FUN_140e6ff7a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar6);
              FUN_14005b248(param_1);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c(param_1);
        }
      }
    }
    plVar2 = (longlong *)*param_3;
    if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
      local_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    }
    *param_2 = local_38;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong *)(lVar3 + lVar7) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar7) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e700f4 FUN_140e700f4 body=308 status=ok
// SIG undefined FUN_140e700f4(void)

undefined8 * FUN_140e700f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140e70228();
  *param_1 = &PTR_FUN_14a1aaff0;
  param_1[5] = &PTR_FUN_14a1abc00;
  param_1[6] = &PTR_LAB_14a1abc40;
  param_1[0x2f] = &PTR_FUN_14a1abc90;
  param_1[0x3c] = &PTR_FUN_14a1abdd0;
  param_1[0x3d] = &PTR_FUN_14a1abe60;
  param_1[0x20b] = &PTR_FUN_14a1abeb8;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1064) = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0x20e] = DAT_14c8463d0;
  param_1[0x20f] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x210] = DAT_14c8463e0;
  param_1[0x211] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x212] = DAT_14c8464e0;
  param_1[0x213] = uVar1;
  param_1[0x214] = DAT_14c8464f0;
  param_1[0x228] = 0;
  *(undefined4 *)(param_1 + 0x229) = 0;
  param_1[0x21e] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114c) = 4;
  param_1[0x231] = 0;
  param_1[0x232] = 0x400000000;
  *(undefined1 *)(param_1 + 0x233) = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0x200000000;
  *(undefined1 *)(param_1 + 0x221) = *(undefined1 *)(param_1 + 0xb5);
  return param_1;
}



// FUNCTION 140e70228 FUN_140e70228 body=2669 status=ok
// SIG undefined FUN_140e70228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e70228(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_14109bb5a();
  param_1[0x3b] = 0;
  *param_1 = &PTR_FUN_14a832f20;
  param_1[5] = &PTR_FUN_14a833af0;
  param_1[6] = &PTR_LAB_14a833b30;
  param_1[0x2f] = &PTR_FUN_14a833b80;
  param_1[0x3c] = &PTR_FUN_14a833cc0;
  param_1[0x3d] = &PTR_FUN_14a833d50;
  param_1[0x3e] = 0;
  param_1[0x6a] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  memset(param_1 + 0x95,0,0x100);
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[200] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xc9] = uVar9;
  param_1[0xca] = DAT_14c8464f0;
  memset(param_1 + 0xcb,0,0x108);
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xec] = 0;
  *(undefined8 *)((longlong)param_1 + 0x765) = 0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xef) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x77c) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x784) = uVar5;
  param_1[0xf1] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7aa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0x447a0000;
  *(undefined2 *)(param_1 + 0xf7) = 0;
  *(byte *)((longlong)param_1 + 0x7ba) = *(byte *)((longlong)param_1 + 0x7ba) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x7bb) = 1;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  param_1[0xf6] = &PTR_FUN_14a83ae60;
  puVar1 = param_1 + 0xfc;
  *(undefined2 *)(param_1 + 0xfd) = 0;
  *(byte *)((longlong)param_1 + 0x7ea) = *(byte *)((longlong)param_1 + 0x7ea) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x7eb) = 1;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  param_1[0xfc] = &PTR_FUN_14a83ae90;
  param_1[0x104] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = &PTR_FUN_14a83aec0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar7 = 0x860;
  do {
    *(undefined ***)((longlong)param_1 + lVar7) = &PTR_FUN_14a83ce90;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 8);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 0x18);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 0x28);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 0x38);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 0x48);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined2 *)((longlong)param_1 + lVar7 + 0x58) = 0;
    puVar10 = (undefined8 *)((longlong)param_1 + lVar7 + 0x60);
    *puVar10 = 0;
    puVar10[1] = 0;
    lVar7 = lVar7 + 0x70;
  } while (lVar7 != 0x9b0);
  param_1[0x109] = param_1 + 0x10c;
  param_1[0x10a] = param_1 + 0x11a;
  param_1[0x10b] = param_1 + 0x128;
  uVar9 = 0;
  FUN_1447400e4(param_1 + 0x137,0,0);
  param_1[0x137] = &PTR_FUN_149e898a0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  FUN_1448fcc30(param_1 + 0x150,0,0,0);
  param_1[0x169] = &PTR_FUN_14a83aee0;
  *(undefined4 *)(param_1 + 0x16a) = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  uVar5 = DAT_14c8462f8._4_4_;
  uVar4 = (undefined4)DAT_14c8462f8;
  uVar3 = DAT_14c8462f0._4_4_;
  *(undefined4 *)(param_1 + 0x175) = (undefined4)DAT_14c8462f0;
  *(undefined4 *)((longlong)param_1 + 0xbac) = uVar3;
  *(undefined4 *)(param_1 + 0x176) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = uVar5;
  param_1[0x177] = DAT_14c846300;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  *(undefined4 *)(param_1 + 0x17a) = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0xbf800000;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  FUN_1447400e4(param_1 + 0x180,0,0);
  param_1[0x180] = &PTR_FUN_149e898a0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  FUN_1448fcc30(param_1 + 0x199,0,0,0);
  param_1[0x1b1] = &PTR_FUN_14a819a28;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(byte *)(param_1 + 0x1b6) = *(byte *)(param_1 + 0x1b6) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0xdb1) = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = &PTR_FUN_14a819a28;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  *(byte *)(param_1 + 0x1bf) = *(byte *)(param_1 + 0x1bf) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0xdf9) = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe24) = 0;
  param_1[0x1c7] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1c5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1c6] = uVar2;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1c8] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1c9] = uVar2;
  param_1[0x1ca] = DAT_14c8464f0;
  uVar2 = DAT_14c8463d8;
  param_1[0x1cc] = DAT_14c8463d0;
  param_1[0x1cd] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x1ce] = DAT_14c8463e0;
  param_1[0x1cf] = uVar2;
  puVar10 = &DAT_14c846480;
  puVar11 = param_1 + 0x1d0;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0x1000000000;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf84) = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfa4) = 0;
  *(undefined4 *)(param_1 + 0x1f5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfac) = 0x3ff00000;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  *(undefined4 *)(param_1 + 0x1fa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfd4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfdc) = 0x3ff00000;
  param_1[0x1fc] = 0x3ff0000000000000;
  param_1[0x1fd] = 0;
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  param_1[0x203] = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1029) = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  if (DAT_14c846538 == '\x01') {
    uVar9 = param_1[3];
  }
  FUN_140e70c9e(param_1 + 0x104,uVar9);
  *(byte *)((longlong)param_1 + 0x7ea) = *(byte *)((longlong)param_1 + 0x7ea) & 0xf9 | 2;
  pbVar8 = (byte *)param_1[0x100];
  if ((pbVar8 == (byte *)0x0) || ((*pbVar8 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x7eb) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7eb) != '\0') {
      uVar9 = *(undefined8 *)(pbVar8 + 0x28);
      FUN_1402eb48e(uVar9,puVar1);
      *(undefined1 *)((longlong)param_1 + 0x7eb) = 0;
      FUN_1402eb97e(uVar9,puVar1);
      if (*(char *)((longlong)param_1 + 0x7eb) != '\0') goto LAB_140e70771;
      pbVar8 = (byte *)param_1[0x100];
    }
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0x80;
    pbVar8[0x27] = 0xbf;
  }
LAB_140e70771:
  *(undefined1 *)(param_1 + 0xfd) = 4;
  if (DAT_14cad09b8 == 1) {
    *(byte *)((longlong)param_1 + 0x7ea) = *(byte *)((longlong)param_1 + 0x7ea) | 4;
    FUN_140cbebe8(puVar1,1);
    *(byte *)((longlong)param_1 + 0x7ba) = *(byte *)((longlong)param_1 + 0x7ba) | 6;
    FUN_140cbebe8(param_1 + 0xf6,1);
    *(undefined1 *)(param_1 + 0xf7) = 0;
  }
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 6;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x41000000;
  param_1[0x40] = 0x3f00000043d20000;
  param_1[0x66] = 0;
  param_1[0x67] = 0x4076800000000000;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x3f35c28f42330f72;
  param_1[0x48] = DAT_14cad0eb8;
  uVar9 = _DAT_14cad0eb0;
  param_1[0x46] = _DAT_14cad0ea8;
  param_1[0x47] = uVar9;
  uVar9 = DAT_14c8463d8;
  param_1[0x4a] = DAT_14c8463d0;
  param_1[0x4b] = uVar9;
  uVar9 = DAT_14c8463e8;
  param_1[0x4c] = DAT_14c8463e0;
  param_1[0x4d] = uVar9;
  uVar9 = DAT_14c8463d8;
  param_1[0x4e] = DAT_14c8463d0;
  param_1[0x4f] = uVar9;
  uVar9 = DAT_14c8463e8;
  param_1[0x50] = DAT_14c8463e0;
  param_1[0x51] = uVar9;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x42340000;
  param_1[0x65] = 0x4220000000000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x44160000;
  param_1[0x5c] = 0x4416000043960000;
  *(undefined4 *)(param_1 + 0x5d) = 0x44160000;
  param_1[0x88] = 0x83d4ccccd;
  *(undefined4 *)(param_1 + 0x89) = 2;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0x42c8000043fa0000;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x4000000042c80000;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0x3d4ccccd3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0x3d072b023d23d70a;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x43c0000043800000;
  *(undefined1 *)((longlong)param_1 + 0x293) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0x417000003d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x43960000;
  param_1[0x6b] = 0x43d2000042200000;
  *(undefined4 *)(param_1 + 0x62) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x40000000;
  *(undefined4 *)(param_1 + 99) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x45000000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x450000003cf83e10;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0x4134000040800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x42c80000;
  bVar6 = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
  *(byte *)((longlong)param_1 + 0x5b4) = bVar6;
  *(undefined4 *)(param_1 + 100) = 0x42200000;
  if (param_1[0x3e] != 0) {
    FUN_147997846();
    bVar6 = *(byte *)((longlong)param_1 + 0x5b4);
  }
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  uVar9 = DAT_14c8463e8;
  param_1[0x76] = DAT_14c8463e0;
  param_1[0x77] = uVar9;
  uVar9 = DAT_14c8463d8;
  param_1[0x74] = DAT_14c8463d0;
  param_1[0x75] = uVar9;
  param_1[0x7d] = DAT_14c8464f0;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7c] = uVar9;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x80] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x81] = uVar9;
  param_1[0x82] = DAT_14c8464f0;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xc5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xc6] = uVar9;
  param_1[199] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0xb5) = 0x401;
  *(undefined1 *)((longlong)param_1 + 0x5aa) = 1;
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) & 0xf | 0x70;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6d) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x49371b00;
  *(undefined4 *)(param_1 + 0x6e) = 0xbf400000;
  *(byte *)((longlong)param_1 + 0x34b) = *(byte *)((longlong)param_1 + 0x34b) & 0xf8 | 4;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 0xc2;
  param_1[0x6f] = 0x437a0000bf800000;
  *(undefined4 *)(param_1 + 0x70) = 0x40200000;
  *(byte *)((longlong)param_1 + 0x5b7) = *(byte *)((longlong)param_1 + 0x5b7) & 0xfd;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0x96 | 0x20;
  *(byte *)((longlong)param_1 + 0x5b4) = bVar6 | 0x1f;
  *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xf9;
  *(byte *)((longlong)param_1 + 0x5b6) = *(byte *)((longlong)param_1 + 0x5b6) & 0x6d | 2;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 0xe;
  (**(code **)(param_1[0x2f] + 0x70))(param_1 + 0x2f);
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x136] = param_1 + 0x107;
  param_1[0x17f] = param_1 + 0x169;
  *(undefined1 *)(param_1 + 0x14d) = 1;
  *(undefined1 *)(param_1 + 0x196) = 1;
  param_1[0x105] = 0x43700000;
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) & 0xfc | 1;
  *(byte *)((longlong)param_1 + 0x5b6) = *(byte *)((longlong)param_1 + 0x5b6) & 0x9f | 0x40;
  *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) & 0xf7;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xb8] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xb9] = uVar9;
  param_1[0xba] = DAT_14c8464f0;
  param_1[0xbb] = 0x43fa000000000000;
  *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) | 1;
  param_1[0xc3] = 0xffffffff;
  uVar9 = DAT_14c8463e8;
  param_1[0x56] = DAT_14c8463e0;
  param_1[0x57] = uVar9;
  uVar9 = DAT_14c8463d8;
  param_1[0x54] = DAT_14c8463d0;
  param_1[0x55] = uVar9;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x58] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x59] = uVar9;
  param_1[0x5a] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xf2) = 0x3dcccccd;
  param_1[0xf3] = 0x3f2b851f41400000;
  param_1[0xf4] = 0x412000003f800000;
  *(undefined1 *)(param_1 + 0x205) = 1;
  return param_1;
}



// FUNCTION 140e70c96 FUN_140e70c96 body=7 status=ok
// SIG undefined FUN_140e70c96(void)

void FUN_140e70c96(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 140e70c9e FUN_140e70c9e body=257 status=ok
// SIG undefined FUN_140e70c9e(void)

void FUN_140e70c9e(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  if (param_2 == 0) {
    QueryPerformanceCounter(&local_40);
    *param_1 = local_40.s.LowPart;
  }
  else {
    FUN_1400021e4(&local_30,&local_40);
    puVar2 = (undefined2 *)CONCAT44(local_40.s.HighPart,local_40.s.LowPart);
    local_40.s.LowPart = 0;
    uVar1 = local_38 - 1;
    if (local_38 == 0) {
      uVar1 = local_40.s.LowPart;
    }
    if (0 < (int)uVar1) {
      puVar3 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar3 = puVar2;
      }
      lVar6 = 0;
      local_40.s.LowPart = 0;
      do {
        uVar4 = ((uint)(0x19 < (ushort)puVar3[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar6]) -
                0x20;
        uVar5 = local_40.s.LowPart >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)((local_40.s.LowPart ^ uVar4) & 0xff) * 4);
        local_40.s.LowPart =
             uVar5 >> 8 ^
             *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
        lVar6 = lVar6 + 1;
      } while (uVar1 != (uint)lVar6);
    }
    *param_1 = local_40.s.LowPart;
    if (puVar2 != (undefined2 *)0x0) {
      FUN_1400020a8();
      local_40.s.LowPart = *param_1;
    }
  }
  param_1[1] = local_40.s.LowPart;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e70da6 FUN_140e70da6 body=228 status=ok
// SIG undefined FUN_140e70da6(void)

longlong FUN_140e70da6(void)

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
  if (DAT_14cb271d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f9df9f;
    local_40 = &LAB_14644ce4d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputAction",&DAT_14cb271d8,&DAT_147f9df9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb271d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e70e8c FUN_140e70e8c body=152 status=ok
// SIG undefined FUN_140e70e8c(void)

void FUN_140e70e8c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_1475db992(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e70f50 FUN_140e70f50 body=187 status=ok
// SIG undefined FUN_140e70f50(void)

ulonglong FUN_140e70f50(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x1f0), lVar4 != 0)) {
    lVar3 = FUN_140dbac94(lVar4);
    if (lVar3 != 0) {
      lVar4 = FUN_140dbafcc(lVar4);
      if (lVar4 != 0) {
        lVar2 = FUN_1400f6f32(lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
          param_2 = param_2 + 0x18;
          lVar4 = FUN_140bccd38(lVar2,param_2);
          if (lVar4 != 0) {
            uVar1 = FUN_140def96c(lVar2,param_2);
            lVar2 = FUN_140e7100c(lVar4);
            uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            if (lVar2 != 0) {
              FUN_140e711a8(lVar2,param_4,param_5,uVar1);
            }
            goto LAB_140e70ffb;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_140e70ffb:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140e7100c FUN_140e7100c body=105 status=ok
// SIG undefined FUN_140e7100c(void)

void FUN_140e7100c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e710c2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e71076(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e71076 FUN_140e71076 body=76 status=ok
// SIG undefined FUN_140e71076(void)

void FUN_140e71076(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e710c2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e710b3;
    }
  }
  lVar2 = 0;
LAB_140e710b3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e710c2 FUN_140e710c2 body=228 status=ok
// SIG undefined FUN_140e710c2(void)

longlong FUN_140e710c2(void)

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
  if (DAT_14cbb2dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5a60d;
    local_40 = &LAB_145d3d2fb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Options",&DAT_14cbb2dd0,FUN_1465f6dcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e711a8 FUN_140e711a8 body=287 status=ok
// SIG undefined FUN_140e711a8(void)

void FUN_140e711a8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    FUN_14009b010(param_3,3,0);
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14009b010(&local_58,1,0);
  if ((local_58 != 0) && ((*(byte *)(local_58 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0xf4) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_58,pcVar4);
  }
  local_68 = DAT_14cbd7f00;
  local_60 = DAT_14cbd7f08;
  FUN_1448075d0(local_48);
  if (*param_3 != 0) {
    local_78 = 0;
    FUN_14014191c(*param_3,local_48,&local_58,0);
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e712c8 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 140e712cd FUN_140e712cd body=8066 status=ok
// SIG undefined FUN_140e712cd(void)

longlong * FUN_140e712cd(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *pbVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint uVar27;
  byte *pbVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_428 [40];
  undefined1 auStack_400 [4];
  uint local_3fc;
  undefined4 local_3f8;
  undefined2 auStack_3f4 [2];
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined8 local_370;
  undefined8 *local_368;
  undefined1 *puStack_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  plVar1 = param_1 + 1;
  piVar20 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar20 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *piVar20;
    *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
  }
  iVar9 = *param_2;
  if (iVar9 != 0) {
    if (iVar9 != 1) {
      if (iVar9 == 2) {
        FUN_144aa0c38(param_1,param_2 + 0x76);
        piVar20 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar20 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x7b,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0x7b] = *piVar20;
          *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
        }
        local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)(param_2 + 0x7c));
        puVar7 = (ulonglong *)*plVar1;
        puVar2 = (undefined4 *)*puVar7 + 1;
        if ((undefined4 *)puVar7[1] < puVar2) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_368);
          }
        }
        else {
          local_368 = (undefined8 *)CONCAT44(local_368._4_4_,*(undefined4 *)*puVar7);
          *puVar7 = (ulonglong)puVar2;
        }
        *(undefined1 *)(param_2 + 0x7c) = local_368._0_1_;
      }
      goto LAB_140e71399;
    }
    piVar20 = param_2 + 6;
    pcVar12 = *(code **)(*param_1 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      plVar11 = (longlong *)param_1[0x12];
      pcVar12 = *(code **)(*plVar11 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(plVar11,piVar20,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar17 = plVar11[0x12];
        lVar29 = plVar11[0x13];
        param_2[10] = *(int *)(lVar17 + 0x10 + lVar29);
        piVar5 = (int *)(lVar17 + lVar29);
        iVar9 = piVar5[1];
        iVar24 = piVar5[2];
        iVar23 = piVar5[3];
        *piVar20 = *piVar5;
        param_2[7] = iVar9;
        param_2[8] = iVar24;
        param_2[9] = iVar23;
        plVar11[0x13] = plVar11[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_140e7252a;
        if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
          piVar5 = *(int **)plVar11[1];
          param_2[10] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[7] = iVar9;
          param_2[8] = iVar24;
          param_2[9] = iVar23;
          plVar11 = (longlong *)plVar11[1];
          goto LAB_140e7243b;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(param_1,piVar20,0x14);
    }
    else {
      plVar11 = param_1;
      if (pcVar12 == FUN_144a6950e) {
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
          piVar5 = *(int **)*plVar1;
          param_2[10] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[7] = iVar9;
          param_2[8] = iVar24;
          param_2[9] = iVar23;
          plVar11 = (longlong *)*plVar1;
LAB_140e7243b:
          *plVar11 = *plVar11 + 0x14;
        }
      }
      else {
LAB_140e7252a:
        (*pcVar12)(plVar11,piVar20,0x14);
      }
    }
    piVar20 = param_2 + 0xb;
    pcVar12 = *(code **)(*param_1 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      plVar11 = (longlong *)param_1[0x12];
      pcVar12 = *(code **)(*plVar11 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(plVar11,piVar20,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar17 = plVar11[0x12];
        lVar29 = plVar11[0x13];
        param_2[0xf] = *(int *)(lVar17 + 0x10 + lVar29);
        piVar5 = (int *)(lVar17 + lVar29);
        iVar9 = piVar5[1];
        iVar24 = piVar5[2];
        iVar23 = piVar5[3];
        *piVar20 = *piVar5;
        param_2[0xc] = iVar9;
        param_2[0xd] = iVar24;
        param_2[0xe] = iVar23;
        plVar11[0x13] = plVar11[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_140e72537;
        if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
          piVar5 = *(int **)plVar11[1];
          param_2[0xf] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0xc] = iVar9;
          param_2[0xd] = iVar24;
          param_2[0xe] = iVar23;
          plVar11 = (longlong *)plVar11[1];
          goto LAB_140e72473;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(param_1,piVar20,0x14);
    }
    else {
      plVar11 = param_1;
      if (pcVar12 == FUN_144a6950e) {
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
          piVar5 = *(int **)*plVar1;
          param_2[0xf] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0xc] = iVar9;
          param_2[0xd] = iVar24;
          param_2[0xe] = iVar23;
          plVar11 = (longlong *)*plVar1;
LAB_140e72473:
          *plVar11 = *plVar11 + 0x14;
        }
      }
      else {
LAB_140e72537:
        (*pcVar12)(plVar11,piVar20,0x14);
      }
    }
    piVar20 = param_2 + 0x10;
    pcVar12 = *(code **)(*param_1 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      plVar11 = (longlong *)param_1[0x12];
      pcVar12 = *(code **)(*plVar11 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(plVar11,piVar20,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar17 = plVar11[0x12];
        lVar29 = plVar11[0x13];
        param_2[0x14] = *(int *)(lVar17 + 0x10 + lVar29);
        piVar5 = (int *)(lVar17 + lVar29);
        iVar9 = piVar5[1];
        iVar24 = piVar5[2];
        iVar23 = piVar5[3];
        *piVar20 = *piVar5;
        param_2[0x11] = iVar9;
        param_2[0x12] = iVar24;
        param_2[0x13] = iVar23;
        plVar11[0x13] = plVar11[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_140e72544;
        if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
          piVar5 = *(int **)plVar11[1];
          param_2[0x14] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0x11] = iVar9;
          param_2[0x12] = iVar24;
          param_2[0x13] = iVar23;
          plVar11 = (longlong *)plVar11[1];
          goto LAB_140e724ab;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(param_1,piVar20,0x14);
    }
    else {
      plVar11 = param_1;
      if (pcVar12 == FUN_144a6950e) {
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
          piVar5 = *(int **)*plVar1;
          param_2[0x14] = piVar5[4];
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0x11] = iVar9;
          param_2[0x12] = iVar24;
          param_2[0x13] = iVar23;
          plVar11 = (longlong *)*plVar1;
LAB_140e724ab:
          *plVar11 = *plVar11 + 0x14;
        }
      }
      else {
LAB_140e72544:
        (*pcVar12)(plVar11,piVar20,0x14);
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar10 < 0x15) {
      local_358[0] = 0;
      local_368 = (undefined8 *)0x0;
      puStack_360 = (undefined1 *)0x0;
      FUN_144aa0c38(param_1);
      local_3e8 = 0;
      _local_3f8 = 0;
      uStack_3f0 = 0;
      FUN_144aa0c38(param_1);
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (0x13 < uVar10) {
      piVar20 = param_2 + 0x15;
      pcVar12 = *(code **)(*param_1 + 0x170);
      if (pcVar12 == FUN_14473a572) {
        plVar11 = (longlong *)param_1[0x12];
        pcVar12 = *(code **)(*plVar11 + 0x170);
        if (pcVar12 == FUN_14004e24c) {
          FUN_14004e24c(plVar11,piVar20,0x14);
        }
        else if (pcVar12 == FUN_1447395b8) {
          lVar17 = plVar11[0x12];
          lVar29 = plVar11[0x13];
          param_2[0x19] = *(int *)(lVar17 + 0x10 + lVar29);
          piVar5 = (int *)(lVar17 + lVar29);
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0x16] = iVar9;
          param_2[0x17] = iVar24;
          param_2[0x18] = iVar23;
          plVar11[0x13] = plVar11[0x13] + 0x14;
        }
        else {
          if (pcVar12 != FUN_144a6950e) goto LAB_140e72551;
          if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
            piVar5 = *(int **)plVar11[1];
            param_2[0x19] = piVar5[4];
            iVar9 = piVar5[1];
            iVar24 = piVar5[2];
            iVar23 = piVar5[3];
            *piVar20 = *piVar5;
            param_2[0x16] = iVar9;
            param_2[0x17] = iVar24;
            param_2[0x18] = iVar23;
            plVar11 = (longlong *)plVar11[1];
            goto LAB_140e724e3;
          }
        }
      }
      else if (pcVar12 == FUN_140090aac) {
        FUN_140090aac(param_1,piVar20,0x14);
      }
      else {
        plVar11 = param_1;
        if (pcVar12 == FUN_144a6950e) {
          if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
            piVar5 = *(int **)*plVar1;
            param_2[0x19] = piVar5[4];
            iVar9 = piVar5[1];
            iVar24 = piVar5[2];
            iVar23 = piVar5[3];
            *piVar20 = *piVar5;
            param_2[0x16] = iVar9;
            param_2[0x17] = iVar24;
            param_2[0x18] = iVar23;
            plVar11 = (longlong *)*plVar1;
LAB_140e724e3:
            *plVar11 = *plVar11 + 0x14;
          }
        }
        else {
LAB_140e72551:
          (*pcVar12)(plVar11,piVar20,0x14);
        }
      }
      piVar20 = param_2 + 0x1a;
      pcVar12 = *(code **)(*param_1 + 0x170);
      if (pcVar12 == FUN_14473a572) {
        plVar11 = (longlong *)param_1[0x12];
        pcVar12 = *(code **)(*plVar11 + 0x170);
        if (pcVar12 == FUN_14004e24c) {
          FUN_14004e24c(plVar11,piVar20,0x14);
        }
        else if (pcVar12 == FUN_1447395b8) {
          lVar17 = plVar11[0x12];
          lVar29 = plVar11[0x13];
          param_2[0x1e] = *(int *)(lVar17 + 0x10 + lVar29);
          piVar5 = (int *)(lVar17 + lVar29);
          iVar9 = piVar5[1];
          iVar24 = piVar5[2];
          iVar23 = piVar5[3];
          *piVar20 = *piVar5;
          param_2[0x1b] = iVar9;
          param_2[0x1c] = iVar24;
          param_2[0x1d] = iVar23;
          plVar11[0x13] = plVar11[0x13] + 0x14;
        }
        else {
          if (pcVar12 != FUN_144a6950e) goto LAB_140e7255e;
          if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
            piVar5 = *(int **)plVar11[1];
            param_2[0x1e] = piVar5[4];
            iVar9 = piVar5[1];
            iVar24 = piVar5[2];
            iVar23 = piVar5[3];
            *piVar20 = *piVar5;
            param_2[0x1b] = iVar9;
            param_2[0x1c] = iVar24;
            param_2[0x1d] = iVar23;
            plVar11 = (longlong *)plVar11[1];
            goto LAB_140e7251b;
          }
        }
      }
      else if (pcVar12 == FUN_140090aac) {
        FUN_140090aac(param_1,piVar20,0x14);
      }
      else {
        plVar11 = param_1;
        if (pcVar12 == FUN_144a6950e) {
          if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
            piVar5 = *(int **)*plVar1;
            param_2[0x1e] = piVar5[4];
            iVar9 = piVar5[1];
            iVar24 = piVar5[2];
            iVar23 = piVar5[3];
            *piVar20 = *piVar5;
            param_2[0x1b] = iVar9;
            param_2[0x1c] = iVar24;
            param_2[0x1d] = iVar23;
            plVar11 = (longlong *)*plVar1;
LAB_140e7251b:
            *plVar11 = *plVar11 + 0x14;
          }
        }
        else {
LAB_140e7255e:
          (*pcVar12)(plVar11,piVar20,0x14);
        }
      }
    }
    iVar9 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar9 == 9) {
      iVar9 = 5;
      do {
        local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
        puVar7 = (ulonglong *)*plVar1;
        if (puVar7[1] < *puVar7 + 4) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_368);
          }
        }
        else {
          *puVar7 = *puVar7 + 4;
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar10 < 0xb) {
      local_370 = 0x1100000000;
      FUN_140e73250(param_1);
      uVar10 = (uint)local_370;
      lVar17 = (longlong)(int)(uint)local_370;
      if (1 < lVar17) {
        memset(local_358,0,0x2f0);
        puStack_360 = auStack_400 + lVar17 * 8;
        local_368 = (undefined8 *)&local_3f8;
        fVar31 = logf((float)(int)uVar10);
        local_358[0] = (int)(longlong)(fVar31 + fVar31);
        ppuVar13 = &local_368;
        do {
          pbVar16 = (byte *)*ppuVar13;
          pbVar25 = (byte *)ppuVar13[1];
          iVar9 = *(int *)(ppuVar13 + 2);
          iVar24 = (int)((ulonglong)((longlong)pbVar25 - (longlong)pbVar16) >> 3);
          uVar10 = iVar24 + 1;
          if (iVar9 != 0) {
LAB_140e728e4:
            if (8 < (int)uVar10) {
              uVar8 = *(undefined8 *)(pbVar16 + (ulonglong)(uVar10 >> 1) * 8);
              *(undefined8 *)(pbVar16 + (ulonglong)(uVar10 >> 1) * 8) = *(undefined8 *)pbVar16;
              *(undefined8 *)pbVar16 = uVar8;
              pbVar18 = pbVar25 + 8;
              pbVar15 = pbVar16;
              do {
                pbVar15 = pbVar15 + 8;
                if (pbVar15 <= pbVar25) {
                  while (*pbVar15 <= *pbVar16) {
                    if (((*pbVar16 <= *pbVar15) &&
                        ((pbVar16[1] < pbVar15[1] ||
                         ((pbVar16[1] == pbVar15[1] && (pbVar16[3] < pbVar15[3])))))) ||
                       (pbVar15 = pbVar15 + 8, pbVar25 < pbVar15)) break;
                  }
                }
                pbVar4 = pbVar18 + -8;
                pbVar28 = pbVar18;
                if (pbVar16 < pbVar4) {
                  do {
                    pbVar26 = pbVar4;
                    pbVar4 = pbVar26;
                    pbVar28 = pbVar18;
                    if (pbVar18[-8] < *pbVar16) break;
                    if (pbVar18[-8] <= *pbVar16) {
                      if (pbVar26[1] < pbVar16[1]) break;
                      if ((pbVar26[1] == pbVar16[1]) && (pbVar26[3] < pbVar16[3])) {
                        pbVar28 = pbVar26 + 8;
                        break;
                      }
                    }
                    pbVar4 = pbVar26 + -8;
                    pbVar18 = pbVar26;
                    pbVar28 = pbVar26;
                  } while (pbVar16 < pbVar4);
                }
                pbVar18 = pbVar4;
                if (pbVar18 < pbVar15) goto LAB_140e7299f;
                uVar8 = *(undefined8 *)pbVar15;
                *(undefined8 *)pbVar15 = *(undefined8 *)pbVar18;
                *(undefined8 *)pbVar18 = uVar8;
              } while( true );
            }
            for (; pbVar15 = pbVar16, pbVar18 = pbVar16, pbVar16 < pbVar25; pbVar25 = pbVar25 + -8)
            {
              while (pbVar18 = pbVar18 + 8, pbVar18 <= pbVar25) {
                if ((*pbVar15 < *pbVar18) ||
                   ((*pbVar15 <= *pbVar18 &&
                    ((pbVar15[1] < pbVar18[1] ||
                     ((pbVar15[1] == pbVar18[1] && (pbVar15[3] < pbVar18[3])))))))) {
                  pbVar15 = pbVar18;
                }
              }
              uVar8 = *(undefined8 *)pbVar15;
              *(undefined8 *)pbVar15 = *(undefined8 *)pbVar25;
              *(undefined8 *)pbVar25 = uVar8;
            }
            goto LAB_140e72c48;
          }
LAB_140e72a28:
          if (uVar10 != 0) {
            iVar9 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
            iVar24 = iVar9;
joined_r0x000140e72a4e:
            do {
              iVar23 = iVar9 * 2 + 1;
              if (iVar23 < (int)uVar10) {
                iVar22 = iVar9 * 2 + 2;
                if (iVar22 < (int)uVar10) {
                  lVar17 = (longlong)iVar22;
                  lVar29 = (longlong)iVar23;
                  if ((pbVar16[lVar17 * 8] < pbVar16[lVar29 * 8]) ||
                     ((pbVar16[lVar17 * 8] <= pbVar16[lVar29 * 8] &&
                      ((pbVar16[lVar17 * 8 + 1] < pbVar16[lVar29 * 8 + 1] ||
                       ((pbVar16[lVar17 * 8 + 1] == pbVar16[lVar29 * 8 + 1] &&
                        (pbVar16[lVar17 * 8 + 3] < pbVar16[lVar29 * 8 + 3]))))))))
                  goto LAB_140e72a82;
                }
                else {
LAB_140e72a82:
                  lVar17 = (longlong)iVar23;
                  iVar22 = iVar23;
                }
                lVar29 = (longlong)iVar9;
                if ((pbVar16[lVar29 * 8] < pbVar16[lVar17 * 8]) ||
                   ((pbVar16[lVar29 * 8] <= pbVar16[lVar17 * 8] &&
                    ((pbVar16[lVar29 * 8 + 1] < pbVar16[lVar17 * 8 + 1] ||
                     ((pbVar16[lVar29 * 8 + 1] == pbVar16[lVar17 * 8 + 1] &&
                      (pbVar16[lVar29 * 8 + 3] < pbVar16[lVar17 * 8 + 3])))))))) {
                  uVar8 = *(undefined8 *)(pbVar16 + lVar29 * 8);
                  *(undefined8 *)(pbVar16 + lVar29 * 8) = *(undefined8 *)(pbVar16 + lVar17 * 8);
                  *(undefined8 *)(pbVar16 + lVar17 * 8) = uVar8;
                  iVar9 = iVar22;
                  goto joined_r0x000140e72a4e;
                }
              }
              bVar30 = iVar24 != 0;
              iVar9 = iVar24 + -1;
              iVar24 = iVar9;
            } while (bVar30);
            if (1 < (int)uVar10) {
              uVar21 = (ulonglong)uVar10;
              uVar8 = *(undefined8 *)pbVar16;
              *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar16 + uVar21 * 8 + -8);
              *(undefined8 *)(pbVar16 + uVar21 * 8 + -8) = uVar8;
              if (uVar10 != 2) {
                do {
                  uVar21 = uVar21 - 1;
                  iVar24 = 0;
                  iVar9 = 1;
                  iVar23 = 0;
                  do {
                    iVar22 = iVar24 + 2;
                    lVar17 = (longlong)iVar22;
                    if (lVar17 < (longlong)uVar21) {
                      lVar29 = (longlong)iVar9;
                      if ((pbVar16[lVar17 * 8] < pbVar16[lVar29 * 8]) ||
                         ((pbVar16[lVar17 * 8] <= pbVar16[lVar29 * 8] &&
                          ((pbVar16[lVar17 * 8 + 1] < pbVar16[lVar29 * 8 + 1] ||
                           ((pbVar16[lVar17 * 8 + 1] == pbVar16[lVar29 * 8 + 1] &&
                            (pbVar16[lVar17 * 8 + 3] < pbVar16[lVar29 * 8 + 3]))))))))
                      goto LAB_140e72b52;
                    }
                    else {
LAB_140e72b52:
                      lVar17 = (longlong)iVar9;
                      iVar22 = iVar9;
                    }
                    lVar29 = (longlong)iVar23;
                    if ((pbVar16[lVar17 * 8] <= pbVar16[lVar29 * 8]) &&
                       ((pbVar16[lVar17 * 8] < pbVar16[lVar29 * 8] ||
                        ((pbVar16[lVar17 * 8 + 1] <= pbVar16[lVar29 * 8 + 1] &&
                         ((pbVar16[lVar29 * 8 + 1] != pbVar16[lVar17 * 8 + 1] ||
                          (pbVar16[lVar17 * 8 + 3] <= pbVar16[lVar29 * 8 + 3])))))))) break;
                    uVar8 = *(undefined8 *)(pbVar16 + lVar29 * 8);
                    *(undefined8 *)(pbVar16 + lVar29 * 8) = *(undefined8 *)(pbVar16 + lVar17 * 8);
                    *(undefined8 *)(pbVar16 + lVar17 * 8) = uVar8;
                    iVar24 = iVar22 * 2;
                    iVar9 = iVar22 * 2 + 1;
                    iVar23 = iVar22;
                  } while ((longlong)iVar9 < (longlong)uVar21);
                  uVar8 = *(undefined8 *)pbVar16;
                  *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar16 + uVar21 * 8 + -8);
                  *(undefined8 *)(pbVar16 + uVar21 * 8 + -8) = uVar8;
                } while (2 < uVar21);
              }
            }
          }
LAB_140e72c48:
          ppuVar13 = ppuVar13 + -3;
        } while (&local_368 <= ppuVar13);
        uVar10 = (uint)local_370;
      }
      piVar20 = param_2 + 0x1f;
      iVar9 = param_2[0x41];
      param_2[0x41] = iVar9 + uVar10;
      uVar19 = uVar10;
      if ((uint)(param_2[0x42] - iVar9) < uVar10) {
        FUN_14738ac8a(piVar20);
        uVar19 = (uint)local_370;
      }
      uVar27 = 0;
      memset(piVar20 + (longlong)iVar9 * 2,0,(longlong)(int)uVar10 << 3);
      if (uVar19 != 0) {
        do {
          lVar17 = (longlong)(int)uVar27;
          *(undefined1 *)(piVar20 + lVar17 * 2) = *(undefined1 *)(&local_3f8 + lVar17 * 2);
          *(undefined1 *)((longlong)param_2 + lVar17 * 8 + 0x7d) =
               *(undefined1 *)((longlong)&local_3f8 + lVar17 * 8 + 1);
          *(undefined1 *)((longlong)param_2 + lVar17 * 8 + 0x7e) =
               *(undefined1 *)((longlong)&local_3f8 + lVar17 * 8 + 2);
          *(undefined1 *)((longlong)param_2 + lVar17 * 8 + 0x7f) =
               *(undefined1 *)((longlong)&local_3f8 + lVar17 * 8 + 3);
          *(undefined2 *)(param_2 + lVar17 * 2 + 0x20) = auStack_3f4[lVar17 * 4];
          *(undefined2 *)((longlong)param_2 + lVar17 * 8 + 0x82) = auStack_3f4[lVar17 * 4 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar19 != uVar27);
      }
    }
    else {
      FUN_140e73250(param_1,param_2 + 0x1f);
    }
    lVar17 = 0;
    do {
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x10c);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x10d);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x10e);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x10f);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x110);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x111);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      puVar14 = (undefined1 *)((longlong)param_2 + lVar17 + 0x112);
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar14,1);
      }
      else {
        *puVar14 = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      lVar17 = lVar17 + 7;
    } while (lVar17 != 0x38);
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)(param_2 + 0x51));
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 0x51) = (uint)local_368 != 0;
    }
    else {
      *(bool *)(param_2 + 0x51) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)((longlong)param_2 + 0x145))
      ;
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x145) = (uint)local_368 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x145) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x52,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[0x52] = *piVar20;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x53,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[0x53] = *piVar20;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x54,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x54) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x151),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x151) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x152),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x152) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)((longlong)param_2 + 0x153))
      ;
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x153) = (uint)local_368 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x153) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar10 < 0x1b) {
      puVar7 = (ulonglong *)*plVar1;
      if (puVar7[1] < *puVar7 + 4) {
        local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
        if (1 < (uint)local_368) {
          FUN_14572541c(param_1);
        }
      }
      else {
        *puVar7 = *puVar7 + 4;
      }
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)(param_2 + 0x55));
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 0x55) = (uint)local_368 != 0;
    }
    else {
      *(bool *)(param_2 + 0x55) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x155),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x155) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)((longlong)param_2 + 0x156))
      ;
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x156) = (uint)local_368 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x156) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x157),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x157) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x56,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x56) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x159),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x159) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x15a),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x15a) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)((longlong)param_2 + 0x15b))
      ;
      (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      if (1 < (uint)local_368) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x15b) = (uint)local_368 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x15b) = *piVar20 != 0;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x57,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x57) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x15d),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x15d) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x15e),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x15e) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x15f),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x15f) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x58,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x58) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x161),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x161) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    lVar17 = 0;
    do {
      _local_3f8 = CONCAT44(auStack_3f4,(uint)*(byte *)((longlong)param_2 + lVar17 + 0x162));
      puVar7 = (ulonglong *)*plVar1;
      puVar2 = (undefined4 *)*puVar7 + 1;
      if ((undefined4 *)puVar7[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_3f8,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_3f8);
        }
      }
      else {
        _local_3f8 = CONCAT44(auStack_3f4,*(undefined4 *)*puVar7);
        *puVar7 = (ulonglong)puVar2;
      }
      *(undefined1 *)((longlong)param_2 + lVar17 + 0x162) = (undefined1)local_3f8;
      uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
      if (uVar10 < 0x17) {
        uVar21 = (ulonglong)local_368 >> 0x20;
        local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
        puVar7 = (ulonglong *)*plVar1;
        puVar2 = (undefined4 *)*puVar7 + 1;
        if ((undefined4 *)puVar7[1] < puVar2) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_368);
          }
        }
        else {
          local_368 = (undefined8 *)CONCAT44((int)uVar21,*(undefined4 *)*puVar7);
          *puVar7 = (ulonglong)puVar2;
        }
      }
      else {
        local_368 = (undefined8 *)
                    (ulonglong)((uint)*(undefined8 *)(param_2 + lVar17 * 2 + 0x5c) & 0x2000010);
        plVar11 = (longlong *)*plVar1;
        if ((ulonglong *)plVar11[1] < (ulonglong *)*plVar11 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_368,8);
          }
          else {
            thunk_FUN_146821949(param_1,&local_368);
          }
        }
        else {
          local_368 = *(undefined8 **)*plVar11;
          *plVar11 = *plVar11 + 8;
        }
      }
      *(ulonglong *)(param_2 + lVar17 * 2 + 0x5c) = (ulonglong)((uint)local_368 & 0x2000010);
      uVar21 = (ulonglong)local_368 >> 8;
      local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffffffffff00);
      puVar7 = (ulonglong *)*plVar1;
      puVar6 = (undefined1 *)*puVar7 + 1;
      if ((undefined1 *)puVar7[1] < puVar6) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,1);
      }
      else {
        local_368 = (undefined8 *)CONCAT71((int7)uVar21,*(undefined1 *)*puVar7);
        *puVar7 = (ulonglong)puVar6;
      }
      puVar7 = (ulonglong *)*plVar1;
      if (puVar7[1] < *puVar7 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,1);
      }
      else {
        *puVar7 = *puVar7 + 1;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 8);
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x6c,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[0x6c] = *piVar20;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    piVar20 = *(int **)*plVar1;
    if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x6d,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[0x6d] = *piVar20;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
    }
    _local_3f8 = CONCAT44(auStack_3f4,param_2[0x73]);
    puVar7 = (ulonglong *)*plVar1;
    puVar2 = (undefined4 *)*puVar7 + 1;
    if ((undefined4 *)puVar7[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_3f8,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_3f8);
      }
    }
    else {
      _local_3f8 = CONCAT44(auStack_3f4,*(undefined4 *)*puVar7);
      *puVar7 = (ulonglong)puVar2;
    }
    param_2[0x73] = local_3f8;
    local_3fc = (uint)*(byte *)(param_2 + 0x6e);
    puVar7 = (ulonglong *)*plVar1;
    puVar3 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_3fc,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_3fc);
      }
    }
    else {
      local_3fc = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar3;
    }
    *(undefined1 *)(param_2 + 0x6e) = (undefined1)local_3fc;
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar10 < 0x17) {
      uVar21 = (ulonglong)local_368 >> 0x20;
      local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
      puVar7 = (ulonglong *)*plVar1;
      puVar2 = (undefined4 *)*puVar7 + 1;
      if ((undefined4 *)puVar7[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_368);
        }
      }
      else {
        local_368 = (undefined8 *)CONCAT44((int)uVar21,*(undefined4 *)*puVar7);
        *puVar7 = (ulonglong)puVar2;
      }
    }
    else {
      local_368 = (undefined8 *)(ulonglong)((uint)*(undefined8 *)(param_2 + 0x70) & 0x2000014);
      plVar11 = (longlong *)*plVar1;
      if ((ulonglong *)plVar11[1] < (ulonglong *)*plVar11 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_368,8);
        }
        else {
          thunk_FUN_146821949(param_1,&local_368);
        }
      }
      else {
        local_368 = *(undefined8 **)*plVar11;
        *plVar11 = *plVar11 + 8;
      }
    }
    *(ulonglong *)(param_2 + 0x70) = (ulonglong)((uint)local_368 & 0x2000014);
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x72,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x72) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x1c9),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1c9) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x1ca),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1ca) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x1cb),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1cb) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x74,1);
    }
    else {
      *(undefined1 *)(param_2 + 0x74) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    puVar6 = *(undefined1 **)*plVar1;
    if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x1d1),1);
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1d1) = *puVar6;
      *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar10 < 0x18) {
      auStack_400[3] = 0;
      puVar7 = (ulonglong *)*plVar1;
      puVar6 = (undefined1 *)*puVar7 + 1;
      if ((undefined1 *)puVar7[1] < puVar6) {
        (**(code **)(*param_1 + 0x170))(param_1,auStack_400 + 3,1);
      }
      else {
        auStack_400[3] = *(undefined1 *)*puVar7;
        *puVar7 = (ulonglong)puVar6;
      }
      puVar7 = (ulonglong *)*plVar1;
      if (puVar7[1] < *puVar7 + 4) {
        local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
        if (1 < (uint)local_368) {
          FUN_14572541c(param_1);
        }
      }
      else {
        *puVar7 = *puVar7 + 4;
      }
    }
    else {
      puVar6 = *(undefined1 **)*plVar1;
      if ((undefined1 *)((undefined8 *)*plVar1)[1] < puVar6 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x1d2),1);
      }
      else {
        *(undefined1 *)((longlong)param_2 + 0x1d2) = *puVar6;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 1;
      }
      piVar20 = *(int **)*plVar1;
      if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
        local_368 = (undefined8 *)
                    CONCAT44(local_368._4_4_,(uint)*(byte *)((longlong)param_2 + 0x1d3));
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
        if (1 < (uint)local_368) {
          FUN_14572541c(param_1);
        }
        *(bool *)((longlong)param_2 + 0x1d3) = (uint)local_368 != 0;
      }
      else {
        *(bool *)((longlong)param_2 + 0x1d3) = *piVar20 != 0;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x50))(param_1);
    if (0x1b < uVar10) {
      piVar20 = *(int **)*plVar1;
      if ((int *)((undefined8 *)*plVar1)[1] < piVar20 + 1) {
        local_368 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)*(byte *)(param_2 + 0x75));
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
        if (1 < (uint)local_368) {
          FUN_14572541c(param_1);
        }
        *(bool *)(param_2 + 0x75) = (uint)local_368 != 0;
      }
      else {
        *(bool *)(param_2 + 0x75) = *piVar20 != 0;
        *(longlong *)*plVar1 = *(longlong *)*plVar1 + 4;
      }
    }
    goto LAB_140e71399;
  }
  piVar20 = param_2 + 1;
  pcVar12 = *(code **)(*param_1 + 0x170);
  if (pcVar12 == FUN_14473a572) {
    plVar11 = (longlong *)param_1[0x12];
    pcVar12 = *(code **)(*plVar11 + 0x170);
    if (pcVar12 == FUN_14004e24c) {
      FUN_14004e24c(plVar11,piVar20,0x14);
    }
    else if (pcVar12 == FUN_1447395b8) {
      lVar17 = plVar11[0x12];
      lVar29 = plVar11[0x13];
      param_2[5] = *(int *)(lVar17 + 0x10 + lVar29);
      piVar5 = (int *)(lVar17 + lVar29);
      iVar9 = piVar5[1];
      iVar24 = piVar5[2];
      iVar23 = piVar5[3];
      *piVar20 = *piVar5;
      param_2[2] = iVar9;
      param_2[3] = iVar24;
      param_2[4] = iVar23;
      plVar11[0x13] = plVar11[0x13] + 0x14;
    }
    else {
      if (pcVar12 != FUN_144a6950e) goto LAB_140e72101;
      if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
        piVar5 = *(int **)plVar11[1];
        param_2[5] = piVar5[4];
        iVar9 = piVar5[1];
        iVar24 = piVar5[2];
        iVar23 = piVar5[3];
        *piVar20 = *piVar5;
        param_2[2] = iVar9;
        param_2[3] = iVar24;
        param_2[4] = iVar23;
        plVar11 = (longlong *)plVar11[1];
        goto LAB_140e7148a;
      }
    }
  }
  else if (pcVar12 == FUN_140090aac) {
    FUN_140090aac(param_1,piVar20,0x14);
  }
  else {
    plVar11 = param_1;
    if (pcVar12 == FUN_144a6950e) {
      if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
        piVar5 = *(int **)*plVar1;
        param_2[5] = piVar5[4];
        iVar9 = piVar5[1];
        iVar24 = piVar5[2];
        iVar23 = piVar5[3];
        *piVar20 = *piVar5;
        param_2[2] = iVar9;
        param_2[3] = iVar24;
        param_2[4] = iVar23;
        plVar11 = (longlong *)*plVar1;
LAB_140e7148a:
        *plVar11 = *plVar11 + 0x14;
      }
    }
    else {
LAB_140e72101:
      (*pcVar12)(plVar11,piVar20,0x14);
    }
  }
  iVar9 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar9 == 9) {
    local_368 = (undefined8 *)((ulonglong)local_368 & 0xffffffff00000000);
    puVar7 = (ulonglong *)*plVar1;
    if (puVar7[1] < *puVar7 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_368,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_368);
      }
    }
    else {
      *puVar7 = *puVar7 + 4;
    }
  }
LAB_140e71399:
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_140e7299f:
  uVar8 = *(undefined8 *)pbVar16;
  *(undefined8 *)pbVar16 = *(undefined8 *)pbVar18;
  *(undefined8 *)pbVar18 = uVar8;
  iVar9 = iVar9 + -1;
  pbVar28 = pbVar28 + -0x10;
  if ((longlong)pbVar28 - (longlong)pbVar16 < (longlong)pbVar25 - (longlong)pbVar15) {
    if (pbVar15 < pbVar25) {
      *ppuVar13 = (undefined8 *)pbVar15;
      ppuVar13[1] = (undefined8 *)pbVar25;
      *(int *)(ppuVar13 + 2) = iVar9;
      ppuVar13 = ppuVar13 + 3;
    }
    if (pbVar18 <= pbVar16 + 8) goto LAB_140e72c48;
  }
  else {
    if (pbVar16 + 8 < pbVar18) {
      *ppuVar13 = (undefined8 *)pbVar16;
      ppuVar13[1] = (undefined8 *)pbVar28;
      *(int *)(ppuVar13 + 2) = iVar9;
      ppuVar13 = ppuVar13 + 3;
    }
    pbVar28 = pbVar25;
    pbVar16 = pbVar15;
    if (pbVar25 <= pbVar15) goto LAB_140e72c48;
  }
  iVar24 = (int)((ulonglong)((longlong)pbVar28 - (longlong)pbVar16) >> 3);
  uVar10 = iVar24 + 1;
  pbVar25 = pbVar28;
  if (iVar9 == 0) goto LAB_140e72a28;
  goto LAB_140e728e4;
}



// FUNCTION 140e73250 FUN_140e73250 body=441 status=ok
// SIG undefined FUN_140e73250(void)

longlong * FUN_140e73250(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x88) << 3,(longlong)*(int *)(param_2 + 0x8c) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 0x88);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 0x88) = 0, *(int *)(param_2 + 0x8c) != 0)) {
      FUN_140451baa(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x88) = local_34;
    lVar6 = 0;
    lVar4 = param_2;
    do {
      FUN_140e7340a(param_1,lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < *(int *)(param_2 + 0x88));
  }
  else {
    *(undefined4 *)(param_2 + 0x88) = 0;
    if ((*(uint *)(param_2 + 0x8c) == local_34) || (FUN_140451baa(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
          FUN_14738ac8a(param_2,iVar2);
        }
        FUN_140e7340a(param_1,param_2 + (longlong)iVar2 * 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e7340a FUN_140e7340a body=426 status=ok
// SIG undefined FUN_140e7340a(void)

longlong * FUN_140e7340a(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,1);
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = (undefined2 *)(param_2 + 6);
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 140e735bc FUN_140e735bc body=1355 status=ok
// SIG undefined FUN_140e735bc(void)

undefined8 * FUN_140e735bc(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b411640;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
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
  param_1[9] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 10) = DAT_14c844848;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  if (iVar1 < iVar3) {
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
  param_1[0x2a] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0x200000003;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)((longlong)param_1 + 0x239) = 1;
  *(undefined1 *)((longlong)param_1 + 0x279) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d1) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  uVar4 = DAT_14c846500;
  param_1[0x6a] = DAT_14c8464f8;
  param_1[0x6b] = uVar4;
  param_1[0x6c] = DAT_14c846508;
  *(undefined8 *)((longlong)param_1 + 0x372) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x457a0000;
  param_1[0x70] = 0x100010000;
  *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  uVar5 = DAT_14cb841e0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x96] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[0x94] = DAT_14c8464e0;
  param_1[0x95] = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xfe;
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 1;
  *(byte *)((longlong)param_1 + 0x369) = *(byte *)((longlong)param_1 + 0x369) & 0x80 | 0x11;
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xf8;
  *(byte *)(param_1 + 0x8a) = *(byte *)(param_1 + 0x8a) & 0xfc;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfe;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfe;
  *(byte *)((longlong)param_1 + 0x38c) = *(byte *)((longlong)param_1 + 0x38c) & 0xc0;
  *(byte *)((longlong)param_1 + 0x46c) = *(byte *)((longlong)param_1 + 0x46c) & 0xfc;
  *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xfe;
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 140e73b08 FUN_140e73b08 body=350 status=ok
// SIG undefined FUN_140e73b08(void)

undefined4 *
FUN_140e73b08(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e73ce4(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  *(undefined8 *)(local_48 + 3) = *puVar2;
  local_48[5] = 0xffffffff;
  local_54 = local_50[0];
  if (local_48[2] == 0) {
    uVar5 = *local_48;
  }
  else {
    uVar5 = FUN_144a78877(*local_48,local_48[2]);
  }
  local_68 = param_4;
  cVar3 = FUN_140e73c68(param_1,uVar5,local_48,&local_54);
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
      local_48[6] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[5] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140e73edc(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e73c68 FUN_140e73c68 body=123 status=ok
// SIG undefined FUN_140e73c68(void)

void FUN_140e73c68(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_140d9f664();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1457b9316(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_140e73c84;
    }
  }
  uVar7 = 0;
LAB_140e73c84:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 140e73ce4 FUN_140e73ce4 body=504 status=ok
// SIG undefined FUN_140e73ce4(void)

int * FUN_140e73ce4(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 140e73edc FUN_140e73edc body=692 status=ok
// SIG undefined FUN_140e73edc(void)

void FUN_140e73edc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar15 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar15,4);
    if ((int)uVar15 < 1) goto LAB_140e73f42;
  }
  uVar3 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar15 != uVar3);
LAB_140e73f42:
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar15 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar5 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar12) {
      iVar12 = iVar4;
    }
  }
  if (iVar12 < iVar4) {
    uVar15 = 0xffffffff;
    do {
      piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x1c);
      iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar12 * 0x1c);
      if (iVar4 == 0) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_144a78877(*piVar2,iVar4);
      }
      uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar5;
      piVar2[6] = iVar4;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      piVar2[5] = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar12 = (int)uVar16;
      lVar13 = (longlong)iVar12;
      uVar3 = puVar8[lVar13] & uVar15;
      if (uVar3 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar6 <= iVar12) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar8[lVar13 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar12 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar5 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar4);
  }
  return;
}



// FUNCTION 140e74190 FUN_140e74190 body=169 status=ok
// SIG undefined FUN_140e74190(void)

undefined8 * FUN_140e74190(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_140e7423a(&local_48,*(undefined8 *)(lVar1 + lVar3),param_3);
      FUN_140ed4016(param_1,&local_48);
      FUN_14499183d(local_48,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7423a FUN_140e7423a body=750 status=ok
// SIG undefined FUN_140e7423a(void)

longlong * FUN_140e7423a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x48);
              if (lVar10 != 0) {
                lVar8 = FUN_140e7452a();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x48), lVar4 != 0)) {
            lVar7 = FUN_140e7452a();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e7452a FUN_140e7452a body=228 status=ok
// SIG undefined FUN_140e7452a(void)

longlong FUN_140e7452a(void)

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
  if (DAT_14cb9f148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_148b7d2ad;
    local_40 = FUN_1465a2cf9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"AnimNotify_DeathLootLootsplosion",&DAT_14cb9f148,
                  &DAT_148b7d2ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e74610 FUN_140e74610 body=55 status=ok
// SIG undefined FUN_140e74610(void)

void FUN_140e74610(longlong *param_1)

{
  FUN_140e74648(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e74648 FUN_140e74648 body=389 status=ok
// SIG undefined FUN_140e74648(void)

void FUN_140e74648(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1457b93ae(*local_70 + (longlong)iStack_54 * 0x48 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e747d0 FUN_140e747d0 body=288 status=ok
// SIG undefined FUN_140e747d0(void)

longlong * FUN_140e747d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_1401e3228(&DAT_14cb8e468);
  plVar6 = (longlong *)&DAT_14cbf4c68;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 200))(plVar5,&local_38);
    plVar2 = plStack_30;
    plVar5 = local_38;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
      iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(param_1 + 8));
      if (iVar4 == 1) {
        FUN_140df9302(plVar5,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(param_1 + 8),&local_38);
      }
      plVar6 = plStack_30;
      plVar5 = local_38;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)&DAT_14cbf4c68;
      if (plVar5 != (longlong *)0x0) {
        plVar6 = plVar5;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e748f2 FUN_140e748f2 body=466 status=ok
// SIG undefined FUN_140e748f2(void)

undefined8 FUN_140e748f2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plStack_40 = *(longlong **)(param_2 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_140e74a0a:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar6 = (int)plStack_40[1];
    do {
      if (iVar6 == 0) goto LAB_140e74a0a;
      LOCK();
      iVar4 = (int)plStack_40[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plStack_40 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    local_48 = *(longlong **)(param_2 + 8);
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar3 = plStack_40;
  uVar5 = (**(code **)(*local_48 + 0x40))();
  iVar6 = FUN_140e74adc((longlong *)(param_1 + 0x48),uVar5,&local_48);
  plVar8 = plStack_40;
  if (iVar6 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar6 * 0x28 + *(longlong *)(param_1 + 0x48);
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (!bVar10) {
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
  if (lVar9 == 0) {
    uVar7 = 1;
    goto LAB_140e749d7;
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x10);
  plVar3 = *(longlong **)(lVar9 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    *param_3 = uVar7;
    plVar8 = (longlong *)param_3[1];
    if (plVar8 != (longlong *)0x0) {
      param_3[1] = 0;
LAB_140e74a76:
      uVar7 = 0;
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) goto LAB_140e749d7;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar6 = *piVar2;
      UNLOCK();
      goto joined_r0x000140e74abd;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_3 = uVar7;
    plVar8 = (longlong *)param_3[1];
    if (plVar3 == plVar8) {
      uVar7 = 0;
      LOCK();
      plVar8 = plVar3 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 != 0) goto LAB_140e749d7;
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar6 = *piVar2;
      UNLOCK();
      plVar8 = plVar3;
joined_r0x000140e74abd:
      uVar7 = 0;
      if (iVar6 != 0) goto LAB_140e749d7;
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else {
      param_3[1] = plVar3;
      if (plVar8 != (longlong *)0x0) goto LAB_140e74a76;
    }
  }
  uVar7 = 0;
LAB_140e749d7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e74adc FUN_140e74adc body=181 status=ok
// SIG undefined FUN_140e74adc(void)

int FUN_140e74adc(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e74b9a FUN_140e74b9a body=204 status=ok
// SIG undefined FUN_140e74b9a(void)

undefined8 FUN_140e74b9a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar3,0);
  if (0 < (int)param_1[0x43]) {
    plVar1 = param_1 + 0x42;
    lVar4 = *(longlong *)*plVar1;
    if (lVar4 != 0) {
      uVar3 = FUN_140e74c66();
      cVar2 = FUN_1448093f4(lVar4,uVar3);
      if (cVar2 != '\0') {
        lVar4 = FUN_1412ba9fc(*plVar1);
        uVar3 = FUN_140e74c66();
        cVar2 = FUN_1448093f4(lVar4,uVar3);
        if ((lVar4 != 0) && (cVar2 != '\0')) {
          FUN_1457b9446(param_1 + 0x3d,lVar4 + 8);
          FUN_140c6388c(param_1[0x42],(int)param_1[0x43]);
          *(undefined4 *)(param_1 + 0x43) = 0;
          if (*(int *)((longlong)param_1 + 0x21c) != 0) {
            FUN_1457b949a(plVar1,0);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140e74c66 FUN_140e74c66 body=57 status=ok
// SIG undefined FUN_140e74c66(void)

void FUN_140e74c66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581e0 = FUN_140002ddd(FUN_1464c0b10,uVar1,L"GbxActivityEffect_Mission");
  }
  return;
}



// FUNCTION 140e74ca0 FUN_140e74ca0 body=545 status=ok
// SIG undefined FUN_140e74ca0(void)

longlong * FUN_140e74ca0(longlong *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14c8733f4);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  if (0x1c < uVar3) {
    if (((((param_2[1] == 0) || (uVar3 = *param_2, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)
         ) || ((plVar6 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_2[1])))) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
        (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) {
      if (*(longlong *)(param_2 + 2) != 0) {
        plVar6 = (longlong *)FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((plVar6 == (longlong *)0x0) || (cVar2 == '\0')) {
          if (plVar6 == (longlong *)0x0) {
            param_2[0] = 0;
            param_2[1] = 0;
            goto LAB_140e74d2e;
          }
          uVar3 = *(uint *)((longlong)plVar6 + 0xc);
          *param_2 = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar3 = *(uint *)(lVar8 + 0x10);
          if (*(uint *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            uVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar7);
            }
            LOCK();
            uVar3 = *(uint *)(lVar8 + 0x10);
            bVar9 = uVar3 == 0;
            if (bVar9) {
              *(uint *)(lVar8 + 0x10) = uVar7;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar9) {
              uVar3 = uVar7;
            }
          }
          param_2[1] = uVar3;
        }
        else {
          uVar3 = *(uint *)((longlong)plVar6 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(param_2,plVar6);
          }
        }
        if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_140e74dd2;
      }
LAB_140e74d2e:
      FUN_1400748c2(param_1,1);
    }
    else {
LAB_140e74dd2:
      local_38 = plVar6;
      uVar4 = FUN_14008df0e(plVar6);
      FUN_1400748c2(param_1,uVar4);
      if ((char)uVar4 == '\0') {
        plVar6 = (longlong *)param_1[0x17];
        uVar5 = FUN_1446f8646();
        local_48 = 0;
        (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,uVar5,&local_38);
        goto LAB_140e74d43;
      }
    }
  }
  FUN_140e74ec2(param_1,param_2);
LAB_140e74d43:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e74ec2 FUN_140e74ec2 body=604 status=ok
// SIG undefined FUN_140e74ec2(void)

longlong * FUN_140e74ec2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 5) & 5) != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *param_2 = 0;
    }
    (**(code **)(*param_1 + 0x128))(param_1,param_2 + 1);
    goto LAB_140e74f05;
  }
  if ((*(byte *)((longlong)param_1 + 0x2b) & 6) == 2) goto LAB_140e74f05;
  local_50 = FUN_14479d2ce(param_2);
  if (local_50 == 0) {
    if (param_2[1] == 0) {
LAB_140e750ef:
      local_50 = 0;
    }
    else {
      lVar4 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(param_2,lVar4);
        if (lVar4 == 0) goto LAB_140e750ef;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_2,lVar4);
        }
      }
      local_50 = 0;
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        local_50 = lVar4;
      }
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1,&local_50);
  lVar4 = local_50;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((local_50 == 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 4) == 0)) goto LAB_140e74f05;
  }
  else if (local_50 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    if (*(int *)((longlong)param_2 + 0x24) < 0) {
      FUN_1446f8c06(param_2 + 3,0);
    }
    puVar2 = (undefined2 *)param_2[3];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
    goto LAB_140e74f05;
  }
  FUN_1400bbfae(&local_48,local_50);
  *(undefined4 *)(param_2 + 1) = local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
  *(undefined4 *)(param_2 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  if (param_2 + 1 == (undefined8 *)&local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    param_2[3] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 4) = local_30;
    *(undefined4 *)((longlong)param_2 + 0x24) = local_2c;
  }
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
      *param_2 = 0;
      goto LAB_140e74f05;
    }
  }
  FUN_14485c47a(param_2,lVar4);
LAB_140e74f05:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e75120 FUN_140e75120 body=52 status=ok
// SIG undefined FUN_140e75120(void)

void FUN_140e75120(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b7bd210;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_140e75154(param_1 + 0x10);
  return;
}



// FUNCTION 140e75154 FUN_140e75154 body=232 status=ok
// SIG undefined FUN_140e75154(void)

void FUN_140e75154(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c300;
  FUN_144760e21(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1f];
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
  FUN_140e7523c(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e75238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e7523c FUN_140e7523c body=42 status=ok
// SIG undefined FUN_140e7523c(void)

void FUN_140e7523c(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1407e878c(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e7526c FUN_140e7526c body=57 status=ok
// SIG undefined FUN_140e7526c(void)

void FUN_140e7526c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e50 = FUN_140002ddd(FUN_1465ad3dd,uVar1,L"GbxBrainAspectSettings_UseGadget");
  }
  return;
}



// FUNCTION 140e752b6 FUN_140e752b6 body=41 status=ok
// SIG undefined FUN_140e752b6(void)

void FUN_140e752b6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 140e752e0 FUN_140e752e0 body=19 status=ok
// SIG undefined FUN_140e752e0(void)

undefined1 FUN_140e752e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e752f4(param_3);
  return 1;
}



// FUNCTION 140e752f4 FUN_140e752f4 body=195 status=ok
// SIG undefined FUN_140e752f4(void)

void FUN_140e752f4(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e753b8(0,&local_38);
  FUN_1403d9938(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && (bVar2 = *pbVar1 & 3, (*pbVar1 & 3) != 0)) {
    local_38 = param_1;
    if (bVar2 == 2) {
      lVar3 = (longlong)(int)(*(longlong **)(pbVar1 + 8))[2];
      if (lVar3 != 0) {
        lVar4 = **(longlong **)(pbVar1 + 8);
        lVar3 = lVar3 << 4;
        do {
          FUN_140e75408(&local_38,lVar4);
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + -0x10;
        } while (lVar3 != 0);
      }
    }
    else if (bVar2 == 3) {
      FUN_140e75408(&local_38,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e753b8 FUN_140e753b8 body=80 status=ok
// SIG undefined FUN_140e753b8(void)

longlong * FUN_140e753b8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1403d9938(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140e75408 FUN_140e75408 body=1420 status=ok
// SIG undefined FUN_140e75408(void)

void FUN_140e75408(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  char *_Str;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  wchar_t *_Str_00;
  char cVar13;
  int iVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_158 [40];
  longlong *local_130;
  ulonglong local_128;
  longlong *local_120;
  uint *local_118;
  char *local_110;
  int local_108;
  undefined1 local_104;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e4;
  int local_e0;
  undefined4 uStack_dc;
  int local_d8;
  longlong local_c8;
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_1 = (longlong *)*param_1;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb7c588);
  }
  if (((byte *)*puVar4 != (byte *)0x0) && ((*(byte *)*puVar4 & 3) != 0)) {
    iVar14 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
      FUN_140fe5df2(param_1,iVar14);
    }
    lVar15 = *param_1;
    lVar11 = (longlong)iVar14 * 0x30;
    *(undefined8 *)(lVar15 + lVar11) = 0;
    ((undefined8 *)(lVar15 + lVar11))[1] = 0;
    puVar4 = (undefined8 *)(lVar15 + 0x20 + lVar11);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(lVar15 + 0x10 + lVar11);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined1 *)(lVar15 + lVar11) = 5;
    if (*param_2 != 0) {
      FUN_1446e60f4(*param_2,&DAT_14cb7c588);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  pbVar2 = (byte *)*param_2;
  plVar18 = &DAT_14c9a1288;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    plVar18 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
  }
  uVar9 = *(uint *)(plVar18 + 6);
  local_120 = param_1;
  if (uVar9 == 0) {
    uVar12 = 1;
    uVar21 = 0;
    iVar14 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = (uint *)plVar18[5];
    if ((uint *)plVar18[5] == (uint *)0x0) {
      puVar5 = (uint *)(plVar18 + 3);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar14 = uVar9 + 0x1e;
      if (-1 < (int)(uVar9 - 1)) {
        iVar14 = uVar9 - 1;
      }
      uVar21 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar21;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar21) goto LAB_140e758fc;
        iVar14 = iVar14 + 0x20;
        uVar3 = puVar5[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
    }
    uVar12 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar3 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
  }
  if (uVar3 != uVar9) {
    uVar19 = 0xffffffff;
    local_130 = plVar18;
    local_128 = (ulonglong)uVar9;
    local_118 = (uint *)(plVar18 + 3);
    do {
      lVar15 = *local_130;
      local_110 = DAT_14cb7c030;
      local_108 = DAT_14cb7c038;
      FUN_1448075d0(&local_e0,&local_110);
      iVar8 = local_e0;
      iVar7 = *(int *)(lVar15 + (longlong)(int)uVar3 * 0x40);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      iVar20 = (int)uVar21;
      if (iVar7 != iVar8) {
        lVar15 = lVar15 + (longlong)(int)uVar3 * 0x40;
        local_f8 = (wchar_t *)0x0;
        uStack_f0 = 0;
        FUN_1400b2348(lVar15,&local_f8,1);
        _Str_00 = local_f8;
        if ((int)uStack_f0 == 0) {
          _Str_00 = L"";
        }
        local_60 = 0;
        if (_Str_00 == (wchar_t *)0x0) {
          local_58 = (char *)0x0;
          local_50 = 0;
          cVar13 = '\x05';
          goto LAB_140e75838;
        }
        sVar6 = wcslen(_Str_00);
        FUN_1449b853c(&local_e0,_Str_00,sVar6 & 0xffffffff,1);
        _Str = local_58;
        cVar13 = '\x05';
        if (local_58 == (char *)0x0) goto LAB_140e75838;
        lVar11 = FUN_143c3efd1();
        sVar6 = strlen(_Str);
        iVar14 = (int)sVar6;
        if (iVar14 == 0) goto LAB_140e75984;
        lVar10 = (longlong)iVar14;
        pcVar16 = _Str + lVar10 + -1;
        uVar9 = 0;
        if (_Str <= pcVar16) goto LAB_140e7579b;
        lVar23 = 0;
        goto LAB_140e757c9;
      }
      uVar19 = uVar19 & ~(uint)uVar12;
      puVar5 = (uint *)local_130[5];
      if ((uint *)local_130[5] == (uint *)0x0) {
        puVar5 = local_118;
      }
      uVar9 = *(uint *)(local_130 + 6);
      lVar15 = (longlong)iVar20;
      uVar3 = puVar5[lVar15] & uVar19;
      if (uVar3 == 0) {
        iVar7 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar7 = uVar9 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar20) {
          iVar8 = iVar20;
        }
        if (iVar20 < iVar7) {
          lVar11 = 0;
          do {
            uVar3 = puVar5[lVar15 + lVar11 + 1];
            if (uVar3 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar11 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140e7565e;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar15 != lVar11);
          uVar19 = 0xffffffff;
          iVar20 = iVar8;
        }
        uVar21 = (ulonglong)(iVar20 + 1);
        uVar3 = uVar9;
      }
      else {
LAB_140e7565e:
        uVar12 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar3 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar3) {
          uVar3 = uVar9;
        }
      }
    } while (uVar3 != (uint)local_128);
  }
  goto LAB_140e758fc;
  while( true ) {
    uVar9 = uVar9 + 1;
    pcVar16 = pcVar16 + -1;
    if (pcVar16 < _Str) break;
LAB_140e7579b:
    if (9 < (byte)(*pcVar16 - 0x30U)) break;
  }
  lVar23 = 0;
  if ((((uVar9 != 0) && ((int)uVar9 < iVar14)) && (lVar23 = 0, uVar9 < 0xb)) &&
     (lVar17 = -(ulonglong)uVar9, _Str[lVar17 + lVar10 + -1] == '_')) {
    if ((uVar9 == 1) || (_Str[lVar17 + lVar10] != '0')) {
      lVar22 = 0;
      do {
        lVar23 = (longlong)_Str[lVar17 + lVar10] + lVar22 * 10;
        lVar22 = lVar23 + -0x30;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0);
      if (lVar22 < 0x7fffffff) {
        iVar14 = ~uVar9 + iVar14;
        lVar23 = lVar23 + -0x2f;
        goto LAB_140e757c1;
      }
    }
    lVar23 = 0;
  }
LAB_140e757c1:
  if (iVar14 == 0) {
LAB_140e75984:
    uVar12 = 0;
    uVar21 = 0;
  }
  else {
LAB_140e757c9:
    local_110 = _Str;
    local_104 = 0;
    local_108 = iVar14;
    uVar9 = FUN_14001a6c0(&local_110,1);
    uVar21 = lVar23 << 0x20;
    uVar12 = (ulonglong)uVar9;
  }
  if ((lVar11 != 0) && (iVar14 = FUN_1448e5bf4(lVar11,uVar21 | uVar12,0), iVar14 != -1)) {
    cVar13 = *(char *)(*(longlong *)(lVar11 + 0x40) + 8 + (longlong)iVar14 * 0x10);
  }
LAB_140e75838:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar13 != '\x05') {
    local_110 = (char *)0x0;
    local_108 = 0;
    local_100 = 0;
    local_e4 = 0;
    FUN_140008118(&local_e0,lVar15 + 0x28);
    plVar18 = local_120;
    if (local_d8 - 1U < 0xfffffffe && CONCAT44(uStack_dc,local_e0) != 0) {
      iVar14 = (int)local_120[1];
      *(uint *)(local_120 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)local_120 + 0xc) < iVar14 + 1U) {
        FUN_140fe5df2(local_120,iVar14);
      }
      lVar15 = *plVar18;
      lVar11 = (longlong)iVar14 * 0x30;
      *(undefined8 *)(lVar15 + lVar11) = 0;
      ((undefined8 *)(lVar15 + lVar11))[1] = 0;
      puVar4 = (undefined8 *)(lVar15 + 0x10 + lVar11);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar15 + 0x20 + lVar11);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(char *)(lVar15 + lVar11) = cVar13;
      *(longlong *)(lVar15 + 0x18 + lVar11) = CONCAT44(uStack_dc,local_e0);
      *(int *)(lVar15 + 0x20 + lVar11) = local_d8;
    }
  }
LAB_140e758fc:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e759b6 FUN_140e759b6 body=223 status=ok
// SIG undefined FUN_140e759b6(void)

undefined8 * FUN_140e759b6(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  cVar2 = FUN_140e75a96(param_2);
  if (cVar2 == '\x01') {
    FUN_1400021e4(&DAT_14c9933a8,&local_30);
    iVar3 = FUN_144a41c6c(param_2,&local_30);
    if (iVar3 == -1) {
      *param_1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar3 * 0xc);
      *(undefined4 *)param_1 =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 0xc);
      *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    }
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else if (cVar2 == '\x02') {
    local_30 = 0;
    FUN_1497fb76c(param_1,param_2);
  }
  else {
    *param_1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e75a96 FUN_140e75a96 body=128 status=ok
// SIG undefined FUN_140e75a96(void)

int FUN_140e75a96(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9933b8,local_30);
  iVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    iVar2 = (int)*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e75b2c FUN_140e75b2c body=358 status=ok
// SIG undefined FUN_140e75b2c(void)

void FUN_140e75b2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (DAT_14cad2858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146395584;
      local_58 = &LAB_147a0ba80;
      local_60 = &LAB_14575ccce;
      local_68 = L"Engine";
      local_70 = 0x40000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_140e75bbc;
    }
    if ((((DAT_14cad2858 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
         == DAT_14cad2858 + 0x30 && (iVar1 = *(int *)(param_1 + 0xa8), (longlong)iVar1 != 0)))) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar4);
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
LAB_140e75bbc:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e75c96 FUN_140e75c96 body=292 status=ok
// SIG undefined FUN_140e75c96(void)

void FUN_140e75c96(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar3 = FUN_1407831c2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_140e75ceb;
  }
  param_3 = 0;
LAB_140e75ceb:
  local_58 = &local_48;
  plVar1 = (longlong *)(param_1 + 0x68);
  local_50 = param_1;
  local_48 = param_3;
  uVar4 = FUN_140e75f1e(&local_58,*(longlong *)(param_1 + 0x50) + 0x48);
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_140e75dbc(plVar1,iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 8) = uVar4;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x58);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50);
    lVar3 = lVar3 << 3;
    do {
      uVar4 = FUN_140e75f1e(&local_58,lVar5);
      iVar2 = *(int *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
        FUN_140e75dbc(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e75dbc FUN_140e75dbc body=353 status=ok
// SIG undefined FUN_140e75dbc(void)

void FUN_140e75dbc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e75e41;
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
LAB_140e75e41:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e75f1e FUN_140e75f1e body=2189 status=ok
// SIG undefined FUN_140e75f1e(void)

longlong FUN_140e75f1e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar2 = param_1[1];
  lVar9 = FUN_14001cc68(0x468,0x10);
  FUN_140c83ad2(lVar9);
  *(undefined8 *)(lVar9 + 0xe0) = *param_2;
  *(undefined8 *)(lVar9 + 0xe8) = 0xffffffff7fffffff;
  *(byte *)(lVar9 + 0xdc) = *(byte *)(*(longlong *)(lVar2 + 0x50) + 0x60) & 1;
  *(byte *)(lVar9 + 0xdd) = *(byte *)(*(longlong *)(lVar2 + 0x50) + 0x60) >> 1 & 1;
  *(byte *)(lVar9 + 0xde) = *(byte *)(*(longlong *)(lVar2 + 0x50) + 0x60) >> 2 & 1;
  *(undefined4 *)(lVar9 + 0xd8) = *(undefined4 *)(lVar2 + 0x30);
  *(undefined4 *)(lVar9 + 0x3e0) = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x6c);
  *(undefined4 *)(lVar9 + 0x3e4) = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x70);
  *(undefined4 *)(lVar9 + 1000) = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x74);
  *(undefined4 *)(lVar9 + 0x3ec) = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x78);
  *(undefined1 *)(lVar9 + 0xfc) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x7c);
  *(undefined1 *)(lVar9 + 0xfd) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x7d);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  uVar8 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar9 + 0x108) = uVar8;
  *(undefined8 *)(lVar9 + 0x110) = *(undefined8 *)(lVar3 + 0x90);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x128) = *(undefined8 *)(lVar3 + 0xa8);
  uVar8 = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined8 *)(lVar9 + 0x118) = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar9 + 0x120) = uVar8;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x130) = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined4 *)(lVar9 + 0x138) = *(undefined4 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar9 + 0x140) = *(undefined8 *)(lVar3 + 0xc0);
  uVar5 = *(undefined4 *)(lVar3 + 0xcc);
  uVar6 = *(undefined4 *)(lVar3 + 0xd0);
  uVar7 = *(undefined4 *)(lVar3 + 0xd4);
  *(undefined4 *)(lVar9 + 0x148) = *(undefined4 *)(lVar3 + 200);
  *(undefined4 *)(lVar9 + 0x14c) = uVar5;
  *(undefined4 *)(lVar9 + 0x150) = uVar6;
  *(undefined4 *)(lVar9 + 0x154) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x158);
  if (puVar10 != (undefined8 *)(lVar3 + 0xd8)) {
    iVar1 = *(int *)(lVar3 + 0xe0);
    pvVar4 = *(void **)(lVar3 + 0xd8);
    *(int *)(lVar9 + 0x160) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x164) == 0) {
      *(undefined4 *)(lVar9 + 0x164) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x16c) = *(undefined1 *)(lVar3 + 0xec);
  *(undefined4 *)(lVar9 + 0x168) = *(undefined4 *)(lVar3 + 0xe8);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x170) = *(undefined8 *)(lVar3 + 0xf0);
  *(undefined4 *)(lVar9 + 0x178) = *(undefined4 *)(lVar3 + 0xf8);
  *(undefined8 *)(lVar9 + 0x180) = *(undefined8 *)(lVar3 + 0x100);
  uVar5 = *(undefined4 *)(lVar3 + 0x10c);
  uVar6 = *(undefined4 *)(lVar3 + 0x110);
  uVar7 = *(undefined4 *)(lVar3 + 0x114);
  *(undefined4 *)(lVar9 + 0x188) = *(undefined4 *)(lVar3 + 0x108);
  *(undefined4 *)(lVar9 + 0x18c) = uVar5;
  *(undefined4 *)(lVar9 + 400) = uVar6;
  *(undefined4 *)(lVar9 + 0x194) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x198);
  if (puVar10 != (undefined8 *)(lVar3 + 0x118)) {
    iVar1 = *(int *)(lVar3 + 0x120);
    pvVar4 = *(void **)(lVar3 + 0x118);
    *(int *)(lVar9 + 0x1a0) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x1a4) == 0) {
      *(undefined4 *)(lVar9 + 0x1a4) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x1ac) = *(undefined1 *)(lVar3 + 300);
  *(undefined4 *)(lVar9 + 0x1a8) = *(undefined4 *)(lVar3 + 0x128);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x1b0) = *(undefined8 *)(lVar3 + 0x130);
  *(undefined4 *)(lVar9 + 0x1b8) = *(undefined4 *)(lVar3 + 0x138);
  *(undefined8 *)(lVar9 + 0x1c0) = *(undefined8 *)(lVar3 + 0x140);
  uVar5 = *(undefined4 *)(lVar3 + 0x14c);
  uVar6 = *(undefined4 *)(lVar3 + 0x150);
  uVar7 = *(undefined4 *)(lVar3 + 0x154);
  *(undefined4 *)(lVar9 + 0x1c8) = *(undefined4 *)(lVar3 + 0x148);
  *(undefined4 *)(lVar9 + 0x1cc) = uVar5;
  *(undefined4 *)(lVar9 + 0x1d0) = uVar6;
  *(undefined4 *)(lVar9 + 0x1d4) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x1d8);
  if (puVar10 != (undefined8 *)(lVar3 + 0x158)) {
    iVar1 = *(int *)(lVar3 + 0x160);
    pvVar4 = *(void **)(lVar3 + 0x158);
    *(int *)(lVar9 + 0x1e0) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x1e4) == 0) {
      *(undefined4 *)(lVar9 + 0x1e4) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x1ec) = *(undefined1 *)(lVar3 + 0x16c);
  *(undefined4 *)(lVar9 + 0x1e8) = *(undefined4 *)(lVar3 + 0x168);
  *(undefined1 *)(lVar9 + 0x1f0) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x170);
  *(undefined1 *)(lVar9 + 0x1f1) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x171);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x208) = *(undefined8 *)(lVar3 + 0x188);
  uVar8 = *(undefined8 *)(lVar3 + 0x180);
  *(undefined8 *)(lVar9 + 0x1f8) = *(undefined8 *)(lVar3 + 0x178);
  *(undefined8 *)(lVar9 + 0x200) = uVar8;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  uVar8 = *(undefined8 *)(lVar3 + 0x198);
  *(undefined8 *)(lVar9 + 0x210) = *(undefined8 *)(lVar3 + 400);
  *(undefined8 *)(lVar9 + 0x218) = uVar8;
  *(undefined8 *)(lVar9 + 0x220) = *(undefined8 *)(lVar3 + 0x1a0);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x228) = *(undefined8 *)(lVar3 + 0x1a8);
  *(undefined4 *)(lVar9 + 0x230) = *(undefined4 *)(lVar3 + 0x1b0);
  *(undefined8 *)(lVar9 + 0x238) = *(undefined8 *)(lVar3 + 0x1b8);
  uVar5 = *(undefined4 *)(lVar3 + 0x1c4);
  uVar6 = *(undefined4 *)(lVar3 + 0x1c8);
  uVar7 = *(undefined4 *)(lVar3 + 0x1cc);
  *(undefined4 *)(lVar9 + 0x240) = *(undefined4 *)(lVar3 + 0x1c0);
  *(undefined4 *)(lVar9 + 0x244) = uVar5;
  *(undefined4 *)(lVar9 + 0x248) = uVar6;
  *(undefined4 *)(lVar9 + 0x24c) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x250);
  if (puVar10 != (undefined8 *)(lVar3 + 0x1d0)) {
    iVar1 = *(int *)(lVar3 + 0x1d8);
    pvVar4 = *(void **)(lVar3 + 0x1d0);
    *(int *)(lVar9 + 600) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x25c) == 0) {
      *(undefined4 *)(lVar9 + 0x25c) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x264) = *(undefined1 *)(lVar3 + 0x1e4);
  *(undefined4 *)(lVar9 + 0x260) = *(undefined4 *)(lVar3 + 0x1e0);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x268) = *(undefined8 *)(lVar3 + 0x1e8);
  *(undefined4 *)(lVar9 + 0x270) = *(undefined4 *)(lVar3 + 0x1f0);
  *(undefined8 *)(lVar9 + 0x278) = *(undefined8 *)(lVar3 + 0x1f8);
  uVar5 = *(undefined4 *)(lVar3 + 0x204);
  uVar6 = *(undefined4 *)(lVar3 + 0x208);
  uVar7 = *(undefined4 *)(lVar3 + 0x20c);
  *(undefined4 *)(lVar9 + 0x280) = *(undefined4 *)(lVar3 + 0x200);
  *(undefined4 *)(lVar9 + 0x284) = uVar5;
  *(undefined4 *)(lVar9 + 0x288) = uVar6;
  *(undefined4 *)(lVar9 + 0x28c) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x290);
  if (puVar10 != (undefined8 *)(lVar3 + 0x210)) {
    iVar1 = *(int *)(lVar3 + 0x218);
    pvVar4 = *(void **)(lVar3 + 0x210);
    *(int *)(lVar9 + 0x298) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x29c) == 0) {
      *(undefined4 *)(lVar9 + 0x29c) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x2a4) = *(undefined1 *)(lVar3 + 0x224);
  *(undefined4 *)(lVar9 + 0x2a0) = *(undefined4 *)(lVar3 + 0x220);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x2a8) = *(undefined8 *)(lVar3 + 0x228);
  *(undefined4 *)(lVar9 + 0x2b0) = *(undefined4 *)(lVar3 + 0x230);
  *(undefined8 *)(lVar9 + 0x2b8) = *(undefined8 *)(lVar3 + 0x238);
  uVar5 = *(undefined4 *)(lVar3 + 0x244);
  uVar6 = *(undefined4 *)(lVar3 + 0x248);
  uVar7 = *(undefined4 *)(lVar3 + 0x24c);
  *(undefined4 *)(lVar9 + 0x2c0) = *(undefined4 *)(lVar3 + 0x240);
  *(undefined4 *)(lVar9 + 0x2c4) = uVar5;
  *(undefined4 *)(lVar9 + 0x2c8) = uVar6;
  *(undefined4 *)(lVar9 + 0x2cc) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x2d0);
  if (puVar10 != (undefined8 *)(lVar3 + 0x250)) {
    iVar1 = *(int *)(lVar3 + 600);
    pvVar4 = *(void **)(lVar3 + 0x250);
    *(int *)(lVar9 + 0x2d8) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x2dc) == 0) {
      *(undefined4 *)(lVar9 + 0x2dc) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x2e4) = *(undefined1 *)(lVar3 + 0x264);
  *(undefined4 *)(lVar9 + 0x2e0) = *(undefined4 *)(lVar3 + 0x260);
  *(undefined1 *)(lVar9 + 0x2e8) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x268);
  *(undefined1 *)(lVar9 + 0x2e9) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x269);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x300) = *(undefined8 *)(lVar3 + 0x280);
  uVar8 = *(undefined8 *)(lVar3 + 0x278);
  *(undefined8 *)(lVar9 + 0x2f0) = *(undefined8 *)(lVar3 + 0x270);
  *(undefined8 *)(lVar9 + 0x2f8) = uVar8;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  uVar8 = *(undefined8 *)(lVar3 + 0x290);
  *(undefined8 *)(lVar9 + 0x308) = *(undefined8 *)(lVar3 + 0x288);
  *(undefined8 *)(lVar9 + 0x310) = uVar8;
  *(undefined8 *)(lVar9 + 0x318) = *(undefined8 *)(lVar3 + 0x298);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 800) = *(undefined8 *)(lVar3 + 0x2a0);
  *(undefined4 *)(lVar9 + 0x328) = *(undefined4 *)(lVar3 + 0x2a8);
  *(undefined8 *)(lVar9 + 0x330) = *(undefined8 *)(lVar3 + 0x2b0);
  uVar5 = *(undefined4 *)(lVar3 + 700);
  uVar6 = *(undefined4 *)(lVar3 + 0x2c0);
  uVar7 = *(undefined4 *)(lVar3 + 0x2c4);
  *(undefined4 *)(lVar9 + 0x338) = *(undefined4 *)(lVar3 + 0x2b8);
  *(undefined4 *)(lVar9 + 0x33c) = uVar5;
  *(undefined4 *)(lVar9 + 0x340) = uVar6;
  *(undefined4 *)(lVar9 + 0x344) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x348);
  if (puVar10 != (undefined8 *)(lVar3 + 0x2c8)) {
    iVar1 = *(int *)(lVar3 + 0x2d0);
    pvVar4 = *(void **)(lVar3 + 0x2c8);
    *(int *)(lVar9 + 0x350) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x354) == 0) {
      *(undefined4 *)(lVar9 + 0x354) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x35c) = *(undefined1 *)(lVar3 + 0x2dc);
  *(undefined4 *)(lVar9 + 0x358) = *(undefined4 *)(lVar3 + 0x2d8);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x360) = *(undefined8 *)(lVar3 + 0x2e0);
  *(undefined4 *)(lVar9 + 0x368) = *(undefined4 *)(lVar3 + 0x2e8);
  *(undefined8 *)(lVar9 + 0x370) = *(undefined8 *)(lVar3 + 0x2f0);
  uVar5 = *(undefined4 *)(lVar3 + 0x2fc);
  uVar6 = *(undefined4 *)(lVar3 + 0x300);
  uVar7 = *(undefined4 *)(lVar3 + 0x304);
  *(undefined4 *)(lVar9 + 0x378) = *(undefined4 *)(lVar3 + 0x2f8);
  *(undefined4 *)(lVar9 + 0x37c) = uVar5;
  *(undefined4 *)(lVar9 + 0x380) = uVar6;
  *(undefined4 *)(lVar9 + 900) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x388);
  if (puVar10 != (undefined8 *)(lVar3 + 0x308)) {
    iVar1 = *(int *)(lVar3 + 0x310);
    pvVar4 = *(void **)(lVar3 + 0x308);
    *(int *)(lVar9 + 0x390) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x394) == 0) {
      *(undefined4 *)(lVar9 + 0x394) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x39c) = *(undefined1 *)(lVar3 + 0x31c);
  *(undefined4 *)(lVar9 + 0x398) = *(undefined4 *)(lVar3 + 0x318);
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar9 + 0x3a0) = *(undefined8 *)(lVar2 + 800);
  *(undefined4 *)(lVar9 + 0x3a8) = *(undefined4 *)(lVar2 + 0x328);
  *(undefined8 *)(lVar9 + 0x3b0) = *(undefined8 *)(lVar2 + 0x330);
  uVar5 = *(undefined4 *)(lVar2 + 0x33c);
  uVar6 = *(undefined4 *)(lVar2 + 0x340);
  uVar7 = *(undefined4 *)(lVar2 + 0x344);
  *(undefined4 *)(lVar9 + 0x3b8) = *(undefined4 *)(lVar2 + 0x338);
  *(undefined4 *)(lVar9 + 0x3bc) = uVar5;
  *(undefined4 *)(lVar9 + 0x3c0) = uVar6;
  *(undefined4 *)(lVar9 + 0x3c4) = uVar7;
  puVar10 = (undefined8 *)(lVar9 + 0x3c8);
  if (puVar10 != (undefined8 *)(lVar2 + 0x348)) {
    iVar1 = *(int *)(lVar2 + 0x350);
    pvVar4 = *(void **)(lVar2 + 0x348);
    *(int *)(lVar9 + 0x3d0) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar9 + 0x3d4) == 0) {
      *(undefined4 *)(lVar9 + 0x3d4) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar10,pvVar4,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(lVar9 + 0x3dc) = *(undefined1 *)(lVar2 + 0x35c);
  *(undefined4 *)(lVar9 + 0x3d8) = *(undefined4 *)(lVar2 + 0x358);
  FUN_140241416(*(undefined8 *)*param_1,lVar9);
  FUN_14078468a(lVar9);
  return lVar9;
}



// FUNCTION 140e767ac FUN_140e767ac body=701 status=ok
// SIG undefined FUN_140e767ac(void)

undefined8
FUN_140e767ac(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
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
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) &&
      (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
     ((*(longlong *)(lVar1 + 0x68) != 0 &&
      (lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)))) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = L"Game";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar1 + 0x430), lVar3 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1417de738;
        local_30 = (code *)&LAB_145893408;
        local_38 = &LAB_1458cbbd2;
        local_48 = &LAB_147ba21f1;
        local_50 = &LAB_1463e9233;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(lVar1 + 0x430);
        if (lVar3 == 0) goto LAB_140e769a8;
      }
      uVar2 = 0;
      if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
      goto LAB_140e769aa;
      if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30)) {
        lVar1 = FUN_14030d4a0();
        if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
           (lVar1 = FUN_140e76a6a(lVar3), lVar1 != 0)) {
          FUN_140e76c06(lVar1,param_4,param_5);
          uVar2 = 1;
          goto LAB_140e769aa;
        }
      }
    }
  }
LAB_140e769a8:
  uVar2 = 0;
LAB_140e769aa:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140e76a6a FUN_140e76a6a body=105 status=ok
// SIG undefined FUN_140e76a6a(void)

void FUN_140e76a6a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e76b20();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e76ad4(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e76ad4 FUN_140e76ad4 body=76 status=ok
// SIG undefined FUN_140e76ad4(void)

void FUN_140e76ad4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e76b20();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e76b11;
    }
  }
  lVar2 = 0;
LAB_140e76b11:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e76b20 FUN_140e76b20 body=228 status=ok
// SIG undefined FUN_140e76b20(void)

longlong FUN_140e76b20(void)

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
  if (DAT_14cbb2d68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5a505;
    local_40 = &LAB_145c7c08a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_OnlineLogin",&DAT_14cbb2d68,&DAT_148c5a504
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2d68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e76c06 FUN_140e76c06 body=232 status=ok
// SIG undefined FUN_140e76c06(void)

void FUN_140e76c06(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    FUN_14009b010(param_3,3,0);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  if ((local_38 != 0) && ((*(byte *)(local_38 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0xf9) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_38,pcVar4);
  }
  if (*param_3 != 0) {
    local_48 = 0;
    FUN_14014191c(*param_3,&DAT_14cbd7a30,&local_38,0);
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e76cf0 FUN_140e76cf0 body=136 status=ok
// SIG undefined FUN_140e76cf0(void)

undefined8 * FUN_140e76cf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e76d7a(&local_28,param_3);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e76d7a FUN_140e76d7a body=232 status=ok
// SIG undefined FUN_140e76d7a(void)

undefined8 * FUN_140e76d7a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *_Str;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14ba46f50;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  lVar4 = _wtoi64(_Str);
  puVar3[3] = lVar4;
  *param_1 = puVar3;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar3;
  param_1[1] = plVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar5;
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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



// FUNCTION 140e76e62 FUN_140e76e62 body=32 status=ok
// SIG undefined FUN_140e76e62(void)

void FUN_140e76e62(undefined8 param_1,undefined4 param_2)

{
  FUN_140e76e82();
  FUN_140d6119a(param_1,param_2);
  return;
}



// FUNCTION 140e76e82 FUN_140e76e82 body=170 status=ok
// SIG undefined FUN_140e76e82(void)

void FUN_140e76e82(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *(longlong *)(param_1 + 0x2620);
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
    *(undefined8 *)(param_1 + 0x2620) = 0;
  }
  return;
}



// FUNCTION 140e76f2c FUN_140e76f2c body=336 status=ok
// SIG undefined FUN_140e76f2c(void)

undefined8 * FUN_140e76f2c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x8a8) == 0) {
    lVar4 = FUN_1447210f0(param_1 + -0x458);
    if (lVar4 != 0) {
      uVar5 = FUN_1447210f0();
      local_50 = 0;
      local_48 = 0xaaad1010;
      local_40 = 0;
      local_58 = 1;
      FUN_140e7707e(&local_38,&local_50,param_1,uVar5);
      plVar2 = local_30;
      if ((undefined8 *)(param_1 + 0x8a8) != &local_38) {
        *(undefined8 *)(param_1 + 0x8a8) = local_38;
        local_38 = 0;
        plVar3 = *(longlong **)(param_1 + 0x8b0);
        if (local_30 != plVar3) {
          local_30 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x8b0) = plVar2;
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
        }
      }
      plVar2 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x8a8);
  lVar4 = *(longlong *)(param_1 + 0x8b0);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7707e FUN_140e7707e body=1363 status=ok
// SIG undefined FUN_140e7707e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140e7707e(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_140e77203;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_140e7722e:
    plVar7 = (longlong *)FUN_14001cc68(0x710);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b3e9600;
    memset(plVar7 + 2,0,0x700);
    FUN_140a3ff80(plVar7 + 2);
    plVar10 = plVar7 + 2;
    *plVar10 = (longlong)&PTR_FUN_14b318620;
    plVar7[0xdb] = 0;
    *(undefined4 *)(plVar7 + 0xdc) = 0;
    plVar7[0xd7] = 0;
    plVar7[0xd8] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x6e4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar7 + 0x6ec) = 0;
    plVar7[0xdf] = 0;
    *(undefined4 *)(plVar7 + 0xe0) = 0;
    if ((plVar10 != (longlong *)0x0) &&
       (((plVar7[3] == 0 || (plVar7[4] == 0)) || (*(int *)(plVar7[4] + 8) < 1)))) {
      if (plVar7 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar11 = (longlong *)&DAT_00000020;
        plVar8 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_140e774e4:
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          *plVar11 = (longlong)plVar7;
          if (plVar7 != (longlong *)0x0) goto LAB_140e77302;
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar7[3] = (longlong)plVar10;
        if ((longlong *)plVar7[4] != plVar7) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar7[4] != (longlong *)0x0) {
            plVar11 = plVar7 + 4;
            plVar8 = (longlong *)plVar7[4];
            goto LAB_140e774e4;
          }
          plVar7[4] = (longlong)plVar7;
        }
LAB_140e77302:
        LOCK();
        plVar11 = plVar7 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
    }
    plVar7[7] = param_4;
    FUN_14078c658(&local_58,param_3);
    *(undefined4 *)(plVar7 + 5) = local_58;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_54;
    *(undefined4 *)(plVar7 + 6) = uStack_50;
    *(undefined4 *)((longlong)plVar7 + 0x34) = uStack_4c;
    uVar2 = *(uint *)(param_4 + 0xc);
    *(uint *)(plVar7 + 8) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar5 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar5 = iVar9;
      }
    }
    *(int *)((longlong)plVar7 + 0x44) = iVar5;
    if (plVar7 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar10 = (longlong *)param_1[1];
      lVar12 = 0x10;
      if (plVar10 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_140e77543:
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
LAB_140e7757a:
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_140e7738e;
        goto LAB_140e77399;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar10;
      plVar10 = (longlong *)param_1[1];
      if (plVar7 == plVar10) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = plVar7;
          if (*piVar1 == 0) goto LAB_140e7757a;
        }
      }
      else {
        param_1[1] = (longlong)plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_140e77543;
      }
LAB_140e7738e:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
LAB_140e77399:
      lVar12 = *param_1;
    }
    if (lVar12 == 0) goto LAB_140e77203;
  }
  else {
    uVar6 = FUN_140158f46();
    local_70 = *param_2;
    local_68 = (undefined4)param_2[1];
    local_60 = 0;
    local_88 = param_4;
    FUN_140e775d2(&local_58,&local_70,uVar6,param_3);
    lVar12 = CONCAT44(uStack_54,local_58);
    if (lVar12 != 0) {
      uVar6 = FUN_140158f46();
      cVar4 = FUN_1448093f4(lVar12,uVar6);
      if (cVar4 != '\0') {
        plVar7 = (longlong *)CONCAT44(uStack_4c,uStack_50);
        if (plVar7 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_54,local_58);
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          plVar10 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_54,local_58);
          if (plVar7 == plVar10) {
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar12 = *plVar7;
LAB_140e7747f:
                (**(code **)(lVar12 + 0x10))(plVar7);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar7;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar10 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar12 = *plVar10;
                  plVar7 = plVar10;
                  goto LAB_140e7747f;
                }
              }
            }
          }
        }
        lVar12 = CONCAT44(uStack_54,local_58);
        if ((*(longlong *)(lVar12 + 0x40) != *param_2) ||
           (*(int *)(lVar12 + 0x48) != (int)param_2[1])) {
          *(longlong *)(lVar12 + 0x40) = *param_2;
          *(int *)(lVar12 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar12 + 0x50) = 0;
        }
      }
    }
    plVar7 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    lVar12 = *param_1;
    if (lVar12 == 0) goto LAB_140e7722e;
  }
  plVar7 = (longlong *)param_1[1];
  local_80 = lVar12;
  if (plVar7 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_78 = plVar7;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((param_5 != '\0') &&
     (plVar7 = (longlong *)*param_1, *(char *)((longlong)plVar7 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar7 + 0x3c) = 1;
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_140e77203:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e775d2 FUN_140e775d2 body=823 status=ok
// SIG undefined FUN_140e775d2(void)

longlong *
FUN_140e775d2(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_2;
  FUN_1446dcdd4(&local_70);
  if (DAT_14cb26348 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_144837462(DAT_14cb26348,&local_70);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((((plVar4 != (longlong *)0x0) && (param_3 != 0)) && (param_4 != 0)) &&
     ((param_5 != 0 && (lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4), lVar5 != 0)))) {
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((*(int *)(param_3 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
        param_3 + 0x30)) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
      lVar5 = FUN_14001cc68((longlong)
                            (int)(-*(int *)((longlong)plVar6 + 0x5c) &
                                 ((int)plVar6[0xb] + *(int *)((longlong)plVar6 + 0x5c)) - 1U));
      if (lVar5 != 0) {
        (**(code **)(*plVar6 + 0x2e8))(plVar6,lVar5,1);
        *param_1 = lVar5;
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14acb55d0;
        plVar6[2] = lVar5;
        param_1[1] = (longlong)plVar6;
        if (((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) ||
           (*(int *)(*(longlong *)(lVar5 + 0x10) + 8) < 1)) {
          if (plVar6 == (longlong *)0x0) {
            *(longlong *)(lVar5 + 8) = lVar5;
            plVar7 = *(longlong **)(lVar5 + 0x10);
            if (plVar7 != (longlong *)0x0) {
LAB_140e7778e:
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))();
              }
              *(longlong **)(lVar5 + 0x10) = plVar6;
              if (plVar6 != (longlong *)0x0) goto LAB_140e777a3;
            }
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            *(longlong *)(lVar5 + 8) = lVar5;
            if (*(longlong **)(lVar5 + 0x10) != plVar6) {
              LOCK();
              *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
              UNLOCK();
              plVar7 = *(longlong **)(lVar5 + 0x10);
              if (plVar7 != (longlong *)0x0) goto LAB_140e7778e;
              *(longlong **)(lVar5 + 0x10) = plVar6;
            }
LAB_140e777a3:
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
        lVar5 = *param_1;
        if (lVar5 != 0) {
          *(longlong *)(lVar5 + 0x28) = param_5;
          FUN_14078c658(&local_70,param_4);
          *(undefined4 *)(lVar5 + 0x18) = local_70;
          *(undefined4 *)(lVar5 + 0x1c) = uStack_6c;
          *(undefined4 *)(lVar5 + 0x20) = uStack_68;
          *(undefined4 *)(lVar5 + 0x24) = uStack_64;
          uVar2 = *(uint *)(param_5 + 0xc);
          *(uint *)(lVar5 + 0x30) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar3 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar3 = *(int *)(lVar9 + 0x10);
            bVar10 = iVar3 == 0;
            if (bVar10) {
              *(int *)(lVar9 + 0x10) = iVar8;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar3 = iVar8;
            }
          }
          *(int *)(lVar5 + 0x34) = iVar3;
          local_80 = param_1[1];
          lVar9 = lVar5;
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
            lVar9 = *param_1;
          }
          local_88 = lVar5;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_88);
          if ((*(longlong *)(lVar9 + 0x40) != *param_2) ||
             (*(int *)(lVar9 + 0x48) != (int)param_2[1])) {
            *(longlong *)(lVar9 + 0x40) = *param_2;
            *(int *)(lVar9 + 0x48) = (int)param_2[1];
            *(undefined8 *)(lVar9 + 0x50) = 0;
          }
          goto LAB_140e77689;
        }
        plVar4 = (longlong *)param_1[1];
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
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140e77689:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e7790a FUN_140e7790a body=84 status=ok
// SIG undefined FUN_140e7790a(void)

longlong * FUN_140e7790a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 140e7795e FUN_140e7795e body=84 status=ok
// SIG undefined FUN_140e7795e(void)

longlong * FUN_140e7795e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 140e779b2 FUN_140e779b2 body=673 status=ok
// SIG undefined FUN_140e779b2(void)

longlong * FUN_140e779b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_2[1] == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    puVar1 = &DAT_14caa8558;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_1403de7ba(&local_88,puVar1);
    local_58 = (longlong *)0x0;
    local_50 = 0x200000000;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      FUN_140e77c54(*(longlong *)(param_1 + 0x40),local_68);
      plVar3 = local_68;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        local_a0 = plVar3 + (int)local_50;
        local_98 = (longlong)(int)param_2[1];
        local_90 = (longlong *)*param_2 + local_98;
        do {
          lVar5 = *plVar3;
          if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x90) != 0)) {
            plVar6 = *(longlong **)(lVar5 + 0x88);
            plVar7 = plVar6 + (longlong)*(int *)(lVar5 + 0x90) * 6;
            do {
              if ((longlong)(int)plVar6[1] == 0) {
LAB_140e77ab4:
                if ((longlong)(int)plVar6[5] != 0) {
                  plVar4 = (longlong *)plVar6[4];
                  if ((int)param_2[1] == 0) goto LAB_140e77b69;
                  plVar2 = plVar4 + (longlong)(int)plVar6[5] * 0x11;
                  do {
                    plVar8 = (longlong *)*param_2;
                    while( true ) {
                      if ((int)plVar4[1] != 0) {
                        lVar5 = 0;
                        do {
                          if (*(longlong *)(*plVar4 + lVar5) == *plVar8) goto LAB_140e77b32;
                          lVar5 = lVar5 + 8;
                        } while ((longlong)(int)plVar4[1] << 3 != lVar5);
                      }
                      if ((longlong)(int)plVar4[3] == 0) break;
                      lVar5 = 0;
                      while (*(longlong *)(plVar4[2] + lVar5) != *plVar8) {
                        lVar5 = lVar5 + 8;
                        if ((longlong)(int)plVar4[3] * 8 == lVar5) goto LAB_140e77b3f;
                      }
LAB_140e77b32:
                      plVar8 = plVar8 + 1;
                      if (plVar8 == local_90) goto LAB_140e77b69;
                    }
LAB_140e77b3f:
                    plVar4 = plVar4 + 0x11;
                  } while (plVar4 != plVar2);
                }
              }
              else {
                local_a8 = (longlong *)*plVar6;
                plVar4 = local_a8;
                do {
                  if ((int)uStack_80 != 0) {
                    lVar5 = 0;
                    do {
                      if (*(longlong *)(local_88 + lVar5) == *plVar4) goto LAB_140e77ab4;
                      lVar5 = lVar5 + 8;
                    } while ((longlong)(int)uStack_80 << 3 != lVar5);
                  }
                  if ((int)uStack_70 != 0) {
                    lVar5 = 0;
                    do {
                      if (*(longlong *)(local_78 + lVar5) == *plVar4) goto LAB_140e77ab4;
                      lVar5 = lVar5 + 8;
                    } while ((longlong)(int)uStack_70 << 3 != lVar5);
                  }
                  plVar4 = plVar4 + 1;
                } while (plVar4 != local_a8 + (int)plVar6[1]);
              }
              plVar6 = plVar6 + 6;
            } while (plVar6 != plVar7);
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != local_a0);
      }
      plVar4 = (longlong *)0x0;
LAB_140e77b69:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140e77c54 FUN_140e77c54 body=180 status=ok
// SIG undefined FUN_140e77c54(void)

void FUN_140e77c54(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (*(int *)(param_2 + 0x1c) < 0) {
    FUN_1487be94c(param_2);
  }
  uVar6 = FUN_1418490f2();
  plVar7 = (longlong *)FUN_1403566f4(param_1,uVar6);
  lVar4 = plVar7[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *plVar7;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      uVar6 = FUN_1418490f2();
      if ((lVar3 != 0) && (cVar5 = FUN_1448093f4(lVar3,uVar6), cVar5 != '\0')) {
        iVar1 = *(int *)(param_2 + 0x18);
        *(uint *)(param_2 + 0x18) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
          FUN_1487bea1c(param_2,iVar1);
        }
        lVar8 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar8 = param_2;
        }
        *(longlong *)(lVar8 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  return;
}



// FUNCTION 140e77d08 FUN_140e77d08 body=1153 status=ok
// SIG undefined FUN_140e77d08(void)

undefined8 FUN_140e77d08(longlong param_1,int param_2,undefined4 param_3)

{
  double dVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_90;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0x1a90) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x1a90) + 0x368) <= param_2)) {
    uVar10 = 0;
    goto LAB_140e77ec0;
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x12);
  *(undefined4 *)(param_1 + 7000) = *(undefined4 *)(param_1 + 0x1b54);
  *(int *)(param_1 + 0x1b54) = param_2;
  *(undefined4 *)(param_1 + 0x1b60) = param_3;
  if (*(char *)(param_1 + 0x1b70) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b70) = 0;
  }
  if (*(int *)(param_1 + 0x1b84) < 0) {
    *(undefined4 *)(param_1 + 0x1b80) = 0;
    FUN_14481578e(param_1 + 0x1b78,0);
    iVar4 = *(int *)(param_1 + 0x1b54);
  }
  else {
    *(undefined4 *)(param_1 + 0x1b80) = 0;
    iVar4 = param_2;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a90) + 0x360);
  lVar9 = lVar6 + (longlong)iVar4 * 0x60;
  if ((*(char *)(lVar6 + 0x38 + (longlong)iVar4 * 0x60) == '\x01') &&
     (lVar6 = FUN_1447210f0(param_1), lVar6 != 0)) {
    dVar1 = *(double *)(lVar6 + 0x6d0);
    fVar14 = (float)FUN_14085b07e(lVar9 + 0x30);
    *(float *)(param_1 + 0x1b6c) = (float)((double)fVar14 + dVar1);
    *(undefined1 *)(param_1 + 0x1b70) = 1;
  }
  *(undefined4 *)(param_1 + 0x1b5c) = 0;
  local_e4 = 0xffffffff;
  cVar3 = FUN_140e7828a(param_1,lVar9 + 8);
  uVar5 = local_e4;
  if (cVar3 == '\0') {
    if ((0 < *(int *)(lVar9 + 0x10)) &&
       ((*(char *)(lVar9 + 0x2c) == '\x04' || (*(char *)(lVar9 + 0x2c) == '\x02')))) {
      uVar5 = FUN_140e78f40(param_1,lVar9 + 8);
      goto LAB_140e77e1c;
    }
  }
  else {
LAB_140e77e1c:
    *(undefined4 *)(param_1 + 0x1b5c) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  if ((*(char *)(lVar9 + 0x39) == '\x01') && (lVar6 = FUN_1487c21ca(param_1,lVar9), lVar6 != 0)) {
    FUN_14485c47a(param_1 + 0x1c18,lVar6);
    FUN_145ef46cc(param_1);
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
    }
    uVar10 = *puVar7;
    puVar7 = (undefined8 *)(param_1 + 0x1b88);
    lVar8 = FUN_144a61814(uVar10,puVar7);
    if (lVar8 != 0) {
      FUN_1405a424c(uVar10,*puVar7);
    }
    *puVar7 = 0;
    if ((longlong)*(int *)(lVar9 + 0x20) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0x18) + 0x10;
      lVar9 = (longlong)*(int *)(lVar9 + 0x20) << 8;
      do {
        if (*(char *)(lVar8 + -8) == '\x06') {
          local_f8 = (undefined8 *)0x0;
          local_f0 = 0;
          FUN_1446efa72(&local_f8,0,3,0x10);
          puVar11 = local_f8;
          local_f0 = 3;
          *local_f8 = &PTR_LAB_14a1c8830;
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
          local_f8[2] = lVar12;
          *local_f8 = &PTR_FUN_14b3e8dc0;
          local_f8[3] = 0;
          FUN_14485c47a(local_f8 + 3,param_1);
          *(undefined4 *)(puVar11 + 5) = 0;
          puVar11[4] = &LAB_1487c2278;
          local_b8 = local_b8 & 0xffffffffffffff00;
          local_90 = 0;
          FUN_1456bb102(&local_b8,param_1);
          puVar13 = &local_e0;
          FUN_1447c3578(lVar8,puVar13,&local_b8);
          uVar5 = FUN_144a7ecd0(puVar13);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_c8) {
              puVar13 = (undefined2 *)CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
            }
            (*pcVar2)(puVar13);
          }
          if (0x18 < local_c8) {
            FUN_1400020a8(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)));
          }
          FUN_144a5ac3a(&local_b8);
          if (*(longlong *)(lVar6 + 0x1f0) == 0) {
            puVar11 = (undefined8 *)(lVar6 + 0x458);
          }
          else {
            puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
          }
          uVar10 = *puVar11;
          local_b8 = 0;
          local_b0 = 0;
          FUN_14487d8d8(&local_b8,&local_f8);
          local_78 = 1;
          local_108 = &local_e0;
          local_e0 = 0;
          uStack_dc = 0xbf800000;
          FUN_1406f4044(uVar10,puVar7,&local_b8,uVar5);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          FUN_1449db362(&local_f8);
          break;
        }
        lVar8 = lVar8 + 0x100;
        lVar9 = lVar9 + -0x100;
      } while (lVar9 != 0);
    }
  }
  if (*(int *)(param_1 + 7000) != param_2) {
    FUN_140e7818a(param_1);
  }
  uVar10 = 1;
LAB_140e77ec0:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140e7818a FUN_140e7818a body=255 status=ok
// SIG undefined FUN_140e7818a(void)

void FUN_140e7818a(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)((longlong)param_1 + 0x1b74) = 0;
  uVar1 = *(uint *)(param_1 + 0x36b);
  lVar4 = param_1[0x352];
  if (-1 < (int)uVar1 && lVar4 != 0) {
    if ((int)uVar1 < (int)*(uint *)(lVar4 + 0x368)) {
      uVar2 = *(uint *)(param_1 + 0x36c);
      if (-1 < (int)uVar2) {
        lVar5 = (ulonglong)uVar1 * 0x60 + *(longlong *)(lVar4 + 0x360);
        if (((int)uVar2 < *(int *)(lVar5 + 0x20)) &&
           (lVar5 = (ulonglong)uVar2 * 0x100 + *(longlong *)(lVar5 + 0x18), lVar5 != 0)) {
          uVar1 = *(uint *)((longlong)param_1 + 0x1b54);
          bVar3 = 1;
          if ((-1 < (longlong)(int)uVar1) && (uVar1 < *(uint *)(lVar4 + 0x368))) {
            bVar3 = FUN_1457b9b24(param_1,*(longlong *)(lVar4 + 0x360) + (longlong)(int)uVar1 * 0x60
                                 );
            bVar3 = bVar3 ^ 1;
          }
          if (*(char *)(lVar5 + 0x80) == '\x01') {
            lVar4 = (**(code **)(*param_1 + 0x650))(param_1,lVar5 + 0x78);
          }
          else {
            lVar4 = FUN_140654ab6(lVar5 + 0x50);
          }
          if (bVar3 == 1 && lVar4 != 0) {
            FUN_140e78972(param_1,lVar4,lVar5 + 0x88,1);
            return;
          }
        }
      }
    }
  }
  FUN_140e783b6(param_1);
  return;
}



// FUNCTION 140e7828a FUN_140e7828a body=299 status=ok
// SIG undefined FUN_140e7828a(void)

undefined8 FUN_140e7828a(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x355] != 0) {
    lVar1 = *(longlong *)(param_1[0x355] + 0xae8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_140e78375;
    if (0 < (int)param_2[1]) {
      lVar5 = 0x38;
      lVar6 = 0;
      local_58 = param_3;
      do {
        lVar3 = *param_2;
        if (*(char *)(lVar3 + 0x30 + lVar5) == '\x01') {
          lVar3 = (**(code **)(*param_1 + 0x650))(param_1,lVar3 + lVar5 + 0x28);
        }
        else {
          lVar3 = FUN_140654ab6(lVar3 + lVar5);
        }
        if (lVar3 != 0) {
          FUN_1446f470e(local_50,L"FullBody",1);
          cVar2 = FUN_14489e746(lVar1,local_50,lVar3,0);
          if (cVar2 != '\0') {
            *local_58 = (int)lVar6;
            uVar4 = 1;
            goto LAB_140e78377;
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x70;
      } while (lVar6 < (int)param_2[1]);
    }
  }
LAB_140e78375:
  uVar4 = 0;
LAB_140e78377:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140e783b6 FUN_140e783b6 body=873 status=ok
// SIG undefined FUN_140e783b6(void)

void FUN_140e783b6(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_41;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      plVar7 = (longlong *)(lVar5 + 0x458);
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    lVar5 = param_1[0x372];
    if (lVar5 != 0) {
      lVar8 = *plVar7;
      uVar9 = (uint)lVar5;
      if ((int)(uVar9 & 0xffffff) < *(int *)(lVar8 + 0x10)) {
        lVar10 = lVar8 + 0x18;
        if (*(longlong *)(lVar8 + 0x28) != 0) {
          lVar10 = *(longlong *)(lVar8 + 0x28);
        }
        if ((*(uint *)(lVar10 + (ulonglong)((uVar9 & 0xffffff) >> 5) * 4) >> (uVar9 & 0x1f) & 1) !=
            0) {
          lVar8 = *(longlong *)(lVar8 + 8);
          lVar10 = (ulonglong)(uVar9 & 0xffffff) * 0x70;
          if (((lVar8 + lVar10 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar10) == lVar5)) &&
             (*(char *)(lVar8 + 1 + lVar10) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    param_1[0x372] = 0;
  }
  lVar5 = param_1[0x352];
  if (lVar5 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x1b54);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar5 + 0x368))) {
      lVar8 = (longlong)iVar1 * 0x60;
      if ((*(int *)(*(longlong *)(lVar5 + 0x360) + 0x48 + lVar8) != 0) &&
         (lVar5 = FUN_140e779b2(param_1 + 0x324,*(longlong *)(lVar5 + 0x360) + lVar8 + 0x40),
         lVar5 != 0)) {
        local_c0[0] = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0xffffffff;
        local_44 = 0;
        local_42 = 1;
        local_41 = 0;
        uVar6 = FUN_1447210f0(param_1);
        local_c8 = local_c0;
        FUN_1407acb05(uVar6,lVar5 + 0x20,lVar5 + 0x38,param_1);
      }
    }
  }
  local_30 = 0xffffffff;
  local_38 = 0xffffffff;
  cVar4 = FUN_1412ddcf0(param_1);
  if (cVar4 == '\0') {
    if (0 < (int)param_1[0x389]) {
      *(undefined1 *)(param_1 + 0x36a) = 0;
      cVar4 = FUN_145d8abce(param_1,3);
      if (cVar4 != '\0') goto LAB_140e785d4;
    }
    if (((param_1[0x352] != 0) && (-1 < *(int *)((longlong)param_1 + 0x1b54))) &&
       ((*(int *)((longlong)param_1 + 0x1b54) < *(int *)(param_1[0x352] + 0x368) &&
        (cVar4 = FUN_140e78720(param_1), cVar4 != '\0')))) {
      FUN_140e78e14(local_c0);
      local_c0[0] = 0;
      iVar1 = *(int *)((longlong)param_1 + 0x1b54);
      lVar5 = *(longlong *)(param_1[0x352] + 0x360);
      iVar2 = (int)param_1[0x36b];
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1[0x352] + 0x368))) {
        iVar3 = (int)param_1[0x36c];
        if ((-1 < (longlong)iVar3) &&
           (lVar8 = (longlong)iVar2 * 0x60 + lVar5, iVar3 < *(int *)(lVar8 + 0x20))) {
          FUN_140e78ece(local_c0,*(longlong *)(lVar8 + 0x18) + (longlong)iVar3 * 0x100 + 0xa8);
        }
      }
      lVar8 = *(longlong *)(lVar5 + 8 + (longlong)iVar1 * 0x60);
      lVar10 = (longlong)*(int *)((longlong)param_1 + 0x1b5c) * 0x70;
      lVar5 = lVar8 + lVar10;
      if (*(char *)(lVar8 + 0x68 + lVar10) == '\x01') {
        lVar5 = (**(code **)(*param_1 + 0x650))(param_1,lVar5 + 0x60);
      }
      else {
        lVar5 = FUN_140654ab6(lVar5 + 0x38);
      }
      if ((lVar5 != 0) && ((char)param_1[0x2f] == '\x03')) {
        *(undefined4 *)((longlong)param_1 + 0x1b64) = *(undefined4 *)((longlong)param_1 + 0x1b54);
        *(undefined4 *)(param_1 + 0x36d) = *(undefined4 *)((longlong)param_1 + 0x1b5c);
        FUN_144a62f0c(param_1,param_1[5],0x12);
      }
      FUN_140e78972(param_1,lVar5,local_c0,0);
    }
  }
LAB_140e785d4:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e78720 FUN_140e78720 body=593 status=ok
// SIG undefined FUN_140e78720(void)

undefined4 FUN_140e78720(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = (longlong)*(int *)((longlong)param_1 + 0x1b54) * 0x60;
  lVar1 = *(longlong *)(param_1[0x352] + 0x360) + lVar7;
  cVar2 = *(char *)(*(longlong *)(param_1[0x352] + 0x360) + 0x2c + lVar7);
  if (cVar2 == '\x02') {
    uVar5 = FUN_140e78f40(param_1,lVar1 + 8);
  }
  else if (cVar2 == '\x01') {
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x1b74);
  }
  else {
    if (cVar2 != '\x03') goto LAB_140e7877c;
    if (*(int *)((longlong)param_1 + 0x1b74) == 0) {
      plVar10 = param_1 + 0x36f;
      *(undefined4 *)(param_1 + 0x370) = 0;
      if (*(int *)((longlong)param_1 + 0x1b84) < 0) {
        FUN_14481578e(plVar10,0);
      }
      if (0 < *(int *)(lVar1 + 0x10)) {
        lVar12 = 0x38;
        lVar7 = 0;
        do {
          lVar6 = *(longlong *)(lVar1 + 8);
          if (*(char *)(lVar6 + 0x30 + lVar12) == '\x01') {
            lVar6 = (**(code **)(*param_1 + 0x650))(param_1,lVar6 + lVar12 + 0x28);
          }
          else {
            lVar6 = FUN_140654ab6(lVar6 + lVar12);
          }
          if (lVar6 != 0) {
            iVar3 = (int)param_1[0x370];
            *(uint *)(param_1 + 0x370) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1b84) < iVar3 + 1U) {
              FUN_1446f48e2(plVar10,iVar3);
            }
            *(int *)(*plVar10 + (longlong)iVar3 * 4) = (int)lVar7;
          }
          lVar7 = lVar7 + 1;
          lVar12 = lVar12 + 0x70;
        } while (lVar7 < *(int *)(lVar1 + 0x10));
      }
      FUN_1487c8907(param_1[0x36f],param_1[0x36f] + (longlong)(int)param_1[0x370] * 4,&local_39);
    }
    if ((int)param_1[0x370] == 0) goto LAB_140e7877c;
    uVar5 = *(undefined4 *)(param_1[0x36f] + (longlong)*(int *)((longlong)param_1 + 0x1b74) * 4);
  }
  *(undefined4 *)((longlong)param_1 + 0x1b5c) = uVar5;
LAB_140e7877c:
  *(int *)((longlong)param_1 + 0x1b74) = *(int *)((longlong)param_1 + 0x1b74) + 1;
  uVar4 = param_1[5];
  if (uVar4 < 0xffffffff00000000) {
    plVar10 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar4,0x12);
  }
  else {
    uVar11 = (uint)uVar4;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar7 + 0x18);
        if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 8);
        }
        *puVar9 = *puVar9 | 0x40000;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1b5c);
  if (iVar3 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 < *(int *)(lVar1 + 0x10));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140e78972 FUN_140e78972 body=1185 status=ok
// SIG undefined FUN_140e78972(void)

void FUN_140e78972(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined8 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined1 local_130 [32];
  float local_110 [8];
  char local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != (longlong *)0x0) {
    cVar2 = FUN_140e78e2e();
    if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0x1aa8) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1aa8) + 0xae8);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) goto LAB_140e78c2f;
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      local_138 = 0x3f800000;
      FUN_140e78e14(local_130);
      FUN_140e78e14(local_110);
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = (undefined4)DAT_14c8464e0;
      uStack_dc = DAT_14c8464e0._4_4_;
      uStack_d8 = (undefined4)DAT_14c8464e8;
      uStack_d4 = DAT_14c8464e8._4_4_;
      local_d0 = DAT_14c8464f0;
      FUN_1446f470e(&local_b8,L"FullBody",1);
      local_148 = local_b8;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_138 = CONCAT44(local_138._4_4_,0x3f800000);
      local_f0 = '\x02' - param_4;
      plStack_140 = param_2;
      FUN_140e78ece(local_130,param_3);
      FUN_140657bfa(lVar3,&local_148);
      lVar3 = FUN_1447210f0(param_1);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        uVar1 = *puVar4;
        if (param_4 == '\0') {
          local_158 = (undefined8 *)0x0;
          local_150 = 0;
          FUN_1446efa72(&local_158,0,3,0x10);
          puVar4 = local_158;
          local_150 = 3;
          *local_158 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_158[2] = lVar5;
          *local_158 = &PTR_FUN_14b3e8dc0;
          local_158[3] = 0;
          FUN_14485c47a(local_158 + 3,param_1);
          puVar4[4] = FUN_14144ebe2;
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4 = (undefined8 *)(param_1 + 0x1b98);
          lVar3 = FUN_144a61814(uVar1,puVar4);
          if (lVar3 != 0) {
            FUN_1405a424c(uVar1,*puVar4);
          }
          *(undefined8 *)(param_1 + 0x1b98) = 0;
          uVar6 = (**(code **)(*param_2 + 0x2b0))(param_2);
          local_b8 = 0;
          local_b0 = 0;
          FUN_14487d8d8(&local_b8,&local_158);
          local_78 = 1;
          local_168 = local_c0;
          local_c0[0] = 0;
          local_bc = 0xbf800000;
          FUN_1406f4044(uVar1,puVar4,&local_b8,uVar6);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          puVar4 = (undefined8 *)(param_1 + 0x1b90);
        }
        else {
          local_158 = (undefined8 *)0x0;
          local_150 = 0;
          FUN_1446efa72(&local_158,0,3,0x10);
          puVar4 = local_158;
          local_150 = 3;
          *local_158 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_158[2] = lVar5;
          *local_158 = &PTR_FUN_14b3e8dc0;
          local_158[3] = 0;
          FUN_14485c47a(local_158 + 3,param_1);
          puVar4[4] = FUN_140e783b6;
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4 = (undefined8 *)(param_1 + 0x1b90);
          lVar3 = FUN_144a61814(uVar1,puVar4);
          if (lVar3 != 0) {
            FUN_1405a424c(uVar1,*puVar4);
          }
          *(undefined8 *)(param_1 + 0x1b90) = 0;
          fVar7 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
          local_b8 = 0;
          local_b0 = 0;
          FUN_14487d8d8(&local_b8,&local_158);
          local_78 = 1;
          local_168 = local_c0;
          local_c0[0] = 0;
          local_bc = 0xbf800000;
          FUN_1406f4044(uVar1,puVar4,&local_b8,fVar7 - local_110[0]);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          puVar4 = (undefined8 *)(param_1 + 0x1b98);
        }
        lVar3 = FUN_144a61814(uVar1,puVar4);
        if (lVar3 != 0) {
          FUN_1405a424c(uVar1,*puVar4);
        }
        *puVar4 = 0;
        FUN_1449db362(&local_158);
      }
    }
  }
LAB_140e78c2f:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e78e14 FUN_140e78e14 body=25 status=ok
// SIG undefined FUN_140e78e14(void)

void FUN_140e78e14(undefined4 *param_1)

{
  *param_1 = 0x3dcccccd;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 140e78e2e FUN_140e78e2e body=159 status=ok
// SIG undefined FUN_140e78e2e(void)

undefined8 FUN_140e78e2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1aa8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1aa8) + 0xae8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    uVar2 = 0;
    if ((param_2 != 0) && (lVar1 != 0)) {
      FUN_1446f470e(local_28,L"FullBody",1);
      uVar2 = FUN_14489e746(lVar1,local_28,param_2,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e78ece FUN_140e78ece body=114 status=ok
// SIG undefined FUN_140e78ece(void)

undefined4 * FUN_140e78ece(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 2);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar2;
  lVar2 = *(longlong *)(param_2 + 4);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 4);
    }
  }
  *(longlong *)(param_1 + 4) = lVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 140e78f40 FUN_140e78f40 body=863 status=ok
// SIG undefined FUN_140e78f40(void)

ulonglong FUN_140e78f40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_148 [40];
  undefined1 local_120 [32];
  undefined1 *local_100;
  uint local_f8;
  undefined4 local_f4;
  char local_f0 [16];
  longlong *local_e0;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_100 = (undefined1 *)0x0;
  local_f4 = 8;
  local_f8 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)(int)local_f8;
  if (8 < uVar10) {
    FUN_140e79564(local_120);
  }
  puVar7 = local_100;
  if (local_100 == (undefined1 *)0x0) {
    puVar7 = local_120;
  }
  memset(puVar7,0,uVar10 << 2);
  if ((int)param_2[1] < 1) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 0.0;
    lVar13 = 0x38;
    lVar11 = 0;
    do {
      lVar6 = *param_2;
      if (*(char *)(lVar6 + 0x30 + lVar13) == '\x01') {
        lVar6 = (**(code **)(*param_1 + 0x650))(param_1,lVar6 + lVar13 + 0x28);
      }
      else {
        lVar6 = FUN_140654ab6(lVar6 + lVar13);
      }
      if (lVar6 != 0) {
        lVar6 = *param_2;
        local_f0[0] = '\0';
        local_c8[0] = 0;
        FUN_1456bb102(local_f0,param_1);
        FUN_1447c3578(lVar6 + lVar13 + -0x38,&local_c0,local_f0);
        if (local_a0 == 3) {
          uVar4 = 3;
          uVar16 = local_c0;
        }
        else {
          FUN_1400b56fe(&local_98,&local_c0,3);
          uVar16 = 0;
          if (local_78 != 0) {
            uVar16 = local_98;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar2 != (code *)0x0) {
            puVar9 = &local_98;
            if (0x18 < local_80) {
              puVar9 = (undefined4 *)CONCAT44(uStack_94,local_98);
            }
            (*pcVar2)(puVar9);
          }
          if (0x18 < local_80) {
            FUN_1400020a8(CONCAT44(uStack_94,local_98));
          }
          uVar4 = (uint)local_a0;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar9 = &local_c0;
          if (0x18 < local_a8) {
            puVar9 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
          }
          (*pcVar2)(puVar9);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
        }
        FUN_1448173f8(local_c8);
        if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
        }
        puVar7 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar7 = local_120;
        }
        *(undefined4 *)(puVar7 + lVar11 * 4) = uVar16;
        puVar7 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar7 = local_120;
        }
        fVar15 = fVar15 + *(float *)(puVar7 + lVar11 * 4);
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x70;
    } while (lVar11 < (int)param_2[1]);
  }
  uVar4 = local_f8;
  puVar7 = local_120;
  if (local_100 != (undefined1 *)0x0) {
    puVar7 = local_100;
  }
  uVar12 = (ulonglong)local_f8;
  uVar5 = rand();
  uVar10 = 0xffffffff;
  if (0 < (int)uVar4) {
    fVar15 = fVar15 * ((float)(uVar5 & 0x7fff) / 32767.0);
    fVar14 = 0.0;
    uVar8 = 0;
    do {
      bVar3 = fVar14 <= fVar15;
      fVar14 = fVar14 + *(float *)(puVar7 + uVar8 * 4);
      if ((bVar3) && (fVar15 <= fVar14)) {
        uVar10 = uVar8 & 0xffffffff;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140e792a0 FUN_140e792a0 body=706 status=ok
// SIG undefined FUN_140e792a0(void)

longlong FUN_140e792a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
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
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0x1a90);
  if (lVar8 != 0) {
    lVar5 = *(longlong *)(lVar8 + 0x350);
    if (lVar5 == 0) {
      uVar6 = FUN_1457b9b98();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(lVar8 + 0x350) = lVar5;
    }
    plVar7 = *(longlong **)(lVar8 + 0x358);
    if (plVar7 == (longlong *)0x0) {
      if ((*(longlong *)(lVar8 + 0x348) != 0) && (lVar5 != 0)) {
        plVar7 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
          *(undefined8 *)(lVar8 + 0x358) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar7 + 0x110))(plVar7);
          plVar7 = (longlong *)FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x348));
          *(longlong **)(lVar8 + 0x358) = plVar7;
          if (plVar7 != (longlong *)0x0) goto LAB_140e794f2;
        }
      }
    }
    else {
LAB_140e794f2:
      lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      if (lVar8 != 0) goto LAB_140e793b2;
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x1ab0);
  if (plVar7 == (longlong *)0x0) {
    lVar8 = 0;
    goto LAB_140e793b2;
  }
  local_40 = 0;
  lVar8 = plVar7[4];
  if (lVar8 != 0) {
    if (DAT_14cad2858 == 0) {
      local_60 = &local_38;
      local_38 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146395584;
      local_68 = &LAB_147a0ba80;
      local_70 = &LAB_14575ccce;
      local_78 = L"Engine";
      local_80 = 0x40000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          if (DVar3 == DVar4) goto LAB_140e79540;
        }
      }
      else {
LAB_140e79540:
        FUN_14036294a(plVar7[4],1,1);
      }
    }
  }
  lVar8 = plVar7[0x7c];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*plVar7 + 0x350))(plVar7);
    plVar7[0x7c] = lVar8;
  }
  FUN_1448830cc(lVar8 + 0x8e8,param_2,&local_40);
  lVar8 = local_40;
LAB_140e793b2:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 140e79564 FUN_140e79564 body=350 status=ok
// SIG undefined FUN_140e79564(void)

void FUN_140e79564(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x2c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140e795e5;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140e795e5:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar6;
  FUN_14032077c(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 140e796c2 FUN_140e796c2 body=82 status=ok
// SIG undefined FUN_140e796c2(void)

void FUN_140e796c2(longlong param_1,longlong param_2,undefined4 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  FUN_140e79714(param_2 + 0x7790,param_1,param_3,(int)*(char *)(param_1 + 0x50));
  *(char *)(param_1 + 0x50) = (char)param_3;
  return;
}



// FUNCTION 140e79714 FUN_140e79714 body=187 status=ok
// SIG undefined FUN_140e79714(void)

void FUN_140e79714(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140e797b7;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e797b7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e797de FUN_140e797de body=451 status=ok
// SIG undefined FUN_140e797de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e797de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab7d1c0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  param_1[0x14] = &PTR_FUN_14a89a2c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  param_1[0x14] = &PTR_FUN_14a177080;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_14472eb64(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140e799a2 FUN_140e799a2 body=40 status=ok
// SIG undefined FUN_140e799a2(void)

undefined8 FUN_140e799a2(undefined8 param_1,int param_2)

{
  FUN_140e799ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e799ca FUN_140e799ca body=177 status=ok
// SIG undefined FUN_140e799ca(void)

void FUN_140e799ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b097f60;
  param_1[0xd] = &PTR_FUN_14b0982e0;
  param_1[0x16] = &PTR_FUN_14b098320;
  param_1[0x17] = &PTR_FUN_14b098340;
  param_1[0x18] = &PTR_FUN_14b098358;
  param_1[0x1d] = &PTR_FUN_14b098370;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x27];
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
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3bcb0(param_1);
  return;
}



// FUNCTION 140e79a7c FUN_140e79a7c body=345 status=ok
// SIG undefined FUN_140e79a7c(void)

void FUN_140e79a7c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e79bd6();
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  if (lVar3 != 0) {
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
      lVar3 = *(longlong *)(param_1 + 0x1d8);
      if (lVar3 == 0) goto LAB_140e79ae2;
    }
    lVar2 = 0;
    if ((DAT_14cba8288 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_140e79ae4;
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar2 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      goto LAB_140e79ae4;
    }
  }
LAB_140e79ae2:
  lVar2 = 0;
LAB_140e79ae4:
  *(longlong *)(param_1 + 0x4208) = lVar2;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e79bd6 FUN_140e79bd6 body=1837 status=ok
// SIG undefined FUN_140e79bd6(void)

void FUN_140e79bd6(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = param_1[0x22];
  if (lVar9 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_142b47bc4;
      local_a8 = &LAB_1478989f1;
      local_b0 = &LAB_146391124;
      local_b8 = L"Engine";
      local_c0 = 0x10000000000;
      local_c8 = 0x10000005;
      local_d0 = 0x10;
      local_d8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar9 = param_1[0x22];
      if (lVar9 == 0) goto LAB_140e79c99;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar10 = *(longlong *)(lVar9 + 0x10), lVar10 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
         == DAT_14cac6e60 + 0x30 && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
      FUN_140e7a304(&local_68);
      FUN_140e7a486(lVar9 + 0x599,param_1,local_68);
      FUN_140e7a3c4(&local_70);
      FUN_140e7a4f4(lVar9 + 0x59a,param_1,local_70);
    }
  }
LAB_140e79c99:
  FUN_140e7a562(param_1,param_2);
  lVar9 = param_1[0x3b];
  if (lVar9 == 0) {
LAB_140e79ceb:
    lVar10 = 0;
  }
  else {
    if (DAT_14cb5b388 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = (code *)&LAB_146431698;
      local_a8 = &LAB_1486775cb;
      local_b0 = &LAB_1464cee35;
      local_b8 = L"Game";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 0x10;
      local_d8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      lVar9 = param_1[0x3b];
      if (lVar9 == 0) goto LAB_140e79ceb;
    }
    lVar10 = 0;
    if ((DAT_14cb5b388 != 0) && (lVar2 = *(longlong *)(lVar9 + 0x10), lVar2 != 0)) {
      if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
          != DAT_14cb5b388 + 0x30)) goto LAB_140e79ceb;
      lVar10 = lVar9;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar9);
      }
    }
  }
  param_1[0x39d] = lVar10;
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') goto LAB_140e79d11;
    plVar8 = param_1 + 0x642;
  }
  else {
    plVar8 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  FUN_14124196e(plVar8,param_1);
LAB_140e79d11:
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  param_1[0x3e1] = (longlong)param_1;
  param_1[0x3e2] = param_1[0x3e0];
  (**(code **)(*param_1 + 0xde0))(param_1);
  (**(code **)(*param_1 + 0xdb0))(param_1,&local_58);
  plVar8 = local_50;
  if ((code **)(param_1 + 0x3d7) != &local_58) {
    param_1[0x3d7] = (longlong)local_58;
    local_58 = (code *)0x0;
    plVar3 = (longlong *)param_1[0x3d8];
    if (local_50 != plVar3) {
      local_50 = (longlong *)0x0;
      param_1[0x3d8] = (longlong)plVar8;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  pcVar4 = (code *)param_1[0x3d7];
  if (pcVar4 != (code *)0x0) {
    (**(code **)(*(longlong *)pcVar4 + 8))();
  }
  lVar9 = param_1[0x23];
  if ((lVar9 != 0) && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) {
    FUN_140e7a304(&local_78);
    uVar12 = 0;
    if (param_1 == (longlong *)0x0) {
      uVar13 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar7 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar7 = *(uint *)(lVar10 + 0x10);
        bVar15 = uVar7 == 0;
        if (bVar15) {
          *(uint *)(lVar10 + 0x10) = uVar11;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar15) {
          uVar7 = uVar11;
        }
      }
      uVar13 = (ulonglong)uVar7;
      if (local_78 == 0) {
        local_78 = 0;
      }
      else if (uVar7 == 0) {
        uVar13 = 0;
      }
      else if ((((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
               (plVar8 = (longlong *)
                         ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0)) &&
              (((*(uint *)(plVar8 + 2) == uVar7 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
               (*plVar8 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),local_78,1);
      }
    }
    FUN_140838726(lVar9 + 0x599,&local_60);
    local_58 = (code *)((ulonglong)uVar14 | uVar13 << 0x20);
    local_50 = (longlong *)local_78;
    bVar6 = FUN_140a28ca8(lVar9,local_60);
    *(byte *)(lVar9 + 0x599) = *(byte *)(lVar9 + 0x599) | bVar6;
    lVar9 = param_1[0x23];
    FUN_140e7a3c4(&local_80);
    if (param_1 == (longlong *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar7 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar7 = *(uint *)(lVar10 + 0x10);
        bVar15 = uVar7 == 0;
        if (bVar15) {
          *(uint *)(lVar10 + 0x10) = uVar11;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar15) {
          uVar7 = uVar11;
        }
      }
      uVar12 = (ulonglong)uVar7;
      if (local_80 == (longlong *)0x0) {
        local_80 = (longlong *)0x0;
      }
      else if (uVar7 == 0) {
        uVar12 = 0;
      }
      else if (((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 &&
               (((*(uint *)(plVar8 + 2) == uVar7 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
                (*plVar8 != 0)))))) {
        FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),local_80,1);
      }
    }
    FUN_140852908(lVar9 + 0x59a,&local_60);
    local_58 = (code *)((ulonglong)uVar14 | uVar12 << 0x20);
    local_50 = local_80;
    bVar6 = FUN_140a28ca8(lVar9,local_60);
    *(byte *)(lVar9 + 0x59a) = *(byte *)(lVar9 + 0x59a) | bVar6;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7a304 FUN_140e7a304 body=190 status=ok
// SIG undefined FUN_140e7a304(void)

undefined8 * FUN_140e7a304(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76258) {
    FUN_144b3d300(&DAT_14cb76258);
    if (DAT_14cb76258 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"erlap",6);
      builtin_wcsncpy(local_48 + 8,L"eBeginOv",8);
      builtin_wcsncpy(local_48,L"OnCapsul",8);
      FUN_1446f470e(&DAT_14cb76250,local_48,1);
      _Init_thread_footer(&DAT_14cb76258);
    }
  }
  *param_1 = DAT_14cb76250;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7a3c4 FUN_140e7a3c4 body=193 status=ok
// SIG undefined FUN_140e7a3c4(void)

undefined8 * FUN_140e7a3c4(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76268) {
    FUN_144b3d300(&DAT_14cb76268);
    if (DAT_14cb76268 == -1) {
      builtin_wcsncpy(local_38,L"OnCapsuleEndOverlap",0x14);
      FUN_1446f470e(&DAT_14cb76260,local_38,1);
      _Init_thread_footer(&DAT_14cb76268);
    }
  }
  *param_1 = DAT_14cb76260;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7a486 FUN_140e7a486 body=108 status=ok
// SIG undefined FUN_140e7a486(void)

void FUN_140e7a486(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_140838726(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x599,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7a4f4 FUN_140e7a4f4 body=108 status=ok
// SIG undefined FUN_140e7a4f4(void)

void FUN_140e7a4f4(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_140852908(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x59a,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7a562 FUN_140e7a562 body=120 status=ok
// SIG undefined FUN_140e7a562(void)

void FUN_140e7a562(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140e7a5da();
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar3 = FUN_14070cc62();
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_140e7a5be;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar4 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_140e7a5be;
      }
    }
  }
  lVar4 = 0;
LAB_140e7a5be:
  *(longlong *)(param_1 + 0x14e8) = lVar4;
  return;
}



// FUNCTION 140e7a5da FUN_140e7a5da body=120 status=ok
// SIG undefined FUN_140e7a5da(void)

void FUN_140e7a5da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140e7a738();
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar3 = FUN_140e7a652();
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_140e7a636;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar4 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_140e7a636;
      }
    }
  }
  lVar4 = 0;
LAB_140e7a636:
  *(longlong *)(param_1 + 0x10b0) = lVar4;
  return;
}


