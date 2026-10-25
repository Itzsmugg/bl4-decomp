// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435993ba FUN_1435993ba body=1714 status=ok
// SIG undefined FUN_1435993ba(void)

uint * FUN_1435993ba(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  code *local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != (uint *)0x0) goto LAB_1435997d0;
  param_3 = (uint *)0x0;
  FUN_140574f3e(*(undefined8 *)(param_1 + 0x1b8),&local_48,param_2,0);
  if (local_48 == 1) goto LAB_1435997d0;
  plVar3 = (longlong *)
           FUN_14164f034(param_1 + 0x3e0,(int)((ulonglong)local_48 >> 0x20) * 0x17 + (int)local_48,
                         &local_48);
  param_3 = (uint *)*plVar3;
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)FUN_14001cc68(0x50,0x10);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    *(undefined2 *)(param_3 + 0x12) = 0;
    lVar10 = *plVar3;
    *plVar3 = (longlong)param_3;
    if (lVar10 != 0) {
      if (*(longlong *)(lVar10 + 0x30) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar10);
      param_3 = (uint *)*plVar3;
    }
  }
  lVar10 = *(longlong *)(param_2 + 0x1c8);
  if (lVar10 == 0) {
    puVar4 = (uint *)&DAT_14c8464e0;
    uVar12 = (undefined4)DAT_14c8464f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
    puVar4 = (uint *)(lVar10 + 0x260);
  }
  uVar2 = puVar4[1];
  uVar9 = puVar4[2];
  uVar1 = puVar4[3];
  param_3[4] = *puVar4;
  param_3[5] = uVar2;
  param_3[6] = uVar9;
  param_3[7] = uVar1;
  *(ulonglong *)(param_3 + 8) = CONCAT44(uVar13,uVar12);
  *(longlong *)(param_3 + 10) = local_48;
  if (DAT_14cae8b20 == 0) {
    local_70 = &local_58;
    local_58 = (code *)&LAB_14355090c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147b8e16d;
    local_80 = (code *)&LAB_140810a38;
    local_88 = L"Engine";
    local_90 = 0x800000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar10 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
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
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 == 0) {
LAB_14359983c:
    *param_3 = 0;
    uVar2 = 0;
  }
  else {
    iVar7 = *(int *)(lVar10 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar7) ||
         (lVar8 = lVar5,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
         lVar10 + 0x30)) {
        lVar8 = 0;
      }
    } while ((lVar8 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    if (lVar8 == 0) goto LAB_14359983c;
    uVar2 = *(uint *)(lVar8 + 0xc);
    *param_3 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar2 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar2 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar2 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar2 = uVar9;
      }
    }
  }
  param_3[1] = uVar2;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    param_3[2] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0xc);
    param_3[2] = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar2 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar2 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar2 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar2 = uVar9;
      }
    }
  }
  param_3[3] = uVar2;
  local_40 = *(longlong *)(param_2 + 0x18);
  FUN_1400021e4();
  if ((code **)(param_3 + 0xc) == &local_58) {
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_3 + 0xc) = local_58;
    local_58 = (code *)0x0;
    param_3[0xe] = local_50;
    param_3[0xf] = local_4c;
  }
  if (*(int *)(param_1 + 0x4d8) != *(int *)(param_1 + 0x504)) {
    lVar10 = *(longlong *)(param_2 + 0x18);
    uVar2 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar9 = (uint)lVar10 & 0xffff;
    lVar5 = param_1 + 0x508;
    if (*(longlong *)(param_1 + 0x510) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x510);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x518) - 1U &
                             (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar9) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x4d0) + (longlong)iVar7 * 0x18);
        if (*plVar3 == lVar10) {
          if (plVar3 != (longlong *)0x0) {
            local_40 = plVar3[1];
            goto LAB_1435996cc;
          }
          break;
        }
        iVar7 = (int)plVar3[2];
      } while (iVar7 != -1);
    }
  }
  local_40 = 0;
LAB_1435996cc:
  if (local_40 != 0) {
    FUN_1400021e4(&local_40);
    if ((code **)(param_3 + 0xc) == &local_58) {
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_3 + 0xc) != 0) {
        FUN_1400020a8();
      }
      *(code **)(param_3 + 0xc) = local_58;
      local_58 = (code *)0x0;
      param_3[0xe] = local_50;
      param_3[0xf] = local_4c;
    }
  }
  if (param_3[1] != 0) {
    uVar2 = *param_3;
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143599771;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((*(uint *)(plVar3 + 2) == param_3[1] && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar3;
      }
      else {
        lVar10 = 0;
      }
      if ((*(longlong *)(lVar10 + 0xc0) == 0) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0xc0) + 0x30) != lVar10)) {
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar10 = *plVar3;
        }
        else {
          lVar10 = 0;
        }
LAB_1435998bc:
        lVar5 = lVar10;
        lVar10 = lVar5;
        if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x0001435998cb;
        goto LAB_1435998dc;
      }
    }
  }
  uVar6 = 0;
  goto LAB_143599771;
code_r0x0001435998cb:
  lVar10 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1435998bc;
  lVar10 = FUN_142840154(lVar5);
LAB_1435998dc:
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(lVar5 + 0x20);
    goto LAB_1435998bc;
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
LAB_143599771:
  *(undefined8 *)(param_3 + 0x10) = uVar6;
  uVar2 = (uint)((ulonglong)uVar6 >> 0x10);
  uVar9 = (uint)uVar6 & 0xffff;
  uVar6 = FUN_140e4cc68(param_1 + 0x430,
                        ((uint)uVar6 << 0x10 | uVar9) + (int)((ulonglong)uVar6 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),param_3 + 0x10);
  FUN_140325a06(uVar6,&local_58,&local_48,0);
  *(undefined1 *)(param_3 + 0x12) = 0;
LAB_1435997d0:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 143599a6e FUN_143599a6e body=1908 status=ok
// SIG undefined FUN_143599a6e(void)

void FUN_143599a6e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_4;
  cVar4 = (**(code **)(*param_1 + 0x3c0))();
  cVar5 = FUN_14008df0e(param_2);
  if (*(char *)(param_2 + 0x68) == '\0') goto LAB_143599fdf;
  if (cVar5 != '\0') {
    if (cVar4 != '\0') {
      if ((int)param_1[0x9b] != *(int *)((longlong)param_1 + 0x504)) {
        uVar6 = (uint)((ulonglong)param_4 >> 0x10);
        uVar9 = (uint)param_4 & 0xffff;
        plVar7 = param_1 + 0xa1;
        if ((longlong *)param_1[0xa2] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[0xa2];
        }
        iVar10 = *(int *)((longlong)plVar7 +
                         (ulonglong)
                         ((int)param_1[0xa3] - 1U &
                         (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar9) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            plVar7 = (longlong *)(param_1[0x9a] + (longlong)iVar10 * 0x18);
            if (*plVar7 == param_4) {
              if ((plVar7 != (longlong *)0x0) && (plVar7[1] != 0)) {
                local_70 = plVar7[1];
              }
              break;
            }
            iVar10 = (int)plVar7[2];
          } while (iVar10 != -1);
        }
      }
      local_50 = *(undefined8 *)(param_2 + 0x18);
      local_68 = (code *)&local_50;
      local_60 = &local_70;
      FUN_1457d3898(param_1 + 0x9a,local_54,&local_68,0);
    }
    goto LAB_143599fdf;
  }
  if (cVar4 != '\x01' || *(longlong *)(param_2 + 0x20) == param_3) goto LAB_143599fdf;
  plVar7 = (longlong *)param_1[0x106];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x318))(plVar7,param_2,param_3,param_4);
  }
  if (param_1[0x108] == 0) {
    if ((DAT_14caf2320 != 0) && ((longlong)(int)param_1[0x20] != 0)) {
      plVar13 = (longlong *)param_1[0x1f];
      plVar7 = plVar13 + (int)param_1[0x20];
      do {
        plVar1 = (longlong *)*plVar13;
        if (DAT_14cae8b20 == 0) {
          local_68 = (code *)&LAB_14355090c;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_90 = &local_68;
          local_98 = &LAB_147b8e16d;
          local_a0 = (code *)&LAB_140810a38;
          local_a8 = L"Engine";
          local_b0 = 0x800000000;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar15 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_68 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_90 = &local_68;
          local_98 = &LAB_1468c5283;
          local_a0 = FUN_142809da0;
          local_a8 = L"Engine";
          local_b0 = 0x400000000;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar8 = *(longlong *)(param_2 + 0x20);
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          iVar10 = *(int *)(lVar15 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar10) ||
               (lVar11 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
               lVar15 + 0x30)) {
              lVar11 = 0;
            }
          } while ((lVar11 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        }
        cVar4 = (**(code **)(*plVar1 + 0x388))(plVar1,lVar11);
        if (cVar4 == '\0') {
          if (param_2 == 0) {
            uVar9 = 0;
            uVar6 = 0;
          }
          else {
            uVar9 = *(uint *)(param_2 + 0xc);
            if ((int)uVar9 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            uVar6 = *(uint *)(lVar15 + 0x10);
            if (*(uint *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              uVar14 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar14);
              }
              LOCK();
              uVar6 = *(uint *)(lVar15 + 0x10);
              bVar16 = uVar6 == 0;
              if (bVar16) {
                *(uint *)(lVar15 + 0x10) = uVar14;
                uVar6 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar6 = uVar14;
              }
            }
          }
          if ((int)plVar1[0x28c] != *(int *)((longlong)plVar1 + 0x148c)) {
            plVar12 = plVar1 + 0x292;
            if ((longlong *)plVar1[0x293] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar1[0x293];
            }
            iVar10 = *(int *)((longlong)plVar12 +
                             (ulonglong)((int)plVar1[0x294] - 1U & (uVar6 ^ uVar9)) * 4);
            if (iVar10 != -1) {
              do {
                plVar12 = (longlong *)(plVar1[0x28b] + (longlong)iVar10 * 0x18);
                if (*plVar12 == CONCAT44(uVar6,uVar9)) {
                  if ((plVar12 != (longlong *)0x0) && ((longlong *)plVar12[1] != (longlong *)0x0)) {
                    (**(code **)(*(longlong *)plVar12[1] + 0x2b8))();
                    goto LAB_143599d24;
                  }
                  break;
                }
                iVar10 = (int)plVar12[2];
              } while (iVar10 != -1);
            }
          }
          FUN_143598a62(param_1,param_2,plVar1);
        }
LAB_143599d24:
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar7);
    }
    goto LAB_143599fdf;
  }
  lVar15 = FUN_147bd6678();
  if (lVar15 == 0) goto LAB_143599fdf;
  if (param_3 == 0) {
LAB_143599f1f:
    param_3 = 0;
  }
  else {
    if (DAT_14cae8b20 == 0) {
      local_90 = &local_68;
      local_68 = (code *)&LAB_14355090c;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_147b8e16d;
      local_a0 = (code *)&LAB_140810a38;
      local_a8 = L"Engine";
      local_b0 = 0x800000000;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14cae8b20 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) != DAT_14cae8b20 + 0x30)) goto LAB_143599f1f;
  }
  if (DAT_14c761604 != '\x01') goto LAB_143599fdf;
  if (DAT_14caf9cd0 == 0) {
    local_90 = &local_68;
    local_68 = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = (code *)&LAB_1463c0cc2;
    local_98 = &LAB_147c9db5b;
    local_a0 = (code *)&LAB_1463f9c44;
    local_a8 = L"Game";
    local_b0 = 0x2000000000;
    local_b8 = 0x10000004;
    local_c0 = 8;
    local_c8 = 0x958;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
  }
  if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) goto LAB_143599fdf;
  if ((param_3 != 0) &&
     (((*(longlong *)(param_3 + 0xc0) == 0 ||
       (*(longlong *)(*(longlong *)(param_3 + 0xc0) + 0x30) != param_3)) &&
      (lVar8 = param_3,
      *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x5f8) + 0x1a8) + 0x30) != param_3)))) {
LAB_14359a010:
    lVar11 = lVar8;
    lVar8 = lVar11;
    if (*(longlong *)(lVar11 + 0x20) != 0) goto code_r0x00014359a01f;
    goto LAB_14359a031;
  }
  goto LAB_143599f8c;
code_r0x00014359a01f:
  lVar8 = *(longlong *)(lVar11 + 0x20);
  if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) == 0) goto LAB_14359a010;
  lVar8 = FUN_142840154(lVar11);
LAB_14359a031:
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar11 + 0x20);
    goto LAB_14359a010;
  }
  FUN_146f33cf2(lVar15,&local_68,param_2,0);
  FUN_146f3a0bc(lVar15,&local_50,param_3);
  uVar3 = local_50;
  pcVar2 = local_68;
  cVar4 = FUN_146f45f26(*(undefined8 *)(lVar15 + 0x28),local_50,local_68);
  if (cVar4 != '\0') {
    FUN_146f45dba(*(undefined8 *)(lVar15 + 0x28),uVar3,pcVar2);
  }
LAB_143599f8c:
  FUN_1435a1bf6(lVar15,param_2);
LAB_143599fdf:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14359a1e4 FUN_14359a1e4 body=1336 status=ok
// SIG undefined FUN_14359a1e4(void)

void FUN_14359a1e4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_b8 [44];
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  uint *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = (**(code **)(*param_1 + 0x3c0))();
  if (cVar4 != '\0') {
    iVar8 = *(int *)(param_2 + 0xa8);
    if ((longlong)iVar8 != 0) {
      lVar15 = *(longlong *)(param_2 + 0xa0);
      lVar18 = 0;
      do {
        lVar20 = *(longlong *)(lVar15 + lVar18);
        if ((lVar20 != 0) && (cVar4 = FUN_1449e2a3e(lVar20), cVar4 != '\0')) {
          (**(code **)(*param_1 + 0x3a0))(param_1,lVar20);
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar8 * 8 != lVar18);
    }
    if (param_1[0x108] != 0) {
      FUN_146f3a28a(*(undefined8 *)(*(longlong *)(param_1[0x108] + 0x28) + 0x808),param_2);
    }
    puVar14 = (uint *)(param_1 + 0x7e);
    local_58 = 0;
    uStack_50 = 0;
    iVar8 = (int)param_1[0x81];
    if (iVar8 == 0) {
      uVar13 = 1;
      uVar19 = 0;
      iVar16 = 0;
      iVar12 = 0;
    }
    else {
      puVar9 = (uint *)param_1[0x80];
      if ((uint *)param_1[0x80] == (uint *)0x0) {
        puVar9 = puVar14;
      }
      uVar10 = *puVar9;
      if (uVar10 == 0) {
        iVar16 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar16 = iVar8 + -1;
        }
        uVar19 = 0;
        uVar13 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar13 = uVar19;
        }
        iVar16 = 0;
        do {
          if (uVar13 == uVar19) goto LAB_14359a50f;
          iVar16 = iVar16 + 0x20;
          uVar10 = puVar9[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar19 = 0;
        iVar16 = 0;
      }
      uVar13 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar12) {
        iVar12 = iVar8;
      }
    }
    if (iVar12 < iVar8) {
      local_88 = param_1 + 0x7c;
      uVar10 = 0xffffffff;
      do {
        local_60 = (longlong)iVar12 * 3;
        lVar15 = *(longlong *)(*local_88 + 8 + (longlong)iVar12 * 0x18);
        local_8c = iVar16;
        cVar4 = FUN_1404e5e32(lVar15,param_2);
        if ((cVar4 != '\0') && ((*(byte *)(lVar15 + 0x28) & 1) != 0)) {
          lVar18 = param_1[0x20];
          local_80 = param_1;
          local_78 = uVar19;
          local_70 = puVar14;
          local_68 = param_2;
          if ((longlong)(int)lVar18 != 0) {
            lVar20 = param_1[0x1f];
            lVar17 = 0;
            do {
              lVar3 = *(longlong *)(lVar20 + lVar17);
              if ((*(longlong *)(lVar3 + 0x58) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar3 + 0x58) + 0x840) == 0)) {
                plVar1 = *(longlong **)(lVar3 + 0x14a8);
                if (plVar1 == (longlong *)0x0) {
                  FUN_140326250(lVar3 + 0x14e0,lVar15 + 0x28);
                }
                else {
                  (**(code **)(*plVar1 + 0x2c8))(plVar1,lVar15);
                }
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)(int)lVar18 * 8 != lVar17);
          }
          uVar19 = uStack_50;
          lVar18 = local_60 * 8;
          lVar15 = *local_88;
          lVar20 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_140b3b51e(&local_58,uVar19 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + lVar20 * 8) = *(undefined8 *)(lVar18 + lVar15);
          FUN_14571c1d0(local_88,iVar12);
          puVar14 = local_70;
          param_2 = local_68;
          param_1 = local_80;
          uVar19 = local_78;
        }
        uVar10 = uVar10 & ~(uint)uVar13;
        puVar9 = (uint *)param_1[0x80];
        if ((uint *)param_1[0x80] == (uint *)0x0) {
          puVar9 = puVar14;
        }
        iVar8 = (int)param_1[0x81];
        iVar12 = (int)uVar19;
        lVar15 = (longlong)iVar12;
        uVar5 = puVar9[lVar15] & uVar10;
        iVar16 = local_8c;
        if (uVar5 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar12) {
            iVar7 = iVar12;
          }
          if (iVar6 <= iVar12) break;
          lVar18 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar5 = puVar9[lVar15 + lVar18 + 1];
            if (uVar5 != 0) break;
            lVar18 = lVar18 + 1;
            if (iVar7 - lVar15 == lVar18) goto LAB_14359a50f;
          }
          uVar19 = (ulonglong)(iVar12 + (int)lVar18 + 1);
          uVar10 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar12 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar8);
    }
LAB_14359a50f:
    FUN_1404e6ace(param_1,param_2,&local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_1462070f0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x10));
    FUN_1457a0228(param_1 + 0xaf,*(undefined8 *)(param_2 + 0xf0));
  }
  lVar15 = param_1[0x1e];
  if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x68) != 0)) {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      uVar10 = *(uint *)(*(longlong *)(param_2 + 0xf0) + 0xc);
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      uVar5 = *(uint *)(lVar18 + 0x10);
      if (*(uint *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar5 = *(uint *)(lVar18 + 0x10);
        bVar21 = uVar5 == 0;
        if (bVar21) {
          *(uint *)(lVar18 + 0x10) = uVar11;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar5 = uVar11;
        }
      }
      if (*(int *)(lVar15 + 0x1460) != *(int *)(lVar15 + 0x148c)) {
        lVar18 = lVar15 + 0x1490;
        if (*(longlong *)(lVar15 + 0x1498) != 0) {
          lVar18 = *(longlong *)(lVar15 + 0x1498);
        }
        iVar8 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar15 + 0x14a0) - 1U & (uVar5 ^ uVar10)) * 4
                        );
        if (iVar8 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar15 + 0x1458) + (longlong)iVar8 * 0x18);
            if (*plVar1 == CONCAT44(uVar5,uVar10)) {
              if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
                FUN_147a48258();
              }
              break;
            }
            iVar8 = (int)plVar1[2];
          } while (iVar8 != -1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1[0x1e] + 0x68) + 0x2e8))
              (*(longlong **)(param_1[0x1e] + 0x68),param_2);
  }
  if (0 < (longlong)(int)param_1[0x20]) {
    uVar19 = (longlong)(int)param_1[0x20] + 1;
    do {
      lVar15 = *(longlong *)(param_1[0x1f] + -0x10 + uVar19 * 8);
      if ((lVar15 != 0) && (plVar1 = *(longlong **)(lVar15 + 0x68), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2);
      }
      uVar19 = uVar19 - 1;
    } while (1 < uVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14359a71e FUN_14359a71e body=145 status=ok
// SIG undefined FUN_14359a71e(void)

void FUN_14359a71e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x840) != 0) {
    lVar2 = FUN_146f23e78();
    if (lVar2 != 0) {
      FUN_146f33cf2(lVar2,&local_28,param_2,0);
      FUN_146f462b8(*(undefined8 *)(param_1 + 0x840),local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14359a7b0 FUN_14359a7b0 body=201 status=ok
// SIG undefined FUN_14359a7b0(void)

void FUN_14359a7b0(longlong param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) &&
      ((*(byte *)((longlong)param_2 + 100) & 2) != 0)) &&
     ((*(byte *)((longlong)param_2 + 99) & 8) != 0)) {
    if ((param_3 != '\0') &&
       ((bVar1 = *(byte *)((longlong)param_2 + 0x65) & 0x18, bVar1 == 0x10 || (bVar1 == 8)))) {
      (**(code **)(*param_2 + 0x4f8))(param_2);
    }
    FUN_14020496a(&local_28,param_2);
    if (iStack_24 != 0 || local_28 != 0) {
      lVar2 = FUN_146f23e78(param_1);
      if (lVar2 != 0) {
        FUN_146f33d6c(lVar2,&local_30);
        if (local_30 != 0) {
          FUN_142a8842a(lVar2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14359a87a FUN_14359a87a body=149 status=ok
// SIG undefined FUN_14359a87a(void)

longlong * FUN_14359a87a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_147bd6757(DAT_14c951640);
  (**(code **)(*plVar2 + 0x3f8))(plVar2,param_1,param_2);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  *(uint *)(param_2 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x54) < iVar1 + 1U) {
    FUN_147bdfea0((longlong *)(param_2 + 0x48),iVar1);
  }
  *(longlong **)(*(longlong *)(param_2 + 0x48) + (longlong)iVar1 * 8) = plVar2;
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  return plVar2;
}



// FUNCTION 14359a90f FUN_14359a90f body=69 status=ok
// SIG undefined FUN_14359a90f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359a90f(void)

{
  _DAT_14caf23f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359a951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2400,1);
  return;
}



// FUNCTION 14359a954 FUN_14359a954 body=14709 status=ok
// SIG undefined FUN_14359a954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14359a954(longlong *param_1,float param_2)

{
  ulonglong *puVar1;
  double *pdVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  DWORD DVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  DWORD DVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  LPVOID pvVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 uVar26;
  longlong *plVar27;
  LARGE_INTEGER *pLVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined8 *puVar33;
  int iVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  PSRWLOCK pRVar39;
  longlong lVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  DWORD DVar43;
  int iVar44;
  longlong lVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  uint uVar51;
  ulonglong uVar52;
  longlong *plVar53;
  undefined8 *puVar54;
  longlong *plVar55;
  ulonglong uVar56;
  bool bVar57;
  bool bVar58;
  float fVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  float fVar63;
  double dVar64;
  double dVar65;
  float fVar66;
  double dVar67;
  float fVar68;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  longlong *local_5d0;
  float local_5c8;
  undefined8 local_5c0;
  wchar_t *local_5b8;
  code *local_5b0;
  undefined1 *local_5a8;
  code **local_5a0;
  code *local_598;
  code *local_590;
  longlong *local_588;
  longlong local_580;
  byte local_571;
  longlong *local_570;
  longlong *local_568;
  ulonglong local_560;
  ulonglong local_558;
  uint local_54c;
  uint *local_548;
  int local_53c;
  longlong *local_538;
  longlong *local_530;
  undefined4 *local_528;
  longlong *local_520;
  longlong *local_518;
  float local_50c;
  longlong *local_508;
  uint local_500;
  int local_4fc;
  undefined8 local_4f8;
  double local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong *local_4d8;
  undefined8 *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  char local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  longlong local_490;
  char local_488;
  undefined8 local_480;
  longlong *local_478;
  undefined8 uStack_470;
  int local_468;
  undefined4 local_464;
  char local_45d;
  undefined1 auStack_45c [4];
  LARGE_INTEGER local_458;
  uint *puStack_450;
  code *local_448;
  ulonglong uStack_440;
  uint local_438 [4];
  uint *local_428;
  int local_420;
  uint local_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  longlong local_408;
  undefined4 local_400;
  LARGE_INTEGER local_3f8;
  undefined8 uStack_3f0;
  uint local_3e8 [4];
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  int local_3c4;
  undefined1 local_3c0 [8];
  undefined1 *local_3b8;
  int local_3b0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  if ((int)param_1[0x20] != 0) {
    lVar40 = param_1[0x51];
    if ((lVar40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar40);
    }
    FUN_1435a82a8(lVar40,DAT_14caf3090,0);
    lVar40 = param_1[0x51];
    if ((lVar40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar40);
    }
    FUN_1435a82a8(lVar40,DAT_14caf3198,0);
    if (param_1[0x106] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_5f8);
    }
    *(int *)(param_1 + 0xa4) = (int)param_1[0xa4] + 1;
    local_468 = 0;
    iVar13 = (int)param_1[0x20];
    local_588 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf240c) && (FUN_144b3d300(&DAT_14caf240c), DAT_14caf240c == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14caf2408 = FUN_14054d46e(&DAT_14c846b20,L"limitclientticks");
      _Init_thread_footer(&DAT_14caf240c);
      param_1 = local_588;
    }
    if (((DAT_14caf2408 != '\0') ||
        ((cVar9 = (**(code **)(*param_1 + 0x3c0))(param_1), cVar9 != '\0' &&
         ((DAT_14c86a9f0 & 1) != 0)))) && ((char)param_1[0x103] == '\x01')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caf2418) && (FUN_144b3d300(&DAT_14caf2418), DAT_14caf2418 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14caf2414 = FUN_14054d46e(&DAT_14c846b20,L"lanplay");
        _Init_thread_footer(&DAT_14caf2418);
        param_1 = local_588;
      }
      DAT_14caf2410 = DAT_14caf2410 + param_2;
      if (DAT_14caf2414 == '\0') {
        fVar60 = 1.0;
      }
      else {
        fVar60 = 2.0;
      }
      iVar12 = (int)(*(float *)(DAT_14cb0d2b0 + 0x1b6) * DAT_14caf2410 * fVar60);
      if (iVar13 < iVar12) {
        iVar12 = iVar13;
      }
      iVar13 = iVar12;
      iVar12 = 0;
      if (iVar13 == 0) goto LAB_14359aea0;
      DAT_14caf2410 = 0.0;
    }
    local_53c = iVar13;
    iVar13 = (**(code **)(*DAT_14caf2400 + 0xb0))();
    if (iVar13 < 1) {
      iVar13 = (int)param_1[0x20];
    }
    else {
      local_53c = (**(code **)(*DAT_14caf2400 + 0xb0))();
      iVar13 = (int)param_1[0x20];
      if (iVar13 < local_53c) {
        local_53c = iVar13;
      }
    }
    if (0 < iVar13) {
      local_508 = param_1 + 0x1f;
      lVar40 = 0;
      bVar10 = 0;
      do {
        lVar45 = *(longlong *)(*local_508 + lVar40 * 8);
        lVar48 = *(longlong *)(lVar45 + 0x98);
        if (((lVar48 == 0) || (*(int *)(lVar45 + 0x134) != 3)) ||
           (1.5 <= *(double *)(*(longlong *)(lVar45 + 0x58) + 0x300) - *(double *)(lVar45 + 0x1d8)))
        {
          *(undefined8 *)(lVar45 + 0x90) = 0;
          if (0 < *(int *)(lVar45 + 0x50)) {
            lVar48 = 0;
            do {
              *(undefined8 *)(*(longlong *)(*(longlong *)(lVar45 + 0x48) + lVar48 * 8) + 0x90) = 0;
              lVar48 = lVar48 + 1;
            } while (lVar48 < *(int *)(lVar45 + 0x50));
          }
        }
        else {
          if (((*(longlong **)(lVar45 + 0x30) != (longlong *)0x0) &&
              (lVar16 = (**(code **)(**(longlong **)(lVar45 + 0x30) + 0x6b8))(), lVar16 != 0)) &&
             (lVar17 = FUN_1447210f0(lVar16), lVar17 != 0)) {
            lVar48 = lVar16;
          }
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar48);
          }
          *(longlong *)(lVar45 + 0x90) = lVar48;
          bVar10 = 1;
          if (0 < *(int *)(lVar45 + 0x50)) {
            lVar48 = 0;
            do {
              lVar16 = *(longlong *)(*(longlong *)(lVar45 + 0x48) + lVar48 * 8);
              lVar17 = *(longlong *)(lVar16 + 0x98);
              if (((*(longlong **)(lVar16 + 0x30) != (longlong *)0x0) &&
                  (lVar18 = (**(code **)(**(longlong **)(lVar16 + 0x30) + 0x6b8))(), lVar18 != 0))
                 && (lVar19 = FUN_1447210f0(lVar18), lVar19 != 0)) {
                lVar17 = lVar18;
              }
              if ((lVar17 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar17);
              }
              *(longlong *)(lVar16 + 0x90) = lVar17;
              lVar48 = lVar48 + 1;
            } while (lVar48 < *(int *)(lVar45 + 0x50));
          }
        }
        lVar40 = lVar40 + 1;
      } while (lVar40 < (int)param_1[0x20]);
      if ((bool)(bVar10 & local_53c != 0)) {
        QueryPerformanceCounter(&local_3f8);
        if (*(longlong *)(param_1[0x35] + 0x30) == 0) {
          lVar40 = 0;
        }
        else {
          lVar40 = *(longlong *)(*(longlong *)(param_1[0x35] + 0x30) + 0x2b0);
        }
        dVar64 = (double)CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) * DAT_14c83f420;
        fVar59 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x2f8))();
        fVar68 = 1.0 / fVar59;
        fVar60 = fVar68;
        if ((fVar59 == 0.0) && (!NAN(fVar59))) {
          fVar60 = param_2;
        }
        local_571 = fVar68 * 1.2 < param_2 && fVar59 != 0.0;
        local_478 = (longlong *)0x0;
        uStack_470 = 0;
        iVar13 = *(int *)(param_1[0x10b] + 0x58) - *(int *)(param_1[0x10b] + 0x84);
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar13);
        }
        if (iVar13 != 0) {
          FUN_1417e4730(&local_478);
        }
        lVar45 = DAT_14caf2210;
        iVar13 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        uVar49 = 0;
        if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
          uVar56 = 0;
        }
        else if (iVar13 == 1) {
          DVar43 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          uVar56 = (ulonglong)(DVar43 != DVar15);
        }
        else {
          uVar56 = 1;
        }
        local_3f8.s.LowPart = 0;
        local_3f8.s.HighPart = 0;
        uStack_3f0._0_4_ = 0;
        uStack_3f0._4_4_ = 0;
        lVar48 = param_1[0x10b];
        puVar29 = (uint *)(lVar48 + 0x60);
        uVar51 = *(uint *)(lVar48 + 0x78);
        uVar37 = (ulonglong)uVar51;
        local_580 = lVar40;
        if (uVar51 == 0) {
          uVar50 = 1;
          iVar13 = 0;
          uVar14 = 0;
        }
        else {
          puVar20 = *(uint **)(lVar48 + 0x70);
          if (*(uint **)(lVar48 + 0x70) == (uint *)0x0) {
            puVar20 = puVar29;
          }
          uVar14 = *puVar20;
          if (uVar14 == 0) {
            iVar13 = uVar51 + 0x1e;
            if (-1 < (int)(uVar51 - 1)) {
              iVar13 = uVar51 - 1;
            }
            uVar52 = 0;
            uVar50 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar50 = uVar52;
            }
            uVar49 = 0;
            iVar13 = 0;
            do {
              if (uVar50 == uVar49) goto LAB_14359b8d3;
              iVar13 = iVar13 + 0x20;
              uVar14 = puVar20[uVar49 + 1];
              uVar49 = uVar49 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar49 = 0;
            iVar13 = 0;
          }
          uVar50 = (ulonglong)(-uVar14 & uVar14);
          uVar52 = uVar50 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar52 != 0) {
            for (; uVar52 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar14 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar51 <= (int)uVar14) {
            uVar14 = uVar51;
          }
        }
        uVar52 = 0;
        if (uVar14 != uVar51) {
          local_568 = (longlong *)0x0;
          local_538 = (longlong *)CONCAT44(local_538._4_4_,*(undefined4 *)(lVar45 + uVar56 * 4));
          uVar51 = 0xffffffff;
          local_560 = uVar37;
          do {
            uVar31 = (uint)uStack_3f0;
            plVar55 = *(longlong **)(*(longlong *)(lVar48 + 0x50) + (longlong)(int)uVar14 * 0x18);
            if (((*(byte *)(plVar55 + 0x1a) & 1) != 0) ||
               ((double)plVar55[2] < *(double *)(param_1[0x35] + 0x6d0))) {
              local_570 = (longlong *)CONCAT44(local_570._4_4_,iVar13);
              lVar40 = *plVar55;
              if (((*(byte *)(lVar40 + 0x65) & 2) == 0) &&
                 (((*(uint *)(lVar40 + 8) >> 0x1e & 1) == 0 && (*(char *)(lVar40 + 0x68) != '\0'))))
              {
                if ((*(longlong *)(lVar40 + 0x170) != param_1[0x40]) ||
                   ((*(byte *)(lVar40 + 100) & 2) == 0)) goto LAB_14359b22d;
                if (DAT_14cae8b20 == 0) {
                  local_448 = (code *)&LAB_14355090c;
                  local_590 = FUN_14081d0ea;
                  local_598 = FUN_14081d0ea;
                  local_5a0 = &local_448;
                  local_5a8 = &LAB_147b8e16d;
                  local_5b0 = (code *)&LAB_140810a38;
                  local_5b8 = L"Engine";
                  local_5c0 = 0x800000000;
                  local_5c8 = 2.524355e-29;
                  local_5d0 = (longlong *)CONCAT44(local_5d0._4_4_,8);
                  local_5d8 = CONCAT44(local_5d8._4_4_,0x3f0);
                  FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
                }
                lVar45 = DAT_14cae8b20;
                if (DAT_14c951858 == 0) {
                  local_448 = FUN_1449e2820;
                  local_590 = FUN_14081d0ea;
                  local_598 = FUN_14081d0ea;
                  local_5a0 = &local_448;
                  local_5a8 = &LAB_1468c5283;
                  local_5b0 = FUN_142809da0;
                  local_5b8 = L"Engine";
                  local_5c0 = 0x400000000;
                  local_5c8 = 2.524355e-29;
                  local_5d0 = (longlong *)CONCAT44(local_5d0._4_4_,8);
                  local_5d8 = CONCAT44(local_5d8._4_4_,0x50);
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                uVar56 = *(ulonglong *)(lVar40 + 0x20);
                if (uVar56 == 0) {
                  local_558 = 0;
                }
                else {
                  iVar13 = *(int *)(lVar45 + 0x38);
                  do {
                    if ((*(int *)(*(longlong *)(uVar56 + 0x10) + 0x38) < iVar13) ||
                       (local_558 = uVar56,
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(uVar56 + 0x10) + 0x30) + (longlong)iVar13 * 8)
                       != lVar45 + 0x30)) {
                      local_558 = 0;
                    }
                  } while ((local_558 == 0) && (uVar56 = *(ulonglong *)(uVar56 + 0x20), uVar56 != 0)
                          );
                }
                local_548 = puVar29;
                if (*(longlong *)(local_558 + 0xc0) == 0) {
LAB_14359b48e:
                  puVar29 = local_548;
                  plVar24 = local_588;
                  param_1 = local_588;
                  uVar37 = local_560;
                  if ((*(byte *)(local_558 + 0x241) & 0x20) == 0) {
                    if (((lVar40 != 0) &&
                        (cVar9 = FUN_1449e2a3e(lVar40), uVar14 = (uint)uStack_3f0, cVar9 != '\0'))
                       && (*(char *)(lVar40 + 0x179) == '\x04')) {
                      lVar45 = (longlong)(int)(uint)uStack_3f0;
                      uStack_3f0._0_4_ = (uint)uStack_3f0 + 1;
                      if (uStack_3f0._4_4_ < (uint)uStack_3f0) {
                        FUN_1447d05f2(&local_3f8,uVar14);
                      }
                      local_568 = (longlong *)(ulonglong)((int)local_568 + 1);
                      uVar37 = local_560;
                      goto LAB_14359b21c;
                    }
                    dVar61 = (double)plVar55[3];
                    lVar45 = plVar24[0x35];
                    if ((dVar61 == 0.0) && (!NAN(dVar61))) {
                      dVar61 = *(double *)(lVar45 + 0x6d0);
                      plVar55[3] = (longlong)dVar61;
                      *(float *)(plVar55 + 4) = 1.0 / *(float *)(lVar40 + 0x198);
                      lVar45 = plVar24[0x35];
                    }
                    fVar59 = (float)(*(double *)(lVar45 + 0x6d0) - dVar61);
                    if (2.0 < fVar59) {
                      fVar68 = *(float *)(lVar40 + 0x19c);
                      if ((fVar68 == 0.0) && (!NAN(fVar68))) {
                        *(undefined4 *)(lVar40 + 0x19c) = 0x40000000;
                        fVar68 = 2.0;
                      }
                      fVar63 = 1.0 / *(float *)(lVar40 + 0x198);
                      fVar66 = 1.0 / fVar68;
                      if (1.0 / fVar68 <= fVar63) {
                        fVar66 = fVar63;
                      }
                      fVar59 = (fVar59 + -2.0) / 5.0;
                      if (1.0 <= fVar59) {
                        fVar59 = 1.0;
                      }
                      if (fVar59 <= 0.0) {
                        fVar59 = 0.0;
                      }
                      *(float *)(plVar55 + 4) = (fVar66 - fVar63) * fVar59 + fVar63;
                    }
                    bVar10 = *(byte *)(plVar55 + 0x1a);
                    if ((bVar10 & 1) == 0) {
                      if ((int)local_538 < 1) {
                        fVar59 = 1.0 / *(float *)(lVar40 + 0x198);
                      }
                      else {
                        fVar59 = *(float *)(plVar55 + 4);
                      }
                      fVar68 = 0.0;
                      if (DAT_14caf22a0 == 0) {
                        uVar14 = *(int *)((longlong)plVar24 + 0x814) * 0xbb38435 + 0x3619636b;
                        *(uint *)((longlong)plVar24 + 0x814) = uVar14;
                        fVar68 = ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) * fVar60;
                        bVar10 = *(byte *)(plVar55 + 0x1a);
                      }
                      plVar55[2] = (longlong)
                                   ((double)fVar59 +
                                   (double)fVar68 + *(double *)(plVar24[0x35] + 0x6d0));
                      plVar55[5] = plVar24[0x60];
                    }
                    bVar11 = bVar10 & 0xfe;
                    *(byte *)(plVar55 + 0x1a) = bVar11;
                    if ((bVar10 & 0x10) != 0) {
                      if ((longlong)(int)plVar24[0x20] != 0) {
                        plVar25 = (longlong *)plVar24[0x1f];
                        plVar53 = plVar25 + (int)plVar24[0x20];
                        do {
                          puVar22 = (undefined4 *)*plVar25;
                          if (puVar22 != (undefined4 *)0x0) {
                            if (*plVar55 == 0) {
                              plVar35 = (longlong *)0x0;
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = *(uint *)(*plVar55 + 0xc);
                              plVar35 = (longlong *)(ulonglong)uVar14;
                              if ((int)uVar14 < DAT_14c9647dc) {
                                lVar45 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                              }
                              else {
                                lVar45 = 0;
                              }
                              plVar24 = local_588;
                              uVar14 = *(uint *)(lVar45 + 0x10);
                              if (*(uint *)(lVar45 + 0x10) == 0) {
                                LOCK();
                                iVar13 = DAT_14c964868 + 1;
                                UNLOCK();
                                uVar31 = DAT_14c964868 + 1;
                                bVar58 = DAT_14c964868 < 1000;
                                DAT_14c964868 = iVar13;
                                if (bVar58) {
                                  local_558 = CONCAT44(local_558._4_4_,uVar31);
                                  local_530 = plVar35;
                                  local_528 = puVar22;
                                  local_520 = plVar53;
                                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                ,0x23d,
                                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                ,uVar31);
                                  plVar53 = local_520;
                                  puVar22 = local_528;
                                  plVar35 = local_530;
                                  uVar31 = (uint)local_558;
                                }
                                LOCK();
                                uVar14 = *(uint *)(lVar45 + 0x10);
                                bVar58 = uVar14 == 0;
                                if (bVar58) {
                                  *(uint *)(lVar45 + 0x10) = uVar31;
                                  uVar14 = 0;
                                }
                                UNLOCK();
                                plVar24 = local_588;
                                if (bVar58) {
                                  uVar14 = uVar31;
                                }
                              }
                            }
                            if (puVar22[0x518] != puVar22[0x523]) {
                              puVar32 = puVar22 + 0x524;
                              if (*(undefined4 **)(puVar22 + 0x526) != (undefined4 *)0x0) {
                                puVar32 = *(undefined4 **)(puVar22 + 0x526);
                              }
                              iVar13 = puVar32[puVar22[0x528] - 1 & (uVar14 ^ (uint)plVar35)];
                              if (iVar13 != -1) {
                                do {
                                  puVar1 = (ulonglong *)
                                           (*(longlong *)(puVar22 + 0x516) + (longlong)iVar13 * 0x18
                                           );
                                  if (*puVar1 ==
                                      ((ulonglong)plVar35 & 0xffffffff | (ulonglong)uVar14 << 0x20))
                                  {
                                    if ((puVar1 != (ulonglong *)0x0) && (puVar1[1] != 0)) {
                                      *(longlong *)(puVar1[1] + 0x198) = plVar24[0x60];
                                    }
                                    break;
                                  }
                                  iVar13 = (int)puVar1[2];
                                } while (iVar13 != -1);
                              }
                            }
                          }
                          plVar25 = plVar25 + 1;
                        } while (plVar25 != plVar53);
                        bVar11 = *(byte *)(plVar55 + 0x1a);
                        puVar29 = local_548;
                      }
                      *(byte *)(plVar55 + 0x1a) = bVar11 & 0xef;
                    }
                    uVar56 = uStack_470;
                    lVar45 = (longlong)(int)uStack_470;
                    uVar14 = (int)uStack_470 + 1;
                    uStack_470 = CONCAT44(uStack_470._4_4_,uVar14);
                    if (uStack_470._4_4_ < uVar14) {
                      FUN_147bdffe6(&local_478,uVar56 & 0xffffffff);
                    }
                    param_1 = local_588;
                    local_478[lVar45] = (longlong)plVar55;
                    FUN_144adf12a(lVar40,local_588);
                    uVar37 = local_560;
                  }
                }
                else {
                  pRVar39 = (PSRWLOCK)(*(longlong *)(local_558 + 0xc0) + 0xe0);
                  AcquireSRWLockShared(pRVar39);
                  uVar56 = local_558;
                  if (local_558 == 0) {
                    ReleaseSRWLockShared(pRVar39);
                    pRVar39 = (PSRWLOCK)(_DAT_000000c0 + 0xe0);
                    AcquireSRWLockShared(pRVar39);
                    ReleaseSRWLockShared(pRVar39);
                    goto LAB_14359b48e;
                  }
                  bVar10 = *(byte *)(local_558 + 0x243);
                  ReleaseSRWLockShared(pRVar39);
                  param_1 = local_588;
                  puVar29 = local_548;
                  uVar37 = local_560;
                  if ((bVar10 & 0xc) != 4) {
                    pRVar39 = (PSRWLOCK)(*(longlong *)(uVar56 + 0xc0) + 0xe0);
                    AcquireSRWLockShared(pRVar39);
                    bVar10 = *(byte *)(uVar56 + 0x243);
                    ReleaseSRWLockShared(pRVar39);
                    param_1 = local_588;
                    puVar29 = local_548;
                    uVar37 = local_560;
                    if ((bVar10 & 0xc) != 8) goto LAB_14359b48e;
                  }
                }
              }
              else {
                lVar45 = (longlong)(int)(uint)uStack_3f0;
                uStack_3f0._0_4_ = (uint)uStack_3f0 + 1;
                if (uStack_3f0._4_4_ < (uint)uStack_3f0) {
                  FUN_1447d05f2(&local_3f8,uVar31);
                  uVar37 = local_560;
                }
LAB_14359b21c:
                *(longlong *)(CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) + lVar45 * 8) =
                     lVar40;
                param_1 = local_588;
              }
LAB_14359b22d:
              iVar13 = (int)local_570;
            }
            lVar40 = local_580;
            uVar51 = uVar51 & ~(uint)uVar50;
            puVar20 = *(uint **)(lVar48 + 0x70);
            if (*(uint **)(lVar48 + 0x70) == (uint *)0x0) {
              puVar20 = puVar29;
            }
            uVar31 = *(uint *)(lVar48 + 0x78);
            iVar12 = (int)uVar49;
            lVar45 = (longlong)iVar12;
            uVar14 = puVar20[lVar45] & uVar51;
            if (uVar14 == 0) {
              iVar30 = uVar31 + 0x1e;
              if (-1 < (int)(uVar31 - 1)) {
                iVar30 = uVar31 - 1;
              }
              iVar30 = iVar30 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar34 = iVar30;
              if (iVar30 < iVar12) {
                iVar34 = iVar12;
              }
              if (iVar12 < iVar30) {
                lVar16 = 0;
                do {
                  uVar14 = puVar20[lVar45 + lVar16 + 1];
                  if (uVar14 != 0) {
                    uVar49 = (ulonglong)(iVar12 + (int)lVar16 + 1);
                    uVar51 = 0xffffffff;
                    goto LAB_14359b2b1;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar34 - lVar45 != lVar16);
                uVar51 = 0xffffffff;
                iVar12 = iVar34;
              }
              uVar49 = (ulonglong)(iVar12 + 1);
              param_1 = local_588;
              uVar37 = local_560;
              uVar14 = uVar31;
            }
            else {
LAB_14359b2b1:
              uVar50 = (ulonglong)(-uVar14 & uVar14);
              uVar56 = uVar50 * 2 + 1;
              lVar45 = 0x3f;
              if (uVar56 != 0) {
                for (; uVar56 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                }
              }
              uVar14 = (iVar13 - ((uint)lVar45 ^ 0x3f)) + 0x3e;
              if ((int)uVar31 <= (int)uVar14) {
                uVar14 = uVar31;
              }
            }
          } while (uVar14 != (uint)uVar37);
          lVar45 = (longlong)(int)(uint)uStack_3f0;
          uVar52 = (ulonglong)(int)local_568;
          if (lVar45 != 0) {
            lVar48 = CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart);
            lVar16 = 0;
            do {
              FUN_14021bb6a(param_1,*(undefined8 *)(lVar48 + lVar16));
              lVar16 = lVar16 + 8;
            } while (lVar45 * 8 != lVar16);
          }
        }
LAB_14359b8d3:
        lVar45 = param_1[0x51];
        if ((lVar45 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar45);
        }
        FUN_1435a82a8(lVar45,DAT_14caf3180,uVar52);
        lVar45 = param_1[0x51];
        if ((lVar45 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar45);
        }
        FUN_1435a82a8(lVar45,DAT_14caf3178);
        if (CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) != 0) {
          FUN_1400020a8();
        }
        local_428 = (uint *)0x0;
        local_420 = 0;
        local_448 = (code *)0x0;
        uStack_440 = 0;
        local_41c = 0x80;
        uStack_418 = 0xffffffff;
        local_414 = 0;
        local_408 = 0;
        local_400 = 0;
        DVar43 = DAT_14c7585d0;
        if (DAT_14c7585d0 == 0xffffffff) {
          DVar43 = TlsAlloc();
          DVar15 = 0xffffffff;
          LOCK();
          bVar58 = DAT_14c7585d0 != 0xffffffff;
          DVar8 = DVar43;
          if (bVar58) {
            DVar15 = DAT_14c7585d0;
            DVar8 = DAT_14c7585d0;
          }
          DAT_14c7585d0 = DVar8;
          UNLOCK();
          param_1 = local_588;
          lVar40 = local_580;
          if (bVar58) {
            TlsFree(DVar43);
            param_1 = local_588;
            lVar40 = local_580;
            DVar43 = DVar15;
          }
        }
        pvVar21 = TlsGetValue(DVar43);
        if (pvVar21 == (LPVOID)0x0) {
          pvVar21 = (LPVOID)FUN_140036a08(&local_3f8);
          FUN_140fddf04(pvVar21);
          TlsSetValue(DVar43,pvVar21);
        }
        local_4a0 = (undefined8 *)((longlong)pvVar21 + 0x10);
        local_498 = *(undefined8 *)((longlong)pvVar21 + 0x10);
        local_490 = *(longlong *)((longlong)pvVar21 + 0x20);
        local_488 = '\0';
        local_480 = *(undefined8 *)((longlong)pvVar21 + 0x28);
        *(undefined8 ***)((longlong)pvVar21 + 0x28) = &local_4a0;
        *(int *)((longlong)pvVar21 + 0x30) = *(int *)((longlong)pvVar21 + 0x30) + 1;
        if ((((int)param_1[0xfb] != 0) && ((longlong *)param_1[0xfa] != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(*(longlong *)param_1[0xfa] + 0x30))(), cVar9 != '\0')) {
          local_3f8.s.HighPart = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          local_3e8[1] = 0;
          local_3e8[0] = (uint)local_571;
          if ((int)param_1[0xfb] == 0) {
            plVar55 = (longlong *)0x0;
          }
          else {
            plVar55 = (longlong *)param_1[0xfa];
          }
          local_3f8._0_4_ = param_2;
          (**(code **)(*plVar55 + 0x58))(plVar55,&local_3f8,&local_468,&local_478);
        }
        local_50c = param_2;
        QueryPerformanceCounter(&local_3f8);
        if (0 < (int)param_1[0x20]) {
          dVar62 = (double)DAT_14c7615f4 -
                   (((double)CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) * DAT_14c83f420 +
                    16777216.0) - (dVar64 + 16777216.0));
          dVar61 = (double)local_53c;
          dVar64 = 0.0;
          if (0.0 <= dVar62) {
            dVar64 = dVar62;
          }
          local_4f0 = ((dVar64 / dVar61) * 0.9) / dVar61;
          local_570 = (longlong *)(lVar40 + 0x568);
          local_4e0 = (longlong)local_53c;
          local_4d8 = param_1 + 0x83;
          lVar45 = 0;
          do {
            plVar55 = *(longlong **)(param_1[0x1f] + lVar45 * 8);
            dVar62 = (0.9 / dVar61 + 0.1) * (dVar64 / dVar61);
            if (lVar45 != 0) {
              dVar62 = local_4f0;
            }
            param_1[0x11b] = (longlong)dVar62;
            local_4a8 = plVar55;
            QueryPerformanceCounter(&local_3f8);
            param_1[0x11c] =
                 (longlong)
                 ((double)CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) * DAT_14c83f420 +
                 16777216.0);
            *(undefined1 *)(param_1 + 0x11d) = 0;
            if (DAT_14caf2748 == 2) {
              local_3f8.s.LowPart = 0x435a4ebc;
              local_3f8.s.HighPart = 1;
              uStack_3f0 = &local_4d0;
              FUN_147bdbac4(plVar55 + 0x2ba,&local_3f8);
            }
            if (lVar45 < local_4e0) {
              if (plVar55[0x12] != 0) {
                local_4fc = DAT_14caf2148;
                uVar51 = *(uint *)(lVar40 + 0x574);
                iVar13 = 0;
                if ((int)uVar51 < 0) {
                  *(undefined4 *)(lVar40 + 0x570) = 0;
                  FUN_147be006c(local_570);
                  iVar13 = *(int *)(lVar40 + 0x570);
                  uVar51 = *(uint *)(lVar40 + 0x574);
                }
                *(uint *)(lVar40 + 0x570) = iVar13 + 1U;
                if (uVar51 < iVar13 + 1U) {
                  FUN_1417e4870(local_570,iVar13);
                }
                plVar55 = local_4a8;
                local_4e8 = lVar45;
                FUN_1417e36e6((longlong)iVar13 * 0x48 + *local_570);
                if (0 < (int)plVar55[10]) {
                  lVar45 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(plVar55[9] + lVar45 * 8) + 0x90) != 0) {
                      iVar13 = *(int *)(lVar40 + 0x570);
                      *(uint *)(lVar40 + 0x570) = iVar13 + 1U;
                      if (*(uint *)(lVar40 + 0x574) < iVar13 + 1U) {
                        FUN_1417e4870(local_570,iVar13);
                        plVar55 = local_4a8;
                      }
                      FUN_1417e36e6((longlong)iVar13 * 0x48 + *local_570);
                    }
                    lVar45 = lVar45 + 1;
                  } while (lVar45 < (int)plVar55[10]);
                }
                if ((longlong *)plVar55[6] != (longlong *)0x0) {
                  (**(code **)(*(longlong *)plVar55[6] + 0xed0))();
                }
                if (0 < (int)plVar55[10]) {
                  lVar45 = 0;
                  do {
                    plVar24 = *(longlong **)(*(longlong *)(plVar55[9] + lVar45 * 8) + 0x30);
                    if (plVar24 != (longlong *)0x0) {
                      (**(code **)(*plVar24 + 0xed0))();
                    }
                    lVar45 = lVar45 + 1;
                  } while (lVar45 < (int)plVar55[10]);
                }
                DVar43 = DAT_14c7585d0;
                if (DAT_14c7585d0 == 0xffffffff) {
                  DVar43 = TlsAlloc();
                  DVar15 = 0xffffffff;
                  LOCK();
                  bVar58 = DAT_14c7585d0 != 0xffffffff;
                  DVar8 = DVar43;
                  if (bVar58) {
                    DVar15 = DAT_14c7585d0;
                    DVar8 = DAT_14c7585d0;
                  }
                  DAT_14c7585d0 = DVar8;
                  UNLOCK();
                  param_1 = local_588;
                  lVar40 = local_580;
                  if (bVar58) {
                    TlsFree(DVar43);
                    param_1 = local_588;
                    lVar40 = local_580;
                    DVar43 = DVar15;
                  }
                }
                pvVar21 = TlsGetValue(DVar43);
                if (pvVar21 == (LPVOID)0x0) {
                  pvVar21 = (LPVOID)FUN_140036a08(&local_3f8);
                  FUN_140fddf04(pvVar21);
                  TlsSetValue(DVar43,pvVar21);
                }
                local_4d0 = (undefined8 *)((longlong)pvVar21 + 0x10);
                local_4c8 = *(undefined8 *)((longlong)pvVar21 + 0x10);
                local_4c0 = *(longlong *)((longlong)pvVar21 + 0x20);
                local_4b8 = '\0';
                local_4b0 = *(undefined8 *)((longlong)pvVar21 + 0x28);
                *(undefined8 ***)((longlong)pvVar21 + 0x28) = &local_4d0;
                *(int *)((longlong)pvVar21 + 0x30) = *(int *)((longlong)pvVar21 + 0x30) + 1;
                if (((int)param_1[0xff] == 0) || ((longlong *)param_1[0xfe] == (longlong *)0x0)) {
LAB_14359bed5:
                  plVar55 = local_4a8;
                  iVar13 = *(int *)((longlong)param_1 + 0x3dc) + 1;
                  *(int *)((longlong)param_1 + 0x3dc) = iVar13;
                  if (0 < (int)local_4a8[0x11]) {
                    lVar45 = 0;
                    do {
                      *(int *)(*(longlong *)(local_4a8[0x10] + lVar45 * 8) + 400) = iVar13;
                      lVar45 = lVar45 + 1;
                    } while (lVar45 < (int)local_4a8[0x11]);
                  }
                  local_518 = (longlong *)0x0;
                  local_54c = 0;
                  if (local_4a8 != (longlong *)0x0) {
                    uVar51 = *(uint *)((longlong)local_4a8 + 0xc);
                    local_518 = (longlong *)(ulonglong)uVar51;
                    if ((int)uVar51 < DAT_14c9647dc) {
                      lVar45 = (ulonglong)((uVar51 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar51 >> 0x10) * 8);
                    }
                    else {
                      lVar45 = 0;
                    }
                    local_54c = *(uint *)(lVar45 + 0x10);
                    if (local_54c == 0) {
                      LOCK();
                      iVar13 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar51 = DAT_14c964868 + 1;
                      bVar58 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar13;
                      if (bVar58) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar51);
                      }
                      LOCK();
                      local_54c = *(uint *)(lVar45 + 0x10);
                      bVar58 = local_54c == 0;
                      if (bVar58) {
                        *(uint *)(lVar45 + 0x10) = uVar51;
                        local_54c = 0;
                      }
                      UNLOCK();
                      if (bVar58) {
                        local_54c = uVar51;
                      }
                    }
                  }
                  iVar13 = (int)param_1[0x7d] - *(int *)((longlong)param_1 + 0x414);
                  uVar51 = iVar13 + (int)uStack_470;
                  if (uVar51 == 0 || SCARRY4(iVar13,(int)uStack_470) != (int)uVar51 < 0) {
                    local_560 = 0;
                    uVar49 = 0;
                  }
                  else {
                    DVar43 = DAT_14c7585d0;
                    if (DAT_14c7585d0 == 0xffffffff) {
                      DVar43 = TlsAlloc();
                      DVar15 = 0xffffffff;
                      LOCK();
                      bVar58 = DAT_14c7585d0 != 0xffffffff;
                      DVar8 = DVar43;
                      if (bVar58) {
                        DVar15 = DAT_14c7585d0;
                        DVar8 = DAT_14c7585d0;
                      }
                      DAT_14c7585d0 = DVar8;
                      UNLOCK();
                      param_1 = local_588;
                      lVar40 = local_580;
                      if (bVar58) {
                        TlsFree(DVar43);
                        param_1 = local_588;
                        lVar40 = local_580;
                        DVar43 = DVar15;
                      }
                    }
                    pvVar21 = TlsGetValue(DVar43);
                    if (pvVar21 == (LPVOID)0x0) {
                      pvVar21 = (LPVOID)FUN_140036a08(&local_3f8);
                      FUN_140fddf04(pvVar21);
                      TlsSetValue(DVar43,pvVar21);
                    }
                    plVar24 = (longlong *)((longlong)pvVar21 + 0x10);
                    uVar49 = (ulonglong)uVar51;
                    puVar32 = (undefined4 *)
                              (*(longlong *)((longlong)pvVar21 + 0x10) + 0xfU & 0xfffffffffffffff0);
                    puVar22 = puVar32 + uVar49 * 8;
                    if (*(undefined4 **)((longlong)pvVar21 + 0x18) < puVar22) {
                      FUN_140023dd8(plVar24);
                      puVar32 = (undefined4 *)(*plVar24 + 0xfU & 0xfffffffffffffff0);
                      puVar22 = puVar32 + uVar49 * 8;
                    }
                    *plVar24 = (longlong)puVar22;
                    *puVar32 = 0;
                    *(undefined8 *)(puVar32 + 2) = 0;
                    *(undefined8 *)(puVar32 + 4) = 0;
                    *(undefined8 *)(puVar32 + 6) = 0;
                    DVar43 = DAT_14c7585d0;
                    local_528 = puVar32;
                    if (DAT_14c7585d0 == 0xffffffff) {
                      DVar43 = TlsAlloc();
                      DVar15 = 0xffffffff;
                      LOCK();
                      bVar58 = DAT_14c7585d0 != 0xffffffff;
                      DVar8 = DVar43;
                      if (bVar58) {
                        DVar15 = DAT_14c7585d0;
                        DVar8 = DAT_14c7585d0;
                      }
                      DAT_14c7585d0 = DVar8;
                      UNLOCK();
                      param_1 = local_588;
                      lVar40 = local_580;
                      if (bVar58) {
                        TlsFree(DVar43);
                        param_1 = local_588;
                        lVar40 = local_580;
                        DVar43 = DVar15;
                      }
                    }
                    pvVar21 = TlsGetValue(DVar43);
                    if (pvVar21 == (LPVOID)0x0) {
                      pvVar21 = (LPVOID)FUN_140036a08(&local_3f8);
                      FUN_140fddf04(pvVar21);
                      TlsSetValue(DVar43,pvVar21);
                    }
                    puVar1 = (ulonglong *)((longlong)pvVar21 + 0x10);
                    local_560 = *(longlong *)((longlong)pvVar21 + 0x10) + 0xfU & 0xfffffffffffffff0;
                    uVar56 = local_560 + uVar49 * 8;
                    if (*(ulonglong *)((longlong)pvVar21 + 0x18) < uVar56) {
                      FUN_140023dd8(puVar1);
                      local_560 = *puVar1 + 0xf & 0xfffffffffffffff0;
                      uVar56 = uVar49 * 8 + local_560;
                    }
                    *puVar1 = uVar56;
                    local_558 = 0;
                    if (*(longlong **)(param_1[0x35] + 0x58) == (longlong *)0x0) {
                      local_4f8 = 0;
                    }
                    else {
                      local_4f8 = (**(code **)(**(longlong **)(param_1[0x35] + 0x58) + 0x648))();
                    }
                    if ((longlong)(int)uStack_470 != 0) {
                      local_538 = local_478 + (int)uStack_470;
                      local_520 = plVar55 + 0x292;
                      local_500 = local_54c ^ (uint)local_518;
                      local_558 = 0;
                      plVar24 = local_478;
                      do {
                        plVar53 = (longlong *)*plVar24;
                        plVar25 = (longlong *)*plVar53;
                        if ((int)plVar55[0x28c] != *(int *)((longlong)plVar55 + 0x148c)) {
                          lVar45 = plVar53[1];
                          plVar35 = (longlong *)plVar55[0x293];
                          if ((longlong *)plVar55[0x293] == (longlong *)0x0) {
                            plVar35 = local_520;
                          }
                          iVar13 = *(int *)((longlong)plVar35 +
                                           (ulonglong)
                                           ((int)plVar55[0x294] - 1U &
                                           ((uint)((ulonglong)lVar45 >> 0x20) ^ (uint)lVar45)) * 4);
                          if (iVar13 != -1) {
                            do {
                              plVar35 = (longlong *)(plVar55[0x28b] + (longlong)iVar13 * 0x18);
                              if (*plVar35 == lVar45) {
                                if ((plVar35 != (longlong *)0x0) &&
                                   (local_568 = (longlong *)plVar35[1], local_568 != (longlong *)0x0
                                   )) {
                                  local_548 = (uint *)((ulonglong)local_548 & 0xffffffff00000000);
                                  goto LAB_14359cd80;
                                }
                                break;
                              }
                              iVar13 = (int)plVar35[2];
                            } while (iVar13 != -1);
                          }
                        }
                        cVar9 = (**(code **)(*param_1 + 0x428))(param_1,plVar25,plVar55);
                        if ((cVar9 != '\0') && (0 < *(int *)(lVar40 + 0x570))) {
                          lVar45 = 0x18;
                          lVar48 = 0;
LAB_14359cd2a:
                          lVar16 = *local_570;
                          uVar26 = (**(code **)(*plVar25 + 0x468))
                                             (plVar25,*(undefined8 *)(lVar16 + -0x10 + lVar45),
                                              *(undefined8 *)(lVar16 + -8 + lVar45),lVar16 + lVar45)
                          ;
                          if ((char)uVar26 == '\0') goto code_r0x00014359cd53;
                          local_548 = (uint *)CONCAT44(local_548._4_4_,
                                                       (int)CONCAT71((int7)((ulonglong)uVar26 >> 8),
                                                                     1));
                          local_568 = (longlong *)0x0;
LAB_14359cd80:
                          local_530 = plVar53;
                          if ((*(byte *)(plVar25 + 0xc) & 4) != 0) {
                            lVar40 = (**(code **)(*plVar25 + 0x488))();
                            iVar13 = *(int *)(local_580 + 0x570);
                            if (iVar13 < 1) {
                              bVar58 = false;
                            }
                            else {
                              lVar48 = 0;
                              lVar45 = 0;
                              bVar58 = false;
                              do {
                                plVar35 = *(longlong **)(*local_570 + lVar48);
                                lVar16 = plVar35[6];
                                plVar53 = (longlong *)plVar35[0x12];
                                bVar58 = (bool)(plVar53 == (longlong *)0x0 | bVar58);
                                if ((lVar16 == lVar40) ||
                                   ((lVar16 != 0 && (lVar40 == *(longlong *)(lVar16 + 0x3d0))))) {
LAB_14359cf20:
                                  if (plVar35 != (longlong *)0x0) goto LAB_14359cf29;
                                  break;
                                }
                                if (plVar53 != (longlong *)0x0) {
                                  cVar9 = (**(code **)(*plVar53 + 0x470))
                                                    (plVar53,plVar25,lVar40,plVar35[0x13]);
                                  if (cVar9 != '\0') goto LAB_14359cf20;
                                  iVar13 = *(int *)(local_580 + 0x570);
                                }
                                lVar45 = lVar45 + 1;
                                lVar48 = lVar48 + 0x48;
                              } while (lVar45 < iVar13);
                            }
                            param_1 = local_588;
                            lVar40 = local_580;
                            if ((((ulonglong)local_548 & 1) == 0 && !bVar58) &&
                               ((double)*(float *)((longlong)local_588 + 0xd4) <=
                                (double)local_588[0x60] - (double)local_568[0x10])) {
                              (**(code **)(*local_568 + 0x2b8))();
                              lVar40 = local_580;
                            }
                            goto LAB_14359d0a1;
                          }
                          plVar35 = plVar55;
                          if (DAT_14c7615f0 != 0) {
                            if ((int)plVar53[7] != *(int *)((longlong)plVar53 + 100)) {
                              plVar27 = plVar53 + 0xd;
                              if ((longlong *)plVar53[0xe] != (longlong *)0x0) {
                                plVar27 = (longlong *)plVar53[0xe];
                              }
                              iVar13 = *(int *)((longlong)plVar27 +
                                               (ulonglong)((int)plVar53[0xf] - 1U & local_500) * 4);
                              if (iVar13 != -1) {
                                lVar45 = plVar53[6];
                                do {
                                  lVar48 = (longlong)iVar13 * 0x10;
                                  if ((*(int *)(lVar45 + lVar48) == (int)local_518) &&
                                     (param_1 = local_588, lVar40 = local_580,
                                     *(uint *)(lVar45 + 4 + lVar48) == local_54c))
                                  goto LAB_14359d0a1;
                                  iVar13 = *(int *)(lVar48 + lVar45 + 8);
                                } while (iVar13 != -1);
                              }
                            }
                            if ((((local_568 != (longlong *)0x0) &&
                                 (1 < *(byte *)((longlong)plVar25 + 0x179))) &&
                                ((*(byte *)(local_568 + 6) & 0x84) == 0)) &&
                               ((*(byte *)((longlong)plVar25 + 0x179) != 3 ||
                                (*(int *)(local_580 + 0x570) < 1)))) {
                              (**(code **)(*local_568 + 0x318))();
                            }
                          }
LAB_14359cf29:
                          plVar27 = local_530;
                          plVar53 = local_568;
                          lVar40 = local_580;
                          param_1 = local_588;
                          if ((int)plVar25[0x32] != *(int *)((longlong)local_588 + 0x3dc)) {
                            *(int *)(plVar25 + 0x32) = *(int *)((longlong)local_588 + 0x3dc);
                            if ((char)local_548 == '\0') {
                              fVar60 = (float)(*(double *)(plVar35[0xb] + 0x300) -
                                              (double)local_568[0x11]);
                            }
                            else {
                              fVar60 = *(float *)(plVar35[0xb] + 0xd0);
                            }
                            if (*(int *)(local_580 + 0x570) < 1) {
                              fVar60 = 0.0;
                              iVar13 = 0;
                            }
                            else {
                              iVar13 = 0;
                              lVar45 = 0x18;
                              lVar48 = 0;
                              do {
                                plVar25 = (longlong *)*plVar27;
                                lVar16 = *(longlong *)(lVar40 + 0x568) + lVar45;
                                local_5d8 = *(undefined8 *)(lVar16 + -8);
                                local_5c0 = CONCAT71(local_5c0._1_7_,(char)local_4f8);
                                local_5d0 = plVar53;
                                local_5c8 = fVar60;
                                fVar59 = (float)(**(code **)(*plVar25 + 0x3d8))
                                                          (plVar25,*(longlong *)(lVar40 + 0x568) +
                                                                   lVar45,lVar16 + 0x18,
                                                           *(undefined8 *)(lVar16 + -0x10));
                                iVar12 = (int)ROUND(fVar59 * 65536.0 + fVar59 * 65536.0 + 0.5) >> 1;
                                if (iVar12 <= iVar13) {
                                  iVar12 = iVar13;
                                }
                                iVar13 = iVar12;
                                lVar48 = lVar48 + 1;
                                lVar45 = lVar45 + 0x48;
                              } while (lVar48 < *(int *)(lVar40 + 0x570));
                              fVar60 = (float)iVar13;
                            }
                            if (((char)local_548 == '\0') &&
                               (*(ushort *)((longlong)plVar53 + 0x192) != 0)) {
                              fVar60 = (float)*(ushort *)((longlong)plVar53 + 0x192) *
                                       fVar60 * _DAT_14c7615f8;
                              if (2.1474836e+09 <= fVar60) {
                                fVar60 = 2.1474836e+09;
                              }
                              if (fVar60 <= 0.0) {
                                fVar60 = 0.0;
                              }
                              iVar13 = (int)ROUND(fVar60 + fVar60 + 0.5) >> 1;
                            }
                            lVar45 = (longlong)(int)local_558;
                            local_528[lVar45 * 8] = iVar13;
                            *(longlong **)(local_528 + lVar45 * 8 + 2) = plVar27;
                            *(longlong **)(local_528 + lVar45 * 8 + 4) = plVar53;
                            *(undefined8 *)(local_528 + lVar45 * 8 + 6) = 0;
                            *(undefined4 **)(local_560 + lVar45 * 8) = local_528 + lVar45 * 8;
                            local_558 = (ulonglong)((int)local_558 + 1);
                            param_1 = local_588;
                          }
                        }
LAB_14359d0a1:
                        plVar24 = plVar24 + 1;
                      } while (plVar24 != local_538);
                    }
                    iVar13 = (int)plVar55[0x2a1];
                    if (iVar13 == 0) {
                      uVar56 = 1;
                      uVar49 = 0;
                      iVar30 = 0;
                      iVar12 = 0;
                    }
                    else {
                      puVar29 = (uint *)plVar55[0x2a0];
                      if ((uint *)plVar55[0x2a0] == (uint *)0x0) {
                        puVar29 = (uint *)(plVar55 + 0x29e);
                      }
                      uVar51 = *puVar29;
                      if (uVar51 == 0) {
                        iVar12 = iVar13 + 0x1e;
                        if (-1 < iVar13 + -1) {
                          iVar12 = iVar13 + -1;
                        }
                        uVar49 = 0;
                        uVar56 = (ulonglong)(uint)(iVar12 >> 5);
                        if (iVar12 >> 5 < 1) {
                          uVar56 = uVar49;
                        }
                        iVar30 = 0;
                        do {
                          if (uVar56 == uVar49) goto LAB_14359d4c0;
                          iVar30 = iVar30 + 0x20;
                          uVar51 = puVar29[uVar49 + 1];
                          uVar49 = uVar49 + 1;
                        } while (uVar51 == 0);
                      }
                      else {
                        uVar49 = 0;
                        iVar30 = 0;
                      }
                      uVar56 = (ulonglong)(-uVar51 & uVar51);
                      uVar37 = uVar56 * 2 + 1;
                      lVar45 = 0x3f;
                      if (uVar37 != 0) {
                        for (; uVar37 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                        }
                      }
                      iVar12 = (iVar30 - ((uint)lVar45 ^ 0x3f)) + 0x3e;
                      if (iVar13 <= iVar12) {
                        iVar12 = iVar13;
                      }
                    }
                    if (iVar12 < iVar13) {
                      local_558 = (ulonglong)(int)local_558;
                      uVar51 = 0xffffffff;
                      do {
                        if ((int)param_1[0x7d] != *(int *)((longlong)param_1 + 0x414)) {
                          lVar45 = *(longlong *)(plVar55[0x29c] + (longlong)iVar12 * 0x10);
                          plVar24 = (longlong *)param_1[0x84];
                          if ((longlong *)param_1[0x84] == (longlong *)0x0) {
                            plVar24 = local_4d8;
                          }
                          iVar13 = *(int *)((longlong)plVar24 +
                                           (ulonglong)
                                           ((int)param_1[0x85] - 1U &
                                           (int)lVar45 + (int)((ulonglong)lVar45 >> 0x20) * 0x17) *
                                           4);
                          if (iVar13 != -1) {
                            do {
                              plVar24 = (longlong *)(param_1[0x7c] + (longlong)iVar13 * 0x18);
                              if (*plVar24 == lVar45) goto LAB_14359d28f;
                              iVar13 = (int)plVar24[2];
                            } while (iVar13 != -1);
                          }
                        }
                        plVar24 = (longlong *)0x0;
LAB_14359d28f:
                        lVar45 = plVar24[1];
                        local_3f8.s.HighPart = 0;
                        uStack_3f0 = (undefined8 **)0x0;
                        local_3e8[0] = 0;
                        if ((longlong)*(int *)(lVar40 + 0x570) < 1) {
                          iVar13 = 0;
                        }
                        else {
                          fVar60 = *(float *)(plVar55[0xb] + 0xd0);
                          lVar48 = *local_570;
                          lVar16 = 0;
                          iVar13 = 0;
                          do {
                            dVar62 = *(double *)(lVar45 + 0x20) -
                                     *(double *)(lVar48 + 0x28 + lVar16);
                            dVar67 = *(double *)(lVar45 + 0x18) -
                                     *(double *)(lVar48 + 0x20 + lVar16);
                            dVar65 = *(double *)(lVar45 + 0x10) -
                                     *(double *)(lVar48 + 0x18 + lVar16);
                            fVar59 = (float)(dVar62 * dVar62 + dVar65 * dVar65 + dVar67 * dVar67);
                            if (dVar62 * *(double *)(lVar48 + 0x40 + lVar16) +
                                dVar65 * *(double *)(lVar48 + 0x30 + lVar16) +
                                dVar67 * *(double *)(lVar48 + 0x38 + lVar16) < 0.0) {
                              fVar68 = fVar60 * 0.2;
                              if (fVar59 <= 4e+06) {
                                bVar58 = fVar59 == 250000.0;
                                bVar57 = fVar59 < 250000.0;
                                goto LAB_14359d376;
                              }
                            }
                            else {
                              bVar58 = fVar59 == 9998244.0;
                              bVar57 = fVar59 < 9998244.0;
LAB_14359d376:
                              fVar68 = fVar60;
                              if (!bVar57 && !bVar58) {
                                fVar68 = fVar60 * 0.4;
                              }
                            }
                            fVar59 = (float)iVar13;
                            if ((float)iVar13 <= fVar68 * 65536.0) {
                              fVar59 = fVar68 * 65536.0;
                            }
                            iVar13 = (int)fVar59;
                            lVar16 = lVar16 + 0x48;
                          } while ((longlong)*(int *)(lVar40 + 0x570) * 0x48 != lVar16);
                        }
                        local_528[local_558 * 8] = iVar13;
                        *(ulonglong *)(local_528 + local_558 * 8 + 1) =
                             (ulonglong)local_3f8.s.LowPart;
                        *(ulonglong *)((longlong)(local_528 + local_558 * 8 + 1) + 8) = 0;
                        local_528[local_558 * 8 + 5] = 0;
                        *(longlong *)(local_528 + local_558 * 8 + 6) = lVar45;
                        *(undefined4 **)(local_560 + local_558 * 8) = local_528 + local_558 * 8;
                        local_558 = local_558 + 1;
                        uVar51 = uVar51 & ~(uint)uVar56;
                        puVar29 = (uint *)plVar55[0x2a0];
                        if ((uint *)plVar55[0x2a0] == (uint *)0x0) {
                          puVar29 = (uint *)(plVar55 + 0x29e);
                        }
                        iVar13 = (int)plVar55[0x2a1];
                        iVar12 = (int)uVar49;
                        lVar45 = (longlong)iVar12;
                        uVar14 = puVar29[lVar45] & uVar51;
                        if (uVar14 == 0) {
                          iVar34 = iVar13 + 0x1e;
                          if (-1 < iVar13 + -1) {
                            iVar34 = iVar13 + -1;
                          }
                          iVar34 = iVar34 >> 5;
                          iVar44 = iVar34;
                          if (iVar34 < iVar12) {
                            iVar44 = iVar12;
                          }
                          if (iVar34 <= iVar12) break;
                          lVar48 = 0;
                          while( true ) {
                            iVar30 = iVar30 + 0x20;
                            uVar14 = puVar29[lVar45 + lVar48 + 1];
                            if (uVar14 != 0) break;
                            lVar48 = lVar48 + 1;
                            if (iVar44 - lVar45 == lVar48) goto LAB_14359d4c0;
                          }
                          uVar49 = (ulonglong)(iVar12 + (int)lVar48 + 1);
                          uVar51 = 0xffffffff;
                        }
                        uVar56 = (ulonglong)(-uVar14 & uVar14);
                        uVar37 = uVar56 * 2 + 1;
                        lVar45 = 0x3f;
                        if (uVar37 != 0) {
                          for (; uVar37 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                          }
                        }
                        iVar12 = (iVar30 - ((uint)lVar45 ^ 0x3f)) + 0x3e;
                      } while (iVar12 < iVar13);
                    }
LAB_14359d4c0:
                    uVar49 = local_558;
                    iVar13 = (int)local_558;
                    if (1 < iVar13) {
                      memset(local_3e8,0,0x2f0);
                      local_3f8.s.LowPart = (DWORD)local_560;
                      local_3f8.s.HighPart = (LONG)(local_560 >> 0x20);
                      uStack_3f0 = (undefined8 **)(local_560 + (uVar49 & 0xffffffff) * 8 + -8);
                      fVar60 = logf((float)iVar13);
                      local_3e8[0] = (uint)(longlong)(fVar60 + fVar60);
                      pLVar28 = &local_3f8;
                      do {
                        puVar33 = (undefined8 *)pLVar28->QuadPart;
                        puVar42 = (undefined8 *)pLVar28[1].QuadPart;
                        DVar43 = pLVar28[2].s.LowPart;
                        uVar56 = (ulonglong)
                                 ((int)((ulonglong)((longlong)puVar42 - (longlong)puVar33) >> 3) + 1
                                 );
                        puVar36 = puVar33;
                        puVar38 = puVar33;
                        puVar47 = puVar42;
                        if (DVar43 != 0) {
LAB_14359d557:
                          if (8 < (int)(uint)uVar56) {
                            uVar51 = (uint)uVar56 >> 1;
                            uVar26 = puVar36[uVar51];
                            puVar36[uVar51] = *puVar36;
                            *puVar36 = uVar26;
                            puVar46 = puVar42 + 1;
                            puVar33 = puVar36;
                            do {
                              puVar6 = puVar33 + 1;
                              puVar7 = puVar33 + 1;
                              do {
                                puVar33 = puVar7;
                                puVar41 = puVar6;
                                if (puVar42 < puVar33) break;
                                puVar6 = puVar41 + 1;
                                puVar7 = puVar33 + 1;
                              } while (*(int *)*puVar36 <= *(int *)*puVar33);
                              puVar6 = puVar46 + -2;
                              do {
                                puVar7 = puVar46;
                                puVar54 = puVar6;
                                puVar46 = puVar7 + -1;
                                if (puVar46 <= puVar36) break;
                                puVar6 = puVar54 + -1;
                              } while (*(int *)*puVar46 <= *(int *)*puVar36);
                              if (puVar46 < puVar33) goto LAB_14359d5ea;
                              uVar26 = *puVar33;
                              *puVar33 = *puVar46;
                              *puVar46 = uVar26;
                            } while( true );
                          }
                          if (puVar36 < puVar42) {
                            do {
                              puVar33 = puVar36;
                              if (puVar36 + 1 <= puVar42) {
                                iVar13 = *(int *)*puVar36;
                                puVar38 = puVar36 + 1;
                                do {
                                  if (*(int *)*puVar38 < iVar13) {
                                    puVar33 = puVar38;
                                    iVar13 = *(int *)*puVar38;
                                  }
                                  puVar38 = puVar38 + 1;
                                } while (puVar38 <= puVar42);
                              }
                              uVar26 = *puVar33;
                              *puVar33 = *puVar42;
                              *puVar42 = uVar26;
                              puVar42 = puVar42 + -1;
                            } while (puVar36 < puVar42);
                          }
                          goto LAB_14359d815;
                        }
LAB_14359d68c:
                        iVar13 = (int)uVar56;
                        if (iVar13 != 0) {
                          iVar12 = (iVar13 - (iVar13 + -2 >> 0x1f)) + -2 >> 1;
                          iVar30 = iVar12;
joined_r0x00014359d6af:
                          do {
                            iVar34 = iVar12 * 2 + 1;
                            if (iVar34 < iVar13) {
                              iVar44 = iVar12 * 2 + 2;
                              if ((iVar44 < iVar13) &&
                                 (*(int *)puVar33[iVar44] <= *(int *)puVar33[iVar34])) {
                                iVar34 = iVar44;
                              }
                              piVar4 = (int *)puVar33[iVar12];
                              param_1 = local_588;
                              if (*(int *)puVar33[iVar34] < *piVar4) {
                                puVar33[iVar12] = (int *)puVar33[iVar34];
                                puVar33[iVar34] = piVar4;
                                iVar12 = iVar34;
                                goto joined_r0x00014359d6af;
                              }
                            }
                            bVar58 = iVar30 != 0;
                            iVar12 = iVar30 + -1;
                            iVar30 = iVar12;
                          } while (bVar58);
                          if (1 < iVar13) {
                            uVar26 = *puVar33;
                            *puVar33 = puVar33[uVar56 - 1];
                            puVar33[uVar56 - 1] = uVar26;
                            if (iVar13 != 2) {
                              do {
                                uVar37 = uVar56 - 1;
                                iVar13 = 0;
                                iVar30 = 1;
                                iVar12 = 0;
                                do {
                                  iVar13 = iVar13 + 2;
                                  iVar34 = iVar30;
                                  if (((longlong)iVar13 < (longlong)uVar37) &&
                                     (*(int *)puVar33[iVar13] <= *(int *)puVar33[iVar30])) {
                                    iVar34 = iVar13;
                                  }
                                  piVar4 = (int *)puVar33[iVar12];
                                  if (*piVar4 <= *(int *)puVar33[iVar34]) break;
                                  puVar33[iVar12] = (int *)puVar33[iVar34];
                                  puVar33[iVar34] = piVar4;
                                  iVar13 = iVar34 * 2;
                                  iVar30 = iVar34 * 2 + 1;
                                  iVar12 = iVar34;
                                } while ((longlong)iVar30 < (longlong)uVar37);
                                uVar26 = *puVar33;
                                *puVar33 = puVar33[uVar56 - 2];
                                puVar33[uVar56 - 2] = uVar26;
                                uVar56 = uVar37;
                              } while (2 < uVar37);
                            }
                          }
                        }
LAB_14359d815:
                        pLVar28 = pLVar28 + -3;
                      } while (&local_3f8 <= pLVar28);
                    }
                  }
                  lVar45 = param_1[0x51];
                  if ((lVar45 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(lVar45);
                  }
                  uVar51 = (uint)uVar49;
                  plVar55 = (longlong *)(longlong)(int)uVar51;
                  FUN_1435a82a8(lVar45,DAT_14caf3188,plVar55);
                  lVar45 = param_1[0x51];
                  if ((lVar45 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(lVar45);
                  }
                  FUN_1435a82a8(lVar45,DAT_14caf3190);
                  plVar24 = local_4a8;
                  iVar13 = (**(code **)(*local_4a8 + 0x308))(local_4a8,0);
                  if (iVar13 == 0) {
                    DAT_14caf2148 = DAT_14caf2148 + 1;
                    uVar51 = 0;
                  }
                  else {
                    local_568 = plVar24;
                    local_3d8 = 0;
                    local_3d0 = 0;
                    local_3f8.s.LowPart = 0;
                    local_3f8.s.HighPart = 0;
                    uStack_3f0._0_4_ = 0;
                    uStack_3f0._4_4_ = 0;
                    local_3cc = 0xffffffff00000080;
                    local_3c4 = 0;
                    local_3b8 = (undefined1 *)0x0;
                    local_3b0 = 0;
                    if (0 < (int)uVar51) {
                      local_530 = plVar24 + 0x2d5;
                      local_518 = plVar24 + 0x29c;
                      plVar53 = (longlong *)0x0;
                      local_558 = uVar49;
                      local_520 = plVar55;
                      do {
                        lVar40 = *(longlong *)(local_560 + (longlong)plVar53 * 8);
                        puVar42 = *(undefined8 **)(lVar40 + 8);
                        if ((puVar42 == (undefined8 *)0x0) && (*(longlong *)(lVar40 + 0x18) != 0)) {
                          lVar40 = *(longlong *)(*(longlong *)(lVar40 + 0x18) + 0x40);
                          if (lVar40 == 0) {
LAB_14359c3d8:
                            FUN_1435990e4();
                            if ((plVar24[0xb] == 0) || (*(longlong *)(plVar24[0xb] + 0x840) == 0)) {
                              if ((longlong *)plVar24[0x295] == (longlong *)0x0) {
                                FUN_140326250(local_518,
                                              *(longlong *)
                                               (*(longlong *)(local_560 + (longlong)plVar53 * 8) +
                                               0x18) + 0x28);
                              }
                              else {
                                (**(code **)(*(longlong *)plVar24[0x295] + 0x2c8))();
                              }
                            }
                          }
                          else if ((int)plVar24[0x2cf] != *(int *)((longlong)plVar24 + 0x16a4)) {
                            uVar51 = (uint)((ulonglong)lVar40 >> 0x10);
                            uVar14 = (uint)lVar40 & 0xffff;
                            plVar25 = (longlong *)plVar24[0x2d6];
                            if ((longlong *)plVar24[0x2d6] == (longlong *)0x0) {
                              plVar25 = local_530;
                            }
                            iVar13 = *(int *)((longlong)plVar25 +
                                             (ulonglong)
                                             ((int)plVar24[0x2d7] - 1U &
                                             (int)((ulonglong)lVar40 >> 0x20) +
                                             ((uint)lVar40 << 0x10 | uVar14) +
                                             (uVar51 << 0x13 | uVar51 & 0xffff) + (uVar14 >> 4)) * 4
                                             );
                            if (iVar13 != -1) {
                              do {
                                if (*(longlong *)(plVar24[0x2ce] + (longlong)iVar13 * 0x10) ==
                                    lVar40) goto LAB_14359c3d8;
                                iVar13 = *(int *)((longlong)iVar13 * 0x10 + plVar24[0x2ce] + 8);
                              } while (iVar13 != -1);
                            }
                          }
                        }
                        else {
                          plVar25 = *(longlong **)(lVar40 + 0x10);
                          if ((plVar25 == (longlong *)0x0) || (plVar25[0xd] != 0)) {
                            plVar35 = (longlong *)*puVar42;
                            local_45d = '\0';
                            cVar9 = (**(code **)(*param_1 + 0x428))(param_1,plVar35);
                            local_548 = (uint *)CONCAT71(local_548._1_7_,cVar9);
                            if (cVar9 == '\0') {
                              if (((puVar42 != (undefined8 *)0x0 && plVar25 != (longlong *)0x0) &&
                                  ((*(byte *)(puVar42 + 0x1a) & 8) != 0)) &&
                                 ((*(byte *)((longlong)plVar35 + 0x61) & 1) == 0)) {
                                local_45d = '\x01';
                              }
LAB_14359c749:
                              if (local_45d != '\0') goto LAB_14359c7a0;
                              if (plVar25 == (longlong *)0x0) {
                                if (*(uint *)((longlong)puVar42 + 0xd4) < *(uint *)(plVar24 + 0x41))
                                goto LAB_14359cb81;
                                goto LAB_14359c7a0;
                              }
                              dVar62 = (double)param_1[0x60] - (double)plVar25[0x10];
LAB_14359c768:
                              if ((dVar62 < (double)*(float *)((longlong)param_1 + 0xd4)) ||
                                 (*(uint *)(plVar24 + 0x41) <= *(uint *)((longlong)puVar42 + 0xd4)))
                              goto LAB_14359c7a0;
                            }
                            else {
                              *(byte *)(puVar42 + 0x1a) = *(byte *)(puVar42 + 0x1a) & 0xf7;
                              if ((*(byte *)((longlong)plVar35 + 0x61) & 1) != 0)
                              goto LAB_14359c749;
                              if ((plVar25 == (longlong *)0x0) ||
                                 (dVar62 = (double)param_1[0x60] - (double)plVar25[0x10],
                                 1.0 < dVar62)) {
                                if (((*(byte *)((longlong)plVar35 + 0x61) & 0x10) == 0) ||
                                   (((*(byte *)(plVar35 + 0xc) & 8) != 0 ||
                                    (plVar55 = (longlong *)plVar35[0x2d], plVar55 == (longlong *)0x0
                                    )))) {
                                  if (0 < *(int *)(local_580 + 0x570)) {
                                    lVar40 = 0x18;
                                    lVar45 = 0;
                                    do {
                                      lVar48 = *local_570;
                                      cVar9 = (**(code **)(*plVar35 + 0x468))
                                                        (plVar35,*(undefined8 *)
                                                                  (lVar48 + -0x10 + lVar40),
                                                         *(undefined8 *)(lVar48 + -8 + lVar40),
                                                         lVar48 + lVar40);
                                      if (cVar9 != '\0') {
                                        local_45d = '\x01';
                                        break;
                                      }
                                      lVar45 = lVar45 + 1;
                                      lVar40 = lVar40 + 0x48;
                                    } while (lVar45 < *(int *)(local_580 + 0x570));
                                  }
                                }
                                else {
                                  if ((uint)uStack_3f0 != local_3c4) {
                                    puVar23 = local_3b8;
                                    if (local_3b8 == (undefined1 *)0x0) {
                                      puVar23 = local_3c0;
                                    }
                                    iVar13 = *(int *)(puVar23 +
                                                     (ulonglong)
                                                     (local_3b0 - 1U &
                                                     *(uint *)((longlong)plVar55 + 0xc)) * 4);
                                    if (iVar13 != -1) {
                                      do {
                                        lVar40 = CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart)
                                                 + (longlong)iVar13 * 0x10;
                                        if (*(uint *)(CONCAT44(local_3f8.s.HighPart,
                                                               local_3f8.s.LowPart) +
                                                     (longlong)iVar13 * 0x10) ==
                                            *(uint *)((longlong)plVar55 + 0xc)) {
                                          if (lVar40 != 0) {
                                            local_45d = *(char *)(lVar40 + 4);
                                            goto LAB_14359c586;
                                          }
                                          break;
                                        }
                                        iVar13 = *(int *)(lVar40 + 8);
                                      } while (iVar13 != -1);
                                    }
                                  }
                                  if (0 < *(int *)(local_580 + 0x570)) {
                                    lVar40 = 0x18;
                                    lVar45 = 0;
                                    do {
                                      lVar48 = *local_570;
                                      cVar9 = (**(code **)(*plVar55 + 0x468))
                                                        (plVar55,*(undefined8 *)
                                                                  (lVar48 + -0x10 + lVar40),
                                                         *(undefined8 *)(lVar48 + -8 + lVar40),
                                                         lVar48 + lVar40);
                                      if (cVar9 != '\0') {
                                        local_45d = '\x01';
                                        break;
                                      }
                                      lVar45 = lVar45 + 1;
                                      lVar40 = lVar40 + 0x48;
                                    } while (lVar45 < *(int *)(local_580 + 0x570));
                                  }
                                  local_464 = *(undefined4 *)((longlong)plVar55 + 0xc);
                                  local_458.QuadPart = (LONGLONG)&local_464;
                                  puStack_450 = (uint *)&local_45d;
                                  FUN_14078dde4(&local_3f8,auStack_45c,&local_458,0);
                                  param_1 = local_588;
                                }
LAB_14359c586:
                                plVar24 = local_568;
                                plVar55 = local_520;
                                if ((int)plVar35[0x38] != 0) {
                                  uVar51 = *(uint *)((longlong)plVar35 + 0xc);
                                  if ((uint)uStack_3f0 != local_3c4) {
                                    puVar23 = local_3b8;
                                    if (local_3b8 == (undefined1 *)0x0) {
                                      puVar23 = local_3c0;
                                    }
                                    iVar13 = *(int *)(puVar23 +
                                                     (ulonglong)(local_3b0 - 1U & uVar51) * 4);
                                    if (iVar13 != -1) {
                                      do {
                                        lVar40 = CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart)
                                                 + (longlong)iVar13 * 0x10;
                                        if (*(uint *)(CONCAT44(local_3f8.s.HighPart,
                                                               local_3f8.s.LowPart) +
                                                     (longlong)iVar13 * 0x10) == uVar51) {
                                          cVar9 = local_45d;
                                          if (lVar40 != 0) goto LAB_14359c73e;
                                          break;
                                        }
                                        iVar13 = *(int *)(lVar40 + 8);
                                      } while (iVar13 != -1);
                                    }
                                  }
                                  local_528 = (undefined4 *)CONCAT71(local_528._1_7_,local_45d);
                                  FUN_14078dfac(&local_3f8,&local_458);
                                  puVar29 = puStack_450;
                                  *puStack_450 = uVar51;
                                  *(undefined1 *)(puVar29 + 1) = 0;
                                  puVar29[2] = 0xffffffff;
                                  uVar5 = local_458.s.LowPart;
                                  local_5d8 = 0;
                                  cVar9 = FUN_14078df14(&local_3f8,uVar51,puVar29);
                                  if (cVar9 == '\0') {
                                    uVar14 = (uint)uStack_3f0 - local_3c4;
                                    iVar13 = (int)&DAT_00000001;
                                    if (3 < uVar14) {
                                      uVar49 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                                      lVar40 = 0x3f;
                                      if (uVar49 != 0) {
                                        for (; uVar49 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                                        }
                                      }
                                      iVar13 = 1 << ((byte)lVar40 & 0x1f);
                                    }
                                    if (((int)uVar14 < 1) || (iVar13 <= local_3b0)) {
                                      uVar51 = local_3b0 - 1U & uVar51;
                                      puVar29[3] = uVar51;
                                      puVar23 = local_3b8;
                                      if (local_3b8 == (undefined1 *)0x0) {
                                        puVar23 = local_3c0;
                                      }
                                      puVar29[2] = *(uint *)(puVar23 +
                                                            ((longlong)local_3b0 - 1U &
                                                            (longlong)(int)uVar51) * 4);
                                      puVar23 = local_3b8;
                                      if (local_3b8 == (undefined1 *)0x0) {
                                        puVar23 = local_3c0;
                                      }
                                      *(undefined4 *)
                                       (puVar23 +
                                       ((longlong)local_3b0 - 1U & (longlong)(int)uVar51) * 4) =
                                           uVar5;
                                    }
                                    else {
                                      local_3b0 = iVar13;
                                      FUN_14078e188(&local_3f8);
                                    }
                                  }
                                  lVar40 = CONCAT44(local_3f8.s.HighPart,local_3f8.s.LowPart) +
                                           (longlong)(int)uVar5 * 0x10;
                                  param_1 = local_588;
                                  uVar49 = local_558;
                                  cVar9 = (char)local_528;
LAB_14359c73e:
                                  *(char *)(lVar40 + 4) = cVar9;
                                  plVar24 = local_568;
                                  plVar55 = local_520;
                                }
                                goto LAB_14359c749;
                              }
                              if (local_45d == '\0') goto LAB_14359c768;
LAB_14359c7a0:
                              cVar9 = (char)param_1[0x11d];
                              if ((cVar9 == '\0') && (0.0 < DAT_14c7615f4)) {
                                QueryPerformanceCounter(&local_458);
                                cVar9 = (double)param_1[0x11b] <=
                                        ((double)local_458.QuadPart * DAT_14c83f420 + 16777216.0) -
                                        (double)param_1[0x11c];
                                *(char *)(param_1 + 0x11d) = cVar9;
                              }
                              if ((plVar25 != (longlong *)0x0) && (cVar9 != '\0')) {
                                if ((double)param_1[0x60] < (double)plVar25[0x33]) {
                                  *(short *)((longlong)plVar25 + 0x192) =
                                       *(short *)((longlong)plVar25 + 0x192) + 1;
                                  *(byte *)(puVar42 + 0x1a) = *(byte *)(puVar42 + 0x1a) | 1;
                                  goto LAB_14359cb81;
                                }
                                *(undefined2 *)((longlong)plVar25 + 0x192) = 0;
                              }
                              bVar10 = *(byte *)(puVar42 + 0x1a);
                              if ((bVar10 & 4) != 0) {
                                if ((plVar35 == (longlong *)0x0) || ((char)plVar35[0xd] != '\x03'))
                                {
                                  local_538 = (longlong *)0x0;
                                }
                                else {
                                  FUN_1478c0b8c(plVar35);
                                  local_538 = plVar35;
                                }
                              }
                              if (plVar25 == (longlong *)0x0) {
                                cVar9 = FUN_14105d97a(param_1[0x37],plVar35[2]);
                                bVar58 = true;
                                if (cVar9 != '\0') {
                                  lVar40 = param_1[0x37];
                                  cVar9 = FUN_1449e2a3e(plVar35);
                                  plVar24 = plVar35;
                                  if (cVar9 == '\0') {
                                    plVar24 = (longlong *)FUN_144938c96(plVar35,plVar35);
                                  }
                                  cVar9 = FUN_14105d97a(lVar40,plVar24);
                                  if (cVar9 != '\0') {
                                    if ((char)local_548 == '\0') {
                                      if (*(float *)(plVar35 + 0x33) <= 1.0 &&
                                          *(float *)(plVar35 + 0x33) != 1.0) {
                                        dVar62 = *(double *)(local_588[0x35] + 0x6d0);
                                        uVar51 = rand();
                                        puVar42[2] = (double)(((float)(uVar51 & 0x7fff) / 32767.0) *
                                                             0.2) + dVar62;
                                      }
                                    }
                                    else {
                                      if (DAT_14c87ead8 == '\0') {
                                        FUN_140024d3a(&DAT_14c87eb00);
                                        DAT_14c87ead8 = '\x01';
                                      }
                                      local_458.s.HighPart = 0;
                                      local_458.s.LowPart = DAT_14c892cd8;
                                      plVar25 = (longlong *)FUN_141364a4a(local_568,&local_458);
                                      if (plVar25 != (longlong *)0x0) {
                                        FUN_1434aa0b0(plVar25,plVar35);
                                        param_1 = local_588;
                                        goto LAB_14359c877;
                                      }
                                    }
                                  }
                                }
                                plVar25 = (longlong *)0x0;
                              }
                              else {
LAB_14359c877:
                                if (local_45d == '\x01') {
                                  uVar51 = *(int *)((longlong)param_1 + 0x814) * 0xbb38435 +
                                           0x3619636b;
                                  *(uint *)((longlong)param_1 + 0x814) = uVar51;
                                  plVar25[0x10] =
                                       (longlong)
                                       ((double)((float)(uVar51 >> 9 | 0x3f800000) + -1.0) * 0.5 +
                                       (double)param_1[0x60]);
                                }
                                if (*(int *)((longlong)plVar25 + 0x4c) < 0x1ff) {
                                  plVar24 = (longlong *)plVar25[5];
                                  if (*(code **)(*plVar24 + 0x308) == FUN_144b25b64) {
                                    if ((*(byte *)((longlong)plVar24 + 0xa4) & 4) == 0) {
                                      if ((char)plVar24[0x3bb] == '\x01') {
                                        bVar11 = FUN_1435aa440(plVar24 + 0x3af,
                                                               *(undefined8 *)(plVar24[0xb] + 0x300)
                                                              );
                                      }
                                      else {
                                        lVar40 = (longlong)(int)plVar24[0x40] + plVar24[0xd8];
                                        bVar11 = lVar40 == 0 ||
                                                 SCARRY8((longlong)(int)plVar24[0x40],plVar24[0xd8])
                                                 != lVar40 < 0;
                                      }
                                    }
                                    else {
                                      bVar11 = 1;
                                    }
                                    uVar51 = (uint)bVar11;
                                  }
                                  else {
                                    uVar51 = (**(code **)(*plVar24 + 0x308))(plVar24,0);
                                  }
                                  if (uVar51 == 0) goto LAB_14359ca75;
                                  lVar40 = FUN_1434ae400(plVar25);
                                  if (lVar40 != 0) {
                                    fVar59 = 1.0 / *(float *)(plVar35 + 0x33);
                                    fVar60 = 1.0 / *(float *)((longlong)plVar35 + 0x19c);
                                    if (fVar60 <= fVar59) {
                                      fVar60 = fVar59;
                                    }
                                    fVar68 = (float)(*(double *)(param_1[0x35] + 0x6d0) -
                                                    (double)puVar42[3]) * 0.7;
                                    if (fVar60 <= fVar68) {
                                      fVar68 = fVar60;
                                    }
                                    if (fVar68 <= fVar59) {
                                      fVar68 = fVar59;
                                    }
                                    *(float *)(puVar42 + 4) = fVar68;
                                    puVar42[3] = *(undefined8 *)(param_1[0x35] + 0x6d0);
                                  }
                                  local_468 = local_468 + 1;
                                }
                                else {
LAB_14359ca75:
                                  (**(code **)(*plVar35 + 0x578))(plVar35);
                                }
                                iVar13 = (**(code **)(*local_568 + 0x308))(local_568,0);
                                bVar58 = true;
                                if (iVar13 == 0) {
                                  DAT_14caf2148 = DAT_14caf2148 + 1;
                                  bVar58 = false;
                                  local_54c = (uint)plVar53;
                                }
                              }
                              lVar40 = local_580;
                              if (((bVar10 & 4) != 0) && (local_538 != (longlong *)0x0)) {
                                FUN_1478c0b8c(local_538);
                              }
                              param_1 = local_588;
                              uVar51 = local_54c;
                              if (!bVar58) goto LAB_14359d87b;
                              plVar24 = local_568;
                              if ((plVar25 == (longlong *)0x0) ||
                                 ((*(byte *)((longlong)plVar35 + 0x61) & 1) == 0))
                              goto LAB_14359cb81;
                            }
                            if (((char)local_548 == '\0') ||
                               (cVar9 = FUN_1449e2a3e(plVar35), cVar9 == '\0')) {
                              plVar27 = plVar25;
                              FUN_1417c98bc(plVar35,plVar25);
                              uVar56 = CONCAT71((int7)((ulonglong)plVar27 >> 8),
                                                *(undefined1 *)((longlong)plVar35 + 0x61)) &
                                       0xffffffffffffff01;
                              (**(code **)(*plVar25 + 0x2b8))
                                        (plVar25,CONCAT71((int7)(uVar56 >> 8),(char)uVar56 + '\x03')
                                        );
                            }
                          }
                        }
LAB_14359cb81:
                        plVar53 = (longlong *)((longlong)plVar53 + 1);
                      } while (plVar53 != plVar55);
                      lVar40 = local_580;
                      uVar51 = (uint)uVar49;
LAB_14359d87b:
                      local_3b0 = 0;
                      if (local_3b8 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    FUN_140957b56(&local_3f8);
                  }
                  if ((int)uVar51 < (int)uVar49) {
                    local_568 = local_4a8;
                    lVar45 = (longlong)(int)uVar51;
                    do {
                      lVar48 = *(longlong *)(local_560 + lVar45 * 8);
                      puVar42 = *(undefined8 **)(lVar48 + 8);
                      if (puVar42 != (undefined8 *)0x0) {
                        plVar55 = (longlong *)*puVar42;
                        lVar48 = *(longlong *)(lVar48 + 0x10);
                        if ((lVar48 == 0) ||
                           (1.0 < (double)param_1[0x60] - *(double *)(lVar48 + 0x80))) {
                          if (0 < *(int *)(lVar40 + 0x570)) {
                            lVar17 = 0x18;
                            lVar16 = 0;
                            do {
                              cVar9 = (**(code **)(*plVar55 + 0x468))
                                                (plVar55,*(undefined8 *)
                                                          (*local_570 + -0x10 + lVar17));
                              if (cVar9 != '\0') {
                                pbVar3 = (byte *)(*(longlong *)
                                                   (*(longlong *)(local_560 + lVar45 * 8) + 8) +
                                                 0xd0);
                                *pbVar3 = *pbVar3 | 1;
                                if (lVar48 != 0) {
                                  uVar51 = *(int *)((longlong)param_1 + 0x814) * 0xbb38435 +
                                           0x3619636b;
                                  *(uint *)((longlong)param_1 + 0x814) = uVar51;
                                  *(double *)(lVar48 + 0x80) =
                                       (double)((float)(uVar51 >> 9 | 0x3f800000) + -1.0) * 0.5 +
                                       (double)param_1[0x60];
                                }
                                break;
                              }
                              lVar16 = lVar16 + 1;
                              lVar17 = lVar17 + 0x48;
                            } while (lVar16 < *(int *)(lVar40 + 0x570));
                          }
                        }
                        else {
                          *(byte *)(puVar42 + 0x1a) = *(byte *)(puVar42 + 0x1a) | 1;
                        }
                        lVar48 = *(longlong *)(*(longlong *)(local_560 + lVar45 * 8) + 8);
                        if (*(uint *)(local_568 + 0x41) <= *(uint *)(lVar48 + 0xd4)) {
                          *(int *)(lVar48 + 0xd4) = (int)param_1[0xa4] + 1;
                        }
                      }
                      lVar45 = lVar45 + 1;
                    } while ((int)uVar49 != (int)lVar45);
                  }
                }
                else {
                  cVar9 = (**(code **)(*(longlong *)param_1[0xfe] + 0x30))();
                  if (cVar9 == '\0') goto LAB_14359bed5;
                  local_3f8.s.LowPart = (DWORD)local_50c;
                  uStack_3f0._0_4_ = (uint)local_4a8;
                  uStack_3f0._4_4_ = (uint)((ulonglong)local_4a8 >> 0x20);
                  local_3e8[0] = CONCAT31(local_3e8[0]._1_3_,local_571);
                  if ((int)param_1[0xff] == 0) {
                    plVar55 = (longlong *)0x0;
                  }
                  else {
                    plVar55 = (longlong *)param_1[0xfe];
                  }
                  (**(code **)(*plVar55 + 0x58))(plVar55,&local_3f8);
                }
                lVar45 = local_4e8;
                if (local_4b8 == '\0') {
                  local_4b8 = '\x01';
                  *(int *)(local_4d0 + 4) = *(int *)(local_4d0 + 4) + -1;
                  if (local_4c0 != local_4d0[2]) {
                    FUN_14004673c();
                  }
                  *local_4d0 = local_4c8;
                  local_4d0[3] = local_4b0;
                  local_4c8 = 0;
                }
                *(undefined4 *)(lVar40 + 0x570) = 0;
                if (*(int *)(lVar40 + 0x574) < 0) {
                  FUN_147be006c(local_570);
                }
                plVar55 = local_4a8;
                *(int *)(local_4a8 + 0x41) = (int)param_1[0xa4];
                FUN_14358eff0(local_4a8,local_4fc < DAT_14caf2148);
                if (local_4b8 == '\0') {
                  local_4b8 = '\x01';
                  *(int *)(local_4d0 + 4) = *(int *)(local_4d0 + 4) + -1;
                  if (local_4c0 != local_4d0[2]) {
                    FUN_14004673c();
                  }
                  *local_4d0 = local_4c8;
                  local_4d0[3] = local_4b0;
                }
              }
            }
            else {
              if (0 < (longlong)(int)uStack_470) {
                lVar48 = 0;
                do {
                  plVar24 = (longlong *)local_478[lVar48];
                  if (((*plVar24 != 0) && ((*(byte *)(plVar24 + 0x1a) & 1) == 0)) &&
                     ((int)plVar55[0x28c] != *(int *)((longlong)plVar55 + 0x148c))) {
                    lVar16 = plVar24[1];
                    plVar53 = (longlong *)plVar55[0x293];
                    if ((longlong *)plVar55[0x293] == (longlong *)0x0) {
                      plVar53 = plVar55 + 0x292;
                    }
                    iVar13 = *(int *)((longlong)plVar53 +
                                     (ulonglong)
                                     ((int)plVar55[0x294] - 1U &
                                     ((uint)((ulonglong)lVar16 >> 0x20) ^ (uint)lVar16)) * 4);
                    if (iVar13 != -1) {
                      do {
                        plVar53 = (longlong *)(plVar55[0x28b] + (longlong)iVar13 * 0x18);
                        if (*plVar53 == lVar16) {
                          if (((plVar53 != (longlong *)0x0) && (plVar53[1] != 0)) &&
                             (pdVar2 = (double *)(plVar53[1] + 0x88),
                             *pdVar2 <= (double)plVar24[5] && (double)plVar24[5] != *pdVar2)) {
                            *(byte *)(plVar24 + 0x1a) = *(byte *)(plVar24 + 0x1a) | 1;
                          }
                          break;
                        }
                        iVar13 = (int)plVar53[2];
                      } while (iVar13 != -1);
                    }
                  }
                  lVar48 = lVar48 + 1;
                } while (lVar48 != (int)uStack_470);
              }
              *(undefined1 *)((longlong)plVar55 + 0x271) = 0;
            }
            if (*(char *)((longlong)plVar55 + 0x1c9e) == '\x01') {
              FUN_147be009c(&local_448,&local_3f8);
            }
            lVar45 = lVar45 + 1;
          } while (lVar45 < (int)param_1[0x20]);
        }
        if (((int)param_1[0xfd] != 0) && ((longlong *)param_1[0xfc] != (longlong *)0x0)) {
          cVar9 = (**(code **)(*(longlong *)param_1[0xfc] + 0x30))();
          if (cVar9 != '\0') {
            local_3f8.s.HighPart = 0;
            uStack_3f0._0_4_ = 0;
            uStack_3f0._4_4_ = 0;
            local_3e8[1] = 0;
            local_3f8._0_4_ = local_50c;
            local_3e8[0] = (uint)local_571;
            uStack_3f0 = (undefined8 **)0x0;
            if (((int)param_1[0xfd] != 0) &&
               (plVar55 = (longlong *)param_1[0xfc], uStack_3f0 = (undefined8 **)0x0,
               plVar55 != (longlong *)0x0)) {
              (**(code **)(*plVar55 + 0x60))(plVar55,&local_3f8,&local_468,&local_478);
            }
          }
        }
        if ((0 < local_53c) && (local_53c < (int)param_1[0x20])) {
          iVar13 = local_53c + 1;
          do {
            plVar55 = (longlong *)param_1[0x1f];
            lVar40 = *plVar55;
            iVar12 = 1;
            if ((int)param_1[0x20] != 1) {
              memmove(plVar55,plVar55 + 1,(longlong)((int)param_1[0x20] + -1) << 3);
              iVar12 = (int)param_1[0x20];
            }
            *(int *)(param_1 + 0x20) = iVar12 + -1;
            FUN_147be0588(local_508);
            if ((lVar40 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar40);
            }
            iVar12 = (int)param_1[0x20];
            *(uint *)(param_1 + 0x20) = iVar12 + 1U;
            if (*(uint *)((longlong)param_1 + 0x104) < iVar12 + 1U) {
              FUN_1463ed3d8(local_508,iVar12);
            }
            *(longlong *)(*local_508 + (longlong)iVar12 * 8) = lVar40;
            if ((lVar40 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar40);
            }
            iVar13 = iVar13 + -1;
          } while (1 < iVar13);
        }
        if (local_488 == '\0') {
          local_488 = '\x01';
          *(int *)(local_4a0 + 4) = *(int *)(local_4a0 + 4) + -1;
          if (local_490 != local_4a0[2]) {
            FUN_14004673c();
          }
          *local_4a0 = local_498;
          local_4a0[3] = local_480;
          local_498 = 0;
        }
        iVar13 = local_420;
        if (local_420 == 0) {
          uVar56 = 1;
          uVar49 = 0;
          iVar30 = 0;
          iVar12 = 0;
        }
        else {
          puVar29 = local_428;
          if (local_428 == (uint *)0x0) {
            puVar29 = local_438;
          }
          uVar51 = *puVar29;
          if (uVar51 == 0) {
            iVar12 = local_420 + 0x1e;
            if (-1 < local_420 + -1) {
              iVar12 = local_420 + -1;
            }
            uVar49 = 0;
            uVar56 = (ulonglong)(uint)(iVar12 >> 5);
            if (iVar12 >> 5 < 1) {
              uVar56 = uVar49;
            }
            iVar30 = 0;
            do {
              if (uVar56 == uVar49) goto LAB_14359df97;
              iVar30 = iVar30 + 0x20;
              uVar51 = puVar29[uVar49 + 1];
              uVar49 = uVar49 + 1;
            } while (uVar51 == 0);
          }
          else {
            uVar49 = 0;
            iVar30 = 0;
          }
          uVar56 = (ulonglong)(-uVar51 & uVar51);
          uVar37 = uVar56 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          iVar12 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
          if (local_420 <= iVar12) {
            iVar12 = local_420;
          }
        }
        if (iVar12 != local_420) {
          uVar51 = 0xffffffff;
          do {
            FUN_147a491c6(*(undefined8 *)(local_448 + (longlong)iVar12 * 0x10));
            uVar51 = ~(uint)uVar56 & uVar51;
            puVar29 = local_428;
            if (local_428 == (uint *)0x0) {
              puVar29 = local_438;
            }
            iVar12 = (int)uVar49;
            lVar40 = (longlong)iVar12;
            uVar14 = puVar29[lVar40] & uVar51;
            if (uVar14 == 0) {
              iVar34 = local_420 + 0x1e;
              if (-1 < local_420 + -1) {
                iVar34 = local_420 + -1;
              }
              iVar34 = iVar34 >> 5;
              iVar30 = iVar30 + 0x20;
              iVar44 = iVar34;
              if (iVar34 < iVar12) {
                iVar44 = iVar12;
              }
              if (iVar12 < iVar34) {
                lVar45 = 0;
                do {
                  uVar14 = puVar29[lVar40 + lVar45 + 1];
                  if (uVar14 != 0) {
                    uVar49 = (ulonglong)(iVar12 + (int)lVar45 + 1);
                    uVar51 = 0xffffffff;
                    goto LAB_14359e12e;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar45 = lVar45 + 1;
                } while (iVar44 - lVar40 != lVar45);
                uVar51 = 0xffffffff;
                lVar40 = (longlong)iVar44;
              }
              uVar49 = lVar40 + 1U & 0xffffffff;
              iVar12 = local_420;
            }
            else {
LAB_14359e12e:
              uVar56 = (ulonglong)(-uVar14 & uVar14);
              uVar37 = uVar56 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              iVar12 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if (local_420 <= iVar12) {
                iVar12 = local_420;
              }
            }
          } while (iVar12 != iVar13);
        }
LAB_14359df97:
        iVar12 = local_468;
        if (local_488 == '\0') {
          local_488 = '\x01';
          *(int *)(local_4a0 + 4) = *(int *)(local_4a0 + 4) + -1;
          if (local_490 != local_4a0[2]) {
            FUN_14004673c();
          }
          *local_4a0 = local_498;
          local_4a0[3] = local_480;
        }
        local_400 = 0;
        if (local_408 != 0) {
          FUN_1400020a8();
        }
        uVar49 = uStack_440 >> 0x20;
        uStack_440 = uStack_440 & 0xffffffff00000000;
        if ((int)uVar49 != 0) {
          FUN_14474875a(&local_448,0);
        }
        uStack_418 = 0xffffffff;
        local_414 = 0;
        local_420 = 0;
        if (0x80 < local_41c) {
          local_41c = 0x80;
          FUN_1446efbd8(local_438,0);
        }
        if (local_428 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_448 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_478 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14359aea0;
      }
    }
  }
  iVar12 = 0;
LAB_14359aea0:
  if ((local_f0 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
code_r0x00014359cd53:
  lVar48 = lVar48 + 1;
  lVar45 = lVar45 + 0x48;
  if (*(int *)(lVar40 + 0x570) <= lVar48) goto LAB_14359d0a1;
  goto LAB_14359cd2a;
LAB_14359d5ea:
  uVar26 = *puVar36;
  *puVar36 = *puVar46;
  *puVar46 = uVar26;
  DVar43 = DVar43 - 1;
  puVar7 = puVar7 + -2;
  lVar40 = local_580;
  uVar49 = local_558;
  if ((longlong)puVar54 - (longlong)puVar38 < (longlong)puVar47 - (longlong)puVar41) {
    if (puVar33 < puVar42) {
      pLVar28->QuadPart = (LONGLONG)puVar33;
      pLVar28[1].QuadPart = (LONGLONG)puVar42;
      pLVar28[2].s.LowPart = DVar43;
      pLVar28 = pLVar28 + 3;
    }
    puVar33 = puVar36;
    param_1 = local_588;
    puVar41 = puVar36;
    puVar42 = puVar7;
    if (puVar46 <= puVar36 + 1) goto LAB_14359d815;
  }
  else {
    if (puVar36 + 1 < puVar46) {
      pLVar28->QuadPart = (LONGLONG)puVar36;
      pLVar28[1].QuadPart = (LONGLONG)puVar7;
      pLVar28[2].s.LowPart = DVar43;
      pLVar28 = pLVar28 + 3;
    }
    param_1 = local_588;
    puVar54 = puVar42;
    if (puVar42 <= puVar33) goto LAB_14359d815;
  }
  uVar56 = (ulonglong)((int)((ulonglong)((longlong)puVar54 - (longlong)puVar41) >> 3) + 1);
  puVar36 = puVar33;
  puVar38 = puVar41;
  param_1 = local_588;
  puVar47 = puVar54;
  if (DVar43 == 0) goto LAB_14359d68c;
  goto LAB_14359d557;
}



// FUNCTION 14359e342 FUN_14359e342 body=921 status=ok
// SIG undefined FUN_14359e342(void)

void FUN_14359e342(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar5 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar5 + 1U) {
    FUN_1463ed3d8((longlong *)(param_1 + 0xf8),iVar5);
  }
  *(longlong **)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar5 * 8) = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  (**(code **)(*param_2 + 800))(param_2,&local_68);
  if (local_68 != (longlong *)0x0) {
    local_70 = param_2;
    if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_78 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = local_80;
    local_50 = &local_70;
    FUN_14616248a(param_1 + 0x108,local_44,&local_58,0);
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
    iVar5 = *(int *)(param_1 + 0x160);
    if ((longlong)iVar5 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x158);
      uVar16 = 0;
      do {
        cVar4 = (**(code **)(*local_68 + 0x88))(local_68,*(undefined8 *)(lVar14 + uVar16));
        if (cVar4 != '\0') {
          if ((int)(uVar16 >> 3) * -0x55555555 != -1) {
            FUN_147be0624(param_1 + 0x158);
            FUN_147bdfb40(param_1 + 0x158);
          }
          break;
        }
        uVar16 = uVar16 + 0x18;
      } while ((longlong)iVar5 * 0x18 != uVar16);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x830);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2);
  }
  FUN_14592cf7e(param_1,param_2);
  FUN_1463eca9c();
  iVar5 = *(int *)(param_1 + 0x408);
  if (iVar5 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x400);
    if (*(uint **)(param_1 + 0x400) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x3f0);
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar13 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar13 = iVar5 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_14359e660;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar10[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar9) {
      iVar9 = iVar5;
    }
  }
  if (iVar9 < iVar5) {
    uVar15 = 0xffffffff;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar9 * 0x18) & 1) != 0) {
        FUN_1417e28fe(param_2,*(undefined8 *)
                               (*(longlong *)(param_1 + 0x3e0) + 8 + (longlong)iVar9 * 0x18));
        iVar5 = *(int *)(param_1 + 0x408);
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = *(uint **)(param_1 + 0x400);
      if (*(uint **)(param_1 + 0x400) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x3f0);
      }
      iVar9 = (int)uVar16;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_14359e660;
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14359e660:
  if (((*(byte *)(param_1 + 0x309) & 4) == 0) && ((*(byte *)((longlong)param_2 + 0xa4) & 4) != 0)) {
    *(byte *)(param_1 + 0x309) = *(byte *)(param_1 + 0x309) | 4;
  }
  FUN_145d047e6(param_1,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14359e6fe FUN_14359e6fe body=1909 status=ok
// SIG undefined FUN_14359e6fe(void)

void FUN_14359e6fe(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88;
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = *(longlong *)(param_1 + 0x1a8);
  if ((lVar13 == 0) || (iVar3 = *(int *)(lVar13 + 0x198), iVar3 < 1)) {
LAB_14359ee3e:
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_b0 = param_1 + 0x3e0;
  local_c0 = param_1 + 0x508;
  local_b8 = param_1 + 0x430;
  lVar15 = 0;
  local_c8 = param_1;
  local_a8 = lVar13;
LAB_14359e780:
  lVar1 = *(longlong *)(*(longlong *)(lVar13 + 400) + lVar15 * 8);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x3c0) != 0)) {
    plVar14 = *(longlong **)(lVar1 + 0x3b8);
    plVar10 = plVar14 + (longlong)*(int *)(lVar1 + 0x3c0) * 8;
LAB_14359e7b2:
    if (*(longlong *)(param_1 + 0x840) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x1b8);
      lVar13 = plVar14[7];
      if ((*(int *)((longlong)plVar14 + 0x34) == 0) ||
         (uVar4 = *(uint *)(plVar14 + 6), (int)uVar4 < 0)) {
LAB_14359ed29:
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) ||
              (*(int *)(puVar8 + 2) != *(int *)((longlong)plVar14 + 0x34))) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_14359ed29;
          uVar11 = *puVar8;
        }
      }
      FUN_1400021e4(plVar14,&local_88);
      local_d8 = lVar13;
      FUN_147be8c06(uVar9,local_98,&local_88,uVar11);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      param_1 = local_c8;
      if (local_98[0] == 1) goto LAB_14359ecd8;
      plVar5 = (longlong *)
               FUN_14164f034(local_b0,(int)((ulonglong)local_98[0] >> 0x20) * 0x17 +
                                      (int)local_98[0],local_98);
      puVar6 = (uint *)*plVar5;
      if (puVar6 == (uint *)0x0) {
        puVar6 = (uint *)FUN_14001cc68(0x50,0x10);
        puVar6[0] = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        *(undefined2 *)(puVar6 + 0x12) = 0;
        lVar13 = *plVar5;
        *plVar5 = (longlong)puVar6;
        if (lVar13 != 0) {
          if (*(longlong *)(lVar13 + 0x30) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar13);
          puVar6 = (uint *)*plVar5;
        }
      }
      *(longlong *)(puVar6 + 8) = plVar14[5];
      uVar4 = *(uint *)((longlong)plVar14 + 0x1c);
      uVar12 = *(uint *)(plVar14 + 4);
      uVar2 = *(uint *)((longlong)plVar14 + 0x24);
      puVar6[4] = *(uint *)(plVar14 + 3);
      puVar6[5] = uVar4;
      puVar6[6] = uVar12;
      puVar6[7] = uVar2;
      *(longlong *)(puVar6 + 10) = local_98[0];
      uVar4 = *(uint *)(lVar1 + 0xc);
      *puVar6 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar4 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar12);
        }
        LOCK();
        uVar4 = *(uint *)(lVar13 + 0x10);
        bVar16 = uVar4 == 0;
        if (bVar16) {
          *(uint *)(lVar13 + 0x10) = uVar12;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar16) {
          uVar4 = uVar12;
        }
      }
      puVar6[1] = uVar4;
      if ((((*(int *)((longlong)plVar14 + 0x34) == 0) ||
           (uVar4 = *(uint *)(plVar14 + 6), (int)uVar4 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar4 ||
           ((plVar5 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
            plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)plVar14 + 0x34)))))))
         || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) {
LAB_14359ed34:
        puVar6[2] = 0;
        uVar4 = 0;
      }
      else {
        if (*plVar5 == 0) goto LAB_14359ed34;
        uVar4 = *(uint *)(*plVar5 + 0xc);
        puVar6[2] = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        uVar4 = *(uint *)(lVar13 + 0x10);
        if (*(uint *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar12 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar12);
          }
          LOCK();
          uVar4 = *(uint *)(lVar13 + 0x10);
          bVar16 = uVar4 == 0;
          if (bVar16) {
            *(uint *)(lVar13 + 0x10) = uVar12;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar16) {
            uVar4 = uVar12;
          }
        }
      }
      puVar6[3] = uVar4;
      FUN_1400021e4(plVar14);
      param_1 = local_c8;
      if (puVar6 + 0xc == (uint *)&local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(puVar6 + 0xc) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(puVar6 + 0xc) = local_88;
        local_88 = 0;
        puVar6[0xe] = uStack_80;
        puVar6[0xf] = uStack_7c;
      }
      if (*(int *)(param_1 + 0x4d8) != *(int *)(param_1 + 0x504)) {
        lVar13 = *plVar14;
        uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
        uVar12 = (uint)lVar13 & 0xffff;
        lVar7 = *(longlong *)(param_1 + 0x510);
        if (*(longlong *)(param_1 + 0x510) == 0) {
          lVar7 = local_c0;
        }
        iVar3 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0x518) - 1U &
                                 (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar12)
                                 + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x4d0) + (longlong)iVar3 * 0x18);
            if (*plVar5 == lVar13) {
              if (plVar5 != (longlong *)0x0) {
                local_a0 = plVar5[1];
                goto LAB_14359ebcc;
              }
              break;
            }
            iVar3 = (int)plVar5[2];
          } while (iVar3 != -1);
        }
      }
      local_a0 = 0;
LAB_14359ebcc:
      if (local_a0 != 0) {
        FUN_1400021e4(&local_a0);
        param_1 = local_c8;
        if (puVar6 + 0xc == (uint *)&local_88) {
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(puVar6 + 0xc) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(puVar6 + 0xc) = local_88;
          local_88 = 0;
          puVar6[0xe] = uStack_80;
          puVar6[0xf] = uStack_7c;
          param_1 = local_c8;
        }
      }
      if ((puVar6[1] == 0) || (uVar4 = *puVar6, (int)uVar4 < 0)) {
LAB_14359ec7e:
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == puVar6[1])) &&
             ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
              lVar13 = *plVar5;
            }
            else {
              lVar13 = 0;
            }
            if ((*(longlong *)(lVar13 + 0xc0) == 0) ||
               (*(longlong *)(*(longlong *)(lVar13 + 0xc0) + 0x30) != lVar13)) {
              if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
                lVar13 = *plVar5;
              }
              else {
                lVar13 = 0;
              }
LAB_14359edab:
              lVar7 = lVar13;
              lVar13 = lVar7;
              if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x00014359edba;
              goto LAB_14359edcb;
            }
          }
          goto LAB_14359ec7e;
        }
      }
      goto LAB_14359ec80;
    }
    lVar13 = FUN_147bd6678();
    if (lVar13 != 0) {
      local_88 = plVar14[3];
      uStack_80 = *(uint *)(plVar14 + 4);
      uStack_7c = *(uint *)((longlong)plVar14 + 0x24);
      local_78 = plVar14[5];
      local_68 = 1;
      if ((*(int *)((longlong)plVar14 + 0x34) == 0) ||
         (uVar4 = *(uint *)(plVar14 + 6), (int)uVar4 < 0)) {
LAB_14359ed95:
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) ||
              (*(int *)(puVar8 + 2) != *(int *)((longlong)plVar14 + 0x34))) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_14359ed95;
          uVar9 = *puVar8;
        }
      }
      local_70 = lVar1;
      FUN_1400021e4(plVar14,local_98);
      FUN_146f33c20(lVar13,local_98,uVar9,&local_88);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    goto LAB_14359ecd8;
  }
  goto LAB_14359ee32;
code_r0x00014359edba:
  lVar13 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_14359edab;
  lVar13 = FUN_142840154(lVar7);
LAB_14359edcb:
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar7 + 0x20);
    goto LAB_14359edab;
  }
  uVar9 = *(undefined8 *)(lVar13 + 0x18);
LAB_14359ec80:
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  uVar4 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar12 = (uint)uVar9 & 0xffff;
  uVar9 = FUN_140e4cc68(local_b8,((uint)uVar9 << 0x10 | uVar12) + (int)((ulonglong)uVar9 >> 0x20) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4),puVar6 + 0x10);
  FUN_140325a06(uVar9,&local_88,local_98,0);
  *(undefined1 *)(puVar6 + 0x12) = 0;
LAB_14359ecd8:
  plVar14 = plVar14 + 8;
  if (plVar14 == plVar10) goto LAB_14359ee27;
  goto LAB_14359e7b2;
LAB_14359ee27:
  iVar3 = *(int *)(local_a8 + 0x198);
  lVar13 = local_a8;
LAB_14359ee32:
  lVar15 = lVar15 + 1;
  if (iVar3 <= (int)lVar15) goto LAB_14359ee3e;
  goto LAB_14359e780;
}



// FUNCTION 14359ee74 FUN_14359ee74 body=861 status=ok
// SIG undefined FUN_14359ee74(void)

void FUN_14359ee74(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  LARGE_INTEGER local_68;
  undefined8 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_68.QuadPart = (LONGLONG)&local_78;
  FUN_147be069a(param_1 + 0xf8);
  (**(code **)(*param_2 + 800))(param_2,&local_78);
  if (local_78 != (longlong *)0x0) {
    local_88 = local_78;
    local_80 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)(param_1 + 0x108);
    if (*(int *)(param_1 + 0x168) < 1) {
      local_b0 = local_78;
      local_a8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      FUN_147bdf99e(plVar4,&local_b0);
      plVar4 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    else {
      local_98 = local_78;
      local_90 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      uVar9 = (**(code **)(*local_78 + 0x90))();
      iVar10 = FUN_1415ef528(plVar4,uVar9);
      plVar1 = local_90;
      if (iVar10 == -1) {
        lVar11 = 0;
      }
      else {
        lVar11 = (longlong)iVar10 * 0x20 + *plVar4;
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (lVar11 != 0) {
        QueryPerformanceCounter(&local_68);
        plVar2 = local_80;
        plVar1 = local_88;
        dVar8 = (double)local_68.QuadPart * DAT_14c83f420;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        iVar10 = *(int *)(param_1 + 0x160);
        *(uint *)(param_1 + 0x160) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x164) < iVar10 + 1U) {
          FUN_1463ed45c((longlong *)(param_1 + 0x158),iVar10);
        }
        dVar8 = dVar8 + 16777216.0;
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar10 * 0x18);
        *puVar5 = plVar1;
        puVar5[1] = plVar2;
        if (plVar2 == (longlong *)0x0) {
          puVar5[2] = dVar8;
        }
        else {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          puVar5[2] = dVar8;
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
        local_60 = &local_a0;
        local_a0 = 0;
        local_68.QuadPart = (LONGLONG)&local_88;
        FUN_1463ed4f0(plVar4,local_54);
      }
    }
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x830);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2d0))(plVar4,param_2);
  }
  bVar6 = *(byte *)(param_1 + 0x309);
  *(byte *)(param_1 + 0x309) = bVar6 & 0xfb;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar11);
      if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0xa4) & 4) != 0)) {
        *(byte *)(param_1 + 0x309) = bVar6 | 4;
        break;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(param_1 + 0x100) * 8 != lVar11);
  }
  FUN_145d047e6(param_1,0);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)local_70 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14359f1d2 FUN_14359f1d2 body=148 status=ok
// SIG undefined FUN_14359f1d2(void)

ulonglong FUN_14359f1d2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (*(longlong *)(param_1 + 0x1e8) != 0) goto LAB_14359f1e5;
  if (*(int *)(param_1 + 0x58) < 2) {
    lVar2 = FUN_145b58a4c();
    uVar4 = CONCAT71(uVar5,lVar2 != 0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
LAB_14359f25c:
      FUN_1456cec3c(lVar2);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = FUN_145985d1a();
    lVar2 = FUN_141433b6f(uVar3,0,uVar1,0,0,0);
    uVar4 = CONCAT71(uVar5,lVar2 != 0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_14359f25c;
    }
  }
  *(longlong *)(param_1 + 0x1e8) = lVar2;
LAB_14359f1e5:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14359f266 FUN_14359f266 body=541 status=ok
// SIG undefined FUN_14359f266(void)

void FUN_14359f266(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1478c0a72;
      local_90 = &LAB_1417b2375;
      local_98 = L"Engine";
      local_a0 = 0x1000000000;
      local_a8 = CONCAT44(local_a8._4_4_,0x10000004);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,8);
      local_b8 = CONCAT44(local_b8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
        (cVar3 = (**(code **)(*param_1 + 0x438))(param_1,param_2,param_4,param_5), cVar3 != '\0'))
       && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
        if (*(longlong *)(lVar4 + 0x360) == param_1[0x35]) {
          if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x2b8), (longlong)iVar1 != 0)) {
            lVar5 = *(longlong *)(lVar4 + 0x2b0);
            lVar4 = 0;
            do {
              plVar2 = *(longlong **)(lVar5 + lVar4);
              if ((plVar2 != param_1 && plVar2 != (longlong *)0x0) &&
                 (cVar3 = (**(code **)(*plVar2 + 0x430))(plVar2,param_2,param_4), cVar3 != '\0')) {
                plVar2 = *(longlong **)(lVar5 + lVar4);
                local_b8 = 0;
                uStack_b0 = 0;
                local_a8 = param_3;
                (**(code **)(*plVar2 + 0x328))(plVar2,param_2,param_4,param_5);
              }
              lVar4 = lVar4 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar4);
          }
          break;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14359f484 FUN_14359f484 body=1195 status=ok
// SIG undefined FUN_14359f484(void)

void FUN_14359f484(longlong *param_1,longlong *param_2,longlong param_3)

{
  double *pdVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)(int)param_2[1] != 0) {
    local_110 = *param_2;
    lVar21 = (longlong)(int)param_2[1] << 3;
    lVar20 = 0;
    local_118 = lVar21;
    do {
      lVar14 = *(longlong *)(local_110 + lVar20);
      if ((char)param_1[1] == '\0') {
        lVar16 = *(longlong *)(lVar14 + 0x90);
      }
      else {
        lVar16 = FUN_147bcc28a(lVar14);
        if ((lVar16 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar16);
        }
        *(longlong *)(lVar14 + 0x90) = lVar16;
      }
      plVar2 = *(longlong **)(lVar14 + 0x30);
      if (lVar16 != 0 || plVar2 != (longlong *)0x0) {
        iVar13 = *(int *)(param_3 + 0x128);
        *(uint *)(param_3 + 0x128) = iVar13 + 1U;
        if (*(uint *)(param_3 + 300) < iVar13 + 1U) {
          FUN_147bdddf2(param_3,iVar13);
        }
        lVar14 = *(longlong *)(param_3 + 0x120);
        if (*(longlong *)(param_3 + 0x120) == 0) {
          lVar14 = param_3;
        }
        iVar18 = iVar13 * 9;
        pdVar1 = (double *)(lVar14 + (longlong)iVar13 * 0x48);
        pdVar1[6] = 0.0;
        pdVar1[7] = 0.0;
        pdVar1[4] = 0.0;
        pdVar1[5] = 0.0;
        pdVar1[2] = 0.0;
        pdVar1[3] = 0.0;
        *pdVar1 = 0.0;
        pdVar1[1] = 0.0;
        pdVar1[8] = 0.0;
        *(undefined4 *)(pdVar1 + 8) = *(undefined4 *)(*param_1 + 0x40);
        if (lVar16 != 0) {
          lVar21 = *(longlong *)(lVar16 + 0x1c8);
          if (lVar21 == 0) {
            uVar22 = (undefined4)DAT_14c8464f0;
            uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            puVar15 = &DAT_14c8464e0;
          }
          else {
            uVar22 = (undefined4)*(undefined8 *)(lVar21 + 0x270);
            uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x270) >> 0x20);
            puVar15 = (undefined8 *)(lVar21 + 0x260);
          }
          uVar9 = *(undefined4 *)((longlong)puVar15 + 4);
          uVar10 = *(undefined4 *)(puVar15 + 1);
          uVar11 = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)(pdVar1 + 2) = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)pdVar1 + 0x14) = uVar9;
          *(undefined4 *)(pdVar1 + 3) = uVar10;
          *(undefined4 *)((longlong)pdVar1 + 0x1c) = uVar11;
          pdVar1[4] = (double)CONCAT44(uVar24,uVar22);
          lVar21 = *(longlong *)(lVar16 + 0x1c8);
          if (lVar21 == 0) {
            uVar22 = SUB84(DAT_14c8464f8,0);
            uVar24 = SUB84(DAT_14c846500,0);
            lVar21 = local_118;
          }
          else {
            dVar3 = *(double *)(lVar21 + 0x240);
            dVar7 = *(double *)(lVar21 + 0x248);
            dVar4 = *(double *)(lVar21 + 0x250);
            dVar5 = *(double *)(lVar21 + 600);
            pdVar17 = *(double **)(lVar21 + 0x228);
            local_108 = dVar3;
            uStack_100 = dVar7;
            local_f8 = dVar4;
            uStack_f0 = dVar5;
            if (pdVar17 == (double *)0x0) {
              iVar18 = 0x40;
              pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
              dVar12 = DAT_14c8463d8;
              *pdVar17 = DAT_14c8463d0;
              pdVar17[1] = dVar12;
              dVar12 = DAT_14c8463e8;
              pdVar17[2] = DAT_14c8463e0;
              pdVar17[3] = dVar12;
              dVar12 = DAT_14c846500;
              pdVar17[4] = DAT_14c8464f8;
              pdVar17[5] = dVar12;
              puVar15 = DAT_14c846508;
              pdVar17[6] = (double)DAT_14c846508;
              *(double **)(lVar21 + 0x228) = pdVar17;
            }
            lVar21 = local_118;
            auVar6._8_4_ = (int)-(ulonglong)(dVar7 != pdVar17[1]);
            auVar6._0_8_ = -(ulonglong)(dVar3 != *pdVar17);
            auVar6._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar17[1]) >> 0x20);
            iVar13 = movmskpd((int)puVar15,auVar6);
            auVar8._8_4_ = (int)-(ulonglong)(dVar5 != pdVar17[3]);
            auVar8._0_8_ = -(ulonglong)(dVar4 != pdVar17[2]);
            auVar8._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar17[3]) >> 0x20);
            uVar19 = movmskpd(iVar18,auVar8);
            if ((uVar19 & 0x3fffffff) != 0 || iVar13 != 0) {
              *(undefined4 *)(pdVar17 + 2) = (undefined4)local_f8;
              *(undefined4 *)((longlong)pdVar17 + 0x14) = local_f8._4_4_;
              *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_f0;
              *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_f0._4_4_;
              *(undefined4 *)pdVar17 = (undefined4)local_108;
              *(undefined4 *)((longlong)pdVar17 + 4) = local_108._4_4_;
              *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_100;
              *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_100._4_4_;
              FUN_1448052ee(&local_108,&local_e8);
              pdVar17[6] = local_d8;
              pdVar17[4] = local_e8;
              pdVar17[5] = dStack_e0;
            }
            uVar22 = SUB84(pdVar17[4],0);
            uVar24 = SUB84(pdVar17[5],0);
          }
          dVar7 = (double)FUN_144719204(uVar22,0);
          dVar5 = (double)FUN_144719204(uVar24,0);
          dVar3 = sin(dVar7 * 0.017453292519943295);
          dVar7 = cos(dVar7 * 0.017453292519943295);
          dVar4 = sin(dVar5 * 0.017453292519943295);
          dVar5 = cos(dVar5 * 0.017453292519943295);
          pdVar1[5] = dVar5 * dVar7;
          pdVar1[6] = dVar4 * dVar7;
          pdVar1[7] = dVar3;
          FUN_14020496a(&local_108,lVar16);
          pdVar1[1] = local_108;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x680))(plVar2,&local_108);
          (**(code **)(*plVar2 + 0x718))(plVar2,pdVar1 + 2,&local_108);
          dVar7 = (double)FUN_144719204(SUB84(local_108,0),0);
          dVar5 = (double)FUN_144719204(SUB84(uStack_100,0),0);
          dVar3 = sin(dVar7 * 0.017453292519943295);
          dVar7 = cos(dVar7 * 0.017453292519943295);
          dVar4 = sin(dVar5 * 0.017453292519943295);
          dVar5 = cos(dVar5 * 0.017453292519943295);
          pdVar1[5] = dVar5 * dVar7;
          pdVar1[6] = dVar4 * dVar7;
          pdVar1[7] = dVar3;
          FUN_14020496a(&local_e8,plVar2);
          *pdVar1 = local_e8;
          if ((longlong *)plVar2[0x89] != (longlong *)0x0) {
            fVar23 = (float)(**(code **)(*(longlong *)plVar2[0x89] + 0x6e8))();
            *(float *)(pdVar1 + 8) = fVar23 * 0.017453292;
          }
        }
      }
      lVar20 = lVar20 + 8;
    } while (lVar21 != lVar20);
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14359f933 FUN_14359f933 body=69 status=ok
// SIG undefined FUN_14359f933(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359f933(void)

{
  _DAT_14caf2450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359f975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2458,1);
  return;
}



// FUNCTION 14359f978 FUN_14359f978 body=91 status=ok
// SIG undefined FUN_14359f978(void)

void FUN_14359f978(void)

{
  if (DAT_14caf2470 != 0) {
    if (DAT_14caf2468 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14caf2468)(DAT_14caf2468,0);
    FUN_1446efa72(&DAT_14caf2468,0,0,0x10);
    DAT_14caf2470 = 0;
  }
  if (DAT_14caf2468 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14359f9d4 FUN_14359f9d4 body=1745 status=ok
// SIG undefined FUN_14359f9d4(void)

void FUN_14359f9d4(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 param_7)

{
  int *piVar1;
  ulonglong *puVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  void *_Dst;
  bool bVar14;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  char local_108;
  longlong **local_100;
  char local_e9;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  uint local_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined1 local_b0 [60];
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e0 = param_4;
  if (((*(byte *)((longlong)param_2 + 0x65) & 2) != 0) ||
     ((DAT_14c761624 == '\x01' && ((*(byte *)((longlong)param_2 + 0x61) & 1) != 0))))
  goto LAB_1435a0070;
  local_e9 = (**(code **)(*param_1 + 0x3c0))(param_1);
  plVar6 = (longlong *)0x0;
  bVar10 = 0;
  if (local_e9 != '\0') {
    bVar10 = (*(byte *)((longlong)param_3 + 0xb1) & 0x40) >> 6;
  }
  *(int *)((longlong)param_1 + 0x3ac) = *(int *)((longlong)param_1 + 0x3ac) + 1;
  if (param_6 == (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    plVar13 = param_3;
    local_d8 = param_3;
    plVar6 = local_e8;
    while (local_e8 = plVar13, local_e8 != (longlong *)0x0) {
      plVar13 = (longlong *)local_e8[10];
LAB_14359faa5:
      if (plVar13 != (longlong *)0x0) {
        if ((~*(uint *)(plVar13[1] + 0x18) & 0x8001) != 0) goto code_r0x00014359fabb;
        uVar11 = plVar13[7];
        uVar4 = (uint)uVar11;
joined_r0x00014359faf2:
        plVar6 = local_e8;
        if ((uVar4 & 0x480) == 0x80) {
          if ((param_5 != (longlong *)0x0) && ((uVar11 & 0x100) != 0)) {
            plVar6 = (longlong *)*param_5;
            plVar9 = param_5;
            while (plVar6 != plVar13) {
              plVar9 = (longlong *)plVar9[2];
              plVar6 = (longlong *)*plVar9;
            }
            _Dst = (void *)((longlong)*(int *)((longlong)plVar13 + 0x44) + (longlong)local_e0);
            if (((uint)uVar11 >> 9 & 1) == 0) {
              (**(code **)(*plVar13 + 0x160))(plVar13);
            }
            else {
              memset(_Dst,0,(longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34)
                    );
            }
            _Src = (void *)plVar9[1];
            if (_Dst != _Src) {
              if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar13 + 0x100))(plVar13,_Dst,_Src,(int)plVar13[6]);
              }
              else {
                memcpy(_Dst,_Src,
                       (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
              }
            }
            lVar7 = (longlong)(int)uStack_c0;
            uVar4 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
            if (uStack_c0._4_4_ < uVar4) {
              FUN_147bde96c(&local_c8);
            }
            local_c8[lVar7 * 2] = (longlong)plVar13;
            local_c8[lVar7 * 2 + 1] = (longlong)local_e0;
          }
          plVar13 = plVar13 + 3;
          do {
            for (plVar13 = (longlong *)*plVar13; plVar13 != (longlong *)0x0;
                plVar13 = (longlong *)plVar13[3]) {
              if ((~*(uint *)(plVar13[1] + 0x18) & 0x8001) == 0) {
                uVar11 = plVar13[7];
                uVar4 = (uint)uVar11;
                goto joined_r0x00014359faf2;
              }
            }
            local_e8 = (longlong *)(**(code **)(*local_e8 + 0x2b0))();
            plVar13 = local_e8 + 10;
            plVar6 = local_e8;
          } while (local_e8 != (longlong *)0x0);
        }
        break;
      }
      plVar6 = (longlong *)(**(code **)(*local_e8 + 0x2b0))();
      plVar13 = plVar6;
    }
    local_e8 = plVar6;
    FUN_1435a46c9(0,0);
    plVar13 = local_c8;
    plVar6 = (longlong *)(uStack_c0 & 0xffffffff);
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    FUN_1435a46c9(0,0);
    param_3 = local_d8;
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
      param_3 = local_d8;
    }
  }
  else {
    plVar13 = (longlong *)0x0;
  }
  if (param_1[0x108] == 0) {
    plVar9 = (longlong *)param_1[0x106];
    if (plVar9 != (longlong *)0x0) {
      local_118 = param_7;
      local_120 = param_6;
      local_128 = param_5;
      cVar3 = (**(code **)(*plVar9 + 0x328))(plVar9,param_2,param_3,local_e0);
      if (cVar3 != '\0') goto LAB_1435a0058;
    }
    if (bVar10 == 0) {
      lVar7 = (**(code **)(*param_2 + 0x498))(param_2);
      if (lVar7 != 0) {
        local_100 = &local_c8;
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        local_108 = local_e9;
        local_120 = local_e0;
        local_128 = param_3;
        FUN_143597de4(param_1,param_2,param_7,lVar7);
      }
    }
    else {
      local_e8 = plVar6;
      FUN_14001eaf4(param_1,&local_70,param_3);
      local_74 = 0;
      iVar5 = (int)param_1[0x20];
      local_d8 = local_70;
      if (0 < iVar5) {
        lVar7 = 0;
        do {
          plVar6 = *(longlong **)(param_1[0x1f] + lVar7 * 8);
          if ((plVar6 != (longlong *)0x0) && (plVar6[0x12] != 0)) {
            FUN_1417e36e6(&local_c8,plVar6);
            lVar8 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
            if (lVar8 != 0) {
              plVar6 = (longlong *)plVar6[0x3bd];
            }
            cVar3 = (**(code **)(*param_2 + 0x468))(param_2,uStack_c0,local_b8,local_b0);
            if (cVar3 == '\0') {
              if (((*(byte *)(param_3 + 0x16) & 0x80) != 0) && (*DAT_14caf2240 != 0)) {
                if (param_2 == (longlong *)0x0) {
                  uVar11 = 0;
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(uint *)((longlong)param_2 + 0xc);
                  uVar11 = (ulonglong)uVar4;
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
                    iVar5 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar12 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar5;
                    if (bVar14) {
                      local_cc = uVar12;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar12);
                      uVar12 = local_cc;
                    }
                    LOCK();
                    uVar4 = *(uint *)(lVar8 + 0x10);
                    bVar14 = uVar4 == 0;
                    if (bVar14) {
                      *(uint *)(lVar8 + 0x10) = uVar12;
                      uVar4 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      uVar4 = uVar12;
                    }
                  }
                }
                if ((int)plVar6[0x28c] != *(int *)((longlong)plVar6 + 0x148c)) {
                  plVar9 = plVar6 + 0x292;
                  if ((longlong *)plVar6[0x293] != (longlong *)0x0) {
                    plVar9 = (longlong *)plVar6[0x293];
                  }
                  iVar5 = *(int *)((longlong)plVar9 +
                                  (ulonglong)((int)plVar6[0x294] - 1U & (uVar4 ^ (uint)uVar11)) * 4)
                  ;
                  if (iVar5 != -1) {
                    do {
                      puVar2 = (ulonglong *)(plVar6[0x28b] + (longlong)iVar5 * 0x18);
                      if (*puVar2 == (uVar11 | (ulonglong)uVar4 << 0x20)) {
                        if ((puVar2 != (ulonglong *)0x0) && (puVar2[1] != 0)) goto LAB_14359fe02;
                        break;
                      }
                      iVar5 = (int)puVar2[2];
                    } while (iVar5 != -1);
                  }
                }
              }
            }
            else {
LAB_14359fe02:
              plVar9 = local_e0;
              FUN_140c37440(local_d8,local_e0,param_1[0x107]);
              local_100 = (longlong **)&local_74;
              local_108 = local_e9;
              local_120 = plVar9;
              local_128 = param_3;
              FUN_143597de4(param_1,param_2,param_7,plVar6);
            }
            iVar5 = (int)param_1[0x20];
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
      }
      plVar6 = local_d8;
      FUN_1402a6ae6(local_d8 + 0xd);
      *(undefined4 *)(plVar6 + 0x18) = 0;
      plVar6 = local_e8;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_68 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_e8;
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            plVar6 = local_e8;
          }
        }
      }
    }
  }
  else if (bVar10 == 0) {
    lVar7 = (**(code **)(*param_2 + 0x498))(param_2);
    if (lVar7 != 0) {
      uStack_c0 = param_7;
      local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
      local_c8 = param_2;
      local_b8 = param_3;
      FUN_142a7e224(*(longlong *)(param_1[0x108] + 0x28) + 0xf00,*(undefined4 *)(lVar7 + 0x1d2c),
                    &local_c8,local_e0);
    }
  }
  else {
    local_128 = local_e0;
    FUN_146f45818(param_1[0x108],param_2,param_7,param_3);
  }
LAB_1435a0058:
  FUN_1435a46c9(plVar13,(ulonglong)plVar6 & 0xffffffff);
  if (plVar13 != (longlong *)0x0) {
    FUN_1400020a8(plVar13);
  }
LAB_1435a0070:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014359fabb:
  plVar13 = (longlong *)plVar13[3];
  goto LAB_14359faa5;
}



// FUNCTION 1435a00a6 FUN_1435a00a6 body=26 status=ok
// SIG undefined FUN_1435a00a6(void)

undefined8 FUN_1435a00a6(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x170) >> 8),
                    *(longlong *)(param_2 + 0x170) == *(longlong *)(param_1 + 0x200));
  }
  return 0;
}



// FUNCTION 1435a00c0 FUN_1435a00c0 body=26 status=ok
// SIG undefined FUN_1435a00c0(void)

undefined8 FUN_1435a00c0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x170) >> 8),
                    *(longlong *)(param_2 + 0x170) == *(longlong *)(param_1 + 0x200));
  }
  return 0;
}



// FUNCTION 1435a00dc FUN_1435a00dc body=28 status=ok
// SIG undefined FUN_1435a00dc(void)

void FUN_1435a00dc(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong **)(param_2 + 0x28) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001435a00f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x3d8))();
    return;
  }
  return;
}



// FUNCTION 1435a00f8 FUN_1435a00f8 body=273 status=ok
// SIG undefined FUN_1435a00f8(void)

void FUN_1435a00f8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x3c0))();
  if (((cVar3 == '\0') && ((*(byte *)((longlong)param_2 + 99) & 8) != 0)) &&
     ((char)param_2[0xd] == '\x03')) {
    FUN_1433b72a0(param_2,3);
    FUN_140c7ce82(param_2,0);
    lVar4 = FUN_1447210f0(param_2);
    if ((lVar4 != 0) && (DAT_14c872bd8 == '\0')) {
      (**(code **)(*param_2 + 0x530))(param_2);
    }
    if ((param_1[0x35] != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar5 + 0x360) == param_1[0x35]) {
          if (lVar5 == 0) {
            return;
          }
          iVar1 = *(int *)(lVar5 + 0x2b8);
          if ((longlong)iVar1 == 0) {
            return;
          }
          lVar4 = *(longlong *)(lVar5 + 0x2b0);
          lVar5 = 0;
          do {
            plVar2 = *(longlong **)(lVar4 + lVar5);
            if ((plVar2 != (longlong *)0x0) &&
               (cVar3 = (**(code **)(*plVar2 + 0x440))(plVar2,param_2), cVar3 != '\0')) {
              plVar2 = *(longlong **)(lVar4 + lVar5);
              (**(code **)(*plVar2 + 0x468))(plVar2,param_2);
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar5);
          return;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 1435a020b FUN_1435a020b body=69 status=ok
// SIG undefined FUN_1435a020b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a020b(void)

{
  _DAT_14caf2480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a024d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2488,1);
  return;
}



// FUNCTION 1435a0250 FUN_1435a0250 body=973 status=ok
// SIG undefined FUN_1435a0250(void)

void FUN_1435a0250(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_88 [32];
  uint *local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  longlong lVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && (*DAT_14caf2490 != 0)) &&
     (cVar3 = (**(code **)(*param_1 + 0x3c0))(), cVar3 == '\0')) {
    uVar17 = *(uint *)(param_2 + 0xc);
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    lVar15 = param_1[0x37];
    uVar10 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar10 = *(uint *)(lVar16 + 0x10);
      bVar19 = uVar10 == 0;
      if (bVar19) {
        *(uint *)(lVar16 + 0x10) = uVar13;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar10 = uVar13;
      }
    }
    if (*(int *)(lVar15 + 0x58) != *(int *)(lVar15 + 0x84)) {
      lVar16 = lVar15 + 0x88;
      if (*(longlong *)(lVar15 + 0x90) != 0) {
        lVar16 = *(longlong *)(lVar15 + 0x90);
      }
      iVar4 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar15 + 0x98) - 1U & (uVar10 ^ uVar17)) * 4);
      if (iVar4 != -1) {
        lVar16 = *(longlong *)(lVar15 + 0x50);
        do {
          lVar6 = (longlong)iVar4;
          local_50 = *(longlong *)(lVar16 + lVar6 * 0x18);
          local_58 = CONCAT44(uVar10,uVar17);
          cVar3 = FUN_14472ecf8(&local_50,&local_58);
          lVar16 = *(longlong *)(lVar15 + 0x50);
          if (cVar3 != '\0') {
            lVar16 = lVar16 + lVar6 * 0x18;
            if (((lVar16 != 0) && (local_50 = *(longlong *)(lVar16 + 8), local_50 != 0)) &&
               ((int)param_1[0xba] != *(int *)((longlong)param_1 + 0x5fc))) {
              plVar11 = param_1 + 0xc0;
              if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
                plVar11 = (longlong *)param_1[0xc1];
              }
              iVar4 = *(int *)((longlong)plVar11 +
                              (ulonglong)
                              ((int)param_1[0xc2] - 1U &
                              (int)local_50 + (int)((ulonglong)local_50 >> 0x20) * 0x17) * 4);
              if (iVar4 != -1) {
                goto LAB_1435a03e7;
              }
            }
            break;
          }
          iVar4 = *(int *)(lVar16 + 0x10 + lVar6 * 0x18);
        } while (iVar4 != -1);
      }
    }
  }
  goto LAB_1435a04a8;
  while (iVar4 = *(int *)(lVar16 + 0x58), iVar4 != -1) {
LAB_1435a03e7:
    lVar16 = param_1[0xb9] + (longlong)iVar4 * 0x60;
    if (*(longlong *)(param_1[0xb9] + (longlong)iVar4 * 0x60) == local_50) {
      if ((longlong *)(lVar16 + 8) != (longlong *)0x0 && lVar16 != 0) {
        local_68 = (uint *)(lVar16 + 0x18);
        iVar4 = *(int *)(lVar16 + 0x30);
        if (iVar4 == 0) {
          uVar14 = 1;
          uVar18 = 0;
          iVar12 = 0;
          iVar5 = 0;
          goto LAB_1435a04a4;
        }
        puVar7 = *(uint **)(lVar16 + 0x28);
        if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
          puVar7 = local_68;
        }
        uVar17 = *puVar7;
        if (uVar17 != 0) {
          uVar18 = 0;
          iVar12 = 0;
          goto LAB_1435a0475;
        }
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar18 = 0;
        uVar14 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar14 = uVar18;
        }
        iVar12 = 0;
        goto LAB_1435a0461;
      }
      break;
    }
  }
  goto LAB_1435a04a8;
  while( true ) {
    iVar12 = iVar12 + 0x20;
    uVar17 = puVar7[uVar18 + 1];
    uVar18 = uVar18 + 1;
    if (uVar17 != 0) break;
LAB_1435a0461:
    if (uVar14 == uVar18) goto LAB_1435a04a8;
  }
LAB_1435a0475:
  uVar14 = (ulonglong)(-uVar17 & uVar17);
  uVar1 = uVar14 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar5 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if (iVar4 <= iVar5) {
    iVar5 = iVar4;
  }
LAB_1435a04a4:
  if (iVar5 != iVar4) {
    uVar17 = 0xffffffff;
    do {
      local_58 = *(undefined8 *)(*(longlong *)(lVar16 + 8) + (longlong)iVar5 * 0x10);
      cVar3 = FUN_140af1d20(local_58,&local_50);
      if (cVar3 != '\0') {
        FUN_1417e4262(param_1 + 0xc4,local_5c,&local_58);
      }
      uVar17 = uVar17 & ~(uint)uVar14;
      puVar7 = *(uint **)(lVar16 + 0x28);
      if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
        puVar7 = local_68;
      }
      iVar2 = *(int *)(lVar16 + 0x30);
      iVar5 = (int)uVar18;
      lVar15 = (longlong)iVar5;
      uVar10 = puVar7[lVar15] & uVar17;
      if (uVar10 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar6 = 0;
          do {
            uVar10 = puVar7[lVar15 + lVar6 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar5 + (int)lVar6 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1435a058a;
            }
            iVar12 = iVar12 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar9 - lVar15 != lVar6);
          uVar17 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar18 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_1435a058a:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar4);
  }
LAB_1435a04a8:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a061e FUN_1435a061e body=359 status=ok
// SIG undefined FUN_1435a061e(void)

uint FUN_1435a061e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  undefined2 local_158;
  undefined8 local_148;
  longlong local_140;
  wchar_t local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = param_2;
  cVar3 = FUN_140988638(&local_140,&DAT_14a9ee3d0,1);
  if (cVar3 != '\0') {
    local_158 = 0;
    cVar3 = FUN_142786b6e(&local_140,local_138,0x80,1);
    uVar2 = DAT_14cb0d2b0;
    if (cVar3 != '\0') {
      FUN_1446f470e(&local_148,local_138,1);
      lVar7 = FUN_1456d2c7c(uVar2,param_1,local_148);
      if (lVar7 != 0) {
        uVar5 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 8))
                          (lVar7 + 0x28,param_1,local_140,param_3);
        goto LAB_1435a0686;
      }
      lVar7 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
      sVar8 = wcslen(local_138);
      local_140 = local_140 + (longlong)(int)sVar8 * -2;
      iVar6 = *(int *)(lVar7 + 0x2b8);
      if (0 < iVar6) {
        lVar10 = 0;
        lVar9 = 0;
        uVar5 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x2b0) + lVar10);
          if (lVar1 != 0) {
            bVar4 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))
                              (lVar1 + 0x28,param_1,local_140,param_3);
            uVar5 = (uint)(byte)((byte)uVar5 | bVar4);
            iVar6 = *(int *)(lVar7 + 0x2b8);
          }
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar9 < iVar6);
        goto LAB_1435a0686;
      }
    }
  }
  uVar5 = 0;
LAB_1435a0686:
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 1435a0792 FUN_1435a0792 body=69 status=ok
// SIG undefined FUN_1435a0792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a0792(void)

{
  _DAT_14caf24a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a07d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf24b0,1);
  return;
}



// FUNCTION 1435a07d7 FUN_1435a07d7 body=91 status=ok
// SIG undefined FUN_1435a07d7(void)

void FUN_1435a07d7(void)

{
  if (DAT_14caf27c8 != 0) {
    if (DAT_14caf27c0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14caf27c0)(DAT_14caf27c0,0);
    FUN_1446efa72(&DAT_14caf27c0,0,0,0x10);
    DAT_14caf27c8 = 0;
  }
  if (DAT_14caf27c0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435a0832 FUN_1435a0832 body=91 status=ok
// SIG undefined FUN_1435a0832(void)

void FUN_1435a0832(void)

{
  if (DAT_14caf27b8 != 0) {
    if (DAT_14caf27b0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14caf27b0)(DAT_14caf27b0,0);
    FUN_1446efa72(&DAT_14caf27b0,0,0,0x10);
    DAT_14caf27b8 = 0;
  }
  if (DAT_14caf27b0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435a088d FUN_1435a088d body=91 status=ok
// SIG undefined FUN_1435a088d(void)

void FUN_1435a088d(void)

{
  if (DAT_14caf27a8 != 0) {
    if (DAT_14caf27a0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14caf27a0)(DAT_14caf27a0,0);
    FUN_1446efa72(&DAT_14caf27a0,0,0,0x10);
    DAT_14caf27a8 = 0;
  }
  if (DAT_14caf27a0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435a08e8 FUN_1435a08e8 body=49 status=ok
// SIG undefined FUN_1435a08e8(void)

void FUN_1435a08e8(void)

{
  FUN_144760e21(DAT_14caf2768,DAT_14caf2770);
  if (DAT_14caf2768 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435a0919 FUN_1435a0919 body=91 status=ok
// SIG undefined FUN_1435a0919(void)

void FUN_1435a0919(void)

{
  if (DAT_14caf24c0 != 0) {
    if (DAT_14caf24b8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14caf24b8)(DAT_14caf24b8,0);
    FUN_1446efa72(&DAT_14caf24b8,0,0,0x10);
    DAT_14caf24c0 = 0;
  }
  if (DAT_14caf24b8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435a0974 FUN_1435a0974 body=49 status=ok
// SIG undefined FUN_1435a0974(void)

void FUN_1435a0974(void)

{
  FUN_144760e21(DAT_14caf2750,DAT_14caf2758);
  if (DAT_14caf2750 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435a09a5 FUN_1435a09a5 body=69 status=ok
// SIG undefined FUN_1435a09a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a09a5(void)

{
  _DAT_14caf24c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a09e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf24d0,1);
  return;
}



// FUNCTION 1435a09ea FUN_1435a09ea body=69 status=ok
// SIG undefined FUN_1435a09ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a09ea(void)

{
  _DAT_14caf2568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a0a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2570,1);
  return;
}



// FUNCTION 1435a0a2f FUN_1435a0a2f body=69 status=ok
// SIG undefined FUN_1435a0a2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a0a2f(void)

{
  _DAT_14caf2578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a0a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2580,1);
  return;
}



// FUNCTION 1435a0a74 FUN_1435a0a74 body=69 status=ok
// SIG undefined FUN_1435a0a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a0a74(void)

{
  _DAT_14caf2588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a0ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2590,1);
  return;
}



// FUNCTION 1435a0ae2 FUN_1435a0ae2 body=69 status=ok
// SIG undefined FUN_1435a0ae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a0ae2(void)

{
  _DAT_14caf25b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a0b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf25b8,1);
  return;
}



// FUNCTION 1435a0b27 FUN_1435a0b27 body=69 status=ok
// SIG undefined FUN_1435a0b27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a0b27(void)

{
  _DAT_14caf25c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a0b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf25d0,1);
  return;
}



// FUNCTION 1435a0b6c FUN_1435a0b6c body=674 status=ok
// SIG undefined FUN_1435a0b6c(void)

void FUN_1435a0b6c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_1d8 [40];
  undefined2 *local_1b0;
  int local_1a8;
  longlong local_1a0 [2];
  undefined1 local_190 [24];
  longlong local_178;
  longlong local_168;
  uint *local_160;
  uint local_158;
  uint local_154;
  undefined8 local_150;
  longlong local_148 [26];
  undefined4 local_78;
  uint **local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 local_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 != 0) {
    if ((*(byte *)(param_2 + 0xe8) & 0x10) != 0) {
      *(longlong *)(param_2 + 0xa8) = lVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
    }
    uVar1 = 0;
    local_160 = *(uint **)(param_2 + 0x90);
    local_158 = (uint)lVar2;
    local_154 = 0;
    if (local_158 != 0) {
      uVar1 = *local_160;
    }
    uVar3 = (uint)*(undefined8 *)(param_2 + 0xa8);
    if (uVar3 < local_158 || uVar3 - local_158 == 0) {
      local_150 = (ulonglong)uVar1;
      local_154 = uVar3;
      if ((uVar3 & 0xffffffe0) < local_158) {
        local_150 = (ulonglong)local_160[uVar3 >> 5];
      }
    }
    else {
      local_150 = CONCAT44(uVar3 - local_158,uVar1);
    }
    local_148[0] = 0;
    local_148[1] = 0;
    lVar2 = 0x18;
    do {
      *(undefined8 *)((longlong)local_148 + lVar2) = 0;
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0xd8);
    local_78 = 0;
    local_70 = &local_160;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_28 = local_28 & 0xfc;
    local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x13d8);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2b8))(*(longlong **)(param_1 + 0x68),local_148)
    ;
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0xa0);
    if (((local_148[1] != 0) ||
        ((local_70 != (uint **)0x0 && (*(int *)((longlong)local_70 + 0x14) != 0)))) ||
       ((local_68 != 0 && (*(int *)(local_68 + 0x18) != 0)))) {
      if (local_148[0] != 0) {
        FUN_146f2727e(local_148,&local_1b0);
        puVar4 = local_1b0;
        if (local_1a8 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_140002266(local_1a0,L"IrisNetRefHandleError=%s",puVar4);
        FUN_147bccaba(local_190,0x6e,local_1a0);
        if (local_1a0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_1b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1435a3542(param_2 + 0xb8,local_190);
        lVar2 = FUN_1435a0e22(*(undefined8 *)(param_1 + 0x28));
        if (lVar2 != 0) {
          FUN_1435a0e7e(lVar2,1,local_148[0],*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1d2c)
                       );
        }
        if (local_168 != 0) {
          (**(code **)(local_168 + -0x10))(local_168 + -0x10);
        }
        if (local_178 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14572541c(param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a0e22 FUN_1435a0e22 body=92 status=ok
// SIG undefined FUN_1435a0e22(void)

longlong FUN_1435a0e22(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x808), lVar1 != 0)) {
    lVar2 = FUN_145b58a4c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1435a0e7e FUN_1435a0e7e body=116 status=ok
// SIG undefined FUN_1435a0e7e(void)

void FUN_1435a0e7e(longlong param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = param_2;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    lVar1 = FUN_147bd691a(*(longlong *)(param_1 + 0x5f8),param_4);
    if (lVar1 != 0) {
      local_20 = param_3 & 0xfffffffffffffff;
      FUN_147bd9090(lVar1,&local_14);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a0ef4 FUN_1435a0ef4 body=1842 status=ok
// SIG undefined FUN_1435a0ef4(void)

void FUN_1435a0ef4(longlong param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  void *_Src;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined4 local_330;
  uint local_328;
  int local_324;
  longlong local_320;
  int local_318;
  bool local_314;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  int local_308;
  undefined4 uStack_304;
  void *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  void *local_2e8;
  uint *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  wchar_t *local_2c0;
  undefined4 local_2b8;
  longlong local_2a8;
  longlong local_298;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e0;
  undefined8 local_1dc;
  byte local_1cc;
  longlong local_188 [26];
  undefined4 local_b8;
  undefined8 local_b0;
  uint **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar12 = (*(int *)(lVar6 + 0xa0) * 8 - *(int *)(lVar6 + 0x130)) - 0x235U >> 3 & 0xfffffffc;
  uVar10 = 0x2000;
  if (uVar12 < 0x2000) {
    uVar10 = uVar12;
  }
  uVar10 = uVar10 << 3;
  local_314 = false;
  if (param_2 == 0) {
    lVar11 = *(longlong *)(lVar6 + 0x6c0);
    iVar4 = *(int *)(lVar6 + 0x200) + (int)lVar11;
    if (iVar4 < 0) {
      local_314 = 1 < (uint)-iVar4 / uVar10;
    }
  }
  else {
    lVar11 = *(longlong *)(lVar6 + 0x6c0);
  }
  local_318 = param_2;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2a0))
                    (*(longlong **)(param_1 + 0x68),&local_318);
  if ((int)uVar5 != 0) {
    local_328 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),0x134 < lVar11);
    puVar1 = (uint *)(param_1 + 0x90);
    local_320 = param_1 + 0x70;
    plVar7 = *(longlong **)(param_1 + 0x28);
    local_324 = param_2;
    while( true ) {
      if ((local_328 & 1) != 0) {
        local_328 = 0;
        (**(code **)(*plVar7 + 0x2f8))(plVar7,0);
        plVar7 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar7[0xd8] == 0) {
        local_330 = 0;
        local_338 = 0;
        FUN_147bccbc0(plVar7,0,0,0);
      }
      uStack_2d0 = 0;
      local_2c4 = local_2c4 & 0xfffffff8;
      local_2d8 = (ulonglong)uVar10;
      local_2c8 = 0;
      if (uVar12 != 0) {
        uStack_2d0 = (ulonglong)*puVar1 << 0x20;
      }
      local_188[0] = 0;
      local_188[1] = 0;
      lVar6 = 0x18;
      do {
        *(undefined8 *)((longlong)local_188 + lVar6) = 0;
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0xd8);
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = &local_2e0;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_68 = local_68 & 0xfc;
      local_6c = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x13dc);
      local_2e8 = (void *)0x0;
      local_2e0 = puVar1;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2a8))
                        (*(longlong **)(param_1 + 0x68),local_188,&local_2e8);
      if ((iVar4 == 0) || (local_188[1] != 0)) break;
      if (((uint)uStack_2d0 < ((int)local_2d8 + 0x1fU & 0xffffffe0)) && ((local_2c4 & 4) == 0)) {
        local_2e0[(uint)uStack_2d0 >> 5] = uStack_2d0._4_4_;
      }
      FUN_140cda6c6(&local_2c0,0,uVar10);
      local_1dc = *(undefined8 *)(param_1 + 0x40);
      local_1e0 = *(undefined4 *)(param_1 + 0x34);
      local_1f8 = 0;
      local_1cc = (local_1cc & 0xef | (*(byte *)(param_1 + 0x30) & 1) << 4) ^ 0x10;
      local_1f0 = param_1;
      FUN_1401177fa(&local_2c0,puVar1,(uint)uStack_2d0 - local_2d8._4_4_);
      FUN_1408f10c6(param_1,&local_308,&local_2c0,0);
      iVar13 = 0;
      if (local_308 != -1) {
        local_2f8 = local_2e8;
        local_2f0 = local_308;
        uVar5 = FUN_147bde44e(local_320,&local_2f8);
        local_328 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        iVar13 = iVar4;
      }
      FUN_1449daebe(&local_2c0);
      if (((uint)uStack_2d0 < ((int)local_2d8 + 0x1fU & 0xffffffe0)) && ((local_2c4 & 4) == 0)) {
        local_2e0[(uint)uStack_2d0 >> 5] = uStack_2d0._4_4_;
      }
      if ((iVar13 != 2) || (0x1fe < *(int *)(param_1 + 0x4c))) goto LAB_1435a13bd;
      plVar7 = *(longlong **)(param_1 + 0x28);
      if (*(code **)(*plVar7 + 0x308) == FUN_144b25b64) {
        if ((*(byte *)((longlong)plVar7 + 0xa4) & 4) == 0) {
          if (DAT_14caf25c0 != '\0') {
            *(int *)(plVar7 + 0x40) = -(int)plVar7[0xd8];
          }
          if ((char)plVar7[0x3bb] == '\x01') {
            bVar3 = FUN_1435aa440(plVar7 + 0x3af,*(undefined8 *)(plVar7[0xb] + 0x300));
          }
          else {
            lVar6 = (longlong)(int)plVar7[0x40] + plVar7[0xd8];
            bVar3 = lVar6 == 0 || SCARRY8((longlong)(int)plVar7[0x40],plVar7[0xd8]) != lVar6 < 0;
          }
        }
        else {
          bVar3 = 1;
        }
        uVar9 = (uint)bVar3;
      }
      else {
        uVar9 = (**(code **)(*plVar7 + 0x308))();
      }
      if (uVar9 == 0) goto LAB_1435a13bd;
      iVar4 = 0;
      if (0 < DAT_14c761600) {
        iVar4 = DAT_14c761600;
      }
      plVar7 = *(longlong **)(param_1 + 0x28);
      uVar9 = (ushort)(*(short *)((longlong)plVar7 + 0x1c8c) - *(short *)((longlong)plVar7 + 0x1c8e)
                      ) & 0x3fff;
      if ((((0xff < DAT_14c761600) || (uVar9 != 0x100 && (uVar9 + 0x3f00 >> 0xd & 1) == 0)) ||
          (0x100U - iVar4 < uVar9)) ||
         ((ulonglong)(longlong)*(int *)(param_1 + 0x88) <=
          (ulonglong)(uint)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x74))))
      goto LAB_1435a13bd;
    }
    if (local_188[1] != 0) {
      local_2c0 = L"DataStreamChannelWriteData";
      local_2b8 = 0x1a;
      FUN_1446e940c(local_30c,&local_2c0);
      local_2c0 = L"NetworkErrors";
      local_2b8 = 0xd;
      FUN_1446e940c(local_310,&local_2c0);
      local_2c0 = L"DataStreamChannel failed to write data.";
      local_2b8 = 0x27;
      FUN_140208c1e(&local_308,local_310,local_30c,&local_2c0);
      plVar7 = (longlong *)CONCAT44(uStack_304,local_308);
      if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
      }
      FUN_1447a1fc0(plVar7);
      plVar7 = (longlong *)CONCAT44(uStack_304,local_308);
      pcVar2 = *(code **)(*plVar7 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar8 = plVar7 + 3;
        if (plVar7[5] != 0) {
          plVar8 = (longlong *)(plVar7[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar8 = plVar7 + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar2)(plVar7);
      }
      local_2f8 = (void *)0x0;
      local_2f0 = (int)plVar8[1];
      lVar6 = (longlong)local_2f0;
      _Src = (void *)*plVar8;
      if (lVar6 == 0) {
        local_2ec = 0;
      }
      else {
        FUN_1446dd670(&local_2f8,local_2f0,0);
        memcpy(local_2f8,_Src,lVar6 * 2);
      }
      if ((longlong *)CONCAT44(uStack_304,local_308) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_304,local_308) + 0x10))();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      FUN_1459b235e(&local_2c0,0x11);
      FUN_143587eda(uVar5,&local_2c0);
      if (local_298 != 0) {
        (**(code **)(local_298 + -0x10))(local_298 + -0x10);
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
      FUN_147a4786e(*(undefined8 *)(param_1 + 0x28),&local_2f8);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))(*(longlong **)(param_1 + 0x28),1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      FUN_1459b235e(&local_2c0,0x11);
      FUN_143587ad8(uVar5,&local_2c0);
      if (local_298 != 0) {
        (**(code **)(local_298 + -0x10))(local_298 + -0x10);
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
      if (local_2f8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (((uint)uStack_2d0 < ((int)local_2d8 + 0x1fU & 0xffffffe0)) && ((local_2c4 & 4) == 0)) {
      local_2e0[(uint)uStack_2d0 >> 5] = uStack_2d0._4_4_;
    }
LAB_1435a13bd:
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2b0))();
    if ((local_324 == 1) && ((local_328 & 1) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))(*(longlong **)(param_1 + 0x28),0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a1628 FUN_1435a1628 body=386 status=ok
// SIG undefined FUN_1435a1628(void)

void FUN_1435a1628(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  lVar3 = plVar1[0xb];
  if ((*(char *)(lVar3 + 0x849) == '\x01') && ((*(byte *)(param_1 + 0x2090) & 1) != 0)) {
    iVar4 = 0;
    if (0 < DAT_14c761600) {
      iVar4 = DAT_14c761600;
    }
    uVar5 = (ushort)(*(short *)((longlong)plVar1 + 0x1c8c) - *(short *)((longlong)plVar1 + 0x1c8e))
            & 0x3fff;
    if ((((DAT_14c761600 < 0x100) && (uVar5 == 0x100 || (uVar5 + 0x3f00 >> 0xd & 1) != 0)) &&
        (uVar5 <= 0x100U - iVar4)) &&
       ((ulonglong)(uint)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x74)) <
        (ulonglong)(longlong)*(int *)(param_1 + 0x88))) {
      if ((((((*(uint *)((longlong)plVar1 + 0xa4) & 2) != 0) || (*(longlong *)(lVar3 + 0xf0) != 0))
           || (*(int *)plVar1[0x282] != *(int *)((longlong)plVar1 + 0x1434))) &&
          ((plVar1[0x28] == 0 || (*(char *)(plVar1[0x28] + 1) == '\x02')))) &&
         (*(int *)(param_1 + 0x4c) < 0x1ff)) {
        if (*(code **)(*plVar1 + 0x308) == FUN_144b25b64) {
          if ((*(uint *)((longlong)plVar1 + 0xa4) & 4) == 0) {
            if (DAT_14caf25c0 != '\0') {
              *(int *)(plVar1 + 0x40) = -(int)plVar1[0xd8];
            }
            if ((char)plVar1[0x3bb] == '\x01') {
              bVar2 = FUN_1435aa440(plVar1 + 0x3af,*(undefined8 *)(lVar3 + 0x300));
            }
            else {
              lVar3 = (longlong)(int)plVar1[0x40] + plVar1[0xd8];
              bVar2 = lVar3 == 0 || SCARRY8((longlong)(int)plVar1[0x40],plVar1[0xd8]) != lVar3 < 0;
            }
          }
          else {
            bVar2 = 1;
          }
          uVar5 = (uint)bVar2;
        }
        else {
          uVar5 = (**(code **)(*plVar1 + 0x308))();
        }
        if (uVar5 != 0) {
          if ((*(byte *)(param_1 + 0x2090) & 4) != 0) {
            FUN_1435a0ef4(param_1,0);
            return;
          }
          FUN_147bd80ec(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1435a17ad FUN_1435a17ad body=69 status=ok
// SIG undefined FUN_1435a17ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a17ad(void)

{
  _DAT_14caf25f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a17ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf25f8,1);
  return;
}



// FUNCTION 1435a17f2 FUN_1435a17f2 body=69 status=ok
// SIG undefined FUN_1435a17f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a17f2(void)

{
  _DAT_14caf2600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a1834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2608,1);
  return;
}



// FUNCTION 1435a1838 FUN_1435a1838 body=957 status=ok
// SIG undefined FUN_1435a1838(void)

longlong * FUN_1435a1838(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90;
  longlong local_88 [2];
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_3 == 0) || ((*(uint *)(param_3 + 8) & 0x30) == 0)) &&
      (cVar5 = FUN_140174dd2(param_3), cVar5 != '\0')) &&
     (((*(char *)(param_3 + 0x178) == '\x03' &&
       ((*(byte *)(param_3 + 0x65) & 2) == 0 && param_3 != 0)) &&
      ((*(uint *)(param_3 + 8) >> 0x1e & 1) == 0)))) {
    uVar2 = *(uint *)(param_3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    if ((((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) && ((*(byte *)(param_3 + 99) & 8) != 0)) &&
       (((((*(byte *)(param_3 + 0x61) & 1) == 0 && ((*(byte *)(param_3 + 100) & 2) != 0)) &&
         (((bVar6 = *(byte *)(param_3 + 0x65) & 0x18, bVar6 == 8 || (bVar6 == 0x10)) &&
          (plVar10 = *(longlong **)(param_1 + 0x5f8), plVar10 != (longlong *)0x0)))) &&
        (cVar5 = (**(code **)(*plVar10 + 0x440))(plVar10,param_3), cVar5 != '\0')))) {
      bVar6 = *(byte *)(param_3 + 0x179);
      cVar5 = FUN_1449e2a3e(param_3);
      if ((cVar5 == '\0') || (bVar6 != 4)) {
        FUN_146f33cf2(param_1,&local_50,param_3,0);
        if (local_50 == 0) {
          local_68 = 0x101;
          local_66 = 1 < *(byte *)(param_3 + 0x179);
          local_65 = 1;
          local_60 = 0;
          if ((*(byte *)(param_3 + 0x60) & 0xc) == 0) {
            local_58 = 0;
          }
          else {
            local_58 = *(undefined4 *)(param_3 + 0x1a0);
          }
          local_54 = *(undefined4 *)(param_3 + 0x198);
          local_98 = *(undefined1 *)(param_1 + 0x5f0);
          FUN_142a86132(param_1,&local_70,param_3);
          if (local_70 == 0) {
            local_50 = 0;
          }
          else {
            bVar7 = *(byte *)(param_3 + 0x60);
            if ((bVar7 & 0xc) == 4) {
              local_88[0] = 0;
              iVar8 = FUN_146f34824(param_1,*(undefined8 *)(param_3 + 0x10),1);
              if (iVar8 == 0) {
                FUN_146f45b8e(*(undefined8 *)(param_1 + 0x28),local_70,1,0);
              }
              bVar7 = *(byte *)(param_3 + 0x60);
            }
            if ((bVar7 & 1) != 0) {
              FUN_146f46246(*(undefined8 *)(param_1 + 0x28),local_70);
            }
            if (1 < bVar6) {
              FUN_142a882b4(param_1,local_70,1);
            }
            FUN_1435a1bf6(param_1,param_3);
            iVar8 = *(int *)(param_3 + 0x218);
            if ((longlong)iVar8 == 0) {
              lVar9 = (longlong)*(int *)(param_3 + 0x228);
              local_50 = local_70;
              if (lVar9 != 0) {
                local_88[0] = local_70;
                local_88[1] = 0;
                local_78 = 0;
                plVar10 = *(longlong **)(param_3 + 0x220);
                goto LAB_1435a1b8a;
              }
            }
            else {
              local_88[0] = local_70;
              local_88[1] = 0;
              local_78 = 0;
              lVar9 = *(longlong *)(param_3 + 0x210);
              lVar11 = 0;
              do {
                iVar3 = *(int *)(lVar9 + 4 + lVar11);
                if ((((iVar3 != 0) && (uVar2 = *(uint *)(lVar9 + lVar11), -1 < (int)uVar2)) &&
                    (((int)uVar2 < DAT_14c9647dc &&
                     ((((plVar10 = (longlong *)
                                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                        plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar3)) &&
                       ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
                      ((lVar4 = *plVar10, lVar4 != 0 && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0))))
                     )))) && (*(int *)(lVar9 + 0x10 + lVar11) != 0xf)) {
                  local_98 = *(undefined1 *)(param_1 + 0x5f1);
                  FUN_142a863b6(param_1,&local_90,lVar4,local_88);
                  if ((local_90 != 0) && (*(int *)(lVar9 + 0x10 + lVar11) != 0)) {
                    FUN_142a864c6(param_1);
                  }
                }
                lVar11 = lVar11 + 0x14;
              } while ((longlong)iVar8 * 0x14 != lVar11);
              lVar9 = (longlong)*(int *)(param_3 + 0x228);
              local_50 = local_70;
              if (lVar9 != 0) {
                plVar10 = *(longlong **)(param_3 + 0x220);
LAB_1435a1b8a:
                plVar1 = plVar10 + lVar9 * 5;
                do {
                  lVar9 = *plVar10;
                  if (((lVar9 != 0) && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) &&
                     ((int)plVar10[2] != 0xf)) {
                    FUN_1406caa56(*(undefined8 *)(lVar9 + 0xa8));
                  }
                  plVar10 = plVar10 + 5;
                  local_50 = local_70;
                } while (plVar10 != plVar1);
              }
            }
          }
        }
        *param_2 = local_50;
        goto LAB_1435a193e;
      }
    }
  }
  *param_2 = 0;
LAB_1435a193e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1435a1bf6 FUN_1435a1bf6 body=912 status=ok
// SIG undefined FUN_1435a1bf6(void)

void FUN_1435a1bf6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14caf9cd0 == 0) {
    local_60 = &local_38;
    local_38 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = (code *)&LAB_1463c0cc2;
    local_68 = &LAB_147c9db5b;
    local_70 = (code *)&LAB_1463f9c44;
    local_78 = L"Game";
    local_80 = 0x2000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x958;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30)) {
    if (DAT_14cae8b20 == 0) {
      local_60 = &local_38;
      local_38 = (code *)&LAB_14355090c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147b8e16d;
      local_70 = (code *)&LAB_140810a38;
      local_78 = L"Engine";
      local_80 = 0x800000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar5 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_60 = &local_38;
      local_38 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar4 = *(longlong *)(param_2 + 0x20);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar5 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
           (lVar6 = lVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar5 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
      if ((lVar6 != 0) &&
         (((lVar5 = lVar6, *(longlong *)(lVar6 + 0xc0) == 0 ||
           (*(longlong *)(*(longlong *)(lVar6 + 0xc0) + 0x30) != lVar6)) ||
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0x1a8) + 0x30) != lVar6))))
      {
LAB_1435a1cf7:
        lVar4 = lVar5;
        lVar5 = lVar4;
        if (*(longlong *)(lVar4 + 0x20) != 0) goto code_r0x0001435a1d06;
        goto LAB_1435a1d18;
      }
    }
  }
LAB_1435a1ccb:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001435a1d06:
  lVar5 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) goto LAB_1435a1cf7;
  lVar5 = FUN_142840154(lVar4);
LAB_1435a1d18:
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x20);
    goto LAB_1435a1cf7;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  FUN_146f3a0bc(param_1,&local_38,lVar6);
  if (local_38 == (code *)0x0) {
    FUN_146f3a33c(param_1,&local_40,lVar6,uVar2);
    local_38 = local_40;
    FUN_147bd698c(*(undefined8 *)(param_1 + 0x5f8),lVar6);
  }
  pcVar3 = local_38;
  FUN_146f33cf2(param_1,&local_40,param_2,0);
  FUN_142a9d5c4(*(undefined8 *)(param_1 + 0x28),pcVar3,local_40);
  goto LAB_1435a1ccb;
}



// FUNCTION 1435a1f88 FUN_1435a1f88 body=611 status=ok
// SIG undefined FUN_1435a1f88(void)

void FUN_1435a1f88(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_98;
  int local_90;
  longlong local_80;
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = param_2;
  FUN_142a884ce();
  if ((*(longlong **)(param_1 + 0x5f8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x3c0))(), cVar1 != '\0')) {
    lVar2 = FUN_146f33c96(param_1,param_2);
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(lVar2 + 0x10);
    }
    cVar1 = FUN_146f35d48(param_1,lVar6);
    if ((cVar1 != '\0') &&
       (plVar3 = (longlong *)FUN_147bd691a(*(undefined8 *)(param_1 + 0x5f8),param_3),
       plVar3 != (longlong *)0x0)) {
      if (lVar6 == 0) {
        FUN_140056680(&local_98,&DAT_149e01fe8);
      }
      else {
        local_48[0] = *(longlong *)(lVar6 + 0x18);
        FUN_1400021e4(local_48,&local_98);
      }
      puVar7 = local_98;
      if (local_90 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      if (lVar2 == 0) {
        FUN_140056680(&local_58,&DAT_149e01fe8);
      }
      else {
        local_48[0] = *(longlong *)(lVar2 + 0x18);
        FUN_1400021e4(local_48,&local_58);
      }
      puVar5 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar5 = local_58;
      }
      FUN_146f2727e(&local_38,&local_68);
      puVar4 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar4 = local_68;
      }
      local_a8 = puVar7;
      FUN_140002266(local_48,L"Protocol mismatch: %s:%s. Class: %s",puVar4,puVar5);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1459b235e(&local_98,0x6d);
      FUN_143587eda(plVar3,&local_98);
      if (local_70 != 0) {
        (**(code **)(local_70 + -0x10))(local_70 + -0x10);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      FUN_147a4786e(plVar3,local_48);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,1);
      FUN_1459b235e(&local_98,0x6d);
      FUN_143587ad8(plVar3,&local_98);
      if (local_70 != 0) {
        (**(code **)(local_70 + -0x10))(local_70 + -0x10);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a21ec FUN_1435a21ec body=69 status=ok
// SIG undefined FUN_1435a21ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a21ec(void)

{
  _DAT_14caf2610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a222e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2618,1);
  return;
}



// FUNCTION 1435a2232 FUN_1435a2232 body=1925 status=ok
// SIG undefined FUN_1435a2232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1435a2232(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  char cVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  code **local_220;
  code *local_218;
  code *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  code *local_168;
  code *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar13 = *(longlong **)(lVar2 + 0x5f8);
  cVar11 = (**(code **)(*param_4 + 0x10))(param_4);
  if (cVar11 == '\0') {
    local_168 = (code *)0x0;
    FUN_142a836ac(*(undefined8 *)(lVar2 + 0x48),param_4 + 5,*(undefined8 *)(param_3 + 8),&local_168)
    ;
    pcVar10 = local_168;
    if (local_168 != (code *)0x0) {
      if (DAT_14cac9ca8 == 0) {
        local_168 = FUN_141030f22;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_14081d0ea;
        local_228 = &LAB_1478c0a72;
        local_230 = &LAB_1417b2375;
        local_238 = L"Engine";
        local_240 = 0x1000000000;
        local_248 = 0x10000004;
        local_250 = 8;
        local_258 = 0x390;
        local_220 = &local_168;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(pcVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        *param_2 = (longlong)pcVar10;
        *(undefined4 *)(param_2 + 1) = 0;
        cVar11 = (**(code **)(*plVar13 + 0x450))(plVar13,pcVar10);
        if (cVar11 != '\0') {
          *(undefined4 *)(param_2 + 1) = 1;
        }
        goto LAB_1435a2703;
      }
    }
  }
  else {
    local_168 = (code *)0x0;
    FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_4 + 0x11,
                  *(undefined8 *)(param_3 + 8),&local_168);
    pcVar10 = local_168;
    if (local_168 != (code *)0x0) {
      if (DAT_14cac9ca8 == 0) {
        local_168 = FUN_141030f22;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_14081d0ea;
        local_228 = &LAB_1478c0a72;
        local_230 = &LAB_1417b2375;
        local_238 = L"Engine";
        local_240 = 0x1000000000;
        local_248 = 0x10000004;
        local_250 = 8;
        local_258 = 0x390;
        local_220 = &local_168;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(pcVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        if ((char)param_4[0x15] == '\0') {
          local_168 = (code *)0x0;
          FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_4 + 0x13,
                        *(undefined8 *)(param_3 + 8),&local_168);
          local_148 = local_168;
          if (local_168 == (code *)0x0) goto LAB_1435a23a9;
          if (DAT_14cae8b20 == 0) {
            local_168 = (code *)&LAB_14355090c;
            local_210 = FUN_14081d0ea;
            local_218 = FUN_14081d0ea;
            local_228 = &LAB_147b8e16d;
            local_230 = &LAB_140810a38;
            local_238 = L"Engine";
            local_240 = 0x800000000;
            local_248 = 0x10000000;
            local_250 = 8;
            local_258 = 0x3f0;
            local_220 = &local_168;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          if ((*(int *)(*(longlong *)(local_148 + 0x10) + 0x38) < *(int *)(DAT_14cae8b20 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_148 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) != DAT_14cae8b20 + 0x30))
          goto LAB_1435a23a9;
        }
        else {
LAB_1435a23a9:
          local_148 = (code *)0x0;
        }
        local_168 = (code *)0x0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_128 = 0;
        local_118 = (longlong *)0x0;
        pcStack_160 = pcVar10;
        local_138 = 0x800030101;
        lVar2 = plVar13[0x35];
        FUN_1434e162a(&local_188,param_4 + 5,lVar2 + 0x710);
        auVar1 = *(undefined1 (*) [16])(param_4 + 8);
        auVar14 = divpd(auVar1,_DAT_1499387d0);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = param_4[10];
        auVar15 = divpd(auVar15,_DAT_1499387d0);
        auVar14 = roundpd(auVar14,auVar14,3);
        auVar15 = roundpd(auVar15,auVar15,3);
        dVar8 = (auVar1._0_8_ - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar9 = (auVar1._8_8_ - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar6 = ((double)param_4[10] - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
        ;
        dVar7 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar3 = sin(dVar8);
        dVar4 = sin(dVar9);
        dVar5 = sin(dVar6);
        sin(dVar7);
        dVar8 = cos(dVar8);
        dVar9 = cos(dVar9);
        dVar6 = cos(dVar6);
        cos(dVar7);
        dVar7 = dVar4 * dVar3 * dVar5 + dVar9 * dVar8 * dVar6;
        local_1e8 = dVar3 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
        dStack_1e0 = -(dVar3 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5;
        local_1d8._8_4_ = SUB84(dVar7,0);
        local_1d8._0_8_ = -(dVar9 * dVar3 * dVar5) + dVar4 * dVar8 * dVar6;
        local_1d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        uStack_1c0 = (undefined4)uStack_180;
        uStack_1bc = (undefined4)((ulonglong)uStack_180 >> 0x20);
        local_1c8 = local_188;
        uStack_1c4 = uStack_184;
        local_1b8 = local_178;
        uStack_1b0 = 0;
        local_1a8 = 0x3ff0000000000000;
        uStack_1a0 = 0x3ff0000000000000;
        local_198 = 0x3ff0000000000000;
        uStack_190 = 0;
        plVar12 = (longlong *)
                  FUN_1410371ba(lVar2,*(undefined8 *)(pcVar10 + 0x10),&local_1e8,&local_168);
        if (plVar12 == (longlong *)0x0) {
          *param_2 = 0;
          param_2[1] = 0;
        }
        else {
          if (((9.999999747378752e-05 < ABS((double)param_4[0xe] - *(double *)(param_1 + 0x88))) ||
              (9.999999747378752e-05 < ABS((double)param_4[0xf] - *(double *)(param_1 + 0x90)))) ||
             (9.999999747378752e-05 < ABS((double)param_4[0x10] - *(double *)(param_1 + 0x98)))) {
            (**(code **)(*plVar12 + 0x438))(plVar12,param_4 + 0xe);
          }
          if (((9.999999747378752e-05 < ABS((double)param_4[0xb] - *(double *)(param_1 + 0x70))) ||
              (9.999999747378752e-05 < ABS((double)param_4[0xc] - *(double *)(param_1 + 0x78)))) ||
             (9.999999747378752e-05 < ABS((double)param_4[0xd] - *(double *)(param_1 + 0x80)))) {
            local_1f8 = param_4[0xd];
            local_208 = (undefined4)param_4[0xb];
            uStack_204 = *(undefined4 *)((longlong)param_4 + 0x5c);
            uStack_200 = (undefined4)param_4[0xc];
            uStack_1fc = *(undefined4 *)((longlong)param_4 + 100);
            FUN_140aff5e4(plVar12);
          }
          *param_2 = (longlong)plVar12;
          *(undefined4 *)(param_2 + 1) = 0;
          cVar11 = (**(code **)(*plVar13 + 0x450))(plVar13,plVar12);
          if (cVar11 != '\0') {
            *(undefined4 *)(param_2 + 1) = 1;
          }
        }
        if (local_128 != 0) {
          plVar13 = local_118;
          if (local_118 == (longlong *)0x0) {
            plVar13 = local_108;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        goto LAB_1435a2703;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1435a2703:
  if ((local_e0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a29b8 FUN_1435a29b8 body=514 status=ok
// SIG undefined FUN_1435a29b8(void)

void FUN_1435a29b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  undefined **local_118 [5];
  byte local_ef;
  longlong *local_c0;
  longlong local_a0;
  longlong local_88;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = param_2[1];
    uVar4 = FUN_147bd691a(*(undefined8 *)(lVar2 + 0x5f8),(int)param_2[2]);
    FUN_140215cb8(local_118,uVar4,*(undefined8 *)(lVar3 + 0x10),*(undefined2 *)(lVar3 + 0x20));
    (**(code **)(*plVar1 + 0x3e0))(plVar1,local_118,uVar4);
    if (((local_ef & 2) == 0) && (local_78 == local_70)) {
      local_118[0] = &PTR_FUN_149e73df0;
      if (local_60 != 0) {
        (**(code **)(local_60 + -0x10))(local_60 + -0x10);
      }
      local_118[0] = &PTR_FUN_149e37220;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_118[0] = &PTR__purecall_149e35f70;
      if (local_c0 != (longlong *)0x0) {
        if (*local_c0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_c0);
      }
      if (local_a0 != 0) {
        if (*(longlong *)(local_a0 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      FUN_147bd8e66(lVar2,plVar1);
    }
    else {
      local_118[0] = &PTR_FUN_149e73df0;
      if (local_60 != 0) {
        (**(code **)(local_60 + -0x10))(local_60 + -0x10);
      }
      local_118[0] = &PTR_FUN_149e37220;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_118[0] = &PTR__purecall_149e35f70;
      if (local_c0 != (longlong *)0x0) {
        if (*local_c0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_c0);
      }
      if (local_a0 != 0) {
        if (*(longlong *)(local_a0 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a2bbb FUN_1435a2bbb body=555 status=ok
// SIG undefined FUN_1435a2bbb(void)

void FUN_1435a2bbb(undefined8 param_1,double *param_2,double *param_3,char param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  double dVar7;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  double *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [208];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_4 == '\0') {
    dVar7 = 9.999999747378752e-05;
  }
  else {
    dVar7 = 0.009999999776482582;
  }
  bVar6 = true;
  if ((ABS(*param_2 - *param_3) <= dVar7) && (ABS(param_2[1] - param_3[1]) <= dVar7)) {
    bVar6 = dVar7 < ABS(param_2[2] - param_3[2]);
  }
  local_168[0] = bVar6;
  FUN_146f5435e(param_1,bVar6 != false,1);
  if (local_168[0] != '\0') {
    local_168[0] = param_4;
    FUN_146f5435e(param_1,param_4 != '\0',1);
    local_168[0] = '\0';
    local_168[1] = '\0';
    local_168[2] = '\0';
    local_168[3] = '\0';
    local_168[4] = '\0';
    local_168[5] = '\0';
    local_168[6] = '\0';
    local_168[7] = '\0';
    local_168[8] = '\0';
    local_168[9] = '\0';
    local_168[10] = '\0';
    local_168[0xb] = '\0';
    local_168[0xc] = '\0';
    local_168[0xd] = '\0';
    local_168[0xe] = '\0';
    local_168[0xf] = '\0';
    lVar2 = 0x18;
    do {
      pcVar1 = local_168 + lVar2;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0xd8);
    puVar5 = &DAT_14c99abd8;
    local_48 = local_48 & 0xfc;
    bVar6 = param_4 != '\0';
    if (bVar6) {
      puVar5 = &DAT_14c99b078;
    }
    local_98 = 0;
    local_90 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0xffffffff00000000;
    local_190 = &local_188;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_1a8 = 0;
    local_1a0 = *puVar5;
    local_1b0 = *(undefined8 *)(puVar5 + 0x1a);
    puVar4 = &DAT_14c99ac00;
    if (bVar6) {
      puVar4 = &DAT_14c99b0a0;
    }
    puVar3 = (undefined8 *)&DAT_14c99abe0;
    if (bVar6) {
      puVar3 = &DAT_14c99b080;
    }
    local_198 = param_2;
    local_88 = param_1;
    (*(code *)*puVar4)(local_168,&local_1b0);
    local_1c8 = 0;
    local_1c0 = *puVar5;
    local_1b8 = local_190;
    local_1d0 = *(undefined8 *)(puVar5 + 0x1a);
    (*(code *)*puVar3)(local_168);
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a2de7 FUN_1435a2de7 body=403 status=ok
// SIG undefined FUN_1435a2de7(void)

void FUN_1435a2de7(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 *local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [26];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 local_4c;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar4 = FUN_146f546d2(param_1,1);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_146f546d2(param_1,1);
    local_168[0] = 0;
    local_168[1] = 0;
    lVar5 = 0x18;
    do {
      *(undefined8 *)((longlong)local_168 + lVar5) = 0;
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0xd8);
    local_48 = local_48 & 0xfc;
    bVar9 = (uVar4 & 1) == 0;
    puVar8 = &DAT_14c99b078;
    if (bVar9) {
      puVar8 = &DAT_14c99abd8;
    }
    local_98 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_4c = 0xffffffff;
    local_190 = &local_188;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_1a0 = 0;
    local_198 = *puVar8;
    local_1a8 = *(undefined8 *)(puVar8 + 0x1a);
    puVar6 = &DAT_14c99abe8;
    if (!bVar9) {
      puVar6 = &DAT_14c99b088;
    }
    puVar7 = (undefined8 *)&DAT_14c99ac08;
    if (!bVar9) {
      puVar7 = &DAT_14c99b0a8;
    }
    local_90 = param_1;
    (*(code *)*puVar6)(local_168,&local_1a8);
    local_1c8 = 0;
    local_1c0 = *puVar8;
    local_1b8 = local_190;
    local_1d0 = *(undefined8 *)(puVar8 + 0x1a);
    local_1b0 = param_2;
    (*(code *)*puVar7)(local_168);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1f8);
  }
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a2f80 FUN_1435a2f80 body=422 status=ok
// SIG undefined FUN_1435a2f80(void)

undefined8 * FUN_1435a2f80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_146f33c96(*(undefined8 *)(param_1 + 0x28),param_3);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
    goto LAB_1435a3098;
  }
  FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),&local_48,plVar3);
  if ((local_48 & 1) == 0 && CONCAT44(uStack_44,local_48) != 0) {
    cVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3);
    if (cVar2 != '\0') goto LAB_1435a2ff0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)((longlong)puVar4 + 0xc) = 0xff;
    *puVar4 = &PTR_FUN_14a9ee9c0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),&local_58,plVar3[2]);
    *(undefined4 *)(puVar4 + 2) = local_58;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_54;
    *(undefined4 *)(puVar4 + 3) = uStack_50;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_4c;
    lVar1 = plVar3[4];
    if (lVar1 == DAT_14c951640) {
      *(undefined1 *)(puVar4 + 6) = 2;
    }
    else {
      FUN_146f28a60(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x28) +
                    0x160,&local_60,param_3);
      lVar5 = FUN_146f33c96(*(undefined8 *)(param_1 + 0x28),local_60);
      if (lVar1 == lVar5) {
        *(undefined1 *)(puVar4 + 6) = 4;
      }
      else {
        FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),&local_58,lVar1);
        *(undefined4 *)(puVar4 + 4) = local_58;
        *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_54;
        *(undefined4 *)(puVar4 + 5) = uStack_50;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_4c;
      }
    }
  }
  else {
LAB_1435a2ff0:
    puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)((longlong)puVar4 + 0xc) = 0xff;
    *puVar4 = &PTR_FUN_14a9ee9a0;
    *(uint *)(puVar4 + 2) = local_48;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_44;
    *(undefined4 *)(puVar4 + 3) = uStack_40;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_3c;
  }
  *param_2 = puVar4;
LAB_1435a3098:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a3128 FUN_1435a3128 body=794 status=ok
// SIG undefined FUN_1435a3128(void)

longlong * FUN_1435a3128(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  uint local_b0;
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(*param_4 + 0x10))(param_4);
  if (cVar2 == '\0') {
    local_50 = (code *)0x0;
    FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_4 + 2,
                  *(undefined8 *)(param_3 + 8),&local_50);
    if (local_50 == (code *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *param_2 = (longlong)local_50;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    goto LAB_1435a31aa;
  }
  pcVar3 = (code *)FUN_146f33c96(*(longlong *)(param_1 + 0x28),*(undefined8 *)(param_3 + 0x10));
  pcVar6 = DAT_14c951640;
  if (((*(byte *)(param_4 + 6) & 2) == 0) && (pcVar6 = pcVar3, (*(byte *)(param_4 + 6) & 4) == 0)) {
    local_50 = (code *)0x0;
    FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_4 + 4,
                  *(undefined8 *)(param_3 + 8),&local_50);
    if (local_50 != (code *)0x0) {
      pcVar6 = local_50;
    }
  }
  local_50 = (code *)0x0;
  FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_4 + 2,
                *(undefined8 *)(param_3 + 8),&local_50);
  pcVar3 = local_50;
  if (local_50 == (code *)0x0) {
LAB_1435a3287:
    pcVar3 = (code *)0x0;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_60 = FUN_140631fbe;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar4;
      FUN_1446f470e(local_58,L"Class",1);
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      pwStack_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8._0_4_ = 8;
      local_80 = &local_60;
      FUN_14574b4b2(lVar4);
      DAT_14c949118 = lVar4;
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_1468c5283;
        local_90 = FUN_142809da0;
        local_98 = L"Engine";
        pwStack_a0 = (wchar_t *)0x400000000;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
        local_b0 = 8;
        local_b8._0_4_ = 0x50;
        local_80 = &local_50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar1 = DAT_14c951858;
      lVar4 = DAT_14c949118;
      uVar5 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar5,lVar4,lVar1,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_1435a3287;
  }
  local_a8 = 0;
  pwStack_a0 = (wchar_t *)0x0;
  local_b0 = local_b0 & 0xffffff00;
  local_b8 = (wchar_t *)0x0;
  lVar4 = FUN_140584627(pcVar6,pcVar3,0,0);
  *param_2 = lVar4;
  *(undefined4 *)(param_2 + 1) = 3;
LAB_1435a31aa:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1435a3443 FUN_1435a3443 body=69 status=ok
// SIG undefined FUN_1435a3443(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a3443(void)

{
  _DAT_14caf2620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a3485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2628,1);
  return;
}



// FUNCTION 1435a3488 FUN_1435a3488 body=69 status=ok
// SIG undefined FUN_1435a3488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a3488(void)

{
  _DAT_14caf2630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a34ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2638,1);
  return;
}



// FUNCTION 1435a34cd FUN_1435a34cd body=69 status=ok
// SIG undefined FUN_1435a34cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a34cd(void)

{
  _DAT_14caf2640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a350f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2648,1);
  return;
}



// FUNCTION 1435a3512 FUN_1435a3512 body=48 status=ok
// SIG undefined FUN_1435a3512(void)

void FUN_1435a3512(byte *param_1)

{
  uint uVar1;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    if (0 < (int)DAT_14c76160c) {
      *param_1 = *param_1 | DAT_14c76160c <= uVar1;
    }
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  return;
}



// FUNCTION 1435a3542 FUN_1435a3542 body=172 status=ok
// SIG undefined FUN_1435a3542(void)

void FUN_1435a3542(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*param_1 != 0) {
    FUN_146efe122(*param_1,param_2);
    return;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = FUN_146efe1bf;
  puVar5[1] = FUN_1435a468c;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = *(undefined8 *)(param_2 + 4);
  puVar5[5] = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(puVar5 + 6) = param_2[8];
  *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  puVar5[7] = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  lVar1 = *param_1;
  *param_1 = (longlong)(puVar5 + 2);
  if (lVar1 != 0) {
                    /* WARNING: Jumptable with 0 entries at 0x0001435a35d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 1435a35ee FUN_1435a35ee body=104 status=ok
// SIG undefined FUN_1435a35ee(void)

void FUN_1435a35ee(int *param_1,ushort *param_2,int param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ushort uVar4;
  
  uVar2 = param_1[1];
  if ((ulonglong)(longlong)param_3 <= (ulonglong)(*param_1 - uVar2)) {
    if (1 < param_3) {
      uVar2 = (uVar2 + param_3) - 1;
      param_1[1] = uVar2;
    }
    piVar3 = param_1 + 4;
    if (*(int **)(param_1 + 0x84) != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 0x84);
    }
    iVar1 = piVar3[param_1[2] & uVar2];
    param_1[1] = uVar2 + 1;
    if ((short)iVar1 == param_4) {
      uVar4 = (ushort)((uint)iVar1 >> 0x10);
      goto LAB_1435a3637;
    }
  }
  uVar4 = param_4 + 0x3f00U & 0x3fff;
LAB_1435a3637:
  *param_2 = uVar4;
  return;
}



// FUNCTION 1435a3656 FUN_1435a3656 body=162 status=ok
// SIG undefined FUN_1435a3656(void)

void FUN_1435a3656(longlong param_1,ushort param_2,byte param_3)

{
  uint *puVar1;
  undefined1 auVar2 [32];
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar4 = *(ushort *)(param_1 + 0x24e);
  while ((uVar4 != param_2 && ((param_2 - uVar4 & 0x2000) == 0))) {
    uVar4 = uVar4 + 1 & 0x3fff;
    *(ushort *)(param_1 + 0x24e) = uVar4;
    bVar3 = uVar4 == param_2 & param_3;
    auVar6._0_12_ = ZEXT112(bVar3) << 0x40;
    auVar6[0xc] = bVar3;
    auVar6._13_3_ = 0;
    lVar5 = 0;
    do {
      puVar1 = (uint *)(param_1 + 0x22c + lVar5 * 4);
      auVar8._0_4_ = *puVar1 >> 0x1f;
      auVar8._4_4_ = puVar1[1] >> 0x1f;
      auVar8._8_4_ = puVar1[2] >> 0x1f;
      auVar8._12_4_ = puVar1[3] >> 0x1f;
      auVar2._16_16_ = auVar8;
      auVar2._0_16_ = auVar6;
      auVar7._4_4_ = puVar1[1] * 2;
      auVar7._0_4_ = *puVar1 * 2;
      auVar7._8_4_ = puVar1[2] * 2;
      auVar7._12_4_ = puVar1[3] * 2;
      *(undefined1 (*) [16])(param_1 + 0x22c + lVar5 * 4) = auVar7 | auVar2._12_16_;
      lVar5 = lVar5 + 4;
      auVar6 = auVar8;
    } while (lVar5 != 8);
    uVar4 = *(ushort *)(param_1 + 0x24e);
  }
  return;
}



// FUNCTION 1435a36f8 FUN_1435a36f8 body=69 status=ok
// SIG undefined FUN_1435a36f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a36f8(void)

{
  _DAT_14caf2668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a373a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2670,1);
  return;
}



// FUNCTION 1435a373d FUN_1435a373d body=69 status=ok
// SIG undefined FUN_1435a373d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a373d(void)

{
  _DAT_14caf2680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a377f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2688,1);
  return;
}



// FUNCTION 1435a3782 FUN_1435a3782 body=69 status=ok
// SIG undefined FUN_1435a3782(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a3782(void)

{
  _DAT_14caf2698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a37c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf26a0,1);
  return;
}



// FUNCTION 1435a37c7 FUN_1435a37c7 body=69 status=ok
// SIG undefined FUN_1435a37c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a37c7(void)

{
  _DAT_14caf26a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a3809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf26b0,1);
  return;
}



// FUNCTION 1435a380c FUN_1435a380c body=69 status=ok
// SIG undefined FUN_1435a380c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a380c(void)

{
  _DAT_14caf26b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a384e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf26c0,1);
  return;
}



// FUNCTION 1435a3851 FUN_1435a3851 body=69 status=ok
// SIG undefined FUN_1435a3851(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a3851(void)

{
  _DAT_14caf26c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a3893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf26d0,1);
  return;
}



// FUNCTION 1435a3896 FUN_1435a3896 body=1674 status=ok
// SIG undefined FUN_1435a3896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a3896(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  longlong local_b8 [4];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf26f0) && (FUN_144b3d300(&DAT_14caf26f0), DAT_14caf26f0 == -1)) {
    DAT_14caf26e0 = 0;
    _DAT_14caf26e8 = 0;
    atexit((_func_5014 *)&LAB_1435a3f21);
    _Init_thread_footer(&DAT_14caf26f0);
  }
  FUN_14099d55c(DAT_14caf2690,&local_70,0);
  uVar7 = DAT_14caf26f4;
  if (DAT_14caf26e8 == local_68) {
    if (1 < DAT_14caf26e8) {
      lVar9 = 0;
      while( true ) {
        uVar14 = *(ushort *)(DAT_14caf26e0 + lVar9);
        uVar15 = (ulonglong)uVar14;
        uVar16 = *(ushort *)(local_70 + lVar9);
        if (uVar14 != uVar16) break;
        if (uVar14 == 0) goto LAB_1435a3982;
LAB_1435a3946:
        lVar9 = lVar9 + 2;
      }
      if ((uVar16 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar17 = (ulonglong)uVar16;
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_1435a3946;
      }
      if (uVar14 != uVar16) goto LAB_1435a3a7c;
    }
LAB_1435a3982:
    *(uint *)(param_1 + 6) = DAT_14caf26f4;
    *(undefined4 *)((longlong)param_1 + 0x34) = DAT_14caf26f8;
  }
  else {
    if (DAT_14caf26e8 + local_68 == 1) goto LAB_1435a3982;
LAB_1435a3a7c:
    iVar8 = local_68 + -1;
    if (local_68 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&DAT_14caf26e0,local_70,iVar8);
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_d0 = FUN_14788515c();
    local_d8 = FUN_147885193();
    FUN_1403de9f2(&local_70,&local_88,&DAT_149e06196,1);
    lVar9 = local_88;
    lVar11 = (longlong)(int)plStack_80;
    uVar12 = 0;
    if (lVar11 != 0) {
      lVar20 = 0;
      do {
        local_98 = (void *)0x0;
        local_90 = *(int *)(lVar9 + 8 + lVar20);
        lVar19 = (longlong)local_90;
        _Src = *(void **)(lVar9 + lVar20);
        if (lVar19 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_90,0);
          memcpy(local_98,_Src,lVar19 * 2);
        }
        local_b8[2] = 0;
        local_b8[3] = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        FUN_140056680(local_c8,&DAT_149e06162);
        local_e0 = 0;
        local_e8 = 1;
        cVar5 = FUN_1407cdbc6(&local_98,local_c8,local_b8 + 2,local_b8);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        lVar19 = local_d0;
        if (cVar5 != '\0') {
          iVar8 = FUN_1401e9588(local_d0,local_b8 + 2);
          if (iVar8 == -1) {
            lVar19 = -1;
          }
          else {
            lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x40) + 8 + (longlong)iVar8 * 0x10);
          }
          iVar8 = FUN_1401e9588(local_d8,local_b8);
          if (((iVar8 != -1) && (lVar19 != -1)) &&
             (lVar3 = *(longlong *)(*(longlong *)(local_d8 + 0x40) + 8 + (longlong)iVar8 * 0x10),
             lVar3 != -1)) {
            uVar18 = (uint)lVar19;
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar18;
            uVar7 = (uint)((ulonglong)lVar19 >> 0x10) & 0xffff;
            if (0xffff >= uVar18) {
              uVar7 = uVar18;
            }
            uVar10 = (uint)(0xffff < uVar18) * 0x10;
            uVar13 = uVar10 + 8;
            uVar18 = uVar7 >> 8;
            if (uVar7 < 0x100) {
              uVar13 = uVar10;
              uVar18 = uVar7;
            }
            uVar7 = uVar13 + 4;
            uVar10 = uVar18 >> 4;
            if (uVar18 < 0x10) {
              uVar7 = uVar13;
              uVar10 = uVar18;
            }
            uVar18 = uVar7 + 2;
            uVar13 = uVar10 >> 2;
            if (uVar10 < 4) {
              uVar18 = uVar7;
              uVar13 = uVar10;
            }
            *(char *)((longlong)param_1 + (((ulonglong)uVar18 + 0x35) - (ulonglong)(uVar13 < 2))) =
                 (char)lVar3;
          }
        }
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_b8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar20 = lVar20 + 0x10;
      } while (lVar11 * 0x10 != lVar20);
      uVar12 = (int)plStack_80;
    }
    DAT_14caf26f4 = *(uint *)(param_1 + 6);
    DAT_14caf26f8 = *(undefined4 *)((longlong)param_1 + 0x34);
    FUN_1447a1747(local_88,uVar12);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    uVar7 = *(uint *)(param_1 + 6);
  }
  if ((uVar7 & 1) != 0) {
    if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
      uVar6 = FUN_147bde6aa(param_1 + 10);
    }
    else if (*(char *)((longlong)param_1 + 0x34) == '\0') {
      uVar6 = FUN_147bde66e(param_1 + 8);
    }
    else {
      uVar6 = FUN_147bde6e4(param_1 + 0xc);
    }
    *(undefined1 *)(param_1 + 7) = uVar6;
    uVar7 = *(uint *)(param_1 + 6);
  }
  if ((uVar7 & 2) != 0) {
    if (*(char *)((longlong)param_1 + 0x35) == '\x01') {
      uVar6 = FUN_147bde6aa(param_1 + 10);
    }
    else if (*(char *)((longlong)param_1 + 0x35) == '\0') {
      uVar6 = FUN_147bde66e(param_1 + 8);
    }
    else {
      uVar6 = FUN_147bde6e4(param_1 + 0xc);
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = uVar6;
  }
  if ((*param_1 == 0) || (lVar9 = *(longlong *)(*param_1 + 0x58), lVar9 == 0)) goto LAB_1435a39e6;
  lVar9 = *(longlong *)(lVar9 + 0xf0);
  if ((DAT_14c950c29 == '\x01') && (lVar9 != 0)) {
    FUN_1456cec3c(lVar9);
  }
  else if (lVar9 == 0) goto LAB_1435a39e6;
  uVar7 = *(uint *)(param_1 + 6);
  if ((uVar7 & 4) != 0) {
    if (*(char *)((longlong)param_1 + 0x36) == '\x01') {
      uVar6 = FUN_147bde6aa(param_1 + 10);
    }
    else if (*(char *)((longlong)param_1 + 0x36) == '\0') {
      uVar6 = FUN_147bde66e(param_1 + 8);
    }
    else {
      uVar6 = FUN_147bde6e4(param_1 + 0xc);
    }
    *(undefined1 *)((longlong)param_1 + 0x3a) = uVar6;
    FUN_147bdc4dc(&local_88,lVar9);
    plVar1 = plStack_80;
    param_1[0x10] = local_88;
    local_88 = 0;
    plVar4 = (longlong *)param_1[0x11];
    if (plStack_80 == plVar4) {
LAB_1435a3e03:
      plVar4 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_80)(plStack_80);
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
    else {
      plStack_80 = (longlong *)0x0;
      param_1[0x11] = (longlong)plVar1;
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
        goto LAB_1435a3e03;
      }
    }
    uVar7 = *(uint *)(param_1 + 6);
  }
  if ((uVar7 & 8) != 0) {
    if (*(char *)((longlong)param_1 + 0x37) == '\x01') {
      uVar6 = FUN_147bde6aa(param_1 + 10);
    }
    else if (*(char *)((longlong)param_1 + 0x37) == '\0') {
      uVar6 = FUN_147bde66e(param_1 + 8);
    }
    else {
      uVar6 = FUN_147bde6e4(param_1 + 0xc);
    }
    *(undefined1 *)((longlong)param_1 + 0x3b) = uVar6;
    FUN_147bdc77a(&local_88,param_1);
    plVar1 = plStack_80;
    param_1[0x12] = local_88;
    local_88 = 0;
    plVar4 = (longlong *)param_1[0x13];
    if (plStack_80 != plVar4) {
      plStack_80 = (longlong *)0x0;
      param_1[0x13] = (longlong)plVar1;
      if (plVar4 == (longlong *)0x0) goto LAB_1435a39e6;
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
    plVar4 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
LAB_1435a39e6:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a3f32 FUN_1435a3f32 body=189 status=ok
// SIG undefined FUN_1435a3f32(void)

void FUN_1435a3f32(longlong param_1,uint param_2,undefined4 param_3,double param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  
  if ((*(uint *)(param_1 + 0x30) & param_2) != 0) {
    uVar3 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    if (param_2 == 0) {
      uVar3 = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x38 + (ulonglong)uVar3);
    cVar2 = *(char *)(param_1 + 0x34 + (ulonglong)uVar3);
    if (cVar2 == '\0') {
      piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)((uint)bVar1 * 0x30));
      if (param_4 < *(double *)(*(longlong *)(param_1 + 0x40) + 8 + (ulonglong)((uint)bVar1 * 0x30))
         ) {
        *(double *)(piVar4 + 2) = param_4;
      }
      if (*(double *)(piVar4 + 4) <= param_4 && param_4 != *(double *)(piVar4 + 4)) {
        *(double *)(piVar4 + 4) = param_4;
      }
      *(double *)(piVar4 + 6) = param_4;
      *(double *)(piVar4 + 8) = param_4 + *(double *)(piVar4 + 8);
      piVar4[10] = piVar4[10] + 1;
    }
    else if (cVar2 == '\x01') {
      piVar4 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)bVar1 * 0xb8);
      FUN_147bdc864(*(longlong *)(param_1 + 0x50) + (ulonglong)bVar1 * 0xb8 + 0x30,param_3,param_4);
    }
    else {
      piVar4 = (int *)((ulonglong)((uint)bVar1 * 0x50) + *(longlong *)(param_1 + 0x60));
      FUN_147bdc19c(piVar4,param_3,(float)param_4);
    }
    *piVar4 = *piVar4 + (uint)((param_2 & 0xc) == 0);
  }
  return;
}



// FUNCTION 1435a3ff0 FUN_1435a3ff0 body=524 status=ok
// SIG undefined FUN_1435a3ff0(void)

void FUN_1435a3ff0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 6) & param_2) == 0) goto LAB_1435a40bf;
  uVar11 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> uVar11 == 0; uVar11 = uVar11 - 1) {
    }
  }
  if (param_2 == 0) {
    uVar11 = 0;
  }
  bVar3 = *(byte *)((longlong)param_1 + (ulonglong)uVar11 + 0x38);
  cVar4 = *(char *)((longlong)param_1 + (ulonglong)uVar11 + 0x34);
  if (cVar4 == '\x01') {
    puVar8 = (uint *)((ulonglong)bVar3 * 0xb8 + param_1[10]);
  }
  else if (cVar4 == '\0') {
    puVar8 = (uint *)((ulonglong)((uint)bVar3 * 0x30) + param_1[8]);
  }
  else {
    puVar8 = (uint *)((ulonglong)((uint)bVar3 * 0x50) + param_1[0xc]);
  }
  uVar11 = puVar8[1] + 1;
  puVar8[1] = uVar11;
  lVar10 = DAT_14caf26d8;
  if (uVar11 != *puVar8) goto LAB_1435a40bf;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar9 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  if (uVar11 < *(uint *)(lVar10 + uVar9 * 4)) goto LAB_1435a40bf;
  if (param_2 == 4) {
    FUN_147bdc8fa(param_1,&local_48);
    param_1[0x10] = 0;
    plVar12 = (longlong *)param_1[0x11];
    lVar10 = local_48;
    if (plVar12 != (longlong *)0x0) {
      param_1[0x11] = 0;
LAB_1435a4157:
      lVar10 = local_48;
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  else {
    if (param_2 != 8) {
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & ~param_2;
      goto LAB_1435a40bf;
    }
    FUN_147bdc962(param_1,&local_48);
    param_1[0x12] = 0;
    plVar12 = (longlong *)param_1[0x13];
    lVar10 = local_48;
    if (plVar12 != (longlong *)0x0) {
      param_1[0x13] = 0;
      goto LAB_1435a4157;
    }
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & ~param_2;
  if ((local_40 - 2U < 0x7fffffff) && (*param_1 != 0)) {
    local_49 = 1;
    FUN_140002266(&local_48,L"%i=%s",param_2,lVar10);
    FUN_147bdcaa4(*param_1,&local_49,&local_48);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (lVar10 != 0) {
    FUN_1400020a8(lVar10);
  }
LAB_1435a40bf:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a41fe FUN_1435a41fe body=163 status=ok
// SIG undefined FUN_1435a41fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a41fe(longlong param_1,double param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x20) - 2U < 0x7fffffff) &&
     (*(double *)(param_1 + 0x28) <= param_2 && param_2 != *(double *)(param_1 + 0x28))) {
    FUN_147bdcc44(param_1,param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (((uVar1 & 4) != 0) &&
     (*(double *)(param_1 + 0x70) <= param_2 && param_2 != *(double *)(param_1 + 0x70))) {
    *(double *)(param_1 + 0x70) = (double)_DAT_14c761618 + param_2;
    FUN_147bdcdfc(param_1,param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if (((uVar1 & 8) != 0) &&
     (*(double *)(param_1 + 0x78) <= param_2 && param_2 != *(double *)(param_1 + 0x78))) {
    *(double *)(param_1 + 0x78) = (double)_DAT_14c76161c + param_2;
    FUN_147bdcec6(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1435a42a2 FUN_1435a42a2 body=401 status=ok
// SIG undefined FUN_1435a42a2(void)

void FUN_1435a42a2(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(uint *)(param_1 + 0x30) & param_2) != 0) && (*(int *)(param_1 + 0xc4) < 8)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
    if (param_2 == 8) {
      if ((int)param_3[1] - 2U < 0x7fffffff) {
        local_28 = (undefined8 *)0x0;
        uStack_20 = 0;
        iVar2 = FUN_1403de9f2(param_3,&local_28,&DAT_149e31048,1);
        if (iVar2 < 3) {
          iVar2 = *(int *)(local_28 + 1) + -1;
          if (*(int *)(local_28 + 1) == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            FUN_1402980a2(param_1 + 0xb0,*local_28);
          }
          if ((int)uStack_20 == 2) {
            cVar1 = FUN_1405b43cc(local_28 + 2);
            if (cVar1 != '\0') {
              if (*(int *)(local_28 + 3) == 0) {
                _Str = L"";
              }
              else {
                _Str = (wchar_t *)local_28[2];
              }
              iVar2 = _wtoi(_Str);
              *(int *)(param_1 + 0xc0) = iVar2;
            }
          }
          FUN_147bdcb90(param_1,8);
        }
        FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
        if (local_28 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (param_2 == 4) {
      local_30 = 0xffffffff;
      local_38 = 0;
      iVar2 = FUN_1447ee042(param_3,&DAT_149e31048,1,1);
      if (iVar2 == -1) {
        iVar2 = (int)param_3[1] + -1;
        if ((int)param_3[1] == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(param_1 + 0xa0,*param_3,iVar2);
        FUN_147bdcb90(param_1,4);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a4434 FUN_1435a4434 body=59 status=ok
// SIG undefined FUN_1435a4434(void)

void FUN_1435a4434(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14caf2708;
  if (DAT_14caf2708 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14caf2708 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a4464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435a4470 FUN_1435a4470 body=379 status=ok
// SIG undefined FUN_1435a4470(void)

void FUN_1435a4470(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((((param_1 != (longlong *)0x0) && (DAT_14c998208 == '\x01')) &&
      (plVar3 = (longlong *)param_1[2], (*(byte *)((longlong)plVar3 + 0xd5) & 8) != 0)) &&
     (param_2 != 0)) {
    for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3)) {
      for (lVar9 = plVar3[10]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8001) == 0) {
LAB_1435a44e4:
          if (*(longlong *)(lVar9 + 0x20) == param_2) {
            if ((*(byte *)(lVar9 + 0x38) & 0x20) == 0) {
              return;
            }
            uVar4 = (**(code **)(*param_1 + 0x280))(param_1);
            if (uVar4 < 0xffffffff00000000) {
              plVar3 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar3 = (longlong *)0x0;
              }
                    /* WARNING: Could not recover jumptable at 0x0001435a45e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar3 + 0x58))(plVar3,param_1,uVar4);
              return;
            }
            uVar2 = (uint)uVar4;
            if ((int)uVar2 < 0) {
              return;
            }
            if (DAT_14c998088 <= (int)uVar2) {
              return;
            }
            puVar7 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar7 = DAT_14c998080;
            }
            if ((*(uint *)(puVar7 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar2 & 0x1f) & 1) == 0) {
              return;
            }
            lVar5 = (ulonglong)(uVar2 & 0x7fffffff) * 0x68 + DAT_14c998060;
            lVar6 = *(longlong *)(lVar5 + 0x18);
            if (*(longlong *)(lVar5 + 0x18) == 0) {
              lVar6 = lVar5 + 8;
            }
            puVar1 = (uint *)(lVar6 + (ulonglong)(*(ushort *)(lVar9 + 0x40) >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)*(ushort *)(lVar9 + 0x40) & 0x1f);
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
            return;
          }
          plVar8 = (longlong *)(lVar9 + 0x18);
          do {
            for (lVar9 = *plVar8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8001) == 0) goto LAB_1435a44e4;
            }
            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3);
            plVar8 = plVar3 + 10;
            if (plVar3 == (longlong *)0x0) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}



// FUNCTION 1435a468c FUN_1435a468c body=61 status=ok
// SIG undefined FUN_1435a468c(void)

void FUN_1435a468c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = FUN_146efe1bf;
  puVar1[1] = FUN_1435a468c;
  FUN_146efe1f2(puVar1 + 2,param_1);
  return;
}



// FUNCTION 1435a46c9 FUN_1435a46c9 body=67 status=ok
// SIG undefined FUN_1435a46c9(void)

void FUN_1435a46c9(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      plVar1 = (longlong *)plVar2[-1];
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0)) {
        (**(code **)(*plVar1 + 0x148))(plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) + *plVar2)
        ;
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1435a484c FUN_1435a484c body=122 status=ok
// SIG undefined FUN_1435a484c(void)

void FUN_1435a484c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1435a48c6 FUN_1435a48c6 body=29 status=ok
// SIG undefined FUN_1435a48c6(void)

undefined8 FUN_1435a48c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a48f8 FUN_1435a48f8 body=93 status=ok
// SIG undefined FUN_1435a48f8(void)

void FUN_1435a48f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9b20d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eec00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1435a4956 FUN_1435a4956 body=93 status=ok
// SIG undefined FUN_1435a4956(void)

void FUN_1435a4956(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9b20d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eec00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1435a49b4 FUN_1435a49b4 body=126 status=ok
// SIG undefined FUN_1435a49b4(void)

void FUN_1435a49b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9b20d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eec00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a4a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435a4a32 FUN_1435a4a32 body=42 status=ok
// SIG undefined FUN_1435a4a32(void)

void FUN_1435a4a32(longlong param_1,longlong *param_2)

{
  FUN_1435a4a82(param_1 + 0x18);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435a4a5c FUN_1435a4a5c body=38 status=ok
// SIG undefined FUN_1435a4a5c(void)

undefined1 FUN_1435a4a5c(longlong param_1,longlong *param_2)

{
  FUN_1435a4a82(param_1 + 0x18);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 1435a4a82 FUN_1435a4a82 body=184 status=ok
// SIG undefined FUN_1435a4a82(void)

void FUN_1435a4a82(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _Src = (void *)*param_2;
  local_38 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_38;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = DAT_14cb0d2b0;
  lVar1 = *param_1;
  local_40 = (void *)0x0;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  FUN_147bdf328(uVar2,*(undefined8 *)(lVar1 + 0x1a8),lVar1,&local_40);
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a4b3c FUN_1435a4b3c body=822 status=ok
// SIG undefined FUN_1435a4b3c(void)

/* WARNING: Removing unreachable block (ram,0x0001435a4d51) */
/* WARNING: Removing unreachable block (ram,0x0001435a4d60) */

void FUN_1435a4b3c(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  int local_a0;
  uint local_9c;
  uint *local_98;
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar17 = *param_1;
  iVar12 = (*(int *)(lVar17 + 0x488) - *(int *)(lVar17 + 0x4b4)) + (int)param_2[1];
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
    FUN_147087202();
  }
  iVar12 = *(int *)(lVar17 + 0x4a8);
  if (iVar12 == 0) {
    uVar16 = 1;
    uVar13 = 0;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar10 = *(uint **)(lVar17 + 0x4a0);
    if (*(uint **)(lVar17 + 0x4a0) == (uint *)0x0) {
      puVar10 = (uint *)(lVar17 + 0x490);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar15 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar15 = iVar12 + -1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_1435a4e27;
        iVar15 = iVar15 + 0x20;
        uVar14 = puVar10[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar13 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar6) {
      iVar6 = iVar12;
    }
  }
  if (iVar6 < iVar12) {
    uVar14 = 0xffffffff;
    local_98 = (uint *)(lVar17 + 0x490);
    local_90 = lVar17;
    uVar2 = local_78;
    uVar3 = local_70;
    uVar4 = local_68;
    uVar5 = local_60;
    do {
      local_60 = uVar5;
      local_68 = uVar4;
      local_70 = uVar3;
      local_78 = uVar2;
      local_88 = (void *)0x0;
      local_80 = *(int *)(*(longlong *)(local_90 + 0x480) + 8 + (longlong)iVar6 * 0x28);
      lVar17 = (longlong)local_80;
      _Src = *(void **)(*(longlong *)(local_90 + 0x480) + (longlong)iVar6 * 0x28);
      local_a0 = iVar15;
      local_9c = uVar14;
      if (lVar17 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar17 * 2);
      }
      FUN_146b280ea(&local_78,&local_88);
      iVar12 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
        FUN_146b17dba(param_2,iVar12);
      }
      lVar17 = *param_2;
      lVar11 = (longlong)iVar12 * 0x30;
      *(undefined8 *)(lVar17 + lVar11) = 0;
      *(undefined8 *)(lVar17 + lVar11) = local_78;
      *(undefined4 *)(lVar17 + 8 + lVar11) = (undefined4)local_70;
      *(undefined4 *)(lVar17 + 0xc + lVar11) = local_70._4_4_;
      *(undefined8 *)(lVar17 + 0x10 + lVar11) = 0;
      *(undefined8 *)(lVar17 + 0x10 + lVar11) = local_68;
      *(undefined4 *)(lVar17 + 0x18 + lVar11) = (undefined4)local_60;
      *(undefined4 *)(lVar17 + 0x1c + lVar11) = local_60._4_4_;
      *(undefined8 *)(lVar17 + 0x20 + lVar11) = local_58;
      *(undefined1 *)(lVar17 + 0x28 + lVar11) = local_50;
      *(undefined4 *)(lVar17 + 0x2c + lVar11) = local_4c;
      local_60 = 0;
      uVar5 = local_60;
      local_68 = 0;
      uVar4 = local_68;
      local_70 = 0;
      uVar3 = local_70;
      local_78 = 0;
      uVar2 = local_78;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      uVar14 = local_9c & ~(uint)uVar16;
      puVar10 = *(uint **)(local_90 + 0x4a0);
      if (*(uint **)(local_90 + 0x4a0) == (uint *)0x0) {
        puVar10 = local_98;
      }
      iVar12 = *(int *)(local_90 + 0x4a8);
      iVar6 = (int)uVar13;
      lVar17 = (longlong)iVar6;
      uVar7 = puVar10[lVar17] & uVar14;
      iVar15 = local_a0;
      if (uVar7 == 0) {
        iVar8 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar8 = iVar12 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar7 = puVar10[lVar17 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar17 == lVar11) goto LAB_1435a4e27;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar16 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar12);
  }
LAB_1435a4e27:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a4e9e FUN_1435a4e9e body=29 status=ok
// SIG undefined FUN_1435a4e9e(void)

undefined8 FUN_1435a4e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a4ed2 FUN_1435a4ed2 body=708 status=ok
// SIG undefined FUN_1435a4ed2(void)

void FUN_1435a4ed2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar2 = *param_2;
  lVar6 = param_2[1];
  lVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a();
    DAT_14c87ead8 = '\x01';
  }
  if (*(int *)(lVar3 + 0x220) != *(int *)(lVar3 + 0x24c)) {
    lVar12 = lVar3 + 0x250;
    if (*(longlong *)(lVar3 + 600) != 0) {
      lVar12 = *(longlong *)(lVar3 + 600);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar3 + 0x260) - 1U &
                               (DAT_14c892fdc << 0x10 | DAT_14c892fdc & 0xffff) +
                               ((DAT_14c892fdc & 0xffff) >> 4) +
                               ((DAT_14c892fdc >> 0x10) << 0x13 | DAT_14c892fdc >> 0x10)) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar3 + 0x218) + (longlong)iVar10 * 0x80;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x218) + (longlong)iVar10 * 0x80) ==
            (ulonglong)DAT_14c892fdc) goto LAB_1435a4f8a;
        iVar10 = *(int *)(lVar12 + 0x78);
      } while (iVar10 != -1);
    }
  }
  lVar12 = 0;
LAB_1435a4f8a:
  if ((int)lVar6 != 0) {
    uVar1 = *(uint *)(lVar12 + 0x20);
    lVar12 = 0;
    do {
      lVar8 = FUN_147bd691a(lVar3,*(undefined4 *)(lVar2 + lVar12));
      if ((((lVar8 != 0) && (-1 < (int)uVar1)) && ((int)uVar1 < *(int *)(lVar8 + 0x13f8))) &&
         (lVar8 = *(longlong *)(lVar8 + 0x13f0), *(longlong *)(lVar8 + (ulonglong)uVar1 * 8) != 0))
      {
        lVar9 = FUN_145b58d0a();
        lVar8 = *(longlong *)(lVar8 + (ulonglong)uVar1 * 8);
        if (((lVar8 != 0) && (lVar9 != 0)) &&
           ((lVar4 = *(longlong *)(lVar8 + 0x10), lVar4 != 0 &&
            ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30)))))) {
          plVar5 = *(longlong **)(lVar8 + 0x28);
          lVar9 = plVar5[0xb];
          if ((*(char *)(lVar9 + 0x849) == '\x01') && ((*(byte *)(lVar8 + 0x2090) & 4) != 0)) {
            iVar10 = 0;
            if (0 < DAT_14c761600) {
              iVar10 = DAT_14c761600;
            }
            uVar11 = (ushort)(*(short *)((longlong)plVar5 + 0x1c8c) -
                             *(short *)((longlong)plVar5 + 0x1c8e)) & 0x3fff;
            if ((((DAT_14c761600 < 0x100) && (uVar11 == 0x100 || (uVar11 + 0x3f00 >> 0xd & 1) != 0))
                && (uVar11 <= 0x100U - iVar10)) &&
               (((ulonglong)(uint)(*(int *)(lVar8 + 0x70) - *(int *)(lVar8 + 0x74)) <
                 (ulonglong)(longlong)*(int *)(lVar8 + 0x88) &&
                (((((*(uint *)((longlong)plVar5 + 0xa4) & 2) != 0 ||
                   (*(longlong *)(lVar9 + 0xf0) != 0)) ||
                  (*(int *)plVar5[0x282] != *(int *)((longlong)plVar5 + 0x1434))) &&
                 (((plVar5[0x28] == 0 || (*(char *)(plVar5[0x28] + 1) == '\x02')) &&
                  (*(int *)(lVar8 + 0x4c) < 0x1ff)))))))) {
              if (*(code **)(*plVar5 + 0x308) == FUN_144b25b64) {
                if ((*(uint *)((longlong)plVar5 + 0xa4) & 4) == 0) {
                  if (DAT_14caf25c0 != '\0') {
                    *(int *)(plVar5 + 0x40) = -(int)plVar5[0xd8];
                  }
                  if ((char)plVar5[0x3bb] == '\x01') {
                    bVar7 = FUN_1435aa440(plVar5 + 0x3af,*(undefined8 *)(lVar9 + 0x300));
                  }
                  else {
                    lVar9 = (longlong)(int)plVar5[0x40] + plVar5[0xd8];
                    bVar7 = lVar9 == 0 ||
                            SCARRY8((longlong)(int)plVar5[0x40],plVar5[0xd8]) != lVar9 < 0;
                  }
                }
                else {
                  bVar7 = 1;
                }
                uVar11 = (uint)bVar7;
              }
              else {
                uVar11 = (**(code **)(*plVar5 + 0x308))();
              }
              if (uVar11 != 0) {
                FUN_1435a0ef4(lVar8,1);
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar12);
  }
  return;
}



// FUNCTION 1435a5196 FUN_1435a5196 body=29 status=ok
// SIG undefined FUN_1435a5196(void)

undefined8 FUN_1435a5196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a51c8 FUN_1435a51c8 body=85 status=ok
// SIG undefined FUN_1435a51c8(void)

void FUN_1435a51c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eee00;
  return;
}



// FUNCTION 1435a521e FUN_1435a521e body=85 status=ok
// SIG undefined FUN_1435a521e(void)

void FUN_1435a521e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eee00;
  return;
}



// FUNCTION 1435a5274 FUN_1435a5274 body=118 status=ok
// SIG undefined FUN_1435a5274(void)

void FUN_1435a5274(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eee00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a52db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435a52f2 FUN_1435a52f2 body=19 status=ok
// SIG undefined FUN_1435a52f2(void)

undefined1 FUN_1435a52f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1435a5306(param_2);
  return 1;
}



// FUNCTION 1435a5306 FUN_1435a5306 body=436 status=ok
// SIG undefined FUN_1435a5306(void)

void FUN_1435a5306(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  int local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar1 = FUN_1447ee042(puVar4,L"NetDriverName=",0xe,1);
      if (iVar1 != -1) {
        if (puVar4 != (undefined8 *)0x0) {
          if (*(int *)(puVar4 + 1) == 0) {
            puVar2 = &DAT_149dfb77a;
          }
          else {
            puVar2 = (undefined2 *)*puVar4;
          }
          pwVar3 = L"NetDriverName=";
          goto LAB_1435a5421;
        }
        break;
      }
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      puVar4 = (undefined8 *)*param_1;
      lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
      do {
        local_50 = 0xffffffff;
        local_58 = 0;
        iVar1 = FUN_1447ee042(puVar4,L"NetDriverDef=",0xd,1);
        if (iVar1 != -1) {
          if (puVar4 != (undefined8 *)0x0) {
            if (*(int *)(puVar4 + 1) == 0) {
              puVar2 = &DAT_149dfb77a;
            }
            else {
              puVar2 = (undefined2 *)*puVar4;
            }
            pwVar3 = L"NetDriverDef=";
LAB_1435a5421:
            FUN_140e134ac(puVar2,pwVar3,local_30);
          }
          break;
        }
        puVar4 = puVar4 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  FUN_147bceaba(&local_48,0x10,1,0);
  if (local_38 < local_40 && -1 < local_38) {
    do {
      lVar6 = (longlong)local_38;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
        local_38 = local_38 + 1;
        if (local_40 <= lVar6) goto LAB_1435a5490;
      } while (*(longlong *)(local_48 + lVar6 * 8) == 0);
    } while ((-2 < lVar5) && (local_38 < local_40));
  }
LAB_1435a5490:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a54bc FUN_1435a54bc body=29 status=ok
// SIG undefined FUN_1435a54bc(void)

undefined8 FUN_1435a54bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a54ee FUN_1435a54ee body=85 status=ok
// SIG undefined FUN_1435a54ee(void)

void FUN_1435a54ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eeed0;
  return;
}



// FUNCTION 1435a5544 FUN_1435a5544 body=85 status=ok
// SIG undefined FUN_1435a5544(void)

void FUN_1435a5544(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eeed0;
  return;
}



// FUNCTION 1435a559a FUN_1435a559a body=118 status=ok
// SIG undefined FUN_1435a559a(void)

void FUN_1435a559a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eeed0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a5601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435a5610 FUN_1435a5610 body=62 status=ok
// SIG undefined FUN_1435a5610(void)

void FUN_1435a5610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5692(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5650 FUN_1435a5650 body=64 status=ok
// SIG undefined FUN_1435a5650(void)

undefined8 FUN_1435a5650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5692(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5692 FUN_1435a5692 body=488 status=ok
// SIG undefined FUN_1435a5692(void)

void FUN_1435a5692(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  char local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 1) < 1) goto LAB_1435a56bc;
  uVar1 = *param_2;
  local_11c = 0;
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)*param_1;
  }
  FUN_146842e8b(&local_11c,puVar7);
  local_128 = FUN_145b58c20();
  if ((local_128 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_128);
  }
  FUN_147be246c(&local_b8,uVar1,&local_128);
  cVar2 = local_98._4_1_;
  if (local_98._4_1_ == '\0') {
    do {
      FUN_147bd7b9c(local_88,local_11c);
      FUN_147be24ee(&local_b8);
    } while (local_98._4_1_ == '\0');
  }
  if (local_60 == '\x01') {
    FUN_14024445c(&uStack_b0);
  }
  if (cVar2 == '\0') goto LAB_1435a56bc;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0x800000100;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uVar3 = FUN_145b58c20();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  lVar4 = FUN_141037e38(uVar1,uVar3,&local_118,&local_b8);
  if (lVar4 == 0) {
LAB_1435a5842:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_145b58c20();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1435a5842;
  }
  if (local_78 != 0) {
    plVar6 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar6 = local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_147bd7b9c(lVar4,local_11c);
LAB_1435a56bc:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a587c FUN_1435a587c body=29 status=ok
// SIG undefined FUN_1435a587c(void)

undefined8 FUN_1435a587c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a58ae FUN_1435a58ae body=85 status=ok
// SIG undefined FUN_1435a58ae(void)

void FUN_1435a58ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eef40;
  return;
}



// FUNCTION 1435a5904 FUN_1435a5904 body=85 status=ok
// SIG undefined FUN_1435a5904(void)

void FUN_1435a5904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eef40;
  return;
}



// FUNCTION 1435a595a FUN_1435a595a body=118 status=ok
// SIG undefined FUN_1435a595a(void)

void FUN_1435a595a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eef40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a59c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435a59d0 FUN_1435a59d0 body=62 status=ok
// SIG undefined FUN_1435a59d0(void)

void FUN_1435a59d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5a52(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5a10 FUN_1435a5a10 body=64 status=ok
// SIG undefined FUN_1435a5a10(void)

undefined8 FUN_1435a5a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5a52(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5a52 FUN_1435a5a52 body=536 status=ok
// SIG undefined FUN_1435a5a52(void)

void FUN_1435a5a52(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  char local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((int)param_1[1] < 2) goto LAB_1435a5a7c;
  uVar1 = *param_2;
  local_11c = 0;
  puVar8 = &DAT_149dfb77a;
  puVar7 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
    puVar7 = *(undefined2 **)*param_1;
  }
  FUN_146842e8b(&local_11c,puVar7);
  local_120 = 0;
  if (*(int *)(*param_1 + 0x18) != 0) {
    puVar8 = *(undefined2 **)(*param_1 + 0x10);
  }
  FUN_146842c83(&local_120,puVar8);
  local_128 = FUN_145b58c20();
  if ((local_128 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_128);
  }
  FUN_147be246c(&local_b8,uVar1,&local_128);
  cVar2 = local_98._4_1_;
  if (local_98._4_1_ == '\0') {
    do {
      FUN_147bd7dc2(local_88,local_11c,local_120);
      FUN_147be24ee(&local_b8);
    } while (local_98._4_1_ == '\0');
  }
  if (local_60 == '\x01') {
    FUN_14024445c(&uStack_b0);
  }
  if (cVar2 == '\0') goto LAB_1435a5a7c;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0x800000100;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uVar3 = FUN_145b58c20();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  lVar4 = FUN_141037e38(uVar1,uVar3,&local_118,&local_b8);
  if (lVar4 == 0) {
LAB_1435a5c2d:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_145b58c20();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1435a5c2d;
  }
  if (local_78 != 0) {
    plVar6 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar6 = local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_147bd7dc2(lVar4,local_11c,local_120);
LAB_1435a5a7c:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5c6c FUN_1435a5c6c body=29 status=ok
// SIG undefined FUN_1435a5c6c(void)

undefined8 FUN_1435a5c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a5c9e FUN_1435a5c9e body=85 status=ok
// SIG undefined FUN_1435a5c9e(void)

void FUN_1435a5c9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eefb0;
  return;
}



// FUNCTION 1435a5cf4 FUN_1435a5cf4 body=85 status=ok
// SIG undefined FUN_1435a5cf4(void)

void FUN_1435a5cf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eefb0;
  return;
}



// FUNCTION 1435a5d4a FUN_1435a5d4a body=118 status=ok
// SIG undefined FUN_1435a5d4a(void)

void FUN_1435a5d4a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eefb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435a5db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435a5dc0 FUN_1435a5dc0 body=59 status=ok
// SIG undefined FUN_1435a5dc0(void)

void FUN_1435a5dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5e3a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5dfc FUN_1435a5dfc body=61 status=ok
// SIG undefined FUN_1435a5dfc(void)

undefined8 FUN_1435a5dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1435a5e3a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5e3a FUN_1435a5e3a body=253 status=ok
// SIG undefined FUN_1435a5e3a(void)

void FUN_1435a5e3a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = *param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0x800000100;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uVar2 = FUN_145b58c20();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  lVar3 = FUN_141037e38(uVar1,uVar2,&local_118,&local_b8);
  if (lVar3 != 0) {
    FUN_145b58c20();
  }
  if (local_78 != 0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a5f38 FUN_1435a5f38 body=311 status=ok
// SIG undefined FUN_1435a5f38(void)

undefined8 FUN_1435a5f38(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
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
  lVar2 = param_1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 1000))();
    lVar2 = param_1[0x22];
    if (lVar2 != 0) goto LAB_1435a5f77;
  }
  else {
LAB_1435a5f77:
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       ((*(byte *)(lVar2 + 0x60) & 0xc) == 0)) {
      uVar1 = CONCAT71((int7)((ulonglong)(DAT_14cac9ca8 + 0x30) >> 8),
                       (*(byte *)(lVar2 + 0x61) & 0x10) == 0);
      goto LAB_1435a5fa6;
    }
  }
  uVar1 = 0;
LAB_1435a5fa6:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6070 FUN_1435a6070 body=587 status=ok
// SIG undefined FUN_1435a6070(void)

bool FUN_1435a6070(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
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
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[0x22];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 1000))();
    lVar1 = param_1[0x22];
    if (lVar1 != 0) goto LAB_1435a60b0;
LAB_1435a60db:
    lVar1 = 0;
  }
  else {
LAB_1435a60b0:
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_1435a60db;
  }
  lVar2 = param_2[0x22];
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 1000))(param_2);
    lVar2 = param_2[0x22];
    if (lVar2 != 0) goto LAB_1435a6101;
  }
  else {
LAB_1435a6101:
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_1435a612e;
  }
  lVar2 = 0;
LAB_1435a612e:
  if (lVar1 == lVar2) {
    bVar3 = true;
  }
  else if ((lVar2 == 0 || lVar1 == 0) ||
          (((*(byte *)(lVar2 + 0x60) ^ *(byte *)(lVar1 + 0x60)) & 0xc) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = ((*(byte *)(lVar2 + 0x61) ^ *(byte *)(lVar1 + 0x61)) & 0x10) == 0;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a62bc FUN_1435a62bc body=128 status=ok
// SIG undefined FUN_1435a62bc(void)

void FUN_1435a62bc(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(*param_2 + 0x50) & 1) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x808), lVar1 != 0)) {
    lVar2 = FUN_145b58a4c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1435a1838(lVar1,local_20,*param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a633e FUN_1435a633e body=776 status=ok
// SIG undefined FUN_1435a633e(void)

void FUN_1435a633e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48;
  ulonglong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x808);
  if (lVar2 != 0) {
    lVar4 = FUN_145b58a4c();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      iVar1 = (int)param_1[1];
      lVar4 = *param_1;
      FUN_146f33cf2(lVar2,&local_40,lVar4,1);
      if (local_40 != 0) {
        uVar6 = 0x19;
        if (iVar1 != 0) {
          uVar6 = 0;
        }
        if ((iVar1 - 2U < 3) || ((*(byte *)(lVar4 + 0x60) & 1) != 0)) {
          uVar6 = uVar6 | 0x20;
        }
        if (((local_40 & 1) != 0 && iVar1 == 0) &&
           ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x50) & 1) != 0)) {
          lVar3 = *(longlong *)(lVar4 + 0x1c8);
          if (lVar3 == 0) {
            local_58 = DAT_14c8464f0;
            local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_68 = *(undefined8 *)(lVar3 + 0x260);
            uStack_60 = *(undefined8 *)(lVar3 + 0x268);
            local_58 = *(undefined8 *)(lVar3 + 0x270);
          }
          if (DAT_14cae8b20 == 0) {
            local_80 = &local_38;
            local_38 = (code *)&LAB_14355090c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_147b8e16d;
            local_90 = (code *)&LAB_140810a38;
            local_98 = L"Engine";
            local_a0 = 0x800000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar3 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_80 = &local_38;
            local_38 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1468c5283;
            local_90 = FUN_142809da0;
            local_98 = L"Engine";
            local_a0 = 0x400000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar5 = *(longlong *)(lVar4 + 0x20);
          if (lVar5 == 0) {
            local_50 = 0;
          }
          else {
            iVar1 = *(int *)(lVar3 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
                 (local_50 = lVar5,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                 lVar3 + 0x30)) {
                local_50 = 0;
              }
            } while ((local_50 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
          }
          local_48 = (*(byte *)(lVar4 + 0x60) & 8) == 0;
          FUN_142a85c76(lVar2,&local_38,local_40);
        }
        FUN_142a86902(lVar2,local_40,uVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6648 FUN_1435a6648 body=681 status=ok
// SIG undefined FUN_1435a6648(void)

void FUN_1435a6648(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(*param_2 + 0x50) & 1) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x808), lVar3 != 0)) {
    lVar5 = FUN_145b58a4c();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_70 = *param_1;
      FUN_146f33d6c(lVar3,&local_68);
      if (local_68 != 0) {
        lVar5 = param_1[1];
        lVar7 = *(longlong *)(lVar5 + 0xa8);
        plVar8 = (longlong *)0x0;
        FUN_146f33cf2(lVar3,&local_40,lVar5,0);
        lVar6 = (longlong)*(int *)(lVar7 + 0x228);
        if (lVar6 != 0) {
          plVar8 = *(longlong **)(lVar7 + 0x220);
          lVar6 = lVar6 * 0x28;
          do {
            if (*plVar8 == lVar5) goto LAB_1435a6736;
            plVar8 = plVar8 + 5;
            lVar6 = lVar6 + -0x28;
          } while (lVar6 != 0);
          plVar8 = (longlong *)0x0;
        }
LAB_1435a6736:
        if (local_40 == 0) {
          if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) goto LAB_1435a667d;
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if (((((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) || (-1 < *(char *)(lVar5 + 0x9c))) ||
              (plVar8 == (longlong *)0x0)) ||
             (((*(uint *)(lVar5 + 8) & 0x30) != 0 || ((int)plVar8[2] == 0xf)))) goto LAB_1435a667d;
          local_58 = local_68;
          local_50 = 0;
          local_48 = 0;
          local_78 = *(undefined1 *)(lVar3 + 0x5f1);
          FUN_142a863b6(lVar3,&local_60,lVar5);
          local_40 = local_60;
          if (local_60 == 0) goto LAB_1435a667d;
        }
        if ((int)plVar8[2] != 0) {
          FUN_142a864c6(lVar3,local_40);
        }
        local_58 = local_68;
        local_48 = 1;
        lVar5 = plVar8[4];
        local_50 = local_40;
        if ((longlong)(int)lVar5 != 0) {
          lVar7 = plVar8[3];
          lVar6 = 0;
          do {
            iVar1 = *(int *)(lVar7 + 4 + lVar6);
            if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar7 + lVar6), -1 < (int)uVar2)) &&
                 (((int)uVar2 < DAT_14c9647dc &&
                  (((plVar8 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                    plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)) &&
                   ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))))) &&
                ((lVar4 = *plVar8, lVar4 != 0 && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)))) &&
               (*(int *)(lVar7 + 0x10 + lVar6) != 0xf)) {
              local_78 = *(undefined1 *)(lVar3 + 0x5f1);
              FUN_142a863b6(lVar3,&local_60,lVar4,&local_58);
              if ((local_60 != 0) && (*(int *)(lVar7 + 0x10 + lVar6) != 0)) {
                FUN_142a864c6(lVar3);
              }
            }
            lVar6 = lVar6 + 0x14;
          } while ((longlong)(int)lVar5 * 0x14 != lVar6);
        }
      }
    }
  }
LAB_1435a667d:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a68f2 FUN_1435a68f2 body=201 status=ok
// SIG undefined FUN_1435a68f2(void)

void FUN_1435a68f2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(*param_2 + 0x50) & 1) != 0) {
    lVar1 = FUN_147bd6678();
    if (lVar1 != 0) {
      local_30 = *param_1;
      FUN_146f33d6c(lVar1,&local_28);
      if (local_28 != 0) {
        local_48 = local_28;
        local_40 = 0;
        local_38 = 0;
        local_58 = *(undefined1 *)(lVar1 + 0x5f1);
        FUN_142a863b6(lVar1,&local_50,param_1[1]);
        if ((local_50 != 0) && (*(int *)(param_1 + 2) != 0)) {
          FUN_142a864c6(lVar1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a69bc FUN_1435a69bc body=244 status=ok
// SIG undefined FUN_1435a69bc(void)

void FUN_1435a69bc(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(*param_2 + 0x50) & 1) != 0) {
    lVar1 = FUN_147bd6678();
    if (lVar1 != 0) {
      local_38 = *param_1;
      FUN_146f33d6c(lVar1,&local_30);
      FUN_146f33cf2(lVar1,&local_40,param_1[1],0);
      if (local_40 != 0 && local_30 != 0) {
        local_58 = local_30;
        local_50 = local_40;
        local_48 = 1;
        local_68 = *(undefined1 *)(lVar1 + 0x5f1);
        FUN_142a863b6(lVar1,&local_60,param_1[2]);
        if ((local_60 != 0) && (*(int *)(param_1 + 3) != 0)) {
          FUN_142a864c6(lVar1);
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



// FUNCTION 1435a6ab2 FUN_1435a6ab2 body=166 status=ok
// SIG undefined FUN_1435a6ab2(void)

void FUN_1435a6ab2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x808);
  if (lVar1 != 0) {
    lVar2 = FUN_145b58a4c();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (FUN_146f33cf2(lVar1,&local_28,*param_1,1), local_28 != 0)) {
      FUN_142a86902(lVar1,local_28,0x18);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6b5a FUN_1435a6b5a body=90 status=ok
// SIG undefined FUN_1435a6b5a(void)

void FUN_1435a6b5a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x808);
  if (lVar1 != 0) {
    lVar2 = FUN_145b58a4c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_146f34c92(lVar1,*param_1,0x19);
      return;
    }
  }
  return;
}



// FUNCTION 1435a6bb4 FUN_1435a6bb4 body=199 status=ok
// SIG undefined FUN_1435a6bb4(void)

void FUN_1435a6bb4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(*param_2 + 0x50) & 1) != 0) {
    lVar1 = FUN_147bd6678();
    if (lVar1 != 0) {
      local_38 = *param_1;
      FUN_146f33d6c(lVar1,&local_30);
      if (local_30 != 0) {
        FUN_146f33cf2(lVar1,&local_40,param_1[1],0);
        if (local_40 == 0) {
          FUN_1435a1838(lVar1,&local_48,param_1[1]);
          local_40 = local_48;
          if (local_48 == 0) goto LAB_1435a6bd8;
        }
        FUN_142a8654c(lVar1,local_30,local_40,*(undefined1 *)(param_1 + 2));
      }
    }
  }
LAB_1435a6bd8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6c7c FUN_1435a6c7c body=156 status=ok
// SIG undefined FUN_1435a6c7c(void)

void FUN_1435a6c7c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(*param_2 + 0x50) & 1) != 0) {
    lVar1 = FUN_146f23e78();
    if (lVar1 != 0) {
      local_30 = *param_1;
      FUN_146f33d6c(lVar1,&local_28);
      if (local_28 != 0) {
        local_40 = param_1[1];
        FUN_146f33d6c(lVar1,&local_38);
        FUN_142a865a0(lVar1,local_28,local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6d1a FUN_1435a6d1a body=130 status=ok
// SIG undefined FUN_1435a6d1a(void)

void FUN_1435a6d1a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0x50) & 1) != 0) {
    lVar2 = FUN_146f23e78(lVar1);
    if (lVar2 != 0) {
      local_30 = *param_1;
      FUN_146f33d6c(lVar2,&local_28);
      if (local_28 != 0) {
        FUN_146f461aa(lVar1,local_28,*(undefined4 *)(param_1 + 1),
                      *(undefined1 *)((longlong)param_1 + 0xc));
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6d9e FUN_1435a6d9e body=122 status=ok
// SIG undefined FUN_1435a6d9e(void)

void FUN_1435a6d9e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0x50) & 1) != 0) {
    lVar2 = FUN_146f23e78(lVar1);
    if (lVar2 != 0) {
      local_30 = *param_1;
      FUN_146f33d6c(lVar2,&local_28);
      FUN_146f45776(lVar1,local_28,*(undefined4 *)(param_1 + 1));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6e30 FUN_1435a6e30 body=12 status=ok
// SIG undefined FUN_1435a6e30(void)

void FUN_1435a6e30(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435a6e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435a6e3c FUN_1435a6e3c body=29 status=ok
// SIG undefined FUN_1435a6e3c(void)

undefined8 FUN_1435a6e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435a6e5a FUN_1435a6e5a body=224 status=ok
// SIG undefined FUN_1435a6e5a(void)

void FUN_1435a6e5a(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = *param_2;
  local_78 = *(longlong *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  local_70 = param_2[4];
  local_6c = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  local_68 = *(longlong *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_60 = param_2[8];
  local_5c = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  local_58 = param_2[10];
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_147068482(local_50,local_80);
    FUN_147bdd5ca(lVar1,local_50);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a6f78 FUN_1435a6f78 body=83 status=ok
// SIG undefined FUN_1435a6f78(void)

undefined8 * FUN_1435a6f78(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a9ef260;
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



// FUNCTION 1435a6fcc FUN_1435a6fcc body=224 status=ok
// SIG undefined FUN_1435a6fcc(void)

void FUN_1435a6fcc(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = *param_2;
  local_78 = *(longlong *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  local_70 = param_2[4];
  local_6c = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  local_68 = *(longlong *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_60 = param_2[8];
  local_5c = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  local_58 = param_2[10];
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_147068482(local_50,local_80);
    FUN_147bdd5ca(lVar1,local_50);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a70ea FUN_1435a70ea body=83 status=ok
// SIG undefined FUN_1435a70ea(void)

undefined8 * FUN_1435a70ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a9ef2a0;
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



// FUNCTION 1435a713d FUN_1435a713d body=4225 status=ok
// SIG undefined FUN_1435a713d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a713d(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9e7450,2,&PTR_FUN_14a9e73d0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2150,L"net.ClientIncomingBunchFrameTimeLimitMS",&DAT_14caf2160,
                L"Time in milliseconds to limit client incoming bunch processing to. If 0, no limit. As long as we\'re below the limit, will start processing another bunch. A single bunch that takes a while to process can overshoot the limit. After the limit is hit, remaining bunches in a packet are queued, and the IpNetDriver will not process any more packets in the current frame."
               );
  atexit(FUN_143594310);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2168,L"net.SerializeNewActorOverrideLevel",&DAT_14c76162c,
                L"If true, servers will serialize a spawned, replicated actor\'s level so the client attempts to spawn it into that level too. If false, clients will spawn all these actors into the persistent level."
               );
  atexit(FUN_143594355);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2178,L"net.SendDormantDestructionOnRemoval",&DAT_14c7615ec,
                L"If true and net.SerializeNewActorOverrideLevel = 0, servers will send destruction info for dormant destroyed actors in invisible levels, regardless of how they were removed. This ensures they destroy on the client, in-case the they (or the levels they are in) were removed unexpectedly."
               );
  atexit(FUN_14359439a);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2190,L"net.DiscardTornOffActorRPCs",&DAT_14c761624,
                L"If enabled, discard RPCs if the actor has been torn off.");
  atexit(FUN_1435943df);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf21a0,L"net.DormancyEnable",&DAT_14c7615f0,
                L"Enables Network Dormancy System for reducing CPU and bandwidth overhead of infrequently updated actors\n1 Enables network dormancy. 0 disables network dormancy."
               );
  atexit(FUN_143594424);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf21b0,L"net.DormancyValidate",&DAT_14caf2748,
                L"Validates that dormant actors do not change state while in a dormant state (on server only)0: Dont validate. 1: Validate on wake up. 2: Validate on each net update"
               );
  atexit(FUN_143594469);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf21c0,L"Net.ReuseReplicatorsForDormantObjects",&DAT_14caf2745,
                L"When true, Server\'s will persist and attempt to reuse replicators for Dormant Actors and Objects. This can cut down on bandwidth by preventing redundant information from being sent when waking objects from Dormancy."
               );
  atexit(FUN_1435944ae);
  local_50._0_4_ = 0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf21d0,L"net.DebugDraw",&local_50,
                L"Draws debug information for network dormancy and relevancy\n1 Enables network debug drawing. 0 disables."
               );
  atexit(FUN_1435944f3);
  local_50._0_4_ = 0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14caf21e8,L"net.DebugDrawCullDistance",&local_50,
                L"Cull distance for net.DebugDraw. World UnitsMax world units an actor can be away from the local view to draw its dormancy status. Zero disables culling"
               );
  atexit(FUN_143594538);
  local_50._0_4_ = 0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2200,L"net.UseAdaptiveNetUpdateFrequency",&local_50,
                L"If 1, NetUpdateFrequency will be calculated based on how often actors actually send something when replicating"
               );
  atexit(FUN_14359457d);
  local_50._0_4_ = 1;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2788,L"net.AllowEncryption",&local_50,
                L"If true, the engine will attempt to load an encryption PacketHandler component and fill in the EncryptionToken parameter of the NMT_Hello message based on the ?EncryptionToken= URL option and call callbacks if it\'s non-empty. Additionally, a value of \'2\' will make the EncryptionToken required - which is enforced serverside. (0 = Disabled, 1 = Allowed (default), 2 = Required)"
               );
  atexit(FUN_1435945c2);
  local_50._0_4_ = 1;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2218,L"net.ActorChannelPool",&local_50,
                L"If nonzero, actor channels will be pooled to save memory and object creation cost."
               );
  atexit(FUN_143594607);
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,1);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2230,L"net.AllowReliableMulticastToNonRelevantChannels",&local_50,
                L"Allow Reliable Server Multicasts to be sent to non-Relevant Actors, as long as their is an existing ActorChannel."
               );
  atexit(FUN_14359464c);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2248,L"net.ControlChannelDestructionInfo",&DAT_14caf2258,
                L"If enabled, send destruction info updates via the control channel instead of creating a new actor channel.0: Old behavior, use an actor channel. 1: New behavior, use the control channel"
               );
  atexit(FUN_143594691);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2260,L"net.ResetAckStatePostSeamlessTravel",&DAT_14caf2270,
                L"If 1, the server will reset the ack state of the package map after seamless travel. Increases bandwidth usage, but may resolve some issues with GUIDs not being available on clients after seamlessly traveling."
               );
  atexit(FUN_1435946d6);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14caf2278,L"net.AddNetDriverInfoToNetAnalytics",&local_50,
                L"Automatically add NetDriver information to the NetAnalytics cache");
  atexit(FUN_14359471b);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2290,L"net.DisableRandomNetUpdateDelay",&DAT_14caf22a0,
                L"If 1, the server will not add a random delay to an actors\' NextUpdateTime.");
  atexit(FUN_143594760);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf22a8,L"net.EnableNetStats",&DAT_14caf22b8,
                L"Enable the calculation of network stats and storing them in the network metrics database."
               );
  atexit(FUN_1435947a5);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf22c0,L"gbx.net.ReplicationBudgetSeconds",&DAT_14c7615f4,&DAT_149dfb77a);
  atexit(FUN_1435947ea);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf22d0,L"gbx.net.BudgetSkippedPriorityBoost",&DAT_14c7615f8,&DAT_149dfb77a);
  atexit(FUN_14359482f);
  FUN_140056680(&DAT_14caf22e0,&DAT_14a176c16);
  atexit((_func_5014 *)&LAB_143594874);
  DAT_14caf22f0 = 0;
  _DAT_14caf22f8 = 0;
  atexit((_func_5014 *)&LAB_143594885);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_14160744b;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  local_68 = &local_50;
  FUN_1412c810e(&DAT_14caf2300,L"net.RequiredEncryptionNetDriverDefNames",&DAT_14caf22e0,
                L"Comma-delimited list of NetDriverDefinition\'s where \'IsEncryptionRequired\' will return true, when \'net.AllowEncryption\' is 2. (specifying \'all\' will enable this for all NetDriverDefinition\'s)"
               );
  if (local_48 == 0) {
LAB_1435a7681:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1435a7681;
  }
  atexit(FUN_143594896);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2310,L"net.CleanUpRenamedDynamicActors",&DAT_14caf2320,
                L"When enabled, dynamic actors that change outers via Rename() on the server will close their channel or send a destruction info to clients without the actor\'s new level loaded."
               );
  atexit(FUN_1435948db);
  local_50._0_4_ = 1;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2328,L"net.OptimizedRemapping",&local_50,
                L"Uses optimized path to remap unmapped network guids");
  atexit(FUN_14359518f);
  local_50._0_4_ = 100;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2340,L"net.MaxClientGuidRemaps",&local_50,
                L"Max client resolves of unmapped network guids per tick");
  atexit(FUN_1435951d4);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2358,L"net.FilterGuidRemapping",&DAT_14c761628,
                L"Remove destroyed and parent guids from unmapped list");
  atexit(FUN_143595219);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2370,L"net.ReportGameTickFlushTime",&DAT_14caf2368,
                L"Record and report to the perf tracking system the processing time of the GameNetDriver\'s TickFlush."
               );
  atexit(FUN_14359525e);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2388,L"Net.LogPendingGuidsOnShutdown",&DAT_14caf2398,&DAT_149dfb77a);
  atexit(FUN_143596f74);
  _DAT_14caf23a0 = 0x3f50624dd2f1a9fc;
  DAT_14caf23c8 = 0;
  _DAT_14caf23d0 = 0;
  DAT_14caf23a8 = 0;
  _DAT_14caf23b0 = 0;
  _DAT_14caf23d4 = 0xffffffff00000080;
  _DAT_14caf23dc = 0;
  DAT_14caf23e8 = 0;
  _DAT_14caf23f0 = 0;
  atexit(FUN_1435977f2);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14627302a(&DAT_14caf23f8,L"net.MaxConnectionsToTickPerServerFrame",0,
                L"When non-zero, the maximum number of channels that will have changed replicated to them per server update"
               );
  atexit(FUN_14359a90f);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2450,L"Net.RepDriver.Enable",&DAT_14c7615fc,
                L"Enables Replication Driver. 0 will fallback to legacy NetDriver implementation.");
  atexit(FUN_14359f933);
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,1);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2480,L"net.RelinkMappedReferences",&local_50,&DAT_149dfb77a);
  atexit(FUN_1435a020b);
  FUN_14118b488(&DAT_14caf2498);
  _DAT_14caf2498 = &PTR_FUN_149e2c090;
  _DAT_14caf24a0 = FUN_1435a061e;
  atexit((_func_5014 *)&LAB_1435a0786);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14a9eee00;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14caf24a8,L"net.PrintNetConnections",
                L"Prints information on all net connections of a NetDriver.  Defaults to the GameNetDriver. Choose a different driver via NetDriverName= or NetDriverDefinition="
                ,&local_50);
  if (local_48 == 0) {
LAB_1435a79ae:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1435a79ae;
  }
  atexit(FUN_1435a0792);
  DAT_14caf27c0 = 0;
  DAT_14caf27c8 = 0;
  atexit(FUN_1435a07d7);
  DAT_14caf27b0 = 0;
  DAT_14caf27b8 = 0;
  atexit(FUN_1435a0832);
  DAT_14caf27a0 = 0;
  DAT_14caf27a8 = 0;
  atexit(FUN_1435a088d);
  DAT_14caf2768 = 0;
  _DAT_14caf2770 = 0;
  _DAT_14caf2778 = 2;
  atexit(FUN_1435a08e8);
  DAT_14caf24b8 = 0;
  DAT_14caf24c0 = 0;
  atexit(FUN_1435a0919);
  DAT_14caf2750 = 0;
  _DAT_14caf2758 = 0;
  _DAT_14caf2760 = 2;
  atexit(FUN_1435a0974);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf24c8,L"net.TrackDormantObjectsByLevel",&DAT_14caf2744,
                L"When true, network object list will maintain a set of dormant actors per connnection per level."
               );
  atexit(FUN_1435a09a5);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9ea910,1,&PTR_FUN_14a9ea8e0);
  FUN_1446f470e(&DAT_14caf2508,L"ConsoleVariable",1);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9eb330,1,&PTR_FUN_14a9eb2e0);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14a9eeed0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf2568,L"Net.GenerateConstantBandwidth",
                L"Deliver a constant throughput every tick to generate the specified Kilobytes per sec.\nUsage:\nNet.GenerateBandwidth KilobytesPerSecond"
                ,&local_50);
  if (local_48 == 0) {
LAB_1435a7bc7:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1435a7bc7;
  }
  atexit(FUN_1435a09ea);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14a9eef40;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf2578,L"Net.GeneratePeriodicBandwidthSpike",
                L"Generates a spike of bandwidth every X milliseconds.\nUsage:\nNet.GeneratePeriodicBandwidthSpike SpikeInKb PeriodInMS"
                ,&local_50);
  if (local_48 == 0) {
LAB_1435a7ca1:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1435a7ca1;
  }
  atexit(FUN_1435a0a2f);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14a9eefb0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf2588,L"Net.CreateBandwidthGenerator",&DAT_149dfb77a,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1435a7d89;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1435a7d89:
  atexit(FUN_1435a0a74);
  uStack_58 = 0;
  local_68 = (undefined8 **)0x0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9eb9e0,1,0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf25b0,L"net.Iris.SaturateBandwidth",&DAT_14caf25c0,
                L"Whether to saturate the bandwidth or not. Default is false.");
  atexit(FUN_1435a0ae2);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf25c8,L"net.Iris.PacketSequenceSafetyMargin",&DAT_14c761600,
                L"How many packets to spare before considering packet sequence full. This allows a few non-DataStreamChannel packets to be sent without messing up packet acking."
               );
  atexit(FUN_1435a0b27);
  uStack_58 = 0;
  local_68 = (undefined8 **)0x0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9ec100,1,0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf25f0,L"net.Iris.EnableActorLevelChanges",&DAT_14c761604,
                L"When true the ActorReplicationBridge will process actors that change levels by updating the actor\'s level groups."
               );
  atexit(FUN_1435a17ad);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2600,L"net.Iris.EnableDynamicNetUpdateFrequency",&DAT_14c761605,
                L"When true changes to AActor::NetUpdateFrequency will be updated in Iris after being registered for replication."
               );
  atexit(FUN_1435a17f2);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2610,L"net.Iris.SerializeNewActorMaxBunchSize",&DAT_14c761608,
                L"Max allowed bits that can be added to the creation header via OnSerializeNewActor."
               );
  atexit(FUN_1435a21ec);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2620,L"NetAnalytics.NumberOfConsecutiveDroppedPacketsToConsiderBurst",
                &DAT_14c76160c,
                L"The number of packets lost in a row (in or out) for us to consider the frame as having bursts of packet loss.Not affected by NetAnalytics.MinimumNumberOfPacketsForBurstTracking."
               );
  atexit(FUN_1435a3443);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2630,L"NetAnalytics.MinimumNumberOfPacketsForBurstTracking",&DAT_14c761610
                ,
                L"The minimum number of packets that must have been notified (in our out) in order to consider a frame for packet loss by percentage.See NetAnalytics.PercentOfDroppedPacketsToConsiderBurst"
               );
  atexit(FUN_1435a3488);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2640,L"NetAnalytics.PercentOfDroppedPacketsToConsiderBurst",&DAT_14c761614
                ,
                L"The percentage of packets lost in a frame (in or out) for us to consider the frame as having bursts of packet loss.\nSee NetAnalytics.MinimumNumberOfPacketsForBurstTracking."
               );
  atexit(FUN_1435a34cd);
  uStack_58 = 0;
  local_68 = (undefined8 **)0x0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9ed2e0,1,0);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2668,L"net.NetPingEnabled",&local_50,
                L"Whether or not the NetPing ping handling interface is enabled. Used for centralized ping tracking, and ICMP/UDP ping. (Valid values: 0 = Off, 1 = Enabled for client, 2 = Enabled for server and client, 3 = Enabled for server only)"
               );
  atexit(FUN_1435a36f8);
  FUN_140056680(&local_50,&DAT_149dfb77a);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_140f510cc(&DAT_14caf2680,L"net.NetPingTypes",&local_50,
                L"A comma-delimited list of EPingType pings to enable, and (optionally) the EPingAverageType averaging to apply to the ping (e.g: \"RoundTrip=None,RoundTripExclFrame=PlayerStateAvg,ICMP=MovingAverage\")."
               );
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1435a373d);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2698,L"net.NetPingICMPInterval",&DAT_14c761618,
                L"Specifies the interval (in seconds) for performing ICMP pings.");
  atexit(FUN_1435a3782);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf26a8,L"net.NetPingUDPInterval",&DAT_14c76161c,
                L"Specifies the interval (in seconds) for performing UDP pings.");
  atexit(FUN_1435a37c7);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf26b8,L"net.NetPingUDPPort",&DAT_14c761620,
                L"For \'UDPQoS\' ping type, sets the port used for pinging.");
  atexit(FUN_1435a380c);
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,0xf);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf26c8,L"net.NetPingTimeoutDisableThreshold",&local_50,
                L"The number of times to send an ICMP/UDP ping when at a failure/timeout rate of 100%, before giving up and disabling pings."
               );
  atexit(FUN_1435a3851);
  local_68 = (undefined8 **)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9edf70,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435a81c0 FUN_1435a81c0 body=55 status=ok
// SIG undefined FUN_1435a81c0(void)

void FUN_1435a81c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf27d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf27d8 = FUN_14171c317(FUN_1463ed638,uVar1,L"ENetworkMetricEnableMode");
  }
  return;
}



// FUNCTION 1435a81f8 FUN_1435a81f8 body=176 status=ok
// SIG undefined FUN_1435a81f8(void)

undefined8 FUN_1435a81f8(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x110) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x1c;
        if (*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x1c) == param_2)
        goto LAB_1435a828c;
        iVar2 = *(int *)(lVar3 + 0x14);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1435a828c:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 8) = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 != 0);
}



// FUNCTION 1435a82a8 FUN_1435a82a8 body=162 status=ok
// SIG undefined FUN_1435a82a8(void)

undefined8 FUN_1435a82a8(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20) == param_2)
        goto LAB_1435a832f;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1435a832f:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 8) = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 != 0);
}



// FUNCTION 1435a834a FUN_1435a834a body=173 status=ok
// SIG undefined FUN_1435a834a(void)

undefined8 FUN_1435a834a(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20) == param_2)
        goto LAB_1435a83d1;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1435a83d1:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar4 + 8);
    if (param_3 < lVar3) {
      param_3 = lVar3;
    }
    *(longlong *)(lVar4 + 8) = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 != 0);
}



// FUNCTION 1435a83f8 FUN_1435a83f8 body=162 status=ok
// SIG undefined FUN_1435a83f8(void)

undefined8 FUN_1435a83f8(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 0x20) == param_2)
        goto LAB_1435a847f;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1435a847f:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 != 0);
}



// FUNCTION 1435a849a FUN_1435a849a body=877 status=ok
// SIG undefined FUN_1435a849a(void)

undefined8 * FUN_1435a849a(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  plVar1 = param_1 + 3;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar8 = *(int *)(param_2 + 1);
  uVar11 = *param_2;
  *(int *)(param_1 + 4) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140b856de(plVar1,iVar8,0);
    FUN_140b8566a(*plVar1,uVar11,iVar8);
  }
  iVar8 = *(int *)((longlong)param_2 + 0x3c);
  iVar7 = 0;
  param_1[5] = 0;
  if (iVar8 != -1) {
    iVar7 = *(int *)(param_2 + 7);
  }
  uVar11 = param_2[6];
  *(int *)(param_1 + 6) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    if (iVar8 == -1) {
      uVar11 = 0;
    }
    FUN_140b856de(param_1 + 5,iVar7,0);
    FUN_140b8566a(param_1[5],uVar11,iVar7);
  }
  FUN_1447a1747(0,0);
  cVar5 = *(char *)(param_2 + 5);
  lVar9 = param_2[4];
  param_1[7] = 0;
  iVar8 = 0;
  if ((cVar5 == '\x01') && (lVar9 != 0)) {
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 7) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar8 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x3c) = iVar8;
  param_1[8] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 8) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar8 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x44) = iVar8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  FUN_147bee99c(param_1 + 0xd,param_2 + 2);
  FUN_140056680(&local_58,&DAT_149e01f5a);
  uVar10 = (ulonglong)*(int *)(param_1 + 4);
  if (0 < (longlong)uVar10) {
    lVar9 = uVar10 << 4;
    iVar8 = 0;
    do {
      lVar9 = lVar9 + -0x10;
      lVar4 = *plVar1;
      lVar2 = lVar9 + lVar4;
      FUN_140ded26a(lVar2);
      FUN_140ded312(lVar2);
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = iVar8;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar6 = local_58;
      }
      FUN_144a38768(lVar2,puVar6,iVar7,1);
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = iVar8;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar6 = local_58;
      }
      cVar5 = FUN_140c540b4(lVar2,puVar6,iVar7,1);
      if (cVar5 == '\0') {
        iVar7 = local_50 + -1;
        if (local_50 == 0) {
          iVar7 = iVar8;
        }
        puVar6 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar6 = local_58;
        }
        FUN_140b127b8(lVar2,puVar6,iVar7,1);
      }
      FUN_140ded26a(lVar2);
      FUN_140ded312(lVar2);
      if (*(uint *)(lVar4 + 8 + lVar9) < 2) {
        FUN_14101da94(plVar1,(int)uVar10 + -1);
      }
      bVar12 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar12);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435a8808 FUN_1435a8808 body=1477 status=ok
// SIG undefined FUN_1435a8808(void)

ulonglong FUN_1435a8808(ulonglong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((0 < (int)param_1[4]) && (*(int *)((longlong)param_1 + 0x14) < (int)param_1[4])) {
    if (((*(int *)((longlong)param_1 + 0x3c) == 0) ||
        ((((uVar3 = (uint)param_1[7], (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
          (plVar11 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar11 == (longlong *)0x0)) ||
         (((int)plVar11[2] != *(int *)((longlong)param_1 + 0x3c) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))))) || (lVar6 = *plVar11, lVar6 == 0)) {
      iVar5 = *(int *)((longlong)param_1 + 0x44);
      if (iVar5 == 0) {
LAB_1435a8a0a:
        lVar6 = 0;
      }
      else {
        uVar3 = (uint)param_1[8];
        lVar6 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != iVar5 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
          goto LAB_1435a8a0a;
          lVar6 = *plVar11;
        }
      }
      if (*(longlong *)(lVar6 + 0x30) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360);
      }
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0x44);
    }
    uVar8 = param_1[2];
    *(undefined1 *)(param_1 + 2) = 1;
    if (iVar5 == 0) {
LAB_1435a8a03:
      plVar11 = (longlong *)0x0;
    }
    else {
      uVar3 = (uint)param_1[8];
      plVar11 = (longlong *)0x0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != iVar5 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
        goto LAB_1435a8a03;
        plVar11 = (longlong *)*puVar7;
      }
    }
    cVar4 = (**(code **)(*plVar11 + 0x370))
                      (plVar11,(longlong)*(int *)((longlong)param_1 + 0x14) * 0x10 + param_1[3],
                       lVar6,param_1 + 5);
    *(char *)(param_1 + 2) = (char)uVar8;
    if (cVar4 != '\0') {
      plVar11 = (longlong *)param_1[1];
      if (plVar11 == (longlong *)0x0) {
LAB_1435a89ee:
        lVar6 = *(longlong *)(lVar6 + 0x108);
        uVar8 = 0;
        if (lVar6 == 0) goto LAB_1435a89c4;
        bVar14 = true;
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar11[1];
        do {
          if (iVar5 == 0) goto LAB_1435a89ee;
          LOCK();
          iVar10 = (int)plVar11[1];
          bVar14 = iVar5 == iVar10;
          if (bVar14) {
            *(int *)(plVar11 + 1) = iVar5 + 1;
            iVar10 = iVar5;
          }
          iVar5 = iVar10;
          UNLOCK();
        } while (!bVar14);
        lVar6 = *(longlong *)(lVar6 + 0x108);
        if (lVar6 == 0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_1435a89c2;
        }
        uVar8 = *param_1;
        bVar14 = false;
      }
      uVar3 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 9) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar5 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar5 = *(int *)(lVar12 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar10;
        }
      }
      *(int *)((longlong)param_1 + 0x4c) = iVar5;
      plVar13 = (longlong *)param_1[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        local_78 = 0;
      }
      else {
        iVar5 = (int)plVar13[1];
        local_78 = 0;
        do {
          if (iVar5 == 0) {
            plVar13 = (longlong *)0x0;
            goto LAB_1435a8a7f;
          }
          LOCK();
          iVar10 = (int)plVar13[1];
          bVar15 = iVar5 == iVar10;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar5 + 1;
            iVar10 = iVar5;
          }
          iVar5 = iVar10;
          UNLOCK();
        } while (!bVar15);
        local_78 = *param_1;
      }
LAB_1435a8a7f:
      local_68 = FUN_147be3e38;
      local_60 = 0;
      local_70 = plVar13;
      FUN_147beeb14(&local_58);
      FUN_147beea20(&local_68,&local_58);
      if (local_50 == 0) {
LAB_1435a8af6:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1435a8af6;
      }
      param_1[10] = (ulonglong)local_68;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar13)();
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
      }
      plVar13 = (longlong *)param_1[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        local_78 = 0;
      }
      else {
        iVar5 = (int)plVar13[1];
        local_78 = 0;
        do {
          if (iVar5 == 0) {
            plVar13 = (longlong *)0x0;
            goto LAB_1435a8b5e;
          }
          LOCK();
          iVar10 = (int)plVar13[1];
          bVar15 = iVar5 == iVar10;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar5 + 1;
            iVar10 = iVar5;
          }
          iVar5 = iVar10;
          UNLOCK();
        } while (!bVar15);
        local_78 = *param_1;
      }
LAB_1435a8b5e:
      local_68 = FUN_147be3e8c;
      local_60 = 0;
      local_70 = plVar13;
      FUN_147beefb8(&local_58);
      FUN_141211c46(&DAT_14cb0d3d0,&local_68,&local_58);
      if (local_50 == 0) {
LAB_1435a8bdc:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1435a8bdc;
      }
      param_1[0xb] = (ulonglong)local_68;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar13)();
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
      }
      plVar13 = (longlong *)param_1[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        local_78 = 0;
      }
      else {
        iVar5 = (int)plVar13[1];
        local_78 = 0;
        do {
          if (iVar5 == 0) {
            plVar13 = (longlong *)0x0;
            goto LAB_1435a8c44;
          }
          LOCK();
          iVar10 = (int)plVar13[1];
          bVar15 = iVar5 == iVar10;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar5 + 1;
            iVar10 = iVar5;
          }
          iVar5 = iVar10;
          UNLOCK();
        } while (!bVar15);
        local_78 = *param_1;
      }
LAB_1435a8c44:
      local_68 = FUN_147be3ee0;
      local_60 = 0;
      local_70 = plVar13;
      FUN_147beefb8(&local_58);
      FUN_141211c46(&DAT_14cb0f1d0,&local_68,&local_58);
      if (local_50 == 0) {
LAB_1435a8cc2:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1435a8cc2;
      }
      param_1[0xc] = (ulonglong)local_68;
      if (plVar13 != (longlong *)0x0) {
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
      }
      uVar9 = (undefined7)(uVar8 >> 8);
      local_88 = uVar8;
      local_80 = plVar11;
      if (bVar14) {
        FUN_147be3db2(lVar6,&local_88);
        uVar8 = CONCAT71(uVar9,1);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        FUN_147be3db2(lVar6,&local_88);
        LOCK();
        plVar13 = plVar11 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        uVar8 = CONCAT71(uVar9,1);
        if ((int)*plVar13 == 0) {
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
      goto LAB_1435a89c4;
    }
  }
LAB_1435a89c2:
  uVar8 = 0;
LAB_1435a89c4:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1435a8dce FUN_1435a8dce body=507 status=ok
// SIG undefined FUN_1435a8dce(void)

void FUN_1435a8dce(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  char local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x44))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    iVar7 = iVar3;
    if (iVar4 < iVar3) {
      iVar7 = iVar4;
    }
    *(int *)(param_1 + 0x14) = iVar7;
    if (iVar4 <= iVar3) goto LAB_1435a8f56;
    if (((*(int *)(param_1 + 0x70) != 0) && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))(), cVar2 != '\0')) {
      local_38 = '\0';
      local_30 = 0;
      local_28 = 0xffffffff00000000;
      if (*(int *)(param_1 + 0x70) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x68);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,&local_40);
      if (local_38 == '\x01') {
        if (local_40 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          iVar4 = 0;
        }
        else {
          uVar1 = *(uint *)(local_40 + 0xc);
          *(uint *)(param_1 + 0x38) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar4 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar4 = *(int *)(lVar6 + 0x10);
            bVar8 = iVar4 == 0;
            if (bVar8) {
              *(int *)(lVar6 + 0x10) = iVar7;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar4 = iVar7;
            }
          }
        }
        *(int *)(param_1 + 0x3c) = iVar4;
      }
      if (local_28._4_4_ != -1) {
        FUN_1410e5bda(param_1 + 0x28,&local_30);
        if ((local_28._4_4_ != -1) && (FUN_1447a1747(local_30,local_28 & 0xffffffff), local_30 != 0)
           ) {
          FUN_1400020a8();
        }
      }
    }
    cVar2 = FUN_1435a8808(param_1);
    if (cVar2 != '\0') goto LAB_1435a8f56;
  }
  FUN_147be3cf0(param_1);
LAB_1435a8f56:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435a8fca FUN_1435a8fca body=55 status=ok
// SIG undefined FUN_1435a8fca(void)

void FUN_1435a8fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2898 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2898 = FUN_14171c317(FUN_1463ed8a7,uVar1,L"EReplayResult");
  }
  return;
}



// FUNCTION 1435a9001 FUN_1435a9001 body=69 status=ok
// SIG undefined FUN_1435a9001(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a9001(void)

{
  _DAT_14caf28d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a9043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf28e0,1);
  return;
}



// FUNCTION 1435a9046 FUN_1435a9046 body=69 status=ok
// SIG undefined FUN_1435a9046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a9046(void)

{
  _DAT_14caf28f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a9088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf28f8,1);
  return;
}



// FUNCTION 1435a908b FUN_1435a908b body=69 status=ok
// SIG undefined FUN_1435a908b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a908b(void)

{
  _DAT_14caf2900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a90cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2908,1);
  return;
}



// FUNCTION 1435a90d0 FUN_1435a90d0 body=69 status=ok
// SIG undefined FUN_1435a90d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a90d0(void)

{
  _DAT_14caf2918 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a9112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2920,1);
  return;
}



// FUNCTION 1435a9115 FUN_1435a9115 body=69 status=ok
// SIG undefined FUN_1435a9115(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435a9115(void)

{
  _DAT_14caf2938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a9157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2940,1);
  return;
}



// FUNCTION 1435a915a FUN_1435a915a body=4616 status=ok
// SIG undefined FUN_1435a915a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1435a915a(longlong param_1,byte param_2)

{
  double dVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  LARGE_INTEGER LVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  LARGE_INTEGER *pLVar12;
  size_t sVar13;
  undefined8 uVar14;
  DWORD DVar15;
  uint uVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  LARGE_INTEGER *pLVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined2 *puVar28;
  int iVar29;
  uint uVar30;
  LARGE_INTEGER *pLVar31;
  LARGE_INTEGER *pLVar32;
  int iVar33;
  uint uVar34;
  ulonglong uVar35;
  LARGE_INTEGER *pLVar36;
  int iVar37;
  LARGE_INTEGER *pLVar38;
  bool bVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  double dVar43;
  undefined1 auStack_1148 [32];
  undefined8 local_1128;
  longlong local_1120;
  longlong local_1118;
  undefined4 **local_1110;
  double local_1108;
  LARGE_INTEGER *local_1100;
  ulonglong local_10f8;
  LARGE_INTEGER *local_10f0;
  longlong local_10e8;
  longlong local_10e0;
  ulonglong local_10d8;
  int local_10cc;
  longlong local_10c8;
  longlong local_10c0;
  undefined4 *local_10b8;
  ulonglong uStack_10b0;
  undefined2 *local_10a8;
  int local_10a0;
  wchar_t *local_1098;
  double local_1090;
  LARGE_INTEGER local_1088 [2];
  undefined4 *local_1078;
  char local_1070;
  undefined1 local_1068 [4096];
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined8 uStack_48;
  
  lVar19 = DAT_14caf2910;
  uStack_48 = 0x1435a9170;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1148;
  uVar16 = *(int *)(param_1 + 0x11d8) - 1;
  uVar26 = 0;
  iVar10 = (int)*(char *)(param_1 + 0x11e0);
  uVar18 = ((param_2 < 2) - 1 | 1) + iVar10;
  if ((int)uVar16 <= (int)uVar18) {
    uVar18 = uVar16;
  }
  uVar35 = 0;
  if (0 < (int)uVar18) {
    uVar35 = (ulonglong)uVar18;
  }
  iVar37 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar37 != 0x40000002) {
    bVar39 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar37 != 2)) {
      if (iVar37 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar39 = DVar15 == DVar11;
        iVar10 = (int)*(char *)(param_1 + 0x11e0);
      }
      else {
        bVar39 = false;
      }
    }
    uVar26 = (ulonglong)(bVar39 ^ 1);
  }
  iVar37 = *(int *)(lVar19 + uVar26 * 4);
  if (((*(byte *)(*(longlong *)(param_1 + 0x11d0) + 10 + uVar35 * 0x78) & iVar37 == 0) != 0) ||
     ((int)uVar35 == iVar10)) goto LAB_1435a9233;
  QueryPerformanceCounter(local_1088);
  dVar43 = (double)local_1088[0].QuadPart * DAT_14c83f420;
  FUN_147be423a(param_1);
  FUN_147be4302(param_1);
  dVar43 = dVar43 + 16777216.0;
  local_10d8 = CONCAT71(local_10d8._1_7_,param_2);
  local_10e8 = param_1;
  if (param_2 < 2) {
    *(double *)(param_1 + 0x11e8) = dVar43;
    pLVar12 = *(LARGE_INTEGER **)(param_1 + 0x11d0);
  }
  else {
    pLVar12 = *(LARGE_INTEGER **)(param_1 + 0x11d0);
    pLVar21 = pLVar12;
    local_1100 = pLVar12;
    if ((int)uVar18 < 1) {
      uVar35 = 0;
    }
    else {
      do {
        uVar26 = uVar35 - 1;
        local_10f0 = pLVar21 + uVar35 * 0xf;
        local_10f8 = CONCAT44(local_10f8._4_4_,
                              (int)*(short *)((longlong)pLVar21 + uVar35 * 0x78 + 0x1e));
        memset(local_1088,0,0x100);
        lVar19 = 8;
        do {
          *(undefined4 *)((longlong)&local_1090 + lVar19) = 0;
          *(undefined8 *)((longlong)local_1088 + lVar19) = 0;
          lVar19 = lVar19 + 0x10;
        } while (lVar19 != 0x108);
        pLVar12 = pLVar21;
        if (0 < (short)local_10f8) {
          local_10f0 = local_10f0 + 0xc;
          iVar10 = *(int *)(local_10e8 + 0x1228);
          iVar29 = 0;
          local_10e0 = CONCAT44(local_10e0._4_4_,iVar10);
          do {
            lVar19 = local_10e8;
            if (iVar10 < 0) {
              iVar33 = *(int *)(local_10e8 + 0x1220) + iVar10;
            }
            else {
              iVar33 = (int)local_10e0 - iVar29;
            }
            FUN_147be43ca(local_10e8,local_10f0,local_1088,iVar33);
            sVar2 = *(short *)((longlong)pLVar21 + uVar26 * 0x78 + 0xc);
            iVar33 = *(int *)(lVar19 + 0x50);
            pLVar12 = local_1100;
            if (0 < *(short *)(pLVar21 + uVar26 * 0xf + 2) && (iVar33 < sVar2 || sVar2 < 1)) {
              if ((int)(iVar33 + local_1088
                                 [(longlong)*(char *)((longlong)pLVar21 + uVar26 * 0x78 + 0x14) * 2
                                  + -2].s.LowPart) < (int)*(short *)(pLVar21 + uVar26 * 0xf + 2))
              goto LAB_1435a93ea;
LAB_1435a9461:
              *(double *)(local_10e8 + 0x11e8) = dVar43 - (double)iVar29;
              goto LAB_1435a9483;
            }
            if (iVar33 >= sVar2 && sVar2 >= 1) goto LAB_1435a9461;
LAB_1435a93ea:
            if (*(short *)((longlong)pLVar21 + uVar26 * 0x78 + 0xe) < 1) {
              if (0 < *(short *)((longlong)pLVar21 + uVar26 * 0x78 + 0x12)) {
                uVar40 = (undefined4)*(undefined8 *)(local_10e8 + 0x58);
                uVar42 = (undefined4)((ulonglong)*(undefined8 *)(local_10e8 + 0x58) >> 0x20);
LAB_1435a941c:
                if ((double)pLVar21[uVar26 * 0xf + 6] <=
                    (double)CONCAT44(uVar42,uVar40) +
                    (&local_1090)[(longlong)*(char *)((longlong)pLVar21 + uVar26 * 0x78 + 0x14) * 2]
                   ) goto LAB_1435a9461;
              }
            }
            else {
              dVar1 = *(double *)(local_10e8 + 0x58);
              uVar40 = SUB84(dVar1,0);
              uVar42 = (undefined4)((ulonglong)dVar1 >> 0x20);
              if ((0 < *(short *)((longlong)pLVar21 + uVar26 * 0x78 + 0x12)) &&
                 (dVar1 < (double)pLVar21[uVar26 * 0xf + 5])) goto LAB_1435a941c;
              if ((double)pLVar21[uVar26 * 0xf + 5] <= dVar1) goto LAB_1435a9461;
            }
            iVar29 = iVar29 + 1;
            iVar10 = iVar10 + -1;
          } while ((int)local_10f8 != iVar29);
        }
        bVar39 = 1 < (longlong)uVar35;
        pLVar21 = pLVar12;
        uVar35 = uVar26;
      } while (bVar39);
      uVar35 = uVar26 & 0xffffffff;
    }
  }
LAB_1435a9483:
  lVar23 = local_10e8;
  local_10f8 = (ulonglong)*(char *)(local_10e8 + 0x11e0);
  lVar19 = local_10e8 + 0x1230;
  bVar8 = (byte)local_10d8;
  uVar26 = uVar35 & 0xffffffff;
  local_1100 = pLVar12;
  while( true ) {
    uVar22 = uVar26;
    *(char *)(lVar23 + 0x11e0) = (char)uVar22;
    FUN_147be412e(pLVar12 + (longlong)(int)uVar22 * 0xf,lVar23);
    FUN_147be43ca(lVar23,*(longlong *)(lVar23 + 0x11d0) +
                         (longlong)*(char *)(lVar23 + 0x11e0) * 0x78 + 0x60,lVar19);
    if (1 < bVar8) break;
    sVar2 = *(short *)(lVar23 + 0xc);
    iVar10 = *(int *)(lVar23 + 0x50);
    if (0 < *(short *)(lVar23 + 0x10) && (iVar10 < sVar2 || sVar2 < 1)) {
      if (iVar10 + *(int *)((longlong)*(char *)(lVar23 + 0x14) * 0x10 + -0x10 + lVar19) <
          (int)*(short *)(lVar23 + 0x10)) goto LAB_1435a9535;
    }
    else if (iVar10 < sVar2 || sVar2 < 1) {
LAB_1435a9535:
      if (*(short *)(lVar23 + 0xe) < 1) {
        if (*(short *)(lVar23 + 0x12) < 1) goto LAB_1435a95c4;
        dVar43 = *(double *)(lVar23 + 0x58);
LAB_1435a9569:
        bVar39 = dVar43 + *(double *)((longlong)*(char *)(lVar23 + 0x14) * 0x10 + -8 + lVar19) <
                 *(double *)(lVar23 + 0x30);
      }
      else {
        dVar43 = *(double *)(lVar23 + 0x58);
        if ((0 < *(short *)(lVar23 + 0x12)) && (dVar43 < *(double *)(lVar23 + 0x28)))
        goto LAB_1435a9569;
        bVar39 = dVar43 < *(double *)(lVar23 + 0x28);
      }
      if (bVar39) goto LAB_1435a95c4;
    }
    uVar18 = *(int *)(lVar23 + 0x11d8) - 1;
    uVar16 = (uint)*(char *)(lVar23 + 0x11e0);
    uVar22 = (ulonglong)uVar16;
    if ((int)(uVar16 + 1) < (int)uVar18) {
      uVar18 = uVar16 + 1;
    }
    uVar26 = (ulonglong)uVar18;
    if ((int)uVar18 < 1) {
      uVar26 = 0;
    }
    pLVar12 = *(LARGE_INTEGER **)(lVar23 + 0x11d0);
    if (((*(byte *)((longlong)pLVar12 + uVar26 * 0x78 + 10) & iVar37 == 0) != 0) ||
       ((uint)uVar26 == uVar16)) goto LAB_1435a95c4;
  }
  uVar22 = uVar35 & 0xffffffff;
LAB_1435a95c4:
  lVar19 = (longlong)(int)uVar22 * 0x78 + *(longlong *)(lVar23 + 0x11d0);
  if (*(char *)(lVar23 + 0x1358) != *(char *)(lVar23 + 0xb)) {
    if (*(char *)(lVar23 + 0xb) == '\0') {
      *(undefined1 *)(lVar23 + 0x1358) = 0;
    }
    else {
      FUN_147be4d24(lVar23);
    }
  }
  if (1 < bVar8) goto LAB_1435a9233;
  *(short *)(lVar19 + 0x72) = *(short *)(lVar19 + 0x72) + 1;
  cVar9 = *(char *)(lVar23 + 0x11e0);
  if (*(char *)(lVar23 + 0x11e1) < cVar9) {
    *(char *)(lVar23 + 0x11e1) = cVar9;
    *(int *)(lVar23 + 0x13e8) = (int)cVar9;
    iVar10 = *(int *)(lVar19 + 0x50) + -1;
    if (*(int *)(lVar19 + 0x50) == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(lVar23 + 0x13f0,*(undefined8 *)(lVar19 + 0x48),iVar10);
    cVar9 = *(char *)(lVar23 + 0x11e0);
  }
  if ((*(char *)(lVar23 + 0x11e2) < cVar9) && (*(char *)(lVar19 + 0x70) == '\0')) {
    if (*(short *)(lVar19 + 0x72) < (short)*(char *)(lVar19 + 0x15)) {
      if (*(short *)(lVar19 + 0x16) == -1) {
        *(undefined1 *)(lVar19 + 0x70) = 0;
      }
      else {
        bVar39 = *(double *)(lVar19 + 0x40) <= *(double *)(lVar23 + 0x58);
        *(bool *)(lVar19 + 0x70) = bVar39;
        if (bVar39) goto LAB_1435a9687;
      }
    }
    else {
      *(undefined1 *)(lVar19 + 0x70) = 1;
LAB_1435a9687:
      local_10b8 = (undefined4 *)0x0;
      uStack_10b0 = 0;
      *(char *)(lVar23 + 0x11e2) = *(char *)(lVar23 + 0x11e0);
      if ((((*(char *)(lVar23 + 0x10a9) == '\x01') && (*(char *)(lVar23 + 9) == '\x01')) &&
          (lVar20 = *(longlong *)(lVar23 + 0x1440), lVar20 != 0)) &&
         (*(char *)(lVar20 + 0xe0) < *(char *)(lVar23 + 0x11e0))) {
        cVar9 = *(char *)((longlong)local_1100 + local_10f8 * 0x78 + 0x14);
        iVar10 = (int)cVar9;
        if (cVar9 < '\x01') {
          iVar37 = 0;
          uVar40 = 0;
          uVar42 = 0;
        }
        else {
          dVar43 = 0.0;
          iVar33 = 0;
          iVar37 = 0;
          iVar29 = *(int *)(lVar23 + 0x1228);
          do {
            if (iVar29 < 0) {
              iVar25 = *(int *)(lVar23 + 0x1220) + iVar29;
            }
            else {
              iVar25 = *(int *)(lVar23 + 0x1228) - iVar33;
            }
            iVar5 = *(int *)(*(longlong *)(lVar23 + 0x1218) + (longlong)iVar25 * 0x10);
            if (iVar5 < iVar37) {
              iVar5 = iVar37;
            }
            iVar37 = iVar5;
            dVar1 = *(double *)(*(longlong *)(lVar23 + 0x1218) + 8 + (longlong)iVar25 * 0x10);
            uVar40 = SUB84(dVar1,0);
            uVar42 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= dVar43) {
              uVar40 = SUB84(dVar43,0);
              uVar42 = (undefined4)((ulonglong)dVar43 >> 0x20);
            }
            iVar33 = iVar33 + 1;
            iVar29 = iVar29 + -1;
            dVar43 = (double)CONCAT44(uVar42,uVar40);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        local_1120 = lVar23 + 0x1130;
        local_1118 = lVar23 + 0x1180;
        local_1108 = 0.0;
        if (((*(char *)(lVar23 + 0x1358) != '\0') &&
            (local_1108 = 0.0, *(char *)(lVar23 + 0x60) == '\x01')) &&
           (local_1108 = 0.0, *(char *)(lVar23 + 0x1078) != '\0')) {
          uVar26 = 0;
          local_10e0 = lVar19;
          local_10d8 = uVar22;
          local_10cc = iVar37;
          local_10c8 = local_1118;
          local_10c0 = local_1120;
          do {
            FUN_140721fbe(&local_10b8);
            puVar27 = local_10b8;
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(byte *)(lVar23 + 0x1078));
          iVar10 = (int)uStack_10b0;
          lVar19 = (longlong)(int)uStack_10b0;
          if (1 < lVar19) {
            memset(&local_1078,0,0x2f0);
            local_1088[0].QuadPart = (LONGLONG)puVar27;
            local_1088[1].QuadPart = (LONGLONG)(puVar27 + lVar19 * 2 + -2);
            fVar41 = logf((float)iVar10);
            local_1078 = (undefined4 *)CONCAT44(local_1078._4_4_,(int)(longlong)(fVar41 + fVar41));
            pLVar12 = local_1088;
            do {
              pLVar32 = (LARGE_INTEGER *)pLVar12->QuadPart;
              pLVar21 = (LARGE_INTEGER *)pLVar12[1].QuadPart;
              DVar15 = pLVar12[2].s.LowPart;
              iVar10 = (int)((ulonglong)((longlong)pLVar21 - (longlong)pLVar32) >> 3);
              uVar26 = (ulonglong)(iVar10 + 1);
              local_1100 = pLVar12;
              if (DVar15 != 0) {
LAB_1435a9897:
                if (8 < (int)(uint)uVar26) {
                  local_10f8 = CONCAT44(local_10f8._4_4_,DVar15);
                  uVar18 = (uint)uVar26 >> 1;
                  LVar6 = pLVar32[uVar18];
                  pLVar32[uVar18] = *pLVar32;
                  *pLVar32 = LVar6;
                  pLVar38 = pLVar21 + 1;
                  pLVar31 = pLVar32;
                  local_10f0 = pLVar21;
LAB_1435a98c6:
                  pLVar31 = pLVar31 + 1;
                  if (pLVar31 <= pLVar21) goto code_r0x0001435a98d3;
                  goto LAB_1435a998f;
                }
                for (; pLVar12 = local_1100, pLVar31 = pLVar32, pLVar38 = pLVar32, pLVar32 < pLVar21
                    ; pLVar21 = pLVar21 + -1) {
                  while (pLVar38 = pLVar38 + 1, pLVar38 <= pLVar21) {
                    FUN_1400021e4(pLVar38,&local_1098);
                    FUN_1400021e4(pLVar31,&local_10a8);
                    pwVar17 = local_1098;
                    if (local_1090._0_4_ == 0) {
                      pwVar17 = L"";
                    }
                    puVar28 = local_10a8;
                    if (local_10a0 == 0) {
                      puVar28 = &DAT_149dfb77a;
                    }
                    lVar19 = 0;
                    while( true ) {
                      uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
                      uVar16 = (uint)uVar3;
                      uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
                      uVar18 = (uint)uVar4;
                      if (uVar3 != uVar4) {
                        if ((uVar4 | uVar3) < 0x80) {
                          uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                          goto LAB_1435a9ffa;
                        }
                        iVar10 = uVar16 - uVar18;
                        goto LAB_1435aa02d;
                      }
                      if (uVar3 == 0) break;
LAB_1435a9ffa:
                      lVar19 = lVar19 + 2;
                    }
                    iVar10 = 0;
LAB_1435aa02d:
                    if (local_10a8 != (undefined2 *)0x0) {
                      FUN_1400020a8(local_10a8);
                    }
                    if (local_1098 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    if (iVar10 < 0) {
                      pLVar31 = pLVar38;
                    }
                  }
                  LVar6 = *pLVar31;
                  *pLVar31 = *pLVar21;
                  *pLVar21 = LVar6;
                }
                goto LAB_1435aa083;
              }
LAB_1435a9b29:
              pLVar12 = local_1100;
              if ((int)uVar26 != 0) {
                uVar18 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
                local_10f8 = uVar26;
                do {
                  pLVar12 = (LARGE_INTEGER *)(ulonglong)uVar18;
                  uVar16 = uVar18 * 2 + 1;
                  local_10f0 = pLVar12;
                  if ((int)uVar16 < (int)uVar26) {
                    do {
                      uVar18 = uVar18 * 2 + 2;
                      pLVar21 = (LARGE_INTEGER *)(ulonglong)uVar16;
                      if ((int)uVar18 < (int)uVar26) {
                        FUN_1400021e4(pLVar32 + (int)uVar16,&local_1098);
                        FUN_1400021e4(pLVar32 + (int)uVar18,&local_10a8);
                        pwVar17 = local_1098;
                        if (local_1090._0_4_ == 0) {
                          pwVar17 = L"";
                        }
                        puVar28 = local_10a8;
                        if (local_10a0 == 0) {
                          puVar28 = &DAT_149dfb77a;
                        }
                        lVar19 = 0;
                        while( true ) {
                          uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
                          uVar34 = (uint)uVar3;
                          uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
                          uVar30 = (uint)uVar4;
                          if (uVar3 != uVar4) {
                            if ((uVar4 | uVar3) < 0x80) {
                              uVar34 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                              uVar30 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                              goto LAB_1435a9bdf;
                            }
                            iVar10 = uVar34 - uVar30;
                            goto LAB_1435a9c17;
                          }
                          if (uVar3 == 0) break;
LAB_1435a9bdf:
                          lVar19 = lVar19 + 2;
                        }
                        iVar10 = 0;
LAB_1435a9c17:
                        if (local_10a8 != (undefined2 *)0x0) {
                          FUN_1400020a8(local_10a8);
                        }
                        if (local_1098 != (wchar_t *)0x0) {
                          FUN_1400020a8();
                        }
                        pLVar21 = (LARGE_INTEGER *)(ulonglong)uVar18;
                        if (iVar10 < 0) {
                          pLVar21 = (LARGE_INTEGER *)(ulonglong)uVar16;
                        }
                      }
                      pLVar12 = pLVar32 + (int)pLVar12;
                      uVar18 = (uint)pLVar21;
                      pLVar38 = pLVar32 + (int)uVar18;
                      FUN_1400021e4(pLVar38,&local_1098);
                      FUN_1400021e4(pLVar12,&local_10a8);
                      pwVar17 = local_1098;
                      if (local_1090._0_4_ == 0) {
                        pwVar17 = L"";
                      }
                      puVar28 = local_10a8;
                      if (local_10a0 == 0) {
                        puVar28 = &DAT_149dfb77a;
                      }
                      lVar19 = 0;
                      while( true ) {
                        uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
                        uVar30 = (uint)uVar3;
                        uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
                        uVar16 = (uint)uVar4;
                        if (uVar3 != uVar4) {
                          if ((uVar4 | uVar3) < 0x80) {
                            uVar30 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                            goto LAB_1435a9cb1;
                          }
                          iVar10 = uVar30 - uVar16;
                          goto LAB_1435a9ce4;
                        }
                        if (uVar3 == 0) break;
LAB_1435a9cb1:
                        lVar19 = lVar19 + 2;
                      }
                      iVar10 = 0;
LAB_1435a9ce4:
                      if (local_10a8 != (undefined2 *)0x0) {
                        FUN_1400020a8(local_10a8);
                      }
                      if (local_1098 != (wchar_t *)0x0) {
                        FUN_1400020a8();
                      }
                      uVar26 = local_10f8;
                      if (-1 < iVar10) break;
                      LVar6 = *pLVar12;
                      *pLVar12 = *pLVar38;
                      *pLVar38 = LVar6;
                      uVar16 = uVar18 * 2 + 1;
                      pLVar12 = pLVar21;
                    } while ((int)uVar16 < (int)local_10f8);
                  }
                  uVar18 = (int)local_10f0 - 1;
                } while ((int)local_10f0 != 0);
                pLVar12 = local_1100;
                if (1 < (int)uVar26) {
                  uVar35 = uVar26 & 0xffffffff;
                  LVar6 = *pLVar32;
                  *pLVar32 = pLVar32[uVar35 - 1];
                  pLVar32[uVar35 - 1] = LVar6;
                  if ((int)uVar26 != 2) {
                    do {
                      uVar26 = uVar35 - 1;
                      iVar10 = 0;
                      iVar37 = 1;
                      iVar29 = 0;
                      do {
                        iVar10 = iVar10 + 2;
                        iVar33 = iVar29;
                        if ((longlong)iVar10 < (longlong)uVar26) {
                          local_10f8 = CONCAT44(local_10f8._4_4_,iVar29);
                          FUN_1400021e4(pLVar32 + iVar37,&local_1098);
                          FUN_1400021e4(pLVar32 + iVar10,&local_10a8);
                          pwVar17 = local_1098;
                          if (local_1090._0_4_ == 0) {
                            pwVar17 = L"";
                          }
                          puVar28 = local_10a8;
                          if (local_10a0 == 0) {
                            puVar28 = &DAT_149dfb77a;
                          }
                          lVar19 = 0;
                          while( true ) {
                            uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
                            uVar16 = (uint)uVar3;
                            uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
                            uVar18 = (uint)uVar4;
                            if (uVar3 != uVar4) {
                              if ((uVar4 | uVar3) < 0x80) {
                                uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                                uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                                goto LAB_1435a9df8;
                              }
                              iVar29 = uVar16 - uVar18;
                              goto LAB_1435a9e30;
                            }
                            if (uVar3 == 0) break;
LAB_1435a9df8:
                            lVar19 = lVar19 + 2;
                          }
                          iVar29 = 0;
LAB_1435a9e30:
                          if (local_10a8 != (undefined2 *)0x0) {
                            FUN_1400020a8(local_10a8);
                          }
                          if (local_1098 != (wchar_t *)0x0) {
                            FUN_1400020a8();
                          }
                          if (iVar29 < 0) {
                            iVar10 = iVar37;
                          }
                          iVar33 = (int)local_10f8;
                          iVar37 = iVar10;
                        }
                        iVar29 = iVar37;
                        pLVar12 = pLVar32 + iVar33;
                        pLVar21 = pLVar32 + iVar29;
                        FUN_1400021e4(pLVar21,&local_1098);
                        FUN_1400021e4(pLVar12,&local_10a8);
                        pwVar17 = local_1098;
                        if (local_1090._0_4_ == 0) {
                          pwVar17 = L"";
                        }
                        puVar28 = local_10a8;
                        if (local_10a0 == 0) {
                          puVar28 = &DAT_149dfb77a;
                        }
                        lVar19 = 0;
                        while( true ) {
                          uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
                          uVar16 = (uint)uVar3;
                          uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
                          uVar18 = (uint)uVar4;
                          if (uVar3 != uVar4) {
                            if ((uVar4 | uVar3) < 0x80) {
                              uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                              goto LAB_1435a9ece;
                            }
                            iVar10 = uVar16 - uVar18;
                            goto LAB_1435a9f01;
                          }
                          if (uVar3 == 0) break;
LAB_1435a9ece:
                          lVar19 = lVar19 + 2;
                        }
                        iVar10 = 0;
LAB_1435a9f01:
                        if (local_10a8 != (undefined2 *)0x0) {
                          FUN_1400020a8(local_10a8);
                        }
                        if (local_1098 != (wchar_t *)0x0) {
                          FUN_1400020a8();
                        }
                        if (-1 < iVar10) break;
                        LVar6 = *pLVar12;
                        *pLVar12 = *pLVar21;
                        *pLVar21 = LVar6;
                        iVar10 = iVar29 * 2;
                        iVar37 = iVar29 * 2 + 1;
                      } while ((longlong)iVar37 < (longlong)uVar26);
                      LVar6 = *pLVar32;
                      *pLVar32 = pLVar32[uVar35 - 2];
                      pLVar32[uVar35 - 2] = LVar6;
                      pLVar12 = local_1100;
                      uVar35 = uVar26;
                    } while (2 < uVar26);
                  }
                }
              }
LAB_1435aa083:
              pLVar12 = pLVar12 + -3;
            } while (local_1088 <= pLVar12);
          }
          lVar23 = local_10e8;
          *(undefined1 *)(local_10e8 + 0x1078) = 0;
          QueryPerformanceCounter(local_1088);
          local_1108 = ((double)local_1088[0].QuadPart * DAT_14c83f420 + 16777216.0) -
                       *(double *)(lVar23 + 0x68);
          lVar20 = *(longlong *)(lVar23 + 0x1440);
          local_1120 = local_10c0;
          local_1118 = local_10c8;
          lVar19 = local_10e0;
          uVar22 = local_10d8;
          iVar37 = local_10cc;
        }
        local_1110 = &local_10b8;
        local_1128 = CONCAT44(uVar42,uVar40);
        FUN_1478cf712(lVar20,uVar22 & 0xffffffff,lVar19 + 0x48,iVar37);
        *(undefined1 *)(*(longlong *)(lVar23 + 0x1440) + 0xe0) = *(undefined1 *)(lVar23 + 0x11e2);
        if ((0 < (int)uStack_10b0 & *(byte *)(lVar23 + 8)) == 1) {
          local_1088[0].QuadPart = (LONGLONG)local_1068;
          local_1070 = '\0';
          local_1078 = local_68;
          lVar20 = (uStack_10b0 & 0xffffffff) << 3;
          puVar27 = local_10b8;
          local_10e0 = lVar19;
          local_1088[1].QuadPart = local_1088[0].QuadPart;
          do {
            if (0 < (int)((ulonglong)(local_1088[1].QuadPart - (longlong)local_1088[0]) >> 1)) {
              if (local_1078 <= (undefined4 *)(local_1088[1].QuadPart + 4)) {
                FUN_140213274(local_1088,2);
              }
              *(undefined4 *)local_1088[1] = 0x20002c;
              local_1088[1].QuadPart = local_1088[1].QuadPart + 4;
            }
            FUN_1400021e4(puVar27,&local_1098);
            pwVar17 = L"";
            if (local_1090._0_4_ != 0) {
              pwVar17 = local_1098;
            }
            if (pwVar17 == (wchar_t *)0x0) {
              iVar10 = 0;
            }
            else {
              sVar13 = wcslen(pwVar17);
              iVar10 = (int)sVar13;
            }
            lVar19 = (longlong)iVar10;
            if (local_1078 <= (undefined4 *)(local_1088[1].QuadPart + lVar19 * 2)) {
              FUN_140213274(local_1088,lVar19);
            }
            LVar6 = local_1088[1];
            if (iVar10 != 0) {
              memcpy((void *)local_1088[1],pwVar17,lVar19 * 2);
              local_1088[1].QuadPart = lVar19 * 2 + LVar6.QuadPart;
            }
            if (local_1098 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            puVar27 = puVar27 + 2;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
          lVar19 = local_10e0;
          if (local_1070 == '\x01') {
            FUN_1400020a8(local_1088[0].QuadPart);
            lVar19 = local_10e0;
          }
        }
      }
      *(int *)(lVar23 + 0x1400) = (int)*(char *)(lVar23 + 0x11e0);
      iVar10 = *(int *)(lVar19 + 0x50) + -1;
      if (*(int *)(lVar19 + 0x50) == 0) {
        iVar10 = 0;
      }
      FUN_1402980a2(lVar23 + 0x1408,*(undefined8 *)(lVar19 + 0x48),iVar10);
      if (local_10b8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((*(char *)(lVar23 + 10) == '\x01') &&
     (pcVar7 = *(code **)(lVar23 + 0x1190), pcVar7 != (code *)0x0)) {
    plVar24 = (longlong *)(lVar23 + 0x11b0);
    if (*(longlong **)(lVar23 + 0x11a0) != (longlong *)0x0) {
      plVar24 = *(longlong **)(lVar23 + 0x11a0);
    }
    uVar14 = (**(code **)(*plVar24 + 8))(plVar24);
    (*pcVar7)(uVar14);
  }
LAB_1435a9233:
  if ((local_60 ^ (ulonglong)auStack_1148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001435a98d3:
  FUN_1400021e4(pLVar31,&local_1098);
  FUN_1400021e4(pLVar32,&local_10a8);
  pwVar17 = local_1098;
  if (local_1090._0_4_ == 0) {
    pwVar17 = L"";
  }
  puVar28 = local_10a8;
  if (local_10a0 == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  lVar19 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
    uVar18 = (uint)uVar3;
    uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
    uVar16 = (uint)uVar4;
    if (uVar3 != uVar4) {
      if ((uVar4 | uVar3) < 0x80) {
        uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1435a9935;
      }
      iVar10 = uVar18 - uVar16;
      goto LAB_1435a9968;
    }
    if (uVar3 == 0) break;
LAB_1435a9935:
    lVar19 = lVar19 + 2;
  }
  iVar10 = 0;
LAB_1435a9968:
  if (local_10a8 != (undefined2 *)0x0) {
    FUN_1400020a8(local_10a8);
  }
  if (local_1098 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar10) goto LAB_1435a98c6;
LAB_1435a998f:
  do {
    pLVar36 = pLVar38;
    pLVar38 = pLVar36 + -1;
    if (pLVar38 <= pLVar32) break;
    FUN_1400021e4(pLVar32,&local_1098);
    FUN_1400021e4(pLVar38,&local_10a8);
    pwVar17 = local_1098;
    if (local_1090._0_4_ == 0) {
      pwVar17 = L"";
    }
    puVar28 = local_10a8;
    if (local_10a0 == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    lVar19 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar28 + lVar19);
      uVar18 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)pwVar17 + lVar19);
      uVar16 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1435a9a07;
        }
        iVar10 = uVar18 - uVar16;
        goto LAB_1435a9a39;
      }
      if (uVar3 == 0) break;
LAB_1435a9a07:
      lVar19 = lVar19 + 2;
    }
    iVar10 = 0;
LAB_1435a9a39:
    if (local_10a8 != (undefined2 *)0x0) {
      FUN_1400020a8(local_10a8);
    }
    if (local_1098 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar10);
  if (pLVar31 <= pLVar38) {
    LVar6 = *pLVar31;
    *pLVar31 = *pLVar38;
    *pLVar38 = LVar6;
    goto LAB_1435a98c6;
  }
  LVar6 = *pLVar32;
  *pLVar32 = *pLVar38;
  pLVar36[-1] = LVar6;
  DVar15 = (int)local_10f8 - 1;
  pLVar36 = pLVar36 + -2;
  if ((longlong)pLVar36 - (longlong)pLVar32 < (longlong)local_10f0 - (longlong)pLVar31) {
    if (pLVar31 < pLVar21) {
      local_1100->QuadPart = (LONGLONG)pLVar31;
      local_1100[1].QuadPart = (LONGLONG)pLVar21;
      local_1100[2].s.LowPart = DVar15;
      local_1100 = local_1100 + 3;
    }
    pLVar12 = local_1100;
    if (pLVar38 <= pLVar32 + 1) goto LAB_1435aa083;
  }
  else {
    pLVar12 = local_1100;
    if (pLVar32 + 1 < pLVar38) {
      local_1100->QuadPart = (LONGLONG)pLVar32;
      local_1100[1].QuadPart = (LONGLONG)pLVar36;
      local_1100[2].s.LowPart = DVar15;
      pLVar12 = local_1100 + 3;
    }
    pLVar32 = pLVar31;
    pLVar36 = pLVar21;
    if (pLVar21 <= pLVar31) goto LAB_1435aa083;
  }
  local_1100 = pLVar12;
  iVar10 = (int)((ulonglong)((longlong)pLVar36 - (longlong)pLVar32) >> 3);
  uVar26 = (ulonglong)(iVar10 + 1);
  pLVar21 = pLVar36;
  if (DVar15 == 0) goto LAB_1435a9b29;
  goto LAB_1435a9897;
}



// FUNCTION 1435aa364 FUN_1435aa364 body=220 status=ok
// SIG undefined FUN_1435aa364(void)

void FUN_1435aa364(longlong param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar7 = iVar1 - (uint)*(byte *)(param_1 + 0x39);
  cVar6 = (char)uVar7;
  if ('\0' < cVar6) {
    if ((uVar7 & 0xff) == 1) {
      lVar8 = *(longlong *)(param_1 + 0x18);
      uVar7 = *(uint *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 0x3c);
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x18);
      uVar7 = *(uint *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 0x3c);
      uVar4 = 2;
      if (2 < (uint)(int)cVar6) {
        uVar4 = (int)cVar6;
      }
      iVar3 = uVar4 - 1;
      uVar4 = uVar7;
      do {
        iVar9 = iVar9 - *(int *)(lVar8 + 0xc + (ulonglong)(uVar4 & *(uint *)(param_1 + 0x10)) * 0x10
                                );
        *(int *)(param_1 + 0x3c) = iVar9;
        uVar2 = *(uint *)(param_1 + 8);
        if (*(uint *)(param_1 + 8) != uVar4) {
          uVar7 = uVar4 + 1;
          *(uint *)(param_1 + 0xc) = uVar7;
          uVar2 = uVar7;
        }
        uVar4 = uVar2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar5 = (ulonglong)(*(uint *)(param_1 + 0x10) & uVar7) * 0x10;
    *(int *)(param_1 + 0x3c) = iVar9 - *(int *)(lVar8 + 0xc + lVar5);
    dVar10 = *param_2 - *(double *)(lVar8 + lVar5);
    *(double *)(param_1 + 0x30) = dVar10;
    if (0.0 < dVar10) {
      *(double *)(param_1 + 0x28) = (double)*(int *)(lVar8 + lVar5 + 0xc) / dVar10;
    }
    if (*(uint *)(param_1 + 8) != uVar7) {
      *(uint *)(param_1 + 0xc) = uVar7 + 1;
    }
    *(char *)(param_1 + 0x39) = (char)iVar1;
  }
  return;
}



// FUNCTION 1435aa440 FUN_1435aa440 body=40 status=ok
// SIG undefined FUN_1435aa440(void)

undefined4 FUN_1435aa440(longlong param_1)

{
  uint uVar1;
  
  if ((double)*(uint *)(param_1 + 0x3c) < *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x50))
  {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < *(uint *)(param_1 + 0x58));
  }
  return 0;
}



// FUNCTION 1435aa468 FUN_1435aa468 body=54 status=ok
// SIG undefined FUN_1435aa468(void)

void FUN_1435aa468(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((char)(*(char *)(param_1 + 0x38) + '\x01') != cVar1) {
      return;
    }
    *(char *)(param_1 + 0x38) = cVar1;
  }
  else {
    *(char *)(param_1 + 0x38) = cVar1;
    *(char *)(param_1 + 0x39) = cVar1 + -1;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_2 + 0xc);
  FUN_147be52b0(param_1 + 8);
  return;
}



// FUNCTION 1435aa49e FUN_1435aa49e body=349 status=ok
// SIG undefined FUN_1435aa49e(void)

undefined8 * FUN_1435aa49e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2ac) == -1) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14123d7a4(&local_48,0x1000);
    FUN_14123d594(&local_60,0x10,1,0x1c600000);
    if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
      do {
        uVar4 = uStack_40;
        uVar2 = *(undefined8 *)(local_60 + (ulonglong)local_50 * 8);
        lVar6 = (longlong)(int)uStack_40;
        uVar5 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
        if (uStack_40._4_4_ < uVar5) {
          FUN_1463eeb20(&local_48,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_48 + lVar6 * 8) = uVar2;
        uVar5 = local_50 + 1;
        bVar3 = -2 < (int)local_50;
        local_50 = uVar5;
      } while ((bVar3) && ((int)uVar5 < local_58));
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (&local_48 == (longlong *)(param_1 + 0x2a0)) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2a0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2a0) = local_48;
      *(int *)(param_1 + 0x2a8) = (int)uStack_40;
      *(uint *)(param_1 + 0x2ac) = uStack_40._4_4_;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2a0);
  uVar1 = *(undefined4 *)(param_1 + 0x2a8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar1;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1435aa5fc FUN_1435aa5fc body=1579 status=ok
// SIG undefined FUN_1435aa5fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1435aa5fc(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_108 [36];
  uint local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  int local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar17 = (longlong *)(param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x1ec) == -1) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_d0 = plVar17;
    FUN_147befe7a(&local_98);
    if (local_50 < 0x2000) {
      local_50 = 0x2000;
      FUN_147befffc();
    }
    if (*(int *)(param_1 + 0x29c) == -1) {
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_147befc86(&local_a8,0x1000);
      FUN_147be52fe(&local_c0);
      if ((-1 < (int)local_b0) && ((int)local_b0 < local_b8)) {
        do {
          uVar2 = uStack_a0;
          uVar5 = local_c0[local_b0];
          lVar16 = (longlong)(int)uStack_a0;
          uVar3 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
          if (uStack_a0._4_4_ < uVar3) {
            FUN_147befce6(&local_a8,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_a8 + lVar16 * 8) = uVar5;
          uVar3 = local_b0 + 1;
          bVar18 = -2 < (int)local_b0;
          local_b0 = uVar3;
        } while ((bVar18) && ((int)uVar3 < local_b8));
      }
      if (local_c0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (&local_a8 == (longlong *)(param_1 + 0x290)) {
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x290) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x290) = local_a8;
        *(int *)(param_1 + 0x298) = (int)uStack_a0;
        *(uint *)(param_1 + 0x29c) = uStack_a0._4_4_;
      }
    }
    iVar7 = *(int *)(param_1 + 0x298);
    local_e0 = param_1;
    local_d8 = param_3;
    local_c8 = param_2;
    if ((longlong)iVar7 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x290);
      lVar11 = 0;
      do {
        puVar12 = *(undefined8 **)(lVar16 + lVar11);
        local_c0 = puVar12;
        lVar14 = (**(code **)*puVar12)(puVar12);
        local_a8 = 0;
        uVar8 = 0;
        uVar3 = 0;
        if (lVar14 != 0) {
          uVar8 = *(uint *)(lVar14 + 0xc);
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar3 = *(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar18) {
              local_e4 = uVar6;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar6);
              uVar6 = local_e4;
            }
            LOCK();
            uVar3 = *(uint *)(lVar14 + 0x10);
            bVar18 = uVar3 == 0;
            if (bVar18) {
              *(uint *)(lVar14 + 0x10) = uVar6;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar18) {
              uVar3 = uVar6;
            }
          }
          local_a8 = CONCAT44(uVar3,uVar8);
          puVar12 = local_c0;
        }
        uVar8 = uVar3 >> 0xd ^ uVar8 - uVar3;
        uVar6 = uVar8 << 8 ^ (-0x61c88647 - uVar3) - uVar8;
        uVar10 = uVar6 >> 0xd ^ (uVar3 - uVar8) - uVar6;
        uVar3 = uVar10 >> 0xc ^ (uVar8 - uVar6) - uVar10;
        uVar8 = uVar3 << 0x10 ^ (uVar6 - uVar10) - uVar3;
        uVar10 = uVar8 >> 5 ^ (uVar10 - uVar3) - uVar8;
        uVar6 = uVar10 >> 3 ^ (uVar3 - uVar8) - uVar10;
        uVar3 = uVar6 << 10 ^ (uVar8 - uVar10) - uVar6;
        uVar5 = FUN_147bf01c0(&local_98,uVar3 >> 0xf ^ uVar10 - (uVar6 + uVar3),&local_a8);
        uVar3 = ((uint)((ulonglong)puVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar12 >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        FUN_147bf0782(uVar5,uVar3 >> 0x10 ^ uVar3,&local_c0);
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar7 * 8 != lVar11);
    }
    param_2 = local_c8;
    plVar17 = local_d0;
    if (&local_98 != local_d0) {
      FUN_147bf0b76(local_d0,&local_98);
    }
    param_3 = local_d8;
    param_1 = local_e0;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147bed5c6(&local_98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf2a08) && (FUN_144b3d300(&DAT_14caf2a08), DAT_14caf2a08 == -1)) {
    _DAT_14caf29d8 = 0;
    _DAT_14caf29e0 = 0;
    _DAT_14caf29b8 = 0;
    uRam000000014caf29c0 = 0;
    _DAT_14caf29e4 = 0xffffffff00000080;
    _DAT_14caf29ec = 0;
    DAT_14caf29f8 = 0;
    _DAT_14caf2a00 = 0;
    atexit(FUN_1435aac28);
    _Init_thread_footer(&DAT_14caf2a08);
  }
  uVar8 = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar3 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar16 + 0x10);
      bVar18 = uVar3 == 0;
      if (bVar18) {
        *(uint *)(lVar16 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar18) {
        uVar3 = uVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    uVar6 = uVar3 >> 0xd ^ uVar8 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar15 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar6 = uVar15 << 0x10 ^ (uVar10 - uVar13) - uVar15;
    uVar10 = uVar6 >> 5 ^ (uVar13 - uVar15) - uVar6;
    uVar13 = uVar10 >> 3 ^ (uVar15 - uVar6) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar6 - uVar10) - uVar13;
    lVar16 = param_1 + 0x218;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x220);
    }
    iVar7 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x228) - 1U &
                              (uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6))) * 4);
    if (iVar7 != -1) {
      lVar16 = *plVar17;
      do {
        lVar14 = (longlong)iVar7 * 0x60;
        lVar11 = lVar16 + lVar14;
        if ((*(uint *)(lVar16 + lVar14) == uVar8) && (*(uint *)(lVar16 + 4 + lVar14) == uVar3))
        goto LAB_1435aa940;
        iVar7 = *(int *)(lVar11 + 0x58);
      } while (iVar7 != -1);
    }
  }
  lVar11 = 0;
LAB_1435aa940:
  puVar4 = (undefined *)(lVar11 + 8);
  if (lVar11 == 0) {
    puVar4 = (undefined *)0x0;
  }
  puVar9 = &DAT_14caf29b8;
  if (puVar4 != (undefined *)0x0) {
    puVar9 = puVar4;
  }
  FUN_147be549a(puVar9,&local_98);
  *param_2 = local_98;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_90._4_4_;
  param_2[2] = local_98;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_90;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1435aac28 FUN_1435aac28 body=47 status=ok
// SIG undefined FUN_1435aac28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435aac28(void)

{
  _DAT_14caf2a00 = 0;
  if (DAT_14caf29f8 != 0) {
    FUN_1400020a8();
  }
  FUN_147bf0dd6(&DAT_14caf29b8);
  return;
}



// FUNCTION 1435aac57 FUN_1435aac57 body=64 status=ok
// SIG undefined FUN_1435aac57(void)

void FUN_1435aac57(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0);
  if (lVar1 != 0) {
    FUN_1403a31e0(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1435aac98 FUN_1435aac98 body=828 status=ok
// SIG undefined FUN_1435aac98(void)

int FUN_1435aac98(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8 [6];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(char *)((longlong)param_1 + 0x59) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x59) = 1;
    local_1d8 = 0;
    uStack_1d0 = 0;
    iVar7 = (int)param_1[0xd];
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((iVar7 != 0) && (FUN_1403539de(&local_1d8), 0 < (int)param_1[0xd])) {
      lVar10 = 0;
      lVar8 = 0;
      do {
        local_1e8 = 0;
        uStack_1e0 = 0;
        FUN_1403f0b60(&local_158,*(undefined8 *)(param_1[0xc] + lVar10),0,&local_1e8);
        FUN_144a1f04a(&local_1d8,&local_158);
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x70;
      } while (lVar8 < (int)param_1[0xd]);
    }
    if ((int)uStack_1d0 == 0) {
      uVar5 = 0;
    }
    else {
      FUN_1413e28b0(&local_158);
      local_208 = local_1b8;
      local_1b8[0] = 0;
      local_1b8[1] = 0;
      local_1c8 = (undefined4)local_1d8;
      uStack_1c4 = local_1d8._4_4_;
      uStack_1c0 = (int)uStack_1d0;
      uStack_1bc = uStack_1d0._4_4_;
      local_1d8 = 0;
      uStack_1d0 = 0;
      FUN_1414d0442(&local_158,local_1f8,&local_1c8,0);
      FUN_140861e20(CONCAT44(uStack_1c4,local_1c8),uStack_1c0);
      if (CONCAT44(uStack_1c4,local_1c8) != 0) {
        FUN_1400020a8();
      }
      if (local_1b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar2 = (int *)((longlong)local_1f0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1f0 + 0x10))(local_1f0);
          }
        }
      }
      FUN_140f77756(&local_158);
      uVar5 = uStack_1d0 & 0xffffffff;
    }
    FUN_140861e20(local_1d8,uVar5);
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (0 < (int)param_1[0xd]) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        if ((char)param_1[6] == '\0') {
          local_188 = 0;
          local_180 = 0;
          local_1b8[2] = 0;
          local_1b8[3] = 0;
          local_17c = 0xffffffff00000080;
          local_174 = 0;
          local_168 = 0;
          local_160 = 0;
          lVar10 = FUN_14700c192(lVar8 * 0x70 + param_1[0xc],local_1b8 + 2);
LAB_1435aaf6b:
          if (lVar10 != 0) {
            (**(code **)(*param_1 + 0x2a8))(param_1,lVar10);
            iVar7 = iVar7 + 1;
          }
        }
        else {
          lVar10 = FUN_147be66d6();
          if (lVar10 != 0) {
            local_158 = 0;
            uStack_150 = 0;
            local_208 = (longlong *)((ulonglong)local_208 & 0xffffffff00000000);
            FUN_14086ecde(lVar10,&local_158,1,0);
            lVar3 = local_158;
            lVar6 = (longlong)(int)uStack_150;
            if (lVar6 == 0) {
              lVar10 = 0;
            }
            else {
              lVar9 = 0;
              do {
                lVar10 = *(longlong *)(lVar3 + lVar9);
                if (lVar10 != 0) {
                  lVar4 = FUN_14043ab18();
                  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1435aaf4c;
                }
                lVar9 = lVar9 + 8;
              } while (lVar6 * 8 != lVar9);
              lVar10 = 0;
            }
LAB_1435aaf4c:
            if (local_158 != 0) {
              FUN_1400020a8(local_158);
            }
            goto LAB_1435aaf6b;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_1[0xd]);
      goto LAB_1435aaf95;
    }
  }
  iVar7 = 0;
LAB_1435aaf95:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1435aafd6 FUN_1435aafd6 body=69 status=ok
// SIG undefined FUN_1435aafd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435aafd6(void)

{
  _DAT_14caf2a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2a68,1);
  return;
}



// FUNCTION 1435ab01d FUN_1435ab01d body=69 status=ok
// SIG undefined FUN_1435ab01d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab01d(void)

{
  _DAT_14caf2a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2a80,1);
  return;
}



// FUNCTION 1435ab074 FUN_1435ab074 body=846 status=ok
// SIG undefined FUN_1435ab074(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1435ab074(longlong param_1,longlong *param_2,ulonglong param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined2 *_Src;
  byte bVar2;
  ulonglong *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined2 *_Dst;
  undefined1 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 auStack_a0 [4];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  byte local_70;
  undefined7 uStack_6f;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  if ((byte)param_3 < 8) {
    auStack_a0[0] = 0x1435ab0b2;
    plVar8 = (longlong *)FUN_140489acc();
    auStack_a0[0] = 0x1435ab0c2;
    plVar9 = (longlong *)FUN_140489acc();
    auStack_a0[0] = 0x1435ab0de;
    (**(code **)(*plVar9 + 0x2c8))(plVar9,&local_50);
    auStack_a0[0] = 0x1435ab0f5;
    uVar7 = (**(code **)(*plVar8 + 0x2d8))(plVar8,local_50);
  }
  else {
    uVar7 = (undefined4)
            CONCAT71((int7)((param_3 & 0xffffffff) >> 8),(byte)(param_3 & 0xffffffff) >> 3);
  }
  puVar13 = auStack_78;
  if ((char)uVar7 == '\x1f') {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    auStack_a0[0] = 0x1435ab125;
    FUN_14021219d(param_2,&local_68);
    puVar11 = local_68;
    if ((int)uStack_60 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    auStack_a0[0] = 0x1435ab18b;
    FUN_1446f470e(&local_70,puVar11,1);
    puVar11 = (undefined2 *)CONCAT71(uStack_6f,local_70);
    bVar2 = *(byte *)((longlong)param_2 + 0x29);
    if (local_68 != (undefined2 *)0x0) {
      auStack_a0[0] = 0x1435ab1b7;
      FUN_1400020a8();
    }
    if (puVar11 == (undefined2 *)0x0 || (bVar2 & 2) != 0) goto LAB_1435ab2f3;
  }
  else {
    auStack_a0[0] = 0x1435ab13f;
    plVar8 = (longlong *)FUN_140489acc();
    auStack_a0[0] = 0x1435ab15b;
    (**(code **)(*plVar8 + 0x2e0))(plVar8,&local_68,uVar7);
    puVar13 = auStack_78;
    puVar11 = local_68;
    if ((char)uVar7 == '\0') goto LAB_1435ab2f3;
  }
  puVar13 = auStack_78;
  local_70 = 0;
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    auStack_a0[0] = 0x1435ab1f5;
    (**(code **)(*param_2 + 0x170))(param_2,&local_70,1);
  }
  else {
    local_70 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar6 = 1;
    puVar13 = auStack_78;
    if (local_70 != 0) {
      uStack_80 = 0x1435ab22c;
      lVar5 = -(ulonglong)(local_70 + 0x1e & 0xfffffff0);
      pcVar4 = *(code **)(*param_2 + 0x170);
      *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab246;
      (*pcVar4)(param_2,auStack_78 + lVar5);
      bVar2 = local_70;
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab271;
        FUN_1407c8a86(auStack_78 + lVar5,bVar2,&local_68);
        _Dst = local_68;
        if (puVar11 != (undefined2 *)0x0 && 0x80000000 < (int)uStack_60 + 0x7fffffffU) {
          uVar12 = 0;
          do {
            local_68[uVar12] =
                 (ushort)((ushort)local_68[uVar12] - 0x41 < 0x1a) * 0x20 + local_68[uVar12];
            uVar12 = uVar12 + 1;
          } while ((int)uStack_60 - 1 != uVar12);
          if ((param_3 & 4) != 0) {
            iVar10 = (int)uStack_60 + -1;
            if ((int)uStack_60 == 0) {
              iVar10 = 0;
            }
            if (0 < iVar10) {
              iVar14 = (int)uStack_60 - (uint)(0 < iVar10);
              if (iVar14 != 0) {
                _Src = local_68 + 1;
                *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab38e;
                memmove(_Dst,_Src,(longlong)iVar14 * 2);
              }
              uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 - (uint)(0 < iVar10));
              *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab3a7;
              FUN_1449649ae();
            }
          }
          *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab3be;
          FUN_1463edf88(param_1,puVar11,&local_68);
        }
        if (local_68 != (undefined2 *)0x0) {
          *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab2a9;
          FUN_1400020a8();
        }
      }
      puVar13 = auStack_78 + lVar5;
      if (local_70 != 0) {
        if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
          if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
            uVar6 = 0;
            puVar13 = auStack_78 + lVar5;
          }
          else {
            pcVar4 = *(code **)(**(longlong **)(param_1 + 8) + 0x28);
            *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1435ab2d7;
            uVar6 = (*pcVar4)();
            puVar13 = auStack_78 + lVar5;
          }
        }
        else {
          uVar6 = (*(uint *)(param_1 + 8) & 0xffffff) != 0;
          puVar13 = auStack_78 + lVar5;
        }
      }
    }
    *param_4 = uVar6;
  }
LAB_1435ab2f3:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x28) = &UNK_1435ab31d;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435ab3c8 FUN_1435ab3c8 body=544 status=ok
// SIG undefined FUN_1435ab3c8(void)

undefined8 FUN_1435ab3c8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  short *psVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined2 *)0x0;
  plStack_30 = (longlong *)0x0;
  (**(code **)(*param_1 + 8))(0,local_48 + 2);
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
  psVar5 = (short *)*param_2;
  if (psVar5 == (short *)0x0) {
LAB_1435ab4b6:
    if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 3)] == '\x01') {
      if (((longlong *)param_1[1] == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x28))(), cVar4 == '\0')) {
LAB_1435ab4ec:
        uVar7 = 0;
        goto LAB_1435ab576;
      }
    }
    else if ((*(uint *)(param_1 + 1) & 0xffffff) == 0) goto LAB_1435ab4ec;
  }
  else if (*psVar5 != 0) {
    if ((*psVar5 != 0x28) || (psVar5[1] != 0x29)) {
      local_38 = (undefined2 *)0x0;
      plStack_30 = (longlong *)0x0;
      psVar5 = (short *)FUN_1401e9420(psVar5,local_48 + 2,0);
      if (psVar5 != (short *)0x0) {
        *param_2 = (longlong)psVar5;
        if (*psVar5 != 0x3a) {
          if ((int)plStack_30 == DAT_14caf2ae8) {
            if (1 < (int)plStack_30) {
              lVar6 = 0;
              while( true ) {
                uVar9 = *(ushort *)((longlong)local_38 + lVar6);
                uVar10 = (ulonglong)uVar9;
                uVar11 = *(ushort *)(DAT_14caf2ae0 + lVar6);
                if (uVar9 != uVar11) break;
                if (uVar9 == 0) goto LAB_1435ab56a;
LAB_1435ab530:
                lVar6 = lVar6 + 2;
              }
              if ((uVar11 | uVar9) < 0x80) {
                uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1435ab530;
              }
              if (uVar9 != uVar11) goto LAB_1435ab5a6;
            }
          }
          else if (DAT_14caf2ae8 + (int)plStack_30 != 1) {
LAB_1435ab5a6:
            FUN_1463edf88(param_1,0,local_48 + 2);
            goto LAB_1435ab4a7;
          }
LAB_1435ab56a:
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1435ab574;
        }
        *param_2 = (longlong)(psVar5 + 1);
        local_48[0] = 0;
        local_48[1] = 0;
        lVar6 = FUN_1401e9420(psVar5 + 1,local_48,0);
        if (lVar6 != 0) {
          *param_2 = lVar6;
          puVar8 = local_38;
          if ((int)plStack_30 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_50,puVar8,1);
          FUN_1463edf88(param_1,local_50,local_48);
        }
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
      }
LAB_1435ab4a7:
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1435ab4b6;
    }
    *param_2 = (longlong)(psVar5 + 2);
  }
LAB_1435ab574:
  uVar7 = 1;
LAB_1435ab576:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1435ab5eb FUN_1435ab5eb body=69 status=ok
// SIG undefined FUN_1435ab5eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab5eb(void)

{
  _DAT_14caf2b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab62d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b28,1);
  return;
}



// FUNCTION 1435ab630 FUN_1435ab630 body=69 status=ok
// SIG undefined FUN_1435ab630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab630(void)

{
  _DAT_14caf2b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b38,1);
  return;
}



// FUNCTION 1435ab675 FUN_1435ab675 body=69 status=ok
// SIG undefined FUN_1435ab675(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab675(void)

{
  _DAT_14caf2b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b48,1);
  return;
}



// FUNCTION 1435ab6ba FUN_1435ab6ba body=69 status=ok
// SIG undefined FUN_1435ab6ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab6ba(void)

{
  _DAT_14caf2b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b58,1);
  return;
}



// FUNCTION 1435ab6ff FUN_1435ab6ff body=69 status=ok
// SIG undefined FUN_1435ab6ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab6ff(void)

{
  _DAT_14caf2b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b68,1);
  return;
}



// FUNCTION 1435ab744 FUN_1435ab744 body=69 status=ok
// SIG undefined FUN_1435ab744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab744(void)

{
  _DAT_14caf2b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b80,1);
  return;
}



// FUNCTION 1435ab789 FUN_1435ab789 body=69 status=ok
// SIG undefined FUN_1435ab789(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab789(void)

{
  _DAT_14caf2b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2b98,1);
  return;
}



// FUNCTION 1435ab7ce FUN_1435ab7ce body=69 status=ok
// SIG undefined FUN_1435ab7ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab7ce(void)

{
  _DAT_14caf2ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2bb0,1);
  return;
}



// FUNCTION 1435ab813 FUN_1435ab813 body=69 status=ok
// SIG undefined FUN_1435ab813(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab813(void)

{
  _DAT_14caf2bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2bc8,1);
  return;
}



// FUNCTION 1435ab858 FUN_1435ab858 body=69 status=ok
// SIG undefined FUN_1435ab858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab858(void)

{
  _DAT_14caf2bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2be0,1);
  return;
}



// FUNCTION 1435ab89d FUN_1435ab89d body=69 status=ok
// SIG undefined FUN_1435ab89d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab89d(void)

{
  _DAT_14caf2bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2bf8,1);
  return;
}



// FUNCTION 1435ab8e2 FUN_1435ab8e2 body=69 status=ok
// SIG undefined FUN_1435ab8e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab8e2(void)

{
  _DAT_14caf2c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c10,1);
  return;
}



// FUNCTION 1435ab927 FUN_1435ab927 body=69 status=ok
// SIG undefined FUN_1435ab927(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab927(void)

{
  _DAT_14caf2c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c20,1);
  return;
}



// FUNCTION 1435ab96c FUN_1435ab96c body=69 status=ok
// SIG undefined FUN_1435ab96c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab96c(void)

{
  _DAT_14caf2c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c38,1);
  return;
}



// FUNCTION 1435ab9b1 FUN_1435ab9b1 body=69 status=ok
// SIG undefined FUN_1435ab9b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab9b1(void)

{
  _DAT_14caf2c48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ab9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c50,1);
  return;
}



// FUNCTION 1435ab9f6 FUN_1435ab9f6 body=69 status=ok
// SIG undefined FUN_1435ab9f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ab9f6(void)

{
  _DAT_14caf2c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435aba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c60,1);
  return;
}



// FUNCTION 1435aba3b FUN_1435aba3b body=69 status=ok
// SIG undefined FUN_1435aba3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435aba3b(void)

{
  _DAT_14caf2c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435aba7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c70,1);
  return;
}



// FUNCTION 1435aba80 FUN_1435aba80 body=69 status=ok
// SIG undefined FUN_1435aba80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435aba80(void)

{
  _DAT_14caf2c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435abac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c80,1);
  return;
}



// FUNCTION 1435abac5 FUN_1435abac5 body=69 status=ok
// SIG undefined FUN_1435abac5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435abac5(void)

{
  _DAT_14caf2c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435abb07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2c90,1);
  return;
}



// FUNCTION 1435abb0a FUN_1435abb0a body=222 status=ok
// SIG undefined FUN_1435abb0a(void)

void FUN_1435abb0a(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1[1] == 0) {
LAB_1435abb62:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         (((*(uint *)(puVar2 + 2) != param_1[1] || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_1435abb62;
      uVar3 = *puVar2;
    }
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1435abbc1;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) &&
        ((*(uint *)(puVar2 + 2) == param_1[3] && ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      uVar4 = *puVar2;
      goto LAB_1435abbc1;
    }
  }
  uVar4 = 0;
LAB_1435abbc1:
  FUN_147d87416(DAT_14cb0d2b0 + 0xec8,uVar3,uVar4,param_1[4],param_1 + 6);
  return;
}



// FUNCTION 1435abbe8 FUN_1435abbe8 body=1136 status=ok
// SIG undefined FUN_1435abbe8(void)

undefined1
FUN_1435abbe8(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
             ulonglong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_70;
  undefined1 local_68 [16];
  ulonglong local_58 [2];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    lVar8 = *param_4;
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
      FUN_140574f3e(param_1[0x62],&local_48,lVar8,0);
      if (param_5 != (ulonglong *)0x0) {
        *param_5 = (ulonglong)local_48;
      }
      FUN_140056680(local_58,&DAT_149dfb77a);
      local_c0 = 0;
      local_c8 = local_58;
      FUN_140574330(param_1,param_2,local_48,*param_4);
      if (((local_48 != (code *)0x1) && (*param_4 != 0)) &&
         (cVar3 = FUN_140574a1e(param_1,*param_4,&local_48), cVar3 != '\0')) {
        FUN_140056680(local_68,&DAT_149dfb77a);
        local_c8 = (ulonglong *)0x0;
        FUN_1435ac05a(param_1,local_48,*param_4,local_68);
      }
      uVar4 = 1;
    }
    else {
      local_48 = (code *)0x0;
      local_c8 = param_5;
      uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
    }
    goto LAB_1435abf80;
  }
  uVar4 = 1;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_1435abf80;
  local_c8 = (ulonglong *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_1435ac8f2(param_1,&local_48,param_2,param_4);
  pcVar7 = local_48;
  local_70 = local_48;
  if (param_5 != (ulonglong *)0x0) {
    *param_5 = (ulonglong)local_48;
  }
  lVar8 = *param_4;
  if ((param_1[0x26] != 0) &&
     (lVar6 = *(longlong *)(param_1[0x26] + 0x58), (lVar6 != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c(lVar6);
  }
  cVar3 = FUN_1435b1704(lVar8);
  if (cVar3 == '\0') {
LAB_1435abe5d:
    *param_4 = 0;
  }
  else if (*param_4 != 0) {
    lVar8 = *(longlong *)(*param_4 + 0x10);
    if ((*(byte *)(param_3 + 0xd5) & 0x40) == 0) {
      if ((*(int *)(param_3 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
          param_3 + 0x30)) goto LAB_1435abe64;
    }
    else if (param_3 != 0) {
      if (DAT_14c950d78 == 0) {
        local_48 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1468b50ee;
        local_a0 = FUN_1427f23a3;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x28);
        local_90 = &local_48;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if ((lVar8 != 0) && (DAT_14c950d78 != param_3)) {
        do {
          if (0 < (longlong)*(int *)(lVar8 + 0x1e0)) {
            lVar6 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x1d8) + lVar6);
              if (((lVar2 != 0) && (*(int *)(param_3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
                  param_3 + 0x30)) goto LAB_1435abe64;
              lVar6 = lVar6 + 0x10;
            } while ((longlong)*(int *)(lVar8 + 0x1e0) * 0x10 != lVar6);
          }
          lVar8 = *(longlong *)(lVar8 + 0x40);
        } while (lVar8 != 0);
      }
    }
    goto LAB_1435abe5d;
  }
LAB_1435abe64:
  if (((pcVar7 != (code *)0x0) && ((char)param_1[5] == '\x01')) &&
     (cVar3 = FUN_1408c2550(param_1[0x62],&local_70,0), cVar3 == '\0')) {
    if (*param_4 == 0) {
      plVar5 = param_1 + 6;
    }
    else {
      if (((ulonglong)pcVar7 & 1) != 0) goto LAB_1435abeb5;
      plVar5 = param_1 + 0x10;
    }
    FUN_140325a06(plVar5,&local_48,&local_70,0);
  }
LAB_1435abeb5:
  if ((local_70 != (code *)0x0 & DAT_14caf2c98) == 1) {
    lVar8 = param_1[0x62];
    pcVar7 = local_70;
    do {
      local_48 = pcVar7;
      if ((longlong)*(int *)(lVar8 + 0x2b8) != 0) {
        lVar6 = 0;
        do {
          if (*(code **)(*(longlong *)(lVar8 + 0x2b0) + lVar6) == pcVar7) {
            iVar1 = (int)param_1[0x80];
            *(uint *)(param_1 + 0x80) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0x404) < iVar1 + 1U) {
              FUN_140b3b51e(param_1 + 0x7f,iVar1);
            }
            *(code **)(param_1[0x7f] + (longlong)iVar1 * 8) = pcVar7;
            lVar8 = param_1[0x62];
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(lVar8 + 0x2b8) * 8 != lVar6);
      }
      lVar6 = FUN_1400fcfc4(lVar8);
    } while ((lVar6 != 0) &&
            (pcVar7 = *(code **)(lVar6 + 8), local_48 = pcVar7, pcVar7 != (code *)0x0));
  }
  uVar4 = local_70 == (code *)0x0 || *param_4 != 0;
LAB_1435abf80:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1435ac05a FUN_1435ac05a body=2198 status=ok
// SIG undefined FUN_1435ac05a(void)

void FUN_1435ac05a(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  void **param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  undefined2 *puVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_108 [32];
  void **local_e8;
  void **local_e0;
  longlong local_d0;
  int *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  void *local_90;
  int local_88;
  undefined4 local_84;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = param_2;
  local_70 = param_2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0xa4) & 2) == 0) {
    local_c8 = (int *)(param_1 + 0x308);
    local_b8 = (longlong *)(param_1 + 0x148);
    puVar1 = (uint *)(param_1 + 0x158);
    bVar23 = 0;
    bVar6 = true;
    local_d0 = param_3;
    local_c0 = param_4;
    do {
      bVar5 = bVar6;
      param_4 = local_c0;
      if (*(longlong *)(param_1 + 0x300) == 0) {
        puVar7 = (undefined8 *)FUN_14001cc68(0x138,0x10);
        FUN_144a679e2(puVar7,param_1,
                      (longlong)
                      ((*(int *)(*(longlong *)(param_1 + 0x130) + 0xa0) * 8 -
                       *(int *)(*(longlong *)(param_1 + 0x130) + 0x130)) + -0x235));
        *puVar7 = &PTR_FUN_14a8a3730;
        puVar7[0x19] = 0;
        puVar7[0x1a] = 0;
        puVar7[0x1b] = 0;
        puVar7[0x1c] = 0;
        *(undefined8 *)((longlong)puVar7 + 0xe5) = 0;
        *(undefined8 *)((longlong)puVar7 + 0xed) = 0;
        bVar3 = *(byte *)((longlong)puVar7 + 0xf5);
        *(undefined1 *)((longlong)puVar7 + 0xf6) = 0;
        puVar7[0x25] = 0;
        puVar7[0x26] = 0x400000000;
        puVar7[0x1f] = 0;
        puVar7[0x20] = 0;
        puVar7[0x21] = 0;
        puVar7[0x22] = 0;
        *(undefined8 **)(param_1 + 0x300) = puVar7;
        *(undefined2 *)(puVar7 + 0x16) = 0x100;
        *(byte *)((longlong)puVar7 + 0xf5) = (bVar3 & 0xf8) + 1;
        FUN_1400748c2(puVar7,0);
        *(undefined4 *)(param_1 + 0x308) = 0;
        plVar4 = *(longlong **)(param_1 + 0x300);
        piVar8 = *(int **)plVar4[1];
        if ((int *)((undefined8 *)plVar4[1])[1] < piVar8 + 1) {
          if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar4 + 0x170))(plVar4,local_c8,4);
          }
          else {
            FUN_14572512c(plVar4,local_c8);
          }
        }
        else {
          *local_c8 = *piVar8;
          *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
        }
      }
      if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
        if (local_d0 == 0) {
          if ((int)param_4[1] == 0) {
            puVar22 = &DAT_149dfb77a;
          }
          else {
            puVar22 = (undefined2 *)*param_4;
          }
          pwVar21 = L"ExportNetGUID - CurrentExportNetGUIDs.Num() != 0 (%s).";
          uVar16 = 0x56f;
LAB_1435ac88e:
          FUN_140033559(".\\Runtime/Engine/Private/PackageMapClient.cpp",uVar16,pwVar21,puVar22);
        }
        else {
          local_a8 = *(undefined2 **)(local_d0 + 0x18);
          FUN_1400021e4(&local_a8,&local_80);
          if ((int)local_78 == 0) {
            puVar22 = &DAT_149dfb77a;
          }
          else {
            puVar22 = (undefined2 *)CONCAT71(uStack_7f,local_80);
          }
          FUN_140033559(".\\Runtime/Engine/Private/PackageMapClient.cpp",0x56f,
                        L"ExportNetGUID - CurrentExportNetGUIDs.Num() != 0 (%s).",puVar22);
          puVar22 = (undefined2 *)CONCAT71(uStack_7f,local_80);
LAB_1435ac842:
          if (puVar22 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x300) + 0xa0);
      local_80 = *(byte *)(*(longlong *)(param_1 + 0x300) + 0x29) >> 1 & 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x152) = 1;
      local_90 = (void *)0x0;
      local_88 = (int)param_4[1];
      lVar18 = (longlong)local_88;
      _Src = (void *)*param_4;
      if (lVar18 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_88,0);
        memcpy(local_90,_Src,lVar18 * 2);
      }
      local_e8 = &local_90;
      local_e0 = param_5;
      FUN_140574330(param_1,*(undefined8 *)(param_1 + 0x300),local_b0,local_d0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x152) = 0;
      lVar18 = *(longlong *)(param_1 + 0x300);
      if (*(int *)(param_1 + 0x150) == *(int *)(param_1 + 0x17c)) {
        FUN_14278fe74(&local_80,lVar18);
        break;
      }
      if ((*(byte *)(lVar18 + 0x29) & 2) == 0) {
        local_a8 = (undefined2 *)0x0;
        uStack_a0 = 0;
        iVar14 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar14);
        }
        FUN_1417c3e4a(&local_a8);
        iVar14 = *(int *)(param_1 + 0x170);
        if (iVar14 == 0) {
          uVar25 = 1;
          uVar19 = 0;
          iVar17 = 0;
          iVar9 = 0;
          goto LAB_1435ac5ce;
        }
        puVar13 = *(uint **)(param_1 + 0x168);
        if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar24 = *puVar13;
        if (uVar24 != 0) {
          uVar19 = 0;
          iVar9 = 0;
          goto LAB_1435ac5a5;
        }
        iVar9 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar9 = iVar14 + -1;
        }
        uVar19 = 0;
        uVar25 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar25 = uVar19;
        }
        iVar9 = 0;
        goto LAB_1435ac58b;
      }
      FUN_14278fe74(&local_80,lVar18);
      FUN_144958770(local_b8,0);
      if (!(bool)(~bVar23 & *local_c8 != 0)) {
        if (local_d0 == 0) {
          if ((int)param_4[1] == 0) {
            puVar22 = &DAT_149dfb77a;
          }
          else {
            puVar22 = (undefined2 *)*param_4;
          }
          pwVar21 = L"ExportNetGUID - Failed to serialize NetGUID into single bunch. (%s)";
          uVar16 = 0x59a;
          goto LAB_1435ac88e;
        }
        local_68 = *(undefined8 *)(local_d0 + 0x18);
        FUN_1400021e4(&local_68,&local_a8);
        puVar22 = local_a8;
        if ((uint)uStack_a0 == 0) {
          puVar22 = &DAT_149dfb77a;
        }
        FUN_140033559(".\\Runtime/Engine/Private/PackageMapClient.cpp",0x59a,
                      L"ExportNetGUID - Failed to serialize NetGUID into single bunch. (%s)",puVar22
                     );
        puVar22 = local_a8;
        goto LAB_1435ac842;
      }
      iVar14 = *(int *)(param_1 + 0x170);
      if (iVar14 == 0) {
        uVar25 = 1;
        uVar19 = 0;
        iVar17 = 0;
        iVar9 = 0;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x168);
        if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar24 = *puVar13;
        if (uVar24 == 0) {
          iVar9 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar9 = iVar14 + -1;
          }
          uVar19 = 0;
          uVar25 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar25 = uVar19;
          }
          iVar17 = 0;
          do {
            if (uVar25 == uVar19) goto LAB_1435ac496;
            iVar17 = iVar17 + 0x20;
            uVar24 = puVar13[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar19 = 0;
          iVar17 = 0;
        }
        uVar25 = (ulonglong)(-uVar24 & uVar24);
        uVar2 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar9) {
          iVar9 = iVar14;
        }
      }
      if (iVar9 < iVar14) {
        uVar24 = 0xffffffff;
        do {
          uVar16 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar9 * 0x10);
          piVar8 = (int *)FUN_140574dc4(param_1 + 0xe0,
                                        (int)((ulonglong)uVar16 >> 0x20) * 0x17 + (int)uVar16);
          *piVar8 = *piVar8 + -1;
          uVar24 = ~(uint)uVar25 & uVar24;
          puVar13 = *(uint **)(param_1 + 0x168);
          if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
            puVar13 = puVar1;
          }
          iVar14 = *(int *)(param_1 + 0x170);
          iVar9 = (int)uVar19;
          lVar18 = (longlong)iVar9;
          uVar10 = puVar13[lVar18] & uVar24;
          if (uVar10 == 0) {
            iVar11 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar11 = iVar14 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar12 = iVar11;
            if (iVar11 < iVar9) {
              iVar12 = iVar9;
            }
            if (iVar11 <= iVar9) break;
            lVar15 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar10 = puVar13[lVar18 + lVar15 + 1];
              if (uVar10 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar12 - lVar18 == lVar15) goto LAB_1435ac496;
            }
            uVar19 = (ulonglong)(iVar9 + (int)lVar15 + 1);
            uVar24 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar25 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar9 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar9 < iVar14);
      }
LAB_1435ac496:
      FUN_1435af632(param_1);
      bVar23 = 1;
      param_4 = local_c0;
      bVar6 = false;
    } while (bVar5);
  }
  else {
    local_e8 = param_5;
    FUN_147be76e0(param_1,&local_70,param_3,param_4);
  }
  goto LAB_1435ac893;
  while( true ) {
    iVar9 = iVar9 + 0x20;
    uVar24 = puVar13[uVar19 + 1];
    uVar19 = uVar19 + 1;
    if (uVar24 != 0) break;
LAB_1435ac58b:
    if (uVar25 == uVar19) goto LAB_1435ac6eb;
  }
LAB_1435ac5a5:
  uVar25 = (ulonglong)(-uVar24 & uVar24);
  uVar2 = uVar25 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar17 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if (iVar14 <= iVar17) {
    iVar17 = iVar14;
  }
LAB_1435ac5ce:
  if (iVar17 < iVar14) {
    uVar24 = 0xffffffff;
    do {
      uVar2 = uStack_a0;
      lVar15 = *local_b8;
      lVar20 = (longlong)(int)(uint)uStack_a0;
      uVar10 = (uint)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
      if (uStack_a0._4_4_ < uVar10) {
        local_d0 = CONCAT44(local_d0._4_4_,iVar9);
        FUN_140b3b51e(&local_a8,uVar2 & 0xffffffff);
        iVar9 = (int)local_d0;
      }
      *(undefined8 *)(local_a8 + lVar20 * 4) = *(undefined8 *)((longlong)iVar17 * 0x10 + lVar15);
      uVar24 = uVar24 & ~(uint)uVar25;
      puVar13 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      iVar14 = *(int *)(param_1 + 0x170);
      iVar17 = (int)uVar19;
      lVar15 = (longlong)iVar17;
      uVar10 = puVar13[lVar15] & uVar24;
      param_4 = local_c0;
      if (uVar10 == 0) {
        iVar11 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar11 = iVar14 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar11 <= iVar17) break;
        lVar20 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar10 = puVar13[lVar15 + lVar20 + 1];
          if (uVar10 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar12 - lVar15 == lVar20) goto LAB_1435ac6eb;
        }
        uVar19 = (ulonglong)(iVar17 + (int)lVar20 + 1);
        uVar24 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar17 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar17 < iVar14);
  }
LAB_1435ac6eb:
  lVar15 = (longlong)(int)(uint)uStack_a0;
  if (lVar15 != 0) {
    iVar14 = *(int *)(lVar18 + 0x100);
    *(uint *)(lVar18 + 0x100) = iVar14 + (uint)uStack_a0;
    if ((uint)(*(int *)(lVar18 + 0x104) - iVar14) < (uint)uStack_a0) {
      FUN_140b3b51e((longlong *)(lVar18 + 0xf8),iVar14);
    }
    memmove((void *)((longlong)iVar14 * 8 + *(longlong *)(lVar18 + 0xf8)),local_a8,lVar15 << 3);
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    param_4 = local_c0;
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144958770(local_b8,0);
  *local_c8 = *local_c8 + 1;
LAB_1435ac893:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ac8f2 FUN_1435ac8f2 body=4126 status=ok
// SIG undefined FUN_1435ac8f2(void)

byte * FUN_1435ac8f2(longlong *param_1,byte *param_2,longlong *param_3,longlong *param_4,int param_5
                    )

{
  byte *pbVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  code *pcVar19;
  byte bVar20;
  longlong lVar21;
  code *pcVar22;
  undefined2 *puVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  undefined2 *puStack_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  byte local_119;
  longlong local_118;
  undefined2 *local_110;
  code *local_108;
  longlong local_100;
  undefined8 *local_f8;
  int local_ec;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  longlong local_c8;
  byte local_b9;
  code *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  byte local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  code *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (0x10 < param_5) {
    FUN_14572541c(param_3);
    *param_4 = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    goto LAB_1435aca4f;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  (**(code **)(*param_3 + 400))(param_3,param_2);
  if (((*(byte *)((longlong)param_3 + 0x29) & 2) != 0) || (*(longlong *)param_2 == 0)) {
LAB_1435aca48:
    *param_4 = 0;
    goto LAB_1435aca4f;
  }
  if (*(longlong *)param_2 == 1) {
LAB_1435ac9b3:
    local_b9 = 0;
    puVar5 = (ulonglong *)param_3[1];
    pbVar1 = (byte *)*puVar5 + 1;
    if ((byte *)puVar5[1] < pbVar1) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_b9,1);
    }
    else {
      local_b9 = *(byte *)*puVar5;
      *puVar5 = (ulonglong)pbVar1;
    }
    if ((*(byte *)((longlong)param_3 + 0x29) & 2) != 0) goto LAB_1435aca48;
    lVar15 = param_1[0x62];
    bVar20 = *(byte *)(lVar15 + 0x152);
    lVar14 = *(longlong *)param_2;
  }
  else {
    lVar14 = (**(code **)(*param_1 + 800))(param_1,param_2,*(undefined1 *)(param_1[0x62] + 0x152));
    *param_4 = lVar14;
    lVar14 = *(longlong *)param_2;
    local_b9 = 0;
    if (lVar14 == 1) goto LAB_1435ac9b3;
    lVar15 = param_1[0x62];
    bVar20 = *(byte *)(lVar15 + 0x152);
    if (bVar20 == 1) goto LAB_1435ac9b3;
  }
  if (((bVar20 & 1) != 0) && (lVar14 != 0)) {
    FUN_140325a06(lVar15 + 0xa8,&local_b8,param_2,0);
  }
  if ((local_b9 & 1) == 0) {
    if (*param_4 == 0) {
      FUN_140ebde88(param_1[0x62],param_2);
    }
    goto LAB_1435aca4f;
  }
  local_c8 = 0;
  local_178 = (undefined2 *)CONCAT44(local_178._4_4_,param_5 + 1);
  FUN_1435ac8f2(param_1,&local_d0,param_3);
  local_e8 = (code *)0x0;
  uStack_e0 = 0;
  local_ec = 0;
  FUN_14021219d(param_3);
  if ((local_b9 & 4) != 0) {
    puVar5 = (ulonglong *)param_3[1];
    piVar2 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar2) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_ec,4);
      }
      else {
        FUN_14572512c(param_3,&local_ec);
      }
    }
    else {
      local_ec = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar2;
    }
  }
  bVar25 = (*param_2 & 1) == 0;
  bVar26 = local_d0 != 0;
  if ((*(byte *)((longlong)param_3 + 0x29) & 2) == 0) {
    (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,param_1[0x26],&local_e8,1);
    lVar14 = local_c8;
    if (*(longlong *)param_2 == 1) {
      if ((!bVar25 && !bVar26) || (local_c8 != 0 || local_d0 == 0)) {
        pcVar19 = local_e8;
        if ((int)uStack_e0 == 0) {
          pcVar19 = (code *)&DAT_149dfb77a;
        }
        if (DAT_14c927740 == 0) {
          local_140 = &local_b8;
          local_b8 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_146856450;
          local_150 = FUN_1427b121c;
          local_158 = L"Engine";
          local_160 = 0;
          local_168 = 0x10000021;
          puStack_170 = (undefined2 *)CONCAT44(puStack_170._4_4_,8);
          local_178 = (undefined2 *)CONCAT44(local_178._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar14 = FUN_140277b32(DAT_14c927740,lVar14,pcVar19,0);
        *param_4 = lVar14;
        if (lVar14 == 0 && (!bVar25 && !bVar26)) {
          iStack_b0 = (int)uStack_e0 + -1;
          if ((int)uStack_e0 == 0) {
            iStack_b0 = 0;
          }
          local_58 = (code *)0x0;
          uStack_50 = uStack_50 & 0xffffffffffffff00;
          local_b8 = local_e8;
          FUN_1414176ea(&local_b8,&local_58);
          local_178 = (undefined2 *)0x0;
          puStack_170 = (undefined2 *)0x0;
          lVar14 = FUN_14283dc80(0,&local_58,0,0);
          *param_4 = lVar14;
        }
        lVar15 = DAT_14caf2b88;
        if (lVar14 == 0) goto LAB_1435ad0ab;
        if ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0) {
          if ((local_ec != 0) && (*(char *)(param_1[0x62] + 0x150) == '\x01')) {
            iVar11 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60);
            if ((iVar11 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar11 == 2)))) {
              uVar16 = 0;
            }
            else if (iVar11 == 1) {
              DVar12 = FUN_140ad26c0();
              DVar13 = GetCurrentThreadId();
              uVar16 = (ulonglong)(DVar12 != DVar13);
              lVar14 = *param_4;
            }
            else {
              uVar16 = 1;
            }
            if (*(int *)(lVar15 + uVar16 * 4) == 0) {
              iVar9 = FUN_140574c42(param_1[0x62],lVar14);
              iVar11 = local_ec;
              if (iVar9 != local_ec) {
                if (local_c8 == 0) {
                  pcVar19 = local_e8;
                  if ((int)uStack_e0 == 0) {
                    pcVar19 = (code *)&DAT_149dfb77a;
                  }
                  puStack_170 = (undefined2 *)CONCAT44(puStack_170._4_4_,local_ec);
                  local_178 = (undefined2 *)CONCAT44(local_178._4_4_,iVar9);
                  FUN_140002266(&local_b8,
                                L"UPackageMapClient::InternalLoadObject: Default object package network checksum mismatch! ObjectName: %s, ObjOuter: %s, GUID1: %u, GUID2: %u "
                                ,pcVar19,L"NULL");
                }
                else {
                  local_58 = (code *)0x0;
                  uStack_50 = 0;
                  FUN_1401031ac(local_c8,0,&local_58);
                  pcVar19 = (code *)&DAT_149dfb77a;
                  if ((int)uStack_50 != 0) {
                    pcVar19 = local_58;
                  }
                  pcVar22 = (code *)&DAT_149dfb77a;
                  if ((int)uStack_e0 != 0) {
                    pcVar22 = local_e8;
                  }
                  puStack_170 = (undefined2 *)CONCAT44(puStack_170._4_4_,iVar11);
                  local_178 = (undefined2 *)CONCAT44(local_178._4_4_,iVar9);
                  FUN_140002266(&local_b8,
                                L"UPackageMapClient::InternalLoadObject: Default object package network checksum mismatch! ObjectName: %s, ObjOuter: %s, GUID1: %u, GUID2: %u "
                                ,pcVar22,pcVar19);
                  if (local_58 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
                *param_4 = 0;
                FUN_147be749e(*(undefined8 *)(param_1[0x62] + 0x148),10,&local_b8);
                if (local_b8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_1435ad0ab;
              }
              lVar14 = *param_4;
            }
          }
          if (bVar25 || bVar26) {
LAB_1435acfd4:
            FUN_140574f3e(param_1[0x62],&local_b8,lVar14,0);
            *(code **)param_2 = local_b8;
            lVar14 = *param_4;
            FUN_140574f3e(param_1[0x62],&local_58,lVar14,0);
            if ((local_58 != (code *)&DAT_00000001) &&
               (cVar8 = FUN_140574a1e(param_1,lVar14,&local_58), cVar8 != '\0')) {
              FUN_140056680(&local_b8,&DAT_149dfb77a);
              local_178 = (undefined2 *)0x0;
              FUN_1435ac05a(param_1,local_58,lVar14,&local_b8);
            }
            goto LAB_1435ad0ab;
          }
          if (lVar14 != 0) {
            if (DAT_14c951858 == 0) {
              local_140 = &local_b8;
              local_b8 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              puStack_170 = (undefined2 *)CONCAT44(puStack_170._4_4_,8);
              local_178 = (undefined2 *)CONCAT44(local_178._4_4_,0x50);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
              lVar14 = *param_4;
              goto LAB_1435acfd4;
            }
          }
        }
      }
      goto LAB_1435ad0a4;
    }
    lVar15 = *param_4;
    if (lVar15 != 0) {
      local_58 = *(code **)(lVar15 + 0x18);
      FUN_1400021e4(&local_58,&local_b8);
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = *(longlong *)(lVar15 + 0x20);
      if (lVar15 != lVar14) {
        if (lVar15 == 0) {
          FUN_140056680(&local_b8,L"NULL");
        }
        else {
          local_b8 = *(code **)(lVar15 + 0x18);
          FUN_1400021e4(&local_b8,&local_58);
          pcVar19 = local_58;
          if ((int)uStack_50 == 0) {
            pcVar19 = (code *)&DAT_149dfb77a;
          }
          FUN_140056680(&local_b8,pcVar19);
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        if (lVar14 == 0) {
          FUN_140056680(&local_58,L"NULL");
        }
        else {
          local_58 = *(code **)(lVar14 + 0x18);
          FUN_1400021e4(&local_58,&local_68);
          puVar18 = local_68;
          if (local_60 == 0) {
            puVar18 = &DAT_149dfb77a;
          }
          FUN_140056680(&local_58,puVar18);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      if (DAT_14c951858 == 0) {
        local_b8 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_148 = &LAB_1468c5283;
        local_150 = FUN_142809da0;
        local_158 = L"Engine";
        local_160 = 0x400000000;
        local_168 = 0x10000000;
        puStack_170 = (undefined2 *)CONCAT44(puStack_170._4_4_,8);
        local_178 = (undefined2 *)CONCAT44(local_178._4_4_,0x50);
        local_140 = &local_b8;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      goto LAB_1435ad0ab;
    }
    if ((*(longlong **)(param_1[0x62] + 0x148) == (longlong *)0x0) ||
       (cVar8 = (**(code **)(**(longlong **)(param_1[0x62] + 0x148) + 0x3c0))(), iVar11 = local_ec,
       cVar8 != '\0')) goto LAB_1435ad0ab;
    plVar6 = (longlong *)param_1[0x62];
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      lVar14 = *(longlong *)param_2;
      plVar17 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar6[8];
      }
      iVar9 = *(int *)((longlong)plVar17 +
                      (ulonglong)
                      ((int)plVar6[9] - 1U & (int)lVar14 + (int)((ulonglong)lVar14 >> 0x20) * 0x17)
                      * 4);
      if (iVar9 != -1) {
        do {
          lVar15 = *plVar6 + (longlong)iVar9 * 0x40;
          if (*(longlong *)(*plVar6 + (longlong)iVar9 * 0x40) == lVar14) {
            local_f8 = (undefined8 *)(lVar15 + 8);
            if (local_f8 != (undefined8 *)0x0 && lVar15 != 0) {
              local_b8 = (code *)0x0;
              iStack_b0 = 0;
              uStack_ac = 0;
              lVar14 = lVar15 + 0x18;
              FUN_1400021e4(lVar14,&local_58);
              if ((int)uStack_50 != (int)uStack_e0) {
                bVar25 = (int)uStack_e0 + (int)uStack_50 == 1;
                goto LAB_1435ad254;
              }
              bVar25 = true;
              if ((int)uStack_50 < 2) goto LAB_1435ad254;
              lVar21 = 0;
              goto LAB_1435ad1fc;
            }
            break;
          }
          iVar9 = *(int *)(lVar15 + 0x38);
        } while (iVar9 != -1);
      }
    }
    bVar20 = local_b9 & 2;
    local_98 = 0;
    local_b8 = (code *)0x0;
    iStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    local_90 = 0x10;
    pcVar19 = local_e8;
    if ((int)uStack_e0 == 0) {
      pcVar19 = (code *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_a8,pcVar19,1);
    iStack_b0 = (int)local_d0;
    uStack_ac = (undefined4)((ulonglong)local_d0 >> 0x20);
    uStack_a4 = CONCAT44(iVar11,(undefined4)uStack_a4);
    local_90 = bVar20 | bVar20 >> 1 | 0x10;
    FUN_140a8234a(plVar6,param_2);
    goto LAB_1435ad163;
  }
LAB_1435ad0a4:
  *param_4 = 0;
  goto LAB_1435ad0ab;
LAB_1435ad1fc:
  uVar3 = *(ushort *)(local_58 + lVar21);
  uVar10 = (uint)uVar3;
  uVar4 = *(ushort *)(local_e8 + lVar21);
  uVar24 = (uint)uVar4;
  if (uVar3 != uVar4) {
    if ((uVar4 | uVar3) < 0x80) {
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
      uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1435ad210;
    }
    iVar11 = uVar10 - uVar24;
    goto LAB_1435ad24e;
  }
  if (uVar3 == 0) goto LAB_1435ad24c;
LAB_1435ad210:
  lVar21 = lVar21 + 2;
  goto LAB_1435ad1fc;
LAB_1435ad24c:
  iVar11 = 0;
LAB_1435ad24e:
  bVar25 = iVar11 == 0;
LAB_1435ad254:
  local_118 = lVar14;
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_119 = bVar25;
  if (bVar25 == false) {
    FUN_140002266(&local_68,L"%llu",*(undefined8 *)param_2);
    puVar18 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar18 = local_68;
    }
    FUN_1400021e4(local_118,&local_78);
    puVar23 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar23 = local_78;
    }
    pcVar19 = (code *)&DAT_149dfb77a;
    if ((int)uStack_e0 != 0) {
      pcVar19 = local_e8;
    }
    local_178 = puVar18;
    FUN_140002266(&local_58,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s",pcVar19,puVar23);
    uVar16 = uStack_50;
    local_108 = local_58;
    local_b8 = local_58;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    iStack_b0 = (int)uVar16;
    uStack_ac = (undefined4)(uVar16 >> 0x20);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_108 = (code *)0x0;
  }
  local_118 = *(longlong *)(lVar15 + 0x10);
  local_100 = local_d0;
  if (local_118 != local_d0) {
    FUN_140002266(&local_68,L"%llu",*(undefined8 *)param_2);
    local_110 = &DAT_149dfb77a;
    if (local_60 != 0) {
      local_110 = local_68;
    }
    FUN_140002266(&local_78,L"%llu",*(undefined8 *)(lVar15 + 0x10));
    puVar18 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar18 = local_78;
    }
    FUN_140002266(&local_88,L"%llu",local_d0);
    puVar23 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar23 = local_88;
    }
    pcVar19 = (code *)&DAT_149dfb77a;
    if ((int)uStack_e0 != 0) {
      pcVar19 = local_e8;
    }
    puStack_170 = local_110;
    local_178 = puVar18;
    FUN_140002266(&local_58,L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s",
                  pcVar19,puVar23);
    if (local_108 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = local_58;
    iStack_b0 = (int)uStack_50;
    uStack_ac = (undefined4)(uStack_50 >> 0x20);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar7 = local_f8;
  bVar20 = local_119;
  cVar8 = FUN_14493c216(local_f8,0);
  if (cVar8 == '\0') {
    if ((int)plVar6[0xb] != *(int *)((longlong)plVar6 + 0x84)) {
      puVar18 = (undefined2 *)*puVar7;
      plVar17 = plVar6 + 0x11;
      if ((longlong *)plVar6[0x12] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar6[0x12];
      }
      iVar11 = *(int *)((longlong)plVar17 +
                       (ulonglong)
                       ((int)plVar6[0x13] - 1U &
                       ((uint)((ulonglong)puVar18 >> 0x20) ^ (uint)puVar18)) * 4);
      if (iVar11 != -1) {
        lVar14 = plVar6[10];
        do {
          lVar15 = (longlong)iVar11;
          local_58 = *(code **)(lVar14 + lVar15 * 0x18);
          local_68 = puVar18;
          cVar8 = FUN_14472ecf8(&local_58,&local_68);
          lVar14 = plVar6[10];
          if (cVar8 != '\0') {
            lVar14 = lVar14 + lVar15 * 0x18;
            if (lVar14 != 0) {
              lVar14 = *(longlong *)(lVar14 + 8);
              goto LAB_1435ad578;
            }
            break;
          }
          iVar11 = *(int *)(lVar14 + (lVar15 * 3 + 2) * 8);
        } while (iVar11 != -1);
      }
    }
    lVar14 = 0;
LAB_1435ad578:
    bVar20 = local_119;
    if (lVar14 == *(longlong *)param_2) goto LAB_1435ad586;
    FUN_140002266(&local_68,L"%llu",lVar14);
    puVar18 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar18 = local_68;
    }
    FUN_140002266(&local_78,L"%llu",*(undefined8 *)param_2);
    puVar23 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar23 = local_78;
    }
    pcVar19 = (code *)&DAT_149dfb77a;
    if ((int)uStack_e0 != 0) {
      pcVar19 = local_e8;
    }
    local_178 = puVar18;
    FUN_140002266(&local_58,L"Netguid mismatch. Path: %s, NetGUID: %s, Expected: %s",pcVar19,puVar23
                 );
    if (local_b8 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = local_58;
    iStack_b0 = (int)uStack_50;
    uStack_ac = (undefined4)(uStack_50 >> 0x20);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
LAB_1435ad79d:
    FUN_147be749e(plVar6[0x29],9,&local_b8);
  }
  else {
LAB_1435ad586:
    if ((bVar20 & local_118 == local_100) == 0) goto LAB_1435ad79d;
  }
  if (local_b8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1435ad163:
  lVar14 = FUN_140634914(param_1[0x62],param_2,*(undefined1 *)(param_1[0x62] + 0x152));
  *param_4 = lVar14;
  if (lVar14 == 0) {
    FUN_140ebde88(param_1[0x62],param_2);
  }
LAB_1435ad0ab:
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1435aca4f:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1435ad912 FUN_1435ad912 body=247 status=ok
// SIG undefined FUN_1435ad912(void)

undefined8
FUN_1435ad912(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_4;
  (**(code **)(*param_2 + 400))(param_2,&local_40);
  if (local_40 != 1 && (local_40 & 1) != 0) {
    cVar1 = FUN_140574ad2(param_1);
    if (cVar1 == '\0') {
      local_50 = (void *)0x0;
      local_48 = (int)param_5[1];
      lVar2 = (longlong)local_48;
      _Src = (void *)*param_5;
      if (lVar2 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar2 * 2);
      }
      local_58 = param_3;
      FUN_1435ac05a(param_1,local_40,0,&local_50);
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ada0a FUN_1435ada0a body=6204 status=ok
// SIG undefined FUN_1435ada0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1435ada0a(longlong *param_1,longlong *param_2,longlong param_3,double *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  code **ppcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined7 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  byte bVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  double dVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_318 [32];
  ulonglong *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  double **local_2c0;
  code *local_2b8;
  code *local_2b0;
  double *local_2a8;
  double dStack_2a0;
  double local_298;
  code **local_288;
  double dStack_280;
  undefined1 local_278 [16];
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
  undefined8 local_218;
  byte local_204;
  char local_203;
  bool local_202;
  byte local_201;
  ulonglong local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double *local_1d8;
  double dStack_1d0;
  double local_1c8;
  double *local_1b8;
  double dStack_1b0;
  double local_1a8;
  double *local_198;
  double dStack_190;
  double local_188;
  longlong local_178;
  double local_170;
  double local_168;
  ulonglong local_160;
  double *local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined1 local_127;
  byte local_126;
  undefined1 local_125;
  undefined4 local_124;
  double local_118;
  double dStack_110;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    bVar20 = 0;
  }
  else {
    bVar20 = *(byte *)(param_2 + 0x1d) >> 1 & 1;
    (**(code **)(*param_1 + 0x308))(param_1);
  }
  local_160 = 0;
  local_168 = *param_4;
  if (DAT_14cac9ca8 == 0) {
    local_2c0 = &local_158;
    local_158 = (double *)FUN_141030f22;
    local_2b0 = FUN_14081d0ea;
    local_2b8 = FUN_14081d0ea;
    local_2c8 = &LAB_1478c0a72;
    local_2d0 = (code *)&LAB_1417b2375;
    local_2d8 = L"Engine";
    local_2e0 = 0x1000000000;
    local_2e8 = 0x10000004;
    local_2f0 = 8;
    local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  local_2f8 = &local_160;
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,DAT_14cac9ca8,&local_168);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    if ((DAT_14c761628 == 0) && (local_160 != 0 && param_1[0x62] != 0)) {
      FUN_140325a06(param_1[0x62] + 0xa8,&local_158,&local_160,0);
    }
    dVar24 = local_168;
    *(ulonglong *)(param_3 + 0x70) = local_160;
    if (local_168 == 0.0) {
LAB_1435adb91:
      dVar24 = 0.0;
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_2c0 = &local_158;
        local_158 = (double *)FUN_141030f22;
        local_2b0 = FUN_14081d0ea;
        local_2b8 = FUN_14081d0ea;
        local_2c8 = &LAB_1478c0a72;
        local_2d0 = (code *)&LAB_1417b2375;
        local_2d8 = L"Engine";
        local_2e0 = 0x1000000000;
        local_2e8 = 0x10000004;
        local_2f0 = 8;
        local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(*(longlong *)((longlong)dVar24 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38))
         || (*(longlong *)
              (*(longlong *)(*(longlong *)((longlong)dVar24 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
      goto LAB_1435adb91;
    }
    *param_4 = dVar24;
    cVar9 = (**(code **)(*param_2 + 0x38))(param_2);
    if ((cVar9 == '\0') || ((local_160 & 1) != 0 || local_160 == 0)) {
      if ((DAT_14c761628 != 0) && (local_160 != 0 && param_1[0x62] != 0)) {
        FUN_140325a06(param_1[0x62] + 0xa8,&local_158,&local_160,0);
      }
      if ((local_160 & 1) == 0 && local_160 != 0) {
        local_170 = 0.0;
        local_178 = 0;
        local_188 = DAT_14c8464f0;
        local_198 = (double *)DAT_14c8464e0;
        dStack_190 = DAT_14c8464e8;
        local_1a8 = DAT_14c846520;
        local_1b8 = (double *)DAT_14c846510;
        dStack_1b0 = DAT_14c846518;
        local_1c8 = DAT_14c8464f0;
        local_1d8 = (double *)DAT_14c8464e0;
        dStack_1d0 = DAT_14c8464e8;
        local_1e8 = DAT_14c846508;
        local_1f8 = DAT_14c8464f8;
        dStack_1f0 = DAT_14c846500;
        if ((*(byte *)(param_2 + 5) & 4) != 0) {
          iVar10 = *(int *)((longlong)*param_4 + 0x1ec);
          if (((((iVar10 != 0) && (uVar13 = *(uint *)((longlong)*param_4 + 0x1e8), -1 < (int)uVar13)
                ) && ((int)uVar13 < DAT_14c9647dc)) &&
              ((plVar17 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
               plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar10)))) &&
             (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (lVar23 = *plVar17, lVar23 != 0)))) {
            lVar11 = FUN_140e1d66a();
            if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
              local_170 = (double)FUN_1479da206(lVar23);
            }
          }
          dVar24 = *param_4;
          if (local_170 == 0.0) {
            local_170 = (double)FUN_144938c96(dVar24);
            dVar24 = *param_4;
          }
          if (DAT_14c76162c != 0) {
            if (DAT_14cae8b20 == 0) {
              local_2c0 = &local_158;
              local_158 = (double *)&LAB_14355090c;
              local_2b0 = FUN_14081d0ea;
              local_2b8 = FUN_14081d0ea;
              local_2c8 = &LAB_147b8e16d;
              local_2d0 = (code *)&LAB_140810a38;
              local_2d8 = L"Engine";
              local_2e0 = 0x800000000;
              local_2e8 = 0x10000000;
              local_2f0 = 8;
              local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x3f0);
              FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
            }
            lVar23 = DAT_14cae8b20;
            if (DAT_14c951858 == 0) {
              local_2c0 = &local_158;
              local_158 = (double *)FUN_1449e2820;
              local_2b0 = FUN_14081d0ea;
              local_2b8 = FUN_14081d0ea;
              local_2c8 = &LAB_1468c5283;
              local_2d0 = FUN_142809da0;
              local_2d8 = L"Engine";
              local_2e0 = 0x400000000;
              local_2e8 = 0x10000000;
              local_2f0 = 8;
              local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x50);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar11 = *(longlong *)((longlong)dVar24 + 0x20);
            if (lVar11 == 0) {
              local_178 = 0;
            }
            else {
              iVar10 = *(int *)(lVar23 + 0x38);
              do {
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar10) ||
                   (local_178 = lVar11,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
                   lVar23 + 0x30)) {
                  local_178 = 0;
                }
              } while ((local_178 == 0) && (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 != 0));
            }
            dVar24 = *param_4;
          }
          lVar23 = *(longlong *)((longlong)dVar24 + 0x1c8);
          if (lVar23 != 0) {
            local_288 = *(code ***)(lVar23 + 0x260);
            dStack_280 = *(double *)(lVar23 + 0x268);
            local_278._0_8_ = *(undefined8 *)(lVar23 + 0x270);
            FUN_140202030(&local_158,&local_288,dVar24);
            local_188 = local_148;
            local_198 = local_158;
            dStack_190 = dStack_150;
            plVar17 = (longlong *)*param_4;
            lVar11 = plVar17[0x39];
            if (lVar11 == 0) {
              local_1e8 = DAT_14c846508;
              local_1f8 = DAT_14c8464f8;
              dStack_1f0 = DAT_14c846500;
LAB_1435adf55:
              local_1a8 = 1.0;
              local_1b8 = (double *)0x3ff0000000000000;
              dStack_1b0 = 1.0;
            }
            else {
              ppcVar6 = *(code ***)(lVar11 + 0x240);
              dVar24 = *(double *)(lVar11 + 0x248);
              dVar5 = *(double *)(lVar11 + 0x250);
              dVar40 = *(double *)(lVar11 + 600);
              pdVar12 = *(double **)(lVar11 + 0x228);
              dVar41 = local_148;
              local_158 = (double *)ppcVar6;
              dStack_150 = dVar24;
              local_148 = dVar5;
              dStack_140 = dVar40;
              if (pdVar12 == (double *)0x0) {
                plVar17 = (longlong *)&DAT_00000040;
                pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
                dVar41 = DAT_14c8463d8;
                *pdVar12 = DAT_14c8463d0;
                pdVar12[1] = dVar41;
                dVar41 = DAT_14c8463e8;
                pdVar12[2] = DAT_14c8463e0;
                pdVar12[3] = dVar41;
                dVar41 = DAT_14c846500;
                pdVar12[4] = DAT_14c8464f8;
                pdVar12[5] = dVar41;
                dVar41 = DAT_14c846508;
                pdVar12[6] = DAT_14c846508;
                *(double **)(lVar11 + 0x228) = pdVar12;
              }
              auVar28._8_4_ = (int)-(ulonglong)(dVar24 != pdVar12[1]);
              auVar28._0_8_ = -(ulonglong)((double)ppcVar6 != *pdVar12);
              auVar28._12_4_ = (int)(-(ulonglong)(dVar24 != pdVar12[1]) >> 0x20);
              iVar10 = movmskpd(SUB84(dVar41,0),auVar28);
              auVar35._8_4_ = (int)-(ulonglong)(dVar40 != pdVar12[3]);
              auVar35._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
              auVar35._12_4_ = (int)(-(ulonglong)(dVar40 != pdVar12[3]) >> 0x20);
              uVar13 = movmskpd((int)plVar17,auVar35);
              if ((uVar13 & 0x3fffffff) != 0 || iVar10 != 0) {
                pdVar12[2] = local_148;
                pdVar12[3] = dStack_140;
                *pdVar12 = (double)local_158;
                pdVar12[1] = dStack_150;
                FUN_1448052ee(&local_158,&local_288);
                pdVar12[6] = (double)local_278._0_8_;
                pdVar12[4] = (double)local_288;
                pdVar12[5] = dStack_280;
              }
              plVar17 = (longlong *)*param_4;
              lVar11 = plVar17[0x39];
              local_1e8 = pdVar12[6];
              local_1f8 = pdVar12[4];
              dStack_1f0 = pdVar12[5];
              if (lVar11 == 0) goto LAB_1435adf55;
              local_1b8 = *(double **)(lVar11 + 0x280);
              dStack_1b0 = *(double *)(lVar11 + 0x288);
              local_1a8 = *(double *)(lVar11 + 0x290);
            }
            plVar18 = *(longlong **)(lVar23 + 0x120);
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x4a8))(plVar18,&local_158,*(undefined8 *)(lVar23 + 0x128),0);
              local_1a8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)local_108)) &
                                  (ulonglong)(1.0 / (double)local_108)) * local_1a8;
              dStack_1b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_110)) &
                                   (ulonglong)(1.0 / dStack_110)) * dStack_1b0;
              local_1b8 = (double *)
                          ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118)) &
                                   (ulonglong)(1.0 / local_118)) * (double)local_1b8);
              plVar17 = (longlong *)*param_4;
            }
            (**(code **)(*plVar17 + 0x328))(plVar17,&local_1d8);
          }
        }
        local_200 = 0;
        if (DAT_14c927740 == 0) {
          local_2c0 = &local_158;
          local_158 = (double *)FUN_1449e2820;
          local_2b0 = FUN_14081d0ea;
          local_2b8 = FUN_14081d0ea;
          local_2c8 = &LAB_146856450;
          local_2d0 = FUN_1427b121c;
          local_2d8 = L"Engine";
          local_2e0 = 0;
          local_2e8 = 0x10000021;
          local_2f0 = 8;
          local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_2f8 = &local_200;
        plVar17 = param_1;
        plVar18 = param_2;
        (**(code **)(*param_1 + 0x2a8))(param_1,param_2,DAT_14c927740,&local_170);
        if ((*(byte *)(param_2 + 5) & 4) == 0) {
          lVar23 = param_1[0x26];
          iVar10 = (int)plVar18;
          if (lVar23 != 0) {
            plVar17 = (longlong *)(ulonglong)DAT_14c8733f8;
            if (DAT_14c873400 == -0x662bf3f &&
                ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
              plVar17 = *(longlong **)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              pwVar19 = ThreadLocalStoragePointer;
              if ((int)plVar17[0x22] < DAT_14c87e490) {
                plVar17 = (longlong *)&DAT_14c87e490;
                FUN_144b3d300();
                if (DAT_14c87e490 == -1) {
                  pwVar19 = L"Unused custom version";
                  FUN_1446f470e(&local_158,L"Unused custom version",1);
                  _DAT_14c87e468 = 0;
                  uRam000000014c87e470 = 0xf99d40c100000000;
                  _DAT_14c87e478 = 0x100000000;
                  _DAT_14c87e480 = 0;
                  DAT_14c87e488 = (code **)local_158;
                  plVar17 = (longlong *)&DAT_14c87e490;
                  _Init_thread_footer();
                }
              }
              iVar10 = (int)pwVar19;
              piVar22 = (int *)&DAT_14c87e468;
LAB_1435ae12c:
              if (4 < (uint)piVar22[4]) goto LAB_1435ae133;
            }
            else {
              iVar10 = DAT_14c8733fc;
              if ((longlong)*(int *)(lVar23 + 0x1440) != 0) {
                piVar22 = *(int **)(lVar23 + 0x1438);
                lVar23 = (longlong)*(int *)(lVar23 + 0x1440) * 0x28;
                do {
                  if ((((*piVar22 == DAT_14c8733f4) && (piVar22[1] == DAT_14c8733f8)) &&
                      (piVar22[2] == DAT_14c8733fc)) && (piVar22[3] == DAT_14c873400)) {
                    if (piVar22 != (int *)0x0) goto LAB_1435ae12c;
                    break;
                  }
                  piVar22 = piVar22 + 10;
                  lVar23 = lVar23 + -0x28;
                } while (lVar23 != 0);
              }
            }
          }
        }
        else {
LAB_1435ae133:
          if (DAT_14cae8b20 == 0) {
            local_2c0 = &local_158;
            local_158 = (double *)&LAB_14355090c;
            local_2b0 = FUN_14081d0ea;
            local_2b8 = FUN_14081d0ea;
            local_2c8 = &LAB_147b8e16d;
            local_2d0 = (code *)&LAB_140810a38;
            local_2d8 = L"Engine";
            local_2e0 = 0x800000000;
            local_2e8 = 0x10000000;
            local_2f0 = 8;
            local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x3f0);
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          local_2f8 = (ulonglong *)0x0;
          plVar17 = param_1;
          plVar18 = param_2;
          (**(code **)(*param_1 + 0x2a8))(param_1,param_2,DAT_14cae8b20,&local_178);
          iVar10 = (int)plVar18;
        }
        local_201 = 0;
        local_202 = false;
        local_203 = '\0';
        local_204 = 0;
        if ((*(byte *)(param_2 + 5) & 4) != 0) {
          if ((DAT_14c761648 & 1) == 0) {
            dVar24 = 9.999999747378752e-05;
          }
          else {
            dVar24 = 0.009999999776482582;
          }
          if ((dVar24 < ABS((double)local_198 - (double)DAT_14c8464e0)) ||
             (dVar24 < ABS(dStack_190 - DAT_14c8464e8))) {
            bVar25 = false;
            uVar16 = 0;
          }
          else {
            bVar25 = ABS(local_188 - DAT_14c8464f0) <= dVar24;
            uVar16 = (undefined7)((ulonglong)plVar17 >> 8);
          }
          local_201 = bVar25 ^ 1;
          if (DAT_14c761649 == '\0') {
            dVar24 = 9.999999747378752e-05;
          }
          else {
            dVar24 = 0.009999999776482582;
          }
          if ((dVar24 < ABS((double)local_1d8 - (double)DAT_14c8464e0)) ||
             (dVar24 < ABS(dStack_1d0 - DAT_14c8464e8))) {
            bVar25 = false;
            uVar16 = 0;
          }
          else {
            bVar25 = ABS(local_1c8 - DAT_14c8464f0) <= dVar24;
          }
          local_204 = bVar25 ^ 1;
          if (DAT_14caf2c40 == 0) {
            dVar24 = 9.999999747378752e-05;
          }
          else {
            dVar24 = 0.009999999776482582;
          }
          uVar14 = (undefined4)CONCAT71(uVar16,1);
          if ((ABS((double)local_1b8 - (double)DAT_14c846510) <= dVar24) &&
             (ABS(dStack_1b0 - DAT_14c846518) <= dVar24)) {
            uVar14 = (undefined4)CONCAT71(uVar16,dVar24 < ABS(local_1a8 - DAT_14c846520));
          }
          local_203 = (char)uVar14;
          auVar7._8_8_ = dStack_1f0;
          auVar7._0_8_ = local_1f8;
          dVar24 = (double)DAT_1499387d0;
          dVar5 = DAT_1499387d0._8_8_;
          auVar28 = divpd(auVar7,_DAT_1499387d0);
          auVar34._8_8_ = 0;
          auVar34._0_8_ = local_1e8;
          auVar35 = divpd(auVar34,_DAT_1499387d0);
          auVar28 = roundpd(auVar28,auVar28,3);
          auVar35 = roundpd(auVar35,auVar35,3);
          dVar40 = local_1f8 - auVar28._0_8_ * dVar24;
          dVar41 = dStack_1f0 - auVar28._8_8_ * dVar5;
          dVar42 = local_1e8 - auVar35._0_8_ * dVar24;
          dVar43 = 0.0 - auVar35._8_8_ * dVar5;
          auVar39._0_8_ = dVar40 + dVar24;
          auVar39._8_8_ = dVar41 + dVar5;
          auVar37._0_8_ = dVar24 + dVar42;
          auVar37._8_8_ = dVar5 + dVar43;
          auVar29._8_8_ = -(ulonglong)(0.0 <= dVar41);
          auVar29._0_8_ = -(ulonglong)(0.0 <= dVar40);
          auVar1._8_8_ = dVar41;
          auVar1._0_8_ = dVar40;
          auVar35 = blendvpd(auVar39,auVar1,auVar29);
          auVar30._8_8_ = -(ulonglong)(0.0 <= dVar43);
          auVar30._0_8_ = -(ulonglong)(0.0 <= dVar42);
          auVar3._8_8_ = dVar43;
          auVar3._0_8_ = dVar42;
          auVar28 = blendvpd(auVar37,auVar3,auVar30);
          auVar31._8_8_ = -(ulonglong)(180.0 < auVar35._8_8_);
          auVar31._0_8_ = -(ulonglong)(180.0 < auVar35._0_8_);
          auVar4._8_8_ = auVar35._8_8_ + -360.0;
          auVar4._0_8_ = auVar35._0_8_ + -360.0;
          auVar35 = blendvpd(auVar35,auVar4,auVar31);
          auVar32._8_8_ = -(ulonglong)(180.0 < auVar28._8_8_);
          auVar32._0_8_ = -(ulonglong)(180.0 < auVar28._0_8_);
          auVar2._8_8_ = auVar28._8_8_ + -360.0;
          auVar2._0_8_ = auVar28._0_8_ + -360.0;
          auVar28 = blendvpd(auVar28,auVar2,auVar32);
          auVar36._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar35._8_8_));
          auVar36._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar35._0_8_));
          iVar15 = movmskpd(uVar14,auVar36);
          auVar33._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar28._8_8_));
          auVar33._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar28._0_8_));
          uVar13 = movmskpd(iVar10,auVar33);
          local_202 = (uVar13 & 0x3fffffff) != 0 || iVar15 != 0;
        }
        local_288._0_1_ = DAT_14c761648;
        (**(code **)(*param_2 + 0x178))(param_2,&local_201,1);
        if (local_201 == 1) {
          if (((*(byte *)(param_2 + 5) & 1) == 0) ||
             (uVar13 = (**(code **)(*param_2 + 0x48))(param_2), 0xc < uVar13)) {
            (**(code **)(*param_2 + 0x178))(param_2,&local_288,1);
            if (((byte)local_288 & 1) == 0) {
              FUN_14480c34d(param_2,&local_198);
              goto LAB_1435ae4e5;
            }
          }
          else {
            local_288._0_1_ = 1;
          }
          local_148 = local_188;
          local_158 = local_198;
          dStack_150 = dStack_190;
          FUN_1401fde76(&local_158,param_2);
          local_198 = local_158;
          dStack_190 = dStack_150;
          local_188 = local_148;
        }
        else {
          local_188 = DAT_14c8464f0;
          local_198 = (double *)DAT_14c8464e0;
          dStack_190 = DAT_14c8464e8;
        }
LAB_1435ae4e5:
        (**(code **)(*param_2 + 0x178))(param_2,&local_202,1);
        if (local_202 == true) {
          if (DAT_14c76164a == '\x01') {
            FUN_14032b138(&local_1f8,param_2);
          }
          else {
            FUN_1401fb57a(param_2,&local_1f8);
          }
        }
        else {
          local_1e8 = DAT_14c846508;
          local_1f8 = DAT_14c8464f8;
          dStack_1f0 = DAT_14c846500;
        }
        local_288._0_1_ = DAT_14caf2c40;
        (**(code **)(*param_2 + 0x178))(param_2,&local_203,1);
        if (local_203 == '\x01') {
          if (((*(byte *)(param_2 + 5) & 1) == 0) ||
             (uVar13 = (**(code **)(*param_2 + 0x48))(param_2), 0xc < uVar13)) {
            (**(code **)(*param_2 + 0x178))(param_2,&local_288,1);
            if (((byte)local_288 & 1) == 0) {
              FUN_14480c34d(param_2,&local_1b8);
              goto LAB_1435ae63f;
            }
          }
          else {
            local_288._0_1_ = 1;
          }
          local_148 = local_1a8;
          local_158 = local_1b8;
          dStack_150 = dStack_1b0;
          FUN_1401fde76(&local_158,param_2);
          local_1b8 = local_158;
          dStack_1b0 = dStack_150;
          local_1a8 = local_148;
        }
        else {
          local_1a8 = DAT_14c846520;
          local_1b8 = (double *)DAT_14c846510;
          dStack_1b0 = DAT_14c846518;
        }
LAB_1435ae63f:
        local_288 = (code **)CONCAT71(local_288._1_7_,DAT_14c761649);
        (**(code **)(*param_2 + 0x178))(param_2,&local_204,1);
        if (local_204 == 1) {
          if (((*(byte *)(param_2 + 5) & 1) == 0) ||
             (uVar13 = (**(code **)(*param_2 + 0x48))(param_2), 0xc < uVar13)) {
            (**(code **)(*param_2 + 0x178))(param_2,&local_288,1);
            if (((ulonglong)local_288 & 1) == 0) {
              FUN_14480c34d(param_2,&local_1d8);
              goto LAB_1435ae729;
            }
          }
          else {
            local_288 = (code **)CONCAT71(local_288._1_7_,1);
          }
          local_148 = local_1c8;
          local_158 = local_1d8;
          dStack_150 = dStack_1d0;
          FUN_1401fde76(&local_158,param_2);
          local_1d8 = local_158;
          dStack_1d0 = dStack_150;
          local_1c8 = local_148;
        }
        else {
          local_1c8 = DAT_14c8464f0;
          local_1d8 = (double *)DAT_14c8464e0;
          dStack_1d0 = DAT_14c8464e8;
        }
LAB_1435ae729:
        lVar23 = local_178;
        if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_1435ae733;
        bVar25 = false;
        if ((*param_4 == 0.0) && (local_170 != 0.0)) {
          if (local_178 == 0) {
LAB_1435ae821:
            lVar23 = 0;
          }
          else {
            if (DAT_14cae8b20 == 0) {
              local_2c0 = &local_158;
              local_158 = (double *)&LAB_14355090c;
              local_2b0 = FUN_14081d0ea;
              local_2b8 = FUN_14081d0ea;
              local_2c8 = &LAB_147b8e16d;
              local_2d0 = (code *)&LAB_140810a38;
              local_2d8 = L"Engine";
              local_2e0 = 0x800000000;
              local_2e8 = 0x10000000;
              local_2f0 = 8;
              local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x3f0);
              FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
            }
            if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cae8b20 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) != DAT_14cae8b20 + 0x30))
            goto LAB_1435ae821;
            if (*(longlong *)(lVar23 + 0xc0) == 0) goto LAB_1435ae733;
          }
          dVar24 = local_170;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0.0;
          dStack_140 = 0.0;
          local_158 = (double *)0x0;
          dStack_150 = 0.0;
          local_127 = 1;
          local_125 = 0;
          local_124 = 8;
          local_118 = 0.0;
          local_108 = (longlong *)0x0;
          if (local_170 == 0.0) {
LAB_1435ae8b5:
            dVar24 = 0.0;
          }
          else {
            if (DAT_14cac9ca8 == 0) {
              local_2c0 = (double **)&local_288;
              local_288 = (code **)FUN_141030f22;
              local_2b0 = FUN_14081d0ea;
              local_2b8 = FUN_14081d0ea;
              local_2c8 = &LAB_1478c0a72;
              local_2d0 = (code *)&LAB_1417b2375;
              local_2d8 = L"Engine";
              local_2e0 = 0x1000000000;
              local_2e8 = 0x10000004;
              local_2f0 = 8;
              local_2f8 = (ulonglong *)CONCAT44(local_2f8._4_4_,0x390);
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(*(longlong *)((longlong)dVar24 + 0x10) + 0x38) <
                 *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)dVar24 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
            goto LAB_1435ae8b5;
          }
          local_128 = 1;
          local_126 = local_126 & 0xe0 | 3;
          lVar11 = *(longlong *)(*(longlong *)(param_1[0x26] + 0x58) + 0x1a8);
          dStack_150 = dVar24;
          local_138 = lVar23;
          FUN_1434e162a(&local_228,&local_198,lVar11 + 0x710);
          auVar8._8_8_ = dStack_1f0;
          auVar8._0_8_ = local_1f8;
          auVar28 = divpd(auVar8,_DAT_1499387d0);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = local_1e8;
          auVar35 = divpd(auVar38,_DAT_1499387d0);
          auVar28 = roundpd(auVar28,auVar28,3);
          auVar35 = roundpd(auVar35,auVar35,3);
          dVar40 = (local_1f8 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar41 = (dStack_1f0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar24 = (local_1e8 - auVar35._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar5 = (0.0 - auVar35._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar42 = sin(dVar40);
          dVar43 = sin(dVar41);
          dVar26 = sin(dVar24);
          sin(dVar5);
          dVar40 = cos(dVar40);
          dVar41 = cos(dVar41);
          dVar27 = cos(dVar24);
          cos(dVar5);
          dVar24 = dVar43 * dVar42 * dVar26 + dVar41 * dVar40 * dVar27;
          local_288 = (code **)(dVar42 * dVar43 * dVar27 - dVar40 * dVar41 * dVar26);
          dStack_280 = -(dVar42 * dVar41 * dVar27) - dVar40 * dVar43 * dVar26;
          local_278._8_4_ = SUB84(dVar24,0);
          local_278._0_8_ = -(dVar41 * dVar42 * dVar26) + dVar43 * dVar40 * dVar27;
          local_278._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          local_268 = local_228;
          uStack_260 = uStack_220;
          local_258 = local_218;
          uStack_250 = 0;
          local_248 = 0x3ff0000000000000;
          uStack_240 = 0x3ff0000000000000;
          local_238 = 0x3ff0000000000000;
          uStack_230 = 0;
          plVar17 = (longlong *)
                    FUN_1410371ba(lVar11,*(undefined8 *)((longlong)local_170 + 0x10),&local_288,
                                  &local_158);
          *param_4 = (double)plVar17;
          bVar25 = plVar17 != (longlong *)0x0;
          if (bVar25) {
            if (local_204 == 1) {
              (**(code **)(*plVar17 + 0x438))(plVar17,&local_1d8);
              plVar17 = (longlong *)*param_4;
            }
            if (local_203 == '\x01') {
              local_298 = local_1a8;
              local_2a8 = local_1b8;
              dStack_2a0 = dStack_1b0;
              FUN_140aff5e4(plVar17);
              plVar17 = (longlong *)*param_4;
            }
            FUN_1435af248(param_1[0x62],&local_160,plVar17);
          }
          if (local_118 != 0.0) {
            plVar17 = local_108;
            if (local_108 == (longlong *)0x0) {
              plVar17 = local_f8;
            }
            (**(code **)(*plVar17 + 0x10))();
          }
        }
      }
      else {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          bVar25 = false;
          if ((*param_4 != 0.0) || (DAT_14c761628 == 0)) goto LAB_1435ae735;
          if (param_1[0x62] != 0) {
            FUN_140326250(param_1[0x62] + 0xa8,&local_160);
          }
        }
LAB_1435ae733:
        bVar25 = false;
      }
LAB_1435ae735:
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        if ((DAT_14caf2c98 == '\x01') && (lVar23 = param_1[0x80], (longlong)(int)lVar23 != 0)) {
          dVar24 = *param_4;
          lVar11 = param_1[0x7f];
          lVar21 = 0;
          do {
            local_1b8 = *(double **)(lVar11 + lVar21);
            local_138 = (**(code **)(*param_1 + 800))(param_1,&local_1b8,0);
            dStack_140 = 0.0;
            local_158 = (double *)CONCAT44(local_158._4_4_,2);
            if (param_1[0x26] == 0) {
              dStack_150 = 0.0;
            }
            else {
              dStack_150 = *(double *)(param_1[0x26] + 0x58);
            }
            local_148 = dVar24;
            FUN_147bf2ce2(&local_158);
            local_198 = local_1b8;
            local_288 = (code **)&local_198;
            FUN_147bee14a(param_1[0x62] + 0x2b0,&local_288);
            lVar21 = lVar21 + 8;
          } while ((longlong)(int)lVar23 * 8 != lVar21);
        }
        (**(code **)(*param_1 + 0x308))(param_1);
      }
      goto LAB_1435ae754;
    }
    if (bVar20 == 0) {
      FUN_14572541c(param_2);
    }
  }
  bVar25 = false;
LAB_1435ae754:
  if ((local_d0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar25;
}



// FUNCTION 1435af248 FUN_1435af248 body=1001 status=ok
// SIG undefined FUN_1435af248(void)

void FUN_1435af248(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  ulonglong local_80 [3];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar9 = *param_2;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar5 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x40) == lVar9) {
          if ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0 && lVar3 != 0) {
            FUN_141021032(param_1 + 10,*(undefined8 *)(lVar3 + 8));
            FUN_140ec6b16(param_1,param_2);
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if (param_3 == 0) {
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    uVar4 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar8 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar8 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar7;
      }
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar6 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x12];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_1[0x13] - 1U & (uVar8 ^ (uint)uVar4)) * 4);
    if (iVar5 != -1) {
      plVar6 = param_1 + 10;
      lVar9 = *plVar6;
      do {
        lVar3 = (longlong)iVar5;
        local_80[0] = *(ulonglong *)(lVar9 + lVar3 * 0x18);
        local_50 = uVar4 | (ulonglong)uVar8 << 0x20;
        cVar1 = FUN_14472ecf8(local_80,&local_50);
        lVar9 = *plVar6;
        if (cVar1 != '\0') {
          lVar9 = lVar9 + lVar3 * 0x18;
          if (lVar9 != -8 && lVar9 != 0) {
            FUN_140ec6b16(param_1);
            if (param_3 == 0) {
              uVar10 = 0;
              uVar4 = 0;
            }
            else {
              uVar8 = *(uint *)(param_3 + 0xc);
              uVar10 = (ulonglong)uVar8;
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
              if (*(uint *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                uVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar8);
                }
                LOCK();
                uVar7 = *(uint *)(lVar9 + 0x10);
                bVar11 = uVar7 == 0;
                if (bVar11) {
                  *(uint *)(lVar9 + 0x10) = uVar8;
                  uVar7 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  uVar7 = uVar8;
                }
                uVar4 = (ulonglong)uVar7;
              }
            }
            FUN_141021032(plVar6,uVar10 | uVar4 << 0x20);
          }
          break;
        }
        iVar5 = *(int *)(lVar9 + 0x10 + lVar3 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_60 = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_68 = 0;
  local_58 = 0x10;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar4 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar2 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar2 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar2 = uVar7;
      }
      uVar4 = (ulonglong)uVar2;
    }
  }
  local_80[0] = (ulonglong)uVar8 | uVar4 << 0x20;
  FUN_140a8234a(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435af632 FUN_1435af632 body=272 status=ok
// SIG undefined FUN_1435af632(void)

void FUN_1435af632(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *(undefined4 *)(param_1 + 0x308);
  plVar2 = *(longlong **)(param_1 + 0x300);
  lVar4 = plVar2[0x14];
  plVar2[0x14] = 0;
  FUN_1400748c2(plVar2,0);
  puVar3 = (ulonglong *)plVar2[1];
  if (puVar3[1] < *puVar3 + 4) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_24,4);
    }
    else {
      FUN_14572512c(plVar2,&local_24);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  plVar2[0x14] = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x300);
  if (*(int *)(lVar4 + 0x100) != 0) {
    iVar1 = *(int *)(param_1 + 0x2f8);
    *(uint *)(param_1 + 0x2f8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2fc) < iVar1 + 1U) {
      FUN_1401b0d4a((longlong *)(param_1 + 0x2f0),iVar1);
      lVar4 = *(longlong *)(param_1 + 0x300);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar1 * 8) = lVar4;
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435af744 FUN_1435af744 body=364 status=ok
// SIG undefined FUN_1435af744(void)

void FUN_1435af744(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_58 [8];
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar4 = param_2[0x15];
    if ((longlong)uVar4 < param_2[0x14]) {
      bVar2 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar4 >> 3));
      param_2[0x15] = uVar4 + 1;
      if ((bVar2 >> ((uint)uVar4 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
    else {
      FUN_1405d09b8(param_2,1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x310);
  uVar3 = *(undefined1 *)(lVar5 + 0x152);
  *(undefined1 *)(lVar5 + 0x152) = 1;
  local_44 = 0;
  puVar6 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_44,4);
    }
    else {
      FUN_14572512c(param_2,&local_44);
    }
  }
  else {
    local_44 = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (DAT_14c761634 < local_44) {
    FUN_14572541c(param_2);
  }
  else {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (local_44 <= iVar7) break;
      local_50 = 0;
      local_68 = 0;
      FUN_1435ac8f2(param_1,local_58,param_2,&local_50);
    } while ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0);
  }
  *(undefined1 *)(lVar5 + 0x152) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435afe66 FUN_1435afe66 body=1307 status=ok
// SIG undefined FUN_1435afe66(void)

void FUN_1435afe66(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  uint local_78;
  undefined1 local_74 [4];
  longlong *local_70;
  longlong **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    lVar14 = *(longlong *)(param_1 + 0x310);
    if (*(int *)(lVar14 + 0x1c0) != *(int *)(lVar14 + 0x1ec)) {
      FUN_147bf20e6(lVar14 + 0x1b8);
      FUN_147bf222a(lVar14 + 0x1b8);
      lVar14 = *(longlong *)(param_1 + 0x310);
    }
    if (*(int *)(lVar14 + 0x210) != *(int *)(lVar14 + 0x23c)) {
      FUN_146b184c0(lVar14 + 0x208);
      FUN_146b18604(lVar14 + 0x208);
      lVar14 = *(longlong *)(param_1 + 0x310);
    }
    FUN_147bf2342(lVar14 + 600);
    local_78 = 0;
    puVar6 = (ulonglong *)param_2[1];
    puVar12 = (uint *)*puVar6 + 1;
    if ((uint *)puVar6[1] < puVar12) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
      }
      else {
        FUN_14572512c(param_2,&local_78);
      }
    }
    else {
      local_78 = *(uint *)*puVar6;
      *puVar6 = (ulonglong)puVar12;
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      if (DAT_14c76163c < local_78) {
        FUN_14572541c(param_2);
      }
      else if (local_78 != 0) {
        uVar18 = 0;
        do {
          plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14a9fcc40;
          local_88 = plVar7 + 2;
          plVar7[2] = 0;
          plVar7[3] = 0;
          *(undefined4 *)(plVar7 + 4) = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          *(undefined1 *)(plVar7 + 7) = 1;
          local_80 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar7 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar4 = (int *)((longlong)plVar7 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          FUN_1435b0382(param_2,local_88);
          plVar7 = local_80;
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_80 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar4 = (int *)((longlong)plVar7 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            break;
          }
          (**(code **)(*DAT_14cb0d2b0 + 0x480))
                    (DAT_14cb0d2b0,*(undefined8 *)(param_1 + 0x130),local_88,1);
          local_70 = local_88;
          local_68 = (longlong **)(local_88 + 2);
          FUN_147bf14c4(*(longlong *)(param_1 + 0x310) + 0x208,&local_90,&local_70,0);
          local_90 = local_88;
          local_70 = local_88 + 2;
          local_68 = &local_90;
          FUN_147bf1672(*(longlong *)(param_1 + 0x310) + 600,local_74,&local_70,0);
          local_70 = local_88;
          local_68 = &local_88;
          FUN_147bf1b2a(*(longlong *)(param_1 + 0x310) + 0x1b8,&local_90,&local_70,0);
          plVar7 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar4 = (int *)((longlong)plVar7 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < local_78);
      }
    }
  }
  else {
    if (param_3 != '\0') {
      FUN_147be7cf8(param_1 + 0x330,0);
    }
    local_70 = (longlong *)
               CONCAT44(local_70._4_4_,
                        *(int *)(*(longlong *)(param_1 + 0x310) + 0x1c0) -
                        *(int *)(*(longlong *)(param_1 + 0x310) + 0x1ec));
    puVar6 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_70,4);
      }
      else {
        FUN_14572512c(param_2,&local_70);
      }
    }
    else {
      local_70 = (longlong *)CONCAT44(local_70._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar1;
    }
    lVar14 = *(longlong *)(param_1 + 0x310);
    iVar5 = *(int *)(lVar14 + 0x1e0);
    if (iVar5 == 0) {
      uVar19 = 1;
      uVar17 = 0;
      iVar15 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = *(uint **)(lVar14 + 0x1d8);
      if (*(uint **)(lVar14 + 0x1d8) == (uint *)0x0) {
        puVar12 = (uint *)(lVar14 + 0x1c8);
      }
      uVar18 = *puVar12;
      if (uVar18 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        uVar17 = 0;
        uVar19 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar19 = uVar17;
        }
        iVar15 = 0;
        do {
          if (uVar19 == uVar17) goto LAB_1435b005b;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar12[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar17 = 0;
        iVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar8) {
        iVar8 = iVar5;
      }
    }
    if (iVar8 < iVar5) {
      uVar18 = 0xffffffff;
      do {
        FUN_1435b0382(param_2,*(undefined8 *)
                               (*(longlong *)(lVar14 + 0x1b8) + 0x10 + (longlong)iVar8 * 0x28));
        uVar18 = ~(uint)uVar19 & uVar18;
        puVar12 = *(uint **)(lVar14 + 0x1d8);
        if (*(uint **)(lVar14 + 0x1d8) == (uint *)0x0) {
          puVar12 = (uint *)(lVar14 + 0x1c8);
        }
        iVar5 = *(int *)(lVar14 + 0x1e0);
        iVar8 = (int)uVar17;
        lVar16 = (longlong)iVar8;
        uVar9 = puVar12[lVar16] & uVar18;
        if (uVar9 == 0) {
          iVar10 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar10 = iVar5 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar13 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar9 = puVar12[lVar16 + lVar13 + 1];
            if (uVar9 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar11 - lVar16 == lVar13) goto LAB_1435b005b;
          }
          uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
          uVar18 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar5);
    }
  }
LAB_1435b005b:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b0382 FUN_1435b0382 body=189 status=ok
// SIG undefined FUN_1435b0382(void)

longlong * FUN_1435b0382(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14021219d();
  (**(code **)(*param_1 + 0x188))(param_1,param_2 + 0x10);
  local_2c = *(uint *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x188))(param_1);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if (DAT_14c761640 < local_2c) {
      FUN_14572541c(param_1);
      goto LAB_1435b03fb;
    }
    FUN_147be95b2(param_2 + 0x18);
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_147be8590(param_1,*(longlong *)(param_2 + 0x18) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x14;
    } while (lVar2 < *(int *)(param_2 + 0x20));
  }
LAB_1435b03fb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b0440 FUN_1435b0440 body=1285 status=ok
// SIG undefined FUN_1435b0440(void)

void FUN_1435b0440(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_e8 [40];
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  uint local_8c;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  (**(code **)(*param_2 + 0x188))(param_2,&local_68);
  if (DAT_14c76163c < local_68) {
    FUN_14572541c(param_2);
  }
  else if (0 < (int)local_68) {
    iVar13 = 0;
    do {
      local_6c = 0;
      local_70 = 0;
      (**(code **)(*param_2 + 0x188))(param_2,&local_6c);
      (**(code **)(*param_2 + 0x188))(param_2,&local_70);
      local_78 = (undefined8 *)0x0;
      if (local_70 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x310);
        if (*(int *)(lVar7 + 0x260) != *(int *)(lVar7 + 0x28c)) {
          lVar8 = lVar7 + 0x290;
          if (*(longlong *)(lVar7 + 0x298) != 0) {
            lVar8 = *(longlong *)(lVar7 + 0x298);
          }
          uVar10 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x2a0) - 1U & local_6c) * 4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar2 = (uint *)(*(longlong *)(lVar7 + 600) + (longlong)(int)uVar10 * 0x18);
              if (*puVar2 == local_6c) {
                if (puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) {
                  local_78 = *(undefined8 **)(puVar2 + 2);
                  goto LAB_1435b084a;
                }
                break;
              }
              uVar10 = puVar2[4];
            } while (uVar10 != 0xffffffff);
          }
        }
        local_78 = (undefined8 *)0x0;
      }
      else {
        local_88 = (undefined2 *)0x0;
        uStack_80 = 0;
        local_8c = 0;
        FUN_14021219d(param_2,&local_88);
        (**(code **)(*param_2 + 0x188))(param_2,&local_8c);
        local_bc = local_8c;
        local_c0 = DAT_14c761640;
        if (DAT_14c761640 < local_8c) {
          FUN_14572541c(param_2);
        }
        else {
          (**(code **)(*DAT_14cb0d2b0 + 0x480))
                    (DAT_14cb0d2b0,*(undefined8 *)(param_1 + 0x130),&local_88,1);
          uVar9 = 0;
          iVar6 = (int)uStack_80 + -1;
          if ((int)uStack_80 == 0) {
            iVar6 = 0;
          }
          if (0 < iVar6) {
            puVar4 = &DAT_149dfb77a;
            if ((int)uStack_80 != 0) {
              puVar4 = local_88;
            }
            lVar7 = 0;
            uVar9 = 0;
            do {
              uVar10 = ((uint)(0x19 < (ushort)puVar4[lVar7] - 0x61) * 0x20 +
                       (uint)(ushort)puVar4[lVar7]) - 0x20;
              uVar11 = (uint)(uVar9 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
              uVar9 = (ulonglong)
                      (uVar11 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar10 >> 8 & 0xff) * 4
                               ));
              lVar7 = lVar7 + 1;
            } while (iVar6 != (int)lVar7);
          }
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x310) + 0x1b8);
          iVar6 = FUN_147bf13f8(plVar12,uVar9,&local_88);
          if ((iVar6 == -1) || (lVar7 = (longlong)iVar6 * 0x28 + *plVar12, lVar7 == 0)) {
            local_78 = (undefined8 *)0x0;
          }
          else {
            local_78 = *(undefined8 **)(lVar7 + 0x10);
            plVar12 = *(longlong **)(lVar7 + 0x18);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar12 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar3 = (int *)((longlong)plVar12 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          if (local_78 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            *puVar5 = 0;
            puVar5[1] = 0;
            *(undefined4 *)(puVar5 + 2) = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            *(undefined1 *)(puVar5 + 5) = 1;
            local_a0 = puVar5;
            local_98 = (longlong *)FUN_14001cc68(0x18,0x10);
            local_98[1] = (longlong)&DAT_100000001;
            *local_98 = (longlong)&PTR_FUN_14a3e1d90;
            local_98[2] = (longlong)puVar5;
            iVar6 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              iVar6 = 0;
            }
            local_78 = puVar5;
            FUN_1402980a2(puVar5,local_88,iVar6);
            *(uint *)(local_78 + 2) = local_6c;
            FUN_14747c286(local_78 + 3,local_8c,1);
            uStack_b0 = &local_a0;
            local_b8 = &local_88;
            FUN_147bf1b2a(*(longlong *)(param_1 + 0x310) + 0x1b8,local_64,&local_b8,0);
            plVar12 = local_98;
            if (local_98 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_98 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_98)(local_98);
                LOCK();
                piVar3 = (int *)((longlong)plVar12 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          else if (*(uint *)(local_78 + 4) < local_8c) {
            FUN_14747c286(local_78 + 3,local_8c,1);
          }
          local_b8 = &local_88;
          uStack_b0 = (undefined8 **)&local_6c;
          FUN_147bf14c4(*(longlong *)(param_1 + 0x310) + 0x208,&local_a0,&local_b8,0);
          uStack_b0 = &local_78;
          local_b8 = (undefined2 **)&local_6c;
          FUN_147bf2672(*(longlong *)(param_1 + 0x310) + 600,&local_a0,&local_b8);
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c0 < local_bc) break;
      }
LAB_1435b084a:
      local_b8 = (undefined2 **)0x0;
      uStack_b0 = (undefined8 **)0x0;
      local_a8 = CONCAT13(local_a8._3_1_,0x100);
      FUN_147be8590(param_2,&local_b8);
      if (local_78 != (undefined8 *)0x0) {
        lVar7 = (longlong)(int)local_b8;
        if ((-1 < lVar7) && ((int)local_b8 < *(int *)(local_78 + 4))) {
          lVar8 = local_78[3];
          local_a8._0_3_ =
               CONCAT12(*(undefined1 *)(lVar8 + 0x12 + lVar7 * 0x14),(undefined2)local_a8);
          piVar3 = (int *)(lVar8 + lVar7 * 0x14);
          *piVar3 = (int)local_b8;
          piVar3[1] = local_b8._4_4_;
          piVar3[2] = (int)uStack_b0;
          piVar3[3] = uStack_b0._4_4_;
          *(undefined4 *)(lVar8 + 0x10 + lVar7 * 0x14) = local_a8;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)local_68);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b0946 FUN_1435b0946 body=649 status=ok
// SIG undefined FUN_1435b0946(void)

void FUN_1435b0946(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_129;
  longlong local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined **local_110 [5];
  byte local_e8;
  longlong *local_b8;
  longlong local_98;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [3];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_1 + 0x310);
  uVar8 = *(undefined1 *)(lVar7 + 0x152);
  *(undefined1 *)(lVar7 + 0x152) = 1;
  local_4c = 0;
  (**(code **)(*param_2 + 0x188))(param_2);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    if (DAT_14c761638 < local_4c) {
      FUN_14572541c(param_2);
    }
    else if (*(char *)(param_1 + 0x380) == '\x01') {
      local_110[0] = (undefined **)((ulonglong)local_110[0] & 0xffffffff00000000);
      if (local_4c != 0) {
        uVar6 = 0;
        do {
          puVar2 = (ulonglong *)param_2[1];
          puVar1 = (undefined4 *)*puVar2 + 1;
          if ((undefined4 *)puVar2[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,local_110,4);
            }
            else {
              FUN_14572512c(param_2,local_110);
            }
          }
          else {
            local_110[0] = (undefined **)CONCAT44(local_110[0]._4_4_,*(undefined4 *)*puVar2);
            *puVar2 = (ulonglong)puVar1;
          }
          lVar5 = (longlong)(int)local_110[0];
          lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
          (**(code **)(*param_2 + 0x1a0))(param_2,lVar5 + lVar4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_4c);
      }
    }
    else {
      local_68[0] = 0;
      local_68[1] = 0;
      if (local_4c != 0) {
        uVar6 = 0;
        local_129 = uVar8;
        local_128 = lVar7;
        do {
          FUN_140077068(param_2);
          memset(local_110,0,0x90);
          FUN_144869430(local_110);
          local_80 = 0;
          local_110[0] = &PTR_FUN_149e1e050;
          local_70 = 0x7fffffffffffffff;
          local_e8 = local_e8 | 1;
          local_78 = local_68;
          FUN_1449c2eca(local_110,0);
          local_118 = 0;
          local_138 = 0;
          FUN_1435ac8f2(param_1,local_120,local_110,&local_118);
          plVar3 = local_b8;
          local_110[0] = &PTR__purecall_149e35f70;
          if (local_b8 != (longlong *)0x0) {
            if (*local_b8 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar3);
          }
          lVar7 = local_98;
          if (local_98 != 0) {
            if (*(longlong *)(local_98 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar7);
          }
          lVar7 = local_128;
          uVar8 = local_129;
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_4c);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  *(undefined1 *)(lVar7 + 0x152) = uVar8;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b0bd0 FUN_1435b0bd0 body=640 status=ok
// SIG undefined FUN_1435b0bd0(void)

bool FUN_1435b0bd0(undefined8 param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0 [8];
  undefined8 **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = (undefined8 **)0x0;
  local_68 = 0x800000000;
  puVar6 = (undefined8 *)*param_2;
  lVar9 = puVar6[0x14];
  lVar10 = (longlong)(int)(param_3 & 0xfffffff8);
  if (lVar10 < lVar9) {
    if (lVar9 < 1) {
      lVar9 = -1;
    }
    else {
      lVar13 = puVar6[0x12];
      local_b8 = param_1;
      do {
        lVar12 = *param_2;
        lVar11 = *(longlong *)(lVar12 + 0xb8);
        puVar6 = (undefined8 *)FUN_14001cc68(0x138,0x10);
        if (lVar11 == 0) {
          FUN_1449daf8c(puVar6,*(undefined8 *)(lVar12 + 0xd0),0);
          ppuVar7 = (undefined **)*puVar6;
        }
        else {
          FUN_144a679e2(puVar6,*(undefined8 *)(lVar12 + 0xb8),lVar10);
          *puVar6 = &PTR_FUN_14a8a3730;
          puVar6[0x19] = 0;
          puVar6[0x1a] = 0;
          puVar6[0x1b] = 0;
          puVar6[0x1c] = 0;
          *(undefined8 *)((longlong)puVar6 + 0xe5) = 0;
          *(undefined8 *)((longlong)puVar6 + 0xed) = 0;
          *(byte *)((longlong)puVar6 + 0xf5) = *(byte *)((longlong)puVar6 + 0xf5) & 0xf8;
          *(undefined1 *)((longlong)puVar6 + 0xf6) = 0;
          puVar6[0x25] = 0;
          puVar6[0x26] = 0x400000000;
          puVar6[0x1f] = 0;
          puVar6[0x20] = 0;
          puVar6[0x21] = 0;
          puVar6[0x22] = 0;
          ppuVar7 = &PTR_FUN_14a8a3730;
        }
        lVar12 = lVar10;
        if (lVar9 < lVar10) {
          lVar12 = lVar9;
        }
        (*(code *)ppuVar7[0x2f])(puVar6,lVar13);
        uVar4 = local_68;
        *(byte *)((longlong)puVar6 + 0xf4) = *(byte *)((longlong)puVar6 + 0xf4) | 0x20;
        lVar11 = (longlong)(int)local_68;
        uVar5 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        if (local_68._4_4_ < uVar5) {
          FUN_147bf279c(local_b0,uVar4 & 0xffffffff);
        }
        ppuVar8 = local_70;
        if (local_70 == (undefined8 **)0x0) {
          ppuVar8 = local_b0;
        }
        ppuVar8[lVar11] = puVar6;
        lVar13 = lVar13 + (lVar12 >> 3);
        lVar11 = lVar9 - lVar12;
        bVar2 = lVar12 <= lVar9;
        lVar9 = lVar11;
      } while (lVar11 != 0 && bVar2);
      puVar6 = (undefined8 *)*param_2;
      lVar9 = (longlong)((int)local_68 + -1);
      param_1 = local_b8;
    }
    ppuVar8 = local_b0;
    if (local_70 != (undefined8 **)0x0) {
      ppuVar8 = local_70;
    }
    puVar1 = ppuVar8[lVar9];
    if (puVar1 != (undefined8 *)0x0) {
      *(byte *)((longlong)puVar1 + 0xf5) =
           *(byte *)((longlong)puVar1 + 0xf5) & 0xfb | *(byte *)((longlong)puVar6 + 0xf5) & 4;
      FUN_1400e9192(puVar1 + 0x23,*param_2 + 0x118);
      puVar6 = (undefined8 *)*param_2;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    *param_2 = 0;
  }
  else {
    local_68 = 0x800000001;
    local_b0[0] = puVar6;
  }
  FUN_147be8720(param_1,local_b0);
  iVar3 = (int)local_68;
  if (local_70 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b0e52 FUN_1435b0e52 body=231 status=ok
// SIG undefined FUN_1435b0e52(void)

void FUN_1435b0e52(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = '\0';
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  lVar1 = *(longlong *)(param_1 + 0x408);
  uVar2 = (uint)*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x1d2c);
  if ((uVar2 == 0) || (*(uint *)(lVar1 + 0x10) <= uVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8);
  }
  if (local_31 == '\x01') {
    do {
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) break;
      FUN_146f2931a(&local_38,param_2,0xffffffff);
      FUN_142a818f6(lVar1,param_2,local_38,uVar3);
      (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
    } while (local_31 != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b0f3a FUN_1435b0f3a body=470 status=ok
// SIG undefined FUN_1435b0f3a(void)

void FUN_1435b0f3a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (longlong)*(int *)(param_1 + 0x1f0)) {
    uVar9 = (longlong)*(int *)(param_1 + 0x1f0);
    do {
      uVar1 = uVar9 - 1;
      plVar2 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8);
        plVar6 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar2[9] - 1U & (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17)
                        * 4);
        if (iVar8 != -1) {
          do {
            plVar6 = (longlong *)(*plVar2 + (longlong)iVar8 * 0x18);
            if (*plVar6 == lVar5) goto LAB_1435b0fe3;
            iVar8 = (int)plVar6[2];
          } while (iVar8 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_1435b0fe3:
      if ((int)plVar6[1] <= (int)param_2 && -1 < (int)plVar6[1]) {
        *(undefined4 *)(plVar6 + 1) = 0xffffffff;
        uVar4 = *(uint *)(param_1 + 0x1f0);
        if (uVar9 != uVar4) {
          memmove((void *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8),
                  (void *)(*(longlong *)(param_1 + 0x1e8) + uVar1 * 8 + 8),
                  (longlong)(int)(uVar4 - (int)uVar9) << 3);
          uVar4 = *(uint *)(param_1 + 0x1f0);
        }
        *(uint *)(param_1 + 0x1f0) = uVar4 - 1;
        FUN_140e33ef8((longlong *)(param_1 + 0x1e8));
      }
      bVar3 = 1 < (longlong)uVar9;
      uVar9 = uVar1;
    } while (bVar3);
  }
  plVar2 = (longlong *)(param_1 + 0x468);
  if (*(int *)(param_1 + 0x4b0) != 0) {
    lVar5 = param_1 + 0x4a0;
    if (*(longlong *)(param_1 + 0x4a8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x4a8);
    }
    iVar8 = *(int *)(lVar5 + (longlong)(int)(*(int *)(param_1 + 0x4b0) - 1U & param_2) * 4);
    while (iVar7 = iVar8, iVar7 != -1) {
      lVar5 = *plVar2;
      iVar8 = *(int *)(lVar5 + 8 + (longlong)iVar7 * 0x10);
      if (*(uint *)(lVar5 + (longlong)iVar7 * 0x10) == param_2) {
        do {
          FUN_146f2fa2c(param_1 + 0x418,local_3c,lVar5 + (longlong)iVar7 * 0x10 + 4,0);
          do {
            iVar7 = iVar8;
            if (iVar7 == -1) goto LAB_1435b10e3;
            lVar5 = *plVar2;
            iVar8 = *(int *)(lVar5 + 8 + (longlong)iVar7 * 0x10);
          } while (*(uint *)(lVar5 + (longlong)iVar7 * 0x10) != param_2);
        } while( true );
      }
    }
  }
LAB_1435b10e3:
  FUN_1415d8186(plVar2,param_2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b1112 FUN_1435b1112 body=1521 status=ok
// SIG undefined FUN_1435b1112(void)

void FUN_1435b1112(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  int iVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_318 [32];
  wchar_t *local_2f8;
  wchar_t *local_2f0;
  uint local_2dc;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  ulonglong local_2c0;
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  undefined2 *local_2a8;
  int local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined8 local_288;
  undefined2 *local_280;
  undefined2 *local_278;
  ulonglong *local_270;
  char local_268;
  undefined2 local_260 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar19 = *(longlong *)(param_1 + 0x310);
  puVar1 = (uint *)(lVar19 + 0x60);
  iVar5 = *(int *)(lVar19 + 0x78);
  local_2d0 = param_1;
  local_2c8 = param_2;
  if (iVar5 == 0) {
    uVar21 = 1;
    uVar22 = 0;
    iVar16 = 0;
    iVar4 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar19 + 0x70);
    if (*(uint **)(lVar19 + 0x70) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar4 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar4 = iVar5 + -1;
      }
      uVar22 = 0;
      uVar21 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar21 = uVar22;
      }
      iVar16 = 0;
      do {
        if (uVar21 == uVar22) goto LAB_1435b16c4;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar9[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
    }
    uVar21 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar21 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
  }
  if (iVar5 <= iVar4) {
LAB_1435b16c4:
    if ((local_60[0] ^ (ulonglong)auStack_318) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar14 = 0xffffffff;
  local_2d8 = lVar19;
LAB_1435b11f6:
  lVar10 = (longlong)iVar4;
  uVar3 = *(ulonglong *)(*(longlong *)(lVar19 + 0x50) + 8 + lVar10 * 0x18);
  local_2dc = uVar14;
  FUN_140056680(&local_298,L"Unused");
  plVar12 = *(longlong **)(local_2d0 + 0x2e8);
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    plVar11 = plVar12 + 7;
    if ((longlong *)plVar12[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar12[8];
    }
    iVar5 = *(int *)((longlong)plVar11 +
                    (ulonglong)((int)plVar12[9] - 1U & (int)(uVar3 >> 0x20) * 0x17 + (int)uVar3) * 4
                    );
    if (iVar5 != -1) {
      lVar13 = *plVar12;
      iVar4 = iVar5;
      do {
        if (*(ulonglong *)(lVar13 + (longlong)iVar4 * 0x18) == uVar3) goto LAB_1435b128b;
        iVar4 = *(int *)(lVar13 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  goto LAB_1435b12eb;
  while (iVar5 = (int)puVar2[2], iVar5 != -1) {
LAB_1435b128b:
    puVar2 = (ulonglong *)(lVar13 + (longlong)iVar5 * 0x18);
    if (*puVar2 == uVar3) {
      pwVar18 = L"Pending";
      if (puVar2 != (ulonglong *)0x0) {
        pwVar18 = L"Pending";
        if ((int)puVar2[1] == -1) {
          pwVar18 = L"Ackd";
        }
        if ((int)puVar2[1] == -2) {
          pwVar18 = L"UnAckd";
        }
      }
      goto LAB_1435b12de;
    }
  }
  pwVar18 = L"Pending";
LAB_1435b12de:
  FUN_14020fad6(&local_298,pwVar18);
LAB_1435b12eb:
  iVar5 = *(int *)(*(longlong *)(lVar19 + 0x50) + 4 + lVar10 * 0x18);
  if ((((iVar5 != 0) &&
       (uVar14 = *(uint *)(*(longlong *)(lVar19 + 0x50) + lVar10 * 0x18), -1 < (int)uVar14)) &&
      ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar5)) &&
      ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
    lVar10 = *plVar12;
    if (lVar10 != 0) {
      local_2b8 = (wchar_t *)0x0;
      uStack_2b0 = 0;
      local_2c0 = uVar22;
      FUN_14005eb28(&local_2b8,0x80);
      local_268 = '\0';
      local_280 = local_260;
      local_270 = local_60;
      local_288 = *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18);
      local_278 = local_280;
      FUN_14005eb5c(&local_288,&local_280);
      if (local_270 <= local_278 + 1) {
        FUN_140213274(&local_280,1);
      }
      *local_278 = 0x20;
      local_278 = local_278 + 1;
      FUN_144750bde(lVar10,0,&local_280);
      FUN_1400020e8(&local_2b8,local_280,(ulonglong)((longlong)local_278 - (longlong)local_280) >> 1
                   );
      if (local_268 == '\x01') {
        FUN_1400020a8(local_280);
      }
      pwVar18 = L"";
      if ((int)uStack_2b0 != 0) {
        pwVar18 = local_2b8;
      }
      pwVar17 = L"Static";
      if ((uVar3 & 1) == 0) {
        pwVar17 = L"Dynamic";
      }
      if (uVar3 == 0) {
        pwVar17 = L"Static";
      }
      puVar15 = &DAT_149dfb77a;
      if (local_290 != 0) {
        puVar15 = local_298;
      }
      FUN_140002266(&local_280,L"%llu",uVar3);
      puVar20 = &DAT_149dfb77a;
      if ((int)local_278 != 0) {
        puVar20 = local_280;
      }
      local_2f8 = pwVar17;
      local_2f0 = pwVar18;
      FUN_140002266(&local_2a8,L"%s [%s] [%s] - %s",puVar20,puVar15);
      if (local_280 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar14 = local_2dc;
      lVar19 = local_2d8;
      uVar22 = local_2c0;
      if (local_2b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
        lVar19 = local_2d8;
        uVar22 = local_2c0;
      }
      goto LAB_1435b15b7;
    }
  }
  pwVar18 = L"Static";
  if ((uVar3 & 1) == 0) {
    pwVar18 = L"Dynamic";
  }
  if (uVar3 == 0) {
    pwVar18 = L"Static";
  }
  puVar15 = &DAT_149dfb77a;
  if (local_290 != 0) {
    puVar15 = local_298;
  }
  FUN_140002266(&local_280,L"%llu",uVar3);
  puVar20 = &DAT_149dfb77a;
  if ((int)local_278 != 0) {
    puVar20 = local_280;
  }
  local_2f0 = L"NULL";
  local_2f8 = pwVar18;
  FUN_140002266(&local_2a8,L"%s [%s] [%s] - %s",puVar20,puVar15);
  uVar14 = local_2dc;
  if (local_280 != (undefined2 *)0x0) {
    FUN_1400020a8();
    uVar14 = local_2dc;
  }
LAB_1435b15b7:
  puVar15 = &DAT_149dfb77a;
  if (local_2a0 != 0) {
    puVar15 = local_2a8;
  }
  FUN_140047918(local_2c8,&DAT_149e0625e,puVar15);
  if (local_2a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar14 = uVar14 & ~(uint)uVar21;
  puVar9 = *(uint **)(lVar19 + 0x70);
  if (*(uint **)(lVar19 + 0x70) == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar5 = *(int *)(lVar19 + 0x78);
  iVar4 = (int)uVar22;
  lVar10 = (longlong)iVar4;
  uVar6 = puVar9[lVar10] & uVar14;
  if (uVar6 == 0) {
    iVar7 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar7 = iVar5 + -1;
    }
    iVar7 = iVar7 >> 5;
    iVar8 = iVar7;
    if (iVar7 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar7 <= iVar4) goto LAB_1435b16c4;
    lVar13 = 0;
    while( true ) {
      iVar16 = iVar16 + 0x20;
      uVar6 = puVar9[lVar10 + lVar13 + 1];
      if (uVar6 != 0) break;
      lVar13 = lVar13 + 1;
      if (iVar8 - lVar10 == lVar13) goto LAB_1435b16c4;
    }
    uVar22 = (ulonglong)(iVar4 + (int)lVar13 + 1);
    uVar14 = 0xffffffff;
  }
  uVar21 = (ulonglong)(-uVar6 & uVar6);
  uVar3 = uVar21 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar4 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if (iVar5 <= iVar4) goto LAB_1435b16c4;
  goto LAB_1435b11f6;
}



// FUNCTION 1435b1704 FUN_1435b1704 body=1140 status=ok
// SIG undefined FUN_1435b1704(void)

ulonglong FUN_1435b1704(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
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
  undefined7 uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((param_2 != 0 && param_1 != 0) && (*(longlong *)(param_2 + 0x1a8) != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = (code *)&LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
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
      lVar2 = DAT_14cae8b20;
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
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_1435b17ee;
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
           (lVar3 = lVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar3 = 0;
        }
      } while ((lVar3 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    }
    else {
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
      lVar2 = DAT_14cae8b20;
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
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_1435b17ee;
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
           (lVar3 = lVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar3 = 0;
        }
      } while ((lVar3 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    }
    if ((lVar3 != 0) && (*(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x30) != lVar3)) {
      uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar3 + 0x240)) & 0xffffffffffffff20;
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 5);
    }
  }
LAB_1435b17ee:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1435b1b96 FUN_1435b1b96 body=670 status=ok
// SIG undefined FUN_1435b1b96(void)

void FUN_1435b1b96(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  fVar2 = DAT_14caf2be8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
      lVar1 = *param_2;
      lVar5 = param_1 + 0x1d0;
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1d8);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x1e0) - 1U &
                               (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
      if (iVar4 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x198);
        do {
          lVar8 = (longlong)iVar4;
          if (*(longlong *)(lVar5 + lVar8 * 0x18) == lVar1) {
            dVar9 = *(double *)(lVar5 + 8 + lVar8 * 0x18);
            FUN_147bf3264();
            if (((((0.0 < fVar2) &&
                  (plVar6 = *(longlong **)(param_1 + 0x310), plVar6 != (longlong *)0x0)) &&
                 (*(longlong *)(param_1 + 0x130) != 0)) &&
                ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58), lVar1 != 0 &&
                 (dVar9 = *(double *)(lVar1 + 0x300) - dVar9, (double)DAT_14caf2be8 < dVar9)))) &&
               ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34))) {
              lVar1 = *param_2;
              plVar7 = plVar6 + 7;
              if ((longlong *)plVar6[8] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar6[8];
              }
              iVar4 = *(int *)((longlong)plVar7 +
                              (ulonglong)
                              ((int)plVar6[9] - 1U &
                              (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
              if (iVar4 != -1) {
                goto LAB_1435b1d3b;
              }
            }
            break;
          }
          iVar4 = *(int *)(lVar5 + lVar8 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
  }
  else {
    if (((0.0 < DAT_14caf2be8) && (*(longlong *)(param_1 + 0x130) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58), lVar1 != 0)) {
      local_60 = *(undefined8 *)(lVar1 + 0x300);
      local_50 = &local_60;
      local_58 = param_2;
      FUN_147bf2d98(param_1 + 0x198,local_44);
    }
    uVar3 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x1cc);
    if (uVar3 <= *(uint *)(param_1 + 0x3f0)) {
      uVar3 = *(uint *)(param_1 + 0x3f0);
    }
    *(uint *)(param_1 + 0x3f0) = uVar3;
  }
  goto LAB_1435b1c7a;
  while (iVar4 = *(int *)(lVar5 + 0x38), iVar4 != -1) {
LAB_1435b1d3b:
    lVar5 = *plVar6 + (longlong)iVar4 * 0x40;
    if (*(longlong *)(*plVar6 + (longlong)iVar4 * 0x40) == lVar1) {
      if (((((uint *)(lVar5 + 8) != (uint *)0x0 && lVar5 != 0) && (*(int *)(lVar5 + 0xc) != 0)) &&
          ((uVar3 = *(uint *)(lVar5 + 8), -1 < (int)uVar3 &&
           ((((int)uVar3 < DAT_14c9647dc &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == *(int *)(lVar5 + 0xc))))))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
        local_58 = *(longlong **)(*(longlong *)(*plVar6 + 0x10) + 0x18);
        local_50 = (undefined8 *)CONCAT44(local_50._4_4_,(float)dVar9);
        FUN_147bda86e(param_1 + 0x388);
      }
      break;
    }
  }
LAB_1435b1c7a:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b1e36 FUN_1435b1e36 body=141 status=ok
// SIG undefined FUN_1435b1e36(void)

longlong FUN_1435b1e36(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
    lVar2 = param_1 + 0x408;
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x410);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x418) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 0x30;
        if (*(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 0x30) == param_2)
        break;
        iVar3 = *(int *)(lVar2 + 0x28);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_1435b1e88;
    }
  }
  lVar2 = 0;
LAB_1435b1e88:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1435b1ec4 FUN_1435b1ec4 body=170 status=ok
// SIG undefined FUN_1435b1ec4(void)

void FUN_1435b1ec4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((DAT_14c75f435 == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x310), lVar1 != 0)) {
    lVar3 = FUN_1400fcfc4(lVar1,&local_20);
    if ((lVar3 != 0) &&
       ((lVar2 = *(longlong *)(lVar3 + 8), lVar2 != 0 && (*(longlong *)(lVar3 + 0x10) != 0)))) {
      FUN_1412f141c(lVar1 + 0x3d0,(int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2,lVar3 + 8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b1f80 FUN_1435b1f80 body=309 status=ok
// SIG undefined FUN_1435b1f80(void)

void FUN_1435b1f80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if ((((DAT_14c75f435 == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x310), lVar1 != 0)) &&
      (lVar3 = FUN_1400fcfc4(lVar1,&local_38), lVar3 != 0)) &&
     (*(int *)(lVar1 + 0x3d8) != *(int *)(lVar1 + 0x404))) {
    lVar2 = *(longlong *)(lVar3 + 8);
    lVar5 = lVar1 + 0x408;
    if (*(longlong *)(lVar1 + 0x410) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x410);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x418) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x3d0) + (longlong)iVar4 * 0x30;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x3d0) + (longlong)iVar4 * 0x30) == lVar2) {
          if ((lVar5 + 8 != 0 && lVar5 != 0) &&
             (FUN_140e33dec(lVar5 + 8,param_2), *(int *)(lVar5 + 0x10) == 0)) {
            local_30 = *(undefined8 *)(lVar3 + 8);
            FUN_140cf1248(*(longlong *)(param_1 + 0x310) + 0x3d0);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x28);
      } while (iVar4 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b20b6 FUN_1435b20b6 body=1062 status=ok
// SIG undefined FUN_1435b20b6(void)

void FUN_1435b20b6(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,byte param_6,char param_7)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  byte local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar9 = *param_2;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4
                    );
    if (iVar6 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar6 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x40) == lVar9) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
            local_b8 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            FUN_1400021e4(lVar1 + 0x18,&local_58);
            if ((int)uStack_50 != (int)param_3[1]) {
              bVar14 = (int)param_3[1] + (int)uStack_50 == 1;
              goto LAB_1435b229c;
            }
            bVar14 = true;
            if ((int)uStack_50 < 2) goto LAB_1435b229c;
            lVar9 = 0;
            goto LAB_1435b2244;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x38);
      } while (iVar6 != -1);
    }
  }
  local_98 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  local_90 = 0x10;
  if ((int)param_3[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_a8,puVar8,1);
  uStack_b0 = (undefined4)*param_4;
  uStack_ac = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_a4 = CONCAT44(param_5,(undefined4)uStack_a4);
  local_90 = param_7 * '\x02' | param_6 | 0x10;
  FUN_140a8234a(param_1,param_2);
  goto LAB_1435b21ce;
LAB_1435b2244:
  uVar2 = *(ushort *)(local_58 + lVar9);
  uVar5 = (uint)uVar2;
  uVar3 = *(ushort *)(*param_3 + lVar9);
  uVar12 = (uint)uVar3;
  if (uVar2 != uVar3) {
    if ((uVar3 | uVar2) < 0x80) {
      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1435b2258;
    }
    iVar6 = uVar5 - uVar12;
    goto LAB_1435b2296;
  }
  if (uVar2 == 0) goto LAB_1435b2294;
LAB_1435b2258:
  lVar9 = lVar9 + 2;
  goto LAB_1435b2244;
LAB_1435b2294:
  iVar6 = 0;
LAB_1435b2296:
  bVar14 = iVar6 == 0;
LAB_1435b229c:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (bVar14) {
    if (*(longlong *)(lVar1 + 0x10) == *param_4) goto LAB_1435b21ce;
    lVar9 = 0;
LAB_1435b239e:
    FUN_140002266(&local_68,L"%llu",*param_2);
    puVar8 = &DAT_149dfb77a;
    puVar10 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    FUN_140002266(&local_78,L"%llu",*(undefined8 *)(lVar1 + 0x10));
    puVar13 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar13 = local_78;
    }
    FUN_140002266(&local_88,L"%llu",*param_4);
    puVar11 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar11 = local_88;
    }
    if ((int)param_3[1] != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    local_d8 = puVar13;
    local_d0 = puVar10;
    FUN_140002266(&local_58,L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s",puVar8
                  ,puVar11);
    if (lVar9 != 0) {
      FUN_1400020a8(lVar9);
    }
    uVar4 = uStack_50;
    lVar9 = local_58;
    local_b8 = local_58;
    local_58 = 0;
    uStack_50 = 0;
    uStack_b0 = (undefined4)uVar4;
    uStack_ac = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140002266(&local_68,L"%llu",*param_2);
    puVar8 = &DAT_149dfb77a;
    local_c0 = &DAT_149dfb77a;
    if (local_60 != 0) {
      local_c0 = local_68;
    }
    FUN_1400021e4(lVar1 + 0x18,&local_78);
    puVar10 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar10 = local_78;
    }
    if ((int)param_3[1] != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    local_d8 = local_c0;
    FUN_140002266(&local_58,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s",puVar8,puVar10);
    uVar4 = uStack_50;
    lVar9 = local_58;
    local_b8 = local_58;
    local_58 = 0;
    uStack_50 = 0;
    uStack_b0 = (undefined4)uVar4;
    uStack_ac = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar1 + 0x10) != *param_4) goto LAB_1435b239e;
  }
  FUN_147be749e(param_1[0x29],9,&local_b8);
  if (lVar9 != 0) {
    FUN_1400020a8(lVar9);
  }
LAB_1435b21ce:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b24de FUN_1435b24de body=893 status=ok
// SIG undefined FUN_1435b24de(void)

void FUN_1435b24de(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 **local_68;
  undefined8 *local_60;
  undefined8 **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = &local_78;
  puVar1 = (undefined8 *)(param_2 + 0x10);
  local_78 = param_3;
  local_60 = puVar1;
  FUN_147bf3554(param_1 + 0x168,&local_70,&local_60);
  local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x300);
  local_50 = 0;
  local_48 = 0x200000001;
  local_60 = local_78;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 4;
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    lVar9 = param_1 + 0x2f8;
    if (*(longlong *)(param_1 + 0x300) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x300);
    }
    iVar4 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x308) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x2c0);
      do {
        lVar6 = lVar9 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(lVar9 + (longlong)iVar4 * 0x38) == lVar2) {
          if (lVar6 + 8 != 0 && lVar6 != 0) {
            local_70 = local_78;
            FUN_147bee214(lVar6 + 8);
            goto LAB_1435b27b2;
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_70 = puVar1;
  local_68 = &local_60;
  FUN_147bf3a56((longlong *)(param_1 + 0x2c0),local_98,&local_70);
  uVar5 = *(int *)(param_1 + 0x2c8) - *(int *)(param_1 + 0x2f4);
  if (uVar5 <= *(uint *)(param_1 + 0x378)) {
    uVar5 = *(uint *)(param_1 + 0x378);
  }
  *(uint *)(param_1 + 0x378) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x148);
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,3);
  *local_70 = &PTR_LAB_149e665f0;
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
  local_70[2] = lVar6;
  *local_70 = &PTR_FUN_14a9fcc60;
  local_70[3] = 0;
  iVar4 = 0;
  if (lVar2 != 0) {
    uVar5 = *(uint *)(lVar2 + 0xc);
    *(uint *)(local_70 + 3) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar4;
  puVar3[4] = lVar2;
  local_88 = 0;
  local_80 = 0;
  FUN_141712e6e(&local_88,&local_70);
  FUN_1400021e4(puVar1,local_98);
  local_a8 = 0xffffffff;
  FUN_1427d6730(local_98,&local_88,0,0);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)local_68 != 0) {
    if (local_70 == (undefined8 *)0x0) goto LAB_1435b27a3;
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1435b27a3:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_1435b27b2:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b285c FUN_1435b285c body=719 status=ok
// SIG undefined FUN_1435b285c(void)

void FUN_1435b285c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0x59] != *(int *)((longlong)param_1 + 0x2f4)) {
    lVar5 = *param_2;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar6 = (uint)lVar5 & 0xffff;
    plVar10 = param_1 + 0x5f;
    if ((longlong *)param_1[0x60] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x60];
    }
    iVar7 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)param_1[0x61] - 1U &
                    (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      plVar10 = param_1 + 0x58;
      do {
        lVar1 = *plVar10 + (longlong)iVar7 * 0x38;
        if (*(longlong *)(*plVar10 + (longlong)iVar7 * 0x38) == lVar5) {
          if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
            plVar11 = (longlong *)(lVar1 + 8);
            if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
              plVar11 = *(longlong **)(lVar1 + 0x18);
            }
            if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
              plVar8 = plVar11 + *(int *)(lVar1 + 0x20);
              local_60 = plVar10;
              do {
                if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                  lVar5 = *plVar11;
                  plVar10 = (longlong *)param_1[8];
                  if ((longlong *)param_1[8] == (longlong *)0x0) {
                    plVar10 = param_1 + 7;
                  }
                  iVar7 = *(int *)((longlong)plVar10 +
                                  (ulonglong)
                                  ((int)param_1[9] - 1U &
                                  (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
                  if (iVar7 != -1) {
                    do {
                      lVar2 = *param_1 + (longlong)iVar7 * 0x40;
                      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x40) == lVar5) {
                        if ((uint *)(lVar2 + 8) != (uint *)0x0 && lVar2 != 0) {
                          bVar9 = *(byte *)(lVar2 + 0x30) & 0xf3 | 8;
                          if (param_3 != 0) {
                            bVar9 = *(byte *)(lVar2 + 0x30) & 0xfb;
                          }
                          *(byte *)(lVar2 + 0x30) = bVar9;
                          if (((((*(int *)(lVar2 + 0xc) != 0) &&
                                (uVar3 = *(uint *)(lVar2 + 8), -1 < (int)uVar3)) &&
                               ((int)uVar3 < DAT_14c9647dc)) &&
                              ((plVar10 = (longlong *)
                                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                               plVar10 != (longlong *)0x0 &&
                               ((int)plVar10[2] == *(int *)(lVar2 + 0xc))))) &&
                             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
                              (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))) {
                            FUN_1435b2b2c(param_1,lVar5,plVar10);
                            lVar5 = (**(code **)(*plVar10 + 0x180))(plVar10);
                            if ((lVar5 != 0) &&
                               (plVar4 = *(longlong **)(lVar5 + 0x178), plVar4 != (longlong *)0x0))
                            {
                              (**(code **)(*plVar4 + 0x638))(plVar4,plVar10);
                            }
                          }
                        }
                        break;
                      }
                      iVar7 = *(int *)(lVar2 + 0x38);
                    } while (iVar7 != -1);
                  }
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar8);
              lVar5 = *param_2;
              plVar10 = local_60;
            }
            if ((0.0 < DAT_14caf2bb8) &&
               (dVar12 = *(double *)(param_1[0x29] + 0x300) - *(double *)(lVar1 + 0x28),
               (double)DAT_14caf2bb8 <= dVar12)) {
              local_50 = (float)dVar12;
              local_58 = lVar5;
              FUN_147bda86e(param_1 + 0x62,&local_58);
              lVar5 = *param_2;
            }
            FUN_147bf3fcc(plVar10,lVar5);
            FUN_147bf40dc(param_1 + 0x2d,*param_2);
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x30);
      } while (iVar7 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b2b2c FUN_1435b2b2c body=273 status=ok
// SIG undefined FUN_1435b2b2c(void)

void FUN_1435b2b2c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x3b4)) {
    return;
  }
  lVar6 = param_1 + 0x3b8;
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x3c0);
  }
  iVar5 = *(int *)(lVar6 + (ulonglong)
                           (*(int *)(param_1 + 0x3c8) - 1U &
                           (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
  if (iVar5 == -1) {
    return;
  }
  while (lVar6 = *(longlong *)(param_1 + 0x380) + (longlong)iVar5 * 0x20,
        *(longlong *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar5 * 0x20) != param_2) {
    iVar5 = *(int *)(lVar6 + 0x18);
    if (iVar5 == -1) {
      return;
    }
  }
  if ((longlong *)(lVar6 + 8) == (longlong *)0x0 || lVar6 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) {
      return;
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
  lVar6 = *(longlong *)(lVar6 + 8);
  if (lVar6 != 0) {
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(lVar6 + 8) = param_3;
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
                    /* WARNING: Could not recover jumptable at 0x0001435b2c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1435b2c3e FUN_1435b2c3e body=720 status=ok
// SIG undefined FUN_1435b2c3e(void)

void FUN_1435b2c3e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_1[9] - 1U & (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) *
                      4);
      if (iVar5 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar5 * 0x40;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x40) == lVar3) {
            if ((uint *)(lVar1 + 8) != (uint *)0x0 && lVar1 != 0) {
              FUN_1435b2c3e(param_1,lVar1 + 0x10,param_3);
              if (1 < *(int *)(param_3 + 8)) {
                FUN_1400020e8(param_3,&DAT_149e0635c,1);
              }
              if ((((*(int *)(lVar1 + 0xc) == 0) || (uVar2 = *(uint *)(lVar1 + 8), (int)uVar2 < 0))
                  || (DAT_14c9647dc <= (int)uVar2)) ||
                 ((plVar4 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                  plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(lVar1 + 0xc))))) {
                lVar3 = *(longlong *)(lVar1 + 0x18);
joined_r0x0001435b2ecb:
                if (lVar3 == 0) {
                  FUN_140002266(&local_48,L"%llu",*param_2);
                  puVar7 = local_48;
                  if (local_40 == 0) {
                    puVar7 = &DAT_149dfb77a;
                  }
                  pwVar6 = L"[%s]EMPTY";
                  goto LAB_1435b2d0d;
                }
                FUN_1400021e4(lVar1 + 0x18,&local_48);
              }
              else {
                lVar3 = *(longlong *)(lVar1 + 0x18);
                if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) goto joined_r0x0001435b2ecb;
                if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
                  lVar3 = *plVar4;
                }
                else {
                  lVar3 = 0;
                }
                local_38 = *(undefined2 **)(lVar3 + 0x18);
                FUN_1400021e4(&local_38,&local_48);
              }
              puVar7 = &DAT_149dfb77a;
              if (local_40 != 0) {
                puVar7 = local_48;
              }
              FUN_140002266(&local_58,L"%llu",*param_2);
              puVar8 = &DAT_149dfb77a;
              if (local_50 != 0) {
                puVar8 = local_58;
              }
              FUN_140002266(&local_38,L"[%s]%s",puVar8,puVar7);
              iVar5 = local_30 + -1;
              if (local_30 == 0) {
                iVar5 = 0;
              }
              FUN_1400020e8(param_3,local_38,iVar5);
              if (local_38 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1435b2d36;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x38);
        } while (iVar5 != -1);
      }
    }
    FUN_140002266(&local_48,L"%llu");
    puVar7 = local_48;
    if (local_40 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    pwVar6 = L"[%s]NOT_IN_CACHE";
LAB_1435b2d0d:
    FUN_140002266(&local_38,pwVar6,puVar7);
    iVar5 = local_30 + -1;
    if (local_30 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_3,local_38,iVar5);
    local_58 = local_38;
LAB_1435b2d36:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b2f0f FUN_1435b2f0f body=1553 status=ok
// SIG undefined FUN_1435b2f0f(void)

void FUN_1435b2f0f(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_3a8 [40];
  longlong local_380;
  int local_378;
  uint local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_147bee394(&local_380);
  uVar14 = (ulonglong)local_370;
  if ((-1 < (int)local_370) && ((int)local_370 < local_378)) {
    do {
      lVar2 = *(longlong *)(local_380 + (uVar14 & 0xffffffff) * 8);
      plVar1 = (longlong *)(lVar2 + 0xe0);
      if (*(int *)(lVar2 + 0x114) < *(int *)(lVar2 + 0xe8)) {
        FUN_147bee400(plVar1);
        uVar12 = *(int *)(lVar2 + 0xe8) - *(int *)(lVar2 + 0x114);
        if (1 < (int)uVar12) {
          lVar2 = *plVar1;
          memset(local_358,0,0x2f0);
          local_360 = lVar2 + (ulonglong)uVar12 * 0x18 + -0x18;
          local_368 = lVar2;
          fVar26 = logf((float)(int)uVar12);
          local_358[0] = (int)(longlong)(fVar26 + fVar26);
          plVar8 = &local_368;
          do {
            puVar10 = (undefined8 *)*plVar8;
            puVar11 = (undefined8 *)plVar8[1];
            iVar18 = (int)plVar8[2];
            iVar13 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 3) * -0x55555555;
            uVar12 = iVar13 + 1;
            puVar16 = puVar11;
            puVar24 = puVar10;
            if (iVar18 != 0) {
LAB_1435b3058:
              if (8 < (int)uVar12) {
                uVar14 = (ulonglong)(uVar12 >> 1);
                uVar3 = puVar10[uVar14 * 3 + 2];
                uVar4 = puVar10[uVar14 * 3];
                uVar5 = (puVar10 + uVar14 * 3)[1];
                puVar10[uVar14 * 3 + 2] = puVar10[2];
                uVar6 = puVar10[1];
                puVar10[uVar14 * 3] = *puVar10;
                (puVar10 + uVar14 * 3)[1] = uVar6;
                puVar10[2] = uVar3;
                *puVar10 = uVar4;
                puVar10[1] = uVar5;
                puVar20 = puVar16 + 3;
                puVar9 = puVar10;
                do {
                  puVar7 = puVar9 + 3;
                  puVar17 = puVar9 + 3;
                  do {
                    puVar22 = puVar17;
                    puVar9 = puVar7;
                    if (puVar16 < puVar9) break;
                    puVar7 = puVar9 + 3;
                    puVar17 = puVar22 + 3;
                  } while (*(int *)(puVar10 + 1) <= *(int *)(puVar9 + 1));
                  puVar7 = puVar20 + -6;
                  do {
                    puVar17 = puVar20;
                    puVar23 = puVar7;
                    puVar20 = puVar17 + -3;
                    if (puVar20 <= puVar10) break;
                    puVar7 = puVar23 + -3;
                  } while (*(int *)(puVar17 + -2) <= *(int *)(puVar10 + 1));
                  if (puVar20 < puVar9) goto LAB_1435b3145;
                  uVar3 = puVar9[2];
                  uVar4 = *puVar9;
                  uVar5 = puVar9[1];
                  puVar9[2] = puVar17[-1];
                  uVar6 = puVar17[-2];
                  *puVar9 = *puVar20;
                  puVar9[1] = uVar6;
                  puVar17[-1] = uVar3;
                  *puVar20 = uVar4;
                  puVar17[-2] = uVar5;
                } while( true );
              }
              for (; puVar24 = puVar10, puVar11 = puVar10, puVar10 < puVar16; puVar16 = puVar16 + -3
                  ) {
                while (puVar20 = puVar24, puVar11 = puVar11 + 3, puVar11 <= puVar16) {
                  puVar24 = puVar11;
                  if (*(int *)(puVar20 + 1) <= *(int *)(puVar11 + 1)) {
                    puVar24 = puVar20;
                  }
                }
                local_58 = puVar20[2];
                local_68 = *puVar20;
                uStack_60 = puVar20[1];
                uVar4 = local_68;
                uVar5 = uStack_60;
                puVar20[2] = puVar16[2];
                uVar3 = puVar16[1];
                *puVar20 = *puVar16;
                puVar20[1] = uVar3;
                puVar16[2] = local_58;
                local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                *(undefined4 *)puVar16 = (undefined4)local_68;
                *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
                *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
                local_68 = uVar4;
                uStack_60 = uVar5;
              }
              goto LAB_1435b34d7;
            }
LAB_1435b3214:
            if (uVar12 != 0) {
              iVar18 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
              iVar13 = iVar18;
joined_r0x0001435b3235:
              do {
                iVar19 = iVar18 * 2 + 1;
                if (iVar19 < (int)uVar12) {
                  iVar21 = iVar18 * 2 + 2;
                  if ((iVar21 < (int)uVar12) &&
                     (*(int *)(puVar10 + (longlong)iVar21 * 3 + 1) <=
                      *(int *)(puVar10 + (longlong)iVar19 * 3 + 1))) {
                    iVar19 = iVar21;
                  }
                  if (*(int *)(puVar10 + (longlong)iVar19 * 3 + 1) <
                      *(int *)(puVar10 + (longlong)iVar18 * 3 + 1)) {
                    puVar16 = puVar10 + (longlong)iVar18 * 3;
                    puVar11 = puVar10 + (longlong)iVar19 * 3;
                    local_58 = puVar16[2];
                    local_68 = *puVar16;
                    uStack_60 = puVar16[1];
                    uVar4 = local_68;
                    uVar5 = uStack_60;
                    puVar16[2] = puVar11[2];
                    uVar3 = puVar11[1];
                    *puVar16 = *puVar11;
                    puVar16[1] = uVar3;
                    puVar11[2] = local_58;
                    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                    *(undefined4 *)puVar11 = (undefined4)local_68;
                    *(undefined4 *)((longlong)puVar11 + 4) = local_68._4_4_;
                    *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_60;
                    *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_60._4_4_;
                    iVar18 = iVar19;
                    local_68 = uVar4;
                    uStack_60 = uVar5;
                    goto joined_r0x0001435b3235;
                  }
                }
                bVar25 = iVar13 != 0;
                iVar18 = iVar13 + -1;
                iVar13 = iVar18;
              } while (bVar25);
              if (1 < (int)uVar12) {
                uVar14 = (ulonglong)uVar12 - 1;
                local_58 = puVar10[2];
                local_68 = *puVar10;
                uStack_60 = puVar10[1];
                uVar4 = local_68;
                uVar5 = uStack_60;
                puVar10[2] = puVar10[uVar14 * 3 + 2];
                uVar3 = (puVar10 + uVar14 * 3)[1];
                *puVar10 = puVar10[uVar14 * 3];
                puVar10[1] = uVar3;
                puVar10[uVar14 * 3 + 2] = local_58;
                local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                puVar16 = puVar10 + uVar14 * 3;
                *(undefined4 *)puVar16 = (undefined4)local_68;
                *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
                *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
                local_68 = uVar4;
                uStack_60 = uVar5;
                if (uVar12 != 2) {
                  do {
                    iVar18 = 0;
                    iVar19 = 1;
                    iVar13 = 0;
                    do {
                      iVar18 = iVar18 + 2;
                      iVar21 = iVar19;
                      if (((longlong)iVar18 < (longlong)uVar14) &&
                         (*(int *)(puVar10 + (longlong)iVar18 * 3 + 1) <=
                          *(int *)(puVar10 + (longlong)iVar19 * 3 + 1))) {
                        iVar21 = iVar18;
                      }
                      if (*(int *)(puVar10 + (longlong)iVar13 * 3 + 1) <=
                          *(int *)(puVar10 + (longlong)iVar21 * 3 + 1)) break;
                      puVar16 = puVar10 + (longlong)iVar13 * 3;
                      puVar11 = puVar10 + (longlong)iVar21 * 3;
                      uVar3 = puVar16[2];
                      uVar4 = *puVar16;
                      uVar5 = puVar16[1];
                      puVar16[2] = puVar11[2];
                      uVar6 = puVar11[1];
                      *puVar16 = *puVar11;
                      puVar16[1] = uVar6;
                      puVar11[2] = uVar3;
                      *puVar11 = uVar4;
                      puVar11[1] = uVar5;
                      iVar18 = iVar21 * 2;
                      iVar19 = iVar21 * 2 + 1;
                      iVar13 = iVar21;
                    } while ((longlong)iVar19 < (longlong)uVar14);
                    uVar15 = uVar14 - 1;
                    local_58 = puVar10[2];
                    local_68 = *puVar10;
                    uStack_60 = puVar10[1];
                    uVar4 = local_68;
                    uVar5 = uStack_60;
                    puVar10[2] = puVar10[uVar15 * 3 + 2];
                    uVar3 = (puVar10 + uVar15 * 3)[1];
                    *puVar10 = puVar10[uVar15 * 3];
                    puVar10[1] = uVar3;
                    puVar10[uVar15 * 3 + 2] = local_58;
                    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                    puVar16 = puVar10 + uVar15 * 3;
                    *(undefined4 *)puVar16 = (undefined4)local_68;
                    *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
                    *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
                    *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
                    bVar25 = 2 < uVar14;
                    uVar14 = uVar15;
                    local_68 = uVar4;
                    uStack_60 = uVar5;
                  } while (bVar25);
                }
              }
            }
LAB_1435b34d7:
            plVar8 = plVar8 + -3;
          } while (&local_368 <= plVar8);
        }
      }
      FUN_140576b56(plVar1);
      uVar14 = (longlong)(int)local_370;
      do {
        uVar15 = uVar14;
        uVar14 = uVar15 + 1;
        local_370 = (uint)uVar14;
        if ((longlong)local_378 <= (longlong)uVar14) break;
      } while (*(longlong *)(local_380 + uVar14 * 8) == 0);
    } while ((-2 < (longlong)uVar15) && ((int)local_370 < local_378));
  }
  if (local_380 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1435b3145:
  local_58 = puVar10[2];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[2] = puVar17[-1];
  uVar3 = puVar17[-2];
  *puVar10 = *puVar20;
  puVar10[1] = uVar3;
  puVar17[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar20 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x14) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0xc) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -6;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar24 < (longlong)puVar11 - (longlong)puVar22) {
    if (puVar9 < puVar16) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)puVar16;
      *(int *)(plVar8 + 2) = iVar18;
      plVar8 = plVar8 + 3;
    }
    puVar11 = puVar23;
    puVar22 = puVar10;
    if (puVar20 <= puVar10 + 3) goto LAB_1435b34d7;
  }
  else {
    if (puVar10 + 3 < puVar20) {
      *plVar8 = (longlong)puVar10;
      plVar8[1] = (longlong)puVar17;
      *(int *)(plVar8 + 2) = iVar18;
      plVar8 = plVar8 + 3;
    }
    puVar10 = puVar9;
    puVar17 = puVar16;
    puVar11 = puVar16;
    if (puVar16 <= puVar9) goto LAB_1435b34d7;
  }
  iVar13 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar22) >> 3) * -0x55555555;
  uVar12 = iVar13 + 1;
  puVar16 = puVar17;
  puVar24 = puVar22;
  if (iVar18 == 0) goto LAB_1435b3214;
  goto LAB_1435b3058;
}



// FUNCTION 1435b3521 FUN_1435b3521 body=69 status=ok
// SIG undefined FUN_1435b3521(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3521(void)

{
  _DAT_14caf2ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b3563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ca8,1);
  return;
}



// FUNCTION 1435b3569 FUN_1435b3569 body=69 status=ok
// SIG undefined FUN_1435b3569(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3569(void)

{
  _DAT_14caf2ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b35ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ce8,1);
  return;
}



// FUNCTION 1435b35ae FUN_1435b35ae body=69 status=ok
// SIG undefined FUN_1435b35ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b35ae(void)

{
  _DAT_14caf2cf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d00,1);
  return;
}



// FUNCTION 1435b35f3 FUN_1435b35f3 body=69 status=ok
// SIG undefined FUN_1435b35f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b35f3(void)

{
  _DAT_14caf2d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b3635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d10,1);
  return;
}



// FUNCTION 1435b3638 FUN_1435b3638 body=69 status=ok
// SIG undefined FUN_1435b3638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3638(void)

{
  _DAT_14caf2d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b367a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d20,1);
  return;
}



// FUNCTION 1435b367d FUN_1435b367d body=69 status=ok
// SIG undefined FUN_1435b367d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b367d(void)

{
  _DAT_14caf2d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b36bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d30,1);
  return;
}



// FUNCTION 1435b36c2 FUN_1435b36c2 body=69 status=ok
// SIG undefined FUN_1435b36c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b36c2(void)

{
  _DAT_14caf2d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b3704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d48,1);
  return;
}



// FUNCTION 1435b3707 FUN_1435b3707 body=69 status=ok
// SIG undefined FUN_1435b3707(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3707(void)

{
  _DAT_14caf2d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b3749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d60,1);
  return;
}



// FUNCTION 1435b374c FUN_1435b374c body=69 status=ok
// SIG undefined FUN_1435b374c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b374c(void)

{
  _DAT_14caf2d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b378e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d70,1);
  return;
}



// FUNCTION 1435b3791 FUN_1435b3791 body=69 status=ok
// SIG undefined FUN_1435b3791(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3791(void)

{
  _DAT_14caf2d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b37d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2d80,1);
  return;
}



// FUNCTION 1435b37d6 FUN_1435b37d6 body=601 status=ok
// SIG undefined FUN_1435b37d6(void)

void FUN_1435b37d6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  ushort *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  char local_f8;
  undefined **local_f0;
  ulonglong *local_e8;
  byte local_c6;
  longlong *local_98;
  longlong local_78;
  longlong local_60;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = param_4;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf0) != 0)) {
    iVar6 = 0x133;
    if (*(char *)(param_1 + 0x11c) != '\0') {
      iVar6 = 0x1d3;
    }
    iVar2 = iVar6 + 5;
    if ((byte)param_2 < 3) {
      iVar2 = iVar6;
    }
    FUN_1447400e4(&local_f0,(longlong)(iVar2 + *(int *)(param_1 + 0x150) + 0x81),0);
    local_f8 = *(char *)(param_1 + 0x11c);
    local_108 = *(undefined1 *)(param_1 + 0x15c);
    local_100 = *(undefined4 *)(param_1 + 0x164);
    FUN_14607d73a(param_1,&local_f0,(local_f8 != '\0') * '\x03' + '\x02',param_2);
    FUN_1400748c2(&local_f0,param_3);
    puVar1 = (undefined8 *)*local_e8 + 1;
    if ((undefined8 *)local_e8[1] < puVar1) {
      if ((local_c6 & 2) == 0) {
        (*(code *)local_f0[0x2e])(&local_f0,&local_38,8);
      }
      else {
        FUN_146821949(&local_f0,&local_38);
      }
    }
    else {
      local_38 = *(undefined8 *)*local_e8;
      *local_e8 = (ulonglong)puVar1;
    }
    FUN_14011736e(&local_f0,param_5,0x14);
    if (*(char *)(param_1 + 0x11c) == '\x01') {
      FUN_14011736e(&local_f0,param_1 + 0x11d,0x14);
    }
    FUN_145d36730(param_1,param_2,&local_f0);
    *(char *)(param_1 + 0xf8) = (char)param_3;
    *(undefined8 *)(param_1 + 0x100) = local_38;
    *(uint *)(param_1 + 0x78) = *param_5 & 0x3fff;
    *(uint *)(param_1 + 0x7c) = param_5[1] & 0x3fff;
    *(byte *)(param_1 + 0x15d) = (byte)param_2;
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_5 + 8);
    uVar3 = *(undefined4 *)(param_5 + 2);
    uVar4 = *(undefined4 *)(param_5 + 4);
    uVar5 = *(undefined4 *)(param_5 + 6);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)param_5;
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    *(undefined4 *)(param_1 + 0x114) = uVar5;
    local_f0 = &PTR_FUN_149e37560;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_f0 = &PTR__purecall_149e35f70;
    if (local_98 != (longlong *)0x0) {
      if (*local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_98);
    }
    if (local_78 != 0) {
      if (*(longlong *)(local_78 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_78);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b3a30 FUN_1435b3a30 body=440 status=ok
// SIG undefined FUN_1435b3a30(void)

void FUN_1435b3a30(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined **local_e8;
  ulonglong *local_e0;
  byte local_be;
  longlong *local_90;
  longlong local_70;
  longlong local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1447400e4(&local_e8,
                  (longlong)
                  (int)(*(int *)(param_1 + 0x150) + (uint)(2 < *(byte *)(param_2 + 2)) * 5 + 0x1b4),
                  0);
    local_120 = param_2[3];
    local_118 = 0;
    local_128 = param_3;
    FUN_14607d73a(param_1,&local_e8,3,*(undefined1 *)(param_2 + 2));
    local_f0 = 0xbff0000000000000;
    FUN_1400748c2(&local_e8,1);
    puVar1 = (undefined8 *)*local_e0 + 1;
    if ((undefined8 *)local_e0[1] < puVar1) {
      if ((local_be & 2) == 0) {
        (*(code *)local_e8[0x2e])(&local_e8,&local_f0,8);
      }
      else {
        FUN_146821949(&local_e8,&local_f0);
      }
    }
    else {
      local_f0 = *(undefined8 *)*local_e0;
      *local_e0 = (ulonglong)puVar1;
    }
    FUN_14011736e(&local_e8,param_4,0x14);
    local_108 = *param_2;
    uStack_104 = param_2[1];
    uStack_100 = param_2[2];
    uStack_fc = param_2[3];
    FUN_1463ee42c(param_1,&local_108,&local_e8);
    local_e8 = &PTR_FUN_149e37560;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_e8 = &PTR__purecall_149e35f70;
    if (local_90 != (longlong *)0x0) {
      if (*local_90 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_90);
    }
    if (local_70 != 0) {
      if (*(longlong *)(local_70 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_70);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b3bea FUN_1435b3bea body=628 status=ok
// SIG undefined FUN_1435b3bea(void)

void FUN_1435b3bea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  wchar_t *_Str;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  ulonglong local_270;
  wchar_t *local_268;
  int local_260;
  undefined1 *local_258;
  undefined2 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(longlong *)(param_1 + 0x28) = param_2;
  if (**(char **)(param_1 + 8) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x180);
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1435b3c72;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar8 = *(longlong *)(param_2 + 0x178);
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
      if (lVar8 != 0) {
        if (lVar8 == param_1) {
          FUN_1417e4b8a();
        }
        else {
          FUN_147bea052(param_1,lVar8);
        }
      }
    }
LAB_1435b3c72:
    *(uint *)(param_1 + 0x160) = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x8b8) & 3;
  }
  else {
    local_258 = local_238;
    local_240 = '\0';
    local_248 = &local_38;
    local_270 = *(ulonglong *)(param_2 + 0x278);
    local_250 = (undefined2 *)local_258;
    FUN_1400021e4(&local_270,&local_268);
    _Str = local_268;
    if (local_260 == 0) {
      _Str = L"";
    }
    if (_Str == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      sVar7 = wcslen(_Str);
      iVar6 = (int)sVar7;
    }
    lVar8 = (longlong)iVar6;
    if (local_248 <= (ulonglong *)((longlong)local_250 + lVar8 * 2)) {
      FUN_140213274(&local_258,lVar8);
    }
    puVar4 = local_250;
    if (iVar6 != 0) {
      memcpy(local_250,_Str,lVar8 * 2);
      local_250 = (undefined2 *)((longlong)puVar4 + lVar8 * 2);
    }
    if (local_248 <= (ulonglong *)((longlong)local_250 + 0x42)) {
      FUN_140213274(&local_258,0x21);
    }
    puVar4 = local_250;
    memcpy(local_250,L" StatelessConnectHandlerComponent",0x42);
    local_250 = (undefined2 *)((longlong)puVar4 + 0x42);
    local_270 = local_270 & 0xffffffff00000000;
    *(undefined2 *)((longlong)puVar4 + 0x42) = 0;
    local_278 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,local_258,L"CachedClientID",&local_270);
    iVar6 = (int)local_270;
    if ((int)local_270 < 1) {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x164) = iVar6 + 1;
    *local_250 = 0;
    local_278 = &DAT_14c872ce8;
    FUN_141301e58(DAT_14c872ce0,local_258,L"CachedClientID");
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872ce8);
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 7;
    if (local_268 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b3e76 FUN_1435b3e76 body=1679 status=ok
// SIG undefined FUN_1435b3e76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b3e76(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  byte bVar4;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined7 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  longlong local_2d8;
  undefined1 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined2 local_2c0;
  byte local_2ba;
  byte local_2b9;
  LARGE_INTEGER local_2b8;
  LARGE_INTEGER local_2b0;
  undefined1 **local_2a8;
  char local_2a0;
  undefined1 local_298 [256];
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  char local_180;
  undefined1 local_178 [256];
  undefined1 local_78 [8];
  undefined2 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (0 < *(int *)(param_1 + 0x150)) {
    local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x178))(param_2);
  }
  local_2b9 = 0;
  local_2ba = 0;
  bVar16 = true;
  bVar15 = true;
  if (2 < *(byte *)(param_1 + 0x15d)) {
    (**(code **)(*param_2 + 0x178))(param_2,&local_2b9,2);
    (**(code **)(*param_2 + 0x178))(param_2,&local_2ba,3);
    bVar16 = true;
    bVar15 = true;
    if (DAT_14c761658 != 0) {
      if (*(uint *)(param_1 + 0x160) == (uint)local_2b9) {
        bVar15 = (*(byte *)((longlong)param_2 + 0x29) & 2) == 0;
      }
      else {
        bVar15 = false;
      }
    }
    if (DAT_14c76165c != 0) {
      if (*(uint *)(param_1 + 0x164) == (uint)local_2ba) {
        bVar16 = (*(byte *)((longlong)param_2 + 0x29) & 2) == 0;
      }
      else {
        bVar16 = false;
      }
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar5 = param_2[0x15];
    if (param_2[0x14] <= (longlong)uVar5) {
      FUN_1405d09b8(param_2,1);
      goto LAB_1435b4024;
    }
    bVar4 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar5 >> 3));
    param_2[0x15] = uVar5 + 1;
    if ((bVar4 >> ((uint)uVar5 & 7) & 1) == 0) goto LAB_1435b4024;
    puVar13 = &local_70;
    local_70 = 0x404;
    local_6c = 0;
    local_64 = 0;
    local_60 = 0.0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    cVar7 = FUN_147bea0f6(param_1,param_2);
    if (cVar7 == '\0') {
LAB_1435b4298:
      FUN_14572541c(param_2);
      goto LAB_1435b41c0;
    }
    uVar9 = 0;
    if (local_60 <= 0.0 || local_6c._6_1_ != '\x01') {
      uVar14 = 0;
      bVar17 = false;
    }
    else {
      bVar17 = *(char *)(param_1 + 0x10) != '\x03';
      uVar14 = (undefined7)((ulonglong)puVar13 >> 8);
    }
    pcVar11 = *(char **)(param_1 + 8);
    if ((!(bool)(bVar16 ^ 1U | *pcVar11 != '\0')) &&
       (local_6c._6_1_ == '\x06' || (bool)(bVar17 | bVar15))) {
      if (*(byte *)(param_1 + 0x10) < 2) {
        if ((char)local_64 == '\0') {
          if (local_60 <= 0.0 || local_6c._6_1_ != '\x01') {
            if ((local_6c._6_1_ != '\x03') || (0.0 <= local_60)) {
              if (local_6c._6_1_ == '\x06') {
                FUN_1415d1120();
                local_198 = local_178;
                uVar10 = 0;
                local_180 = '\0';
                local_188 = local_78;
                local_2b8.QuadPart = (LONGLONG)local_298;
                local_2a0 = '\0';
                local_2a8 = &local_198;
                if (*(longlong *)(param_1 + 0x28) != 0) {
                  uVar10 = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x849);
                }
                local_2b0.QuadPart = local_2b8.QuadPart;
                puStack_190 = local_198;
                FUN_146816066(uVar10,&local_198);
                FUN_146816066(local_6c._4_2_,&local_2b8);
                pcVar6 = *(code **)(param_1 + 0xa0);
                if (pcVar6 != (code *)0x0) {
                  local_2c8 = 1;
                  local_2c4 = (undefined4)local_6c;
                  local_2c0 = local_6c._4_2_;
                  plVar12 = (longlong *)(param_1 + 0xc0);
                  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
                    plVar12 = *(longlong **)(param_1 + 0xb0);
                  }
                  uVar9 = (**(code **)(*plVar12 + 8))(plVar12);
                  (*pcVar6)(uVar9,&local_2c8);
                }
                if (local_2a0 == '\x01') {
                  FUN_1400020a8(local_2b8.QuadPart);
                }
                if (local_180 == '\x01') {
                  FUN_1400020a8(local_198);
                }
              }
            }
            else {
              if (*(char *)(param_1 + 0x11c) == '\0') {
                if ((*(longlong *)(param_1 + 0x28) != 0) &&
                   (plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0xf0),
                   plVar12 != (longlong *)0x0)) {
                  (**(code **)(*plVar12 + 0x360))
                            (plVar12,(ushort)uStack_58 & 0x3fff,uStack_58._2_2_ & 0x3fff);
                  pcVar11 = *(char **)(param_1 + 8);
                }
                *(undefined4 *)(param_1 + 0x12d) = (undefined4)uStack_48;
                *(undefined8 *)(param_1 + 0x11d) = uStack_58;
                *(undefined8 *)(param_1 + 0x125) = local_50;
              }
              *(undefined1 *)(param_1 + 0x10) = 3;
              *(undefined1 *)(param_1 + 0x1b) = 1;
              FUN_145dcbe7a(pcVar11,param_1);
              *(undefined1 *)(param_1 + 0x11c) = 0;
              *(undefined1 *)(param_1 + 0x15c) = 0;
            }
          }
          else {
            *(uint *)(param_1 + 0x160) = (uint)local_2b9;
            if (*(longlong *)(param_1 + 0x28) != 0) {
              uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x300);
            }
            *(undefined8 *)(param_1 + 0xe8) = uVar9;
            local_2e8 = &uStack_58;
            FUN_1435b37d6(param_1,local_70._1_1_,CONCAT71(uVar14,local_64._1_1_));
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        goto LAB_1435b41c0;
      }
      if ((char)local_64 == '\0') goto LAB_1435b41c0;
      local_198 = (undefined1 *)0x0;
      puStack_190 = (undefined1 *)0x0;
      local_188 = (undefined1 *)((ulonglong)local_188 & 0xffffffff00000000);
      if (*(int *)(param_1 + 0x12d) != 0 ||
          *(undefined1 (*) [16])(param_1 + 0x11d) != (undefined1  [16])0x0) {
        QueryPerformanceCounter(&local_2b8);
        dVar18 = (double)local_2b8.QuadPart * DAT_14c83f420 + 16777216.0;
        if (*(char *)(param_1 + 0x11c) == '\x01') {
          *(double *)(param_1 + 0xf0) = dVar18;
          lVar8 = *(longlong *)(param_1 + 0x28);
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x28);
          dVar19 = 0.0;
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xf0) != 0)) {
            dVar19 = *(double *)(*(longlong *)(lVar8 + 0xf0) + 0x1e0);
          }
          dVar3 = *(double *)(param_1 + 0xf0);
          if (((dVar3 != 0.0) || (bVar15 = false, NAN(dVar3))) &&
             (bVar15 = false, dVar18 - dVar3 <= 1.1)) {
            bVar15 = dVar18 - dVar19 <= 1.0;
          }
          *(double *)(param_1 + 0xf0) = dVar18;
          if ((10.0 < dVar18 - *(double *)(param_1 + 0xe0)) && (!bVar15)) {
            *(undefined1 *)(param_1 + 0x11c) = 1;
            *(undefined1 *)(param_1 + 0x10) = 0;
            FUN_141648090(param_1,*(undefined1 *)(param_1 + 0x15d));
            goto LAB_1435b41c0;
          }
        }
        if (*(double *)(lVar8 + 0x300) - _DAT_14caf2f18 <= 30.0) {
          if (DAT_14caf2f20 < 3) {
            DAT_14caf2f20 = DAT_14caf2f20 + 1;
          }
        }
        else {
          DAT_14caf2f20 = 1;
          _DAT_14caf2f18 = *(double *)(lVar8 + 0x300);
        }
        goto LAB_1435b41c0;
      }
      goto LAB_1435b4298;
    }
    if ((bool)(bVar15 & bVar16 & *pcVar11 == '\x01')) {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_2d8 = param_1 + 0x68;
        local_2cc = *(undefined4 *)(param_1 + 0x164);
        local_2d0 = *(undefined1 *)(param_1 + 0x15d);
        FUN_1435b3a30(param_1,&local_2d8,0,param_1 + 0x11d);
      }
      goto LAB_1435b41c0;
    }
    if ((bool)(bVar16 & bVar15)) goto LAB_1435b41c0;
  }
  else {
LAB_1435b4024:
    if ((bool)(bVar16 & bVar15)) {
      dVar18 = *(double *)(param_1 + 0x60);
      dVar19 = 0.0;
      if ((((dVar18 != 0.0) || (NAN(dVar18))) && (*(longlong *)(param_1 + 0x68) != 0)) &&
         (**(char **)(param_1 + 8) == '\x01')) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          dVar19 = *(double *)(*(longlong *)(param_1 + 0x28) + 0x300);
        }
        if (10.0 <= dVar19 - dVar18) {
          *(undefined8 *)(param_1 + 0x68) = 0;
          plVar12 = *(longlong **)(param_1 + 0x70);
          if (plVar12 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x70) = 0;
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
      }
      goto LAB_1435b41c0;
    }
  }
  param_2[0x15] = param_2[0x14];
LAB_1435b41c0:
  if ((local_30 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b4506 FUN_1435b4506 body=2247 status=ok
// SIG undefined FUN_1435b4506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b4506(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  longlong *plVar17;
  ushort uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  undefined1 auStack_1e8 [32];
  int *local_1c8;
  uint local_1c0;
  undefined1 local_1b8;
  longlong **local_1a8;
  byte local_1a0;
  uint local_19c;
  longlong **local_198;
  byte local_190;
  uint local_18c;
  byte local_182;
  byte local_181;
  longlong *local_180;
  longlong *local_178;
  longlong **local_170;
  byte local_168;
  uint local_164;
  undefined8 local_160;
  byte local_158;
  byte bStack_157;
  undefined2 uStack_156;
  undefined4 uStack_154;
  byte local_150;
  undefined1 uStack_14f;
  char local_14e;
  undefined1 local_14d;
  undefined4 local_14c;
  double local_148;
  ushort uStack_140;
  ushort uStack_13e;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong *local_110;
  int local_f8;
  undefined4 uStack_f4;
  ulonglong *puStack_f0;
  int local_e8;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  longlong local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar5 = (longlong *)*param_2;
  local_180 = *(longlong **)param_2[1];
  local_178 = (longlong *)((undefined8 *)param_2[1])[1];
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
  }
  if (0 < *(int *)(param_1 + 0x150)) {
    local_f8 = 0;
    (**(code **)(*plVar5 + 0x178))(plVar5);
    if ((DAT_14caf2d88 == 0) || (local_f8 == *(int *)(param_1 + 0x158))) goto LAB_1435b4590;
LAB_1435b4a8c:
    FUN_14572541c(plVar5);
    goto LAB_1435b46aa;
  }
LAB_1435b4590:
  local_181 = 0;
  local_182 = 0;
  bVar20 = true;
  if (2 < (int)_DAT_14c761654) {
    (**(code **)(*plVar5 + 0x178))(plVar5,&local_181,2);
    (**(code **)(*plVar5 + 0x178))(plVar5,&local_182,3);
    if (DAT_14c761658 != 0) {
      if (*(uint *)(param_1 + 0x160) == (uint)local_181) {
        bVar20 = (*(byte *)((longlong)plVar5 + 0x29) & 2) == 0;
      }
      else {
        bVar20 = false;
      }
    }
  }
  if ((*(byte *)((longlong)plVar5 + 0x29) & 2) == 0) {
    uVar6 = plVar5[0x15];
    if (plVar5[0x14] <= (longlong)uVar6) {
      FUN_1405d09b8(plVar5,1);
      goto LAB_1435b4645;
    }
    bVar14 = *(byte *)(plVar5[0x12] + (longlong)(int)(uVar6 >> 3));
    plVar5[0x15] = uVar6 + 1;
    bVar19 = (bVar14 >> ((uint)uVar6 & 7) & 1) != 0;
  }
  else {
LAB_1435b4645:
    bVar19 = false;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar17 = *(longlong **)(param_1 + 0x70);
  if (plVar17 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  bVar14 = local_182;
  iVar4 = _DAT_14c761650;
  if (!bVar19) {
    if (((bVar20 != true || (*(byte *)((longlong)plVar5 + 0x29) & 2) != 0) ||
        (*(char *)(param_2[2] + 1) != '\0')) || (*(longlong *)(param_1 + 0x28) == 0))
    goto LAB_1435b46aa;
    bVar15 = (byte)_DAT_14c761650;
    FUN_1447400e4(&local_f8,
                  (longlong)(int)(*(int *)(param_1 + 0x150) + (uint)(2 < bVar15) * 5 + 0xd3),0);
    local_1c8 = (int *)CONCAT71(local_1c8._1_7_,*(undefined1 *)(param_1 + 0x15c));
    local_1b8 = 1;
    local_1c0 = (uint)bVar14;
    FUN_14607d73a(param_1,&local_f8,4,iVar4);
    local_158 = (byte)&local_180;
    bStack_157 = (byte)((ulonglong)&local_180 >> 8);
    uStack_156 = (undefined2)((ulonglong)&local_180 >> 0x10);
    uStack_154 = (undefined4)((ulonglong)&local_180 >> 0x20);
    local_150 = bVar15;
    local_14c = (uint)bVar14;
    FUN_1463ee42c(param_1,&local_158,&local_f8);
LAB_1435b480e:
    uStack_f4 = 1;
    local_f8 = 0x49e37560;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_f8 = 0x49e35f70;
    uStack_f4 = 1;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != 0) {
      if (*(longlong *)(local_80 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
    goto LAB_1435b46aa;
  }
  local_158 = 4;
  bStack_157 = 4;
  uStack_154 = 0;
  local_150 = 0;
  uStack_14f = 0;
  local_14e = '\0';
  local_14d = 0;
  local_14c = local_14c & 0xffff0000;
  local_148 = 0.0;
  uStack_140 = 0;
  uStack_13e = 0;
  uStack_13c = 0;
  local_138 = 0;
  iStack_130 = 0;
  uStack_12c = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  cVar11 = FUN_147bea0f6(param_1,plVar5);
  if (cVar11 == '\0') {
    FUN_14572541c(plVar5);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    if (lVar7 != 0) {
      piVar2 = (int *)(lVar7 + 0xc);
      *piVar2 = *piVar2 + 1;
    }
    goto LAB_1435b46aa;
  }
  if (**(char **)(param_1 + 8) != '\x01') goto LAB_1435b46aa;
  bVar14 = (byte)_DAT_14c761654;
  uVar12 = _DAT_14c761654;
  if (bVar14 < local_158 || (int)(uint)local_158 < _DAT_14c761650) {
    bVar19 = false;
  }
  else {
    bVar19 = false;
    if ((local_158 <= bStack_157) &&
       (bVar19 = false, 2 < bVar14 || bStack_157 <= (byte)((2 < bVar14) * '\x02' + 2U))) {
      uVar12 = _DAT_14c761654 & 0xff;
      if (bStack_157 < bVar14) {
        uVar12 = (uint)bStack_157;
      }
      bVar19 = true;
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x849);
  }
  bVar14 = 1;
  bVar21 = true;
  if (1 < bStack_157) {
    bVar14 = 1;
    if (DAT_14caf2d50 != 0) {
      uVar13 = FUN_1415d1120(1);
      bVar14 = FUN_146815e02(uVar13,uStack_154);
    }
    bVar21 = uVar18 == CONCAT11(uStack_14f,local_150);
  }
  uVar10 = local_14d;
  bVar15 = local_182;
  if (bVar19) {
    bVar14 = bVar21 & (bVar14 | DAT_14caf2d50 == 0);
  }
  else {
    bVar14 = 0;
  }
  bVar21 = local_14e == '\0';
  dVar22 = 0.0;
  bVar19 = local_148 == 0.0;
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 != 0) {
    dVar22 = *(double *)(lVar7 + 0x300);
  }
  bVar16 = (byte)uVar12;
  if ((bVar14 & (bVar20 | (bVar19 && bVar21))) == 0) {
    if (bVar20 != false || bVar14 != 1) {
      if ((bVar14 == 0) && ((bVar19 && bVar21) && 3 < bStack_157)) {
        if (300.0 <= dVar22 - *(double *)(param_1 + 0x88)) {
          *(double *)(param_1 + 0x88) = dVar22;
          *(undefined4 *)(param_1 + 0x90) = 0;
        }
        else {
          uVar12 = *(int *)(param_1 + 0x90) + 1;
          *(uint *)(param_1 + 0x90) = uVar12;
          if (0x1ff < uVar12) goto LAB_1435b46aa;
        }
        local_198 = &local_180;
        local_18c = (uint)local_182;
        local_190 = bVar16;
        FUN_147be9f8c(param_1);
      }
      goto LAB_1435b46aa;
    }
    goto LAB_1435b4a8c;
  }
  if (bVar19 && bVar21) {
    if (lVar7 == 0) goto LAB_1435b46aa;
    FUN_1447400e4(&local_f8,
                  (longlong)(int)(*(int *)(param_1 + 0x150) + (uint)(2 < bVar16) * 5 + 0x1b4),0);
    local_1c8 = (int *)CONCAT71(local_1c8._1_7_,uVar10);
    local_1b8 = 0;
    local_1c0 = (uint)bVar15;
    FUN_14607d73a(param_1,&local_f8,1,uVar12);
    local_160 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x300);
    local_1c8 = (int *)&local_118;
    FUN_146202dc4(param_1,&local_180,*(undefined1 *)(param_1 + 0x50));
    FUN_1400748c2(&local_f8,*(undefined1 *)(param_1 + 0x50));
    puVar3 = (undefined8 *)*puStack_f0 + 1;
    if ((undefined8 *)puStack_f0[1] < puVar3) {
      if ((local_ce & 2) == 0) {
        (**(code **)(CONCAT44(uStack_f4,local_f8) + 0x170))(&local_f8,&local_160,8);
      }
      else {
        FUN_146821949(&local_f8,&local_160);
      }
    }
    else {
      local_160 = *(undefined8 *)*puStack_f0;
      *puStack_f0 = (ulonglong)puVar3;
    }
    FUN_14011736e(&local_f8,&local_118,0x14);
    local_170 = &local_180;
    local_168 = bVar16;
    local_164 = (uint)bVar15;
    FUN_1463ee42c(param_1,&local_170,&local_f8);
    goto LAB_1435b480e;
  }
  if ((dVar22 - local_148 < 0.0) || (40.0 <= dVar22 - local_148)) goto LAB_1435b46aa;
  dVar22 = local_148 - *(double *)(param_1 + 0x58);
  bVar20 = dVar22 <= 0.0;
  if (local_14c._1_1_ == *(char *)(param_1 + 0x50)) {
    bVar20 = 0.0 <= dVar22;
  }
  if (!bVar20) goto LAB_1435b46aa;
  local_1c8 = &local_f8;
  FUN_146202dc4(param_1,&local_180);
  auVar8._2_2_ = uStack_13e;
  auVar8._0_2_ = uStack_140;
  auVar8._4_4_ = uStack_13c;
  auVar8._8_8_ = local_138;
  auVar9._4_4_ = uStack_f4;
  auVar9._0_4_ = local_f8;
  auVar9._8_8_ = puStack_f0;
  if (auVar8 != auVar9 || local_e8 != iStack_130) goto LAB_1435b46aa;
  if ((char)local_14c == '\x01') {
    *(undefined4 *)(param_1 + 0x12d) = uStack_11c;
    *(ulonglong *)(param_1 + 0x11d) = CONCAT44(local_128,uStack_12c);
    *(ulonglong *)(param_1 + 0x125) = CONCAT44(uStack_120,uStack_124);
  }
  else {
    *(uint *)(param_1 + 0x78) = uStack_140 & 0x3fff;
    *(uint *)(param_1 + 0x7c) = uStack_13e & 0x3fff;
    *(ulonglong *)(param_1 + 0x11d) = CONCAT44(uStack_13c,CONCAT22(uStack_13e,uStack_140));
    *(undefined8 *)(param_1 + 0x125) = local_138;
    *(int *)(param_1 + 0x12d) = iStack_130;
  }
  *(char *)(param_1 + 0x11c) = (char)local_14c;
  (**(code **)(*local_180 + 0xa0))(local_180,&local_118);
  plVar5 = local_110;
  if (local_110 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = local_118;
    plVar17 = *(longlong **)(param_1 + 0x70);
    if (plVar17 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
LAB_1435b4d05:
      LOCK();
      plVar5 = plVar17 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x0001435b4d34:
        if (iVar4 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x68) = local_118;
    plVar17 = *(longlong **)(param_1 + 0x70);
    if (local_110 == plVar17) {
      LOCK();
      plVar17 = local_110 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar17 = plVar5;
        goto joined_r0x0001435b4d34;
      }
    }
    else {
      *(longlong **)(param_1 + 0x70) = local_110;
      if (plVar17 != (longlong *)0x0) goto LAB_1435b4d05;
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_110 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_110 + 0x10))(local_110);
      }
    }
  }
  *(byte *)(param_1 + 0x15d) = bVar16;
  local_19c = (uint)local_182;
  *(uint *)(param_1 + 0x164) = local_19c;
  if ((bVar16 < *(byte *)(param_1 + 0x80)) && (_DAT_14c761650 <= (int)(uVar12 & 0xff))) {
    *(byte *)(param_1 + 0x80) = bVar16;
  }
  local_1a8 = &local_180;
  local_1a0 = bVar16;
  FUN_1435b3a30(param_1,&local_1a8,local_14d,param_1 + 0x11d);
LAB_1435b46aa:
  plVar5 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_178 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b4dd8 FUN_1435b4dd8 body=909 status=ok
// SIG undefined FUN_1435b4dd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b4dd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_58 [32];
  longlong local_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (**(char **)(param_1 + 8) == '\0') {
    if ((*(char *)(param_1 + 0x10) != '\x03') &&
       (((*(double *)(param_1 + 0xe0) != 0.0 || (NAN(*(double *)(param_1 + 0xe0)))) &&
        (QueryPerformanceCounter(&local_30),
        (double)_DAT_14c76164c <
        ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0xe0))))) {
      if ((*(longlong *)(param_1 + 0x28) == 0) ||
         (*(double *)(*(longlong *)(param_1 + 0x28) + 0x300) - *(double *)(param_1 + 0xe8) <= 15.0))
      {
        if (*(char *)(param_1 + 0x10) == '\x01') {
          if ((*(double *)(param_1 + 0x100) != 0.0) || (NAN(*(double *)(param_1 + 0x100)))) {
            local_38 = param_1 + 0x108;
            FUN_1435b37d6(param_1,*(undefined1 *)(param_1 + 0x15d),*(undefined1 *)(param_1 + 0xf8));
          }
          goto LAB_1435b50e5;
        }
        if (*(char *)(param_1 + 0x10) != '\0') goto LAB_1435b50e5;
      }
      else {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      lVar3 = DAT_14caf2d38;
      iVar12 = _DAT_14c761654;
      iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
        uVar9 = 0;
      }
      else if (iVar10 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar9 = 1;
      }
      if ((*(int *)(lVar3 + uVar9 * 4) != 0) &&
         (uVar5 = rand(), fVar14 = (float)(uVar5 & 0x7fff) / 32767.0, 0 < (int)(fVar14 + fVar14))) {
        iVar10 = _DAT_14c761654 - (uint)*(byte *)(param_1 + 0x15c);
        if (iVar10 <= _DAT_14c761650) {
          iVar10 = _DAT_14c761650;
        }
        if (_DAT_14c761654 != iVar10) {
          iVar12 = _DAT_14c761654 - iVar10;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else {
            uVar5 = rand();
            iVar6 = (int)((float)(iVar12 + 1) * ((float)(uVar5 & 0x7fff) / 32767.0));
            if (iVar6 < iVar12) {
              iVar12 = iVar6;
            }
          }
          iVar12 = iVar12 + iVar10;
        }
      }
      FUN_141648090(param_1,iVar12);
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x180);
      if (plVar4 == (longlong *)0x0) {
        lVar11 = 0;
      }
      else {
        iVar10 = (int)plVar4[1];
        lVar11 = 0;
        do {
          if (iVar10 == 0) goto LAB_1435b4efc;
          LOCK();
          iVar12 = (int)plVar4[1];
          bVar13 = iVar10 == iVar12;
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar10 + 1;
            iVar12 = iVar10;
          }
          iVar10 = iVar12;
          UNLOCK();
        } while (!bVar13);
        lVar11 = *(longlong *)(lVar3 + 0x178);
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
LAB_1435b4efc:
      if (lVar11 == param_1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caf2d90) &&
           (FUN_144b3d300(&DAT_14caf2d90), DAT_14caf2d90 == -1)) {
          uVar5 = rand();
          DAT_14caf2d8c = ((float)(uVar5 & 0x7fff) / 32767.0) * 5.0 + 0.0;
          _Init_thread_footer(&DAT_14caf2d90);
        }
        if ((double)(DAT_14caf2d8c + 15.0) <
            *(double *)(*(longlong *)(param_1 + 0x28) + 0x300) - *(double *)(param_1 + 0x58)) {
          uVar5 = rand();
          DAT_14caf2d8c = ((float)(uVar5 & 0x7fff) / 32767.0) * 5.0 + 0.0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
LAB_1435b50e5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435b5177 FUN_1435b5177 body=69 status=ok
// SIG undefined FUN_1435b5177(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b5177(void)

{
  _DAT_14caf2e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b51b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2e60,1);
  return;
}



// FUNCTION 1435b51bc FUN_1435b51bc body=69 status=ok
// SIG undefined FUN_1435b51bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b51bc(void)

{
  _DAT_14caf2e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b51fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2e70,1);
  return;
}



// FUNCTION 1435b5201 FUN_1435b5201 body=69 status=ok
// SIG undefined FUN_1435b5201(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b5201(void)

{
  _DAT_14caf2e78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b5243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2e80,1);
  return;
}



// FUNCTION 1435b5246 FUN_1435b5246 body=69 status=ok
// SIG undefined FUN_1435b5246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b5246(void)

{
  _DAT_14caf2e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b5288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2e90,1);
  return;
}



// FUNCTION 1435b528b FUN_1435b528b body=69 status=ok
// SIG undefined FUN_1435b528b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b528b(void)

{
  _DAT_14caf2e98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b52cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ea0,1);
  return;
}



// FUNCTION 1435b52d0 FUN_1435b52d0 body=69 status=ok
// SIG undefined FUN_1435b52d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b52d0(void)

{
  _DAT_14caf2ea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b5312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2eb0,1);
  return;
}



// FUNCTION 1435b5315 FUN_1435b5315 body=69 status=ok
// SIG undefined FUN_1435b5315(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b5315(void)

{
  _DAT_14caf2eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b5357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ec0,1);
  return;
}



// FUNCTION 1435b535a FUN_1435b535a body=69 status=ok
// SIG undefined FUN_1435b535a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b535a(void)

{
  _DAT_14caf2ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ed0,1);
  return;
}



// FUNCTION 1435b539f FUN_1435b539f body=69 status=ok
// SIG undefined FUN_1435b539f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b539f(void)

{
  _DAT_14caf2ed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b53e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ee0,1);
  return;
}



// FUNCTION 1435b53e4 FUN_1435b53e4 body=69 status=ok
// SIG undefined FUN_1435b53e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b53e4(void)

{
  _DAT_14caf2ee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b5426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2ef0,1);
  return;
}



// FUNCTION 1435b5429 FUN_1435b5429 body=59 status=ok
// SIG undefined FUN_1435b5429(void)

void FUN_1435b5429(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14caf2f08;
  if (DAT_14caf2f08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14caf2f08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435b5459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435b5468 FUN_1435b5468 body=48 status=ok
// SIG undefined FUN_1435b5468(void)

longlong FUN_1435b5468(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14034d9a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435b54f6 FUN_1435b54f6 body=57 status=ok
// SIG undefined FUN_1435b54f6(void)

undefined8 * FUN_1435b54f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9fcbd0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435b5544 FUN_1435b5544 body=173 status=ok
// SIG undefined FUN_1435b5544(void)

void FUN_1435b5544(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a1c8830;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9fcbd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1435b55f2 FUN_1435b55f2 body=173 status=ok
// SIG undefined FUN_1435b55f2(void)

void FUN_1435b55f2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a1c8830;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9fcbd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1435b56a0 FUN_1435b56a0 body=212 status=ok
// SIG undefined FUN_1435b56a0(void)

void FUN_1435b56a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a1c8830;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a9fcbd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var2->ProcessLocksList).Blink + 4) = uVar3;
  p_Var2->EntryCount = DVar4;
  p_Var2->ContentionCount = DVar5;
  p_Var2->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435b5762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435b5774 FUN_1435b5774 body=223 status=ok
// SIG undefined FUN_1435b5774(void)

void FUN_1435b5774(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1435b57cd:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         (((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x1c) ||
           ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_1435b57cd;
      uVar3 = *puVar2;
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1435b582c;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) &&
        ((*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x24) &&
         ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      uVar4 = *puVar2;
      goto LAB_1435b582c;
    }
  }
  uVar4 = 0;
LAB_1435b582c:
  FUN_147d87416(DAT_14cb0d2b0 + 0xec8,uVar3,uVar4,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30);
  return;
}



// FUNCTION 1435b5854 FUN_1435b5854 body=224 status=ok
// SIG undefined FUN_1435b5854(void)

undefined8 FUN_1435b5854(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1435b58ad:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         (((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x1c) ||
           ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_1435b58ad;
      uVar3 = *puVar2;
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1435b590c;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) &&
        ((*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x24) &&
         ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      uVar4 = *puVar2;
      goto LAB_1435b590c;
    }
  }
  uVar4 = 0;
LAB_1435b590c:
  FUN_147d87416(DAT_14cb0d2b0 + 0xec8,uVar3,uVar4,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30);
  return 1;
}



// FUNCTION 1435b5934 FUN_1435b5934 body=29 status=ok
// SIG undefined FUN_1435b5934(void)

undefined8 FUN_1435b5934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435b5ad0 FUN_1435b5ad0 body=93 status=ok
// SIG undefined FUN_1435b5ad0(void)

void FUN_1435b5ad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1435b5b2e FUN_1435b5b2e body=93 status=ok
// SIG undefined FUN_1435b5b2e(void)

void FUN_1435b5b2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9fcc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1435b5b8c FUN_1435b5b8c body=126 status=ok
// SIG undefined FUN_1435b5b8c(void)

void FUN_1435b5b8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9fcc60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435b5bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435b5c20 FUN_1435b5c20 body=299 status=ok
// SIG undefined FUN_1435b5c20(void)

undefined8 FUN_1435b5c20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1435b5d45;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1435b5d45;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1435b5d45:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1435b5cd6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1b8);
      uVar6 = 1;
      if (lVar5 != 0) {
        FUN_1435b285c(lVar5,param_2,param_3);
      }
      goto LAB_1435b5cd6;
    }
  }
  uVar6 = 0;
LAB_1435b5cd6:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b5d4c FUN_1435b5d4c body=566 status=ok
// SIG undefined FUN_1435b5d4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1435b5d4c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14caf2ef8 == '\x01') {
    FUN_147bf4ec4();
    FUN_147af1384(param_1 + 0x18);
    FUN_147af1384(param_1 + 0x48);
    fVar7 = DAT_14c761670;
    if ((DAT_14c761670 < 0.0) && (fVar7 = 0.0, 0.0 < DAT_14c761660)) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      auVar8._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
      auVar8._0_8_ = uVar1;
      auVar8._12_4_ = 0x45300000;
      fVar7 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                      (auVar8._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
    }
    *(float *)(param_1 + 0xa8) = fVar7;
    fVar7 = DAT_14c761674;
    if ((DAT_14c761674 < 0.0) && (fVar7 = 0.0, 0.0 < DAT_14c761664)) {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      auVar5._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
      auVar5._0_8_ = uVar1;
      auVar5._12_4_ = 0x45300000;
      fVar7 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                      (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
    }
    *(float *)(param_1 + 0xac) = fVar7;
    QueryPerformanceCounter(&local_38);
    lVar2 = local_38.QuadPart - *(longlong *)(param_1 + 0xc0);
    auVar6._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
    auVar6._0_8_ = lVar2;
    auVar6._12_4_ = 0x45300000;
    dVar4 = (((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
            (auVar6._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
    ((LARGE_INTEGER *)(param_1 + 0xc0))->QuadPart = (LONGLONG)local_38;
    fVar10 = DAT_14c761680;
    fVar12 = (float)(-(uint)(0.0 < DAT_14c761660) &
                    (uint)(*(float *)(param_1 + 0xa8) / DAT_14c761660));
    fVar11 = (float)(-(uint)(0.0 < DAT_14c761664) &
                    (uint)(*(float *)(param_1 + 0xac) / DAT_14c761664));
    fVar7 = (float)(-(uint)(0.0 < DAT_14c761668) &
                   (uint)(*(float *)(param_1 + 0xb0) / DAT_14c761668));
    fVar3 = (float)dVar4 * _DAT_14c76167c;
    fVar9 = *(float *)(param_1 + 0xb4) - fVar3;
    if (fVar12 <= fVar9) {
      fVar12 = fVar9;
    }
    DAT_14caf2f10 = DAT_14c761680;
    if (fVar12 <= DAT_14c761680) {
      DAT_14caf2f10 = fVar12;
    }
    *(float *)(param_1 + 0xb4) = DAT_14caf2f10;
    fVar12 = *(float *)(param_1 + 0xb8) - fVar3;
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar12 = fVar10;
    if (fVar11 <= fVar10) {
      fVar12 = fVar11;
    }
    *(float *)(param_1 + 0xb8) = fVar12;
    fVar3 = *(float *)(param_1 + 0xbc) - fVar3;
    if (fVar7 <= fVar3) {
      fVar7 = fVar3;
    }
    if (fVar7 <= fVar10) {
      fVar10 = fVar7;
    }
    *(float *)(param_1 + 0xbc) = fVar10;
    if (DAT_14caf2f10 <= fVar12) {
      DAT_14caf2f10 = fVar12;
    }
    if (DAT_14caf2f10 <= fVar10) {
      DAT_14caf2f10 = fVar10;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1435b5f83 FUN_1435b5f83 body=8416 status=ok
// SIG undefined FUN_1435b5f83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b5f83(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a9efb40;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9efb90,1,&PTR_FUN_14a9efb60);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f0c40,5,0);
  local_70 = "AddedConnections";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f50 = (ulonglong)uVar3;
  local_70 = "ClosedConnectionsDueToReliableBufferOverflow";
  local_68 = 0x2c;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f58 = (ulonglong)uVar3;
  local_70 = "InPackets";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f60 = (ulonglong)uVar3;
  local_70 = "OutPackets";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f68 = (ulonglong)uVar3;
  local_70 = "InPacketsPerFrame";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f70 = (ulonglong)uVar3;
  local_70 = "OutPacketsPerFrame";
  local_68 = 0x12;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f78 = (ulonglong)uVar3;
  local_70 = "InLostPacketsFoundPerFrame";
  local_68 = 0x1a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f80 = (ulonglong)uVar3;
  local_70 = "OutLostPacketsFoundPerFrame";
  local_68 = 0x1b;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f88 = (ulonglong)uVar3;
  local_70 = "InPacketsClientPerSecondAvg";
  local_68 = 0x1b;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f90 = (ulonglong)uVar3;
  local_70 = "InPacketsClientPerSecondMax";
  local_68 = 0x1b;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f98 = (ulonglong)uVar3;
  local_70 = "InPacketsClientPerSecondMin";
  local_68 = 0x1b;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fa0 = (ulonglong)uVar3;
  local_70 = "OutPacketsClientPerSecondAvg";
  local_68 = 0x1c;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fa8 = (ulonglong)uVar3;
  local_70 = "OutPacketsClientPerSecondMax";
  local_68 = 0x1c;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fb0 = (ulonglong)uVar3;
  local_70 = "OutPacketsClientPerSecondMin";
  local_68 = 0x1c;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fb8 = (ulonglong)uVar3;
  local_70 = "InPacketsClientAvg";
  local_68 = 0x12;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fc0 = (ulonglong)uVar3;
  local_70 = "InPacketsClientMax";
  local_68 = 0x12;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fc8 = (ulonglong)uVar3;
  local_70 = "OutPacketsClientAvg";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fd0 = (ulonglong)uVar3;
  local_70 = "OutPacketsClientMax";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fd8 = (ulonglong)uVar3;
  local_70 = "InRate";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fe0 = (ulonglong)uVar3;
  local_70 = "OutRate";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2fe8 = (ulonglong)uVar3;
  local_70 = "InRateClientAvg";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2ff0 = (ulonglong)uVar3;
  local_70 = "InRateClientMax";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2ff8 = (ulonglong)uVar3;
  local_70 = "InRateClientMin";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3000 = (ulonglong)uVar3;
  local_70 = "OutRateClientAvg";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3008 = (ulonglong)uVar3;
  local_70 = "OutRateClientMax";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3010 = (ulonglong)uVar3;
  local_70 = "OutRateClientMin";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3018 = (ulonglong)uVar3;
  local_70 = "InPacketsLost";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3020 = (ulonglong)uVar3;
  local_70 = "OutPacketsLost";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3028 = (ulonglong)uVar3;
  local_70 = "AverageJitterInMS";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3030 = (ulonglong)uVar3;
  local_70 = "InBunches";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3038 = (ulonglong)uVar3;
  local_70 = "OutBunches";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3040 = (ulonglong)uVar3;
  local_70 = "Ping";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3048 = (ulonglong)uVar3;
  local_70 = "AvgPing";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3050 = (ulonglong)uVar3;
  local_70 = "MinPing";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3058 = (ulonglong)uVar3;
  local_70 = "MaxPing";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3060 = (ulonglong)uVar3;
  local_70 = "OutKBytes";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3068 = (ulonglong)uVar3;
  local_70 = "OutNetGUIDKBytesSec";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3070 = (ulonglong)uVar3;
  local_70 = "ServerReplicateActorTimeMS";
  local_68 = 0x1a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3078 = (ulonglong)uVar3;
  local_70 = "GatherPrioritizeTimeMS";
  local_68 = 0x16;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3080 = (ulonglong)uVar3;
  local_70 = "ReplicateActorTimeMS";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3088 = (ulonglong)uVar3;
  local_70 = "NumReplicatedActors";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3090 = (ulonglong)uVar3;
  local_70 = "Connections";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3098 = (ulonglong)uVar3;
  local_70 = "NumReplicateActorCallsPerConAvg";
  local_68 = 0x1f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30a0 = (ulonglong)uVar3;
  local_70 = "NumberOfActiveActors";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30a8 = (ulonglong)uVar3;
  local_70 = "NumberOfFullyDormantActors";
  local_68 = 0x1a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30b0 = (ulonglong)uVar3;
  local_70 = "NumSkippedObjectEmptyUpdates";
  local_68 = 0x1c;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30b8 = (ulonglong)uVar3;
  local_70 = "NumOpenChannels";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30c0 = (ulonglong)uVar3;
  local_70 = "NumTickingChannels";
  local_68 = 0x12;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30c8 = (ulonglong)uVar3;
  local_70 = "SatConnections";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30d0 = (ulonglong)uVar3;
  local_70 = "SharedSerializationPropertyHit";
  local_68 = 0x1e;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30d8 = (ulonglong)uVar3;
  local_70 = "SharedSerializationPropertyMiss";
  local_68 = 0x1f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30e0 = (ulonglong)uVar3;
  local_70 = "SharedSerializationRPCHit";
  local_68 = 0x19;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30e8 = (ulonglong)uVar3;
  local_70 = "SharedSerializationRPCMiss";
  local_68 = 0x1a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30f0 = (ulonglong)uVar3;
  local_70 = "NumClientUpdateLevelVisibility";
  local_68 = 0x1e;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf30f8 = (ulonglong)uVar3;
  local_70 = "Channels";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3100 = (ulonglong)uVar3;
  local_70 = "NumActorChannels";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3108 = (ulonglong)uVar3;
  local_70 = "NumDormantActors";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3110 = (ulonglong)uVar3;
  local_70 = "NumActors";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3118 = (ulonglong)uVar3;
  local_70 = "NumNetActors";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3120 = (ulonglong)uVar3;
  local_70 = "NumNetGUIDsAckd";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3128 = (ulonglong)uVar3;
  local_70 = "NumNetGUIDsPending";
  local_68 = 0x12;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3130 = (ulonglong)uVar3;
  local_70 = "NumNetGUIDsUnAckd";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3138 = (ulonglong)uVar3;
  local_70 = "NetSaturated";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3140 = (ulonglong)uVar3;
  local_70 = "MaxPacketOverhead";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3148 = (ulonglong)uVar3;
  local_70 = "NetGUIDInRate";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3150 = (ulonglong)uVar3;
  local_70 = "NetGUIDOutRate";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3158 = (ulonglong)uVar3;
  local_70 = "NetNumClients";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3160 = (ulonglong)uVar3;
  local_70 = "NumClients";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3168 = (ulonglong)uVar3;
  local_70 = "NumConnections";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3170 = (ulonglong)uVar3;
  local_70 = "NumConsideredActors";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3178 = (ulonglong)uVar3;
  local_70 = "NumInitiallyDormantActors";
  local_68 = 0x19;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3180 = (ulonglong)uVar3;
  local_70 = "PrioritizedActors";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3188 = (ulonglong)uVar3;
  local_70 = "NumRelevantDeletedActors";
  local_68 = 0x18;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3190 = (ulonglong)uVar3;
  local_70 = "NumReplicatedActorBytes";
  local_68 = 0x17;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3198 = (ulonglong)uVar3;
  local_70 = "ImportedNetGuids";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f38 = (ulonglong)uVar3;
  local_70 = "PendingOuterNetGuids";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f40 = (ulonglong)uVar3;
  local_70 = "NetInBunchTimeOvershootPercent";
  local_68 = 0x1e;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3220 = (ulonglong)uVar3;
  local_70 = "UnmappedReplicators";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf2f48 = (ulonglong)uVar3;
  local_70 = "PercentInVoice";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31a0 = (ulonglong)uVar3;
  local_70 = "PercentOutVoice";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31a8 = (ulonglong)uVar3;
  local_70 = "VoiceBytesRecv";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31b0 = (ulonglong)uVar3;
  local_70 = "VoiceBytesSent";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31b8 = (ulonglong)uVar3;
  local_70 = "VoicePacketsRecv";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31c0 = (ulonglong)uVar3;
  local_70 = "VoicePacketsSent";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31c8 = (ulonglong)uVar3;
  local_70 = "PingBucketInt0";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31d0 = (ulonglong)uVar3;
  local_70 = "PingBucketInt1";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31d8 = (ulonglong)uVar3;
  local_70 = "PingBucketInt2";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31e0 = (ulonglong)uVar3;
  local_70 = "PingBucketInt3";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31e8 = (ulonglong)uVar3;
  local_70 = "PingBucketInt4";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31f0 = (ulonglong)uVar3;
  local_70 = "PingBucketInt5";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf31f8 = (ulonglong)uVar3;
  local_70 = "PingBucketInt6";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3200 = (ulonglong)uVar3;
  local_70 = "PingBucketInt7";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3208 = (ulonglong)uVar3;
  local_70 = "OutgoingReliableMessageQueueMaxSize";
  local_68 = 0x23;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3210 = (ulonglong)uVar3;
  local_70 = "IncomingReliableMessageQueueMaxSize";
  local_68 = 0x23;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14caf3218 = (ulonglong)uVar3;
  FUN_14098d3d2(FUN_1435a8fca,L"/Script/Engine",L"EReplayResult",&DAT_14caf2890);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9f1b80);
  FUN_140056680(&local_70,&DAT_149dfb77a);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_140f510cc(&DAT_14caf28d8,L"net.RPCDoSDetectionOverride",&local_70,
                L"Overrides whether or not RPC DoS Detection is enabled per-NetDriver. 0 = disabled, 1 = enabled. Example: net.RPCDoSDetectionOverride=GameNetDriver=1,BeaconNetDriver=0"
               );
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1435a9001);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf28f0,L"net.AllowRPCDoSDetectionBlocking",&DAT_14c761630,
                L"Overrides whether or not RPC DoS Detection RPC blocking is allowed. 0 = disabled, 1 = enabled."
               );
  atexit(FUN_1435a9046);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2900,L"net.AllowRPCDoSDetectionKicking",&local_70,
                L"Overrides whether or not RPC DoS Detection kicking is enabled. 0 = disabled, 1 = enabled."
               );
  atexit(FUN_1435a908b);
  FUN_140056680(&local_70,&DAT_149dfb77a);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_140f510cc(&DAT_14caf2918,L"net.RPCDoSForcedRPCTracking",&local_70,
                L"Sets a single RPC that, when encountered, forcibly enables RPC tracking (limited to one RPC for performance). Can also specify a random chance, between 0.0 and 1.0, for when encountering the RPC enables tracking, and a length of time for leaving tracking enabled (disables the next tick, otherwise).Example (50% chance for 10 seconds): net.RPCDoSForcedRPCTracking=ServerAdmin,0.5,10"
               );
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1435a90d0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2938,L"net.RPCDoSScopeDebugging",&DAT_14caf2930,
                L"Sets whether or not debugging/ensures for RPC DoS Tick/Packet scopes should be enabled."
               );
  atexit(FUN_1435a9115);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f2d00,1,&PTR_FUN_14a9f2cd0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f30b0,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f3790,1,0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14caf29a8);
  if (cVar2 == '\0') {
    _DAT_14caf29a8 = 0;
    uRam000000014caf29b0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14caf2a10 = (ulonglong)uVar3;
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f3dd0,1,0);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f41b0,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f4550,1,0);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2a60,L"ODSC.recompilemode",&local_70,
                L"Highly experimental - Changes how recompileshaders behaves in cooked build\n0 (legacy): Gathers all visible materials in a single frame and compiles all permutations for them\n1 (default): Compile only the permutations that are requested by the renderer. Faster iteration but more prone to hitching because of MDC recaching\n"
               );
  atexit(FUN_1435aafd6);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e00260;
  *(undefined **)(local_70 + 0x18) = &DAT_1435ab01c;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14caf2a78,L"odsc.logmissedmaterials",
                L"Logs materials that were not found by the ODSC server",&local_70);
  if (local_68 == 0) {
LAB_1435b751a:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1435b751a;
  }
  atexit(FUN_1435ab01d);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f4c90,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f5180,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9f5410);
  FUN_140056680(&DAT_14caf2ae0,L"INVALID");
  atexit((_func_5014 *)&LAB_1435ab062);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f57a0,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f5ba0,1,0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2b20,L"net.MaxSerializedNetGuids",&DAT_14c761634,
                L"Maximum number of network guids we would expect to receive in a bunch");
  atexit(FUN_1435ab5eb);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2b30,L"net.MaxSerializedReplayNetGuids",&DAT_14c761638,
                L"Maximum number of network guids we would expect to receive in replay export data."
               );
  atexit(FUN_1435ab630);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2b40,L"net.MaxSerializedNetExportGroups",&DAT_14c76163c,
                L"Maximum number of network export groups we would expect to receive in a bunch");
  atexit(FUN_1435ab675);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2b50,L"net.MaxSerializedNetExportsPerGroup",&DAT_14c761640,
                L"Maximum number of network exports in each group we would expect to receive in a bunch"
               );
  atexit(FUN_1435ab6ba);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2b60,L"net.AllowAsyncLoading",&local_70,
                L"Allow async loading of unloaded assets referenced in packets. If false the client will hitch and immediately load the asset, if true the packet will be delayed while the asset is async loaded. net.DelayUnmappedRPCs can be enabled to delay RPCs relying on async loading assets."
               );
  atexit(FUN_1435ab6ff);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2b78,L"net.IgnoreNetworkChecksumMismatch",&local_70,
                L"If true, the integrity checksum on packagemap objects will be ignored, which can cause issues with out of sync data"
               );
  atexit(FUN_1435ab744);
  local_70 = (char *)CONCAT44(local_70._4_4_,0x200);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2b90,L"net.ReservedNetGuidSize",&local_70,
                L"Reserved size in bytes for NetGUID serialization, used as a placeholder for later serialization"
               );
  atexit(FUN_1435ab789);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2ba8,L"net.TrackAsyncLoadingGUIDThreshold",&DAT_14caf2bb8,
                L"When > 0, any objects that take longer than the threshold to async load will be tracked. Threshold in seconds, @see FNetGUIDCache::ConsumeDelinquencyAnalytics. Used for Debugging and Analytics"
               );
  atexit(FUN_1435ab7ce);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2bc0,L"net.TrackAsyncLoadingGUIDThresholdOwner",&DAT_14caf2bd0,
                L"When > 0, if the Net Connection\'s owning Controller or Pawn is waiting on Async Loads for longer than this threshold, we will fire a CSV Event to track it. Used for Debugging and Profiling"
               );
  atexit(FUN_1435ab813);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2bd8,L"net.TrackQueuedActorThreshold",&DAT_14caf2be8,
                L"When > 0, any actors that spend longer than the threshold with queued bunches will be tracked. Threshold in seconds, @see UPackageMap::ConsumeDelinquencyAnalytics. Used for Debugging and Analytics"
               );
  atexit(FUN_1435ab858);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2bf0,L"net.TrackQueuedActorThresholdOwner",&DAT_14caf2c00,
                L"When > 0, if the Net Connection\'s owning Controller or Pawn has Queued Bunches for longer than this threshold, we will fire a CSV Event to track it. Used for Debugging and Profiling"
               );
  atexit(FUN_1435ab89d);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2c08,L"net.DelinquencyNumberOfTopOffendersToTrack",&DAT_14c761644,
                L"When > 0 , this will be the number of \'TopOffenders\' that are tracked by the PackageMap and GuidCache for Queued Actors and Async Loads respectively. net.TrackAsyncLoadingGUIDThreshold / net.TrackQueuedActorThreshold still dictate whether or not any of these items are tracked."
               );
  atexit(FUN_1435ab8e2);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c18,L"net.AllowClientRemapCacheObject",&DAT_14caf2c28,
                L"When enabled, we will allow clients to remap read only cache objects and keep the same NetGUID."
               );
  atexit(FUN_1435ab927);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c30,L"net.QuantizeActorScaleOnSpawn",&DAT_14caf2c40,
                L"When enabled, we will quantize Scale for newly spawned actors to a single decimal of precision."
               );
  atexit(FUN_1435ab96c);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c48,L"net.QuantizeActorLocationOnSpawn",&DAT_14c761648,
                L"When enabled, we will quantize Location for newly spawned actors to a single decimal of precision."
               );
  atexit(FUN_1435ab9b1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c58,L"net.QuantizeActorVelocityOnSpawn",&DAT_14c761649,
                L"When enabled, we will quantize Velocity for newly spawned actors to a single decimal of precision."
               );
  atexit(FUN_1435ab9f6);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c68,L"net.QuantizeActorRotationOnSpawn",&DAT_14c76164a,
                L"When enabled, we will quantize Rotation for newly spawned actors to a single decimal of precision."
               );
  atexit(FUN_1435aba3b);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c78,L"net.CheckNoLoadPackages",&DAT_14c76164b,
                L"If enabled, check the no load flag in GetObjectFromNetGUID before forcing a sync load on packages that are not marked IsFullyLoaded"
               );
  atexit(FUN_1435aba80);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf2c88,L"net.ReportSyncLoads",&DAT_14caf2c98,
                L"If enabled, the engine will track objects loaded by the networking system and broadcast FNetDelegates::OnSyncLoadDetected to report them.By default they are logged to the LogNetSyncLoads category."
               );
  atexit(FUN_1435abac5);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e062c0;
  *(code **)(local_70 + 0x18) = FUN_1435b2f0f;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14caf2ca0,L"net.ListNetGUIDExports",L"Lists open actor channels",&local_70);
  if (local_68 == 0) {
LAB_1435b7a7f:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1435b7a7f;
  }
  atexit(FUN_1435b3521);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f8070,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f83f0,1,0);
  FUN_140056680(&local_70,&DAT_149dfb77a);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_140f510cc(&DAT_14caf2ce0,L"net.MagicHeader",&local_70,
                L"String representing binary bits which are prepended to every packet sent by the game. Max length: 32 bits."
               );
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1435b3569);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2cf8,L"net.HandshakeResendInterval",&DAT_14c76164c,
                L"The delay between resending handshake packets which we have not received a response for."
               );
  atexit(FUN_1435b35ae);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d08,L"net.MinHandshakeVersion",&DAT_14c761650,
                L"The minimum supported stateless handshake protocol version (numeric).");
  atexit(FUN_1435b35f3);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d18,L"net.CurrentHandshakeVersion",&DAT_14c761654,
                L"The current supported stateless handshake protocol version (numeric)");
  atexit(FUN_1435b3638);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf2d28,L"net.DoHandshakeVersionFallback",&local_70,
                L"Whether or not to (clientside) perform randomized falling-back to previous versions of the handshake protocol, upon failure."
               );
  atexit(FUN_1435b367d);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d40,L"net.HandshakeEnforceNetworkCLVersion",&DAT_14caf2d50,
                L"Whether or not the stateless handshake should enforce the Network CL version, instead of the higher level netcode."
               );
  atexit(FUN_1435b36c2);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d58,L"net.VerifyNetSessionID",&DAT_14c761658,
                L"Whether or not verification of the packet SessionID value is performed.");
  atexit(FUN_1435b3707);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d68,L"net.VerifyNetClientID",&DAT_14c76165c,
                L"Whether or not verification of the packet ClientID value is performed.");
  atexit(FUN_1435b374c);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf2d78,L"net.VerifyMagicHeader",&DAT_14caf2d88,
                L"Whether or not verification of the magic header is performed, prior to processing a packet. Disable if transitioning to a new magic header, while wishing to continue supporting the old header for a time."
               );
  atexit(FUN_1435b3791);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9f97e0,1,0);
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9fb1d0,1,0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2e58,L"fx.Budget.GameThread",&DAT_14c761660,
                L"Budget (in ms) for all combined FX work that runs only on the gamethread. As this budget is approached or exceeded, various FX systems will attempt to scale down more and mroe agressively to remain in budget."
               );
  atexit(FUN_1435b5177);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2e68,L"fx.Budget.GameThreadConcurrent",&DAT_14c761664,
                L"Budget (in ms) for all combined FX work that runs on the gamethread or on a concurrent task spawned from the game thread. As this budget is approached or exceeded, various FX systems will attempt to scale down more and mroe agressively to remain in budget."
               );
  atexit(FUN_1435b51bc);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf2e78,L"fx.Budget.RenderThread",&DAT_14c761668,
                L"Budget (in ms) for all combined FX work that runs on the Render Thread.  As this budget is approached or exceeded, various FX systems will attempt to scale down more and mroe agressively to remain in budget."
               );
  atexit(FUN_1435b5201);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14caf2e88,L"fx.Budget.HistoryFrames",&DAT_14c76166c,
                L"Number of frames the global FX budget tracking will hold to work out it\'s average frame time."
               );
  atexit(FUN_1435b5246);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf2e98,L"fx.Budget.Debug.GameThreadTimeOverride",&DAT_14c761670,
                L"When >= 0.0 overrides the reported time for FX on the GameThread. Useful for observing/debugging the impact on other systems."
               );
  atexit(FUN_1435b528b);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf2ea8,L"fx.Budget.Debug.GameThreadConcurrentTimeOverride",&DAT_14c761674,
                L"When >= 0.0 overrides the reported time for FX on the GameThreadConcurrent. Useful for observing/debugging the impact on other systems."
               );
  atexit(FUN_1435b52d0);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf2eb8,L"fx.Budget.Debug.RenderThreadTimeOverride",&DAT_14c761678,
                L"When >= 0.0 overrides the reported time for FX on the RenderThread. Useful for observing/debugging the impact on other systems."
               );
  atexit(FUN_1435b5315);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf2ec8,L"fx.Budget.AdjustedUsageDecayRate",&DAT_14c76167c,
                L"Rate at which the FX budget adjusted usage value is allowed to decay. This helps prevent FX flipping off/on if the usage oscilates over the cull threshold as the FX are culled/enabled."
               );
  atexit(FUN_1435b535a);
  local_88 = (char **)((ulonglong)local_88._4_4_ << 0x20);
  FUN_1415c789c(&DAT_14caf2ed8,L"fx.Budget.AdjustedUsageMax",&DAT_14c761680,
                L"Max value for FX Budget adjusted usage. Prevents one very long frame from keeping the usage above 1.0 for long periods under budget."
               );
  atexit(FUN_1435b539f);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_70 + 0x18) = &LAB_147bebc20;
  ppuStack_80 = (undefined **)((ulonglong)ppuStack_80 & 0xffffffff00000000);
  local_88 = &local_70;
  FUN_14171ec12(&DAT_14caf2ee8,L"fx.Budget.Enabled",&DAT_14caf2ef8,
                L"Controls whether we track global FX budgets.");
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_1435b7fb9;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1435b7fb9:
  atexit(FUN_1435b53e4);
  DAT_14caf2f00 = 0;
  DAT_14caf2f08 = 0;
  atexit(FUN_1435b5429);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b8090 FUN_1435b8090 body=69 status=ok
// SIG undefined FUN_1435b8090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8090(void)

{
  _DAT_14caf3238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b80d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3240,1);
  return;
}


