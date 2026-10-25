// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14019251c FUN_14019251c body=96 status=ok
// SIG undefined FUN_14019251c(void)

undefined8 FUN_14019251c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar2 = FUN_1448a542e((longlong *)(param_1 + 0x178),
                        (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x178);
    uVar3 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x40 != 0) &&
       (puVar4 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x40 + 0x30), puVar4 != (undefined8 *)0x0)
       ) {
      uVar3 = *puVar4;
    }
  }
  return uVar3;
}



// FUNCTION 14019257c FUN_14019257c body=280 status=ok
// SIG undefined FUN_14019257c(void)

void FUN_14019257c(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8e90 == (undefined *)0x0) {
    local_30 = &local_18;
    local_18 = &DAT_143558588;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147b97a55;
    local_40 = &LAB_145c28e7e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelInstanceSubsystem",&DAT_14cae8e90,&DAT_147b97a54);
  }
  local_18 = DAT_14cae8e90;
  if ((DAT_14cae8e90 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140192696(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140192696 FUN_140192696 body=299 status=ok
// SIG undefined FUN_140192696(void)

void FUN_140192696(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cae8e90 == 0) {
      local_40 = &local_28;
      local_28 = &DAT_143558588;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_141737a50;
      local_48 = &LAB_147b97a55;
      local_50 = &LAB_145c28e7e;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x1d0;
      FUN_14081cfa3(L"/Script/Engine",L"LevelInstanceSubsystem",&DAT_14cae8e90,&DAT_147b97a54);
      if (DAT_14cae8e90 == 0) goto LAB_140192796;
    }
    if ((*(int *)(DAT_14cae8e90 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae8e90 + 0x38) * 8) ==
        DAT_14cae8e90 + 0x30)) {
      lVar1 = *param_2;
      goto LAB_140192798;
    }
  }
LAB_140192796:
  lVar1 = 0;
LAB_140192798:
  FUN_1448a6f9c(param_1,lVar1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401927c2 FUN_1401927c2 body=757 status=ok
// SIG undefined FUN_1401927c2(void)

void FUN_1401927c2(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined1 local_b0 [40];
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == '\a') {
    if (param_1[0xbe] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_e8);
    }
  }
  else if ((((param_3 == '\0') && (param_1 != (longlong *)0x0)) && (param_1[0xbe] != 0)) &&
          ((lVar4 = FUN_1447210f0(param_1), lVar4 != 0 && ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)))
          ) {
    param_1[0xbe] = 0;
    lVar5 = *(longlong *)((longlong)param_1 + 0x5cc);
    if (lVar5 == 0) {
      lVar5 = param_1[0x98];
    }
    lVar5 = FUN_1412d9436(lVar5);
    if (lVar5 != 0) {
      FUN_1401950da(local_b0,lVar5);
      (**(code **)(*param_1 + 0x638))(param_1,local_b0);
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar6;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      FUN_1446efa72(&local_c8,0,3,0x10);
      puVar6 = local_c8;
      local_c0 = 3;
      *local_c8 = &PTR_LAB_14a1c8830;
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
      local_c8[2] = lVar5;
      *local_c8 = &PTR_FUN_14b3e55f0;
      local_c8[3] = 0;
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_c8 + 3) = uVar1;
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
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar4 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar7;
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar3;
      puVar6[4] = &LAB_1410ecd20;
      *(undefined4 *)(puVar6 + 5) = 0x390;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_c8);
      local_48 = 1;
      FUN_14016fdb0(uVar2,&local_b8,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      param_1[0xc5] = local_b8;
      if (local_c0 != 0) {
        if (local_c8 == (undefined8 *)0x0) goto LAB_1401927f3;
        (**(code **)*local_c8)(local_c8,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1401927f3:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140192ad0 FUN_140192ad0 body=414 status=ok
// SIG undefined FUN_140192ad0(void)

undefined8 FUN_140192ad0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong *puVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = *param_2;
    if ((uVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar7);
    }
    uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    uVar7 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar5 + uVar7 * 4);
    if (iVar6 != -1) {
      puVar12 = (ulonglong *)((longlong)plVar5 + uVar7 * 4);
      bVar3 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
        uVar7 = *param_2;
        if ((uVar7 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar7);
          bVar3 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar3 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar3 = DAT_14c950c29;
        }
        if ((uVar7 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar7);
          bVar3 = DAT_14c950c29;
        }
        if (uVar1 == uVar7) {
          iVar6 = (int)*puVar12;
          lVar2 = *param_1;
          plVar5 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[8];
          }
          lVar10 = (longlong)*(int *)(lVar2 + 0xc + (longlong)iVar6 * 0x10);
          iVar9 = *(int *)((longlong)plVar5 + lVar10 * 4);
          if (iVar9 == iVar6) {
            piVar11 = (int *)((longlong)plVar5 + lVar10 * 4);
          }
          else {
            do {
              piVar11 = (int *)(lVar2 + (longlong)iVar9 * 0x10 + 8);
              iVar9 = *piVar11;
            } while (iVar9 != iVar6);
          }
          *piVar11 = *(int *)(lVar2 + (longlong)iVar6 * 0x10 + 8);
          FUN_140192c6e(param_1);
          return 1;
        }
        iVar6 = (int)puVar8[1];
        puVar12 = puVar8 + 1;
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 140192c6e FUN_140192c6e body=114 status=ok
// SIG undefined FUN_140192c6e(void)

void FUN_140192c6e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 140192ce0 FUN_140192ce0 body=783 status=ok
// SIG undefined FUN_140192ce0(void)

void FUN_140192ce0(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)FUN_1405d1c86();
  if ((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x2c8) == 0)) {
    puVar1 = (uint *)(param_1 + 0x2c0);
    plVar8 = (longlong *)(**(code **)(*plVar7 + 0x2a0))(plVar7);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
      if (lVar9 != 0) {
        lVar10 = FUN_14019a59a();
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
          FUN_1400bbfc4(&local_98,lVar9);
          *(undefined4 *)(param_1 + 0x2c8) = (undefined4)local_98;
          *(undefined4 *)(param_1 + 0x2cc) = local_98._4_4_;
          *(undefined4 *)(param_1 + 0x2d0) = uStack_90;
          *(undefined4 *)(param_1 + 0x2d4) = uStack_8c;
          if ((undefined8 *)(param_1 + 0x2c8) == &local_98) {
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_1 + 0x2d8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0x2d8) = local_88;
            local_88 = 0;
            *(undefined4 *)(param_1 + 0x2e0) = local_80;
            *(undefined4 *)(param_1 + 0x2e4) = local_7c;
          }
          cVar5 = (*(code *)PTR_FUN_14c758760)();
          iVar6 = DAT_14c9647dc;
          uVar3 = *(uint *)(lVar9 + 0xc);
          if (cVar5 != '\0') {
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
              *(undefined8 *)(param_1 + 0x2c0) = 0;
              goto LAB_140192db1;
            }
          }
          *puVar1 = uVar3;
          if ((int)uVar3 < iVar6) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
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
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar6 = *(int *)(lVar9 + 0x10);
            bVar12 = iVar6 == 0;
            if (bVar12) {
              *(int *)(lVar9 + 0x10) = iVar11;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar6 = iVar11;
            }
          }
          *(int *)(param_1 + 0x2c4) = iVar6;
          goto LAB_140192db1;
        }
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    if (*(int *)(param_1 + 0x2e4) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x2d8),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x2d8);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
LAB_140192db1:
  lVar9 = FUN_14099b09e(param_1,1);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(lVar9 + 0x220);
    if (DAT_14c950c29 == '\x01') {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar10 = *(longlong *)(lVar9 + 0x220);
      }
    }
    *(longlong *)(param_1 + 0x220) = lVar10;
  }
  lVar9 = FUN_14011c706(*(undefined8 *)(param_1 + 0xc0));
  if (((lVar9 != 0) && ((*(byte *)(param_1 + 0x243) & 1) != 0)) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x3f0), lVar9 != 0)) {
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0xc0) + 0x152);
    if (((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x30) == param_1)) {
      plVar8 = &DAT_14c846480;
      if (plVar7 != (longlong *)0x0) {
        plVar8 = plVar7 + 0x10;
      }
      plVar7 = &local_98;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *plVar7 = *plVar8;
        plVar8 = plVar8 + 1;
        plVar7 = plVar7 + 1;
      }
      FUN_1437a8cc8(lVar9);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140192ff0 FUN_140192ff0 body=1186 status=ok
// SIG undefined FUN_140192ff0(void)

int * FUN_140192ff0(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar12 = iVar13 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar13 + 1;
    iVar16 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar16 = iVar13;
    }
    if (iVar16 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        if (iVar13 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar12 = iVar13;
        }
        else {
          uVar4 = iVar13 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar4) {
              uVar5 = uVar4;
            }
          }
          else {
            uVar5 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar12 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar4 <= iVar12) {
            iVar10 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar12);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar12 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar12 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar7;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar12 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar6 = (longlong)iVar15;
    iVar13 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar13;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x10) = 0xffffffff;
    }
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar13 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar13 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  puVar2 = (ulonglong *)(*param_1 + lVar6 * 0x10);
  uVar11 = *param_3;
  *(ulonglong *)(*param_1 + lVar6 * 0x10) = uVar11;
  if ((uVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar11);
    uVar11 = *puVar2;
  }
  bVar9 = DAT_14c950c29;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  if (((bVar9 & 1) != 0) && (uVar11 != 0)) {
    FUN_1456cec3c(uVar11);
  }
  uVar4 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  iVar13 = (int)param_1[1];
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar13 - iVar12 != 1) {
    uVar11 = *puVar2;
    if ((DAT_14c950c29 == 1) && (uVar11 != 0)) {
      FUN_1456cec3c(uVar11);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar13 != iVar12) {
      plVar7 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[8];
      }
      iVar13 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      bVar9 = DAT_14c950c29;
      if (iVar13 != -1) {
        do {
          if (((bVar9 & 1) != 0) && (uVar11 != 0)) {
            FUN_1456cec3c(uVar11);
            bVar9 = DAT_14c950c29;
          }
          lVar6 = (longlong)iVar13 * 0x10;
          uVar3 = *(ulonglong *)(*param_1 + lVar6);
          if (((bVar9 & 1) != 0) && (uVar3 != 0)) {
            FUN_1456cec3c(uVar3);
            bVar9 = DAT_14c950c29;
          }
          if (((bVar9 & 1) != 0) && (uVar11 != 0)) {
            FUN_1456cec3c(uVar11);
            bVar9 = DAT_14c950c29;
          }
          if (uVar3 == uVar11) {
            *(ulonglong *)(*param_1 + lVar6) = *puVar2;
            FUN_140192c6e(param_1,iVar15);
            cVar8 = '\x01';
            iVar15 = iVar13;
            break;
          }
          iVar13 = *(int *)(*param_1 + 8 + lVar6);
          cVar8 = '\0';
        } while (iVar13 != -1);
        goto LAB_14019317a;
      }
    }
  }
  cVar8 = '\0';
LAB_14019317a:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar8;
  }
  if (cVar8 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar13 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar4 = (int)param_1[9] - 1U & uVar4;
      *(uint *)((longlong)puVar2 + 0xc) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(undefined4 *)(puVar2 + 1) =
           *(undefined4 *)
            ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_140194e4a(param_1);
    }
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 140193492 FUN_140193492 body=1644 status=ok
// SIG undefined FUN_140193492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140193492(longlong param_1)

{
  double dVar1;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_2a8 [32];
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar2;
  
  auVar30 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar10 = *(longlong *)(param_1 + 0x178);
  if (lVar10 != 0) {
    if ((*(byte *)(lVar10 + 0x240) & 0x40) == 0) {
      lVar10 = *(longlong *)(lVar10 + 0x2b0);
      local_278 = *(undefined1 (*) [16])(param_1 + 0xc0);
      dVar17 = local_278._0_8_;
      dVar19 = local_278._8_8_;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0xd0);
      dVar5 = auVar4._0_8_;
      auVar21 = minpd(_DAT_149934d80,local_278);
      auVar25 = minpd(ZEXT816(0x3ff0000000000000),auVar4);
      auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      iVar9 = movmskpd((int)lVar10,auVar22);
      auVar21._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      uVar11 = movmskpd((int)param_1,auVar21);
      if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar29 = *(double *)(param_1 + 0x80);
        dVar8 = *(double *)(param_1 + 0x88);
        local_288 = *(double *)(param_1 + 0x90);
        dStack_280 = *(double *)(param_1 + 0x98);
        dVar1 = *(double *)(param_1 + 0x98);
        dVar2 = *(double *)(param_1 + 0x98);
        dVar17 = *(double *)(lVar10 + 0x3c8) * dVar17;
        dVar19 = *(double *)(lVar10 + 0x3d0) * dVar19;
        dVar15 = *(double *)(lVar10 + 0x3d8) * dVar5;
        dVar16 = auVar4._8_8_ * 0.0;
        dVar27 = dVar19 * dVar29 - dVar17 * dVar8;
        dVar28 = dVar15 * dVar8 - dVar19 * local_288;
        dVar20 = dVar17 * local_288 - dVar15 * dVar29;
        dVar23 = dVar16 * dStack_280 - dVar16 * dStack_280;
        dVar28 = dVar28 + dVar28;
        dVar20 = dVar20 + dVar20;
        dVar27 = dVar27 + dVar27;
        dVar23 = dVar23 + dVar23;
        dVar26 = *(double *)(param_1 + 0x88);
        dVar3 = *(double *)(param_1 + 0x88);
        dVar24 = local_288 * 0.0 * -1.0 +
                 dVar26 * 0.0 + *(double *)(param_1 + 0x80) * 1.0 * 1.0 + dVar1 * 0.0;
        dVar6 = local_288 * 0.0 * 1.0 +
                dVar3 * 1.0 + *(double *)(param_1 + 0x80) * 0.0 * -1.0 + dVar2 * 0.0;
        auVar30._0_8_ =
             *(double *)(param_1 + 0x90) * 1.0 * 1.0 +
             ((dVar29 * 0.0 * 1.0 + dVar1 * 0.0) - dVar26 * 0.0);
        auVar30._8_8_ =
             *(double *)(param_1 + 0x90) * 0.0 * -1.0 +
             ((dVar29 * 0.0 * -1.0 + dVar2 * 1.0) - dVar3 * 0.0);
        local_e8 = (dVar27 * dVar8 - local_288 * dVar20) + dVar1 * dVar28 + dVar17 +
                   *(double *)(param_1 + 0xa0);
        dStack_e0 = (dVar28 * local_288 - dVar27 * dVar29) + dVar2 * dVar20 + dVar19 +
                    *(double *)(param_1 + 0xa8);
        local_d8 = (dVar20 * dVar29 - dVar8 * dVar28) + dVar1 * dVar27 + dVar15 +
                   *(double *)(param_1 + 0xb0);
        dVar17 = (dVar23 * dStack_280 - dVar23 * dStack_280) + dVar2 * dVar23 + dVar16 +
                 *(double *)(param_1 + 0xb8);
      }
      else {
        dVar1 = *(double *)(param_1 + 0x80);
        dVar3 = *(double *)(param_1 + 0x88);
        dVar24 = *(double *)(param_1 + 0x90);
        dVar26 = dVar3 + dVar3;
        dVar27 = dVar24 + dVar24;
        dVar2 = dVar1 * (dVar1 + dVar1);
        local_1c8 = ((double)DAT_149934d80 - (dVar24 * dVar27 + dVar3 * dVar26)) * dVar17;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar24 * dVar27 + dVar2)) * dVar19;
        dVar6 = *(double *)(param_1 + 0x80) * dVar27;
        dVar24 = *(double *)(param_1 + 0x98);
        dVar23 = dVar27 * dVar24;
        dVar29 = (dVar1 + dVar1) * *(double *)(param_1 + 0x98);
        dVar24 = dVar26 * dVar24;
        local_1a8 = (dVar26 * dVar1 - dVar23) * dVar19;
        dStack_180 = (dVar27 * dVar3 - dVar29) * dVar5;
        local_188 = (dVar24 + dVar6) * dVar5;
        dStack_1c0 = (dVar26 * dVar1 + dVar23) * dVar17;
        local_198 = (dVar27 * dVar3 + dVar29) * dVar19;
        local_1b8 = (dVar6 - dVar24) * dVar17;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_178 = (1.0 - (dVar2 + dVar3 * dVar26)) * dVar5;
        uStack_170 = 0;
        local_168 = *(undefined8 *)(param_1 + 0xa0);
        uStack_160 = *(undefined8 *)(param_1 + 0xa8);
        local_158 = *(undefined8 *)(param_1 + 0xb0);
        uStack_150 = 0x3ff0000000000000;
        local_248 = 0x3ff0000000000000;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0x3ff0000000000000;
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        local_228 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_1e8 = *(double *)(lVar10 + 0x3c8);
        dStack_1e0 = *(double *)(lVar10 + 0x3d0);
        local_1d8 = *(double *)(lVar10 + 0x3d8);
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar25._8_8_ = -(ulonglong)(0.0 <= dVar19);
        auVar25._0_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar21 = blendvpd(_DAT_149936790,auVar30,auVar25);
        uVar13 = -(ulonglong)(0.0 <= dVar5 * 1.0);
        dVar17 = (double)(~uVar13 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar13 >> 0x20) & 0x3ff00000) << 0x20);
        dVar19 = auVar21._0_8_;
        local_138 = local_138 * dVar19;
        local_140 = local_140 * dVar19;
        local_148 = local_148 * dVar19;
        dVar19 = auVar21._8_8_;
        local_118 = local_118 * dVar19;
        local_120 = local_120 * dVar19;
        local_128 = dVar19 * local_128;
        local_f8 = local_f8 * dVar17;
        local_100 = local_100 * dVar17;
        local_108 = dVar17 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar17 = local_258 * local_258 + local_268 * local_268;
        dVar19 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar18._0_8_ = dVar17 + dVar19;
        auVar18._8_8_ = dVar17 + dVar19;
        auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
        auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
        auVar21 = sqrtpd(auVar18,auVar18);
        auVar30 = divpd(auVar30,auVar21);
        auVar31._0_8_ = auVar30._0_8_ * local_258;
        auVar31._8_8_ = auVar30._8_8_ * dStack_250;
        dVar24 = (double)((ulonglong)(local_268 * auVar30._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
        dVar6 = (double)((ulonglong)(dStack_260 * auVar30._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
        auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar14);
        dVar17 = 0.0;
      }
      dVar19 = auVar4._8_8_ * 0.0;
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar24;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x80) = auVar4;
      *(undefined1 (*) [16])(param_1 + 0x90) = auVar30;
      *(double *)(param_1 + 0xa0) = local_e8;
      *(double *)(param_1 + 0xa8) = dStack_e0;
      *(double *)(param_1 + 0xb0) = local_d8;
      *(double *)(param_1 + 0xb8) = dVar17;
      *(undefined8 *)(param_1 + 0xc0) = local_278._0_8_;
      *(undefined8 *)(param_1 + 200) = local_278._8_8_;
      auVar7._8_4_ = SUB84(dVar19,0);
      auVar7._0_8_ = dVar5 * 1.0;
      auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0xd0) = auVar7;
    }
    if (param_1 != 0) {
      uVar12 = 0;
      lVar10 = param_1;
      do {
        if ((*(uint *)(lVar10 + 8) & 0x30) != 0) goto LAB_1401937b1;
        lVar10 = *(longlong *)(lVar10 + 0x20);
      } while (lVar10 != 0);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
LAB_1401937b1:
    lVar10 = FUN_14019257c(uVar12);
    if (lVar10 != 0) {
      FUN_140193b00(lVar10,param_1);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140193b00 FUN_140193b00 body=1238 status=ok
// SIG undefined FUN_140193b00(void)

void FUN_140193b00(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  byte bVar20;
  int iVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *(undefined8 *)(param_2 + 0x1c0);
  local_70 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_6c = *(undefined4 *)(param_2 + 0x1cc);
  uStack_68 = *(undefined4 *)(param_2 + 0x1d0);
  uStack_64 = *(undefined4 *)(param_2 + 0x1d4);
  local_60 = *(undefined8 *)(param_2 + 0x1d8);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 0x1e8);
  lVar25 = (longlong)local_50;
  pvVar4 = *(void **)(param_2 + 0x1e0);
  if (lVar25 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar4,lVar25 * 2);
  }
  FUN_140a10d6e(param_1 + 0xd8,&local_78);
  plVar19 = (longlong *)(param_1 + 0x128);
  if (*(int *)(param_1 + 0x15c) == 0) {
    iVar30 = *(int *)(param_1 + 0x130);
    *(int *)(param_1 + 0x130) = iVar30 + 1;
    if (*(int *)(param_1 + 0x134) == iVar30) {
      FUN_1406cd6a8(plVar19,iVar30);
    }
    iVar29 = *(int *)(param_1 + 0x150);
    if (iVar29 == 0) {
      iVar24 = -1;
    }
    else {
      iVar24 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar24 = iVar29 + -1;
      }
      iVar24 = iVar24 >> 5;
    }
    lVar25 = param_1 + 0x138;
    iVar21 = iVar29 + 1;
    iVar27 = iVar29 + 0x1f;
    if (-1 < iVar29) {
      iVar27 = iVar29;
    }
    if (iVar27 >> 5 == iVar24) {
      *(int *)(param_1 + 0x150) = iVar21;
    }
    else {
      if (*(int *)(param_1 + 0x154) <= iVar29) {
        if (iVar29 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar24 = iVar29;
        }
        else {
          uVar26 = iVar29 + 0x20U >> 5;
          local_80 = (ulonglong)uVar26;
          if (*(int *)(param_1 + 0x154) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar26) {
              uVar17 = uVar26;
            }
          }
          else {
            uVar17 = (uVar26 * 3 >> 3) + uVar26 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar17 << 2,0);
          iVar24 = (int)(uVar23 >> 2);
          iVar21 = -0x20;
          if ((int)local_80 <= iVar24) {
            iVar21 = iVar24 << 5;
          }
          iVar24 = *(int *)(param_1 + 0x150);
        }
        *(int *)(param_1 + 0x154) = iVar21;
        FUN_1446efbd8(lVar25,iVar24);
        iVar21 = *(int *)(param_1 + 0x150) + 1;
      }
      iVar24 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar24 = iVar21;
      }
      *(int *)(param_1 + 0x150) = iVar21;
      if (iVar21 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_1 + 0x148);
        if (*(longlong *)(param_1 + 0x148) == 0) {
          lVar18 = lVar25;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar24 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar24 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar30;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar25 = *(longlong *)(param_1 + 0x148);
    }
    bVar20 = (byte)iVar29 & 0x1f;
    puVar1 = (uint *)(lVar25 + (longlong)(iVar27 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar30 = *(int *)(param_1 + 0x158);
    lVar18 = (longlong)iVar30;
    iVar29 = *(int *)(*(longlong *)(param_1 + 0x128) + 4 + lVar18 * 0x40);
    *(int *)(param_1 + 0x158) = iVar29;
    iVar24 = *(int *)(param_1 + 0x15c) + -1;
    *(int *)(param_1 + 0x15c) = iVar24;
    if (iVar24 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar29 * 0x40) = 0xffffffff;
    }
  }
  pvVar4 = local_58;
  lVar25 = param_1 + 0x138;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    lVar25 = *(longlong *)(param_1 + 0x148);
  }
  iVar29 = iVar30 + 0x1f;
  if (-1 < iVar30) {
    iVar29 = iVar30;
  }
  puVar1 = (uint *)(lVar25 + (longlong)(iVar29 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar30 & 0x1f);
  lVar25 = *(longlong *)(param_1 + 0x128);
  lVar18 = lVar18 * 0x40;
  puVar2 = (undefined8 *)(lVar25 + lVar18);
  *(undefined8 *)(lVar25 + lVar18) = local_78;
  puVar3 = (undefined4 *)(lVar25 + 8 + lVar18);
  *puVar3 = local_70;
  puVar3[1] = uStack_6c;
  puVar3[2] = uStack_68;
  puVar3[3] = uStack_64;
  *(undefined8 *)(lVar25 + 0x18 + lVar18) = local_60;
  *(undefined8 *)(lVar25 + 0x20 + lVar18) = 0;
  lVar28 = (longlong)local_50;
  *(int *)(lVar25 + 0x28 + lVar18) = local_50;
  if (lVar28 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    uVar22 = local_78;
  }
  else {
    FUN_1446dd670(lVar25 + lVar18 + 0x20,local_50,0);
    memcpy((void *)puVar2[4],pvVar4,lVar28 * 2);
    uVar22 = *puVar2;
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0xffffffff;
  uVar26 = (int)((ulonglong)uVar22 >> 0x20) * 0x17 + (int)uVar22;
  iVar29 = 1;
  if (*(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c) == 1) {
    uVar17 = 1;
  }
  else {
    iVar24 = FUN_140681374(plVar19,uVar26,puVar2);
    if (iVar24 != -1) {
      puVar3 = (undefined4 *)(*plVar19 + (longlong)iVar24 * 0x40);
      if (*(longlong *)(*plVar19 + 0x20 + (longlong)iVar24 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar5 = *(undefined4 *)puVar2;
      uVar6 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar7 = *(undefined4 *)(puVar2 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar9 = *(undefined4 *)(puVar2 + 2);
      uVar10 = *(undefined4 *)((longlong)puVar2 + 0x14);
      uVar11 = *(undefined4 *)(puVar2 + 3);
      uVar12 = *(undefined4 *)((longlong)puVar2 + 0x1c);
      uVar13 = *(undefined4 *)(puVar2 + 4);
      uVar14 = *(undefined4 *)((longlong)puVar2 + 0x24);
      uVar15 = *(undefined4 *)(puVar2 + 5);
      uVar16 = *(undefined4 *)((longlong)puVar2 + 0x2c);
      *(undefined8 *)(puVar3 + 0xc) = puVar2[6];
      puVar3[8] = uVar13;
      puVar3[9] = uVar14;
      puVar3[10] = uVar15;
      puVar3[0xb] = uVar16;
      puVar3[4] = uVar9;
      puVar3[5] = uVar10;
      puVar3[6] = uVar11;
      puVar3[7] = uVar12;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_140d7238c(plVar19,iVar30);
      goto LAB_140193d80;
    }
    uVar17 = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c);
    if (3 < uVar17) {
      uVar23 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar25 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar29 = 1 << ((byte)lVar25 & 0x1f);
    }
  }
  iVar24 = iVar30;
  if (((int)uVar17 < 1) || (iVar29 <= *(int *)(param_1 + 0x170))) {
    uVar26 = *(int *)(param_1 + 0x170) - 1U & uVar26;
    *(uint *)((longlong)puVar2 + 0x3c) = uVar26;
    lVar25 = *(longlong *)(param_1 + 0x168);
    if (*(longlong *)(param_1 + 0x168) == 0) {
      lVar25 = param_1 + 0x160;
    }
    *(undefined4 *)(puVar2 + 7) =
         *(undefined4 *)
          (lVar25 + ((longlong)*(int *)(param_1 + 0x170) - 1U & (longlong)(int)uVar26) * 4);
    lVar25 = *(longlong *)(param_1 + 0x168);
    if (*(longlong *)(param_1 + 0x168) == 0) {
      lVar25 = param_1 + 0x160;
    }
    *(int *)(lVar25 + ((longlong)*(int *)(param_1 + 0x170) - 1U & (longlong)(int)uVar26) * 4) =
         iVar30;
  }
  else {
    *(int *)(param_1 + 0x170) = iVar29;
    FUN_140195f38(plVar19);
  }
LAB_140193d80:
  *(longlong *)(*plVar19 + 0x30 + (longlong)iVar24 * 0x40) = param_2;
  plVar19 = (longlong *)FUN_1448a53de(param_2);
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x38))(plVar19);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140193fe2 FUN_140193fe2 body=133 status=ok
// SIG undefined FUN_140193fe2(void)

void FUN_140193fe2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  uVar2 = FUN_14099b09e(uVar2,0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  FUN_14019406e(uVar3,uVar2,uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019406e FUN_14019406e body=858 status=ok
// SIG undefined FUN_14019406e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019406e(ulonglong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  if (DAT_14cb10d38 != param_1) {
    DAT_14cb10d38 = param_1;
    if (DAT_14cb10cc8 != DAT_14cb10cf4) {
      uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      puVar5 = &DAT_14cb10cf8;
      if (DAT_14cb10d00 != (undefined *)0x0) {
        puVar5 = DAT_14cb10d00;
      }
      iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14cb10d08 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      while (iVar4 != -1) {
        puVar1 = (ulonglong *)(DAT_14cb10cc0 + (longlong)iVar4 * 0x48);
        if (*puVar1 == param_1) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            DAT_14cb10d70 = (undefined4)puVar1[7];
            _DAT_14cb10d40 = puVar1[1];
            _DAT_14cb10d48 = puVar1[2];
            _DAT_14cb10d50 = puVar1[3];
            _DAT_14cb10d58 = puVar1[4];
            _DAT_14cb10d60 = puVar1[5];
            _DAT_14cb10d68 = puVar1[6];
            goto LAB_140194164;
          }
          break;
        }
        iVar4 = (int)puVar1[8];
      }
    }
    _DAT_14cb10d60 = 0;
    _DAT_14cb10d68 = 0;
    _DAT_14cb10d50 = 0;
    _DAT_14cb10d58 = 0;
    _DAT_14cb10d40 = 0;
    _DAT_14cb10d48 = 0;
    DAT_14cb10d70 = 1;
  }
LAB_140194164:
  local_48 = DAT_14cb10d70;
  local_58 = _DAT_14cb10d60;
  uStack_50 = _DAT_14cb10d68;
  local_68 = _DAT_14cb10d50;
  uStack_60 = _DAT_14cb10d58;
  local_78 = _DAT_14cb10d40;
  uStack_70 = _DAT_14cb10d48;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  if (((char)local_48 == '\0') && (cVar2 = FUN_1404e5e32(&local_78,param_1), cVar2 != '\0')) {
    FUN_1404e5e32(&uStack_70,param_2);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78._0_4_ = 0;
  uStack_70 = 0;
  local_48 = CONCAT31(local_48._1_3_,1);
  if (param_1 == 0) {
    iVar4 = 0;
    uVar3 = (uint)local_78;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_78 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_78;
      if (bVar8) {
        iVar4 = iVar6;
      }
    }
  }
  local_78._0_4_ = uVar3;
  local_78 = CONCAT44(iVar4,(uint)local_78);
  if (param_2 == 0) {
    uStack_70 = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar6;
      }
    }
  }
  uStack_70 = CONCAT44(iVar4,(undefined4)uStack_70);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_48 = local_48 & 0xffffff00;
  FUN_1401943ca(&DAT_14cb10cb8,param_1);
  FUN_14019491a(local_88,param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401943ca FUN_1401943ca body=313 status=ok
// SIG undefined FUN_1401943ca(void)

void FUN_1401943ca(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [4];
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_78 = param_3[4];
  uStack_74 = param_3[5];
  uStack_70 = param_3[6];
  uStack_6c = param_3[7];
  local_68 = param_3[8];
  uStack_64 = param_3[9];
  uStack_60 = param_3[10];
  uStack_5c = param_3[0xb];
  bVar1 = *(byte *)(param_3 + 0xc);
  local_3a = *(undefined1 *)((longlong)param_3 + 0x33);
  local_3c = *(undefined2 *)((longlong)param_3 + 0x31);
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x3c);
  local_50 = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_48 = param_1 + 0x88;
  *(undefined4 *)(param_1 + 0x88) = local_88;
  *(undefined4 *)(param_1 + 0x8c) = uStack_84;
  *(undefined4 *)(param_1 + 0x90) = uStack_80;
  *(undefined4 *)(param_1 + 0x94) = uStack_7c;
  *(undefined4 *)(param_1 + 0x98) = local_78;
  *(undefined4 *)(param_1 + 0x9c) = uStack_74;
  *(undefined4 *)(param_1 + 0xa0) = uStack_70;
  *(undefined4 *)(param_1 + 0xa4) = uStack_6c;
  *(undefined4 *)(param_1 + 0xa8) = local_68;
  *(undefined4 *)(param_1 + 0xac) = uStack_64;
  *(undefined4 *)(param_1 + 0xb0) = uStack_60;
  *(undefined4 *)(param_1 + 0xb4) = uStack_5c;
  *(byte *)(param_1 + 0xb8) = bVar1;
  *(undefined2 *)(param_1 + 0xb9) = local_3c;
  *(undefined1 *)(param_1 + 0xbb) = local_3a;
  FUN_14019451c(param_1 + 8,local_40,&local_50,0);
  if (iVar2 == iVar3) {
    FUN_140f9708a(&DAT_14c9647b8,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019451c FUN_14019451c body=907 status=ok
// SIG undefined FUN_14019451c(void)

int * FUN_14019451c(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  longlong *plVar29;
  int iVar30;
  int iVar31;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar28 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar28 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar28) {
      FUN_14021b4e8(param_1,iVar28);
    }
    iVar30 = (int)param_1[5];
    if (iVar30 == 0) {
      iVar23 = -1;
    }
    else {
      iVar23 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar23 = iVar30 + -1;
      }
      iVar23 = iVar23 >> 5;
    }
    plVar26 = param_1 + 2;
    iVar25 = iVar30 + 1;
    iVar31 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar31 = iVar30;
    }
    if (iVar31 >> 5 == iVar23) {
      *(int *)(param_1 + 5) = iVar25;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar30) {
        if (iVar30 + 0x20U < 0xa0) {
          iVar25 = 0x80;
          iVar23 = iVar30;
        }
        else {
          uVar24 = iVar30 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar24) {
              uVar19 = uVar24;
            }
          }
          else {
            uVar19 = (uVar24 * 3 >> 3) + uVar24 + 0x10;
          }
          uVar27 = FUN_144a3809e(uVar19 << 2,0);
          iVar23 = (int)(uVar27 >> 2);
          iVar25 = -0x20;
          if ((int)uVar24 <= iVar23) {
            iVar25 = iVar23 << 5;
          }
          iVar23 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar25;
        FUN_1446efbd8(plVar26,iVar23);
        iVar25 = (int)param_1[5] + 1;
      }
      iVar23 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar23 = iVar25;
      }
      *(int *)(param_1 + 5) = iVar25;
      if (iVar25 % 0x20 != 0) {
        plVar29 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar29 = plVar26;
        }
        bVar22 = -(char)(iVar25 % 0x20);
        *(uint *)((longlong)plVar29 + (longlong)(iVar23 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar29 + (longlong)(iVar23 >> 5) * 4) << (bVar22 & 0x1f)) >>
             (bVar22 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar28;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar26 = (longlong *)param_1[4];
    }
    bVar22 = (byte)iVar30 & 0x1f;
    puVar1 = (uint *)((longlong)plVar26 + (longlong)(iVar31 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    iVar28 = (int)param_1[6];
    lVar20 = (longlong)iVar28;
    iVar30 = *(int *)(*param_1 + 4 + lVar20 * 0x48);
    *(int *)(param_1 + 6) = iVar30;
    iVar23 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar23;
    if (iVar23 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar30 * 0x48) = 0xffffffff;
    }
  }
  plVar26 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar26 = (longlong *)param_1[4];
  }
  iVar30 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar30 = iVar28;
  }
  puVar1 = (uint *)((longlong)plVar26 + (longlong)(iVar30 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar28 & 0x1f);
  puVar2 = (ulonglong *)(*param_1 + lVar20 * 0x48);
  puVar4 = (undefined4 *)param_3[1];
  uVar27 = *(ulonglong *)*param_3;
  *puVar2 = uVar27;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  uVar13 = *(ulonglong *)(puVar4 + 4);
  uVar14 = *(ulonglong *)(puVar4 + 6);
  uVar15 = *(ulonglong *)(puVar4 + 8);
  uVar16 = *(ulonglong *)(puVar4 + 10);
  *(undefined4 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
  *(undefined4 *)(puVar2 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar7;
  puVar2[3] = uVar13;
  puVar2[4] = uVar14;
  puVar2[5] = uVar15;
  puVar2[6] = uVar16;
  *(undefined4 *)(puVar2 + 7) = puVar4[0xc];
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  uVar24 = ((uint)(uVar27 >> 0x14) & 0xffff ^ (uint)(uVar27 >> 4)) * -0x7a143595;
  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  uVar24 = uVar24 >> 0x10 ^ uVar24;
  cVar21 = '\0';
  iVar30 = iVar28;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar26 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar26 = (longlong *)param_1[8];
    }
    iVar30 = *(int *)((longlong)plVar26 + (ulonglong)((int)param_1[9] - 1U & uVar24) * 4);
    if (iVar30 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar30 * 0x48);
        if (*puVar3 == uVar27) {
          uVar27 = *puVar2;
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar13 = puVar2[1];
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
          uVar14 = puVar2[2];
          uVar7 = *(undefined4 *)((longlong)puVar2 + 0x14);
          uVar15 = puVar2[3];
          uVar8 = *(undefined4 *)((longlong)puVar2 + 0x1c);
          uVar16 = puVar2[4];
          uVar9 = *(undefined4 *)((longlong)puVar2 + 0x24);
          uVar17 = puVar2[5];
          uVar10 = *(undefined4 *)((longlong)puVar2 + 0x2c);
          uVar11 = *(undefined4 *)((longlong)puVar2 + 0x34);
          uVar18 = puVar2[7];
          uVar12 = *(undefined4 *)((longlong)puVar2 + 0x3c);
          *(int *)(puVar3 + 6) = (int)puVar2[6];
          *(undefined4 *)((longlong)puVar3 + 0x34) = uVar11;
          *(int *)(puVar3 + 7) = (int)uVar18;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar12;
          *(int *)(puVar3 + 4) = (int)uVar16;
          *(undefined4 *)((longlong)puVar3 + 0x24) = uVar9;
          *(int *)(puVar3 + 5) = (int)uVar17;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar10;
          *(int *)(puVar3 + 2) = (int)uVar14;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar7;
          *(int *)(puVar3 + 3) = (int)uVar15;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar8;
          *(int *)puVar3 = (int)uVar27;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
          *(int *)(puVar3 + 1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_1401948a8(param_1,iVar28);
          cVar21 = '\x01';
          goto LAB_14019468c;
        }
        iVar30 = (int)puVar3[8];
      } while (iVar30 != -1);
    }
    cVar21 = '\0';
    iVar30 = iVar28;
  }
LAB_14019468c:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar21;
  }
  if (cVar21 == '\0') {
    uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar19 < 4) {
      iVar28 = 1;
    }
    else {
      uVar27 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar28 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar28 <= (int)param_1[9])) {
      uVar24 = (int)param_1[9] - 1U & uVar24;
      *(uint *)((longlong)puVar2 + 0x44) = uVar24;
      plVar26 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar26 = param_1 + 7;
      }
      *(undefined4 *)(puVar2 + 8) =
           *(undefined4 *)
            ((longlong)plVar26 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4);
      plVar26 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar26 = param_1 + 7;
      }
      *(int *)((longlong)plVar26 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4) =
           iVar30;
    }
    else {
      *(int *)(param_1 + 9) = iVar28;
      FUN_140195ce8(param_1);
    }
  }
  *param_2 = iVar30;
  return param_2;
}



// FUNCTION 1401948a8 FUN_1401948a8 body=114 status=ok
// SIG undefined FUN_1401948a8(void)

void FUN_1401948a8(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14019491a FUN_14019491a body=1143 status=ok
// SIG undefined FUN_14019491a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14019491a(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  if (DAT_14cb10d38 != param_2) {
    DAT_14cb10d38 = param_2;
    if (DAT_14cb10cc8 != DAT_14cb10cf4) {
      uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      puVar6 = &DAT_14cb10cf8;
      if (DAT_14cb10d00 != (undefined *)0x0) {
        puVar6 = DAT_14cb10d00;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14cb10d08 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      while (iVar2 != -1) {
        puVar1 = (ulonglong *)(DAT_14cb10cc0 + (longlong)iVar2 * 0x48);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            DAT_14cb10d70 = (undefined4)puVar1[7];
            _DAT_14cb10d40 = puVar1[1];
            _DAT_14cb10d48 = puVar1[2];
            _DAT_14cb10d50 = puVar1[3];
            _DAT_14cb10d58 = puVar1[4];
            _DAT_14cb10d60 = puVar1[5];
            _DAT_14cb10d68 = puVar1[6];
            goto LAB_140194964;
          }
          break;
        }
        iVar2 = (int)puVar1[8];
      }
    }
    _DAT_14cb10d60 = 0;
    _DAT_14cb10d68 = 0;
    _DAT_14cb10d50 = 0;
    _DAT_14cb10d58 = 0;
    _DAT_14cb10d40 = 0;
    _DAT_14cb10d48 = 0;
    DAT_14cb10d70 = 1;
  }
LAB_140194964:
  local_48 = DAT_14cb10d70;
  local_58 = _DAT_14cb10d60;
  uStack_50 = _DAT_14cb10d68;
  local_68 = _DAT_14cb10d50;
  uStack_60 = _DAT_14cb10d58;
  local_78 = _DAT_14cb10d40;
  uStack_74 = DAT_14cb10d40_4;
  uStack_70 = _DAT_14cb10d48;
  iStack_6c = DAT_14cb10d48_4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  bVar8 = (byte)local_48;
  if (((byte)local_48 == 1) && (uVar4 = FUN_14099b09e(param_2,0), uVar4 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
    if (DAT_14cb10d38 != uVar4) {
      DAT_14cb10d38 = uVar4;
      if (DAT_14cb10cc8 != DAT_14cb10cf4) {
        uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar6 = &DAT_14cb10cf8;
        if (DAT_14cb10d00 != (undefined *)0x0) {
          puVar6 = DAT_14cb10d00;
        }
        iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14cb10d08 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb10cc0 + (longlong)iVar2 * 0x48);
          if (*puVar1 == uVar4) {
            if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              DAT_14cb10d70 = (undefined4)puVar1[7];
              _DAT_14cb10d40 = puVar1[1];
              _DAT_14cb10d48 = puVar1[2];
              _DAT_14cb10d50 = puVar1[3];
              _DAT_14cb10d58 = puVar1[4];
              _DAT_14cb10d60 = puVar1[5];
              _DAT_14cb10d68 = puVar1[6];
              goto LAB_140194c77;
            }
            break;
          }
          iVar2 = (int)puVar1[8];
        }
      }
      _DAT_14cb10d60 = 0;
      _DAT_14cb10d68 = 0;
      _DAT_14cb10d50 = 0;
      _DAT_14cb10d58 = 0;
      _DAT_14cb10d40 = 0;
      _DAT_14cb10d48 = 0;
      DAT_14cb10d70 = 1;
    }
LAB_140194c77:
    local_48 = DAT_14cb10d70;
    local_58 = _DAT_14cb10d60;
    uStack_50 = _DAT_14cb10d68;
    local_68 = _DAT_14cb10d50;
    uStack_60 = _DAT_14cb10d58;
    local_78 = _DAT_14cb10d40;
    uStack_74 = DAT_14cb10d40_4;
    uStack_70 = _DAT_14cb10d48;
    iStack_6c = DAT_14cb10d48_4;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
    bVar8 = (byte)local_48;
    if ((byte)local_48 == 0) {
      FUN_1401943ca(&DAT_14cb10cb8,param_2,&local_78);
      bVar8 = (byte)local_48;
    }
  }
  if ((bVar8 & 1) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_14019406e(param_2,0);
  }
  if (((local_58._4_4_ == 0 && (int)local_58 == 0) && (int)uStack_50 == 0) && uStack_50._4_4_ == 0)
  {
    if (((local_68._4_4_ != 0 || (int)local_68 != 0) || (int)uStack_60 != 0) || uStack_60._4_4_ != 0
       ) {
      local_88 = 0;
      uStack_80 = 0;
      if ((((iStack_6c != 0) && (-1 < (int)uStack_70)) && ((int)uStack_70 < DAT_14c9647dc)) &&
         (((puVar5 = (undefined8 *)
                     ((ulonglong)((uStack_70 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_70 >> 0x10) * 8)),
           puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == iStack_6c)) &&
          ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          uVar7 = *puVar5;
        }
        else {
          uVar7 = 0;
        }
        FUN_14019491a(&local_88,uVar7);
      }
      FUN_140a107dc(&local_98,&local_88,&local_68);
      local_58 = local_98;
      uStack_50 = uStack_90;
      FUN_1401943ca(&DAT_14cb10cb8,param_2,&local_78);
    }
  }
  *(int *)param_1 = (int)local_58;
  *(int *)((longlong)param_1 + 4) = local_58._4_4_;
  *(int *)(param_1 + 1) = (int)uStack_50;
  *(int *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140194d98 FUN_140194d98 body=55 status=ok
// SIG undefined FUN_140194d98(void)

void FUN_140194d98(longlong *param_1)

{
  FUN_140194dd0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140194dd0 FUN_140194dd0 body=121 status=ok
// SIG undefined FUN_140194dd0(void)

void FUN_140194dd0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 140194e4a FUN_140194e4a body=655 status=ok
// SIG undefined FUN_140194e4a(void)

void FUN_140194e4a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar11 = local_50;
    bVar4 = DAT_14c950c29;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar6;
        lVar12 = *param_1;
        uVar3 = *(ulonglong *)(lVar12 + (longlong)iVar10 * 0x10);
        local_7c = iVar11;
        local_70 = uVar9;
        if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar4 = DAT_14c950c29;
        }
        lVar12 = lVar12 + (longlong)iVar10 * 0x10;
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar9;
        *(int *)(lVar12 + 0xc) = iVar11;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar12 + 8) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar10;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar6 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar6 = local_78;
        }
        iVar2 = (int)local_78[3];
        iVar10 = (int)local_70;
        lVar12 = (longlong)iVar10;
        uVar5 = *(uint *)((longlong)plVar6 + lVar12 * 4) & uVar14;
        uVar9 = local_70;
        iVar11 = local_7c;
        if (uVar5 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar10) {
            iVar8 = iVar10;
          }
          if (iVar7 <= iVar10) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar8 - lVar12 == lVar13) goto LAB_14019508a;
          }
          uVar14 = 0xffffffff;
          uVar9 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar6 = local_78;
      } while (iVar10 < iVar2);
    }
  }
LAB_14019508a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401950da FUN_1401950da body=1366 status=ok
// SIG undefined FUN_1401950da(void)

undefined8 * FUN_1401950da(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  code *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  code *local_218;
  code *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  int local_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_128 = 0;
  iVar10 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_1e8[0] = param_2[1];
  if (local_1e8[0] == 0) {
    local_1c8 = (code *)0x0;
    uStack_1c0 = 0;
  }
  else {
    FUN_1400021e4(local_1e8,&local_1c8);
    iVar10 = (int)uStack_1c0;
  }
  iVar4 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(local_1e8,iVar4,local_1c8,1);
  uVar11 = uStack_190;
  lVar13 = local_1e8[0];
  lVar12 = (longlong)(int)uStack_190;
  uVar9 = (int)uStack_190 + 1;
  uStack_190 = CONCAT44(uStack_190._4_4_,uVar9);
  if (uStack_190._4_4_ < uVar9) {
    FUN_1446f84a2(&local_198,uVar11 & 0xffffffff);
  }
  *(longlong *)(local_198 + lVar12 * 8) = lVar13;
  if (local_1c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb10130 == 0) {
    local_220 = &local_1c8;
    local_1c8 = FUN_140754f84;
    local_210 = FUN_14081d0ea;
    local_218 = FUN_14081d0ea;
    local_228 = &LAB_147da9a76;
    local_230 = FUN_1409f3105;
    local_238 = L"Engine";
    local_240 = 0;
    local_248 = 0x10000000;
    local_250 = 8;
    local_258 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  uVar1 = *(undefined8 *)(DAT_14cb10130 + 0x18);
  uVar2 = *(undefined8 *)(*(longlong *)(DAT_14cb10130 + 0x20) + 0x18);
  lVar13 = (longlong)(int)(uint)uStack_150;
  uVar9 = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < uVar9) {
    uVar11 = uStack_150 & 0xffffffff;
    uStack_150._0_4_ = uVar9;
    FUN_1401d5364(&local_158,uVar11);
    uVar9 = (uint)uStack_150;
  }
  uStack_150._0_4_ = uVar9;
  *(undefined8 *)(local_158 + lVar13 * 0x10) = uVar2;
  *(undefined8 *)(local_158 + 8 + lVar13 * 0x10) = uVar1;
  lVar13 = FUN_140007dea();
  uVar9 = (uint)uStack_150;
  uVar1 = *(undefined8 *)(lVar13 + 0x18);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0x18);
  lVar13 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1401d5364(&local_158,uVar9);
  }
  *(undefined8 *)(local_158 + lVar13 * 0x10) = uVar2;
  *(undefined8 *)(local_158 + 8 + lVar13 * 0x10) = uVar1;
  (**(code **)(*DAT_14c9485b8 + 0x50))(DAT_14c9485b8,&local_198,&local_1a8,1);
  plVar8 = DAT_14c9485b8;
  if ((((int)uStack_1a0 == 0) || (*(longlong *)(local_1a8 + 0x20) != DAT_14c948098)) ||
     (*(longlong *)(local_1a8 + 0x28) != DAT_14c9480c0)) {
    *param_1 = *param_2;
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 2) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
    param_1[3] = 0;
    iVar10 = *(int *)(param_2 + 4);
    pvVar3 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar10;
    if ((longlong)iVar10 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar10,0);
      memcpy((void *)param_1[3],pvVar3,(longlong)iVar10 * 2);
    }
    goto LAB_1401953a5;
  }
  FUN_146857ec0(local_1a8,local_1e8);
  (**(code **)(*plVar8 + 0x158))(plVar8,&local_1c8,local_1e8);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  pvVar3 = local_1b8;
  local_208 = (undefined4)local_1c8;
  uStack_204 = local_1c8._4_4_;
  uStack_200 = (int)uStack_1c0;
  uStack_1fc = uStack_1c0._4_4_;
  local_1f8 = (void *)0x0;
  local_1f0 = local_1b0;
  if ((longlong)local_1b0 == 0) {
    local_1ec = 0;
    *param_1 = 0;
    param_1[1] = local_1c8;
    param_1[2] = uStack_1c0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
LAB_140195602:
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(&local_1f8,local_1b0,0);
    memcpy(local_1f8,pvVar3,(longlong)local_1b0 * 2);
    pvVar3 = local_1f8;
    lVar13 = (longlong)local_1f0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_208;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_204;
    *(undefined4 *)(param_1 + 2) = uStack_200;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_1fc;
    param_1[3] = 0;
    *(int *)(param_1 + 4) = local_1f0;
    if (lVar13 == 0) goto LAB_140195602;
    FUN_1446dd670(param_1 + 3,local_1f0,0);
    memcpy((void *)param_1[3],pvVar3,lVar13 * 2);
  }
  if (local_1f8 != (void *)0x0) {
    FUN_1400020a8(local_1f8);
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1401953a5:
  FUN_14019571a(&local_198);
  FUN_140195631(local_1a8,uStack_1a0 & 0xffffffff);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140195631 FUN_140195631 body=232 status=ok
// SIG undefined FUN_140195631(void)

void FUN_140195631(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (ushort *)(param_1 + 0x40);
    do {
      if (*(longlong *)(puVar4 + 0x10) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + 8);
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
      if ((*puVar4 & 1) == 0) {
        if (*(longlong *)puVar4 != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)puVar4 + 0x10);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (plVar3 = *(longlong **)puVar4, plVar3 != (longlong *)0x0)) {
            FUN_140958ed1(*plVar3,(int)plVar3[1]);
            if (*plVar3 != 0) {
              FUN_1400020a8();
            }
            goto LAB_1401956c7;
          }
        }
      }
      else {
        plVar3 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(*puVar4 & 0xfffffffc) * 2);
        LOCK();
        plVar2 = plVar3 + 0x18;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (plVar3 != (longlong *)0x0 && (int)*plVar2 == 0) {
          FUN_14587a8e6(plVar3);
LAB_1401956c7:
          FUN_1400020a8(plVar3);
        }
      }
      puVar4 = puVar4 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14019571a FUN_14019571a body=410 status=ok
// SIG undefined FUN_14019571a(void)

void FUN_14019571a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_14472eb64(param_1 + 0x14,0);
  }
  param_1[0x1a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
    FUN_1446efbd8(param_1 + 0x16,0);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1401958b4(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[4],(int)param_1[5]);
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



// FUNCTION 1401958b4 FUN_1401958b4 body=55 status=ok
// SIG undefined FUN_1401958b4(void)

void FUN_1401958b4(longlong *param_1)

{
  FUN_1401958ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401958ec FUN_1401958ec body=427 status=ok
// SIG undefined FUN_1401958ec(void)

void FUN_1401958ec(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      if (*(int *)(*local_80 + 0x14 + (longlong)iStack_64 * 0x20) != -1) {
        lVar4 = *local_80 + (longlong)iStack_64 * 0x20;
        if (*(longlong *)(lVar4 + 8) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0xffffffff00000000;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140195a98 FUN_140195a98 body=591 status=ok
// SIG undefined FUN_140195a98(void)

void FUN_140195a98(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140195c9e;
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
LAB_140195c9e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140195ce8 FUN_140195ce8 body=591 status=ok
// SIG undefined FUN_140195ce8(void)

void FUN_140195ce8(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x48);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x44 + lVar10 * 0x48) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x40 + lVar10 * 0x48) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140195eee;
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
LAB_140195eee:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140195f38 FUN_140195f38 body=563 status=ok
// SIG undefined FUN_140195f38(void)

void FUN_140195f38(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140196126;
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
LAB_140196126:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019616c FUN_14019616c body=28 status=ok
// SIG undefined FUN_14019616c(void)

void FUN_14019616c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140196188();
  FUN_1401961f6(param_1,uVar1);
  return;
}



// FUNCTION 140196188 FUN_140196188 body=109 status=ok
// SIG undefined FUN_140196188(void)

undefined4 FUN_140196188(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  while( true ) {
    plVar4 = param_2;
    if (plVar4 == (longlong *)0x0) {
      return 0xffffffff;
    }
    if (*(byte *)((longlong)plVar4 + 0xc) < 3) break;
    param_2 = *(longlong **)(*(longlong *)(*plVar4 + 0x5a8) + (longlong)(int)plVar4[1] * 0x10);
    if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 3)) {
      iVar1 = *(int *)(*(longlong *)(*plVar4 + 0x5d8) + (longlong)(int)plVar4[1] * 4);
      iVar3 = -iVar1;
      if (iVar3 < 0) {
        iVar3 = iVar1;
      }
      puVar2 = (undefined8 *)FUN_14298ed9e(param_1,iVar3);
      if ((puVar2 != (undefined8 *)0x0) && ((longlong *)*puVar2 == plVar4)) {
        uVar5 = *(undefined4 *)(puVar2 + 0x10);
      }
      return uVar5;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1401961f6 FUN_1401961f6 body=121 status=ok
// SIG undefined FUN_1401961f6(void)

longlong FUN_1401961f6(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar2 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar2 = *(longlong *)(param_1 + 400);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x150) + (longlong)iVar3 * 0x170;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar3 * 0x170) == param_2) break;
        iVar3 = *(int *)(lVar2 + 0x168);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_140196206;
    }
  }
  lVar2 = 0;
LAB_140196206:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140196270 FUN_140196270 body=180 status=ok
// SIG undefined FUN_140196270(void)

undefined8 FUN_140196270(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  
  if (((param_1 != 0) && (DAT_14cadbb28 != 0)) && (*(int *)(DAT_14cadbb28 + 0xc) != 0)) {
    puVar4 = (uint *)(DAT_14cadbb28 + 8);
    uVar1 = *puVar4;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(DAT_14cadbb28 + 0xc))) &&
       (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (DAT_14cadba60 == '\x01')))) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      cVar2 = FUN_1447ffd82(puVar4,lVar3);
      if (cVar2 != '\0') {
        FUN_140196324(DAT_14cadbb28 + 0x10,param_1);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140196324 FUN_140196324 body=220 status=ok
// SIG undefined FUN_140196324(void)

undefined8 FUN_140196324(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x35) = 1;
  UNLOCK();
  if (param_2 == 0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
      uVar7 = (ulonglong)uVar3;
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = (ulonglong)uVar8 | uVar7 << 0x20;
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 140196400 FUN_140196400 body=138 status=ok
// SIG undefined FUN_140196400(void)

undefined8 FUN_140196400(double *param_1,float param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_3 + 0x1048) - *param_1;
  dVar4 = *(double *)(param_3 + 0x1050) - param_1[1];
  dVar5 = *(double *)(param_3 + 0x1058) - param_1[2];
  fVar3 = (float)SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar2 * dVar2);
  dVar4 = *(double *)(param_3 + 0x858) * 0.5;
  dVar2 = *(double *)(param_3 + 0x830) * 0.5;
  if (dVar2 <= dVar4) {
    dVar2 = dVar4;
  }
  fVar1 = 1.0;
  if (1.0 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar1 = ((float)dVar2 * param_2) / fVar1;
  return CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1 + fVar1);
}



// FUNCTION 14019648a FUN_14019648a body=118 status=ok
// SIG undefined FUN_14019648a(void)

void FUN_14019648a(longlong *param_1)

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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140196500 FUN_140196500 body=118 status=ok
// SIG undefined FUN_140196500(void)

void FUN_140196500(longlong *param_1)

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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140196576 FUN_140196576 body=232 status=ok
// SIG undefined FUN_140196576(void)

undefined8 * FUN_140196576(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 14019665e FUN_14019665e body=234 status=ok
// SIG undefined FUN_14019665e(void)

undefined8 * FUN_14019665e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140196748 FUN_140196748 body=4375 status=ok
// SIG undefined FUN_140196748(void)

void FUN_140196748(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  byte bVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  code *pcVar27;
  uint *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  code *pcVar31;
  ulonglong uVar32;
  int iVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  uint *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  code *local_88;
  code *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14cac1d70 == 0) {
    local_d0 = &local_80;
    local_80 = FUN_144b223ce;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_1432411d6;
    local_d8 = &LAB_147878f54;
    local_e0 = &LAB_1417ad3ba;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000004;
    local_100 = 0x10;
    local_108 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
  }
  pfVar6 = DAT_14cb11668;
  if ((*(int *)(DAT_14cac1d70 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8)
      == DAT_14cac1d70 + 0x30)) goto LAB_140197296;
  if (*(char *)*param_1 == '\x01') {
    plVar3 = (longlong *)param_1[1];
    fVar35 = *(float *)param_1[2];
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar15 + 0xc60);
    local_98 = param_1;
    if (iVar7 == 0x40000002) {
      fVar35 = fVar35 * *DAT_14cb11668;
LAB_14019683d:
      uVar21 = 0;
      lVar15 = DAT_14cb11680;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        fVar35 = fVar35 * *DAT_14cb11668;
      }
      else if (iVar7 == 2) {
        fVar35 = fVar35 * *DAT_14cb11668;
        iVar7 = 2;
      }
      else {
        if (iVar7 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar34 = DVar13 == DVar14;
          iVar7 = *(int *)(lVar15 + 0xc60);
        }
        else {
          bVar34 = false;
        }
        fVar35 = fVar35 * pfVar6[bVar34 ^ 1];
        if (iVar7 == 0x40000002) goto LAB_14019683d;
      }
      lVar15 = DAT_14cb11680;
      bVar34 = true;
      if (((DAT_14c86a9f8 & 1) != 0) && (iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar34 = DVar13 == DVar14;
        }
        else {
          bVar34 = false;
        }
      }
      uVar21 = (ulonglong)(bVar34 ^ 1);
    }
    fVar36 = (float)*(int *)(lVar15 + uVar21 * 4);
    local_90 = param_2;
    (**(code **)(*param_2 + 0x9f8))(param_2,&local_80);
    if ((longlong)local_78 != 0) {
      if (fVar36 <= fVar35) {
        fVar35 = fVar36;
      }
      pcVar27 = local_80 + (longlong)local_78 * 8;
      plVar17 = plVar3 + 7;
      local_a8 = plVar3 + 8;
      puVar28 = (uint *)(plVar3 + 2);
      pcVar31 = local_80;
      local_b0 = puVar28;
      local_88 = pcVar27;
      do {
        uVar21 = *(ulonglong *)pcVar31;
        if ((uVar21 != 0) && ((*(uint *)(uVar21 + 8) >> 0x1e & 1) == 0)) {
          uVar8 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          uVar8 = uVar8 >> 0x10 ^ uVar8;
          iVar7 = (int)plVar3[1];
          iVar33 = *(int *)((longlong)plVar3 + 0x34);
          if (iVar7 != iVar33) {
            plVar16 = (longlong *)plVar3[8];
            if ((longlong *)plVar3[8] == (longlong *)0x0) {
              plVar16 = plVar17;
            }
            iVar9 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar3[9] - 1U & uVar8) * 4);
            if (iVar9 != -1) {
              do {
                puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar9 * 0x18);
                if (*puVar1 == uVar21) {
                  if (puVar1 != (ulonglong *)0x0) goto LAB_140196aed;
                  break;
                }
                iVar9 = (int)puVar1[2];
              } while (iVar9 != -1);
            }
          }
          if (iVar33 == 0) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            if (*(int *)((longlong)plVar3 + 0xc) == iVar7) {
              FUN_14482b872(plVar3,iVar7);
              puVar28 = local_b0;
            }
            iVar33 = (int)plVar3[5];
            if (iVar33 == 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = iVar33 + 0x1e;
              if (-1 < iVar33 + -1) {
                iVar9 = iVar33 + -1;
              }
              iVar9 = iVar9 >> 5;
            }
            iVar11 = iVar33 + 1;
            iVar19 = iVar33 + 0x1f;
            if (-1 < iVar33) {
              iVar19 = iVar33;
            }
            if (iVar19 >> 5 == iVar9) {
              *(int *)(plVar3 + 5) = iVar11;
            }
            else {
              if (*(int *)((longlong)plVar3 + 0x2c) <= iVar33) {
                iVar9 = iVar33;
                if (iVar33 + 0x20U < 0xa0) {
                  iVar11 = 0x80;
                }
                else {
                  uVar22 = iVar33 + 0x20U >> 5;
                  if (*(int *)((longlong)plVar3 + 0x2c) + 0x1fU < 0xa0) {
                    uVar26 = 4;
                    if (4 < uVar22) {
                      uVar26 = uVar22;
                    }
                  }
                  else {
                    uVar26 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                  }
                  uVar24 = (ulonglong)(uVar26 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar10 = (uint)(uVar24 + 0xf);
                      if (uVar26 < 0x1ffd) {
                        uVar24 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]];
                      }
                      else {
                        uVar32 = uVar24 + 0xf & 0xfffffffffffffff0;
                        puVar28 = local_b0;
                        if (uVar32 < 0x7ff1) {
                          bVar18 = (&DAT_14c841e00)[uVar10 >> 4];
                          uVar25 = 0x32;
                          if (0x32 < bVar18) {
                            uVar25 = (ulonglong)bVar18;
                          }
                          uVar29 = 0x32 - (ulonglong)bVar18;
                          do {
                            uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0)
                            goto LAB_140196e96;
                            lVar15 = uVar25 + 1 + uVar29;
                            uVar29 = uVar29 - 1;
                          } while (lVar15 != 0x33);
                        }
                        uVar24 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar24 = 0x10;
                        }
                        uVar24 = -uVar24 & (uVar32 + uVar24) - 1;
                      }
                    }
                    else {
                      local_a0 = (ulonglong)uVar22;
                      uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
                      uVar22 = (uint)local_a0;
                      puVar28 = local_b0;
                      iVar9 = (int)plVar3[5];
                    }
                  }
LAB_140196e96:
                  iVar23 = (int)(uVar24 >> 2);
                  iVar11 = iVar23 << 5;
                  if (iVar23 < (int)uVar22) {
                    iVar11 = -0x20;
                  }
                }
                *(int *)((longlong)plVar3 + 0x2c) = iVar11;
                FUN_1446efbd8(puVar28,iVar9);
                iVar11 = (int)plVar3[5] + 1;
                puVar28 = local_b0;
              }
              iVar9 = iVar11 + 0x1f;
              if (-1 < iVar11) {
                iVar9 = iVar11;
              }
              *(int *)(plVar3 + 5) = iVar11;
              if (iVar11 % 0x20 != 0) {
                puVar20 = (uint *)plVar3[4];
                if ((uint *)plVar3[4] == (uint *)0x0) {
                  puVar20 = puVar28;
                }
                bVar18 = -(char)(iVar11 % 0x20);
                puVar20[iVar9 >> 5] = (puVar20[iVar9 >> 5] << (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
              }
            }
            lVar15 = (longlong)iVar7;
            puVar20 = (uint *)plVar3[4];
            if ((uint *)plVar3[4] == (uint *)0x0) {
              puVar20 = puVar28;
            }
            bVar18 = (byte)iVar33 & 0x1f;
            puVar20[iVar19 >> 5] =
                 puVar20[iVar19 >> 5] & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
          }
          else {
            iVar7 = (int)plVar3[6];
            lVar15 = (longlong)iVar7;
            iVar9 = *(int *)(*plVar3 + 4 + lVar15 * 0x18);
            *(int *)(plVar3 + 6) = iVar9;
            *(int *)((longlong)plVar3 + 0x34) = iVar33 + -1;
            puVar28 = local_b0;
            if (iVar33 + -1 != 0) {
              *(undefined4 *)(*plVar3 + (longlong)iVar9 * 0x18) = 0xffffffff;
            }
          }
          puVar20 = (uint *)plVar3[4];
          if ((uint *)plVar3[4] == (uint *)0x0) {
            puVar20 = puVar28;
          }
          iVar33 = iVar7 + 0x1f;
          if (-1 < iVar7) {
            iVar33 = iVar7;
          }
          puVar20[iVar33 >> 5] = puVar20[iVar33 >> 5] | 1 << ((byte)iVar7 & 0x1f);
          puVar1 = (ulonglong *)(*plVar3 + lVar15 * 0x18);
          *puVar1 = uVar21;
          *(undefined4 *)(puVar1 + 1) = 0;
          *(undefined4 *)(puVar1 + 2) = 0xffffffff;
          uVar22 = (int)plVar3[1] - *(int *)((longlong)plVar3 + 0x34);
          if ((uVar22 != 0) && (uVar22 != 1)) {
            plVar16 = (longlong *)plVar3[8];
            if ((longlong *)plVar3[8] == (longlong *)0x0) {
              plVar16 = plVar17;
            }
            iVar33 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar3[9] - 1U & uVar8) * 4);
            if (iVar33 != -1) {
              do {
                puVar2 = (ulonglong *)(*plVar3 + (longlong)iVar33 * 0x18);
                if (*puVar2 == uVar21) {
                  uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
                  uVar21 = puVar1[1];
                  uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
                  *(int *)puVar2 = (int)*puVar1;
                  *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
                  *(int *)(puVar2 + 1) = (int)uVar21;
                  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
                  FUN_147dc3312(plVar3,iVar7);
                  goto LAB_140196ace;
                }
                iVar33 = (int)puVar2[2];
              } while (iVar33 != -1);
            }
          }
          if (uVar22 < 4) {
            uVar26 = 1;
          }
          else {
            uVar21 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
            lVar15 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar26 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar22 < 1) || ((int)uVar26 <= (int)plVar3[9])) {
            uVar8 = (int)plVar3[9] - 1U & uVar8;
            *(uint *)((longlong)puVar1 + 0x14) = uVar8;
            plVar16 = (longlong *)plVar3[8];
            if ((longlong *)plVar3[8] == (longlong *)0x0) {
              plVar16 = plVar17;
            }
            *(undefined4 *)(puVar1 + 2) =
                 *(undefined4 *)
                  ((longlong)plVar16 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar8) * 4);
            plVar16 = (longlong *)plVar3[8];
            if ((longlong *)plVar3[8] == (longlong *)0x0) {
              plVar16 = plVar17;
            }
            *(int *)((longlong)plVar16 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar8) * 4)
                 = iVar7;
          }
          else {
            *(uint *)(plVar3 + 9) = uVar26;
            if (plVar3[8] != 0) {
              FUN_1446efa72(local_a8,0,0,4);
              uVar26 = *(uint *)(plVar3 + 9);
              puVar28 = local_b0;
            }
            if (uVar26 == 1) {
              if (*local_a8 != 0) {
                FUN_1446efa72(local_a8,0,0,4);
                puVar28 = local_b0;
              }
LAB_140196c25:
              uVar8 = 0;
              do {
                plVar16 = (longlong *)plVar3[8];
                if ((longlong *)plVar3[8] == (longlong *)0x0) {
                  plVar16 = plVar17;
                }
                *(undefined4 *)
                 ((longlong)plVar16 + (ulonglong)((int)plVar3[9] + 0x7fffffffU & uVar8) * 4) =
                     0xffffffff;
                uVar8 = uVar8 + 1;
              } while (uVar26 != uVar8);
            }
            else {
              if (uVar26 == 0) goto LAB_140196ace;
              FUN_1446efa72(local_a8,0,uVar26,4);
              puVar28 = local_b0;
              if (0 < (int)uVar26) goto LAB_140196c25;
            }
            iVar33 = (int)plVar3[5];
            if (iVar33 == 0) {
              uVar21 = 0;
              uVar24 = 1;
              iVar9 = 0;
              iVar11 = 0;
            }
            else {
              puVar20 = (uint *)plVar3[4];
              if ((uint *)plVar3[4] == (uint *)0x0) {
                puVar20 = puVar28;
              }
              uVar8 = *puVar20;
              if (uVar8 == 0) {
                iVar9 = iVar33 + 0x1e;
                if (-1 < iVar33 + -1) {
                  iVar9 = iVar33 + -1;
                }
                uVar21 = 0;
                uVar24 = (ulonglong)(uint)(iVar9 >> 5);
                if (iVar9 >> 5 < 1) {
                  uVar24 = uVar21;
                }
                iVar11 = 0;
                do {
                  if (uVar24 == uVar21) goto LAB_140196ace;
                  iVar11 = iVar11 + 0x20;
                  uVar8 = puVar20[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar8 == 0);
              }
              else {
                uVar21 = 0;
                iVar11 = 0;
              }
              uVar24 = (ulonglong)(-uVar8 & uVar8);
              uVar32 = uVar24 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar9 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (iVar33 <= iVar9) {
                iVar9 = iVar33;
              }
            }
            if (iVar9 < iVar33) {
              uVar8 = 0xffffffff;
              do {
                lVar15 = *plVar3;
                lVar30 = (longlong)iVar9;
                uVar32 = *(ulonglong *)(lVar15 + lVar30 * 0x18);
                uVar22 = ((uint)(uVar32 >> 0x14) & 0xffff ^ (uint)(uVar32 >> 4)) * -0x7a143595;
                uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                uVar32 = (longlong)(int)(uVar22 >> 0x10 ^ uVar22) & (longlong)(int)plVar3[9] - 1U;
                iVar33 = (int)uVar32;
                *(int *)(lVar15 + 0x14 + lVar30 * 0x18) = iVar33;
                plVar16 = (longlong *)plVar3[8];
                if ((longlong *)plVar3[8] == (longlong *)0x0) {
                  plVar16 = plVar17;
                }
                *(undefined4 *)(lVar15 + 0x10 + lVar30 * 0x18) =
                     *(undefined4 *)
                      ((longlong)plVar16 + ((longlong)(int)plVar3[9] - 1U & uVar32) * 4);
                plVar16 = (longlong *)plVar3[8];
                if ((longlong *)plVar3[8] == (longlong *)0x0) {
                  plVar16 = plVar17;
                }
                *(int *)((longlong)plVar16 + ((longlong)iVar33 & (longlong)(int)plVar3[9] - 1U) * 4)
                     = iVar9;
                uVar8 = ~(uint)uVar24 & uVar8;
                puVar28 = (uint *)plVar3[4];
                if ((uint *)plVar3[4] == (uint *)0x0) {
                  puVar28 = local_b0;
                }
                iVar33 = (int)plVar3[5];
                iVar9 = (int)uVar21;
                lVar15 = (longlong)iVar9;
                uVar22 = puVar28[lVar15] & uVar8;
                if (uVar22 == 0) {
                  iVar19 = iVar33 + 0x1e;
                  if (-1 < iVar33 + -1) {
                    iVar19 = iVar33 + -1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar23 = iVar19;
                  if (iVar19 < iVar9) {
                    iVar23 = iVar9;
                  }
                  if (iVar19 <= iVar9) break;
                  lVar30 = 0;
                  while( true ) {
                    iVar11 = iVar11 + 0x20;
                    uVar22 = puVar28[lVar15 + lVar30 + 1];
                    if (uVar22 != 0) break;
                    lVar30 = lVar30 + 1;
                    if (iVar23 - lVar15 == lVar30) goto LAB_140196ace;
                  }
                  uVar21 = (ulonglong)(iVar9 + (int)lVar30 + 1);
                  uVar8 = 0xffffffff;
                }
                uVar24 = (ulonglong)(-uVar22 & uVar22);
                uVar32 = uVar24 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iVar9 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              } while (iVar9 < iVar33);
            }
          }
LAB_140196ace:
          puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar7 * 0x18);
          pcVar27 = local_88;
          puVar28 = local_b0;
LAB_140196aed:
          fVar36 = *(float *)(puVar1 + 1);
          if (fVar36 <= fVar35) {
            fVar36 = fVar35;
          }
          *(float *)(puVar1 + 1) = fVar36;
        }
        pcVar31 = pcVar31 + 8;
      } while (pcVar31 != pcVar27);
    }
    param_1 = local_98;
    param_2 = local_90;
    if (local_80 != (code *)0x0) {
      FUN_1400020a8(local_80);
      param_2 = local_90;
    }
  }
  if (*(char *)param_1[3] != '\x01') goto LAB_140197296;
  iVar7 = *(int *)(param_1[4] + 4);
  if (iVar7 != *DAT_14cb11638) {
    if (iVar7 != 0) goto LAB_140197296;
    iVar7 = 1;
  }
  plVar3 = (longlong *)param_1[5];
  lVar15 = param_2[0xcc];
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar15);
  }
  else if (lVar15 == 0) goto LAB_140197296;
  if ((*(longlong *)(lVar15 + 0xe0) == 0) ||
     (uVar21 = *(ulonglong *)(*(longlong *)(lVar15 + 0xe0) + 0x40), *(int *)(uVar21 + 0x70) < 1))
  goto LAB_140197296;
  uVar8 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  iVar33 = (int)plVar3[1];
  iVar9 = *(int *)((longlong)plVar3 + 0x34);
  if (iVar33 != iVar9) {
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    iVar11 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar8) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar11 * 0x18);
        if (*puVar1 == uVar21) {
          if (puVar1 != (ulonglong *)0x0) goto LAB_140197289;
          break;
        }
        iVar11 = (int)puVar1[2];
      } while (iVar11 != -1);
    }
  }
  if (iVar9 == 0) {
    *(int *)(plVar3 + 1) = iVar33 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) == iVar33) {
      FUN_14482b872(plVar3,iVar33);
    }
    iVar9 = (int)plVar3[5];
    if (iVar9 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar11 = iVar9 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar17 = plVar3 + 2;
    iVar19 = iVar9 + 1;
    iVar23 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar23 = iVar9;
    }
    if (iVar23 >> 5 == iVar11) {
      *(int *)(plVar3 + 5) = iVar19;
    }
    else {
      if (*(int *)((longlong)plVar3 + 0x2c) <= iVar9) {
        iVar11 = iVar9;
        if (iVar9 + 0x20U < 0xa0) {
          iVar19 = 0x80;
        }
        else {
          uVar22 = iVar9 + 0x20U >> 5;
          local_b0 = (uint *)(ulonglong)uVar22;
          if (*(int *)((longlong)plVar3 + 0x2c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar22) {
              uVar26 = uVar22;
            }
          }
          else {
            uVar26 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
          }
          uVar24 = (ulonglong)(uVar26 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar22 = (uint)(uVar24 + 0xf);
              if (uVar26 < 0x1ffd) {
                uVar24 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
              }
              else {
                uVar32 = uVar24 + 0xf & 0xfffffffffffffff0;
                if (uVar32 < 0x7ff1) {
                  bVar18 = (&DAT_14c841e00)[uVar22 >> 4];
                  uVar25 = 0x32;
                  if (0x32 < bVar18) {
                    uVar25 = (ulonglong)bVar18;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar18;
                  do {
                    uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_14019762f;
                    lVar15 = uVar25 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar15 != 0x33);
                }
                uVar24 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar24 = (ulonglong)DAT_14c841df8;
                }
                uVar24 = -uVar24 & (uVar32 + uVar24) - 1;
              }
            }
            else {
              uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
              iVar11 = (int)plVar3[5];
            }
          }
LAB_14019762f:
          iVar12 = (int)(uVar24 >> 2);
          iVar19 = -0x20;
          if ((int)local_b0 <= iVar12) {
            iVar19 = iVar12 << 5;
          }
        }
        *(int *)((longlong)plVar3 + 0x2c) = iVar19;
        FUN_1446efbd8(plVar17,iVar11);
        iVar19 = (int)plVar3[5] + 1;
      }
      iVar11 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar11 = iVar19;
      }
      *(int *)(plVar3 + 5) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar16 = (longlong *)plVar3[4];
        if ((longlong *)plVar3[4] == (longlong *)0x0) {
          plVar16 = plVar17;
        }
        bVar18 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar11 >> 5) * 4) << (bVar18 & 0x1f)) >>
             (bVar18 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar33;
    if ((longlong *)plVar3[4] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[4];
    }
    bVar18 = (byte)iVar9 & 0x1f;
    puVar28 = (uint *)((longlong)plVar17 + (longlong)(iVar23 >> 5) * 4);
    *puVar28 = *puVar28 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
  }
  else {
    iVar33 = (int)plVar3[6];
    lVar15 = (longlong)iVar33;
    iVar11 = *(int *)(*plVar3 + 4 + lVar15 * 0x18);
    *(int *)(plVar3 + 6) = iVar11;
    *(int *)((longlong)plVar3 + 0x34) = iVar9 + -1;
    if (iVar9 + -1 != 0) {
      *(undefined4 *)(*plVar3 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  puVar28 = (uint *)(plVar3 + 2);
  uVar22 = 1;
  puVar20 = (uint *)plVar3[4];
  if ((uint *)plVar3[4] == (uint *)0x0) {
    puVar20 = puVar28;
  }
  iVar9 = iVar33 + 0x1f;
  if (-1 < iVar33) {
    iVar9 = iVar33;
  }
  puVar20[iVar9 >> 5] = puVar20[iVar9 >> 5] | 1 << ((byte)iVar33 & 0x1f);
  puVar1 = (ulonglong *)(*plVar3 + lVar15 * 0x18);
  *puVar1 = uVar21;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar26 = (int)plVar3[1] - *(int *)((longlong)plVar3 + 0x34);
  if ((uVar26 != 0) && (uVar26 != 1)) {
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    iVar9 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar8) * 4);
    if (iVar9 != -1) {
      do {
        puVar2 = (ulonglong *)(*plVar3 + (longlong)iVar9 * 0x18);
        if (*puVar2 == uVar21) {
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar21 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar2 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
          *(int *)(puVar2 + 1) = (int)uVar21;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
          FUN_147dc3384(plVar3,iVar33);
          goto LAB_140197277;
        }
        iVar9 = (int)puVar2[2];
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar26) {
    uVar21 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar26 < 1) || ((int)uVar22 <= (int)plVar3[9])) {
    uVar8 = (int)plVar3[9] - 1U & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    plVar17 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar17 = plVar3 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar17 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar17 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar17 = plVar3 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar33;
  }
  else {
    *(uint *)(plVar3 + 9) = uVar22;
    plVar17 = plVar3 + 8;
    if (plVar3[8] != 0) {
      FUN_1446efa72(plVar17,0,0,4);
      uVar22 = *(uint *)(plVar3 + 9);
    }
    plVar16 = plVar3 + 7;
    if (uVar22 == 1) {
      if (*plVar17 != 0) {
        FUN_1446efa72(plVar17,0,0,4);
      }
LAB_1401973a9:
      uVar8 = 0;
      do {
        plVar17 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        *(undefined4 *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar22 != uVar8);
    }
    else {
      if (uVar22 == 0) goto LAB_140197277;
      FUN_1446efa72(plVar17,0,uVar22,4);
      if (0 < (int)uVar22) goto LAB_1401973a9;
    }
    iVar9 = (int)plVar3[5];
    if (iVar9 == 0) {
      uVar21 = 0;
      uVar24 = 1;
      iVar11 = 0;
      iVar19 = 0;
    }
    else {
      puVar20 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar20 = puVar28;
      }
      uVar8 = *puVar20;
      if (uVar8 == 0) {
        iVar11 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar11 = iVar9 + -1;
        }
        uVar21 = 0;
        uVar24 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar24 = uVar21;
        }
        iVar19 = 0;
        do {
          if (uVar24 == uVar21) goto LAB_140197277;
          iVar19 = iVar19 + 0x20;
          uVar8 = puVar20[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar21 = 0;
        iVar19 = 0;
      }
      uVar24 = (ulonglong)(-uVar8 & uVar8);
      uVar32 = uVar24 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar11) {
        iVar11 = iVar9;
      }
    }
    if (iVar11 < iVar9) {
      uVar8 = 0xffffffff;
      do {
        lVar15 = *plVar3;
        lVar30 = (longlong)iVar11;
        uVar32 = *(ulonglong *)(lVar15 + lVar30 * 0x18);
        uVar22 = ((uint)(uVar32 >> 0x14) & 0xffff ^ (uint)(uVar32 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar32 = (longlong)(int)(uVar22 >> 0x10 ^ uVar22) & (longlong)(int)plVar3[9] - 1U;
        iVar9 = (int)uVar32;
        *(int *)(lVar15 + 0x14 + lVar30 * 0x18) = iVar9;
        plVar17 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        *(undefined4 *)(lVar15 + 0x10 + lVar30 * 0x18) =
             *(undefined4 *)((longlong)plVar17 + ((longlong)(int)plVar3[9] - 1U & uVar32) * 4);
        plVar17 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        *(int *)((longlong)plVar17 + ((longlong)iVar9 & (longlong)(int)plVar3[9] - 1U) * 4) = iVar11
        ;
        uVar8 = ~(uint)uVar24 & uVar8;
        puVar20 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar20 = puVar28;
        }
        iVar9 = (int)plVar3[5];
        iVar11 = (int)uVar21;
        lVar15 = (longlong)iVar11;
        uVar22 = puVar20[lVar15] & uVar8;
        if (uVar22 == 0) {
          iVar23 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar23 = iVar9 + -1;
          }
          iVar23 = iVar23 >> 5;
          iVar12 = iVar23;
          if (iVar23 < iVar11) {
            iVar12 = iVar11;
          }
          if (iVar23 <= iVar11) break;
          lVar30 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar22 = puVar20[lVar15 + lVar30 + 1];
            if (uVar22 != 0) break;
            lVar30 = lVar30 + 1;
            if (iVar12 - lVar15 == lVar30) goto LAB_140197277;
          }
          uVar21 = (ulonglong)(iVar11 + (int)lVar30 + 1);
          uVar8 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar32 = uVar24 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar9);
    }
  }
LAB_140197277:
  puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar33 * 0x18);
LAB_140197289:
  iVar33 = 1;
  if (1 < iVar7) {
    iVar33 = iVar7;
  }
  *(int *)(puVar1 + 1) = iVar33;
LAB_140197296:
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140197860 FUN_140197860 body=353 status=ok
// SIG undefined FUN_140197860(void)

undefined4 *
FUN_140197860(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140197ed8(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  *local_48 = *(ulonglong *)*param_3;
  local_48[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1401979c2(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1401980b4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401979c2 FUN_1401979c2 body=211 status=ok
// SIG undefined FUN_1401979c2(void)

void FUN_1401979c2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          plVar1 = (longlong *)plVar6[1];
          if (plVar1 != (longlong *)0x0) {
            if (*plVar1 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_147d6c21c(param_1,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1401979f2;
    }
  }
  uVar5 = 0;
LAB_1401979f2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140197a96 FUN_140197a96 body=1088 status=ok
// SIG undefined FUN_140197a96(void)

void FUN_140197a96(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(uint *)(param_1 + 5);
  local_68 = param_1;
  if (uVar2 == 0) {
    uVar11 = 1;
    uVar18 = 0;
    iVar12 = 0;
    uVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      iVar12 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar12 = uVar2 - 1;
      }
      uVar18 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar11 == uVar18) goto LAB_140197b45;
        iVar12 = iVar12 + 0x20;
        uVar4 = puVar5[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
  }
  if (uVar4 != uVar2) {
    uVar17 = 0xffffffff;
    local_78 = (ulonglong)uVar2;
    local_70 = (uint *)(param_1 + 2);
    do {
      lVar15 = *param_1;
      uVar7 = (**(code **)(**(longlong **)(lVar15 + (longlong)(int)uVar4 * 0x18) + 0x2f0))();
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_58,L"Renderer",1);
        local_60 = local_58;
        uVar8 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar8,local_60);
      }
      local_58 = (uint *)(double)*(float *)(lVar15 + (longlong)(int)uVar4 * 0x18 + 8);
      local_50 = local_58;
      (**(code **)(*DAT_14cad8310 + 0x180))(local_58,uVar7,&local_58,(int)param_1[0x14]);
      uVar17 = uVar17 & ~(uint)uVar11;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = local_70;
      }
      uVar2 = *(uint *)(param_1 + 5);
      iVar14 = (int)uVar18;
      lVar15 = (longlong)iVar14;
      uVar4 = puVar5[lVar15] & uVar17;
      if (uVar4 == 0) {
        iVar10 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar10 = uVar2 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar10) {
          lVar16 = 0;
          do {
            uVar4 = puVar5[lVar15 + lVar16 + 1];
            if (uVar4 != 0) {
              uVar18 = (ulonglong)(iVar14 + (int)lVar16 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140197cb8;
            }
            iVar12 = iVar12 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar15 != lVar16);
          uVar17 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar18 = (ulonglong)(iVar14 + 1);
        uVar4 = uVar2;
      }
      else {
LAB_140197cb8:
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
      }
    } while (uVar4 != (uint)local_78);
  }
LAB_140197b45:
  puVar5 = (uint *)(local_68 + 0xc);
  uVar2 = *(uint *)(local_68 + 0xf);
  if (uVar2 == 0) {
    uVar11 = 1;
    uVar18 = 0;
    iVar12 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = (uint *)local_68[0xe];
    if ((uint *)local_68[0xe] == (uint *)0x0) {
      puVar6 = puVar5;
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar12 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar12 = uVar2 - 1;
      }
      uVar18 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar11 == uVar18) goto LAB_140197d4c;
        iVar12 = iVar12 + 0x20;
        uVar4 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
  }
  if (uVar4 != uVar2) {
    uVar17 = 0xffffffff;
    plVar13 = local_68;
    local_78 = (ulonglong)uVar2;
    do {
      uVar7 = *(undefined8 *)(plVar13[10] + (longlong)(int)uVar4 * 0x18);
      uVar3 = *(undefined4 *)(plVar13[10] + 8 + (longlong)(int)uVar4 * 0x18);
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_58,L"Renderer",1);
        local_70 = local_58;
        uVar8 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar8,local_70);
      }
      (**(code **)(*DAT_14cad8310 + 0x1d8))(DAT_14cad8310,uVar7,uVar3);
      uVar17 = uVar17 & ~(uint)uVar11;
      puVar6 = (uint *)plVar13[0xe];
      if ((uint *)plVar13[0xe] == (uint *)0x0) {
        puVar6 = puVar5;
      }
      uVar2 = *(uint *)(plVar13 + 0xf);
      iVar14 = (int)uVar18;
      lVar15 = (longlong)iVar14;
      uVar4 = puVar6[lVar15] & uVar17;
      if (uVar4 == 0) {
        iVar10 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar10 = uVar2 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar10) {
          lVar16 = 0;
          do {
            uVar4 = puVar6[lVar15 + lVar16 + 1];
            if (uVar4 != 0) {
              uVar18 = (ulonglong)(iVar14 + (int)lVar16 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140197e33;
            }
            iVar12 = iVar12 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar15 != lVar16);
          uVar17 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar18 = (ulonglong)(iVar14 + 1);
        plVar13 = local_68;
        uVar4 = uVar2;
      }
      else {
LAB_140197e33:
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
      }
    } while (uVar4 != (uint)local_78);
  }
LAB_140197d4c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140197ed8 FUN_140197ed8 body=476 status=ok
// SIG undefined FUN_140197ed8(void)

int * FUN_140197ed8(longlong *param_1,int *param_2)

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



// FUNCTION 1401980b4 FUN_1401980b4 body=679 status=ok
// SIG undefined FUN_1401980b4(void)

void FUN_1401980b4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140198118;
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
  } while (uVar7 != uVar2);
LAB_140198118:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 14019835c FUN_14019835c body=353 status=ok
// SIG undefined FUN_14019835c(void)

void FUN_14019835c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401983e1;
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
LAB_1401983e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401984be FUN_1401984be body=455 status=ok
// SIG undefined FUN_1401984be(void)

ulonglong FUN_1401984be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ca5e8) && (FUN_144b3d300(&DAT_14c9ca5e8), DAT_14c9ca5e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DisableDistortion");
    if (plVar6 == (longlong *)0x0) {
      DAT_14c9ca5e0 = 0;
    }
    else {
      DAT_14c9ca5e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14c9ca5e8);
  }
  lVar2 = DAT_14c9ca5e0;
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
  iVar1 = *(int *)(lVar2 + uVar7 * 4);
  iVar3 = FUN_140198686();
  if (((iVar1 != 1) && (0 < iVar3)) &&
     (uVar7 = (ulonglong)*(uint *)(param_1 + 0x3f0), 0 < (int)*(uint *)(param_1 + 0x3f0))) {
    lVar2 = *(longlong *)(param_1 + 1000);
    lVar8 = uVar7 * 0x13c10;
    lVar9 = 0;
    do {
      if (((*(char *)(lVar2 + 0x36cc + lVar9) == '\x01') &&
          ((*(byte *)(lVar2 + 0x125b0 + lVar9) & 2) == 0)) &&
         (((*(char *)(lVar2 + 0x30c8 + lVar9) == '\0' &&
           (((*(char *)(lVar2 + 0x23f2 + lVar9) == '\0' &&
             (*(char *)(lVar2 + 0x23f5 + lVar9) != '\x01')) ||
            (*(int *)(lVar2 + 0x1dd0 + lVar9) != 2)))) &&
          (uVar7 = CONCAT71((int7)(uVar7 >> 8),1), 0 < *(int *)(lVar2 + 0x6f8c + lVar9))))) {
        return uVar7;
      }
      lVar9 = lVar9 + 0x13c10;
    } while (lVar8 - lVar9 != 0);
  }
  return 0;
}



// FUNCTION 140198686 FUN_140198686 body=155 status=ok
// SIG undefined FUN_140198686(void)

undefined4 FUN_140198686(void)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca138) {
    FUN_144b3d300(&DAT_14c9ca138);
    if (DAT_14c9ca138 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RefractionQuality",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14c9ca130 = 0;
      }
      else {
        DAT_14c9ca130 = (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer(&DAT_14c9ca138);
    }
  }
  return *(undefined4 *)(DAT_14c9ca130 + 4);
}



// FUNCTION 140198721 FUN_140198721 body=53 status=ok
// SIG undefined FUN_140198721(void)

void FUN_140198721(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0c12d0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 140198756 FUN_140198756 body=94 status=ok
// SIG undefined FUN_140198756(void)

undefined8 * FUN_140198756(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7e2bc0;
  return param_1;
}



// FUNCTION 1401987b4 FUN_1401987b4 body=567 status=ok
// SIG undefined FUN_1401987b4(void)

void FUN_1401987b4(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x80;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147b4e56a(param_2,param_1);
    goto LAB_1401988bb;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 7,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 7);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1401988bb;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_1401988a8:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 7);
  }
  else {
    if (local_24 == 0x80) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x1000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(uint *)((longlong)param_1 + 0xc) == local_28) {
          iVar4 = 0;
          uVar5 = local_28;
        }
        else {
          FUN_1401989ec(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1410491dc(param_1,iVar4);
        }
        goto LAB_1401988a8;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1401988bb:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401989ec FUN_1401989ec body=214 status=ok
// SIG undefined FUN_1401989ec(void)

void FUN_1401989ec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 140198ac2 FUN_140198ac2 body=298 status=ok
// SIG undefined FUN_140198ac2(void)

undefined8 FUN_140198ac2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar7 = 0;
  if (DAT_14c75f0a0 == '\x01') {
    lVar1 = *param_1;
    lVar9 = (longlong)(int)param_1[1];
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x60) + lVar9 * 8);
    if ((lVar2 != 0) &&
       ((*(char *)(lVar2 + 0x1c) == '\x05' || (iVar7 = 1, *(char *)(lVar2 + 0x1c) == '\x0f')))) {
      iVar7 = *(int *)(lVar2 + 0x68);
    }
    lVar2 = *param_2;
    lVar10 = (longlong)(int)param_2[1];
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x60) + lVar10 * 8);
    if (lVar3 == 0) {
      iVar8 = 0;
    }
    else if ((*(char *)(lVar3 + 0x1c) == '\x05') || (iVar8 = 1, *(char *)(lVar3 + 0x1c) == '\x0f'))
    {
      iVar8 = *(int *)(lVar3 + 0x68);
    }
    bVar11 = iVar7 <= *(int *)(*(longlong *)(lVar1 + 0xf8) + 0x10 + lVar9 * 0x18);
    bVar4 = iVar8 <= *(int *)(*(longlong *)(lVar2 + 0xf8) + 0x10 + lVar10 * 0x18);
    uVar6 = (undefined7)((ulonglong)*(longlong *)(lVar2 + 0xf8) >> 8);
    uVar5 = CONCAT71(uVar6,(bVar4 && bVar11) &&
                           (iVar8 * iVar7 <= DAT_14c75f0a4 || DAT_14c75f0a4 < 1));
    if (((bVar4 && bVar11) && (iVar8 * iVar7 <= DAT_14c75f0a4 || DAT_14c75f0a4 < 1)) &&
       (DAT_14c75f2dc == 2)) {
      bVar11 = true;
      if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
        bVar11 = (*(byte *)(*(longlong *)(lVar1 + 0x2c0) + 8 + lVar9 * 0x10) & 4) == 0;
      }
      if (((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) &&
         ((byte)(~bVar11 & (*(byte *)(*(longlong *)(lVar2 + 0x2c0) + 8 + lVar10 * 0x10) & 4) >> 2)
          != 0)) {
        uVar5 = CONCAT71(uVar6,2);
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 140198bec FUN_140198bec body=672 status=ok
// SIG undefined FUN_140198bec(void)

void FUN_140198bec(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  longlong lVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  param_1[2] = (longlong)param_2;
  param_1[3] = (longlong)param_3;
  param_1[5] = *param_4;
  uVar6 = *(ushort *)((longlong)param_1 + 10);
  *(ushort *)((longlong)param_1 + 10) = uVar6 | 1;
  if (*(char *)(*param_5 + 0x2c) == '\x01') {
    if (((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 2)) ||
       ((*(byte *)(*(longlong *)(*param_2 + 0x2c0) + 8 + (longlong)(int)param_2[1] * 0x10) & 2) == 0
       )) {
      uVar10 = 0;
      if ((param_3 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_3 + 0xc))) {
        uVar10 = *(ushort *)(*(longlong *)(*param_3 + 0x2c0) + 8 + (longlong)(int)param_3[1] * 0x10)
                 >> 1 & 1;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  uVar6 = (uVar6 & 0xfff9 | 1) + uVar10 * 6;
  *(ushort *)((longlong)param_1 + 10) = uVar6;
  if (*(char *)(*param_5 + 0x2d) == '\x01') {
    uVar10 = 0x10;
    if (DAT_14c9974ec == '\0') {
      if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
        if ((*(byte *)(*(longlong *)(*param_2 + 0x2c0) + 9 + (longlong)(int)param_2[1] * 0x10) & 2)
            != 0) goto LAB_140198cf6;
      }
      uVar10 = 0;
      if ((param_3 != (longlong *)0x0) && (uVar10 = 0, 1 < *(byte *)((longlong)param_3 + 0xc))) {
        uVar10 = *(ushort *)(*(longlong *)(*param_3 + 0x2c0) + 8 + (longlong)(int)param_3[1] * 0x10)
                 >> 5 & 0x10;
      }
    }
  }
  else {
    uVar10 = 0;
  }
LAB_140198cf6:
  *(ushort *)((longlong)param_1 + 10) = uVar10 | uVar6 & 0xffcf | 0x20;
  (**(code **)(*param_1 + 0x10))(param_1);
  plVar2 = (longlong *)param_1[2];
  bVar8 = false;
  if ((plVar2 != (longlong *)0x0) && (bVar8 = false, 1 < *(byte *)((longlong)plVar2 + 0xc))) {
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
    bVar8 = cVar1 == '\x01' || cVar1 == '\x04';
  }
  plVar3 = (longlong *)param_1[3];
  lVar4 = *plVar3;
  lVar7 = (longlong)(int)plVar3[1];
  if ((plVar3 == (longlong *)0x0) || (*(byte *)((longlong)plVar3 + 0xc) < 2)) {
    bVar9 = false;
  }
  else {
    cVar1 = *(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + lVar7 * 0x10);
    bVar9 = cVar1 == '\x01' || cVar1 == '\x04';
  }
  dVar12 = 0.0;
  if ((bVar8 & *(byte *)(*(longlong *)(*plVar2 + 0x158) + (longlong)(int)plVar2[1])) == 1) {
    lVar5 = *(longlong *)(*plVar2 + 0x110);
    lVar11 = (longlong)(int)plVar2[1] * 0x30;
    dVar14 = *(double *)(lVar5 + 0x28 + lVar11) - *(double *)(lVar5 + 0x10 + lVar11);
    dVar15 = *(double *)(lVar5 + 0x20 + lVar11) - *(double *)(lVar5 + 8 + lVar11);
    dVar12 = *(double *)(lVar5 + 0x18 + lVar11) - *(double *)(lVar5 + lVar11);
    if (dVar12 <= dVar15) {
      dVar12 = dVar15;
    }
    if (dVar12 <= dVar14) {
      dVar12 = dVar14;
    }
  }
  dVar14 = 0.0;
  if ((bVar9 & *(byte *)(*(longlong *)(lVar4 + 0x158) + lVar7)) == 1) {
    lVar4 = *(longlong *)(lVar4 + 0x110);
    lVar7 = lVar7 * 0x30;
    dVar15 = *(double *)(lVar4 + 0x28 + lVar7) - *(double *)(lVar4 + 0x10 + lVar7);
    dVar16 = *(double *)(lVar4 + 0x20 + lVar7) - *(double *)(lVar4 + 8 + lVar7);
    dVar14 = *(double *)(lVar4 + 0x18 + lVar7) - *(double *)(lVar4 + lVar7);
    if (dVar14 <= dVar16) {
      dVar14 = dVar16;
    }
    if (dVar14 <= dVar15) {
      dVar14 = dVar15;
    }
  }
  dVar12 = dVar12 * (double)DAT_14c75f098;
  dVar14 = dVar14 * (double)DAT_14c75f098;
  if (dVar12 <= dVar14) {
    dVar12 = dVar14;
  }
  fVar13 = DAT_14c75f09c;
  if ((double)DAT_14c75f09c < dVar12) {
    fVar13 = (float)dVar12;
  }
  *(float *)(param_1 + 4) = fVar13;
  return;
}



// FUNCTION 140198e8e FUN_140198e8e body=135 status=ok
// SIG undefined FUN_140198e8e(void)

undefined8 FUN_140198e8e(longlong *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      while (lVar3 = *param_1 + (longlong)iVar4 * 0x20,
            *(uint *)(*param_1 + (longlong)iVar4 * 0x20) != param_2) {
        iVar4 = *(int *)(lVar3 + 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((lVar3 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar3 + 0x10) != 0)) {
        piVar2 = *(int **)(lVar3 + 8);
        lVar3 = (longlong)*(int *)(lVar3 + 0x10) << 3;
        do {
          if (*piVar2 == param_3) goto LAB_140198f0d;
          piVar2 = piVar2 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
        piVar2 = (int *)0x0;
LAB_140198f0d:
        return CONCAT71((int7)((ulonglong)piVar2 >> 8),piVar2 != (int *)0x0);
      }
    }
  }
  return 0;
}



// FUNCTION 140198f16 FUN_140198f16 body=367 status=ok
// SIG undefined FUN_140198f16(void)

void FUN_140198f16(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140198fe0;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140198fe0:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 140199086 FUN_140199086 body=1612 status=ok
// SIG undefined FUN_140199086(void)

/* WARNING: Removing unreachable block (ram,0x000140199664) */

void FUN_140199086(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong unaff_RBP;
  longlong lVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  longlong lVar19;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 *local_f0;
  char local_e8;
  longlong local_e0;
  longlong local_d0;
  char *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (((plVar2 != (longlong *)0x0) &&
      (plVar11 = *(longlong **)(param_1 + 0x18), plVar11 != (longlong *)0x0)) && (plVar2 != plVar11)
     ) {
    iVar6 = *(int *)(*(longlong *)(*plVar2 + 0xf8) + 0x10 + (longlong)(int)plVar2[1] * 0x18);
    if (0 < iVar6) {
      pcVar18 = (char *)(*(longlong *)(*plVar2 + 0xf8) + (longlong)(int)plVar2[1] * 0x18);
      lVar19 = (longlong)(int)plVar11[1] * 0x18 + *(longlong *)(*plVar11 + 0xf8);
      uVar9 = (ulonglong)*(uint *)(lVar19 + 0x10);
      local_d0 = param_1 + 0x40;
      lVar13 = 0;
      local_c8 = pcVar18;
      local_c0 = lVar19;
      do {
        pcVar12 = *(char **)(pcVar18 + 8);
        if (*(char **)(pcVar18 + 8) == (char *)0x0) {
          pcVar12 = pcVar18;
        }
        if (0 < (int)uVar9) {
          pcVar12 = *(char **)(pcVar12 + lVar13 * 8);
          lVar15 = 0;
          do {
            lVar7 = *(longlong *)(lVar19 + 8);
            if (*(longlong *)(lVar19 + 8) == 0) {
              lVar7 = lVar19;
            }
            pcVar17 = *(char **)(lVar7 + lVar15 * 8);
            if ((pcVar12[8] & 3U) == 0) {
              pcVar10 = pcVar12;
              lVar19 = FUN_146e2259e(pcVar12);
            }
            else {
              pcVar10 = *(char **)(pcVar12 + 0x10);
              lVar19 = FUN_14472711d(pcVar10,0);
            }
            plVar2 = *(longlong **)(param_1 + 0x10);
            if (lVar19 == 0) {
              unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),7);
LAB_1401995be:
              plVar11 = &DAT_14c993de0;
              if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
                plVar11 = (longlong *)
                          ((longlong)(int)plVar2[1] * 8 + *(longlong *)(*plVar2 + 0x4a0));
              }
              if (*plVar11 == 0) {
                if (lVar19 != 0) goto LAB_1401996b2;
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),7);
              }
              else {
                iVar6 = *(int *)(*plVar11 + 0x18);
                if (iVar6 == 0) {
                  unaff_RBP = 7;
                }
                else {
                  unaff_RBP = unaff_RBP & 0xff;
                }
                if ((lVar19 != 0) && (iVar6 == 0)) {
LAB_1401996b2:
                  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(lVar19 + 0x1c)) &
                              0xffffffffffffff1f;
                }
              }
            }
            else {
              unaff_RBP = CONCAT71((int7)((ulonglong)pcVar10 >> 8),*(byte *)(lVar19 + 0x1d)) &
                          0xffffff1f;
              if ((*(byte *)(lVar19 + 0x1d) & 0x1e) == 6) goto LAB_1401995be;
            }
            if ((pcVar17[8] & 3U) == 0) {
              pcVar10 = pcVar17;
              lVar7 = FUN_146e2259e(pcVar17);
            }
            else {
              pcVar10 = *(char **)(pcVar17 + 0x10);
              lVar7 = FUN_14472711d(pcVar10,0);
            }
            plVar2 = *(longlong **)(param_1 + 0x18);
            if (lVar7 == 0) {
              pcVar18 = (char *)CONCAT71((int7)((ulonglong)pcVar18 >> 8),7);
LAB_140199613:
              plVar11 = &DAT_14c993de0;
              if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
                plVar11 = (longlong *)
                          ((longlong)(int)plVar2[1] * 8 + *(longlong *)(*plVar2 + 0x4a0));
              }
              if (*plVar11 == 0) {
                if (lVar7 != 0) goto LAB_140199690;
                pcVar18 = (char *)CONCAT71((int7)((ulonglong)pcVar18 >> 8),7);
              }
              else {
                iVar6 = *(int *)(*plVar11 + 0x18);
                uVar16 = (uint)pcVar18;
                pcVar18 = &DAT_00000007;
                if (iVar6 != 0) {
                  pcVar18 = (char *)(ulonglong)(uVar16 & 0xff);
                }
                if ((lVar7 != 0) && (iVar6 == 0)) {
LAB_140199690:
                  pcVar18 = (char *)(CONCAT71((int7)((ulonglong)pcVar18 >> 8),
                                              *(undefined1 *)(lVar7 + 0x1c)) & 0xffffffffffffff1f);
                }
              }
            }
            else {
              pcVar18 = (char *)(CONCAT71((int7)((ulonglong)pcVar10 >> 8),*(byte *)(lVar7 + 0x1d)) &
                                0xffffff1f);
              if ((*(byte *)(lVar7 + 0x1d) & 0x1e) == 6) goto LAB_140199613;
            }
            cVar5 = FUN_1400c6673(unaff_RBP & 0xffffffff,pcVar12,pcVar18,pcVar17);
            if (cVar5 != '\0') {
              local_49 = '\0';
              pcVar18 = *(char **)(param_1 + 0x18);
              local_f8 = &local_49;
              cVar5 = FUN_140199a9a(*(undefined8 *)(param_1 + 0x10),lVar19,pcVar18,lVar7);
              if (cVar5 != '\0') {
                local_54 = (undefined4)lVar13;
                local_58 = (undefined4)lVar15;
                local_e8 = cVar5;
                local_e0 = param_1;
                if (local_49 == '\0') {
                  plVar2 = *(longlong **)(param_1 + 0x10);
                  plVar11 = *(longlong **)(param_1 + 0x18);
                  local_60 = 0;
                  if ((plVar11 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
                    uVar9 = *(ulonglong *)
                             (*(longlong *)(*plVar2 + 0x260) + (longlong)(int)plVar2[1] * 8);
                    uVar8 = uVar9 >> 0x20;
                    uVar16 = 0x80000000;
                    if (uVar8 == 0xffffffff) {
                      uVar16 = 0;
                      uVar8 = uVar9;
                    }
                    uVar9 = *(ulonglong *)
                             (*(longlong *)(*plVar11 + 0x260) + (longlong)(int)plVar11[1] * 8);
                    uVar3 = uVar9 >> 0x20;
                    if (0xfffffffeffffffff < uVar9) {
                      uVar3 = uVar9;
                    }
                    uVar14 = (uint)(uVar9 < 0xffffffff00000000) << 0x1f | (uint)uVar3 & 0x7fffffff;
                    unaff_RBP = (ulonglong)uVar14;
                    local_60 = CONCAT44(uVar14,(uint)uVar8 & 0x7fffffff | uVar16);
                  }
                  local_f0 = &local_60;
                  pcVar18 = pcVar12;
                  local_f8 = pcVar17;
                  uVar4 = local_58;
                  local_58 = local_54;
                  local_54 = uVar4;
                  FUN_1401996d4(&local_b8,plVar2,pcVar12);
                  iVar6 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
                  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
                    FUN_140199f74(local_d0,iVar6);
                  }
                  lVar19 = *(longlong *)(param_1 + 0x98);
                  if (*(longlong *)(param_1 + 0x98) == 0) {
                    lVar19 = local_d0;
                  }
                  lVar7 = (longlong)iVar6 * 0x58;
                  *(undefined8 *)(lVar19 + lVar7) = local_b8;
                  *(undefined8 *)(lVar19 + 8 + lVar7) = local_b0;
                  *(undefined8 *)(lVar19 + 0x10 + lVar7) = local_a8;
                  *(undefined8 *)(lVar19 + 0x18 + lVar7) = local_a0;
                  *(undefined8 *)(lVar19 + 0x20 + lVar7) = local_98;
                  *(undefined8 *)(lVar19 + 0x28 + lVar7) = local_90;
                  *(undefined8 *)(lVar19 + 0x30 + lVar7) = local_88;
                }
                else {
                  plVar2 = *(longlong **)(param_1 + 0x10);
                  plVar11 = *(longlong **)(param_1 + 0x18);
                  local_60 = 0;
                  if ((plVar2 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
                    uVar9 = *(ulonglong *)
                             (*(longlong *)(*plVar11 + 0x260) + (longlong)(int)plVar11[1] * 8);
                    uVar8 = uVar9 >> 0x20;
                    uVar16 = 0x80000000;
                    if (uVar8 == 0xffffffff) {
                      uVar16 = 0;
                      uVar8 = uVar9;
                    }
                    uVar9 = *(ulonglong *)
                             (*(longlong *)(*plVar2 + 0x260) + (longlong)(int)plVar2[1] * 8);
                    uVar3 = uVar9 >> 0x20;
                    if (0xfffffffeffffffff < uVar9) {
                      uVar3 = uVar9;
                    }
                    uVar14 = (uint)(uVar9 < 0xffffffff00000000) << 0x1f | (uint)uVar3 & 0x7fffffff;
                    unaff_RBP = (ulonglong)uVar14;
                    local_60 = CONCAT44(uVar14,(uint)uVar8 & 0x7fffffff | uVar16);
                  }
                  local_f0 = &local_60;
                  local_f8 = pcVar12;
                  FUN_1401996d4(&local_b8,plVar11,pcVar17);
                  iVar6 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
                  pcVar18 = pcVar17;
                  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
                    FUN_140199f74(local_d0,iVar6);
                    pcVar18 = pcVar17;
                  }
                  lVar19 = *(longlong *)(param_1 + 0x98);
                  if (*(longlong *)(param_1 + 0x98) == 0) {
                    lVar19 = local_d0;
                  }
                  lVar7 = (longlong)iVar6 * 0x58;
                  *(undefined8 *)(lVar19 + lVar7) = local_b8;
                  *(undefined8 *)(lVar19 + 8 + lVar7) = local_b0;
                  *(undefined8 *)(lVar19 + 0x10 + lVar7) = local_a8;
                  *(undefined8 *)(lVar19 + 0x18 + lVar7) = local_a0;
                  *(undefined8 *)(lVar19 + 0x20 + lVar7) = local_98;
                  *(undefined8 *)(lVar19 + 0x28 + lVar7) = local_90;
                  *(undefined8 *)(lVar19 + 0x30 + lVar7) = local_88;
                }
                local_a8 = 0;
                puVar1 = (undefined4 *)(lVar19 + 0x38 + lVar7);
                *puVar1 = local_80;
                puVar1[1] = uStack_7c;
                puVar1[2] = uStack_78;
                puVar1[3] = uStack_74;
                *(undefined4 *)(lVar19 + 0x48 + lVar7) = local_70;
                *(undefined1 *)(lVar19 + 0x50 + lVar7) = local_68;
                *(undefined1 *)(lVar19 + 0x51 + lVar7) = local_67;
              }
            }
            lVar15 = lVar15 + 1;
            uVar9 = (ulonglong)*(int *)(local_c0 + 0x10);
            lVar19 = local_c0;
          } while (lVar15 < (longlong)uVar9);
          iVar6 = *(int *)(local_c8 + 0x10);
          pcVar18 = local_c8;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401996d4 FUN_1401996d4 body=278 status=ok
// SIG undefined FUN_1401996d4(void)

undefined8 *
FUN_1401996d4(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined4 *param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_4;
  param_1[5] = param_3;
  param_1[6] = param_5;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 7) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  param_1[9] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 10) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  if ((*(byte *)(param_3 + 8) & 3) == 0) {
    uVar4 = FUN_146e2259e(param_3);
  }
  else {
    uVar4 = FUN_14472711d(*(undefined8 *)(param_3 + 0x10),0);
  }
  if ((*(byte *)(param_5 + 8) & 3) == 0) {
    local_60 = FUN_146e2259e(param_5);
  }
  else {
    local_60 = FUN_14472711d(*(undefined8 *)(param_5 + 0x10),0);
  }
  local_58 = param_5;
  local_68 = param_4;
  local_50 = param_1 + 9;
  FUN_1401997eb(&local_41,param_2,uVar4,param_3);
  *(undefined1 *)((longlong)param_1 + 0x51) = local_41;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401997eb FUN_1401997eb body=687 status=ok
// SIG undefined FUN_1401997eb(void)

byte * FUN_1401997eb(byte *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                    longlong *param_5,longlong *param_6,longlong param_7,float *param_8)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  if (param_3 == (longlong *)0x0) {
    bVar4 = 7;
LAB_14019998d:
    plVar3 = &DAT_14c993de0;
    if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
      plVar3 = (longlong *)((longlong)(int)param_2[1] * 8 + *(longlong *)(*param_2 + 0x4a0));
    }
    if (*plVar3 == 0) {
      if (param_3 != (longlong *)0x0) goto LAB_140199a6b;
      bVar5 = 7;
    }
    else {
      iVar1 = *(int *)(*plVar3 + 0x18);
      bVar5 = 7;
      if (iVar1 != 0) {
        bVar5 = bVar4;
      }
      if ((param_3 != (longlong *)0x0) && (iVar1 == 0)) {
LAB_140199a6b:
        bVar5 = *(byte *)((longlong)param_3 + 0x1c) & 0x1f;
      }
    }
  }
  else {
    bVar5 = *(byte *)((longlong)param_3 + 0x1d) & 0x1f;
    bVar4 = bVar5;
    if ((*(byte *)((longlong)param_3 + 0x1d) & 0x1e) == 6) goto LAB_14019998d;
  }
  if (param_6 == (longlong *)0x0) {
    bVar4 = 7;
  }
  else {
    bVar4 = *(byte *)((longlong)param_6 + 0x1d) & 0x1f;
    if ((*(byte *)((longlong)param_6 + 0x1d) & 0x1e) != 6) goto LAB_140199849;
  }
  plVar3 = &DAT_14c993de0;
  if ((param_5 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_5 + 0xc))) {
    plVar3 = (longlong *)((longlong)(int)param_5[1] * 8 + *(longlong *)(*param_5 + 0x4a0));
  }
  if (*plVar3 == 0) {
    if (param_6 == (longlong *)0x0) {
      bVar4 = 7;
      goto LAB_140199849;
    }
  }
  else {
    iVar1 = *(int *)(*plVar3 + 0x18);
    bVar2 = 7;
    if (iVar1 != 0) {
      bVar2 = bVar4;
    }
    bVar4 = bVar2;
    if ((param_6 == (longlong *)0x0) || (iVar1 != 0)) goto LAB_140199849;
  }
  bVar4 = *(byte *)((longlong)param_6 + 0x1c) & 0x1f;
LAB_140199849:
  if (param_3 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)((longlong)param_3 + 0x1a);
  }
  if (param_6 == (longlong *)0x0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)((longlong)param_6 + 0x1a);
  }
  bVar2 = bVar2 & bVar6 & DAT_14c75f0fc;
  bVar6 = (bVar4 != 0 & bVar2) << 2 |
          (bVar5 != 0 & bVar2) * '\x02' | (bVar4 != 0 || bVar5 != 0) & bVar2;
  fVar8 = 0.0;
  if (bVar2 == 1) {
    bVar2 = (bVar4 == 0) << 3;
    if (bVar5 != 0) {
      bVar2 = 0;
    }
    bVar6 = bVar6 | bVar2;
    if (bVar2 != 0) {
      dVar9 = (double)(**(code **)(*param_3 + 0x18))(param_3);
      dVar10 = (double)(**(code **)(*param_6 + 0x18))();
      fVar8 = (float)(dVar10 + dVar9);
    }
  }
  bVar2 = (bVar5 != 6 && bVar4 != 6) << 4;
  if (bVar4 == 3) {
    bVar2 = 0;
  }
  if (bVar5 == 0) {
    bVar2 = 0;
  }
  if (bVar5 == 3) {
    bVar2 = 0;
  }
  *param_8 = fVar8;
  if (bVar4 == 0) {
    bVar2 = 0;
  }
  if (DAT_14c75f07c == '\0') {
    bVar7 = bVar2 == 0;
    bVar2 = ((byte)(bVar4 - 0xd) < 0xfe) << 4;
    if (bVar7) {
      bVar2 = 0;
    }
    if ((byte)(bVar5 - 0xb) < 2) {
      bVar2 = 0;
    }
  }
  if ((*(byte *)(param_4 + 0x71 + (ulonglong)((*(byte *)(param_4 + 8) & 3) == 0) * 8) & 4) == 0) {
    bVar4 = (*(byte *)(param_7 + 0x71 + (ulonglong)((*(byte *)(param_7 + 8) & 3) == 0) * 8) & 4) <<
            3;
  }
  else {
    bVar4 = 0x20;
  }
  *param_1 = bVar2 | bVar6 | bVar4;
  return param_1;
}



// FUNCTION 140199a9a FUN_140199a9a body=1242 status=ok
// SIG undefined FUN_140199a9a(void)

undefined8
FUN_140199a9a(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined1 *param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined7 uVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  if (param_2 == 0) {
    bVar11 = 7;
LAB_140199da9:
    plVar5 = &DAT_14c993de0;
    if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
      plVar5 = (longlong *)((longlong)(int)param_1[1] * 8 + *(longlong *)(*param_1 + 0x4a0));
    }
    if (*plVar5 == 0) {
      uVar3 = 0;
      if (param_2 != 0) goto LAB_140199edb;
      bVar11 = 7;
    }
    else {
      uVar1 = *(uint *)(*plVar5 + 0x18);
      uVar3 = (ulonglong)uVar1;
      bVar12 = 7;
      if (uVar1 != 0) {
        bVar12 = bVar11;
      }
      bVar11 = bVar12;
      if ((param_2 != 0) && (uVar1 == 0)) {
LAB_140199edb:
        bVar11 = *(byte *)(param_2 + 0x1c) & 0x1f;
      }
    }
  }
  else {
    bVar11 = *(byte *)(param_2 + 0x1d) & 0x1f;
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_2 + 0x1d)) & 0xffffffffffffff1e;
    if ((char)uVar3 == '\x06') goto LAB_140199da9;
  }
  if (param_4 == 0) {
    bVar12 = 7;
LAB_140199e05:
    plVar5 = &DAT_14c993de0;
    if ((param_3 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_3 + 0xc))) {
      plVar5 = (longlong *)((longlong)(int)param_3[1] * 8 + *(longlong *)(*param_3 + 0x4a0));
    }
    if (*plVar5 != 0) {
      uVar1 = *(uint *)(*plVar5 + 0x18);
      uVar3 = (ulonglong)uVar1;
      bVar9 = 7;
      if (uVar1 != 0) {
        bVar9 = bVar12;
      }
      bVar12 = bVar9;
      if ((param_4 != 0) && (uVar1 == 0)) goto LAB_140199eed;
      goto LAB_140199ae2;
    }
    uVar3 = 0;
    if (param_4 != 0) {
LAB_140199eed:
      bVar12 = *(byte *)(param_4 + 0x1c) & 0x1f;
      goto LAB_140199ae2;
    }
    *param_5 = 0;
    uVar6 = 0;
    bVar12 = 7;
    bVar13 = false;
    bVar14 = false;
    bVar15 = false;
  }
  else {
    bVar12 = *(byte *)(param_4 + 0x1d) & 0x1f;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),*(byte *)(param_4 + 0x1d)) & 0xffffffffffffff1e;
    if ((char)uVar3 == '\x06') goto LAB_140199e05;
LAB_140199ae2:
    *param_5 = 0;
    bVar13 = bVar12 == 1;
    uVar6 = (undefined7)(uVar3 >> 8);
    if ((bVar11 == 1) && (bVar12 == 1)) {
      return CONCAT71(uVar6,0xd);
    }
    bVar14 = bVar12 == 0xc;
    if ((bVar11 == 1) && (bVar12 == 0xc)) {
      return CONCAT71(uVar6,0x10);
    }
    bVar10 = true;
    if ((bVar11 == 0xc) && (bVar12 == 1)) {
      uVar4 = CONCAT71(uVar6,0x10);
      goto LAB_140199d66;
    }
    bVar15 = bVar12 == 2;
    if ((bVar11 == 1) && (bVar12 == 2)) {
      return CONCAT71(uVar6,0x11);
    }
    if ((bVar11 == 2) && (bVar12 == 1)) {
      uVar4 = CONCAT71(uVar6,0x11);
      goto LAB_140199d66;
    }
  }
  bVar2 = bVar11 == 0xc;
  bVar8 = bVar11 == 1;
  if (bVar12 == 0 && bVar11 == 0) {
    return CONCAT71(uVar6,1);
  }
  if ((bVar11 == 0 & bVar14) != 0) {
    return CONCAT71(uVar6,6);
  }
  bVar10 = true;
  if (bVar2 && bVar12 == 0) {
    uVar4 = CONCAT71(uVar6,6);
  }
  else {
    if ((bool)(bVar11 == 0 & bVar15)) {
      return CONCAT71(uVar6,7);
    }
    if (bVar11 == 2 && bVar12 == 0) {
      uVar4 = CONCAT71(uVar6,7);
    }
    else {
      if ((bool)(bVar11 == 0 & bVar13)) {
        return CONCAT71(uVar6,3);
      }
      if (bVar8 && bVar12 == 0) {
        uVar4 = CONCAT71(uVar6,3);
      }
      else {
        if ((bVar11 == 0) && (bVar12 == 3)) {
          return CONCAT71(uVar6,2);
        }
        if ((bVar11 == 3) && (bVar12 == 0)) {
          uVar4 = CONCAT71(uVar6,2);
        }
        else {
          if ((bVar11 == 0) && (bVar12 == 8)) {
            return CONCAT71(uVar6,4);
          }
          if ((bVar11 == 8) && (bVar12 == 0)) {
            uVar4 = CONCAT71(uVar6,4);
          }
          else {
            if ((bVar11 == 3) && (bVar12 == 3)) {
              return CONCAT71(uVar6,8);
            }
            if ((bool)(bVar11 == 3 & bVar13)) {
              return CONCAT71(uVar6,9);
            }
            if (bVar8 && bVar12 == 3) {
              uVar4 = CONCAT71(uVar6,9);
            }
            else {
              if ((bVar11 == 3) && (bVar12 == 8)) {
                return CONCAT71(uVar6,10);
              }
              if ((bVar11 == 8) && (bVar12 == 3)) {
                uVar4 = CONCAT71(uVar6,10);
              }
              else {
                if ((bVar11 == 3 & bVar14) != 0) {
                  return CONCAT71(uVar6,0xc);
                }
                if (bVar2 && bVar12 == 3) {
                  uVar4 = CONCAT71(uVar6,0xc);
                }
                else {
                  if (bVar8 && bVar12 == 0xb) {
                    return CONCAT71(uVar6,0xf);
                  }
                  if ((bool)(bVar11 == 0xb & bVar13)) {
                    uVar4 = CONCAT71(uVar6,0xf);
                  }
                  else {
                    if ((bVar11 == 0) && (bVar12 == 0xb)) {
                      return CONCAT71(uVar6,5);
                    }
                    if ((bVar11 == 0xb) && (bVar12 == 0)) {
                      uVar4 = CONCAT71(uVar6,5);
                    }
                    else {
                      if ((bVar11 == 3) && (bVar12 == 0xb)) {
                        return CONCAT71(uVar6,0xb);
                      }
                      if ((bVar11 == 0xb) && (bVar12 == 3)) {
                        uVar4 = CONCAT71(uVar6,0xb);
                      }
                      else {
                        if (param_2 == 0) {
                          bVar9 = 0;
                        }
                        else {
                          bVar9 = bVar11 != 6 & *(byte *)(param_2 + 0x18);
                        }
                        if (param_4 == 0) {
                          bVar7 = 1;
                        }
                        else {
                          bVar7 = bVar12 == 6 | *(byte *)(param_4 + 0x18) ^ 1;
                        }
                        if ((bVar14 & bVar9) != 0) {
                          return CONCAT71(uVar6,0x14);
                        }
                        bVar10 = true;
                        if ((!bVar2 | bVar7) == 1) {
                          if ((bVar12 == 0xb & bVar9) != 0) {
                            return CONCAT71(uVar6,0x13);
                          }
                          if ((bVar11 != 0xb | bVar7) == 1) {
                            if ((byte)(bVar7 | bVar9 ^ 1) != 1) {
                              return CONCAT71(uVar6,0x15);
                            }
                            if (bVar11 == 5) {
                              return 0;
                            }
                            if (bVar12 == 5) {
                              return 0;
                            }
                            if ((bVar12 != 6) && (bVar11 != 6)) {
                              return 0;
                            }
                            bVar10 = bVar11 != 6 && bVar12 == 6;
                            uVar4 = 0x16;
                          }
                          else {
                            uVar4 = CONCAT71(uVar6,0x13);
                          }
                        }
                        else {
                          uVar4 = CONCAT71(uVar6,0x14);
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
  }
LAB_140199d66:
  *param_5 = bVar10;
  return uVar4;
}



// FUNCTION 140199f74 FUN_140199f74 body=367 status=ok
// SIG undefined FUN_140199f74(void)

void FUN_140199f74(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar5;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    iVar9 = 1;
  }
  else {
    if (*(uint *)(param_1 + 100) < 2) {
      uVar4 = 4;
      if (4 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = (longlong)(int)uVar4;
    }
    else {
      lVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar6 = lVar5 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14019a002;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14019a002:
    iVar7 = (int)(uVar6 / 0x58);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 100) = iVar9;
  FUN_14019a0e4(param_1,param_2);
  return;
}



// FUNCTION 14019a0e4 FUN_14019a0e4 body=131 status=ok
// SIG undefined FUN_14019a0e4(void)

void FUN_14019a0e4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x58);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x58,0,param_3,0x58);
    memmove(*(void **)((longlong)param_1 + 0x58),param_1,(longlong)param_2 * 0x58);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x58,param_2,param_3,0x58);
  return;
}



// FUNCTION 14019a168 FUN_14019a168 body=143 status=ok
// SIG undefined FUN_14019a168(void)

undefined8 FUN_14019a168(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  int local_2c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14019a1f8(local_38,*(undefined8 *)(param_2 + 8));
  uVar1 = 0;
  if ((local_2c == 0 || 0xfffffffd < local_2c - 5U) && (*(char *)(param_2 + 0x23e8) == '\0')) {
    uVar1 = CONCAT71((int7)((ulonglong)
                            *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) *
                            0x3c >> 8),
                     (&DAT_14ca814b8)
                     [(ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0xf]
                     != 1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019a1f8 FUN_14019a1f8 body=405 status=ok
// SIG undefined FUN_14019a1f8(void)

float * FUN_14019a1f8(float *param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca306c0) {
    FUN_144b3d300(&DAT_14ca306c0);
    if (DAT_14ca306c0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TonemapperGamma",1)
      ;
      if (plVar2 == (longlong *)0x0) {
        DAT_14ca306b8 = 0;
      }
      else {
        DAT_14ca306b8 = (**(code **)(*plVar2 + 0x70))(plVar2);
      }
      _Init_thread_footer(&DAT_14ca306c0);
    }
  }
  fVar1 = *(float *)(param_2 + 0xd4);
  if (((uint)fVar1 & 0xfffffffe) != 8) {
    fVar1 = (float)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x40))();
  }
  fVar5 = *(float *)(DAT_14ca306b8 + 4);
  if (fVar1 == 2.8026e-45) {
    fVar5 = (float)(~-(uint)(fVar5 == 0.0) & (uint)fVar5 | -(uint)(fVar5 == 0.0) & 0x400ccccd);
  }
  fVar3 = 2.8026e-45;
  if (2 < (uint)fVar1) {
    fVar3 = fVar1;
  }
  if (fVar5 <= 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = (float)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x30))();
  fVar4 = (float)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x30))();
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  *param_1 = 1.0 / fVar1;
  param_1[1] = 2.2 / fVar4;
  param_1[2] = 1.0 / fVar5;
  param_1[3] = fVar3;
  fVar1 = (float)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x38))();
  param_1[4] = fVar1;
  fVar1 = (float)FUN_14019a38d();
  param_1[5] = fVar1;
  return param_1;
}



// FUNCTION 14019a38d FUN_14019a38d body=107 status=ok
// SIG undefined FUN_14019a38d(void)

float FUN_14019a38d(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14ca951d0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return (float)*(int *)(lVar2 + uVar5 * 4);
}



// FUNCTION 14019a3f8 FUN_14019a3f8 body=32 status=ok
// SIG undefined FUN_14019a3f8(void)

longlong FUN_14019a3f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14019a418(param_1 + 0x2c0);
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



// FUNCTION 14019a418 FUN_14019a418 body=385 status=ok
// SIG undefined FUN_14019a418(void)

longlong FUN_14019a418(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0))))
  goto LAB_14019a46a;
  if (*(longlong *)(param_1 + 2) == 0) {
    return 0;
  }
  lVar5 = FUN_140007850();
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if ((lVar5 == 0) || (cVar2 == '\0')) {
    if (lVar5 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar3 = *(uint *)(lVar5 + 0xc);
LAB_14019a4c5:
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
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar4 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar7;
      }
    }
    param_1[1] = uVar3;
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_14019a4c5;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
LAB_14019a46a:
  lVar4 = FUN_14019a59a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 14019a59a FUN_14019a59a body=221 status=ok
// SIG undefined FUN_14019a59a(void)

longlong FUN_14019a59a(void)

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
  if (DAT_14cb11bb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dcc25f;
    local_40 = &LAB_145cd5af6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeCell",&DAT_14cb11bb8,&DAT_147dcc25e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11bb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019a678 FUN_14019a678 body=279 status=ok
// SIG undefined FUN_14019a678(void)

void FUN_14019a678(longlong *param_1,double *param_2,float param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x638))();
  if (plVar6 == (longlong *)0x0) {
    dVar4 = (double)param_3;
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    dVar3 = *param_2;
    if ((char)param_4 == '\0') {
      cVar5 = (**(code **)(*param_1 + 0x790))(param_1);
      if (cVar5 != '\0') goto LAB_14019a6f7;
    }
    param_1[0x7b] = (longlong)(dVar4 * dVar3 + (double)param_1[0x7b]);
    param_1[0x7c] = (longlong)(dVar2 * dVar4 + (double)param_1[0x7c]);
    param_1[0x7d] = (longlong)(dVar1 * dVar4 + (double)param_1[0x7d]);
  }
  else {
    local_68 = (double)param_3;
    local_58 = param_2[2] * local_68;
    local_60 = param_2[1] * local_68;
    local_68 = local_68 * *param_2;
    (**(code **)(*plVar6 + 0x598))(plVar6,&local_68,param_4);
  }
LAB_14019a6f7:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019a790 FUN_14019a790 body=747 status=ok
// SIG undefined FUN_14019a790(void)

undefined4 * FUN_14019a790(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
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
  if (param_3 == '\0') {
    FUN_14019aa7c(param_1 + 0x730,param_2);
    goto LAB_14019a7cb;
  }
  plVar1 = (longlong *)(param_1 + -0x868);
  pcVar3 = *(code **)(*plVar1 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    lVar8 = *(longlong *)(param_1 + -0x4b8);
    if (lVar8 != 0) goto LAB_14019a951;
    pcVar3 = *(code **)(*plVar1 + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      pcVar3 = *(code **)(*(longlong *)(param_1 + 0x33b8) + 0x18);
      if (pcVar3 == (code *)&LAB_144904684) {
        if (((*(int *)(param_1 + 0x6d4c) != 0) &&
            (uVar2 = *(uint *)(param_1 + 0x6d48), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
        {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar9 != (longlong *)0x0) && ((int)plVar9[2] == *(int *)(param_1 + 0x6d4c))) &&
             ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar9;
            }
            else {
              lVar8 = 0;
            }
            lVar8 = lVar8 + 0x110;
            goto LAB_14019a924;
          }
        }
      }
      else {
        lVar8 = (*pcVar3)(param_1 + 0x33b8);
LAB_14019a924:
        if (lVar8 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20);
          goto LAB_14019a931;
        }
      }
    }
    else {
      lVar8 = (*pcVar3)(plVar1);
LAB_14019a931:
      if (lVar8 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x3b0);
        goto LAB_14019a941;
      }
    }
  }
  else {
    lVar8 = (*pcVar3)(plVar1);
LAB_14019a941:
    if (lVar8 != 0) {
      lVar8 = *(longlong *)(param_1 + -0x4b8);
LAB_14019a951:
      FUN_1456d5756(param_2,lVar8);
      goto LAB_14019a7cb;
    }
  }
  plVar9 = *(longlong **)(param_1 + -0x6b8);
  if (plVar9 != (longlong *)0x0) {
    if (DAT_14cb5b388 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146431698;
      local_58 = &LAB_1486775cb;
      local_60 = &LAB_1464cee35;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
       (plVar9 != plVar1 &&
        *(longlong *)
         (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
        DAT_14cb5b388 + 0x30)) {
      cVar7 = FUN_1449ce97a(plVar9);
      if (cVar7 != '\0') {
        (**(code **)(plVar9[0x10d] + 0x10))(plVar9 + 0x10d,param_2,1);
        goto LAB_14019a7cb;
      }
    }
  }
  lVar8 = (**(code **)(*(longlong *)(param_1 + 0x848) + 0x18))(param_1 + 0x848);
  if (lVar8 == 0) {
    *param_2 = 0xffffffff;
    *(undefined8 *)(param_2 + 1) = 0;
    *(undefined8 *)(param_2 + 3) = 0;
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  param_2[4] = *(undefined4 *)(lVar8 + 0x844);
  uVar4 = *(undefined4 *)(lVar8 + 0x838);
  uVar5 = *(undefined4 *)(lVar8 + 0x83c);
  uVar6 = *(undefined4 *)(lVar8 + 0x840);
  *param_2 = *(undefined4 *)(lVar8 + 0x834);
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
LAB_14019a7cb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14019aa7c FUN_14019aa7c body=127 status=ok
// SIG undefined FUN_14019aa7c(void)

undefined4 * FUN_14019aa7c(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14019aad0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x78);
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
    if (lVar4 != 0) {
      param_2[4] = *(undefined4 *)(lVar4 + 0x90);
      uVar8 = *(undefined4 *)(lVar4 + 0x80);
      uVar9 = *(undefined4 *)(lVar4 + 0x84);
      uVar10 = *(undefined4 *)(lVar4 + 0x88);
      uVar11 = *(undefined4 *)(lVar4 + 0x8c);
      goto LAB_14019aac2;
    }
  }
LAB_14019aad0:
  param_2[4] = 0;
  uVar8 = 0xffffffff;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
LAB_14019aac2:
  *param_2 = uVar8;
  param_2[1] = uVar9;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  return param_2;
}



// FUNCTION 14019aafc FUN_14019aafc body=111 status=ok
// SIG undefined FUN_14019aafc(void)

undefined8 FUN_14019aafc(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14019ab51;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_14019ab51;
    }
  }
  lVar2 = 0;
LAB_14019ab51:
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  return param_2;
}



// FUNCTION 14019ab6c FUN_14019ab6c body=818 status=ok
// SIG undefined FUN_14019ab6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14019ab6c(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  int iVar4;
  double dVar5;
  double *pdVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  double _X;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  
  dVar5 = (double)(DAT_14c707940 ^ (ulonglong)auStack_108);
  local_b0 = dVar5;
  if (((*(longlong *)(param_1 + 0x1518) == 0) || (*(char *)(param_1 + 0x19e8) != '\x01')) ||
     ((*(byte *)(param_1 + 0x5b4) & 0x20) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 == 0) {
      uVar19 = SUB84(DAT_14c8464f8,0);
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
      dVar5 = DAT_14c846508;
    }
    else {
      dVar12 = *(double *)(lVar1 + 0x240);
      dVar13 = *(double *)(lVar1 + 0x248);
      dVar9 = *(double *)(lVar1 + 0x250);
      dVar10 = *(double *)(lVar1 + 600);
      pdVar6 = *(double **)(lVar1 + 0x228);
      lVar8 = param_1;
      local_e8 = dVar12;
      dStack_e0 = dVar13;
      local_d8 = dVar9;
      uStack_d0 = dVar10;
      if (pdVar6 == (double *)0x0) {
        lVar8 = 0x40;
        pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
        dVar5 = DAT_14c8463d8;
        *pdVar6 = DAT_14c8463d0;
        pdVar6[1] = dVar5;
        dVar5 = DAT_14c8463e8;
        pdVar6[2] = DAT_14c8463e0;
        pdVar6[3] = dVar5;
        dVar5 = DAT_14c846500;
        pdVar6[4] = DAT_14c8464f8;
        pdVar6[5] = dVar5;
        dVar5 = DAT_14c846508;
        pdVar6[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar6;
      }
      auVar18._8_8_ = -(ulonglong)(dVar10 != pdVar6[3]);
      auVar18._0_8_ = -(ulonglong)(dVar9 != pdVar6[2]);
      auVar17._8_4_ = (int)-(ulonglong)(dVar13 != pdVar6[1]);
      auVar17._0_8_ = -(ulonglong)(dVar12 != *pdVar6);
      auVar17._12_4_ = (int)(-(ulonglong)(dVar13 != pdVar6[1]) >> 0x20);
      iVar4 = movmskpd(SUB84(dVar5,0),auVar17);
      uVar7 = movmskpd((int)lVar8,auVar18);
      if ((uVar7 & 0x3fffffff) != 0 || iVar4 != 0) {
        *(undefined4 *)(pdVar6 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)pdVar6 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(pdVar6 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)pdVar6 + 0x1c) = uStack_d0._4_4_;
        *pdVar6 = local_e8;
        pdVar6[1] = dStack_e0;
        FUN_1448052ee(&local_e8,&local_c8);
        pdVar6[6] = local_b8;
        pdVar6[4] = local_c8;
        pdVar6[5] = dStack_c0;
      }
      uVar19 = SUB84(pdVar6[4],0);
      uVar20 = (undefined4)((ulonglong)pdVar6[4] >> 0x20);
      dVar5 = pdVar6[6];
    }
    auVar16._4_4_ = uVar20;
    auVar16._0_4_ = uVar19;
    auVar16._8_8_ = *(double *)(param_1 + 0x1758);
    auVar17 = divpd(auVar16,_DAT_1499387d0);
    auVar15._0_8_ = dVar5 / 360.0;
    auVar15._8_8_ = 0;
    auVar18 = roundpd(auVar17,auVar17,3);
    auVar17 = roundpd(auVar15,auVar15,3);
    dVar12 = ((double)CONCAT44(uVar20,uVar19) - auVar18._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar13 = (*(double *)(param_1 + 0x1758) - auVar18._8_8_ * DAT_1499387d0._8_8_) *
             0.008726646259971648;
    dVar5 = (dVar5 - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    _X = (0.0 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar9 = sin(dVar12);
    dVar10 = sin(dVar13);
    dVar11 = sin(dVar5);
    sin(_X);
    dVar12 = cos(dVar12);
    dVar13 = cos(dVar13);
    dVar14 = cos(dVar5);
    cos(_X);
    dVar5 = dVar10 * dVar9 * dVar11 + dVar13 * dVar12 * dVar14;
    *param_2 = dVar9 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11;
    param_2[1] = -(dVar9 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = -(dVar13 * dVar9 * dVar11) + dVar10 * dVar12 * dVar14;
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 2) = auVar2;
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 4) = uVar3;
  if (((ulonglong)local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019aea0 FUN_14019aea0 body=112 status=ok
// SIG undefined FUN_14019aea0(void)

void FUN_14019aea0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar3 = 0;
    do {
      lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar3;
      lVar2 = param_3 + lVar1;
      if (param_3 == 0) {
        lVar2 = 0;
      }
      FUN_14019af10(*(undefined8 *)(param_1 + 0x70),lVar1 + param_2,lVar2,
                    *(undefined8 *)(param_1 + 0x70),param_4,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14019af10 FUN_14019af10 body=178 status=ok
// SIG undefined FUN_14019af10(void)

void FUN_14019af10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  for (plVar2 = *(longlong **)(param_1 + 0x78); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[10]) {
    if (((plVar2[7] & 0x1000008000080000U) != 0) &&
       ((param_6 == 0 || (cVar3 = FUN_14019afc2(param_6,plVar2), cVar3 == '\0')))) {
      iVar1 = *(int *)((longlong)plVar2 + 0x44);
      if ((param_3 == 0) ||
         ((param_4 != 0 &&
          (*(int *)(param_4 + 0x58) < (int)plVar2[6] * *(int *)((longlong)plVar2 + 0x34) + iVar1))))
      {
        lVar4 = 0;
      }
      else {
        lVar4 = param_3 + iVar1;
      }
      (**(code **)(*plVar2 + 0x170))(plVar2,iVar1 + param_2,lVar4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 14019afc2 FUN_14019afc2 body=147 status=ok
// SIG undefined FUN_14019afc2(void)

longlong FUN_14019afc2(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x10) == param_2;
        lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
        if (bVar4) {
          return lVar2;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x68) + 8);
      } while (iVar3 != -1);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14019b056 FUN_14019b056 body=290 status=ok
// SIG undefined FUN_14019b056(void)

void FUN_14019b056(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_1[6]) {
    iVar2 = 0;
    do {
      lVar3 = (longlong)iVar2;
      (**(code **)(*param_1 + 0x218))
                (param_1,&local_50,*(int *)((longlong)param_1 + 0x34) * lVar3 + param_2);
      lVar1 = local_50;
      if (local_50 != 0) {
        if (param_3 == 0) {
          local_58 = 0;
        }
        else {
          (**(code **)(*param_1 + 0x218))
                    (param_1,&local_58,*(int *)((longlong)param_1 + 0x34) * lVar3 + param_3);
        }
        local_68 = (uint)((ulonglong)param_1[7] >> 0x3b) & 2 |
                   (uint)((ulonglong)param_1[7] >> 0x13) & 1;
        lVar1 = FUN_140aef9ca(param_5,local_58,lVar1,param_4);
        if ((lVar1 != 0) || ((*(byte *)((longlong)param_1 + 0x39) & 0x10) == 0)) {
          (**(code **)(*param_1 + 0x1f0))
                    (param_1,*(int *)((longlong)param_1 + 0x34) * lVar3 + param_2,lVar1);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[6]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019b17a FUN_14019b17a body=557 status=ok
// SIG undefined FUN_14019b17a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14019b17a(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *_Dst;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *_Dst_00;
  size_t _Size;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  puVar9 = &local_78;
  local_78 = param_4;
  local_60 = param_3;
  if ((param_2 != (ulonglong *)0x0) &&
     (puVar9 = &local_78,
     (*(uint *)((longlong)*(longlong **)(param_1 + 0x78) + 0x39) & 0x80000800) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x70);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
    iVar3 = *(int *)((longlong)*(longlong **)(param_1 + 0x78) + 0x34);
    bVar2 = *(byte *)(param_1 + 0x70);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
    puVar9 = &local_78;
    _Size = (size_t)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
    if (_Size == 0) {
      _Dst_00 = (undefined1 *)0x0;
    }
    else {
      lVar8 = -(_Size + 0x1e & 0xfffffffffffffff0);
      puVar9 = (undefined8 *)((longlong)&local_78 + lVar8);
      _Dst_00 = (undefined1 *)((longlong)&local_78 + lVar8);
    }
    if (0 < (int)param_2[1]) {
      lVar10 = 0;
      lVar8 = 0;
      lVar11 = 0;
      do {
        if ((local_60 == (ulonglong *)0x0) || ((int)local_60[1] <= lVar11)) {
          local_68 = 0;
        }
        else {
          if ((bVar2 & 1) == 0) {
            uVar7 = *local_60;
          }
          else {
            uVar7 = *local_60;
            if ((uVar7 & 1) != 0) {
              uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)local_60;
            }
          }
          local_68 = uVar7 + lVar8;
        }
        if ((bVar1 & 1) == 0) {
          uVar7 = *param_2;
        }
        else {
          uVar7 = *param_2;
          if ((uVar7 & 1) != 0) {
            uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_2;
          }
        }
        local_70 = lVar8;
        local_58 = lVar11;
        local_50 = lVar10;
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x14019b2a9;
        memmove(_Dst_00,(void *)(uVar7 + lVar10),_Size);
        plVar4 = *(longlong **)(param_1 + 0x78);
        lVar8 = *plVar4;
        *(undefined8 *)((longlong)puVar9 + -0x10) = param_5;
        lVar10 = local_68;
        uVar6 = local_78;
        pcVar5 = *(code **)(lVar8 + 0x170);
        *(undefined8 *)((longlong)puVar9 + -0x38) = 0x14019b2d2;
        (*pcVar5)(plVar4,_Dst_00,lVar10,uVar6);
        if (local_58 < (int)param_2[1]) {
          if ((bVar1 & 1) == 0) {
            uVar7 = *param_2;
          }
          else {
            uVar7 = *param_2;
            if ((uVar7 & 1) != 0) {
              uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_2;
            }
          }
          _Dst = (void *)(uVar7 + local_50);
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x14019b307;
          memmove(_Dst,_Dst_00,_Size);
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x78);
          if ((*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0) {
            pcVar5 = *(code **)(*plVar4 + 0x148);
            *(undefined8 *)((longlong)puVar9 + -0x28) = 0x14019b38f;
            (*pcVar5)(plVar4,_Dst_00);
          }
        }
        lVar11 = local_58 + 1;
        lVar8 = local_70 + _Size;
        lVar10 = local_50 + iVar3;
      } while (lVar11 < (int)param_2[1]);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar9 + -0x28) = &UNK_14019b243;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14019b3ac FUN_14019b3ac body=604 status=ok
// SIG undefined FUN_14019b3ac(void)

undefined4
FUN_14019b3ac(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 *local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined2 local_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d8 = *param_7;
  uStack_d4 = param_7[1];
  uStack_d0 = param_7[2];
  uStack_cc = param_7[3];
  uStack_c8 = param_7[4];
  uStack_c4 = param_7[5];
  uStack_b6 = *(undefined4 *)((longlong)param_7 + 0x22);
  uStack_b2 = *(undefined4 *)((longlong)param_7 + 0x26);
  uStack_b8 = (undefined2)((uint)*(undefined4 *)((longlong)param_7 + 0x1e) >> 0x10);
  uStack_c0 = (undefined2)param_7[6];
  local_be = (undefined2)((uint)param_7[6] >> 0x10);
  uStack_bc = (undefined2)param_7[7];
  uStack_ba = (undefined2)((uint)param_7[7] >> 0x10);
  local_88 = (undefined1 *)0x0;
  local_80 = param_7[0x16];
  lVar4 = (longlong)local_80;
  local_108 = param_4;
  local_100 = param_3;
  if (lVar4 == 0) {
    local_7c = 8;
  }
  else {
    puVar2 = param_7 + 0xc;
    if (*(undefined4 **)(param_7 + 0x14) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_7 + 0x14);
    }
    FUN_14470be6c(local_a8,local_80,0);
    puVar3 = local_88;
    if (local_88 == (undefined1 *)0x0) {
      puVar3 = local_a8;
    }
    memcpy(puVar3,puVar2,lVar4 << 2);
  }
  local_68 = (undefined1 *)0x0;
  local_60 = param_7[0x1e];
  lVar4 = (longlong)local_60;
  if (lVar4 == 0) {
    local_5c = 4;
  }
  else {
    puVar2 = param_7 + 0x18;
    if (*(undefined4 **)(param_7 + 0x1c) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_7 + 0x1c);
    }
    FUN_1447163e6(local_78,local_60,0);
    puVar3 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar3 = local_78;
    }
    memcpy(puVar3,puVar2,lVar4 << 2);
  }
  local_58 = *(undefined1 *)(param_7 + 0x20);
  FUN_14019b60a(&local_d8,param_1);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1417bb680(param_2,0);
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x558))(param_1);
  local_f8 = *puVar2;
  uStack_f4 = puVar2[1];
  uStack_f0 = puVar2[2];
  uStack_ec = puVar2[3];
  local_e8 = puVar2[4];
  uStack_e4 = puVar2[5];
  uStack_e0 = puVar2[6];
  uStack_dc = puVar2[7];
  local_118 = &local_f8;
  local_110 = param_8;
  local_128 = param_6;
  local_130 = param_5;
  local_138 = local_108;
  local_120 = &local_d8;
  uVar1 = FUN_14019b68c(param_1 + 0x82,param_2,local_100,0);
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019b60a FUN_14019b60a body=129 status=ok
// SIG undefined FUN_14019b60a(void)

void FUN_14019b60a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if (((param_2 != (longlong *)0x0) && (uVar3 = (**(code **)(*param_2 + 0x570))(param_2), uVar3 < 6)
      ) && ((0x2aU >> (uVar3 & 0x1f) & 1) != 0)) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    piVar5 = (int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x50);
      if (*(int **)(param_1 + 0x50) == (int *)0x0) {
        piVar4 = piVar5;
      }
      if (*piVar4 == iVar1) {
        return;
      }
    }
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_140694806(piVar5,iVar2);
    }
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      piVar5 = *(int **)(param_1 + 0x50);
    }
    piVar5[iVar2] = iVar1;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



// FUNCTION 14019b68c FUN_14019b68c body=4623 status=ok
// SIG undefined FUN_14019b68c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_14019b68c(double **param_1,double param_2,undefined8 param_3,double *param_4,undefined8 *param_5
             ,double *param_6,undefined8 param_7,code *param_8,double param_9,double param_10)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  double **ppdVar13;
  double *pdVar14;
  code **ppcVar15;
  double *pdVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar35;
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auStack_3a8 [32];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 *local_368;
  double dStack_360;
  undefined1 *local_358;
  double dStack_350;
  undefined1 *local_340;
  double *local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  code *local_308;
  code **local_300;
  double local_2f8 [4];
  undefined1 *local_2d8;
  double dStack_2d0;
  undefined1 *local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_291;
  undefined8 local_290;
  undefined1 local_288;
  undefined7 uStack_287;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 *local_208;
  double dStack_200;
  undefined1 *local_1f8;
  undefined8 uStack_1f0;
  code *local_1e8;
  double **ppdStack_1e0;
  undefined8 *local_1d8;
  double **ppdStack_1d0;
  undefined1 *local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 *puStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  double dStack_180;
  undefined1 *local_178;
  undefined8 uStack_170;
  double *local_168;
  double **ppdStack_160;
  undefined1 local_158 [16];
  undefined1 *local_148;
  double dStack_140;
  undefined1 *local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 *local_108;
  double dStack_100;
  undefined1 *local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_290 = param_3;
  if ((param_1[0x27] == (double *)0x0) &&
     ((param_1[0x21] == (double *)0x0 || (param_1[0x21][0x27] == 0.0)))) {
    uVar6 = 0;
  }
  else {
    local_291 = 0;
    pdVar1 = (double *)*param_6;
    dVar39 = param_6[1];
    dVar42 = *(double *)*(undefined1 (*) [16])(param_6 + 2);
    dVar28 = param_6[3];
    local_158 = *(undefined1 (*) [16])(param_6 + 2);
    puVar2 = (undefined1 *)*param_5;
    dVar27 = (double)param_5[1];
    puVar12 = (undefined1 *)param_5[2];
    if (param_4 == (double *)0x0) {
      dStack_130 = 0.0;
      local_128 = 1.0;
      dStack_120 = 1.0;
      local_118 = 1.0;
      dStack_110 = 0.0;
      local_168 = pdVar1;
      ppdStack_160 = (double **)dVar39;
      local_148 = puVar2;
      dStack_140 = dVar27;
      local_138 = puVar12;
    }
    else {
      ppdVar13 = (double **)param_1[0x21];
      if (ppdVar13 == (double **)0x0) {
        local_268 = (double)((ulonglong)local_268._1_7_ << 8);
        local_288 = 1;
        pdVar14 = (double *)&DAT_14c846480;
        pdVar16 = local_2f8;
        for (lVar11 = 0xc; ppdVar13 = param_1, lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar16 = *pdVar14;
          pdVar14 = pdVar14 + 1;
          pdVar16 = pdVar16 + 1;
        }
      }
      else {
        local_268 = (double)((ulonglong)local_268._1_7_ << 8);
        local_288 = 1;
        pdVar14 = (double *)&DAT_14c846480;
        pdVar16 = local_2f8;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar16 = *pdVar14;
          pdVar14 = pdVar14 + 1;
          pdVar16 = pdVar16 + 1;
        }
      }
      local_158._8_8_ = &local_268;
      local_158._0_8_ = &local_288;
      local_168 = local_2f8;
      ppdStack_1e0 = &local_168;
      local_1e8 = FUN_1400d78f6;
      iVar7 = (int)ppdVar13 + 0x138;
      local_368 = puVar2;
      dStack_360 = dVar27;
      local_338 = pdVar1;
      dStack_330 = dVar39;
      local_328 = dVar42;
      dStack_320 = dVar28;
      ppdStack_160 = ppdVar13;
      uVar8 = FUN_1448e6002();
      dStack_350 = 0.0;
      local_388 = local_2b8._0_8_;
      dStack_380 = local_2b8._8_8_;
      dVar27 = local_2a8._0_8_;
      dVar28 = local_2a8._8_8_;
      auVar18 = *(undefined1 (*) [16])(param_4 + 8);
      dVar39 = auVar18._0_8_;
      dVar40 = auVar18._8_8_;
      auVar46 = *(undefined1 (*) [16])(param_4 + 10);
      dVar42 = auVar46._0_8_;
      auVar18 = minpd(auVar18,local_2b8);
      auVar29 = minpd(auVar46,local_2a8);
      auVar41._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar9 = movmskpd(uVar8,auVar41);
      auVar18._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      uVar10 = movmskpd(iVar7,auVar18);
      local_358 = puVar12;
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar23 = *param_4;
        dVar31 = param_4[1];
        dVar35 = param_4[2];
        dVar37 = param_4[3];
        dVar32 = dVar31 * local_2f8[2] * -1.0 +
                 dVar35 * local_2f8[1] + dVar37 * local_2f8[0] * 1.0 + dVar23 * local_2f8[3];
        dVar36 = dVar23 * local_2f8[2] * 1.0 +
                 dVar37 * local_2f8[1] + dVar35 * local_2f8[0] * -1.0 + dVar31 * local_2f8[3];
        auVar29._0_8_ =
             dVar37 * local_2f8[2] * 1.0 +
             ((local_2f8[0] * dVar31 * 1.0 + dVar35 * local_2f8[3]) - dVar23 * local_2f8[1]);
        auVar29._8_8_ =
             dVar35 * local_2f8[2] * -1.0 +
             ((local_2f8[0] * dVar23 * -1.0 + dVar37 * local_2f8[3]) - dVar31 * local_2f8[1]);
        dVar37 = param_4[4] * local_388;
        dVar38 = param_4[5] * dStack_380;
        dVar43 = param_4[6] * dVar27;
        dVar44 = param_4[7] * dVar28;
        dVar23 = dVar38 * local_2f8[0] - local_2f8[1] * dVar37;
        dVar31 = dVar43 * local_2f8[1] - local_2f8[2] * dVar38;
        dVar35 = dVar37 * local_2f8[2] - local_2f8[0] * dVar43;
        dVar45 = dVar44 * local_2f8[3] - local_2f8[3] * dVar44;
        dVar31 = dVar31 + dVar31;
        dVar35 = dVar35 + dVar35;
        dVar23 = dVar23 + dVar23;
        dVar45 = dVar45 + dVar45;
        local_2d8 = (undefined1 *)
                    ((dVar23 * local_2f8[1] - local_2f8[2] * dVar35) +
                     local_2f8[3] * dVar31 + dVar37 + (double)local_2d8);
        dStack_2d0 = (dVar31 * local_2f8[2] - dVar23 * local_2f8[0]) +
                     local_2f8[3] * dVar35 + dVar38 + dStack_2d0;
        local_2c8 = (undefined1 *)
                    ((dVar35 * local_2f8[0] - local_2f8[1] * dVar31) +
                     local_2f8[3] * dVar23 + dVar43 + (double)local_2c8);
        dStack_130 = (dVar45 * local_2f8[3] - dVar45 * local_2f8[3]) +
                     local_2f8[3] * dVar45 + dVar44 + dStack_2c0;
        local_388 = dVar39 * local_388;
        dStack_380 = dVar40 * dStack_380;
        auVar46._8_8_ = auVar46._8_8_ * dVar28;
        auVar46._0_8_ = dVar42 * dVar27;
        uVar8 = 0;
      }
      else {
        dVar23 = local_2f8[1] + local_2f8[1];
        dVar31 = local_2f8[2] + local_2f8[2];
        dVar37 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
        local_198 = (1.0 - (dVar37 + local_2f8[1] * dVar23)) * dVar27;
        dVar35 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
        local_1a8 = (dVar23 * local_2f8[3] + local_2f8[0] * dVar31) * dVar27;
        dVar28 = dVar28 * auVar46._8_8_;
        local_318._8_4_ = SUB84(dVar28,0);
        local_318._0_8_ = dVar27 * dVar42;
        local_318._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        local_1c8 = (undefined1 *)((dVar23 * local_2f8[0] - dVar31 * local_2f8[3]) * dStack_380);
        dStack_1a0 = (dVar31 * local_2f8[1] - dVar35) * dVar27;
        local_1e8 = (code *)((1.0 - (local_2f8[2] * dVar31 + local_2f8[1] * dVar23)) * local_388);
        dStack_1c0 = (1.0 - (local_2f8[2] * dVar31 + dVar37)) * dStack_380;
        ppdStack_1e0 = (double **)((dVar23 * local_2f8[0] + dVar31 * local_2f8[3]) * local_388);
        local_1b8 = (dVar31 * local_2f8[1] + dVar35) * dStack_380;
        local_1d8 = (undefined8 *)((local_2f8[0] * dVar31 - dVar23 * local_2f8[3]) * local_388);
        ppdStack_1d0 = (double **)0x0;
        puStack_1b0 = (undefined1 *)0x0;
        uStack_190 = 0;
        local_188 = local_2d8;
        dStack_180 = dStack_2d0;
        local_178 = local_2c8;
        uStack_170 = 0x3ff0000000000000;
        dVar28 = *param_4;
        dVar23 = param_4[1];
        dVar31 = param_4[2];
        dVar35 = dVar23 + dVar23;
        dVar37 = dVar31 + dVar31;
        dVar38 = dVar28 * (dVar28 + dVar28);
        local_218 = (1.0 - (dVar38 + dVar23 * dVar35)) * dVar42;
        dVar27 = param_4[3];
        dVar32 = dVar37 * dVar27;
        dVar36 = (dVar28 + dVar28) * param_4[3];
        dVar27 = dVar35 * dVar27;
        local_228 = (dVar27 + *param_4 * dVar37) * dVar42;
        local_248 = (dVar35 * dVar28 - dVar32) * dVar40;
        dStack_220 = (dVar37 * dVar23 - dVar36) * dVar42;
        local_388 = local_388 * dVar39;
        dStack_380 = dStack_380 * dVar40;
        local_268 = (1.0 - (dVar31 * dVar37 + dVar23 * dVar35)) * dVar39;
        dStack_240 = (1.0 - (dVar31 * dVar37 + dVar38)) * dVar40;
        dStack_260 = (dVar35 * dVar28 + dVar32) * dVar39;
        local_238 = (dVar37 * dVar23 + dVar36) * dVar40;
        local_258 = (*param_4 * dVar37 - dVar27) * dVar39;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = (undefined1 *)param_4[4];
        dStack_200 = param_4[5];
        local_1f8 = (undefined1 *)param_4[6];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        auVar46 = local_318;
        auVar18 = _DAT_149934d80;
        local_340 = (undefined1 *)local_158._0_8_;
        dVar39 = (double)local_158._0_8_ * (double)local_158._0_8_ +
                 (double)local_168 * (double)local_168 + (double)ppdStack_160 * (double)ppdStack_160
        ;
        dVar42 = (double)local_138 * (double)local_138 +
                 (double)local_148 * (double)local_148 + dStack_140 * dStack_140;
        dVar27 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
        local_378 = 0.0;
        dStack_370 = 0.0;
        uVar17 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
        dVar39 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar17);
        uVar17 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar17);
        uVar17 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
        dVar28 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar17);
        auVar19._8_8_ = -(ulonglong)(0.0 <= dStack_380);
        auVar19._0_8_ = -(ulonglong)(0.0 <= local_388);
        auVar41 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar19);
        uVar17 = -(ulonglong)(0.0 <= local_318._0_8_);
        dVar27 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
        dVar40 = auVar41._0_8_;
        local_168 = (double *)((double)local_168 * dVar39 * dVar40);
        ppdStack_160 = (double **)((double)ppdStack_160 * dVar39 * dVar40);
        local_158._0_8_ = dVar39 * (double)local_158._0_8_ * dVar40;
        dVar39 = auVar41._8_8_;
        local_138 = (undefined1 *)(dVar42 * (double)local_138 * dVar39);
        dStack_140 = dStack_140 * dVar42 * dVar39;
        local_148 = (undefined1 *)(dVar39 * (double)local_148 * dVar42);
        local_118 = dVar28 * local_118 * dVar27;
        dStack_120 = dStack_120 * dVar28 * dVar27;
        local_128 = dVar27 * local_128 * dVar28;
        puVar12 = &local_288;
        iVar9 = FUN_14481fd10(puVar12,&local_168);
        uVar8 = SUB84(puVar12,0);
        dVar27 = (double)CONCAT71(uStack_287,local_288);
        dVar39 = local_278 * local_278 + dVar27 * dVar27;
        dVar42 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar25._0_8_ = dVar39 + dVar42;
        auVar25._8_8_ = dVar39 + dVar42;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
        auVar41 = sqrtpd(auVar25,auVar25);
        auVar18 = divpd(auVar18,auVar41);
        auVar33._0_8_ = auVar18._0_8_ * local_278;
        auVar33._8_8_ = auVar18._8_8_ * dStack_270;
        dVar32 = (double)((ulonglong)(dVar27 * auVar18._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
        dVar36 = (double)((ulonglong)(dStack_280 * auVar18._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
        dStack_370 = 1.0;
        auVar4._8_8_ = 0x3ff0000000000000;
        auVar4._0_8_ = local_378;
        auVar29 = blendvpd(auVar4,auVar33,auVar20);
        dStack_130 = 0.0;
        local_2c8 = local_f8;
        local_2d8 = local_108;
        dStack_2d0 = dStack_100;
      }
      auVar3._8_8_ = dStack_380;
      auVar3._0_8_ = local_388;
      auVar18 = minpd(_DAT_149934d80,auVar3);
      auVar41 = minpd(ZEXT816(0x3ff0000000000000),auVar46);
      auVar24._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar24._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar7 = movmskpd(iVar9,auVar24);
      auVar26._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      uVar10 = movmskpd(uVar8,auVar26);
      dVar27 = auVar46._0_8_;
      dVar39 = auVar46._8_8_;
      dVar42 = auVar29._0_8_;
      dVar28 = auVar29._8_8_;
      if ((uVar10 & 0x3fffffff) == 0 && iVar7 == 0) {
        local_168 = (double *)
                    (dStack_330 * dVar42 * -1.0 +
                    local_328 * dVar36 + dStack_320 * dVar32 * 1.0 + (double)local_338 * dVar28);
        ppdStack_160 = (double **)
                       ((double)local_338 * dVar42 * 1.0 +
                       dStack_320 * dVar36 + local_328 * dVar32 * -1.0 + dStack_330 * dVar28);
        local_158._0_8_ =
             dStack_320 * dVar42 * 1.0 +
             ((dVar32 * dStack_330 * 1.0 + local_328 * dVar28) - dVar36 * (double)local_338);
        local_158._8_8_ =
             local_328 * dVar42 * -1.0 +
             ((dVar32 * (double)local_338 * -1.0 + dStack_320 * dVar28) - dVar36 * dStack_330);
        dVar40 = (double)local_368 * local_388;
        dVar23 = dStack_360 * dStack_380;
        dVar43 = (double)local_358 * dVar27;
        dVar44 = dStack_350 * dVar39;
        dVar31 = dVar23 * dVar32 - dVar40 * dVar36;
        dVar35 = dVar43 * dVar36 - dVar23 * dVar42;
        dVar37 = dVar40 * dVar42 - dVar43 * dVar32;
        dVar38 = dVar44 * dVar28 - dVar44 * dVar28;
        dVar35 = dVar35 + dVar35;
        dVar37 = dVar37 + dVar37;
        dVar31 = dVar31 + dVar31;
        dVar38 = dVar38 + dVar38;
        local_108 = (undefined1 *)
                    ((double)local_2d8 +
                    (dVar31 * dVar36 - dVar42 * dVar37) + dVar28 * dVar35 + dVar40);
        dStack_100 = dStack_2d0 + (dVar35 * dVar42 - dVar31 * dVar32) + dVar28 * dVar37 + dVar23;
        local_f8 = (undefined1 *)
                   ((double)local_2c8 +
                   (dVar37 * dVar32 - dVar36 * dVar35) + dVar28 * dVar31 + dVar43);
        dStack_130 = dStack_130 + (dVar38 * dVar28 - dVar38 * dVar28) + dVar28 * dVar38 + dVar44;
        dVar27 = dVar27 * 1.0;
        dVar39 = dVar39 * 0.0;
      }
      else {
        local_378 = dVar27 * 1.0;
        dStack_370 = dVar39 * 0.0;
        dVar39 = dVar36 + dVar36;
        dVar23 = dVar42 + dVar42;
        dVar40 = dVar32 * (dVar32 + dVar32);
        local_198 = (1.0 - (dVar40 + dVar36 * dVar39)) * dVar27;
        dVar31 = (dVar32 + dVar32) * dVar28;
        local_1a8 = (dVar32 * dVar23 + dVar39 * dVar28) * dVar27;
        local_1c8 = (undefined1 *)((dVar39 * dVar32 - dVar23 * dVar28) * dStack_380);
        dStack_1a0 = (dVar23 * dVar36 - dVar31) * dVar27;
        local_1e8 = (code *)(((double)DAT_149934d80 - (dVar42 * dVar23 + dVar36 * dVar39)) *
                            local_388);
        dStack_1c0 = (DAT_149934d80._8_8_ - (dVar42 * dVar23 + dVar40)) * dStack_380;
        ppdStack_1e0 = (double **)((dVar39 * dVar32 + dVar23 * dVar28) * local_388);
        local_1b8 = (dVar23 * dVar36 + dVar31) * dStack_380;
        local_1d8 = (undefined8 *)((dVar32 * dVar23 - dVar39 * dVar28) * local_388);
        ppdStack_1d0 = (double **)0x0;
        puStack_1b0 = (undefined1 *)0x0;
        uStack_190 = 0;
        uStack_170 = 0x3ff0000000000000;
        dVar27 = dStack_330 + dStack_330;
        dVar42 = local_328 + local_328;
        dVar39 = (double)local_338 * ((double)local_338 + (double)local_338);
        local_268 = (double)DAT_149934d80 - (local_328 * dVar42 + dStack_330 * dVar27);
        dStack_240 = DAT_149934d80._8_8_ - (local_328 * dVar42 + dVar39);
        local_218 = 1.0 - (dVar39 + dStack_330 * dVar27);
        dStack_220 = ((double)local_338 + (double)local_338) * dStack_320;
        dStack_260 = dVar27 * (double)local_338 + dVar42 * dStack_320;
        local_238 = dVar42 * dStack_330 + dStack_220;
        local_248 = dVar27 * (double)local_338 - dVar42 * dStack_320;
        dStack_220 = dVar42 * dStack_330 - dStack_220;
        local_228 = dVar27 * dStack_320 + (double)local_338 * dVar42;
        local_258 = (double)local_338 * dVar42 - dVar27 * dStack_320;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = local_368;
        dStack_200 = dStack_360;
        local_1f8 = local_358;
        uStack_1f0 = 0x3ff0000000000000;
        local_188 = local_2d8;
        dStack_180 = dStack_2d0;
        local_178 = local_2c8;
        FUN_1447fea8d(&local_168);
        dVar39 = dStack_370;
        dVar27 = local_378;
        local_358 = (undefined1 *)local_158._0_8_;
        dVar42 = (double)local_158._0_8_ * (double)local_158._0_8_ +
                 (double)local_168 * (double)local_168 + (double)ppdStack_160 * (double)ppdStack_160
        ;
        local_368 = local_138;
        dVar40 = (double)local_138 * (double)local_138 +
                 (double)local_148 * (double)local_148 + dStack_140 * dStack_140;
        dVar23 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
        uVar17 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar28 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar17);
        uVar17 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
        dVar40 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar40)) & uVar17);
        uVar17 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
        dVar23 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar17);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_380);
        auVar21._0_8_ = -(ulonglong)(0.0 <= local_388);
        auVar18 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
        dVar42 = (double)(~-(ulonglong)(0.0 <= local_378) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_378) & 0x3ff0000000000000);
        dVar31 = auVar18._0_8_;
        local_168 = (double *)((double)local_168 * dVar28 * dVar31);
        ppdStack_160 = (double **)((double)ppdStack_160 * dVar28 * dVar31);
        local_158._0_8_ = dVar28 * (double)local_158._0_8_ * dVar31;
        dVar28 = auVar18._8_8_;
        local_138 = (undefined1 *)(dVar40 * (double)local_138 * dVar28);
        dStack_140 = dStack_140 * dVar40 * dVar28;
        local_148 = (undefined1 *)(dVar28 * (double)local_148 * dVar40);
        local_118 = dVar23 * local_118 * dVar42;
        dStack_120 = dStack_120 * dVar23 * dVar42;
        local_128 = dVar42 * local_128 * dVar23;
        FUN_14481fd10(&local_288,&local_168);
        dVar42 = (double)CONCAT71(uStack_287,local_288);
        dVar28 = local_278 * local_278 + dVar42 * dVar42;
        dVar40 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar30._0_8_ = dVar28 + dVar40;
        auVar30._8_8_ = dVar28 + dVar40;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
        auVar18 = sqrtpd(auVar30,auVar30);
        auVar18 = divpd(_DAT_149934d80,auVar18);
        auVar34._0_8_ = auVar18._0_8_ * local_278;
        auVar34._8_8_ = auVar18._8_8_ * dStack_270;
        local_168 = (double *)
                    ((ulonglong)(dVar42 * auVar18._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
        ppdStack_160 = (double **)
                       ((ulonglong)(dStack_280 * auVar18._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
        local_158 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar22);
        dStack_130 = 0.0;
      }
      local_128 = local_388;
      dStack_120 = dStack_380;
      local_148 = local_108;
      dStack_140 = dStack_100;
      local_138 = local_f8;
      local_118 = dVar27;
      dStack_110 = dVar39;
    }
    dVar39 = param_10;
    dVar27 = param_9;
    pcVar5 = param_8;
    if (param_1[0x21] == (double *)0x0) {
      ppdVar13 = (double **)0x0;
    }
    else {
      FUN_147c482b5(&local_1e8,param_1,&local_168);
      ppcVar15 = &local_1e8;
      ppdVar13 = &local_168;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *ppdVar13 = (double *)*ppcVar15;
        ppcVar15 = ppcVar15 + 1;
        ppdVar13 = ppdVar13 + 1;
      }
      ppdVar13 = (double **)param_1[0x21];
    }
    if (ppdVar13 == (double **)0x0) {
      ppdVar13 = param_1;
    }
    local_300 = &local_1e8;
    local_1e8 = pcVar5;
    local_1d8 = &local_290;
    ppdStack_1d0 = &local_168;
    local_1c8 = (undefined1 *)&param_7;
    dStack_1c0 = dVar27;
    local_1b8 = dVar39;
    puStack_1b0 = &local_291;
    local_308 = FUN_143623206;
    ppdStack_1e0 = param_1;
    local_1a8 = param_2;
    FUN_1448e6002(ppdVar13 + 0x27);
    uVar6 = local_291;
  }
  if ((local_e0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14019c89c FUN_14019c89c body=41 status=ok
// SIG undefined FUN_14019c89c(void)

void FUN_14019c89c(longlong param_1,undefined8 param_2)

{
  FUN_14019c8c6();
  FUN_14019c9a8(param_1 + 0x2d0,param_2);
  return;
}



// FUNCTION 14019c8c6 FUN_14019c8c6 body=226 status=ok
// SIG undefined FUN_14019c8c6(void)

void FUN_14019c8c6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  FUN_14019c9f2(param_1 + 0x10);
  FUN_14019c9f2(param_1 + 0x20,param_2);
  FUN_14019c9a8(param_1 + 0x1f0,param_2);
  FUN_14019c9a8(param_1 + 0x120,param_2);
  if ((*(byte *)(param_1 + 0x1dc) & 4) != 0) {
    FUN_14019c9a8(param_1 + 0x60,param_2);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 0) {
    if ((((~uVar3 & 0x7fffffff) == 0) || (uVar3 = (int)(uVar3 * 2) >> 1, (int)uVar3 < 0)) ||
       (*(int *)(param_2 + 0x88) <= (int)uVar3)) {
      uVar2 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
      goto LAB_14019c954;
    }
    piVar4 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(param_2 + 0x80));
  }
  else {
    piVar4 = (int *)(param_1 + 0x1c);
  }
  iVar1 = *piVar4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  if ((longlong)iVar1 == -1) {
    return;
  }
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x1c8) = iVar1;
  if ((longlong)iVar1 == -1) {
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar1 * 4);
LAB_14019c954:
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  return;
}



// FUNCTION 14019c9a8 FUN_14019c9a8 body=73 status=ok
// SIG undefined FUN_14019c9a8(void)

void FUN_14019c9a8(char *param_1)

{
  longlong lVar1;
  
  if (*param_1 == '\x01') {
    FUN_147939906(param_1 + 0x20);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x7fffffff;
    lVar1 = 0x10;
  }
  else {
    FUN_14019c9f2(param_1 + 4);
    param_1[0x88] = -1;
    param_1[0x89] = -1;
    param_1[0x8a] = -1;
    param_1[0x8b] = -1;
    lVar1 = 0x8c;
  }
  param_1 = param_1 + lVar1;
  param_1[0] = -1;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  return;
}



// FUNCTION 14019c9f2 FUN_14019c9f2 body=184 status=ok
// SIG undefined FUN_14019c9f2(void)

undefined4 FUN_14019c9f2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = FUN_1408bcd7e(param_2,param_1);
  uVar2 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 == 0x7fffffff) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (int)(uVar1 * 2) >> 1;
  }
  uVar3 = 0xffffffff;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = (longlong)(int)param_2[1] * 2;
    lVar5 = 0;
    do {
      if (uVar1 == *(ushort *)(*param_2 + lVar5 * 2)) {
        uVar3 = (undefined4)lVar5;
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -2;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7fffffff);
}



// FUNCTION 14019caaa FUN_14019caaa body=465 status=ok
// SIG undefined FUN_14019caaa(void)

undefined8 FUN_14019caaa(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  code **local_88;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  code *local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14019cc7c();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    lVar6 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x148);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x150) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      uVar7 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar5 * 0x18);
        if (*plVar1 == lVar4) {
          if ((plVar1 == (longlong *)0x0) || (*(uint *)(plVar1 + 1) == 0)) goto LAB_14019cc6a;
          lVar4 = (longlong)(int)(*(uint *)(plVar1 + 1) & ~*(uint *)(param_1 + 0xdc)) * 0x30;
          uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xb8) + lVar4);
          local_68 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 8 + lVar4);
          local_70 = uVar3 & 0xffffffffffff;
          lVar4 = *(longlong *)(param_1 + 0xa8);
          lVar6 = (uVar3 >> 0x30) * 0x98;
          local_50 = lVar4 + lVar6;
          local_60 = &local_38;
          local_38 = 0;
          local_40 = &local_78;
          local_88 = &local_48;
          local_48 = FUN_142b102fe;
          local_90 = *(undefined4 *)(lVar4 + 0x24 + lVar6);
          uVar2 = *(undefined4 *)(lVar4 + 0x20 + lVar6);
          local_a0 = *(undefined8 *)(lVar4 + 0x18 + lVar6);
          local_a8 = 0;
          local_98 = uVar2;
          local_78 = param_1;
          local_58 = param_3;
          FUN_1401706c6(*(undefined4 *)(lVar4 + 0x80 + lVar6),param_1 + 0xe0,local_70,
                        local_68 + local_70 + -1);
          uVar7 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      goto LAB_14019cc37;
    }
  }
LAB_14019cc6a:
  uVar7 = 0;
LAB_14019cc37:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14019cc7c FUN_14019cc7c body=270 status=ok
// SIG undefined FUN_14019cc7c(void)

void FUN_14019cc7c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x278) == 0) {
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (&local_38 != (longlong **)(param_1 + 0x268)) {
      local_38 = *(longlong **)(param_1 + 0x268);
      uStack_30 = *(ulonglong *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if ((longlong)(int)uStack_30 != 0) {
      plVar1 = local_38 + (int)uStack_30;
      plVar4 = local_38;
      do {
        puVar2 = (undefined8 *)*plVar4;
        if (*(char *)((longlong)puVar2 + 0x51) == '\0') {
          do {
            FUN_14000f986(0);
          } while (*(char *)((longlong)puVar2 + 0x51) != '\x01');
        }
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    uVar3 = uStack_30 >> 0x20;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      FUN_14019cd8c(&local_38,0);
    }
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14019cd8c FUN_14019cd8c body=96 status=ok
// SIG undefined FUN_14019cd8c(void)

void FUN_14019cd8c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14019cdec FUN_14019cdec body=236 status=ok
// SIG undefined FUN_14019cdec(void)

void FUN_14019cdec(longlong param_1,double *param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  double dVar5;
  double dVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x80) != 0) && (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0))
  {
    dVar2 = *(double *)(param_1 + 0x4b8) - param_2[2];
    dVar6 = *(double *)(param_1 + 0x4b0) - param_2[1];
    dVar5 = *(double *)(param_1 + 0x4a8) - *param_2;
    puVar3 = (undefined4 *)(param_4 + 0x28);
    if ((*(byte *)(param_4 + 0xad) & 1) == 0) {
      puVar3 = param_3;
    }
    local_38 = *(undefined8 *)(puVar3 + 4);
    local_48 = *puVar3;
    uStack_44 = puVar3[1];
    uStack_40 = puVar3[2];
    uStack_3c = puVar3[3];
    uVar4 = FUN_1447210f0(lVar1);
    local_50 = 0x3f800000;
    local_58 = lVar1;
    FUN_14019ced9(uVar4,param_2,&local_48,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                           dVar2 * dVar2 + dVar5 * dVar5 + dVar6 * dVar6 < 10.0) & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019ced9 FUN_14019ced9 body=232 status=ok
// SIG undefined FUN_14019ced9(void)

void FUN_14019ced9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14019d0a4(&local_50,param_1);
  if (local_48 != (longlong *)0x0) {
    iVar4 = (int)local_48[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_48[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_48 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_48;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_50 != 0) {
        local_60 = param_6;
        local_68 = param_5;
        FUN_14019cfc2(local_50,param_2,param_3,param_4);
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14019cfc2 FUN_14019cfc2 body=224 status=ok
// SIG undefined FUN_14019cfc2(void)

void FUN_14019cfc2(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined1 param_4,
                  longlong param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 != 0) {
    local_68 = param_2[2];
    local_78 = *param_2;
    uStack_70 = param_2[1];
    uStack_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    uStack_50 = *(undefined8 *)(param_3 + 4);
    iVar2 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar2 + 1U) {
      FUN_14019d1dc((longlong *)(param_1 + 0x100),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar4 = (longlong)iVar2 * 0x40;
    puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
    *puVar1 = uStack_58;
    puVar1[1] = uStack_54;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
    *puVar1 = (undefined4)local_68;
    puVar1[1] = local_68._4_4_;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    puVar1 = (undefined4 *)(lVar3 + lVar4);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    *(undefined1 *)(lVar3 + 0x30 + lVar4) = param_4;
    *(undefined4 *)(lVar3 + 0x34 + lVar4) = param_6;
    *(longlong *)(lVar3 + 0x38 + lVar4) = param_5;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019d0a4 FUN_14019d0a4 body=310 status=ok
// SIG undefined FUN_14019d0a4(void)

longlong * FUN_14019d0a4(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb246a0;
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



// FUNCTION 14019d1dc FUN_14019d1dc body=255 status=ok
// SIG undefined FUN_14019d1dc(void)

void FUN_14019d1dc(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14019d2dc FUN_14019d2dc body=100 status=ok
// SIG undefined FUN_14019d2dc(void)

void FUN_14019d2dc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x30 + 0x28);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_14019d340(param_1,param_2,1);
  return;
}



// FUNCTION 14019d340 FUN_14019d340 body=144 status=ok
// SIG undefined FUN_14019d340(void)

void FUN_14019d340(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14019d3d0 FUN_14019d3d0 body=963 status=ok
// SIG undefined FUN_14019d3d0(void)

undefined8 *
FUN_14019d3d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_258 [32];
  longlong local_238;
  undefined8 uStack_230;
  int local_228;
  int iStack_224;
  longlong *local_220;
  int local_218;
  undefined1 local_210 [8];
  longlong local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 local_158 [10];
  undefined1 local_108 [184];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_14019da20(local_108,param_4);
  FUN_14019d827(local_158,param_4);
  iVar1 = *(int *)(DAT_14ca02cf8 + 4);
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 2;
  iStack_224 = 0;
  if ((*(int *)(DAT_14ca02a70 + 4) == 0) || (*(int *)(DAT_14ca02c20 + 4) == 0)) goto LAB_14019d5c9;
  memcpy(&local_208,local_108,0xa8);
  local_220 = (longlong *)0x0;
  local_218 = 0;
  FUN_1446efa72(&local_220,0,0xe,0x10);
  plVar2 = local_220;
  local_218 = 0xe;
  *local_220 = (longlong)&PTR_LAB_14a258830;
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
  local_220[2] = lVar7;
  *local_220 = (longlong)&PTR_FUN_14a288e00;
  memcpy(local_220 + 4,&local_208,0xb0);
  *(undefined2 *)(plVar2 + 0x1a) = param_6;
  if (((local_218 == 0) || (local_220 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_220 + 0x30))(), cVar5 == '\0')) {
    if (local_218 != 0) {
      if (local_220 == (longlong *)0x0) goto LAB_14019d5c9;
      (**(code **)*local_220)(local_220,0);
      FUN_1446efa72(&local_220,0,0,0x10);
      goto LAB_14019d5b3;
    }
  }
  else {
    if (iStack_224 < 1) {
      iVar3 = (int)uStack_230;
      local_228 = local_228 + -1;
      if (local_228 <= (int)uStack_230) {
        if (0 < (int)uStack_230) {
          iVar8 = 0;
          do {
            if (((*(int *)(local_238 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(local_238 + (longlong)iVar8 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(&local_238,iVar8);
              FUN_14005b248(&local_238);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          } while (iVar8 < (int)uStack_230);
        }
        iVar8 = (int)uStack_230 * 2;
        local_228 = 2;
        if (2 < iVar8) {
          local_228 = iVar8;
        }
        if ((local_228 < iVar3) && (uStack_230._4_4_ != (int)uStack_230)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_218 != 0) && (local_220 != (longlong *)0x0)) {
      (**(code **)(*local_220 + 0x38))(local_220,local_210);
    }
    uVar4 = uStack_230;
    lVar9 = (longlong)(int)uStack_230;
    uVar6 = (int)uStack_230 + 1;
    uStack_230 = CONCAT44(uStack_230._4_4_,uVar6);
    if (uStack_230._4_4_ < uVar6) {
      FUN_1447a71f6(&local_238,uVar4 & 0xffffffff);
    }
    lVar9 = lVar9 * 0x10;
    *(undefined8 *)(local_238 + lVar9) = 0;
    *(undefined4 *)(local_238 + 8 + lVar9) = 0;
    *(longlong **)(local_238 + lVar9) = local_220;
    local_220 = (longlong *)0x0;
    *(int *)(local_238 + 8 + lVar9) = local_218;
LAB_14019d5b3:
    local_218 = 0;
  }
  if (local_220 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14019d5c9:
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 2;
  puVar10 = local_158;
  puVar11 = param_2;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(bool *)(param_2 + 10) = iVar1 != 0;
  param_2[0xb] = param_4;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 2;
  FUN_14019d794(param_2 + 0xe,&local_208);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 2;
  FUN_14019d794(param_2 + 0x11,&local_238);
  FUN_144760e21(local_208,uStack_200 & 0xffffffff);
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_238,uStack_230 & 0xffffffff);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14019d794 FUN_14019d794 body=147 status=ok
// SIG undefined FUN_14019d794(void)

longlong * FUN_14019d794(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != param_1) {
    FUN_144760e21(0,0);
    lVar2 = *param_2;
    *param_2 = 0;
    lVar3 = param_2[1];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    lVar4 = param_2[2];
    *(undefined8 *)((longlong)param_2 + 0xc) = 0x200000000;
    FUN_1448a8284(param_1);
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 2) = (int)lVar4;
    FUN_144760e21(0,0);
  }
  return param_1;
}



// FUNCTION 14019d827 FUN_14019d827 body=505 status=ok
// SIG undefined FUN_14019d827(void)

undefined4 * FUN_14019d827(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[3] = 0x3f800000;
  *param_1 = *(undefined4 *)(DAT_14ca02ce0 + 4);
  param_1[1] = *(undefined4 *)(DAT_14ca02c50 + 4);
  param_1[2] = *(undefined4 *)(DAT_14ca02c68 + 4);
  iVar5 = 0x100;
  if (*(int *)(DAT_14ca02c98 + 4) < 0x100) {
    iVar5 = *(int *)(DAT_14ca02c98 + 4);
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  param_1[8] = iVar5;
  iVar5 = 0x400;
  if (*(int *)(DAT_14ca02cc8 + 4) < 0x400) {
    iVar5 = *(int *)(DAT_14ca02cc8 + 4);
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  *(longlong *)(param_1 + 6) = 0x100000001 << ((byte)lVar3 & 0x3f);
  fVar7 = *(float *)(param_2 + 0x2908) / 20000.0;
  if (100.0 <= fVar7) {
    fVar7 = 100.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  fVar7 = fVar7 * *(float *)(DAT_14ca02b00 + 4);
  if (100000.0 <= fVar7) {
    fVar7 = 100000.0;
  }
  if (fVar7 <= 1.0) {
    fVar7 = 1.0;
  }
  iVar5 = 0;
  do {
    fVar2 = *(float *)(DAT_14ca02c50 + 4);
    fVar6 = powf(*(float *)(DAT_14ca02c68 + 4),(float)iVar5);
    if (fVar7 < fVar6 * fVar2) goto LAB_14019d95e;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  iVar5 = 6;
LAB_14019d95e:
  iVar4 = 5;
  if (iVar5 < 5) {
    iVar4 = iVar5;
  }
  param_1[9] = iVar4 + 1;
  iVar5 = *(int *)(DAT_14ca02cb0 + 4);
  iVar4 = 8;
  if (8 < iVar5) {
    iVar4 = iVar5;
  }
  param_1[10] = iVar4;
  iVar4 = *(int *)(DAT_14ca02c38 + 4) + -1;
  param_1[0xb] = (2 << ((byte)iVar4 & 0x1f)) + iVar5;
  param_1[0xc] = iVar4;
  if (*(char *)(*(longlong *)(param_2 + 8) + 0x119) == '\0') {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 10.0;
  }
  param_1[0x10] = (int)(longlong)((float)*(int *)(DAT_14ca02c80 + 4) * fVar7);
  param_1[0x11] = *(undefined4 *)(DAT_14ca02d10 + 4);
  param_1[4] = *(undefined4 *)(&DAT_14a279380 + (ulonglong)(*(int *)(DAT_14ca02a88 + 4) == 0) * 4);
  return param_1;
}



// FUNCTION 14019da20 FUN_14019da20 body=1516 status=ok
// SIG undefined FUN_14019da20(void)

longlong * FUN_14019da20(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [16];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar17 = 1;
  if (1 < (int)*(uint *)(DAT_14ca02aa0 + 4)) {
    uVar17 = *(uint *)(DAT_14ca02aa0 + 4);
  }
  iVar5 = *(int *)(param_2 + 0x3104);
  iVar6 = *(int *)(param_2 + 0x30fc);
  iVar7 = *(int *)(param_2 + 0x3100);
  iVar8 = *(int *)(param_2 + 0x30f8);
  fVar19 = *(float *)(param_2 + 0x2908) / 20000.0;
  if (100.0 <= fVar19) {
    fVar19 = 100.0;
  }
  if (fVar19 <= 0.1) {
    fVar19 = 0.1;
  }
  fVar19 = fVar19 * *(float *)(DAT_14ca02b00 + 4);
  if (100000.0 <= fVar19) {
    fVar19 = 100000.0;
  }
  if (fVar19 <= 1.0) {
    fVar19 = 1.0;
  }
  uVar16 = 0;
  if (*(longlong *)(param_2 + 0x3108) != 0) {
    uVar16 = *(uint *)(*(longlong *)(param_2 + 0x3108) + 0x6e0);
  }
  fVar20 = logf((fVar19 - *(float *)(param_2 + 0x2170)) * *(float *)(DAT_14ca02ab8 + 4));
  fVar19 = *(float *)(DAT_14ca02ae8 + 4);
  iVar10 = (int)(fVar20 * 1.442695 * fVar19);
  uVar2 = *(undefined4 *)(DAT_14ca02ad0 + 4);
  uVar3 = *(undefined4 *)(DAT_14ca02ab8 + 4);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(float *)(param_1 + 3) = fVar19;
  uVar9 = 0x1f;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar9;
  *(int *)(param_1 + 4) = (int)(((uVar17 - 1) + iVar7) - iVar8) / (int)uVar17;
  *(int *)((longlong)param_1 + 0x24) = (int)((iVar5 + (uVar17 - 1)) - iVar6) / (int)uVar17;
  *(int *)(param_1 + 5) = iVar10 + 1;
  FUN_1448a8364(&local_168,uVar16);
  *(float *)(param_1 + 6) = (float)local_168;
  *(float *)((longlong)param_1 + 0x34) = (float)local_160;
  *(float *)(param_1 + 7) = (float)local_158;
  FUN_1449818b4(param_2 + 0x500,local_1e8);
  local_268 = *(undefined8 *)(param_2 + 0xc30);
  local_260 = *(undefined8 *)(param_2 + 0xc50);
  local_258 = *(undefined8 *)(param_2 + 0xc70);
  local_250 = *(undefined8 *)(param_2 + 0xc90);
  local_248 = *(undefined8 *)(param_2 + 0xc38);
  local_240 = *(undefined8 *)(param_2 + 0xc58);
  local_238 = *(undefined8 *)(param_2 + 0xc78);
  local_230 = *(undefined8 *)(param_2 + 0xc98);
  local_228 = *(undefined8 *)(param_2 + 0xc40);
  local_220 = *(undefined8 *)(param_2 + 0xc60);
  local_218 = *(undefined8 *)(param_2 + 0xc80);
  local_210 = *(undefined8 *)(param_2 + 0xca0);
  local_208 = *(undefined8 *)(param_2 + 0xc48);
  local_200 = *(undefined8 *)(param_2 + 0xc68);
  local_1f8 = *(undefined8 *)(param_2 + 0xc88);
  local_1f0 = *(undefined8 *)(param_2 + 0xca8);
  FUN_1447fea8d(&local_168);
  *(float *)(param_1 + 8) = (float)local_168;
  *(float *)((longlong)param_1 + 0x44) = (float)local_160;
  *(float *)(param_1 + 9) = (float)local_158;
  *(float *)((longlong)param_1 + 0x4c) = (float)local_150;
  *(float *)(param_1 + 10) = (float)local_148;
  *(float *)((longlong)param_1 + 0x54) = (float)local_140;
  *(float *)(param_1 + 0xb) = (float)local_138;
  *(float *)((longlong)param_1 + 0x5c) = (float)local_130;
  *(float *)(param_1 + 0xc) = (float)local_128;
  *(float *)((longlong)param_1 + 100) = (float)local_120;
  *(float *)(param_1 + 0xd) = (float)local_118;
  *(float *)((longlong)param_1 + 0x6c) = (float)local_110;
  *(float *)(param_1 + 0xe) = (float)local_108;
  *(float *)((longlong)param_1 + 0x74) = (float)local_100;
  *(float *)(param_1 + 0xf) = (float)local_f8;
  *(float *)((longlong)param_1 + 0x7c) = (float)local_f0;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(DAT_14ca02d28 + 4);
  fVar19 = 0.0;
  if (0.0 <= *(float *)(DAT_14ca02d40 + 4)) {
    fVar19 = *(float *)(DAT_14ca02d40 + 4);
  }
  *(float *)(param_1 + 0x13) = fVar19;
  if (*(int *)(DAT_14ca02b78 + 4) == 0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar17 = 1;
    if (1 < (int)*(uint *)(DAT_14ca02ba8 + 4)) {
      uVar17 = *(uint *)(DAT_14ca02ba8 + 4);
    }
    uVar16 = uVar16 % uVar17;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar16;
  FUN_1448a862c(&local_168);
  FUN_14019e00e(local_1e8,&local_168,0,1);
  lVar11 = FUN_1448a8484();
  cVar15 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar15 = *(char *)(lVar11 + 0x41);
  }
  *param_1 = local_1e8[0];
  *(char *)(param_1 + 1) = cVar15;
  if (local_1e8[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_1e8[0] + 8);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_1e8[0] + 8);
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_1e8[0] + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = local_1e8[0];
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar18 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar18) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar18 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar18) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_14ca02bd8 + 4);
  fVar19 = (float)(int)(0x1e - (uVar9 ^ 0x1f));
  param_1[0x11] = *(longlong *)(param_2 + 0x136f0);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0x12) = fVar19;
  iVar5 = *(int *)(param_2 + 0x3104);
  iVar6 = *(int *)(param_2 + 0x30fc);
  iVar7 = *(int *)(param_2 + 0x137cc);
  *(float *)(param_1 + 0x14) =
       (float)(*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8)) /
       (float)(*(int *)(param_2 + 0x137c8) * 2);
  *(float *)((longlong)param_1 + 0xa4) = (float)(iVar5 - iVar6) / (float)(iVar7 * 2);
  if ((local_e0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14019e00e FUN_14019e00e body=245 status=ok
// SIG undefined FUN_14019e00e(void)

longlong * FUN_14019e00e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1448a8484();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14019e104 FUN_14019e104 body=130 status=ok
// SIG undefined FUN_14019e104(void)

undefined4 FUN_14019e104(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 8))();
    puVar2 = *(undefined8 **)(param_2 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 8) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_21 = 1;
  FUN_14485b546(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019e188 FUN_14019e188 body=86 status=ok
// SIG undefined FUN_14019e188(void)

ulonglong FUN_14019e188(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  bool bVar4;
  
  if ((longlong)*(ulonglong *)(param_1 + 0x48) < 0) {
    puVar1 = (ulonglong *)(param_1 + 0x48);
    uVar2 = *(ulonglong *)(param_1 + 0x48) & 0xffffffffffffffc0;
    LOCK();
    uVar3 = *puVar1;
    if (uVar2 == uVar3) {
      *puVar1 = uVar2 | 1;
    }
    UNLOCK();
    if (uVar2 != uVar3) {
      LOCK();
      bVar4 = uVar2 + 2 == *puVar1;
      if (bVar4) {
        *puVar1 = uVar2 | 3;
      }
      UNLOCK();
      if (!bVar4) goto LAB_14019e1be;
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 2;
    UNLOCK();
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((uVar2 >> 1 & 1) == 0) {
      FUN_14470ba62(param_1 + 0x10);
    }
  }
  else {
LAB_14019e1be:
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14019e1de FUN_14019e1de body=44 status=ok
// SIG undefined FUN_14019e1de(void)

void FUN_14019e1de(longlong param_1)

{
  if ((DAT_14c948580 != 0) && (*(char *)(param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14019e20a FUN_14019e20a body=126 status=ok
// SIG undefined FUN_14019e20a(void)

void FUN_14019e20a(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  local_30 = param_2;
  EnterCriticalSection(lpCriticalSection);
  FUN_1448a8aa8(*(longlong *)(param_1 + 0x28) + (ulonglong)*(byte *)(param_2 + 8) * 0x10 + 0x28,
                &local_30,1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019e28a FUN_14019e28a body=370 status=ok
// SIG undefined FUN_14019e28a(void)

void FUN_14019e28a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14019e331;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14019e331:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 14019e3fc FUN_14019e3fc body=93 status=ok
// SIG undefined FUN_14019e3fc(void)

void FUN_14019e3fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14019e45a();
  return;
}



// FUNCTION 14019e45a FUN_14019e45a body=469 status=ok
// SIG undefined FUN_14019e45a(void)

void FUN_14019e45a(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14019e58a:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14019e5c7:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14019e4c4;
LAB_14019e4b9:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14019e4c4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014019e4f1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14019e547:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14019e5c7;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14019e58a;
code_r0x00014019e4f1:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14019e547;
    }
  }
  goto LAB_14019e4b9;
}



// FUNCTION 14019e630 FUN_14019e630 body=105 status=ok
// SIG undefined FUN_14019e630(void)

void FUN_14019e630(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_3 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1448a8b58();
  if (*(char *)(param_1 + 0x3c48) == '\x01') {
    *(undefined8 *)(param_3 + 4) = local_28;
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019e69a FUN_14019e69a body=203 status=ok
// SIG undefined FUN_14019e69a(void)

void FUN_14019e69a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e20);
  *(uint *)(param_1 + 0x2e20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2e24) < iVar1 + 1U) {
    FUN_14019e766(param_1 + 0x2e18,iVar1);
  }
  FUN_144903306((longlong)iVar1 * 0x8c0 + *(longlong *)(param_1 + 0x2e18),param_2);
  iVar1 = *(int *)(param_1 + 0x2e30);
  *(uint *)(param_1 + 0x2e30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2e34) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x2e28,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2e28) + (longlong)iVar1 * 4) = param_3;
  iVar1 = *(int *)(&DAT_00002e40 + param_1);
  *(uint *)(&DAT_00002e40 + param_1) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2e44) < iVar1 + 1U) {
    FUN_14019e876((longlong *)(param_1 + 0x2e38),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2e38) + (longlong)iVar1 * 4) = param_4;
  return;
}



// FUNCTION 14019e766 FUN_14019e766 body=271 status=ok
// SIG undefined FUN_14019e766(void)

void FUN_14019e766(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x8c0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x8c0)) {
      uVar5 = uVar4 / 0x8c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x8c0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14019e876 FUN_14019e876 body=353 status=ok
// SIG undefined FUN_14019e876(void)

void FUN_14019e876(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14019e8fb;
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
LAB_14019e8fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14019e9d8 FUN_14019e9d8 body=1408 status=ok
// SIG undefined FUN_14019e9d8(void)

void FUN_14019e9d8(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  uint local_124;
  undefined8 **local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  local_118 = param_2;
  FUN_14473dbc4(local_90,0x19);
  uVar3 = local_68;
  local_120 = (undefined8 **)(param_1 + 0x1a8);
  puVar5 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar5 != (undefined8 *)0x0) {
    lVar14 = (longlong)(int)local_68;
    uVar9 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,uVar9);
    if (local_68._4_4_ < uVar9) {
      FUN_14476a5c8(local_90,uVar3 & 0xffffffff);
      puVar5 = *local_120;
      puVar7 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar7 = local_90;
      }
      *(undefined8 **)(puVar7 + lVar14 * 8) = puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_14019eac0;
    }
    else {
      puVar7 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar7 = local_90;
      }
      *(undefined8 **)(puVar7 + lVar14 * 8) = puVar5;
    }
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
LAB_14019eac0:
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_14473c118();
  uVar9 = *(uint *)(param_1 + 0x1b8);
  if (uVar9 != 0) {
    local_f8 = param_3 + 4;
    uVar10 = 0;
    local_110 = param_1;
    do {
      if ((longlong)DAT_14c760da4 != 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)(int)uVar10 * 0x10);
        local_108 = (longlong *)(lVar14 + (longlong)DAT_14c760da4 * 8 + 2000);
        plVar4 = (longlong *)(lVar14 + 2000);
        local_124 = uVar10;
        do {
          lVar14 = *plVar4;
          lVar15 = lVar14 + 0xb00;
          if (*(longlong *)(lVar14 + 0x1280) != 0) {
            lVar15 = *(longlong *)(lVar14 + 0x1280);
          }
          local_100 = plVar4;
          if ((longlong)*(int *)(lVar14 + 0x12c0) != 0) {
            lVar14 = (longlong)*(int *)(lVar14 + 0x12c0) * 0x280;
            do {
              puVar5 = (undefined8 *)FUN_14001cc68(0x310,0x10);
              puVar5[1] = lVar15;
              uVar9 = 0;
              puVar5[0x35] = 0;
              puVar5[0x36] = 0x1800000000;
              puVar5[2] = 0;
              puVar5[3] = 0;
              *(undefined4 *)(puVar5 + 4) = 0;
              puVar5[0x3c] = 0;
              puVar5[0x3e] = 0;
              *(undefined1 *)(puVar5 + 0x4d) = 0;
              *(undefined1 *)(puVar5 + 0x4f) = 0;
              puVar5[0x5c] = 0;
              *(undefined4 *)(puVar5 + 0x5d) = 0;
              puVar5[0x37] = 0;
              puVar5[0x38] = 0;
              puVar5[0x39] = 0;
              puVar5[0x3a] = 0;
              *(undefined2 *)(puVar5 + 0x3b) = 0;
              puVar5[0x44] = 0;
              puVar5[0x45] = 0;
              puVar5[0x46] = 0;
              puVar5[0x47] = 0;
              puVar5[0x48] = 0;
              puVar5[0x49] = 0;
              puVar5[0x4a] = 0;
              puVar5[0x4b] = 0;
              puVar5[0x58] = 0;
              puVar5[0x59] = 0;
              puVar5[0x56] = 0;
              puVar5[0x57] = 0;
              puVar5[0x54] = 0;
              puVar5[0x55] = 0;
              puVar5[0x52] = 0;
              puVar5[0x53] = 0;
              puVar5[0x50] = 0;
              puVar5[0x51] = 0;
              *(undefined8 *)((longlong)puVar5 + 0x2ec) = 0xffffffff00000080;
              *(undefined4 *)((longlong)puVar5 + 0x2f4) = 0;
              puVar5[0x60] = 0;
              *(undefined4 *)(puVar5 + 0x61) = 0;
              *puVar5 = &PTR_FUN_14a349180;
              puVar6 = (undefined8 *)FUN_144ad3d06(0x30);
              FUN_144724502(puVar6,1);
              iVar11 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
                UNLOCK();
                iVar11 = *(int *)(puVar5 + 0x49);
                uVar9 = *(uint *)((longlong)puVar5 + 0x24c);
              }
              *(uint *)(puVar5 + 0x49) = iVar11 + 1U;
              if (uVar9 < iVar11 + 1U) {
                FUN_14476c1d2(puVar5 + 0x48,iVar11);
              }
              uVar3 = local_68;
              *(undefined8 **)(puVar5[0x48] + (longlong)iVar11 * 8) = puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
                UNLOCK();
              }
              lVar13 = puVar6[5];
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                UNLOCK();
              }
              lVar12 = (longlong)(int)local_68;
              uVar9 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,uVar9);
              if (local_68._4_4_ < uVar9) {
                FUN_14476a5c8(local_90,uVar3 & 0xffffffff);
              }
              puVar7 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar7 = local_90;
              }
              *(longlong *)(puVar7 + lVar12 * 8) = lVar13;
              pcVar2 = (code *)*param_3;
              if (pcVar2 != (code *)0x0) {
                plVar4 = (longlong *)param_3[2];
                if ((longlong *)param_3[2] == (longlong *)0x0) {
                  plVar4 = local_f8;
                }
                uVar8 = (**(code **)(*plVar4 + 8))();
                (*pcVar2)(uVar8,puVar5);
              }
              uVar3 = uStack_e0;
              lVar13 = (longlong)(int)uStack_e0;
              uVar9 = (int)uStack_e0 + 1;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
              if (uStack_e0._4_4_ < uVar9) {
                FUN_1447183c0(&local_e8,uVar3 & 0xffffffff);
              }
              *(undefined8 **)(local_e8 + lVar13 * 8) = puVar5;
              if (puVar6 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar6 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar6)(puVar6,1);
                }
              }
              lVar15 = lVar15 + 0x280;
              lVar14 = lVar14 + -0x280;
            } while (lVar14 != 0);
          }
          plVar4 = local_100 + 1;
        } while (plVar4 != local_108);
        uVar9 = *(uint *)(local_110 + 0x1b8);
        param_1 = local_110;
        uVar10 = local_124;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  FUN_14473bfcc(param_1,&local_e8);
  local_d8[0] = *local_118;
  local_c8 = local_118[2];
  local_118[2] = 0;
  local_b8 = (undefined4)local_118[4];
  uStack_b4 = *(undefined4 *)((longlong)local_118 + 0x24);
  uStack_b0 = (undefined4)local_118[5];
  uStack_ac = *(undefined4 *)((longlong)local_118 + 0x2c);
  local_a8 = (undefined4)local_118[6];
  uStack_a4 = *(undefined4 *)((longlong)local_118 + 0x34);
  uStack_a0 = (undefined4)local_118[7];
  uStack_9c = *(undefined4 *)((longlong)local_118 + 0x3c);
  if (local_d8[0] != 0) {
    *local_118 = 0;
  }
  local_138 = 0xff;
  FUN_14014aede(&local_f0,local_d8);
  if (local_120 != &local_f0) {
    puVar5 = *local_120;
    *local_120 = local_f0;
    local_f0 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_14019eea4;
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_f0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_f0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_f0)(local_f0,1);
    }
  }
LAB_14019eea4:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  puVar7 = local_90;
  if (local_70 != (undefined1 *)0x0) {
    puVar7 = local_70;
  }
  FUN_144717c65(puVar7,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*local_118 != 0) {
    plVar4 = local_118 + 4;
    if ((longlong *)local_118[2] != (longlong *)0x0) {
      plVar4 = (longlong *)local_118[2];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14019ef5a FUN_14019ef5a body=1016 status=ok
// SIG undefined FUN_14019ef5a(void)

undefined8 * FUN_14019ef5a(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14a2cfbd8;
  plVar2 = (longlong *)*param_2;
  param_1[1] = plVar2;
  *(int *)(param_1 + 2) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  memset(param_1 + 3,0,0x98);
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x100000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x100000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xff7fffffffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = param_3;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  param_1[0x2c] = param_2[8];
  param_1[0x2d] = param_2[6];
  *(byte *)((longlong)param_1 + 0x171) = *(byte *)((longlong)param_1 + 0x171) & 0xf0;
  bVar10 = *(char *)(*param_2 + 0x71) != '\x01';
  if (*(int *)((longlong)param_2 + 0x14) == 2) {
    bVar10 = *(char *)(*param_2 + 0x71) == '\x03';
  }
  *(char *)((longlong)param_1 + 0x171) = bVar10 << 4;
  bVar5 = *(byte *)((longlong)param_1 + 0x172);
  *(byte *)((longlong)param_1 + 0x172) = bVar5 & 0xfc | 2;
  bVar11 = *(byte *)(*param_2 + 0x6e) >> 1 & 4;
  *(byte *)((longlong)param_1 + 0x172) = bVar5 & 0xf8 | 2 | bVar11;
  *(byte *)((longlong)param_1 + 0x172) =
       bVar5 & 0xe0 | 2 | bVar11 | (*(byte *)(*param_2 + 0x6e) & 1) << 3;
  cVar4 = (**(code **)(*plVar2 + 0x1f0))(plVar2);
  bVar11 = *(byte *)((longlong)param_1 + 0x172) & 0xdf | cVar4 << 5;
  *(byte *)((longlong)param_1 + 0x172) = bVar11;
  bVar5 = (*(byte *)(param_1[1] + 0x79) & 2) << 5;
  *(byte *)((longlong)param_1 + 0x172) = bVar11 & 0xbf | bVar5;
  *(byte *)((longlong)param_1 + 0x172) = bVar11 & 0x3f | bVar5 | ~*(byte *)(*param_2 + 0x79) << 7;
  *(byte *)((longlong)param_1 + 0x173) =
       *(byte *)((longlong)param_1 + 0x173) & 0xfe | *(byte *)(*param_2 + 0x78) >> 7;
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x58))();
  *(byte *)((longlong)param_1 + 0x173) =
       *(byte *)((longlong)param_1 + 0x173) & 0xfd | cVar4 * '\x02';
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x60))();
  bVar5 = *(byte *)((longlong)param_1 + 0x173) & 0xfb | cVar4 << 2;
  *(byte *)((longlong)param_1 + 0x173) = bVar5;
  *(byte *)((longlong)param_1 + 0x173) = bVar5 & 7 | (*(byte *)(*param_2 + 0x6e) & 2) << 2 | 0x30;
  uVar6 = (**(code **)(*(longlong *)*param_2 + 0x90))();
  *(undefined2 *)((longlong)param_1 + 0x174) = uVar6;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xff0000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3e] = *(undefined8 *)(*param_2 + 0x90);
  uVar9 = (**(code **)(*(longlong *)*param_2 + 0x220))();
  param_1[0x3f] = uVar9;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0xffffffff;
  param_1[0x42] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(int *)(param_1 + 3) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,&local_60);
  if (param_1 + 0x44 == &local_60) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x44] != 0) {
      FUN_1400020a8();
    }
    param_1[0x44] = local_60;
    local_60 = 0;
    *(undefined4 *)(param_1 + 0x45) = local_58;
    *(undefined4 *)((longlong)param_1 + 0x22c) = local_54;
  }
  param_1[0x46] = 0;
  lVar3 = DAT_14c9e5330;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar12 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar12 = 1;
  }
  if (*(int *)(lVar3 + uVar12 * 4) != 0) {
    uVar13 = (**(code **)(*(longlong *)*param_2 + 0x210))();
    *(undefined4 *)((longlong)param_1 + 0x154) = uVar13;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019f353 FUN_14019f353 body=163 status=ok
// SIG undefined FUN_14019f353(void)

undefined8 FUN_14019f353(int param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  if ((param_1 < 3) &&
     (((DAT_14ca964f0 != '\x01' || ((DAT_14c760e14 & 1) == 0)) &&
      (cVar3 = FUN_14743059b(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2)), cVar3 == '\0'
      )))) {
    return 0;
  }
  lVar2 = DAT_14ca41b18;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar6 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar7 = 0;
  }
  else if (uVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = CONCAT44(extraout_var,DVar5);
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  return CONCAT71((int7)(uVar6 >> 8),*(int *)(lVar2 + uVar7 * 4) != 0);
}



// FUNCTION 14019f3f6 FUN_14019f3f6 body=52 status=ok
// SIG undefined FUN_14019f3f6(void)

void FUN_14019f3f6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2,1);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14019f430 FUN_14019f430 body=57 status=ok
// SIG undefined FUN_14019f430(void)

void FUN_14019f430(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc70 = FUN_140002ddd(FUN_146543060,uVar1,L"WaypointDef");
  }
  return;
}



// FUNCTION 14019f46a FUN_14019f46a body=204 status=ok
// SIG undefined FUN_14019f46a(void)

void FUN_14019f46a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xe50);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x66c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x668);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14019f4d1;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x66c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      if (*(int *)(param_1 + 0x748) == 0) {
        if (*(int *)(param_1 + 0xe88) == *(int *)(param_1 + 0xeb4)) {
          return;
        }
        FUN_1402c6cea(param_1 + 0xe80,(ulonglong)(uVar1 >> 0x10),puVar3,uVar4);
        FUN_1402c6e36(param_1 + 0xe80);
        return;
      }
      goto LAB_14019f4d1;
    }
  }
  uVar4 = 0;
LAB_14019f4d1:
                    /* WARNING: Could not recover jumptable at 0x00014019f4e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 0xe80,param_1,uVar4);
  return;
}



// FUNCTION 14019f536 FUN_14019f536 body=167 status=ok
// SIG undefined FUN_14019f536(void)

undefined8 FUN_14019f536(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  cVar1 = FUN_14019f5de();
  if (cVar1 == '\0') {
LAB_14019f5d9:
    uVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x690) == '\x03') && (*(int *)(param_1 + 0x438) == 1)) {
      lVar3 = param_1 + 0x18;
      if (*(char *)(param_1 + 0x461) != '\0') {
        lVar3 = param_1 + 0x48;
      }
      dVar4 = *(double *)(param_2 + 0x148) - *(double *)(lVar3 + 0x368);
      dVar5 = *(double *)(param_2 + 0x150) - *(double *)(lVar3 + 0x370);
      if (SQRT(dVar5 * dVar5 + dVar4 * dVar4) <
          (double)(*(float *)(param_2 + 400) + *(float *)(param_2 + 400))) goto LAB_14019f5d9;
    }
    *(longlong *)(param_3 + 0x130) = param_1 + 0x1cf0;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14019f5de FUN_14019f5de body=617 status=ok
// SIG undefined FUN_14019f5de(void)

undefined8 FUN_14019f5de(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double _Y;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  
  if ((*(char *)(param_2 + 0x18) == '\0') && ((char)param_1[0xd2] != '\x02')) {
    if (((*(char *)(param_2 + 0x20) != '\0') ||
        ((10.0 < *(float *)(param_2 + 0xc0) || *(float *)(param_2 + 0xc0) == 10.0 ||
         (0.1 < *(float *)(param_1 + 0xee) || *(float *)(param_1 + 0xee) == 0.1)))) &&
       ((iVar13 = (**(code **)(*param_1 + 0x18))(param_1), iVar13 == 1 ||
        ((0.009999999776482582 <= ABS((double)param_1[0xeb]) ||
         (0.009999999776482582 <= ABS((double)param_1[0xec]))))))) {
      lVar9 = param_1[1];
      uVar3 = *(undefined4 *)(param_2 + 0x194);
      uVar4 = *(undefined4 *)(param_2 + 400);
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      lVar14 = *(longlong *)(param_2 + 0x48);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
        UNLOCK();
      }
      param_3[0x14] = uVar4;
      param_3[0x15] = uVar3;
      param_3[0x16] = (int)lVar9;
      *(undefined8 *)(param_3 + 0x18) = uVar6;
      plVar15 = *(longlong **)(param_3 + 0x1a);
      *(longlong *)(param_3 + 0x1a) = lVar14;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      lVar14 = FUN_14477bcf0();
      *param_3 = *(undefined4 *)(lVar14 + 0xa0);
      plVar15 = &DAT_14cb1d020;
      if ((char)param_1[0x329] != '\0') {
        plVar15 = param_1 + 0x32a;
      }
      lVar14 = plVar15[1];
      *(longlong *)(param_3 + 4) = *plVar15;
      *(longlong *)(param_3 + 6) = lVar14;
      *(longlong *)(param_3 + 8) = plVar15[2];
      param_3[1] = *(undefined4 *)(param_2 + 0x5c);
      dVar5 = (double)param_1[0xeb];
      _Y = (double)param_1[0xec];
      if ((((dVar5 != 0.0) || (NAN(dVar5))) || (_Y != 0.0)) || (NAN(_Y))) {
        dVar5 = atan2(_Y,dVar5);
        fVar16 = (float)(dVar5 * 57.29577951308232);
      }
      else {
        fVar16 = 0.0;
      }
      param_3[2] = fVar16;
      param_3[3] = *(float *)(param_1 + 0xee) * *(float *)(param_2 + 0x5c);
      param_3[0x38] = (int)param_1[0x354];
      *(longlong *)(param_3 + 0x36) = param_1[0x353];
      lVar9 = param_1[0x355];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x1aac);
      lVar10 = param_1[0x356];
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x1ab4);
      lVar11 = param_1[0x357];
      uVar7 = *(undefined4 *)((longlong)param_1 + 0x1abc);
      lVar12 = param_1[0x358];
      uVar8 = *(undefined4 *)((longlong)param_1 + 0x1ac4);
      lVar14 = param_1[0x35a];
      *(longlong *)(param_3 + 0x42) = param_1[0x359];
      *(longlong *)(param_3 + 0x44) = lVar14;
      param_3[0x3e] = (int)lVar11;
      param_3[0x3f] = uVar7;
      param_3[0x40] = (int)lVar12;
      param_3[0x41] = uVar8;
      param_3[0x3a] = (int)lVar9;
      param_3[0x3b] = uVar3;
      param_3[0x3c] = (int)lVar10;
      param_3[0x3d] = uVar4;
      lVar14 = param_1[0x35b];
      lVar9 = param_1[0x35c];
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      plVar15 = *(longlong **)(param_3 + 0x48);
      *(longlong *)(param_3 + 0x46) = lVar14;
      *(longlong *)(param_3 + 0x48) = lVar9;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      lVar14 = param_1[0x35d];
      param_3[0x4a] = (int)lVar14;
      return CONCAT71((uint7)(uint3)((uint)(int)lVar14 >> 8),1);
    }
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
  return 0;
}



// FUNCTION 14019f848 FUN_14019f848 body=21 status=ok
// SIG undefined FUN_14019f848(void)

undefined8 FUN_14019f848(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14019f85e FUN_14019f85e body=291 status=ok
// SIG undefined FUN_14019f85e(void)

void FUN_14019f85e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) &&
      (lVar1 = (**(code **)(*param_2 + 0x180))(param_2), lVar1 != 0)) &&
     ((lVar1 = FUN_14980d608(lVar1), lVar1 != 0 && (*(longlong *)(lVar1 + 0x30) != 0)))) {
    local_108 = *(longlong *)(lVar1 + 0x30);
    local_100 = param_1;
    FUN_14980d96a(&local_108,param_2);
    local_38 = (undefined1 *)0x0;
    local_30 = 0x1800000000;
    FUN_1448c0c58(param_2,local_f8,0);
    puVar2 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar2 = local_f8;
    }
    lVar1 = (longlong)(int)local_30;
    if (lVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(puVar2 + lVar3) != 0) {
          FUN_14980d96a(&local_108);
        }
        lVar3 = lVar3 + 8;
      } while (lVar1 * 8 != lVar3);
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14019f982 FUN_14019f982 body=29 status=ok
// SIG undefined FUN_14019f982(void)

void FUN_14019f982(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14019f9a0 FUN_14019f9a0 body=31 status=ok
// SIG undefined FUN_14019f9a0(void)

undefined8 FUN_14019f9a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14019f9c0 FUN_14019f9c0 body=202 status=ok
// SIG undefined FUN_14019f9c0(void)

longlong * FUN_14019f9c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *_Dst;
  void *_Src;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = *(char *)(*(longlong *)(param_2 + 8) + 0x68) == '\x02';
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0xe8);
  pvVar2 = *(void **)(param_2 + 0xe0);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  }
  else {
    _Src = (void *)(param_2 + 0xd8);
    if (pvVar2 != (void *)0x0) {
      _Src = pvVar2;
    }
    FUN_1448a9f54(param_1 + 2,iVar1,0);
    _Dst = (longlong *)param_1[3];
    if ((longlong *)param_1[3] == (longlong *)0x0) {
      _Dst = param_1 + 2;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 2);
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0xe0))
            (*(longlong **)(param_2 + 8),param_1 + 5,local_34);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019fa8c FUN_14019fa8c body=374 status=ok
// SIG undefined FUN_14019fa8c(void)

void FUN_14019fa8c(longlong param_1,undefined8 ***param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 **local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0xc0);
  local_48 = 0x4ffffffff;
  local_50 = param_2;
  local_38 = param_2;
  FUN_14019fce2(plVar3,&local_3c);
  lVar5 = (longlong)local_3c;
  if (lVar5 == -1) {
    plVar3 = (longlong *)(param_1 + 0x110);
    local_48 = 0x4ffffffff;
    local_50 = param_2;
    FUN_14019fce2(plVar3,&local_54);
    lVar5 = (longlong)local_54;
    if (lVar5 == -1) {
      plVar3 = (longlong *)(param_1 + 0x160);
      local_48 = 0x4ffffffff;
      local_50 = param_2;
      FUN_14019fce2(plVar3,&local_54);
      lVar5 = (longlong)local_54;
      if (lVar5 != -1) {
        lVar2 = *plVar3;
        uVar1 = *(uint *)(lVar2 + 0xc + lVar5 * 0x18);
        uVar4 = uVar1 >> 2;
        *(uint *)(lVar2 + 0xc + lVar5 * 0x18) = (uVar1 & 3) + uVar4 * 4 + -4;
        if ((uVar4 - 1 & 0x3fffffff) == 0) {
          FUN_147a65c78(param_1 + 0x10,*(undefined4 *)(lVar2 + lVar5 * 0x18 + 8));
          local_50 = &local_38;
          FUN_147a75f5a(param_1 + 0x1b0);
          FUN_14019fc1a(plVar3,local_54);
        }
      }
      goto LAB_14019fbbe;
    }
  }
  uVar1 = *(uint *)(*plVar3 + 0xc + lVar5 * 0x18);
  uVar4 = uVar1 >> 2;
  *(uint *)(*plVar3 + 0xc + lVar5 * 0x18) = (uVar1 & 3) + uVar4 * 4 + -4;
  if ((uVar4 - 1 & 0x3fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
LAB_14019fbbe:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14019fc1a FUN_14019fc1a body=85 status=ok
// SIG undefined FUN_14019fc1a(void)

void FUN_14019fc1a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14019fc70();
  return;
}



// FUNCTION 14019fc70 FUN_14019fc70 body=114 status=ok
// SIG undefined FUN_14019fc70(void)

void FUN_14019fc70(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14019fce2 FUN_14019fce2 body=140 status=ok
// SIG undefined FUN_14019fce2(void)

void FUN_14019fce2(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_3;
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x18) == uVar1) goto LAB_14019fd6a;
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14019fd6a:
  *param_2 = iVar3;
  return;
}



// FUNCTION 14019fd6e FUN_14019fd6e body=275 status=ok
// SIG undefined FUN_14019fd6e(void)

void FUN_14019fd6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = lVar3 * 0x30;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14019fe82 FUN_14019fe82 body=14 status=ok
// SIG undefined FUN_14019fe82(void)

void FUN_14019fe82(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14019fee6();
    return;
  }
  return;
}



// FUNCTION 14019fe90 FUN_14019fe90 body=85 status=ok
// SIG undefined FUN_14019fe90(void)

void FUN_14019fe90(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14019fee6();
  return;
}



// FUNCTION 14019fee6 FUN_14019fee6 body=450 status=ok
// SIG undefined FUN_14019fee6(void)

void FUN_14019fee6(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401a0001:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401a003e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14019ff3c;
LAB_14019ff31:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14019ff3c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x00014019ff68;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14019ffbe:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401a003e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401a0001;
code_r0x00014019ff68:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14019ffbe;
    }
  }
  goto LAB_14019ff31;
}



// FUNCTION 1401a00a8 FUN_1401a00a8 body=370 status=ok
// SIG undefined FUN_1401a00a8(void)

void FUN_1401a00a8(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1401a021e();
  plVar5 = param_1 + 0x48;
  plVar6 = param_1 + 0xe8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1401a013f;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if ((bVar1 == 0) && ((*(uint *)(param_1 + 1) & 0x30) == 0)) {
    iVar3 = *(int *)((longlong)param_1 + 0x7a4);
    while (iVar3 == 0) {
      iVar3 = rand();
      *(int *)((longlong)param_1 + 0x7a4) = iVar3;
    }
    if (((*DAT_14cae5008 != 0) && (*(char *)((longlong)param_1 + 0x95c) != '\x02')) &&
       ((int)param_1[0x11c] != (int)param_1[0xe5])) {
      FUN_14062ab38(param_1 + 0x118);
    }
  }
LAB_1401a013f:
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) != 0) &&
     (cVar2 = (**(code **)(*param_1 + 0xbd0))(param_1), cVar2 != '\0')) {
    FUN_1401a1c0e(param_1);
    return;
  }
  return;
}



// FUNCTION 1401a021e FUN_1401a021e body=1488 status=ok
// SIG undefined FUN_1401a021e(void)

void FUN_1401a021e(longlong *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((int)param_1[0x13] != 2) {
    FUN_1401a080a(param_1);
  }
  if (((param_1[0x15] != 0) && ((int)param_1[0xd6] != 0)) &&
     (piVar3 = (int *)param_1[0xd5],
     ((piVar3[1] != 0 || *piVar3 != 0) || piVar3[2] != 0) || piVar3[3] != 0)) {
    FUN_1401a2eae(&local_158);
    FUN_140a107dc(&local_168,param_1[0xd5],&local_158);
    lVar10 = param_1[0xd5];
    *(undefined4 *)(lVar10 + 0x10) = local_168;
    *(undefined4 *)(lVar10 + 0x14) = uStack_164;
    *(undefined4 *)(lVar10 + 0x18) = uStack_160;
    *(undefined4 *)(lVar10 + 0x1c) = uStack_15c;
    if (1 < (int)param_1[0xd6]) {
      uVar11 = 1;
      lVar10 = 0xa0;
      do {
        FUN_147a30fc5(&local_168,param_1[0xd5],uVar11 & 0xffffffff);
        puVar1 = (undefined4 *)(param_1[0xd5] + lVar10);
        *puVar1 = local_168;
        puVar1[1] = uStack_164;
        puVar1[2] = uStack_160;
        puVar1[3] = uStack_15c;
        FUN_140a107dc(&local_168,param_1[0xd5] + lVar10,&local_158);
        puVar1 = (undefined4 *)(param_1[0xd5] + 0x10 + lVar10);
        *puVar1 = local_168;
        puVar1[1] = uStack_164;
        puVar1[2] = uStack_160;
        puVar1[3] = uStack_15c;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xa0;
      } while ((longlong)uVar11 < (longlong)(int)param_1[0xd6]);
    }
  }
  FUN_1448aa298(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1401a0517;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 != 0) goto LAB_1401a0517;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1401a0517;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if ((bVar2 != 0) ||
     ((((DAT_14c760d84 == 0 || ((DAT_14ca84f5a & 1) == 0)) &&
       (cVar9 = FUN_1406917e6(), cVar9 == '\0')) || (DAT_14c76194c == 0)))) goto LAB_1401a0517;
  if ((*(byte *)((longlong)param_1 + 0x674) & 8) != 0) {
    lVar10 = param_1[0x16];
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_1);
      if (lVar10 == 0) goto LAB_1401a0787;
      lVar10 = param_1[0x16];
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_1);
      }
    }
    bVar2 = *(byte *)(lVar10 + 0x152);
    if (((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
       ((**(code **)(*param_1 + 0x7a8))(param_1,&local_158),
       dVar6 = local_108 * local_e0 - local_e8 * local_100,
       dVar5 = local_128 * local_e0 - local_e8 * local_120,
       dVar12 = local_e0 * local_148 - local_e8 * local_140,
       dVar4 = local_100 * local_148 - local_108 * local_140,
       dVar7 = local_128 * local_100 - local_108 * local_120,
       dVar8 = local_148 * local_120 - local_128 * local_140,
       0.0 <= ((local_f0 * dVar8 + (dVar5 * local_150 - dVar12 * local_130)) * local_118 +
              ((local_f0 * dVar7 + (local_130 * dVar6 - dVar5 * local_110)) * local_158 -
              (local_f0 * dVar4 + (dVar6 * local_150 - dVar12 * local_110)) * local_138)) -
              (dVar8 * local_110 + (dVar7 * local_150 - dVar4 * local_130)) * local_f8))
    goto LAB_1401a0517;
  }
LAB_1401a0787:
  (**(code **)(*param_1 + 0x310))(param_1);
LAB_1401a0517:
  if ((local_d0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a07f0 FUN_1401a07f0 body=26 status=ok
// SIG undefined FUN_1401a07f0(void)

void FUN_1401a07f0(longlong param_1)

{
  FUN_1448aa6e2();
  *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) | 8;
  return;
}



// FUNCTION 1401a080a FUN_1401a080a body=150 status=ok
// SIG undefined FUN_1401a080a(void)

void FUN_1401a080a(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xcc];
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar2 = param_1[0xcc];
  }
  else if (lVar2 == 0) goto LAB_1401a083e;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1401a083e:
  if ((*(byte *)((longlong)param_1 + 0x675) & 0x40) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xac0))(param_1);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x7a0))(param_1);
      if (lVar2 != 0) {
        FUN_1401a096a(param_1 + 0x82,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401a08a0 FUN_1401a08a0 body=113 status=ok
// SIG undefined FUN_1401a08a0(void)

undefined8 FUN_1401a08a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (param_1[0xcc] == 0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x7a0))(param_1);
  lVar1 = param_1[0xcc];
  uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    uVar3 = extraout_var;
  }
  return CONCAT71(uVar3,lVar2 == *(longlong *)(lVar1 + 0x188));
}



// FUNCTION 1401a0912 FUN_1401a0912 body=88 status=ok
// SIG undefined FUN_1401a0912(void)

void FUN_1401a0912(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_144a81344();
  FUN_144a016ac(param_1);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 == 0) goto LAB_1401a095d;
  }
  lVar1 = FUN_14494250a(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x2e8);
  }
  *(undefined8 *)(param_1 + 0x110) = uVar2;
LAB_1401a095d:
  FUN_144a3ee64(param_1);
  return;
}



// FUNCTION 1401a096a FUN_1401a096a body=172 status=ok
// SIG undefined FUN_1401a096a(void)

void FUN_1401a096a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xa0) = uVar1;
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
  *(int *)(param_1 + 0xa4) = iVar2;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
  FUN_140136902(param_1,0);
  return;
}



// FUNCTION 1401a0a16 FUN_1401a0a16 body=551 status=ok
// SIG undefined FUN_1401a0a16(void)

void FUN_1401a0a16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  code *local_170;
  undefined4 *local_168;
  code *local_160;
  undefined4 *local_158;
  undefined4 local_150 [2];
  undefined8 *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) goto LAB_1401a0b91;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if (*(longlong *)(lVar2 + 0xe0) == 0) goto LAB_1401a0b91;
  if (DAT_14c760db4 == 1) {
    if (DAT_14ca96500 == '\0') {
      puVar4 = &DAT_14cae4e90;
    }
    else {
LAB_1401a0ad5:
      puVar4 = (undefined8 *)0x0;
    }
  }
  else {
    puVar4 = &DAT_14cae4e90;
    if (2 < DAT_14c760db4) {
      lVar2 = (ulonglong)DAT_14ca85550 * 0x3c;
      if (((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) &&
         (((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0 ||
          (((uint)(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] >> 0x1d & 1) != 0))))
      goto LAB_1401a0ad5;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_150[0] = *(undefined4 *)(lVar2 + 0x170);
  local_68 = 0;
  local_58 = 0x400000000;
  local_138 = 0;
  uStack_130 = 0;
  local_48 = 0;
  local_40 = 0;
  local_148 = puVar4;
  local_140 = param_1;
  cVar1 = FUN_1447e525e(param_1);
  if (cVar1 == '\0') {
    local_168 = local_150;
    local_170 = FUN_143542666;
    puVar3 = &DAT_14cae4f68;
  }
  else {
    local_158 = local_150;
    local_160 = FUN_143542666;
    puVar3 = &DAT_14cb00c58;
  }
  local_178 = param_3;
  FUN_1448aabe4(param_1,puVar3,param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_1401a0b91:
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a0c3e FUN_1401a0c3e body=997 status=ok
// SIG undefined FUN_1401a0c3e(void)

ulonglong FUN_1401a0c3e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = (**(code **)(*param_1 + 0x5f8))();
  if (((char)uVar7 != '\0') && (DAT_14c761950 == 1)) {
    uVar5 = *(int *)((longlong)param_1 + 0x32c) + 1;
    *(uint *)((longlong)param_1 + 0x32c) = uVar5;
    if (*(int *)(param_2 + 0x28) == 0) {
      LOCK();
      uVar3 = *(uint *)(param_1 + 0x65);
      *(uint *)(param_1 + 0x65) = uVar5;
      uVar7 = (ulonglong)uVar3;
      UNLOCK();
    }
    else {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_1401a0d56;
      while( true ) {
        uVar5 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar5 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar5 | 1;
          __tlregdtor(&LAB_14348442c);
        }
        lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar14 + 0x310);
        *(undefined8 *)(lVar14 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar2 = puVar8;
        FUN_140217a48(puVar2);
        puVar9 = (uint *)*puVar2;
LAB_1401a0d56:
        puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar11 = (uint *)(puVar13 + 0x17);
        uVar5 = puVar9[0x12];
        if (puVar11 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar3 = *puVar9;
          *puVar9 = *puVar9 + uVar5 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar5) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar11 = (uint *)(puVar13 + 0x17);
          uVar5 = 0;
          if (puVar11 <= puVar9 + 0x4000) {
            uVar5 = 1;
            goto LAB_1401a0dd6;
          }
        }
      }
      uVar5 = uVar5 + 1;
LAB_1401a0dd6:
      *(uint **)(puVar9 + 0x10) = puVar11;
      puVar9[0x12] = uVar5;
      FUN_1447247dc(puVar13,param_2);
      *puVar13 = &PTR_FUN_14a861bc0;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x32c);
      puVar13[0x15] = 0;
      if (param_1 == (longlong *)0x0) {
        *(undefined4 *)(puVar13 + 0x15) = 0;
        iVar6 = 0;
      }
      else {
        uVar5 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puVar13 + 0x15) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar6 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar14 + 0x10);
          bVar15 = iVar6 == 0;
          if (bVar15) {
            *(int *)(lVar14 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar15) {
            iVar6 = iVar12;
          }
        }
      }
      *(int *)((longlong)puVar13 + 0xac) = iVar6;
      *(undefined4 *)(puVar13 + 0x16) = uVar4;
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar13[0xf] = uVar10;
      puVar13[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = 3;
      if (puVar13 == (undefined8 *)0x0) {
        local_31 = 1;
        uVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
        local_31 = 1;
        uVar7 = FUN_1447439e4(puVar13);
        LOCK();
        piVar1 = (int *)(puVar13 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar7 = (**(code **)*puVar13)(puVar13,1);
        }
      }
    }
  }
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a1024 FUN_1401a1024 body=372 status=ok
// SIG undefined FUN_1401a1024(void)

void FUN_1401a1024(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0xe8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    iVar9 = 4;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (4 < *(uint *)(param_1 + 0xec)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_1401a10ab;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_1401a10ab:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0xec) = iVar9;
  FUN_1401a1198(param_1,param_2,iVar9,0x38);
  return;
}



// FUNCTION 1401a1198 FUN_1401a1198 body=145 status=ok
// SIG undefined FUN_1401a1198(void)

void FUN_1401a1198(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xe0),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401a122e FUN_1401a122e body=2195 status=ok
// SIG undefined FUN_1401a122e(void)

void FUN_1401a122e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  int *piVar27;
  int *piVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3e8 [40];
  longlong *local_3c0;
  undefined8 *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  uint local_398 [4];
  uint *local_388;
  int local_380;
  uint local_37c;
  undefined4 uStack_378;
  int local_374;
  longlong local_368;
  undefined4 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  plVar3 = *(longlong **)(param_1 + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    local_388 = (uint *)0x0;
    local_380 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_37c = 0x80;
    uStack_378 = 0xffffffff;
    local_374 = 0;
    local_368 = 0;
    local_360 = 0;
    local_3b0 = (longlong)(int)plVar3[1];
    local_3c0 = param_2;
    if (0 < local_3b0) {
      lVar25 = 0;
      local_3b8 = param_3;
      do {
        lVar18 = *(longlong *)(*plVar3 + lVar25 * 8);
        if (0 < *(int *)(lVar18 + 0x38)) {
          lVar14 = 0;
          lVar12 = 0;
          do {
            lVar15 = *(longlong *)(lVar18 + 0x30);
            if (*(longlong *)(lVar18 + 0x30) == 0) {
              lVar15 = lVar18 + 0x10;
            }
            FUN_1447cbafe(&local_3a8,&local_358,lVar15 + lVar14,0);
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + 0x1c;
          } while (lVar12 < *(int *)(lVar18 + 0x38));
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != local_3b0);
      if (local_374 < (int)uStack_3a0) {
        FUN_144ae9cc2(&local_3a8);
        lVar25 = local_3a8;
        uVar11 = (int)uStack_3a0 - local_374;
        if (1 < (int)uVar11) {
          memset(local_348,0,0x2f0);
          local_358 = lVar25;
          local_350 = lVar25 + (ulonglong)uVar11 * 0xc + -0xc;
          fVar30 = logf((float)(int)uVar11);
          local_348[0] = (int)(longlong)(fVar30 + fVar30);
          plVar3 = &local_358;
          do {
            piVar8 = (int *)*plVar3;
            piVar16 = (int *)plVar3[1];
            iVar19 = (int)plVar3[2];
            iVar24 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar8) >> 2) * -0x55555555;
            uVar11 = iVar24 + 1;
            piVar13 = piVar8;
            piVar23 = piVar16;
            if (iVar19 != 0) {
LAB_1401a13c1:
              if (8 < (int)uVar11) {
                uVar10 = (ulonglong)(uVar11 >> 1);
                iVar24 = piVar8[uVar10 * 3 + 2];
                uVar5 = *(undefined8 *)(piVar8 + uVar10 * 3);
                piVar8[uVar10 * 3 + 2] = piVar8[2];
                *(undefined8 *)(piVar8 + uVar10 * 3) = *(undefined8 *)piVar8;
                piVar8[2] = iVar24;
                *(undefined8 *)piVar8 = uVar5;
                piVar21 = piVar16 + 3;
                piVar7 = piVar8;
                do {
                  piVar2 = piVar7 + 3;
                  piVar17 = piVar7 + 3;
                  do {
                    piVar7 = piVar17;
                    piVar27 = piVar2;
                    if (piVar16 < piVar7) break;
                    piVar2 = piVar27 + 3;
                    piVar17 = piVar7 + 3;
                  } while (*piVar7 <= *piVar8);
                  piVar2 = piVar21 + -6;
                  do {
                    piVar17 = piVar21;
                    piVar28 = piVar2;
                    piVar21 = piVar17 + -3;
                    if (piVar21 <= piVar8) break;
                    piVar2 = piVar28 + -3;
                  } while (*piVar8 <= *piVar21);
                  if (piVar21 < piVar7) goto LAB_1401a14a1;
                  iVar24 = piVar7[2];
                  uVar5 = *(undefined8 *)piVar7;
                  piVar7[2] = piVar17[-1];
                  *(undefined8 *)piVar7 = *(undefined8 *)piVar21;
                  piVar17[-1] = iVar24;
                  *(undefined8 *)piVar21 = uVar5;
                } while( true );
              }
              if (piVar8 < piVar16) {
                do {
                  piVar13 = piVar8;
                  if (piVar8 + 3 <= piVar16) {
                    piVar23 = piVar8 + 3;
                    iVar19 = *piVar8;
                    do {
                      iVar24 = *piVar23;
                      iVar20 = iVar19;
                      if (iVar19 <= iVar24) {
                        iVar20 = iVar24;
                      }
                      if (iVar19 < iVar24) {
                        piVar13 = piVar23;
                      }
                      piVar23 = piVar23 + 3;
                      iVar19 = iVar20;
                    } while (piVar23 <= piVar16);
                  }
                  local_50 = piVar13[2];
                  local_58 = *(undefined8 *)piVar13;
                  piVar13[2] = piVar16[2];
                  *(undefined8 *)piVar13 = *(undefined8 *)piVar16;
                  piVar16[2] = local_50;
                  *(undefined8 *)piVar16 = local_58;
                  piVar16 = piVar16 + -3;
                } while (piVar8 < piVar16);
              }
              goto LAB_1401a1815;
            }
LAB_1401a156b:
            if (uVar11 != 0) {
              iVar19 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
              iVar24 = iVar19;
joined_r0x0001401a158e:
              do {
                iVar20 = iVar19 * 2 + 1;
                if (iVar20 < (int)uVar11) {
                  iVar22 = iVar19 * 2 + 2;
                  if ((iVar22 < (int)uVar11) &&
                     (piVar8[(longlong)iVar20 * 3] <= piVar8[(longlong)iVar22 * 3])) {
                    iVar20 = iVar22;
                  }
                  if (piVar8[(longlong)iVar19 * 3] < piVar8[(longlong)iVar20 * 3]) {
                    piVar16 = piVar8 + (longlong)iVar19 * 3;
                    piVar13 = piVar8 + (longlong)iVar20 * 3;
                    local_50 = piVar16[2];
                    local_58 = *(undefined8 *)piVar16;
                    piVar16[2] = piVar13[2];
                    *(undefined8 *)piVar16 = *(undefined8 *)piVar13;
                    piVar13[2] = local_50;
                    *(undefined8 *)piVar13 = local_58;
                    iVar19 = iVar20;
                    goto joined_r0x0001401a158e;
                  }
                }
                bVar29 = iVar24 != 0;
                iVar19 = iVar24 + -1;
                iVar24 = iVar19;
              } while (bVar29);
              if (1 < (int)uVar11) {
                uVar10 = (ulonglong)uVar11 - 1;
                local_50 = piVar8[2];
                local_58 = *(undefined8 *)piVar8;
                piVar8[2] = piVar8[uVar10 * 3 + 2];
                *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + uVar10 * 3);
                piVar8[uVar10 * 3 + 2] = local_50;
                *(undefined8 *)(piVar8 + uVar10 * 3) = local_58;
                if (uVar11 != 2) {
                  do {
                    iVar19 = 0;
                    iVar20 = 1;
                    iVar24 = 0;
                    do {
                      iVar19 = iVar19 + 2;
                      iVar22 = iVar20;
                      if (((longlong)iVar19 < (longlong)uVar10) &&
                         (piVar8[(longlong)iVar20 * 3] <= piVar8[(longlong)iVar19 * 3])) {
                        iVar22 = iVar19;
                      }
                      if (piVar8[(longlong)iVar22 * 3] <= piVar8[(longlong)iVar24 * 3]) break;
                      piVar16 = piVar8 + (longlong)iVar24 * 3;
                      piVar13 = piVar8 + (longlong)iVar22 * 3;
                      iVar19 = piVar16[2];
                      uVar5 = *(undefined8 *)piVar16;
                      piVar16[2] = piVar13[2];
                      *(undefined8 *)piVar16 = *(undefined8 *)piVar13;
                      piVar13[2] = iVar19;
                      *(undefined8 *)piVar13 = uVar5;
                      iVar19 = iVar22 * 2;
                      iVar20 = iVar22 * 2 + 1;
                      iVar24 = iVar22;
                    } while ((longlong)iVar20 < (longlong)uVar10);
                    uVar26 = uVar10 - 1;
                    local_50 = piVar8[2];
                    local_58 = *(undefined8 *)piVar8;
                    piVar8[2] = piVar8[uVar26 * 3 + 2];
                    *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + uVar26 * 3);
                    piVar8[uVar26 * 3 + 2] = local_50;
                    *(undefined8 *)(piVar8 + uVar26 * 3) = local_58;
                    bVar29 = 2 < uVar10;
                    uVar10 = uVar26;
                  } while (bVar29);
                }
              }
            }
LAB_1401a1815:
            plVar3 = plVar3 + -3;
          } while (&local_358 <= plVar3);
        }
        FUN_144a56d22(&local_3a8);
        iVar19 = (int)uStack_3a0 - local_374;
        if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar19);
        }
        if (*(int *)((longlong)local_3c0 + 0xc) < iVar19) {
          FUN_1448831cc();
        }
        iVar19 = local_380;
        if (local_380 == 0) {
          uVar10 = 1;
          uVar26 = 0;
          iVar20 = 0;
          iVar24 = 0;
        }
        else {
          puVar4 = local_388;
          if (local_388 == (uint *)0x0) {
            puVar4 = local_398;
          }
          uVar11 = *puVar4;
          if (uVar11 == 0) {
            iVar24 = local_380 + 0x1e;
            if (-1 < local_380 + -1) {
              iVar24 = local_380 + -1;
            }
            uVar26 = 0;
            uVar10 = (ulonglong)(uint)(iVar24 >> 5);
            if (iVar24 >> 5 < 1) {
              uVar10 = uVar26;
            }
            iVar20 = 0;
            do {
              if (uVar10 == uVar26) goto LAB_1401a18d1;
              iVar20 = iVar20 + 0x20;
              uVar11 = puVar4[uVar26 + 1];
              uVar26 = uVar26 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar26 = 0;
            iVar20 = 0;
          }
          uVar10 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar10 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar24 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (local_380 <= iVar24) {
            iVar24 = local_380;
          }
        }
        if (iVar24 != local_380) {
          uVar11 = 0xffffffff;
          do {
            local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)(local_3a8 + (longlong)iVar24 * 0xc)
                                );
            uVar5 = (*(code *)*local_3b8)(local_3b8[1],&local_358);
            iVar24 = (int)local_3c0[1];
            *(uint *)(local_3c0 + 1) = iVar24 + 1U;
            if (*(uint *)((longlong)local_3c0 + 0xc) < iVar24 + 1U) {
              FUN_144769b64(local_3c0,iVar24);
            }
            *(undefined8 *)(*local_3c0 + (longlong)iVar24 * 8) = uVar5;
            uVar11 = uVar11 & ~(uint)uVar10;
            puVar4 = local_388;
            if (local_388 == (uint *)0x0) {
              puVar4 = local_398;
            }
            iVar24 = (int)uVar26;
            lVar25 = (longlong)iVar24;
            uVar9 = puVar4[lVar25] & uVar11;
            if (uVar9 == 0) {
              iVar22 = local_380 + 0x1e;
              if (-1 < local_380 + -1) {
                iVar22 = local_380 + -1;
              }
              iVar22 = iVar22 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar6 = iVar22;
              if (iVar22 < iVar24) {
                iVar6 = iVar24;
              }
              if (iVar24 < iVar22) {
                lVar18 = 0;
                do {
                  uVar9 = puVar4[lVar25 + lVar18 + 1];
                  if (uVar9 != 0) {
                    uVar26 = (ulonglong)(iVar24 + (int)lVar18 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_1401a1a47;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar6 - lVar25 != lVar18);
                uVar11 = 0xffffffff;
                iVar24 = iVar6;
              }
              uVar26 = (ulonglong)(iVar24 + 1);
              iVar24 = local_380;
            }
            else {
LAB_1401a1a47:
              uVar10 = (ulonglong)(-uVar9 & uVar9);
              uVar1 = uVar10 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar24 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (local_380 <= iVar24) {
                iVar24 = local_380;
              }
            }
          } while (iVar24 != iVar19);
        }
      }
    }
LAB_1401a18d1:
    local_360 = 0;
    if (local_368 != 0) {
      FUN_1400020a8();
    }
    uVar10 = uStack_3a0 >> 0x20;
    uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
    if ((int)uVar10 != 0) {
      FUN_1447a08a2(&local_3a8,0);
    }
    uStack_378 = 0xffffffff;
    local_374 = 0;
    local_380 = 0;
    if (0x80 < local_37c) {
      local_37c = 0x80;
      FUN_1446efbd8(local_398,0);
    }
    if (local_388 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_3a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1401a14a1:
  local_50 = piVar8[2];
  local_58 = *(undefined8 *)piVar8;
  piVar8[2] = piVar17[-1];
  *(undefined8 *)piVar8 = *(undefined8 *)piVar21;
  piVar17[-1] = local_50;
  *(undefined8 *)piVar21 = local_58;
  iVar19 = iVar19 + -1;
  piVar17 = piVar17 + -6;
  if ((longlong)piVar28 - (longlong)piVar13 < (longlong)piVar23 - (longlong)piVar27) {
    if (piVar7 < piVar16) {
      *plVar3 = (longlong)piVar7;
      plVar3[1] = (longlong)piVar16;
      *(int *)(plVar3 + 2) = iVar19;
      plVar3 = plVar3 + 3;
    }
    piVar27 = piVar8;
    if (piVar21 <= piVar8 + 3) goto LAB_1401a1815;
  }
  else {
    if (piVar8 + 3 < piVar21) {
      *plVar3 = (longlong)piVar8;
      plVar3[1] = (longlong)piVar17;
      *(int *)(plVar3 + 2) = iVar19;
      plVar3 = plVar3 + 3;
    }
    piVar8 = piVar7;
    piVar17 = piVar16;
    piVar28 = piVar16;
    if (piVar16 <= piVar7) goto LAB_1401a1815;
  }
  iVar24 = (int)((ulonglong)((longlong)piVar28 - (longlong)piVar27) >> 2) * -0x55555555;
  uVar11 = iVar24 + 1;
  piVar13 = piVar27;
  piVar16 = piVar17;
  piVar23 = piVar28;
  if (iVar19 == 0) goto LAB_1401a156b;
  goto LAB_1401a13c1;
}



// FUNCTION 1401a1ac2 FUN_1401a1ac2 body=330 status=ok
// SIG undefined FUN_1401a1ac2(void)

void FUN_1401a1ac2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  code *local_158;
  undefined4 *local_150;
  code *local_148;
  undefined4 *local_140;
  undefined4 local_138 [2];
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xe0) != 0)) {
    local_138[0] = *(undefined4 *)(lVar1 + 0x170);
    local_130 = param_1 + 0x6a8;
    local_58 = 0;
    local_48 = 0x400000000;
    local_128 = 0;
    uStack_120 = 0;
    local_38 = 0;
    local_30 = 0;
    cVar2 = FUN_1447e525e(param_1);
    if ((cVar2 == '\0') ||
       ((*(longlong *)(param_1 + 0x700) != 0 || (*(longlong *)(param_1 + 0x708) != 0)))) {
      local_150 = local_138;
      local_158 = FUN_1434a57ac;
      puVar3 = &DAT_14cae9e78;
    }
    else {
      local_140 = local_138;
      local_148 = FUN_1434a57ac;
      puVar3 = &DAT_14cb00c58;
    }
    local_168 = param_3;
    FUN_1448aabe4(param_1,puVar3,param_2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a1c0e FUN_1401a1c0e body=2680 status=ok
// SIG undefined FUN_1401a1c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a1c0e(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_368 [32];
  double local_348;
  double local_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  longlong local_318;
  undefined4 local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  cVar13 = (**(code **)(*param_1 + 0x460))();
  if ((cVar13 != '\0') && (iVar15 = (int)param_1[0xe5], iVar15 != 0)) {
    local_2a8 = 0;
    uStack_2a0 = 0;
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    FUN_1401a2688(&local_2a8);
    if (0 < (int)param_1[0xe5]) {
      lVar18 = 0;
      lVar20 = 0;
      do {
        pdVar17 = &local_308;
        uVar14 = FUN_1448ac920(&local_308,param_1[0xe4] + lVar18);
        auVar30 = *(undefined1 (*) [16])(param_1 + 0x50);
        dVar26 = auVar30._0_8_;
        dVar39 = auVar30._8_8_;
        auVar37 = *(undefined1 (*) [16])(param_1 + 0x52);
        dVar33 = auVar37._0_8_;
        dVar28 = auVar37._8_8_;
        dVar22 = local_2c8._0_8_;
        dVar24 = local_2c8._8_8_;
        dVar25 = local_2b8._0_8_;
        auVar30 = minpd(local_2c8,auVar30);
        auVar32 = minpd(local_2b8,auVar37);
        auVar37._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar37._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar15 = movmskpd(uVar14,auVar37);
        auVar30._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar16 = movmskpd((int)pdVar17,auVar30);
        if ((uVar16 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar9 = (double)param_1[0x48];
          dVar10 = (double)param_1[0x49];
          dVar11 = (double)param_1[0x4a];
          dVar12 = (double)param_1[0x4b];
          dVar29 = (double)param_1[0x4b];
          dVar1 = (double)param_1[0x4b];
          dVar2 = (double)param_1[0x48];
          dVar38 = (double)param_1[0x48];
          dVar34 = (double)param_1[0x49];
          dVar35 = (double)param_1[0x49];
          dVar36 = (double)param_1[0x4a];
          dVar3 = (double)param_1[0x4a];
          dVar40 = dStack_300 * dVar36 * -1.0 +
                   local_2f8 * dVar34 + dStack_2f0 * dVar2 * 1.0 + local_308 * dVar29;
          dVar41 = local_308 * dVar3 * 1.0 +
                   dStack_2f0 * dVar35 + local_2f8 * dVar38 * -1.0 + dStack_300 * dVar1;
          auVar42._0_8_ =
               dStack_2f0 * dVar36 * 1.0 +
               ((dVar2 * dStack_300 * 1.0 + local_2f8 * dVar29) - local_308 * dVar34);
          auVar42._8_8_ =
               local_2f8 * dVar3 * -1.0 +
               ((dVar38 * local_308 * -1.0 + dStack_2f0 * dVar1) - dStack_300 * dVar35);
          dVar7 = local_2e8 * dVar26;
          dVar8 = dStack_2e0 * dVar39;
          dVar34 = local_2d8 * dVar33;
          dVar35 = dStack_2d0 * dVar28;
          dVar36 = dVar8 * dVar9 - dVar10 * dVar7;
          dVar3 = dVar34 * dVar10 - dVar11 * dVar8;
          dVar2 = dVar7 * dVar11 - dVar9 * dVar34;
          dVar38 = dVar35 * dVar12 - dVar12 * dVar35;
          dVar3 = dVar3 + dVar3;
          dVar2 = dVar2 + dVar2;
          dVar36 = dVar36 + dVar36;
          dVar38 = dVar38 + dVar38;
          dVar22 = dVar22 * dVar26;
          dVar24 = dVar24 * dVar39;
          dVar25 = dVar25 * dVar33;
          dVar28 = local_2b8._8_8_ * dVar28;
          dVar26 = (dVar38 * dVar12 - dVar38 * dVar12) + dVar1 * dVar38 + dVar35 +
                   (double)param_1[0x4f];
          dVar33 = (dVar36 * dVar10 - dVar11 * dVar2) + dVar29 * dVar3 + dVar7 +
                   (double)param_1[0x4c];
          dVar39 = (dVar3 * dVar11 - dVar36 * dVar9) + dVar1 * dVar2 + dVar8 + (double)param_1[0x4d]
          ;
          dVar29 = (dVar2 * dVar9 - dVar10 * dVar3) + dVar29 * dVar36 + dVar34 +
                   (double)param_1[0x4e];
        }
        else {
          dVar41 = (double)param_1[0x48];
          dVar1 = (double)param_1[0x49];
          dVar2 = (double)param_1[0x4a];
          dVar38 = dVar1 + dVar1;
          dVar34 = dVar2 + dVar2;
          dVar40 = dVar41 * (dVar41 + dVar41);
          local_1a8 = (1.0 - (dVar40 + dVar1 * dVar38)) * dVar33;
          dVar29 = (double)param_1[0x4b];
          dVar35 = dVar34 * dVar29;
          dVar36 = (dVar41 + dVar41) * (double)param_1[0x4b];
          dVar29 = dVar38 * dVar29;
          local_1b8 = (dVar29 + (double)param_1[0x48] * dVar34) * dVar33;
          dVar28 = dVar28 * local_2b8._8_8_;
          local_328._8_4_ = SUB84(dVar28,0);
          local_328._0_8_ = dVar33 * dVar25;
          local_328._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          dVar28 = (1.0 - (dVar2 * dVar34 + dVar40)) * dVar39;
          dVar40 = (dVar38 * dVar41 + dVar35) * dVar26;
          local_1c8 = (dVar34 * dVar1 + dVar36) * dVar39;
          dStack_1b0 = (dVar34 * dVar1 - dVar36) * dVar33;
          local_1e8 = ((double)param_1[0x48] * dVar34 - dVar29) * dVar26;
          local_1f8._8_4_ = SUB84(dVar40,0);
          local_1f8._0_8_ = (1.0 - (dVar2 * dVar34 + dVar1 * dVar38)) * dVar26;
          local_1f8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar28,0);
          local_1d8._0_8_ = (dVar38 * dVar41 - dVar35) * dVar39;
          local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = param_1[0x4c];
          lStack_190 = param_1[0x4d];
          local_188 = param_1[0x4e];
          uStack_180 = 0x3ff0000000000000;
          dVar33 = dStack_300 + dStack_300;
          dVar28 = local_2f8 + local_2f8;
          dVar40 = local_308 * (local_308 + local_308);
          local_228 = (1.0 - (dVar40 + dStack_300 * dVar33)) * dVar25;
          dVar29 = (local_308 + local_308) * dStack_2f0;
          local_238 = (dVar33 * dStack_2f0 + local_308 * dVar28) * dVar25;
          local_258 = (dVar33 * local_308 - dVar28 * dStack_2f0) * dVar24;
          dStack_230 = (dVar28 * dStack_300 - dVar29) * dVar25;
          local_338 = dVar26 * dVar22;
          dStack_330 = dVar39 * dVar24;
          local_278 = (1.0 - (local_2f8 * dVar28 + dStack_300 * dVar33)) * dVar22;
          dStack_250 = (1.0 - (local_2f8 * dVar28 + dVar40)) * dVar24;
          dStack_270 = (dVar33 * local_308 + dVar28 * dStack_2f0) * dVar22;
          local_248 = (dVar28 * dStack_300 + dVar29) * dVar24;
          local_268 = (local_308 * dVar28 - dVar33 * dStack_2f0) * dVar22;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_2e8;
          dStack_210 = dStack_2e0;
          local_208 = local_2d8;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          dVar24 = dStack_330;
          dVar22 = local_338;
          auVar30 = _DAT_149934d80;
          local_340 = local_168;
          dVar25 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
          local_348 = local_158;
          dVar26 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
          dVar33 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
          uVar21 = -(ulonglong)(0.0 <= dVar25 + -9.99999993922529e-09);
          dVar39 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar25)) & uVar21)
          ;
          uVar21 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
          dVar29 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar21)
          ;
          uVar21 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
          dVar25 = (double)local_328._0_8_;
          dVar28 = (double)local_328._8_8_;
          dVar26 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar21)
          ;
          auVar32._8_8_ = -(ulonglong)(0.0 <= dStack_330);
          auVar32._0_8_ = -(ulonglong)(0.0 <= local_338);
          auVar37 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
          dVar33 = (double)(~-(ulonglong)(0.0 <= (double)local_328._0_8_) & 0xbff0000000000000 |
                           (ulonglong)
                           ((uint)(-(ulonglong)(0.0 <= (double)local_328._0_8_) >> 0x20) &
                           0x3ff00000) << 0x20);
          dVar40 = auVar37._0_8_;
          local_178 = local_178 * dVar39 * dVar40;
          local_170 = local_170 * dVar39 * dVar40;
          local_168 = dVar39 * local_168 * dVar40;
          dVar39 = auVar37._8_8_;
          local_148 = dVar29 * local_148 * dVar39;
          local_150 = local_150 * dVar29 * dVar39;
          local_158 = dVar39 * local_158 * dVar29;
          local_128 = dVar26 * local_128 * dVar33;
          local_130 = local_130 * dVar26 * dVar33;
          local_138 = dVar33 * local_138 * dVar26;
          FUN_14481fd10(&local_298,&local_178);
          dVar26 = local_288 * local_288 + local_298 * local_298;
          dVar33 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar27._0_8_ = dVar26 + dVar33;
          auVar27._8_8_ = dVar26 + dVar33;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
          auVar37 = sqrtpd(auVar27,auVar27);
          auVar30 = divpd(auVar30,auVar37);
          auVar31._0_8_ = auVar30._0_8_ * local_288;
          auVar31._8_8_ = auVar30._8_8_ * dStack_280;
          dVar40 = (double)((ulonglong)(local_298 * auVar30._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
          dVar41 = (double)((ulonglong)(dStack_290 * auVar30._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
          auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar23);
          dVar26 = 0.0;
          dVar33 = local_118;
          dVar39 = dStack_110;
          dVar29 = local_108;
        }
        uVar21 = uStack_2a0;
        lVar19 = (longlong)(int)uStack_2a0;
        uVar16 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar16);
        if (uStack_2a0._4_4_ < uVar16) {
          FUN_144a2c682(&local_2a8,uVar21 & 0xffffffff);
        }
        lVar19 = lVar19 * 0x60;
        *(double *)(local_2a8 + lVar19) = dVar40;
        ((double *)(local_2a8 + lVar19))[1] = dVar41;
        *(undefined1 (*) [16])(local_2a8 + 0x10 + lVar19) = auVar42;
        auVar6._8_4_ = SUB84(dVar39,0);
        auVar6._0_8_ = dVar33;
        auVar6._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        *(undefined1 (*) [16])(local_2a8 + 0x20 + lVar19) = auVar6;
        auVar4._8_4_ = SUB84(dVar26,0);
        auVar4._0_8_ = dVar29;
        auVar4._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(local_2a8 + 0x30 + lVar19) = auVar4;
        pdVar17 = (double *)(local_2a8 + 0x40 + lVar19);
        *pdVar17 = dVar22;
        pdVar17[1] = dVar24;
        auVar5._8_4_ = SUB84(dVar28,0);
        auVar5._0_8_ = dVar25;
        auVar5._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        *(undefined1 (*) [16])(local_2a8 + 0x50 + lVar19) = auVar5;
        lVar20 = lVar20 + 1;
        lVar18 = lVar18 + 0x80;
      } while (lVar20 < (int)param_1[0xe5]);
    }
    local_318 = local_2a8;
    local_310 = (int)uStack_2a0;
    (**(code **)(*param_1 + 0xbc0))(param_1);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a2688 FUN_1401a2688 body=231 status=ok
// SIG undefined FUN_1401a2688(void)

void FUN_1401a2688(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 1401a2770 FUN_1401a2770 body=1230 status=ok
// SIG undefined FUN_1401a2770(void)

void FUN_1401a2770(longlong *param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  longlong *plVar18;
  double *pdVar19;
  longlong lVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  char local_128;
  undefined1 local_118 [56];
  longlong local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  double dVar3;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar16 = (**(code **)(*param_1 + 0x460))();
  if (((cVar16 != '\0') && (*(int *)(param_2 + 1) != 0)) &&
     (FUN_14014d9c6(param_1,&local_158), local_128 != '\0')) {
    FUN_14014d556(param_1,local_118,param_1 + 0x48,1);
    local_168 = 0;
    uStack_160 = 0;
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 != 0) {
      FUN_1401a2d6a(&local_168);
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        pdVar19 = (double *)*param_2;
        pdVar21 = pdVar19 + (longlong)*(int *)(param_2 + 1) * 0xc;
        local_178 = (local_158 + local_140) * 0.5;
        dVar6 = (dStack_150 + dStack_138) * 0.5;
        local_188 = (local_148 + local_130) * 0.5;
        local_198 = (local_140 - local_158) * 0.5;
        dVar5 = (dStack_138 - dStack_150) * 0.5;
        local_1a8 = (local_130 - local_148) * 0.5;
        dStack_1a0 = local_1a8;
        dStack_190 = local_198;
        dStack_180 = local_188;
        dStack_170 = local_178;
        do {
          uVar15 = uStack_160;
          dVar28 = *pdVar19;
          dVar12 = pdVar19[1];
          dVar8 = pdVar19[2];
          dVar11 = pdVar19[8];
          dVar13 = pdVar19[9];
          dVar9 = pdVar19[10];
          dVar25 = dVar8 + dVar8;
          dVar22 = dVar28 + dVar28;
          dVar23 = dVar12 + dVar12;
          dVar2 = pdVar19[3];
          dVar3 = pdVar19[3];
          dVar24 = dVar23 * dVar2;
          auVar29._0_8_ = (dVar24 + *pdVar19 * dVar25) * dVar9;
          auVar29._8_8_ = (dVar22 * dVar3 + *pdVar19 * dVar22) * pdVar19[0xb];
          dVar2 = dVar25 * dVar2;
          dVar3 = dVar22 * dVar3;
          dVar7 = (1.0 - (dVar25 * dVar8 + dVar23 * dVar12)) * dVar11;
          dVar8 = (1.0 - (dVar25 * dVar8 + dVar22 * dVar28)) * dVar13;
          dVar30 = (dVar2 + dVar23 * dVar28) * dVar11;
          dVar10 = (dVar3 + dVar25 * dVar12) * dVar13;
          auVar26._0_8_ = dVar13 * (dVar23 * dVar28 - dVar2);
          auVar26._8_8_ = dVar9 * (dVar25 * dVar12 - dVar3);
          auVar29 = blendpd(auVar29,auVar26,2);
          auVar27._8_4_ = SUB84(dVar8,0);
          auVar27._0_8_ = dVar7;
          auVar27._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          auVar27 = blendpd(auVar26,auVar27,2);
          dVar3 = local_188 * auVar29._0_8_ + dVar6 * auVar27._0_8_ + local_178 * dVar7 + pdVar19[4]
          ;
          dVar2 = dStack_180 * auVar29._8_8_ + dVar6 * auVar27._8_8_ + dStack_170 * dVar30 +
                  pdVar19[5];
          dVar11 = (*pdVar19 * dVar25 - dVar24) * dVar11;
          dVar9 = (1.0 - (dVar22 * dVar28 + dVar23 * dVar12)) * dVar9;
          dVar8 = local_188 * dVar9 + dVar6 * dVar10 + local_178 * dVar11 + pdVar19[6];
          lVar20 = (longlong)(int)uStack_160;
          uVar17 = (int)uStack_160 + 1;
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar17);
          if (uStack_160._4_4_ < uVar17) {
            FUN_140555802(&local_168,uVar15 & 0xffffffff);
          }
          dVar28 = ABS(auVar29._0_8_ * local_1a8) +
                   ABS(auVar27._0_8_ * dVar5) + ABS(dVar7 * local_198);
          dVar30 = ABS(auVar29._8_8_ * dStack_1a0) +
                   ABS(auVar27._8_8_ * dVar5) + ABS(dVar30 * dStack_190);
          dVar7 = ABS(dVar9 * local_1a8) + ABS(dVar10 * dVar5) + ABS(dVar11 * local_198);
          lVar20 = lVar20 * 0x38;
          *(double *)(local_168 + lVar20) = dVar3 - dVar28;
          ((double *)(local_168 + lVar20))[1] = dVar2 - dVar30;
          *(double *)(local_168 + 0x10 + lVar20) = dVar8 - dVar7;
          pdVar1 = (double *)(local_168 + 0x18 + lVar20);
          *pdVar1 = dVar28 + dVar3;
          pdVar1[1] = dVar30 + dVar2;
          *(double *)(local_168 + 0x28 + lVar20) = dVar7 + dVar8;
          *(undefined1 *)(local_168 + 0x30 + lVar20) = 1;
          pdVar19 = pdVar19 + 0xc;
        } while (pdVar19 != pdVar21);
      }
    }
    lVar20 = local_168;
    uVar14 = (int)uStack_160;
    (**(code **)(param_1[0x55] + 0x18))(param_1 + 0x55,local_118);
    local_e0 = lVar20;
    local_d8 = uVar14;
    plVar18 = DAT_14caca1f8;
    if (DAT_14caca200 == 0) {
      plVar18 = (longlong *)0x0;
    }
    (**(code **)(*plVar18 + 0x58))(plVar18,param_1,local_118,&local_e0);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a2c40 FUN_1401a2c40 body=297 status=ok
// SIG undefined FUN_1401a2c40(void)

double * FUN_1401a2c40(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + -0x1f8) == 0) {
    FUN_1448abda6(param_1 + -0x2a8);
  }
  if (*(char *)(param_1 + 0x7e8) == '\0') {
    FUN_14014d556(param_1 + -0x2a8,local_88,param_1 + -0x68,1);
  }
  dVar1 = *(double *)(param_1 + 0x800);
  dVar2 = *(double *)(param_1 + 0x818);
  dVar3 = *(double *)(param_1 + 0x7f0);
  dVar4 = *(double *)(param_1 + 0x7f8);
  dVar5 = *(double *)(param_1 + 0x810);
  dVar6 = *(double *)(param_1 + 0x808);
  *param_2 = dVar3 - dVar6;
  param_2[1] = dVar4 - dVar5;
  param_2[2] = dVar1 - dVar2;
  param_2[3] = dVar3 + dVar6;
  param_2[4] = dVar4 + dVar5;
  param_2[5] = dVar1 + dVar2;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a2d6a FUN_1401a2d6a body=324 status=ok
// SIG undefined FUN_1401a2d6a(void)

void FUN_1401a2d6a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1401a2dfe;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_1401a2dfe:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0x38,8);
  }
  return;
}



// FUNCTION 1401a2eae FUN_1401a2eae body=76 status=ok
// SIG undefined FUN_1401a2eae(void)

undefined4 * FUN_1401a2eae(undefined4 *param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401a2efc(local_38);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a2efc FUN_1401a2efc body=1191 status=ok
// SIG undefined FUN_1401a2efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1401a2efc(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  int *local_c0;
  code *local_b8;
  code *local_b0;
  int local_9c;
  int local_98;
  int local_94;
  ulonglong local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
  if (DAT_14cb10c90 != param_2) {
    DAT_14cb10c90 = param_2;
    if (DAT_14cb10c20 != DAT_14cb10c4c) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      puVar6 = &DAT_14cb10c50;
      if (DAT_14cb10c58 != (undefined *)0x0) {
        puVar6 = DAT_14cb10c58;
      }
      iVar8 = *(int *)(puVar6 + (ulonglong)(DAT_14cb10c60 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      while (iVar8 != -1) {
        lVar1 = DAT_14cb10c18 + (longlong)iVar8 * 0x30;
        if (*(ulonglong *)(DAT_14cb10c18 + (longlong)iVar8 * 0x30) == param_2) {
          if ((int *)(lVar1 + 8) != (int *)0x0 && lVar1 != 0) {
            _DAT_14cb10c98 = *(int *)(lVar1 + 8);
            _DAT_14cb10c9c = *(int *)(lVar1 + 0xc);
            _DAT_14cb10ca0 = *(int *)(lVar1 + 0x10);
            _DAT_14cb10ca4 = *(int *)(lVar1 + 0x14);
            _DAT_14cb10ca8 = *(undefined8 *)(lVar1 + 0x18);
            _DAT_14cb10cb0 = *(undefined8 *)(lVar1 + 0x20);
            goto LAB_1401a2ff5;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x28);
      }
    }
    _DAT_14cb10c98 = 0;
    _DAT_14cb10c9c = 0;
    _DAT_14cb10ca0 = 0;
    _DAT_14cb10ca4 = 0;
    _DAT_14cb10ca8 = 0;
    _DAT_14cb10cb0 = 0;
  }
LAB_1401a2ff5:
  local_68 = _DAT_14cb10ca8;
  uStack_60 = _DAT_14cb10cb0;
  local_78 = _DAT_14cb10c98;
  iStack_74 = _DAT_14cb10c9c;
  iStack_70 = _DAT_14cb10ca0;
  iStack_6c = _DAT_14cb10ca4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
  param_1[4] = (int)local_68;
  param_1[5] = local_68._4_4_;
  param_1[6] = (int)uStack_60;
  param_1[7] = uStack_60._4_4_;
  *param_1 = local_78;
  param_1[1] = iStack_74;
  param_1[2] = iStack_70;
  param_1[3] = iStack_6c;
  if (((param_1[5] == 0 && param_1[4] == 0) && param_1[6] == 0) && param_1[7] == 0) {
    if (DAT_14cae8b20 == 0) {
      local_c0 = &local_78;
      local_78 = 0x4355090c;
      iStack_74 = 1;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_147b8e16d;
      local_d0 = (code *)&LAB_140810a38;
      local_d8 = L"Engine";
      local_e0 = 0x800000000;
      local_e8 = 0x10000000;
      local_f0 = 8;
      local_f8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar1 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_c0 = &local_78;
      local_78 = 0x449e2820;
      iStack_74 = 1;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1468c5283;
      local_d0 = FUN_142809da0;
      local_d8 = L"Engine";
      local_e0 = 0x400000000;
      local_e8 = 0x10000000;
      local_f0 = 8;
      local_f8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      iVar8 = *(int *)(lVar1 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar8) ||
           (lVar7 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
           lVar1 + 0x30)) {
          lVar7 = 0;
        }
      } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    }
    local_90 = param_2;
    FUN_14019491a(&local_88,lVar7);
    if (((local_84 == 0 && local_88 == 0) && local_80 == 0) && local_7c == 0) {
      iVar8 = *param_1;
      iVar9 = param_1[1];
      iVar10 = param_1[2];
      iVar11 = param_1[3];
    }
    else {
      FUN_140a107dc(&local_78,&local_88,param_1);
      iVar8 = local_78;
      iVar9 = iStack_74;
      iVar10 = iStack_70;
      iVar11 = iStack_6c;
    }
    param_1[4] = iVar8;
    param_1[5] = iVar9;
    param_1[6] = iVar10;
    param_1[7] = iVar11;
    iVar8 = *param_1;
    iVar9 = param_1[1];
    iVar10 = param_1[2];
    iVar11 = param_1[3];
    uVar3 = *(undefined8 *)(param_1 + 4);
    iVar2 = param_1[6];
    if (((iVar2 == 0 && param_1[7] == 0) && (param_1[5] == 0 && param_1[4] == 0)) &&
        ((iVar10 == 0 && iVar11 == 0) && (iVar9 == 0 && iVar8 == 0))) {
      FUN_1456d599e(local_90);
    }
    else {
      local_9c = param_1[7];
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
      local_94 = DAT_14cb10c20;
      local_98 = DAT_14cb10c4c;
      DAT_14cb10c90 = local_90;
      _DAT_14cb10cb0 = CONCAT44(local_9c,iVar2);
      local_78 = 0x4cb10c90;
      iStack_74 = 1;
      iStack_70 = 0x4cb10c98;
      iStack_6c = 1;
      _DAT_14cb10c98 = iVar8;
      _DAT_14cb10c9c = iVar9;
      _DAT_14cb10ca0 = iVar10;
      _DAT_14cb10ca4 = iVar11;
      _DAT_14cb10ca8 = uVar3;
      FUN_1402ac56c(&DAT_14cb10c18,local_4c);
      if (local_94 == local_98) {
        FUN_140f9708a(&DAT_14c9647b8,&DAT_14cb10c10);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a33a4 FUN_1401a33a4 body=1248 status=ok
// SIG undefined FUN_1401a33a4(void)

ulonglong FUN_1401a33a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar10 = (longlong *)param_1[0x23];
  if ((longlong *)param_1[0x23] == (longlong *)0x0) {
    plVar10 = param_1 + 0x1b;
  }
  lVar11 = param_1[0x24];
  if ((longlong)(int)lVar11 == 0) {
    uVar15 = 1;
    uVar7 = 0;
LAB_1401a34a0:
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = uVar15;
    }
    uVar15 = (ulonglong)uVar7;
    if (*(char *)(param_1[9] + 0x78) != '\0') {
      uVar15 = uVar13;
    }
  }
  else {
    uVar15 = 1;
    lVar12 = 0;
    bVar9 = 0;
    uVar7 = 0;
    do {
      plVar8 = *(longlong **)((longlong)plVar10 + lVar12);
      uVar6 = FUN_1400cd33c(plVar8,param_2);
      if (*(code **)(*plVar8 + 0x28) == FUN_1400d388e) {
        cVar5 = FUN_1400d388e(plVar8);
      }
      else {
        cVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      if (cVar5 != '\0') {
        lVar3 = plVar8[9];
        if ((char)uVar6 == '\x01') {
          if (*(char *)(lVar3 + 0x79) != '\0') {
            uVar7 = 1;
          }
        }
        else {
          if (*(char *)(lVar3 + 0x7c) != '\0') {
            uVar15 = 0;
          }
          if ((char)uVar6 != '\0') {
            bVar9 = bVar9 | *(byte *)(lVar3 + 0x7b);
          }
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar12);
    if ((bVar9 & 1) == 0) goto LAB_1401a34a0;
    uVar15 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),2);
  }
  uVar7 = (uint)uVar15;
  *(char *)((longlong)param_1 + 0xb5) = (char)uVar15;
  if (0 < (longlong)(int)param_1[0x24]) {
    if ((char)uVar15 == '\x02') {
      lVar11 = 0x72;
    }
    else {
      if ((uVar7 & 0xff) != 1) goto LAB_1401a34e8;
      lVar11 = 0x71;
    }
    if (*(char *)(param_1[9] + lVar11) == '\0') {
      plVar10 = param_1 + 0x1b;
      if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x23];
      }
      plVar8 = plVar10 + (int)param_1[0x24];
      do {
        while( true ) {
          plVar4 = (longlong *)*plVar10;
          cVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
          if (cVar5 != '\0') break;
          plVar10 = plVar10 + 1;
          if (plVar10 == plVar8) goto LAB_1401a355f;
        }
        cVar5 = *(char *)((longlong)param_1 + 0xb5);
        if ((cVar5 == '\x02') && (*(char *)(param_1[9] + 0x73) != '\0')) {
          cVar5 = '\x01';
        }
        cVar5 = (**(code **)(*plVar4 + 0x118))(plVar4,param_2,cVar5);
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar8 && cVar5 == '\0');
      goto LAB_1401a355f;
    }
    if (*(char *)(param_1[9] + lVar11) != '\x01') {
      return uVar15;
    }
  }
LAB_1401a34e8:
  iVar1 = (int)param_1[0x38];
  if (((longlong)iVar1 < 0) || ((int)param_1[0x37] <= iVar1)) {
LAB_1401a3775:
    uVar7 = (**(code **)(*param_1 + 0x170))(param_1,param_2,uVar7);
    uVar15 = (ulonglong)uVar7;
  }
  else {
    plVar10 = param_1 + 0x26;
    if ((longlong *)param_1[0x36] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x36];
    }
    lVar11 = plVar10[(longlong)iVar1 * 2];
    if ((lVar11 == 0) || (*(char *)(lVar11 + 0xb4) != '\x02')) goto LAB_1401a3775;
    uVar7 = FUN_1400cd33c(lVar11,param_2);
    if ((char)uVar7 == '\x04') {
      uVar15 = CONCAT71((int7)(uVar15 >> 8),4);
    }
    else if (*(char *)(lVar11 + 0xb4) == '\x03') goto LAB_1401a3775;
  }
  *(char *)((longlong)param_1 + 0xb5) = (char)uVar15;
LAB_1401a355f:
  if ((char)uVar15 != '\0') {
    return uVar15;
  }
  iVar1 = (int)param_1[0x38];
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[0x37])) {
    plVar10 = (longlong *)param_1[0x36];
    if ((longlong *)param_1[0x36] == (longlong *)0x0) {
      plVar10 = param_1 + 0x26;
    }
    plVar10 = (longlong *)plVar10[(longlong)iVar1 * 2];
    if ((plVar10 != (longlong *)0x0) && (*(char *)((longlong)plVar10 + 0xb4) == '\x02')) {
      if (iVar1 == 0) {
        return 0;
      }
      if (*(float *)(param_2 + 1) <= *(float *)((longlong)plVar10 + 0xc4)) {
        return 0;
      }
      if (((((char)param_2[2] != '\0') || (*(int *)((longlong)param_1 + 0x1cc) != -1)) ||
          (*(float *)(param_1 + 0x39) + *(float *)(param_1[9] + 0xd0) <= *(float *)(param_2 + 1)))
         && ((cVar5 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar5 == '\0' ||
             (cVar5 = (**(code **)(*plVar10 + 0xa8))(plVar10,param_2,3), cVar5 != '\0')))) {
        lVar11 = param_1[9];
        *(int *)(param_1 + 0x39) = (int)param_2[1];
        iVar1 = (int)param_1[0x38];
        iVar2 = (int)param_1[0x37];
        iVar14 = iVar1;
        if (iVar2 < iVar1) {
          iVar14 = iVar2;
        }
        if (iVar1 < 0) {
          iVar14 = iVar2;
        }
        if (0 < iVar14) {
          lVar12 = 0;
          uVar15 = 0;
          do {
            plVar8 = (longlong *)param_1[0x36];
            if ((longlong *)param_1[0x36] == (longlong *)0x0) {
              plVar8 = param_1 + 0x26;
            }
            lVar3 = *(longlong *)((longlong)plVar8 + lVar12);
            if (lVar3 != 0) {
              cVar5 = FUN_14097f910(lVar3,param_2,param_1,uVar15 & 0xffffffff);
              if (cVar5 == '\x01') {
                if (uVar15 != *(uint *)((longlong)param_1 + 0x1cc)) {
                  *(int *)((longlong)param_1 + 0x1cc) = (int)uVar15;
                  *(int *)(param_1 + 0x3a) = (int)param_2[1];
                  return 0;
                }
                if (*(float *)(param_2 + 1) - *(float *)(lVar11 + 0xd4) < *(float *)(param_1 + 0x3a)
                   ) {
                  return 0;
                }
LAB_1401a374b:
                *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xff7fffffffffffff;
              }
              else if (cVar5 == '\x02') {
                *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xff7fffffffffffff;
                if ((plVar10 == (longlong *)0x0) ||
                   (cVar5 = FUN_14065d9ca(plVar10,param_2,3), cVar5 != '\0')) {
                  if (*(char *)(*param_2 + 0x460) == '\x01') {
                    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
                    return 0;
                  }
                  cVar5 = FUN_14097ea48(lVar3,param_2,param_1,uVar15 & 0xffffffff);
                  if (cVar5 != '\0') {
                    *(int *)(param_1 + 0x38) = (int)uVar15;
                    return 0;
                  }
                  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
                  iVar14 = (int)param_1[0x37];
                  plVar10 = (longlong *)0x0;
                }
              }
              else if (uVar15 == *(uint *)((longlong)param_1 + 0x1cc)) goto LAB_1401a374b;
            }
            uVar15 = uVar15 + 1;
            lVar12 = lVar12 + 0x10;
            if ((longlong)iVar14 <= (longlong)uVar15) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1401a3884 FUN_1401a3884 body=292 status=ok
// SIG undefined FUN_1401a3884(void)

void FUN_1401a3884(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (param_2 < 0xfff) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401a38e5;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
    }
  }
LAB_1401a38e5:
  iVar3 = (int)(uVar4 >> 3);
  iVar7 = 0x7fffffff;
  if ((int)param_2 <= iVar3) {
    iVar7 = iVar3;
  }
  if (iVar7 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar7;
  FUN_1401a39a8(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1401a39a8 FUN_1401a39a8 body=132 status=ok
// SIG undefined FUN_1401a39a8(void)

void FUN_1401a39a8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1401a3a2c FUN_1401a3a2c body=1302 status=ok
// SIG undefined FUN_1401a3a2c(void)

undefined8
FUN_1401a3a2c(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
             undefined1 (*param_5) [16])

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 (*local_380) [16];
  ulonglong local_378 [2];
  ulonglong local_368;
  ulonglong local_360;
  undefined8 local_358 [16];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  double local_258;
  undefined8 local_250;
  double local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 local_210;
  double local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [136];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_380 = param_5 + 0x12;
  local_388 = (undefined1)param_4;
  FUN_1401a3f44(param_1,local_378,param_2,param_3);
  iVar3 = FUN_1448ad1d2(param_1,*(undefined4 *)(param_2 + 0x4f8),param_4);
  iVar4 = param_3;
  if (param_3 == -1) {
    iVar4 = iVar3;
  }
  *(int *)(param_5[0x38] + 4) = iVar4;
  auVar13._8_4_ = (int)local_378[1];
  auVar13._0_8_ = local_378[0] ^ 0x8000000000000000;
  auVar13._12_4_ = (uint)(local_378[1] >> 0x20) ^ 0x80000000;
  *param_5 = auVar13;
  *(ulonglong *)param_5[1] = local_368 ^ 0x8000000000000000;
  dVar9 = *(double *)(param_1 + 0x90);
  dVar10 = *(double *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x70);
  dVar8 = dVar9 * dVar9 + dVar10 * dVar10 + dVar1 * dVar1;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (dVar8 < 9.99999993922529e-09) {
      dVar10 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar1 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dVar9 = DAT_14c8464f0;
    }
    else {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar1 = dVar1 * dVar8;
      dVar10 = dVar10 * dVar8;
      dVar9 = dVar9 * dVar8;
    }
  }
  dVar8 = 0.0;
  if ((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar10 != 0.0)) || (NAN(dVar10))) {
    dVar8 = atan2(dVar1,dVar10);
    dVar8 = dVar8 * 57.29577951308232 * 3.1415927410125732;
  }
  dVar10 = SQRT(dVar10 * dVar10 + dVar1 * dVar1);
  dVar1 = 0.0;
  if (((dVar9 != 0.0) || (NAN(dVar9))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
    dVar9 = atan2(dVar9,dVar10);
    dVar1 = dVar9 * 57.29577951308232 * 3.1415927410125732;
  }
  dVar8 = dVar8 / 180.0;
  dVar9 = cos(dVar8);
  dVar10 = sin(dVar8);
  dVar11 = sin(dVar8);
  local_1d8 = cos(dVar8);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0x3ff0000000000000;
  dVar1 = dVar1 / 180.0;
  local_1d0 = -dVar11;
  local_1b8 = dVar10;
  local_1b0 = dVar9;
  dVar9 = cos(dVar1);
  dVar10 = sin(dVar1);
  dVar8 = sin(dVar1);
  local_258 = cos(dVar1);
  local_250 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0x3ff0000000000000;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0x3ff0000000000000;
  local_248 = -dVar8;
  local_218 = dVar10;
  local_208 = dVar9;
  FUN_1447fea8d(local_158,&local_1d8);
  local_2d8 = 0x3ff0000000000000;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0x3ff0000000000000;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_290 = 0x8000000000000000;
  local_288 = 0x3ff0000000000000;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0x3ff0000000000000;
  FUN_1447fea8d(local_358,local_158);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_360;
  auVar13 = roundpd(auVar12,auVar12,2);
  dVar10 = auVar13._0_8_;
  dVar9 = (double)(float)(dVar10 / 1.7320507764816284);
  puVar6 = local_358;
  pauVar7 = param_5 + 2;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)*pauVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 8);
  }
  *(double *)param_5[10] = 1.0 / dVar10;
  *(double *)(param_5[10] + 8) = 1.0 / dVar10;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar15 = (undefined4)DAT_14c8464e8;
  uVar14 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_5[0xb] = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_5[0xb] + 4) = uVar14;
  *(undefined4 *)(param_5[0xb] + 8) = uVar15;
  *(undefined4 *)(param_5[0xb] + 0xc) = uVar2;
  dVar1 = DAT_14c8464f0;
  *(double *)param_5[0xc] = DAT_14c8464f0;
  *(double *)(param_5[0xc] + 8) = dVar9;
  *(double *)param_5[0xd] = dVar9;
  *(double *)(param_5[0xd] + 8) = dVar9;
  *(double *)param_5[0xe] = dVar10;
  *(undefined8 *)param_5[0xf] = 0;
  *(undefined8 *)(param_5[0xf] + 8) = 0;
  *(undefined8 *)param_5[0x10] = 0;
  *(undefined8 *)(param_5[0x10] + 8) = 0x3ff0000000000000;
  uVar14 = 0;
  uVar15 = 0xc1300000;
  if (-dVar10 <= -1048576.0) {
    uVar14 = auVar13._0_4_;
    uVar15 = (int)((ulonglong)-dVar10 >> 0x20);
  }
  *(float *)param_5[0x11] = (float)(double)CONCAT44(uVar15,uVar14);
  *(float *)(param_5[0x11] + 4) = (float)dVar10 - (float)(double)CONCAT44(uVar15,uVar14);
  param_5[0x39][1] = param_3 == -1;
  param_5[0x38][0] = iVar3 <= *(int *)(param_5[0x38] + 4) && param_3 != -1;
  if ((local_d0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)dVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a3f44 FUN_1401a3f44 body=1361 status=ok
// SIG undefined FUN_1401a3f44(void)

undefined8
FUN_1401a3f44(longlong *param_1,undefined8 param_2,longlong param_3,float param_4,char param_5,
             float *param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e0;
  float *local_d8;
  DWORD local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = param_2;
  fVar5 = (float)FUN_1448ad1d2(param_1,*(undefined4 *)(param_3 + 0x4f8),uVar12 & 0xffffffff);
  uVar6 = (**(code **)(*param_1 + 0xf0))
                    (param_1,*(undefined4 *)(param_3 + 0x3090),uVar12 & 0xffffffff,
                     *(undefined4 *)(param_3 + 0x4f8));
  uVar7 = (**(code **)(*param_1 + 0xb8))(param_1,param_3,uVar12 & 0xffffffff);
  uVar6 = (uVar6 & 0xff) + (int)fVar5;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (param_4 != -NAN) {
    fVar5 = param_4;
  }
  if (param_6 != (float *)0x0) {
    fVar18 = param_6[0x9b];
    if (0.0 < fVar18) {
      fVar13 = 2.0;
      fVar14 = 500.0;
      goto LAB_1401a4062;
    }
  }
  local_e8._0_1_ = param_4 == -NAN;
  fVar13 = (float)FUN_1448ad422(param_1,param_3,fVar5,uVar12 & 0xffffffff);
  local_e8 = (float)CONCAT31(local_e8._1_3_,param_4 == -NAN);
  fVar14 = (float)FUN_1448ad422(param_1,param_3,(int)fVar5 + 1,uVar12 & 0xffffffff);
  fVar18 = fVar14;
LAB_1401a4062:
  fVar1 = *(float *)(param_1 + 0x5e);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1da8) {
    FUN_144b3d300(&DAT_14cad1da8);
    if (DAT_14cad1da8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.CSM.TransitionScale",1)
      ;
      if (plVar10 == (longlong *)0x0) {
        DAT_14cad1da0 = 0;
      }
      else {
        DAT_14cad1da0 = (**(code **)(*plVar10 + 0x70))(plVar10);
      }
      _Init_thread_footer(&DAT_14cad1da8);
    }
  }
  lVar3 = DAT_14cad12c8;
  fVar15 = *(float *)(DAT_14cad1da0 + 4);
  if (2.0 <= fVar15) {
    fVar15 = 2.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar17 = (fVar18 - fVar13) * fVar1 * fVar15;
  if ((int)fVar5 < (int)(uVar6 - 1)) {
    fVar18 = fVar18 + fVar17;
  }
  else if ((param_5 == '\0') || ((*(byte *)(param_1 + 0x3a) & 8) == 0)) {
    if (param_4 == -NAN) {
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar11 = 0;
      }
      else if (iVar2 == 1) {
        local_c4 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar11 = (ulonglong)(local_c4 != DVar8);
      }
      else {
        uVar11 = 1;
      }
      fVar16 = *(float *)(lVar3 + uVar11 * 4);
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 * fVar16;
    }
    fVar14 = fVar14 - fVar17;
  }
  if (param_6 != (float *)0x0) {
    param_6[3] = fVar17;
    param_6[2] = 0.0;
    if (fVar5 != 0.0) {
      local_e8._0_1_ = param_4 == -NAN;
      fVar17 = (float)FUN_1448ad422(param_1,param_3,(int)fVar5 + -1,uVar12 & 0xffffffff);
      local_e8 = (float)CONCAT31(local_e8._1_3_,param_4 == -NAN);
      fVar16 = (float)FUN_1448ad422(param_1,param_3,fVar5,uVar12 & 0xffffffff);
      param_6[2] = fVar1 * fVar15 * (fVar16 - fVar17);
    }
    param_6[1] = fVar18;
    *param_6 = fVar13;
    param_6[4] = fVar14;
    param_6[5] = fVar18 - fVar14;
    param_6[0x9a] = *(float *)(param_1 + 0x53);
    param_6[0x99] = fVar5;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1d98) {
    FUN_144b3d300(&DAT_14cad1d98);
    if (DAT_14cad1d98 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.SkyAtmosphere.SampleLightShadowmap",1);
      if (plVar10 == (longlong *)0x0) {
        DAT_14cad1d90 = 0;
      }
      else {
        DAT_14cad1d90 = (**(code **)(*plVar10 + 0x68))(plVar10);
      }
      _Init_thread_footer(&DAT_14cad1d98);
    }
  }
  lVar3 = DAT_14cad1d90;
  if (((*(byte *)(param_1 + 0x62) & 3) != 0) && (DAT_14cad1d90 != 0 && (int)fVar5 + 1U == uVar7)) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
      uVar11 = 0;
    }
    else if (iVar2 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar11 = 1;
    }
    if (*(int *)(lVar3 + uVar11 * 4) != 0) {
      local_e8 = (float)CONCAT31(local_e8._1_3_,param_4 == -NAN);
      fVar13 = (float)FUN_1448ad422(param_1,param_3,0,uVar12 & 0xffffffff);
    }
  }
  uVar4 = local_c0;
  local_a8 = *(undefined8 *)(param_3 + 0x1058);
  local_b8 = *(undefined4 *)(param_3 + 0x1048);
  uStack_b4 = *(undefined4 *)(param_3 + 0x104c);
  uStack_b0 = *(undefined4 *)(param_3 + 0x1050);
  uStack_ac = *(undefined4 *)(param_3 + 0x1054);
  local_d8 = param_6;
  local_e8 = fVar13;
  local_e0 = fVar18;
  FUN_1448ada3e(param_1,local_c0,param_3);
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a4496 FUN_1401a4496 body=161 status=ok
// SIG undefined FUN_1401a4496(void)

int FUN_1401a4496(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  lVar3 = DAT_14cad1288;
  uVar1 = *(uint *)(param_1 + 0x208);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar7 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  uVar2 = *(uint *)(lVar3 + uVar7 * 4);
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  iVar4 = FUN_1448ad1d2(param_1,*(undefined4 *)(param_2 + 0x4f8),param_3);
  return iVar4 + uVar1;
}



// FUNCTION 1401a4538 FUN_1401a4538 body=825 status=ok
// SIG undefined FUN_1401a4538(void)

undefined8 FUN_1401a4538(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad1db8) && (FUN_144b3d300(&DAT_14cad1db8), DAT_14cad1db8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cad1db0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DistanceFieldShadowing",1);
    _Init_thread_footer(&DAT_14cad1db8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad1dc8) && (FUN_144b3d300(&DAT_14cad1dc8), DAT_14cad1dc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cad1dc0 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HeightFieldShadowing",1);
    _Init_thread_footer(&DAT_14cad1dc8);
  }
  if (((DAT_14cad1db0 == (longlong *)0x0) ||
      (iVar4 = (**(code **)(*DAT_14cad1db0 + 0xb0))(), iVar4 != 0)) ||
     ((DAT_14cad1dc0 != (longlong *)0x0 &&
      (iVar4 = (**(code **)(*DAT_14cad1dc0 + 0xb0))(), iVar4 != 0)))) {
    iVar4 = FUN_1448ad1d2(param_1,param_4,param_3);
    cVar2 = FUN_14498f84a();
    if (cVar2 == '\0') {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(DAT_14cad12e0 + 4);
      if (10000.0 <= fVar9) {
        fVar9 = 10000.0;
      }
      if (fVar9 <= 0.0001) {
        fVar9 = 0.0001;
      }
      fVar9 = fVar9 * *(float *)(param_1 + 0x2f8);
    }
    if (iVar4 == 0) {
      bVar7 = false;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad1d78) && (FUN_144b3d300(&DAT_14cad1d78), DAT_14cad1d78 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.DistanceScale",1);
        if (plVar5 == (longlong *)0x0) {
          DAT_14cad1d70 = 0;
        }
        else {
          DAT_14cad1d70 = (**(code **)(*plVar5 + 0x70))(plVar5);
        }
        _Init_thread_footer(&DAT_14cad1d78);
      }
      lVar1 = DAT_14cad1210;
      if (param_4 < 1) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)(DAT_14cad1d70 + 4);
        if (2.0 <= fVar10) {
          fVar10 = 2.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if ((char)param_3 == '\0') {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
              == 0x40000002) {
            uVar6 = 0;
          }
          else {
            bVar3 = FUN_144a61b4f();
            uVar6 = (ulonglong)(bVar3 ^ 1);
          }
          pfVar8 = (float *)(lVar1 + uVar6 * 4);
        }
        else {
          pfVar8 = (float *)(param_1 + 0x2e4);
        }
        fVar10 = fVar10 * *pfVar8;
      }
      bVar7 = fVar10 < fVar9;
    }
    if ((*(byte *)((longlong)&DAT_14ca814c8 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 0x3c + 1) & 2) !=
        0) {
      return CONCAT71((int7)((ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 0x3c
                            >> 8),(0.0 < fVar9 && iVar4 == 0) | bVar7);
    }
  }
  return 0;
}



// FUNCTION 1401a4871 FUN_1401a4871 body=2323 status=ok
// SIG undefined FUN_1401a4871(void)

void FUN_1401a4871(longlong param_1,longlong param_2,ulonglong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined8 **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  ulonglong *local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f8;
  int local_f4;
  longlong local_f0;
  ulonglong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((char)param_3[4] == '\x01') {
    pfVar12 = (float *)(param_3 + 2);
    pfVar19 = (float *)((longlong)param_3 + 0x14);
    pfVar17 = (float *)(param_3 + 3);
    pfVar18 = (float *)((longlong)param_3 + 0x1c);
  }
  else {
    pfVar12 = (float *)(param_2 + 0x6c);
    pfVar18 = (float *)(param_2 + 0x78);
    pfVar17 = (float *)(param_2 + 0x74);
    pfVar19 = (float *)(param_2 + 0x70);
  }
  fVar1 = *pfVar18;
  fVar2 = *pfVar17;
  fVar3 = *pfVar19;
  fVar4 = *pfVar12;
  local_f0 = param_2;
  local_e8 = param_3;
  if ((*(int *)((longlong)param_3 + 0xc) - *(int *)((longlong)param_3 + 4)) *
      ((int)param_3[1] - (int)*param_3) < 1) {
    if (*(int *)(param_2 + 0x68) == 1) {
      if ((*(float *)(param_2 + 0x6c) == fVar4) && (!NAN(*(float *)(param_2 + 0x6c)) && !NAN(fVar4))
         ) {
        if ((*(float *)(param_2 + 0x70) == fVar3) &&
           (!NAN(*(float *)(param_2 + 0x70)) && !NAN(fVar3))) {
          if ((*(float *)(param_2 + 0x74) == fVar2) &&
             (!NAN(*(float *)(param_2 + 0x74)) && !NAN(fVar2))) {
            if ((*(float *)(param_2 + 0x78) == fVar1) &&
               (!NAN(*(float *)(param_2 + 0x78)) && !NAN(fVar1))) {
              uVar20 = (uint)param_3[5];
              if (uVar20 != 0) {
                puVar8 = (ulonglong *)(param_1 + 0x70);
                local_118 = (ulonglong *)(param_1 + 0x98);
                local_108 = param_1 + 0x168;
                uVar11 = (uint)param_3[6];
                uVar21 = 0;
                do {
                  bVar24 = uVar11 != 0;
                  uVar11 = 0;
                  if (bVar24) {
                    local_110 = CONCAT44(local_110._4_4_,uVar21);
                    local_100 = CONCAT44(local_100._4_4_,*(int *)((longlong)param_3 + 0x24) + uVar21
                                        );
                    uVar20 = 0;
                    do {
                      iVar15 = *(int *)((longlong)param_3 + 0x2c);
                      puVar23 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                      puVar7 = puVar23 + 0x22;
                      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
                        FUN_140023dd8(puVar8,0x120);
                        puVar23 = (undefined8 *)(*puVar8 + 0xf & 0xfffffffffffffff0);
                        puVar7 = puVar23 + 0x22;
                      }
                      *puVar8 = (ulonglong)puVar7;
                      *puVar23 = &PTR_FUN_14a1fbd30;
                      lVar9 = 0x22;
                      do {
                        puVar7 = (undefined8 *)((longlong)puVar23 + lVar9 + -0x12);
                        *puVar7 = 0;
                        puVar7[1] = 0;
                        *(undefined4 *)((longlong)puVar23 + lVar9 + -2) = 0xffff0000;
                        lVar9 = lVar9 + 0x18;
                      } while (lVar9 != 0xe2);
                      *(undefined4 *)((longlong)puVar23 + 0xe4) = 0;
                      puVar23[0x1a] = 0;
                      puVar23[0x1b] = 0;
                      *(undefined2 *)(puVar23 + 0x1c) = 0;
                      *(undefined4 *)(puVar23 + 0x1d) = 0xffffffff;
                      *(undefined4 *)((longlong)puVar23 + 0xec) = 0xffffffff;
                      *(undefined4 *)(puVar23 + 0x1e) = 0xffffffff;
                      *(undefined4 *)((longlong)puVar23 + 0xf4) = 0xffffffff;
                      *(undefined4 *)(puVar23 + 0x1f) = 0;
                      *(undefined2 *)((longlong)puVar23 + 0xfc) = 0;
                      puVar23[0x20] = 0;
                      iVar22 = *(int *)(param_1 + 0xa0);
                      *(uint *)(param_1 + 0xa0) = iVar22 + 1U;
                      if (*(uint *)(param_1 + 0xa4) < iVar22 + 1U) {
                        FUN_1448cfae8(local_118,iVar22);
                      }
                      *(undefined8 **)(*local_118 + (longlong)iVar22 * 8) = puVar23;
                      puVar23[2] = local_f0;
                      puVar23[3] = 0;
                      *(undefined1 *)(puVar23 + 4) = 2;
                      *(char *)((longlong)puVar23 + 0x21) = (char)iVar15 + (char)uVar20;
                      *(short *)((longlong)puVar23 + 0x22) = (short)local_100;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c9c1080) &&
                         (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
                        FUN_145fddb1e(&local_c8);
                        local_120 = 0;
                        local_130 = 0;
                        local_150 = "Unknown";
                        local_160 = 0;
                        uStack_158 = 0;
                        local_168 = L"FRenderTargetParameters";
                        local_128 = 0;
                        local_140 = 0x100;
                        local_148 = 0x7af;
                        local_138 = &local_c8;
                        FUN_140b49562(&DAT_14c9c1000,0,1);
                        if (local_c8 != (undefined8 *)0x0) {
                          FUN_1400020a8();
                        }
                        atexit((_func_5014 *)&LAB_14321e2bb);
                        _Init_thread_footer(&DAT_14c9c1080);
                      }
                      FUN_140069376(param_1);
                      param_3 = local_e8;
                      puVar14 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                      puVar7 = puVar14 + 0x38;
                      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
                        FUN_140023dd8(puVar8,0x1c8);
                        puVar14 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
                        puVar7 = puVar14 + 0x38;
                      }
                      *puVar8 = (ulonglong)puVar7;
                      local_c0 = DAT_14c9c1048;
                      if (DAT_14c9c1048 != 0) {
                        LOCK();
                        *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
                        UNLOCK();
                      }
                      local_b8 = &DAT_14c9c1000;
                      local_168 = (wchar_t *)CONCAT71(local_168._1_7_,2);
                      local_c8 = puVar23 + 2;
                      FUN_140068f1a(puVar14);
                      *puVar14 = &PTR_FUN_14a38bfb0;
                      iVar15 = *(int *)(param_1 + 0x170);
                      *(uint *)(param_1 + 0x170) = iVar15 + 1U;
                      if (*(uint *)(param_1 + 0x174) < iVar15 + 1U) {
                        FUN_14470e57a(local_108,iVar15);
                      }
                      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar15 * 8) =
                           puVar14;
                      *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
                      FUN_140069100(param_1,puVar14);
                      uVar20 = uVar20 + 1;
                      uVar11 = (uint)param_3[6];
                    } while (uVar20 < uVar11);
                    uVar20 = (uint)param_3[5];
                    uVar21 = (uint)local_110;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar20);
              }
              goto LAB_1401a5123;
            }
          }
        }
      }
    }
    puVar8 = (ulonglong *)(param_2 + 0x84);
    puVar13 = &DAT_14c967818;
  }
  else {
    puVar8 = param_3 + 1;
    puVar13 = param_3;
  }
  uVar20 = (uint)param_3[5];
  if (uVar20 != 0) {
    local_100 = *puVar13;
    local_108 = *puVar8;
    local_110 = local_108 >> 0x20;
    local_d0 = local_100 >> 0x20;
    local_118 = (ulonglong *)(param_1 + 0x70);
    local_e0 = (longlong *)(param_1 + 0x98);
    local_d8 = param_1 + 0x168;
    uVar11 = (uint)param_3[6];
    uVar16 = 0;
    uVar21 = uVar11;
    do {
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        local_f4 = *(int *)((longlong)param_3 + 0x24) + uVar16;
        uVar20 = 0;
        local_f8 = uVar16;
        do {
          puVar8 = local_118;
          bVar10 = (byte)uVar20;
          uVar21 = (uint)local_110 >> (bVar10 & 0x1f);
          iVar22 = uVar21 + (uVar21 == 0);
          uVar21 = (uint)local_108 >> (bVar10 & 0x1f);
          iVar15 = uVar21 + (uVar21 == 0);
          uVar16 = (uint)local_d0 >> (bVar10 & 0x1f);
          uVar21 = (uint)local_100 >> (bVar10 & 0x1f);
          if (0 < (int)((iVar22 - uVar16) * (iVar15 - uVar21))) {
            iVar5 = *(int *)((longlong)param_3 + 0x2c);
            puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar7 = puVar23 + 0x22;
            if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
              FUN_140023dd8(local_118,0x120);
              puVar23 = (undefined8 *)(*puVar8 + 0xf & 0xfffffffffffffff0);
              puVar7 = puVar23 + 0x22;
            }
            *local_118 = (ulonglong)puVar7;
            *puVar23 = &PTR_FUN_14a1fbd30;
            lVar9 = 0x22;
            do {
              puVar7 = (undefined8 *)((longlong)puVar23 + lVar9 + -0x12);
              *puVar7 = 0;
              puVar7[1] = 0;
              *(undefined4 *)((longlong)puVar23 + lVar9 + -2) = 0xffff0000;
              lVar9 = lVar9 + 0x18;
            } while (lVar9 != 0xe2);
            *(undefined4 *)((longlong)puVar23 + 0xe4) = 0;
            puVar23[0x1a] = 0;
            puVar23[0x1b] = 0;
            *(undefined2 *)(puVar23 + 0x1c) = 0;
            *(undefined4 *)(puVar23 + 0x1d) = 0xffffffff;
            *(undefined4 *)((longlong)puVar23 + 0xec) = 0xffffffff;
            *(undefined4 *)(puVar23 + 0x1e) = 0xffffffff;
            *(undefined4 *)((longlong)puVar23 + 0xf4) = 0xffffffff;
            *(undefined4 *)(puVar23 + 0x1f) = 0;
            *(undefined2 *)((longlong)puVar23 + 0xfc) = 0;
            puVar23[0x20] = 0;
            iVar6 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
              FUN_1448cfae8(local_e0,iVar6);
            }
            param_3 = local_e8;
            *(undefined8 **)(*local_e0 + (longlong)iVar6 * 8) = puVar23;
            puVar23[2] = local_f0;
            puVar23[3] = 0;
            *(undefined1 *)(puVar23 + 4) = 0;
            *(byte *)((longlong)puVar23 + 0x21) = (char)iVar5 + bVar10;
            *(short *)((longlong)puVar23 + 0x22) = (short)local_f4;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1))
            {
              FUN_145fddb1e(&local_c8);
              local_120 = 0;
              local_130 = 0;
              local_150 = "Unknown";
              local_160 = 0;
              uStack_158 = 0;
              local_168 = L"FRenderTargetParameters";
              local_128 = 0;
              local_140 = 0x100;
              local_148 = 0x7af;
              local_138 = &local_c8;
              FUN_140b49562(&DAT_14c9c1000,0,1);
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              atexit((_func_5014 *)&LAB_14321e2bb);
              _Init_thread_footer(&DAT_14c9c1080);
            }
            FUN_140069376(param_1);
            puVar8 = local_118;
            puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar14 + 0x3c;
            if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
              FUN_140023dd8(local_118,0x1e8);
              puVar14 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
              puVar7 = puVar14 + 0x3c;
            }
            *local_118 = (ulonglong)puVar7;
            local_c0 = DAT_14c9c1048;
            if (DAT_14c9c1048 != 0) {
              LOCK();
              *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
              UNLOCK();
            }
            local_b8 = &DAT_14c9c1000;
            local_168 = (wchar_t *)CONCAT71(local_168._1_7_,2);
            local_c8 = puVar23 + 2;
            FUN_140068f1a(puVar14);
            *puVar14 = &PTR_FUN_14a38bfd0;
            puVar14[0x37] = puVar23 + 2;
            *(float *)(puVar14 + 0x38) = fVar4;
            *(float *)((longlong)puVar14 + 0x1c4) = fVar3;
            *(float *)(puVar14 + 0x39) = fVar2;
            *(float *)((longlong)puVar14 + 0x1cc) = fVar1;
            puVar14[0x3a] = CONCAT44(uVar16,uVar21);
            puVar14[0x3b] = CONCAT44(iVar22,iVar15);
            iVar15 = *(int *)(param_1 + 0x170);
            *(uint *)(param_1 + 0x170) = iVar15 + 1U;
            if (*(uint *)(param_1 + 0x174) < iVar15 + 1U) {
              FUN_14470e57a(local_d8,iVar15);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar15 * 8) = puVar14;
            *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
            FUN_140069100(param_1,puVar14);
            uVar11 = (uint)param_3[6];
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar11);
        uVar20 = (uint)param_3[5];
        uVar21 = uVar11;
        uVar16 = local_f8;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar20);
  }
LAB_1401a5123:
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a5186 FUN_1401a5186 body=55 status=ok
// SIG undefined FUN_1401a5186(void)

void FUN_1401a5186(longlong *param_1)

{
  FUN_1401a51be(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401a51be FUN_1401a51be body=533 status=ok
// SIG undefined FUN_1401a51be(void)

void FUN_1401a51be(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1401a534c;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1 + (longlong)iVar4 * 0x1a8;
      FUN_1401a53d4(lVar11 + 0x28);
      if (*(longlong *)(lVar11 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_1401a534c;
        }
        uVar14 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1401a534c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1401a6268(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c) && *(int *)((longlong)param_1 + 0x2c) < 0x81
     ) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1401a53d4 FUN_1401a53d4 body=242 status=ok
// SIG undefined FUN_1401a53d4(void)

void FUN_1401a53d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1780a0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)((longlong)param_1 + 0x124) != 0) {
    FUN_1447a08a2(param_1 + 0x23,0);
  }
  param_1[0x29] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x144)) {
    *(undefined4 *)((longlong)param_1 + 0x144) = 0x80;
    FUN_1446efbd8(param_1 + 0x25,0);
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1401a54c6(param_1 + 0x19);
  FUN_1401a54fe(param_1);
  return;
}



// FUNCTION 1401a54c6 FUN_1401a54c6 body=55 status=ok
// SIG undefined FUN_1401a54c6(void)

void FUN_1401a54c6(longlong *param_1)

{
  FUN_1401a576e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401a54fe FUN_1401a54fe body=451 status=ok
// SIG undefined FUN_1401a54fe(void)

void FUN_1401a54fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a178070;
  FUN_1401a56f4();
  if (param_1[0xf] != 0) {
    FUN_1401a5e92();
  }
  if ((((*(int *)((longlong)param_1 + 0x74) != 0) &&
       (uVar3 = *(uint *)(param_1 + 0xe), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x74))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    local_38 = param_1[5];
    local_48 = *(undefined4 *)(param_1 + 3);
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_40 = *(undefined4 *)(param_1 + 4);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x24);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x4e0));
    FUN_1401a5a40(lVar5 + 0x4e8,&local_48);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x4e0));
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1401a56c2(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a56c2 FUN_1401a56c2 body=49 status=ok
// SIG undefined FUN_1401a56c2(void)

void FUN_1401a56c2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401a56f4 FUN_1401a56f4 body=122 status=ok
// SIG undefined FUN_1401a56f4(void)

void FUN_1401a56f4(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x74))) &&
       (((*(uint *)(puVar2 + 1) & 0x10200000) == 0 && (*(int *)(param_1 + 0x6c) != 0)))) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x388))(plVar3,param_1 + 0x48);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 1401a576e FUN_1401a576e body=722 status=ok
// SIG undefined FUN_1401a576e(void)

void FUN_1401a576e(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_1401a58af;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar13 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar10 + 0x50 + lVar13) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + lVar13;
      *(undefined4 *)(lVar10 + 0x10) = 0;
      if (*(int *)(lVar10 + 0x14) != 0) {
        FUN_1447a08a2((longlong *)(lVar10 + 8),0);
      }
      *(undefined8 *)(lVar10 + 0x38) = 0xffffffff;
      *(undefined4 *)(lVar10 + 0x30) = 0;
      if (0x80 < *(uint *)(lVar10 + 0x34)) {
        *(undefined4 *)(lVar10 + 0x34) = 0x80;
        FUN_1446efbd8(lVar10 + 0x18,0);
      }
      if (*(longlong *)(lVar10 + 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar10 = (longlong)iVar6;
      uVar3 = puVar7[lVar10] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar13 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar10 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar5 - lVar10 == lVar13) goto LAB_1401a58af;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1401a58af:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1401a5a40 FUN_1401a5a40 body=962 status=ok
// SIG undefined FUN_1401a5a40(void)

undefined8 FUN_1401a5a40(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar12 = uVar6 >> 0xd ^
             ((uVar5 << 0x10 | uVar5 & 0xffff) - uVar6) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10)
             + ((uVar5 & 0xffff) >> 4);
    uVar16 = uVar12 << 8 ^ (-0x61c88647 - uVar6) - uVar12;
    uVar13 = uVar16 >> 0xd ^ (uVar6 - uVar12) - uVar16;
    uVar14 = uVar13 >> 0xc ^ (uVar12 - uVar16) - uVar13;
    uVar12 = uVar14 << 0x10 ^ (uVar16 - uVar13) - uVar14;
    uVar16 = uVar12 >> 5 ^ (uVar13 - uVar14) - uVar12;
    uVar13 = uVar16 >> 3 ^ (uVar14 - uVar12) - uVar16;
    uVar12 = uVar13 << 10 ^ (uVar12 - uVar16) - uVar13;
    uVar13 = uVar12 >> 0xf ^ uVar16 - (uVar13 + uVar12);
    uVar16 = uVar4 >> 0xd ^
             ((uVar3 << 0x10 | uVar3 & 0xffff) - uVar4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10)
             + ((uVar3 & 0xffff) >> 4);
    uVar12 = uVar16 << 8 ^ (-0x61c88647 - uVar4) - uVar16;
    uVar14 = uVar12 >> 0xd ^ (uVar4 - uVar16) - uVar12;
    uVar16 = uVar14 >> 0xc ^ (uVar16 - uVar12) - uVar14;
    uVar12 = uVar16 << 0x10 ^ (uVar12 - uVar14) - uVar16;
    uVar14 = uVar12 >> 5 ^ (uVar14 - uVar16) - uVar12;
    uVar16 = uVar14 >> 3 ^ (uVar16 - uVar12) - uVar14;
    uVar12 = uVar16 << 10 ^ (uVar12 - uVar14) - uVar16;
    uVar16 = uVar12 >> 0xf ^ uVar14 - (uVar16 + uVar12);
    uVar12 = uVar16 >> 0xd ^
             ((uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
             ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10)) - uVar16;
    uVar14 = uVar12 << 8 ^ (-0x61c88647 - uVar16) - uVar12;
    uVar17 = uVar14 >> 0xd ^ (uVar16 - uVar12) - uVar14;
    uVar16 = uVar17 >> 0xc ^ (uVar12 - uVar14) - uVar17;
    uVar12 = uVar16 << 0x10 ^ (uVar14 - uVar17) - uVar16;
    uVar14 = uVar12 >> 5 ^ (uVar17 - uVar16) - uVar12;
    uVar16 = uVar14 >> 3 ^ (uVar16 - uVar12) - uVar14;
    uVar12 = uVar16 << 10 ^ (uVar12 - uVar14) - uVar16;
    uVar12 = uVar13 >> 0xd ^ (uVar12 >> 0xf ^ uVar14 - (uVar16 + uVar12)) - uVar13;
    uVar16 = uVar12 << 8 ^ (-0x61c88647 - uVar13) - uVar12;
    uVar13 = uVar16 >> 0xd ^ (uVar13 - uVar12) - uVar16;
    uVar14 = uVar13 >> 0xc ^ (uVar12 - uVar16) - uVar13;
    uVar12 = uVar14 << 0x10 ^ (uVar16 - uVar13) - uVar14;
    uVar16 = uVar12 >> 5 ^ (uVar13 - uVar14) - uVar12;
    uVar13 = uVar16 >> 3 ^ (uVar14 - uVar12) - uVar16;
    uVar12 = uVar13 << 10 ^ (uVar12 - uVar16) - uVar13;
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)(uVar12 >> 0xf ^ uVar16 - (uVar13 + uVar12)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar7 = *param_1;
      do {
        lVar15 = (longlong)iVar10 * 0x30;
        lVar1 = lVar7 + lVar15;
        if ((((*(uint *)(lVar7 + lVar15) == uVar2) && (*(uint *)(lVar7 + 8 + lVar15) == uVar3)) &&
            (*(uint *)(lVar7 + 0xc + lVar15) == uVar4)) &&
           ((*(uint *)(lVar7 + 0x10 + lVar15) == uVar5 &&
            (*(uint *)(lVar7 + 0x14 + lVar15) == uVar6)))) {
          iVar8 = *(int *)((longlong)plVar11 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
          if (iVar8 == iVar10) {
            piVar9 = (int *)((longlong)plVar11 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
          }
          else {
            do {
              piVar9 = (int *)(lVar7 + (longlong)iVar8 * 0x30 + 0x28);
              iVar8 = *piVar9;
            } while (iVar8 != iVar10);
          }
          *piVar9 = *(int *)(lVar1 + 0x28);
          plVar11 = *(longlong **)(*param_1 + 0x20 + lVar15);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar9 = (int *)((longlong)plVar11 + 0xc);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          FUN_1401a5e02(param_1,iVar10,1);
          return 1;
        }
        iVar10 = *(int *)(lVar1 + 0x28);
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1401a5e02 FUN_1401a5e02 body=144 status=ok
// SIG undefined FUN_1401a5e02(void)

void FUN_1401a5e02(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401a5e92 FUN_1401a5e92 body=578 status=ok
// SIG undefined FUN_1401a5e92(void)

void FUN_1401a5e92(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  undefined8 ***local_70;
  longlong *local_68;
  undefined8 ***local_60;
  longlong *local_58;
  undefined8 ***local_50;
  longlong *local_48;
  undefined8 ***local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)((longlong)param_1 + 0x11) == '\0') && (*(char *)((longlong)param_1 + 0x12) == '\0')
     ) {
    if ((char)param_1[2] == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x11) = 1;
      local_48 = (longlong *)param_1[1];
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        local_50 = (undefined8 ****)0x0;
      }
      else {
        iVar6 = (int)local_48[1];
        local_50 = (undefined8 ****)0x0;
        do {
          if (iVar6 == 0) {
            local_48 = (longlong *)0x0;
            goto LAB_1401a5efc;
          }
          LOCK();
          iVar5 = (int)local_48[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(local_48 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar12);
        local_50 = (undefined8 ***)*param_1;
      }
LAB_1401a5efc:
      if ((longlong)(int)param_1[0xe] != 0) {
        lVar8 = param_1[0xd];
        lVar11 = (longlong)(int)param_1[0xe] << 5;
        do {
          lVar3 = param_1[0x13];
          local_60 = local_50;
          local_58 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          FUN_1448b035c(lVar3,lVar8,&local_60);
          lVar8 = lVar8 + 0x20;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
      }
      local_70 = &local_50;
      FUN_1401a60d6(param_1[0x13] + 0xc0,&local_70);
      plVar9 = (longlong *)param_1[0xf];
      uVar7 = 0;
      if ((longlong)(int)param_1[0x10] != 0) {
        plVar10 = plVar9 + (longlong)(int)param_1[0x10] * 2;
        do {
          lVar8 = *plVar9;
          plVar4 = (longlong *)plVar9[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_70 = local_50;
          local_68 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
            UNLOCK();
          }
          local_40 = &local_70;
          FUN_147d61682(lVar8 + 0x88,&local_40);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))();
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
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar10);
        uVar7 = (undefined4)param_1[0x10];
        plVar9 = (longlong *)param_1[0xf];
      }
      FUN_14068cddc(plVar9,uVar7);
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(int *)((longlong)param_1 + 0x84) != 0) {
        FUN_1461075e0(param_1 + 0xf,0);
      }
      plVar9 = local_48;
      param_1[0xc] = 0;
      param_1[0x13] = 0;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_48 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a60d6 FUN_1401a60d6 body=260 status=ok
// SIG undefined FUN_1401a60d6(void)

void FUN_1401a60d6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar11 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar9 = (longlong)iVar4;
      iVar12 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      plVar8 = plVar2 + lVar9 * 2 + 2;
      iVar5 = iVar4;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar6 = iVar12;
        if (lVar13 <= lVar10) break;
        lVar3 = *plVar8;
        iVar5 = iVar5 + 1;
        plVar8 = plVar8 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar12 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar11 != iVar4) {
          memmove(plVar2 + (longlong)iVar11 * 2,plVar2 + lVar9 * 2,(longlong)iVar12 << 4);
        }
        iVar11 = iVar11 + iVar12;
      }
      else {
        FUN_144936a5c(plVar2 + lVar9 * 2,iVar12);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 1401a61da FUN_1401a61da body=142 status=ok
// SIG undefined FUN_1401a61da(void)

void FUN_1401a61da(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1401a6268 FUN_1401a6268 body=326 status=ok
// SIG undefined FUN_1401a6268(void)

void FUN_1401a6268(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x1a8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401a62d4;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1401a62d4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x1a8)) {
      uVar5 = uVar3 / 0x1a8 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x1a8,8);
  }
  return;
}



// FUNCTION 1401a63ae FUN_1401a63ae body=126 status=ok
// SIG undefined FUN_1401a63ae(void)

void FUN_1401a63ae(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1448b09be(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x430) + 0x38,param_2,0);
      FUN_1448b09be(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x438) + 0x38,param_2,0);
    }
    FUN_1448b09be(param_1 + 0x1e8,param_2,0);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1448b09be(*(longlong *)(param_1 + 0x40),param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1401a642c FUN_1401a642c body=105 status=ok
// SIG undefined FUN_1401a642c(void)

ulonglong FUN_1401a642c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1401a6464;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1401a65d8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1401a6464:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1401a6496 FUN_1401a6496 body=322 status=ok
// SIG undefined FUN_1401a6496(void)

undefined8 FUN_1401a6496(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 6;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1401a64fb;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1401a64fb:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 6)) {
    uVar8 = uVar5 / 6 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,6,2);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 1401a65d8 FUN_1401a65d8 body=353 status=ok
// SIG undefined FUN_1401a65d8(void)

void FUN_1401a65d8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401a665d;
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
LAB_1401a665d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401a673a FUN_1401a673a body=306 status=ok
// SIG undefined FUN_1401a673a(void)

void FUN_1401a673a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 4;
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1401a679c;
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1401a679c:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 2)) {
    uVar6 = uVar3 >> 2 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,4,2);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1401a686c FUN_1401a686c body=369 status=ok
// SIG undefined FUN_1401a686c(void)

void FUN_1401a686c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1401a68f1;
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
LAB_1401a68f1:
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



// FUNCTION 1401a69de FUN_1401a69de body=1580 status=ok
// SIG undefined FUN_1401a69de(void)

void FUN_1401a69de(undefined8 *param_1,longlong param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  short sVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
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
  if (param_4 == -1 || param_3 == 0xffffffff) goto LAB_1401a6b3e;
  plVar2 = (longlong *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  param_2 = param_2 + 8;
  uVar6 = FUN_144741050(param_2);
  cVar5 = FUN_14487ac36(uVar6);
  if (cVar5 != '\0') {
    plVar7 = plVar2 + 2;
    iVar1 = (int)plVar2[3];
    lVar9 = (longlong)iVar1;
    *(uint *)(plVar2 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0x1c) < iVar1 + 1U) {
      FUN_141834b7c(plVar7,iVar1);
    }
LAB_1401a6a63:
    *(uint *)(*plVar7 + lVar9 * 4) = param_3 & 0xffff | param_4 << 0x10;
    goto LAB_1401a6b3e;
  }
  plVar7 = (longlong *)FUN_144741050(param_2);
  if ((short)plVar7[1] == 3) {
    lVar9 = DAT_14cb420c0;
    if (DAT_14cb420c0 != 0) {
LAB_1401a6acb:
      if (DAT_14c927740 == 0) {
        local_80 = &local_50;
        local_50 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_146856450;
        local_90 = FUN_1427b121c;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x0;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
        local_b0 = 8;
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        if (DAT_14c927740 == 0) goto LAB_1401a6af5;
      }
      if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
          == DAT_14c927740 + 0x30)) {
        plVar7 = plVar2 + 4;
        iVar1 = (int)plVar2[5];
        lVar9 = (longlong)iVar1;
        *(uint *)(plVar2 + 5) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0x2c) < iVar1 + 1U) {
          FUN_141834cde(plVar7,iVar1);
        }
        goto LAB_1401a6a63;
      }
    }
  }
  else {
    lVar9 = *plVar7;
    if (lVar9 != 0) {
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar9;
        FUN_1446f470e(local_58,L"Struct",1);
        local_88 = &LAB_146891313;
        local_90 = FUN_146272f63;
        local_a0 = L"Engine";
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
        local_a8 = 8;
        local_b0 = 0x10000020;
        local_b8._0_4_ = 8;
        local_80 = &local_60;
        FUN_14574b4b2(lVar9);
        DAT_14c948f88 = lVar9;
        if (DAT_14c927740 == 0) {
          local_80 = &local_50;
          local_50 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_146856450;
          local_90 = FUN_1427b121c;
          local_98 = L"Engine";
          local_a0 = (wchar_t *)0x0;
          local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
          local_b0 = 8;
          local_b8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar8 = DAT_14c948f88;
        lVar9 = DAT_14c927740;
        uVar6 = FUN_1400163b0();
        local_b8 = L"Struct";
        FUN_14574b446(uVar6,lVar8,lVar9,L"/Script/CoreUObject");
        lVar9 = *plVar7;
        if (lVar9 == 0) goto LAB_1401a6af5;
      }
      if ((((DAT_14c948f88 != 0) && (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 != 0)) &&
          (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30)) goto LAB_1401a6acb;
    }
  }
LAB_1401a6af5:
  plVar7 = (longlong *)FUN_144741050(param_2);
  uVar10 = *(ushort *)((longlong)plVar7 + 0xc);
  if (uVar10 == 0xffff) {
    lVar9 = *plVar7;
    if (lVar9 == 0) {
LAB_1401a6ecf:
      uVar10 = 0;
    }
    else {
      lVar8 = DAT_14cb420c0;
      if ((short)plVar7[1] == 3) goto LAB_1401a6c0f;
      if ((short)plVar7[1] == 1) goto LAB_1401a6ecf;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar9;
        FUN_1446f470e(local_58,L"Struct",1);
        local_88 = &LAB_146891313;
        local_90 = FUN_146272f63;
        local_a0 = L"Engine";
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
        local_a8 = 8;
        local_b0 = 0x10000020;
        local_b8._0_4_ = 8;
        local_80 = &local_60;
        FUN_14574b4b2(lVar9);
        DAT_14c948f88 = lVar9;
        if (DAT_14c927740 == 0) {
          local_80 = &local_50;
          local_50 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_146856450;
          local_90 = FUN_1427b121c;
          local_98 = L"Engine";
          local_a0 = (wchar_t *)0x0;
          local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
          local_b0 = 8;
          local_b8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar8 = DAT_14c948f88;
        lVar9 = DAT_14c927740;
        uVar6 = FUN_1400163b0();
        local_b8 = L"Struct";
        FUN_14574b446(uVar6,lVar8,lVar9,L"/Script/CoreUObject");
        lVar9 = *plVar7;
        if (lVar9 != 0) goto LAB_1401a6bdf;
LAB_1401a6ec8:
        lVar8 = 0;
      }
      else {
LAB_1401a6bdf:
        lVar8 = 0;
        if ((DAT_14c948f88 != 0) && (lVar3 = *(longlong *)(lVar9 + 0x10), lVar3 != 0)) {
          if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_1401a6ec8;
          lVar8 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
              DAT_14c948f88 + 0x30) {
            lVar8 = lVar9;
          }
        }
      }
LAB_1401a6c0f:
      sVar4 = (short)*(undefined4 *)(lVar8 + 0x5c);
      uVar10 = -sVar4 & ((short)*(undefined4 *)(lVar8 + 0x58) + sVar4) - 1U;
    }
    *(ushort *)((longlong)plVar7 + 0xc) = uVar10;
  }
  iVar1 = (int)plVar2[1];
  lVar9 = (longlong)iVar1;
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_141834e40(plVar2,iVar1);
  }
  lVar8 = *plVar2;
  *(short *)(lVar8 + lVar9 * 6) = (short)param_3;
  *(short *)(lVar8 + 2 + lVar9 * 6) = (short)param_4;
  *(ushort *)(lVar8 + 4 + lVar9 * 6) = uVar10;
LAB_1401a6b3e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401a700c FUN_1401a700c body=67 status=ok
// SIG undefined FUN_1401a700c(void)

undefined4 * FUN_1401a700c(undefined4 *param_1,uint param_2)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_1 = *(undefined4 *)(&DAT_14c892b40 + (ulonglong)param_2 * 4);
  return param_1;
}



// FUNCTION 1401a7050 FUN_1401a7050 body=306 status=ok
// SIG undefined FUN_1401a7050(void)

void FUN_1401a7050(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 4;
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1401a70b2;
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1401a70b2:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 2)) {
    uVar6 = uVar3 >> 2 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,4,2);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1401a719d FUN_1401a719d body=1654 status=ok
// SIG undefined FUN_1401a719d(void)

ulonglong FUN_1401a719d(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  LARGE_INTEGER LVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *lpTlsValue;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_c8 [40];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  QueryPerformanceCounter(&local_98);
  LVar4 = local_98;
  plVar16 = (longlong *)0xffffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    if ((double)param_2 / 10000000.0 <= 0.0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      dVar19 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
      uVar9 = (ulonglong)dVar19;
      plVar16 = (longlong *)
                ((longlong)(dVar19 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9);
    }
  }
  LVar3.QuadPart = (longlong)plVar16 + local_98.QuadPart;
  lVar17 = 0;
  do {
    while( true ) {
      if (*(longlong *)(param_1 + lVar17) != 0) {
        local_98 = LVar4;
        local_90 = plVar16;
        FUN_14002f804(*(longlong *)(param_1 + lVar17),&local_98,0);
      }
      if (plVar16 != (longlong *)0xffffffffffffffff) break;
      lVar17 = lVar17 + 8;
      if (lVar17 == 0x28) goto LAB_1401a72ab;
    }
    if (plVar16 == (longlong *)0x0) break;
    QueryPerformanceCounter(&local_88);
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x28 && (ulonglong)local_88 <= (ulonglong)LVar3);
LAB_1401a72ab:
  FUN_14470f0c8(&local_98,0);
  plVar1 = local_90;
  LVar3 = local_98;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
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
  puVar13 = (undefined8 *)lpTlsValue[1];
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*lpTlsValue;
    if (puVar13 == (undefined8 *)0x0) {
      uVar8 = DAT_14c896180.s.LowPart;
      LVar5 = DAT_14c896180;
      while (DAT_14c896180 = LVar5, local_88 = LVar5, (LVar5.QuadPart & 0x3ffffffU) != 0) {
        local_a0.QuadPart = (LVar5.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_a0.QuadPart >> 0x1a < (ulonglong)LVar5.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar9 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
        uVar15 = (ulonglong)(LVar5.s.LowPart & 0x3fff);
        local_a0.QuadPart =
             (ulonglong)local_a0 & 0xfffffffffc000000 |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 0x10 + uVar15 * 0x18);
        LOCK();
        bVar18 = local_88.QuadPart == DAT_14c896180.QuadPart;
        LVar5.QuadPart = local_a0.QuadPart;
        if (!bVar18) {
          LVar5 = DAT_14c896180;
        }
        DAT_14c896180 = LVar5;
        UNLOCK();
        if (bVar18) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + uVar15 * 0x18 + 0x10) = 0;
          puVar13 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 8 +
                     (ulonglong)(uVar8 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar8 & 0x3ffffff);
          lpTlsValue[1] = puVar13;
          if (puVar13 != (undefined8 *)0x0) goto LAB_1401a77ce;
          goto LAB_1401a77e7;
        }
        uVar8 = DAT_14c896180.s.LowPart;
        LVar5 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_1401a77e7:
      puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar13;
      iVar7 = 0xff;
      puVar14 = puVar13;
      do {
        puVar11 = puVar14 + 0x20;
        *puVar14 = puVar11;
        iVar7 = iVar7 + -1;
        puVar14 = puVar11;
      } while (iVar7 != 0);
    }
    else {
      lpTlsValue[1] = puVar13;
      puVar11 = lpTlsValue;
    }
    *puVar11 = 0;
LAB_1401a77ce:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar7 = 0xff;
  }
  else {
    iVar7 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar13;
  *(int *)(lpTlsValue + 2) = iVar7;
  *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
  puVar13[1] = &DAT_100000002;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)(puVar13 + 4) = 0xffffffff;
  puVar13[6] = 0;
  puVar13[7] = 0x100000000;
  *(undefined1 *)(puVar13 + 8) = 1;
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0xe800000000000020;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0x100000000;
  *(undefined2 *)(puVar13 + 0x14) = 0;
  LOCK();
  bVar18 = *(char *)(puVar13 + 8) == '\x01';
  if (bVar18) {
    *(char *)(puVar13 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_14008cdb0(puVar13 + 8);
  }
  *puVar13 = &PTR_FUN_14a29f720;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar17 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  iVar7 = 0;
  if (lVar17 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar17 + 0x30);
  }
  puVar13[0xf] = uVar10;
  puVar13[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 1;
  ((LARGE_INTEGER *)(puVar13 + 0x15))->QuadPart = (LONGLONG)LVar3;
  puVar13[0x16] = plVar1;
  *puVar13 = &PTR_FUN_14a29f710;
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + 5;
  UNLOCK();
  lVar17 = 0;
  do {
    lVar12 = *(longlong *)(param_1 + lVar17);
    if ((lVar12 == 0) || (cVar6 = FUN_1456bb142(lVar12 + 0x88,puVar13), cVar6 == '\0')) {
      iVar7 = iVar7 + 1;
    }
    else {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar13 + 5,lVar12);
    }
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x28);
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) - iVar7;
  UNLOCK();
  local_88.s.LowPart._0_1_ = 1;
  cVar6 = FUN_1447439e4(puVar13);
  uVar9 = CONCAT71((int7)((ulonglong)(puVar13 + 5) >> 8),1);
  if (cVar6 == '\0') {
    lVar17 = 0xffffffff;
    if (plVar16 != (longlong *)0xffffffffffffffff) {
      auVar22._8_4_ = (int)((ulonglong)plVar16 >> 0x20);
      auVar22._0_8_ = plVar16;
      auVar22._12_4_ = 0x45300000;
      dVar19 = (((double)CONCAT44(0x43300000,(int)plVar16) - 4503599627370496.0) +
               (auVar22._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_88);
      lVar17 = local_88.QuadPart - (longlong)LVar4;
      auVar21._8_4_ = (int)((ulonglong)lVar17 >> 0x20);
      auVar21._0_8_ = lVar17;
      auVar21._12_4_ = 0x45300000;
      auVar20._8_8_ = 0;
      auVar20._0_8_ =
           (dVar19 - (((double)CONCAT44(0x43300000,(int)lVar17) - 4503599627370496.0) +
                     (auVar21._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar21 = roundpd(auVar20,auVar20,1);
      lVar12 = ((longlong)auVar21._0_8_ + 9999) / 10000;
      if (0xfffffffe < lVar12) {
        lVar12 = 0xffffffff;
      }
      lVar17 = 0;
      if (0 < lVar12) {
        lVar17 = lVar12;
      }
    }
    uVar8 = (**(code **)(*(longlong *)local_98 + 0x20))(local_98.QuadPart,lVar17,0);
    uVar9 = (ulonglong)uVar8;
  }
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  plVar16 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a782f FUN_1401a782f body=1654 status=ok
// SIG undefined FUN_1401a782f(void)

ulonglong FUN_1401a782f(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  LARGE_INTEGER LVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *lpTlsValue;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_c8 [40];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  QueryPerformanceCounter(&local_98);
  LVar4 = local_98;
  plVar16 = (longlong *)0xffffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    if ((double)param_2 / 10000000.0 <= 0.0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      dVar19 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
      uVar9 = (ulonglong)dVar19;
      plVar16 = (longlong *)
                ((longlong)(dVar19 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9);
    }
  }
  LVar3.QuadPart = (longlong)plVar16 + local_98.QuadPart;
  lVar17 = 0;
  do {
    while( true ) {
      if (*(longlong *)(param_1 + lVar17) != 0) {
        local_98 = LVar4;
        local_90 = plVar16;
        FUN_14002f804(*(longlong *)(param_1 + lVar17),&local_98,0);
      }
      if (plVar16 != (longlong *)0xffffffffffffffff) break;
      lVar17 = lVar17 + 8;
      if (lVar17 == 0x30) goto LAB_1401a793d;
    }
    if (plVar16 == (longlong *)0x0) break;
    QueryPerformanceCounter(&local_88);
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x30 && (ulonglong)local_88 <= (ulonglong)LVar3);
LAB_1401a793d:
  FUN_14470f0c8(&local_98,0);
  plVar1 = local_90;
  LVar3 = local_98;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
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
  puVar13 = (undefined8 *)lpTlsValue[1];
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*lpTlsValue;
    if (puVar13 == (undefined8 *)0x0) {
      uVar8 = DAT_14c896180.s.LowPart;
      LVar5 = DAT_14c896180;
      while (DAT_14c896180 = LVar5, local_88 = LVar5, (LVar5.QuadPart & 0x3ffffffU) != 0) {
        local_a0.QuadPart = (LVar5.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_a0.QuadPart >> 0x1a < (ulonglong)LVar5.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar9 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
        uVar15 = (ulonglong)(LVar5.s.LowPart & 0x3fff);
        local_a0.QuadPart =
             (ulonglong)local_a0 & 0xfffffffffc000000 |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 0x10 + uVar15 * 0x18);
        LOCK();
        bVar18 = local_88.QuadPart == DAT_14c896180.QuadPart;
        LVar5.QuadPart = local_a0.QuadPart;
        if (!bVar18) {
          LVar5 = DAT_14c896180;
        }
        DAT_14c896180 = LVar5;
        UNLOCK();
        if (bVar18) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + uVar15 * 0x18 + 0x10) = 0;
          puVar13 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 8 +
                     (ulonglong)(uVar8 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar8 & 0x3ffffff);
          lpTlsValue[1] = puVar13;
          if (puVar13 != (undefined8 *)0x0) goto LAB_1401a7e60;
          goto LAB_1401a7e79;
        }
        uVar8 = DAT_14c896180.s.LowPart;
        LVar5 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_1401a7e79:
      puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar13;
      iVar7 = 0xff;
      puVar14 = puVar13;
      do {
        puVar11 = puVar14 + 0x20;
        *puVar14 = puVar11;
        iVar7 = iVar7 + -1;
        puVar14 = puVar11;
      } while (iVar7 != 0);
    }
    else {
      lpTlsValue[1] = puVar13;
      puVar11 = lpTlsValue;
    }
    *puVar11 = 0;
LAB_1401a7e60:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar7 = 0xff;
  }
  else {
    iVar7 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar13;
  *(int *)(lpTlsValue + 2) = iVar7;
  *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
  puVar13[1] = &DAT_100000002;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)(puVar13 + 4) = 0xffffffff;
  puVar13[6] = 0;
  puVar13[7] = 0x100000000;
  *(undefined1 *)(puVar13 + 8) = 1;
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0xe800000000000020;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0x100000000;
  *(undefined2 *)(puVar13 + 0x14) = 0;
  LOCK();
  bVar18 = *(char *)(puVar13 + 8) == '\x01';
  if (bVar18) {
    *(char *)(puVar13 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_14008cdb0(puVar13 + 8);
  }
  *puVar13 = &PTR_FUN_14a29fd50;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar17 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  iVar7 = 0;
  if (lVar17 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar17 + 0x30);
  }
  puVar13[0xf] = uVar10;
  puVar13[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 1;
  ((LARGE_INTEGER *)(puVar13 + 0x15))->QuadPart = (LONGLONG)LVar3;
  puVar13[0x16] = plVar1;
  *puVar13 = &PTR_FUN_14a29fd40;
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + 6;
  UNLOCK();
  lVar17 = 0;
  do {
    lVar12 = *(longlong *)(param_1 + lVar17);
    if ((lVar12 == 0) || (cVar6 = FUN_1456bb142(lVar12 + 0x88,puVar13), cVar6 == '\0')) {
      iVar7 = iVar7 + 1;
    }
    else {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar13 + 5,lVar12);
    }
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x30);
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) - iVar7;
  UNLOCK();
  local_88.s.LowPart._0_1_ = 1;
  cVar6 = FUN_1447439e4(puVar13);
  uVar9 = CONCAT71((int7)((ulonglong)(puVar13 + 5) >> 8),1);
  if (cVar6 == '\0') {
    lVar17 = 0xffffffff;
    if (plVar16 != (longlong *)0xffffffffffffffff) {
      auVar22._8_4_ = (int)((ulonglong)plVar16 >> 0x20);
      auVar22._0_8_ = plVar16;
      auVar22._12_4_ = 0x45300000;
      dVar19 = (((double)CONCAT44(0x43300000,(int)plVar16) - 4503599627370496.0) +
               (auVar22._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_88);
      lVar17 = local_88.QuadPart - (longlong)LVar4;
      auVar21._8_4_ = (int)((ulonglong)lVar17 >> 0x20);
      auVar21._0_8_ = lVar17;
      auVar21._12_4_ = 0x45300000;
      auVar20._8_8_ = 0;
      auVar20._0_8_ =
           (dVar19 - (((double)CONCAT44(0x43300000,(int)lVar17) - 4503599627370496.0) +
                     (auVar21._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar21 = roundpd(auVar20,auVar20,1);
      lVar12 = ((longlong)auVar21._0_8_ + 9999) / 10000;
      if (0xfffffffe < lVar12) {
        lVar12 = 0xffffffff;
      }
      lVar17 = 0;
      if (0 < lVar12) {
        lVar17 = lVar12;
      }
    }
    uVar8 = (**(code **)(*(longlong *)local_98 + 0x20))(local_98.QuadPart,lVar17,0);
    uVar9 = (ulonglong)uVar8;
  }
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  plVar16 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a7ea6 FUN_1401a7ea6 body=1039 status=ok
// SIG undefined FUN_1401a7ea6(void)

void FUN_1401a7ea6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_78;
  FUN_1448b284a(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar4 = FUN_14479fe53(*(undefined2 *)
                         (&DAT_14ca85070 +
                         (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8) *
                         2),1,1);
  FUN_1401a82b6(*(undefined8 *)(param_1 + 8),uVar4);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x2d8) == 0) goto LAB_1401a7f64;
  local_58 = param_1;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
LAB_1401a7f38:
    FUN_1401a83a4(&local_58);
LAB_1401a7f42:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
    if ((bVar2 & 1) == 0) goto LAB_1401a7f38;
    puVar7 = TlsGetValue(DAT_14c896140);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar7);
    }
    puVar10 = (undefined8 *)puVar7[1];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar7;
      if (puVar10 == (undefined8 *)0x0) {
        uVar6 = FUN_14470efbc(&DAT_14c896180);
        if (uVar6 == 0) {
          puVar7[1] = 0;
LAB_1401a8289:
          puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar7[1] = puVar10;
          iVar5 = 0xff;
          puVar11 = puVar10;
          do {
            puVar9 = puVar11 + 0x20;
            *puVar11 = puVar9;
            iVar5 = iVar5 + -1;
            puVar11 = puVar9;
          } while (iVar5 != 0);
          goto LAB_1401a8207;
        }
        puVar10 = *(undefined8 **)
                   (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar6 >> 0xe) * 8) + 8 +
                   (ulonglong)(uVar6 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar6);
        puVar7[1] = puVar10;
        if (puVar10 == (undefined8 *)0x0) goto LAB_1401a8289;
      }
      else {
        puVar7[1] = puVar10;
        puVar9 = puVar7;
LAB_1401a8207:
        *puVar9 = 0;
      }
      *(undefined4 *)(puVar7 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar7 + 2) + -1;
    }
    puVar7[1] = *puVar10;
    *(int *)(puVar7 + 2) = iVar5;
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar12 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar12) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14a2a1108;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar10[0xf] = uVar8;
    puVar10[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar10 + 0x1c) = (byte)~bVar2 & 1;
    *(undefined4 *)(puVar10 + 0x15) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar10 + 0xac) = local_58._4_4_;
    *(undefined4 *)(puVar10 + 0x16) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = uStack_4c;
    puVar10[0x17] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = &PTR_FUN_14a2a10f8;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_39 = 1;
    FUN_1447439e4(puVar10);
    if (puVar10 == (undefined8 *)0x0) goto LAB_1401a7f42;
    iVar5 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar5 * 8) = puVar10;
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  FUN_14473400f(0,0);
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2e8);
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2e8) = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
LAB_1401a7f64:
  if ((local_38 ^ (ulonglong)local_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a82b6 FUN_1401a82b6 body=237 status=ok
// SIG undefined FUN_1401a82b6(void)

void FUN_1401a82b6(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if ((lVar1 != 0) != (bool)param_2) {
    if (param_2 == '\0') {
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      if (lVar1 != 0) {
        FUN_14588e32e(lVar1);
        FUN_1400020a8(lVar1);
      }
      FUN_14112dd96(param_1 + 0xf0);
      FUN_14112dd96(param_1 + 0x1c8);
      if (*(int *)(param_1 + 0x2ac) < 0) {
        *(undefined4 *)(param_1 + 0x2a8) = 0;
        FUN_140549ad6(param_1 + 0x2a0,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x2a8) = 0;
      }
      *(undefined8 *)(param_1 + 0x2d0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c8) = 0;
    }
    else {
      uVar2 = FUN_14001cc68(0x80,0x10);
      FUN_1456d5ac2(uVar2);
      lVar1 = *(longlong *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar2;
      if (lVar1 != 0) {
        FUN_14588e32e(lVar1);
        FUN_1400020a8(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401a83a4 FUN_1401a83a4 body=1416 status=ok
// SIG undefined FUN_1401a83a4(void)

void FUN_1401a83a4(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar1;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar1;
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar4 = *param_1;
  lVar5 = param_1[2];
  if ((longlong)(int)lVar5 != 0) {
    lVar22 = param_1[1];
    lVar23 = 0;
    do {
      uVar15 = *(uint *)(lVar22 + lVar23);
      if ((-1 < (int)uVar15) &&
         (lVar14 = *(longlong *)(lVar4 + 8), (int)uVar15 < *(int *)(lVar14 + 0x2c8))) {
        lVar8 = lVar14 + 0x2b0;
        if (*(longlong *)(lVar14 + 0x2c0) != 0) {
          lVar8 = *(longlong *)(lVar14 + 0x2c0);
        }
        if ((*(uint *)(lVar8 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0) {
          lVar8 = *(longlong *)(lVar14 + 0x2a0) + (ulonglong)uVar15 * 0x28;
          iVar9 = *(int *)(lVar8 + 8);
          if (iVar9 != -1) {
            iVar17 = *(int *)(lVar8 + 0xc);
            iVar13 = *(int *)(lVar14 + 0xe0);
            *(uint *)(lVar14 + 0xe0) = iVar13 + 1U;
            if (*(uint *)(lVar14 + 0xe4) < iVar13 + 1U) {
              FUN_14017bd48(lVar14 + 0x88,(longlong)iVar13);
            }
            lVar16 = lVar14 + 0x88;
            if (*(longlong *)(lVar14 + 0xd8) != 0) {
              lVar16 = *(longlong *)(lVar14 + 0xd8);
            }
            *(ulonglong *)(lVar16 + (longlong)iVar13 * 8) = CONCAT44(iVar17,iVar9);
            *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) - iVar17;
            lVar14 = *(longlong *)(lVar4 + 8);
          }
          iVar9 = *(int *)(lVar8 + 0x10);
          if (iVar9 != -1) {
            iVar17 = *(int *)(lVar8 + 0x14);
            iVar13 = *(int *)(lVar14 + 0x1b8);
            *(uint *)(lVar14 + 0x1b8) = iVar13 + 1U;
            if (*(uint *)(lVar14 + 0x1bc) < iVar13 + 1U) {
              FUN_14017bd48(lVar14 + 0x160,(longlong)iVar13);
            }
            lVar16 = lVar14 + 0x160;
            if (*(longlong *)(lVar14 + 0x1b0) != 0) {
              lVar16 = *(longlong *)(lVar14 + 0x1b0);
            }
            *(ulonglong *)(lVar16 + (longlong)iVar13 * 8) = CONCAT44(iVar17,iVar9);
            *(int *)(lVar14 + 0xf0) = *(int *)(lVar14 + 0xf0) - iVar17;
            lVar14 = *(longlong *)(lVar4 + 8);
          }
          iVar9 = *(int *)(lVar8 + 0x18);
          if (iVar9 != -1) {
            iVar17 = *(int *)(lVar8 + 0x1c);
            iVar13 = *(int *)(lVar14 + 0x290);
            *(uint *)(lVar14 + 0x290) = iVar13 + 1U;
            if (*(uint *)(lVar14 + 0x294) < iVar13 + 1U) {
              FUN_14017bd48(lVar14 + 0x238,iVar13);
            }
            lVar8 = lVar14 + 0x238;
            if (*(longlong *)(lVar14 + 0x288) != 0) {
              lVar8 = *(longlong *)(lVar14 + 0x288);
            }
            *(ulonglong *)(lVar8 + (longlong)iVar13 * 8) = CONCAT44(iVar17,iVar9);
            *(int *)(lVar14 + 0x1c8) = *(int *)(lVar14 + 0x1c8) - iVar17;
            lVar14 = *(longlong *)(lVar4 + 8);
          }
          FUN_14726d980(lVar14 + 0x2a0,*(undefined4 *)(lVar22 + lVar23));
        }
      }
      lVar23 = lVar23 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar23);
  }
  iVar9 = DAT_14ca1a4c0;
  *(bool *)(lVar4 + 0x41) = DAT_14ca1a4c0 != 0;
  if (iVar9 == 1) {
    DAT_14ca1a4c0 = 0;
  }
  lVar5 = *(longlong *)(lVar4 + 8);
  FUN_144883418(lVar5 + 0x18);
  FUN_144883418(lVar5 + 0xf0);
  FUN_144883418(lVar5 + 0x1c8);
  cVar2 = *(char *)(DAT_14ca1a4d8 + 1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca1a654) && (FUN_144b3d300(&DAT_14ca1a654), DAT_14ca1a654 == -1)) {
    DAT_14ca1a650 = (int)((ulonglong)(longlong)*(int *)(DAT_14ca1a478 + 4) / 0x30);
    _Init_thread_footer(&DAT_14ca1a654);
  }
  iVar9 = *(int *)(lVar5 + 0x1cc + (ulonglong)*(byte *)(lVar5 + 0x298) * 4);
  uVar18 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
  lVar22 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  iVar9 = 1 << ((byte)lVar22 & 0x1f);
  if (cVar2 == '\0') {
    bVar6 = 0;
  }
  else {
    if (DAT_14ca1a4f0 == 0) {
      bVar6 = 0;
      if ((iVar9 <= DAT_14ca1a650) ||
         ((int)(longlong)((float)iVar9 * *(float *)(DAT_14ca1a508 + 4)) < *(int *)(lVar5 + 0x1c8)))
      goto LAB_1401a86c4;
    }
    else if (DAT_14ca1a4f0 == 1) {
      DAT_14ca1a4f0 = 0;
    }
    FUN_14112dd96(lVar5 + 0x18);
    FUN_14112dd96(lVar5 + 0xf0);
    FUN_14112dd96(lVar5 + 0x1c8);
    iVar9 = *(int *)(lVar5 + 0x2c8);
    bVar6 = 1;
    if (iVar9 != 0) {
      puVar19 = *(uint **)(lVar5 + 0x2c0);
      if (*(uint **)(lVar5 + 0x2c0) == (uint *)0x0) {
        puVar19 = (uint *)(lVar5 + 0x2b0);
      }
      uVar15 = *puVar19;
      if (uVar15 == 0) {
        iVar17 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar17 = iVar9 + -1;
        }
        uVar18 = 0;
        uVar20 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar20 = uVar18;
        }
        iVar17 = 0;
        do {
          if (uVar20 == uVar18) goto LAB_1401a86c4;
          iVar17 = iVar17 + 0x20;
          uVar15 = puVar19[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar18 = 0;
        iVar17 = 0;
      }
      uVar21 = (ulonglong)(-uVar15 & uVar15);
      uVar20 = uVar21 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar13 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar13 < iVar9) {
        uVar15 = 0xffffffff;
        do {
          lVar22 = *(longlong *)(lVar5 + 0x2a0) + (longlong)iVar13 * 0x28;
          if (*(int *)(lVar22 + 0x18) != -1) {
            *(undefined8 *)(lVar22 + 0x18) = 0xffffffff;
          }
          if (*(int *)(lVar22 + 0x10) != -1) {
            *(undefined8 *)(lVar22 + 0x10) = 0xffffffff;
          }
          if (*(int *)(lVar22 + 8) != -1) {
            *(undefined8 *)(lVar22 + 8) = 0xffffffff;
          }
          uVar15 = uVar15 & ~(uint)uVar21;
          puVar19 = *(uint **)(lVar5 + 0x2c0);
          if (*(uint **)(lVar5 + 0x2c0) == (uint *)0x0) {
            puVar19 = (uint *)(lVar5 + 0x2b0);
          }
          iVar3 = *(int *)(lVar5 + 0x2c8);
          iVar13 = (int)uVar18;
          lVar22 = (longlong)iVar13;
          uVar12 = puVar19[lVar22] & uVar15;
          if (uVar12 == 0) {
            iVar10 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar10 = iVar3 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar13) {
              iVar11 = iVar13;
            }
            if (iVar13 < iVar10) {
              lVar23 = 0;
              do {
                uVar12 = puVar19[lVar22 + lVar23 + 1];
                if (uVar12 != 0) {
                  uVar18 = (ulonglong)(iVar13 + (int)lVar23 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_1401a88e2;
                }
                iVar17 = iVar17 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar11 - lVar22 != lVar23);
              uVar15 = 0xffffffff;
              iVar13 = iVar11;
            }
            uVar18 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_1401a88e2:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar20 = uVar21 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar13 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar9);
      }
    }
  }
LAB_1401a86c4:
  *(byte *)(lVar4 + 0x42) = bVar6;
  *(byte *)(lVar4 + 0x41) = *(byte *)(lVar4 + 0x41) | bVar6;
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 1401a892c FUN_1401a892c body=139 status=ok
// SIG undefined FUN_1401a892c(void)

void FUN_1401a892c(uint *param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[4] == '\x01') {
    uVar1 = (ulonglong)((param_3 - 1) + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar2 & 0x1f);
  }
  local_1c = *param_1;
  if ((int)*param_1 < (int)param_3) {
    local_1c = param_3;
  }
  local_1c = local_1c & 0x3fffffff;
  local_10 = 0;
  local_18 = 0x10119;
  local_20 = 4;
  FUN_14485ad16(param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a89b8 FUN_1401a89b8 body=142 status=ok
// SIG undefined FUN_1401a89b8(void)

void FUN_1401a89b8(int *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[4] == '\x01') {
    uVar1 = (ulonglong)(param_3 + -1 + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar3 = *param_1;
  if (*param_1 < param_3) {
    iVar3 = param_3;
  }
  local_10 = 0;
  local_18 = 0x10119;
  local_20 = 4;
  local_1c = (uint)(iVar3 * 0x14) >> 2;
  FUN_14485ad16(param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a8a48 FUN_1401a8a48 body=142 status=ok
// SIG undefined FUN_1401a8a48(void)

void FUN_1401a8a48(int *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[4] == '\x01') {
    uVar1 = (ulonglong)(param_3 + -1 + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar3 = *param_1;
  if (*param_1 < param_3) {
    iVar3 = param_3;
  }
  local_10 = 0;
  local_18 = 0x10119;
  local_20 = 4;
  local_1c = (uint)(iVar3 * 0x30) >> 2;
  FUN_14485ad16(param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a8ad8 FUN_1401a8ad8 body=151 status=ok
// SIG undefined FUN_1401a8ad8(void)

void FUN_1401a8ad8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401a8b70 FUN_1401a8b70 body=22 status=ok
// SIG undefined FUN_1401a8b70(void)

undefined4 *
FUN_1401a8b70(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1401a8b86 FUN_1401a8b86 body=102 status=ok
// SIG undefined FUN_1401a8b86(void)

undefined8 FUN_1401a8b86(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14001cc68(0x280,0x10);
    FUN_147adcee8(uVar2,param_2,param_3);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_147d2d168(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  }
  return uVar2;
}



// FUNCTION 1401a8bec FUN_1401a8bec body=350 status=ok
// SIG undefined FUN_1401a8bec(void)

int FUN_1401a8bec(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
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
  code *local_20;
  ulonglong local_18;
  
  iVar5 = DAT_14c761558;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c761558 != 0x10000) && (DAT_14cae1360 == '\0')) {
    DAT_14cae1360 = '\x01';
  }
  if (DAT_14caff330 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_140eca530;
    local_48 = &LAB_147cc7387;
    local_50 = &LAB_146145a9c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x230;
    FUN_14081cfa3(L"/Script/Engine",L"RendererSettings",&DAT_14caff330,&DAT_147cc7386);
  }
  plVar1 = DAT_14caff330;
  lVar3 = DAT_14caff330[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14caff330 + 1000))(DAT_14caff330);
    lVar3 = plVar1[0x22];
  }
  iVar2 = *(int *)(lVar3 + 0x1c0);
  iVar4 = DAT_14c761558;
  if (iVar2 < DAT_14c761558) {
    iVar4 = iVar2;
  }
  if (iVar5 == 0x10000) {
    iVar4 = iVar2;
  }
  iVar5 = 0xc;
  if (0xc < iVar4) {
    iVar5 = iVar4;
  }
  iVar2 = 0x100;
  if (iVar5 < 0x100) {
    iVar2 = iVar5;
  }
  if (0 < DAT_14cae0df8) {
    iVar2 = iVar5;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a8d4c FUN_1401a8d4c body=69 status=ok
// SIG undefined FUN_1401a8d4c(void)

void FUN_1401a8d4c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1448d20d1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1401a9788(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1401a8d92 FUN_1401a8d92 body=2344 status=ok
// SIG undefined FUN_1401a8d92(void)

void FUN_1401a8d92(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  undefined **ppuVar15;
  code *pcVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_188 [32];
  code **local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  code *local_118;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  longlong *local_88;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  ppuVar15 = &PTR_FUN_14a915c30;
  if (*(char *)(*(longlong *)(param_3 + 2) + 0x21) == '\0') {
    ppuVar15 = &PTR_FUN_14a915b60;
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x1a0,0x10);
  local_168 = (code **)CONCAT71(local_168._1_7_,param_7);
  FUN_1417c9f30(puVar7,param_4,param_3[0xc],param_6);
  *puVar7 = ppuVar15;
  iVar14 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar14 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
    FUN_1456d5be2(param_1,iVar14);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar14 * 8) = puVar7;
  lVar8 = FUN_1401a8b86(param_2,param_4,param_5);
  local_128 = *(longlong *)(param_3 + 0xc);
  local_158 = *param_3;
  uStack_154 = param_3[1];
  uStack_150 = param_3[2];
  uStack_14c = param_3[3];
  local_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  uStack_13c = param_3[7];
  local_138 = param_3[8];
  uStack_134 = param_3[9];
  uStack_130 = param_3[10];
  uStack_12c = param_3[0xb];
  local_118 = (code *)0x0;
  local_108 = (longlong *)FUN_14001cc68(0x50,8);
  *local_108 = (longlong)&PTR_LAB_14aa98b10;
  local_108[1] = (longlong)puVar7;
  local_108[8] = local_128;
  *(undefined4 *)(local_108 + 6) = local_138;
  *(undefined4 *)((longlong)local_108 + 0x34) = uStack_134;
  *(undefined4 *)(local_108 + 7) = uStack_130;
  *(undefined4 *)((longlong)local_108 + 0x3c) = uStack_12c;
  *(undefined4 *)(local_108 + 4) = local_148;
  *(undefined4 *)((longlong)local_108 + 0x24) = uStack_144;
  *(undefined4 *)(local_108 + 5) = uStack_140;
  *(undefined4 *)((longlong)local_108 + 0x2c) = uStack_13c;
  *(undefined4 *)(local_108 + 2) = local_158;
  *(undefined4 *)((longlong)local_108 + 0x14) = uStack_154;
  *(undefined4 *)(local_108 + 3) = uStack_150;
  *(undefined4 *)((longlong)local_108 + 0x1c) = uStack_14c;
  local_108[9] = lVar8;
  if (local_108 + 1 == (longlong *)0x0) {
    pcVar16 = (code *)0x0;
  }
  else {
    pcVar16 = FUN_1436f48bc;
    local_118 = FUN_1436f48bc;
  }
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cb00c10 == '\0';
    if (bVar19) {
      DAT_14cb00c10 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cb00c10);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cb00c08) {
      local_98[0] = local_118;
      local_88 = local_108;
      local_108 = (longlong *)0x0;
      local_68 = local_e8;
      uStack_64 = uStack_e4;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      if (local_118 != (code *)0x0) {
        local_118 = (code *)0x0;
      }
      local_58 = 1;
      FUN_1401a96bc(&DAT_14cb00c08,local_98,L"InitGPUSkinVertexFactory",&DAT_14cb083bc);
LAB_1401a903d:
      (*(code *)(&PTR_LAB_14a3931f0)[local_58])();
      bVar19 = false;
    }
    else {
      if (DAT_14cb00c18 != 0) {
        local_98[0] = local_118;
        local_88 = local_108;
        local_108 = (longlong *)0x0;
        local_68 = local_e8;
        uStack_64 = uStack_e4;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        if (local_118 != (code *)0x0) {
          local_118 = (code *)0x0;
        }
        local_58 = 1;
        FUN_1401a98c8(&DAT_14cb00c08,local_98,L"InitGPUSkinVertexFactory",&DAT_14cb083bc);
        goto LAB_1401a903d;
      }
      bVar19 = true;
    }
    LOCK();
    bVar20 = DAT_14cb00c10 == '\x01';
    if (bVar20) {
      DAT_14cb00c10 = '\0';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_14008cdb0(&DAT_14cb00c10);
    }
    pcVar16 = local_118;
    if (!bVar19) goto LAB_1401a928b;
  }
  local_d8 = pcVar16;
  local_c8 = local_108;
  local_108 = (longlong *)0x0;
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  local_a8 = local_e8;
  uStack_a4 = uStack_e4;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  if (pcVar16 != (code *)0x0) {
    local_118 = (code *)0x0;
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar14 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar14 != 2) {
      if (iVar14 != 1) goto LAB_1401a90f9;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1401a90fe;
      goto LAB_1401a915c;
    }
LAB_1401a90fe:
    pcVar16 = local_d8;
    plVar9 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_b8;
    }
    uVar10 = (**(code **)(*plVar9 + 8))(plVar9);
LAB_1401a910e:
    (*pcVar16)(uVar10,&DAT_14ca85100);
  }
  else {
LAB_1401a90f9:
    if (iVar14 == 0x10) goto LAB_1401a90fe;
LAB_1401a915c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar14 = *(int *)(lVar8 + 0xc60), iVar14 != 2)) {
        if (iVar14 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_1401a967d;
        }
        goto LAB_1401a918d;
      }
LAB_1401a967d:
      pcVar16 = local_d8;
      plVar9 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_b8;
      }
      uVar10 = (**(code **)(*plVar9 + 8))();
      goto LAB_1401a910e;
    }
LAB_1401a918d:
    if (DAT_14ca9a43c == 0) {
      puVar7 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar7;
      if (puVar12 != (uint *)0x0) goto LAB_1401a9377;
      while( true ) {
        uVar4 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar4 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar4 | 1;
          __tlregdtor(&LAB_1436ef87f);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar7 = puVar11;
        FUN_140217a48(puVar7);
        puVar12 = (uint *)*puVar7;
LAB_1401a9377:
        puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar13 = (uint *)(puVar17 + 0x1e);
        uVar4 = puVar12[0x12];
        if (puVar13 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar4 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar4) != 0xffffffff) break;
          puVar12 = (uint *)*puVar7;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar7 = puVar12;
          puVar17 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
          puVar13 = (uint *)(puVar17 + 0x1e);
          uVar4 = 0;
          if (puVar13 <= puVar12 + 0x4000) {
            uVar4 = 1;
            goto LAB_1401a93f7;
          }
        }
      }
      uVar4 = uVar4 + 1;
LAB_1401a93f7:
      *(uint **)(puVar12 + 0x10) = puVar13;
      puVar12[0x12] = uVar4;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14aa98b00;
      puVar17[0x16] = local_d8;
      puVar17[0x18] = local_c8;
      local_c8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_a8;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_a4;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_a0;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_9c;
      *(undefined4 *)(puVar17 + 0x1a) = local_b8;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_b4;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_b0;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_ac;
      if (local_d8 != (code *)0x0) {
        local_d8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar4 = DAT_14c7585c8 >> 10 & 3;
        iVar14 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar14 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
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
      lVar8 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar8 == 0) {
        uVar3 = 1;
        if ((char)uVar18 != '\x06') {
          uVar3 = uVar18;
        }
        uVar18 = uVar3;
        uVar10 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x30);
      }
      puVar17[0xf] = uVar10;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar14;
      if (puVar17 == (undefined8 *)0x0) {
        local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
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
      local_98[0] = (code *)0x0;
      local_88 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_88 = (longlong)&PTR_LAB_14aa98ae0;
      local_88[2] = (longlong)local_d8;
      local_88[4] = (longlong)local_c8;
      local_c8 = (longlong *)0x0;
      *(undefined4 *)(local_88 + 8) = local_a8;
      *(undefined4 *)((longlong)local_88 + 0x44) = uStack_a4;
      *(undefined4 *)(local_88 + 9) = uStack_a0;
      *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_9c;
      *(undefined4 *)(local_88 + 6) = local_b8;
      *(undefined4 *)((longlong)local_88 + 0x34) = uStack_b4;
      *(undefined4 *)(local_88 + 7) = uStack_b0;
      *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_ac;
      if (local_d8 != (code *)0x0) {
        local_d8 = (code *)0x0;
      }
      if (local_88 != (longlong *)&DAT_fffffffffffffff0) {
        local_98[0] = FUN_1436f466a;
      }
      local_168 = local_98;
      FUN_14005a792(&DAT_14ca9a440,L"InitGPUSkinVertexFactory",&DAT_14cb083bc);
      if (local_98[0] != (code *)0x0) {
        plVar9 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar9 = local_78;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (local_d8 != (code *)0x0) {
    plVar9 = (longlong *)&local_b8;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1401a928b:
  if (local_118 != (code *)0x0) {
    plVar9 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_f8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a96bc FUN_1401a96bc body=204 status=ok
// SIG undefined FUN_1401a96bc(void)

void FUN_1401a96bc(longlong param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((param_2 != (undefined8 *)0x0) && (*(char *)(param_2 + 8) == '\x01')) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    if (lVar2 == 0) {
      uVar1 = FUN_14001cc68(0x308,0x10);
      FUN_14009016e(uVar1,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
      FUN_14002049c(uVar1,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18) = uVar1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)*param_2;
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x0001401a975a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar1,lVar2);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x0001401a9785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar1);
  return;
}



// FUNCTION 1401a9788 FUN_1401a9788 body=320 status=ok
// SIG undefined FUN_1401a9788(void)

void FUN_1401a9788(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401a97f1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1401a97f1:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1401a98c8 FUN_1401a98c8 body=1153 status=ok
// SIG undefined FUN_1401a98c8(void)

void FUN_1401a98c8(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_1[2];
  iVar7 = *(int *)(uVar3 + 0x10);
  *(uint *)(uVar3 + 0x10) = iVar7 + 1U;
  if (*(uint *)(uVar3 + 0x14) < iVar7 + 1U) {
    FUN_141790000((longlong *)(uVar3 + 8),iVar7);
  }
  lVar4 = *(longlong *)(uVar3 + 8);
  lVar15 = (longlong)iVar7 * 0x60;
  bVar2 = *(byte *)(param_2 + 0x40);
  *(byte *)(lVar4 + 0x40 + lVar15) = bVar2;
  (*(code *)(&PTR_LAB_14a392b30)[bVar2])(lVar4 + lVar15,param_2);
  *(undefined8 *)(lVar4 + 0x50 + lVar15) = param_3;
  *(undefined8 *)(lVar4 + 0x58 + lVar15) = param_4;
  LOCK();
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  UNLOCK();
  if (iVar7 == 0) {
    uVar3 = *param_1;
    uVar5 = param_1[2];
    puVar8 = TlsGetValue(DAT_14c896140);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar8);
    }
    puVar11 = (undefined8 *)puVar8[1];
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*puVar8;
      if (puVar11 == (undefined8 *)0x0) {
        uVar14 = (uint)DAT_14c896180;
        uVar6 = DAT_14c896180;
        while (DAT_14c896180 = uVar6, local_68 = uVar6, (uVar6 & 0x3ffffff) != 0) {
          local_70 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
          if (local_70 >> 0x1a < uVar6 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar13 = (ulonglong)((uVar14 & 0x3ffffff) >> 0xe);
          uVar16 = (ulonglong)((uint)uVar6 & 0x3fff);
          local_70 = local_70 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 0x10 + uVar16 * 0x18);
          LOCK();
          bVar17 = local_68 == DAT_14c896180;
          uVar6 = local_70;
          if (!bVar17) {
            uVar6 = DAT_14c896180;
          }
          DAT_14c896180 = uVar6;
          UNLOCK();
          if (bVar17) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + uVar16 * 0x18 + 0x10) = 0;
            puVar11 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 8 +
                       (ulonglong)(uVar14 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar14 & 0x3ffffff);
            puVar8[1] = puVar11;
            if (puVar11 != (undefined8 *)0x0) goto LAB_1401a9b05;
            goto LAB_1401a9d00;
          }
          uVar14 = (uint)DAT_14c896180;
          uVar6 = DAT_14c896180;
        }
        puVar8[1] = 0;
LAB_1401a9d00:
        puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar8[1] = puVar11;
        iVar7 = 0xff;
        puVar12 = puVar11;
        do {
          puVar9 = puVar12 + 0x20;
          *puVar12 = puVar9;
          iVar7 = iVar7 + -1;
          puVar12 = puVar9;
        } while (iVar7 != 0);
      }
      else {
        puVar8[1] = puVar11;
        puVar9 = puVar8;
      }
      *puVar9 = 0;
LAB_1401a9b05:
      *(undefined4 *)(puVar8 + 2) = 0x100;
      iVar7 = 0xff;
    }
    else {
      iVar7 = *(int *)(puVar8 + 2) + -1;
    }
    puVar8[1] = *puVar11;
    *(int *)(puVar8 + 2) = iVar7;
    *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
    puVar11[1] = &DAT_100000002;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined4 *)(puVar11 + 4) = 0xffffffff;
    puVar11[6] = 0;
    puVar11[7] = 0x100000000;
    *(undefined1 *)(puVar11 + 8) = 1;
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0xe800000000000020;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0x100000000;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    LOCK();
    bVar17 = *(char *)(puVar11 + 8) == '\x01';
    if (bVar17) {
      *(char *)(puVar11 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_14008cdb0(puVar11 + 8);
    }
    *puVar11 = &PTR_FUN_14a392b50;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar11[0xf] = uVar10;
    puVar11[0x10] = (uVar3 & 0x1fffffffffffff) << 6 | 0xc800000000000000;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    puVar11[0x15] = param_1;
    *puVar11 = &PTR_FUN_14a392b40;
    FUN_1400e88c2(puVar11,uVar5);
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(puVar11);
    puVar8 = *(undefined8 **)param_1[2];
    *(undefined8 **)param_1[2] = puVar11;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401a9d4a FUN_1401a9d4a body=1208 status=ok
// SIG undefined FUN_1401a9d4a(void)

void FUN_1401a9d4a(longlong param_1)

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
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x110) < 1) goto LAB_1401a9e67;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_70 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1401a9d9a;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1401a9d9f;
      goto LAB_1401a9dd0;
    }
  }
  else {
LAB_1401a9d9a:
    if (iVar6 != 0x10) {
LAB_1401a9dd0:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1401a9d9f;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1401a9d9f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1401a9f29;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1436ef87f);
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
LAB_1401a9f29:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
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
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1401a9fa9;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1401a9fa9:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa98470;
        puVar16[0x15] = local_70;
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa98410;
        local_68[0] = &LAB_1436f0900;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"InitGestaltIndirectArgsBuffer",&DAT_14cb08310);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1401a9e67;
    }
  }
LAB_1401a9d9f:
  FUN_1436f05be(&local_70,&DAT_14ca85100);
LAB_1401a9e67:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401aa203 FUN_1401aa203 body=458 status=ok
// SIG undefined FUN_1401aa203(void)

void FUN_1401aa203(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')) {
    uVar8 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar8) {
      lVar11 = uVar8 * 0x10 + -8;
      do {
        if (((*(int *)(*param_1 + lVar11) == 0) ||
            (plVar1 = *(longlong **)(*param_1 + -8 + lVar11), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x30))(), cVar4 == '\0')) {
          FUN_1408283bc(param_1,(int)uVar8 + -1);
          FUN_14082832e(param_1);
        }
        lVar11 = lVar11 + -0x10;
        bVar3 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
    }
    if (((int)param_2[1] == 0) || (plVar1 = (longlong *)*param_2, plVar1 == (longlong *)0x0)) {
      local_58 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
    }
    lVar6 = local_58;
    lVar11 = param_1[1];
    if ((longlong)(int)lVar11 == 0) {
      iVar7 = 0;
    }
    else {
      lVar2 = *param_1;
      lVar10 = 0;
      iVar9 = 0;
      do {
        if (*(int *)(lVar2 + 8 + lVar10) == 0) {
          lVar5 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar2 + lVar10);
          lVar5 = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
            lVar5 = local_50;
          }
        }
        if (lVar5 == lVar6) {
          iVar7 = (int)param_1[1];
          if (-1 < iVar9 && iVar9 < iVar7) goto LAB_1401aa31b;
          goto LAB_1401aa2e0;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar11 * 0x10 != lVar10);
      iVar7 = (int)param_1[1];
    }
LAB_1401aa2e0:
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1401aa50c(param_1,iVar7);
    }
    lVar11 = *param_1;
    lVar6 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar11 + lVar6) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar6) = 0;
    FUN_1401aa3da(lVar11 + lVar6,param_2);
  }
LAB_1401aa31b:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401aa3da FUN_1401aa3da body=305 status=ok
// SIG undefined FUN_1401aa3da(void)

void FUN_1401aa3da(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1401aa474;
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
LAB_1401aa44d:
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
      goto LAB_1401aa44d;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1401aa474;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1401aa474:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401aa50c FUN_1401aa50c body=269 status=ok
// SIG undefined FUN_1401aa50c(void)

void FUN_1401aa50c(longlong param_1,int param_2)

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



// FUNCTION 1401aa61a FUN_1401aa61a body=411 status=ok
// SIG undefined FUN_1401aa61a(void)

void FUN_1401aa61a(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar7 = (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x38))(param_1 + 0xc0);
  if (cVar7 != '\0') {
    local_48 = *(undefined8 *)(param_1 + 0x2d8);
    local_68 = &local_58;
    local_58 = -1;
    local_50 = 0xffffffff;
    local_40 = 1;
    local_3c = 0x100000000000;
    local_34 = 0;
    local_28 = 0;
    local_60 = 1;
    FUN_144760590(param_2,&local_68,0);
    goto LAB_1401aa6f4;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_1401aa6f4;
  (**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,&local_58);
  plVar2 = (longlong *)(param_1 + 0x2d8);
  if (plVar2 == &local_58) {
LAB_1401aa786:
    if (local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(local_58 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar8 = *plVar2;
    *plVar2 = local_58;
    local_58 = 0;
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_1401aa786;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x2e0);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 8))();
  uVar4 = *(undefined4 *)(lVar8 + 0x28);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 8))();
  uVar5 = *(undefined4 *)(lVar8 + 0x24);
  local_70 = *(longlong *)(param_1 + 0x2d8);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14011af16(uVar6,&local_70,uVar5,uVar4);
LAB_1401aa6f4:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401aa7ca FUN_1401aa7ca body=38 status=ok
// SIG undefined FUN_1401aa7ca(void)

undefined8 FUN_1401aa7ca(undefined8 param_1,int param_2)

{
  FUN_1401aa7f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401aa7f0 FUN_1401aa7f0 body=83 status=ok
// SIG undefined FUN_1401aa7f0(void)

void FUN_1401aa7f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149f6de10;
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1401aa844(param_1);
  return;
}



// FUNCTION 1401aa844 FUN_1401aa844 body=106 status=ok
// SIG undefined FUN_1401aa844(void)

void FUN_1401aa844(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f62910;
  if (param_1[1] != 0) {
    FUN_1448b4452(param_1[1] + 0x70,param_1);
    FUN_1401aa8ae(param_1[1] + 0x70,param_1);
  }
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x0001401aa8a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401aa8ae FUN_1401aa8ae body=96 status=ok
// SIG undefined FUN_1401aa8ae(void)

void FUN_1401aa8ae(longlong param_1,undefined8 param_2)

{
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    FUN_1401aa90e(*(longlong *)(param_1 + 0x28) + 0x160,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001401aa8ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    return;
  }
  FUN_1401aa90e(*(longlong *)(param_1 + 0x28) + 0x160,param_2);
  return;
}



// FUNCTION 1401aa90e FUN_1401aa90e body=174 status=ok
// SIG undefined FUN_1401aa90e(void)

void FUN_1401aa90e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar4 = *(uint *)(param_2 + 0x18);
  if ((ulonglong)uVar4 == 0xffffffff) {
    return;
  }
  lVar1 = param_1 + (ulonglong)*(uint *)(param_2 + 0x1c) * 0x10;
  plVar7 = (longlong *)(lVar1 + 0x38);
  iVar5 = *(int *)(lVar1 + 0x40);
  if (uVar4 == iVar5 - 1U) {
    lVar6 = *(longlong *)(*plVar7 + -0x10 + (longlong)iVar5 * 0x20);
    puVar3 = (undefined8 *)(*plVar7 + -0x10 + (longlong)iVar5 * 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_1401aab3c(plVar7,*(int *)(lVar1 + 0x40) + -1);
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
    }
  }
  else {
    if (((int)uVar4 < 0) || (iVar5 <= (int)uVar4)) goto LAB_1401aa982;
    FUN_1401aa9fc(plVar7,uVar4);
    FUN_1401aa9bc(plVar7);
    *(uint *)(*(longlong *)(*plVar7 + (ulonglong)uVar4 * 0x20) + 0x18) = uVar4;
  }
  piVar2 = (int *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x1c) * 4);
  *piVar2 = *piVar2 + -1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
LAB_1401aa982:
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 1401aa9bc FUN_1401aa9bc body=64 status=ok
// SIG undefined FUN_1401aa9bc(void)

void FUN_1401aa9bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1401aaa66(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1401aa9fc FUN_1401aa9fc body=106 status=ok
// SIG undefined FUN_1401aa9fc(void)

void FUN_1401aa9fc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x20 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x20 + lVar1),(longlong)iVar3 << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1401aaa66 FUN_1401aaa66 body=213 status=ok
// SIG undefined FUN_1401aaa66(void)

ulonglong FUN_1401aaa66(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x400) {
            uVar1 = (ulonglong)
                    (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1401aab3c FUN_1401aab3c body=92 status=ok
// SIG undefined FUN_1401aab3c(void)

void FUN_1401aab3c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1401aab98 FUN_1401aab98 body=87 status=ok
// SIG undefined FUN_1401aab98(void)

void FUN_1401aab98(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  lVar5 = (longlong)param_2 * 0x20;
  lVar2 = lVar3 + lVar5;
  puVar4 = *(undefined8 **)(lVar3 + lVar5);
  *(undefined8 *)(lVar3 + lVar5) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined4 *)(lVar2 + 8) = 0xffffffff;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  return;
}



// FUNCTION 1401aabf0 FUN_1401aabf0 body=1953 status=ok
// SIG undefined FUN_1401aabf0(void)

void FUN_1401aabf0(uint *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  uVar15 = *param_1;
  if ((uVar15 & 1) != 0) {
    lVar16 = *param_2;
    lVar17 = (longlong)param_3 * 0x30;
    lVar18 = (longlong)param_4 * 0x30;
    uVar10 = *(undefined8 *)(lVar16 + lVar17);
    uVar11 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar17);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined4 *)(lVar16 + 0x20 + lVar17);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)(lVar16 + 0x20 + lVar18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar16 + lVar18) = uVar10;
    ((undefined8 *)(lVar16 + lVar18))[1] = uVar11;
    lVar16 = *param_2;
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 & 2) != 0) {
    lVar16 = param_2[2];
    lVar17 = (longlong)param_3 * 0x18;
    *(undefined8 *)(lVar16 + 0x10 + (longlong)param_4 * 0x18) =
         *(undefined8 *)(lVar16 + 0x10 + lVar17);
    uVar10 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar19 = (undefined8 *)(lVar16 + (longlong)param_4 * 0x18);
    *puVar19 = *(undefined8 *)(lVar16 + lVar17);
    puVar19[1] = uVar10;
    lVar16 = param_2[2];
    puVar19 = (undefined8 *)(lVar16 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 & 4) != 0) {
    lVar16 = param_2[4];
    lVar17 = (longlong)param_3 * 0x30;
    lVar18 = (longlong)param_4 * 0x30;
    uVar10 = *(undefined8 *)(lVar16 + lVar17);
    uVar11 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar17);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined4 *)(lVar16 + 0x20 + lVar17);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)(lVar16 + 0x20 + lVar18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar16 + lVar18) = uVar10;
    ((undefined8 *)(lVar16 + lVar18))[1] = uVar11;
    lVar16 = param_2[4];
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 & 8) != 0) {
    lVar16 = param_2[6];
    lVar17 = (longlong)param_3 * 0x2c;
    lVar18 = (longlong)param_4 * 0x2c;
    uVar10 = *(undefined8 *)(lVar16 + lVar17);
    uVar11 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar17);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined4 *)(lVar16 + 0x1c + lVar17);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)(lVar16 + 0x1c + lVar18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar16 + lVar18) = uVar10;
    ((undefined8 *)(lVar16 + lVar18))[1] = uVar11;
    lVar16 = param_2[6];
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = 0x3f80000000000000;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    *(undefined8 *)(lVar16 + 0x18 + lVar17) = 0;
    *(undefined8 *)(lVar16 + 0x20 + lVar17) = 0xffff000000000000;
    *(undefined1 *)(lVar16 + 0x28 + lVar17) = 0xff;
    *(undefined1 *)(lVar16 + 0x2b + lVar17) = 0;
    *(undefined2 *)(lVar16 + 0x29 + lVar17) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 & 0x10) != 0) {
    FUN_146de792a((longlong)param_4 * 0x20 + param_2[8],(longlong)param_3 * 0x20 + param_2[8]);
    FUN_1401aab98(param_2 + 8,param_3);
    uVar15 = *param_1;
  }
  if ((uVar15 & 0x20) != 0) {
    lVar17 = (longlong)param_3 * 0x70;
    puVar19 = (undefined8 *)(param_2[10] + lVar17);
    puVar20 = (undefined8 *)((longlong)param_4 * 0x70 + param_2[10]);
    for (lVar16 = 0xd; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar20 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
    }
    lVar16 = param_2[10];
    puVar19 = (undefined8 *)(lVar16 + 0x50 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x40 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x30 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    *(undefined8 *)(lVar16 + 0x60 + lVar17) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 & 0x40) != 0) {
    lVar16 = param_2[0xc];
    lVar17 = (longlong)param_3 * 0x40;
    lVar18 = (longlong)param_4 * 0x40;
    *(undefined8 *)(lVar16 + 0x30 + lVar18) = *(undefined8 *)(lVar16 + 0x30 + lVar17);
    uVar10 = *(undefined8 *)(lVar16 + lVar17);
    uVar11 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    uVar12 = *puVar19;
    uVar13 = puVar19[1];
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    uVar14 = puVar19[1];
    puVar20 = (undefined8 *)(lVar16 + 0x20 + lVar18);
    *puVar20 = *puVar19;
    puVar20[1] = uVar14;
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar18);
    *puVar19 = uVar12;
    puVar19[1] = uVar13;
    *(undefined8 *)(lVar16 + lVar18) = uVar10;
    ((undefined8 *)(lVar16 + lVar18))[1] = uVar11;
    lVar16 = param_2[0xc];
    *(undefined8 *)(lVar16 + 0x20 + lVar17) = 0;
    *(undefined4 *)(lVar16 + 0x28 + lVar17) = 0;
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = 0;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    *(undefined8 *)(lVar16 + 0x2c + lVar17) = 0x3f800000;
    uVar15 = *param_1;
  }
  if ((char)uVar15 < '\0') {
    memcpy((void *)((longlong)param_4 * 0x310 + param_2[0xe]),
           (void *)(param_2[0xe] + (longlong)param_3 * 0x310),0x310);
    FUN_1408c9ee8(&local_348);
    memcpy((void *)((longlong)param_3 * 0x310 + param_2[0xe]),&local_348,0x310);
    uVar15 = *param_1;
  }
  if ((uVar15 >> 8 & 1) != 0) {
    puVar19 = (undefined8 *)(param_2[0x10] + (longlong)param_3 * 0x10);
    uVar10 = puVar19[1];
    puVar20 = (undefined8 *)(param_2[0x10] + (longlong)param_4 * 0x10);
    *puVar20 = *puVar19;
    puVar20[1] = uVar10;
    puVar19 = (undefined8 *)(param_2[0x10] + (longlong)param_3 * 0x10);
    *puVar19 = 0;
    puVar19[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 9 & 1) != 0) {
    puVar19 = (undefined8 *)(param_2[0x12] + (longlong)param_3 * 0x10);
    uVar10 = puVar19[1];
    puVar20 = (undefined8 *)(param_2[0x12] + (longlong)param_4 * 0x10);
    *puVar20 = *puVar19;
    puVar20[1] = uVar10;
    puVar19 = (undefined8 *)(param_2[0x12] + (longlong)param_3 * 0x10);
    *puVar19 = 0;
    puVar19[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 10 & 1) != 0) {
    lVar17 = (longlong)param_3 * 0x88;
    memcpy((void *)((longlong)param_4 * 0x88 + param_2[0x14]),(void *)(param_2[0x14] + lVar17),0x88)
    ;
    lVar16 = param_2[0x14];
    *(undefined1 *)(lVar16 + lVar17) = 0;
    *(undefined8 *)(lVar16 + 8 + lVar17) = 0x3ff0000000000000;
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = 0x3ff0000000000000;
    puVar19 = (undefined8 *)(lVar16 + 0x38 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x28 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x18 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + 0x48 + lVar17) = 0;
    *(undefined8 *)(lVar16 + 0x50 + lVar17) = 0x3ff0000000000000;
    puVar19 = (undefined8 *)(lVar16 + 0x78 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x68 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x58 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0xb & 1) != 0) {
    *(undefined8 *)(param_2[0x16] + (longlong)param_4 * 8) =
         *(undefined8 *)(param_2[0x16] + (longlong)param_3 * 8);
    *(undefined8 *)(param_2[0x16] + (longlong)param_3 * 8) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0xc & 1) != 0) {
    lVar16 = param_2[0x18];
    lVar17 = (longlong)param_3 * 0x18;
    *(undefined8 *)(lVar16 + 0x10 + (longlong)param_4 * 0x18) =
         *(undefined8 *)(lVar16 + 0x10 + lVar17);
    uVar10 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar19 = (undefined8 *)(lVar16 + (longlong)param_4 * 0x18);
    *puVar19 = *(undefined8 *)(lVar16 + lVar17);
    puVar19[1] = uVar10;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    uVar3 = (undefined4)DAT_14c8464e0;
    lVar16 = param_2[0x18];
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = DAT_14c8464f0;
    puVar1 = (undefined4 *)(lVar16 + lVar17);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0xd & 1) != 0) {
    *(undefined8 *)(param_2[0x1a] + (longlong)param_4 * 8) =
         *(undefined8 *)(param_2[0x1a] + (longlong)param_3 * 8);
    *(undefined8 *)(param_2[0x1a] + (longlong)param_3 * 8) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0xe & 1) != 0) {
    lVar16 = (longlong)param_3 * 0x60;
    puVar19 = (undefined8 *)(param_2[0x1c] + lVar16);
    puVar20 = (undefined8 *)((longlong)param_4 * 0x60 + param_2[0x1c]);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar20 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
    }
    lVar17 = param_2[0x1c];
    *(undefined8 *)(lVar17 + lVar16) = 0;
    ((undefined8 *)(lVar17 + lVar16))[1] = 0;
    *(undefined8 *)(lVar17 + 0x10 + lVar16) = 0x3ff0000000000000;
    *(undefined8 *)(lVar17 + 0x18 + lVar16) = 0;
    *(undefined8 *)(lVar17 + 0x20 + lVar16) = 0x4097700000000000;
    *(undefined8 *)(lVar17 + 0x28 + lVar16) = 0x4059000000000000;
    *(undefined8 *)(lVar17 + 0x30 + lVar16) = 0x408f400000000000;
    *(undefined8 *)(lVar17 + 0x38 + lVar16) = 0x40b3880000000000;
    *(undefined8 *)(lVar17 + 0x40 + lVar16) = 0x3fe44189374bc6a8;
    *(undefined8 *)(lVar17 + 0x48 + lVar16) = 0;
    *(undefined8 *)(lVar17 + 0x50 + lVar16) = 0x4000000000000000;
    *(undefined8 *)(lVar17 + 0x58 + lVar16) = 0;
    uVar15 = *param_1;
  }
  if ((short)uVar15 < 0) {
    lVar16 = (longlong)param_3 * 0x48;
    puVar19 = (undefined8 *)(param_2[0x1e] + lVar16);
    puVar20 = (undefined8 *)(param_2[0x1e] + (longlong)param_4 * 0x48);
    for (lVar17 = 9; uVar10 = DAT_14c8464f0, uVar6 = DAT_14c8463c0._4_4_,
        uVar5 = (undefined4)DAT_14c8463c0, uVar4 = DAT_14c8463b8._4_4_,
        uVar3 = (undefined4)DAT_14c8463b8, lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar20 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
    }
    local_338 = DAT_14c8463c8;
    local_348 = (undefined4)DAT_14c8463b8;
    uStack_344 = DAT_14c8463b8._4_4_;
    uStack_340 = (undefined4)DAT_14c8463c0;
    uStack_33c = DAT_14c8463c0._4_4_;
    uStack_320 = DAT_14c8464f0;
    uStack_330 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_328 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    lVar17 = param_2[0x1e];
    puVar19 = (undefined8 *)(lVar17 + 0x10 + lVar16);
    *puVar19 = DAT_14c8463c8;
    puVar19[1] = uStack_330;
    puVar19 = (undefined8 *)(lVar17 + 0x20 + lVar16);
    *puVar19 = uStack_328;
    puVar19[1] = uVar10;
    puVar1 = (undefined4 *)(lVar17 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar17 + 0x30 + lVar16) = 0;
    *(undefined8 *)(lVar17 + 0x38 + lVar16) = 0x4202a05f20000000;
    *(undefined8 *)(lVar17 + 0x40 + lVar16) = 0x3fe44189374bc6a8;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0x10 & 1) != 0) {
    *(undefined8 *)(param_2[0x20] + (longlong)param_4 * 8) =
         *(undefined8 *)(param_2[0x20] + (longlong)param_3 * 8);
    *(undefined8 *)(param_2[0x20] + (longlong)param_3 * 8) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0x11 & 1) != 0) {
    *(undefined8 *)(param_2[0x22] + (longlong)param_4 * 8) =
         *(undefined8 *)(param_2[0x22] + (longlong)param_3 * 8);
    *(undefined8 *)(param_2[0x22] + (longlong)param_3 * 8) = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0x12 & 1) != 0) {
    lVar16 = param_2[0x24];
    lVar17 = (longlong)param_3 * 0x30;
    lVar18 = (longlong)param_4 * 0x30;
    uVar10 = *(undefined8 *)(lVar16 + lVar17);
    uVar11 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    uVar12 = *puVar19;
    uVar13 = puVar19[1];
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    uVar14 = puVar19[1];
    puVar20 = (undefined8 *)(lVar16 + 0x20 + lVar18);
    *puVar20 = *puVar19;
    puVar20[1] = uVar14;
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar18);
    *puVar19 = uVar12;
    puVar19[1] = uVar13;
    *(undefined8 *)(lVar16 + lVar18) = uVar10;
    ((undefined8 *)(lVar16 + lVar18))[1] = uVar11;
    lVar16 = param_2[0x24];
    puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + lVar17) = 0;
    ((undefined8 *)(lVar16 + lVar17))[1] = 0;
    uVar15 = *param_1;
  }
  if ((uVar15 >> 0x13 & 1) != 0) {
    lVar16 = param_2[0x26];
    lVar17 = (longlong)param_3 * 0x18;
    *(undefined8 *)(lVar16 + 0x10 + (longlong)param_4 * 0x18) =
         *(undefined8 *)(lVar16 + 0x10 + lVar17);
    uVar10 = ((undefined8 *)(lVar16 + lVar17))[1];
    puVar19 = (undefined8 *)(lVar16 + (longlong)param_4 * 0x18);
    *puVar19 = *(undefined8 *)(lVar16 + lVar17);
    puVar19[1] = uVar10;
    lVar16 = param_2[0x26];
    puVar19 = (undefined8 *)(lVar16 + lVar17);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(lVar16 + 0x10 + lVar17) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ab3bc FUN_1401ab3bc body=145 status=ok
// SIG undefined FUN_1401ab3bc(void)

void FUN_1401ab3bc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x20))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1408e39ce(param_1,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x28))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1401ab44f thunk_FUN_1401ab454 body=5 status=ok
// SIG undefined thunk_FUN_1401ab454(void)

undefined * thunk_FUN_1401ab454(void)

{
  undefined1 auStack_98 [32];
  wchar_t *pwStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  longlong *plStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  longlong alStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c09a0) {
    FUN_144b3d300(&DAT_14c9c09a0);
    if (DAT_14c9c09a0 == -1) {
      FUN_1456d5dba(alStack_20);
      uStack_30 = 0;
      uStack_40 = 0;
      pcStack_60 = "Unknown";
      uStack_70 = 0;
      uStack_68 = 0;
      pwStack_78 = L"FDistanceFieldObjectBufferParameters";
      uStack_38 = 0;
      uStack_50 = 0x30;
      uStack_58 = 0x40;
      plStack_48 = alStack_20;
      FUN_140b49562(&DAT_14c9c0920,0,1);
      if (alStack_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6b6);
      _Init_thread_footer(&DAT_14c9c09a0);
    }
  }
  if ((uStack_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ab454 FUN_1401ab454 body=265 status=ok
// SIG undefined FUN_1401ab454(void)

undefined * FUN_1401ab454(void)

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
              0x110) < DAT_14c9c09a0) {
    FUN_144b3d300(&DAT_14c9c09a0);
    if (DAT_14c9c09a0 == -1) {
      FUN_1456d5dba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDistanceFieldObjectBufferParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6b6);
      _Init_thread_footer(&DAT_14c9c09a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ab55e FUN_1401ab55e body=2137 status=ok
// SIG undefined FUN_1401ab55e(void)

void FUN_1401ab55e(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  int *piVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  void *pvVar19;
  ulonglong *puVar20;
  size_t sVar21;
  ulonglong *puVar22;
  bool bVar23;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d8;
  void *local_d0;
  longlong local_c8;
  ulonglong *local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  ulonglong **local_a8;
  undefined4 local_a0 [2];
  ulonglong *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  void *pvStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = *(longlong **)(param_4 + 8);
  local_d8 = param_1;
  iVar8 = FUN_1401abde8(plVar4,~(*(uint *)(param_4 + 0x24) ^ *(uint *)(param_4 + 0x28) ^
                                *(uint *)(param_4 + 0x2c)),(ulonglong **)(param_4 + 0x24));
  if ((iVar8 == -1) ||
     (lVar10 = (longlong)iVar8 * 0x20 + *plVar4, puVar11 = (undefined8 *)(lVar10 + 0x10),
     puVar11 == (undefined8 *)0x0 || lVar10 == 0)) {
    puVar12 = (ulonglong *)FUN_14001cc68(0x18,0x10);
    *puVar12 = (ulonglong)&PTR_FUN_14ad98940;
    puVar12[1] = 0;
    puVar12[2] = 0;
    uStack_80 = &local_98;
    local_98 = puVar12;
    local_88 = (code *)(param_4 + 0x24);
    FUN_1401ac3b6(*(undefined8 *)(param_4 + 8),&local_b8,&local_88,0);
    if (local_98 != (ulonglong *)0x0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  else {
    puVar12 = (ulonglong *)*puVar11;
  }
  puVar1 = puVar12 + 1;
  FUN_1401abe4f(puVar12[1],(int)puVar12[2]);
  *(undefined4 *)(puVar12 + 2) = 0;
  if (*(int *)((longlong)puVar12 + 0x14) != 0) {
    FUN_1401abdb8(puVar1);
  }
  FUN_1401abe9c(param_5,&local_98,param_2,param_2 + 0x10);
  plVar4 = local_d8;
  if ((longlong)local_90 != 0) {
    puVar22 = local_98 + local_90;
    plVar2 = local_d8 + 4;
    puVar20 = local_98;
    do {
      uVar5 = *puVar20;
      if ((((((uVar5 >> 0x20 != 0) && (uVar16 = (uint)uVar5, -1 < (int)uVar16)) &&
            ((int)uVar16 < DAT_14c9647dc)) &&
           ((plVar17 = (longlong *)
                       ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0xd & 0x3fff8))),
            plVar17 != (longlong *)0x0 && ((int)plVar17[2] == (int)(uVar5 >> 0x20))))) &&
          ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (lVar10 = *plVar17, lVar10 != 0)) {
        if (DAT_14cb39ca0 == 0) {
          local_88 = FUN_144a7958c;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_14638c6c0;
          local_f0 = &local_88;
          local_f8 = &LAB_14811044c;
          local_100 = &LAB_1407f5cf8;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 0x10;
          local_128 = 0x8e0;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        }
        if (((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) &&
           (*(longlong *)(lVar10 + 0x668) != 0)) {
          local_a8 = (ulonglong **)0x0;
          local_c0 = puVar22;
          local_a0[0] = FUN_144830b78(local_a0,&DAT_14cb42160);
          plVar17 = (longlong *)(lVar10 + 0x678);
          piVar13 = (int *)(**(code **)(*(longlong *)(lVar10 + 0x678) + 0x58))(plVar17,plVar2,0);
          if (((piVar13 == (int *)0x0) || ((longlong)*piVar13 == -1)) ||
             (pvVar19 = (void *)((longlong)*piVar13 + *(longlong *)(lVar10 + 0x698)),
             pvVar19 == (void *)0x0)) {
            lVar15 = *(longlong *)(lVar10 + 0x668);
            piVar13 = (int *)(**(code **)(*(longlong *)(lVar15 + 0x338) + 0x58))
                                       (lVar15 + 0x338,plVar2,0);
            if (((piVar13 != (int *)0x0) && ((longlong)*piVar13 != -1)) &&
               (pvVar19 = (void *)((longlong)*piVar13 + *(longlong *)(lVar15 + 0x358)),
               pvVar19 != (void *)0x0)) goto LAB_1401ab7c0;
            (**(code **)(*local_d8 + 0x58))(local_d8,&local_b8);
            if ((longlong)(int)uStack_b0 == 0) {
              pvVar19 = (void *)0x0;
            }
            else {
              local_d0 = local_b8;
              lVar15 = (longlong)(int)uStack_b0 << 4;
              do {
                local_88 = (code *)*plVar2;
                uVar9 = FUN_144830b78(&uStack_80,local_d0);
                uStack_80 = (ulonglong **)CONCAT44(uStack_80._4_4_,uVar9);
                local_78 = 0;
                pvStack_70 = (void *)0x0;
                piVar13 = (int *)(**(code **)(*plVar17 + 0x58))(plVar17,&local_88,0);
                if (((piVar13 != (int *)0x0) && ((longlong)*piVar13 != -1)) &&
                   (pvVar19 = (void *)((longlong)*piVar13 + *(longlong *)(lVar10 + 0x698)),
                   pvVar19 != (void *)0x0)) {
LAB_1401abd7f:
                  local_a0[0] = (undefined4)uStack_80;
                  local_a8 = (ulonglong **)local_88;
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  break;
                }
                local_c8 = *(longlong *)(lVar10 + 0x668);
                piVar13 = (int *)(**(code **)(*(longlong *)(local_c8 + 0x338) + 0x58))
                                           (local_c8 + 0x338,&local_88);
                if (((piVar13 != (int *)0x0) && ((longlong)*piVar13 != -1)) &&
                   (pvVar19 = (void *)((longlong)*piVar13 + *(longlong *)(local_c8 + 0x358)),
                   pvVar19 != (void *)0x0)) goto LAB_1401abd7f;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                local_d0 = (void *)((longlong)local_d0 + 0x10);
                pvVar19 = (void *)0x0;
                lVar15 = lVar15 + -0x10;
              } while (lVar15 != 0);
            }
          }
          else {
LAB_1401ab7c0:
            local_a0[0] = (undefined4)plVar4[5];
            local_a8 = (ulonglong **)*plVar2;
          }
          puVar22 = local_c0;
          if (((local_a8 != (ulonglong **)0x0) &&
              (plVar17 = (longlong *)FUN_144741050(local_a0), puVar22 = local_c0,
              pvVar19 != (void *)0x0)) && (*plVar17 != 0)) {
            plVar17 = local_d8 + 5;
            local_b8 = (void *)0x0;
            uStack_b0 = 0;
            plVar14 = (longlong *)FUN_144741050(plVar17);
            uVar7 = *(ushort *)((longlong)plVar14 + 0xc);
            if (uVar7 == 0xffff) {
              uVar7 = 0;
              if ((*plVar14 != 0) && (uVar7 = 0, (short)plVar14[1] != 1)) {
                lVar15 = FUN_144a811ba(plVar14);
                sVar6 = (short)*(undefined4 *)(lVar15 + 0x5c);
                uVar7 = -sVar6 & ((short)*(undefined4 *)(lVar15 + 0x58) + sVar6) - 1U;
              }
              *(ushort *)((longlong)plVar14 + 0xc) = uVar7;
            }
            iVar8 = (int)uStack_b0;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + (short)uVar7);
            if ((uint)(uStack_b0._4_4_ - iVar8) < (uint)(int)(short)uVar7) {
              FUN_1447403be(&local_b8);
            }
            plVar17 = (longlong *)FUN_144741050(plVar17);
            uVar7 = *(ushort *)((longlong)plVar17 + 0xc);
            if (uVar7 == 0xffff) {
              uVar7 = 0;
              if ((*plVar17 != 0) && (uVar7 = 0, (short)plVar17[1] != 1)) {
                lVar15 = FUN_144a811ba(plVar17);
                sVar6 = (short)*(undefined4 *)(lVar15 + 0x5c);
                uVar7 = -sVar6 & ((short)*(undefined4 *)(lVar15 + 0x58) + sVar6) - 1U;
              }
              *(ushort *)((longlong)plVar17 + 0xc) = uVar7;
            }
            memcpy(local_b8,pvVar19,(longlong)(short)uVar7);
            local_88 = (code *)0x0;
            uStack_80 = (ulonglong **)0x0;
            uVar9 = FUN_144830b78(&local_78,&DAT_14cb42160);
            pvStack_70 = (void *)0x0;
            local_68 = 0xffffffff00000000;
            uVar16 = *(uint *)(lVar10 + 0xc);
            local_88 = (code *)CONCAT44(local_88._4_4_,uVar16);
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar8 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar18 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar23) {
                local_78._0_4_ = uVar9;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar18);
              }
              LOCK();
              iVar8 = *(int *)(lVar10 + 0x10);
              bVar23 = iVar8 == 0;
              if (bVar23) {
                *(int *)(lVar10 + 0x10) = iVar18;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar23) {
                iVar8 = iVar18;
              }
            }
            local_88 = (code *)CONCAT44(iVar8,(undefined4)local_88);
            uStack_80 = local_a8;
            local_78 = CONCAT44(local_78._4_4_,local_a0[0]);
            if (pvStack_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            pvVar19 = local_b8;
            pvStack_70 = (void *)0x0;
            sVar21 = (size_t)(int)uStack_b0;
            local_68 = CONCAT44(local_68._4_4_,(int)uStack_b0);
            if (sVar21 == 0) {
              local_68 = uStack_b0 & 0xffffffff;
            }
            else {
              FUN_1447a127e(&pvStack_70,uStack_b0 & 0xffffffff,0);
              memcpy(pvStack_70,pvVar19,sVar21);
            }
            iVar8 = (int)puVar12[2];
            *(uint *)(puVar12 + 2) = iVar8 + 1U;
            if (*(uint *)((longlong)puVar12 + 0x14) < iVar8 + 1U) {
              FUN_1401ac244(puVar1,iVar8);
            }
            pvVar19 = pvStack_70;
            uVar5 = *puVar1;
            puVar3 = (undefined4 *)(uVar5 + (longlong)iVar8 * 0x28);
            puVar3[4] = (undefined4)local_78;
            *puVar3 = (undefined4)local_88;
            puVar3[1] = local_88._4_4_;
            puVar3[2] = (undefined4)uStack_80;
            puVar3[3] = uStack_80._4_4_;
            *(undefined8 *)(puVar3 + 6) = 0;
            if (local_68._4_4_ == -1) {
              *(undefined8 *)(puVar3 + 8) = 0xffffffff00000000;
            }
            else {
              sVar21 = (size_t)(int)local_68;
              puVar3[8] = (int)local_68;
              if (sVar21 == 0) {
                puVar3[9] = 0;
              }
              else {
                puVar11 = (undefined8 *)(uVar5 + (longlong)iVar8 * 0x28 + 0x18);
                FUN_1447a127e(puVar11,local_68 & 0xffffffff,0);
                memcpy((void *)*puVar11,pvVar19,sVar21);
              }
            }
            if ((local_68._4_4_ != -1) && (pvStack_70 != (void *)0x0)) {
              FUN_1400020a8();
            }
            puVar22 = local_c0;
            if (local_b8 != (void *)0x0) {
              FUN_1400020a8();
              puVar22 = local_c0;
            }
          }
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar22);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401abdb8 FUN_1401abdb8 body=48 status=ok
// SIG undefined FUN_1401abdb8(void)

void FUN_1401abdb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1401abde8 FUN_1401abde8 body=103 status=ok
// SIG undefined FUN_1401abde8(void)

int FUN_1401abde8(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar2 + 4 + lVar4) == param_3[1]) && (*(int *)(lVar2 + lVar4) == *param_3))
           && (((int *)(lVar2 + lVar4))[2] == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1401abe4f FUN_1401abe4f body=77 status=ok
// SIG undefined FUN_1401abe4f(void)

void FUN_1401abe4f(longlong param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      if (*piVar1 != -1) {
        if (*(longlong *)(piVar1 + -3) != 0) {
          FUN_1400020a8();
        }
        piVar1[-3] = 0;
        piVar1[-2] = 0;
        piVar1[-1] = 0;
        piVar1[0] = -1;
      }
      piVar1 = piVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401abe9c FUN_1401abe9c body=314 status=ok
// SIG undefined FUN_1401abe9c(void)

undefined8 *
FUN_1401abe9c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (**(code **)(*param_1 + 0x10))();
  lVar3 = *(longlong *)(lVar5 + 8);
  plVar4 = *(longlong **)(lVar5 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 != 0) {
      local_58 = &local_48;
      local_40 = (longlong *)0x0;
      local_48 = lVar3;
      FUN_1401abfd8(param_1 + 2,param_2,param_3,param_4);
      goto LAB_1401abf2c;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
    if (lVar3 != 0) {
      local_58 = &local_48;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_48 = lVar3;
      local_40 = plVar4;
      FUN_1401abfd8(param_1 + 2,param_2,param_3,param_4);
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
    if (lVar3 != 0) goto LAB_1401abf2c;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_1401abf2c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401abfd8 FUN_1401abfd8 body=291 status=ok
// SIG undefined FUN_1401abfd8(void)

undefined8 *
FUN_1401abfd8(longlong param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400) == *param_4) {
          if ((lVar4 != 0) && (lVar4 + 8 != 0)) {
            local_28 = *param_5;
            local_20 = param_5[1];
            if (local_20 != 0) {
              LOCK();
              *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
              UNLOCK();
            }
            FUN_1401ac0fe(lVar4 + 8,param_2,param_3,&local_28);
            goto LAB_1401ac087;
          }
          break;
        }
        iVar5 = *(int *)(lVar4 + 0x188);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_1401ac087:
  plVar3 = (longlong *)param_5[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ac0fe FUN_1401ac0fe body=323 status=ok
// SIG undefined FUN_1401ac0fe(void)

longlong * FUN_1401ac0fe(longlong param_1,longlong *param_2,uint *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar4 = FUN_1447bdbdc(plVar1,param_3[1] ^ *param_3 ^ param_3[2] ^ param_3[3]);
  if (iVar4 == -1) {
LAB_1401ac165:
    local_40 = *param_4;
    local_38 = param_4[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1409eacfe(param_1,param_3,&local_40);
    iVar4 = FUN_1447bdbdc(plVar1,param_3[1] ^ *param_3 ^ param_3[2] ^ param_3[3],param_3);
    if (iVar4 != -1) {
      if ((*plVar1 + (longlong)iVar4 * 0x38 + 0x10U & 0xffffffffffffffef) != 0) {
        lVar6 = *plVar1 + (longlong)iVar4 * 0x38;
        goto LAB_1401ac1d1;
      }
    }
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = (longlong)iVar4 * 0x38 + *plVar1;
    if (((char *)(lVar6 + 0x10) == (char *)0x0 || lVar6 == 0) || (*(char *)(lVar6 + 0x10) == '\0'))
    goto LAB_1401ac165;
LAB_1401ac1d1:
    uVar7 = *(undefined4 *)(lVar6 + 0x28);
    lVar5 = lVar6 + 0x18;
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x20);
    }
  }
  *param_2 = lVar5;
  *(undefined4 *)(param_2 + 1) = uVar7;
  plVar1 = (longlong *)param_4[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ac244 FUN_1401ac244 body=370 status=ok
// SIG undefined FUN_1401ac244(void)

void FUN_1401ac244(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401ac2cd;
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
LAB_1401ac2cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1401ac3b6 FUN_1401ac3b6 body=329 status=ok
// SIG undefined FUN_1401ac3b6(void)

undefined4 *
FUN_1401ac3b6(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

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
  FUN_1401ac5a6(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  *(undefined8 *)(local_48 + 4) = *puVar2;
  *puVar2 = 0;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = ~(*local_48 ^ local_48[1] ^ local_48[2]);
  local_68 = param_4;
  cVar3 = FUN_1401ac512(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[7] = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1401ac780(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ac512 FUN_1401ac512 body=148 status=ok
// SIG undefined FUN_1401ac512(void)

void FUN_1401ac512(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_1401abde8();
    if (iVar8 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
      puVar2 = *(undefined8 **)(*param_1 + 0x10 + (longlong)iVar8 * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1432db88c(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_1401ac546;
    }
  }
  uVar7 = 0;
LAB_1401ac546:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 1401ac5a6 FUN_1401ac5a6 body=473 status=ok
// SIG undefined FUN_1401ac5a6(void)

int * FUN_1401ac5a6(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1401ac780 FUN_1401ac780 body=657 status=ok
// SIG undefined FUN_1401ac780(void)

void FUN_1401ac780(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1401ac7e4;
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
  } while (uVar9 != uVar2);
LAB_1401ac7e4:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar14 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar7 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar14) {
      iVar14 = iVar6;
    }
  }
  if (iVar14 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x20;
      uVar7 = (longlong)
              (int)~(*(uint *)(lVar8 + lVar15) ^ *(uint *)(lVar8 + 4 + lVar15) ^
                    *(uint *)(lVar8 + 8 + lVar15)) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar8 + 0x1c + lVar15) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x18 + lVar15) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar14 = (int)uVar3;
      lVar8 = (longlong)iVar14;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar15 + 1];
          if (uVar2 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar6);
  }
  return;
}



// FUNCTION 1401aca24 FUN_1401aca24 body=333 status=ok
// SIG undefined FUN_1401aca24(void)

void FUN_1401aca24(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [40];
  ulonglong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    local_60 = param_2;
    if ((longlong)*(int *)(lVar4 + 0x110) != 0) {
      puVar8 = *(undefined8 **)(lVar4 + 0x108);
      puVar7 = puVar8 + (longlong)*(int *)(lVar4 + 0x110) * 2;
      do {
        (**(code **)(*(longlong *)*puVar8 + 0x78))((longlong *)*puVar8);
        lVar4 = local_58;
        lVar5 = (longlong)local_50;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            plVar2 = *(longlong **)(lVar4 + lVar6);
            if (plVar2 != (longlong *)0x0) {
              cVar3 = (**(code **)(*plVar2 + 0x308))(plVar2);
              if (cVar3 != '\0') {
                cVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2);
                if (cVar3 != '\0') {
                  FUN_1401acb72(plVar2,*puVar8,param_3);
                }
              }
            }
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar7);
    }
    lVar4 = *(longlong *)(param_3 + 0x120);
    if (*(longlong *)(param_3 + 0x120) == 0) {
      lVar4 = param_3;
    }
    iVar1 = *(int *)(param_3 + 0x128);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        *(ulonglong *)(lVar4 + 0x10 + lVar5) =
             *(ulonglong *)(lVar4 + 0x10 + lVar5) & 0xfffeffffffffffff | *local_60 & 0x1000000000000
        ;
        lVar5 = lVar5 + 0x48;
      } while ((longlong)iVar1 * 0x48 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401acb72 FUN_1401acb72 body=567 status=ok
// SIG undefined FUN_1401acb72(void)

void FUN_1401acb72(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 *_Dst;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *_Src;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  longlong local_118;
  undefined1 local_110 [112];
  undefined1 *local_a0;
  ulonglong local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar3 != 0) {
    local_90[0] = 0;
    uVar4 = 0;
    local_88 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x200000000;
    bVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
    local_80 = (ulonglong)bVar2 << 0x11 | 0x209e00;
    local_a0 = (undefined1 *)0x0;
    local_98 = 0x200000000;
    (**(code **)(*param_1 + 0x2f0))(param_1,param_2,local_110);
    puVar5 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar5 = local_110;
    }
    if ((longlong)(int)local_98 != 0) {
      local_118 = (longlong)(int)local_98 * 0x38;
      local_120 = puVar5 + 8;
      lVar3 = 0;
      do {
        local_88 = *(undefined8 *)(puVar5 + lVar3);
        if (local_120 + lVar3 != local_78) {
          _Src = local_120 + lVar3;
          if (*(undefined1 **)(puVar5 + lVar3 + 0x28) != (undefined1 *)0x0) {
            _Src = *(undefined1 **)(puVar5 + lVar3 + 0x28);
          }
          iVar1 = *(int *)(puVar5 + lVar3 + 0x30);
          local_50 = CONCAT44(local_50._4_4_,iVar1);
          if (iVar1 == 0 && local_50._4_4_ == 0) {
            local_50 = CONCAT44(2,iVar1);
          }
          else {
            FUN_1447376de(local_78,iVar1);
            if (iVar1 != 0) {
              _Dst = local_58;
              if (local_58 == (undefined1 *)0x0) {
                _Dst = local_78;
              }
              memcpy(_Dst,_Src,(longlong)iVar1 << 4);
            }
          }
        }
        local_80 = local_80 & 0xfffffffffffeffff;
        FUN_1448b4d27(local_90,param_3);
        if ((((uint)local_80 >> 0x11 & 1) == 0) && (0 < DAT_14c762974)) {
          local_80 = local_80 | 0x10000;
          FUN_1448b4d27(local_90,param_3);
        }
        lVar3 = lVar3 + 0x38;
      } while (local_118 != lVar3);
      uVar4 = local_98 & 0xffffffff;
    }
    puVar5 = local_110;
    if (local_a0 != (undefined1 *)0x0) {
      puVar5 = local_a0;
    }
    FUN_1401acdaa(puVar5,uVar4);
    if (local_a0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401acdaa FUN_1401acdaa body=49 status=ok
// SIG undefined FUN_1401acdaa(void)

void FUN_1401acdaa(longlong param_1,int param_2)

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



// FUNCTION 1401acddc FUN_1401acddc body=367 status=ok
// SIG undefined FUN_1401acddc(void)

void FUN_1401acddc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x128);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 300)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x48;
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1401ace72;
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
LAB_1401ace72:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x48)) {
      uVar6 = uVar4 / 0x48 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 300) = (int)uVar6;
  FUN_1401acf4c(param_1,param_2,uVar6,0x48);
  return;
}



// FUNCTION 1401acf4c FUN_1401acf4c body=149 status=ok
// SIG undefined FUN_1401acf4c(void)

void FUN_1401acf4c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x120);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x120,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401acfe2 FUN_1401acfe2 body=55 status=ok
// SIG undefined FUN_1401acfe2(void)

void FUN_1401acfe2(longlong *param_1)

{
  FUN_1401ad01a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401ad01a FUN_1401ad01a body=121 status=ok
// SIG undefined FUN_1401ad01a(void)

void FUN_1401ad01a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1401ad094 FUN_1401ad094 body=122 status=ok
// SIG undefined FUN_1401ad094(void)

void FUN_1401ad094(longlong *param_1,int param_2)

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



// FUNCTION 1401ad114 FUN_1401ad114 body=57 status=ok
// SIG undefined FUN_1401ad114(void)

void FUN_1401ad114(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6d9d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6d9d8 = FUN_140002ddd(FUN_146536ded,uVar1,L"GbxActivityAreaDef");
  }
  return;
}



// FUNCTION 1401ad14e FUN_1401ad14e body=46 status=ok
// SIG undefined FUN_1401ad14e(void)

void FUN_1401ad14e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x10);
  return;
}



// FUNCTION 1401ad17c FUN_1401ad17c body=55 status=ok
// SIG undefined FUN_1401ad17c(void)

void FUN_1401ad17c(longlong *param_1)

{
  FUN_1401ad1b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401ad1b4 FUN_1401ad1b4 body=121 status=ok
// SIG undefined FUN_1401ad1b4(void)

void FUN_1401ad1b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1401ad22e FUN_1401ad22e body=328 status=ok
// SIG undefined FUN_1401ad22e(void)

void FUN_1401ad22e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401ad2c6;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401ad2c6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 1401ad376 FUN_1401ad376 body=871 status=ok
// SIG undefined FUN_1401ad376(void)

undefined4
FUN_1401ad376(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4,double param_5)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  undefined1 auStack_1b8 [32];
  double *local_198;
  double *local_190;
  double *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 *local_170;
  undefined4 local_164;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  longlong local_138;
  undefined8 uStack_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_120 = param_5 * param_5;
  local_140 = param_2[1] + param_5;
  local_148 = *param_2 + param_5;
  local_150 = param_2[1] - param_5;
  local_158 = *param_2 - param_5;
  local_138 = 0;
  uStack_130 = 0;
  FUN_1401ad93c(0,&local_158,&local_138);
  lVar7 = local_138;
  local_178 = &local_160;
  local_160 = 0x7fefffffffffffff;
  local_170 = &local_164;
  lVar11 = (longlong)(int)uStack_130;
  local_190 = param_2;
  local_188 = &local_120;
  local_180 = param_3;
  local_164 = param_4;
  if (lVar11 != 0) {
    lVar10 = 0;
    do {
      uVar3 = *(ushort *)(param_1 + 0x92);
      iVar12 = *(int *)(lVar7 + 4 + lVar10) * (uVar3 - 1) + *(int *)(lVar7 + lVar10);
      iVar8 = iVar12 / (int)(uVar3 - 1) + iVar12;
      dVar1 = *(double *)(param_1 + 0x80);
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar9 = (longlong)iVar8;
      dVar2 = *(double *)(param_1 + 0xa0);
      dVar13 = (double)(iVar8 % (int)(uint)uVar3);
      dVar5 = (double)(iVar8 / (int)(uint)uVar3);
      local_118 = *(double *)(param_1 + 0x50) * dVar13;
      local_110 = *(double *)(param_1 + 0x58) * dVar5;
      local_c0 = *(double *)(param_1 + 0x60);
      local_108 = ((double)*(ushort *)(lVar4 + lVar9 * 2) * dVar2 + dVar1) * local_c0;
      local_100 = (dVar13 + 1.0) * *(double *)(param_1 + 0x50);
      local_f0 = ((double)*(ushort *)(lVar4 + 2 + lVar9 * 2) * dVar2 + dVar1) * local_c0;
      local_e0 = (dVar5 + 1.0) * *(double *)(param_1 + 0x58);
      local_d8 = ((double)*(ushort *)(lVar4 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1) *
                 local_c0;
      local_c0 = ((double)*(ushort *)(lVar4 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1) *
                 local_c0;
      local_198 = &local_d0;
      local_f8 = local_110;
      local_e8 = local_118;
      local_d0 = local_100;
      local_c8 = local_e0;
      FUN_1401ad6de(&local_190,iVar12 * 2,&local_118,&local_100);
      local_198 = &local_e8;
      FUN_1401ad6de(&local_190,iVar12 * 2 + 1,&local_118,&local_d0);
      lVar10 = lVar10 + 8;
    } while (lVar11 * 8 != lVar10);
  }
  uVar6 = local_164;
  if (local_138 != 0) {
    FUN_1400020a8(local_138);
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1401ad6de FUN_1401ad6de body=605 status=ok
// SIG undefined FUN_1401ad6de(void)

double * FUN_1401ad6de(undefined8 *param_1,undefined4 param_2,double *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  double *local_a8;
  double *local_a0;
  uint local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar8 = param_3[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar4 = (*param_4 - dVar1) * (param_5[1] - dVar2) - (*param_5 - dVar1) * (param_4[1] - dVar2);
  dVar6 = (param_4[2] - dVar8) * (*param_5 - dVar1) - (param_5[2] - dVar8) * (*param_4 - dVar1);
  dVar5 = (param_4[1] - dVar2) * (param_5[2] - dVar8) - (param_5[1] - dVar2) * (param_4[2] - dVar8);
  dVar7 = dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
  if ((9.999999747378752e-05 <= dVar7) && (dVar7 = SQRT(dVar7), 9.999999747378752e-05 < dVar7)) {
    dVar4 = dVar4 / dVar7;
    dVar6 = dVar6 / dVar7;
    dVar5 = dVar5 / dVar7;
    local_98 = 0;
    local_a0 = (double *)*param_1;
    dVar8 = (local_a0[2] - dVar8) * dVar4 +
            (*local_a0 - dVar1) * dVar5 + (local_a0[1] - dVar2) * dVar6;
    local_68 = local_a0[2] - dVar8 * dVar4;
    local_70 = local_a0[1] - dVar6 * dVar8;
    local_78 = *local_a0 - dVar5 * dVar8;
    local_a8 = param_5;
    FUN_1449056f5(&local_90);
    pdVar3 = (double *)*param_1;
    if ((local_80 - pdVar3[2]) * (local_80 - pdVar3[2]) +
        (local_90 - *pdVar3) * (local_90 - *pdVar3) +
        (local_88 - pdVar3[1]) * (local_88 - pdVar3[1]) < *(double *)param_1[1]) {
      pdVar3 = (double *)param_1[2];
      dVar8 = dVar4 * pdVar3[2] + dVar5 * *pdVar3 + dVar6 * pdVar3[1];
      if (dVar8 < *(double *)param_1[3]) {
        *(double *)param_1[3] = dVar8;
        *(undefined4 *)param_1[4] = param_2;
      }
    }
    param_5 = (double *)(ulonglong)local_98;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ad93c FUN_1401ad93c body=723 status=ok
// SIG undefined FUN_1401ad93c(void)

bool FUN_1401ad93c(longlong param_1,double *param_2,longlong *param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1401adc10(param_3,0);
  }
  dVar19 = *(double *)(param_1 + 0x140) + 9.99999993922529e-09;
  dVar18 = *(double *)(param_1 + 0x138) + 9.99999993922529e-09;
  dVar3 = *(double *)(param_1 + 0x158) + -9.99999993922529e-09;
  dVar2 = *(double *)(param_1 + 0x150) + -9.99999993922529e-09;
  dVar17 = param_2[2];
  if (param_2[2] <= dVar18) {
    dVar17 = dVar18;
  }
  dVar16 = param_2[3];
  if (param_2[3] <= dVar19) {
    dVar16 = dVar19;
  }
  if (dVar2 <= dVar17) {
    dVar17 = dVar2;
  }
  if (dVar3 <= dVar16) {
    dVar16 = dVar3;
  }
  dVar16 = dVar16 / *(double *)(param_1 + 0x58);
  dVar17 = dVar17 / *(double *)(param_1 + 0x50);
  dVar15 = *param_2;
  if (*param_2 <= dVar18) {
    dVar15 = dVar18;
  }
  dVar18 = param_2[1];
  if (param_2[1] <= dVar19) {
    dVar18 = dVar19;
  }
  if (dVar2 <= dVar15) {
    dVar15 = dVar2;
  }
  if (dVar3 <= dVar18) {
    dVar18 = dVar3;
  }
  dVar18 = dVar18 / *(double *)(param_1 + 0x58);
  dVar15 = dVar15 / *(double *)(param_1 + 0x50);
  dVar19 = dVar15;
  if (dVar17 <= dVar15) {
    dVar19 = dVar17;
  }
  dVar2 = dVar18;
  if (dVar16 <= dVar18) {
    dVar2 = dVar16;
  }
  if (dVar15 <= dVar17) {
    dVar15 = dVar17;
  }
  if (dVar18 <= dVar16) {
    dVar18 = dVar16;
  }
  *param_2 = dVar19;
  param_2[1] = dVar2;
  param_2[2] = dVar15;
  param_2[3] = dVar18;
  iVar5 = (int)((dVar19 - *(double *)(param_1 + 0xb0)) / *(double *)(param_1 + 0xd8));
  iVar9 = (int)((dVar2 - *(double *)(param_1 + 0xb8)) / *(double *)(param_1 + 0xe0));
  iVar6 = *(int *)(param_1 + 0xd0);
  iVar14 = 0;
  if (0 < iVar5) {
    iVar14 = iVar5;
  }
  if (iVar6 <= iVar5) {
    iVar14 = iVar6 + -1;
  }
  iVar5 = *(int *)(param_1 + 0xd4);
  iVar7 = 0;
  if (0 < iVar9) {
    iVar7 = iVar9;
  }
  if (iVar5 <= iVar9) {
    iVar7 = iVar5 + -1;
  }
  iVar11 = (int)((dVar15 - *(double *)(param_1 + 0xb0)) / *(double *)(param_1 + 0xd8));
  iVar10 = (int)((dVar18 - *(double *)(param_1 + 0xb8)) / *(double *)(param_1 + 0xe0));
  iVar9 = 0;
  if (0 < iVar11) {
    iVar9 = iVar11;
  }
  if (iVar6 <= iVar11) {
    iVar9 = iVar6 + -1;
  }
  iVar6 = 0;
  if (0 < iVar10) {
    iVar6 = iVar10;
  }
  if (iVar5 <= iVar10) {
    iVar6 = iVar5 + -1;
  }
  uVar1 = (iVar9 - iVar14) + 1;
  uVar13 = iVar6 - iVar7;
  iVar6 = (uVar13 + 1) * uVar1;
  if (-1 < iVar6) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
      FUN_1401adc10(param_3);
    }
    if (-1 < iVar9 - iVar14) {
      uVar12 = 0;
      do {
        if (-1 < (int)uVar13) {
          iVar5 = iVar14 + (int)uVar12;
          lVar8 = (ulonglong)uVar13 + 1;
          iVar6 = iVar7;
          do {
            if (((int)*(uint *)(param_1 + 0x48) < 1) ||
               ((uVar4 = (*(ushort *)(param_1 + 0x92) - 1) * iVar6 + iVar5,
                uVar4 < *(uint *)(param_1 + 0x48) &&
                (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4) != -1)))) {
              iVar9 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                FUN_1402e69d2(param_3,iVar9);
              }
              *(ulonglong *)(*param_3 + (longlong)iVar9 * 8) = CONCAT44(iVar6,iVar5);
            }
            iVar6 = iVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
    }
    return 0 < (int)param_3[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 1401adc10 FUN_1401adc10 body=315 status=ok
// SIG undefined FUN_1401adc10(void)

void FUN_1401adc10(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401adc7a;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401adc7a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 1401add4c FUN_1401add4c body=80 status=ok
// SIG undefined FUN_1401add4c(void)

void FUN_1401add4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1401add9e(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401add9e FUN_1401add9e body=53 status=ok
// SIG undefined FUN_1401add9e(void)

undefined8 FUN_1401add9e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cbc6588,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1401addd4 FUN_1401addd4 body=86 status=ok
// SIG undefined FUN_1401addd4(void)

void FUN_1401addd4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1401ade2a();
  FUN_1401adeb9(param_1,param_1 + 0x28,param_2,param_3,param_4);
  FUN_1401ae124(param_1,param_1 + 0x38,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401ade2a FUN_1401ade2a body=143 status=ok
// SIG undefined FUN_1401ade2a(void)

void FUN_1401ade2a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) != '\x01') {
    FUN_146dc2b7e(param_1 + 0x38,iVar2,1);
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x30) = iVar2;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < (uint)(iVar2 - iVar3)) {
      FUN_146dcfb1c(plVar1,iVar3);
    }
    FUN_146dcfa05((longlong)iVar3 * 0xfd0 + *plVar1,iVar2 - iVar3);
    return;
  }
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar3 <= iVar2) {
    return;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  FUN_146dcfbb4(plVar1);
  return;
}


