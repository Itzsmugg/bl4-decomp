// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14341cc24 FUN_14341cc24 body=646 status=ok
// SIG undefined FUN_14341cc24(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14341cc24(longlong param_1,undefined4 param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_1468 [32];
  float local_1448;
  undefined1 local_1444;
  undefined8 local_1438 [16];
  ulonglong local_13b8;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined4 local_1390;
  undefined4 uStack_138c;
  undefined4 uStack_1388;
  undefined4 uStack_1384;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined1 local_1368 [2088];
  longlong local_b40;
  longlong local_ab8;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined4 local_a98;
  float local_a94;
  float local_a90;
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1468;
  if ((*(char *)(param_1 + 0xd0) != '\x01') || (*(longlong *)(param_1 + 0x30) == 0))
  goto LAB_14341cc6c;
  FUN_1479915ae(&local_a98,param_4);
  local_a94 = *(float *)(param_1 + 0x2c);
  local_1398 = DAT_14c8464f0;
  local_13a8 = DAT_14c8464e0;
  uStack_13a0 = DAT_14c8464e8;
  local_1390 = (undefined4)DAT_14c8464f8;
  uStack_138c = DAT_14c8464f8._4_4_;
  uStack_1388 = (undefined4)DAT_14c846500;
  uStack_1384 = DAT_14c846500._4_4_;
  local_1380 = DAT_14c846508;
  local_1378 = 0;
  local_a98 = param_2;
  local_a90 = param_3;
  FUN_144894d4c(local_1368);
  local_aa8 = 0;
  local_aa4 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2b0))
            (*(longlong **)(param_1 + 0x30),&local_a98,&local_13a8);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c0))();
  if (cVar2 == '\0') {
    local_1448 = local_a94 * local_a90;
    if (local_1448 <= 0.0) {
      local_1448 = 0.0;
    }
    local_1444 = *(undefined1 *)(param_1 + 0x40);
    puVar7 = (undefined8 *)(param_1 + 0x50);
    puVar9 = local_1438;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
LAB_14341ce07:
      uVar8 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar4 = (ulonglong)*(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar5 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar5 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar6;
        }
        uVar4 = (ulonglong)uVar3;
      }
    }
    else {
      if (lVar5 != 0) goto LAB_14341ce07;
      uVar8 = 0;
      uVar4 = 0;
    }
    local_13b8 = (ulonglong)uVar8 | uVar4 << 0x20;
    FUN_147991740(&local_1448,&local_13a8,param_4);
  }
  if (local_ab8 != 0) {
    FUN_1400020a8();
  }
  if (local_b40 != 0) {
    FUN_1400020a8();
  }
  if (local_98 == '\x01') {
    local_98 = '\0';
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_14341cc6c:
  if ((local_50 ^ (ulonglong)auStack_1468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341ceac FUN_14341ceac body=1917 status=ok
// SIG undefined FUN_14341ceac(void)

longlong FUN_14341ceac(longlong param_1,longlong *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  float *local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  code *local_90;
  float local_88;
  undefined1 local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *param_2;
  if ((((lVar3 == 0) || (lVar2 = FUN_1411080a4(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (*param_2 == 0)))) {
    lVar9 = 0;
    goto LAB_14341cf14;
  }
  fVar13 = *param_3;
  local_b8 = *(longlong *)(param_3 + 8);
  if (*(longlong **)(param_3 + 10) == (longlong *)0x0 || param_3[0xc] == 0.0) {
    local_c0 = 0;
  }
  else {
    local_c0 = (**(code **)(**(longlong **)(param_3 + 10) + 0x30))();
  }
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x390), lVar3 != 0)) &&
     (lVar2 = *(longlong *)(lVar3 + 0x430), lVar2 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_e0 = &local_90;
      local_90 = FUN_1417de738;
      local_d0 = &LAB_145893408;
      local_d8 = &LAB_1458cbbd2;
      local_e8 = &LAB_147ba21f1;
      local_f0 = &LAB_1463e9233;
      local_f8 = L"Engine";
      uStack_100 = 0;
      local_108 = CONCAT44(local_108._4_4_,0x1000000c);
      local_110 = 8;
      local_118 = (float *)CONCAT44(local_118._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(lVar3 + 0x430);
      if (lVar2 == 0) goto LAB_14341cff4;
    }
    if ((((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30 && (*(longlong *)(lVar2 + 0x78) != 0)) &&
        (*(char *)(*(longlong *)(lVar2 + 0x78) + 0x70) != '\0')))) {
      fVar13 = fVar13 * *(float *)(param_1 + 0xa8);
    }
  }
LAB_14341cff4:
  lVar3 = *param_2;
  if (((lVar3 == 0) || (lVar2 = FUN_1411080a4(), lVar2 == 0)) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)))) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)*param_2;
  }
  lVar3 = plVar5[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar3 = plVar5[0x22];
    if (lVar3 != 0) goto LAB_14341d04a;
  }
  else {
LAB_14341d04a:
    if ((*(char *)(lVar3 + 0x28) == '\x01') &&
       (iVar1 = *(int *)(param_1 + 0x50), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar2 = 0;
      do {
        lVar9 = *(longlong *)(lVar3 + lVar2);
        if (lVar9 != 0) {
          lVar11 = *param_2;
          if ((((lVar11 == 0) || (lVar4 = FUN_1411080a4(), lVar4 == 0)) ||
              (*(int *)(lVar11 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) {
            lVar11 = 0;
          }
          else {
            lVar11 = *param_2;
          }
          if (lVar11 == *(longlong *)(lVar9 + 0x10)) {
            if (((char)local_c0 == '\0') && (*(char *)(lVar3 + 0x10 + lVar2) == '\0')) {
              if (local_b8 == 0) {
                *(undefined4 *)(lVar3 + 8 + lVar2) = 0;
                iVar1 = 0;
              }
              else {
                uVar8 = *(uint *)(local_b8 + 0xc);
                *(uint *)(lVar3 + 8 + lVar2) = uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar11 = 0;
                }
                iVar1 = *(int *)(lVar11 + 0x10);
                if (*(int *)(lVar11 + 0x10) == 0) {
                  LOCK();
                  iVar1 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar1;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar1 = *(int *)(lVar11 + 0x10);
                  bVar12 = iVar1 == 0;
                  if (bVar12) {
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar1 = 0;
                  }
                  UNLOCK();
                  if (bVar12) {
                    iVar1 = iVar10;
                  }
                }
              }
              *(int *)(lVar3 + 0xc + lVar2) = iVar1;
              local_98 = *(undefined8 *)(param_3 + 6);
              local_118 = &local_a8;
              local_a8 = param_3[2];
              fStack_a4 = param_3[3];
              fStack_a0 = param_3[4];
              fStack_9c = param_3[5];
              FUN_1479905c6(lVar9,*(undefined8 *)(param_1 + 0x30),fVar13,
                            *(undefined1 *)(param_3 + 1));
              goto LAB_14341cf14;
            }
            if ((*(char *)(lVar9 + 0xd0) == '\x01') &&
               (plVar5 = *(longlong **)(lVar9 + 0x30), plVar5 != (longlong *)0x0)) {
              local_90 = (code *)CONCAT71(local_90._1_7_,1);
              (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_90);
            }
            if (*(longlong **)(lVar9 + 0x30) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x2d0))();
            }
            *(undefined1 *)(lVar9 + 0xd0) = 0;
            *(undefined8 *)(lVar3 + lVar2) = 0;
          }
        }
        lVar2 = lVar2 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar2);
    }
  }
  local_b0 = *param_2;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar3 = FUN_1479906b8(param_1,&local_b0);
  if (lVar3 == 0) {
    lVar3 = *param_2;
    if ((((lVar3 == 0) || (lVar2 = FUN_1411080a4(), lVar2 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_2;
    }
    local_108 = 0;
    uStack_100 = 0;
    local_110 = local_110 & 0xffffff00;
    local_118 = (float *)0x0;
    lVar9 = 0;
    lVar3 = FUN_147677802(param_1,lVar3,0,0);
    if (lVar3 == 0) goto LAB_14341cf14;
  }
  if ((char)local_c0 != '\0') {
    if (param_3[0xc] == 0.0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_3 + 10);
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,lVar3);
  }
  pcVar6 = *(code **)(param_1 + 0x30);
  if (DAT_14c950c29 == 1) {
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)0x0;
    }
    else {
      FUN_1456cec3c();
      pcVar6 = *(code **)(param_1 + 0x30);
    }
  }
  local_84 = *(undefined1 *)(param_3 + 1);
  local_70 = *(undefined8 *)(param_3 + 6);
  local_80 = param_3[2];
  fStack_7c = param_3[3];
  fStack_78 = param_3[4];
  fStack_74 = param_3[5];
  local_64 = *(char *)(param_3 + 0xf) == '\x01';
  if ((bool)local_64) {
    local_68 = param_3[0xe];
  }
  local_90 = pcVar6;
  local_88 = fVar13;
  FUN_14341d62a();
  plVar5 = (longlong *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x50);
  lVar9 = lVar3;
  if (0 < iVar1) {
    lVar2 = 0;
    lVar11 = 0;
    bVar12 = false;
    do {
      lVar4 = *plVar5;
      if (*(longlong *)(lVar4 + lVar2) == 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar3);
        }
        *(longlong *)(lVar4 + lVar2) = lVar3;
        if (local_b8 == 0) {
          *(undefined4 *)(lVar4 + 8 + lVar2) = 0;
          iVar1 = 0;
        }
        else {
          uVar8 = *(uint *)(local_b8 + 0xc);
          *(uint *)(lVar4 + 8 + lVar2) = uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar1 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar12) {
              local_bc = iVar10;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
              iVar10 = local_bc;
            }
            LOCK();
            iVar1 = *(int *)(lVar7 + 0x10);
            bVar12 = iVar1 == 0;
            if (bVar12) {
              *(int *)(lVar7 + 0x10) = iVar10;
              iVar1 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar1 = iVar10;
            }
          }
        }
        *(int *)(lVar4 + 0xc + lVar2) = iVar1;
        *(char *)(lVar4 + 0x10 + lVar2) = (char)local_c0;
        iVar1 = *(int *)(param_1 + 0x50);
        bVar12 = true;
      }
      lVar11 = lVar11 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar11 < iVar1);
    if (bVar12) goto LAB_14341cf14;
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  if (local_b8 == 0) {
    uVar8 = 0;
    iVar1 = 0;
  }
  else {
    uVar8 = *(uint *)(local_b8 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar12 = iVar1 == 0;
      if (bVar12) {
        *(int *)(lVar2 + 0x10) = iVar10;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar1 = iVar10;
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar10 + 1U) {
    FUN_1479ae45a(plVar5,iVar10);
  }
  plVar5 = (longlong *)(*plVar5 + (longlong)iVar10 * 0x18);
  *plVar5 = lVar3;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  *(uint *)(plVar5 + 1) = uVar8;
  *(int *)((longlong)plVar5 + 0xc) = iVar1;
  *(char *)(plVar5 + 2) = (char)local_c0;
LAB_14341cf14:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 14341d62a FUN_14341d62a body=983 status=ok
// SIG undefined FUN_14341d62a(void)

void FUN_14341d62a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  char local_c7;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0xd0) != '\x01') || (*(char *)(param_1 + 0x28) == '\x01')) {
    lVar7 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x38) = lVar7;
    *(int *)(param_1 + 0x2c) = (int)param_2[1];
    cVar4 = *(char *)((longlong)param_2 + 0xc);
    *(char *)(param_1 + 0x40) = cVar4;
    if (cVar4 == '\x02') {
      dVar16 = (double)param_2[2];
      dVar14 = (double)param_2[3];
      dVar15 = (double)param_2[4];
      dVar10 = sin(dVar16 * 0.01745329238474369);
      uVar22 = SUB84(dVar10,0);
      uVar23 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar11 = sin(dVar14 * 0.01745329238474369);
      dVar12 = sin(dVar15 * 0.01745329238474369);
      sin(0.0);
      dVar13 = cos(dVar16 * 0.01745329238474369);
      dVar14 = cos(dVar14 * 0.01745329238474369);
      dVar15 = cos(dVar15 * 0.01745329238474369);
      cos(0.0);
      uVar24 = 0;
      uVar25 = 0x3ff00000;
      puVar6 = &DAT_14c8464f0;
      puVar8 = &DAT_14c8464e8;
      puVar9 = &DAT_14c8464e0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      dVar16 = dVar13 * dVar14;
      dVar17 = dVar11 * dVar13;
      dVar18 = dVar10 * dVar12 * dVar11 + dVar14 * dVar15;
      dVar19 = dVar10 * dVar12 * dVar14 - dVar11 * dVar15;
      dVar20 = -dVar12 * dVar13;
      dVar21 = -(dVar10 * dVar15 * dVar14 + dVar11 * dVar12);
      dVar14 = dVar14 * dVar12 - dVar11 * dVar10 * dVar15;
      dVar15 = dVar13 * dVar15;
    }
    else {
      uVar22 = (undefined4)DAT_14c846410;
      uVar23 = (undefined4)((ulonglong)DAT_14c846410 >> 0x20);
      uVar26 = (undefined4)DAT_14c846418;
      uVar27 = (undefined4)((ulonglong)DAT_14c846418 >> 0x20);
      uVar28 = (undefined4)DAT_14c846438;
      uVar29 = (undefined4)((ulonglong)DAT_14c846438 >> 0x20);
      uVar30 = (undefined4)DAT_14c846458;
      uVar31 = (undefined4)((ulonglong)DAT_14c846458 >> 0x20);
      puVar6 = &DAT_14c846470;
      puVar8 = &DAT_14c846468;
      puVar9 = &DAT_14c846460;
      uVar24 = (undefined4)DAT_14c846478;
      uVar25 = (undefined4)((ulonglong)DAT_14c846478 >> 0x20);
      dVar16 = DAT_14c846400;
      dVar17 = DAT_14c846408;
      dVar18 = DAT_14c846428;
      dVar19 = DAT_14c846420;
      dVar20 = DAT_14c846430;
      dVar21 = DAT_14c846440;
      dVar14 = DAT_14c846448;
      dVar15 = DAT_14c846450;
    }
    uVar1 = *puVar6;
    uVar2 = *puVar8;
    uVar3 = *puVar9;
    *(double *)(param_1 + 0x50) = dVar16;
    *(double *)(param_1 + 0x58) = dVar17;
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(uVar23,uVar22);
    *(ulonglong *)(param_1 + 0x68) = CONCAT44(uVar27,uVar26);
    *(double *)(param_1 + 0x70) = dVar19;
    *(double *)(param_1 + 0x78) = dVar18;
    *(double *)(param_1 + 0x80) = dVar20;
    *(ulonglong *)(param_1 + 0x88) = CONCAT44(uVar29,uVar28);
    *(double *)(param_1 + 0x90) = dVar21;
    *(double *)(param_1 + 0x98) = dVar14;
    *(double *)(param_1 + 0xa0) = dVar15;
    *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uVar31,uVar30);
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    *(ulonglong *)(param_1 + 200) = CONCAT44(uVar25,uVar24);
    uVar5 = *(undefined1 *)(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0xd0) = 1;
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      local_c7 = *(char *)((longlong)param_2 + 0x2c);
      if (local_c7 == '\0') {
        local_c4 = 0;
      }
      else {
        local_c4 = (undefined4)param_2[5];
      }
      local_c8 = uVar5;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a8))();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341da02 FUN_14341da02 body=282 status=ok
// SIG undefined FUN_14341da02(void)

void FUN_14341da02(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    iVar4 = 1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) == param_2) {
        if ((*(char *)(param_2 + 0xd0) == '\x01') &&
           (*(longlong **)(param_2 + 0x30) != (longlong *)0x0)) {
          local_41 = param_3;
          (**(code **)(**(longlong **)(param_2 + 0x30) + 0x2c8))();
        }
        if (param_3 != '\0') {
          if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 0x30) + 0x2d0))();
          }
          *(undefined1 *)(param_2 + 0xd0) = 0;
          if ((*(longlong *)(lVar1 + lVar3) != 0) && (*(char *)(lVar1 + 0x10 + lVar3) == '\0')) {
            FUN_147990830(param_1);
          }
          iVar2 = *(int *)(param_1 + 0x50);
          if (iVar2 - iVar4 != 0) {
            memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar3),
                    (void *)(*(longlong *)(param_1 + 0x48) + lVar3 + 0x18),
                    (longlong)(iVar2 - iVar4) * 0x18);
            iVar2 = *(int *)(param_1 + 0x50);
          }
          *(int *)(param_1 + 0x50) = iVar2 + -1;
          FUN_1479ae3ac((longlong *)(param_1 + 0x48));
        }
        break;
      }
      lVar3 = lVar3 + 0x18;
      iVar4 = iVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x18 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341db1e FUN_14341db1e body=415 status=ok
// SIG undefined FUN_14341db1e(void)

void FUN_14341db1e(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_88 [39];
  char local_61;
  longlong local_60;
  longlong *local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = (ulonglong)*(int *)(param_1 + 0x50);
  local_61 = param_3;
  local_60 = param_1;
  local_58 = param_2;
  if (0 < (longlong)uVar10) {
    iVar11 = -*(int *)(param_1 + 0x50);
    lVar9 = uVar10 * 0x18;
    do {
      lVar1 = *(longlong *)(param_1 + 0x48);
      lVar2 = *(longlong *)(lVar1 + -0x18 + lVar9);
      if ((lVar2 != 0) && (lVar3 = *local_58, lVar3 != 0)) {
        lVar4 = *(longlong *)(lVar2 + 0x10);
        lVar8 = FUN_1411080a4();
        if ((lVar8 != 0) &&
           ((((*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) && (lVar3 = *local_58, lVar3 != 0)) &&
            ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)))))) {
          if ((*(char *)(lVar2 + 0xd0) == '\x01') &&
             (plVar5 = *(longlong **)(lVar2 + 0x30), plVar5 != (longlong *)0x0)) {
            local_49 = local_61;
            (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_49);
          }
          if (local_61 != '\0') {
            if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x2d0))();
            }
            lVar3 = local_60;
            *(undefined1 *)(lVar2 + 0xd0) = 0;
            if ((*(longlong *)(lVar1 + -0x18 + lVar9) != 0) &&
               (*(char *)(lVar1 + -8 + lVar9) == '\0')) {
              FUN_147990830(local_60);
            }
            uVar7 = *(uint *)(lVar3 + 0x50);
            if (uVar10 != uVar7) {
              memmove((void *)(*(longlong *)(lVar3 + 0x48) + lVar9 + -0x18),
                      (void *)(*(longlong *)(lVar3 + 0x48) + lVar9),
                      (longlong)(int)(uVar7 + iVar11) * 0x18);
              uVar7 = *(uint *)(lVar3 + 0x50);
            }
            *(uint *)(lVar3 + 0x50) = uVar7 - 1;
            FUN_1479ae3ac((longlong *)(param_1 + 0x48));
          }
        }
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + -0x18;
      bVar6 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341dcbe FUN_14341dcbe body=417 status=ok
// SIG undefined FUN_14341dcbe(void)

void FUN_14341dcbe(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = (ulonglong)*(int *)(param_1 + 0x50);
  if (0 < (longlong)uVar9) {
    plVar1 = (longlong *)(param_1 + 0x48);
    iVar10 = -*(int *)(param_1 + 0x50);
    lVar8 = uVar9 * 0x18;
    do {
      lVar3 = *plVar1;
      iVar2 = *(int *)(lVar3 + -0xc + lVar8);
      if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar3 + -0x10 + lVar8), (int)uVar5 < 0)) {
LAB_14341ddb4:
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar2)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14341ddb4;
          lVar6 = *plVar7;
        }
      }
      if ((lVar6 == param_2) && (lVar6 = *(longlong *)(lVar3 + -0x18 + lVar8), lVar6 != 0)) {
        if ((*(char *)(lVar6 + 0xd0) == '\x01') && (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0)
           ) {
          local_49 = param_3;
          (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x2c8))();
        }
        if (param_3 != '\0') {
          lVar6 = *(longlong *)(lVar3 + -0x18 + lVar8);
          plVar7 = *(longlong **)(lVar6 + 0x30);
          local_58 = param_1;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x2d0))();
          }
          param_1 = local_58;
          *(undefined1 *)(lVar6 + 0xd0) = 0;
          if ((*(longlong *)(lVar3 + -0x18 + lVar8) != 0) && (*(char *)(lVar3 + -8 + lVar8) == '\0')
             ) {
            FUN_147990830(local_58);
          }
          uVar5 = *(uint *)(param_1 + 0x50);
          if (uVar9 != uVar5) {
            memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar8 + -0x18),
                    (void *)(*(longlong *)(param_1 + 0x48) + lVar8),
                    (longlong)(int)(uVar5 + iVar10) * 0x18);
            uVar5 = *(uint *)(param_1 + 0x50);
          }
          *(uint *)(param_1 + 0x50) = uVar5 - 1;
          FUN_1479ae3ac(plVar1);
        }
      }
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + -0x18;
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341de60 FUN_14341de60 body=549 status=ok
// SIG undefined FUN_14341de60(void)

void FUN_14341de60(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [39];
  char local_61;
  longlong local_60;
  longlong *local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = (ulonglong)*(int *)(param_1 + 0x50);
  local_61 = param_4;
  local_60 = param_1;
  if (0 < (longlong)uVar11) {
    iVar7 = -*(int *)(param_1 + 0x50);
    lVar10 = uVar11 * 0x18;
    local_58 = param_2;
    do {
      lVar2 = *(longlong *)(param_1 + 0x48);
      iVar1 = *(int *)(lVar2 + -0xc + lVar10);
      if ((iVar1 == 0) || (uVar5 = *(uint *)(lVar2 + -0x10 + lVar10), (int)uVar5 < 0)) {
LAB_14341e056:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar1)) ||
             ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_14341e056;
          lVar8 = *plVar9;
        }
      }
      if (((lVar8 == param_3) && (lVar8 = *(longlong *)(lVar2 + -0x18 + lVar10), lVar8 != 0)) &&
         (lVar3 = *param_2, lVar3 != 0)) {
        lVar8 = *(longlong *)(lVar8 + 0x10);
        lVar6 = FUN_1411080a4();
        param_2 = local_58;
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30 &&
            (((lVar3 = *local_58, lVar3 != 0 && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar8 + 0x38)))
             && (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                 == lVar3 + 0x30)))))) {
          lVar8 = *(longlong *)(lVar2 + -0x18 + lVar10);
          if ((*(char *)(lVar8 + 0xd0) == '\x01') &&
             (plVar9 = *(longlong **)(lVar8 + 0x30), plVar9 != (longlong *)0x0)) {
            local_49 = local_61;
            (**(code **)(*plVar9 + 0x2c8))(plVar9,&local_49);
          }
          param_2 = local_58;
          if (local_61 != '\0') {
            lVar8 = *(longlong *)(lVar2 + -0x18 + lVar10);
            plVar9 = *(longlong **)(lVar8 + 0x30);
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x2d0))();
            }
            *(undefined1 *)(lVar8 + 0xd0) = 0;
            if ((*(longlong *)(lVar2 + -0x18 + lVar10) != 0) &&
               (*(char *)(lVar2 + -8 + lVar10) == '\0')) {
              FUN_147990830(local_60);
            }
            lVar2 = local_60;
            uVar5 = *(uint *)(local_60 + 0x50);
            if (uVar11 != uVar5) {
              memmove((void *)(*(longlong *)(local_60 + 0x48) + lVar10 + -0x18),
                      (void *)(*(longlong *)(local_60 + 0x48) + lVar10),
                      (longlong)(int)(uVar5 + iVar7) * 0x18);
              uVar5 = *(uint *)(lVar2 + 0x50);
            }
            *(uint *)(lVar2 + 0x50) = uVar5 - 1;
            FUN_1479ae3ac((longlong *)(param_1 + 0x48));
            param_2 = local_58;
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + -0x18;
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341e086 FUN_14341e086 body=69 status=ok
// SIG undefined FUN_14341e086(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e086(void)

{
  _DAT_14cacf278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf280,1);
  return;
}



// FUNCTION 14341e0cb FUN_14341e0cb body=55 status=ok
// SIG undefined FUN_14341e0cb(void)

void FUN_14341e0cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacf2e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacf2e8 = FUN_14171c317(FUN_1463b0dbe,uVar1,L"ECameraShakePatternUpdateResultFlags");
  }
  return;
}



// FUNCTION 14341e102 FUN_14341e102 body=55 status=ok
// SIG undefined FUN_14341e102(void)

void FUN_14341e102(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacf330 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacf330 = FUN_14171c317(FUN_1463b0f1a,uVar1,L"ECameraShakeDurationType");
  }
  return;
}



// FUNCTION 14341e139 FUN_14341e139 body=69 status=ok
// SIG undefined FUN_14341e139(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e139(void)

{
  _DAT_14cacf3b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e17b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf3b8,1);
  return;
}



// FUNCTION 14341e17e FUN_14341e17e body=646 status=ok
// SIG undefined FUN_14341e17e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14341e17e(longlong param_1,undefined4 param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_1468 [32];
  float local_1448;
  undefined1 local_1444;
  undefined8 local_1438 [16];
  ulonglong local_13b8;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined4 local_1390;
  undefined4 uStack_138c;
  undefined4 uStack_1388;
  undefined4 uStack_1384;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined1 local_1368 [2088];
  longlong local_b40;
  longlong local_ab8;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined4 local_a98;
  float local_a94;
  float local_a90;
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1468;
  if ((*(char *)(param_1 + 0xd0) != '\x01') || (*(longlong *)(param_1 + 0x30) == 0))
  goto LAB_14341e1c6;
  FUN_147991a64(&local_a98,param_4);
  local_a94 = *(float *)(param_1 + 0x2c);
  local_1398 = DAT_14c8464f0;
  local_13a8 = DAT_14c8464e0;
  uStack_13a0 = DAT_14c8464e8;
  local_1390 = (undefined4)DAT_14c8464f8;
  uStack_138c = DAT_14c8464f8._4_4_;
  uStack_1388 = (undefined4)DAT_14c846500;
  uStack_1384 = DAT_14c846500._4_4_;
  local_1380 = DAT_14c846508;
  local_1378 = 0;
  local_a98 = param_2;
  local_a90 = param_3;
  FUN_144894d4c(local_1368);
  local_aa8 = 0;
  local_aa4 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2b8))
            (*(longlong **)(param_1 + 0x30),&local_a98,&local_13a8);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c0))();
  if (cVar2 == '\0') {
    local_1448 = local_a94 * local_a90;
    if (local_1448 <= 0.0) {
      local_1448 = 0.0;
    }
    local_1444 = *(undefined1 *)(param_1 + 0x40);
    puVar7 = (undefined8 *)(param_1 + 0x50);
    puVar9 = local_1438;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
LAB_14341e361:
      uVar8 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar4 = (ulonglong)*(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar5 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar5 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar6;
        }
        uVar4 = (ulonglong)uVar3;
      }
    }
    else {
      if (lVar5 != 0) goto LAB_14341e361;
      uVar8 = 0;
      uVar4 = 0;
    }
    local_13b8 = (ulonglong)uVar8 | uVar4 << 0x20;
    FUN_147991740(&local_1448,&local_13a8,param_4);
  }
  if (local_ab8 != 0) {
    FUN_1400020a8();
  }
  if (local_b40 != 0) {
    FUN_1400020a8();
  }
  if (local_98 == '\x01') {
    local_98 = '\0';
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_14341e1c6:
  if ((local_50 ^ (ulonglong)auStack_1468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341e405 FUN_14341e405 body=55 status=ok
// SIG undefined FUN_14341e405(void)

void FUN_14341e405(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacf3e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacf3e8 = FUN_14171c317(FUN_1463b11b5,uVar1,L"ECameraShakeAttenuation");
  }
  return;
}



// FUNCTION 14341e43c FUN_14341e43c body=189 status=ok
// SIG undefined FUN_14341e43c(void)

void FUN_14341e43c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 != 0) {
    lVar2 = FUN_1411080a4();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x2b8), lVar1 != 0)) {
      local_28 = DAT_14c846508;
      local_38 = (undefined4)DAT_14c8464f8;
      uStack_34 = DAT_14c8464f8._4_4_;
      uStack_30 = (undefined4)DAT_14c846500;
      uStack_2c = DAT_14c846500._4_4_;
      local_40 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      local_48 = &local_38;
      FUN_147992164(param_1,&local_40,0x3f800000,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341e4fa FUN_14341e4fa body=55 status=ok
// SIG undefined FUN_14341e4fa(void)

void FUN_14341e4fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacf458 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacf458 = FUN_14171c317(FUN_1463b1420,uVar1,L"ECameraAlphaBlendMode");
  }
  return;
}



// FUNCTION 14341e531 FUN_14341e531 body=69 status=ok
// SIG undefined FUN_14341e531(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e531(void)

{
  _DAT_14cacf468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf470,1);
  return;
}



// FUNCTION 14341e576 FUN_14341e576 body=69 status=ok
// SIG undefined FUN_14341e576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e576(void)

{
  _DAT_14cacf480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf488,1);
  return;
}



// FUNCTION 14341e5bb FUN_14341e5bb body=69 status=ok
// SIG undefined FUN_14341e5bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e5bb(void)

{
  _DAT_14cacf498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf4a0,1);
  return;
}



// FUNCTION 14341e600 FUN_14341e600 body=69 status=ok
// SIG undefined FUN_14341e600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e600(void)

{
  _DAT_14cacf4b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf4b8,1);
  return;
}



// FUNCTION 14341e645 FUN_14341e645 body=69 status=ok
// SIG undefined FUN_14341e645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e645(void)

{
  _DAT_14cacf4c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf4d0,1);
  return;
}



// FUNCTION 14341e68a FUN_14341e68a body=69 status=ok
// SIG undefined FUN_14341e68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e68a(void)

{
  _DAT_14cacf4e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf4e8,1);
  return;
}



// FUNCTION 14341e6d0 FUN_14341e6d0 body=790 status=ok
// SIG undefined FUN_14341e6d0(void)

void FUN_14341e6d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  char *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  char local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  local_29 = '\0';
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_14341e89e;
          }
        }
        _Src = (char *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (char)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_14341e89e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)(param_1 + 0x180) != local_29) {
    *(char *)(param_1 + 0x180) = local_29;
    *(uint *)(param_1 + 0x13c) =
         (*(uint *)(param_1 + 0x13c) & 0xfffffffd) + (uint)(local_29 == '\0') * 2;
    if (local_29 != '\0' && (*(byte *)(param_1 + 0x15c) & 2) != 0) {
      *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xfd;
    }
  }
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341e9e8 FUN_14341e9e8 body=2073 status=ok
// SIG undefined FUN_14341e9e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341e9e8(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [288];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacf558) && (FUN_144b3d300(), DAT_14cacf558 == -1)) {
    FUN_1446f470e(&DAT_14cacf550,L"CanvasRenderTarget2DCanvas",1);
    _Init_thread_footer();
  }
  uVar7 = DAT_14cacf550;
  uVar15 = DAT_14c951640;
  uVar12 = FUN_1411b6034();
  local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
  local_1c8 = (undefined1 **)((ulonglong)local_1c8._4_4_ << 0x20);
  puVar13 = (undefined1 *)FUN_140be85e0(uVar12,uVar15,uVar7,0);
  if (puVar13 == (undefined1 *)0x0) {
    local_1c0 = 0;
    local_1c8 = (undefined1 **)((ulonglong)local_1c8 & 0xffffffffffffff00);
    lVar22 = 0;
    puVar13 = (undefined1 *)FUN_1460d9905(DAT_14c951640,DAT_14cacf550,0,0);
    uVar18 = *(uint *)(puVar13 + 0xc);
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    FUN_1447f71cc(lVar22,0x40000000);
  }
  uVar18 = DAT_14c760db4;
  if ((((*(int *)((longlong)param_1 + 0x17c) != 0) &&
       (uVar3 = *(uint *)(param_1 + 0x2f), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar19 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)((longlong)param_1 + 0x17c))) &&
      (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && (*plVar19 != 0)))))) {
    lVar22 = 0;
    if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
      lVar22 = *plVar19;
    }
    uVar18 = (uint)*(byte *)(lVar22 + 0x150);
  }
  lVar14 = FUN_1447b4020(param_1);
  local_88 = (undefined1 *)(DAT_14c866ff8 - _DAT_14c86a9d8);
  local_78 = (undefined ***)CONCAT44((float)DAT_14c759090,(float)DAT_14c759090);
  lVar22 = lVar14 + 0x50;
  if (lVar14 == 0) {
    lVar22 = 0;
  }
  local_1c8 = (undefined1 **)CONCAT44(local_1c8._4_4_,uVar18);
  local_1c0 = CONCAT44(local_1c0._4_4_,0x3f800000);
  local_80 = local_88;
  FUN_147d8ddfa(local_1a8,lVar22,0,&local_88);
  fVar25 = (float)(**(code **)(*param_1 + 0x358))(param_1);
  fVar26 = (float)(**(code **)(*param_1 + 0x350))(param_1);
  uVar15 = DAT_14c8463d8;
  *(undefined8 *)(puVar13 + 0x370) = DAT_14c8463d0;
  *(undefined8 *)(puVar13 + 0x378) = uVar15;
  uVar6 = DAT_14c8463e8._4_4_;
  uVar5 = (undefined4)DAT_14c8463e8;
  uVar4 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(puVar13 + 0x380) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)(puVar13 + 900) = uVar4;
  *(undefined4 *)(puVar13 + 0x388) = uVar5;
  *(undefined4 *)(puVar13 + 0x38c) = uVar6;
  *(int *)(puVar13 + 0x40) = (int)fVar26;
  *(int *)(puVar13 + 0x44) = (int)fVar25;
  *(int *)(puVar13 + 0x88) = (int)fVar26;
  *(int *)(puVar13 + 0x8c) = (int)fVar25;
  *(undefined8 *)(puVar13 + 0x2e8) = 0;
  *(undefined1 **)(puVar13 + 0x2e0) = local_1a8;
  FUN_14007fbbc(puVar13);
  if (lVar14 == 0) goto LAB_14341ed25;
  uStack_1b0 = CONCAT31(uStack_1b0._1_3_,*(undefined1 *)((longlong)param_1 + 0x181));
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar22 + 0xc60);
  local_1b8 = lVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14341ec3f;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14341ec44;
      goto LAB_14341ec75;
    }
  }
  else {
LAB_14341ec3f:
    if (iVar9 != 0x10) {
LAB_14341ec75:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar22 + 0xc60), iVar9 == 2))
        goto LAB_14341ec44;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14341ec44;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_14341eecd;
        while( true ) {
          uVar18 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar18 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar18 | 1;
            __tlregdtor(&LAB_143425e67);
          }
          lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar22 + 0x310);
          *(undefined8 *)(lVar22 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_14341eecd:
          puVar24 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar24 + 0x17);
          uVar18 = puVar17[0x12];
          if (puVar21 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar3 = *puVar17;
            *puVar17 = *puVar17 + uVar18 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar18) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar24 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar24 + 0x17);
            uVar18 = 0;
            if (puVar21 <= puVar17 + 0x4000) {
              uVar18 = 1;
              goto LAB_14341ef4d;
            }
          }
        }
        uVar18 = uVar18 + 1;
LAB_14341ef4d:
        *(uint **)(puVar17 + 0x10) = puVar21;
        puVar17[0x12] = uVar18;
        iVar9 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14a8198f0;
        *(undefined4 *)(puVar24 + 0x15) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)puVar24 + 0xac) = local_1b8._4_4_;
        *(undefined4 *)(puVar24 + 0x16) = uStack_1b0;
        *(undefined4 *)((longlong)puVar24 + 0xb4) = uStack_1ac;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar18 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
            uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
            iVar9 = 0;
          }
          else {
            uVar23 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar23 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar22 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar22 == 0) {
          uVar8 = 1;
          if ((char)uVar23 != '\x06') {
            uVar8 = uVar23;
          }
          uVar23 = uVar8;
          uVar15 = 0;
        }
        else {
          if ((char)uVar23 == '\x06') {
            uVar23 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar22 + 0x30);
        }
        puVar24[0xf] = uVar15;
        puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar9;
        if (puVar24 == (undefined8 *)0x0) {
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar1 = (int *)(puVar24 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a819880;
        local_60 = (undefined4)local_1b8;
        uStack_5c = local_1b8._4_4_;
        uStack_58 = uStack_1b0;
        uStack_54 = uStack_1ac;
        local_88 = &LAB_143425e2e;
        local_1c8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"CanvasRenderTargetMakeCurrentCommand",&DAT_14cacfcb4);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar20 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar20 = &local_68;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
      goto LAB_14341ed25;
    }
  }
LAB_14341ec44:
  FUN_143425974(&local_1b8,&DAT_14ca85100);
LAB_14341ed25:
  if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) &&
     (0 < (int)param_1[0x2e])) {
    fVar25 = (float)(**(code **)(*param_1 + 0x358))(param_1);
    fVar26 = (float)(**(code **)(*param_1 + 0x350))(param_1);
    local_80 = (undefined1 *)CONCAT44((int)fVar25,(int)fVar26);
    local_88 = puVar13;
    FUN_1447cd2ec(param_1 + 0x2d);
  }
  fVar25 = (float)(**(code **)(*param_1 + 0x358))(param_1);
  fVar26 = (float)(**(code **)(*param_1 + 0x350))(param_1);
  local_80 = (undefined1 *)CONCAT44((int)fVar25,(int)fVar26);
  local_88 = puVar13;
  uVar15 = FUN_14477b072(param_1,DAT_14cacf518);
  (**(code **)(*param_1 + 0x248))(param_1,uVar15,&local_88);
  *(undefined8 *)(puVar13 + 0x2e0) = 0;
  if (lVar14 != 0) {
    FUN_14376e4da(local_1a8,0);
  }
  FUN_140768b6e(param_1,0);
  FUN_14010ad76(local_1a8);
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341f202 FUN_14341f202 body=228 status=ok
// SIG undefined FUN_14341f202(void)

longlong FUN_14341f202(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacf818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b216c;
    local_38 = &LAB_1479977e3;
    local_40 = &LAB_1463b2171;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x750;
    FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341f2e8 FUN_14341f2e8 body=182 status=ok
// SIG undefined FUN_14341f2e8(void)

undefined8 * FUN_14341f2e8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_14a819a28;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1479ace46(param_1 + 1,iVar1,0);
    FUN_1479acea8(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1479ace46(param_1 + 3,iVar1,0);
    FUN_1479acea8(param_1[3],uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar4;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



// FUNCTION 14341f39e FUN_14341f39e body=464 status=ok
// SIG undefined FUN_14341f39e(void)

void FUN_14341f39e(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  longlong lVar15;
  float *pfVar16;
  
  if (((*(byte *)(param_1 + 0x60) & 0x10) != 0) && (*(char *)(param_1 + 0x178) == '\x01')) {
    if (*(char *)(param_1 + 0x688) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x678);
      *(int *)(param_1 + 0x678) = iVar2 + 1;
      if (*(int *)(param_1 + 0x67c) == iVar2) {
        FUN_1479aeff0(param_1 + 0x670);
      }
      memset((void *)((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 0x670)),0,0xd0);
      pfVar16 = (float *)((longlong)(*(int *)(param_1 + 0x678) + -1) * 0xd0 +
                         *(longlong *)(param_1 + 0x670));
      lVar15 = *(longlong *)(param_1 + 0x680);
      if (DAT_14c950c29 == 1) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_1 + 0x680);
        }
      }
      bVar14 = DAT_14c950c29;
      *(longlong *)(pfVar16 + 2) = lVar15;
      *(undefined8 *)(pfVar16 + 0x10) = *(undefined8 *)(param_1 + 0x6b8);
      fVar3 = *(float *)(param_1 + 0x688);
      fVar4 = *(float *)(param_1 + 0x68c);
      fVar5 = *(float *)(param_1 + 0x690);
      fVar6 = *(float *)(param_1 + 0x694);
      fVar7 = *(float *)(param_1 + 0x698);
      fVar8 = *(float *)(param_1 + 0x69c);
      fVar9 = *(float *)(param_1 + 0x6a0);
      fVar10 = *(float *)(param_1 + 0x6a4);
      fVar11 = *(float *)(param_1 + 0x6ac);
      fVar12 = *(float *)(param_1 + 0x6b0);
      fVar13 = *(float *)(param_1 + 0x6b4);
      pfVar16[0xc] = *(float *)(param_1 + 0x6a8);
      pfVar16[0xd] = fVar11;
      pfVar16[0xe] = fVar12;
      pfVar16[0xf] = fVar13;
      pfVar16[8] = fVar7;
      pfVar16[9] = fVar8;
      pfVar16[10] = fVar9;
      pfVar16[0xb] = fVar10;
      pfVar16[4] = fVar3;
      pfVar16[5] = fVar4;
      pfVar16[6] = fVar5;
      pfVar16[7] = fVar6;
      lVar15 = *(longlong *)(param_1 + 0x6c0);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_1 + 0x6c0);
        }
      }
      *(longlong *)(pfVar16 + 0x12) = lVar15;
      *(undefined8 *)(pfVar16 + 0x14) = *(undefined8 *)(param_1 + 0x6c8);
      FUN_140fb3d70(pfVar16 + 0x16,param_1 + 0x6d0);
      fVar3 = *(float *)(param_1 + 0x71c);
      fVar4 = *(float *)(param_1 + 0x720);
      fVar5 = *(float *)(param_1 + 0x724);
      fVar6 = *(float *)(param_1 + 0x728);
      fVar7 = *(float *)(param_1 + 0x72c);
      fVar8 = *(float *)(param_1 + 0x730);
      fVar9 = *(float *)(param_1 + 0x734);
      fVar10 = *(float *)(param_1 + 0x738);
      fVar11 = *(float *)(param_1 + 0x73c);
      fVar12 = *(float *)(param_1 + 0x740);
      fVar13 = *(float *)(param_1 + 0x744);
      pfVar16[0x28] = *(float *)(param_1 + 0x718);
      pfVar16[0x29] = fVar3;
      pfVar16[0x2a] = fVar4;
      pfVar16[0x2b] = fVar5;
      pfVar16[0x2c] = fVar6;
      pfVar16[0x2d] = fVar7;
      pfVar16[0x2e] = fVar8;
      pfVar16[0x2f] = fVar9;
      pfVar16[0x30] = fVar10;
      pfVar16[0x31] = fVar11;
      pfVar16[0x32] = fVar12;
      pfVar16[0x33] = fVar13;
      lVar15 = FUN_1447210f0(param_1);
      *pfVar16 = (float)*(double *)(lVar15 + 0x6d0);
    }
    else {
      FUN_140cbb1e0(*(undefined8 *)(param_1 + 0x670),*(undefined4 *)(param_1 + 0x678));
      *(undefined4 *)(param_1 + 0x678) = 0;
      if (*(int *)(param_1 + 0x67c) != 0) {
        FUN_1479af084(param_1 + 0x670,0);
      }
    }
    if (*(longlong *)(param_1 + 0x430) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
      *pbVar1 = *pbVar1 | 0x40;
    }
  }
  return;
}



// FUNCTION 14341f56e FUN_14341f56e body=69 status=ok
// SIG undefined FUN_14341f56e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341f56e(void)

{
  _DAT_14cacf8b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341f5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf8c0,1);
  return;
}



// FUNCTION 14341f5b3 FUN_14341f5b3 body=69 status=ok
// SIG undefined FUN_14341f5b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14341f5b3(void)

{
  _DAT_14cacf8c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014341f5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf8d0,1);
  return;
}



// FUNCTION 14341f60c FUN_14341f60c body=290 status=ok
// SIG undefined FUN_14341f60c(void)

void FUN_14341f60c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143603670();
  if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    lVar1 = param_1[0x85];
    if (lVar1 != 0) {
      local_18 = *(undefined8 *)(lVar1 + 0x1c0);
      local_28 = *(undefined8 *)(lVar1 + 0x1b0);
      uStack_20 = *(undefined8 *)(lVar1 + 0x1b8);
      local_48 = *(undefined4 *)(lVar1 + 0x198);
      uStack_44 = *(undefined4 *)(lVar1 + 0x19c);
      uStack_40 = *(undefined4 *)(lVar1 + 0x1a0);
      uStack_3c = *(undefined4 *)(lVar1 + 0x1a4);
      local_38 = *(undefined8 *)(lVar1 + 0x1a8);
      (**(code **)(*param_1 + 0x7b0))(param_1);
      if (((*(byte *)(param_1[0x85] + 0x4a) & 2) != 0) && (lVar1 = param_1[0x86], lVar1 != 0)) {
        FUN_14082bc44(param_1[0x85] + 0x40,lVar1,lVar1 + 0x40);
      }
    }
    lVar1 = param_1[0x86];
    if ((lVar1 != 0) && (param_1[0x87] != 0)) {
      (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xb8))(lVar1 + 0x178);
    }
    if (param_1[0x78] == 0) {
      iVar3 = FUN_14487fd02(param_1);
      if (((iVar3 != 3) && (plVar2 = (longlong *)param_1[0x86], plVar2 != (longlong *)0x0)) &&
         ((*(byte *)((longlong)plVar2 + 0x349) & 8) != 0)) {
        (**(code **)(*plVar2 + 0x828))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341f746 FUN_14341f746 body=527 status=ok
// SIG undefined FUN_14341f746(void)

ulonglong FUN_14341f746(longlong *param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
    local_c8 = DAT_14c8464e0;
    dStack_c0 = DAT_14c8464e8;
    local_b8 = DAT_14c8464f0;
    local_d8 = DAT_14c8463e0;
    dStack_d0 = DAT_14c8463e8;
    local_e8 = DAT_14c8463d0;
    dStack_e0 = DAT_14c8463d8;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2 == 0);
    if (param_2 != 0) {
      cVar4 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x4a8))(param_1,&local_e8,param_2,0);
        uVar5 = CONCAT71((int7)((ulonglong)&local_e8 >> 8),1);
        goto LAB_14341f836;
      }
    }
    local_e8 = (double)param_1[0x48];
    dStack_e0 = (double)param_1[0x49];
    local_d8 = (double)param_1[0x4a];
    dStack_d0 = (double)param_1[0x4b];
    local_c8 = (double)param_1[0x4c];
    dStack_c0 = (double)param_1[0x4d];
    local_b8 = (double)param_1[0x4e];
  }
LAB_14341f836:
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar6 = dVar3 * local_e8 - dStack_e0 * dVar2;
  dVar7 = param_3[2] * dStack_e0 - local_d8 * dVar3;
  dVar8 = dVar2 * local_d8 - local_e8 * param_3[2];
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar1 = param_3[2];
  *param_4 = (dVar6 * dStack_e0 - dVar8 * local_d8) + dStack_d0 * dVar7 + dVar2 + local_c8;
  param_4[1] = (local_d8 * dVar7 - local_e8 * dVar6) + dStack_d0 * dVar8 + dVar3 + dStack_c0;
  param_4[2] = dStack_d0 * dVar6 + dVar1 + (dVar8 * local_e8 - dVar7 * dStack_e0) + local_b8;
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341f956 FUN_14341f956 body=512 status=ok
// SIG undefined FUN_14341f956(void)

ulonglong FUN_14341f956(longlong *param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 == (longlong *)0x0) {
    uVar7 = 0;
    local_f8 = DAT_14c8463d0;
    dStack_f0 = DAT_14c8463d8;
    local_e8 = DAT_14c8463e0;
    dStack_e0 = DAT_14c8463e8;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_2 == 0);
    if (param_2 != 0) {
      cVar6 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
      if (cVar6 != '\0') {
        (**(code **)(*param_1 + 0x4a8))(param_1,&local_f8,param_2,0);
        uVar7 = CONCAT71((int7)((ulonglong)&local_f8 >> 8),1);
        goto LAB_14341fa25;
      }
    }
    local_f8 = (double)param_1[0x48];
    dStack_f0 = (double)param_1[0x49];
    local_e8 = (double)param_1[0x4a];
    dStack_e0 = (double)param_1[0x4b];
  }
LAB_14341fa25:
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = dStack_f0 * dVar3 - dVar2 * local_e8;
  dVar4 = dVar4 + dVar4;
  dVar5 = local_f8 * dVar2 - dVar1 * dStack_f0;
  dVar5 = dVar5 + dVar5;
  dVar8 = local_e8 * dVar1 - dVar3 * local_f8;
  dVar8 = dVar8 + dVar8;
  *param_4 = (dStack_f0 * dVar5 - dVar8 * local_e8) + dStack_e0 * dVar4 + dVar1;
  param_4[1] = (local_e8 * dVar4 - dVar5 * local_f8) + dStack_e0 * dVar8 + dVar2;
  param_4[2] = (local_f8 * dVar8 - dVar4 * dStack_f0) + dStack_e0 * dVar5 + dVar3;
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14341fb58 FUN_14341fb58 body=1134 status=ok
// SIG undefined FUN_14341fb58(void)

void FUN_14341fb58(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) {
    param_3 = 0;
  }
  plVar1 = (longlong *)param_1[0x8a];
  if ((plVar1 == param_2) && (param_3 == *(longlong *)((longlong)param_1 + 0x444)))
  goto LAB_14341fed4;
  plVar9 = plVar1;
  if (param_2 != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[0x15];
    if (plVar9 != (longlong *)0x0) {
      if (DAT_14caf64b8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b4754c;
        local_78 = &LAB_147c45ce0;
        local_80 = &LAB_1463f1ff4;
        local_88 = &DAT_149e063b2;
        local_90 = 0x4000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
          DAT_14caf64b8 + 0x30)) {
        while( true ) {
          if (plVar9 == param_1) goto LAB_14341fed4;
          lVar5 = (**(code **)(*plVar9 + 0x640))(plVar9);
          if ((lVar5 == 0) || (plVar9 = *(longlong **)(lVar5 + 0xa8), plVar9 == (longlong *)0x0))
          break;
          if (DAT_14caf64b8 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_142b4754c;
            local_70 = &local_50;
            local_78 = &LAB_147c45ce0;
            local_80 = &LAB_1463f1ff4;
            local_88 = &DAT_149e063b2;
            local_90 = 0x4000000000;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0x428;
            FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
          }
          if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
              DAT_14caf64b8 + 0x30)) break;
        }
      }
    }
    plVar9 = (longlong *)param_1[0x8a];
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  param_1[0x8a] = (longlong)param_2;
  *(longlong *)((longlong)param_1 + 0x444) = param_3;
  if (plVar1 != param_2) {
    *(short *)(param_1 + 0x88) = (short)param_1[0x88] + 1;
  }
  plVar8 = (longlong *)param_1[0x86];
  if (plVar8 != (longlong *)0x0) {
    plVar7 = param_2;
    if (param_2 == (longlong *)0x0) {
      if (plVar1 != (longlong *)0x0) {
        FUN_1417bab5b(plVar8 + 8,plVar9);
LAB_14341fc88:
        FUN_1417ba918(param_1[0x86] + 0x40);
        cVar6 = '\0';
        goto LAB_14341fca3;
      }
LAB_14341fcc6:
      cVar6 = '\0';
      *(undefined8 *)((longlong)param_1 + 0x444) = 0;
      *(byte *)((longlong)param_1 + 0x442) = *(byte *)((longlong)param_1 + 0x442) & 0xfd;
      *(byte *)(plVar8 + 0x93) = *(byte *)(plVar8 + 0x93) & 0xf8;
      *(undefined8 *)((longlong)plVar8 + 0x49c) = 0;
      memset(plVar8 + 0x95,0,0x100);
      *(undefined4 *)(plVar8 + 0xaf) = 0xffffffff;
      *(undefined4 *)((longlong)plVar8 + 0x54c) = 0xffffffff;
      *(undefined4 *)((longlong)plVar8 + 0x4ac) = 0x3f800000;
LAB_14341fd18:
      plVar8 = (longlong *)param_1[0x86];
    }
    else {
      do {
        cVar4 = (**(code **)(*plVar7 + 0x480))(plVar7);
        if (cVar4 != '\0') break;
        plVar9 = plVar7 + 0x24;
        plVar7 = (longlong *)*plVar9;
      } while ((longlong *)*plVar9 != (longlong *)0x0);
      cVar6 = cVar4;
      if (plVar1 != param_2) {
        FUN_1417bab5b(param_1[0x86] + 0x40);
        cVar6 = '\x01';
        if (cVar4 == '\0') goto LAB_14341fc88;
      }
LAB_14341fca3:
      plVar8 = (longlong *)param_1[0x86];
      if (param_2 == (longlong *)0x0) goto LAB_14341fcc6;
      if ((*(byte *)(param_1 + 0xaa) & 1) == 0) {
        (**(code **)(*plVar8 + 0x658))(plVar8);
        goto LAB_14341fd18;
      }
    }
    pbVar2 = (byte *)plVar8[0x100];
    if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
      *(char *)((longlong)plVar8 + 0x7eb) = cVar6;
    }
    else {
      cVar4 = *(char *)((longlong)plVar8 + 0x7eb);
      if ((bool)cVar6 != (cVar4 != '\0')) {
        uVar3 = *(undefined8 *)(pbVar2 + 0x28);
        FUN_1402eb48e(uVar3,plVar8 + 0xfc);
        *(char *)((longlong)plVar8 + 0x7eb) = cVar6;
        FUN_1402eb97e(uVar3,plVar8 + 0xfc);
        cVar4 = *(char *)((longlong)plVar8 + 0x7eb);
      }
      if (cVar4 == '\0') {
        *(undefined4 *)(plVar8[0x100] + 0x24) = 0xbf800000;
      }
    }
    if ((*(byte *)(param_1 + 0x2f) & 0xfe) == 2) {
      *(byte *)((longlong)param_1 + 0x442) =
           *(byte *)((longlong)param_1 + 0x442) & 0xfe | param_1[0x8a] != 0;
    }
  }
  if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
LAB_14341fed4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14341ffe8 FUN_14341ffe8 body=77 status=ok
// SIG undefined FUN_14341ffe8(void)

void FUN_14341ffe8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x1e8) + 0x48))(lVar1 + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x000143420029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8) + 0x50))
              (*(longlong *)(param_1 + 0x430) + 0x1e8);
    return;
  }
  return;
}



// FUNCTION 143420036 FUN_143420036 body=278 status=ok
// SIG undefined FUN_143420036(void)

void FUN_143420036(longlong *param_1,double *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  char local_40;
  char local_3f;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x86] != 0) {
    local_68 = param_2[2];
    local_78 = *param_2;
    dStack_70 = param_2[1];
    (**(code **)(*param_1 + 0x328))(*(undefined4 *)param_2,&local_90);
    if (param_3 == '\0') {
      local_78 = local_90 + local_78;
      dStack_70 = local_88 + dStack_70;
    }
    if (param_4 == '\0') {
      local_68 = local_80 + local_68;
    }
    (**(code **)(*(longlong *)param_1[0x86] + 0x688))((longlong *)param_1[0x86],&local_78);
    local_48 = param_2[2];
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_40 = param_3;
    local_3f = param_4;
    uVar1 = FUN_14477b072(param_1,DAT_14cacf738);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434201ee FUN_1434201ee body=1799 status=ok
// SIG undefined FUN_1434201ee(void)

void FUN_1434201ee(longlong param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  void *_Dst;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  code *local_158 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((((*(longlong *)(param_1 + 0x428) != 0) &&
       (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x428) + 0xae8), lVar20 != 0)) &&
      (plVar13 = *(longlong **)(lVar20 + 0x358), plVar13 != (longlong *)0x0)) &&
     ((*(longlong *)(param_1 + 0x430) != 0 && (0 < (longlong)*(int *)(param_1 + 0x678))))) {
    lVar20 = param_1 + 0x670;
    uVar15 = (longlong)*(int *)(param_1 + 0x678);
    do {
      uVar16 = uVar15 - 1;
      lVar21 = *(longlong *)(param_1 + 0x670);
      lVar9 = FUN_1447210f0(param_1);
      if (*(double *)(lVar9 + 0x6d0) - (double)*(float *)(lVar21 + uVar16 * 0xd0) <= 0.5) {
        if (*plVar13 == 0) {
          lVar9 = 0;
LAB_14342032f:
          lVar11 = 0;
        }
        else {
          lVar10 = FUN_144b00ba4();
          lVar9 = *plVar13;
          lVar11 = lVar9;
          if (lVar10 == DAT_14c951640) {
            if ((*(int *)(lVar9 + 0x170) == 0) ||
               (*(int *)(*(longlong *)(lVar9 + 0x168) + 0x10) == 0)) goto LAB_14342032f;
            lVar11 = **(longlong **)(*(longlong *)(lVar9 + 0x168) + 8);
          }
        }
        lVar21 = lVar21 + uVar16 * 0xd0;
        lVar10 = *(longlong *)(lVar21 + 8);
        if ((lVar10 != 0) && (lVar10 == lVar11)) {
          fVar23 = *(float *)(lVar21 + 0x14);
          fVar3 = *(float *)(plVar13 + 0x29);
          fVar26 = fVar3 - fVar23;
          uVar1 = 0;
          do {
            uVar14 = uVar1;
            if (*(int *)(lVar9 + 0x160) <= (int)uVar14) goto LAB_1434202ff;
            uVar1 = uVar14 + 1;
            cVar6 = FUN_147903fc2(lVar9,uVar14,uVar1 & 0xffffffff,fVar3);
          } while (cVar6 == '\0');
          iVar8 = -1;
          if ((int)uVar14 < (int)plVar13[0x22]) {
            iVar8 = *(int *)(plVar13[0x21] + -4 + uVar1 * 4);
          }
          local_1a8 = lVar20;
          local_1a0 = uVar14;
          iVar19 = -1;
          do {
            iVar17 = iVar19 + 1;
            if (*(int *)(lVar9 + 0x160) <= iVar17) {
              iVar17 = -1;
              break;
            }
            cVar6 = FUN_147903fc2(lVar9,iVar17,iVar19 + 2,fVar23);
            iVar19 = iVar17;
          } while (cVar6 == '\0');
          bVar5 = true;
          if (iVar8 + 1 == (int)uVar1) {
            fVar23 = (float)FUN_14790427a(lVar9);
            bVar5 = ABS(fVar26) <= fVar23 * 0.5;
          }
          lVar20 = local_1a8;
          if ((iVar17 + 1 == (int)uVar1) &&
             ((bool)(bVar5 & 0.0 <= fVar26 * *(float *)((longlong)plVar13 + 0x14c)))) {
            lVar20 = *(longlong *)(param_1 + 0x1c8);
            if (lVar20 == 0) {
              local_c8 = DAT_14c8464f0;
              local_d8 = DAT_14c8464e0;
              dStack_d0 = DAT_14c8464e8;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              uStack_e0 = 0x3ff0000000000000;
            }
            else {
              local_d8 = *(double *)(lVar20 + 0x260);
              dStack_d0 = *(double *)(lVar20 + 0x268);
              local_c8 = *(double *)(lVar20 + 0x270);
              local_f8 = *(undefined8 *)(lVar20 + 0x240);
              uStack_f0 = *(undefined8 *)(lVar20 + 0x248);
              local_e8 = *(undefined8 *)(lVar20 + 0x250);
              uStack_e0 = *(undefined8 *)(lVar20 + 600);
            }
            lVar20 = (uVar16 & 0xffffffff) * 0xd0 + *(longlong *)(param_1 + 0x670);
            cVar6 = FUN_1434208f6(param_1,lVar20);
            if (cVar6 != '\0') {
              fVar23 = *(float *)(lVar20 + 0x14);
              fVar3 = *(float *)(plVar13 + 0x29);
              fVar26 = fVar3 - fVar23;
              if (0.0001 < ABS(fVar26)) {
                lVar20 = *plVar13;
                puVar22 = *(undefined8 **)(*(longlong *)(param_1 + 0x428) + 0x658);
                if (puVar22 == (undefined8 *)0x0) {
                  puVar22 = *(undefined8 **)(*(longlong *)(param_1 + 0x428) + 0x660);
                  if ((DAT_14c950c29 & puVar22 != (undefined8 *)0x0) != 0) goto LAB_1434208e9;
                  if (puVar22 != (undefined8 *)0x0) goto LAB_143420568;
LAB_143420593:
                  puVar22 = (undefined8 *)0x0;
                }
                else {
                  if (DAT_14c950c29 == 1) {
LAB_1434208e9:
                    FUN_1456cec3c(puVar22);
                  }
LAB_143420568:
                  if (DAT_14cb06da8 == 0) {
                    local_1c0 = local_158;
                    local_158[0] = FUN_1449e2820;
                    local_1b0 = FUN_14081d0ea;
                    local_1b8 = &LAB_1464003b0;
                    local_1c8 = &LAB_147d17bdf;
                    local_1d0 = &LAB_1417edf22;
                    local_1d8 = L"Engine";
                    local_1e0 = 0;
                    local_1e8 = 0x10000000;
                    local_1f0 = 8;
                    local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,0x588);
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                  }
                  if ((*(int *)(puVar22[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(puVar22[2] + 0x30) +
                       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                  goto LAB_143420593;
                }
                local_1f8 = puVar22;
                FUN_1433dbeea(lVar20,local_158,fVar23,fVar3);
                if ((*(longlong *)(param_1 + 0x430) != 0) &&
                   (1e-08 < ABS(*(float *)((longlong)plVar13 + 0x14c)))) {
                  FUN_1479c2c82(*(longlong *)(param_1 + 0x430),
                                fVar26 / *(float *)((longlong)plVar13 + 0x14c),local_158);
                  lVar20 = *(longlong *)(param_1 + 0x1c8);
                  if (lVar20 == 0) {
                    local_178 = DAT_14c8464e0;
                    dStack_170 = DAT_14c8464e8;
                    local_168 = DAT_14c8464f0;
                    uVar24 = SUB84(DAT_14c8464e0,0);
                    uVar25 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
                  }
                  else {
                    uVar24 = *(undefined4 *)(lVar20 + 0x260);
                    uVar25 = *(undefined4 *)(lVar20 + 0x264);
                    local_178 = *(double *)(lVar20 + 0x260);
                    dStack_170 = *(double *)(lVar20 + 0x268);
                    local_168 = *(double *)(lVar20 + 0x270);
                  }
                  pbVar2 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x34a);
                  *pbVar2 = *pbVar2 & 0xfd;
                  bVar7 = 1;
                  if ((local_d8 == (double)CONCAT44(uVar25,uVar24)) &&
                     (!NAN(local_d8) && !NAN((double)CONCAT44(uVar25,uVar24)))) {
                    if ((dStack_d0 == dStack_170) && (!NAN(dStack_d0) && !NAN(dStack_170))) {
                      bVar7 = -(local_168 != local_c8) & 1;
                    }
                  }
                  bVar4 = *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
                  *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4) =
                       bVar4 & 0xdf | ((bVar4 & 0x20) >> 5 | bVar7) << 5;
                  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8);
                  lVar20 = *(longlong *)(param_1 + 0x1c8);
                  if (lVar20 == 0) {
                    local_198 = 0;
                    uStack_190 = 0;
                    local_188 = 0;
                    uStack_180 = 0x3ff0000000000000;
                  }
                  else {
                    local_198 = *(undefined8 *)(lVar20 + 0x240);
                    uStack_190 = *(undefined8 *)(lVar20 + 0x248);
                    local_188 = *(undefined8 *)(lVar20 + 0x250);
                    uStack_180 = *(undefined8 *)(lVar20 + 600);
                  }
                  local_1f8 = &local_198;
                  (**(code **)(*plVar13 + 0x20))(plVar13,&local_d8,&local_f8,&local_178);
                }
              }
            }
            _Dst = *(void **)(param_1 + 0x670);
            uVar18 = (uint)uVar15;
            FUN_140cbb1e0(_Dst,uVar15 & 0xffffffff);
            iVar8 = *(int *)(param_1 + 0x678) - uVar18;
            uVar12 = uVar18;
            if (iVar8 != 0) {
              memmove(_Dst,(void *)((ulonglong)(uVar18 & 0x7fffffff) * 0xd0 + (longlong)_Dst),
                      (longlong)iVar8 * 0xd0);
              uVar12 = *(uint *)(param_1 + 0x678);
            }
            *(uint *)(param_1 + 0x678) = uVar12 - uVar18;
            FUN_1479af0f4(local_1a8);
            break;
          }
        }
      }
LAB_1434202ff:
      uVar15 = uVar16;
    } while (0 < (int)uVar16);
  }
  if ((local_c0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434208f6 FUN_1434208f6 body=2317 status=ok
// SIG undefined FUN_1434208f6(void)

ulonglong FUN_1434208f6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  undefined8 local_250;
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  plVar1 = *(longlong **)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    if ((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 0x1fb) != '\x02')) {
      uVar5 = 0;
      goto LAB_143421180;
    }
    if (lVar2 == 0) {
LAB_143420aae:
      uVar22 = (undefined4)plVar1[0x48];
      uVar23 = *(undefined4 *)((longlong)plVar1 + 0x244);
      uVar16 = (undefined4)plVar1[0x49];
      uVar17 = *(undefined4 *)((longlong)plVar1 + 0x24c);
      uVar26 = (undefined4)plVar1[0x4a];
      uVar27 = *(undefined4 *)((longlong)plVar1 + 0x254);
      uStack_150 = (undefined4)plVar1[0x4b];
      uStack_14c = *(undefined4 *)((longlong)plVar1 + 0x25c);
      dVar9 = (double)plVar1[0x4c];
      dVar10 = (double)plVar1[0x4d];
      dVar8 = (double)plVar1[0x4e];
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0x4c8))(plVar1,lVar2);
      if (cVar3 == '\0') goto LAB_143420aae;
      (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_168,lVar2,0);
      dVar9 = local_148;
      dVar10 = dStack_140;
      dVar8 = local_138;
      uVar22 = (undefined4)local_168;
      uVar23 = local_168._4_4_;
      uVar16 = (undefined4)uStack_160;
      uVar17 = uStack_160._4_4_;
      uVar26 = (undefined4)local_158;
      uVar27 = local_158._4_4_;
    }
    dVar14 = *(double *)(param_2 + 0x18);
    dVar15 = *(double *)(param_2 + 0x20);
    dVar28 = dVar15 * (double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar17,uVar16) * dVar14;
    dVar29 = *(double *)(param_2 + 0x28) * (double)CONCAT44(uVar17,uVar16) -
             (double)CONCAT44(uVar27,uVar26) * dVar15;
    dVar20 = dVar14 * (double)CONCAT44(uVar27,uVar26) -
             (double)CONCAT44(uVar23,uVar22) * *(double *)(param_2 + 0x28);
    dVar21 = (double)CONCAT44(uStack_14c,uStack_150) * 0.0 -
             (double)CONCAT44(uStack_14c,uStack_150) * 0.0;
    dVar28 = dVar28 + dVar28;
    dVar7 = (double)CONCAT44(uStack_14c,uStack_150);
    dVar13 = (double)CONCAT44(uStack_14c,uStack_150);
    dVar11 = (double)CONCAT44(uStack_14c,uStack_150) * dVar28 + *(double *)(param_2 + 0x28);
    if (*(char *)(param_2 + 0x12) == '\x01') {
      local_308._8_4_ = SUB84(dVar21 + dVar21,0);
      local_308._0_8_ = dVar28;
      local_308._12_4_ = (int)((ulonglong)(dVar21 + dVar21) >> 0x20);
      local_2e8._8_4_ = uStack_150;
      local_2e8._0_8_ = dVar11;
      local_2e8._12_4_ = uStack_14c;
      local_2d8._8_4_ = uVar26;
      local_2d8._0_8_ = CONCAT44(uVar17,uVar16);
      local_2d8._12_4_ = uVar27;
      dVar11 = *(double *)(param_2 + 0x30) * 0.01745329238474369;
      dVar28 = *(double *)(param_2 + 0x38) * 0.01745329238474369;
      dVar12 = *(double *)(param_2 + 0x40) * 0.01745329238474369;
      local_320 = dVar8;
      local_318 = dVar7;
      dStack_310 = dVar13;
      local_2f8 = dVar20;
      dStack_2f0 = dVar21;
      local_2c8 = dVar14;
      dStack_2c0 = dVar15;
      local_2a8 = dVar9;
      dStack_2a0 = dVar10;
      dVar7 = sin(dVar11);
      dVar8 = sin(dVar28);
      dVar9 = sin(dVar12);
      sin(0.0);
      dVar10 = cos(dVar11);
      dVar11 = cos(dVar28);
      dVar28 = cos(dVar12);
      cos(0.0);
      local_1e8 = dVar10 * dVar11;
      local_1e0 = dVar8 * dVar10;
      local_1d0 = 0;
      local_1c8 = dVar7 * dVar9 * dVar11 - dVar8 * dVar28;
      local_1c0 = dVar7 * dVar9 * dVar8 + dVar11 * dVar28;
      local_1b8 = -dVar9 * dVar10;
      local_1b0 = 0;
      local_1a8 = -(dVar7 * dVar28 * dVar11 + dVar8 * dVar9);
      local_1a0 = dVar11 * dVar9 - dVar8 * dVar7 * dVar28;
      local_198 = dVar10 * dVar28;
      local_190 = 0;
      dVar10 = (double)CONCAT44(uVar17,uVar16);
      dVar8 = (double)CONCAT44(uVar17,uVar16) + dVar10;
      dVar11 = (double)CONCAT44(uVar27,uVar26) + (double)CONCAT44(uVar27,uVar26);
      local_260 = (double)CONCAT44(uVar23,uVar22) * dVar8;
      dVar9 = (double)CONCAT44(uVar27,uVar26) * dVar11;
      local_268 = 1.0 - (dVar10 * dVar8 + dVar9);
      local_258 = (double)CONCAT44(uVar23,uVar22) * dVar11;
      local_248 = local_260 - dVar11 * local_318;
      local_228 = dVar8 * local_318 + local_258;
      local_188 = DAT_14c8464e0;
      local_208 = DAT_14c8464e0;
      local_238 = (double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar23,uVar22);
      local_260 = dVar11 * local_318 + local_260;
      dVar28 = (double)CONCAT44(uVar23,uVar22) * local_238;
      local_240 = 1.0 - (dVar9 + dVar28);
      local_238 = local_238 * local_318;
      local_220 = dVar10 * dVar11 - local_238;
      local_180 = DAT_14c8464e8;
      local_200 = DAT_14c8464e8;
      local_258 = local_258 - dVar8 * local_318;
      local_238 = local_238 + dVar10 * dVar11;
      local_218 = 1.0 - (dVar10 * dVar8 + dVar28);
      local_178 = DAT_14c8464f0;
      local_1f8 = DAT_14c8464f0;
      local_170 = 0x3ff0000000000000;
      local_250 = 0;
      local_230 = 0;
      local_210 = 0;
      local_1f0 = 0x3ff0000000000000;
      local_1d8 = dVar7;
      FUN_1447fea8d(&local_168);
      dVar10 = local_158;
      dVar9 = uStack_160;
      dVar8 = local_168;
      local_328 = local_138;
      local_340 = dStack_140;
      local_338 = local_120;
      local_330 = local_128;
      dVar12 = 0.0;
      if ((((uStack_160 != 0.0) || (NAN(uStack_160))) || (local_168 != 0.0)) || (NAN(local_168))) {
        dVar12 = atan2(uStack_160,local_168);
        dVar12 = dVar12 * 57.29577951308232;
      }
      dVar8 = SQRT(dVar9 * dVar9 + dVar8 * dVar8);
      dVar21 = 0.0;
      local_2b8 = uVar22;
      uStack_2b4 = uVar23;
      uStack_2b0 = uVar16;
      uStack_2ac = uVar17;
      if (((dVar10 != 0.0) || (NAN(dVar10))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
        dVar21 = atan2(dVar10,dVar8);
        dVar21 = dVar21 * 57.29577951308232;
      }
      dVar8 = sin(dVar21 * 0.01745329238474369);
      dVar10 = sin(dVar12 * 0.01745329238474369);
      dVar11 = cos(dVar21 * 0.01745329238474369);
      dVar9 = cos(dVar12 * 0.01745329238474369);
      local_270 = 0.0;
      dVar28 = dVar8 * 0.0 * dVar9 - dVar10;
      dVar9 = dVar8 * 0.0 * dVar10 + dVar9;
      dVar8 = local_328 * dVar11 * -0.0 + local_148 * dVar28 + local_340 * dVar9;
      dVar9 = local_118 * dVar11 * -0.0 + local_330 * dVar28 + local_338 * dVar9;
      if (((dVar9 != 0.0) || (NAN(dVar9))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
        local_270 = atan2(dVar9,dVar8);
        local_270 = local_270 * 57.29577951308232;
      }
      dVar7 = local_318;
      dVar13 = dStack_310;
      dVar9 = local_2a8;
      dVar10 = dStack_2a0;
      dVar8 = local_320;
      uVar16 = local_2d8._0_4_;
      uVar17 = local_2d8._4_4_;
      uVar18 = local_2d8._8_4_;
      uVar19 = local_2d8._12_4_;
      uVar22 = local_2b8;
      uVar23 = uStack_2b4;
      uVar24 = uStack_2b0;
      uVar25 = uStack_2ac;
      dVar28 = (double)local_308._0_8_;
      dVar11 = (double)local_2e8._0_8_;
      dVar20 = local_2f8;
      dVar14 = local_2c8;
      dVar15 = dStack_2c0;
    }
    else {
      dVar21 = *(double *)(param_2 + 0x30);
      dVar12 = *(double *)(param_2 + 0x38);
      local_270 = *(double *)(param_2 + 0x40);
      uVar18 = uVar26;
      uVar19 = uVar27;
      uVar24 = uVar16;
      uVar25 = uVar17;
    }
    lVar4 = param_1[0x39];
    local_280 = dVar21;
    local_278 = dVar12;
    if (lVar4 != 0) {
      dVar29 = dVar29 + dVar29;
      dVar20 = dVar20 + dVar20;
      local_158 = (dVar8 + dVar11 + (dVar20 * (double)CONCAT44(uVar23,uVar22) -
                                    (double)CONCAT44(uVar17,uVar16) * dVar29)) -
                  *(double *)(lVar4 + 0x270);
      local_168 = (dVar9 + (dVar28 * (double)CONCAT44(uVar25,uVar24) -
                           (double)CONCAT44(uVar19,uVar18) * dVar20) + dVar14 + dVar7 * dVar29) -
                  *(double *)(lVar4 + 0x260);
      uStack_160 = (dVar10 + ((double)CONCAT44(uVar27,uVar26) * dVar29 -
                             (double)CONCAT44(uVar23,uVar22) * dVar28) + dVar15 + dVar13 * dVar20) -
                   *(double *)(lVar4 + 0x268);
      pdVar6 = &local_280;
LAB_143421152:
      local_348 = 0;
      local_350 = 0;
      local_358 = 0;
      FUN_1407fd932(lVar4,&local_168,pdVar6,0);
    }
  }
  else {
    FUN_140496eb6(&local_1e8,param_2 + 0x18,param_1);
    local_288 = *(undefined8 *)(param_2 + 0x40);
    local_298 = *(double *)(param_2 + 0x30);
    uStack_290 = *(undefined8 *)(param_2 + 0x38);
    lVar4 = param_1[0x39];
    if (lVar4 != 0) {
      local_158 = local_1d8 - *(double *)(lVar4 + 0x270);
      uStack_160 = local_1e0 - *(double *)(lVar4 + 0x268);
      local_168 = local_1e8 - *(double *)(lVar4 + 0x260);
      pdVar6 = &local_298;
      goto LAB_143421152;
    }
  }
  *(byte *)(param_1[0x86] + 0x5b4) = *(byte *)(param_1[0x86] + 0x5b4) | 0x20;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  (**(code **)(*param_1 + 0x7a8))(param_1,plVar1,lVar2,1);
LAB_143421180:
  if ((local_e0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342120e FUN_14342120e body=69 status=ok
// SIG undefined FUN_14342120e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342120e(void)

{
  _DAT_14cacf948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143421250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf950,1);
  return;
}



// FUNCTION 143421253 FUN_143421253 body=69 status=ok
// SIG undefined FUN_143421253(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143421253(void)

{
  _DAT_14cacf960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143421295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf968,1);
  return;
}



// FUNCTION 143421298 FUN_143421298 body=69 status=ok
// SIG undefined FUN_143421298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143421298(void)

{
  _DAT_14cacf978 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434212da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf980,1);
  return;
}



// FUNCTION 1434212dd FUN_1434212dd body=69 status=ok
// SIG undefined FUN_1434212dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434212dd(void)

{
  _DAT_14cacf990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342131f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf998,1);
  return;
}



// FUNCTION 143421322 FUN_143421322 body=69 status=ok
// SIG undefined FUN_143421322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143421322(void)

{
  _DAT_14cacf9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143421364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacf9d0,1);
  return;
}



// FUNCTION 143421378 FUN_143421378 body=997 status=ok
// SIG undefined FUN_143421378(void)

void FUN_143421378(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))();
  param_1[2] = param_2;
  iVar4 = *(int *)(param_1[1] + 0x30);
  if (param_1 + 3 != param_3) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 4) = (int)param_3[1];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  if (param_1 + 5 != param_4) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = *param_4;
    *param_4 = 0;
    *(int *)(param_1 + 6) = (int)param_4[1];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  lVar9 = param_1[1];
  dVar11 = (double)iVar4;
  *(float *)(param_1 + 7) = (float)((*(double *)(lVar9 + 0x120) / dVar11) * 1000.0);
  *(float *)((longlong)param_1 + 0x3c) = (float)((*(double *)(lVar9 + 0x110) / dVar11) * 1000.0);
  *(float *)(param_1 + 8) = (float)((*(double *)(lVar9 + 0x108) / dVar11) * 1000.0);
  dVar11 = *(double *)(lVar9 + 0x128) * 1000.0;
  param_1[9] = (longlong)dVar11;
  iVar5 = *(int *)(lVar9 + 0x130);
  *(int *)(param_1 + 10) = iVar5;
  param_1[0xb] = (longlong)(*(double *)(lVar9 + 0x138) * 1000.0);
  if (iVar5 < 1) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar11 / (double)iVar5;
  }
  param_1[0xc] = (longlong)dVar11;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(lVar9 + 0x140);
  fVar12 = (float)iVar4;
  *(float *)((longlong)param_1 + 0x6c) = ((float)*(uint *)(lVar9 + 0xd8) / fVar12) * 100.0;
  *(float *)(param_1 + 0xe) = ((float)*(uint *)(lVar9 + 0xdc) / fVar12) * 100.0;
  *(float *)((longlong)param_1 + 0x74) = ((float)*(uint *)(lVar9 + 0xe4) / fVar12) * 100.0;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (0 < DAT_14cacf9e8) {
    lVar9 = 0;
    do {
      iVar4 = *(int *)(DAT_14cacf9e0 + lVar9 * 4);
      lVar2 = (longlong)((double)iVar4 * *(double *)(param_1[1] + 0x28));
      lVar3 = lVar2 - *(longlong *)(param_1[1] + 0x30);
      if (lVar3 < 1) {
        lVar3 = 0;
      }
      (**(code **)(*param_1 + 0x28))(param_1,iVar4,(float)(((double)lVar3 * 100.0) / (double)lVar2))
      ;
      lVar9 = lVar9 + 1;
    } while (lVar9 < DAT_14cacf9e8);
  }
  if ((int)param_1[4] == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)param_1[3];
  }
  FUN_140002266(local_80,L"--- Begin : Hitch chart dump for level \'%s\'",puVar6);
  (**(code **)(*param_1 + 8))(param_1,local_80);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  lVar9 = param_1[1];
  iVar4 = *(int *)(lVar9 + 0x50);
  if (iVar4 < 1) {
    dVar11 = *(double *)(lVar9 + 0x58);
  }
  else {
    iVar5 = 0;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,param_1[1] + 0x48,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
    lVar9 = param_1[1];
    dVar11 = *(double *)(lVar9 + 0x58);
    if (0 < *(int *)(lVar9 + 0x50)) {
      dVar13 = **(double **)(lVar9 + 0x48);
      if (**(double **)(lVar9 + 0x48) <= (double)DAT_14c75b138 / 1000.0) {
        dVar13 = (double)DAT_14c75b138 / 1000.0;
      }
      dVar11 = dVar11 - (double)*(longlong *)(lVar9 + 0x60) * dVar13;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)(lVar9 + 0x60),dVar11);
  FUN_140056680(local_80,L"--- End");
  (**(code **)(*param_1 + 8))(param_1,local_80);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  lVar9 = (longlong)*(int *)(param_1[1] + 0x80);
  if (0 < lVar9) {
    lVar10 = 0x18;
    lVar2 = 0;
    lVar3 = lVar9;
    do {
      lVar1 = *(longlong *)(param_1[1] + 0x78);
      piVar7 = (int *)(lVar1 + lVar10);
      iVar4 = 0;
      lVar8 = lVar3;
      do {
        iVar4 = iVar4 + *piVar7;
        piVar7 = piVar7 + 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      (**(code **)(*param_1 + 0x30))
                (param_1,(int)*(double *)(lVar1 + lVar2 * 0x20),
                 ((float)iVar4 * 100.0) / (float)*(longlong *)(param_1[1] + 0x90));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -1;
      lVar10 = lVar10 + 0x20;
    } while (lVar2 != lVar9);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342175e FUN_14342175e body=813 status=ok
// SIG undefined FUN_14342175e(void)

void FUN_14342175e(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [72];
  ulonglong local_60;
  ulonglong local_50;
  ulonglong local_40;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(double *)(param_1 + 400) = param_2[1] + *(double *)(param_1 + 400);
  if ((*(char *)((longlong)param_2 + 0x6c) == '\x01') && (*(char *)(param_1 + 0x1c8) == '\0')) {
    FUN_14278e8aa(param_1 + 0x18,*param_2,*param_2);
    if (*(char *)((longlong)param_2 + 0x6d) == '\x01') {
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      *(double *)(param_1 + 0xe8) = *param_2 + *(double *)(param_1 + 0xe8);
    }
    if (*(char *)((longlong)param_2 + 0x6e) == '\x01') {
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      *(double *)(param_1 + 0xf0) = *param_2 + *(double *)(param_1 + 0xf0);
    }
    if (*(char *)((longlong)param_2 + 0x6f) == '\x01') {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      *(double *)(param_1 + 0xf8) = *param_2 + *(double *)(param_1 + 0xf8);
    }
    if (*(char *)(param_2 + 0xe) == '\x01') {
      *(double *)(param_1 + 0x100) = *param_2 + *(double *)(param_1 + 0x100);
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    }
    *(double *)(param_1 + 0x108) = param_2[4] + *(double *)(param_1 + 0x108);
    *(double *)(param_1 + 0x110) = param_2[5] + *(double *)(param_1 + 0x110);
    *(double *)(param_1 + 0x118) = param_2[6] + *(double *)(param_1 + 0x118);
    *(double *)(param_1 + 0x120) = param_2[7] + *(double *)(param_1 + 0x120);
    *(double *)(param_1 + 0x128) = param_2[0xb] + *(double *)(param_1 + 0x128);
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + *(int *)(param_2 + 0xc);
    dVar5 = *(double *)(param_1 + 0x138);
    if (*(double *)(param_1 + 0x138) <= param_2[0xb]) {
      dVar5 = param_2[0xb];
    }
    *(double *)(param_1 + 0x138) = dVar5;
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + *(int *)((longlong)param_2 + 100);
    if (0 < *(int *)(param_2 + 0xd)) {
      dVar5 = (double)*(int *)(param_2 + 0xd);
      FUN_14278e8aa(param_1 + 0xa8,dVar5,dVar5);
    }
    iVar1 = DAT_14ca84ae0;
    iVar3 = *(int *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x154) < DAT_14ca84ae0) {
      iVar3 = DAT_14ca84ae0;
    }
    *(int *)(param_1 + 0x154) = iVar3;
    iVar3 = *(int *)(param_1 + 0x158);
    if (iVar1 <= *(int *)(param_1 + 0x158)) {
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x158) = iVar3;
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + iVar1;
    iVar1 = DAT_14ca84b00;
    lVar2 = (longlong)DAT_14ca84b00;
    iVar3 = *(int *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x174) < DAT_14ca84b00) {
      iVar3 = DAT_14ca84b00;
    }
    *(int *)(param_1 + 0x174) = iVar3;
    iVar3 = *(int *)(param_1 + 0x178);
    if (iVar1 <= *(int *)(param_1 + 0x178)) {
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x178) = iVar3;
    *(longlong *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x180) + lVar2;
    FUN_1405d59a9(local_a8);
    uVar4 = *(ulonglong *)(param_1 + 0x1d0);
    if (*(ulonglong *)(param_1 + 0x1d0) < local_50) {
      uVar4 = local_50;
    }
    *(ulonglong *)(param_1 + 0x1d0) = uVar4;
    uVar4 = *(ulonglong *)(param_1 + 0x1d8);
    if (*(ulonglong *)(param_1 + 0x1d8) < local_40) {
      uVar4 = local_40;
    }
    *(ulonglong *)(param_1 + 0x1d8) = uVar4;
    uVar4 = *(ulonglong *)(param_1 + 0x1e0);
    if (local_50 <= *(ulonglong *)(param_1 + 0x1e0)) {
      uVar4 = local_50;
    }
    *(ulonglong *)(param_1 + 0x1e0) = uVar4;
    uVar4 = *(ulonglong *)(param_1 + 0x1e8);
    if (local_40 <= *(ulonglong *)(param_1 + 0x1e8)) {
      uVar4 = local_40;
    }
    *(ulonglong *)(param_1 + 0x1e8) = uVar4;
    if (*(ulonglong *)(param_1 + 0x1f0) < local_60) {
      local_60 = *(ulonglong *)(param_1 + 0x1f0);
    }
    *(ulonglong *)(param_1 + 0x1f0) = local_60;
    *(longlong *)(param_1 + 0x1f8) = *(longlong *)(param_1 + 0x1f8) + local_50;
    *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + local_40;
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + (uint)(local_28 == '\x03');
    if (*(char *)((longlong)param_2 + 0x71) != '\0') {
      FUN_14278e8aa(param_1 + 0x48,*param_2,*param_2);
      switch(*(undefined1 *)((longlong)param_2 + 0x71)) {
      case 2:
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
        break;
      case 3:
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        break;
      case 4:
        *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
        break;
      case 5:
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
    }
    FUN_14278e8aa(param_1 + 0x78,param_2[10],param_2[10]);
  }
  else {
    *(double *)(param_1 + 0x198) = *param_2 + *(double *)(param_1 + 0x198);
    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143421a8c FUN_143421a8c body=1237 status=ok
// SIG undefined FUN_143421a8c(void)

double * FUN_143421a8c(longlong param_1,double *param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_188 [32];
  LARGE_INTEGER local_168;
  uint local_160 [16];
  uint *local_120;
  longlong local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *(undefined2 *)(param_2 + 0xe) = 0;
  uVar8 = DAT_14ca9a358;
  uVar7 = DAT_14ca9a350;
  uVar6 = DAT_14ca84ac0;
  QueryPerformanceCounter(&local_168);
  dVar5 = (double)local_168.QuadPart * DAT_14c83f420 + 16777216.0;
  if (0.0 < *(double *)(param_1 + 0x10)) {
    param_3 = (float)(dVar5 - *(double *)(param_1 + 0x10));
  }
  *(double *)(param_1 + 0x10) = dVar5;
  dVar4 = (double)param_3;
  param_2[1] = dVar4;
  dVar14 = DAT_14c846548;
  param_2[3] = DAT_14c846550;
  param_2[8] = DAT_14caf2380;
  param_2[9] = DAT_14cad6e08;
  fVar15 = param_3;
  if (dVar14 < dVar4) {
    fVar15 = (float)(dVar4 - dVar14);
  }
  if (*DAT_14cacf970 == 0) {
    fVar15 = param_3;
  }
  *param_2 = (double)fVar15;
  uVar1 = DAT_14ca9a348;
  local_168.QuadPart = 0;
  local_160[0] = 4;
  uVar13 = 0;
  FUN_1447bda9e(&local_168,4,0);
  *(uint *)local_168 = uVar7;
  *(uint *)(local_168.QuadPart + 4) = uVar1;
  *(uint *)(local_168.QuadPart + 8) = uVar6;
  *(uint *)(local_168.QuadPart + 0xc) = uVar8;
  if (((ulonglong)local_160[0] != 0) && (uVar13 = *(uint *)local_168, 1 < (int)local_160[0])) {
    uVar11 = 1;
    do {
      uVar1 = *(uint *)(local_168.QuadPart + uVar11 * 4);
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      uVar11 = uVar11 + 1;
    } while (local_160[0] != uVar11);
  }
  if ((uint *)local_168.QuadPart != (uint *)0x0) {
    FUN_1400020a8();
  }
  fVar16 = *DAT_14caf6568;
  param_2[2] = DAT_14c846548;
  dVar4 = DAT_14c83f420;
  dVar14 = (double)DAT_14ca9a348 * DAT_14c83f420;
  param_2[4] = (double)(float)dVar14;
  param_2[5] = (double)(float)((double)uVar7 * dVar4);
  param_2[6] = (double)(float)((double)uVar8 * dVar4);
  param_2[7] = (double)(float)((double)uVar6 * dVar4);
  param_2[0xb] = DAT_14c948b40;
  *(undefined4 *)(param_2 + 0xc) = DAT_14c948b48;
  *(undefined4 *)((longlong)param_2 + 100) = DAT_14c948ab8;
  uVar9 = (**(code **)(*DAT_14c948aa0 + 0x70))();
  *(undefined4 *)(param_2 + 0xd) = uVar9;
  bVar2 = fVar15 < DAT_14c76137c;
  bVar3 = DAT_14c76137c <= 0.0;
  *(bool *)((longlong)param_2 + 0x6c) = bVar3 || bVar2;
  if ((bVar3 || bVar2) && (fVar16 = fVar16 * 0.001, fVar16 < fVar15)) {
    if (fVar16 <= (float)dVar14) {
      *(undefined1 *)((longlong)param_2 + 0x6d) = 1;
    }
    if (fVar16 <= (float)((double)uVar7 * dVar4)) {
      *(undefined1 *)((longlong)param_2 + 0x6e) = 1;
    }
    if (fVar16 <= (float)((double)uVar8 * dVar4)) {
      *(undefined1 *)((longlong)param_2 + 0x6f) = 1;
    }
    if (fVar16 <= (float)((double)uVar6 * dVar4)) {
      *(undefined1 *)(param_2 + 0xe) = 1;
    }
  }
  if ((DAT_14c75b138 * 0.001 <= fVar15) &&
     (*DAT_14caf6590 * 0.001 <= (float)(dVar5 - *(double *)(param_1 + 0x20)))) {
    fVar16 = *DAT_14caf65a8;
    if (DAT_14c75b138 / *DAT_14caf6568 <= *DAT_14caf65a8) {
      fVar16 = DAT_14c75b138 / *DAT_14caf6568;
    }
    if (fVar16 <= 1.0) {
      fVar16 = 1.0;
    }
    if (fVar16 * *(float *)(param_1 + 0x18) < fVar15) {
      fVar16 = (float)uVar13 + -0.25;
      cVar10 = '\x02';
      if ((((float)DAT_14ca9a348 < fVar16) && (cVar10 = '\x03', (float)uVar7 < fVar16)) &&
         (cVar10 = '\x04', (float)uVar8 < fVar16)) {
        cVar10 = (fVar16 <= (float)uVar6) * '\x04' + '\x01';
      }
      *(char *)((longlong)param_2 + 0x71) = cVar10;
      FUN_1479af564(DAT_14cb0d2b0 + 0x1010,cVar10,fVar15);
      *(double *)(param_1 + 0x20) = dVar5;
    }
  }
  *(float *)(param_1 + 0x18) = fVar15;
  param_2[10] = 100.0;
  FUN_1415e1712(&local_168);
  FUN_1415e18b4(DAT_14cb0d2b0,&local_168);
  if (local_168.s.LowPart - 3 < 2) {
    puVar12 = local_120;
    if (local_120 == (uint *)0x0) {
      puVar12 = local_160;
    }
    param_2[10] = (double)((float)puVar12[DAT_14cad82fc] * 100.0);
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143421f62 FUN_143421f62 body=213 status=ok
// SIG undefined FUN_143421f62(void)

void FUN_143421f62(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [120];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < *(int *)(param_1 + 0x1080)) {
    FUN_143421a8c(&DAT_14cacf9a0,local_a0,param_2);
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1080) != 0) {
      puVar5 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1078);
      puVar4 = puVar5 + (longlong)*(int *)(DAT_14cb0d2b0 + 0x1080) * 2;
      do {
        plVar2 = (longlong *)*puVar5;
        plVar3 = (longlong *)puVar5[1];
        if (plVar3 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_a0);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          (**(code **)(*plVar2 + 8))(plVar2,local_a0);
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
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143422038 FUN_143422038 body=748 status=ok
// SIG undefined FUN_143422038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143422038(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  LARGE_INTEGER LVar5;
  int iVar6;
  wchar_t *_Str;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  LARGE_INTEGER local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = *(int *)(param_1 + 0x1080);
  *(uint *)(param_1 + 0x1080) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1084) < iVar6 + 1U) {
    FUN_1479af622((longlong *)(param_1 + 0x1078),iVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x1078);
  *(undefined8 *)(lVar9 + (longlong)iVar6 * 0x10) = *param_2;
  lVar8 = param_2[1];
  *(longlong *)(lVar9 + 8 + (longlong)iVar6 * 0x10) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x1080) == 1) {
    _DAT_14cacf9c0 = 0;
    _DAT_14cacf9a0 = 0.0;
    _DAT_14cacf9a8 = 0;
    _DAT_14cacf9ac = 0;
    _DAT_14cacf9b0 = 0;
    uRam000000014cacf9b4 = 0;
    uRam000000014cacf9b8 = 0;
    QueryPerformanceCounter(&local_78);
    _DAT_14cacf9a0 = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
    _DAT_14cacf9b0 = 0;
    uRam000000014cacf9b4 = 0;
    DAT_14cacf9e8 = 0;
    if ((int)DAT_14cacf9ec < 0) {
      FUN_14481578e(&DAT_14cacf9e0,0);
    }
    local_78.QuadPart = 0;
    uStack_70 = 0;
    local_88 = (wchar_t *)0x0;
    local_80 = *(int *)(DAT_14cacf9d8 + 1);
    lVar9 = (longlong)local_80;
    pvVar2 = (void *)*DAT_14cacf9d8;
    if (lVar9 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar2,lVar9 * 2);
    }
    FUN_1403de9f2(&local_88,&local_78,&DAT_149e06196,1);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    LVar5 = local_78;
    lVar9 = (longlong)(int)uStack_70;
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      lVar8 = 0;
      local_90 = param_2;
      do {
        local_88 = (wchar_t *)0x0;
        local_80 = *(int *)(LVar5.QuadPart + 8 + lVar8);
        lVar10 = (longlong)local_80;
        pvVar2 = *(void **)(LVar5.QuadPart + lVar8);
        if (lVar10 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar2,lVar10 * 2);
        }
        FUN_140ded26a(&local_88);
        FUN_140ded312(&local_88);
        _Str = L"";
        if (local_80 != 0) {
          _Str = local_88;
        }
        iVar6 = _wtoi(_Str);
        uVar4 = DAT_14cacf9e8;
        lVar10 = (longlong)(int)DAT_14cacf9e8;
        DAT_14cacf9e8 = DAT_14cacf9e8 + 1;
        if (DAT_14cacf9ec < DAT_14cacf9e8) {
          FUN_1446f48e2(&DAT_14cacf9e0,uVar4);
        }
        *(int *)(DAT_14cacf9e0 + lVar10 * 4) = iVar6;
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar9 * 0x10 != lVar8);
      uVar7 = uStack_70 & 0xffffffff;
      param_2 = local_90;
    }
    DAT_14ca84ac0 = 0;
    FUN_1447a1747(local_78.QuadPart,uVar7);
    if (local_78.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  (*(code *)**(undefined8 **)*param_2)();
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143422344 FUN_143422344 body=175 status=ok
// SIG undefined FUN_143422344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143422344(longlong param_1,LARGE_INTEGER param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)param_2 + 0x10))();
  local_20 = param_2;
  FUN_1479af6a8(param_1 + 0x1078);
  if (*(int *)(param_1 + 0x1080) == 0) {
    QueryPerformanceCounter(&local_20);
    _DAT_14cacf9a8 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  plVar3 = *(longlong **)(param_2.QuadPart + 8);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434223f4 FUN_1434223f4 body=377 status=ok
// SIG undefined FUN_1434223f4(void)

void FUN_1434223f4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1402160b8(local_30);
  lVar4 = *(longlong *)(param_1 + 0x1068);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (puVar1 != param_2) {
      iVar3 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar4 + 0x10) = iVar3;
      if (iVar3 == 0 && *(int *)(lVar4 + 0x14) == 0) {
        *(undefined4 *)(lVar4 + 0x14) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
        }
      }
    }
    goto LAB_14342246e;
  }
  lVar4 = FUN_14001cc68(0x208,0x10);
  FUN_1479a6486(lVar4,local_30,param_2);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a819bc0;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 0x1068) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x1070);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000143422530;
      }
      goto LAB_14342253b;
    }
  }
  else {
    *(longlong **)(param_1 + 0x1070) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000143422530:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
LAB_14342253b:
    lVar4 = *(longlong *)(param_1 + 0x1068);
    plVar6 = *(longlong **)(param_1 + 0x1070);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_40 = lVar4;
  local_38 = plVar6;
  FUN_143422038(param_1,&local_40);
LAB_14342246e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342256e FUN_14342256e body=339 status=ok
// SIG undefined FUN_14342256e(void)

void FUN_14342256e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x1068);
  if (lVar3 != 0) {
    local_60 = *(longlong *)(param_1 + 0x1070);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_68 = lVar3;
    FUN_143422344(param_1,&local_68);
    lVar3 = *(longlong *)(param_1 + 0x1068);
    local_38 = (longlong *)0x0;
    uStack_30 = 1;
    FUN_1479af4e6(&local_38);
    *local_38 = lVar3;
    FUN_1479a6aa2(lVar3,*(undefined8 *)(lVar3 + 400),&local_38,param_2);
    FUN_1479a6ca8(local_48,lVar3 + 0x188);
    FUN_140056680(local_58,&DAT_14a819d62);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1068) = 0;
    plVar4 = *(longlong **)(param_1 + 0x1070);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1070) = 0;
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434226c2 FUN_1434226c2 body=1189 status=ok
// SIG undefined FUN_1434226c2(void)

void FUN_1434226c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  code *pcVar18;
  uint *puVar19;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     (plVar13 = *(longlong **)(param_1 + 0x20), plVar13 != (longlong *)0x0)) {
    lVar15 = plVar13[0x86];
    if (lVar15 != 0) {
      if (DAT_14cae9568 == 0) {
        local_a0 = &local_58;
        local_58 = FUN_1417de738;
        local_90 = &LAB_145893408;
        local_98 = &LAB_1458cbbd2;
        local_a8 = &LAB_147ba21f1;
        local_b0 = &LAB_1463e9233;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x1000000c;
        local_d0 = 8;
        local_d8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar15 = plVar13[0x86];
        if (lVar15 == 0) {
          local_80 = (longlong *)0x0;
          goto LAB_14342276e;
        }
      }
      if ((((DAT_14cae9568 != 0) && (lVar9 = *(longlong *)(lVar15 + 0x10), lVar9 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
           == DAT_14cae9568 + 0x30 && (*(longlong *)(lVar15 + 0x78) != 0)))) {
        local_80 = *(longlong **)(*(longlong *)(lVar15 + 0x78) + 0x40);
        if ((DAT_14c950c29 == '\x01') && (local_80 != (longlong *)0x0)) {
          FUN_1456cec3c();
        }
        goto LAB_14342276e;
      }
    }
  }
  else {
    plVar13 = (longlong *)0x0;
  }
  local_80 = (longlong *)0x0;
LAB_14342276e:
  uVar2 = DAT_14c872ce0;
  puVar14 = &DAT_149dfb77a;
  if ((int)param_2[1] != 0) {
    puVar14 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_58,L"CheatScript.%s",puVar14);
  pcVar18 = (code *)&DAT_149dfb77a;
  if (local_50 != 0) {
    pcVar18 = local_58;
  }
  local_70 = param_2;
  plVar3 = (longlong *)FUN_140d6a126(uVar2,pcVar18,0,&DAT_14c872af8);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (plVar3 != (longlong *)0x0) {
    puVar19 = (uint *)(plVar3 + 2);
    iVar1 = (int)plVar3[5];
    if (iVar1 == 0) {
      uVar16 = 1;
      uVar12 = 0;
      iVar17 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar8 = puVar19;
      }
      uVar11 = *puVar8;
      if (uVar11 == 0) {
        iVar4 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar4 = iVar1 + -1;
        }
        uVar12 = 0;
        uVar16 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar16 = uVar12;
        }
        iVar17 = 0;
        do {
          if (uVar16 == uVar12) goto LAB_143422a57;
          iVar17 = iVar17 + 0x20;
          uVar11 = puVar8[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar12 = 0;
        iVar17 = 0;
      }
      uVar16 = (ulonglong)(-uVar11 & uVar11);
      uVar10 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar4 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar4) {
        iVar4 = iVar1;
      }
    }
    if (iVar4 < iVar1) {
      uVar11 = 0xffffffff;
      local_78 = plVar3;
      do {
        if (local_80 != (longlong *)0x0) {
          lVar15 = *plVar3;
          lVar9 = (longlong)iVar4 * 0x40;
          uVar10 = (ulonglong)(*(int *)(lVar15 + 0x28 + lVar9) - 2U < 0x7fffffff) * 0x10;
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(uVar10 + 0x18 + lVar15 + lVar9) != 0) {
            puVar14 = *(undefined2 **)(lVar15 + lVar9 + 8 + (uVar10 | 8));
          }
          FUN_140002266(&local_58,L"> %s",puVar14);
          (**(code **)(*local_80 + 0x2c0))(local_80,&local_58);
          plVar3 = local_78;
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
            plVar3 = local_78;
          }
        }
        lVar15 = *plVar3;
        lVar9 = (longlong)iVar4 * 0x40;
        uVar10 = (ulonglong)(*(int *)(lVar15 + 0x28 + lVar9) - 2U < 0x7fffffff) * 0x10;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(uVar10 + 0x18 + lVar15 + lVar9) != 0) {
          puVar14 = *(undefined2 **)(lVar15 + lVar9 + 8 + (uVar10 | 8));
        }
        FUN_140056680(&local_58,puVar14);
        (**(code **)(*plVar13 + 0xd40))(plVar13,local_68,&local_58,1);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        plVar3 = local_78;
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = uVar11 & ~(uint)uVar16;
        puVar8 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar8 = puVar19;
        }
        iVar1 = (int)plVar3[5];
        iVar4 = (int)uVar12;
        lVar15 = (longlong)iVar4;
        uVar5 = puVar8[lVar15] & uVar11;
        if (uVar5 == 0) {
          iVar6 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar6 = iVar1 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar5 = puVar8[lVar15 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar15 == lVar9) goto LAB_143422a57;
          }
          uVar12 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar11 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar10 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar4 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar1);
    }
  }
LAB_143422a57:
  if (*local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143422b68 FUN_143422b68 body=113 status=ok
// SIG undefined FUN_143422b68(void)

void FUN_143422b68(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  lVar2 = *(longlong *)(lVar2 + 0x170);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x3f8) != 0)) {
    FUN_140aeefbc(*(longlong *)(lVar2 + 0x3f8),1,1);
    *(undefined8 *)(lVar2 + 0x3f8) = 0;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar2 = param_1[4];
    }
    else {
      lVar2 = 0;
    }
    if ((*(longlong *)(lVar2 + 0x608) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x608) + 0x58), lVar2 != 0)) {
      pbVar1 = (byte *)(lVar2 + 0x30a);
      *pbVar1 = *pbVar1 & 0xf7;
    }
  }
  return;
}



// FUNCTION 143422bd9 FUN_143422bd9 body=49 status=ok
// SIG undefined FUN_143422bd9(void)

void FUN_143422bd9(void)

{
  FUN_144760e21(DAT_14cacfc30,DAT_14cacfc38);
  if (DAT_14cacfc30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143422c0a FUN_143422c0a body=132 status=ok
// SIG undefined FUN_143422c0a(void)

undefined8 FUN_143422c0a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x260))(plVar3,param_2,param_3,param_4), cVar4 != '\0')) {
        return 1;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  uVar5 = FUN_1411c044a(param_1,param_2,param_3,param_4,0);
  return uVar5;
}



// FUNCTION 143422c8e FUN_143422c8e body=1344 status=ok
// SIG undefined FUN_143422c8e(void)

void FUN_143422c8e(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_298 [32];
  uint local_278;
  char **local_270;
  undefined1 *local_268;
  undefined1 local_258 [4];
  undefined4 local_254;
  double local_248;
  double local_240;
  double local_238;
  double local_218;
  double local_210;
  double local_208;
  undefined4 local_1b4;
  undefined4 local_188;
  undefined4 local_158 [2];
  undefined4 local_150;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  char *local_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined2 local_dc;
  undefined1 local_da;
  undefined2 local_d9;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar15 = (longlong *)param_1[4];
  }
  else {
    plVar15 = (longlong *)0x0;
  }
  (**(code **)(*plVar15 + 0x718))(plVar15,&local_140,local_158);
  lVar9 = 0;
  memset(local_258,0,0x100);
  local_188 = 0xffffffff;
  local_254 = 0x3f800000;
  local_1b4 = 0xffffffff;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar9 = param_1[4];
  }
  plVar15 = *(longlong **)(lVar9 + 0x3d0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacfca0) && (FUN_144b3d300(), DAT_14cacfca0 == -1)) {
    local_f0 = "TeleportTrace";
    local_e8 = CONCAT35(local_e8._5_3_,0xd);
    uVar14 = FUN_14001a6c0(&local_f0,1);
    DAT_14cacfc98 = (char *)(ulonglong)uVar14;
    _Init_thread_footer();
  }
  local_cc = 0;
  local_e8 = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = 0;
  local_78 = 0x400000000;
  local_e0 = 1;
  local_d4 = 0;
  local_f0 = DAT_14cacfc98;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0;
  local_da = 0;
  if (plVar15 != (longlong *)0x0) {
    local_90 = *(undefined4 *)((longlong)plVar15 + 0xc);
    local_78 = 0x400000001;
    local_e8 = plVar15[3];
  }
  local_d9 = 0x101;
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  dVar4 = (double)FUN_144719204(local_158[0],0);
  dVar6 = (double)FUN_144719204(local_150,0);
  dVar10 = sin(dVar4 * 0.017453292519943295);
  dVar4 = cos(dVar4 * 0.017453292519943295);
  dVar2 = sin(dVar6 * 0.017453292519943295);
  dVar6 = cos(dVar6 * 0.017453292519943295);
  local_118 = dVar10 * 1000000.0 + local_130;
  uStack_120 = dVar2 * dVar4 * 1000000.0 + local_138;
  local_128 = dVar6 * dVar4 * 1000000.0 + local_140;
  local_268 = &DAT_14cad0f10;
  local_278 = 2;
  local_270 = &local_f0;
  dVar10 = (double)FUN_1400b50cc(lVar9,local_258);
  if (SUB81(dVar10,0) != '\0') {
    local_248 = local_218 * 4.0 + local_248;
    local_240 = local_210 * 4.0 + local_240;
    local_238 = local_208 * 4.0 + local_238;
  }
  if (plVar15 == (longlong *)0x0) {
    lVar1 = param_1[4];
    if (lVar1 == 0) goto LAB_143423097;
    lVar11 = FUN_14129154a();
    if ((((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30),
         *(longlong *)(lVar9 + (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) ||
        (dVar10 = *(double *)(lVar1 + 0xa78), dVar10 == 0.0)) ||
       (plVar15 = *(longlong **)((longlong)dVar10 + 0x3d0), plVar15 == (longlong *)0x0))
    goto LAB_143423097;
  }
  uVar13 = (undefined4)lVar9;
  lVar9 = plVar15[0x39];
  if (lVar9 == 0) {
    local_f8 = DAT_14c846508;
    local_108 = (undefined4)DAT_14c8464f8;
    uStack_104 = DAT_14c8464f8._4_4_;
    uStack_100 = (undefined4)DAT_14c846500;
    uStack_fc = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar9 + 0x240);
    dVar2 = *(double *)(lVar9 + 0x248);
    dVar6 = *(double *)(lVar9 + 0x250);
    dVar7 = *(double *)(lVar9 + 600);
    pdVar12 = *(double **)(lVar9 + 0x228);
    local_128 = dVar4;
    uStack_120 = dVar2;
    local_118 = dVar6;
    uStack_110 = dVar7;
    if (pdVar12 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar12 = DAT_14c8463d0;
      pdVar12[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar12[2] = DAT_14c8463e0;
      pdVar12[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar12[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar12[6] = DAT_14c846508;
      *(double **)(lVar9 + 0x228) = pdVar12;
    }
    auVar3._8_4_ = (int)-(ulonglong)(dVar2 != pdVar12[1]);
    auVar3._0_8_ = -(ulonglong)(dVar4 != *pdVar12);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar12[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar10,0),auVar3);
    auVar5._8_4_ = (int)-(ulonglong)(dVar7 != pdVar12[3]);
    auVar5._0_8_ = -(ulonglong)(dVar6 != pdVar12[2]);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar12[3]) >> 0x20);
    uVar14 = movmskpd(uVar13,auVar5);
    if ((uVar14 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar12 + 2) = (undefined4)local_118;
      *(undefined4 *)((longlong)pdVar12 + 0x14) = local_118._4_4_;
      *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_110._4_4_;
      *(undefined4 *)pdVar12 = (undefined4)local_128;
      *(undefined4 *)((longlong)pdVar12 + 4) = local_128._4_4_;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_120._4_4_;
      FUN_1448052ee(&local_128,&local_108);
      pdVar12[6] = local_f8;
      pdVar12[4] = (double)CONCAT44(uStack_104,local_108);
      pdVar12[5] = (double)CONCAT44(uStack_fc,uStack_100);
    }
    local_f8 = pdVar12[6];
    local_108 = *(undefined4 *)(pdVar12 + 4);
    uStack_104 = *(undefined4 *)((longlong)pdVar12 + 0x24);
    uStack_100 = *(undefined4 *)(pdVar12 + 5);
    uStack_fc = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  }
  local_278 = local_278 & 0xffffff00;
  (**(code **)(*plVar15 + 0x4d0))(plVar15,&local_248,&local_108,0);
LAB_143423097:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434231cf FUN_1434231cf body=69 status=ok
// SIG undefined FUN_1434231cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434231cf(void)

{
  _DAT_14cacfc48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143423211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacfc50,1);
  return;
}



// FUNCTION 143423214 FUN_143423214 body=2212 status=ok
// SIG undefined FUN_143423214(void)

void FUN_143423214(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  code **ppcVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  code **local_180;
  code *local_178;
  code *local_170;
  code *local_160;
  undefined8 local_158;
  double local_150;
  longlong local_148;
  undefined8 uStack_140;
  code *local_128;
  undefined4 local_120;
  code *local_118;
  undefined8 uStack_110;
  code *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  byte local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_118 = (code *)0x0;
  uStack_110 = 0;
  local_1b0 = 0xffffffff;
  local_1b8 = (code **)((ulonglong)local_1b8 & 0xffffffff00000000);
  iVar4 = FUN_1447ee042(param_2,&DAT_149e001d8,1,1);
  if (iVar4 != -1) {
    FUN_140002266(&local_108,L"ClassName contains a space.");
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_118 = local_108;
    uStack_110 = uStack_100;
    goto LAB_1434235cb;
  }
  iVar4 = (int)param_2[1];
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  if (iVar4 != 0 && iVar4 + -1 != 0) {
    lVar10 = 0;
    do {
      if (*(short *)(*param_2 + lVar10) == 0x2f) {
        local_1b0 = 0xffffffff;
        local_1b8 = (code **)((ulonglong)local_1b8 & 0xffffffff00000000);
        iVar4 = FUN_1447ee042(param_2,&DAT_149e0635c,1,1);
        if (iVar4 == -1) {
          pwVar12 = 
          L"Class names with a path must contain a dot. (i.e /Script/Engine.StaticMeshActor)";
          goto LAB_1434235be;
        }
        local_108 = (code *)0x0;
        uStack_100 = 0;
        local_148 = 0;
        uStack_140 = 0;
        FUN_140056680(&local_160,&DAT_149e0635c);
        local_1b0 = 0;
        local_1b8 = (code **)CONCAT44(local_1b8._4_4_,1);
        FUN_1407cdbc6(param_2,&local_160,&local_108,&local_148);
        if (local_160 != (code *)0x0) {
          FUN_1400020a8();
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
          *(longlong *)(DAT_14c844840 + 8) = 0;
          *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
          *(longlong *)(DAT_14c844840 + 0x10) = -1;
          *(longlong *)(DAT_14c844840 + 0x18) = 0;
          *(longlong *)(DAT_14c844840 + 0x20) = 0;
          *(longlong *)(DAT_14c844840 + 0x28) = 0;
          if (DAT_14c844840 != (code *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_160 = DAT_14c844840;
        if (DAT_14c844840 != (code *)0x0) {
          if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(longlong *)DAT_14c844840 + 8))();
          }
        }
        local_158 = (double)((ulonglong)local_158._4_4_ << 0x20);
        local_128 = local_108;
        uVar11 = (ulonglong)((int)uStack_100 - 1);
        if ((int)uStack_100 == 0) {
          uVar11 = 0;
        }
        local_120 = (undefined4)uVar11;
        cVar3 = FUN_14022ef98(&local_128,CONCAT71((int7)(uVar11 >> 8),1),&local_160);
        if (cVar3 == '\0') {
          pcVar6 = local_160;
          if (*(code **)(*(longlong *)local_160 + 0x50) != FUN_144828418) {
            pcVar6 = (code *)(**(code **)(*(longlong *)local_160 + 0x50))();
          }
          FUN_1447a1fc0(pcVar6);
          pcVar6 = *(code **)(*(longlong *)local_160 + 0x28);
          if (pcVar6 == FUN_14482841c) {
            ppcVar7 = (code **)(local_160 + 0x18);
            if (*(longlong *)(local_160 + 0x28) != 0) {
              ppcVar7 = (code **)(*(longlong *)(local_160 + 0x28) + 8);
            }
          }
          else if (pcVar6 == (code *)&LAB_14010c34c) {
            ppcVar7 = (code **)(local_160 + 0x10);
          }
          else {
            ppcVar7 = (code **)(*pcVar6)(local_160);
          }
          if (&local_118 != ppcVar7) {
            uVar1 = *(uint *)(ppcVar7 + 1);
            pcVar6 = *ppcVar7;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar1);
            if (uVar1 == 0 && uStack_110._4_4_ == 0) {
              uStack_110 = (ulonglong)uVar1;
            }
            else {
              FUN_1446dd670(&local_118,uVar1);
              if (uVar1 != 0) {
                memcpy(local_118,pcVar6,(longlong)(int)uVar1 * 2);
              }
            }
          }
          if (local_160 != (code *)0x0) {
            (**(code **)(*(longlong *)local_160 + 0x10))();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_108 != (code *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1434235cb;
        }
        if (local_160 != (code *)0x0) {
          (**(code **)(*(longlong *)local_160 + 0x10))();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_108 != (code *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar10 = lVar10 + 2;
    } while ((longlong)iVar8 * 2 != lVar10);
  }
  if (DAT_14c949118 == 0) {
    local_160 = FUN_140631fbe;
    lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar10;
    FUN_1446f470e(&local_148,L"Class",1);
    local_188 = &LAB_146891e90;
    local_190 = (code *)&LAB_146273097;
    local_1a0 = L"Engine";
    local_198 = (wchar_t *)CONCAT44(local_198._4_4_,199);
    local_1a8 = 0x20;
    local_1b0 = 0x10000000;
    local_1b8._0_4_ = 8;
    local_180 = &local_160;
    FUN_14574b4b2(lVar10);
    DAT_14c949118 = lVar10;
    if (DAT_14c951858 == 0) {
      local_180 = &local_108;
      local_108 = FUN_1449e2820;
      local_170 = FUN_14081d0ea;
      local_178 = FUN_14081d0ea;
      local_188 = &LAB_1468c5283;
      local_190 = FUN_142809da0;
      local_198 = L"Engine";
      local_1a0 = (wchar_t *)0x400000000;
      local_1a8 = CONCAT44(local_1a8._4_4_,0x10000000);
      local_1b0 = 8;
      local_1b8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = DAT_14c951858;
    lVar10 = DAT_14c949118;
    uVar5 = FUN_1449e2fb2();
    local_1b8 = (code **)0x149e6ee30;
    FUN_14574b446(uVar5,lVar10,lVar2,L"/Script/CoreUObject");
  }
  lVar10 = FUN_1427dcdfa(DAT_14c949118,param_2,0);
  if (lVar10 == 0) {
    pwVar12 = L"Failed to find class.";
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_180 = &local_108;
      local_108 = FUN_141030f22;
      local_170 = FUN_14081d0ea;
      local_178 = FUN_14081d0ea;
      local_188 = &LAB_1478c0a72;
      local_190 = (code *)&LAB_1417b2375;
      local_198 = L"Engine";
      local_1a0 = (wchar_t *)0x1000000000;
      local_1a8 = CONCAT44(local_1a8._4_4_,0x10000004);
      local_1b0 = 8;
      local_1b8 = (code **)CONCAT44(local_1b8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 != 0) goto LAB_143423499;
    }
    else {
LAB_143423499:
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        if (((*(uint *)(param_1 + 1) & 0x10) == 0) &&
           (plVar9 = (longlong *)param_1[4], plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x680))(plVar9,&local_148);
          (**(code **)(*plVar9 + 0xe60))(plVar9,&local_160);
          dVar13 = (double)FUN_144719204(local_148,0x4076800000000000);
          dVar14 = (double)FUN_144719204(uStack_140,0x4076800000000000);
          dVar15 = sin(dVar13 * 0.017453292519943295);
          dVar13 = cos(dVar13 * 0.017453292519943295);
          dVar16 = sin(dVar14 * 0.017453292519943295);
          dVar14 = cos(dVar14 * 0.017453292519943295);
          local_160 = (code *)(dVar14 * dVar13 * 72.0 + 0.0 + (double)local_160);
          local_158 = dVar16 * dVar13 * 72.0 + 0.0 + local_158;
          local_150 = dVar15 * 72.0 + 15.0 + local_150;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          local_108 = (code *)0x0;
          uStack_100 = 0;
          local_d8 = 0x100;
          local_d6 = local_d6 & 0xe0;
          local_d5 = 0;
          local_d4 = 8;
          local_c8 = 0;
          local_b8 = (longlong *)0x0;
          lStack_f0 = plVar9[0x36];
          uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          local_1b8 = &local_108;
          lVar10 = FUN_141137228(uVar5,lVar10,&local_160,&local_148);
          if (lVar10 == 0) {
            FUN_14020fad6(&local_118,L"SpawnActor failed.");
          }
          if (local_c8 != 0) {
            plVar9 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar9 = local_a8;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_1434235cb;
      }
    }
    pwVar12 = L"Class is not derived from Actor.";
  }
LAB_1434235be:
  FUN_14020fad6(&local_118,pwVar12);
LAB_1434235cb:
  if (local_118 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143423aba FUN_143423aba body=54 status=ok
// SIG undefined FUN_143423aba(void)

void FUN_143423aba(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140489acc();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000143423aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3d8))(plVar1,uVar2,*(code **)(*plVar1 + 0x3d8));
  return;
}



// FUNCTION 143423af0 FUN_143423af0 body=260 status=ok
// SIG undefined FUN_143423af0(void)

void FUN_143423af0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2d8))();
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar2 = (longlong *)param_1[4];
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  plVar1 = (longlong *)plVar2[0x7a];
  if (plVar1 != (longlong *)0x0) {
    local_68 = 0;
    (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2,param_3,0);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    local_38 = *(undefined8 *)(param_3 + 4);
    (**(code **)(*plVar1 + 0x730))(plVar1,&local_48,0);
  }
  (**(code **)(*plVar2 + 0x688))(plVar2,param_3,1);
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar3 = param_1[4];
  }
  else {
    lVar3 = 0;
  }
  FUN_140056680(local_58,L"BugItGo: Ghost mode is ON");
  FUN_1417e897c(lVar3,local_58,0,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143423bf6 FUN_143423bf6 body=476 status=ok
// SIG undefined FUN_143423bf6(void)

void FUN_143423bf6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3[2];
  local_80 = *(undefined4 *)param_3;
  uStack_7c = *(undefined4 *)((longlong)param_3 + 4);
  uStack_78 = *(undefined4 *)(param_3 + 1);
  uStack_74 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_88 = param_2[2];
  FUN_140002266(&local_40,L"BugItGo %f %f %f %f %f %f",*param_2,param_2[1]);
  if (&local_40 == param_4) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_4 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_38._4_4_;
  }
  local_88 = param_3[2];
  FUN_140002266(&local_50,L"P=%f Y=%f R=%f",*param_3,param_3[1]);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  local_88 = param_2[2];
  FUN_140002266(&local_60,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  FUN_140002266(&local_40,L"?BugLoc=%s?BugRot=%s",puVar2,puVar1);
  if (&local_40 == param_5) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143423dd6 FUN_143423dd6 body=728 status=ok
// SIG undefined FUN_143423dd6(void)

undefined8 FUN_143423dd6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined4 local_120 [2];
  undefined4 local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined2 local_dc;
  undefined1 local_da;
  undefined2 local_d9;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x448);
    uVar8 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x730))(plVar1,&local_108);
      (**(code **)(**(longlong **)(param_2 + 0x448) + 0x728))
                (*(longlong **)(param_2 + 0x448),local_120);
      lVar2 = *(longlong *)(param_2 + 0x3d0);
      local_cc = 0;
      local_c8 = 0x101;
      local_a0 = 0;
      local_98 = 0x800000000;
      local_80 = 0;
      local_78 = 0x400000000;
      local_e0 = 1;
      local_d4 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_df = 1;
      local_dd = 0;
      local_d0 = 0;
      local_dc = 0;
      local_da = 0;
      if (lVar2 != 0) {
        local_90 = *(undefined4 *)(lVar2 + 0xc);
        local_78 = 0x400000001;
        uStack_e8 = *(undefined8 *)(lVar2 + 0x18);
      }
      local_d9 = 0x101;
      uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
      dVar5 = (double)FUN_144719204(local_120[0],0x4076800000000000);
      dVar6 = (double)FUN_144719204(local_118,0x4076800000000000);
      dVar3 = sin(dVar5 * 0.017453292519943295);
      dVar5 = cos(dVar5 * 0.017453292519943295);
      dVar4 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      local_128 = dVar3 * 100000.0 + local_f8;
      local_130 = dVar4 * dVar5 * 100000.0 + local_100;
      local_138 = dVar6 * dVar5 * 100000.0 + local_108;
      local_148 = &DAT_14cad0f10;
      local_158 = 2;
      local_150 = &local_f0;
      cVar7 = FUN_1400b50cc(uVar8,param_3);
      if (cVar7 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_14485cccc(param_3 + 0xb8);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434240af FUN_1434240af body=4033 status=ok
// SIG undefined FUN_1434240af(void)

undefined8
FUN_1434240af(undefined8 param_1,longlong *param_2,undefined4 *param_3,float param_4,
             undefined8 param_5,double *param_6,double *param_7,longlong param_8,longlong param_9,
             char param_10,char param_11)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char cVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  bool bVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  char local_1b0;
  int local_19c;
  longlong local_198;
  longlong local_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar7 = *(ushort *)(param_2 + 7);
  lVar24 = *param_2;
  lVar28 = param_2[1];
  iVar23 = (int)param_2[2];
  fVar3 = *(float *)(param_2 + 0xe);
  if ((param_8 == 0) || (0.0 < fVar3)) {
    if (lVar24 == 0 || lVar28 == 0) {
LAB_14342429c:
      local_f8 = *(double *)(param_3 + 0x20);
      local_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      local_118 = *(double *)(param_3 + 0x26);
      local_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = local_f8;
      *(double *)(param_3 + 0x1c) = local_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = local_118;
      *(undefined8 *)(param_3 + 0x22) = local_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = local_128._8_8_;
      uVar30 = 1;
      goto LAB_14342433d;
    }
    local_19c = iVar23;
    local_190 = FUN_1479ab276(lVar24);
    if ((local_190 == 0) ||
       (uVar27 = *(uint *)(lVar28 + 8) >> 3, *(int *)(local_190 + 0x88) <= (int)uVar27)) {
      local_198 = 0;
    }
    else {
      lVar24 = local_190 + 0x78;
      if (*(longlong *)(local_190 + 0x80) != 0) {
        lVar24 = *(longlong *)(local_190 + 0x80);
      }
      local_198 = *(longlong *)(lVar24 + (ulonglong)uVar27 * 8);
    }
    puVar2 = (undefined8 *)(lVar28 + 0x48 + (ulonglong)((*(uint *)(lVar28 + 8) & 3) == 0) * 8);
    local_158 = *puVar2;
    uStack_150 = puVar2[1];
    cVar20 = FUN_144b2633e(param_5,&local_158,0);
    *(byte *)((longlong)param_3 + 0xad) =
         (fVar3 <= 0.0) * '\x02' | cVar20 == '\x02' | *(byte *)((longlong)param_3 + 0xad) & 0xfc;
    fVar4 = *(float *)(param_2 + 0xe);
    param_3[1] = fVar4 / param_4;
    param_3[2] = (int)param_2[0xe];
    dVar5 = param_6[2];
    dVar37 = param_7[2] - dVar5;
    dVar35 = param_6[1];
    dVar16 = param_7[1] - dVar35;
    dVar40 = *param_7 - *param_6;
    dVar34 = (double)(fVar4 / param_4);
    *(double *)(param_3 + 4) = dVar34 * dVar40 + *param_6;
    *(double *)(param_3 + 6) = dVar16 * dVar34 + dVar35;
    *(double *)(param_3 + 8) = dVar37 * dVar34 + dVar5;
    if ((uVar7 & 1) == 0 || fVar3 <= 0.0) {
      uVar21 = SUB84(*param_6,0);
      uVar44 = (undefined4)((ulonglong)*param_6 >> 0x20);
      uVar45 = SUB84(param_6[1],0);
      uVar46 = (undefined4)((ulonglong)param_6[1] >> 0x20);
      uVar48 = SUB84(param_6[2],0);
      uVar49 = (undefined4)((ulonglong)param_6[2] >> 0x20);
      lVar24 = local_198;
    }
    else {
      dVar5 = (double)param_2[8];
      uVar21 = SUB84(dVar5,0);
      uVar44 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar35 = (double)param_2[9];
      uVar45 = SUB84(dVar35,0);
      uVar46 = (undefined4)((ulonglong)dVar35 >> 0x20);
      dVar34 = (double)param_2[10];
      uVar48 = SUB84(dVar34,0);
      uVar49 = (undefined4)((ulonglong)dVar34 >> 0x20);
      iVar23 = _finite(dVar5);
      lVar24 = local_198;
      bVar32 = true;
      if ((iVar23 != 0) && (iVar23 = _finite(dVar35), iVar23 != 0)) {
        iVar23 = _finite(dVar34);
        bVar32 = iVar23 == 0;
      }
      if (((lVar24 != 0) && (local_190 != 0)) && (bVar32)) goto LAB_14342429c;
    }
    *(ulonglong *)(param_3 + 10) = CONCAT44(uVar44,uVar21);
    *(ulonglong *)(param_3 + 0xc) = CONCAT44(uVar46,uVar45);
    *(ulonglong *)(param_3 + 0xe) = CONCAT44(uVar49,uVar48);
    bVar32 = (uVar7 & 2) != 0;
    if (bVar32 && 0.0 < fVar3) {
      auVar6 = *(undefined1 (*) [16])(param_2 + 0xb);
      uVar44 = auVar6._0_4_;
      uVar47 = auVar6._4_4_;
      dVar5 = (double)param_2[0xd];
      uVar21 = SUB84(dVar5,0);
      uVar27 = (uint)((ulonglong)dVar5 >> 0x20);
      iVar23 = _finite(auVar6._0_8_);
      bVar33 = true;
      if ((iVar23 != 0) && (iVar23 = _finite(auVar6._8_8_), iVar23 != 0)) {
        iVar23 = _finite(dVar5);
        bVar33 = iVar23 == 0;
      }
      uVar45 = auVar6._8_4_;
      uVar50 = auVar6._12_4_;
      if (((lVar24 != 0) && (local_190 != 0)) && (bVar33)) goto LAB_14342429c;
    }
    else {
      uVar27 = (uint)((ulonglong)dVar37 >> 0x20) ^ 0x80000000;
      uVar21 = SUB84(dVar37,0);
      uVar50 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
      uVar47 = (uint)((ulonglong)dVar40 >> 0x20) ^ 0x80000000;
      uVar44 = SUB84(dVar40,0);
      uVar45 = SUB84(dVar16,0);
    }
    lVar29 = local_190;
    dVar34 = (double)CONCAT44(uVar47,uVar44);
    dVar35 = (double)CONCAT44(uVar50,uVar45);
    dVar5 = (double)CONCAT44(uVar27,uVar21);
    dVar36 = dVar5 * (double)CONCAT44(uVar27,uVar21) +
             (double)CONCAT44(uVar47,uVar44) * (double)CONCAT44(uVar47,uVar44) + dVar35 * dVar35;
    if (((dVar36 != 1.0) || (dVar15 = dVar35, NAN(dVar36))) &&
       (dVar5 = DAT_14c8464f0, dVar34 = DAT_14c8464e0, dVar15 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar36)) {
      dVar36 = 1.0 / SQRT(dVar36);
      dVar5 = (double)CONCAT44(uVar27,uVar21) * dVar36;
      dVar34 = (double)CONCAT44(uVar47,uVar44) * dVar36;
      dVar15 = dVar35 * dVar36;
    }
    uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
    auVar6._8_4_ = SUB84(dVar15,0);
    auVar6._0_8_ = dVar34;
    auVar6._12_4_ = uVar21;
    *(undefined1 (*) [16])(param_3 + 0x10) = auVar6;
    *(double *)(param_3 + 0x14) = dVar5;
    auVar11._8_4_ = SUB84(dVar15,0);
    auVar11._0_8_ = dVar34;
    auVar11._12_4_ = uVar21;
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar11;
    *(double *)(param_3 + 0x1a) = dVar5;
    dVar35 = *param_6;
    dVar36 = param_6[1];
    *(double *)(param_3 + 0x20) = param_6[2];
    *(double *)(param_3 + 0x1c) = dVar35;
    *(double *)(param_3 + 0x1e) = dVar36;
    dVar35 = *param_7;
    dVar36 = param_7[1];
    *(double *)(param_3 + 0x26) = param_7[2];
    *(double *)(param_3 + 0x22) = dVar35;
    *(double *)(param_3 + 0x24) = dVar36;
    if ((local_190 != 0) && (lVar24 != 0)) {
      local_1b0 = param_11;
      local_1b8 = param_3;
      FUN_143426011(lVar24,local_190,local_19c,param_3 + 10);
    }
    if ((bVar32 && 0.0 < fVar3) &&
       (0.009999999776482582 <= ABS(1.0 - (dVar5 * dVar5 + dVar34 * dVar34 + dVar15 * dVar15)))) {
      dVar35 = dVar37 * dVar37 + dVar40 * dVar40 + dVar16 * dVar16;
      if (((dVar35 != 1.0) || (dVar5 = dVar37, dVar34 = dVar40, dVar36 = dVar16, NAN(dVar35))) &&
         (dVar5 = DAT_14c8464f0, dVar34 = DAT_14c8464e0, dVar36 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar35)) {
        dVar35 = 1.0 / SQRT(dVar35);
        dVar5 = dVar37 * dVar35;
        dVar34 = dVar35 * dVar40;
        dVar36 = dVar16 * dVar35;
      }
      dVar5 = -dVar5;
      dVar34 = -dVar34;
      dVar15 = -dVar36;
      uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
      auVar12._8_4_ = SUB84(dVar36,0);
      auVar12._0_8_ = dVar34;
      auVar12._12_4_ = uVar21;
      *(undefined1 (*) [16])(param_3 + 0x10) = auVar12;
      *(double *)(param_3 + 0x14) = dVar5;
      auVar13._8_4_ = SUB84(dVar36,0);
      auVar13._0_8_ = dVar34;
      auVar13._12_4_ = uVar21;
      *(undefined1 (*) [16])(param_3 + 0x16) = auVar13;
      *(double *)(param_3 + 0x1a) = dVar5;
    }
    if (param_8 != 0) {
      bVar26 = *(byte *)(param_8 + 0x1c) & 0x1f;
      if (bVar26 == 4) {
        do {
          param_8 = *(longlong *)(param_8 + 0x20);
          bVar26 = *(byte *)(param_8 + 0x1c) & 0x1f;
        } while (param_8 != 0 && bVar26 == 4);
      }
      if (((bVar26 == 3) || (bVar26 == 0)) && (lVar8 = param_2[1], lVar8 != 0)) {
        cVar20 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 8))();
        if ((cVar20 != '\x05') ||
           (((ABS((double)param_2[3]) <= 9.999999747378752e-05 &&
             (ABS((double)param_2[4]) <= 9.999999747378752e-05)) &&
            (ABS((double)param_2[5]) <= 9.999999747378752e-05)))) {
          lVar10 = *(longlong *)(*(longlong *)*param_2 + 0x48);
          lVar25 = (longlong)(int)((longlong *)*param_2)[1] * 0x10;
          dVar18 = (double)*(float *)(lVar10 + 0xc + lVar25);
          dVar19 = (double)*(float *)(lVar10 + 8 + lVar25);
          local_168 = (double)*(float *)(lVar10 + 4 + lVar25);
          uStack_160 = 0;
          dVar17 = (double)*(float *)(lVar10 + lVar25);
          local_178._8_4_ = SUB84(local_168,0);
          local_178._0_8_ = dVar17;
          local_178._12_4_ = (int)((ulonglong)local_168 >> 0x20);
          dVar38 = dVar19 * -1.0;
          dVar39 = dVar18 * 1.0;
          dVar42 = dVar15 * -dVar17 - dVar34 * -local_168;
          dVar43 = dVar5 * -local_168 - dVar15 * dVar38;
          dVar41 = dVar34 * dVar38 - dVar5 * -dVar17;
          dVar43 = dVar43 + dVar43;
          dVar41 = dVar41 + dVar41;
          dVar42 = dVar42 + dVar42;
          local_118 = dVar42 * dVar39 + dVar5 + (dVar41 * -dVar17 - dVar43 * -local_168);
          dVar15 = dVar17 * dVar42 + dVar38 * dVar43 + dVar39 * dVar41 + dVar15;
          dVar5 = dVar16 * -dVar17 - dVar40 * -local_168;
          dVar35 = dVar37 * -local_168 - dVar16 * dVar38;
          dVar36 = dVar40 * dVar38 - dVar37 * -dVar17;
          dVar35 = dVar35 + dVar35;
          dVar36 = dVar36 + dVar36;
          dVar5 = dVar5 + dVar5;
          local_138 = dVar5 * dVar39 + dVar37 + (dVar36 * -dVar17 - dVar35 * -local_168);
          local_148 = (dVar5 * -local_168 - dVar36 * dVar38) + dVar39 * dVar35 + dVar40;
          dStack_140 = dVar17 * dVar5 + dVar38 * dVar35 + dVar39 * dVar36 + dVar16;
          local_1b8 = (undefined4 *)local_128;
          local_128._8_4_ = SUB84(dVar15,0);
          local_128._0_8_ = (dVar42 * -local_168 - dVar41 * dVar38) + dVar39 * dVar43 + dVar34;
          local_128._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          local_188 = dVar19;
          dStack_180 = dVar18;
          (**(code **)(**(longlong **)(lVar8 + 0x10) + 0xc0))
                    (*(longlong **)(lVar8 + 0x10),&local_108,&local_148,(int)param_2[2]);
          dVar35 = dStack_100 * (double)local_178._0_8_ - local_168 * local_108;
          dVar37 = local_f8 * (double)local_178._8_8_ - dVar19 * dStack_100;
          dVar40 = local_108 * local_188 - dVar17 * local_f8;
          dVar35 = dVar35 + dVar35;
          dVar37 = dVar37 + dVar37;
          dVar40 = dVar40 + dVar40;
          dVar5 = dVar18 * dVar35 + local_f8 +
                  (dVar40 * (double)local_178._0_8_ - dVar37 * local_168);
          dVar34 = (dVar35 * (double)local_178._8_8_ - dVar40 * dVar19) +
                   dVar18 * dVar37 + local_108;
          dVar15 = (dVar19 * dVar37 - dVar35 * dVar17) + dVar18 * dVar40 + dStack_100;
        }
        else {
          dVar34 = (double)param_2[3];
          dVar15 = (double)param_2[4];
          dVar5 = (double)param_2[5];
        }
      }
    }
    auVar14._8_4_ = SUB84(dVar15,0);
    auVar14._0_8_ = dVar34;
    auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar14;
    *(double *)(param_3 + 0x1a) = dVar5;
    lVar28 = *(longlong *)(lVar28 + 0x10);
    bVar26 = *(byte *)(lVar28 + 0x1c) & 0x1f;
    if (bVar26 == 4 && lVar28 != 0) {
      do {
        lVar28 = *(longlong *)(lVar28 + 0x20);
        bVar26 = *(byte *)(lVar28 + 0x1c) & 0x1f;
      } while (lVar28 != 0 && bVar26 == 4);
    }
    uVar31 = 0;
    uVar30 = uVar31;
    if (bVar26 == 0xc) {
      if (((param_11 == '\0') || (local_19c == -1)) ||
         ((lVar29 == 0 || ((lVar24 == 0 || (lVar24 = FUN_144b266e4(lVar24,lVar29), lVar24 == 0))))))
      goto LAB_14342433d;
      piVar9 = *(int **)(lVar24 + 0x58);
      if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
LAB_143425040:
        param_3[0x2c] = 0;
        iVar23 = 0;
      }
      else {
        if (*(longlong *)(piVar9 + 2) == 0) goto LAB_143425040;
        uVar27 = *(uint *)(*(longlong *)(piVar9 + 2) + 0xc);
        param_3[0x2c] = uVar27;
        if ((int)uVar27 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar23 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar23 = DAT_14c964868 + 1;
          UNLOCK();
          iVar22 = DAT_14c964868 + 1;
          bVar32 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar23;
          if (bVar32) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar22);
          }
          LOCK();
          iVar23 = *(int *)(lVar24 + 0x10);
          bVar32 = iVar23 == 0;
          if (bVar32) {
            *(int *)(lVar24 + 0x10) = iVar22;
            iVar23 = 0;
          }
          UNLOCK();
          if (bVar32) {
            iVar23 = iVar22;
          }
        }
      }
      param_3[0x2d] = iVar23;
      goto LAB_14342433d;
    }
    uVar30 = 0;
    if ((((bVar26 != 0xb) || (uVar30 = uVar31, param_10 == '\0')) || (local_19c == -1)) ||
       (lVar28 = local_198, iVar23 = local_19c, local_198 == 0)) goto LAB_14342433d;
  }
  else {
    if (lVar24 != 0 && lVar28 != 0) {
      pdVar1 = (double *)(lVar28 + 0x48 + (ulonglong)((*(byte *)(lVar28 + 8) & 3) == 0) * 8);
      local_108 = *pdVar1;
      dStack_100 = pdVar1[1];
      cVar20 = FUN_144b2633e(param_5,&local_108,0);
      *(byte *)((longlong)param_3 + 0xad) =
           *(byte *)((longlong)param_3 + 0xad) & 0xfc | cVar20 == '\x02' | 2;
      *(undefined8 *)(param_3 + 1) = 0;
      uVar31 = *(undefined8 *)(param_9 + 0x28);
      uVar30 = *(undefined8 *)(param_9 + 0x30);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_9 + 0x20);
      *(undefined8 *)(param_3 + 6) = uVar31;
      *(undefined8 *)(param_3 + 8) = uVar30;
      if ((*(byte *)(param_2 + 7) & 1) == 0) {
LAB_1434244e2:
        dVar5 = *param_6;
        dVar35 = param_6[1];
        *(double *)(param_3 + 0xe) = param_6[2];
        *(double *)(param_3 + 10) = dVar5;
        *(double *)(param_3 + 0xc) = dVar35;
      }
      else {
        dVar5 = (double)param_2[8];
        dVar35 = (double)param_2[9];
        dVar37 = (double)param_2[10];
        iVar22 = _finite(dVar5);
        if (((iVar22 == 0) || (iVar22 = _finite(dVar35), iVar22 == 0)) ||
           (iVar22 = _finite(dVar37), iVar22 == 0)) goto LAB_1434244e2;
        *(double *)(param_3 + 10) = dVar5;
        *(double *)(param_3 + 0xc) = dVar35;
        *(double *)(param_3 + 0xe) = dVar37;
      }
      dVar5 = *param_6;
      dVar35 = param_6[1];
      *(double *)(param_3 + 0x20) = param_6[2];
      *(double *)(param_3 + 0x1c) = dVar5;
      *(double *)(param_3 + 0x1e) = dVar35;
      dVar5 = *param_7;
      dVar35 = param_7[1];
      *(double *)(param_3 + 0x26) = param_7[2];
      *(double *)(param_3 + 0x22) = dVar5;
      *(double *)(param_3 + 0x24) = dVar35;
      dVar5 = (double)param_2[0xb];
      dVar35 = (double)param_2[0xc];
      dVar37 = (double)param_2[0xd];
      iVar22 = _finite(dVar5);
      if (((iVar22 == 0) || (iVar22 = _finite(dVar35), iVar22 == 0)) ||
         ((iVar22 = _finite(dVar37), iVar22 == 0 || ((*(ushort *)(param_2 + 7) & 2) == 0)))) {
        *(undefined8 *)(param_3 + 0x1a) = DAT_14c8462d0;
        uVar30 = DAT_14c8462c8;
        *(undefined8 *)(param_3 + 0x16) = DAT_14c8462c0;
        *(undefined8 *)(param_3 + 0x18) = uVar30;
        param_3[0x28] = 0;
        if (cVar20 != '\x02') {
          dVar35 = param_6[2] - param_7[2];
          dVar5 = param_6[1] - param_7[1];
          dVar37 = *param_6 - *param_7;
          dVar40 = dVar35 * dVar35 + dVar37 * dVar37 + dVar5 * dVar5;
          if (((dVar40 != 1.0) || (dVar34 = dVar37, dVar16 = dVar5, dVar36 = dVar35, NAN(dVar40)))
             && (dVar34 = DAT_14c8464e0, dVar16 = DAT_14c8464e8, dVar36 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar40)) {
            dVar40 = 1.0 / SQRT(dVar40);
            dVar34 = dVar37 * dVar40;
            dVar16 = dVar5 * dVar40;
            dVar36 = dVar35 * dVar40;
          }
          *(double *)(param_3 + 0x16) = dVar34;
          *(double *)(param_3 + 0x18) = dVar16;
          *(double *)(param_3 + 0x1a) = dVar36;
        }
      }
      else {
        *(double *)(param_3 + 0x16) = dVar5;
        *(double *)(param_3 + 0x18) = dVar35;
        *(double *)(param_3 + 0x1a) = dVar37;
        param_3[0x28] = *(uint *)(param_2 + 0xe) & 0x7fffffff;
      }
      *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x16);
      *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(param_3 + 0x18);
      lVar24 = FUN_1479ab276(lVar24);
      if ((lVar24 != 0) &&
         (uVar27 = *(uint *)(lVar28 + 8) >> 3, (int)uVar27 < *(int *)(lVar24 + 0x88))) {
        lVar29 = lVar24 + 0x78;
        if (*(longlong *)(lVar24 + 0x80) != 0) {
          lVar29 = *(longlong *)(lVar24 + 0x80);
        }
        lVar29 = *(longlong *)(lVar29 + (ulonglong)uVar27 * 8);
        if (lVar29 != 0) {
          local_1b0 = param_11;
          local_1b8 = param_3;
          FUN_143426011(lVar29,lVar24,(int)param_2[2],param_3 + 10);
        }
      }
    }
    else {
      local_f8 = *(double *)(param_3 + 0x20);
      local_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      local_118 = *(double *)(param_3 + 0x26);
      local_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = local_f8;
      *(double *)(param_3 + 0x1c) = local_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = local_118;
      *(undefined8 *)(param_3 + 0x22) = local_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = local_128._8_8_;
      uVar30 = 0;
      if (lVar28 == 0) goto LAB_14342433d;
    }
    lVar24 = *(longlong *)(lVar28 + 0x10);
    bVar26 = *(byte *)(lVar24 + 0x1c) & 0x1f;
    if (bVar26 == 4 && lVar24 != 0) {
      do {
        lVar24 = *(longlong *)(lVar24 + 0x20);
        bVar26 = *(byte *)(lVar24 + 0x1c) & 0x1f;
      } while (lVar24 != 0 && bVar26 == 4);
    }
    uVar30 = 0;
    if ((bVar26 != 0xb) || (param_10 != '\x01' || iVar23 == -1)) goto LAB_14342433d;
  }
  uVar21 = FUN_147c68946(lVar28,iVar23);
  *param_3 = uVar21;
  uVar30 = 0;
LAB_14342433d:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30;
}



// FUNCTION 143425071 FUN_143425071 body=69 status=ok
// SIG undefined FUN_143425071(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143425071(void)

{
  _DAT_14cacfc78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434250b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacfc80,1);
  return;
}



// FUNCTION 1434250b6 FUN_1434250b6 body=1450 status=ok
// SIG undefined FUN_1434250b6(void)

byte FUN_1434250b6(uint param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  byte bVar14;
  longlong lVar15;
  undefined1 auStack_bc8 [32];
  undefined8 local_ba8;
  longlong local_ba0;
  undefined8 *local_b98;
  undefined4 *puStack_b90;
  uint local_b88;
  undefined8 local_b78 [2];
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 *puStack_b40;
  ulonglong local_b38;
  undefined4 local_b30;
  undefined1 local_b2c [4];
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_bc8;
  uVar10 = (int)param_4[1] + param_1;
  local_ba8 = param_3;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  if (*(int *)((longlong)param_4 + 0xc) < (int)uVar10) {
    FUN_1417bb680(param_4,uVar10);
  }
  if ((int)uVar10 < DAT_14c761380) {
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar9 = 0;
      do {
        local_af8 = 0;
        uStack_af0 = 0;
        local_b08 = 0;
        uStack_b00 = 0;
        local_b18 = 0;
        uStack_b10 = 0;
        local_b28 = 0;
        uStack_b20 = 0;
        local_ae8 = 0;
        lVar15 = *(longlong *)(param_2 + 8 + lVar9);
        uVar3 = *(undefined8 *)(param_2 + lVar9);
        puVar12 = (undefined8 *)(lVar15 + 0x48 + (ulonglong)((*(byte *)(lVar15 + 8) & 3) == 0) * 8);
        local_b78[0] = *puVar12;
        local_b78[1] = puVar12[1];
        cVar4 = FUN_144b2633e(local_ba8,local_b78,0);
        local_ae8 = CONCAT44(local_ae8._4_4_,(uint)(cVar4 == '\x02'));
        lVar6 = FUN_1479ab276(uVar3);
        if ((lVar6 != 0) &&
           (uVar10 = *(uint *)(lVar15 + 8) >> 3, (int)uVar10 < *(int *)(lVar6 + 0x88))) {
          lVar15 = lVar6 + 0x78;
          if (*(longlong *)(lVar6 + 0x80) != 0) {
            lVar15 = *(longlong *)(lVar6 + 0x80);
          }
          lVar15 = *(longlong *)(lVar15 + (ulonglong)uVar10 * 8);
          if (lVar15 != 0) {
            FUN_144a57817(lVar15,lVar6);
          }
        }
        bVar14 = bVar14 | cVar4 == '\x02';
        FUN_14342660b(param_4,&local_b28);
        lVar9 = lVar9 + 0x38;
      } while ((ulonglong)param_1 * 0x38 - lVar9 != 0);
    }
  }
  else {
    local_128 = 0;
    local_120 = 0x4000000000;
    local_110 = 0;
    local_108 = 0;
    uStack_104 = 0x40;
    uStack_100 = 0xffffffff;
    uStack_fc = 0;
    local_78 = 0;
    local_70 = 0;
    if (uVar10 != 0) {
      FUN_144ae1884(&local_b28,uVar10);
      uVar1 = (ulonglong)(((uVar10 >> 1) - 1) + (uint)(uVar10 >> 1 == 0)) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar9 & 0x1f);
      if ((uint)lVar9 < 5) {
        iVar5 = 0x20;
      }
      if (uVar10 < 4) {
        iVar5 = 0x20;
      }
      if (local_70 < iVar5) {
        local_70 = iVar5;
        FUN_1449a5c52();
      }
    }
    if (0 < (int)param_4[1]) {
      lVar9 = 0x20;
      lVar15 = 0;
      do {
        lVar6 = *param_4;
        lVar15 = lVar15 + 1;
        local_b30 = (undefined4)lVar15;
        local_b78[0] = *(undefined8 *)(lVar6 + 0x18 + lVar9);
        iVar5 = *(int *)(lVar6 + 4 + lVar9);
        if ((iVar5 == 0) || (uVar10 = *(uint *)(lVar6 + lVar9), (int)uVar10 < 0)) {
LAB_143425386:
          local_b78[1] = 0;
        }
        else {
          local_b78[1] = 0;
          if ((int)uVar10 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar5)) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143425386;
            local_b78[1] = *puVar12;
          }
        }
        local_b68 = CONCAT44(local_b68._4_4_,*(undefined4 *)(lVar6 + 8 + lVar9));
        local_b98 = local_b78;
        puStack_b90 = &local_b30;
        FUN_1479affe4(&local_b28,local_b2c);
        lVar9 = lVar9 + 0x48;
      } while (lVar15 < (int)param_4[1]);
    }
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar9 = 0;
      local_ba0 = param_2;
      do {
        local_b48 = 0;
        puStack_b40 = (undefined8 *)0x0;
        local_b58 = 0;
        uStack_b50 = 0;
        local_b68 = 0;
        uStack_b60 = 0;
        local_b78[0] = 0;
        local_b78[1] = 0;
        local_b38 = 0;
        lVar15 = *(longlong *)(param_2 + 8 + lVar9);
        puVar12 = (undefined8 *)(lVar15 + 0x48 + (ulonglong)((*(byte *)(lVar15 + 8) & 3) == 0) * 8);
        local_b98 = (undefined8 *)*puVar12;
        puStack_b90 = (undefined4 *)puVar12[1];
        cVar4 = FUN_144b2633e(local_ba8,&local_b98,0);
        local_b38 = CONCAT44(local_b38._4_4_,(uint)(cVar4 == '\x02'));
        lVar6 = FUN_1479ab276();
        if ((lVar6 == 0) ||
           (uVar10 = *(uint *)(lVar15 + 8) >> 3, *(int *)(lVar6 + 0x88) <= (int)uVar10)) {
LAB_1434254ad:
          local_b98 = (undefined8 *)0x0;
LAB_1434254b8:
          puStack_b90 = (undefined4 *)0x0;
        }
        else {
          lVar15 = lVar6 + 0x78;
          if (*(longlong *)(lVar6 + 0x80) != 0) {
            lVar15 = *(longlong *)(lVar6 + 0x80);
          }
          lVar15 = *(longlong *)(lVar15 + (ulonglong)uVar10 * 8);
          if (lVar15 == 0) goto LAB_1434254ad;
          FUN_144a57817(lVar15,lVar6,local_b78);
          local_b98 = puStack_b40;
          if (((local_b58._4_4_ == 0) || ((int)(uint)local_b58 < 0)) ||
             ((DAT_14c9647dc <= (int)(uint)local_b58 ||
              (((puVar13 = (ulonglong *)
                           ((ulonglong)(((uint)local_b58 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_b58 >> 0x10) * 8)),
                puVar13 == (ulonglong *)0x0 || ((int)puVar13[2] != local_b58._4_4_)) ||
               ((puVar13[1] & 0x10200000) != 0)))))) goto LAB_1434254b8;
          puStack_b90 = (undefined4 *)*puVar13;
        }
        local_b88 = (uint)uStack_b50;
        uVar10 = ((uint)((ulonglong)local_b98 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b98 >> 4))
                 * -0x7a143595;
        uVar8 = ((uint)((ulonglong)puStack_b90 >> 0x14) & 0xffff ^
                (uint)((ulonglong)puStack_b90 >> 4)) * -0x7a143595;
        uVar10 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb ^ (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        puVar7 = (uint *)FUN_1449a590c(&local_b28,uVar10 ^ (uint)uStack_b50 ^ uVar10 >> 0x10);
        lVar15 = (longlong)(int)*puVar7;
        if (lVar15 == 0) {
          iVar5 = (int)param_4[1];
          lVar15 = (longlong)iVar5;
          uVar10 = iVar5 + 1;
          *(uint *)(param_4 + 1) = uVar10;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar10) {
            FUN_1414fa4c8(param_4,iVar5);
          }
          lVar6 = *param_4;
          *(undefined8 *)(lVar6 + lVar15 * 0x48) = local_b78[0];
          puVar12 = (undefined8 *)(lVar6 + 8 + lVar15 * 0x48);
          *puVar12 = local_b78[1];
          puVar12[1] = local_b68;
          *(undefined4 *)(lVar6 + 0x18 + lVar15 * 0x48) = (undefined4)uStack_b60;
          *(undefined1 *)(lVar6 + 0x1c + lVar15 * 0x48) = uStack_b60._4_1_;
          puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar15 * 0x48);
          *puVar2 = (uint)local_b58;
          puVar2[1] = local_b58._4_4_;
          puVar2[2] = (uint)uStack_b50;
          puVar2[3] = uStack_b50._4_4_;
          puVar12 = (undefined8 *)(lVar6 + 0x30 + lVar15 * 0x48);
          *puVar12 = local_b48;
          puVar12[1] = puStack_b40;
          *(undefined1 *)(lVar6 + 0x40 + lVar15 * 0x48) = (undefined1)local_b38;
          *puVar7 = uVar10;
          param_2 = local_ba0;
        }
        else if (((*(byte *)(*param_4 + -8 + lVar15 * 0x48) & 1) == 0) && ((local_b38 & 1) != 0)) {
          puVar12 = local_b78;
          puVar11 = (undefined8 *)(*param_4 + lVar15 * 0x48 + -0x48);
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        bVar14 = bVar14 | cVar4 == '\x02';
        lVar9 = lVar9 + 0x38;
      } while ((ulonglong)param_1 * 0x38 != lVar9);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401caadc(&local_b28);
  }
  if ((local_60 ^ (ulonglong)auStack_bc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar14;
}



// FUNCTION 143425662 FUN_143425662 body=48 status=ok
// SIG undefined FUN_143425662(void)

longlong FUN_143425662(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb12a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434256a0 FUN_1434256a0 body=38 status=ok
// SIG undefined FUN_1434256a0(void)

undefined8 FUN_1434256a0(undefined8 param_1,int param_2)

{
  FUN_140208272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434256c6 FUN_1434256c6 body=62 status=ok
// SIG undefined FUN_1434256c6(void)

undefined8 * FUN_1434256c6(undefined4 param_1,undefined8 *param_2,longlong param_3)

{
  if ((*(byte *)(*(longlong *)(param_3 + 8) + 99) & 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)((longlong)param_2 + 4) = 2;
    *(undefined4 *)(param_2 + 2) = 0x80;
  }
  else {
    FUN_140061418(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1434257ac FUN_1434257ac body=76 status=ok
// SIG undefined FUN_1434257ac(void)

void FUN_1434257ac(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  *(undefined ***)((longlong)param_2 + 0x50) = &PTR_FUN_14a819a28;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined2 *)((longlong)param_2 + 0x78) = 0;
  return;
}



// FUNCTION 143425830 FUN_143425830 body=148 status=ok
// SIG undefined FUN_143425830(void)

undefined1 FUN_143425830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 8 + lVar17) = *(undefined4 *)(param_3 + 8 + lVar17);
      *(undefined8 *)(param_2 + lVar17) = *(undefined8 *)(param_3 + lVar17);
      lVar16 = *(longlong *)(param_3 + 0x10 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + 0x10 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar17;
      *(longlong *)(lVar1 + 0x10) = lVar16;
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x38 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(lVar1 + 0x18) = *puVar2;
      *(undefined4 *)(lVar1 + 0x1c) = uVar4;
      *(undefined4 *)(lVar1 + 0x20) = uVar5;
      *(undefined4 *)(lVar1 + 0x24) = uVar6;
      *(undefined4 *)(lVar1 + 0x28) = uVar7;
      *(undefined4 *)(lVar1 + 0x2c) = uVar8;
      *(undefined4 *)(lVar1 + 0x30) = uVar9;
      *(undefined4 *)(lVar1 + 0x34) = uVar10;
      *(undefined4 *)(lVar1 + 0x38) = uVar11;
      *(undefined4 *)(lVar1 + 0x3c) = uVar12;
      *(undefined4 *)(lVar1 + 0x40) = uVar13;
      *(undefined4 *)(lVar1 + 0x44) = uVar14;
      lVar17 = lVar17 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143425974 FUN_143425974 body=1209 status=ok
// SIG undefined FUN_143425974(void)

void FUN_143425974(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [4];
  undefined8 *puVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *_Dest;
  byte bVar9;
  undefined8 *puVar10;
  undefined1 auStack_328 [11];
  longlong alStack_31d [2];
  undefined4 uStack_30d;
  byte bStack_309;
  undefined8 *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined2 local_2f4;
  undefined1 local_248 [16];
  undefined1 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 local_220 [7];
  undefined1 auStack_219 [5];
  undefined1 auStack_214 [3];
  undefined1 auStack_211 [5];
  byte abStack_20c [3];
  undefined1 uStack_209;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined1 local_1d8;
  longlong lStack_155;
  undefined1 local_148 [4];
  byte local_144;
  undefined1 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ushort local_58;
  undefined8 local_50;
  ushort local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  local_1f8 = *puVar5;
  local_308 = &local_208;
  local_208 = 0xffffffffffffffff;
  uStack_200 = 0xffffffff;
  local_1f0 = 1;
  local_1ec = 0x100000000000;
  local_1e4 = 0;
  local_1d8 = 0;
  local_300 = CONCAT44(local_300._4_4_,1);
  FUN_144760590(param_2,&local_308,0);
  if ((char)param_1[1] == '\x01') {
    plVar6 = (longlong *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
    local_308 = (undefined8 *)*plVar6;
    lVar8 = 0x15;
    do {
      *(undefined1 (*) [16])((longlong)alStack_31d + lVar8) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)&uStack_30d + lVar8) = 0xffffffff;
      (&bStack_309 + lVar8)[0] = 0;
      (&bStack_309 + lVar8)[1] = 0;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xd5);
    local_234 = 0;
    local_248 = (undefined1  [16])0x0;
    local_238 = 0;
    local_230 = 0xffffffff;
    uStack_22c = 0xffffffff;
    uStack_228 = 0xffffffff;
    uStack_224 = 0xffffffff;
    _local_220 = 0;
    auStack_219._1_4_ = auStack_219._1_4_ & 0xffffff00;
    _auStack_214 = 0;
    auStack_211._1_3_ = 0;
    local_300 = 0;
    local_2f8 = 0xffffffff;
    local_2f4 = 0x900;
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar7 = _Dest + 0xd;
    if ((wchar_t *)param_2[1] < pwVar7) {
      FUN_140023dd8(param_2,0x1c);
      _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
      pwVar7 = _Dest + 0xd;
    }
    *param_2 = (ulonglong)pwVar7;
    wcscpy(_Dest,L"ClearUCanvas");
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x23;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x120);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 0x23;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a217b50;
    memcpy(puVar10 + 2,&local_308,0xe8);
    puVar10[0x1f] = 0;
    puVar10[0x20] = CONCAT44(_auStack_214,auStack_219._1_4_);
    *(uint *)((longlong)puVar10 + 0x107) = CONCAT31(auStack_211._1_3_,auStack_211[0]);
    puVar10[0x22] = _Dest;
    lVar8 = 0x11;
    do {
      *(undefined8 *)(local_220 + lVar8 + 7) = 0;
      *(undefined8 *)(auStack_214 + lVar8 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_209 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xd1);
    local_148 = (undefined1  [4])0x0;
    local_144 = 0;
    lVar8 = 0xd9;
    do {
      *(undefined8 *)(local_220 + lVar8 + 7) = 0;
      *(undefined8 *)(auStack_214 + lVar8 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_209 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0x199);
    local_80 = 0;
    local_50 = 0;
    local_48 = local_48 & 0xff;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = local_58 & 0xff00;
    lVar8 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_31d + lVar8) == 0) break;
      *(longlong *)(local_220 + lVar8 + 3) = *(longlong *)((longlong)alStack_31d + lVar8);
      bVar1 = *(byte *)((longlong)&local_308 + lVar8);
      bVar9 = bVar1 >> 2;
      auStack_211[lVar8 + 4] = bVar9;
      abStack_20c[lVar8] = bVar1 & 3;
      *(undefined4 *)(auStack_214 + lVar8 + 3) = *(undefined4 *)((longlong)&uStack_30d + lVar8);
      *(uint *)(auStack_219 + lVar8 + 4) = (uint)(&bStack_309)[lVar8];
      local_148 = (undefined1  [4])((int)local_148 + 1);
      local_144 = local_144 | bVar9 == 2;
      lVar2 = *(longlong *)((longlong)alStack_31d + lVar8 + 8);
      if (lVar2 != 0) {
        local_80 = 1;
        uVar3 = *(undefined8 *)(auStack_219 + lVar8 + 4);
        *(undefined8 *)((longlong)&lStack_155 + lVar8) = *(undefined8 *)(local_220 + lVar8 + 3);
        *(undefined8 *)(&stack0xfffffffffffffeb3 + lVar8) = uVar3;
        *(undefined8 *)(local_148 + lVar8 + 3) = *(undefined8 *)(auStack_211 + lVar8 + 4);
        *(longlong *)((longlong)&lStack_155 + lVar8) = lVar2;
      }
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xd5);
    auVar4 = local_148;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_78 = ZEXT816(0);
    if (0 < (longlong)(int)local_148) {
      memcpy(param_2 + 0x15,&local_208,(longlong)(int)local_148 * 0x18);
    }
    *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    bVar1 = *(byte *)((longlong)param_2 + 0x17b);
    *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
    *(undefined2 *)(param_2 + 0x2f) = 0;
    *(byte *)((longlong)param_2 + 0x17b) = bVar1 & 0xfc | 2;
    if ((bVar1 & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
      *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
    }
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 2;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x18);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 2;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
    *(undefined2 *)(param_2 + 0x2f) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143425e3e FUN_143425e3e body=12 status=ok
// SIG undefined FUN_143425e3e(void)

void FUN_143425e3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143425e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143425e4a FUN_143425e4a body=29 status=ok
// SIG undefined FUN_143425e4a(void)

undefined8 FUN_143425e4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143425e8e FUN_143425e8e body=282 status=ok
// SIG undefined FUN_143425e8e(void)

undefined8 * FUN_143425e8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143425e67);
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



// FUNCTION 143425fa8 FUN_143425fa8 body=105 status=ok
// SIG undefined FUN_143425fa8(void)

void FUN_143425fa8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143425974(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143425974(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143425feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143426011 FUN_143426011 body=1529 status=ok
// SIG undefined FUN_143426011(void)

void FUN_143426011(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  uint *local_78;
  uint *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(char *)(param_5 + 0x2b) = (char)(*(uint *)(param_1 + 8) >> 3);
  *(undefined8 *)(param_5 + 0x3a) = 0;
  piVar2 = *(int **)(param_2 + 0x70);
  local_68 = param_4;
  if ((piVar2 == (int *)0x0) ||
     (((*piVar2 != 1 &&
       ((((*piVar2 != 8 || (*(longlong *)(piVar2 + 2) == 0)) ||
         (piVar2 = *(int **)(*(longlong *)(piVar2 + 2) + 0x10), piVar2 == (int *)0x0)) ||
        (*piVar2 != 1)))) || (puVar4 = *(uint **)(piVar2 + 2), puVar4 == (uint *)0x0)))) {
    puVar4 = (uint *)FUN_140aaa582(param_2);
    if (puVar4 == (uint *)0x0) {
      uVar16 = 0;
      uVar6 = 0;
    }
    else {
      uVar12 = puVar4[3];
      uVar6 = (ulonglong)uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar12 = *(uint *)(lVar3 + 0x10);
      if (*(uint *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        local_78 = puVar4;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar12 = *(uint *)(lVar3 + 0x10);
        bVar17 = uVar12 == 0;
        if (bVar17) {
          *(uint *)(lVar3 + 0x10) = uVar15;
          uVar12 = 0;
        }
        UNLOCK();
        puVar4 = local_78;
        if (bVar17) {
          uVar12 = uVar15;
        }
      }
      uVar16 = (ulonglong)uVar12;
      param_5[0x2a] = 0xffffffff;
      *(undefined8 *)(param_5 + 0x3c) = 0;
      lVar3 = *(longlong *)(param_2 + 0x10);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1c) == 2)) {
        bVar17 = false;
        lVar13 = 0;
        if (1 < *(byte *)(param_2 + 0x90)) {
          lVar13 = param_2;
        }
        local_78 = puVar4;
        FUN_140aaa5c0(lVar3,&local_4c,lVar13);
        param_5[0x2a] = local_4c;
        local_5c = local_4c;
        FUN_142a1e8a0(lVar3);
        *(undefined8 *)(param_5 + 0x3c) = local_58;
        lVar13 = (**(code **)(*(longlong *)(local_78 + 0xae) + 0x10))(local_78 + 0xae,param_5[0x2a])
        ;
        *(longlong *)(param_5 + 0x3a) = lVar13;
        goto LAB_143426136;
      }
    }
    lVar13 = *(longlong *)(param_5 + 0x3a);
    bVar17 = false;
  }
  else {
    plVar10 = *(longlong **)(puVar4 + 0x5c);
    puVar5 = *(uint **)(puVar4 + 0x42);
    if (*(uint **)(puVar4 + 0x42) == (uint *)0x0) {
      puVar5 = puVar4;
    }
    if ((plVar10 != (longlong *)0x0) && (iVar1 = (int)plVar10[5], iVar1 != 0)) {
      local_78 = (uint *)(plVar10 + 2);
      if ((uint *)plVar10[4] != (uint *)0x0) {
        local_78 = (uint *)plVar10[4];
      }
      uVar12 = *local_78;
      if (uVar12 == 0) {
        iVar7 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar7 = iVar1 + -1;
        }
        uVar6 = 0;
        uVar16 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar16 = uVar6;
        }
        iVar7 = 0;
        do {
          if (uVar16 == uVar6) goto LAB_1434260a0;
          iVar7 = iVar7 + 0x20;
          uVar12 = local_78[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar6 = 0;
        iVar7 = 0;
      }
      uVar9 = (ulonglong)(-uVar12 & uVar12);
      uVar16 = uVar9 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar14 < iVar1) {
        iVar11 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar11 = iVar1 + -1;
        }
        iVar11 = iVar11 >> 5;
        local_70 = local_78 + 1;
        uVar12 = 0xffffffff;
        do {
          if ((*(longlong *)(*plVar10 + (longlong)iVar14 * 0x90) == param_1) &&
             (puVar4 = *(uint **)((longlong)iVar14 * 0x90 + *plVar10 + 0x10),
             (*(byte *)((longlong)puVar4 + 0x3e) & 4) == 0)) {
            puVar5 = puVar4;
          }
          uVar12 = uVar12 & ~(uint)uVar9;
          iVar14 = (int)uVar6;
          lVar3 = (longlong)iVar14;
          uVar15 = local_78[lVar3] & uVar12;
          if (uVar15 == 0) {
            iVar8 = iVar11;
            if (iVar11 < iVar14) {
              iVar8 = iVar14;
            }
            if (iVar11 <= iVar14) break;
            lVar13 = 0;
            while( true ) {
              iVar7 = iVar7 + 0x20;
              uVar15 = local_70[lVar3 + lVar13];
              if (uVar15 != 0) break;
              lVar13 = lVar13 + 1;
              if (iVar8 - lVar3 == lVar13) goto LAB_1434260a0;
            }
            uVar6 = (ulonglong)(iVar14 + (int)lVar13 + 1);
            uVar12 = 0xffffffff;
          }
          uVar9 = (ulonglong)(-uVar15 & uVar15);
          uVar16 = uVar9 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar14 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        } while (iVar14 < iVar1);
      }
    }
LAB_1434260a0:
    param_5[0x2a] = puVar5[3];
    if ((((puVar5[1] != 0) && (uVar12 = *puVar5, -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)
        ) && (((plVar10 = (longlong *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == puVar5[1])) &&
              (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) {
      *(undefined8 *)(param_5 + 0x3c) = *(undefined8 *)(*plVar10 + 0x28);
    }
    uVar6 = *(ulonglong *)(puVar5 + 0x50);
    uVar16 = uVar6 >> 0x20;
    lVar3 = *(longlong *)(puVar5 + 0x52);
    if (*(longlong *)(puVar5 + 0x4e) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(puVar5 + 0x4e) + 0x50);
    }
    *(longlong *)(param_5 + 0x3a) = lVar13;
    bVar17 = lVar3 != 0;
  }
LAB_143426136:
  if (lVar13 != 0) {
    *(ulonglong *)(param_5 + 0x38) = uVar6 & 0xffffffff | uVar16 << 0x20;
    piVar2 = *(int **)(param_2 + 0x70);
    if (((piVar2 != (int *)0x0) && (*piVar2 == 8)) && (*(longlong *)(piVar2 + 2) != 0)) {
      plVar10 = *(longlong **)(*(longlong *)(piVar2 + 2) + 0x18);
      if (plVar10 == (longlong *)0x0) {
        local_58 = 0;
      }
      else {
        (**(code **)(*plVar10 + 8))(plVar10,&local_58);
      }
      *(undefined8 *)(param_5 + 0x38) = local_58;
    }
  }
  *(undefined8 *)(param_5 + 0x2c) = 0;
  if ((bool)(((int)uVar6 != 0 || (int)uVar16 != 0) | bVar17)) {
    if ((int)uVar6 != 0 || (int)uVar16 != 0) {
      uVar6 = uVar6 & 0xffffffff | uVar16 << 0x20;
      *(ulonglong *)(param_5 + 0x36) = uVar6;
      *(ulonglong *)(param_5 + 0x2e) = uVar6;
      *(undefined8 *)(param_5 + 0x30) = 0;
      *(undefined8 *)(param_5 + 0x32) = 0;
      param_5[0x34] = param_5[0x2a];
      *(undefined1 *)(param_5 + 0x35) = 2;
    }
    if ((param_6 != '\0') && (lVar3 = FUN_1436294fa(param_1,param_2,param_3,local_68), lVar3 != 0))
    {
      piVar2 = *(int **)(lVar3 + 0x58);
      if ((piVar2 == (int *)0x0) || ((*piVar2 != 2 || (*(longlong *)(piVar2 + 2) == 0)))) {
        param_5[0x2c] = 0;
        iVar1 = 0;
      }
      else {
        uVar12 = *(uint *)(*(longlong *)(piVar2 + 2) + 0xc);
        param_5[0x2c] = uVar12;
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar1 = *(int *)(lVar3 + 0x10);
          bVar17 = iVar1 == 0;
          if (bVar17) {
            *(int *)(lVar3 + 0x10) = iVar7;
            iVar1 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar1 = iVar7;
          }
        }
      }
      param_5[0x2d] = iVar1;
    }
  }
  *param_5 = 0xffffffff;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342660b FUN_14342660b body=482 status=ok
// SIG undefined FUN_14342660b(void)

void FUN_14342660b(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (0 < lVar11) {
    lVar5 = *param_1;
    uVar2 = *(uint *)(param_2 + 4);
    lVar14 = 0;
    do {
      if ((((((int)uVar2 < 0 || *(int *)((longlong)param_2 + 0x24) == 0) ||
             DAT_14c9647dc <= (int)uVar2) ||
           (plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar9 == (longlong *)0x0)) || ((int)plVar9[2] != *(int *)((longlong)param_2 + 0x24))) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar9;
      }
      iVar3 = *(int *)(lVar5 + 0x24 + lVar14);
      if ((iVar3 == 0) || (uVar4 = *(uint *)(lVar5 + 0x20 + lVar14), (int)uVar4 < 0)) {
LAB_14342673f:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar3)) ||
             ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_14342673f;
          lVar10 = *plVar9;
        }
      }
      if (((lVar10 == lVar12) && (*(longlong *)(lVar5 + 0x38 + lVar14) == param_2[7])) &&
         (*(int *)(lVar5 + 0x28 + lVar14) == *(int *)(param_2 + 5))) {
        if ((*(byte *)(lVar5 + 0x40 + lVar14) & 1) != 0) {
          return;
        }
        if ((*(byte *)(param_2 + 8) & 1) == 0) {
          return;
        }
        puVar13 = (undefined8 *)(lVar5 + lVar14);
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar13 = *param_2;
          param_2 = param_2 + 1;
          puVar13 = puVar13 + 1;
        }
        return;
      }
      lVar14 = lVar14 + 0x48;
    } while (lVar11 * 0x48 != lVar14);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1414fa4c8(param_1,iVar1);
  }
  lVar5 = *param_1;
  puVar13 = (undefined8 *)(lVar5 + lVar11 * 0x48);
  *puVar13 = 0;
  puVar13[1] = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar11 * 0x48) = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar11 * 0x48) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0x1c + lVar11 * 0x48) = 0;
  *(undefined8 *)(lVar5 + lVar11 * 0x48) = *param_2;
  uVar6 = param_2[2];
  puVar13 = (undefined8 *)(lVar5 + 8 + lVar11 * 0x48);
  *puVar13 = param_2[1];
  puVar13[1] = uVar6;
  *(undefined4 *)(lVar5 + 0x18 + lVar11 * 0x48) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(lVar5 + 0x1c + lVar11 * 0x48) = *(undefined1 *)((longlong)param_2 + 0x1c);
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  puVar13 = (undefined8 *)(lVar5 + 0x20 + lVar11 * 0x48);
  *puVar13 = param_2[4];
  puVar13[1] = uVar6;
  puVar13 = (undefined8 *)(lVar5 + 0x30 + lVar11 * 0x48);
  *puVar13 = uVar7;
  puVar13[1] = uVar8;
  *(undefined1 *)(lVar5 + 0x40 + lVar11 * 0x48) = *(undefined1 *)(param_2 + 8);
  return;
}



// FUNCTION 1434267ed FUN_1434267ed body=3162 status=ok
// SIG undefined FUN_1434267ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434267ed(void)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cacee10);
  if (cVar1 == '\0') {
    _DAT_14cacee10 = 0;
    uRam000000014cacee18 = 0;
  }
  if (local_70 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7ff820,1,&PTR_FUN_14a7ff7f0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7fff80,1,0);
  FUN_14798b9a0();
  atexit((_func_5014 *)&LAB_14341c7b0);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cacef50,L"r.BufferVisualizationDumpFramesAsHDR",&local_70,
                L"When saving out buffer visualization materials in a HDR capable format\n0: Do not override default save format.\n1: Force HDR format for buffer visualization materials."
               );
  atexit(FUN_14341c7b5);
  local_70 = (undefined *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14cacef68,L"r.BufferVisualizationDumpFrames",&local_70,
                L"When screenshots or movies dumps are requested, also save out dumps of the current buffer visualization materials\n0:off (default)\n1:on"
               );
  atexit(FUN_14341c7fa);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a800e40,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a801830,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a804870,2,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a805800;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a805850,2,&PTR_FUN_14a805820);
  FUN_1446f470e(&DAT_14cacf140,L"BlueprintModifyCamera",1);
  FUN_1446f470e(&DAT_14cacf150,L"BlueprintModifyPostProcess",1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a806b00,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a807400,1,&PTR_FUN_14a8073b0);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf1f0,L"r.CameraShakeDebug",&local_70,
                L"Show extra debug info for camera shakes (requires `showdebug CAMERA`)");
  atexit(FUN_14341c879);
  local_70._0_1_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf208,L"r.CameraShakeDebug.Location",&local_70,
                L"Whether to show camera shakes\' location modifications (defaults to true)");
  atexit(FUN_14341c8be);
  local_70._0_1_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf220,L"r.CameraShakeDebug.Rotation",&local_70,
                L"Whether to show camera shakes\' rotation modifications (defaults to true)");
  atexit(FUN_14341c903);
  local_70 = (undefined *)((ulonglong)local_70._1_7_ << 8);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf238,L"r.CameraShakeDebug.LargeGraph",&local_70,
                L"Draws larger graphs for camera shake debug info");
  atexit(FUN_14341c948);
  local_70._0_4_ = 0x40000000;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cacf250,L"r.CameraShakeDebug.InfoRecordLimit",&local_70,
                L"How many seconds to keep while recording camera shake debug info (defaults to 2 seconds)"
               );
  atexit(FUN_14341c98d);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_14078dbce(&DAT_14cacf278,L"r.Photography.Available",&local_70,
                L"(Read-only) If 1, the photography system is potentially available to the user.\nOtherwise, a functioning back-end is not available."
               );
  atexit(FUN_14341e086);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14a808d30;
  local_88 = 7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a808e90,2,&PTR_FUN_14a808d70);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf3b0,L"r.CameraShake.LegacyPostProcessBlending",&local_70,
                L"Blend camera shake post process settings under the main camera instead of over it"
               );
  atexit(FUN_14341e139);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a809730,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a80a610;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a80a630,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a80a760;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a80a780);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cacf468,L"r.UseLegacyMaintainYFOVViewMatrix",&local_70,
                L"Whether to use the old way to compute perspective view matrices when the aspect ratio constraint is vertical"
               );
  atexit(FUN_14341e531);
  local_70 = (undefined *)CONCAT71(local_70._1_7_,1);
  local_88._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cacf480,L"r.Ortho.AutoPlanes",&local_70,
                L"Globally allow Ortho cameras to utilise the automatic Near/Far plane evaluations."
               );
  atexit(FUN_14341e576);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cacf498,L"r.Ortho.AutoPlanes.ClampToMaxFPBuffer",&local_70,
                L"When auto evaluating clip planes, determines whether 16bit depth scaling should be used.16bit scaling is advantageous for any depth downscaling that occurs (e.g. HZB downscaling uses 16 bit textures instead of 32).This feature will calculate the maximum depth scale needed based on the Unreal Unit (cm by default) to Pixel ratio.It assumes that we don\'t need 32bit depth range for smaller scenes, because most actors will be within a reasonable visible frustumHowever it does still scale up to a maximum of UE_OLD_WORLD_MAX which is the typical full range of the depth buffer, so larger scenes still work too."
               );
  atexit(FUN_14341e5bb);
  local_70 = (undefined *)CONCAT71(local_70._1_7_,1);
  local_88._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cacf4b0,L"r.Ortho.AutoPlanes.ScaleIncrementingUnits",&local_70,
                L"Select whether to scale the Near/Far plane Min/Max values as we increase in unit to pixel ratio (i.e. as we go from CM to M to KM)"
               );
  atexit(FUN_14341e600);
  local_70._0_4_ = 0xbf800000;
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cacf4c8,L"r.Ortho.AutoPlanes.DepthScale",&local_70,
                L"Allows the 16 bit depth scaling to be adjusted from the  default +FP16 Max (66504.0f)This is useful if the far plane doesn\'t need to be as far away, so it will improve depth deltas"
               );
  atexit(FUN_14341e645);
  local_70 = (undefined *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_140a6b41e(&DAT_14cacf4e0,L"r.Ortho.AutoPlanes.ShiftPlanes",&local_70,
                L"Shifts the whole frustum in the Z direction.This can be useful if, for example you need the Near plane closer to the camera, at the reduction of the Far plane value (e.g. a horizontal 2.5D scene)."
               );
  atexit(FUN_14341e68a);
  FUN_1446f470e(&DAT_14cacf518,L"ReceiveUpdate",1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a80c1d0,1,0);
  local_70 = &DAT_14a19662d;
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cacf5e0,L"CanJumpInternal",1);
  FUN_1446f470e(&DAT_14cacf5f0,L"ClientAckGoodMove",1);
  FUN_1446f470e(&DAT_14cacf600,L"ClientAdjustPosition",1);
  FUN_1446f470e(&DAT_14cacf610,L"ClientAdjustRootMotionPosition",1);
  FUN_1446f470e(&DAT_14cacf620,L"ClientAdjustRootMotionSourcePosition",1);
  FUN_1446f470e(&DAT_14cacf630,L"ClientCheatFly",1);
  FUN_1446f470e(&DAT_14cacf640,L"ClientCheatGhost",1);
  FUN_1446f470e(&DAT_14cacf650,L"ClientCheatWalk",1);
  FUN_1446f470e(&DAT_14cacf660,L"ClientMoveResponsePacked",1);
  FUN_1446f470e(&DAT_14cacf670,L"ClientVeryShortAdjustPosition",1);
  FUN_1446f470e(&DAT_14cacf6d0,L"K2_OnEndCrouch",1);
  FUN_1446f470e(&DAT_14cacf6e0,L"K2_OnMovementModeChanged",1);
  FUN_1446f470e(&DAT_14cacf6f0,L"K2_OnStartCrouch",1);
  FUN_1446f470e(&DAT_14cacf700,L"K2_UpdateCustomMovement",1);
  FUN_1446f470e(&DAT_14cacf718,L"OnJumped",1);
  FUN_1446f470e(&DAT_14cacf728,L"OnLanded",1);
  FUN_1446f470e(&DAT_14cacf738,L"OnLaunched",1);
  FUN_1446f470e(&DAT_14cacf768,L"OnWalkingOffLedge",1);
  FUN_1446f470e(&DAT_14cacf780,L"RootMotionDebugClientPrintOnScreen",1);
  FUN_1446f470e(&DAT_14cacf790,L"ServerMove",1);
  FUN_1446f470e(&DAT_14cacf7a0,L"ServerMoveDual",1);
  FUN_1446f470e(&DAT_14cacf7b0,L"ServerMoveDualHybridRootMotion",1);
  FUN_1446f470e(&DAT_14cacf7c0,L"ServerMoveDualNoBase",1);
  FUN_1446f470e(&DAT_14cacf7d0,L"ServerMoveNoBase",1);
  FUN_1446f470e(&DAT_14cacf7e0,L"ServerMoveOld",1);
  FUN_1446f470e(&DAT_14cacf7f0,L"ServerMovePacked",1);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a812d40,1,&PTR_FUN_14a812cc0);
  FUN_1446f470e(&DAT_14cacfcc8,L"CharacterMesh0",1);
  FUN_1446f470e(&DAT_14cacfcd8,L"CharMoveComp",1);
  FUN_1446f470e(&DAT_14cacfcd0,L"CollisionCylinder",1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacf8b8,L"p.EnableCharacterAccelerationReplication",&DAT_14cacfce0,
                L"Whether to author acceleration data with character movement replication to sim proxies."
               );
  atexit(FUN_14341f56e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacf8c8,L"p.UseLegacyDoJump",&DAT_14c761378,
                L"Should CheckJumpInput call the legacy DoJump or the new DoJump. Default is true while we are still deprecating the old DoJump"
               );
  atexit(FUN_14341f5b3);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8132b0);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacf948,L"t.FPSChart.RoundFPSBeforeBinning",&local_70,
                L"Should we round raw FPS values before thresholding them into bins when doing a FPS chart?\n default: 0"
               );
  atexit(FUN_14342120e);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacf960,L"t.FPSChart.ExcludeIdleTime",&local_70,
                L"Should we exclude idle time (i.e. one which we spent sleeping) when doing a FPS chart?\n default: 0"
               );
  atexit(FUN_143421253);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacf978,L"t.FPSChart.OpenFolderOnDump",&local_70,
                L"Should we explore to the folder that contains the .log / etc... when a dump is finished?  This can be disabled for automated testing\n default: 1"
               );
  atexit(FUN_143421298);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cacf990,L"t.FPSChart.MaxFrameDeltaSecsBeforeDiscarding",&DAT_14c76137c,
                L"The maximum length a frame can be (in seconds) to be considered for FPS chart binning (default 1.0s; no maximum length if <= 0.0)"
               );
  atexit(FUN_1434212dd);
  _DAT_14cacf9c0 = 0;
  _DAT_14cacf9a0 = 0;
  _DAT_14cacf9a8 = 0;
  _DAT_14cacf9ac = 0;
  _DAT_14cacf9b0 = 0;
  uRam000000014cacf9b4 = 0;
  FUN_140056680(&local_70,L"30,60,120");
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cacf9c8,L"t.FPSChart.InterestingFramerates",&local_70,
                L"Comma separated list of interesting frame rates\n default: 30,60,120");
  if (local_70 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143421322);
  DAT_14cacf9e0 = 0;
  _DAT_14cacf9e8 = 0;
  atexit((_func_5014 *)&LAB_143421367);
  FUN_1446f470e(&DAT_14cacf9f0,L"AddedToCheatManager",1);
  FUN_1446f470e(&DAT_14cacfa08,L"RemovedFromCheatManager",1);
  FUN_1446f470e(&DAT_14cacfb48,L"ReceiveEndPlay",1);
  FUN_1446f470e(&DAT_14cacfb58,L"ReceiveInitCheatManager",1);
  FUN_1446f470e(&DAT_14cacfb68,L"ServerToggleAILogging",1);
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8173c0,2,0);
  DAT_14cacfc30 = 0;
  _DAT_14cacfc38 = 0;
  _DAT_14cacfc40 = 2;
  atexit(FUN_143422bd9);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cacfc48,L"gbx.BugIt.AutoWalkAfterBugIt",&local_70,
                L"0: After using BugIt command player remains in ghost mode (default Epic behavior)\n1: \'walk\' command is executed after ghosting as a result of bugit (default GBX behavior)"
               );
  atexit(FUN_1434231cf);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cacfc78,L"Engine.MinNumOverlapsToUseTMap",&DAT_14c761380,
                L"Min number of overlaps required before using a TMap for deduplication");
  atexit(FUN_143425071);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434274ae FUN_1434274ae body=63 status=ok
// SIG undefined FUN_1434274ae(void)

undefined4 FUN_1434274ae(longlong param_1,char param_2,uint param_3)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    if ((int)param_3 < 0) {
      return 0x21;
    }
    if (*(int *)(param_1 + 0x158) <= (int)param_3) {
      return 0x21;
    }
    plVar1 = (longlong *)(param_1 + 0x150);
  }
  else {
    if ((int)param_3 < 0) {
      return 0x21;
    }
    if (*(int *)(param_1 + 0x168) <= (int)param_3) {
      return 0x21;
    }
    plVar1 = (longlong *)(param_1 + 0x160);
  }
  return *(undefined4 *)(*plVar1 + (ulonglong)param_3 * 4);
}



// FUNCTION 14342755c FUN_14342755c body=3010 status=ok
// SIG undefined FUN_14342755c(void)

undefined8 FUN_14342755c(longlong param_1,longlong *param_2,longlong *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  double *pdVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_2e8 [44];
  float local_2bc;
  longlong *local_2b8;
  undefined8 *local_2b0;
  undefined4 local_2a4;
  longlong *local_2a0;
  undefined8 local_298;
  double dStack_290;
  double local_288;
  undefined4 *local_278;
  undefined8 uStack_270;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [192];
  undefined1 *local_158;
  uint local_150;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  byte local_10c;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1447a8aa0(param_1 + 0x30,0);
  }
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8464f0;
  uVar15 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x70) = uVar15;
  uVar9 = DAT_14c8464e8._4_4_;
  uVar8 = (undefined4)DAT_14c8464e8;
  uVar13 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x58) = uVar8;
  *(undefined4 *)(param_1 + 0x5c) = uVar9;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (0 < (int)param_2[1]) {
    local_2b0 = (undefined8 *)(param_1 + 0x30);
    local_2b8 = (longlong *)(param_1 + 0x40);
    local_2bc = 0.0;
    lVar24 = 0;
    do {
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_14c = 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_120 = 0xffffffffffffffff;
      uStack_118 = 0xffffffff;
      local_110 = 0x42000000;
      local_10c = local_10c & 0xf0;
      local_108 = 0x41000000;
      puStack_100 = &DAT_3f8000003f800000;
      local_f8 = 0x3f800000;
      lVar19 = *param_2;
      lVar18 = lVar24 * 0x20;
      uStack_240 = (ulonglong)(uint)(float)*(double *)(lVar19 + lVar18) << 0x20;
      _local_238 = CONCAT44((float)*(double *)(lVar19 + 0x10 + lVar18),
                            (float)*(double *)(lVar19 + 8 + lVar18));
      FUN_14041c796((longlong)&uStack_240 + 4,&local_254,&local_260);
      uVar23 = local_150;
      lVar19 = *param_2;
      dVar1 = *(double *)(lVar19 + 0x18 + lVar18);
      dVar2 = *(double *)(lVar19 + 0x10 + lVar18);
      dVar3 = *(double *)(lVar19 + 8 + lVar18);
      dVar4 = *(double *)(lVar19 + lVar18);
      lVar19 = (longlong)(int)local_150;
      local_150 = local_150 + 1;
      if ((uint)local_14c < local_150) {
        FUN_1479ccacc(local_218,uVar23);
      }
      fVar29 = (float)(dVar2 * dVar1);
      fVar30 = (float)(dVar3 * dVar1);
      fVar28 = (float)(dVar1 * dVar4);
      puVar14 = local_158;
      if (local_158 == (undefined1 *)0x0) {
        puVar14 = local_218;
      }
      *(float *)(puVar14 + lVar19 * 0xc) = local_260 * 1048576.0 + local_254 * 1048576.0 + fVar28;
      *(float *)(puVar14 + lVar19 * 0xc + 4) =
           local_25c * 1048576.0 + local_250 * 1048576.0 + fVar30;
      *(float *)(puVar14 + lVar19 * 0xc + 8) =
           local_258 * 1048576.0 + local_24c * 1048576.0 + fVar29;
      uVar23 = local_150;
      lVar19 = (longlong)(int)local_150;
      local_150 = local_150 + 1;
      if ((uint)local_14c < local_150) {
        FUN_1479ccacc(local_218,uVar23);
      }
      puVar14 = local_158;
      if (local_158 == (undefined1 *)0x0) {
        puVar14 = local_218;
      }
      *(float *)(puVar14 + lVar19 * 0xc) = local_260 * 1048576.0 + (fVar28 - local_254 * 1048576.0);
      *(float *)(puVar14 + lVar19 * 0xc + 4) =
           local_25c * 1048576.0 + (fVar30 - local_250 * 1048576.0);
      *(float *)(puVar14 + lVar19 * 0xc + 8) =
           local_258 * 1048576.0 + (fVar29 - local_24c * 1048576.0);
      uVar23 = local_150;
      lVar19 = (longlong)(int)local_150;
      local_150 = local_150 + 1;
      if ((uint)local_14c < local_150) {
        FUN_1479ccacc(local_218,uVar23);
      }
      puVar14 = local_158;
      if (local_158 == (undefined1 *)0x0) {
        puVar14 = local_218;
      }
      *(float *)(puVar14 + lVar19 * 0xc) = (fVar28 - local_254 * 1048576.0) - local_260 * 1048576.0;
      *(float *)(puVar14 + lVar19 * 0xc + 4) =
           (fVar30 - local_250 * 1048576.0) - local_25c * 1048576.0;
      *(float *)(puVar14 + lVar19 * 0xc + 8) =
           (fVar29 - local_24c * 1048576.0) - local_258 * 1048576.0;
      uVar23 = local_150;
      lVar19 = (longlong)(int)local_150;
      local_150 = local_150 + 1;
      if ((uint)local_14c < local_150) {
        FUN_1479ccacc(local_218,uVar23);
      }
      puVar14 = local_158;
      if (local_158 == (undefined1 *)0x0) {
        puVar14 = local_218;
      }
      *(float *)(puVar14 + lVar19 * 0xc) = (local_254 * 1048576.0 + fVar28) - local_260 * 1048576.0;
      *(float *)(puVar14 + lVar19 * 0xc + 4) =
           (local_250 * 1048576.0 + fVar30) - local_25c * 1048576.0;
      *(float *)(puVar14 + lVar19 * 0xc + 8) =
           (local_24c * 1048576.0 + fVar29) - local_258 * 1048576.0;
      iVar12 = (int)param_2[1];
      if (0 < iVar12) {
        lVar19 = 0;
        do {
          if (lVar19 != lVar24) {
            lVar18 = *param_2;
            lVar16 = lVar19 * 0x20;
            dVar1 = *(double *)(lVar18 + 0x18 + lVar16);
            local_298 = (double)CONCAT44((float)(*(double *)(lVar18 + 8 + lVar16) * dVar1),
                                         (float)(dVar1 * *(double *)(lVar18 + lVar16)));
            dStack_290 = (double)CONCAT44(dStack_290._4_4_,
                                          (float)(*(double *)(lVar18 + 0x10 + lVar16) * dVar1));
            local_278 = (undefined4 *)
                        (CONCAT44((float)*(double *)(lVar18 + 8 + lVar16),
                                  (float)*(double *)(lVar18 + lVar16)) ^ 0x8000000080000000);
            uStack_270 = CONCAT44(uStack_270._4_4_,(float)*(double *)(lVar18 + 0x10 + lVar16)) ^
                         0x80000000;
            iVar12 = FUN_147caac26(&local_248,&local_278,&local_298);
            if (iVar12 == 0) {
              local_150 = 0;
              if ((uint)local_14c == 0) goto LAB_143427da2;
              FUN_1479ccbf2(local_218,0);
              break;
            }
            iVar12 = (int)param_2[1];
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < iVar12);
      }
      if (0 < (int)local_150) {
        local_278 = (undefined4 *)0x0;
        uStack_270 = (ulonglong)local_150;
        FUN_1446f48e2(&local_278,0);
        fVar28 = (float)FUN_147caa336(&local_248);
        if (0 < (int)local_150) {
          lVar19 = 0;
          do {
            if ((longlong)(int)param_3[1] < 1) {
LAB_143427c68:
              puVar14 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar14 = local_218;
              }
              local_288 = (double)*(float *)(puVar14 + lVar19 * 0xc + 8);
              dStack_290 = (double)*(float *)(puVar14 + lVar19 * 0xc + 4);
              local_298 = (double)*(float *)(puVar14 + lVar19 * 0xc);
            }
            else {
              puVar14 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar14 = local_218;
              }
              lVar18 = *param_3;
              pdVar21 = (double *)(lVar18 + 0x10);
              uVar20 = 0xffffffff;
              uVar22 = 0;
              fVar29 = 3.4e+38;
              do {
                fVar30 = (float)(((double)*(float *)(puVar14 + lVar19 * 0xc + 8) - *pdVar21) *
                                 ((double)*(float *)(puVar14 + lVar19 * 0xc + 8) - *pdVar21) +
                                ((double)*(float *)(puVar14 + lVar19 * 0xc) - pdVar21[-2]) *
                                ((double)*(float *)(puVar14 + lVar19 * 0xc) - pdVar21[-2]) +
                                ((double)*(float *)(puVar14 + lVar19 * 0xc + 4) - pdVar21[-1]) *
                                ((double)*(float *)(puVar14 + lVar19 * 0xc + 4) - pdVar21[-1]));
                if (fVar30 < fVar29) {
                  uVar20 = uVar22 & 0xffffffff;
                  fVar29 = fVar30;
                }
                uVar22 = uVar22 + 1;
                pdVar21 = pdVar21 + 3;
              } while ((longlong)(int)param_3[1] != uVar22);
              iVar12 = (int)uVar20;
              if ((iVar12 == -1) || (param_4 <= fVar29)) goto LAB_143427c68;
              local_288 = *(double *)(lVar18 + 0x10 + (longlong)iVar12 * 0x18);
              pdVar21 = (double *)(lVar18 + (longlong)iVar12 * 0x18);
              local_298 = *pdVar21;
              dStack_290 = pdVar21[1];
            }
            uVar13 = FUN_14342811f(local_2b0,&local_298);
            local_278[lVar19] = uVar13;
            lVar19 = lVar19 + 1;
          } while (lVar19 < (int)local_150);
          if (2 < (int)local_150) {
            local_2a4 = *local_278;
            uVar23 = local_150 - 2;
            uVar20 = 0;
            local_2a0 = param_3;
            do {
              iVar12 = *(int *)(param_1 + 0x48);
              *(uint *)(param_1 + 0x48) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
                FUN_1446f48e2(local_2b8,iVar12);
              }
              puVar10 = local_278;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 4) = local_2a4;
              iVar12 = *(int *)(param_1 + 0x48);
              *(uint *)(param_1 + 0x48) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
                FUN_1446f48e2(local_2b8,iVar12);
              }
              puVar11 = local_278;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 4) =
                   puVar10[uVar20 + 1];
              iVar12 = *(int *)(param_1 + 0x48);
              *(uint *)(param_1 + 0x48) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
                FUN_1446f48e2(local_2b8,iVar12);
              }
              lVar19 = uVar20 + 2;
              uVar20 = uVar20 + 1;
              *(undefined4 *)(*local_2b8 + (longlong)iVar12 * 4) = puVar11[lVar19];
              param_3 = local_2a0;
            } while (uVar23 != uVar20);
          }
        }
        if (local_278 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        local_2bc = local_2bc + fVar28;
      }
LAB_143427da2:
      if (local_158 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_2[1]);
    if ((0.001 <= local_2bc) && (uVar23 = *(uint *)(param_1 + 0x38), 3 < (int)uVar23)) {
      pdVar21 = (double *)*local_2b0;
      dVar1 = pdVar21[2];
      dVar4 = pdVar21[5] - dVar1;
      dVar2 = *pdVar21;
      dVar3 = pdVar21[1];
      dVar25 = pdVar21[4] - dVar3;
      dVar26 = pdVar21[3] - dVar2;
      dVar27 = dVar4 * dVar4 + dVar26 * dVar26 + dVar25 * dVar25;
      if (9.99999993922529e-09 < dVar27) {
        dVar27 = 1.0 / SQRT(dVar27);
        dVar26 = dVar26 * dVar27;
        dVar25 = dVar25 * dVar27;
        dVar4 = dVar4 * dVar27;
      }
      pdVar17 = pdVar21 + 8;
      uVar20 = 3;
      do {
        dVar6 = *pdVar17 - dVar1;
        dVar5 = pdVar17[-1] - dVar3;
        dVar7 = pdVar17[-2] - dVar2;
        dVar27 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
        if (9.99999993922529e-09 < dVar27) {
          dVar27 = 1.0 / SQRT(dVar27);
          dVar7 = dVar7 * dVar27;
          dVar5 = dVar5 * dVar27;
          dVar6 = dVar6 * dVar27;
        }
        dVar27 = dVar4 * dVar6 + dVar26 * dVar7 + dVar25 * dVar5;
        if (uVar23 <= uVar20) break;
        uVar20 = uVar20 + 1;
        pdVar17 = pdVar17 + 3;
      } while (1.0 <= dVar27);
      if (dVar27 < 1.0) {
        dVar27 = dVar26 * dVar5 - dVar7 * dVar25;
        dVar26 = dVar4 * dVar7 - dVar6 * dVar26;
        dVar25 = dVar25 * dVar6 - dVar5 * dVar4;
        dVar4 = dVar27 * dVar27 + dVar25 * dVar25 + dVar26 * dVar26;
        if (9.99999993922529e-09 < dVar4) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar25 = dVar25 * dVar4;
          dVar26 = dVar26 * dVar4;
          dVar27 = dVar27 * dVar4;
        }
        lVar24 = 0x30;
        do {
          if (9.99999993922529e-09 <
              ABS((*(double *)((longlong)pdVar21 + lVar24 + 0x10) * dVar27 +
                  *(double *)((longlong)pdVar21 + lVar24) * dVar25 +
                  *(double *)((longlong)pdVar21 + lVar24 + 8) * dVar26) -
                  (dVar1 * dVar27 + dVar2 * dVar25 + dVar3 * dVar26))) {
            FUN_1479b2c20(param_1);
            uVar15 = 1;
            goto LAB_14342808a;
          }
          lVar24 = lVar24 + 0x18;
        } while ((ulonglong)uVar23 * 0x18 != lVar24);
      }
    }
  }
  uVar15 = 0;
LAB_14342808a:
  if ((local_f0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342811f FUN_14342811f body=205 status=ok
// SIG undefined FUN_14342811f(void)

int FUN_14342811f(longlong *param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  iVar1 = (int)param_1[1];
  uVar7 = (ulonglong)iVar1;
  if (0 < (longlong)uVar7) {
    pdVar5 = (double *)(*param_1 + 0x10);
    iVar4 = -1;
    uVar6 = 1;
    do {
      fVar8 = (float)((param_2[2] - *pdVar5) * (param_2[2] - *pdVar5) +
                     (*param_2 - pdVar5[-2]) * (*param_2 - pdVar5[-2]) +
                     (param_2[1] - pdVar5[-1]) * (param_2[1] - pdVar5[-1]));
      iVar4 = iVar4 + 1;
      if (uVar7 <= uVar6) break;
      uVar6 = uVar6 + 1;
      pdVar5 = pdVar5 + 3;
    } while (0.010000001 <= fVar8);
    if (fVar8 < 0.010000001) {
      return iVar4;
    }
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403e3958(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(double *)(lVar2 + 0x10 + uVar7 * 0x18) = param_2[2];
  dVar3 = param_2[1];
  pdVar5 = (double *)(lVar2 + uVar7 * 0x18);
  *pdVar5 = *param_2;
  pdVar5[1] = dVar3;
  return (int)param_1[1] + -1;
}



// FUNCTION 1434281ec FUN_1434281ec body=389 status=ok
// SIG undefined FUN_1434281ec(void)

undefined4
FUN_1434281ec(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined8 *local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_108 = *param_4;
  uStack_100 = param_4[1];
  local_f8 = *(undefined4 *)(param_4 + 2);
  uStack_f4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_f0 = *(undefined4 *)(param_4 + 3);
  uStack_ec = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  FUN_144a73fdc(local_98,&local_108,param_2);
  local_108 = local_88;
  uStack_100 = uStack_80;
  local_f8 = local_78;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_120 = param_6;
  uStack_118 = param_7;
  local_128 = param_5;
  local_e8 = uVar6;
  uStack_e4 = uVar5;
  uStack_e0 = (int)uVar2;
  uStack_dc = (int)((ulonglong)uVar2 >> 0x20);
  local_d8 = uVar3;
  uVar6 = FUN_1479b2fd1(param_1,local_98[0],&local_108,local_a8);
  if (local_98[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98[0] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_98[0] + 0xc) == 0)) {
      pcVar4 = *(code **)*local_98[0];
      if ((pcVar4 == FUN_141724e50) || (pcVar4 == FUN_141724e26)) {
        *local_98[0] = &PTR_FUN_149f553e0;
        FUN_1400020a8();
      }
      else {
        (*pcVar4)(local_98[0],1);
      }
    }
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143428372 FUN_143428372 body=606 status=ok
// SIG undefined FUN_143428372(void)

undefined8
FUN_143428372(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_150 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_178 = &local_e8;
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_158 = param_9;
  local_160 = param_8;
  local_168 = param_7;
  local_170 = param_6;
  uVar2 = FUN_1434534d1(param_1,param_2,param_3);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_150 = &local_c9;
      local_158 = param_9;
      local_160 = param_8;
      local_168 = &local_c8;
      local_170 = param_6;
      local_178 = &local_128;
      uVar3 = FUN_1434534d1(param_1,param_2,param_3,&local_148);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434285d1 FUN_1434285d1 body=589 status=ok
// SIG undefined FUN_1434285d1(void)

undefined8
FUN_1434285d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_158 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_160 = param_9;
  local_168 = param_8;
  local_170 = param_7;
  local_178 = param_6;
  uVar2 = FUN_143453c48(param_1,param_2);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_158 = &local_c9;
      local_160 = param_9;
      local_168 = param_8;
      local_170 = &local_c8;
      local_178 = param_6;
      uVar3 = FUN_143453c48(param_1,param_2,&local_148,&local_128);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342881f FUN_14342881f body=69 status=ok
// SIG undefined FUN_14342881f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342881f(void)

{
  _DAT_14cacfe10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143428861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacfe18,1);
  return;
}



// FUNCTION 143428864 FUN_143428864 body=442 status=ok
// SIG undefined FUN_143428864(void)

void FUN_143428864(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  longlong param_5,undefined2 param_6,undefined4 *param_7,undefined8 param_8)

{
  int *piVar1;
  undefined1 auStack_188 [32];
  undefined ***local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  byte local_c6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &local_118;
  local_118 = &PTR_FUN_149f76060;
  local_110 = *param_2;
  uStack_108 = param_2[1];
  local_100 = param_2[2];
  local_f8 = *param_3;
  uStack_f0 = param_3[1];
  local_e8 = param_3[2];
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = param_6;
  local_c0 = DAT_14c8464e0;
  uStack_b8 = DAT_14c8464e8;
  local_b0 = DAT_14c8464f0;
  local_a8 = param_5;
  local_a0 = param_7;
  local_98 = *param_7;
  local_94 = param_7[1];
  local_90 = param_7[2];
  local_8c = param_7[3];
  local_88 = 0;
  local_80 = param_8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  local_c6 = *(byte *)(param_7 + 4) >> 4 & 1;
  *(int *)(param_5 + 0x88) = *(int *)(param_5 + 0x88) + 1;
  local_128 = param_3[2];
  local_138 = *param_3;
  uStack_130 = param_3[1];
  local_148 = param_2[2];
  local_158 = *(undefined4 *)param_2;
  uStack_154 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_150 = *(undefined4 *)(param_2 + 1);
  uStack_14c = *(undefined4 *)((longlong)param_2 + 0xc);
  (**(code **)(*(longlong *)*param_1 + 0x50))
            ((longlong *)*param_1,&local_158,&local_138,(double)param_4);
  piVar1 = (int *)(param_5 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef9d6d(param_5 + 0x90,param_5 + 8,*(undefined1 *)(param_5 + 0x8c));
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143428a1f FUN_143428a1f body=516 status=ok
// SIG undefined FUN_143428a1f(void)

void FUN_143428a1f(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  longlong param_5,undefined2 param_6,undefined4 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_1d8 [32];
  LARGE_INTEGER *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  LARGE_INTEGER local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined2 local_118;
  byte local_116;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    QueryPerformanceCounter(&local_168);
    local_168.QuadPart = (LONGLONG)&PTR_FUN_149f76010;
    local_160 = *param_2;
    uStack_158 = param_2[1];
    local_150 = param_2[2];
    local_148 = *param_3;
    uStack_140 = param_3[1];
    local_138 = param_3[2];
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_118 = param_6;
    local_110 = DAT_14c8464e0;
    uStack_108 = DAT_14c8464e8;
    local_100 = DAT_14c8464f0;
    local_f8 = param_5;
    local_f0 = param_7;
    local_e8 = *param_7;
    local_e4 = param_7[1];
    local_e0 = param_7[2];
    local_dc = param_7[3];
    local_d8 = 0;
    local_d0 = param_8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3ff00000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0x3ff0000000000000;
    uStack_80 = 0x3ff0000000000000;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0;
    local_116 = *(byte *)(param_7 + 4) >> 4 & 1;
    *(int *)(param_5 + 0x88) = *(int *)(param_5 + 0x88) + 1;
    local_178 = param_3[2];
    local_188 = *param_3;
    uStack_180 = param_3[1];
    local_198 = param_2[2];
    local_1a8 = *(undefined4 *)param_2;
    uStack_1a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_1a0 = *(undefined4 *)(param_2 + 1);
    uStack_19c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1b8 = &local_168;
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_1a8,&local_188,(double)param_4);
    piVar1 = (int *)(param_5 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1447f4cca(param_5 + 0x90,param_5 + 8,*(undefined1 *)(param_5 + 0x8c));
    }
    QueryPerformanceCounter(&local_168);
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143428c24 FUN_143428c24 body=287 status=ok
// SIG undefined FUN_143428c24(void)

void FUN_143428c24(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_138 [40];
  longlong local_110;
  LARGE_INTEGER local_108 [12];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_110 = *(longlong *)(param_1 + 0x28);
    QueryPerformanceCounter(local_108);
    local_88 = &local_62;
    local_62 = param_7;
    local_98 = &local_68;
    local_68 = param_5;
    local_90 = param_6;
    local_80 = param_8;
    local_78 = param_9;
    local_70 = param_10;
    pLVar2 = local_108;
    local_a8 = &local_110;
    local_a0 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143455e0a(param_2);
    QueryPerformanceCounter(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143428d44 FUN_143428d44 body=48 status=ok
// SIG undefined FUN_143428d44(void)

void FUN_143428d44(void)

{
  if (DAT_14cad0fd8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0fb8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143428d76 FUN_143428d76 body=6854 status=ok
// SIG undefined FUN_143428d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_143428d76(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  double *param_5,undefined4 param_6,undefined8 *param_7,double *param_8)

{
  double *pdVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  ulonglong uVar17;
  double dVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar43 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar51;
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  undefined1 auStack_668 [32];
  longlong *local_648;
  double *local_640;
  undefined8 *local_638;
  undefined8 *local_630;
  double *local_628;
  double *local_620;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  undefined1 local_5d8 [16];
  undefined8 *local_5c8;
  undefined8 uStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  undefined1 local_558 [16];
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  undefined8 uStack_510;
  double local_508;
  undefined8 uStack_500;
  double local_4f8;
  undefined8 uStack_4f0;
  double local_4e8;
  undefined8 uStack_4e0;
  double local_4d8;
  undefined8 uStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  undefined8 uStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined8 *local_3c0;
  undefined4 local_3b8;
  longlong local_3b0;
  int local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  ulonglong uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 *local_368;
  int local_360;
  undefined8 *local_358;
  int local_350;
  undefined4 local_34c;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [24];
  undefined1 local_310 [8];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined6 local_2ee;
  undefined2 uStack_2e8;
  undefined8 uStack_2e6;
  undefined1 local_2d8 [32];
  undefined1 *local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8 [16];
  undefined1 *local_298;
  int local_290;
  undefined4 local_28c;
  undefined1 local_288;
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  uint uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_668;
  uVar5 = 0;
  if ((param_3 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x260) == 0)) goto LAB_14342a771;
  local_618._0_8_ = param_4;
  local_308 = *param_7;
  uStack_300 = param_7[1];
  uStack_2f8 = param_7[2];
  uStack_2e6 = *(undefined8 *)((longlong)param_7 + 0x22);
  uStack_2e8 = (undefined2)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x1a) >> 0x30);
  uStack_2f0 = (undefined2)param_7[3];
  local_2ee = (undefined6)((ulonglong)param_7[3] >> 0x10);
  local_2b8 = (undefined1 *)0x0;
  local_2b0 = *(int *)(param_7 + 0xb);
  lVar13 = (longlong)local_2b0;
  if (lVar13 == 0) {
    local_2ac = 8;
  }
  else {
    puVar9 = param_7 + 6;
    if ((undefined8 *)param_7[10] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_7[10];
    }
    FUN_14470be6c(local_2d8,local_2b0,0);
    puVar11 = local_2b8;
    if (local_2b8 == (undefined1 *)0x0) {
      puVar11 = local_2d8;
    }
    memcpy(puVar11,puVar9,lVar13 << 2);
  }
  local_298 = (undefined1 *)0x0;
  local_290 = *(int *)(param_7 + 0xf);
  lVar13 = (longlong)local_290;
  if (lVar13 == 0) {
    local_28c = 4;
  }
  else {
    puVar9 = param_7 + 0xc;
    if ((undefined8 *)param_7[0xe] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_7[0xe];
    }
    FUN_1447163e6(local_2a8,local_290,0);
    puVar11 = local_298;
    if (local_298 == (undefined1 *)0x0) {
      puVar11 = local_2a8;
    }
    memcpy(puVar11,puVar9,lVar13 << 2);
  }
  local_288 = *(undefined1 *)(param_7 + 0x10);
  FUN_14019b60a(&local_308,param_3);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1417bb680(param_2,0);
  }
  lVar13 = (**(code **)(*param_3 + 0x7b8))(param_3,0,1,0xffffffff);
  if (lVar13 == 0) {
    (**(code **)(param_3[0x57] + 0x20))(param_3 + 0x57,&local_358);
    local_368 = local_358;
    local_360 = local_350;
    FUN_144a56970(local_328);
    puVar9 = local_358;
    _local_178 = ZEXT816(0);
    if ((longlong)local_350 != 0) {
      lVar13 = 0;
      do {
        plVar8 = *(longlong **)((longlong)puVar9 + lVar13);
        if ((plVar8 == (longlong *)0x0) || (lVar14 = *plVar8, lVar14 == 0)) goto LAB_143429088;
        iVar6 = *(int *)(lVar14 + 0x1c);
        if (iVar6 == 0xb) {
          plVar8 = (longlong *)(lVar14 + 0x40);
LAB_143429037:
          lVar14 = *plVar8;
          if ((lVar14 != 0) &&
             ((*(byte *)(lVar14 + 0x90) < 2 || (*(char *)(lVar14 + 0x1b9) == '\0')))) {
            uVar7 = local_178._8_4_;
            lVar14 = (longlong)(int)local_178._8_4_;
            uVar5 = local_178._8_4_ + 1;
            local_178._8_4_ = uVar5;
            if (uStack_16c < uVar5) {
              FUN_14075a758(local_178,uVar7);
            }
            *(undefined8 *)(local_178._0_8_ + lVar14 * 8) =
                 *(undefined8 *)((longlong)puVar9 + lVar13);
          }
        }
        else if (iVar6 == 2) {
          iVar6 = (int)plVar8[1];
          if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar14 + 0x418))) &&
             (lVar15 = (longlong)*(int *)(*(longlong *)(lVar14 + 0x410) + (longlong)iVar6 * 4),
             lVar15 != -1)) {
            plVar8 = (longlong *)(lVar15 * 8 + *(longlong *)(lVar14 + 0x440));
            goto LAB_143429037;
          }
        }
        else if (iVar6 == 0xc) {
          plVar8 = (longlong *)(lVar14 + 0x128);
          goto LAB_143429037;
        }
LAB_143429088:
        lVar13 = lVar13 + 8;
      } while ((longlong)local_350 * 8 != lVar13);
    }
    if (local_358 != (undefined8 *)0x0) {
      FUN_1400020a8(local_358);
    }
    local_358 = (undefined8 *)local_178._0_8_;
    local_350 = local_178._8_4_;
    local_34c = uStack_16c;
    if (local_178._8_4_ == 0) {
LAB_14342a72b:
      uVar5 = 0;
    }
    else {
      plVar8 = param_3;
      puVar9 = (undefined8 *)(**(code **)(*param_3 + 0x558))();
      local_388 = *puVar9;
      uStack_380 = puVar9[1];
      local_378 = puVar9[2];
      uStack_370 = puVar9[3];
      dVar48 = *(double *)local_618._0_8_;
      auVar30 = *(undefined1 (*) [16])(param_3 + 0x50);
      auVar18 = *(undefined1 (*) [16])(param_3 + 0x52);
      auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar30._8_8_));
      auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar30._0_8_));
      iVar6 = movmskpd((int)puVar9,auVar36);
      auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_));
      auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_));
      uVar5 = movmskpd((int)plVar8,auVar42);
      if ((uVar5 & 0x3fffffff) == 0 && iVar6 == 0) {
        local_598 = DAT_14c8464a0;
        dStack_590 = DAT_14c8464a8;
        local_568 = DAT_14c8464d0;
        dStack_560 = dRam000000014c8464d8;
        dVar28 = DAT_14c846480;
        dVar33 = DAT_14c846488;
        dVar25 = DAT_14c846490;
        dVar27 = DAT_14c846498;
        dVar57 = DAT_14c8464c0;
        dVar59 = DAT_14c8464c8;
        dVar56 = DAT_14c8464b0;
        dVar41 = DAT_14c8464b8;
      }
      else {
        auVar42 = divpd(_DAT_149934d80,auVar30);
        auVar36 = divpd(ZEXT816(0x3ff0000000000000),auVar18);
        dVar57 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar30._0_8_)) & auVar42._0_8_);
        dVar59 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar30._8_8_)) & auVar42._8_8_);
        local_568 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar36._0_8_
                            );
        dVar25 = (double)param_3[0x4a] * -1.0;
        dVar27 = (double)param_3[0x4b] * 1.0;
        dVar28 = -(double)param_3[0x48];
        dVar33 = -(double)param_3[0x49];
        dVar46 = (double)param_3[0x4c] * dVar57;
        dVar51 = (double)param_3[0x4d] * dVar59;
        dStack_560 = 0.0;
        dVar56 = (double)param_3[0x4e] * local_568;
        dVar41 = dVar51 * dVar28 - dVar33 * dVar46;
        dVar44 = dVar56 * dVar33 - dVar25 * dVar51;
        dVar45 = dVar46 * dVar25 - dVar28 * dVar56;
        dVar44 = dVar44 + dVar44;
        dVar45 = dVar45 + dVar45;
        dVar41 = dVar41 + dVar41;
        local_598 = 0.0 - ((dVar41 * dVar33 - dVar45 * dVar25) + dVar27 * dVar44 + dVar46);
        dStack_590 = 0.0 - (dVar41 * (double)param_3[0x48] + dVar25 * dVar44 +
                           dVar27 * dVar45 + dVar51);
        dVar56 = 0.0 - (dVar27 * dVar41 + dVar56 + (dVar45 * dVar28 - dVar44 * dVar33));
        dVar41 = 0.0;
      }
      dVar45 = *param_5;
      dVar44 = param_5[1];
      dVar46 = param_5[2];
      dVar51 = param_5[3];
      pdVar12 = (double *)(local_618._0_8_ + 8);
      pdVar1 = (double *)(local_618._0_8_ + 0x10);
      local_398 = 0;
      uStack_390 = 0;
      if ((longlong)local_350 == 0) goto LAB_14342a72b;
      dVar24 = dVar33 + dVar33;
      dVar34 = dVar25 + dVar25;
      dVar47 = dVar28 * (dVar28 + dVar28);
      uStack_5c0 = 0;
      dVar38 = (dVar28 + dVar28) * dVar27;
      dStack_460 = (dVar34 * dVar33 - dVar38) * local_568;
      dVar35 = (1.0 - (dVar25 * dVar34 + dVar47)) * dVar59;
      local_468 = (dVar24 * dVar27 + dVar28 * dVar34) * local_568;
      local_458._8_4_ = SUB84(dVar35,0);
      local_458._0_8_ = (dVar24 * dVar28 - dVar34 * dVar27) * dVar59;
      local_458._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar53 = dVar45 + dVar45;
      dVar54 = dVar44 + dVar44;
      dVar55 = dVar46 + dVar46;
      dVar35 = dVar45 * dVar53;
      dVar39 = dVar44 * dVar54;
      local_588 = (double)DAT_149934d80 - (dVar46 * dVar55 + dVar39);
      dStack_480 = DAT_149934d80._8_8_ - (dVar46 * dVar55 + dVar35);
      local_508 = 1.0 - (dVar35 + dVar39);
      local_608._8_8_ = 0.0 - (dVar35 + dVar39);
      local_608._0_8_ = local_508;
      dStack_580 = dVar54 * dVar45 + dVar55 * dVar51;
      local_4a8 = dVar55 * dVar44 + dVar53 * dVar51;
      local_488 = dVar54 * dVar45 - dVar55 * dVar51;
      dStack_490 = dVar55 * dVar44 - dVar53 * dVar51;
      local_498 = dVar54 * dVar51 + dVar45 * dVar55;
      local_518 = dVar45 * dVar55 - dVar54 * dVar51;
      local_5d8._8_8_ = dVar45 * dVar53 - dVar53 * dVar51;
      local_5d8._0_8_ = local_518;
      auVar18._8_8_ = -(ulonglong)(0.0 <= dVar59);
      auVar18._0_8_ = -(ulonglong)(0.0 <= dVar57);
      local_558 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar18);
      dVar35 = local_568 * 1.0;
      dVar39 = dStack_560 * 0.0;
      local_4b8 = (double)(~-(ulonglong)(0.0 <= dVar35) & 0xbff0000000000000 |
                          -(ulonglong)(0.0 <= dVar35) & 0x3ff0000000000000);
      uStack_4b0 = 0;
      local_448 = dVar44 * dVar25 * -1.0 + dVar46 * dVar33 + dVar51 * dVar28 * 1.0 + dVar45 * dVar27
      ;
      dStack_440 = dVar45 * dVar25 * 1.0 +
                   dVar51 * dVar33 + dVar46 * dVar28 * -1.0 + dVar44 * dVar27;
      local_438 = dVar51 * dVar25 * 1.0 +
                  ((dVar28 * dVar44 * 1.0 + dVar46 * dVar27) - dVar33 * dVar45);
      dStack_430 = dVar46 * dVar25 * -1.0 +
                   ((dVar28 * dVar45 * -1.0 + dVar51 * dVar27) - dVar33 * dVar44);
      dVar54 = dVar48 * dVar57;
      dVar55 = *pdVar12 * dVar59;
      dVar51 = *pdVar1 * local_568;
      dVar53 = dStack_560 * 0.0;
      dVar45 = dVar55 * dVar28 - dVar33 * dVar54;
      dVar52 = dVar51 * dVar33 - dVar25 * dVar55;
      dVar46 = dVar54 * dVar25 - dVar28 * dVar51;
      dVar44 = dVar53 * dVar27 - dVar27 * dVar53;
      dVar52 = dVar52 + dVar52;
      dVar46 = dVar46 + dVar46;
      dVar45 = dVar45 + dVar45;
      dVar44 = dVar44 + dVar44;
      local_5c8 = local_358 + local_350;
      local_4d8 = (1.0 - (dVar47 + dVar33 * dVar24)) * local_568;
      local_478 = (dVar34 * dVar33 + dVar38) * dVar59;
      local_4e8 = (dVar28 * dVar34 - dVar24 * dVar27) * dVar57;
      uStack_4d0 = 0;
      uStack_4e0 = 0;
      dStack_570 = (dVar24 * dVar28 + dVar34 * dVar27) * dVar57;
      local_578 = (1.0 - (dVar25 * dVar34 + dVar33 * dVar24)) * dVar57;
      uStack_470 = 0;
      local_5b8 = (dVar46 * dVar28 - dVar33 * dVar52) + dVar27 * dVar45 + dVar51 + dVar56;
      dStack_5b0 = (dVar44 * dVar27 - dVar44 * dVar27) + dVar27 * dVar44 + dVar53 + dVar41;
      uStack_4f0 = 0x3ff0000000000000;
      uStack_500 = 0;
      auVar30._8_8_ = dVar59;
      auVar30._0_8_ = dVar57;
      uStack_510 = 0;
      uStack_4a0 = 0;
      uStack_4c0 = 0x3ff0000000000000;
      auVar2._4_8_ = dStack_580;
      auVar2._0_4_ = local_558._4_4_;
      auVar19._0_8_ = auVar2._0_8_ << 0x20;
      auVar19._8_4_ = local_558._8_4_;
      auVar19._12_4_ = local_558._12_4_;
      local_528 = auVar19._8_8_;
      local_5a8 = (dVar45 * dVar33 - dVar25 * dVar46) + dVar27 * dVar52 + dVar54 + local_598;
      dStack_5a0 = (dVar52 * dVar25 - dVar45 * dVar28) + dVar27 * dVar46 + dVar55 + dStack_590;
      uVar5 = 0;
      local_618._8_4_ = SUB84(dVar39,0);
      local_618._0_8_ = dVar35;
      local_618._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      puVar9 = local_358;
      auVar18 = _DAT_149934d80;
      local_5f8 = dVar57;
      dStack_5f0 = dVar59;
      local_5e8 = dVar25;
      dStack_5e0 = dVar27;
      local_548 = dVar48;
      dStack_540 = *pdVar12;
      local_538 = dVar59;
      dStack_530 = dVar35;
      dStack_520 = local_528;
      local_4f8 = dVar56;
      local_4c8 = *pdVar1;
      do {
        local_3a0 = *puVar9;
        local_3c0 = &local_3a0;
        local_3b8 = 1;
        puVar11 = local_310;
        FUN_1405574d6(puVar11,&local_3b0,&local_3c0);
        uVar7 = FUN_146e1fc90(puVar11,&local_428,local_3a0);
        auVar36 = minpd(auVar18,auVar30);
        auVar3._8_8_ = dStack_560;
        auVar3._0_8_ = local_568;
        auVar42 = minpd(ZEXT816(0x3ff0000000000000),auVar3);
        auVar20._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
        auVar20._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
        iVar6 = movmskpd(uVar7,auVar20);
        auVar26._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
        auVar26._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
        uVar10 = movmskpd((int)puVar11,auVar26);
        auVar31._8_8_ = dStack_430;
        auVar31._0_8_ = local_438;
        uVar7 = 0;
        dVar48 = local_448;
        dVar28 = dStack_440;
        dVar33 = local_5a8;
        dVar25 = dStack_5a0;
        dVar27 = local_5b8;
        if ((uVar10 & 0x3fffffff) != 0 || iVar6 != 0) {
          local_1f8 = local_578;
          dStack_1f0 = dStack_570;
          local_1e8 = local_4e8;
          uStack_1e0 = uStack_4e0;
          local_1d8 = (double)local_458._0_8_;
          dStack_1d0 = (double)local_458._8_8_;
          local_1c8 = local_478;
          uStack_1c0 = uStack_470;
          local_1b8 = local_468;
          dStack_1b0 = dStack_460;
          local_1a8 = local_4d8;
          uStack_1a0 = uStack_4d0;
          local_198 = local_598;
          dStack_190 = dStack_590;
          local_188 = local_4f8;
          uStack_180 = uStack_4f0;
          local_278 = local_588;
          dStack_270 = dStack_580;
          local_268 = local_518;
          uStack_260 = uStack_510;
          local_258 = local_488;
          dStack_250 = dStack_480;
          local_248 = local_4a8;
          uStack_240 = uStack_4a0;
          local_238 = local_498;
          dStack_230 = dStack_490;
          local_228 = local_508;
          uStack_220 = uStack_500;
          local_218 = local_548;
          dStack_210 = dStack_540;
          local_208 = local_4c8;
          uStack_200 = uStack_4c0;
          FUN_1447fea8d(local_178,&local_278,&local_1f8);
          auVar18 = _DAT_149934d80;
          local_608._0_8_ = local_168._0_8_;
          dVar48 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                   (double)local_178._0_8_ * (double)local_178._0_8_ +
                   stack0xfffffffffffffe90 * stack0xfffffffffffffe90;
          dVar28 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
          dVar33 = local_128 * local_128 +
                   (double)local_138._0_8_ * (double)local_138._0_8_ +
                   (double)local_138._8_8_ * (double)local_138._8_8_;
          uVar17 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
          dVar48 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar17)
          ;
          uVar17 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
          dVar28 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar28)) & uVar17)
          ;
          uVar17 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
          dVar33 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar17)
          ;
          dVar35 = (double)local_618._0_8_;
          dVar39 = (double)local_618._8_8_;
          stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar48 * (double)local_558._0_8_;
          local_178._0_8_ = (double)local_178._0_8_ * dVar48 * (double)local_558._0_8_;
          local_168._0_8_ = dVar48 * (double)local_168._0_8_ * (double)local_558._0_8_;
          local_158 = local_158 * dVar28 * local_528;
          dStack_150 = dStack_150 * dVar28 * local_528;
          local_148 = dVar28 * local_148 * local_528;
          local_138._8_8_ = (double)local_138._8_8_ * dVar33 * local_4b8;
          local_138._0_8_ = (double)local_138._0_8_ * dVar33 * local_4b8;
          local_128 = dVar33 * local_128 * local_4b8;
          pdVar12 = &local_348;
          iVar6 = FUN_14481fd10(pdVar12,local_178);
          uVar7 = SUB84(pdVar12,0);
          dVar48 = local_338 * local_338 + local_348 * local_348;
          dVar28 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
          auVar29._0_8_ = dVar48 + dVar28;
          auVar29._8_8_ = dVar48 + dVar28;
          auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          auVar30 = sqrtpd(auVar29,auVar29);
          auVar30 = divpd(auVar18,auVar30);
          auVar40._0_8_ = auVar30._0_8_ * local_338;
          auVar40._8_8_ = auVar30._8_8_ * dStack_330;
          dVar48 = (double)((ulonglong)(local_348 * auVar30._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
          dVar28 = (double)((ulonglong)(dStack_340 * auVar30._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
          auVar30._8_8_ = dStack_5f0;
          auVar30._0_8_ = local_5f8;
          auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar21);
          dVar33 = local_118;
          dVar25 = dStack_110;
          dVar27 = local_108;
        }
        dVar57 = local_3e8._0_8_;
        dVar56 = local_3e8._8_8_;
        dVar59 = local_3d8._0_8_;
        dVar44 = auVar30._0_8_;
        dVar46 = auVar30._8_8_;
        auVar30 = minpd(auVar30,local_3e8);
        auVar49._8_8_ = dVar39;
        auVar49._0_8_ = dVar35;
        auVar36 = minpd(auVar49,local_3d8);
        auVar43._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar43._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar6 = movmskpd(iVar6,auVar43);
        auVar50._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
        auVar50._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
        uVar10 = movmskpd(uVar7,auVar50);
        dVar41 = auVar31._0_8_;
        dVar45 = auVar31._8_8_;
        if ((uVar10 & 0x3fffffff) == 0 && iVar6 == 0) {
          dVar44 = dVar28 * local_418 * -1.0 +
                   dVar41 * dStack_420 + dVar45 * local_428 * 1.0 + dVar48 * dStack_410;
          dVar46 = dVar48 * local_418 * 1.0 +
                   dVar45 * dStack_420 + dVar41 * local_428 * -1.0 + dVar28 * dStack_410;
          auVar58._0_8_ =
               dVar45 * local_418 * 1.0 +
               ((local_428 * dVar28 * 1.0 + dVar41 * dStack_410) - dVar48 * dStack_420);
          auVar58._8_8_ =
               dVar41 * local_418 * -1.0 +
               ((local_428 * dVar48 * -1.0 + dVar45 * dStack_410) - dVar28 * dStack_420);
          dVar33 = dVar33 * dVar57;
          dVar25 = dVar25 * dVar56;
          dVar27 = dVar27 * dVar59;
          dVar48 = dVar25 * local_428 - dVar33 * dStack_420;
          dVar59 = dVar27 * dStack_420 - dVar25 * local_418;
          dVar57 = dVar33 * local_418 - dVar27 * local_428;
          dVar59 = dVar59 + dVar59;
          dVar57 = dVar57 + dVar57;
          dVar48 = dVar48 + dVar48;
          dVar28 = (dVar48 * dStack_420 - local_418 * dVar57) + dStack_410 * dVar59 + dVar33 +
                   local_408;
          dVar33 = (dVar59 * local_418 - dVar48 * local_428) + dStack_410 * dVar57 + dVar25 +
                   dStack_400;
          dVar48 = (dVar57 * local_428 - dStack_420 * dVar59) + dStack_410 * dVar48 + dVar27 +
                   (double)CONCAT44(uStack_3f4,local_3f8);
        }
        else {
          dVar51 = dStack_420 + dStack_420;
          dVar39 = local_418 + local_418;
          dVar35 = local_428 * (local_428 + local_428);
          dVar24 = (local_428 + local_428) * dStack_410;
          local_1d8 = (dVar51 * local_428 - dVar39 * dStack_410) * dVar56;
          dStack_1b0 = (dVar39 * dStack_420 - dVar24) * dVar59;
          local_608._8_4_ = SUB84(dVar46 * dVar56,0);
          local_608._0_8_ = dVar44 * dVar57;
          local_608._12_4_ = (int)((ulonglong)(dVar46 * dVar56) >> 0x20);
          local_1f8 = (auVar18._0_8_ - (local_418 * dVar39 + dStack_420 * dVar51)) * dVar57;
          dStack_1d0 = (auVar18._8_8_ - (local_418 * dVar39 + dVar35)) * dVar56;
          dStack_1f0 = (dVar51 * local_428 + dVar39 * dStack_410) * dVar57;
          local_1c8 = (dVar39 * dStack_420 + dVar24) * dVar56;
          local_1b8 = (dVar51 * dStack_410 + local_428 * dVar39) * dVar59;
          local_5d8 = local_3d8;
          local_1e8 = (local_428 * dVar39 - dVar51 * dStack_410) * dVar57;
          uStack_1e0 = 0;
          local_1a8 = (1.0 - (dVar35 + dStack_420 * dVar51)) * dVar59;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_408;
          dStack_190 = dStack_400;
          local_188 = (double)CONCAT44(uStack_3f4,local_3f8);
          uStack_180 = 0x3ff0000000000000;
          dVar59 = dVar28 + dVar28;
          dVar56 = dVar41 + dVar41;
          dVar57 = dVar48 * (dVar48 + dVar48);
          local_278 = (1.0 - (dVar41 * dVar56 + dVar28 * dVar59)) * dVar44;
          dStack_250 = (1.0 - (dVar41 * dVar56 + dVar57)) * dVar46;
          dVar41 = (dVar48 + dVar48) * dVar45;
          local_238 = (dVar48 * dVar56 + dVar59 * dVar45) * (double)local_618._0_8_;
          local_258 = (dVar59 * dVar48 - dVar56 * dVar45) * local_538;
          dStack_230 = (dVar56 * dVar28 - dVar41) * dStack_530;
          dStack_270 = (dVar59 * dVar48 + dVar56 * dVar45) * dVar44;
          local_248 = (dVar56 * dVar28 + dVar41) * dVar46;
          local_268 = (dVar48 * dVar56 - dVar59 * dVar45) * dVar44;
          uStack_260 = 0;
          uStack_240 = 0;
          local_228 = (1.0 - (dVar57 + dVar28 * dVar59)) * (double)local_618._0_8_;
          uStack_220 = 0;
          uStack_200 = 0x3ff0000000000000;
          local_218 = dVar33;
          dStack_210 = dVar25;
          local_208 = dVar27;
          FUN_1447fea8d(local_178,&local_278,&local_1f8);
          auVar18 = _DAT_149934d80;
          local_5e8 = (double)local_168._0_8_;
          dVar48 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                   (double)local_178._0_8_ * (double)local_178._0_8_ +
                   stack0xfffffffffffffe90 * stack0xfffffffffffffe90;
          dVar28 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
          dVar33 = local_128 * local_128 +
                   (double)local_138._0_8_ * (double)local_138._0_8_ +
                   (double)local_138._8_8_ * (double)local_138._8_8_;
          uVar17 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
          dVar48 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar17)
          ;
          uVar17 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
          dVar28 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar28)) & uVar17)
          ;
          uVar17 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
          dVar33 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar17)
          ;
          dVar35 = (double)local_618._0_8_;
          dVar39 = (double)local_618._8_8_;
          auVar22._8_8_ = -(ulonglong)(0.0 <= (double)local_608._8_8_);
          auVar22._0_8_ = -(ulonglong)(0.0 <= (double)local_608._0_8_);
          auVar30 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
          uVar17 = -(ulonglong)(0.0 <= (double)local_5d8._0_8_ * (double)local_618._0_8_);
          dVar25 = (double)(~uVar17 & 0xbff0000000000000 |
                           (ulonglong)((uint)(uVar17 >> 0x20) & 0x3ff00000) << 0x20);
          dVar27 = auVar30._0_8_;
          stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar48 * dVar27;
          local_178._0_8_ = (double)local_178._0_8_ * dVar48 * dVar27;
          local_168._0_8_ = dVar48 * (double)local_168._0_8_ * dVar27;
          dVar48 = auVar30._8_8_;
          local_148 = dVar28 * local_148 * dVar48;
          dStack_150 = dStack_150 * dVar28 * dVar48;
          local_158 = dVar48 * local_158 * dVar28;
          local_128 = dVar33 * local_128 * dVar25;
          local_138._8_8_ = (double)local_138._8_8_ * dVar33 * dVar25;
          local_138._0_8_ = dVar25 * (double)local_138._0_8_ * dVar33;
          FUN_14481fd10(&local_348,local_178);
          dVar48 = local_338 * local_338 + local_348 * local_348;
          dVar28 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
          auVar32._0_8_ = dVar48 + dVar28;
          auVar32._8_8_ = dVar48 + dVar28;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
          auVar30 = sqrtpd(auVar32,auVar32);
          auVar30 = divpd(auVar18,auVar30);
          auVar37._0_8_ = auVar30._0_8_ * local_338;
          auVar37._8_8_ = auVar30._8_8_ * dStack_330;
          dVar44 = (double)((ulonglong)(local_348 * auVar30._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
          dVar46 = (double)((ulonglong)(dStack_340 * auVar30._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
          auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar23);
          dVar48 = local_108;
          dVar28 = local_118;
          dVar33 = dStack_110;
        }
        lVar13 = local_3b0;
        lVar14 = (longlong)local_3a8;
        if (lVar14 != 0) {
          local_608._0_8_ = puVar9;
          lVar15 = 0;
          do {
            local_1f8 = *(double *)(*(longlong *)(lVar13 + lVar15) + 0x10);
            if (*(char *)((longlong)local_1f8 + 0x18) == '\x01') {
              bVar16 = (longlong)uStack_390 < 0;
              uStack_390 = uStack_390 & 0xffffffff00000000;
              if (bVar16) {
                FUN_1417bb680(&local_398,0);
              }
              local_178._8_4_ = SUB84(dVar46,0);
              local_178._0_8_ = dVar44;
              uStack_16c = (int)((ulonglong)dVar46 >> 0x20);
              uStack_140 = 0;
              local_128 = 1.0;
              uStack_120 = 0;
              local_620 = &local_278;
              local_628 = param_8;
              local_630 = &local_388;
              local_640 = (double *)CONCAT44(local_640._4_4_,param_6);
              local_648 = &local_398;
              local_638 = &local_308;
              local_168 = auVar58;
              local_158 = dVar28;
              dStack_150 = dVar33;
              local_148 = dVar48;
              local_138 = auVar18;
              bVar4 = FUN_140200cc4(param_1,local_1f8,&local_1f8,local_178);
              uVar17 = uStack_390;
              uVar5 = (uint)(byte)((byte)uVar5 | bVar4);
              if ((uint)uStack_390 != 0) {
                iVar6 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar6 + (uint)uStack_390;
                if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar6) < (uint)uStack_390) {
                  FUN_1414fa4c8(param_2,iVar6);
                }
                FUN_144a80303((longlong)iVar6 * 0x48 + *param_2,local_398,uVar17 & 0xffffffff);
              }
            }
            lVar15 = lVar15 + 8;
          } while (lVar14 * 8 != lVar15);
          puVar9 = (undefined8 *)local_608._0_8_;
        }
        auVar30._8_8_ = dStack_5f0;
        auVar30._0_8_ = local_5f8;
        if (local_3b0 != 0) {
          FUN_1400020a8(local_3b0);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_5c8);
      if (local_398 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1448635f4(local_328);
    if (local_358 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    _local_178 = *(undefined1 (*) [16])(lVar13 + 0x68);
    local_168 = *(undefined1 (*) [16])(lVar13 + 0x78);
    local_628 = (double *)local_178;
    local_620 = param_8;
    local_638 = (undefined8 *)CONCAT44(local_638._4_4_,param_6);
    local_640 = param_5;
    local_648 = (longlong *)local_618._0_8_;
    local_630 = &local_308;
    uVar5 = FUN_14019b68c(lVar13,param_2,param_1,0);
  }
  if (local_298 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14342a771:
  if ((local_f0 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 14342a83e FUN_14342a83e body=124 status=ok
// SIG undefined FUN_14342a83e(void)

undefined8
FUN_14342a83e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x580))(param_3);
    uVar2 = FUN_14342a8ba(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_7);
  }
  return uVar2;
}



// FUNCTION 14342a8ba FUN_14342a8ba body=3925 status=ok
// SIG undefined FUN_14342a8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14342a8ba(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       undefined8 *param_5,undefined8 param_6,undefined4 param_7,
                       undefined8 **param_8)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  undefined8 **ppuVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  longlong *plVar27;
  bool bVar28;
  undefined1 auStack_3d8 [32];
  undefined8 **local_3b8;
  undefined4 local_3b0;
  undefined8 **local_3a8;
  undefined8 **local_3a0;
  char *local_398;
  undefined8 **local_390;
  longlong *local_388;
  longlong *local_380;
  ulonglong local_378;
  longlong *local_370;
  int *local_368;
  undefined8 **local_360;
  undefined8 **local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  longlong *local_340;
  undefined8 *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 *local_310;
  undefined4 local_308;
  longlong *local_300;
  int local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  undefined8 *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  longlong *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_258;
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  undefined8 *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  char local_1e9;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8 [2];
  uint *local_1c8;
  uint local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined2 uStack_178;
  undefined4 uStack_176;
  undefined4 uStack_172;
  undefined1 local_168 [32];
  undefined1 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined1 *local_128;
  uint local_120;
  uint local_11c;
  undefined1 local_118;
  undefined8 *local_108 [3];
  undefined1 local_f0 [8];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1447c0da8(param_2,0);
  }
  uVar23 = 0;
  if ((param_3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x260) != 0)) {
    cVar6 = (**(code **)(*param_3 + 0x7d8))(param_3);
    if (cVar6 == '\0') {
      local_340 = param_3;
      (**(code **)(param_3[0x57] + 0x20))(param_3 + 0x57,&local_2c8);
      local_2d8 = local_2c8;
      local_2d0 = local_2c0;
      FUN_144a56970(local_108);
      puVar11 = local_2c8;
      local_198 = (undefined8 *)0x0;
      uStack_190 = (undefined8 *)0x0;
      if ((longlong)local_2c0 != 0) {
        lVar22 = 0;
        do {
          puVar4 = uStack_190;
          plVar12 = *(longlong **)((longlong)puVar11 + lVar22);
          if ((plVar12 == (longlong *)0x0) || (lVar24 = *plVar12, lVar24 == 0)) goto LAB_14342aaf8;
          iVar26 = *(int *)(lVar24 + 0x1c);
          if (iVar26 == 0xb) {
            plVar12 = (longlong *)(lVar24 + 0x40);
LAB_14342aaa7:
            lVar24 = *plVar12;
            if ((lVar24 != 0) &&
               ((*(byte *)(lVar24 + 0x90) < 2 || (*(char *)(lVar24 + 0x1b9) == '\0')))) {
              lVar24 = (longlong)(int)uStack_190;
              uVar8 = (int)uStack_190 + 1;
              uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,uVar8);
              if (uStack_190._4_4_ < uVar8) {
                FUN_14075a758(&local_198,(ulonglong)puVar4 & 0xffffffff);
              }
              local_198[lVar24] = *(undefined8 *)((longlong)puVar11 + lVar22);
            }
          }
          else if (iVar26 == 2) {
            iVar26 = (int)plVar12[1];
            if (((-1 < (longlong)iVar26) && (iVar26 < *(int *)(lVar24 + 0x418))) &&
               (lVar15 = (longlong)*(int *)(*(longlong *)(lVar24 + 0x410) + (longlong)iVar26 * 4),
               lVar15 != -1)) {
              plVar12 = (longlong *)(lVar15 * 8 + *(longlong *)(lVar24 + 0x440));
              goto LAB_14342aaa7;
            }
          }
          else if (iVar26 == 0xc) {
            plVar12 = (longlong *)(lVar24 + 0x128);
            goto LAB_14342aaa7;
          }
LAB_14342aaf8:
          lVar22 = lVar22 + 8;
        } while ((longlong)local_2c0 * 8 != lVar22);
      }
      if (local_2c8 != (undefined8 *)0x0) {
        FUN_1400020a8(local_2c8);
      }
      local_2c8 = local_198;
      local_2c0 = (int)uStack_190;
      local_2bc = uStack_190._4_4_;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_378 = 0;
      if ((longlong)(int)uStack_190 != 0) {
        local_350 = local_198 + (int)uStack_190;
        local_360 = param_8 + 6;
        local_358 = param_8 + 0xc;
        local_368 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
        local_378 = 0;
        puVar11 = local_198;
        local_380 = param_2;
        local_370 = param_4;
        do {
          local_2f0 = *puVar11;
          uStack_178 = (undefined2)((uint)*(undefined4 *)((longlong)param_8 + 0x1e) >> 0x10);
          uStack_176 = *(undefined4 *)((longlong)param_8 + 0x22);
          uStack_172 = *(undefined4 *)((longlong)param_8 + 0x26);
          local_188 = *(undefined4 *)(param_8 + 2);
          uStack_184 = *(undefined4 *)((longlong)param_8 + 0x14);
          uStack_180 = (undefined2)*(undefined4 *)(param_8 + 3);
          uStack_17e = (undefined2)((uint)*(undefined4 *)(param_8 + 3) >> 0x10);
          uStack_17c = (undefined2)*(undefined4 *)((longlong)param_8 + 0x1c);
          uStack_17a = (undefined2)((uint)*(undefined4 *)((longlong)param_8 + 0x1c) >> 0x10);
          local_198 = *param_8;
          uStack_190 = param_8[1];
          local_148 = (undefined1 *)0x0;
          iVar26 = *(int *)(param_8 + 0xb);
          local_140 = iVar26;
          local_348 = puVar11;
          if ((longlong)iVar26 == 0) {
            local_13c = 8;
          }
          else {
            ppuVar18 = (undefined8 **)param_8[10];
            if ((undefined8 **)param_8[10] == (undefined8 **)0x0) {
              ppuVar18 = local_360;
            }
            FUN_14470be6c(local_168,iVar26,0);
            puVar14 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar14 = local_168;
            }
            memcpy(puVar14,ppuVar18,(longlong)iVar26 << 2);
          }
          local_128 = (undefined1 *)0x0;
          iVar26 = *(int *)(param_8 + 0xf);
          local_120 = iVar26;
          if ((longlong)iVar26 == 0) {
            local_11c = 4;
            uVar8 = 0;
          }
          else {
            ppuVar18 = (undefined8 **)param_8[0xe];
            if ((undefined8 **)param_8[0xe] == (undefined8 **)0x0) {
              ppuVar18 = local_358;
            }
            FUN_1447163e6(local_138,iVar26,0);
            puVar14 = local_128;
            if (local_128 == (undefined1 *)0x0) {
              puVar14 = local_138;
            }
            memcpy(puVar14,ppuVar18,(longlong)iVar26 << 2);
            uVar8 = local_120;
          }
          local_118 = *(undefined1 *)(param_8 + 0x10);
          local_1c8 = (uint *)0x0;
          local_1c0 = 0;
          local_1e8 = 0;
          lStack_1e0 = 0;
          local_1bc = 0xffffffff00000080;
          local_1b4 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          puVar14 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar14 = local_138;
          }
          if (uVar8 != 0) {
            lVar22 = 0;
            do {
              local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,*(undefined4 *)(puVar14 + lVar22));
              FUN_144980568(&local_1e8,&local_338,&local_e8,0);
              lVar22 = lVar22 + 4;
            } while ((longlong)(int)uVar8 * 4 != lVar22);
          }
          local_120 = 0;
          if ((int)local_11c < 0) {
            FUN_1479c9b5a(local_138,0);
          }
          local_310 = &local_2f0;
          local_308 = 1;
          FUN_1405574d6(local_f0,&local_300);
          plVar12 = local_300;
          lVar22 = (longlong)local_2f8;
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              local_e8 = (undefined8 *)
                         CONCAT44(local_e8._4_4_,
                                  *(undefined4 *)
                                   (*(longlong *)((longlong)plVar12 + lVar24) + 0x48 +
                                   (ulonglong)
                                   ((*(byte *)(*(longlong *)((longlong)plVar12 + lVar24) + 8) & 3)
                                   == 0) * 8));
              FUN_144980568(&local_1e8,&local_338,&local_e8,0);
              lVar24 = lVar24 + 8;
            } while (lVar22 * 8 != lVar24);
          }
          plVar12 = (longlong *)(ulonglong)local_1c0;
          if (local_1c0 == 0) {
            uVar25 = 1;
            uVar23 = 0;
            iVar26 = 0;
            uVar8 = 0;
          }
          else {
            puVar13 = local_1c8;
            if (local_1c8 == (uint *)0x0) {
              puVar13 = (uint *)local_1d8;
            }
            uVar8 = *puVar13;
            if (uVar8 == 0) {
              iVar26 = local_1c0 + 0x1e;
              if (-1 < (int)(local_1c0 - 1)) {
                iVar26 = local_1c0 - 1;
              }
              uVar23 = 0;
              uVar25 = (ulonglong)(uint)(iVar26 >> 5);
              if (iVar26 >> 5 < 1) {
                uVar25 = uVar23;
              }
              iVar26 = 0;
              do {
                if (uVar25 == uVar23) goto LAB_14342af3c;
                iVar26 = iVar26 + 0x20;
                uVar8 = puVar13[uVar23 + 1];
                uVar23 = uVar23 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar23 = 0;
              iVar26 = 0;
            }
            uVar25 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar25 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar8 = (iVar26 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if ((int)local_1c0 <= (int)uVar8) {
              uVar8 = local_1c0;
            }
          }
          if (uVar8 != local_1c0) {
            uVar16 = 0xffffffff;
            local_388 = plVar12;
            do {
              uVar5 = local_120;
              uVar2 = *(undefined4 *)(local_1e8 + (longlong)(int)uVar8 * 0xc);
              lVar22 = (longlong)(int)local_120;
              local_120 = local_120 + 1;
              if (local_11c < local_120) {
                FUN_1447de67e(local_138,uVar5);
                plVar12 = local_388;
              }
              puVar14 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar14 = local_138;
              }
              *(undefined4 *)(puVar14 + lVar22 * 4) = uVar2;
              uVar16 = uVar16 & ~(uint)uVar25;
              puVar13 = local_1c8;
              if (local_1c8 == (uint *)0x0) {
                puVar13 = (uint *)local_1d8;
              }
              iVar21 = (int)uVar23;
              lVar22 = (longlong)iVar21;
              uVar8 = puVar13[lVar22] & uVar16;
              if (uVar8 == 0) {
                iVar19 = local_1c0 + 0x1e;
                if (-1 < (int)(local_1c0 - 1)) {
                  iVar19 = local_1c0 - 1;
                }
                iVar19 = iVar19 >> 5;
                iVar26 = iVar26 + 0x20;
                iVar20 = iVar19;
                if (iVar19 < iVar21) {
                  iVar20 = iVar21;
                }
                plVar12 = local_388;
                if (iVar21 < iVar19) {
                  lVar24 = 0;
                  do {
                    uVar8 = puVar13[lVar22 + lVar24 + 1];
                    if (uVar8 != 0) {
                      uVar23 = (ulonglong)(iVar21 + (int)lVar24 + 1);
                      uVar16 = 0xffffffff;
                      goto LAB_14342b69d;
                    }
                    iVar26 = iVar26 + 0x20;
                    lVar24 = lVar24 + 1;
                  } while (iVar20 - lVar22 != lVar24);
                  uVar16 = 0xffffffff;
                  iVar21 = iVar20;
                }
                uVar23 = (ulonglong)(iVar21 + 1);
                uVar8 = local_1c0;
              }
              else {
LAB_14342b69d:
                uVar25 = (ulonglong)(-uVar8 & uVar8);
                uVar1 = uVar25 * 2 + 1;
                lVar22 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                uVar8 = (iVar26 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                if ((int)local_1c0 <= (int)uVar8) {
                  uVar8 = local_1c0;
                }
              }
            } while (uVar8 != (uint)plVar12);
          }
LAB_14342af3c:
          param_2 = local_380;
          if ((longlong)local_2f8 != 0) {
            plVar12 = local_300 + local_2f8;
            plVar17 = local_370;
            plVar27 = local_300;
            local_388 = plVar12;
            do {
              lVar22 = *(longlong *)(*plVar27 + 0x10);
              if (*(char *)(lVar22 + 0x18) == '\x01') {
                bVar28 = (longlong)uStack_2e0 < 0;
                uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
                local_318 = lVar22;
                if (bVar28) {
                  FUN_1447c0da8(&local_2e8,0);
                }
                puVar11 = (undefined8 *)(**(code **)(*local_340 + 0x558))();
                local_338 = (undefined8 *)*puVar11;
                uStack_330 = puVar11[1];
                local_328 = puVar11[2];
                uStack_320 = puVar11[3];
                local_278 = param_5[2];
                local_288 = (undefined8 *)*param_5;
                uStack_280 = param_5[1];
                local_2a8 = (undefined4)*plVar17;
                uStack_2a4 = *(undefined4 *)((longlong)plVar17 + 4);
                uStack_2a0 = (undefined4)plVar17[1];
                uStack_29c = *(undefined4 *)((longlong)plVar17 + 0xc);
                local_298 = plVar17[2];
                local_2b8 = &local_318;
                local_2b0 = param_6;
                if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
                  bVar7 = 0;
                }
                else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) ==
                         '\x01') {
                  if ((DAT_14c86a9f8 == '\x01') && (iVar26 = *local_368, iVar26 != 2)) {
                    if (iVar26 == 1) {
                      DVar9 = FUN_140ad26c0();
                      DVar10 = GetCurrentThreadId();
                      bVar28 = DVar9 == DVar10;
                      iVar26 = *local_368;
                    }
                    else {
                      bVar28 = false;
                    }
                    if ((!bVar28) &&
                       (plVar17 = local_370, param_2 = local_380, iVar26 != 0x40000002))
                    goto LAB_14342b074;
                  }
                  local_3a0 = &local_338;
                  bVar28 = true;
                  local_1e9 = '\x01';
                  local_c4 = 0;
                  local_c0 = 0x101;
                  local_98 = 0;
                  local_90 = 0x800000000;
                  local_78 = 0;
                  local_70 = 0x400000000;
                  local_cc = 0;
                  local_e8 = (undefined8 *)0x0;
                  uStack_e0 = 0;
                  local_c8 = 0;
                  local_d8 = 0x100000000000100;
                  local_d0 = 1;
                  local_1f8 = local_278;
                  local_208 = local_288;
                  uStack_200 = uStack_280;
                  local_218 = local_298;
                  local_228 = local_2a8;
                  uStack_224 = uStack_2a4;
                  uStack_220 = uStack_2a0;
                  uStack_21c = uStack_29c;
                  local_398 = &local_1e9;
                  local_3a8 = &local_198;
                  local_3b0 = param_7;
                  local_3b8 = &local_208;
                  bVar7 = FUN_14344980c(param_1);
                  if (local_1e9 == '\x01') {
                    uVar8 = 10;
                    do {
                      local_238 = local_278;
                      local_248 = local_288;
                      uStack_240 = uStack_280;
                      local_268 = local_2a8;
                      uStack_264 = uStack_2a4;
                      uStack_260 = uStack_2a0;
                      uStack_25c = uStack_29c;
                      local_258 = local_298;
                      local_398 = &local_1e9;
                      local_3a0 = &local_338;
                      local_3b0 = param_7;
                      local_3b8 = &local_248;
                      local_3a8 = &local_e8;
                      bVar7 = FUN_14344980c(param_1);
                      bVar28 = 1 < uVar8;
                      if (local_1e9 != '\x01') break;
                      bVar3 = 1 < uVar8;
                      uVar8 = uVar8 - 1;
                    } while (bVar3);
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  if (local_98 != 0) {
                    FUN_1400020a8();
                  }
                  bVar7 = bVar28 & bVar7;
                  plVar17 = local_370;
                  param_2 = local_380;
                }
                else {
LAB_14342b074:
                  local_3a0 = &local_338;
                  bVar28 = true;
                  local_1e9 = '\x01';
                  local_c4 = 0;
                  local_c0 = 0x101;
                  local_98 = 0;
                  local_90 = 0x800000000;
                  local_78 = 0;
                  local_70 = 0x400000000;
                  local_cc = 0;
                  local_e8 = (undefined8 *)0x0;
                  uStack_e0 = 0;
                  local_c8 = 0;
                  local_d8 = 0x100000000000100;
                  local_d0 = 1;
                  local_1f8 = local_278;
                  local_208 = local_288;
                  uStack_200 = uStack_280;
                  local_218 = local_298;
                  local_228 = local_2a8;
                  uStack_224 = uStack_2a4;
                  uStack_220 = uStack_2a0;
                  uStack_21c = uStack_29c;
                  local_398 = &local_1e9;
                  local_3a8 = &local_198;
                  local_3b0 = param_7;
                  local_3b8 = &local_208;
                  local_390 = &local_e8;
                  bVar7 = FUN_143448a21(param_1);
                  if (local_1e9 == '\x01') {
                    uVar8 = 10;
                    do {
                      local_238 = local_278;
                      local_248 = local_288;
                      uStack_240 = uStack_280;
                      local_268 = local_2a8;
                      uStack_264 = uStack_2a4;
                      uStack_260 = uStack_2a0;
                      uStack_25c = uStack_29c;
                      local_258 = local_298;
                      local_398 = &local_1e9;
                      local_3a0 = &local_338;
                      local_3b0 = param_7;
                      local_3b8 = &local_248;
                      local_3a8 = &local_e8;
                      local_390 = &local_e8;
                      bVar7 = FUN_143448a21(param_1);
                      bVar28 = 1 < uVar8;
                      if (local_1e9 != '\x01') break;
                      bVar3 = 1 < uVar8;
                      uVar8 = uVar8 - 1;
                    } while (bVar3);
                  }
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_98 != 0) {
                    FUN_1400020a8();
                  }
                  bVar7 = bVar7 & bVar28;
                }
                if ((uint)uStack_2e0 != 0) {
                  iVar26 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar26 + (uint)uStack_2e0;
                  if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar26) < (uint)uStack_2e0) {
                    FUN_144a3a3ee(param_2,iVar26);
                  }
                  FUN_144723ff3((longlong)iVar26 * 0x100 + *param_2);
                }
                local_378 = CONCAT71((int7)(local_378 >> 8),(byte)local_378 | bVar7);
                plVar12 = local_388;
              }
              plVar27 = plVar27 + 1;
            } while (plVar27 != plVar12);
          }
          if (local_300 != (longlong *)0x0) {
            FUN_1400020a8(local_300);
          }
          local_1a0 = 0;
          if (local_1a8 != 0) {
            FUN_1400020a8();
          }
          FUN_1401bc218(&local_1e8);
          if (local_128 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_148 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          puVar11 = local_348 + 1;
        } while (puVar11 != local_350);
      }
      FUN_14497fce4(*param_2,(int)param_2[1]);
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
      FUN_1448635f4(local_108);
      uVar23 = local_378;
      if (local_2c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*param_3 + 0x558))(param_3);
      local_198 = (undefined8 *)*puVar11;
      uStack_190 = (undefined8 *)puVar11[1];
      local_188 = *(undefined4 *)(puVar11 + 2);
      uStack_184 = *(undefined4 *)((longlong)puVar11 + 0x14);
      local_3a0 = &local_198;
      uStack_180 = (undefined2)*(undefined4 *)(puVar11 + 3);
      uStack_17e = (undefined2)((uint)*(undefined4 *)(puVar11 + 3) >> 0x10);
      uStack_17c = (undefined2)*(undefined4 *)((longlong)puVar11 + 0x1c);
      uStack_17a = (undefined2)((uint)*(undefined4 *)((longlong)puVar11 + 0x1c) >> 0x10);
      local_e8 = (undefined8 *)*param_5;
      uStack_e0 = param_5[1];
      local_3b8 = &local_e8;
      local_d8 = param_5[2];
      local_1e8 = *param_4;
      lStack_1e0 = param_4[1];
      local_1d8[0] = param_4[2];
      local_390 = local_108;
      local_398 = (char *)&DAT_14cad0f08;
      local_3a8 = param_8;
      local_3b0 = param_7;
      uVar8 = FUN_1401e2596(param_1,param_2,&local_338);
      uVar23 = (ulonglong)uVar8;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffff01;
}



// FUNCTION 14342b810 FUN_14342b810 body=69 status=ok
// SIG undefined FUN_14342b810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342b810(void)

{
  _DAT_14cacfe30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342b852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacfe38,1);
  return;
}



// FUNCTION 14342b855 FUN_14342b855 body=106 status=ok
// SIG undefined FUN_14342b855(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342b855(void)

{
  _DAT_14cacfe60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacfe68,1);
  if (DAT_14cacfe50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacfe40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14342b8bf FUN_14342b8bf body=859 status=ok
// SIG undefined FUN_14342b8bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14342b8bf(int *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  int iVar14;
  void *_Dst;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  iVar16 = *(int *)(param_2 + 0xc0);
  lVar17 = (longlong)(iVar16 % 2) * 0x60;
  lVar1 = param_2 + lVar17;
  iVar14 = *(int *)(param_2 + 0x24 + lVar17);
  if (*(int *)(param_2 + 0x18 + lVar17) * 0x40 <= iVar14) {
    _Dst = (void *)FUN_14001cc68(0x4c00);
    memset(_Dst,0,0x4c00);
    auVar12 = _DAT_149c360b0;
    lVar15 = (longlong)_Dst + 0x88;
    lVar18 = 0;
    do {
      *(undefined8 *)((longlong)_Dst + lVar18) = 0;
      *(undefined4 *)((longlong)_Dst + lVar18 + 0x2c) = 0;
      *(undefined2 *)((longlong)_Dst + lVar18 + 0x30) = 0x101;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x58) = 0;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x60) = 0x800000000;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x78) = 0;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x80) = 0x400000000;
      *(undefined1 *)((longlong)_Dst + lVar18 + 0x18) = 0;
      *(undefined4 *)((longlong)_Dst + lVar18 + 0x24) = 0;
      puVar3 = (undefined8 *)((longlong)_Dst + lVar18 + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined2 *)((longlong)_Dst + lVar18 + 0x19) = 1;
      *(undefined1 *)((longlong)_Dst + lVar18 + 0x1b) = 0;
      *(undefined1 *)((longlong)_Dst + lVar18 + 0x28) = 0;
      *(undefined4 *)((longlong)_Dst + lVar18 + 0x1c) = 0x1000000;
      *(undefined1 *)((longlong)_Dst + lVar18 + 0x20) = 1;
      uVar13 = _DAT_14cad0ed8;
      puVar3 = (undefined8 *)((longlong)_Dst + lVar18 + 0x88);
      *puVar3 = _DAT_14cad0ed0;
      puVar3[1] = uVar13;
      uVar13 = uRam000000014cad0ee8;
      puVar3 = (undefined8 *)((longlong)_Dst + lVar18 + 0x98);
      *puVar3 = _DAT_14cad0ee0;
      puVar3[1] = uVar13;
      lVar19 = 0;
      do {
        pcVar2 = (char *)(lVar15 + lVar19);
        bVar4 = *pcVar2 == auVar12[0];
        bVar5 = pcVar2[1] == auVar12[1];
        bVar6 = pcVar2[2] == auVar12[2];
        bVar7 = pcVar2[3] == auVar12[3];
        bVar8 = pcVar2[4] == auVar12[4];
        bVar9 = pcVar2[5] == auVar12[5];
        bVar10 = pcVar2[6] == auVar12[6];
        bVar11 = pcVar2[7] == auVar12[7];
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)(lVar15 + lVar19) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)(lVar15 + 1 + lVar19) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)(lVar15 + 2 + lVar19) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)(lVar15 + 3 + lVar19) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)(lVar15 + 4 + lVar19) = 2;
        }
        if ((bool)(~bVar9 & 1)) {
          *(undefined1 *)(lVar15 + 5 + lVar19) = 2;
        }
        if ((bool)(~bVar10 & 1)) {
          *(undefined1 *)(lVar15 + 6 + lVar19) = 2;
        }
        if ((bool)(~bVar11 & 1)) {
          *(undefined1 *)(lVar15 + 7 + lVar19) = 2;
        }
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)(lVar15 + 8 + lVar19) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)(lVar15 + 9 + lVar19) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)(lVar15 + 10 + lVar19) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)(lVar15 + 0xb + lVar19) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)(lVar15 + 0xc + lVar19) = 2;
        }
        if ((bool)(~bVar9 & 1)) {
          *(undefined1 *)(lVar15 + 0xd + lVar19) = 2;
        }
        if ((bool)(~bVar10 & 1)) {
          *(undefined1 *)(lVar15 + 0xe + lVar19) = 2;
        }
        if ((bool)(~bVar11 & 1)) {
          *(undefined1 *)(lVar15 + 0xf + lVar19) = 2;
        }
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x20);
      *(undefined4 *)((longlong)_Dst + lVar18 + 0xa8) = 0;
      *(undefined1 *)((longlong)_Dst + lVar18 + 0xac) = 0;
      *(undefined4 *)((longlong)_Dst + lVar18 + 0xb0) = 0;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x110) = 0;
      *(undefined4 *)((longlong)_Dst + lVar18 + 0x118) = 0;
      lVar19 = lVar18 + 0x130;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x120) = 0;
      *(undefined8 *)((longlong)_Dst + lVar18 + 0x128) = 0;
      lVar15 = lVar15 + 0x130;
      lVar18 = lVar19;
    } while (lVar19 != 0x4c00);
    iVar16 = *(int *)(lVar1 + 0x18);
    *(uint *)(lVar1 + 0x18) = iVar16 + 1U;
    if (*(uint *)(lVar1 + 0x1c) < iVar16 + 1U) {
      FUN_1479d4ad6(param_2 + lVar17 + 0x10,iVar16);
    }
    *(void **)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar16 * 8) = _Dst;
    iVar14 = *(int *)(lVar1 + 0x24);
    iVar16 = *(int *)(param_2 + 0xc0);
  }
  *param_1 = iVar16;
  param_1[1] = iVar14;
  iVar16 = iVar14 + 0x3f;
  if (-1 < iVar14) {
    iVar16 = iVar14;
  }
  FUN_1479b556c((longlong)(iVar14 % 0x40) * 0x130 +
                *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)(iVar16 >> 6) * 8),param_3);
  FUN_1404d86f2(param_2,0);
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
  return param_1;
}



// FUNCTION 14342bc20 FUN_14342bc20 body=55 status=ok
// SIG undefined FUN_14342bc20(void)

void FUN_14342bc20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacff00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacff00 = FUN_14171c317(FUN_1463b3d21,uVar1,L"EComponentCreationMethod");
  }
  return;
}



// FUNCTION 14342bc58 FUN_14342bc58 body=508 status=ok
// SIG undefined FUN_14342bc58(void)

undefined4 FUN_14342bc58(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  wchar_t *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  code **local_460;
  code *local_458;
  code *local_450;
  code *local_440 [51];
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 uStack_28c;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  code **local_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if (DAT_14cac9ca8 == (longlong *)0x0) {
    local_460 = local_440;
    local_440[0] = FUN_141030f22;
    local_450 = FUN_14081d0ea;
    local_458 = FUN_14081d0ea;
    local_468 = &LAB_1478c0a72;
    local_470 = &LAB_1417b2375;
    local_478 = L"Engine";
    local_480 = 0x1000000000;
    local_488 = 0x10000004;
    local_490 = CONCAT44(local_490._4_4_,8);
    local_498 = CONCAT44(local_498._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  plVar1 = DAT_14cac9ca8;
  lVar3 = DAT_14cac9ca8[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14cac9ca8 + 1000))(DAT_14cac9ca8);
    lVar3 = plVar1[0x22];
  }
  local_1f0 = 0;
  local_1e8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_2a8 = &PTR_FUN_14a81d660;
  local_1c0 = 0;
  FUN_1479ca864(local_440,0,&local_2a8);
  plVar1 = *(longlong **)(lVar3 + 0x10);
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_490 = 0;
  local_498 = lVar3;
  local_1b0 = local_440;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,local_1a0,lVar3,plVar1);
  uVar2 = uStack_298;
  FUN_1479b60fc(local_440);
  FUN_140595d6e(&local_2a8);
  if ((local_28 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342be56 FUN_14342be56 body=572 status=ok
// SIG undefined FUN_14342be56(void)

undefined4 FUN_14342be56(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_4d8 [32];
  longlong local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  wchar_t *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  undefined ***local_480;
  code *local_478;
  code *local_470;
  undefined **local_468 [51];
  undefined **local_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
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
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined **local_1c0;
  undefined ***local_1b8;
  undefined ***local_1b0;
  undefined8 **local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (DAT_14cad00c8 == (longlong *)0x0) {
    local_480 = local_468;
    local_468[0] = (undefined **)FUN_144a7958c;
    local_470 = FUN_14081d0ea;
    local_478 = FUN_14081d0ea;
    local_488 = &LAB_1479b7a0c;
    local_490 = &LAB_1463b464e;
    local_498 = L"Engine";
    local_4a0 = 0;
    local_4a8 = 0x10000005;
    local_4b0 = CONCAT44(local_4b0._4_4_,8);
    local_4b8 = CONCAT44(local_4b8._4_4_,0x110);
    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
  }
  plVar1 = DAT_14cad00c8;
  lVar3 = DAT_14cad00c8[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14cad00c8 + 1000))(DAT_14cad00c8);
    lVar3 = plVar1[0x22];
  }
  local_218 = 0;
  local_210 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_2d0 = &PTR_FUN_14a544ad0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0xffffffff;
  local_1c8 = 0;
  local_1d8 = 0;
  lStack_1d0 = 0;
  FUN_1479ca864(local_468,0,&local_2d0);
  local_468[0] = &PTR_FUN_14a839410;
  plVar1 = *(longlong **)(lVar3 + 0x10);
  local_1a8 = &local_1b0;
  local_1c0 = &PTR_FUN_149e37810;
  local_1b0 = &local_1c0;
  local_4b0 = 0;
  local_4b8 = lVar3;
  local_1b8 = local_468;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,local_1a8,lVar3,plVar1);
  uVar2 = uStack_2c0;
  FUN_1479b60fc(local_468);
  local_2d0 = &PTR_FUN_14a544ad0;
  if (lStack_1d0 != 0) {
    FUN_1400020a8();
  }
  FUN_140595d6e(&local_2d0);
  if ((local_30 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342c094 FUN_14342c094 body=328 status=ok
// SIG undefined FUN_14342c094(void)

void FUN_14342c094(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar7 = param_1[1];
  iVar9 = *(int *)(lVar7 + 200);
  *(uint *)(lVar7 + 200) = iVar9 + 1U;
  if (*(uint *)(lVar7 + 0xcc) < iVar9 + 1U) {
    FUN_1401bf338(lVar7,iVar9);
  }
  lVar8 = *(longlong *)(lVar7 + 0xc0);
  if (*(longlong *)(lVar7 + 0xc0) == 0) {
    lVar8 = lVar7;
  }
  *(undefined8 *)(lVar8 + (longlong)iVar9 * 8) = param_2;
  uVar6 = 1;
  iVar3 = *(int *)(param_1[1] + 200);
  do {
    iVar4 = iVar3;
    if (0 < (int)uVar6) {
      uVar10 = 0;
      do {
        lVar7 = *(longlong *)(param_1[1] + 0xc0);
        if (lVar7 == 0) {
          lVar7 = param_1[1];
        }
        lVar7 = *(longlong *)(lVar7 + uVar10 * 8 + (longlong)iVar9 * 8);
        iVar4 = *(int *)(lVar7 + 0x140);
        if (0 < iVar4) {
          lVar8 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x138) + lVar8 * 8);
            if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa8) == *param_1)) {
              lVar2 = param_1[1];
              iVar4 = *(int *)(lVar2 + 200);
              *(uint *)(lVar2 + 200) = iVar4 + 1U;
              if (*(uint *)(lVar2 + 0xcc) < iVar4 + 1U) {
                FUN_1401bf338(lVar2,iVar4);
              }
              lVar5 = *(longlong *)(lVar2 + 0xc0);
              if (*(longlong *)(lVar2 + 0xc0) == 0) {
                lVar5 = lVar2;
              }
              *(longlong *)(lVar5 + (longlong)iVar4 * 8) = lVar1;
              iVar4 = *(int *)(lVar7 + 0x140);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar4);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
      iVar4 = *(int *)(param_1[1] + 200);
    }
    uVar6 = iVar4 - iVar3;
    iVar9 = iVar3;
    iVar3 = iVar4;
  } while (uVar6 != 0);
  return;
}



// FUNCTION 14342c1dc FUN_14342c1dc body=279 status=ok
// SIG undefined FUN_14342c1dc(void)

void FUN_14342c1dc(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
    (**(code **)(*param_1 + 0x300))(param_1);
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
    if (DAT_14c872bf1 != '\x01') goto LAB_14342c27d;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if ((((bVar1 == 0) && ((*(byte *)((longlong)param_1 + 0x9c) & 2) == 0)) &&
      (*(longlong *)(param_1[0x16] + 0x218) != 0)) &&
     (cVar2 = (**(code **)(*param_1 + 0x318))(param_1), cVar2 != '\0')) {
    (**(code **)(*param_1 + 800))(param_1,param_2);
  }
LAB_14342c27d:
  FUN_141062a52(param_1,1);
  return;
}



// FUNCTION 14342c2f3 FUN_14342c2f3 body=221 status=ok
// SIG undefined FUN_14342c2f3(void)

longlong FUN_14342c2f3(void)

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
  if (DAT_14cad00c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479b7a0c;
    local_40 = &LAB_1463b464e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad00c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342c3d2 FUN_14342c3d2 body=55 status=ok
// SIG undefined FUN_14342c3d2(void)

longlong FUN_14342c3d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_2 == 0) || (lVar2 = (longlong)*(int *)(param_1 + 0x78), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar3) == param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 14342c40a FUN_14342c40a body=769 status=ok
// SIG undefined FUN_14342c40a(void)

void FUN_14342c40a(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong **_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = (longlong *)0x0;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_14342c5dc;
          }
        }
        _Src = (longlong **)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_30 = *(longlong **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_14342c5dc:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((((longlong *)param_1[0x15] == local_30) || ((longlong *)param_1[0x15] == (longlong *)0x0))
      || (local_30 == param_1)) || ((*(byte *)((longlong)param_1 + 0x9e) & 4) != 0)) {
    (**(code **)(*param_1 + 0x420))(param_1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342c70c FUN_14342c70c body=69 status=ok
// SIG undefined FUN_14342c70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c70c(void)

{
  _DAT_14cad00f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342c74e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0100,1);
  return;
}



// FUNCTION 14342c751 FUN_14342c751 body=69 status=ok
// SIG undefined FUN_14342c751(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c751(void)

{
  _DAT_14cad0110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342c793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0118,1);
  return;
}



// FUNCTION 14342c796 FUN_14342c796 body=69 status=ok
// SIG undefined FUN_14342c796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c796(void)

{
  _DAT_14cad0120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342c7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0128,1);
  return;
}



// FUNCTION 14342c7db FUN_14342c7db body=69 status=ok
// SIG undefined FUN_14342c7db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c7db(void)

{
  _DAT_14cad0130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342c81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0138,1);
  return;
}



// FUNCTION 14342c820 FUN_14342c820 body=505 status=ok
// SIG undefined FUN_14342c820(void)

longlong * FUN_14342c820(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [80];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar7 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14342c97f;
    bVar7 = DAT_14c8442b8 & 1;
  }
  if (bVar7 == 0) {
    FUN_14080c2b4();
    lVar8 = param_2[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar4 = *param_2;
      lVar9 = 0;
      do {
        plVar5 = *(longlong **)(lVar4 + lVar9);
        if ((~*(byte *)((longlong)plVar5 + 0x9c) & 3) == 0) {
          iVar3 = (int)param_1[1];
          lVar10 = (longlong)iVar3;
          *(uint *)(param_1 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
            FUN_1463b67be(param_1,iVar3);
          }
          lVar6 = *param_1;
          puVar1 = (undefined8 *)(lVar6 + lVar10 * 0x18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(longlong **)(lVar6 + 0x10 + lVar10 * 0x18) = param_1 + 2;
          if ((~*(byte *)((longlong)plVar5 + 0x9c) & 3) == 0) {
            plVar2 = (longlong *)(lVar6 + lVar10 * 0x18);
            (**(code **)(*plVar5 + 0x340))(plVar5);
            *plVar2 = (longlong)plVar5;
            FUN_1405edac7(plVar5,plVar2[2]);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar9);
    }
    FUN_1414efd58(local_a0,param_1 + 2);
    FUN_1414effc2(local_a0);
  }
LAB_14342c97f:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14342ca1a FUN_14342ca1a body=49 status=ok
// SIG undefined FUN_14342ca1a(void)

void FUN_14342ca1a(void)

{
  FUN_144760e21(DAT_14cad0f38,DAT_14cad0f40);
  if (DAT_14cad0f38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14342ca4b FUN_14342ca4b body=49 status=ok
// SIG undefined FUN_14342ca4b(void)

void FUN_14342ca4b(void)

{
  FUN_144760e21(DAT_14cad0f50,DAT_14cad0f58);
  if (DAT_14cad0f50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14342ca7c FUN_14342ca7c body=49 status=ok
// SIG undefined FUN_14342ca7c(void)

void FUN_14342ca7c(void)

{
  FUN_144760e21(DAT_14cad0140,DAT_14cad0148);
  if (DAT_14cad0140 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14342cabe FUN_14342cabe body=41 status=ok
// SIG undefined FUN_14342cabe(void)

void FUN_14342cabe(void)

{
  DAT_14cad01a0 = 0;
  if (DAT_14cad0198 != 0) {
    FUN_1400020a8();
  }
  FUN_146155950();
  return;
}



// FUNCTION 14342cb26 FUN_14342cb26 body=275 status=ok
// SIG undefined FUN_14342cb26(void)

undefined8
FUN_14342cb26(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = DAT_14cb0d2b0;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    lVar7 = (longlong)*(int *)(lVar4 + 0x1150);
    if (lVar7 != 0) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x1148) + lVar10);
        if (*(longlong *)(lVar3 + 0x360) == lVar9) {
          if (lVar3 == 0) {
            return 0;
          }
          iVar1 = *(int *)(lVar3 + 0x2b8);
          if ((longlong)iVar1 == 0) {
            return 0;
          }
          lVar4 = *(longlong *)(lVar3 + 0x2b0);
          lVar9 = 0;
          uVar8 = 0;
          do {
            plVar5 = *(longlong **)(lVar4 + lVar9);
            if ((plVar5 != (longlong *)0x0) &&
               (cVar6 = (**(code **)(*plVar5 + 0x430))(plVar5,lVar2,param_2), cVar6 != '\0')) {
              plVar5 = *(longlong **)(lVar4 + lVar9);
              (**(code **)(*plVar5 + 0x328))(plVar5,lVar2,param_2,param_3,param_4,param_5,param_1);
              uVar8 = 1;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar9);
          return uVar8;
        }
        lVar10 = lVar10 + 8;
      } while (lVar7 * 8 != lVar10);
    }
  }
  return 0;
}



// FUNCTION 14342cc3a FUN_14342cc3a body=1129 status=ok
// SIG undefined FUN_14342cc3a(void)

void FUN_14342cc3a(code *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
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
  undefined1 local_2c [4];
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x98) = 1;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_28;
      local_28 = (code *)&LAB_14355090c;
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
    lVar3 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1449e2820;
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
    lVar5 = *(longlong *)(lVar5 + 0x20);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
           (lVar6 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar3 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      if (lVar6 != 0) {
        local_28 = param_1;
        FUN_1479cbdfe(lVar6 + 0x348,local_2c,&local_28,0);
      }
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x3d0))(param_1,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = 1;
  if ((((byte)param_1[0x9c] & 8) == 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x260) != 0)) {
    cVar4 = (*(code *)**(undefined8 **)(param_1 + 0x30))(param_1 + 0x30);
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*(longlong *)param_1 + 0x358))(param_1);
      *(undefined4 *)(param_1 + 0x98) = uVar2;
      if (cVar4 != '\0') {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x260);
        FUN_147c69978(lVar5,param_1 + 0x30);
        param_1[0xb8] = (code)((byte)param_1[0xb8] & 0x9f | 0x20);
        *(longlong *)(param_1 + 0xa0) = lVar5;
        goto LAB_14342cda3;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 2;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_28;
      local_28 = (code *)&LAB_14355090c;
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
    lVar3 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1449e2820;
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
    lVar5 = *(longlong *)(lVar5 + 0x20);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
           (lVar6 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar3 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      if (lVar6 != 0) {
        FUN_1479cbf44(lVar6 + 0x348,param_1);
      }
    }
  }
LAB_14342cda3:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342d0a4 FUN_14342d0a4 body=8 status=ok
// SIG undefined FUN_14342d0a4(void)

void FUN_14342d0a4(longlong param_1)

{
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 0x10;
  return;
}



// FUNCTION 14342d0ac FUN_14342d0ac body=182 status=ok
// SIG undefined FUN_14342d0ac(void)

void FUN_14342d0ac(longlong param_1,float param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (((plVar1 == (longlong *)0x0) ||
      (cVar2 = *(char *)((longlong)plVar1 + 0x9d), (*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) ||
     ((**(code **)(*plVar1 + 0x400))(plVar1), (*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0)) {
    return;
  }
  plVar1 = (longlong *)plVar1[0x15];
  if ((param_3 == 1) && (-1 < cVar2)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x460))(plVar1);
    if (cVar2 == '\0') {
      return;
    }
  }
  else if (plVar1 == (longlong *)0x0) {
    fVar3 = 1.0;
    goto LAB_14342d13a;
  }
  fVar3 = *(float *)((longlong)plVar1 + 0x74);
LAB_14342d13a:
                    /* WARNING: Could not recover jumptable at 0x00014342d15f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x3a0))
            (*(longlong **)(param_1 + 0x28),fVar3 * param_2,param_3,param_1);
  return;
}



// FUNCTION 14342d162 FUN_14342d162 body=522 status=ok
// SIG undefined FUN_14342d162(void)

void FUN_14342d162(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1;
  if ((*(byte *)(param_1 + 0x4a) & 2) != 0) {
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
      if ((*(uint *)(lVar5 + 8) & 0x30) != 0) goto LAB_14342d2e5;
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar3 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a83c0e0;
    *(undefined1 *)(local_40 + 1) = param_2;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14a83c070;
    local_40[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar7 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar7 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar7;
    puVar3[4] = &LAB_1479b7d26;
    *(undefined4 *)(puVar3 + 5) = 0;
    local_48 = 1;
    FUN_142c039ac(&local_30,&local_40);
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_30)(local_30,1);
      }
    }
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_14342d2e5;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14342d2e5:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14342d36e FUN_14342d36e body=127 status=ok
// SIG undefined FUN_14342d36e(void)

void FUN_14342d36e(longlong *param_1,longlong param_2)

{
  if (((((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) && ((int)param_1[0x13] != 1)) &&
      (param_2 != 0 && (int)param_1[0x13] != 2)) &&
     ((param_1[0x15] == 0 || (-1 < *(int *)(*(longlong *)(param_1[0x15] + 0x10) + 0xd4))))) {
    if ((*(byte *)((longlong)param_1 + 0x9f) & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
    }
    param_1[0x16] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014342d3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1);
    return;
  }
  return;
}



// FUNCTION 14342d3f6 FUN_14342d3f6 body=15 status=ok
// SIG undefined FUN_14342d3f6(void)

void FUN_14342d3f6(longlong param_1)

{
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  return;
}



// FUNCTION 14342d416 FUN_14342d416 body=350 status=ok
// SIG undefined FUN_14342d416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342d416(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  
  uVar5 = (ulonglong)DAT_14cad0f58;
  if (0 < (longlong)uVar5) {
    bVar8 = false;
    DAT_14cad0f64 = DAT_14cad0f64 + 1;
    do {
      lVar6 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while (((*(int *)(DAT_14cad0f50 + lVar6) != 0 &&
              (plVar1 = *(longlong **)(DAT_14cad0f50 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + -0x30), cVar4 != '\0'))) {
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar2) {
          DAT_14cad0f64 = DAT_14cad0f64 + -1;
          if (!bVar8) {
            return;
          }
          goto LAB_14342d4c7;
        }
      }
      uVar5 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    DAT_14cad0f64 = DAT_14cad0f64 + -1;
LAB_14342d4c7:
    iVar3 = DAT_14cad0f58;
    if (DAT_14cad0f64 < 1) {
      if (0 < DAT_14cad0f58) {
        iVar7 = 0;
        do {
          if (((*(int *)(DAT_14cad0f50 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14cad0f50 + (longlong)iVar7 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar1 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cad0f50,iVar7);
            FUN_14005b248(&DAT_14cad0f50);
          }
          else {
            iVar7 = iVar7 + 1;
          }
        } while (iVar7 < DAT_14cad0f58);
      }
      _DAT_14cad0f60 = 2;
      if (2 < DAT_14cad0f58 * 2) {
        _DAT_14cad0f60 = DAT_14cad0f58 * 2;
      }
      if ((_DAT_14cad0f60 < iVar3) && (DAT_14cad0f5c != DAT_14cad0f58)) {
        FUN_14045812c(&DAT_14cad0f50);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14342d574 FUN_14342d574 body=112 status=ok
// SIG undefined FUN_14342d574(void)

void FUN_14342d574(longlong *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar1 & 1) != 0) {
      FUN_1400ed49e(param_1);
      return;
    }
    if ((bVar1 & 2) != 0) {
      (**(code **)(*param_1 + 0x328))(param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0x9d);
    }
    if ((bVar1 & 4) != 0) {
      (**(code **)(*param_1 + 0x330))(param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0x9d);
    }
    if ((bVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014342d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x338))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14342d5e4 FUN_14342d5e4 body=24 status=ok
// SIG undefined FUN_14342d5e4(void)

undefined8 FUN_14342d5e4(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 100)) &
            0xffffffffffffff20;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
  }
  return 0;
}



// FUNCTION 14342d600 FUN_14342d600 body=130 status=ok
// SIG undefined FUN_14342d600(void)

void FUN_14342d600(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_1 + 0xb9) == '\x02') {
    cVar2 = (**(code **)(*param_1 + 0x1f8))(param_1);
    if (cVar2 == '\0') {
      lVar3 = FUN_144938c96(param_1);
      plVar1 = (longlong *)param_1[2];
      lVar4 = plVar1[0x22];
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar4 = plVar1[0x22];
      }
      if (lVar3 != lVar4) {
        param_3 = param_3 | 2;
      }
    }
  }
  FUN_142a85ac8(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14342d682 FUN_14342d682 body=55 status=ok
// SIG undefined FUN_14342d682(void)

void FUN_14342d682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad01c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad01c0 = FUN_14171c317(FUN_1463b471f,uVar1,L"ETemperatureSeverityType");
  }
  return;
}



// FUNCTION 14342d6ce FUN_14342d6ce body=848 status=ok
// SIG undefined FUN_14342d6ce(void)

undefined1 (*) [16] FUN_14342d6ce(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar13 = (double)(*(float *)(param_1 + 0x624) * *(float *)(param_1 + 0x628) * 3.0) * 0.5;
  dVar14 = dVar13 + 0.0;
  dVar19 = *param_3;
  dVar8 = param_3[1];
  dVar12 = param_3[2];
  dVar2 = param_3[8];
  dVar6 = param_3[9];
  dVar9 = param_3[10];
  dVar18 = dVar8 + dVar8;
  dVar10 = dVar12 + dVar12;
  dVar7 = dVar19 * (dVar19 + dVar19);
  dVar15 = (1.0 - (dVar12 * dVar10 + dVar8 * dVar18)) * dVar2;
  dVar16 = (1.0 - (dVar12 * dVar10 + dVar7)) * dVar6;
  dVar11 = (1.0 - (dVar7 + dVar8 * dVar18)) * dVar9;
  dVar7 = param_3[3];
  dVar12 = dVar10 * dVar7;
  dVar17 = (dVar19 + dVar19) * param_3[3];
  dVar7 = dVar18 * dVar7;
  dVar3 = (dVar18 * dVar19 + dVar12) * dVar2;
  dVar4 = (dVar10 * dVar8 + dVar17) * dVar6;
  dVar5 = (dVar7 + *param_3 * dVar10) * dVar9;
  dVar2 = (*param_3 * dVar10 - dVar7) * dVar2;
  dVar6 = (dVar18 * dVar19 - dVar12) * dVar6;
  dVar9 = (dVar10 * dVar8 - dVar17) * dVar9;
  dVar18 = ABS(dVar5 * 80.0) + ABS(dVar6 * 80.0) + ABS(dVar13 * dVar15);
  dVar19 = ABS(dVar9 * 80.0) + ABS(dVar16 * 80.0) + ABS(dVar13 * dVar3);
  dVar17 = ABS(dVar11 * 80.0) + ABS(dVar4 * 80.0) + ABS(dVar2 * dVar13);
  dVar7 = dVar5 * dVar5 + dVar6 * dVar6 + dVar15 * dVar15;
  dVar10 = dVar9 * dVar9 + dVar16 * dVar16 + dVar3 * dVar3;
  dVar12 = dVar11 * dVar11 + dVar4 * dVar4 + dVar2 * dVar2;
  if (dVar7 <= dVar10) {
    dVar7 = dVar10;
  }
  if (dVar7 <= dVar12) {
    dVar7 = dVar12;
  }
  dVar12 = param_3[4];
  dVar3 = dVar9 * 0.0 + dVar16 * 0.0 + dVar14 * dVar3 + param_3[5];
  dVar10 = param_3[6];
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  dVar7 = SQRT(dVar13 * dVar13 + 6400.0 + 6400.0) * dVar7;
  dVar8 = SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
  if (dVar8 <= dVar7) {
    dVar7 = dVar8;
  }
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar5 * 0.0 + dVar6 * 0.0 + dVar14 * dVar15 + dVar12;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar1;
  *(double *)param_2[1] = dVar11 * 0.0 + dVar4 * 0.0 + dVar14 * dVar2 + dVar10;
  *(double *)(param_2[1] + 8) = dVar18;
  *(double *)param_2[2] = dVar19;
  *(double *)(param_2[2] + 8) = dVar17;
  *(double *)param_2[3] = dVar7;
  return param_2;
}



// FUNCTION 14342da1e FUN_14342da1e body=55 status=ok
// SIG undefined FUN_14342da1e(void)

void FUN_14342da1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad0288 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad0288 = FUN_14171c317(FUN_1463b4a5e,uVar1,L"EAudioComponentPlayState");
  }
  return;
}



// FUNCTION 14342da55 FUN_14342da55 body=55 status=ok
// SIG undefined FUN_14342da55(void)

void FUN_14342da55(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad02d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad02d8 = FUN_14171c317(FUN_1463b4bda,uVar1,L"EAudioFaderCurve");
  }
  return;
}



// FUNCTION 14342da8c FUN_14342da8c body=265 status=ok
// SIG undefined FUN_14342da8c(void)

void FUN_14342da8c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_458 [32];
  undefined1 local_438 [976];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_458;
  *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) | 0x10;
  FUN_1477db452(param_1 + 0x4e8);
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if (lVar1 != 0) {
      FUN_1478b30d0(local_438,param_2);
      local_68[0] = (undefined1 *)0x0;
      puVar2 = (undefined8 *)FUN_14001cc68(0x3d8,8);
      *puVar2 = &PTR_LAB_14a83c550;
      local_58 = puVar2;
      FUN_1478b30d0(puVar2 + 1,local_438);
      if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_68[0] = &LAB_143473eb4;
      }
      FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8),local_68);
      FUN_1458219bc(local_438);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342db96 FUN_14342db96 body=133 status=ok
// SIG undefined FUN_14342db96(void)

void FUN_14342db96(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14a83c5d0;
    local_58 = &LAB_1434741b6;
    local_30 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342dc1c FUN_14342dc1c body=150 status=ok
// SIG undefined FUN_14342dc1c(void)

void FUN_14342dc1c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_58 = 0;
    local_48 = &PTR_LAB_14a83c610;
    local_68 = &LAB_143474244;
    local_40 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342dcb4 FUN_14342dcb4 body=133 status=ok
// SIG undefined FUN_14342dcb4(void)

void FUN_14342dcb4(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14a83c5b0;
    local_58 = &LAB_14347416a;
    local_30 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342dd3a FUN_14342dd3a body=150 status=ok
// SIG undefined FUN_14342dd3a(void)

void FUN_14342dd3a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_58 = 0;
    local_48 = &PTR_LAB_14a83c5f0;
    local_68 = &LAB_143474202;
    local_40 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342ddd2 FUN_14342ddd2 body=133 status=ok
// SIG undefined FUN_14342ddd2(void)

void FUN_14342ddd2(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14a83c630;
    local_58 = &LAB_143474286;
    local_30 = param_2;
    FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342de58 FUN_14342de58 body=189 status=ok
// SIG undefined FUN_14342de58(void)

void FUN_14342de58(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x492) & 0x10) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x492) = *(byte *)(param_1 + 0x492) & 0xef | param_2 << 4;
    if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
      lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
      if (lVar1 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0xba8);
        local_48 = 0;
        local_38 = &PTR_LAB_14a83c450;
        local_58 = FUN_1434738ec;
        local_30 = lVar1;
        local_20 = param_2;
        FUN_1415826cc();
      }
    }
    FUN_1479bd976(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342df16 FUN_14342df16 body=184 status=ok
// SIG undefined FUN_14342df16(void)

void FUN_14342df16(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x4d0) = param_2;
  *(undefined1 **)(param_1 + 0x4a0) = &DAT_3f8000003f800000;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if (lVar1 != 0) {
      local_58 = 0;
      local_48 = &PTR_LAB_14a83c510;
      local_68 = &LAB_143473e26;
      local_40 = param_2;
      FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342dfd0 FUN_14342dfd0 body=1071 status=ok
// SIG undefined FUN_14342dfd0(void)

void FUN_14342dfd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_208 [40];
  undefined1 local_1e0 [40];
  undefined **local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  undefined1 local_1a0 [16];
  longlong local_190;
  undefined4 local_188;
  uint local_184;
  undefined8 local_180;
  longlong local_170;
  undefined4 local_168;
  longlong local_160;
  longlong local_148;
  undefined1 local_130;
  undefined1 *local_128 [2];
  undefined8 *local_118;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  longlong local_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e8[0] = 2;
  local_d4 = 0;
  local_d0 = 0x3f80000000000000;
  uStack_c8 = 0x447a000042c80000;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x7f7fffff;
  local_54 = 0x404;
  local_c0 = (undefined **)&DAT_14a176f00;
  uStack_40 = 0;
  uStack_3f = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_47 = 0;
  plVar1 = (longlong *)(param_1 + 0x2a8);
  local_e0 = param_2;
  local_d8 = param_3;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(plVar1);
  if (cVar4 == '\0') {
    iVar2 = *(int *)(param_1 + 0xc78);
    *(uint *)(param_1 + 0xc78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xc7c) < iVar2 + 1U) {
      FUN_1478c4260((longlong *)(param_1 + 0xc70),iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0xc70);
    FUN_1477e80e4(lVar5 + (longlong)iVar2 * 0xb8,local_e8);
    *(undefined1 *)(lVar5 + 0xb0 + (longlong)iVar2 * 0xb8) = uStack_3f._7_1_;
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (lVar5 != 0) {
      FUN_1477e80e4(local_1e0,local_e8);
      local_130 = uStack_3f._7_1_;
      local_128[0] = (undefined1 *)0x0;
      puVar6 = (undefined8 *)FUN_14001cc68(0xc0,8);
      *puVar6 = &PTR_LAB_14a83c570;
      local_118 = puVar6;
      FUN_1479d7baa(puVar6 + 1,local_1e0);
      *(undefined1 *)(puVar6 + 0x17) = local_130;
      if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_128[0] = &LAB_143473f22;
      }
      FUN_147962214(lVar5,*(undefined8 *)(param_1 + 0xba8),local_128);
      local_1b8 = (undefined **)&DAT_14a176f00;
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      local_1b8 = &PTR_FUN_14a177080;
      if (local_160 != 0) {
        FUN_1400020a8();
      }
      local_168 = 0;
      if (local_170 != 0) {
        FUN_1400020a8();
      }
      local_1a8 = 0;
      if (local_1a4 != 0) {
        FUN_14472eb64(&local_1b0,0);
      }
      local_180 = 0xffffffff;
      local_188 = 0;
      if (0x80 < local_184) {
        local_184 = 0x80;
        FUN_1446efbd8(local_1a0,0);
      }
      if (local_190 != 0) {
        FUN_1400020a8();
      }
      if (local_1b0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_c0 = (undefined **)&DAT_14a176f00;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_c0 = &PTR_FUN_14a177080;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342e400 FUN_14342e400 body=163 status=ok
// SIG undefined FUN_14342e400(void)

void FUN_14342e400(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  char local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) & 0xbf | param_2 << 6;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if (lVar1 != 0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a83c530;
      local_58 = &LAB_143473e68;
      local_30 = param_2;
      FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342e4a4 FUN_14342e4a4 body=184 status=ok
// SIG undefined FUN_14342e4a4(void)

void FUN_14342e4a4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x4b0) = param_2;
  *(undefined1 **)(param_1 + 0x4a8) = &DAT_3f8000003f800000;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if (lVar1 != 0) {
      local_58 = 0;
      local_48 = &PTR_LAB_14a83c4f0;
      local_68 = &LAB_143473de4;
      local_40 = param_2;
      FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342e55e FUN_14342e55e body=212 status=ok
// SIG undefined FUN_14342e55e(void)

void FUN_14342e55e(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  float local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0.0 <= param_2) {
    if (1e-08 < ABS(param_2)) {
      if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
        lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
        if (lVar1 != 0) {
          local_68 = 0;
          local_58 = &PTR_LAB_14a83c430;
          local_78 = &LAB_14347385c;
          local_50 = param_2;
          FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8));
        }
      }
      if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 14342e64e FUN_14342e64e body=69 status=ok
// SIG undefined FUN_14342e64e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342e64e(void)

{
  _DAT_14cad0490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342e690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0498,1);
  return;
}



// FUNCTION 14342e693 FUN_14342e693 body=69 status=ok
// SIG undefined FUN_14342e693(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342e693(void)

{
  _DAT_14cad04a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342e6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad04b0,1);
  return;
}



// FUNCTION 14342e6d8 FUN_14342e6d8 body=69 status=ok
// SIG undefined FUN_14342e6d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342e6d8(void)

{
  _DAT_14cad04c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342e71a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad04c8,1);
  return;
}



// FUNCTION 14342e71d FUN_14342e71d body=69 status=ok
// SIG undefined FUN_14342e71d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342e71d(void)

{
  _DAT_14cad04d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342e75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad04d8,1);
  return;
}



// FUNCTION 14342e762 FUN_14342e762 body=69 status=ok
// SIG undefined FUN_14342e762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342e762(void)

{
  _DAT_14cad04e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014342e7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad04e8,1);
  return;
}



// FUNCTION 14342e7a7 FUN_14342e7a7 body=41 status=ok
// SIG undefined FUN_14342e7a7(void)

void FUN_14342e7a7(void)

{
  DAT_14cad0548 = 0;
  if (DAT_14cad0540 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6309e();
  return;
}



// FUNCTION 14342e7de FUN_14342e7de body=123 status=ok
// SIG undefined FUN_14342e7de(void)

void FUN_14342e7de(longlong *param_1)

{
  char cVar1;
  
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) &&
     ((longlong *)param_1[0x8c] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x8c] + 0x300))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  (**(code **)(param_1[0x55] + 0x10))(param_1 + 0x55);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  FUN_145bf6f2c(param_1[0x175]);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad0550);
  FUN_1400f7f98(param_1);
  return;
}



// FUNCTION 14342e85a FUN_14342e85a body=259 status=ok
// SIG undefined FUN_14342e85a(void)

void FUN_14342e85a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [12];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 0x491) & 0x20) == 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x9e) & 0x10) != 0)) {
      puVar3 = (undefined8 *)(param_1 + 0x240);
      puVar4 = local_d8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_78[0] = (code *)0x0;
      local_68 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *local_68 = &PTR_LAB_14a83c3f0;
      puVar3 = local_d8;
      puVar4 = local_68 + 2;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (local_68 + 2 != (undefined8 *)0x0) {
        local_78[0] = FUN_14347369a;
      }
      FUN_147962214(lVar1,*(undefined8 *)(param_1 + 0xba8),local_78);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342e95e FUN_14342e95e body=4473 status=ok
// SIG undefined FUN_14342e95e(void)

void FUN_14342e95e(longlong *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  double *pdVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined4 **ppuVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 *puVar23;
  byte bVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 *puVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_ae8 [32];
  longlong *local_ac8;
  undefined4 *local_ac0;
  float *local_ab8;
  undefined8 local_ab0;
  wchar_t *local_aa8;
  code *local_aa0;
  undefined1 *local_a98;
  code **local_a90;
  code *local_a88;
  code *local_a80;
  float *local_a70;
  undefined4 local_a64;
  longlong local_a60;
  longlong local_a58;
  longlong local_a50;
  undefined4 local_a44;
  longlong local_a40;
  ulonglong local_a38;
  undefined4 local_a30;
  longlong local_a28;
  undefined8 uStack_a20;
  longlong local_a10;
  longlong local_a08;
  longlong lStack_a00;
  longlong local_9f8;
  float local_9f0;
  undefined4 local_9ec;
  undefined4 *local_9e8;
  longlong *plStack_9e0;
  undefined1 local_9cc [4];
  code *local_9c8;
  undefined8 local_9c0;
  undefined4 local_9b8;
  longlong *local_9b0;
  longlong local_9a8;
  longlong local_9a0;
  longlong local_998;
  longlong local_990;
  undefined4 local_988;
  longlong local_984;
  undefined8 local_97c;
  undefined4 local_974;
  undefined1 local_918 [232];
  byte local_830;
  byte local_82f;
  byte local_82e;
  byte local_82d;
  byte local_82c;
  float local_814;
  float local_810;
  float local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined8 local_800;
  undefined8 local_7f4;
  undefined1 local_7ec;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_79c;
  longlong local_798 [14];
  float local_728;
  undefined1 local_330 [208];
  int local_260;
  int local_25c;
  undefined1 local_1e0 [352];
  undefined4 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  lVar8 = param_1[0x16];
  lVar9 = lVar8;
  if (lVar8 == 0) {
    if (((param_1[0x15] == 0) || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
       (lVar8 = FUN_1447210f0(), lVar8 == 0)) {
      lVar8 = param_1[4];
      if (lVar8 != 0) {
        if (DAT_14cb10130 == 0) {
          local_a90 = &local_9c8;
          local_9c8 = FUN_140754f84;
          local_a80 = FUN_14081d0ea;
          local_a88 = FUN_14081d0ea;
          local_a98 = &LAB_147da9a76;
          local_aa0 = FUN_1409f3105;
          local_aa8 = L"Engine";
          local_ab0 = 0;
          local_ab8 = (float *)CONCAT44(local_ab8._4_4_,0x10000000);
          local_ac0 = (undefined4 *)CONCAT44(local_ac0._4_4_,8);
          local_ac8 = (longlong *)CONCAT44(local_ac8._4_4_,0x990);
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
        goto LAB_14342e9cc;
      }
      lVar8 = 0;
    }
LAB_14342e9cc:
    lVar9 = param_1[0x16];
    if ((lVar9 != 0) ||
       (((param_1[0x15] != 0 && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) &&
        (lVar9 = FUN_1447210f0(), lVar9 != 0)))) goto LAB_14342ea04;
    lVar9 = param_1[4];
    if (lVar9 != 0) {
      if (DAT_14cb10130 == 0) {
        local_a90 = &local_9c8;
        local_9c8 = FUN_140754f84;
        local_a80 = FUN_14081d0ea;
        local_a88 = FUN_14081d0ea;
        local_a98 = &LAB_147da9a76;
        local_aa0 = FUN_1409f3105;
        local_aa8 = L"Engine";
        local_ab0 = 0;
        local_ab8 = (float *)CONCAT44(local_ab8._4_4_,0x10000000);
        local_ac0 = (undefined4 *)CONCAT44(local_ac0._4_4_,8);
        local_ac8 = (longlong *)CONCAT44(local_ac8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_14342ea04;
    }
    if (DAT_14cad04f0 != 0) {
      pdVar14 = (double *)&DAT_14c866ff8;
      goto LAB_14342ea0b;
    }
    fVar31 = 0.0;
  }
  else {
LAB_14342ea04:
    pdVar14 = (double *)(lVar9 + 0x6e8);
LAB_14342ea0b:
    fVar31 = (float)*pdVar14;
  }
  plVar25 = (longlong *)param_1[0x8c];
  *(byte *)((longlong)param_1 + 0x492) = *(byte *)((longlong)param_1 + 0x492) & 0xbf;
  if (plVar25 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar25 + 0x300))(plVar25);
  }
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) &&
     ((byte)(~(byte)uVar5 & (*(byte *)((longlong)param_1 + 0x491) & 8) >> 3) == 0)) {
    bVar3 = *(byte *)(param_1 + 0x92);
    *(byte *)(param_1 + 0x92) = bVar3 & 0xfe;
    (**(code **)(*param_1 + 0x600))(param_1);
    *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xfe | bVar3 & 1;
  }
  if ((plVar25 == (longlong *)0x0) ||
     (((lVar8 != 0 && ((*(byte *)(lVar8 + 0x156) & 2) == 0)) ||
      (lVar9 = (**(code **)(param_1[0x55] + 0x88))(param_1 + 0x55), lVar9 == 0))))
  goto LAB_14342eab3;
  bVar3 = *(byte *)((longlong)param_1 + 0x493);
  bVar2 = bVar3 & 0xfe;
  *(float *)((longlong)param_1 + 0x914) = fVar31;
  *(float *)(param_1 + 0x123) = param_2[1];
  *(byte *)((longlong)param_1 + 0x493) = bVar2;
  if (((lVar8 != 0) && (*(char *)((longlong)param_1 + 0x492) < '\0')) &&
     ((bVar24 = *(byte *)(lVar8 + 0x152), bVar24 == 1 ||
      ((bVar24 < 7 && ((0x68U >> (bVar24 & 0x1f) & 1) != 0)))))) {
    if (((*(int *)((longlong)param_1 + 0xb9c) == 0) ||
        ((((uVar7 = *(uint *)(param_1 + 0x173), (int)uVar7 < 0 || (DAT_14c9647dc <= (int)uVar7)) ||
          (plVar21 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
          plVar21 == (longlong *)0x0)) ||
         (((int)plVar21[2] != *(int *)((longlong)param_1 + 0xb9c) ||
          ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))))) || (lVar26 = *plVar21, lVar26 == 0)) {
      FUN_1479bda9e(param_1,lVar8);
    }
    else {
      lVar27 = param_1[0x24];
      if (((lVar27 == lVar26) && (param_1[0x25] == param_1[0x174])) &&
         ((longlong)*(int *)(lVar27 + 0x140) != 0)) {
        lVar22 = 0;
        do {
          if (*(longlong **)(*(longlong *)(lVar27 + 0x138) + lVar22) == param_1) goto LAB_14342ed1b;
          lVar22 = lVar22 + 8;
        } while ((longlong)*(int *)(lVar27 + 0x140) * 8 != lVar22);
      }
      *(byte *)((longlong)param_1 + 0x493) = bVar3;
      FUN_1479bda9e(param_1,lVar8);
      param_1[0x17a] = param_1[0x35];
      param_1[0x178] = param_1[0x33];
      param_1[0x179] = param_1[0x34];
      param_1[0x17b] = param_1[0x36];
      param_1[0x17c] = param_1[0x37];
      param_1[0x17d] = param_1[0x38];
      *(int *)(param_1 + 0x17e) = (int)param_1[0x39];
      *(undefined4 *)((longlong)param_1 + 0xbf4) = *(undefined4 *)((longlong)param_1 + 0x1cc);
      *(int *)(param_1 + 0x17f) = (int)param_1[0x3a];
      *(undefined4 *)((longlong)param_1 + 0xbfc) = *(undefined4 *)((longlong)param_1 + 0x1d4);
      param_1[0x180] = param_1[0x3b];
      local_9c8._0_4_ = (uint)*(uint3 *)((longlong)param_1 + 0x91c);
      (**(code **)(*param_1 + 0x490))(param_1,lVar26,&local_9c8,param_1[0x174]);
      bVar2 = *(byte *)((longlong)param_1 + 0x493);
LAB_14342ed1b:
      *(byte *)((longlong)param_1 + 0x493) = bVar2 | 1;
    }
  }
  if ((*(byte *)(param_1 + 0x92) & 8) == 0) {
LAB_14342ed2d:
    plVar21 = (longlong *)0x0;
  }
  else if ((*(byte *)(param_1 + 0x92) & 0x10) == 0) {
    if (param_1[0x9c] == 0) {
      if ((longlong *)param_1[0x8c] == (longlong *)0x0) goto LAB_14342ed2d;
      plVar21 = (longlong *)(**(code **)(*(longlong *)param_1[0x8c] + 0x2b8))();
    }
    else {
      plVar21 = (longlong *)(param_1[0x9c] + 0x28);
    }
  }
  else {
    plVar21 = param_1 + 0x9d;
  }
  local_ac0 = &local_9ec;
  local_9ec = 0;
  local_ab8 = &local_9f0;
  local_9f0 = 1.0;
  local_a08 = param_1[0x4c];
  lStack_a00 = param_1[0x4d];
  local_9f8 = param_1[0x4e];
  local_ac8 = plVar21;
  FUN_14340685c(lVar9,plVar25,lVar8);
  FUN_1478b27ac(&local_9c8);
  lVar26 = param_1[0x15];
  local_998 = param_1[0x175];
  local_990 = param_1[0x93];
  local_984 = param_1[3];
  if (lVar26 == 0) {
    local_988 = 0;
    local_97c = 0;
  }
  else {
    local_988 = *(undefined4 *)(lVar26 + 0xc);
    local_97c = *(undefined8 *)(lVar26 + 0x18);
  }
  if (lVar8 == 0) {
    local_9c0 = 0;
    local_9b8 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar8 + 0xc);
    local_9c0 = CONCAT44(local_9c0._4_4_,uVar7);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar26 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar26 = 0;
    }
    iVar6 = *(int *)(lVar26 + 0x10);
    if (*(int *)(lVar26 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar29) {
        local_a70 = (float *)CONCAT44(local_a70._4_4_,iVar20);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
        iVar20 = (int)local_a70;
      }
      LOCK();
      iVar6 = *(int *)(lVar26 + 0x10);
      bVar29 = iVar6 == 0;
      if (bVar29) {
        *(int *)(lVar26 + 0x10) = iVar20;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar29) {
        iVar6 = iVar20;
      }
    }
    local_9c0 = CONCAT44(iVar6,(undefined4)local_9c0);
    local_9b8 = *(undefined4 *)(lVar8 + 0xc);
  }
  FUN_1478b3c62(&local_9c8,plVar25);
  local_9a8 = param_1[0x99];
  if ((local_9a8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_9a8);
  }
  FUN_1478b3cce(&local_9c8,param_1[0x91]);
  FUN_1479be27c(param_1,&local_a10);
  if (DAT_14c950c29 == '\x01') {
    if (local_a10 == 0) {
      local_a10 = 0;
    }
    else {
      FUN_1456cec3c(local_a10);
    }
  }
  local_82c = local_82c & 0x7f | (*(byte *)(param_1 + 0x92) & 0x10) << 3;
  local_9a0 = local_a10;
  FUN_1477db3d8(local_918,param_1 + 0x118);
  iVar6 = *(int *)((longlong)param_1 + 0xc94);
  uVar7 = iVar6 * 0xbb38435 + 0x3619636b;
  *(uint *)((longlong)param_1 + 0xc94) = uVar7;
  local_810 = (((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
               (*(float *)(param_1 + 0x95) - *(float *)((longlong)param_1 + 0x4ac)) +
              *(float *)((longlong)param_1 + 0x4ac)) * *(float *)(param_1 + 0x96);
  bVar3 = *(byte *)((longlong)param_1 + 0x491);
  puVar23 = (undefined4 *)((longlong)param_1 + 0x4bc);
  if ((bVar3 & 2) == 0) {
    puVar23 = (undefined4 *)((longlong)plVar25 + 0x10c);
  }
  local_7ac = *puVar23;
  uVar7 = iVar6 * -0x4b9b4d07 + 0x9d6f2492;
  *(uint *)((longlong)param_1 + 0xc94) = uVar7;
  local_80c = (((float)(uVar7 >> 9 | 0x3f800000) + -1.0) *
               (*(float *)(param_1 + 0x94) - *(float *)((longlong)param_1 + 0x4a4)) +
              *(float *)((longlong)param_1 + 0x4a4)) * *(float *)(param_1 + 0x9a);
  uVar16 = CONCAT71((int7)((ulonglong)((longlong)plVar25 + 0x10c) >> 8),*(byte *)(param_1 + 0x92));
  local_808 = *(undefined4 *)((longlong)param_1 + 0x4d4);
  local_82e = bVar3 << 7 | local_82e & 0x3f | (byte)((uVar16 & 0xffffffff) >> 1) & 0x40;
  local_804 = (undefined4)param_1[0x9b];
  local_814 = 0.0;
  if (0.0 <= *param_2) {
    local_814 = *param_2;
  }
  if ((*(byte *)(param_1 + 0x92) & 0x20) == 0) {
    local_7b0 = (**(code **)(*plVar25 + 0x2e8))(plVar25);
    uVar16 = CONCAT71((int7)(uVar16 >> 8),(char)param_1[0x92]);
    bVar3 = *(byte *)((longlong)param_1 + 0x491);
  }
  else {
    local_7b0 = (undefined4)param_1[0x98];
  }
  bVar2 = (char)uVar16 * '\x02';
  local_830 = local_830 & 0xf7 | bVar2 & 8;
  bVar24 = 4;
  if ((bVar3 & 4) != 0) {
    if ((param_1[0x170] == 0) || (*(int *)((longlong)param_1 + 0xb7c) == 0)) {
LAB_14342f898:
      bVar24 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x16f);
      bVar24 = 0;
      if ((-1 < (int)uVar7) && (bVar24 = 0, (int)uVar7 < DAT_14c9647dc)) {
        plVar25 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((((plVar25 == (longlong *)0x0) ||
             ((int)plVar25[2] != *(int *)((longlong)param_1 + 0xb7c))) ||
            ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)) || (*plVar25 == 0)) goto LAB_14342f898;
        uVar19 = 0;
        lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar25 + 0x10),param_1[0x170],1);
        bVar24 = (lVar8 != 0) << 2;
        uVar16 = CONCAT71((int7)((ulonglong)uVar19 >> 8),(char)param_1[0x92]);
        bVar3 = *(byte *)((longlong)param_1 + 0x491);
        bVar2 = (char)param_1[0x92] * '\x02';
      }
    }
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x492);
  local_82e = bVar1 & 0xf | local_82e & 0xf0;
  local_82f = (bVar3 >> 1 & 0x50 | bVar2 & 0x80 | bVar3 >> 1 & 0x20 | local_82f & 0xb | bVar24) ^
              0x10;
  if ((bVar3 & 0x20) == 0) {
    plVar25 = param_1 + 0x48;
    plVar15 = local_798;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar15 = *plVar25;
      plVar25 = plVar25 + 1;
      plVar15 = plVar15 + 1;
    }
  }
  ppuVar17 = (undefined4 **)(CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 >> 2) & 0xffffffffffffff02);
  local_830 = (plVar21 != (longlong *)0x0) << 2 | (byte)ppuVar17 | bVar1 * '\x02' & 0x20 |
              local_830 & 0xd9;
  if (plVar21 != (longlong *)0x0) {
    FUN_1477db452();
    fVar31 = local_9f0;
    bVar3 = FUN_146269f19();
    lVar8 = (ulonglong)(bVar3 ^ 1) * 0x20;
    fVar30 = *(float *)(lVar9 + 0x1a8 + lVar8) * *(float *)((longlong)plVar21 + 0x224);
    fVar30 = (*(float *)(lVar9 + 0x1ac + lVar8) * *(float *)(plVar21 + 0x45) - fVar30) * fVar31 +
             fVar30;
    local_728 = 0.0;
    if (0.0 <= fVar30) {
      local_728 = fVar30;
    }
  }
  local_260 = *(int *)((longlong)param_1 + 0x4b4);
  if (local_260 < 1) {
    local_260 = 0;
  }
  local_25c = 0;
  if (0 < (int)param_1[0x97]) {
    local_25c = (int)param_1[0x97];
  }
  if ((longlong)(int)param_1[0x163] != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(param_1[0x162] + 8 + lVar8) != 0) &&
         (*(longlong *)(param_1[0x162] + lVar8) != 0)) {
        bVar29 = true;
        goto LAB_14342f2ce;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)param_1[0x163] * 0x10 != lVar8);
  }
  bVar29 = 0 < (int)param_1[0x161];
LAB_14342f2ce:
  bVar3 = 2;
  if ((int)param_1[0x166] < 1) {
    if ((longlong)(int)param_1[0x168] != 0) {
      ppuVar17 = (undefined4 **)param_1[0x167];
      lVar8 = 0;
      do {
        if ((*(int *)((longlong)ppuVar17 + lVar8 + 8) != 0) &&
           (*(longlong *)((longlong)ppuVar17 + lVar8) != 0)) goto LAB_14342f31f;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)param_1[0x168] * 0x10 != lVar8);
    }
    bVar3 = 0;
  }
LAB_14342f31f:
  bVar2 = 4;
  if ((int)param_1[0x16b] < 1) {
    if ((longlong)(int)param_1[0x16d] != 0) {
      ppuVar17 = (undefined4 **)param_1[0x16c];
      lVar8 = 0;
      do {
        if ((*(int *)((longlong)ppuVar17 + lVar8 + 8) != 0) &&
           (*(longlong *)((longlong)ppuVar17 + lVar8) != 0)) goto LAB_14342f369;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)param_1[0x16d] * 0x10 != lVar8);
    }
    bVar2 = 0;
  }
LAB_14342f369:
  local_82d = local_82d & 0xf8 | bVar29 | bVar3 | bVar2;
  FUN_1477e8570(local_1e0,param_1 + 0x124);
  local_80 = (undefined4)param_1[0x150];
  if ((*(byte *)(lVar9 + 0x592) & 0x10) != 0) {
    local_a28 = 0;
    uStack_a20 = 0;
    local_a70 = param_2;
    cVar4 = (**(code **)(*(longlong *)param_1[0x8c] + 0x328))((longlong *)param_1[0x8c],&local_a28);
    local_82d = local_82d & 0xf7 | cVar4 << 3;
    FUN_1479d73c0(param_1 + 0x181);
    lVar8 = local_a28;
    lVar26 = (longlong)(int)uStack_a20;
    if (lVar26 != 0) {
      lVar27 = 0;
      local_a64 = uVar5;
      local_a60 = lVar9;
      do {
        local_a40 = *(longlong *)(lVar8 + lVar27);
        local_a38 = 0xffffffff00000000;
        local_a30 = 0xffffffff;
        local_a44 = *(undefined4 *)(local_a40 + 0xc);
        local_9e8 = &local_a44;
        ppuVar17 = &local_9e8;
        plStack_9e0 = &local_a40;
        FUN_1479d7548(param_1 + 0x181,local_9cc,&local_9e8);
        lVar27 = lVar27 + 8;
        lVar9 = local_a60;
        uVar5 = local_a64;
      } while (lVar26 * 8 != lVar27);
    }
    param_2 = local_a70;
    if (local_a28 != 0) {
      FUN_1400020a8(local_a28);
    }
  }
  FUN_1477c10dc(local_330,param_2 + 4);
  puVar18 = (undefined1 *)CONCAT71((int7)((ulonglong)ppuVar17 >> 8),(char)param_1[0x18d]);
  local_a58 = param_1[0x18b];
  local_a50 = param_1[0x18c];
  if (local_a50 != 0) {
    LOCK();
    *(int *)(local_a50 + 8) = *(int *)(local_a50 + 8) + 1;
    UNLOCK();
  }
  FUN_1479be2de(&local_9c8,&local_a58,puVar18);
  local_79c = local_9ec;
  lVar8 = param_1[0x18e];
  uVar12 = 0;
  if ((longlong)(int)param_1[399] != 0) {
    lVar26 = (longlong)(int)param_1[399] * 0xb8;
    do {
      FUN_1478b3fae(&local_9c8,lVar8);
      lVar8 = lVar8 + 0xb8;
      lVar26 = lVar26 + -0xb8;
    } while (lVar26 != 0);
    uVar12 = (undefined4)param_1[399];
    lVar8 = param_1[0x18e];
  }
  iVar6 = *(int *)((longlong)param_1 + 0xc7c);
  FUN_1458793b1(lVar8,uVar12);
  *(undefined4 *)(param_1 + 399) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0xc7c) != 0)) {
    FUN_1479d79f6(param_1 + 0x18e);
  }
  puVar13 = (undefined1 *)param_1[400];
  uVar12 = 0;
  if ((longlong)(int)param_1[0x191] != 0) {
    puVar28 = puVar13 + (longlong)(int)param_1[0x191] * 0xc0;
    do {
      puVar18 = puVar13 + 8;
      FUN_1478b4088(&local_9c8,*puVar13,puVar18);
      puVar13 = puVar13 + 0xc0;
    } while (puVar13 != puVar28);
    uVar12 = (undefined4)param_1[0x191];
    puVar13 = (undefined1 *)param_1[400];
  }
  iVar6 = *(int *)((longlong)param_1 + 0xc8c);
  FUN_145aa5580(puVar13,uVar12);
  *(undefined4 *)(param_1 + 0x191) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0xc8c) != 0)) {
    FUN_1479d7a26(param_1 + 400);
  }
  local_800 = 0;
  local_7ec = 0;
  local_7f4 = 0xbf800000;
  FUN_147041432(&local_800,param_2[2]);
  *(int *)((longlong)param_1 + 0x4dc) = *(int *)((longlong)param_1 + 0x4dc) + 1;
  if ((char)uVar5 == '\0') {
    uVar16 = CONCAT71((int7)((ulonglong)puVar18 >> 8),*(undefined1 *)((longlong)param_1 + 0x491)) &
             0xffffffffffffff08;
    uVar19 = CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 >> 3);
  }
  else {
    uVar19 = 0;
  }
  FUN_1479625ee(lVar9,param_1[0x175],uVar19);
  local_a40 = 0;
  iVar6 = (int)param_1[0x8e];
  lVar8 = param_1[0x8d];
  local_a38 = CONCAT44(local_a38._4_4_,iVar6);
  if (iVar6 == 0) {
    local_a38 = 0;
  }
  else {
    FUN_1477cf956(&local_a40,iVar6,0);
    FUN_1477cf9c9(local_a40,lVar8,iVar6);
  }
  if (param_1[0x15] != 0) {
    local_9e8 = (undefined4 *)0x0;
    plStack_9e0 = (longlong *)0x0;
    FUN_147979cbe(param_1[0x15],&local_9e8);
    FUN_1470429a6(&local_9e8,&local_a40);
    FUN_145aa5488(local_9e8,(ulonglong)plStack_9e0 & 0xffffffff);
    if (local_9e8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_9e8 = (undefined4 *)0x0;
  iVar6 = (int)param_1[0x90];
  lVar8 = param_1[0x8f];
  plStack_9e0 = (longlong *)CONCAT44(plStack_9e0._4_4_,iVar6);
  if (iVar6 == 0) {
    plStack_9e0 = (longlong *)0x0;
  }
  else {
    FUN_1477cf956(&local_9e8,iVar6,0);
    FUN_1477cf9c9(local_9e8,lVar8,iVar6);
  }
  FUN_1470429a6(&local_9e8,&local_a40);
  if (local_9b0 != (longlong *)0x0) {
    (**(code **)(*local_9b0 + 0x348))();
  }
  FUN_143406258(lVar9,&local_9c8,&local_a40,0);
  *(undefined4 *)(param_1 + 0x176) = local_974;
  *(byte *)((longlong)param_1 + 0x9e) =
       *(byte *)((longlong)param_1 + 0x9e) & 0xef | (0 < *(int *)((longlong)param_1 + 0x4dc)) << 4;
  uVar16 = param_1[7];
  if (uVar16 < 0xffffffff00000000) {
    plVar25 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar25 = (longlong *)0x0;
    }
    (**(code **)(*plVar25 + 0x58))(plVar25,param_1,uVar16,1);
  }
  else {
    uVar7 = (uint)uVar16;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar10 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar10 = DAT_14c998080;
      }
      if ((*(uint *)(puVar10 + ((uint)(uVar16 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar11 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar11 = (uint *)(lVar8 + 8);
        }
        *puVar11 = *puVar11 | 2;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  FUN_1479bd976(param_1);
  FUN_145aa5488(local_9e8,(ulonglong)plStack_9e0 & 0xffffffff);
  if (local_9e8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145aa5488(local_a40,local_a38 & 0xffffffff);
  if (local_a40 != 0) {
    FUN_1400020a8();
  }
  FUN_1478b3298(&local_9c8);
LAB_14342eab3:
  if ((local_60 ^ (ulonglong)auStack_ae8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14342fad8 FUN_14342fad8 body=791 status=ok
// SIG undefined FUN_14342fad8(void)

/* WARNING: Removing unreachable block (ram,0x00014342fdb3) */
/* WARNING: Removing unreachable block (ram,0x00014342fdbb) */
/* WARNING: Removing unreachable block (ram,0x00014342fdcc) */

void FUN_14342fad8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0xb90);
  lVar8 = uVar9 * 0x50 + 0x20;
  do {
    if ((int)uVar9 < 1) goto LAB_14342fcb5;
    lVar4 = *(longlong *)(param_1 + 0xb88);
    piVar2 = (int *)(lVar4 + -0x30 + lVar8);
    uVar9 = (ulonglong)((int)uVar9 - 1);
    lVar8 = lVar8 + -0x50;
  } while (*piVar2 != *(int *)(param_3 + 0x60));
  iVar3 = *(int *)(lVar4 + 0x28 + lVar8);
  if (iVar3 == 0) {
LAB_14342fde8:
    lVar11 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar4 + 0x24 + lVar8);
    lVar11 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar3 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_14342fde8;
      lVar11 = *plVar10;
    }
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0x11;
  local_d4 = 0x1003f800000;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  local_108 = *(undefined4 *)(lVar4 + 0x10 + lVar8);
  local_104 = *(undefined4 *)(lVar4 + 0x14 + lVar8);
  local_100 = *(undefined4 *)(lVar4 + 0x18 + lVar8);
  local_fc = *(undefined1 *)(lVar4 + 0x1c + lVar8);
  if (*(longlong *)(param_1 + 0x460) != 0) {
    if (lVar11 == 0) {
      if (*(char *)(lVar4 + 0x2c + lVar8) != '\x01') goto LAB_14342fca3;
    }
    else {
      local_110 = param_1 + 0x2b0;
      FUN_1477e2d2e(&local_a0,lVar11,lVar4 + lVar8,lVar4 + lVar8 + -0x20);
      FUN_1479be1de(&local_f8,&local_a0);
      FUN_1477c9968(&local_a0);
      FUN_147abf486(*(undefined8 *)(param_1 + 0x460));
      cVar6 = FUN_1477ddcc2(lVar11 + 0x1d8);
      if (*(char *)(lVar4 + lVar8 + 0x2c) != '\x01') {
        if (cVar6 != '\0') {
          FUN_1461d2b9a(local_110,&local_a0);
          uVar5 = uStack_b0;
          lVar8 = (longlong)(int)uStack_b0;
          uVar7 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
          if (uStack_b0._4_4_ < uVar7) {
            FUN_1477edebc(&local_b8,uVar5 & 0xffffffff);
          }
          puVar1 = (undefined8 *)(local_b8 + lVar8 * 0x40);
          *(char *)(local_b8 + 8 + lVar8 * 0x40) = local_98;
          if (local_98 == '\x01') {
            *puVar1 = local_a0;
          }
          *(char *)(puVar1 + 4) = local_80;
          if (local_80 == '\x01') {
            puVar1[2] = local_90;
            puVar1[3] = uStack_88;
          }
          puVar1[5] = local_78;
          puVar1[6] = uStack_70;
          puVar1[7] = local_68;
          uStack_70 = 0;
          local_78 = 0;
          FUN_14342e95e(param_1,&local_108);
        }
        goto LAB_14342fca3;
      }
    }
    FUN_1433b3ecc(local_e8,&local_f8);
  }
LAB_14342fca3:
  FUN_1479d733c((longlong *)(param_1 + 0xb88),uVar9);
  FUN_1477c9968(&local_f8);
LAB_14342fcb5:
  FUN_1477e8fa4(param_3);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342fdf0 FUN_14342fdf0 body=408 status=ok
// SIG undefined FUN_14342fdf0(void)

void FUN_14342fdf0(longlong param_1,float param_2,float param_3,byte param_4,undefined1 param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  byte local_90;
  float local_8c;
  float local_88;
  undefined1 local_84;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))(param_1 + 0x2a8);
    if (lVar3 != 0) {
      if ((ABS(param_2) <= 1e-08 || param_2 < 0.0) && (ABS(param_3) <= 1e-08 || param_3 < 0.0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
      }
      fVar5 = 0.0;
      if (0.0 <= param_2) {
        fVar5 = param_2;
      }
      fVar4 = 0.0;
      if (0.0 <= param_3) {
        fVar4 = param_3;
      }
      bVar1 = *(byte *)(param_1 + 0x492);
      bVar2 = (ABS(param_3) <= 1e-08 || param_3 < 0.0) | param_4;
      *(byte *)(param_1 + 0x492) = bVar1 & 0xbf | bVar2 << 6;
      if ((bVar1 >> 6 & 1) != bVar2) {
        FUN_1479bd976(param_1);
      }
      local_a8 = 0;
      local_98 = &PTR_LAB_14a83c410;
      local_84 = param_5;
      local_b8 = FUN_1434736f8;
      local_90 = param_4;
      local_8c = fVar4;
      local_88 = fVar5;
      FUN_147962214(lVar3,*(undefined8 *)(param_1 + 0xba8));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14342ffc0 FUN_14342ffc0 body=1497 status=ok
// SIG undefined FUN_14342ffc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342ffc0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined *puVar20;
  uint *puVar21;
  longlong *plVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar46 [16];
  
  auVar14 = _DAT_149931e80;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
    if ((longlong)*(int *)(param_1 + 0xb90) != 0) {
      uVar15 = (longlong)*(int *)(param_1 + 0xb90) * 0x50 - 0x50;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar15;
      uVar24 = SUB164(auVar27 * ZEXT816(0xcccccccccccccccd),8);
      uVar26 = (undefined4)(uVar15 / 0x140000000);
      auVar28._0_8_ = CONCAT44(uVar26,uVar24);
      auVar28._8_4_ = uVar24;
      auVar28._12_4_ = uVar26;
      auVar25._0_8_ = auVar28._0_8_ >> 6;
      auVar25._8_8_ = auVar28._8_8_ >> 6;
      puVar16 = (undefined1 *)(*(longlong *)(param_1 + 0xb88) + 0x4fc);
      uVar19 = 0;
      auVar27 = pmovsxbq(in_XMM1,0xf0e);
      auVar28 = pmovsxbq(in_XMM2,0xd0c);
      auVar29 = pmovsxbq(in_XMM3,0xb0a);
      auVar30 = pmovsxbq(in_XMM4,0x908);
      auVar31 = pmovsxbq(in_XMM5,0x706);
      auVar32 = pmovsxbq(unaff_XMM6,0x504);
      auVar33 = pmovsxbq(unaff_XMM7,0x302);
      auVar34 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar35._8_4_ = (int)uVar19;
        auVar35._0_8_ = uVar19;
        auVar35._12_4_ = (int)(uVar19 >> 0x20);
        auVar37 = auVar25 | auVar14;
        auVar38 = (auVar35 | auVar34) ^ auVar14;
        lVar17 = auVar37._0_8_;
        auVar39._0_8_ = -(ulonglong)(lVar17 < auVar38._0_8_);
        lVar18 = auVar37._8_8_;
        auVar39._8_8_ = -(ulonglong)(lVar18 < auVar38._8_8_);
        auVar46 = pshuflw(unaff_XMM14,auVar39,0xe8);
        auVar38._8_4_ = 0xffffffff;
        auVar38._0_8_ = 0xffffffffffffffff;
        auVar38._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar46 ^ auVar38,auVar46 ^ auVar38);
        if ((auVar38._0_4_ & 1) != 0) {
          puVar16[-0x4b0] = 1;
        }
        auVar39 = packssdw(auVar39,auVar39);
        auVar46._8_4_ = 0xffffffff;
        auVar46._0_8_ = 0xffffffffffffffff;
        auVar46._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar46,auVar39 ^ auVar46);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[1] & 1) != 0) {
          puVar16[-0x460] = 1;
        }
        auVar39 = (auVar35 | auVar33) ^ auVar14;
        auVar40._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar40._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = packssdw(auVar38,auVar40);
        auVar1._8_4_ = 0xffffffff;
        auVar1._0_8_ = 0xffffffffffffffff;
        auVar1._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar1,auVar38 ^ auVar1);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[2] & 1) != 0) {
          puVar16[-0x410] = 1;
        }
        auVar39 = pshufhw(auVar40,auVar40,0x84);
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar2,auVar39 ^ auVar2);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[3] & 1) != 0) {
          puVar16[-0x3c0] = 1;
        }
        auVar39 = (auVar35 | auVar32) ^ auVar14;
        auVar41._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar41._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = pshuflw(auVar38,auVar41,0xe8);
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar3,auVar38 ^ auVar3);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[4] & 1) != 0) {
          puVar16[-0x370] = 1;
        }
        auVar39 = packssdw(auVar41,auVar41);
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar4,auVar39 ^ auVar4);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[5] & 1) != 0) {
          puVar16[-800] = 1;
        }
        auVar39 = (auVar35 | auVar31) ^ auVar14;
        auVar42._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar42._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = packssdw(auVar38,auVar42);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar5,auVar38 ^ auVar5);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[6] & 1) != 0) {
          puVar16[-0x2d0] = 1;
        }
        auVar39 = pshufhw(auVar42,auVar42,0x84);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar6,auVar39 ^ auVar6);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[7] & 1) != 0) {
          puVar16[-0x280] = 1;
        }
        auVar39 = (auVar35 | auVar30) ^ auVar14;
        auVar43._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar43._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = pshuflw(auVar38,auVar43,0xe8);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar7,auVar38 ^ auVar7);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[8] & 1) != 0) {
          puVar16[-0x230] = 1;
        }
        auVar39 = packssdw(auVar43,auVar43);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar8,auVar39 ^ auVar8);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[9] & 1) != 0) {
          puVar16[-0x1e0] = 1;
        }
        auVar39 = (auVar35 | auVar29) ^ auVar14;
        auVar44._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar44._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = packssdw(auVar38,auVar44);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar9,auVar38 ^ auVar9);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[10] & 1) != 0) {
          puVar16[-400] = 1;
        }
        auVar39 = pshufhw(auVar44,auVar44,0x84);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar39 = packssdw(auVar39 ^ auVar10,auVar39 ^ auVar10);
        auVar39 = packsswb(auVar39,auVar39);
        if ((auVar39[0xb] & 1) != 0) {
          puVar16[-0x140] = 1;
        }
        auVar39 = (auVar35 | auVar28) ^ auVar14;
        auVar45._0_8_ = -(ulonglong)(lVar17 < auVar39._0_8_);
        auVar45._8_8_ = -(ulonglong)(lVar18 < auVar39._8_8_);
        auVar38 = pshuflw(auVar38,auVar45,0xe8);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar11,auVar38 ^ auVar11);
        unaff_XMM14 = packsswb(auVar38,auVar38);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar16[-0xf0] = 1;
        }
        auVar38 = packssdw(auVar45,auVar45);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar12,auVar38 ^ auVar12);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[0xd] & 1) != 0) {
          puVar16[-0xa0] = 1;
        }
        auVar38 = (auVar35 | auVar27) ^ auVar14;
        auVar36._0_8_ = -(ulonglong)(lVar17 < auVar38._0_8_);
        auVar36._8_8_ = -(ulonglong)(lVar18 < auVar38._8_8_);
        auVar38 = packssdw(auVar37,auVar36);
        auVar37._8_4_ = 0xffffffff;
        auVar37._0_8_ = 0xffffffffffffffff;
        auVar37._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar37,auVar38 ^ auVar37);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[0xe] & 1) != 0) {
          puVar16[-0x50] = 1;
        }
        auVar38 = pshufhw(auVar36,auVar36,0x84);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar13,auVar38 ^ auVar13);
        auVar38 = packsswb(auVar38,auVar38);
        if ((auVar38[0xf] & 1) != 0) {
          *puVar16 = 1;
        }
        uVar19 = uVar19 + 0x10;
        puVar16 = puVar16 + 0x500;
      } while ((uVar15 / 0x50 + 0x10 & 0xfffffffffffffff0) != uVar19);
    }
  }
  else {
    lVar17 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x88))();
    if (lVar17 != 0) {
      if ((*(byte *)(param_1 + 0x492) & 8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x10))();
      }
      *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xef;
      uVar15 = *(ulonglong *)(param_1 + 0x38);
      if (uVar15 < 0xffffffff00000000) {
        plVar22 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar22 = (longlong *)0x0;
        }
        (**(code **)(*plVar22 + 0x58))(plVar22,param_1,uVar15,1);
      }
      else {
        uVar23 = (uint)uVar15;
        if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c998088)) {
          puVar20 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar20 = DAT_14c998080;
          }
          if ((*(uint *)(puVar20 + ((uint)(uVar15 >> 3) & 0xffffffc)) >> (uVar23 & 0x1f) & 1) != 0)
          {
            lVar18 = DAT_14c998060 + (ulonglong)(uVar23 & 0x7fffffff) * 0x68;
            puVar21 = *(uint **)(lVar18 + 0x18);
            if (*(uint **)(lVar18 + 0x18) == (uint *)0x0) {
              puVar21 = (uint *)(lVar18 + 8);
            }
            *puVar21 = *puVar21 | 2;
            *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
          }
        }
      }
      FUN_1434067a6(lVar17,*(undefined8 *)(param_1 + 0xba8));
      FUN_1479bd976(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14343059a FUN_14343059a body=1316 status=ok
// SIG undefined FUN_14343059a(void)

void FUN_14343059a(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined **local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined1 local_1c8 [16];
  longlong local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_198;
  undefined4 local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined2 local_174;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 *local_158 [2];
  undefined8 *local_148;
  undefined1 local_118 [8];
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined **local_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_118[0] = 2;
  local_110 = 0;
  lStack_108 = 0;
  local_100 = 0x3f800000;
  uStack_f8 = 0x42c800003f800000;
  local_f0 = 0x447a0000;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0x80;
  uStack_b0 = 0xffffffff;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x7f7fffff;
  local_7c = 0x404;
  local_e8 = (undefined **)&DAT_14a176f00;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_110 = param_2;
  if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  local_100 = CONCAT44(local_100._4_4_,param_4);
  plVar1 = (longlong *)(param_1 + 0x2a8);
  lStack_108 = param_3;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0xa8))(plVar1);
  if (cVar4 == '\0') {
    local_218 = 0;
    local_210[0] = 2;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3f800000;
    uStack_1f0 = 0x42c800003f800000;
    local_1e8 = 0x447a0000;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0x80;
    uStack_1a8 = 0xffffffff;
    uStack_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0x7f7fffff;
    local_174 = 0x404;
    local_1e0 = (undefined **)&DAT_14a176f00;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    FUN_1478a72be(local_210,local_118);
    local_218 = param_5;
    iVar2 = *(int *)(param_1 + 0xc88);
    *(uint *)(param_1 + 0xc88) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xc8c) < iVar2 + 1U) {
      FUN_1479d7c02((longlong *)(param_1 + 0xc80),iVar2);
    }
    puVar7 = (undefined1 *)((longlong)iVar2 * 0xc0 + *(longlong *)(param_1 + 0xc80));
    *puVar7 = local_218;
    FUN_1477d06d2(puVar7 + 8,local_210);
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (lVar5 == 0) goto LAB_1434306fc;
    local_218 = param_5;
    FUN_1477d06d2(local_210,local_118);
    local_158[0] = (undefined1 *)0x0;
    puVar6 = (undefined8 *)FUN_14001cc68(200,8);
    *puVar6 = &PTR_LAB_14a83c590;
    *(undefined1 *)(puVar6 + 1) = local_218;
    local_148 = puVar6;
    FUN_1478c438a(puVar6 + 2,local_210);
    if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_158[0] = &LAB_143474042;
    }
    FUN_147962214(lVar5,*(undefined8 *)(param_1 + 0xba8),local_158);
  }
  local_1e0 = (undefined **)&DAT_14a176f00;
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  local_1e0 = &PTR_FUN_14a177080;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  local_190 = 0;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_1d0 >> 0x20;
  uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14472eb64(&local_1d8,0);
  }
  uStack_1a8 = 0xffffffff;
  uStack_1a4 = 0;
  local_1b0 = 0;
  if (0x80 < local_1ac) {
    local_1ac = 0x80;
    FUN_1446efbd8(local_1c8,0);
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
LAB_1434306fc:
  local_e8 = (undefined **)&DAT_14a176f00;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_e8 = &PTR_FUN_14a177080;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_d8 >> 0x20;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14472eb64(&local_e0,0);
  }
  uStack_b0 = 0xffffffff;
  local_ac = 0;
  local_b8 = 0;
  if (0x80 < local_b4) {
    local_b4 = 0x80;
    FUN_1446efbd8(local_d0,0);
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143430ae2 FUN_143430ae2 body=227 status=ok
// SIG undefined FUN_143430ae2(void)

undefined8 * FUN_143430ae2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  if (*(longlong *)(param_1 + 0x620) == 0) {
    dVar8 = 1.0;
  }
  else {
    piVar2 = *(int **)(*(longlong *)(param_1 + 0x620) + 0x148);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
      iVar4 = piVar2[1];
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar8 = (double)iVar5;
  }
  dVar7 = *(double *)(param_3 + 0x40);
  if (*(double *)(param_3 + 0x40) <= *(double *)(param_3 + 0x48)) {
    dVar7 = *(double *)(param_3 + 0x48);
  }
  if (dVar7 <= *(double *)(param_3 + 0x50)) {
    dVar7 = *(double *)(param_3 + 0x50);
  }
  fVar9 = (float)(dVar7 * dVar8);
  fVar6 = fVar9 * fVar9 * 3.0;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  dVar8 = (double)fVar9;
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *param_2 = *(undefined8 *)(param_3 + 0x20);
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = dVar8;
  param_2[4] = dVar8;
  param_2[5] = dVar8;
  param_2[6] = (double)fVar6;
  return param_2;
}



// FUNCTION 143430c00 FUN_143430c00 body=905 status=ok
// SIG undefined FUN_143430c00(void)

undefined1 (*) [16] FUN_143430c00(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  dVar1 = *(double *)(param_1 + 0x650);
  dVar21 = *(double *)(param_1 + 0x640);
  dVar23 = *(double *)(param_1 + 0x648);
  dVar17 = (dVar1 + dVar1) * 0.5;
  dVar22 = (dVar23 + dVar23) * 0.5;
  dVar20 = (dVar21 + dVar21) * 0.5;
  dVar1 = dVar17 - dVar1;
  dVar23 = dVar22 - dVar23;
  dVar21 = dVar20 - dVar21;
  dVar24 = *param_3;
  dVar11 = param_3[1];
  dVar4 = param_3[2];
  dVar5 = param_3[8];
  dVar12 = param_3[9];
  dVar14 = param_3[10];
  dVar8 = dVar11 + dVar11;
  dVar10 = dVar4 + dVar4;
  dVar13 = dVar24 * (dVar24 + dVar24);
  dVar3 = (1.0 - (dVar4 * dVar10 + dVar11 * dVar8)) * dVar5;
  dVar4 = (1.0 - (dVar4 * dVar10 + dVar13)) * dVar12;
  dVar18 = (1.0 - (dVar13 + dVar11 * dVar8)) * dVar14;
  dVar13 = param_3[3];
  dVar15 = dVar10 * dVar13;
  dVar19 = (dVar24 + dVar24) * param_3[3];
  dVar13 = dVar8 * dVar13;
  dVar7 = (dVar8 * dVar24 + dVar15) * dVar5;
  dVar9 = (dVar10 * dVar11 + dVar19) * dVar12;
  dVar16 = (dVar13 + *param_3 * dVar10) * dVar14;
  dVar5 = (*param_3 * dVar10 - dVar13) * dVar5;
  dVar12 = (dVar8 * dVar24 - dVar15) * dVar12;
  dVar14 = (dVar10 * dVar11 - dVar19) * dVar14;
  dVar8 = ABS(dVar17 * dVar16) + ABS(dVar22 * dVar12) + ABS(dVar20 * dVar3);
  dVar10 = ABS(dVar17 * dVar14) + ABS(dVar22 * dVar4) + ABS(dVar20 * dVar7);
  dVar24 = ABS(dVar18 * dVar17) + ABS(dVar9 * dVar22) + ABS(dVar5 * dVar20);
  dVar13 = dVar16 * dVar16 + dVar12 * dVar12 + dVar3 * dVar3;
  dVar15 = dVar14 * dVar14 + dVar4 * dVar4 + dVar7 * dVar7;
  dVar19 = dVar18 * dVar18 + dVar9 * dVar9 + dVar5 * dVar5;
  if (dVar13 <= dVar15) {
    dVar13 = dVar15;
  }
  if (dVar13 <= dVar19) {
    dVar13 = dVar19;
  }
  dVar15 = param_3[4];
  dVar7 = dVar1 * dVar14 + dVar23 * dVar4 + dVar21 * dVar7 + param_3[5];
  dVar4 = param_3[6];
  if (dVar13 < 0.0) {
    dVar13 = sqrt(dVar13);
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  dVar13 = SQRT(dVar17 * dVar17 + dVar20 * dVar20 + dVar22 * dVar22) * dVar13;
  dVar19 = SQRT(dVar10 * dVar10 + dVar24 * dVar24 + dVar8 * dVar8);
  if (dVar19 <= dVar13) {
    dVar13 = dVar19;
  }
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar1 * dVar16 + dVar23 * dVar12 + dVar21 * dVar3 + dVar15;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar1 * dVar18 + dVar23 * dVar9 + dVar21 * dVar5 + dVar4;
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar6;
  *(double *)(param_2[2] + 8) = dVar24;
  *(double *)param_2[3] = dVar13;
  return param_2;
}



// FUNCTION 14343100c FUN_14343100c body=706 status=ok
// SIG undefined FUN_14343100c(void)

bool FUN_14343100c(undefined8 param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((*param_4 == param_4[1]) && (!NAN(*param_4) && !NAN(param_4[1]))) {
    dVar1 = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = dVar2 * 0.0 + dVar3 * -0.0;
    dVar13 = dVar3 - dVar1 * 0.0;
    dVar12 = dVar1 * 0.0 - dVar2;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar4 = param_2[3];
    dVar5 = param_3[2];
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar10 = dVar6 * 0.0 + dVar7 * -0.0;
    dVar11 = dVar7 - dVar5 * 0.0;
    dVar9 = dVar5 * 0.0 - dVar6;
    dVar10 = dVar10 + dVar10;
    dVar9 = dVar9 + dVar9;
    dVar11 = dVar11 + dVar11;
    dVar8 = param_3[3];
    if ((ABS(((dVar3 * dVar14 - dVar12 * dVar1) + dVar13 * dVar4 + 0.0) -
             ((dVar7 * dVar10 - dVar9 * dVar5) + dVar11 * dVar8 + 0.0)) <= 9.999999747378752e-05) &&
       (ABS((dVar1 * dVar13 + -dVar2 * dVar14 + dVar4 * dVar12 + 0.0) -
            (dVar5 * dVar11 + -dVar6 * dVar10 + dVar8 * dVar9 + 0.0)) <= 9.999999747378752e-05)) {
      return ABS(((dVar2 * dVar12 - dVar13 * dVar3) + dVar4 * dVar14 + 1.0) -
                 ((dVar6 * dVar9 - dVar11 * dVar7) + dVar8 * dVar10 + 1.0)) <= 9.999999747378752e-05
      ;
    }
  }
  return false;
}



// FUNCTION 1434312f0 FUN_1434312f0 body=69 status=ok
// SIG undefined FUN_1434312f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434312f0(void)

{
  _DAT_14cad0888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0890,1);
  return;
}



// FUNCTION 143431335 FUN_143431335 body=69 status=ok
// SIG undefined FUN_143431335(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431335(void)

{
  _DAT_14cad0898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08a0,1);
  return;
}



// FUNCTION 14343137a FUN_14343137a body=69 status=ok
// SIG undefined FUN_14343137a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343137a(void)

{
  _DAT_14cad08a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434313bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08b0,1);
  return;
}



// FUNCTION 1434313bf FUN_1434313bf body=69 status=ok
// SIG undefined FUN_1434313bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434313bf(void)

{
  _DAT_14cad08b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08c0,1);
  return;
}



// FUNCTION 143431404 FUN_143431404 body=69 status=ok
// SIG undefined FUN_143431404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431404(void)

{
  _DAT_14cad08c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08d0,1);
  return;
}



// FUNCTION 143431449 FUN_143431449 body=69 status=ok
// SIG undefined FUN_143431449(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431449(void)

{
  _DAT_14cad08d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343148b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08e0,1);
  return;
}



// FUNCTION 14343148e FUN_14343148e body=69 status=ok
// SIG undefined FUN_14343148e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343148e(void)

{
  _DAT_14cad08e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434314d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad08f0,1);
  return;
}



// FUNCTION 1434314d3 FUN_1434314d3 body=69 status=ok
// SIG undefined FUN_1434314d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434314d3(void)

{
  _DAT_14cad08f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0900,1);
  return;
}



// FUNCTION 143431518 FUN_143431518 body=69 status=ok
// SIG undefined FUN_143431518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431518(void)

{
  _DAT_14cad0908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343155a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0910,1);
  return;
}



// FUNCTION 14343155d FUN_14343155d body=69 status=ok
// SIG undefined FUN_14343155d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343155d(void)

{
  _DAT_14cad0918 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343159f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0920,1);
  return;
}



// FUNCTION 1434315a2 FUN_1434315a2 body=69 status=ok
// SIG undefined FUN_1434315a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434315a2(void)

{
  _DAT_14cad0928 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434315e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0930,1);
  return;
}



// FUNCTION 1434315e7 FUN_1434315e7 body=69 status=ok
// SIG undefined FUN_1434315e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434315e7(void)

{
  _DAT_14cad0938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0940,1);
  return;
}



// FUNCTION 14343162c FUN_14343162c body=69 status=ok
// SIG undefined FUN_14343162c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343162c(void)

{
  _DAT_14cad0948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343166e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0950,1);
  return;
}



// FUNCTION 143431671 FUN_143431671 body=69 status=ok
// SIG undefined FUN_143431671(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431671(void)

{
  _DAT_14cad0960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434316b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0968,1);
  return;
}



// FUNCTION 1434316b6 FUN_1434316b6 body=69 status=ok
// SIG undefined FUN_1434316b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434316b6(void)

{
  _DAT_14cad0970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434316f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0978,1);
  return;
}



// FUNCTION 1434316fb FUN_1434316fb body=69 status=ok
// SIG undefined FUN_1434316fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434316fb(void)

{
  _DAT_14cad0988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343173d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0990,1);
  return;
}



// FUNCTION 143431740 FUN_143431740 body=69 status=ok
// SIG undefined FUN_143431740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431740(void)

{
  _DAT_14cad0998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09a0,1);
  return;
}



// FUNCTION 143431785 FUN_143431785 body=69 status=ok
// SIG undefined FUN_143431785(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431785(void)

{
  _DAT_14cad09a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434317c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09b0,1);
  return;
}



// FUNCTION 1434317ca FUN_1434317ca body=69 status=ok
// SIG undefined FUN_1434317ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434317ca(void)

{
  _DAT_14cad09c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014343180c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09c8,1);
  return;
}



// FUNCTION 14343180f FUN_14343180f body=69 status=ok
// SIG undefined FUN_14343180f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343180f(void)

{
  _DAT_14cad09d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09d8,1);
  return;
}



// FUNCTION 143431854 FUN_143431854 body=69 status=ok
// SIG undefined FUN_143431854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431854(void)

{
  _DAT_14cad09e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09e8,1);
  return;
}



// FUNCTION 143431899 FUN_143431899 body=69 status=ok
// SIG undefined FUN_143431899(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431899(void)

{
  _DAT_14cad09f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434318db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad09f8,1);
  return;
}



// FUNCTION 1434318de FUN_1434318de body=69 status=ok
// SIG undefined FUN_1434318de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434318de(void)

{
  _DAT_14cad0a00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a08,1);
  return;
}



// FUNCTION 143431923 FUN_143431923 body=69 status=ok
// SIG undefined FUN_143431923(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431923(void)

{
  _DAT_14cad0a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a18,1);
  return;
}



// FUNCTION 143431968 FUN_143431968 body=69 status=ok
// SIG undefined FUN_143431968(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431968(void)

{
  _DAT_14cad0a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434319aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a30,1);
  return;
}



// FUNCTION 1434319ad FUN_1434319ad body=69 status=ok
// SIG undefined FUN_1434319ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434319ad(void)

{
  _DAT_14cad0a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434319ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a48,1);
  return;
}



// FUNCTION 1434319f2 FUN_1434319f2 body=69 status=ok
// SIG undefined FUN_1434319f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434319f2(void)

{
  _DAT_14cad0a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a58,1);
  return;
}



// FUNCTION 143431a37 FUN_143431a37 body=69 status=ok
// SIG undefined FUN_143431a37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431a37(void)

{
  _DAT_14cad0a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a68,1);
  return;
}



// FUNCTION 143431a7c FUN_143431a7c body=69 status=ok
// SIG undefined FUN_143431a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431a7c(void)

{
  _DAT_14cad0a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a78,1);
  return;
}



// FUNCTION 143431ac1 FUN_143431ac1 body=69 status=ok
// SIG undefined FUN_143431ac1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431ac1(void)

{
  _DAT_14cad0a80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a88,1);
  return;
}



// FUNCTION 143431b06 FUN_143431b06 body=69 status=ok
// SIG undefined FUN_143431b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431b06(void)

{
  _DAT_14cad0a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0a98,1);
  return;
}



// FUNCTION 143431b4b FUN_143431b4b body=69 status=ok
// SIG undefined FUN_143431b4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431b4b(void)

{
  _DAT_14cad0aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0ab0,1);
  return;
}



// FUNCTION 143431b90 FUN_143431b90 body=69 status=ok
// SIG undefined FUN_143431b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431b90(void)

{
  _DAT_14cad0ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0ac0,1);
  return;
}



// FUNCTION 143431bd5 FUN_143431bd5 body=69 status=ok
// SIG undefined FUN_143431bd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431bd5(void)

{
  _DAT_14cad0ac8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0ad0,1);
  return;
}



// FUNCTION 143431c1a FUN_143431c1a body=69 status=ok
// SIG undefined FUN_143431c1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431c1a(void)

{
  _DAT_14cad0ad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0ae0,1);
  return;
}



// FUNCTION 143431c5f FUN_143431c5f body=69 status=ok
// SIG undefined FUN_143431c5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431c5f(void)

{
  _DAT_14cad0af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143431ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad0af8,1);
  return;
}



// FUNCTION 143431ca4 FUN_143431ca4 body=62 status=ok
// SIG undefined FUN_143431ca4(void)

void FUN_143431ca4(uint *param_1,void *param_2,uint param_3,byte param_4)

{
  *param_1 = (*param_1 & 0xfffffff8) + (uint)param_4 * 2 |
             (uint)((*(byte *)((longlong)param_2 + 0xad) & 3) == 1);
  param_1[1] = param_3;
  param_1[2] = 0;
  memcpy(param_1 + 4,param_2,0x100);
  return;
}



// FUNCTION 143431ce2 FUN_143431ce2 body=164 status=ok
// SIG undefined FUN_143431ce2(void)

void FUN_143431ce2(longlong param_1,float param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) ||
     ((**(code **)(*plVar1 + 0x400))(plVar1), (*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0)) {
    return;
  }
  plVar1 = (longlong *)plVar1[0x15];
  if (param_3 == 1) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x460))(plVar1);
    if (cVar2 == '\0') {
      return;
    }
  }
  else if (plVar1 == (longlong *)0x0) {
    fVar3 = 1.0;
    goto LAB_143431d62;
  }
  fVar3 = *(float *)((longlong)plVar1 + 0x74);
LAB_143431d62:
                    /* WARNING: Could not recover jumptable at 0x000143431d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x888))
            (*(longlong **)(param_1 + 0x28),fVar3 * param_2,param_1);
  return;
}



// FUNCTION 143431d86 FUN_143431d86 body=164 status=ok
// SIG undefined FUN_143431d86(void)

void FUN_143431d86(longlong param_1,float param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) ||
     ((**(code **)(*plVar1 + 0x400))(plVar1), (*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0)) {
    return;
  }
  plVar1 = (longlong *)plVar1[0x15];
  if (param_3 == 1) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x460))(plVar1);
    if (cVar2 == '\0') {
      return;
    }
  }
  else if (plVar1 == (longlong *)0x0) {
    fVar3 = 1.0;
    goto LAB_143431e06;
  }
  fVar3 = *(float *)((longlong)plVar1 + 0x74);
LAB_143431e06:
                    /* WARNING: Could not recover jumptable at 0x000143431e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x880))
            (*(longlong **)(param_1 + 0x28),fVar3 * param_2,param_1);
  return;
}



// FUNCTION 143431e2a FUN_143431e2a body=74 status=ok
// SIG undefined FUN_143431e2a(void)

void FUN_143431e2a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(char *)((longlong)param_1 + 0x291) != '\0') &&
     ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x600))(param_1);
    if (cVar2 != '\0') {
      param_1[199] = param_2[2];
      lVar1 = param_2[1];
      param_1[0xc5] = *param_2;
      param_1[0xc6] = lVar1;
    }
  }
  return;
}



// FUNCTION 143431e74 FUN_143431e74 body=172 status=ok
// SIG undefined FUN_143431e74(void)

undefined8 FUN_143431e74(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((((((double)param_1[0xc5] != 0.0) || (NAN((double)param_1[0xc5]))) ||
       ((double)param_1[0xc6] != 0.0)) ||
      (((NAN((double)param_1[0xc6]) || ((double)param_1[199] != 0.0)) || (NAN((double)param_1[199]))
       ))) && (cVar2 = (**(code **)(*param_1 + 0x600))(param_1), cVar2 != '\0')) {
    param_1[0x27] = param_1[199];
    *(int *)(param_1 + 0x25) = (int)param_1[0xc5];
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_1 + 0x62c);
    *(int *)(param_1 + 0x26) = (int)param_1[0xc6];
    *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_1 + 0x634);
    (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
    param_1[199] = DAT_14c8464f0;
    lVar1 = DAT_14c8464e8;
    param_1[0xc5] = DAT_14c8464e0;
    param_1[0xc6] = lVar1;
    *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
    return 1;
  }
  return 0;
}



// FUNCTION 143431f20 FUN_143431f20 body=257 status=ok
// SIG undefined FUN_143431f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143431f20(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  
  if (((((*(byte *)(param_1 + 0x349) & 0x20) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 != 0)) && (*(char *)(lVar1 + 0x178) == '\x01')
      ) && (*(longlong *)(lVar1 + 0x438) != 0)) {
    *(byte *)(param_1 + 0x349) = *(byte *)(param_1 + 0x349) & 0xdf;
    fVar3 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x46c)) {
      fVar3 = *(float *)(param_1 + 0x46c);
    }
    fVar8 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x470)) {
      fVar8 = *(float *)(param_1 + 0x470);
    }
    if (((fVar3 != 0.0) || (fVar8 != 0.0)) || (NAN(fVar8))) {
      lVar1 = *(longlong *)(lVar1 + 0x438);
      auVar6 = *(undefined1 (*) [16])(lVar1 + 0x280) & _DAT_149931180;
      auVar4 = _DAT_149931180 & *(undefined1 (*) [16])(lVar1 + 0x290);
      auVar2._16_16_ = auVar4;
      auVar2._0_16_ = auVar6;
      auVar4._8_8_ = auVar6._0_8_;
      auVar6 = minpd(auVar6,auVar2._8_16_);
      auVar4 = minpd(auVar6,auVar4);
      fVar5 = (float)auVar4._0_8_;
      if (0.0001 < fVar5) {
        fVar7 = *(float *)(lVar1 + 0x640) - fVar8 / fVar5;
        fVar8 = 0.0;
        if (0.0 <= fVar7) {
          fVar8 = fVar7;
        }
        if ((fVar8 != 0.0) || (NAN(fVar8))) {
          fVar8 = *(float *)(lVar1 + 0x644) - fVar3 / fVar5;
          fVar3 = 0.0;
          if (0.0 <= fVar8) {
            fVar3 = fVar8;
          }
          if ((fVar3 != 0.0) || (NAN(fVar3))) {
            FUN_140d491fc();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143432022 FUN_143432022 body=931 status=ok
// SIG undefined FUN_143432022(void)

void FUN_143432022(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  void *pvVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pvVar2 = (void *)(param_1 + 0xef0);
  uVar9 = *(uint *)(param_1 + 0xf78);
  uVar10 = (ulonglong)uVar9;
  if (0 < (int)uVar9) {
    pvVar11 = *(void **)(param_1 + 0xf70);
    if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
      pvVar11 = pvVar2;
    }
    uVar19 = 0;
    do {
      if ((uVar19 != 0) && (param_4 + -3.0 <= *(float *)((longlong)pvVar11 + uVar19 * 8 + 4))) {
        uVar18 = (uint)uVar19;
        if (uVar9 != uVar18) {
          memmove(pvVar11,(void *)((longlong)pvVar11 + uVar19 * 8),
                  (longlong)(int)(uVar9 - uVar18) << 3);
          uVar9 = *(uint *)(param_1 + 0xf78);
        }
        uVar10 = (ulonglong)(uVar9 - uVar18);
        *(uint *)(param_1 + 0xf78) = uVar9 - uVar18;
        break;
      }
      uVar19 = uVar19 + 1;
    } while (uVar10 != uVar19);
    uVar19 = uVar10;
    if (0 < (int)uVar10) {
      do {
        iVar12 = (int)uVar10;
        uVar1 = uVar19 - 1;
        if ((longlong)*(int *)(param_2 + 0x10) != 0) {
          lVar13 = 0;
          do {
            lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar13);
            if (lVar5 != 0) {
              pvVar11 = *(void **)(param_1 + 0xf70);
              if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
                pvVar11 = pvVar2;
              }
              if (*(short *)(lVar5 + 10) == *(short *)((longlong)pvVar11 + uVar1 * 8 + 2))
              goto LAB_14343215c;
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)*(int *)(param_2 + 0x10) * 0x10 != lVar13);
        }
        if (uVar19 != uVar10) {
          pvVar11 = *(void **)(param_1 + 0xf70);
          if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
            pvVar11 = pvVar2;
          }
          memmove((void *)((longlong)pvVar11 + uVar1 * 8),
                  (void *)((longlong)pvVar11 + uVar1 * 8 + 8),(longlong)(iVar12 - (int)uVar19) << 3)
          ;
          iVar12 = *(int *)(param_1 + 0xf78);
        }
        uVar10 = (ulonglong)(iVar12 - 1U);
        *(uint *)(param_1 + 0xf78) = iVar12 - 1U;
LAB_14343215c:
        bVar7 = 1 < (longlong)uVar19;
        uVar19 = uVar1;
      } while (bVar7);
    }
  }
  if ((longlong)*(int *)(param_3 + 0x10) == 0) {
LAB_14343238a:
    if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar17 = *(longlong **)(param_3 + 8);
  plVar14 = plVar17 + (longlong)*(int *)(param_3 + 0x10) * 2;
  local_98 = param_2 + 8;
  local_a0 = param_2 + 0x18;
  local_90 = param_2;
LAB_14343219b:
  lVar13 = *plVar17;
  if (lVar13 != 0) {
    sVar3 = *(short *)(lVar13 + 10);
    *(undefined2 *)(lVar13 + 10) = 0;
    pvVar11 = *(void **)(param_1 + 0xf70);
    if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
      pvVar11 = pvVar2;
    }
    if ((longlong)*(int *)(param_1 + 0xf78) != 0) {
      lVar13 = 0;
      do {
        if (sVar3 == *(short *)((longlong)pvVar11 + lVar13)) {
          *(undefined2 *)(*plVar17 + 10) = *(undefined2 *)((longlong)pvVar11 + lVar13 + 2);
          *(float *)((longlong)pvVar11 + lVar13 + 4) = param_4;
          if ((longlong)*(int *)(param_2 + 0x10) == 0) goto LAB_14343235f;
          lVar13 = 0;
          goto LAB_1434322ec;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(param_1 + 0xf78) * 8 != lVar13);
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    iVar12 = *(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x10);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 != 0) {
      FUN_1479d8fa2(&local_88);
    }
    FUN_14343f086(&local_88,local_98);
    FUN_14343f086(&local_88,local_a0);
    if ((longlong)(int)uStack_80 != 0) {
      plVar16 = local_88 + (longlong)(int)uStack_80 * 2;
      plVar15 = local_88;
      do {
        plVar6 = (longlong *)*plVar15;
        if (plVar6 != (longlong *)0x0) {
          sVar4 = *(short *)((longlong)plVar6 + 10);
          pvVar11 = *(void **)(param_1 + 0xf70);
          if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
            pvVar11 = pvVar2;
          }
          if ((longlong)*(int *)(param_1 + 0xf78) != 0) {
            lVar13 = 0;
            do {
              if (sVar4 == *(short *)((longlong)pvVar11 + lVar13 + 2)) goto LAB_143432285;
              lVar13 = lVar13 + 8;
            } while ((longlong)*(int *)(param_1 + 0xf78) * 8 != lVar13);
          }
          cVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,*plVar17);
          if (cVar8 != '\0') {
            *(short *)(*plVar17 + 10) = sVar4;
            iVar12 = *(int *)(param_1 + 0xf78);
            *(uint *)(param_1 + 0xf78) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0xf7c) < iVar12 + 1U) {
              FUN_1479d9088(pvVar2,iVar12);
            }
            pvVar11 = *(void **)(param_1 + 0xf70);
            if (*(void **)(param_1 + 0xf70) == (void *)0x0) {
              pvVar11 = pvVar2;
            }
            *(uint *)((longlong)pvVar11 + (longlong)iVar12 * 8) = CONCAT22(sVar4,sVar3);
            *(float *)((longlong)pvVar11 + (longlong)iVar12 * 8 + 4) = param_4;
            goto LAB_14343229a;
          }
        }
LAB_143432285:
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar16);
    }
    *(undefined2 *)(*plVar17 + 10) = 0;
LAB_14343229a:
    FUN_140239688(local_88);
    param_2 = local_90;
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  goto LAB_14343235f;
  while (lVar13 = lVar13 + 0x10, (longlong)*(int *)(param_2 + 0x10) * 0x10 != lVar13) {
LAB_1434322ec:
    plVar15 = *(longlong **)(*(longlong *)(param_2 + 8) + lVar13);
    if ((plVar15 != (longlong *)0x0) &&
       (*(short *)((longlong)plVar15 + 10) == *(short *)(*plVar17 + 10))) {
      (**(code **)(*plVar15 + 0x18))();
      break;
    }
  }
LAB_14343235f:
  plVar17 = plVar17 + 2;
  if (plVar17 == plVar14) goto LAB_14343238a;
  goto LAB_14343219b;
}



// FUNCTION 143432422 FUN_143432422 body=333 status=ok
// SIG undefined FUN_143432422(void)

double * FUN_143432422(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd8))(param_1 + 0x178);
  if (cVar5 != '\0') {
    if (*(char *)(param_1 + 0x290) == '\x01') {
      dVar1 = *(double *)(param_1 + 0x230);
      dVar2 = *(double *)(param_1 + 0x238);
      dVar3 = *(double *)(param_1 + 0x240);
      dVar6 = (-dVar1 * *param_4 - param_4[1] * dVar2) - param_4[2] * dVar3;
      dVar4 = param_2[2] * dVar3 + *param_2 * dVar1 + dVar2 * param_2[1];
      *param_2 = (*param_2 - dVar4 * dVar1) - dVar6 * dVar1;
      param_2[1] = (param_2[1] - dVar2 * dVar4) - dVar2 * dVar6;
      param_2[2] = (param_2[2] - dVar3 * dVar4) - dVar3 * dVar6;
    }
    else {
      param_2[2] = param_4[2];
    }
  }
  return param_2;
}



// FUNCTION 143432570 FUN_143432570 body=252 status=ok
// SIG undefined FUN_143432570(void)

bool FUN_143432570(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0xd98)) {
    return true;
  }
  if (0 < *(int *)(param_1 + 0xda8)) {
    return true;
  }
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    return false;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x428);
  if (plVar1 == (longlong *)0x0) {
    return false;
  }
  lVar3 = *plVar1;
  if (*(code **)(lVar3 + 0xba8) == FUN_144b222b6) {
    if (*(code **)(lVar3 + 3000) == (code *)&LAB_147a0c89e) {
      if ((plVar1[0x15d] != 0) && (*(char *)(plVar1[0x15d] + 0x30) == '\x02')) goto LAB_143432633;
    }
    else {
      cVar2 = (**(code **)(lVar3 + 3000))(plVar1);
      if (cVar2 != '\0') goto LAB_143432633;
      lVar3 = *plVar1;
    }
    if (*(code **)(lVar3 + 0xbb0) == (code *)&LAB_1400ba9be) {
      lVar3 = plVar1[0x15d];
      if (lVar3 == 0) {
        return false;
      }
      if (*(char *)(lVar3 + 0x30) != '\x03') {
        return false;
      }
      if (*(longlong *)(lVar3 + 0x358) == 0) {
        if (*(int *)(lVar3 + 0x368) < 1) {
          return false;
        }
      }
      else if (0 < *(int *)(*(longlong *)(lVar3 + 0x358) + 0x1b4)) {
        return false;
      }
      goto LAB_143432633;
    }
    cVar2 = (**(code **)(lVar3 + 0xbb0))(plVar1);
  }
  else {
    cVar2 = (**(code **)(lVar3 + 0xba8))(plVar1);
  }
  if (cVar2 == '\0') {
    return false;
  }
LAB_143432633:
  return *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x428) != 0;
}



// FUNCTION 14343266c FUN_14343266c body=146 status=ok
// SIG undefined FUN_14343266c(void)

void FUN_14343266c(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x4d0))();
  if (param_1[0x3e] != 0) {
    local_38 = param_4[2];
    local_48 = *param_4;
    uStack_40 = param_4[1];
    local_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    local_50 = *(undefined8 *)(param_3 + 4);
    local_68 = param_2;
    FUN_1447cd2ec(param_1[0x3e] + 0x5a8);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143432702 FUN_143432702 body=957 status=ok
// SIG undefined FUN_143432702(void)

uint FUN_143432702(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double dVar8;
  float fVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_278 [32];
  char **local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined1 local_220 [4];
  float local_21c;
  undefined4 local_17c;
  undefined4 local_150;
  char *local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar10 = 0;
  if ((param_1[0x3e] != 0) &&
     (lVar11 = (**(code **)(*param_1 + 0x4a0))(), uVar10 = 0, (*(byte *)(lVar11 + 0x3d4) & 1) != 0))
  {
    (**(code **)(*(longlong *)param_1[0x3e] + 0x528))
              ((longlong *)param_1[0x3e],local_220,&local_120);
    fVar9 = local_120._0_4_;
    uVar10 = 0x3f800000;
    if (((local_120._0_4_ != 0.0) || (NAN(local_120._0_4_))) &&
       ((*(float *)((longlong)param_1 + 0x324) != 0.0 ||
        (NAN(*(float *)((longlong)param_1 + 0x324)))))) {
      lVar11 = (**(code **)(*param_1 + 0x4a0))(param_1);
      plVar7 = *(longlong **)(lVar11 + 0x3a8);
      memset(local_220,0,0x100);
      local_150 = 0xffffffff;
      local_17c = 0xffffffff;
      local_21c = 1.0;
      if (plVar7 != (longlong *)0x0) {
        lVar11 = param_1[0x22];
        dVar1 = *(double *)(lVar11 + 0x270);
        dVar2 = (double)param_1[0x48];
        dVar3 = (double)param_1[0x47];
        dVar4 = (double)param_1[0x46];
        dVar8 = (double)fVar9;
        dVar5 = *(double *)(lVar11 + 0x260);
        dVar6 = *(double *)(lVar11 + 0x268);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad0de0) && (FUN_144b3d300(), DAT_14cad0de0 == -1)) {
          local_120 = "ImmersionDepth";
          local_118 = CONCAT35(local_118._5_3_,0xe);
          uVar10 = FUN_14001a6c0(&local_120,1);
          DAT_14cad0dd8 = (char *)(ulonglong)uVar10;
          _Init_thread_footer();
        }
        local_fc = 0;
        local_118 = 0;
        local_f8 = 0x101;
        local_d0 = 0;
        local_c8 = 0x800000000;
        local_b0 = 0;
        local_a8 = 0x400000000;
        local_110 = 1;
        local_104 = 0;
        local_120 = DAT_14cad0dd8;
        local_10f = 1;
        local_10d = 0;
        local_100 = 0;
        local_10c = 0x1000000;
        local_108 = 1;
        local_258 = &local_120;
        local_250 = dVar5 + -dVar4 * dVar8;
        local_248 = dVar6 + -dVar3 * dVar8;
        local_240 = dVar1 + -dVar2 * dVar8;
        local_238 = dVar5 - -dVar4 * dVar8;
        local_230 = dVar6 - -dVar3 * dVar8;
        local_228 = dVar1 - -dVar2 * dVar8;
        (**(code **)(*plVar7 + 0x978))(plVar7,local_220);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
      }
      uVar10 = -(uint)(local_21c == 1.0) & 0x3f800000 |
               ~-(uint)(local_21c == 1.0) & (uint)(1.0 - local_21c);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 143432ad6 FUN_143432ad6 body=787 status=ok
// SIG undefined FUN_143432ad6(void)

void FUN_143432ad6(longlong *param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar4 = FUN_1447210f0();
      if (lVar4 != 0) goto LAB_143432b35;
    }
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cb10130 == 0) {
        local_60 = &local_48;
        local_48 = FUN_140754f84;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_147da9a76;
        local_70 = FUN_1409f3105;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143432b35;
    }
    lVar4 = 0;
  }
LAB_143432b35:
  lVar4 = *(longlong *)(lVar4 + 0x188);
  if ((((lVar4 == 0) || (1.0 <= *(float *)(param_1 + 0xc4))) || (lVar5 = param_1[0x3e], lVar5 == 0))
     || (*(char *)(lVar5 + 0x178) != '\x03')) goto LAB_143432bc6;
  lVar5 = *(longlong *)(lVar5 + 0x438);
  if (((double)param_1[0x25] == 0.0) && (!NAN((double)param_1[0x25]))) {
    if (((double)param_1[0x26] == 0.0) && (!NAN((double)param_1[0x26]))) {
      if (((double)param_1[0x27] == 0.0) && (!NAN((double)param_1[0x27]))) goto LAB_143432bc6;
    }
  }
  cVar3 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
  if ((lVar5 == 0) || (cVar3 == '\0')) goto LAB_143432bc6;
  pdVar1 = (double *)(param_1 + 0x25);
  if (*(float *)(param_1 + 0xbb) <= 0.0) {
    FUN_1478ca73e(lVar4,&local_48,param_1);
    if ((*(byte *)((longlong)param_1 + 0x5bc) & 8) != 0) {
      (**(code **)(*param_1 + 0xbb0))(param_1,&local_48);
    }
    if ((9.999999747378752e-05 < ABS((double)local_48 - *pdVar1)) ||
       (9.999999747378752e-05 < ABS((double)CONCAT44(uStack_3c,uStack_40) - (double)param_1[0x26])))
    {
LAB_143432cee:
      param_1[0x27] = (longlong)local_38;
      *(undefined4 *)pdVar1 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 300) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x26) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x134) = uStack_3c;
      lVar5 = 0x34;
    }
    else {
      lVar5 = 0x38;
      if (9.999999747378752e-05 < ABS(local_38 - (double)param_1[0x27])) goto LAB_143432cee;
    }
    uVar2 = *(undefined4 *)(lVar4 + lVar5);
    FUN_1478cac0c(lVar4,(int)param_1[0xc2],uVar2);
    param_1[0xba] = param_1[0x27];
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)pdVar1;
    *(undefined4 *)((longlong)param_1 + 0x5c4) = *(undefined4 *)((longlong)param_1 + 300);
    *(int *)(param_1 + 0xb9) = (int)param_1[0x26];
    *(undefined4 *)((longlong)param_1 + 0x5cc) = *(undefined4 *)((longlong)param_1 + 0x134);
    *(undefined4 *)(param_1 + 0xbb) = uVar2;
  }
  else {
    param_1[0x27] = param_1[0xba];
    *(int *)pdVar1 = (int)param_1[0xb8];
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_1 + 0x5c4);
    *(int *)(param_1 + 0x26) = (int)param_1[0xb9];
    *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_1 + 0x5cc);
  }
  FUN_1478ca7d6(lVar4,param_1);
  *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) | 4;
LAB_143432bc6:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143432df6 FUN_143432df6 body=1495 status=ok
// SIG undefined FUN_143432df6(void)

double * FUN_143432df6(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  undefined4 local_1b0;
  code **local_1a8;
  undefined1 *local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  code **local_180;
  code *local_178;
  code *local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined1 local_149;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_101;
  code *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined2 local_e9;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_2[2] = param_4[2];
  dVar17 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = dVar17;
  local_168 = 0;
  uStack_160 = 0;
  lVar10 = param_1[0x16];
  if ((lVar10 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar10 = FUN_1447210f0(), lVar10 == 0)))) {
    lVar10 = param_1[4];
    if (lVar10 != 0) {
      if (DAT_14cb10130 == 0) {
        local_180 = &local_100;
        local_100 = FUN_140754f84;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_14081d0ea;
        local_188 = &LAB_147da9a76;
        local_190 = FUN_1409f3105;
        local_198 = L"Engine";
        local_1a0 = (undefined1 *)0x0;
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x10000000);
        local_1b0 = 8;
        local_1b8 = (double *)CONCAT44(local_1b8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143432e8f;
    }
    lVar10 = 0;
  }
LAB_143432e8f:
  lVar16 = param_1[0x3e];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad0df0) && (FUN_144b3d300(), DAT_14cad0df0 == -1)) {
    local_100 = (code *)0x14a83af04;
    local_f8 = CONCAT35(local_f8._5_3_,0xd);
    uVar9 = FUN_14001a6c0(&local_100,1);
    DAT_14cad0de8 = (code *)(ulonglong)uVar9;
    _Init_thread_footer();
  }
  local_dc = 0;
  local_f8 = 0;
  local_d8 = 0x101;
  local_b0 = 0;
  local_a8 = 0x800000000;
  local_90 = 0;
  local_88 = 0x400000000;
  local_f0 = 1;
  local_e4 = 0;
  local_100 = DAT_14cad0de8;
  local_ef = 1;
  local_ed = 0;
  local_e0 = 0;
  local_ec = 0;
  local_ea = 0;
  if (lVar16 != 0) {
    local_a0 = *(undefined4 *)(lVar16 + 0xc);
    local_88 = 0x400000001;
    local_f8 = *(undefined8 *)(lVar16 + 0x18);
  }
  local_e9 = 0x101;
  local_1b0 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
  local_128 = *param_3;
  dStack_120 = param_3[1];
  local_1b8 = &local_128;
  local_118 = param_3[2];
  local_148 = *(undefined4 *)param_4;
  uStack_144 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_140 = *(undefined4 *)(param_4 + 1);
  uStack_13c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_138 = param_4[2];
  local_190 = (code *)&local_101;
  local_198 = (wchar_t *)&DAT_14cad0f08;
  local_1a0 = &DAT_14cad0f10;
  local_1a8 = &local_100;
  FUN_1401e2596(lVar10,&local_168,&local_149);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_160 != 0) {
    lVar16 = (longlong)(int)uStack_160 * 0x100 + local_168;
    lVar10 = local_168;
    do {
      lVar15 = param_1[0x3e];
      lVar12 = lVar10 + 0xb8;
      lVar11 = FUN_14485cccc(lVar12);
      for (; (lVar15 != 0 && (lVar15 != lVar11)); lVar15 = *(longlong *)(lVar15 + 0x168)) {
      }
      if (lVar15 == 0) {
        if ((*(int *)(lVar10 + 0xdc) == 0) || (uVar9 = *(uint *)(lVar10 + 0xd8), (int)uVar9 < 0)) {
LAB_1434330fd:
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = (longlong *)0x0;
          if ((int)uVar9 < DAT_14c9647dc) {
            puVar14 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((puVar14 == (undefined8 *)0x0) ||
                (*(int *)(puVar14 + 2) != *(int *)(lVar10 + 0xdc))) ||
               ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) goto LAB_1434330fd;
            plVar13 = (longlong *)*puVar14;
          }
        }
        cVar8 = (**(code **)(*plVar13 + 0x568))();
        if (((cVar8 == '\0') && (cVar8 = FUN_1417bcab2(lVar12), cVar8 != '\0')) &&
           ((lVar12 = FUN_14485cccc(lVar12), lVar12 != 0 && ((*(byte *)(lVar12 + 0x3d4) & 1) != 0)))
           ) {
          dVar19 = param_3[2] - param_4[2];
          dVar1 = param_3[1] - param_4[1];
          dVar18 = *param_3 - *param_4;
          dVar17 = dVar19 * dVar19 + dVar18 * dVar18 + dVar1 * dVar1;
          if (((dVar17 != 1.0) || (dVar2 = dVar19, dVar3 = dVar1, dVar4 = dVar18, NAN(dVar17))) &&
             (dVar2 = DAT_14c8464f0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar17)) {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar2 = dVar19 * dVar17;
            dVar3 = dVar1 * dVar17;
            dVar4 = dVar18 * dVar17;
          }
          param_2[2] = *(double *)(lVar10 + 0x20);
          uVar5 = *(undefined4 *)(lVar10 + 0x14);
          uVar6 = *(undefined4 *)(lVar10 + 0x18);
          uVar7 = *(undefined4 *)(lVar10 + 0x1c);
          *(undefined4 *)param_2 = *(undefined4 *)(lVar10 + 0x10);
          *(undefined4 *)((longlong)param_2 + 4) = uVar5;
          *(undefined4 *)(param_2 + 1) = uVar6;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
          lVar10 = (**(code **)(*param_1 + 0x4a0))(param_1);
          if (lVar12 == lVar10) {
            dVar19 = dVar4 * 0.10000000149011612 + *param_2;
            dVar18 = dVar3 * 0.10000000149011612 + param_2[1];
            dVar17 = dVar2 * 0.10000000149011612 + param_2[2];
          }
          else {
            dVar19 = *param_2 - dVar4 * 0.10000000149011612;
            dVar18 = param_2[1] - dVar3 * 0.10000000149011612;
            dVar17 = param_2[2] - dVar2 * 0.10000000149011612;
          }
          *param_2 = dVar19;
          param_2[1] = dVar18;
          param_2[2] = dVar17;
          break;
        }
      }
      lVar10 = lVar10 + 0x100;
    } while (lVar10 != lVar16);
  }
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1434333e6 FUN_1434333e6 body=155 status=ok
// SIG undefined FUN_1434333e6(void)

bool FUN_1434333e6(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_3[2] * *(double *)(param_1 + 0x240) +
          *param_3 * *(double *)(param_1 + 0x230) + *(double *)(param_1 + 0x238) * param_3[1];
  dVar3 = param_3[2] - *(double *)(param_1 + 0x240) * dVar1;
  dVar2 = param_3[1] - *(double *)(param_1 + 0x238) * dVar1;
  dVar1 = *param_3 - dVar1 * *(double *)(param_1 + 0x230);
  return 0.0 < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
}



// FUNCTION 143433482 FUN_143433482 body=891 status=ok
// SIG undefined FUN_143433482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143433482(longlong param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  uint uVar17;
  
  dVar1 = *param_2;
  dVar14 = param_2[1];
  dVar7 = param_2[2];
  dVar3 = dVar7 * dVar7 + dVar1 * dVar1 + dVar14 * dVar14;
  if (((dVar3 != 1.0) || (dVar4 = dVar7, dVar5 = dVar14, dVar6 = dVar1, NAN(dVar3))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar3)) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar4 = dVar7 * dVar3;
    dVar5 = dVar14 * dVar3;
    dVar6 = dVar1 * dVar3;
  }
  if ((((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar5))) ||
      (9.999999747378752e-05 < ABS(dVar4))) &&
     (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x230) - dVar6) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x238) - dVar5))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x240) - dVar4))))) {
    *(double *)(param_1 + 0x230) = dVar6;
    *(double *)(param_1 + 0x238) = dVar5;
    *(double *)(param_1 + 0x240) = dVar4;
    dVar1 = ((DAT_14c8462c0 * -dVar6 - DAT_14c8462c8 * dVar5) - DAT_14c8462d0 * dVar4) + 1.0;
    if (dVar1 < 9.999999974752427e-07) {
      if ((ABS(DAT_14c8462c0) <= ABS(DAT_14c8462c8)) || (ABS(DAT_14c8462c0) <= ABS(DAT_14c8462d0)))
      {
        uVar17 = (uint)((ulonglong)DAT_14c8463a8 >> 0x20) ^ 0x80000000;
        uVar16 = (undefined4)DAT_14c8463a8;
        dVar1 = 0.0;
        dVar14 = -DAT_14c8463a0;
        dVar7 = -DAT_14c8463b0;
      }
      else {
        uVar16 = (undefined4)DAT_14c846390;
        uVar17 = (uint)((ulonglong)DAT_14c846390 >> 0x20);
        dVar1 = 0.0;
        dVar14 = DAT_14c846388;
        dVar7 = DAT_14c846398;
      }
    }
    else {
      uVar17 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
      uVar16 = SUB84(dVar5,0);
      dVar14 = -dVar6;
      dVar7 = -dVar4;
    }
    dVar3 = DAT_14c8462c0 * (double)CONCAT44(uVar17,uVar16) - dVar14 * DAT_14c8462c8;
    dVar14 = DAT_14c8462d0 * dVar14 - dVar7 * DAT_14c8462c0;
    dVar7 = DAT_14c8462c8 * dVar7 - (double)CONCAT44(uVar17,uVar16) * DAT_14c8462d0;
    dVar10 = dVar3 * dVar3 + dVar7 * dVar7;
    dVar13 = dVar1 * dVar1 + dVar14 * dVar14;
    auVar11._0_8_ = dVar10 + dVar13;
    auVar11._8_8_ = dVar10 + dVar13;
    auVar12 = sqrtpd(auVar11,auVar11);
    auVar12 = divpd(_DAT_149934d80,auVar12);
    auVar15._0_8_ = auVar12._0_8_ * dVar3;
    auVar15._8_8_ = auVar12._8_8_ * dVar1;
    uVar8 = (ulonglong)(dVar7 * auVar12._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_)
    ;
    uVar9 = (ulonglong)(dVar14 * auVar12._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar15,auVar12);
    *(ulonglong *)(param_1 + 0x250) = uVar8;
    *(ulonglong *)(param_1 + 600) = uVar9;
    *(undefined1 (*) [16])(param_1 + 0x260) = auVar12;
    *(ulonglong *)(param_1 + 0x270) = uVar8 ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x278) = uVar9 ^ 0x8000000000000000;
    *(double *)(param_1 + 0x280) = auVar12._0_8_ * -1.0;
    *(double *)(param_1 + 0x288) = auVar12._8_8_ * 1.0;
    bVar2 = true;
    if ((ABS(dVar6 - _DAT_14cad0ea8) <= 9.999999747378752e-05) &&
       (ABS(dVar5 - _DAT_14cad0eb0) <= 9.999999747378752e-05)) {
      bVar2 = 9.999999747378752e-05 < ABS(dVar4 - DAT_14cad0eb8);
    }
    *(bool *)(param_1 + 0x290) = bVar2;
  }
  return;
}



// FUNCTION 1434337fe FUN_1434337fe body=783 status=ok
// SIG undefined FUN_1434337fe(void)

undefined4 *
FUN_1434337fe(longlong *param_1,undefined4 *param_2,undefined8 param_3,double *param_4,
             longlong param_5,char param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  char cVar8;
  double *pdVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_4[2];
  local_98 = *param_4;
  dStack_90 = param_4[1];
  if ((*(byte *)(param_5 + 0xad) & 3) == 1) {
    dVar12 = *(double *)(param_5 + 0x40);
    dVar1 = *(double *)(param_5 + 0x48);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar14 = *(double *)(param_5 + 0x50);
    if ((-(double)param_1[0x46] * dVar12 - (double)param_1[0x47] * dVar1) -
        (double)param_1[0x48] * dVar14 <= 0.0010000000474974513) goto LAB_1434338c0;
    if (param_6 == '\0') {
LAB_143433932:
      dVar1 = *param_4;
      dVar2 = param_4[1];
      dVar3 = param_4[2];
      pdVar9 = &local_98;
      if (dVar3 * dVar14 + dVar1 * dVar12 + (double)CONCAT44(uVar11,uVar10) * dVar2 < 0.0) {
        dVar5 = dVar14 * (double)param_1[0x48] +
                dVar12 * (double)param_1[0x46] +
                (double)CONCAT44(uVar11,uVar10) * (double)param_1[0x47];
        dVar14 = dVar14 - (double)param_1[0x48] * dVar5;
        dVar4 = (double)CONCAT44(uVar11,uVar10) - (double)param_1[0x47] * dVar5;
        dVar12 = dVar12 - dVar5 * (double)param_1[0x46];
        dVar5 = dVar14 * dVar14 + dVar12 * dVar12 + dVar4 * dVar4;
        if (((dVar5 != 1.0) || (dVar13 = dVar12, dVar15 = dVar14, dVar6 = dVar4, NAN(dVar5))) &&
           (dVar13 = DAT_14c8464e0, dVar15 = DAT_14c8464f0, dVar6 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar5)) {
          dVar5 = 1.0 / SQRT(dVar5);
          dVar13 = dVar12 * dVar5;
          dVar15 = dVar14 * dVar5;
          dVar6 = dVar4 * dVar5;
        }
        dVar12 = dVar3 * dVar15 + dVar1 * dVar13 + dVar2 * dVar6;
        local_98 = dVar1 - dVar12 * dVar13;
        dStack_90 = dVar2 - dVar6 * dVar12;
        local_88 = dVar3 - dVar15 * dVar12;
      }
      goto LAB_1434338cd;
    }
    cVar8 = (**(code **)(*param_1 + 0x928))(param_1,param_5 + 0x10,param_5);
    if (cVar8 == '\0') {
      dVar12 = *(double *)(param_5 + 0x40);
      uVar10 = (undefined4)*(undefined8 *)(param_5 + 0x48);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 0x48) >> 0x20);
      dVar14 = *(double *)(param_5 + 0x50);
      goto LAB_143433932;
    }
  }
  else {
LAB_1434338c0:
    if ((*(byte *)(param_5 + 0xad) & 2) != 0) {
      pdVar9 = &DAT_14c8464e0;
      if (0.0 < param_4[2] * *(double *)(param_5 + 0x50) +
                *param_4 * *(double *)(param_5 + 0x40) + param_4[1] * *(double *)(param_5 + 0x48)) {
        pdVar9 = &local_98;
      }
      goto LAB_1434338cd;
    }
  }
  pdVar9 = &local_98;
LAB_1434338cd:
  *(double *)(param_2 + 4) = pdVar9[2];
  uVar10 = *(undefined4 *)((longlong)pdVar9 + 4);
  uVar11 = *(undefined4 *)(pdVar9 + 1);
  uVar7 = *(undefined4 *)((longlong)pdVar9 + 0xc);
  *param_2 = *(undefined4 *)pdVar9;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar7;
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143433b0e FUN_143433b0e body=2038 status=ok
// SIG undefined FUN_143433b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143433b0e(longlong *param_1,double *param_2,double *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 auStack_2c8 [32];
  code **local_2a8;
  undefined4 local_2a0;
  undefined4 *local_298;
  ulonglong *local_290;
  wchar_t *local_288;
  code *local_280;
  undefined1 *local_278;
  code **local_270;
  code *local_268;
  code *local_260;
  double local_250;
  double local_248;
  double local_240;
  code *local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_174;
  byte local_16b;
  undefined4 local_148;
  undefined4 local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined2 local_b1;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_d0 = param_2[2] + param_3[2];
  local_d8 = param_2[1] + param_3[1];
  local_e0 = *param_2 + *param_3;
  lVar11 = param_1[0x3e];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad0e00) && (FUN_144b3d300(), DAT_14cad0e00 == -1)) {
    local_218 = "CheckLedgeDirection";
    local_210 = 0x13;
    local_20c = 0;
    uVar10 = FUN_14001a6c0(&local_218,1);
    DAT_14cad0df8 = (ulonglong)uVar10;
    _Init_thread_footer();
  }
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = DAT_14cad0df8;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0;
  local_b2 = 0;
  if (lVar11 != 0) {
    local_68 = *(undefined4 *)(lVar11 + 0xc);
    local_50 = 0x400000001;
    local_c0 = *(undefined8 *)(lVar11 + 0x18);
  }
  local_b1 = 0x101;
  local_f8 = _DAT_14cad0ee0;
  uStack_f0 = uRam000000014cad0ee8;
  local_108 = _DAT_14cad0ed0;
  uStack_100 = _DAT_14cad0ed8;
  lVar11 = 0;
  do {
    cVar8 = *(char *)((longlong)&uStack_100 + lVar11);
    cVar1 = *(char *)((longlong)&uStack_100 + lVar11 + 1);
    cVar2 = *(char *)((longlong)&uStack_100 + lVar11 + 2);
    cVar3 = *(char *)((longlong)&uStack_100 + lVar11 + 3);
    cVar4 = *(char *)((longlong)&uStack_100 + lVar11 + 4);
    cVar5 = *(char *)((longlong)&uStack_100 + lVar11 + 5);
    cVar6 = *(char *)((longlong)&uStack_100 + lVar11 + 6);
    cVar7 = *(char *)((longlong)&uStack_100 + lVar11 + 7);
    if ((*(char *)((longlong)&local_108 + lVar11) == DAT_149c360b0) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 1) == DAT_149c360b0._1_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 1) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 2) == DAT_149c360b0._2_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 2) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 3) == DAT_149c360b0._3_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 3) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 4) == DAT_149c360b0._4_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 4) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 5) == DAT_149c360b0._5_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 5) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 6) == DAT_149c360b0._6_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 6) = 2;
    }
    if ((*(char *)((longlong)&local_108 + lVar11 + 7) == DAT_149c360b0._7_1_) != true) {
      *(undefined1 *)((longlong)&local_108 + lVar11 + 7) = 2;
    }
    if ((cVar8 == DAT_149c360b0._8_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11) = 2;
    }
    if ((cVar1 == DAT_149c360b0._9_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 1) = 2;
    }
    if ((cVar2 == DAT_149c360b0._10_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 2) = 2;
    }
    if ((cVar3 == DAT_149c360b0._11_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 3) = 2;
    }
    if ((cVar4 == DAT_149c360b0._12_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 4) = 2;
    }
    if ((cVar5 == DAT_149c360b0._13_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 5) = 2;
    }
    if ((cVar6 == DAT_149c360b0._14_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 6) = 2;
    }
    if ((cVar7 == DAT_149c360b0._15_1_) != true) {
      *(undefined1 *)((longlong)&uStack_100 + lVar11 + 7) = 2;
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x20);
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_c8,&local_108);
  lVar11 = *(longlong *)(param_1[0x3e] + 0x438);
  dVar13 = *(double *)(lVar11 + 0x280);
  if (*(double *)(lVar11 + 0x288) <= *(double *)(lVar11 + 0x280)) {
    dVar13 = *(double *)(lVar11 + 0x288);
  }
  local_114 = (float)dVar13 * *(float *)(lVar11 + 0x644);
  local_110 = (float)*(double *)(lVar11 + 0x290) * *(float *)(lVar11 + 0x640);
  local_118 = 3;
  uVar9 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
  memset(&local_218,0,0x100);
  local_148 = 0xffffffff;
  local_174 = 0xffffffff;
  local_218 = (char *)CONCAT44(0x3f800000,(undefined4)local_218);
  lVar11 = param_1[0x16];
  if ((lVar11 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar11 = FUN_1447210f0(), lVar11 == 0)))) {
    lVar11 = param_1[4];
    if (lVar11 != 0) {
      if (DAT_14cb10130 == 0) {
        local_270 = &local_238;
        local_238 = FUN_140754f84;
        local_260 = FUN_14081d0ea;
        local_268 = FUN_14081d0ea;
        local_278 = &LAB_147da9a76;
        local_280 = FUN_1409f3105;
        local_288 = L"Engine";
        local_290 = (ulonglong *)0x0;
        local_298 = (undefined4 *)CONCAT44(local_298._4_4_,0x10000000);
        local_2a0 = 8;
        local_2a8 = (code **)CONCAT44(local_2a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143433ece;
    }
    lVar11 = 0;
  }
LAB_143433ece:
  local_238 = (code *)param_1[0x4a];
  lStack_230 = param_1[0x4b];
  local_228 = param_1[0x4c];
  lStack_220 = param_1[0x4d];
  local_2a8 = &local_238;
  local_2a0 = uVar9;
  local_298 = &local_118;
  local_290 = &local_c8;
  local_288 = (wchar_t *)&local_108;
  FUN_14021655c(lVar11,&local_218,param_2,&local_e0);
  if (((local_16b & 1) == 0) ||
     (cVar8 = (**(code **)(*param_1 + 0x878))(param_1,&local_218), cVar8 != '\0')) {
    if ((local_16b & 1) == 0) {
      lVar11 = param_1[0x16];
      if ((lVar11 == 0) &&
         (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
          (lVar11 = FUN_1447210f0(), lVar11 == 0)))) {
        lVar11 = param_1[4];
        if (lVar11 != 0) {
          if (DAT_14cb10130 == 0) {
            local_238 = FUN_140754f84;
            local_260 = FUN_14081d0ea;
            local_268 = FUN_14081d0ea;
            local_278 = &LAB_147da9a76;
            local_280 = FUN_1409f3105;
            local_288 = L"Engine";
            local_290 = (ulonglong *)0x0;
            local_298 = (undefined4 *)CONCAT44(local_298._4_4_,0x10000000);
            local_2a0 = 8;
            local_2a8 = (code **)CONCAT44(local_2a8._4_4_,0x990);
            local_270 = &local_238;
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
          goto LAB_143433fa6;
        }
        lVar11 = 0;
      }
LAB_143433fa6:
      local_238 = (code *)param_1[0x4a];
      lStack_230 = param_1[0x4b];
      local_228 = param_1[0x4c];
      lStack_220 = param_1[0x4d];
      dVar13 = (double)(*(float *)((longlong)param_1 + 0x1fc) +
                       *(float *)((longlong)param_1 + 0x48c));
      local_240 = (double)param_1[0x48] * dVar13 + local_d0;
      local_248 = (double)param_1[0x47] * dVar13 + local_d8;
      local_250 = dVar13 * (double)param_1[0x46] + local_e0;
      local_290 = &local_c8;
      local_2a8 = &local_238;
      local_2a0 = uVar9;
      local_298 = &local_118;
      local_288 = (wchar_t *)&local_108;
      FUN_14021655c(lVar11,&local_218);
    }
    if (local_218._4_4_ < 1.0) {
      cVar8 = (**(code **)(*param_1 + 0x878))(param_1,&local_218);
      uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (cVar8 != '\0') goto LAB_143434081;
    }
  }
  uVar12 = 0;
LAB_143434081:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 143434306 FUN_143434306 body=65 status=ok
// SIG undefined FUN_143434306(void)

undefined8 FUN_143434306(longlong param_1)

{
  char cVar1;
  undefined8 in_RAX;
  undefined7 uVar4;
  undefined8 uVar3;
  ulonglong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x349);
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  if (-1 < cVar1) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 0x349);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
  }
  uVar2 = CONCAT71(uVar4,cVar1) & 0xffffffffffffff40;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
}



// FUNCTION 143434348 FUN_143434348 body=399 status=ok
// SIG undefined FUN_143434348(void)

void FUN_143434348(longlong param_1)

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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c7613ac < 0.0) goto LAB_1434343db;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0xa8) + 8) & 0x10) == 0)) {
      lVar1 = FUN_1447210f0();
      if (lVar1 != 0) goto LAB_1434343a2;
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (DAT_14cb10130 == 0) {
        local_40 = &local_20;
        local_20 = FUN_140754f84;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_147da9a76;
        local_50 = FUN_1409f3105;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_1434343a2;
    }
    lVar1 = 0;
  }
LAB_1434343a2:
  if (DAT_14c7613ac <= (float)*(double *)(lVar1 + 0x6e0) - *(float *)(param_1 + 0x434)) {
    *(float *)(param_1 + 0x434) = (float)*(double *)(lVar1 + 0x6e0);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  else {
    *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
  }
LAB_1434343db:
  *(byte *)(param_1 + 0x5b4) = *(byte *)(param_1 + 0x5b4) | 0x20;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434344d8 FUN_1434344d8 body=405 status=ok
// SIG undefined FUN_1434344d8(void)

void FUN_1434344d8(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *(double *)(param_1 + 0x230);
  dVar1 = *(double *)(param_1 + 0x128);
  dVar2 = *(double *)(param_1 + 0x130);
  dVar5 = dVar2 * *(double *)(param_1 + 0x238);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = dVar3 * *(double *)(param_1 + 0x240);
  dVar7 = (-dVar9 * dVar1 - dVar5) - dVar4;
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    dVar4 = dVar4 + dVar1 * dVar9 + dVar5;
    dVar5 = dVar3 - *(double *)(param_1 + 0x240) * dVar4;
    dVar7 = dVar2 - *(double *)(param_1 + 0x238) * dVar4;
    dVar9 = dVar1 - dVar4 * dVar9;
    if ((*(byte *)(param_1 + 0x5b4) & 1) == 0) {
      dVar4 = dVar5 * dVar5 + dVar9 * dVar9 + dVar7 * dVar7;
      if (((dVar4 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar4))) &&
         (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar4)) {
        dVar4 = 1.0 / SQRT(dVar4);
        dVar6 = dVar5 * dVar4;
        dVar8 = dVar7 * dVar4;
        dVar10 = dVar9 * dVar4;
      }
      dVar9 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
      dVar5 = dVar6 * dVar9;
      dVar7 = dVar8 * dVar9;
      dVar9 = dVar10 * dVar9;
    }
    *(double *)(param_1 + 0x128) = dVar9;
    *(double *)(param_1 + 0x130) = dVar7;
    *(double *)(param_1 + 0x138) = dVar5;
  }
  return;
}



// FUNCTION 14343466e FUN_14343466e body=2932 status=ok
// SIG undefined FUN_14343466e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343466e(longlong *param_1,undefined8 param_2,int param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  float local_2d8;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_270;
  undefined4 uStack_26c;
  double dStack_268;
  double local_260;
  undefined4 local_1cc;
  undefined4 local_1a0;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  fVar17 = (float)param_2;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (fVar17 < 1e-06) goto LAB_1434346fa;
  if ((((param_1[0x3e] == 0) || (*(longlong *)(param_1[0x3e] + 0x3c0) == 0)) &&
      ((*(byte *)((longlong)param_1 + 0x349) & 8) == 0)) &&
     (((char)param_1[0x1f0] == '\0' && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)))) {
    param_1[0x73] = (longlong)DAT_14c8464f0;
    lVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    param_1[0x71] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_1[0x72] = lVar6;
    uVar9 = DAT_14c8464e8._4_4_;
    uVar24 = (undefined4)DAT_14c8464e8;
    uVar14 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 300) = uVar14;
    *(undefined4 *)(param_1 + 0x26) = uVar24;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar9;
    param_1[0x27] = (longlong)DAT_14c8464f0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_308);
  }
  cVar10 = *(char *)((longlong)param_1 + 0x291);
  cVar5 = *(char *)((longlong)param_1 + 0x292);
  (**(code **)(*param_1 + 0xb80))(param_1);
  (**(code **)(*param_1 + 0x8d8))(param_1);
  dVar20 = (double)param_1[0x73] * (double)param_1[0x48] +
           (double)param_1[0x71] * (double)param_1[0x46] +
           (double)param_1[0x47] * (double)param_1[0x72];
  param_1[0x71] = (longlong)((double)param_1[0x71] - dVar20 * (double)param_1[0x46]);
  param_1[0x72] = (longlong)((double)param_1[0x72] - (double)param_1[0x47] * dVar20);
  param_1[0x73] = (longlong)((double)param_1[0x73] - (double)param_1[0x48] * dVar20);
  if (((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
    uVar14 = (**(code **)(*param_1 + 0x718))(param_1);
    local_2e8 = (double *)CONCAT44(local_2e8._4_4_,uVar14);
    param_4 = (double *)0x0;
    (**(code **)(*param_1 + 0x6f0))(param_1,fVar17,*(undefined4 *)((longlong)param_1 + 0x294),0);
  }
  (**(code **)(*param_1 + 0xb88))(param_1,fVar17);
  if ((*(char *)((longlong)param_1 + 0x291) != cVar10) ||
     (*(char *)((longlong)param_1 + 0x292) != cVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_308);
  }
  dVar20 = (double)param_1[0x46];
  dVar2 = (double)param_1[0x47];
  dVar3 = (double)param_1[0x48];
  dVar23 = (double)param_1[0x25];
  dVar21 = (double)param_1[0x26];
  dVar4 = (double)param_1[0x27];
  dVar19 = dVar4 * dVar3 + dVar23 * dVar20 + dVar2 * dVar21;
  (**(code **)(*param_1 + 0x578))(param_1,&local_e8);
  dVar22 = (double)fVar17;
  local_f0 = (dVar4 - dVar3 * dVar19) * dVar22;
  local_f8 = (dVar21 - dVar2 * dVar19) * dVar22;
  local_100 = (dVar23 - dVar19 * dVar20) * dVar22;
  uVar14 = (undefined4)DAT_149931180;
  uVar24 = DAT_149931180._4_4_;
  bVar7 = false;
  if (((double)((ulonglong)local_100 & DAT_149931180) <= 9.999999747378752e-05) &&
     (bVar7 = false, (double)((ulonglong)local_f8 & DAT_149931180) <= 9.999999747378752e-05)) {
    bVar7 = ABS(local_f0) <= 9.999999747378752e-05;
  }
  local_108 = local_f0 + local_d8;
  local_110 = local_f8 + local_e0;
  local_118 = local_100 + local_e8;
  local_128 = DAT_14c8464f0;
  local_138 = (undefined4)DAT_14c8464e0;
  uStack_134 = DAT_14c8464e0._4_4_;
  uStack_130 = (undefined4)DAT_14c8464e8;
  uStack_12c = DAT_14c8464e8._4_4_;
  uStack_120 = 0;
  pdVar1 = (double *)(param_1 + 200);
  if (param_1[0xcb] == 0) {
LAB_143434e20:
    cVar10 = (**(code **)(*param_1 + 0x9c0))(param_1,&local_118,&local_138);
    if (cVar10 == '\0') {
      (**(code **)(*param_1 + 0x5d0))(param_1,1,0);
      goto LAB_1434346fa;
    }
    *(undefined4 *)(param_1 + 0xca) = (undefined4)local_128;
    *(undefined4 *)((longlong)param_1 + 0x654) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0xcb) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_1 + 0x65c) = uStack_120._4_4_;
    *(undefined4 *)pdVar1 = local_138;
    *(undefined4 *)((longlong)param_1 + 0x644) = uStack_134;
    *(undefined4 *)(param_1 + 0xc9) = uStack_130;
    *(undefined4 *)((longlong)param_1 + 0x64c) = uStack_12c;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x5bc) & 0x20) == 0) {
      if (ABS(*pdVar1 - local_e8) <= 9.999999747378752e-05) {
        local_2c0 = (double)param_1[0xc9];
        if (ABS(local_2c0 - local_e0) <= 9.999999747378752e-05) {
          local_2c8 = (double)param_1[0xca];
          bVar8 = ABS(local_2c8 - local_d8) <= 9.999999747378752e-05;
          local_2b8 = *pdVar1;
          goto LAB_143434c60;
        }
      }
      goto LAB_143434e20;
    }
    local_2c8 = (double)param_1[0xca];
    local_2c0 = (double)param_1[0xc9];
    local_2b8 = (double)param_1[200];
    dVar18 = local_e8 - local_2b8;
    dVar20 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x47];
    dVar3 = (double)param_1[0x48];
    local_2a8 = (local_e0 - local_2c0) * dVar2;
    local_2b0 = (local_d8 - local_2c8) * dVar3;
    dVar4 = dVar18 * dVar20 + local_2a8 + local_2b0;
    dVar23 = -dVar20;
    dVar21 = (local_d8 - local_2c8) - dVar3 * dVar4;
    dVar19 = (local_e0 - local_2c0) - dVar2 * dVar4;
    dVar20 = dVar18 - dVar4 * dVar20;
    uVar14 = 0xffffffff;
    uVar24 = 0x7fffffff;
    fVar15 = (float)*(double *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x290) *
             *(float *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x640);
    fVar17 = *(float *)((longlong)param_1 +
                       (ulonglong)
                       ((local_e8 * dVar23 - local_e0 * dVar2) - local_d8 * dVar3 <=
                       (dVar23 * local_2b8 - dVar2 * local_2c0) - dVar3 * local_2c8) * 4 + 0x79c);
    fVar16 = 0.0;
    if (0.0 <= fVar17) {
      fVar16 = fVar17;
    }
    bVar8 = (float)(dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19) <= 0.0001 &&
            ABS((float)((dVar18 * dVar23 - local_2a8) - local_2b0)) < fVar16 * (fVar15 + fVar15);
    local_2a0 = dVar22;
LAB_143434c60:
    if (!(bool)(bVar7 & bVar8)) {
      if (bVar8 == true && (*(byte *)((longlong)param_1 + 0x5bc) & 0x20) != 0) {
        dVar20 = (double)param_1[0x46];
        dVar2 = (double)param_1[0x47];
        dVar3 = (double)param_1[0x48];
        dVar23 = (local_2b8 * -dVar20 - local_2c0 * dVar2) - local_2c8 * dVar3;
        dVar21 = local_108 * dVar3 + local_118 * dVar20 + local_110 * dVar2;
        local_108 = (local_108 - dVar3 * dVar21) - dVar3 * dVar23;
        local_110 = (local_110 - dVar2 * dVar21) - dVar2 * dVar23;
        local_118 = (local_118 - dVar21 * dVar20) - dVar23 * dVar20;
      }
      goto LAB_143434e20;
    }
    plVar12 = (longlong *)FUN_1479c5724(param_1);
    if (plVar12 != (longlong *)0x0) {
      cVar10 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (cVar10 == '\0') {
        param_1[0xcb] = 0;
        goto LAB_143434e20;
      }
    }
    local_138 = *(undefined4 *)pdVar1;
    uStack_134 = *(undefined4 *)((longlong)param_1 + 0x644);
    uStack_130 = (undefined4)param_1[0xc9];
    uStack_12c = *(undefined4 *)((longlong)param_1 + 0x64c);
    local_128 = (double)param_1[0xca];
    uStack_120 = param_1[0xcb];
  }
  if (uStack_120 == 0) {
    local_2e8 = &local_100;
    local_2e0 = &local_e8;
    (**(code **)(*param_1 + 0x618))(param_1,param_3 + 1,param_2,param_2);
  }
  else {
    dVar20 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x47];
    dVar3 = (double)param_1[0x48];
    dVar23 = local_108 * dVar3 + local_118 * dVar20 + dVar2 * local_110;
    dVar21 = local_128 * dVar3 +
             (double)CONCAT44(uStack_134,local_138) * dVar20 +
             (double)CONCAT44(uStack_12c,uStack_130) * dVar2;
    local_148 = dVar3 * dVar21 + (local_108 - dVar3 * dVar23);
    dStack_150 = dVar2 * dVar21 + (local_110 - dVar2 * dVar23);
    local_158 = dVar21 * dVar20 + (local_118 - dVar23 * dVar20);
    if ((*(byte *)((longlong)param_1 + 0x5bc) & 0x20) != 0) {
      fVar16 = (float)*(double *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x290) *
               *(float *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x640);
      fVar16 = fVar16 + fVar16;
      fVar17 = 0.0;
      if (0.0 <= *(float *)((longlong)param_1 + 0x79c)) {
        fVar17 = *(float *)((longlong)param_1 + 0x79c);
      }
      local_2d8 = 0.0;
      if (0.0 <= *(float *)(param_1 + 0xf4)) {
        local_2d8 = *(float *)(param_1 + 0xf4);
      }
      local_2d8 = local_2d8 * fVar16;
      local_2e0 = (double *)CONCAT44(local_2e0._4_4_,fVar17 * fVar16);
      local_2e8 = &local_158;
      param_4 = &local_e8;
      (**(code **)(*param_1 + 2000))(param_1,&local_270,param_2,param_4);
      local_158 = (double)CONCAT44(uStack_26c,local_270);
      local_148 = local_260;
      dStack_150 = dStack_268;
    }
    local_160 = local_148 - local_d8;
    local_168 = dStack_150 - local_e0;
    local_170 = local_158 - local_e8;
    if (((9.999999747378752e-05 < ABS(local_170)) ||
        (9.999999747378752e-05 < (double)((ulonglong)local_168 & CONCAT44(uVar24,uVar14)))) ||
       (9.999999747378752e-05 < (double)((ulonglong)local_160 & CONCAT44(uVar24,uVar14)))) {
      memset(&local_270,0,0x100);
      local_1a0 = 0xffffffff;
      uStack_26c = 0x3f800000;
      local_1cc = 0xffffffff;
      uVar13 = CONCAT71((int7)((ulonglong)param_4 >> 8),(char)param_1[0x69]) & 0xffffffffffffff20;
      lVar6 = param_1[0x22];
      local_298 = *(undefined8 *)(lVar6 + 0x240);
      uStack_290 = *(undefined8 *)(lVar6 + 0x248);
      local_288 = *(undefined4 *)(lVar6 + 0x250);
      uStack_284 = *(undefined4 *)(lVar6 + 0x254);
      uStack_280 = *(undefined4 *)(lVar6 + 600);
      uStack_27c = *(undefined4 *)(lVar6 + 0x25c);
      local_2e0 = (double *)((ulonglong)local_2e0 & 0xffffffffffffff00);
      local_2e8 = (double *)&local_270;
      FUN_1402eda10(param_1,&local_170,&local_298,CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 5));
    }
    bVar11 = *(byte *)((longlong)param_1 + 0x5b4);
    if ((((bVar11 & 0x20) == 0) && ((char)param_1[0x1f0] == '\0')) &&
       ((*(byte *)(param_1 + 0x1b6) & 3) == 0)) {
      (**(code **)(*param_1 + 0x578))(param_1,&local_270);
      dVar22 = 1.0 / dVar22;
      param_1[0x25] = (longlong)(dVar22 * ((double)CONCAT44(uStack_26c,local_270) - local_e8));
      param_1[0x26] = (longlong)((dStack_268 - local_e0) * dVar22);
      param_1[0x27] = (longlong)((local_260 - local_d8) * dVar22);
      (**(code **)(*param_1 + 0x8d8))(param_1);
      bVar11 = *(byte *)((longlong)param_1 + 0x5b4);
    }
    *(byte *)((longlong)param_1 + 0x5b4) = bVar11 & 0xdf;
  }
LAB_1434346fa:
  if ((local_d0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343525c FUN_14343525c body=2226 status=ok
// SIG undefined FUN_14343525c(void)

double * FUN_14343525c(longlong *param_1,double *param_2,float param_3,double *param_4,
                      double *param_5,float param_6,float param_7)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined1 auStack_298 [32];
  double *local_278;
  undefined1 *local_270;
  float local_25c;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined4 local_1b4;
  byte local_1ab;
  undefined4 local_188;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  param_2[2] = param_5[2];
  dVar12 = param_5[1];
  *param_2 = *param_5;
  param_2[1] = dVar12;
  if (param_6 + param_7 < 1e-08) goto LAB_143435a86;
  dVar13 = (double)param_6;
  dVar12 = (double)param_7;
  local_148 = (double)param_1[0x48] * dVar12 + param_5[2];
  local_130 = param_5[2] - (double)param_1[0x48] * dVar13;
  local_150 = (double)param_1[0x47] * dVar12 + param_5[1];
  local_138 = param_5[1] - (double)param_1[0x47] * dVar13;
  local_158 = (double)param_1[0x46] * dVar12 + *param_5;
  local_140 = *param_5 - dVar13 * (double)param_1[0x46];
  bVar8 = *(byte *)((longlong)param_1 + 0x70d) & 1;
  if ((((((bVar8 == 0) || ((double)param_1[0xda] != local_140)) ||
        (NAN((double)param_1[0xda]) || NAN(local_140))) ||
       (((double)param_1[0xdb] != local_138 || (NAN((double)param_1[0xdb]) || NAN(local_138))))) ||
      (((double)param_1[0xdc] != local_130 ||
       ((NAN((double)param_1[0xdc]) || NAN(local_130) || ((double)param_1[0xdd] != local_158))))))
     || ((NAN((double)param_1[0xdd]) || NAN(local_158) ||
         (((double)param_1[0xde] != local_150 || (NAN((double)param_1[0xde]) || NAN(local_150)))))))
  {
    bVar1 = false;
  }
  else {
    bVar1 = local_148 == (double)param_1[0xdf];
  }
  fVar9 = *(float *)((longlong)param_1 + 0x794) - param_3;
  *(float *)((longlong)param_1 + 0x794) = fVar9;
  if (fVar9 <= 0.0) {
    if ((!bVar1) || ((*(byte *)((longlong)param_1 + 0x5b6) & 2) != 0)) {
      memset(local_258,0,0x100);
      local_188 = 0xffffffff;
      local_254 = 0x3f800000;
      local_1b4 = 0xffffffff;
      local_278 = param_5;
      local_270 = local_258;
      (**(code **)(*param_1 + 0x7d8))(param_1,&local_140,&local_158,param_4);
      if ((local_1ab & 3) == 1) {
        memcpy(param_1 + 0xcc,local_258,0x100);
      }
      else {
        local_f8 = param_1[0xdc];
        local_108 = param_1[0xda];
        lStack_100 = param_1[0xdb];
        local_118 = param_1[0xdf];
        local_128 = param_1[0xdd];
        lStack_120 = param_1[0xde];
        memset(param_1 + 0xcc,0,0x100);
        *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
        *(undefined4 *)((longlong)param_1 + 0x704) = 0xffffffff;
        *(undefined4 *)((longlong)param_1 + 0x664) = 0x3f800000;
        param_1[0xdc] = local_f8;
        param_1[0xda] = local_108;
        param_1[0xdb] = lStack_100;
        param_1[0xdf] = local_118;
        param_1[0xdd] = local_128;
        param_1[0xde] = lStack_120;
      }
    }
    fVar9 = *(float *)(param_1 + 0xf2);
    fVar10 = 0.0;
    if (1e-08 < fVar9) {
      fVar10 = (float)FUN_1447c7e44(*(uint *)((longlong)param_1 + 0x794) ^ 0x80000000);
      fVar9 = *(float *)(param_1 + 0xf2);
    }
    *(float *)((longlong)param_1 + 0x794) = fVar9 - fVar10;
    bVar8 = *(byte *)((longlong)param_1 + 0x70d) & 1;
  }
  if (bVar8 == 0) goto LAB_143435a86;
  if (bVar1) {
    dVar12 = (double)param_1[0x46];
    dVar13 = (double)param_1[0x47];
    dVar14 = (double)param_1[0x48];
    dVar11 = (-dVar12 * *param_4 - param_4[1] * dVar13) - param_4[2] * dVar14;
    if (0.009999999776482582 <
        ABS(dVar11 - (((double)param_1[0xd1] * -dVar12 - (double)param_1[0xd2] * dVar13) -
                     (double)param_1[0xd3] * dVar14))) goto LAB_14343568b;
    dVar2 = param_2[2] * dVar14 + *param_2 * dVar12 + dVar13 * param_2[1];
    dVar14 = (param_2[2] - dVar14 * dVar2) - dVar14 * dVar11;
    *param_2 = (*param_2 - dVar2 * dVar12) - dVar12 * dVar11;
    param_2[1] = (param_2[1] - dVar13 * dVar2) - dVar13 * dVar11;
  }
  else {
LAB_14343568b:
    if ((char)param_1[0x52] == '\x01') {
      dVar11 = (((double)param_1[0xd3] - local_130) * (double)param_1[0xd6] +
               ((double)param_1[0xd1] - local_140) * (double)param_1[0xd4] +
               ((double)param_1[0xd2] - local_138) * (double)param_1[0xd5]) /
               ((double)param_1[0xd6] * (local_148 - local_130) +
               (double)param_1[0xd4] * (local_158 - local_140) +
               (double)param_1[0xd5] * (local_150 - local_138));
      dVar12 = (double)param_1[0x46];
      dVar13 = (double)param_1[0x47];
      dVar14 = (double)param_1[0x48];
      uVar6 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar16 = SUB84(dVar14,0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar19 = SUB84(dVar13,0);
      uVar17 = SUB84(dVar12,0);
      uVar18 = (uint)((ulonglong)-dVar12 >> 0x20);
      dVar11 = (-dVar12 * (dVar11 * (local_158 - local_140) + local_140) -
               ((local_150 - local_138) * dVar11 + local_138) * dVar13) -
               ((local_148 - local_130) * dVar11 + local_130) * dVar14;
      local_25c = param_3;
    }
    else {
      dVar12 = (double)-(param_6 + param_7);
      dVar11 = ((((double)param_1[0xd3] - local_130) * (double)param_1[0xd6] +
                ((double)param_1[0xd1] - local_140) * (double)param_1[0xd4] +
                ((double)param_1[0xd2] - local_138) * (double)param_1[0xd5]) /
               ((double)param_1[0xd6] * dVar12)) * dVar12 + local_130;
      dVar12 = (double)param_1[0x46];
      dVar13 = (double)param_1[0x47];
      dVar14 = (double)param_1[0x48];
      uVar6 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar16 = SUB84(dVar14,0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar19 = SUB84(dVar13,0);
      uVar18 = (uint)((ulonglong)dVar12 >> 0x20) ^ 0x80000000;
      uVar17 = SUB84(dVar12,0);
    }
    dVar2 = local_130 * -(double)CONCAT44(uVar6,uVar16) +
            local_140 * (double)CONCAT44(uVar18,uVar17) +
            local_138 * -(double)CONCAT44(uVar7,uVar19);
    dVar4 = local_148 * -(double)CONCAT44(uVar6,uVar16) +
            local_158 * (double)CONCAT44(uVar18,uVar17) +
            local_150 * -(double)CONCAT44(uVar7,uVar19);
    dVar15 = dVar2;
    if (dVar4 <= dVar2) {
      dVar15 = dVar4;
    }
    if (dVar2 <= dVar4) {
      dVar2 = dVar4;
    }
    if (dVar2 <= dVar11) {
      dVar11 = dVar2;
    }
    if (dVar11 <= dVar15) {
      dVar11 = dVar15;
    }
    dVar4 = 0.0;
    if (0.0 <= (double)*(float *)(param_1 + 0xf3)) {
      dVar4 = (double)*(float *)(param_1 + 0xf3);
    }
    if (0.0 < dVar4) {
      dVar5 = -(double)CONCAT44(uVar6,uVar16) * param_4[2] +
              (double)CONCAT44(uVar18,uVar17) * *param_4 +
              -(double)CONCAT44(uVar7,uVar19) * param_4[1];
      dVar3 = dVar11 - dVar5;
      if (9.99999993922529e-09 <= dVar3 * dVar3) {
        dVar4 = dVar4 * (double)param_3;
        if (1.0 <= dVar4) {
          dVar4 = 1.0;
        }
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        dVar11 = dVar5 + dVar3 * dVar4;
      }
    }
    if (dVar2 <= dVar11) {
      dVar11 = dVar2;
    }
    if (dVar11 <= dVar15) {
      dVar11 = dVar15;
    }
    dVar2 = param_2[2] * dVar14 + *param_2 * dVar12 + dVar13 * param_2[1];
    dVar14 = (param_2[2] - dVar14 * dVar2) - dVar14 * dVar11;
    *param_2 = (*param_2 - dVar2 * dVar12) - dVar11 * dVar12;
    param_2[1] = (param_2[1] - dVar13 * dVar2) - dVar13 * dVar11;
  }
  param_2[2] = dVar14;
LAB_143435a86:
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143435b10 FUN_143435b10 body=3894 status=ok
// SIG undefined FUN_143435b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143435b10(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  double *param_5,void *param_6)

{
  double dVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  code *pcVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  code *pcVar16;
  code *pcVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  code *pcVar22;
  int iVar23;
  code **ppcVar24;
  code *_Src;
  code *pcVar25;
  longlong *plVar26;
  longlong lVar27;
  uint uVar28;
  code *_Src_00;
  ulonglong uVar29;
  uint uVar30;
  code *pcVar31;
  bool bVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_5b8 [32];
  code **local_598;
  undefined4 local_590;
  ulonglong *local_588;
  undefined8 *local_580;
  wchar_t *local_578;
  code *local_570;
  undefined1 *local_568;
  code **local_560;
  code *local_558;
  code *local_550;
  code **local_548;
  ulonglong local_540;
  code *local_538;
  code *local_530;
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4ea;
  undefined1 local_4e9;
  ulonglong local_4e8;
  undefined8 local_4e0;
  undefined1 local_4d8;
  undefined2 local_4d7;
  undefined1 local_4d5;
  undefined4 local_4d4;
  undefined1 local_4d0;
  undefined4 local_4cc;
  undefined1 local_4c8;
  undefined4 local_4c4;
  undefined2 local_4c0;
  longlong local_498;
  undefined8 local_490;
  longlong local_478;
  undefined8 local_470;
  code *local_468;
  code *pcStack_460;
  undefined8 local_458 [94];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad0e10) && (FUN_144b3d300(&DAT_14cad0e10), DAT_14cad0e10 == -1)) {
    local_468 = (code *)0x14a83af26;
    pcStack_460 = (code *)CONCAT35(pcStack_460._5_3_,0xf);
    uVar28 = FUN_14001a6c0(&local_468,1);
    DAT_14cad0e08 = (ulonglong)uVar28;
    _Init_thread_footer(&DAT_14cad0e10);
  }
  lVar15 = 0;
  local_4c4 = 0;
  local_4e0 = 0;
  local_4c0 = 0x101;
  local_498 = 0;
  local_490 = 0x800000000;
  local_478 = 0;
  local_470 = 0x400000000;
  local_4d8 = 0;
  local_4cc = 0;
  local_4e8 = DAT_14cad0e08;
  local_4d7 = 1;
  local_4d5 = 0;
  local_4c8 = 0;
  local_4d4 = 0x1000000;
  local_4d0 = 1;
  local_508 = _DAT_14cad0ee0;
  uStack_500 = uRam000000014cad0ee8;
  local_518 = _DAT_14cad0ed0;
  uStack_510 = _DAT_14cad0ed8;
  do {
    cVar2 = *(char *)((longlong)&uStack_510 + lVar15);
    cVar3 = *(char *)((longlong)&uStack_510 + lVar15 + 1);
    cVar4 = *(char *)((longlong)&uStack_510 + lVar15 + 2);
    cVar5 = *(char *)((longlong)&uStack_510 + lVar15 + 3);
    cVar6 = *(char *)((longlong)&uStack_510 + lVar15 + 4);
    cVar7 = *(char *)((longlong)&uStack_510 + lVar15 + 5);
    cVar8 = *(char *)((longlong)&uStack_510 + lVar15 + 6);
    cVar9 = *(char *)((longlong)&uStack_510 + lVar15 + 7);
    if ((*(char *)((longlong)&local_518 + lVar15) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 1) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 1) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 2) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 2) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 3) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 3) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 4) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 4) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 5) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 5) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 6) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 6) = 0;
    }
    if ((*(char *)((longlong)&local_518 + lVar15 + 7) == '\0') != true) {
      *(undefined1 *)((longlong)&local_518 + lVar15 + 7) = 0;
    }
    if ((cVar2 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15) = 0;
    }
    if ((cVar3 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 1) = 0;
    }
    if ((cVar4 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 2) = 0;
    }
    if ((cVar5 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 3) = 0;
    }
    if ((cVar6 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 4) = 0;
    }
    if ((cVar7 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 5) = 0;
    }
    if ((cVar8 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 6) = 0;
    }
    if ((cVar9 == '\0') != true) {
      *(undefined1 *)((longlong)&uStack_510 + lVar15 + 7) = 0;
    }
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x20);
  if ((char)local_518 != '\x01') {
    local_518 = CONCAT71(local_518._1_7_,1);
  }
  bVar13 = *(byte *)(param_1 + 0x5bc) >> 6;
  if (local_518._1_1_ != (bVar13 & 1)) {
    local_518 = CONCAT62(local_518._2_6_,CONCAT11(bVar13,(char)local_518)) & 0xffffffffffff01ff;
  }
  local_528 = (undefined1  [16])0x0;
  lVar15 = *(longlong *)(param_1 + 0xb0);
  if ((lVar15 == 0) &&
     (((*(longlong *)(param_1 + 0xa8) == 0 ||
       ((*(uint *)(*(longlong *)(param_1 + 0xa8) + 8) & 0x10) != 0)) ||
      (lVar15 = FUN_1447210f0(), lVar15 == 0)))) {
    lVar15 = *(longlong *)(param_1 + 0x20);
    if (lVar15 != 0) {
      if (DAT_14cb10130 == 0) {
        local_560 = &local_468;
        local_468 = FUN_140754f84;
        local_550 = FUN_14081d0ea;
        local_558 = FUN_14081d0ea;
        local_568 = &LAB_147da9a76;
        local_570 = FUN_1409f3105;
        local_578 = L"Engine";
        local_580 = (undefined8 *)0x0;
        local_588 = (ulonglong *)CONCAT44(local_588._4_4_,0x10000000);
        local_590 = 8;
        local_598 = (code **)CONCAT44(local_598._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143435e02;
    }
    lVar15 = 0;
  }
LAB_143435e02:
  local_468 = (code *)*param_3;
  pcStack_460 = (code *)param_3[1];
  local_598 = &local_468;
  local_458[0] = param_3[2];
  local_168 = *param_2;
  uStack_160 = param_2[1];
  local_158 = param_2[2];
  local_570 = (code *)&local_4e9;
  local_578 = (wchar_t *)&DAT_14cad0f08;
  local_580 = &local_518;
  local_588 = &local_4e8;
  local_590 = 0;
  FUN_1401e2596(lVar15,local_528,&local_4ea);
  if ((int)local_528._8_4_ < 1) {
    pcVar22 = (code *)local_528._0_8_;
  }
  else {
    bVar13 = *(byte *)(param_1 + 0x5bc);
    uVar28 = 0;
    do {
      lVar15 = (longlong)(int)uVar28 * 0x100;
      iVar14 = *(int *)(local_528._0_8_ + 0xdc + lVar15);
      bVar33 = true;
      if (iVar14 == 0) {
LAB_143435f3f:
        bVar32 = false;
      }
      else {
        uVar30 = *(uint *)(local_528._0_8_ + lVar15 + 0xd8);
        bVar32 = false;
        if ((-1 < (int)uVar30) && (bVar32 = false, (int)uVar30 < DAT_14c9647dc)) {
          plVar26 = (longlong *)
                    ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
          if ((plVar26 == (longlong *)0x0) ||
             ((((int)plVar26[2] != iVar14 || ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) ||
              (plVar26 = (longlong *)*plVar26, plVar26 == (longlong *)0x0)))) goto LAB_143435f3f;
          iVar14 = (**(code **)(*plVar26 + 0x578))(plVar26,0);
          bVar32 = iVar14 == 2;
          iVar14 = (**(code **)(*plVar26 + 0x578))(plVar26,1);
          bVar33 = iVar14 != 2;
        }
      }
      bVar18 = (bVar13 & 0x40) == 0;
      if (bVar33) {
        bVar18 = (bool)(bVar32 ^ 1U);
      }
      if (bVar32) {
        bVar18 = (bool)(bVar32 ^ 1U);
      }
      if (bVar18) {
        iVar14 = ~uVar28 + local_528._8_4_;
        if (iVar14 != 0) {
          if (0 < iVar14) {
            iVar14 = 1;
          }
          memmove((void *)(lVar15 + local_528._0_8_),
                  (void *)((longlong)(local_528._8_4_ - iVar14) * 0x100 + local_528._0_8_),
                  (longlong)iVar14 << 8);
        }
        uVar30 = local_528._8_4_ - 1;
        local_528._8_4_ = uVar30;
      }
      else {
        uVar28 = uVar28 + 1;
        uVar30 = local_528._8_4_;
      }
    } while ((int)uVar28 < (int)uVar30);
    uVar11 = local_528._0_8_;
    pcVar22 = (code *)local_528._0_8_;
    if (0 < (int)uVar30) {
      if (uVar30 != 1) {
        memset(local_458,0,0x2f0);
        local_468 = (code *)uVar11;
        pcStack_460 = (code *)(uVar11 + (ulonglong)uVar30 * 0x100 + -0x100);
        fVar34 = logf((float)(int)uVar30);
        local_458[0] = CONCAT44(local_458[0]._4_4_,(int)(longlong)(fVar34 + fVar34));
        ppcVar24 = &local_468;
        do {
          pcVar22 = *ppcVar24;
          _Src = ppcVar24[1];
          iVar14 = *(int *)(ppcVar24 + 2);
          iVar23 = (int)((ulonglong)((longlong)_Src - (longlong)pcVar22) >> 8);
          uVar28 = iVar23 + 1;
          pcVar17 = pcVar22;
          _Src_00 = pcVar22;
          pcVar31 = _Src;
          local_548 = ppcVar24;
          if (iVar14 != 0) {
LAB_14343606c:
            if (8 < (int)uVar28) {
              local_540 = CONCAT44(local_540._4_4_,iVar14);
              local_538 = pcVar17;
              local_530 = pcVar31;
              memcpy(&local_168,_Src_00 + (ulonglong)(uVar28 >> 1) * 0x100,0x100);
              memcpy(_Src_00 + (ulonglong)(uVar28 >> 1) * 0x100,_Src_00,0x100);
              memcpy(_Src_00,&local_168,0x100);
              pcVar17 = _Src + 0x100;
              pcVar22 = _Src_00;
              do {
                dVar1 = param_5[2];
                dVar35 = *param_5;
                dVar36 = param_5[1];
                pcVar31 = pcVar22 + 0x100;
                pcVar12 = pcVar22 + 0x100;
                do {
                  pcVar22 = pcVar12;
                  pcVar16 = pcVar31;
                  if (_Src < pcVar22) break;
                  pcVar31 = pcVar16 + 0x100;
                  pcVar12 = pcVar22 + 0x100;
                } while ((float)((dVar1 - *(double *)(pcVar22 + 0x38)) *
                                 (dVar1 - *(double *)(pcVar22 + 0x38)) +
                                (dVar35 - *(double *)(pcVar22 + 0x28)) *
                                (dVar35 - *(double *)(pcVar22 + 0x28)) +
                                (dVar36 - *(double *)(pcVar22 + 0x30)) *
                                (dVar36 - *(double *)(pcVar22 + 0x30))) <=
                         (float)((dVar1 - *(double *)(_Src_00 + 0x38)) *
                                 (dVar1 - *(double *)(_Src_00 + 0x38)) +
                                (dVar35 - *(double *)(_Src_00 + 0x28)) *
                                (dVar35 - *(double *)(_Src_00 + 0x28)) +
                                (dVar36 - *(double *)(_Src_00 + 0x30)) *
                                (dVar36 - *(double *)(_Src_00 + 0x30))));
                pcVar12 = pcVar17 + -0x200;
                do {
                  pcVar25 = pcVar17;
                  pcVar31 = pcVar12;
                  pcVar17 = pcVar25 + -0x100;
                  if (pcVar17 <= _Src_00) break;
                  pcVar12 = pcVar31 + -0x100;
                } while ((float)((dVar1 - *(double *)(_Src_00 + 0x38)) *
                                 (dVar1 - *(double *)(_Src_00 + 0x38)) +
                                (dVar35 - *(double *)(_Src_00 + 0x28)) *
                                (dVar35 - *(double *)(_Src_00 + 0x28)) +
                                (dVar36 - *(double *)(_Src_00 + 0x30)) *
                                (dVar36 - *(double *)(_Src_00 + 0x30))) <=
                         (float)((dVar1 - *(double *)(pcVar25 + -200)) *
                                 (dVar1 - *(double *)(pcVar25 + -200)) +
                                (dVar35 - *(double *)(pcVar25 + -0xd8)) *
                                (dVar35 - *(double *)(pcVar25 + -0xd8)) +
                                (dVar36 - *(double *)(pcVar25 + -0xd0)) *
                                (dVar36 - *(double *)(pcVar25 + -0xd0))));
                if (pcVar17 < pcVar22) goto LAB_143436268;
                memcpy(&local_168,pcVar22,0x100);
                memcpy(pcVar22,pcVar17,0x100);
                memcpy(pcVar17,&local_168,0x100);
              } while( true );
            }
            ppcVar24 = local_548;
            if (_Src_00 < _Src) {
              do {
                pcVar22 = _Src_00;
                if (_Src_00 + 0x100 <= _Src) {
                  pcVar17 = _Src_00 + 0x100;
                  do {
                    dVar35 = param_5[2] - *(double *)(pcVar22 + 0x38);
                    dVar36 = param_5[1] - *(double *)(pcVar22 + 0x30);
                    dVar38 = *param_5 - *(double *)(pcVar22 + 0x28);
                    dVar37 = param_5[2] - *(double *)(pcVar17 + 0x38);
                    dVar39 = param_5[1] - *(double *)(pcVar17 + 0x30);
                    dVar1 = *param_5 - *(double *)(pcVar17 + 0x28);
                    pcVar31 = pcVar17;
                    if ((float)(dVar37 * dVar37 + dVar1 * dVar1 + dVar39 * dVar39) <=
                        (float)(dVar35 * dVar35 + dVar38 * dVar38 + dVar36 * dVar36)) {
                      pcVar31 = pcVar22;
                    }
                    pcVar22 = pcVar31;
                    pcVar17 = pcVar17 + 0x100;
                  } while (pcVar17 <= _Src);
                }
                pcVar17 = _Src + -0x100;
                memcpy(&local_168,pcVar22,0x100);
                memcpy(pcVar22,_Src,0x100);
                memcpy(_Src,&local_168,0x100);
                ppcVar24 = local_548;
                _Src = pcVar17;
              } while (_Src_00 < pcVar17);
            }
            goto LAB_143436865;
          }
LAB_14343635a:
          ppcVar24 = local_548;
          if (uVar28 != 0) {
            uVar30 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
            do {
              local_540 = (ulonglong)uVar30;
              uVar29 = local_540;
              while (uVar10 = uVar30 * 2 + 1, (int)uVar10 < (int)uVar28) {
                uVar19 = uVar30 * 2 + 2;
                dVar1 = param_5[2];
                dVar35 = *param_5;
                dVar36 = param_5[1];
                uVar30 = uVar10;
                if ((int)uVar19 < (int)uVar28) {
                  lVar15 = (longlong)(int)uVar19 * 0x100;
                  lVar27 = (longlong)(int)uVar10 * 0x100;
                  if ((float)((dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) *
                              (dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) +
                             (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) *
                             (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) +
                             (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30)) *
                             (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30))) <=
                      (float)((dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) *
                              (dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) +
                             (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) *
                             (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) +
                             (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)) *
                             (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)))) {
                    uVar30 = uVar19;
                  }
                }
                lVar15 = (longlong)(int)uVar29 * 0x100;
                lVar27 = (longlong)(int)uVar30 * 0x100;
                if ((float)((dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) *
                            (dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) +
                           (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) *
                           (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) +
                           (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30)) *
                           (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30))) <=
                    (float)((dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) *
                            (dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) +
                           (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) *
                           (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) +
                           (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)) *
                           (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)))) break;
                memcpy(&local_168,pcVar22 + lVar15,0x100);
                memcpy(pcVar22 + lVar15,pcVar22 + lVar27,0x100);
                memcpy(pcVar22 + lVar27,&local_168,0x100);
                uVar29 = (ulonglong)uVar30;
              }
              uVar30 = (int)local_540 - 1;
            } while ((int)local_540 != 0);
            ppcVar24 = local_548;
            if (1 < (int)uVar28) {
              memcpy(&local_168,pcVar22,0x100);
              memcpy(pcVar22,pcVar22 + ((ulonglong)uVar28 - 1) * 0x100,0x100);
              memcpy(pcVar22 + ((ulonglong)uVar28 - 1) * 0x100,&local_168,0x100);
              ppcVar24 = local_548;
              uVar29 = (ulonglong)uVar28 - 1;
              if (uVar28 != 2) {
                do {
                  iVar14 = 0;
                  iVar21 = 1;
                  iVar23 = 0;
                  do {
                    iVar14 = iVar14 + 2;
                    dVar1 = param_5[2];
                    dVar35 = *param_5;
                    dVar36 = param_5[1];
                    iVar20 = iVar21;
                    if ((longlong)iVar14 < (longlong)uVar29) {
                      lVar15 = (longlong)iVar14 * 0x100;
                      lVar27 = (longlong)iVar21 * 0x100;
                      if ((float)((dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) *
                                  (dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) +
                                 (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) *
                                 (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) +
                                 (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30)) *
                                 (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30))) <=
                          (float)((dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) *
                                  (dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) +
                                 (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) *
                                 (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) +
                                 (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)) *
                                 (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)))) {
                        iVar20 = iVar14;
                      }
                    }
                    lVar15 = (longlong)iVar23 * 0x100;
                    lVar27 = (longlong)iVar20 * 0x100;
                    if ((float)((dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) *
                                (dVar1 - *(double *)(pcVar22 + lVar27 + 0x38)) +
                               (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) *
                               (dVar35 - *(double *)(pcVar22 + lVar27 + 0x28)) +
                               (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30)) *
                               (dVar36 - *(double *)(pcVar22 + lVar27 + 0x30))) <=
                        (float)((dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) *
                                (dVar1 - *(double *)(pcVar22 + lVar15 + 0x38)) +
                               (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) *
                               (dVar35 - *(double *)(pcVar22 + lVar15 + 0x28)) +
                               (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)) *
                               (dVar36 - *(double *)(pcVar22 + lVar15 + 0x30)))) break;
                    memcpy(&local_168,pcVar22 + lVar15,0x100);
                    memcpy(pcVar22 + lVar15,pcVar22 + lVar27,0x100);
                    memcpy(pcVar22 + lVar27,&local_168,0x100);
                    iVar14 = iVar20 * 2;
                    iVar21 = iVar20 * 2 + 1;
                    iVar23 = iVar20;
                  } while ((longlong)iVar21 < (longlong)uVar29);
                  memcpy(&local_168,pcVar22,0x100);
                  memcpy(pcVar22,pcVar22 + (uVar29 - 1) * 0x100,0x100);
                  memcpy(pcVar22 + (uVar29 - 1) * 0x100,&local_168,0x100);
                  bVar33 = 2 < uVar29;
                  ppcVar24 = local_548;
                  uVar29 = uVar29 - 1;
                } while (bVar33);
              }
            }
          }
LAB_143436865:
          ppcVar24 = ppcVar24 + -3;
        } while (&local_468 <= ppcVar24);
        pcVar22 = (code *)local_528._0_8_;
      }
      memcpy(param_6,pcVar22,0x100);
      *(byte *)((longlong)param_6 + 0xad) = *(byte *)((longlong)param_6 + 0xad) | 1;
    }
  }
  if (pcVar22 != (code *)0x0) {
    FUN_1400020a8(pcVar22);
  }
  if (local_478 != 0) {
    FUN_1400020a8();
  }
  if (local_498 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143436268:
  memcpy(&local_168,_Src_00,0x100);
  memcpy(_Src_00,pcVar17,0x100);
  memcpy(pcVar17,&local_168,0x100);
  iVar14 = (int)local_540 + -1;
  pcVar25 = pcVar25 + -0x200;
  if ((longlong)pcVar31 - (longlong)local_538 < (longlong)local_530 - (longlong)pcVar16) {
    ppcVar24 = local_548;
    if (pcVar22 < _Src) {
      *local_548 = pcVar22;
      local_548[1] = _Src;
      *(int *)(local_548 + 2) = iVar14;
      ppcVar24 = local_548 + 3;
    }
    pcVar22 = _Src_00;
    if (pcVar17 <= _Src_00 + 0x100) goto LAB_143436865;
  }
  else {
    if (_Src_00 + 0x100 < pcVar17) {
      *local_548 = _Src_00;
      local_548[1] = pcVar25;
      *(int *)(local_548 + 2) = iVar14;
      local_548 = local_548 + 3;
    }
    ppcVar24 = local_548;
    pcVar25 = _Src;
    _Src_00 = pcVar16;
    pcVar31 = _Src;
    if (_Src <= pcVar22) goto LAB_143436865;
  }
  local_548 = ppcVar24;
  iVar23 = (int)((ulonglong)((longlong)pcVar31 - (longlong)_Src_00) >> 8);
  uVar28 = iVar23 + 1;
  _Src = pcVar25;
  pcVar17 = _Src_00;
  _Src_00 = pcVar22;
  if (iVar14 == 0) goto LAB_14343635a;
  goto LAB_14343606c;
}



// FUNCTION 143436a4c FUN_143436a4c body=262 status=ok
// SIG undefined FUN_143436a4c(void)

void FUN_143436a4c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)param_1[0x3e] + 0x898))((longlong *)param_1[0x3e],param_3);
  (**(code **)(*param_1 + 0x958))(param_1,local_60,param_2);
  (**(code **)(*param_1 + 0x960))(param_1,&local_48,local_60);
  param_1[0x73] = local_38;
  *(undefined4 *)(param_1 + 0x71) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x38c) = uStack_44;
  *(undefined4 *)(param_1 + 0x72) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStack_3c;
  uVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
  *(undefined4 *)(param_1 + 0x86) = uVar2;
  if (*(char *)(param_1[0x3e] + 0x178) == '\x02') {
    if (param_1[0x15] != 0) {
      iVar1 = FUN_14487fd02();
      if (iVar1 == 3) {
        (**(code **)(*param_1 + 0xa08))(param_1,param_3,param_1 + 0x71);
      }
    }
  }
  else if (*(char *)(param_1[0x3e] + 0x178) == '\x03') {
    (**(code **)(*param_1 + 0x9c8))(param_1,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143436b54 FUN_143436b54 body=498 status=ok
// SIG undefined FUN_143436b54(void)

void FUN_143436b54(longlong param_1,char param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    if (param_2 == '\0') {
      lVar6 = *(longlong *)(param_1 + 0x1f0);
      if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x110) == *(longlong *)(lVar6 + 0x438))) {
        plVar2 = *(longlong **)(lVar6 + 0x10);
        lVar6 = plVar2[0x22];
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 1000))(plVar2);
          lVar6 = plVar2[0x22];
          if (lVar6 == 0) goto LAB_143436c97;
        }
        plVar2 = *(longlong **)(lVar6 + 0x438);
        if (plVar2 != (longlong *)0x0) {
          plVar3 = *(longlong **)(param_1 + 0x118);
          uVar5 = (**(code **)(*plVar2 + 0x578))(plVar2,0);
          (**(code **)(*plVar3 + 0x938))(plVar3,0,uVar5);
          (**(code **)(*plVar2 + 0x578))(plVar2,1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x938))(plVar2,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x938))(*(longlong **)(param_1 + 0x118),1,0);
      local_38 = *(undefined8 *)(param_1 + 0x6e0);
      local_48 = *(undefined8 *)(param_1 + 0x6d0);
      uStack_40 = *(undefined8 *)(param_1 + 0x6d8);
      local_58 = *(undefined8 *)(param_1 + 0x6f8);
      local_68 = *(undefined8 *)(param_1 + 0x6e8);
      uStack_60 = *(undefined8 *)(param_1 + 0x6f0);
      memset((void *)(param_1 + 0x660),0,0x100);
      *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x704) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x664) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x6e0) = local_38;
      *(undefined8 *)(param_1 + 0x6d0) = local_48;
      *(undefined8 *)(param_1 + 0x6d8) = uStack_40;
      *(undefined8 *)(param_1 + 0x6f8) = local_58;
      *(undefined8 *)(param_1 + 0x6e8) = local_68;
      *(undefined8 *)(param_1 + 0x6f0) = uStack_60;
      fVar1 = *(float *)(param_1 + 0x790);
      fVar7 = 0.0;
      if (0.0 < fVar1) {
        uVar4 = rand();
        fVar7 = ((float)(uVar4 & 0x7fff) / 32767.0) * fVar1 - fVar1;
      }
      *(float *)(param_1 + 0x794) = fVar7;
    }
  }
LAB_143436c97:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143436d64 FUN_143436d64 body=589 status=ok
// SIG undefined FUN_143436d64(void)

void FUN_143436d64(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x3d4) & 1) == 0)) {
      cVar1 = (**(code **)(param_1[0x2f] + 0xe8))(param_1 + 0x2f);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
        local_28 = 0.0;
        local_38 = 0.0;
        uStack_30 = 0.0;
        local_48 = 0;
        local_58 = 0;
        uStack_50 = 0;
        if (0.0 < (-(double)param_1[0x46] * (double)param_1[0x71] -
                  (double)param_1[0x72] * (double)param_1[0x47]) -
                  (double)param_1[0x73] * (double)param_1[0x48]) {
          cVar1 = (**(code **)(*param_1 + 0x6b0))(param_1,&local_38);
          if (cVar1 != '\0') {
            if (0.0 < local_28 * (double)param_1[0x73] +
                      local_38 * (double)param_1[0x71] + uStack_30 * (double)param_1[0x72]) {
              local_68 = local_28;
              local_78 = (undefined4)local_38;
              uStack_74 = local_38._4_4_;
              uStack_70 = (undefined4)uStack_30;
              uStack_6c = uStack_30._4_4_;
              cVar1 = (**(code **)(*param_1 + 0x868))(param_1,&local_78,&local_58);
              if (cVar1 != '\0') {
                local_88 = local_48;
                local_98 = (undefined4)local_58;
                uStack_94 = local_58._4_4_;
                uStack_90 = (undefined4)uStack_50;
                uStack_8c = uStack_50._4_4_;
                (**(code **)(*param_1 + 0x6b8))(param_1);
                FUN_1479c1ff6(param_1,param_1 + 0x25,(double)*(float *)((longlong)param_1 + 0x35c));
              }
            }
          }
        }
      }
    }
    else {
      cVar1 = (**(code **)(param_1[0x2f] + 0x128))(param_1 + 0x2f);
      if (cVar1 == '\0') {
        lVar2 = (**(code **)(param_1[0x2f] + 0x50))(param_1 + 0x2f);
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
        }
      }
      else {
        cVar1 = (**(code **)(param_1[0x2f] + 0xe8))();
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143436fe4 FUN_143436fe4 body=3784 status=ok
// SIG undefined FUN_143436fe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143436fe4(longlong *param_1,double *param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  DWORD DVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_408 [32];
  code **local_3e8;
  undefined4 local_3e0;
  code **local_3d8;
  char **local_3d0;
  wchar_t *local_3c8;
  code *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  code *local_3a8;
  code *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  float local_374;
  float local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_340 [4];
  undefined4 local_33c;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined4 local_29c;
  undefined1 local_288 [24];
  undefined4 local_270;
  undefined1 local_239;
  code *local_238;
  double dStack_230;
  double local_228;
  undefined1 local_219;
  undefined1 local_218 [16];
  double local_208;
  code *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1d8 [16];
  double local_1c8;
  code *local_1b8;
  double dStack_1b0;
  double local_1a8;
  code *local_198;
  longlong lStack_190;
  undefined4 local_188;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined2 local_170;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_128;
  undefined8 local_120;
  char *local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_408;
  cVar14 = (**(code **)(*param_1 + 0x600))();
  if (cVar14 == '\0') {
    uVar19 = 0;
    goto LAB_1434375c6;
  }
  dVar24 = param_2[2] * (double)param_1[0x48] +
           *param_2 * (double)param_1[0x46] + (double)param_1[0x47] * param_2[1];
  dVar22 = param_2[2] - (double)param_1[0x48] * dVar24;
  dVar11 = param_2[1] - (double)param_1[0x47] * dVar24;
  dVar20 = *param_2 - dVar24 * (double)param_1[0x46];
  *param_2 = dVar20;
  param_2[1] = dVar11;
  param_2[2] = dVar22;
  dVar24 = dVar22 * dVar22 + dVar20 * dVar20 + dVar11 * dVar11;
  if (((dVar24 != 1.0) || (dVar23 = dVar22, dVar13 = dVar11, dVar21 = dVar20, NAN(dVar24))) &&
     (dVar23 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar21 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar24)) {
    dVar24 = 1.0 / SQRT(dVar24);
    dVar23 = dVar22 * dVar24;
    dVar13 = dVar11 * dVar24;
    dVar21 = dVar20 * dVar24;
  }
  lVar18 = param_1[0x22];
  lVar2 = *(longlong *)(param_1[0x3e] + 0x438);
  dVar11 = *(double *)(lVar2 + 0x280);
  uVar15 = SUB84(dVar11,0);
  uVar25 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar24 = *(double *)(lVar2 + 0x288);
  if (dVar24 <= dVar11) {
    uVar15 = SUB84(dVar24,0);
    uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
  }
  fVar26 = (float)(double)CONCAT44(uVar25,uVar15) * *(float *)(lVar2 + 0x644);
  dVar20 = (double)(fVar26 * 1.2);
  dVar11 = *(double *)(lVar18 + 0x270);
  dVar24 = *(double *)(lVar18 + 0x268);
  *param_2 = dVar21 * dVar20 + *(double *)(lVar18 + 0x260);
  param_2[1] = dVar13 * dVar20 + dVar24;
  param_2[2] = dVar23 * dVar20 + dVar11;
  memset(local_340,0,0x100);
  local_270 = 0xffffffff;
  local_29c = 0xffffffff;
  local_33c = 0x3f800000;
  lVar18 = param_1[0x3e];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad0e20) && (FUN_144b3d300(&DAT_14cad0e20), DAT_14cad0e20 == -1)) {
    local_110 = "CheckWaterJump";
    local_108 = CONCAT35(local_108._5_3_,0xe);
    uVar16 = FUN_14001a6c0(&local_110,1);
    DAT_14cad0e18 = (char *)(ulonglong)uVar16;
    _Init_thread_footer(&DAT_14cad0e20);
  }
  local_ec = 0;
  local_108 = 0;
  local_e8 = 0x101;
  local_c0 = 0;
  local_b8 = 0x800000000;
  local_a0 = 0;
  local_98 = 0x400000000;
  local_100 = 0;
  local_f4 = 0;
  local_110 = DAT_14cad0e18;
  local_ff = 1;
  local_fd = 0;
  local_f0 = 0;
  local_fc = 0;
  local_fa = 0;
  if (lVar18 != 0) {
    local_b0 = *(undefined4 *)(lVar18 + 0xc);
    local_98 = 0x400000001;
    local_108 = *(undefined8 *)(lVar18 + 0x18);
  }
  local_f9 = 0x101;
  local_358 = _DAT_14cad0ee0;
  uStack_350 = uRam000000014cad0ee8;
  local_368 = _DAT_14cad0ed0;
  uStack_360 = _DAT_14cad0ed8;
  lVar18 = 0;
  do {
    bVar3 = *(char *)((longlong)&local_368 + lVar18) == '\x02';
    bVar4 = *(char *)((longlong)&local_368 + lVar18 + 1) == '\x02';
    bVar5 = *(char *)((longlong)&local_368 + lVar18 + 2) == '\x02';
    bVar6 = *(char *)((longlong)&local_368 + lVar18 + 3) == '\x02';
    bVar7 = *(char *)((longlong)&local_368 + lVar18 + 4) == '\x02';
    bVar8 = *(char *)((longlong)&local_368 + lVar18 + 5) == '\x02';
    bVar9 = *(char *)((longlong)&local_368 + lVar18 + 6) == '\x02';
    bVar10 = *(char *)((longlong)&local_368 + lVar18 + 7) == '\x02';
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 1) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 2) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 3) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 4) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 5) = 2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 6) = 2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&local_368 + lVar18 + 7) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 1) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 2) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 3) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 4) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 5) = 2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 6) = 2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&uStack_360 + lVar18 + 7) = 2;
    }
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x20);
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_110,&local_368);
  lVar18 = *(longlong *)(param_1[0x3e] + 0x438);
  dVar11 = *(double *)(lVar18 + 0x280);
  if (*(double *)(lVar18 + 0x288) <= *(double *)(lVar18 + 0x280)) {
    dVar11 = *(double *)(lVar18 + 0x288);
  }
  local_374 = (float)dVar11 * *(float *)(lVar18 + 0x644);
  local_370 = (float)*(double *)(lVar18 + 0x290) * *(float *)(lVar18 + 0x640);
  local_378 = 3;
  uVar15 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
  lVar18 = param_1[0x16];
  if ((lVar18 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar18 = FUN_1447210f0(), lVar18 == 0)))) {
    lVar18 = param_1[4];
    if (lVar18 != 0) {
      if (DAT_14cb10130 == 0) {
        local_3b0 = &local_198;
        local_198 = FUN_140754f84;
        local_3a0 = FUN_14081d0ea;
        local_3a8 = FUN_14081d0ea;
        local_3b8 = &LAB_147da9a76;
        local_3c0 = FUN_1409f3105;
        local_3c8 = L"Engine";
        local_3d0 = (char **)0x0;
        local_3d8 = (code **)CONCAT44(local_3d8._4_4_,0x10000000);
        local_3e0 = 8;
        local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143437502;
    }
    lVar18 = 0;
  }
LAB_143437502:
  local_198 = (code *)param_1[0x4a];
  lStack_190 = param_1[0x4b];
  local_188 = (undefined4)param_1[0x4c];
  uVar25 = *(undefined4 *)((longlong)param_1 + 0x264);
  uStack_180 = (undefined4)param_1[0x4d];
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x26c);
  uStack_184 = (undefined2)uVar25;
  uStack_182 = (undefined1)((uint)uVar25 >> 0x10);
  uStack_181 = (undefined1)((uint)uVar25 >> 0x18);
  lVar2 = param_1[0x22];
  local_398 = *(char **)(lVar2 + 0x260);
  uStack_390 = *(undefined8 *)(lVar2 + 0x268);
  local_388 = *(undefined8 *)(lVar2 + 0x270);
  local_3d8 = (code **)&local_378;
  local_3e8 = &local_198;
  local_3e0 = uVar15;
  local_3d0 = &local_110;
  local_3c8 = (wchar_t *)&local_368;
  cVar14 = FUN_14021655c(lVar18,local_340,&local_398,param_2);
  if (cVar14 == '\0') {
LAB_1434375a0:
    uVar19 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_198 = FUN_141030f22;
      local_3a0 = FUN_14081d0ea;
      local_3a8 = FUN_142b4754c;
      local_3b8 = &LAB_147c45ce0;
      local_3c0 = (code *)&LAB_1463f1ff4;
      local_3c8 = L"Game";
      local_3d0 = (char **)&DAT_4000000000;
      local_3d8 = (code **)CONCAT44(local_3d8._4_4_,0x10000004);
      local_3e0 = 8;
      local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x428);
      local_3b0 = &local_198;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    cVar14 = FUN_140c792b6(local_288,DAT_14caf64b8);
    if (cVar14 != '\0') goto LAB_1434375a0;
    dVar11 = (double)(fVar26 * 3.2);
    auVar12._8_4_ = SUB84(dStack_2e0,0);
    auVar12._0_8_ = -local_2e8;
    auVar12._12_4_ = (uint)((ulonglong)dStack_2e0 >> 0x20) ^ 0x80000000;
    *param_3 = auVar12;
    *(double *)param_3[1] = -local_2d8;
    lVar18 = param_1[0x22];
    dVar24 = (double)*(float *)(param_1 + 0x6b);
    dVar20 = *(double *)(lVar18 + 0x260) - (double)param_1[0x46] * dVar24;
    dVar22 = *(double *)(lVar18 + 0x268) - (double)param_1[0x47] * dVar24;
    uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar24 = *(double *)(lVar18 + 0x270) - dVar24 * (double)param_1[0x48];
    *param_2 = dVar20 - local_2e8 * dVar11;
    param_2[1] = dVar22 - dStack_2e0 * dVar11;
    param_2[2] = dVar24 - local_2d8 * dVar11;
    lVar18 = param_1[0x3e];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cad0e30) && (FUN_144b3d300(), DAT_14cad0e30 == -1)) {
      local_198 = (code *)0x14a83af36;
      lStack_190 = CONCAT35(lStack_190._5_3_,0xe);
      uVar16 = FUN_14001a6c0(&local_198,1);
      DAT_14cad0e28 = (code *)(ulonglong)uVar16;
      _Init_thread_footer();
    }
    local_174 = 0;
    lStack_190 = 0;
    local_170 = 0x101;
    local_148 = 0;
    local_140 = 0x800000000;
    local_128 = 0;
    local_120 = 0x400000000;
    uStack_17c = 0;
    local_198 = DAT_14cad0e28;
    local_188 = 0x101;
    local_178 = 0;
    uStack_184 = 0;
    uStack_182 = 0;
    if (lVar18 != 0) {
      local_138 = *(undefined4 *)(lVar18 + 0xc);
      local_120 = 0x400000001;
      lStack_190 = *(longlong *)(lVar18 + 0x18);
    }
    uStack_181 = 1;
    uStack_180 = CONCAT31(uStack_180._1_3_,1);
    local_388 = _DAT_14cad0ee0;
    uStack_380 = uRam000000014cad0ee8;
    local_398 = _DAT_14cad0ed0;
    uStack_390 = _DAT_14cad0ed8;
    lVar18 = 0;
    do {
      bVar3 = *(char *)((longlong)&local_398 + lVar18) == '\x02';
      bVar4 = *(char *)((longlong)&local_398 + lVar18 + 1) == '\x02';
      bVar5 = *(char *)((longlong)&local_398 + lVar18 + 2) == '\x02';
      bVar6 = *(char *)((longlong)&local_398 + lVar18 + 3) == '\x02';
      bVar7 = *(char *)((longlong)&local_398 + lVar18 + 4) == '\x02';
      bVar8 = *(char *)((longlong)&local_398 + lVar18 + 5) == '\x02';
      bVar9 = *(char *)((longlong)&local_398 + lVar18 + 6) == '\x02';
      bVar10 = *(char *)((longlong)&local_398 + lVar18 + 7) == '\x02';
      if ((bool)(~bVar3 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18) = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 6) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&local_398 + lVar18 + 7) = 2;
      }
      if ((bool)(~bVar3 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18) = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 6) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&uStack_390 + lVar18 + 7) = 2;
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x20);
    (**(code **)(*param_1 + 0x4d8))(param_1,&local_198,&local_398);
    lVar18 = param_1[0x16];
    if ((lVar18 == 0) &&
       (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
        (lVar18 = FUN_1447210f0(), lVar18 == 0)))) {
      lVar18 = param_1[4];
      if (lVar18 != 0) {
        if (DAT_14cb10130 == 0) {
          local_3b0 = &local_1b8;
          local_1b8 = FUN_140754f84;
          local_3a0 = FUN_14081d0ea;
          local_3a8 = FUN_14081d0ea;
          local_3b8 = &LAB_147da9a76;
          local_3c0 = FUN_1409f3105;
          local_3c8 = L"Engine";
          local_3d0 = (char **)0x0;
          local_3d8 = (code **)CONCAT44(local_3d8._4_4_,0x10000000);
          local_3e0 = 8;
          local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x990);
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
        goto LAB_14343797e;
      }
LAB_143437b40:
      uVar19 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
LAB_14343797e:
      local_238 = (code *)*param_2;
      dStack_230 = param_2[1];
      local_228 = param_2[2];
      if (*(longlong *)(lVar18 + 0x260) == 0) goto LAB_143437b40;
      if (*(char *)(*(longlong *)(*(longlong *)(lVar18 + 0x260) + 0x38) + 0x1e9) != '\x01')
      goto LAB_1434379b9;
      if (DAT_14c86a9f8 == '\x01') {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar1 = *(int *)(lVar2 + 0xc60);
        if ((iVar1 == 0x40000002) || (iVar1 == 2)) goto LAB_143437e30;
        if (iVar1 == 1) {
          uVar16 = FUN_140ad26c0();
          param_2 = (double *)(ulonglong)uVar16;
          DVar17 = GetCurrentThreadId();
          if ((uVar16 == DVar17) || (*(int *)(lVar2 + 0xc60) == 0x40000002)) goto LAB_143437e30;
        }
LAB_1434379b9:
        local_3e8 = &local_1b8;
        local_1a8 = local_228;
        local_1b8 = local_238;
        dStack_1b0 = dStack_230;
        local_1d8._8_4_ = SUB84(dVar22,0);
        local_1d8._0_8_ = dVar20;
        local_1d8._12_4_ = uVar25;
        local_3c0 = (code *)&local_219;
        local_3c8 = (wchar_t *)&DAT_14cad0f08;
        local_3e0 = uVar15;
        local_3d8 = &local_198;
        local_3d0 = (char **)&local_398;
        local_1c8 = dVar24;
        cVar14 = FUN_14006c4c7(lVar18,local_340,&local_239);
      }
      else {
LAB_143437e30:
        local_3e8 = &local_1f8;
        local_1e8 = local_228;
        local_1f8 = local_238;
        dStack_1f0 = dStack_230;
        local_218._8_4_ = SUB84(dVar22,0);
        local_218._0_8_ = dVar20;
        local_218._12_4_ = uVar25;
        local_3c0 = (code *)&local_219;
        local_3c8 = (wchar_t *)&DAT_14cad0f08;
        local_3e0 = uVar15;
        local_3d8 = &local_198;
        local_3d0 = (char **)&local_398;
        local_208 = dVar24;
        cVar14 = FUN_143444273(lVar18,local_340,&local_239);
      }
      uVar19 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (cVar14 != '\0') {
        uVar16 = (**(code **)(*param_1 + 0x878))(param_1,local_340);
        uVar19 = (ulonglong)uVar16;
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
LAB_1434375c6:
  if ((local_90 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 143437eae FUN_143437eae body=223 status=ok
// SIG undefined FUN_143437eae(void)

void FUN_143437eae(longlong *param_1,double *param_2,char param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) &&
      ((!NAN(param_2[1]) && (param_2[2] == 0.0)))) && (!NAN(param_2[2]))) {
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x291) != '\0') &&
      ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x600))(param_1), cVar1 != '\0')) {
    dVar4 = *param_2;
    dVar3 = param_2[1];
    dVar2 = param_2[2];
    if ((param_3 == '\0') && (1e-08 < *(float *)(param_1 + 0x6c))) {
      dVar5 = 1.0 / (double)*(float *)(param_1 + 0x6c);
      dVar2 = dVar2 * dVar5;
      dVar3 = dVar3 * dVar5;
      dVar4 = dVar4 * dVar5;
    }
    param_1[0x80] = (longlong)(dVar4 + (double)param_1[0x80]);
    param_1[0x81] = (longlong)(dVar3 + (double)param_1[0x81]);
    param_1[0x82] = (longlong)(dVar2 + (double)param_1[0x82]);
  }
  return;
}



// FUNCTION 143437f8e FUN_143437f8e body=210 status=ok
// SIG undefined FUN_143437f8e(void)

void FUN_143437f8e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  
  if (((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) &&
      ((!NAN(param_2[1]) && (param_2[2] == 0.0)))) && (!NAN(param_2[2]))) {
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x291) != '\0') &&
      ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
     ((cVar3 = (**(code **)(*param_1 + 0x600))(param_1), cVar3 != '\0' &&
      (1e-08 < *(float *)(param_1 + 0x6c))))) {
    dVar4 = 1.0 / (double)*(float *)(param_1 + 0x6c);
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    param_1[0x83] = (longlong)(dVar4 * *param_2 + (double)param_1[0x83]);
    param_1[0x84] = (longlong)(dVar2 * dVar4 + (double)param_1[0x84]);
    param_1[0x85] = (longlong)(dVar1 * dVar4 + (double)param_1[0x85]);
  }
  return;
}



// FUNCTION 143438060 FUN_143438060 body=252 status=ok
// SIG undefined FUN_143438060(void)

void FUN_143438060(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar4 = param_1[0x3e];
  if ((*(byte *)(lVar4 + 0x158) & 4) == 0) {
    dVar1 = (double)param_1[0x25];
    dVar2 = (double)param_1[0x26];
    dVar3 = (double)param_1[0x27];
    dVar11 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (((dVar11 != 1.0) || (dVar9 = dVar2, dVar10 = dVar3, dVar5 = dVar1, NAN(dVar11))) &&
       (dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar9 = dVar2 * dVar11;
      dVar10 = dVar3 * dVar11;
      dVar5 = dVar1 * dVar11;
    }
    param_1[0x71] = (longlong)dVar5;
    param_1[0x72] = (longlong)dVar9;
    param_1[0x73] = (longlong)dVar10;
    uVar8 = 0x3f800000;
  }
  else {
    param_1[0x73] = *(longlong *)(lVar4 + 0x150);
    uVar8 = *(undefined4 *)(lVar4 + 0x144);
    uVar6 = *(undefined4 *)(lVar4 + 0x148);
    uVar7 = *(undefined4 *)(lVar4 + 0x14c);
    *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(lVar4 + 0x140);
    *(undefined4 *)((longlong)param_1 + 0x38c) = uVar8;
    *(undefined4 *)(param_1 + 0x72) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x394) = uVar7;
    uVar8 = (**(code **)(*param_1 + 0x5c0))(param_1);
  }
  *(undefined4 *)(param_1 + 0x86) = uVar8;
  return;
}



// FUNCTION 14343815c FUN_14343815c body=3639 status=ok
// SIG undefined FUN_14343815c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343815c(longlong *param_1,double *param_2,float param_3,float param_4,uint *param_5,
                  float param_6,void *param_7)

{
  uint *_Dst;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  float fVar16;
  char cVar17;
  byte bVar18;
  undefined4 uVar19;
  uint uVar20;
  DWORD DVar21;
  DWORD DVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  uint unaff_XMM7_Db;
  uint unaff_XMM7_Dc;
  uint unaff_XMM7_Dd;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_368 [32];
  code **local_348;
  undefined8 *local_340;
  ulonglong *local_338;
  undefined8 *local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  code **local_310;
  code *local_308;
  code *local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined1 local_2d0 [124];
  undefined4 local_254;
  byte local_24b;
  undefined4 local_228;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d2;
  undefined1 local_1d1;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  code *local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  code *local_188;
  double local_180;
  double local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_159;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uVar29;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *(byte *)param_5 = (byte)*param_5 & 0xf8;
  param_5[1] = 0;
  param_5[2] = 0;
  _Dst = param_5 + 4;
  memset(_Dst,0,0x100);
  param_5[0x38] = 0xffffffff;
  param_5[0x2d] = 0xffffffff;
  param_5[5] = 0x3f800000;
  lVar23 = *(longlong *)(param_1[0x3e] + 0x438);
  dVar25 = *(double *)(lVar23 + 0x280);
  if (*(double *)(lVar23 + 0x288) <= *(double *)(lVar23 + 0x280)) {
    dVar25 = *(double *)(lVar23 + 0x288);
  }
  fVar28 = (float)dVar25 * *(float *)(lVar23 + 0x644);
  fVar32 = (float)*(double *)(lVar23 + 0x290) * *(float *)(lVar23 + 0x640);
  bVar18 = 1;
  if ((param_7 != (void *)0x0) && ((*(byte *)((longlong)param_7 + 0xad) & 3) == 1)) {
    dVar24 = *(double *)((longlong)param_7 + 0x80) - *(double *)((longlong)param_7 + 0x98);
    dVar6 = *(double *)((longlong)param_7 + 0x78) - *(double *)((longlong)param_7 + 0x90);
    dVar27 = *(double *)((longlong)param_7 + 0x70) - *(double *)((longlong)param_7 + 0x88);
    dVar25 = (double)param_1[0x46];
    dVar7 = dVar6 * (double)param_1[0x47];
    dVar33 = dVar24 * (double)param_1[0x48];
    if ((0.0 < (-dVar25 * dVar27 - dVar7) - dVar33) &&
       ((dVar33 = dVar33 + dVar27 * dVar25 + dVar7, dVar24 = dVar24 - (double)param_1[0x48] * dVar33
        , dVar6 = dVar6 - (double)param_1[0x47] * dVar33, dVar27 = dVar27 - dVar33 * dVar25,
        dVar24 * dVar24 + dVar27 * dVar27 + dVar6 * dVar6 <= 9.999999747378752e-05 &&
        (cVar17 = (**(code **)(*param_1 + 0x8f8))
                            (param_1,(longlong)param_7 + 0x10,(longlong)param_7 + 0x28,
                             CONCAT44(unaff_XMM7_Db,fVar28)), cVar17 != '\0')))) {
      bVar18 = (**(code **)(*param_1 + 0x878))(param_1,param_7);
      dVar25 = param_2[2];
      dVar6 = *(double *)((longlong)param_7 + 0x20);
      dVar7 = param_2[1];
      dVar24 = *(double *)((longlong)param_7 + 0x18);
      dVar27 = *param_2;
      dVar33 = *(double *)((longlong)param_7 + 0x10);
      dVar1 = (double)param_1[0x46];
      dVar2 = (double)param_1[0x47];
      dVar3 = (double)param_1[0x48];
      *param_5 = (*param_5 & 0xfffffff8) + (uint)bVar18 * 2 |
                 (uint)((*(byte *)((longlong)param_7 + 0xad) & 3) == 1);
      param_5[1] = (uint)(float)((-dVar1 * (dVar27 - dVar33) - (dVar7 - dVar24) * dVar2) -
                                (dVar25 - dVar6) * dVar3);
      param_5[2] = 0;
      memcpy(_Dst,param_7,0x100);
      if (bVar18 != 0) goto LAB_143438ce8;
      bVar18 = 0;
    }
  }
  if (param_4 < param_3) goto LAB_143438ce8;
  lVar23 = param_1[0x3e];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad0e40) && (FUN_144b3d300(), DAT_14cad0e40 == -1)) {
    local_2f8 = "ComputeFloorDist";
    local_2f0 = 0x10;
    local_2ec = 0;
    uVar20 = FUN_14001a6c0(&local_2f8,1);
    DAT_14cad0e38 = (ulonglong)uVar20;
    _Init_thread_footer();
  }
  local_14c = 0;
  local_168 = 0;
  local_148 = 0x101;
  local_120 = 0;
  local_118 = 0x800000000;
  local_100 = 0;
  local_f8 = 0x400000000;
  local_160 = 0;
  local_154 = 0;
  local_170 = DAT_14cad0e38;
  local_15f = 1;
  local_15d = 0;
  local_150 = 0;
  local_15c = 0;
  local_15a = 0;
  if (lVar23 != 0) {
    local_110 = *(undefined4 *)(lVar23 + 0xc);
    local_f8 = 0x400000001;
    local_168 = *(undefined8 *)(lVar23 + 0x18);
  }
  local_159 = 1;
  local_1e8 = _DAT_14cad0ee0;
  uStack_1e0 = uRam000000014cad0ee8;
  local_1f8 = _DAT_14cad0ed0;
  uStack_1f0 = _DAT_14cad0ed8;
  lVar23 = 0;
  do {
    cVar17 = *(char *)((longlong)&uStack_1f0 + lVar23);
    cVar9 = *(char *)((longlong)&uStack_1f0 + lVar23 + 1);
    cVar10 = *(char *)((longlong)&uStack_1f0 + lVar23 + 2);
    cVar11 = *(char *)((longlong)&uStack_1f0 + lVar23 + 3);
    cVar12 = *(char *)((longlong)&uStack_1f0 + lVar23 + 4);
    cVar13 = *(char *)((longlong)&uStack_1f0 + lVar23 + 5);
    cVar14 = *(char *)((longlong)&uStack_1f0 + lVar23 + 6);
    cVar15 = *(char *)((longlong)&uStack_1f0 + lVar23 + 7);
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23) == DAT_149c360b0) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 1) == DAT_149c360b0._1_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 1) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 2) == DAT_149c360b0._2_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 2) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 3) == DAT_149c360b0._3_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 3) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 4) == DAT_149c360b0._4_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 4) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 5) == DAT_149c360b0._5_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 5) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 6) == DAT_149c360b0._6_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 6) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar23 + 7) == DAT_149c360b0._7_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1f8 + lVar23 + 7) = 2;
    }
    if ((bool)(~(cVar17 == DAT_149c360b0._8_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23) = 2;
    }
    if ((bool)(~(cVar9 == DAT_149c360b0._9_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 1) = 2;
    }
    if ((bool)(~(cVar10 == DAT_149c360b0._10_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 2) = 2;
    }
    if ((bool)(~(cVar11 == DAT_149c360b0._11_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 3) = 2;
    }
    if ((bool)(~(cVar12 == DAT_149c360b0._12_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 4) = 2;
    }
    if ((bool)(~(cVar13 == DAT_149c360b0._13_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 5) = 2;
    }
    if ((bool)(~(cVar14 == DAT_149c360b0._14_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 6) = 2;
    }
    if ((bool)(~(cVar15 == DAT_149c360b0._15_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 7) = 2;
    }
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0x20);
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_170,&local_1f8);
  uVar19 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
  if ((param_6 <= 0.0) || (!(bool)(0.0 < param_4 & bVar18))) {
LAB_143438a51:
    uVar20 = *param_5;
    if (((uVar20 & 1) == 0) && ((*(byte *)((longlong)param_5 + 0xbd) & 2) == 0)) {
      param_5[1] = (uint)param_4;
    }
    else {
      if (0.0 < param_3) {
        dVar25 = *param_2;
        dVar6 = param_2[1];
        dVar7 = param_2[2];
        dVar1 = (double)(fVar32 + param_3);
        dVar24 = (double)param_1[0x48];
        dVar27 = (double)param_1[0x47];
        dVar33 = (double)param_1[0x46];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad0e50) &&
           (FUN_144b3d300(&DAT_14cad0e50), DAT_14cad0e50 == -1)) {
          local_2f8 = "FloorLineTrace";
          local_2f0 = 0xe;
          local_2ec = 0;
          uVar20 = FUN_14001a6c0();
          DAT_14cad0e48 = (ulonglong)uVar20;
          _Init_thread_footer(&DAT_14cad0e50);
        }
        local_170 = DAT_14cad0e48;
        memset(&local_2f8,0,0x100);
        local_228 = 0xffffffff;
        local_254 = 0xffffffff;
        local_2f8 = (char *)CONCAT44(0x3f800000,(undefined4)local_2f8);
        lVar23 = param_1[0x16];
        if ((lVar23 == 0) &&
           (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
            (lVar23 = FUN_1447210f0(), lVar23 == 0)))) {
          lVar23 = param_1[4];
          if (lVar23 != 0) {
            if (DAT_14cb10130 == 0) {
              local_310 = &local_188;
              local_188 = FUN_140754f84;
              local_300 = FUN_14081d0ea;
              local_308 = FUN_14081d0ea;
              local_318 = &LAB_147da9a76;
              local_320 = FUN_1409f3105;
              local_328 = L"Engine";
              local_330 = (undefined8 *)0x0;
              local_338 = (ulonglong *)CONCAT44(local_338._4_4_,0x10000000);
              local_340 = (undefined8 *)CONCAT44(local_340._4_4_,8);
              local_348 = (code **)CONCAT44(local_348._4_4_,0x990);
              FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
            }
            if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
            goto LAB_143438b54;
          }
        }
        else {
LAB_143438b54:
          if (*(longlong *)(lVar23 + 0x260) != 0) {
            dVar24 = dVar24 * dVar1 + dVar7;
            dVar27 = dVar27 * dVar1 + dVar6;
            pcVar8 = (code *)(dVar1 * dVar33 + dVar25);
            if (*(char *)(*(longlong *)(*(longlong *)(lVar23 + 0x260) + 0x38) + 0x1e9) != '\x01')
            goto LAB_143438b84;
            if (DAT_14c86a9f8 == '\x01') {
              lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              iVar4 = *(int *)(lVar5 + 0xc60);
              if ((iVar4 == 0x40000002) || (iVar4 == 2)) goto LAB_143438f14;
              if (iVar4 == 1) {
                DVar21 = FUN_140ad26c0();
                DVar22 = GetCurrentThreadId();
                if ((DVar21 == DVar22) || (*(int *)(lVar5 + 0xc60) == 0x40000002))
                goto LAB_143438f14;
              }
LAB_143438b84:
              local_348 = &local_188;
              local_320 = (code *)&local_1d1;
              local_328 = (wchar_t *)&DAT_14cad0f08;
              local_338 = &local_170;
              local_340 = (undefined8 *)CONCAT44(local_340._4_4_,uVar19);
              local_330 = &local_1f8;
              local_1a0 = dVar25;
              local_198 = dVar6;
              local_190 = dVar7;
              local_188 = pcVar8;
              local_180 = dVar27;
              local_178 = dVar24;
              cVar17 = FUN_14006c4c7(lVar23,&local_2f8,&local_1d2);
            }
            else {
LAB_143438f14:
              local_348 = &local_1b8;
              local_320 = (code *)&local_1d1;
              local_328 = (wchar_t *)&DAT_14cad0f08;
              local_338 = &local_170;
              local_340 = (undefined8 *)CONCAT44(local_340._4_4_,uVar19);
              local_330 = &local_1f8;
              local_1d0 = dVar25;
              local_1c8 = dVar6;
              local_1c0 = dVar7;
              local_1b8 = pcVar8;
              local_1b0 = dVar27;
              local_1a8 = dVar24;
              cVar17 = FUN_143444273(lVar23,&local_2f8,&local_1d2);
            }
            if ((cVar17 != '\0') && (0.0 < local_2f8._4_4_)) {
              fVar32 = local_2f8._4_4_ * (fVar32 + param_3) - fVar32;
              auVar30._0_4_ = ~-(uint)(fVar28 < 2.4) & (uint)-fVar28;
              auVar30._4_4_ = ~unaff_XMM7_Db & (unaff_XMM7_Db ^ 0x80000000);
              auVar30._8_4_ = ~unaff_XMM7_Dc & (unaff_XMM7_Dc ^ 0x80000000);
              auVar30._12_4_ = ~unaff_XMM7_Dd & (unaff_XMM7_Dd ^ 0x80000000);
              *(byte *)param_5 = (byte)*param_5 | 1;
              auVar30 = auVar30 | ZEXT416(-(uint)(fVar28 < 2.4) & 0xc019999a);
              uVar29 = auVar30._0_8_;
              if (auVar30._0_4_ <= fVar32) {
                auVar31._4_12_ = auVar30._4_12_;
                auVar31._0_4_ = fVar32;
                uVar29 = auVar31._0_8_;
              }
              if (((float)uVar29 <= param_3) &&
                 (cVar17 = (**(code **)(*param_1 + 0x878))(param_1,&local_2f8), cVar17 != '\0')) {
                local_348 = (code **)CONCAT71(local_348._1_7_,1);
                FUN_1407b691e(param_5,&local_2f8,param_5[1],uVar29);
                goto LAB_143438cc4;
              }
            }
          }
        }
        uVar20 = *param_5;
      }
      *param_5 = uVar20 & 0xfffffffd;
    }
  }
  else {
    fVar35 = (fVar32 - fVar28) * 0.100000024;
    fVar34 = fVar35 + param_4;
    local_1a0 = (double)CONCAT44(param_6,3);
    local_198 = (double)CONCAT44(local_198._4_4_,fVar32 - fVar35);
    memset(&local_2f8,0,0x100);
    local_228 = 0xffffffff;
    local_254 = 0xffffffff;
    local_2f8 = (char *)CONCAT44(0x3f800000,(undefined4)local_2f8);
    dVar25 = (double)fVar34;
    local_178 = (double)param_1[0x48] * dVar25 + param_2[2];
    local_180 = (double)param_1[0x47] * dVar25 + param_2[1];
    local_188 = (code *)(dVar25 * (double)param_1[0x46] + *param_2);
    local_338 = &local_170;
    local_348 = (code **)CONCAT44(local_348._4_4_,uVar19);
    local_340 = &local_1a0;
    local_330 = &local_1f8;
    cVar17 = (**(code **)(*param_1 + 0x920))(param_1,&local_2f8,param_2);
    if (cVar17 == '\0') goto LAB_143438a51;
    if ((local_24b & 2) == 0) {
      cVar17 = (**(code **)(*param_1 + 0x8f8))(param_1,param_2,local_2d0,local_1a0._4_4_);
      if (cVar17 == '\0') goto LAB_14343882b;
    }
    else {
LAB_14343882b:
      fVar26 = local_1a0._4_4_ + -0.15 + -0.0001;
      fVar16 = 0.0;
      if (0.0 <= fVar26) {
        fVar16 = fVar26;
      }
      local_1a0 = (double)CONCAT44(fVar16,(int)local_1a0);
      fVar26 = fVar16;
      if ((int)local_1a0 - 2U < 2) {
LAB_14343886b:
        if (0.0001 < fVar26) {
LAB_14343887c:
          fVar35 = (fVar32 - fVar28) * 0.9;
          fVar34 = fVar35 + param_4;
          fVar26 = fVar32 - fVar35;
          if (fVar32 - fVar35 <= fVar16) {
            fVar26 = fVar16;
          }
          local_198 = (double)CONCAT44(local_198._4_4_,fVar26);
          memset(&local_2f8,0,0x100);
          local_228 = 0xffffffff;
          local_254 = 0xffffffff;
          local_2f8 = (char *)CONCAT44(0x3f800000,(undefined4)local_2f8);
          dVar25 = (double)fVar34;
          local_178 = (double)param_1[0x48] * dVar25 + param_2[2];
          local_180 = (double)param_1[0x47] * dVar25 + param_2[1];
          local_188 = (code *)(dVar25 * (double)param_1[0x46] + *param_2);
          local_338 = &local_170;
          local_348 = (code **)CONCAT44(local_348._4_4_,uVar19);
          local_340 = &local_1a0;
          local_330 = &local_1f8;
          (**(code **)(*param_1 + 0x920))(param_1,&local_2f8,param_2);
        }
      }
      else if ((int)local_1a0 == 1) {
        if ((fVar16 <= 0.0001) && (fVar26 = local_198._4_4_, (float)local_198 <= 0.0001))
        goto LAB_14343886b;
        goto LAB_14343887c;
      }
    }
    fVar35 = fVar34 * local_2f8._4_4_ - fVar35;
    fVar34 = (float)(~-(uint)(fVar28 < 2.4) & (uint)-fVar28 | -(uint)(fVar28 < 2.4) & 0xc019999a);
    if (fVar34 <= fVar35) {
      fVar34 = fVar35;
    }
    *param_5 = *param_5 & 0xfffffff8 | (uint)((local_24b & 3) == 1);
    param_5[1] = (uint)fVar34;
    param_5[2] = 0;
    memcpy(_Dst,&local_2f8,0x100);
    if ((((local_24b & 3) != 1) ||
        (cVar17 = (**(code **)(*param_1 + 0x878))(param_1,&local_2f8), param_4 < fVar34)) ||
       (cVar17 == '\0')) goto LAB_143438a51;
    *(byte *)param_5 = (byte)*param_5 | 2;
  }
LAB_143438cc4:
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != 0) {
    FUN_1400020a8();
  }
LAB_143438ce8:
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143438f94 FUN_143438f94 body=322 status=ok
// SIG undefined FUN_143438f94(void)

undefined8 FUN_143438f94(longlong param_1,longlong param_2,char param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_2 + 0xad)) &
          0xffffffffffffff03;
  if ((char)uVar1 == '\x01') {
    fVar2 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x328)) {
      fVar2 = *(float *)(param_1 + 0x328);
    }
    if (0.15 < fVar2) {
      if (param_3 != '\0') {
        dVar3 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
        dVar8 = *(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x18);
        dVar5 = *(double *)(param_2 + 0x28) - *(double *)(param_2 + 0x10);
        dVar6 = dVar3 * *(double *)(param_1 + 0x240) +
                dVar5 * *(double *)(param_1 + 0x230) + dVar8 * *(double *)(param_1 + 0x238);
        dVar3 = dVar3 - *(double *)(param_1 + 0x240) * dVar6;
        dVar8 = dVar8 - *(double *)(param_1 + 0x238) * dVar6;
        dVar5 = dVar5 - dVar6 * *(double *)(param_1 + 0x230);
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
          fVar4 = 0.0;
          uVar1 = 0;
        }
        else {
          uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + 0x438);
          dVar6 = *(double *)(uVar1 + 0x280);
          if (*(double *)(uVar1 + 0x288) <= *(double *)(uVar1 + 0x280)) {
            dVar6 = *(double *)(uVar1 + 0x288);
          }
          fVar7 = (float)dVar6 * *(float *)(uVar1 + 0x644);
          fVar4 = fVar7 - fVar2;
          if (fVar7 <= fVar7 - fVar2) {
            fVar4 = fVar7;
          }
          if (fVar4 <= 0.11) {
            fVar4 = 0.11;
          }
        }
        if ((float)(dVar3 * dVar3 + dVar5 * dVar5 + dVar8 * dVar8) <= fVar4 * fVar4) {
          return 0;
        }
      }
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1434390d6 FUN_1434390d6 body=2312 status=ok
// SIG undefined FUN_1434390d6(void)

undefined8
FUN_1434390d6(longlong *param_1,double *param_2,double *param_3,longlong param_4,void *param_5)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a88 [32];
  undefined1 *local_a68;
  undefined1 local_a60;
  double local_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined4 local_99c;
  undefined4 local_970;
  double local_938;
  double dStack_930;
  double local_928;
  undefined1 local_918 [4];
  float local_914;
  double local_908;
  double local_900;
  double local_8f8;
  double local_8f0;
  double local_8e8;
  double local_8e0;
  double local_8c0;
  double local_8b8;
  double local_8b0;
  undefined4 local_874;
  byte local_86b;
  undefined4 local_848;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined1 local_7f8 [4];
  undefined4 local_7f4;
  undefined4 local_754;
  byte local_74b;
  undefined4 local_728;
  longlong local_6f8 [125];
  longlong local_310;
  longlong local_100;
  byte local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  cVar9 = (**(code **)(*param_1 + 0x720))(param_1,param_4);
  if ((cVar9 != '\0') && (fVar18 = *(float *)((longlong)param_1 + 0x1fc), 0.0 < fVar18)) {
    lVar8 = *(longlong *)(param_1[0x3e] + 0x438);
    dVar2 = *(double *)(lVar8 + 0x280);
    uVar11 = SUB84(dVar2,0);
    uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)(lVar8 + 0x288);
    if (dVar3 <= dVar2) {
      uVar11 = SUB84(dVar3,0);
      uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    fVar14 = (float)(double)CONCAT44(uVar13,uVar11) * *(float *)(lVar8 + 0x644);
    fVar12 = (float)*(double *)(lVar8 + 0x290) * *(float *)(lVar8 + 0x640);
    dVar2 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    fVar15 = (float)((*(double *)(param_4 + 0x28) * -dVar3 - *(double *)(param_4 + 0x30) * dVar4) -
                    *(double *)(param_4 + 0x38) * dVar2);
    lVar8 = param_1[0x22];
    fVar16 = (float)((-dVar3 * *(double *)(lVar8 + 0x260) - *(double *)(lVar8 + 0x268) * dVar4) -
                    *(double *)(lVar8 + 0x270) * dVar2);
    if ((fVar15 <= (fVar12 - fVar14) + fVar16) &&
       ((((dVar3 != 0.0 || (NAN(dVar3))) || (dVar4 != 0.0)) ||
        (((NAN(dVar4) || (dVar2 != 0.0)) || (NAN(dVar2))))))) {
      dVar5 = *(double *)(param_4 + 0x60);
      dVar6 = *(double *)(param_4 + 0x58);
      dVar7 = *(double *)(param_4 + 0x68);
      fVar12 = fVar16 - fVar12;
      plVar1 = param_1 + 0x2f;
      cVar9 = (**(code **)(param_1[0x2f] + 0xe0))(plVar1);
      fVar17 = fVar18;
      fVar19 = fVar12;
      if ((cVar9 != '\0') && ((~*(uint *)(param_1 + 0x93) & 3) == 0)) {
        fVar19 = *(float *)((ulonglong)(*(uint *)(param_1 + 0x93) & 4) + 0x49c + (longlong)param_1);
        fVar17 = 0.0;
        if (0.0 <= fVar19) {
          fVar17 = fVar19;
        }
        fVar19 = fVar12 - fVar17;
        fVar17 = fVar18 - fVar17;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        fVar18 = *(float *)((longlong)param_1 + 0x1fc) + 4.8;
        cVar9 = (**(code **)(*param_1 + 0x8f8))(param_1,param_4 + 0x10,param_4 + 0x28,fVar14);
        if ((cVar9 == '\0') || ((*(uint *)(param_1 + 0x93) & 4) != 0)) {
          fVar12 = fVar12 - *(float *)((longlong)param_1 + 0x49c);
        }
        else {
          fVar12 = (float)((-*param_2 * (double)param_1[0x9a] - (double)param_1[0x9b] * param_2[1])
                          - (double)param_1[0x9c] * param_2[2]);
        }
      }
      if (fVar19 < fVar15) {
        FUN_1402ed838(local_6f8,param_1[0x22],1,1);
        memset(local_7f8,0,0x100);
        uVar10 = 0xffffffff;
        local_728 = 0xffffffff;
        local_754 = 0xffffffff;
        local_7f4 = 0x3f800000;
        lVar8 = param_1[0x22];
        local_818 = *(undefined8 *)(lVar8 + 0x240);
        uStack_810 = *(undefined8 *)(lVar8 + 0x248);
        local_808 = *(undefined8 *)(lVar8 + 0x250);
        uStack_800 = *(undefined8 *)(lVar8 + 600);
        local_a58 = (double)fVar17;
        uStack_a48 = -param_2[2] * local_a58;
        uStack_a50 = -param_2[1] * local_a58;
        local_a58 = -*param_2 * local_a58;
        local_a60 = 0;
        local_a68 = local_7f8;
        (**(code **)(*param_1 + 0x4e8))(param_1,&local_a58,&local_818,1);
        if ((local_74b & 2) == 0) {
          memset(local_918,0,0x100);
          local_848 = 0xffffffff;
          local_874 = 0xffffffff;
          local_914 = 1.0;
          local_a60 = 0;
          local_a68 = local_918;
          (**(code **)(*param_1 + 0x4e8))(param_1,param_3,&local_818,1);
          if ((local_86b & 1) != 0) {
            if ((local_86b & 2) == 0) {
              if ((local_74b & 1) != 0) {
                (**(code **)(*param_1 + 0x4c8))(param_1,local_7f8,0,&DAT_14c8464e0);
              }
              (**(code **)(*param_1 + 0x4c8))(param_1,local_918,0,&DAT_14c8464e0);
              cVar9 = (**(code **)(param_1[0x2f] + 0xd8))(plVar1);
              fVar15 = local_914;
              uVar10 = 0xffffff01;
              if (cVar9 != '\0') goto LAB_143439977;
              local_a60 = 1;
              local_a68 = local_918;
              fVar17 = (float)(**(code **)(*param_1 + 0x508))(param_1,param_3,1.0 - local_914);
              cVar9 = (**(code **)(param_1[0x2f] + 0xd8))(plVar1);
              if ((cVar9 == '\0') &&
                 ((((fVar15 != 0.0 || (NAN(fVar15))) || (fVar17 != 0.0)) || (NAN(fVar17)))))
              goto LAB_1434394d4;
            }
            goto LAB_143439968;
          }
LAB_1434394d4:
          lVar8 = param_1[0x22];
          local_a58 = *(double *)(lVar8 + 0x240);
          uStack_a50._0_4_ = (uint)*(undefined8 *)(lVar8 + 0x248);
          uStack_a50._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x248) >> 0x20);
          uStack_a40 = *(undefined8 *)(lVar8 + 600);
          uStack_a48._0_4_ = (undefined4)*(undefined8 *)(lVar8 + 0x250);
          uStack_a48._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x250) >> 0x20);
          local_938 = (double)fVar18;
          local_928 = param_2[2] * local_938;
          dStack_930 = param_2[1] * local_938;
          local_938 = local_938 * *param_2;
          local_a60 = 0;
          local_a68 = local_918;
          (**(code **)(*param_1 + 0x4e8))(param_1,&local_938,&local_a58,1);
          uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50);
          uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48);
          if ((local_86b & 2) != 0) goto LAB_143439968;
          local_a58 = (double)((ulonglong)local_a58 & 0xffffffff00000000);
          uStack_a50._0_4_ = 0;
          uStack_a50._4_4_ = 0;
          uStack_a48._0_4_ = 0;
          memset(&uStack_a40,0,0x100);
          local_970 = 0xffffffff;
          local_99c = 0xffffffff;
          uStack_a40 = CONCAT44(0x3f800000,(undefined4)uStack_a40);
          if ((local_86b & 1) != 0) {
            fVar18 = (float)(((-*param_2 * local_8f0 - local_8e8 * param_2[1]) -
                             local_8e0 * param_2[2]) - (double)fVar12);
            uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50);
            uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48);
            if (fVar18 < *(float *)((longlong)param_1 + 0x1fc) ||
                fVar18 == *(float *)((longlong)param_1 + 0x1fc)) {
              cVar9 = (**(code **)(*param_1 + 0x878))(param_1,local_918);
              if ((cVar9 != '\0') ||
                 ((uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50),
                  uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48),
                  0.0 <= param_3[2] * local_8b0 + *param_3 * local_8c0 + param_3[1] * local_8b8 &&
                  (uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50),
                  uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48),
                  (-*param_2 * local_908 - local_900 * param_2[1]) - local_8f8 * param_2[2] <=
                  (double)fVar16)))) {
                cVar9 = (**(code **)(*param_1 + 0x8f8))(param_1,&local_908,&local_8f0,fVar14);
                uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50);
                uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48);
                if (cVar9 != '\0') {
                  if (0.0 < fVar18) {
                    cVar9 = (**(code **)(*param_1 + 0x720))(param_1,local_918);
                    uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50);
                    uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48);
                    if (cVar9 == '\0') goto LAB_143439968;
                  }
                  if (param_5 == (void *)0x0) goto LAB_1434395c2;
                  lVar8 = param_1[0x22];
                  local_938 = *(double *)(lVar8 + 0x260);
                  dStack_930 = *(double *)(lVar8 + 0x268);
                  local_928 = *(double *)(lVar8 + 0x270);
                  local_a68 = local_918;
                  (**(code **)(*param_1 + 0x900))(param_1,&local_938,&uStack_a50,0);
                  if ((((-*param_2 * local_908 - local_900 * param_2[1]) - local_8f8 * param_2[2] <=
                        (double)fVar16) ||
                      ((float)(dVar2 * dVar7 + dVar3 * dVar6 + dVar4 * dVar5) <= -0.08)) ||
                     (uStack_a50 = (double)CONCAT44(uStack_a50._4_4_,(uint)uStack_a50),
                     uStack_a48 = (double)CONCAT44(uStack_a48._4_4_,(undefined4)uStack_a48),
                     ((uint)uStack_a50 & 1) != 0)) {
                    local_a58 = (double)((ulonglong)local_a58 | 1);
                    goto LAB_1434395af;
                  }
                }
              }
            }
            goto LAB_143439968;
          }
          if (param_5 != (void *)0x0) {
LAB_1434395af:
            memcpy(param_5,&local_a58,0x118);
          }
LAB_1434395c2:
          *(byte *)((longlong)param_1 + 0x5b4) =
               (~*(byte *)((longlong)param_1 + 0x5b4) & 1) << 5 |
               *(byte *)((longlong)param_1 + 0x5b4);
          uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        }
        else {
LAB_143439968:
          FUN_1417c5898(local_6f8);
          uVar10 = 0;
        }
LAB_143439977:
        if ((((local_f0 & 1) != 0) && (local_6f8[0] != 0)) &&
           ((*(uint *)(local_6f8[0] + 8) >> 0x1e & 1) == 0)) {
          FUN_140248a4c(local_6f8[0],local_6f8);
        }
        local_6f8[0] = 0;
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        if (local_310 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1434395e4;
      }
    }
  }
  uVar10 = 0;
LAB_1434395e4:
  if ((local_e0 ^ (ulonglong)auStack_a88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1434399e0 FUN_1434399e0 body=508 status=ok
// SIG undefined FUN_1434399e0(void)

undefined8 FUN_1434399e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + -0x3d;
  cVar3 = (**(code **)(param_1[-0x3d] + 0x600))(plVar1);
  if (((cVar3 == '\0') || (*(char *)((longlong)param_1 + 0xa9) == '\0')) ||
     (*(char *)(param_1[-0x1b] + 0x1fb) != '\x02')) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[1] + 0x898))((longlong *)param_1[1],param_2);
    (**(code **)(param_1[-0x3d] + 0x958))(plVar1,&local_48,param_1 + 0x34);
    param_1[0x36] = local_38;
    *(undefined4 *)(param_1 + 0x34) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_44;
    *(undefined4 *)(param_1 + 0x35) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uStack_3c;
    fVar6 = (float)(**(code **)(param_1[-0x3d] + 0x710))(plVar1);
    dVar8 = DAT_14c8464e8;
    dVar9 = DAT_14c8464f0;
    dVar2 = DAT_14c8464e0;
    if (0.0001 <= fVar6) {
      dVar10 = (double)fVar6;
      dVar2 = (double)param_1[0x34];
      dVar8 = (double)param_1[0x35];
      dVar9 = (double)param_1[0x36];
      dVar11 = dVar9 * dVar9 + dVar2 * dVar2 + dVar8 * dVar8;
      if (dVar10 * dVar10 < dVar11) {
        dVar10 = (1.0 / SQRT(dVar11)) * dVar10;
        dVar8 = dVar8 * dVar10;
        dVar9 = dVar9 * dVar10;
        dVar2 = dVar2 * dVar10;
      }
    }
    param_1[0x34] = (longlong)dVar2;
    param_1[0x35] = (longlong)dVar8;
    param_1[0x36] = (longlong)dVar9;
    uVar7 = (**(code **)(param_1[-0x3d] + 0x5c0))(plVar1);
    *(undefined4 *)(param_1 + 0x49) = uVar7;
    lVar4 = param_1[0xc6];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x30))(param_1);
      param_1[0xc6] = lVar4;
    }
    if ((*(byte *)(lVar4 + 0x14) & 2) == 0) {
      *(float *)(lVar4 + 0x98) = *(float *)(lVar4 + 0x98) + (float)param_2;
    }
    *(double *)(lVar4 + 0xa0) = (double)(float)param_2 + *(double *)(lVar4 + 0xa0);
    (**(code **)(*plVar1 + 0x9c8))(plVar1,param_2);
    uVar5 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143439bde FUN_143439bde body=59 status=ok
// SIG undefined FUN_143439bde(void)

void FUN_143439bde(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x210) = 0xbf800000;
  puVar1 = *(undefined8 **)(param_1 + 0x628);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x628) = 0;
  }
  return;
}



// FUNCTION 143439c1a FUN_143439c1a body=59 status=ok
// SIG undefined FUN_143439c1a(void)

void FUN_143439c1a(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x210) = 0xbf800000;
  puVar1 = *(undefined8 **)(param_1 + 0x630);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x630) = 0;
  }
  return;
}



// FUNCTION 14343a95c FUN_14343a95c body=652 status=ok
// SIG undefined FUN_14343a95c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343a95c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *_Dst;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined *local_60;
  longlong local_58;
  undefined8 local_50;
  char *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x9b0);
  (**(code **)(*plVar2 + 8))(plVar2);
  local_40[0] = 0;
  local_38 = 0;
  lVar1 = param_1 + 0x9b8;
  FUN_14278fe74(local_40,lVar1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad0c28) {
    FUN_144b3d300(&DAT_14cad0c28);
    if (DAT_14cad0c28 == -1) {
      DAT_14cad0b90 = (undefined *)0x0;
      _DAT_14cad0b98 = 0x40000000000;
      DAT_14cad0bc0 = 0;
      _DAT_14cad0bc8 = 0x400000000;
      DAT_14cad0bf0 = 0;
      _DAT_14cad0bf8 = 0x400000000;
      DAT_14cad0c10 = 0;
      _DAT_14cad0c18 = 0x400000000;
      _DAT_14cad0c20 = 0;
      atexit(FUN_14343abe9);
      _Init_thread_footer(&DAT_14cad0c28);
    }
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x498))();
  lVar5 = FUN_1435a0e22(lVar4);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x600), lVar5 == 0)) {
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0xa70) = 0;
      goto LAB_14343ab02;
    }
    lVar5 = *(longlong *)(lVar4 + 0x68);
    *(longlong *)(param_1 + 0xa70) = lVar5;
    if (lVar5 == 0) goto LAB_14343ab02;
  }
  else {
    *(undefined **)(lVar5 + 0xe0) = &DAT_14cad0ba0;
    FUN_146f58fc2();
    *(longlong *)(param_1 + 0xa70) = lVar5;
  }
  bVar6 = (longlong)_DAT_14cad0c18 < 0;
  _DAT_14cad0c18 = _DAT_14cad0c18 & 0xffffffff00000000;
  if (bVar6) {
    FUN_1479d8eae(&DAT_14cad0c00,0);
    lVar5 = *(longlong *)(param_1 + 0xa70);
  }
  local_68 = *(undefined8 *)(*(longlong *)(lVar4 + 0x58) + 0x838);
  local_60 = &DAT_14cad0c00;
  local_50 = *(undefined8 *)(param_1 + 0xa78);
  local_48 = "CallServerMovePacked";
  *(undefined8 **)(param_1 + 0xa78) = &local_68;
  local_58 = lVar1;
  cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,lVar1,lVar5);
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x9e1) & 2) == 0)) {
    FUN_1417bc32a(&DAT_14cad0b10,*(undefined4 *)(param_1 + 0xa58));
    _Dst = DAT_14cad0b90;
    if (DAT_14cad0b90 == (undefined *)0x0) {
      _Dst = &DAT_14cad0b10;
    }
    memcpy(_Dst,*(void **)(param_1 + 0xa48),*(longlong *)(param_1 + 0xa58) + 7 >> 3);
    FUN_1417ba716(*(undefined8 *)(param_1 + 0x1f0),&DAT_14cad0b10);
    FUN_140bdc5b6(param_1);
  }
  *(undefined8 *)(local_58 + 0xc0) = local_50;
LAB_14343ab02:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343abe9 FUN_14343abe9 body=87 status=ok
// SIG undefined FUN_14343abe9(void)

void FUN_14343abe9(void)

{
  if (DAT_14cad0c10 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0bf0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0bc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0b90 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14343ac40 FUN_14343ac40 body=695 status=ok
// SIG undefined FUN_14343ac40(void)

void FUN_14343ac40(longlong *param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if ((cVar2 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_14343adea;
  lVar3 = param_1[0x103];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    param_1[0x103] = lVar3;
  }
  cVar2 = (**(code **)(*param_1 + 0xa80))(param_1,param_2,lVar3);
  if (cVar2 == '\0') goto LAB_14343adea;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar4 = FUN_1447210f0();
      if (lVar4 != 0) goto LAB_14343ad10;
    }
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cb10130 == 0) {
        local_70 = &local_58;
        local_58 = FUN_140754f84;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_147da9a76;
        local_80 = FUN_1409f3105;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = CONCAT44(local_a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_14343ad10;
    }
    lVar4 = 0;
  }
LAB_14343ad10:
  if (*(longlong *)(lVar4 + 0x30) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0x2b0);
  }
  fVar9 = *(float *)(param_1[0x3e] + 0x74);
  fVar6 = (float)(**(code **)(*plVar5 + 0x668))();
  if (*(char *)(lVar3 + 0xc0) == '\x01') {
    fVar9 = *(float *)(lVar3 + 0xc4);
  }
  else {
    fVar8 = 1.0;
    if (1.0 <= DAT_14c7613c8) {
      fVar8 = DAT_14c7613c8;
    }
    fVar7 = param_2 - *(float *)(lVar3 + 0x98);
    fVar9 = fVar8 * *(float *)(lVar3 + 0xb0) * fVar9 * fVar6;
    if (fVar7 <= fVar9) {
      fVar9 = fVar7;
    }
  }
  if (0.0 < fVar9) {
    *(float *)(lVar3 + 0x98) = param_2;
    *(double *)(lVar3 + 0xa0) = (double)fVar9 + *(double *)(lVar3 + 0xa0);
    dVar1 = *(double *)(lVar4 + 0x6d0);
    *(float *)(lVar3 + 8) = (float)dVar1;
    *(float *)(lVar3 + 0xac) = (float)dVar1;
    local_a8 = param_3;
    (**(code **)(*param_1 + 0xa48))(param_1,param_2,fVar9,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
  }
LAB_14343adea:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343aefa FUN_14343aefa body=573 status=ok
// SIG undefined FUN_14343aefa(void)

undefined4 FUN_14343aefa(longlong *param_1,undefined4 param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar4 = FUN_1447210f0();
      if (lVar4 != 0) goto LAB_14343af61;
    }
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cb10130 == 0) {
        local_70 = &local_58;
        local_58 = FUN_140754f84;
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
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_14343af61;
    }
    lVar4 = 0;
  }
LAB_14343af61:
  bVar1 = *(byte *)(param_3 + 0x14);
  local_58 = (code *)((ulonglong)local_58 & 0xffffffffffffff00);
  uVar3 = FUN_1407b9542(param_1,param_2,param_3);
  if ((char)uVar3 != '\0') {
    cVar2 = (char)local_58;
    if ((char)local_58 == '\x01') {
      if (lVar4 != 0) {
        *(float *)((longlong)param_1 + 0x82c) = (float)*(double *)(lVar4 + 0x6d0);
      }
      (**(code **)(*param_1 + 0xa88))(param_1);
      *(float *)(param_3 + 0x98) = *(float *)(param_3 + 0x98) - *(float *)(param_1 + 0x105);
      FUN_1434e83fc(param_1 + 0x1b1,(int)param_1[0x105]);
    }
    if (((bVar1 & 1) == 0) || (((*(byte *)(param_3 + 0x14) & 2) == 0 && (DAT_14cad0958 != '\x01'))))
    {
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0xa90))(param_1,param_2,param_3);
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x98) = param_2;
      if (lVar4 != 0) {
        *(float *)(param_3 + 8) = (float)*(double *)(lVar4 + 0x6d0);
      }
    }
  }
  *(undefined4 *)(param_3 + 0x9c) = param_2;
  *(byte *)(param_3 + 0x14) = *(byte *)(param_3 + 0x14) & 0xfb;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343b138 FUN_14343b138 body=926 status=ok
// SIG undefined FUN_14343b138(void)

void FUN_14343b138(longlong *param_1,float param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar7 = *(float *)(param_3 + 0xac);
  if (DAT_14cac0fa8 == (longlong *)0x0) {
    local_90 = &local_78;
    local_78 = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_141117124;
    local_98 = &LAB_14786c867;
    local_a0 = &LAB_145abcadb;
    local_a8 = &DAT_149e063b2;
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 8;
    local_c8 = 1.5134e-42;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  plVar2 = DAT_14cac0fa8;
  lVar5 = DAT_14cac0fa8[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) goto LAB_14343b1bf;
  }
  if ((*(char *)(lVar5 + 0x419) != '\x01') || ((fVar7 == 0.0 && (!NAN(fVar7))))) goto LAB_14343b1bf;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  fVar12 = (float)*(double *)(lVar4 + 0x6d0);
  fVar11 = (fVar12 - *(float *)(param_3 + 8)) * *(float *)(param_1[0x3e] + 0x74);
  fVar6 = (param_2 - *(float *)(param_3 + 0x98)) - fVar11;
  fVar8 = *(float *)(param_3 + 0xb8) + fVar6;
  *(float *)(param_3 + 0xb8) = fVar8;
  fVar10 = fVar6 + *(float *)(param_3 + 0xbc);
  fVar7 = fVar10;
  if (0.0 < *(float *)(lVar5 + 0x428)) {
    fVar11 = fVar11 * *(float *)(lVar5 + 0x428);
    if (fVar10 <= 0.0) {
      fVar7 = fVar11 + fVar10;
      if (0.0 <= fVar7) {
        fVar7 = 0.0;
      }
    }
    else {
      fVar7 = fVar10 - fVar11;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
  }
  if (fVar7 <= *(float *)(lVar5 + 0x420)) {
    fVar7 = *(float *)(lVar5 + 0x420);
  }
  bVar3 = 0.0 < *(float *)(param_3 + 0xbc) & *(byte *)(param_3 + 0xc0);
  *(byte *)(param_3 + 0xc0) = bVar3;
  if (bVar3 == 0) {
    if (*(float *)(lVar5 + 0x41c) <= fVar7 && fVar7 != *(float *)(lVar5 + 0x41c)) {
      fVar11 = 0.0;
      if (*(char *)(lVar5 + 0x41a) == '\x01') {
        *(undefined1 *)(param_3 + 0xc0) = 1;
        fVar11 = fVar7 - (float)(~-(uint)(fVar10 != 0.0) & (uint)fVar6 |
                                (uint)((fVar7 / fVar10) * fVar6) & -(uint)(fVar10 != 0.0));
      }
      *(float *)(param_3 + 0xbc) = fVar11;
      local_c8 = fVar6;
      (**(code **)(*param_1 + 0xa98))(param_1,fVar7,fVar8,fVar12 - *(float *)(param_3 + 0xcc));
      if ((*(byte *)(param_3 + 0xc0) & 1) == 0) goto LAB_14343b1bf;
      goto LAB_14343b38a;
    }
  }
  else {
LAB_14343b38a:
    if (*(char *)(lVar5 + 0x42c) == '\x01') {
      *(byte *)(param_3 + 0xb4) = *(byte *)(param_3 + 0xb4) | 1;
    }
    fVar8 = (fVar12 - *(float *)(param_3 + 8)) * *(float *)(param_1[0x3e] + 0x74);
    fVar6 = (float)FUN_144916004();
    fVar7 = 1.0;
    if (1.0 <= DAT_14c7613c8) {
      fVar7 = DAT_14c7613c8;
    }
    param_2 = param_2 - *(float *)(param_3 + 0x98);
    fVar6 = fVar7 * *(float *)(param_3 + 0xb0) * fVar6;
    if (param_2 <= fVar6) {
      fVar6 = param_2;
    }
    fVar7 = *(float *)(param_3 + 200) + fVar6;
    fVar10 = fVar7;
    if (fVar8 <= 0.0) {
      fVar10 = fVar6 + fVar7;
    }
    if (fVar8 <= fVar10) {
      fVar10 = fVar8;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(uint *)(param_3 + 200) = ~-(uint)(0.0 < fVar8) & (uint)fVar7;
    auVar9 = ZEXT416((uint)*(float *)(lVar5 + 0x424));
    if (1.0 <= *(float *)(lVar5 + 0x424)) {
      auVar9 = ZEXT416(0x3f800000);
    }
    if (auVar9._0_4_ <= 0.0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = auVar9._4_12_;
      auVar9 = auVar1 << 0x20;
    }
    fVar7 = *(float *)(param_3 + 0xbc);
    fVar6 = auVar9._0_4_ * fVar10;
    if (fVar7 <= fVar6) {
      fVar6 = fVar7;
    }
    fVar6 = fVar10 - fVar6;
    if (fVar6 <= 1e-06) {
      fVar6 = 1e-06;
    }
    *(float *)(param_3 + 0xc4) = fVar6;
    fVar7 = fVar7 - (fVar10 - fVar6);
  }
  *(float *)(param_3 + 0xbc) = fVar7;
LAB_14343b1bf:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343b4da FUN_14343b4da body=239 status=ok
// SIG undefined FUN_14343b4da(void)

bool FUN_14343b4da(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (cVar1 != '\0') {
    (**(code **)(*param_3 + 0x178))(param_3,param_1 + 8,1);
    if (*(char *)(param_1 + 8) == '\x01') {
      (**(code **)(*param_3 + 0x178))(param_3,param_1 + 9,1);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                        (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,1);
      if (cVar1 == '\0') {
        return false;
      }
    }
    (**(code **)(*param_3 + 0x178))(param_3,param_1 + 10,1);
    if ((*(char *)(param_1 + 10) != '\x01') ||
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                          (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4,2), cVar1 != '\0')
       ) {
      (**(code **)(*param_3 + 0x178))(param_3,param_1 + 0xb,1);
      return (*(byte *)((longlong)param_3 + 0x29) & 2) == 0;
    }
  }
  return false;
}



// FUNCTION 14343b5c9 FUN_14343b5c9 body=120 status=ok
// SIG undefined FUN_14343b5c9(void)

longlong FUN_14343b5c9(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1435a0e22();
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x600), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840);
    }
    uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x58);
    uVar4 = FUN_146f28fd4(uVar1,*(undefined4 *)(param_1 + 0x1d2c));
    *(longlong *)(lVar2 + 0xe0) = param_2 + 0x90;
    *(undefined8 *)(lVar2 + 0xe8) = uVar1;
    *(undefined8 *)(lVar2 + 0xf0) = uVar4;
  }
  return lVar2;
}



// FUNCTION 14343b642 FUN_14343b642 body=1357 status=ok
// SIG undefined FUN_14343b642(void)

void FUN_14343b642(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,byte param_6,uint param_7,undefined8 param_8,undefined8 param_9
                  ,undefined1 param_10)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b0;
  double local_a8;
  double local_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar6 = (**(code **)(*param_1 + 0x600))();
  if ((cVar6 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_14343b97c;
  lVar7 = param_1[0x103];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    param_1[0x103] = lVar7;
  }
  cVar6 = (**(code **)(*param_1 + 0xa80))(param_1,param_2,lVar7);
  if (cVar6 == '\0') goto LAB_14343b97c;
  plVar10 = *(longlong **)(param_1[0x3e] + 0x3c0);
  bVar2 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14343b730:
    plVar10 = (longlong *)0x0;
    uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
    bVar3 = true;
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_d0 = &local_98;
      local_98 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = (code *)&LAB_1463c0cc2;
      local_d8 = &LAB_147c9db5b;
      local_e0 = (code *)&LAB_1463f9c44;
      local_e8 = L"Game";
      local_f0 = 0x2000000000;
      local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
      local_100 = CONCAT44(local_100._4_4_,8);
      local_108 = (code **)CONCAT44(local_108._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(plVar10[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
        DAT_14caf9cd0 + 0x30)) goto LAB_14343b730;
    cVar6 = (**(code **)(*plVar10 + 0xe20))(plVar10,param_1[0x3e],param_2);
    uVar5 = DAT_14c8464e8;
    uVar4 = DAT_14c8464e0;
    if (cVar6 == '\0') {
      param_3[2] = DAT_14c8464f0;
      *param_3 = uVar4;
      param_3[1] = uVar5;
      bVar3 = false;
      uVar11 = 0;
      bVar2 = false;
    }
    else {
      bVar3 = false;
      uVar11 = 0;
    }
  }
  local_88 = param_3[2];
  local_98 = (code *)*param_3;
  uStack_90 = *(undefined4 *)(param_3 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar8 = FUN_1447210f0();
      if (lVar8 != 0) goto LAB_14343b78d;
    }
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      if (DAT_14cb10130 == 0) {
        local_d0 = &local_b0;
        local_b0 = FUN_140754f84;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_147da9a76;
        local_e0 = FUN_1409f3105;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
        local_100 = CONCAT44(local_100._4_4_,8);
        local_108 = (code **)CONCAT44(local_108._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_14343b78d;
    }
    lVar8 = 0;
  }
LAB_14343b78d:
  if (*(longlong *)(lVar8 + 0x30) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
  }
  fVar15 = *(float *)(param_1[0x3e] + 0x74);
  fVar12 = (float)(**(code **)(*plVar9 + 0x668))();
  if (*(char *)(lVar7 + 0xc0) == '\x01') {
    fVar15 = *(float *)(lVar7 + 0xc4);
  }
  else {
    fVar14 = 1.0;
    if (1.0 <= DAT_14c7613c8) {
      fVar14 = DAT_14c7613c8;
    }
    fVar13 = (float)param_2 - *(float *)(lVar7 + 0x98);
    fVar15 = fVar14 * *(float *)(lVar7 + 0xb0) * fVar15 * fVar12;
    if (fVar13 <= fVar15) {
      fVar15 = fVar13;
    }
  }
  *(float *)(lVar7 + 0x98) = (float)param_2;
  *(double *)(lVar7 + 0xa0) = (double)fVar15 + *(double *)(lVar7 + 0xa0);
  dVar1 = *(double *)(lVar8 + 0x6d0);
  *(float *)(lVar7 + 8) = (float)dVar1;
  *(float *)(lVar7 + 0xac) = (float)dVar1;
  local_b0 = (code *)((double)(param_7 & 0xffff) * 360.0 * 1.52587890625e-05);
  local_a8 = (double)(param_7 >> 0x10) * 360.0 * 1.52587890625e-05;
  local_a0 = (double)param_6 * 360.0 * 0.00390625;
  if (!bVar3) {
    (**(code **)(*plVar10 + 0x688))(plVar10,&local_b0,1);
  }
  if (bVar2) {
    if (*(longlong *)(lVar8 + 0x30) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
    }
    if ((0.0 < fVar15) && (*(longlong *)(lVar7 + 0x588) == 0)) {
      if (!bVar3) {
        (**(code **)(*plVar10 + 0xb78))(plVar10,fVar15);
      }
      local_108 = &local_98;
      (**(code **)(*param_1 + 0xa48))(param_1,param_2,fVar15,CONCAT71(uVar11,param_5) & 0xffffffff);
    }
    local_f0 = CONCAT71(local_f0._1_7_,param_10);
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = (code **)param_4;
    (**(code **)(*param_1 + 0xa28))(param_1,param_2,fVar15,&local_98);
  }
LAB_14343b97c:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343bb90 FUN_14343bb90 body=6608 status=ok
// SIG undefined FUN_14343bb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343bb90(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,longlong param_6,longlong param_7,char param_8)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong *plVar14;
  uint uVar15;
  code **ppcVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auStack_258 [32];
  code **local_238;
  double *local_230;
  longlong local_228;
  longlong local_220;
  wchar_t *local_218;
  code *local_210;
  undefined1 *local_208;
  code **local_200;
  code *local_1f8;
  code *local_1f0;
  undefined1 local_1e2;
  byte local_1e1;
  double local_1e0;
  double local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  uint local_1bc;
  longlong local_1b8;
  code *local_1b0;
  code *local_1a8;
  double dStack_1a0;
  double local_198;
  code *local_188;
  double dStack_180;
  double local_178;
  code *local_168;
  double dStack_160;
  double local_158;
  code *local_148;
  double dStack_140;
  double local_138;
  code *local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar7 = (**(code **)(*param_1 + 0xaa0))();
  if ((((cVar7 == '\0') && (*param_5 == 1.0)) && (!NAN(*param_5))) &&
     (((param_5[1] == 2.0 && (!NAN(param_5[1]))) && ((param_5[2] == 3.0 && (!NAN(param_5[2])))))))
  goto LAB_14343cde3;
  lVar11 = param_1[0x103];
  if (lVar11 == 0) {
    lVar11 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    param_1[0x103] = lVar11;
  }
  lVar21 = *(longlong *)(param_1[0x3e] + 0x3c0);
  if (lVar21 == 0) {
LAB_14343bc9d:
    lVar21 = 0;
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_200 = &local_128;
      local_128 = FUN_141030f22;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = (code *)&LAB_1463c0cc2;
      local_208 = &LAB_147c9db5b;
      local_210 = (code *)&LAB_1463f9c44;
      local_218 = L"Game";
      local_220 = 0x2000000000;
      local_228 = CONCAT44(local_228._4_4_,0x10000004);
      local_230 = (double *)CONCAT44(local_230._4_4_,8);
      local_238 = (code **)CONCAT44(local_238._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30)) goto LAB_14343bc9d;
  }
  fVar38 = *(float *)(lVar11 + 0xa8);
  lVar12 = param_1[0x16];
  if ((lVar12 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar12 = FUN_1447210f0(), lVar12 == 0)))) {
    lVar12 = param_1[4];
    if (lVar12 != 0) {
      if (DAT_14cb10130 == 0) {
        local_200 = &local_128;
        local_128 = FUN_140754f84;
        local_1f0 = FUN_14081d0ea;
        local_1f8 = FUN_14081d0ea;
        local_208 = &LAB_147da9a76;
        local_210 = FUN_1409f3105;
        local_218 = L"Engine";
        local_220 = 0;
        local_228 = CONCAT44(local_228._4_4_,0x10000000);
        local_230 = (double *)CONCAT44(local_230._4_4_,8);
        local_238 = (code **)CONCAT44(local_238._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_14343bce4;
    }
    lVar12 = 0;
  }
LAB_14343bce4:
  if ((*(double *)(lVar12 + 0x6d0) != (double)fVar38) ||
     (NAN(*(double *)(lVar12 + 0x6d0)) || NAN((double)fVar38))) {
    if (DAT_14cac0fa8 == (longlong *)0x0) {
      local_200 = &local_128;
      local_128 = FUN_141030f22;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = (code *)&LAB_141117124;
      local_208 = &LAB_14786c867;
      local_210 = (code *)&LAB_145abcadb;
      local_218 = L"Game";
      local_220 = 0;
      local_228 = CONCAT44(local_228._4_4_,0x10000004);
      local_230 = (double *)CONCAT44(local_230._4_4_,8);
      local_238 = (code **)CONCAT44(local_238._4_4_,0x438);
      FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
    }
    plVar17 = DAT_14cac0fa8;
    plVar18 = (longlong *)DAT_14cac0fa8[0x22];
    if (plVar18 == (longlong *)0x0) {
      (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
      plVar18 = (longlong *)plVar17[0x22];
    }
    cVar7 = (**(code **)(*plVar18 + 0x650))(plVar18,lVar21);
    if (cVar7 != '\0') goto LAB_14343cde3;
  }
  local_138 = param_5[2];
  local_148 = (code *)*param_5;
  dStack_140 = param_5[1];
  if ((param_6 == 0) || (*(char *)(param_6 + 0x1fb) != '\x02')) {
    FUN_1434e16a4(&local_128,&local_148,param_1);
    local_1d0 = param_1 + 0x22;
    local_138 = local_118;
    local_148 = local_128;
    dStack_140 = dStack_120;
    lVar21 = param_1[0x22];
    uVar35 = *(undefined4 *)(lVar21 + 0x260);
    uVar36 = *(undefined4 *)(lVar21 + 0x264);
    local_168 = *(code **)(lVar21 + 0x260);
    dStack_160 = *(double *)(lVar21 + 0x268);
    uVar41 = (undefined4)*(undefined8 *)(lVar21 + 0x268);
    uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x268) >> 0x20);
    local_158 = *(double *)(lVar21 + 0x270);
    uVar43 = SUB84(local_158,0);
    uVar45 = (undefined4)((ulonglong)local_158 >> 0x20);
    local_1c8 = param_7;
    if (param_6 == 0) {
      param_6 = 0;
      local_128 = (code *)((ulonglong)local_128 & 0xffffffffffffff00);
      local_238 = &local_108;
      local_108 = (code *)((ulonglong)local_108 & 0xffffffffffffff00);
      local_188 = (code *)((ulonglong)local_188 & 0xffffffffffffff00);
      (**(code **)(*param_1 + 0x5e8))(param_1,param_8,&local_128);
      if ((char)local_128 == '\x01') {
        local_1c8 = *(longlong *)(param_1[0x3e] + 0x444);
        param_6 = *(longlong *)(param_1[0x3e] + 0x450);
      }
    }
  }
  else {
    local_1c8 = param_7;
    FUN_14341f746(param_6,param_7,param_5,&local_148);
    local_1d0 = param_1 + 0x22;
    lVar21 = param_1[0x22];
    uVar35 = *(undefined4 *)(lVar21 + 0x260);
    uVar36 = *(undefined4 *)(lVar21 + 0x264);
    local_168 = *(code **)(lVar21 + 0x260);
    dStack_160 = *(double *)(lVar21 + 0x268);
    uVar41 = (undefined4)*(undefined8 *)(lVar21 + 0x268);
    uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x268) >> 0x20);
    local_158 = *(double *)(lVar21 + 0x270);
    uVar43 = SUB84(local_158,0);
    uVar45 = (undefined4)((ulonglong)local_158 >> 0x20);
  }
  local_1b8 = *(longlong *)(param_1[0x3e] + 0x444);
  lVar21 = *(longlong *)(param_1[0x3e] + 0x450);
  bVar8 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  fVar37 = DAT_14cad0a38;
  fVar38 = DAT_14cad0a20;
  local_1e2 = param_8 == '\x03';
  local_178 = local_158;
  local_188 = local_168;
  dStack_180 = dStack_160;
  uVar39 = (undefined4)param_1[0x25];
  uVar40 = (undefined4)((ulonglong)param_1[0x25] >> 0x20);
  dVar30 = (double)param_1[0x26];
  dVar1 = (double)param_1[0x27];
  local_1bc = -(uint)(0.0 < DAT_14cad0a20 || 0.0 < DAT_14cad0a38);
  local_1e1 = bVar8;
  if ((local_1bc & 1) == 0) {
    bVar26 = false;
    bVar24 = false;
  }
  else {
    if ((*(char *)((longlong)param_1 + 0x76b) != '\0') ||
       ((*(byte *)((longlong)param_1 + 0x291) | 2) != 3)) {
      *(undefined4 *)(param_1 + 0xee) = 0;
      *(undefined1 *)((longlong)param_1 + 0x76c) = 0;
    }
    fVar27 = *(float *)(param_1 + 0xee);
    if ((fVar38 <= 0.0) || (fVar37 <= 0.0)) {
      bVar26 = fVar38 < fVar27;
    }
    else {
      bVar26 = fVar27 < fVar38;
    }
    fVar44 = fVar38;
    if (bVar26 || fVar27 == fVar38) {
      fVar44 = fVar27;
    }
    cVar7 = *(char *)((longlong)param_1 + 0x76c);
    if (((0.0 < fVar44) && (cVar7 != '\0')) &&
       ((!(bool)local_1e2 & *(byte *)(param_1 + 0xed)) != 0 ||
        (*(byte *)((longlong)param_1 + 0x769) & (bVar8 ^ 1) & 1) != 0)) {
      local_1e0 = (double)CONCAT44(local_1e0._4_4_,param_2);
      dVar28 = (double)CONCAT44(uVar45,uVar43) - local_138;
      dVar31 = (double)CONCAT44(uVar42,uVar41) - dStack_140;
      dVar29 = (double)CONCAT44(uVar36,uVar35) - (double)local_148;
      if (((9.999999747378752e-05 < ABS(dVar29)) || (9.999999747378752e-05 < ABS(dVar31))) ||
         (9.999999747378752e-05 < ABS(dVar28))) {
        dVar33 = dVar28 * dVar28 + dVar29 * dVar29 + dVar31 * dVar31;
        if ((double)(fVar44 * fVar44) <= dVar33) {
          if (((dVar33 != 1.0) || (dVar32 = dVar31, dVar4 = dVar29, dVar34 = dVar28, NAN(dVar33)))
             && (dVar32 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar34 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar33)) {
            dVar33 = 1.0 / SQRT(dVar33);
            dVar32 = dVar31 * dVar33;
            dVar4 = dVar29 * dVar33;
            dVar34 = dVar28 * dVar33;
          }
          dVar29 = (double)fVar44;
          local_168 = (code *)((double)CONCAT44(uVar36,uVar35) - dVar4 * dVar29);
          dStack_160 = (double)CONCAT44(uVar42,uVar41) - dVar32 * dVar29;
          local_158 = (double)CONCAT44(uVar45,uVar43) - dVar34 * dVar29;
          plVar18 = (longlong *)*local_1d0;
          local_128 = (code *)plVar18[0x48];
          dStack_120 = (double)plVar18[0x49];
          local_118 = (double)plVar18[0x4a];
          uStack_110 = (double)plVar18[0x4b];
          local_f8 = local_158 - (double)plVar18[0x4e];
          dStack_100 = dStack_160 - (double)plVar18[0x4d];
          local_108 = (code *)((double)local_168 - (double)plVar18[0x4c]);
        }
        else {
          local_158 = local_138;
          local_168 = local_148;
          dStack_160 = dStack_140;
          plVar18 = (longlong *)*local_1d0;
          local_128 = (code *)plVar18[0x48];
          dStack_120 = (double)plVar18[0x49];
          local_118 = (double)plVar18[0x4a];
          uStack_110 = (double)plVar18[0x4b];
          local_f8 = local_138 - (double)plVar18[0x4e];
          dStack_100 = dStack_140 - (double)plVar18[0x4d];
          local_108 = (code *)((double)local_148 - (double)plVar18[0x4c]);
        }
        local_228 = CONCAT71(local_228._1_7_,1);
        local_230 = (double *)((ulonglong)local_230 & 0xffffffff00000000);
        local_238 = (code **)0x0;
        (**(code **)(*plVar18 + 0x510))(plVar18,&local_108,&local_128,1);
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
      }
      *(undefined4 *)(param_1 + 0xee) = 0;
      *(undefined1 *)((longlong)param_1 + 0x76c) = 0;
      fVar27 = 0.0;
      cVar7 = '\0';
      param_2 = local_1e0._0_4_;
    }
    if (*(char *)((longlong)param_1 + 0x7aa) == '\x01') {
      if (lVar21 == 0) {
        if ((int)param_1[0xb6] == 0) {
LAB_14343ceb0:
          lVar12 = 0;
        }
        else {
          uVar15 = *(uint *)((longlong)param_1 + 0x5ac);
          lVar12 = 0;
          if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
            plVar18 = (longlong *)
                      ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
            if ((plVar18 == (longlong *)0x0) ||
               (((int)plVar18[2] != (int)param_1[0xb6] ||
                ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_14343ceb0;
            lVar12 = *plVar18;
          }
        }
        cVar25 = lVar12 != 0;
        goto LAB_14343c3c5;
      }
LAB_14343c3d7:
      if (bVar8 == 0) {
        bVar26 = false;
        bVar24 = false;
        if (cVar7 != '\0') {
          uVar9 = 0;
          fVar27 = 0.0;
          goto LAB_14343c5c2;
        }
      }
      else {
        bVar24 = false;
      }
    }
    else {
      cVar25 = *(char *)((longlong)param_1 + 0x76a);
LAB_14343c3c5:
      if (((bVar8 == 0) || (cVar25 == '\0')) || (*(char *)((longlong)param_1 + 0x76b) != '\0'))
      goto LAB_14343c3d7;
      fVar27 = 0.0;
      if ((((((int)param_1[0xb6] == 0) ||
            (uVar15 = *(uint *)((longlong)param_1 + 0x5ac), (int)uVar15 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar15 ||
            ((pdVar13 = (double *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
             pdVar13 == (double *)0x0 || (*(int *)(pdVar13 + 2) != (int)param_1[0xb6])))))) ||
          (((ulonglong)pdVar13[1] & 0x10200000) != 0)) ||
         (((dVar29 = *pdVar13, dVar29 == 0.0 || ((*(uint *)((longlong)dVar29 + 8) >> 0x1e & 1) != 0)
           ) || (*(char *)((longlong)dVar29 + 0x1fb) != '\x02')))) {
        uVar9 = 0;
        bVar26 = false;
      }
      else {
        uVar9 = 0;
        bVar26 = false;
        if (0.0001 < *(float *)(param_1 + 0x5b)) {
          local_1d8 = dVar29;
          FUN_1457c3e40(&local_128,dVar29,param_1[0xec]);
          dVar1 = (double)param_1[0x27] - local_118;
          dVar30 = (double)param_1[0x26] - dStack_120;
          local_1e0 = (double)param_1[0x25] - (double)local_128;
          dVar28 = local_118 * (double)param_1[0x48] +
                   (double)local_128 * (double)param_1[0x46] + dStack_120 * (double)param_1[0x47];
          dVar29 = local_118 - (double)param_1[0x48] * dVar28;
          dVar31 = dStack_120 - (double)param_1[0x47] * dVar28;
          dVar28 = (double)local_128 - dVar28 * (double)param_1[0x46];
          dVar33 = dVar29 * dVar29 + dVar28 * dVar28 + dVar31 * dVar31;
          if (((dVar33 != 1.0) || (dVar32 = dVar31, dVar4 = dVar29, dVar34 = dVar28, NAN(dVar33)))
             && (dVar32 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar34 = DAT_14c8464e0,
                9.99999993922529e-09 <= dVar33)) {
            dVar33 = 1.0 / SQRT(dVar33);
            dVar32 = dVar31 * dVar33;
            dVar4 = dVar29 * dVar33;
            dVar34 = dVar28 * dVar33;
          }
          dVar29 = (double)(1.0 / *(float *)(param_1 + 0x5b));
          dVar29 = dVar29 * local_1e0 * dVar34 + dVar30 * dVar29 * dVar32 + dVar1 * dVar29 * dVar4;
          if (1.0 <= dVar29) {
            dVar29 = 1.0;
          }
          if (dVar29 <= 0.0) {
            dVar29 = 0.0;
          }
          bVar26 = *(char *)((longlong)local_1d8 + 0x1fb) == '\x02';
          if (bVar26) {
            lVar12 = param_1[0x22];
            local_108 = *(code **)(lVar12 + 0x260);
            dStack_100 = *(double *)(lVar12 + 0x268);
            local_f8 = *(double *)(lVar12 + 0x270);
            FUN_1403d64f2(local_1d8,param_1[0xec],&local_108,&local_188);
          }
          fVar44 = (float)dVar29;
          fVar27 = 0.0;
          if ((fVar38 <= 0.0) || (1.0 <= fVar44)) {
LAB_14343d02a:
            if (1.0 <= fVar44) {
              uVar9 = 0;
              uVar39 = SUB84(local_1e0,0);
              uVar40 = (undefined4)((ulonglong)local_1e0 >> 0x20);
              goto LAB_14343c5c2;
            }
          }
          else {
            local_1d8 = local_158;
            dVar28 = local_158 - local_138;
            dVar31 = dStack_160 - dStack_140;
            local_1b0 = local_168;
            dVar29 = (double)local_168 - (double)local_148;
            if ((ABS(dVar29) <= 9.999999747378752e-05) &&
               ((ABS(dVar31) <= 9.999999747378752e-05 && (ABS(dVar28) <= 9.999999747378752e-05))))
            goto LAB_14343d02a;
            fVar38 = fVar38 * (1.0 - fVar44);
            dVar33 = dVar28 * dVar28 + dVar29 * dVar29 + dVar31 * dVar31;
            if ((double)(fVar38 * fVar38) <= dVar33) {
              if (((dVar33 != 1.0) ||
                  (dVar32 = dVar28, dVar34 = dVar31, dVar4 = dVar29, NAN(dVar33))) &&
                 (dVar32 = DAT_14c8464f0, dVar34 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
                 9.99999993922529e-09 <= dVar33)) {
                dVar33 = 1.0 / SQRT(dVar33);
                dVar32 = dVar28 * dVar33;
                dVar34 = dVar31 * dVar33;
                dVar4 = dVar29 * dVar33;
              }
              dVar29 = (double)fVar38;
              local_168 = (code *)((double)local_168 - dVar4 * dVar29);
              dStack_160 = dStack_160 - dVar34 * dVar29;
              local_158 = local_158 - dVar32 * dVar29;
              plVar18 = (longlong *)param_1[0x22];
              local_128 = (code *)plVar18[0x48];
              dStack_120 = (double)plVar18[0x49];
              local_118 = (double)plVar18[0x4a];
              uStack_110 = (double)plVar18[0x4b];
              local_f8 = local_158 - (double)plVar18[0x4e];
              dStack_100 = dStack_160 - (double)plVar18[0x4d];
              local_108 = (code *)((double)local_168 - (double)plVar18[0x4c]);
            }
            else {
              local_158 = local_138;
              local_168 = local_148;
              dStack_160 = dStack_140;
              plVar18 = (longlong *)param_1[0x22];
              local_128 = (code *)plVar18[0x48];
              dStack_120 = (double)plVar18[0x49];
              local_118 = (double)plVar18[0x4a];
              uStack_110 = (double)plVar18[0x4b];
              local_f8 = local_138 - (double)plVar18[0x4e];
              dStack_100 = dStack_140 - (double)plVar18[0x4d];
              local_108 = (code *)((double)local_148 - (double)plVar18[0x4c]);
            }
            local_228 = CONCAT71(local_228._1_7_,1);
            local_230 = (double *)((ulonglong)local_230 & 0xffffffff00000000);
            local_238 = (code **)0x0;
            (**(code **)(*plVar18 + 0x510))(plVar18,&local_108,&local_128,1);
            *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
          }
          dVar29 = (double)(1.0 - fVar44) *
                   SQRT((local_158 - local_138) * (local_158 - local_138) +
                        ((double)local_168 - (double)local_148) *
                        ((double)local_168 - (double)local_148) +
                        (dStack_160 - dStack_140) * (dStack_160 - dStack_140));
          if (dVar29 < (double)fVar37) {
            fVar37 = (float)dVar29;
          }
          uVar39 = SUB84(local_1e0,0);
          uVar40 = (undefined4)((ulonglong)local_1e0 >> 0x20);
          uVar9 = 1;
          fVar27 = fVar37;
        }
      }
LAB_14343c5c2:
      *(float *)(param_1 + 0xee) = fVar27;
      *(undefined1 *)((longlong)param_1 + 0x76c) = uVar9;
      bVar24 = bVar26;
    }
    bVar26 = false;
    if (((param_8 != '\x03' & (bVar8 ^ 1)) == 0) && (bVar26 = false, 0.0 < fVar27)) {
      dVar31 = local_158 - local_138;
      dVar29 = dStack_160 - dStack_140;
      dVar33 = (double)local_168 - (double)local_148;
      dVar28 = dVar31 * dVar31 + dVar33 * dVar33 + dVar29 * dVar29;
      if (dVar28 <= (double)(fVar27 * fVar27)) {
        local_158 = local_138;
        local_168 = local_148;
        dStack_160 = dStack_140;
        bVar26 = true;
      }
      else {
        if (((dVar28 != 1.0) || (dVar32 = dVar31, dVar34 = dVar33, dVar4 = dVar29, NAN(dVar28))) &&
           (dVar32 = DAT_14c8464f0, dVar34 = DAT_14c8464e0, dVar4 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar28)) {
          dVar28 = 1.0 / SQRT(dVar28);
          dVar32 = dVar31 * dVar28;
          dVar34 = dVar33 * dVar28;
          dVar4 = dVar29 * dVar28;
        }
        fVar38 = fVar27 - _DAT_14c7613e4;
        if (fVar27 <= fVar27 - _DAT_14c7613e4) {
          fVar38 = fVar27;
        }
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        dVar29 = (double)fVar38;
        local_158 = local_158 - dVar32 * dVar29;
        dStack_160 = dStack_160 - dVar4 * dVar29;
        local_168 = (code *)((double)local_168 - dVar34 * dVar29);
        bVar26 = false;
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x34a) =
       *(byte *)((longlong)param_1 + 0x34a) & 0xfb | (*(byte *)(lVar11 + 0xb4) & 1) << 2;
  if ((*(byte *)(lVar11 + 0xb4) & 1) == 0) {
    if (!bVar26) {
      local_218 = (wchar_t *)CONCAT71(local_218._1_7_,param_8);
      local_220 = local_1c8;
      local_230 = param_5;
      local_238 = &local_148;
      local_228 = param_6;
      cVar7 = (**(code **)(*param_1 + 0xa30))(param_1,param_2,param_3,param_4);
      if (cVar7 != '\0') goto LAB_14343c800;
    }
    lVar12 = local_1c8;
    local_218 = (wchar_t *)CONCAT71(local_218._1_7_,param_8);
    local_220 = local_1c8;
    local_230 = param_5;
    local_238 = &local_148;
    local_228 = param_6;
    cVar7 = (**(code **)(*param_1 + 0xa40))(param_1,param_2,param_3,param_4);
    bVar8 = local_1e1;
    if (cVar7 == '\0') goto LAB_14343cd58;
    lVar22 = *local_1d0;
    dVar30 = *(double *)(lVar22 + 0x260) - (double)local_148;
    if (((dVar30 != 0.0) || (NAN(dVar30))) ||
       ((dVar30 = *(double *)(lVar22 + 0x268) - dStack_140, dVar30 != 0.0 ||
        ((((NAN(dVar30) || (dVar30 = *(double *)(lVar22 + 0x270) - local_138, dVar30 != 0.0)) ||
          (NAN(dVar30))) || (cVar7 = (**(code **)(*param_1 + 0x5e0))(param_1), cVar7 != param_8)))))
       ) {
LAB_14343cc5f:
      local_198 = local_138;
      local_1a8 = local_148;
      dStack_1a0 = dStack_140;
      local_238 = (code **)((ulonglong)local_238 & 0xffffffffffffff00);
      FUN_140d93b16(param_1[0x22],&local_1a8,0,0);
      (**(code **)(*param_1 + 0x5f0))(param_1,param_8);
      (**(code **)(*param_1 + 0x730))(param_1,param_6,lVar12,1);
      (**(code **)(*param_1 + 0xa78))(param_1);
      (**(code **)(*param_1 + 0x658))(param_1);
      lVar12 = param_1[0x22];
      if (lVar12 == 0) {
        plVar17 = (longlong *)&DAT_14c8463d0;
        plVar14 = (longlong *)&DAT_14c8463e0;
        plVar18 = (longlong *)&DAT_14c8464e0;
        dVar30 = DAT_14c8464f0;
      }
      else {
        plVar18 = (longlong *)(lVar12 + 0x260);
        plVar17 = (longlong *)(lVar12 + 0x240);
        plVar14 = (longlong *)(lVar12 + 0x250);
        dVar30 = *(double *)(lVar12 + 0x270);
      }
      lVar12 = plVar18[1];
      param_1[0x78] = *plVar18;
      param_1[0x79] = lVar12;
      param_1[0x7a] = (longlong)dVar30;
      lVar12 = plVar17[1];
      lVar22 = *plVar14;
      lVar6 = plVar14[1];
      param_1[0x74] = *plVar17;
      param_1[0x75] = lVar12;
      param_1[0x76] = lVar22;
      param_1[0x77] = lVar6;
      param_1[0x7b] = param_1[0x25];
      param_1[0x7c] = param_1[0x26];
      param_1[0x7d] = param_1[0x27];
    }
    else {
      lVar22 = param_1[0x3e];
      if (lVar22 == 0) {
        if (param_6 != 0) goto LAB_14343cc5f;
      }
      else if ((*(longlong *)(lVar22 + 0x450) != param_6) ||
              (*(longlong *)(lVar22 + 0x444) != lVar12)) goto LAB_14343cc5f;
    }
LAB_14343cd58:
    *(undefined4 *)(lVar11 + 0x18) = param_2;
    *(undefined1 *)(lVar11 + 0x90) = 1;
    lVar22 = local_1b8;
  }
  else {
LAB_14343c800:
    lVar22 = local_1b8;
    *(longlong *)(lVar11 + 0x48) = param_1[0x27];
    lVar12 = param_1[0x26];
    *(longlong *)(lVar11 + 0x38) = param_1[0x25];
    *(longlong *)(lVar11 + 0x40) = lVar12;
    *(longlong *)(lVar11 + 0x80) = lVar21;
    *(longlong *)(lVar11 + 0x88) = local_1b8;
    ppcVar16 = &local_128;
    FUN_1403ed616(&local_128,&local_168,param_1);
    uVar35 = SUB84(ppcVar16,0);
    *(double *)(lVar11 + 0x30) = local_118;
    *(code **)(lVar11 + 0x20) = local_128;
    *(double *)(lVar11 + 0x28) = dStack_120;
    lVar12 = param_1[0x22];
    pcVar5 = *(code **)(lVar12 + 0x240);
    dVar29 = *(double *)(lVar12 + 0x248);
    dVar28 = *(double *)(lVar12 + 0x250);
    dVar31 = *(double *)(lVar12 + 600);
    pdVar13 = *(double **)(lVar12 + 0x228);
    dVar33 = local_118;
    local_128 = pcVar5;
    dStack_120 = dVar29;
    local_118 = dVar28;
    uStack_110 = dVar31;
    if (pdVar13 == (double *)0x0) {
      uVar35 = 0x40;
      pdVar13 = (double *)FUN_14001cc68();
      dVar33 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar33;
      dVar33 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar33;
      dVar33 = DAT_14c846500;
      pdVar13[4] = DAT_14c8464f8;
      pdVar13[5] = dVar33;
      dVar33 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)(lVar12 + 0x228) = pdVar13;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar29 != pdVar13[1]);
    auVar2._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar13);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar29 != pdVar13[1]) >> 0x20);
    iVar10 = movmskpd(SUB84(dVar33,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar31 != pdVar13[3]);
    auVar3._0_8_ = -(ulonglong)(dVar28 != pdVar13[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar31 != pdVar13[3]) >> 0x20);
    uVar15 = movmskpd(uVar35,auVar3);
    if ((uVar15 & 0x3fffffff) != 0 || iVar10 != 0) {
      *(undefined4 *)(pdVar13 + 2) = (undefined4)local_118;
      *(undefined4 *)((longlong)pdVar13 + 0x14) = local_118._4_4_;
      *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_110._4_4_;
      *pdVar13 = (double)local_128;
      pdVar13[1] = dStack_120;
      FUN_1448052ee();
      pdVar13[6] = local_f8;
      pdVar13[4] = (double)local_108;
      pdVar13[5] = dStack_100;
    }
    bVar8 = local_1e1;
    dVar29 = pdVar13[4];
    dVar28 = pdVar13[5];
    *(double *)(lVar11 + 0x60) = pdVar13[6];
    *(double *)(lVar11 + 0x50) = dVar29;
    *(double *)(lVar11 + 0x58) = dVar28;
    lVar12 = param_1[0x47];
    *(longlong *)(lVar11 + 0x68) = param_1[0x46];
    *(longlong *)(lVar11 + 0x70) = lVar12;
    *(longlong *)(lVar11 + 0x78) = param_1[0x48];
    if (((byte)local_1bc & bVar24) == 0) {
      if (lVar21 == 0) {
        *(undefined2 *)(lVar11 + 0x91) = 0;
      }
      else {
        bVar26 = *(char *)(lVar21 + 0x1fb) == '\x02';
        *(bool *)(lVar11 + 0x91) = bVar26;
        *(undefined1 *)(lVar11 + 0x92) = 0;
        if (bVar26) {
          lVar12 = param_1[0x3e];
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar12 + 0x468);
          uVar19 = *(undefined8 *)(lVar12 + 0x460);
          *(double *)(lVar11 + 0x20) = *(double *)(lVar12 + 0x458);
          *(undefined8 *)(lVar11 + 0x28) = uVar19;
          if (DAT_14c7613dc != 0) {
            *(undefined1 *)(lVar11 + 0x92) = 1;
            local_118 = *(double *)(lVar11 + 0x48);
            local_128 = *(code **)(lVar11 + 0x38);
            dStack_120 = *(double *)(lVar11 + 0x40);
            FUN_1406efcee(lVar21,lVar22);
          }
        }
      }
    }
    else {
      *(undefined2 *)(lVar11 + 0x91) = 1;
      *(ulonglong *)(lVar11 + 0x38) = CONCAT44(uVar40,uVar39);
      *(double *)(lVar11 + 0x40) = dVar30;
      *(double *)(lVar11 + 0x48) = dVar1;
      if ((int)param_1[0xb6] == 0) {
LAB_14343ce7f:
        uVar19 = 0;
      }
      else {
        uVar15 = *(uint *)((longlong)param_1 + 0x5ac);
        uVar19 = 0;
        if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
          puVar20 = (undefined8 *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
          if ((puVar20 == (undefined8 *)0x0) ||
             ((*(int *)(puVar20 + 2) != (int)param_1[0xb6] ||
              ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_14343ce7f;
          uVar19 = *puVar20;
        }
      }
      *(undefined8 *)(lVar11 + 0x80) = uVar19;
      *(longlong *)(lVar11 + 0x88) = param_1[0xec];
      *(double *)(lVar11 + 0x30) = local_178;
      *(double *)(lVar11 + 0x20) = (double)local_188;
      *(double *)(lVar11 + 0x28) = dStack_180;
    }
    lVar12 = param_1[0x16];
    if ((lVar12 == 0) &&
       (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
        (lVar12 = FUN_1447210f0(), lVar12 == 0)))) {
      lVar12 = param_1[4];
      if (lVar12 != 0) {
        if (DAT_14cb10130 == 0) {
          local_128 = FUN_140754f84;
          local_1f0 = FUN_14081d0ea;
          local_1f8 = FUN_14081d0ea;
          local_208 = &LAB_147da9a76;
          local_210 = FUN_1409f3105;
          local_218 = L"Engine";
          local_220 = 0;
          local_228 = CONCAT44(local_228._4_4_,0x10000000);
          local_230 = (double *)CONCAT44(local_230._4_4_,8);
          local_238 = (code **)CONCAT44(local_238._4_4_,0x990);
          local_200 = &local_128;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
        goto LAB_14343cb90;
      }
      lVar12 = 0;
    }
LAB_14343cb90:
    *(float *)(lVar11 + 0xa8) = (float)*(double *)(lVar12 + 0x6d0);
    *(int *)(lVar11 + 0x1c) = (int)param_3;
    *(undefined4 *)(lVar11 + 0x18) = param_2;
    *(undefined1 *)(lVar11 + 0x90) = 0;
    uVar9 = (**(code **)(*param_1 + 0x5e0))(param_1);
    *(undefined1 *)(lVar11 + 0x93) = uVar9;
  }
  uVar9 = local_1e2;
  *(byte *)(lVar11 + 0xb4) = *(byte *)(lVar11 + 0xb4) & 0xfe;
  if (lVar21 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
    iVar10 = 0;
  }
  else {
    uVar15 = *(uint *)(lVar21 + 0xc);
    *(uint *)((longlong)param_1 + 0x5ac) = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar23 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar23);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar26 = iVar10 == 0;
      if (bVar26) {
        *(int *)(lVar11 + 0x10) = iVar23;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar10 = iVar23;
      }
    }
  }
  *(int *)(param_1 + 0xb6) = iVar10;
  param_1[0xec] = lVar22;
  *(undefined1 *)(param_1 + 0xed) = uVar9;
  *(byte *)((longlong)param_1 + 0x769) = bVar8;
  *(bool *)((longlong)param_1 + 0x76a) = *(char *)((longlong)param_1 + 0x291) == '\x01';
LAB_14343cde3:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343d562 FUN_14343d562 body=102 status=ok
// SIG undefined FUN_14343d562(void)

undefined8 FUN_14343d562(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x5b5) & 2) == 0) {
    cVar1 = (**(code **)(*param_1 + 0xa38))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14343d5c8 FUN_14343d5c8 body=283 status=ok
// SIG undefined FUN_14343d5c8(void)

undefined8 FUN_14343d5c8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
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
  longlong lVar3;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x5b5) & 4) == 0) {
    if (DAT_14cac0fa8 == (longlong *)0x0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_141117124;
      local_38 = &LAB_14786c867;
      local_40 = &LAB_145abcadb;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x438;
      FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
    }
    plVar1 = DAT_14cac0fa8;
    lVar3 = DAT_14cac0fa8[0x22];
    if (lVar3 == 0) {
      (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
      lVar3 = plVar1[0x22];
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x418));
  }
  else {
    uVar2 = CONCAT71((int7)(local_10 >> 8),1);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343d6e4 FUN_14343d6e4 body=87 status=ok
// SIG undefined FUN_14343d6e4(void)

void FUN_14343d6e4(void)

{
  if (DAT_14cad0d30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0d10 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0ce0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0cb0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14343d73c FUN_14343d73c body=78 status=ok
// SIG undefined FUN_14343d73c(void)

ulonglong FUN_14343d73c(longlong param_1,float param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((0 < (int)*(uint *)(param_1 + 0x20)) &&
     (((lVar1 = *(longlong *)(param_1 + 0x48), lVar1 == 0 || ((*(byte *)(lVar1 + 0x10) & 0x10) != 0)
       ) || (*(float *)(lVar1 + 0x14) < param_2)))) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    uVar2 = 0;
    do {
      if ((*(float *)(*plVar3 + 0x14) == param_2) &&
         (!NAN(*(float *)(*plVar3 + 0x14)) && !NAN(param_2))) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 2;
    } while (*(uint *)(param_1 + 0x20) != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 14343d78a FUN_14343d78a body=524 status=ok
// SIG undefined FUN_14343d78a(void)

void FUN_14343d78a(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)((longlong)(int)param_2 * 0x10 + param_1[3]);
  if (param_1[9] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,param_1 + 9);
  }
  lVar8 = *plVar7;
  lVar3 = plVar7[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_1[10];
  param_1[9] = lVar8;
  param_1[10] = lVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (0 < (int)param_2) {
    lVar8 = 0;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,param_1[3] + lVar8);
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar8);
  }
  iVar6 = param_2 + 1;
  _Dst = (void *)param_1[3];
  FUN_1410a3383(_Dst,iVar6);
  iVar4 = (int)param_1[4] - iVar6;
  iVar5 = iVar6;
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)iVar6 * 0x10 + (longlong)_Dst),(longlong)iVar4 << 4);
    iVar5 = (int)param_1[4];
  }
  *(int *)(param_1 + 4) = iVar5 - iVar6;
  lVar8 = *(longlong *)(param_3 + 0xb0);
  if ((lVar8 == 0) &&
     (((*(longlong *)(param_3 + 0xa8) == 0 ||
       ((*(uint *)(*(longlong *)(param_3 + 0xa8) + 8) & 0x10) != 0)) ||
      (lVar8 = FUN_1447210f0(), lVar8 == 0)))) {
    lVar8 = *(longlong *)(param_3 + 0x20);
    if (lVar8 == 0) goto LAB_14343d8a8;
    if (DAT_14cb10130 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_14343d8a8;
  }
  *(float *)(param_1 + 2) = (float)*(double *)(lVar8 + 0x6e0);
LAB_14343d8a8:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343d99a FUN_14343d99a body=690 status=ok
// SIG undefined FUN_14343d99a(void)

void FUN_14343d99a(longlong *param_1,undefined8 param_2,float param_3,undefined4 *param_4,
                  double *param_5,float param_6,undefined8 param_7,ulonglong param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [24];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70 [24];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    local_e0 = local_70;
    local_58 = 0;
    local_88 = (double)param_6;
    local_78 = -(double)param_1[0x48] * local_88;
    local_80 = -(double)param_1[0x47] * local_88;
    local_88 = -(double)param_1[0x46] * local_88;
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_9c = param_4[3];
    local_98 = *(undefined8 *)(param_4 + 4);
    local_e8 = param_11;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    (**(code **)(*param_1 + 0xab0))(param_1,param_2);
    lVar3 = param_1[0x102];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar3;
    }
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      fVar1 = *(float *)(*(longlong *)(lVar3 + 0x48) + 0x14);
      if ((fVar1 == (float)param_2) && (!NAN(fVar1) && !NAN((float)param_2))) {
        local_b0 = param_5[2] * 180.0;
        local_b8 = param_5[1] * 180.0;
        local_c0 = *param_5 * 180.0;
        if (*(longlong *)(param_1[0x3e] + 0x1c8) != 0) {
          local_f8 = 0;
          local_100 = local_100 & 0xffffffff00000000;
          local_108 = 0;
          FUN_1407fd932(*(longlong *)(param_1[0x3e] + 0x1c8),&DAT_14c8464e0,&local_c0,1);
        }
        FUN_1434e16a4(local_d8,param_4,param_1[0x22]);
        if ((*(byte *)(param_1[0x3e] + 0x550) & 0x40) == 0) {
          fVar1 = *(float *)(*(longlong *)(lVar3 + 0x48) + 0x36c);
          if ((fVar1 == param_3) && (!NAN(fVar1) && !NAN(param_3))) goto LAB_14343db03;
        }
        lVar3 = *(longlong *)(param_1[0x3e] + 0x428);
        if ((lVar3 != 0) &&
           (((lVar3 = *(longlong *)(lVar3 + 0xae8), lVar3 != 0 &&
             (lVar3 = *(longlong *)(lVar3 + 0x358), lVar3 != 0)) && (*(int *)(lVar3 + 0x1b4) < 1))))
        {
          *(float *)(lVar3 + 0x148) = param_3;
          *(undefined4 *)(lVar3 + 0x4c) = 0xfffffffe;
          *(undefined4 *)(lVar3 + 0x54) = 0xfffffffe;
          *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) | 0x40;
        }
      }
    }
  }
LAB_14343db03:
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343dc4e FUN_14343dc4e body=808 status=ok
// SIG undefined FUN_14343dc4e(void)

void FUN_14343dc4e(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  float param_5,undefined4 *param_6,double *param_7,float param_8,undefined8 param_9
                  ,ulonglong param_10,undefined1 param_11,undefined1 param_12,undefined1 param_13)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [24];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70 [24];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if ((cVar2 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) goto LAB_14343df20;
  local_e0 = local_70;
  local_58 = 0;
  local_88 = (double)param_8;
  local_78 = -(double)param_1[0x48] * local_88;
  local_80 = -(double)param_1[0x47] * local_88;
  local_88 = -(double)param_1[0x46] * local_88;
  local_a8 = *param_6;
  uStack_a4 = param_6[1];
  uStack_a0 = param_6[2];
  uStack_9c = param_6[3];
  local_98 = *(undefined8 *)(param_6 + 4);
  local_e8 = param_13;
  local_f0 = param_12;
  local_f8 = param_11;
  local_100 = param_10;
  local_108 = param_9;
  (**(code **)(*param_1 + 0xab0))(param_1,param_2);
  lVar3 = param_1[0x102];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar3;
  }
  if (*(longlong *)(lVar3 + 0x48) == 0) goto LAB_14343df20;
  fVar1 = *(float *)(*(longlong *)(lVar3 + 0x48) + 0x14);
  if ((fVar1 != (float)param_2) || (NAN(fVar1) || NAN((float)param_2))) goto LAB_14343df20;
  local_b0 = param_7[2] * 180.0;
  local_b8 = param_7[1] * 180.0;
  local_c0 = *param_7 * 180.0;
  if (*(longlong *)(param_1[0x3e] + 0x1c8) != 0) {
    local_f8 = 0;
    local_100 = local_100 & 0xffffffff00000000;
    local_108 = 0;
    FUN_1407fd932(*(longlong *)(param_1[0x3e] + 0x1c8),&DAT_14c8464e0,&local_c0,1);
  }
  FUN_1434e16a4(local_d8,param_6,param_1[0x22]);
  if (param_4 != '\0') {
    if ((*(byte *)(param_1[0x3e] + 0x550) & 0x40) == 0) {
      fVar1 = *(float *)(*(longlong *)(lVar3 + 0x48) + 0x36c);
      if ((fVar1 == param_5) && (!NAN(fVar1) && !NAN(param_5))) goto LAB_14343ded1;
    }
    lVar4 = *(longlong *)(param_1[0x3e] + 0x428);
    if ((lVar4 != 0) &&
       (((lVar4 = *(longlong *)(lVar4 + 0xae8), lVar4 != 0 &&
         (lVar4 = *(longlong *)(lVar4 + 0x358), lVar4 != 0)) && (*(int *)(lVar4 + 0x1b4) < 1)))) {
      *(float *)(lVar4 + 0x148) = param_5;
      *(undefined4 *)(lVar4 + 0x4c) = 0xfffffffe;
      *(undefined4 *)(lVar4 + 0x54) = 0xfffffffe;
      *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) | 0x40;
    }
  }
LAB_14343ded1:
  FUN_143432022(param_1,*(longlong *)(lVar3 + 0x48) + 0x3f0,param_3,param_2);
  FUN_1434e8f86(param_3);
  lVar4 = param_1[0x3e];
  if (-1 < *(char *)(lVar4 + 0x550)) {
    cVar2 = FUN_147aa0c3a(param_3,*(longlong *)(lVar3 + 0x48) + 0x3f0);
    if (cVar2 != '\0') goto LAB_14343df20;
    lVar4 = param_1[0x3e];
  }
  FUN_140fb3d70(lVar4 + 0x5b8,param_3);
  *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) | 0x80;
LAB_14343df20:
  FUN_140d7a9b4(param_3);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343df78 FUN_14343df78 body=3128 status=ok
// SIG undefined FUN_14343df78(void)

void FUN_14343df78(longlong param_1,float param_2)

{
  undefined8 **ppuVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  undefined8 **ppuVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_438 [32];
  ulonglong *local_418;
  uint local_410;
  undefined4 local_408;
  undefined8 local_400;
  wchar_t *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  undefined8 *local_3e0;
  undefined1 *local_3d8;
  code *local_3d0;
  longlong *local_3c0;
  longlong *local_3b8;
  double local_3a0;
  double local_398;
  longlong *plStack_390;
  double local_388;
  undefined8 uStack_380;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 uStack_360;
  float *local_350;
  undefined8 **local_348;
  double local_340;
  double local_338;
  longlong *plStack_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  undefined8 local_308;
  float **local_300;
  double local_2e0;
  longlong *local_2d8;
  double local_2d0;
  float local_268;
  undefined4 local_264;
  byte local_25b;
  undefined4 local_238;
  float local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  float *local_1e8 [4];
  double local_1c8;
  longlong *plStack_1c0;
  double local_1b8;
  undefined8 *local_188;
  undefined1 *local_180;
  undefined1 local_171;
  ulonglong local_170 [3];
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar7 = *(longlong *)(param_1 + 0x118);
  if ((((lVar7 != 0) && (0.0 < *(float *)(param_1 + 0x380))) &&
      (*(longlong *)(param_1 + 0x1f0) != 0)) && (0 < *(int *)(lVar7 + 0x408))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cad0e60) && (FUN_144b3d300(), DAT_14cad0e60 == -1)) {
      local_308 = (code *)0x14a83af45;
      local_300 = (float **)CONCAT35(local_300._5_3_,0x17);
      uVar13 = FUN_14001a6c0(&local_308,1);
      DAT_14cad0e58 = (ulonglong)uVar13;
      _Init_thread_footer();
    }
    local_14c = 0;
    local_170[1] = 0;
    local_148 = 0x101;
    local_120 = 0;
    local_118 = 0x800000000;
    local_100 = 0;
    local_f8 = 0x400000000;
    local_170[2] = 0x100000000000100;
    local_154 = 0;
    local_170[0] = DAT_14cad0e58;
    local_150 = 0;
    local_158 = 1;
    if (0 < *(int *)(lVar7 + 0x408)) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x438);
      dVar3 = *(double *)(lVar17 + 0x280);
      uVar21 = SUB84(dVar3,0);
      uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar4 = *(double *)(lVar17 + 0x288);
      if (dVar4 <= dVar3) {
        uVar21 = SUB84(dVar4,0);
        uVar22 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      fVar2 = *(float *)(lVar17 + 0x644);
      lVar19 = *(longlong *)(param_1 + 0x118);
      dVar3 = *(double *)(lVar19 + 0x270);
      dVar4 = *(double *)(lVar19 + 0x260);
      dVar5 = *(double *)(lVar19 + 0x268);
      dVar8 = (double)param_2;
      dVar9 = (double)((float)*(double *)(lVar17 + 0x290) * *(float *)(lVar17 + 0x640));
      lVar19 = 0xe4;
      lVar17 = 0;
      do {
        lVar20 = *(longlong *)(lVar7 + 0x400);
        if ((((*(int *)(lVar20 + lVar19) != 0) &&
             (uVar13 = *(uint *)(lVar20 + -4 + lVar19), -1 < (int)uVar13)) &&
            (((int)uVar13 < DAT_14c9647dc &&
             (((plVar18 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(lVar20 + lVar19))) &&
              ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) &&
           ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
            (1 < *(byte *)((longlong)plVar18 + 0x1fb))))) {
          uVar13 = *(uint *)(lVar20 + -0x34 + lVar19);
          if ((ulonglong)uVar13 == 0xffffffff) {
LAB_14343e22f:
            ppuVar14 = (undefined8 **)(**(code **)(*plVar18 + 0x7b8))(plVar18,0,1,0xffffffff);
          }
          else {
            if (DAT_14cad2858 == 0) {
              local_308 = FUN_144a7958c;
              local_3d0 = FUN_14081d0ea;
              local_3d8 = &LAB_146395584;
              local_3e8 = &LAB_147a0ba80;
              local_3f0 = &LAB_14575ccce;
              local_3f8 = L"Engine";
              local_400 = 0x40000000000;
              local_408 = 0x10000004;
              local_410 = 0x10;
              local_418 = (ulonglong *)CONCAT44(local_418._4_4_,0x1180);
              local_3e0 = &local_308;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
                != DAT_14cad2858 + 0x30)) goto LAB_14343e22f;
            if (((int)uVar13 < 0) || ((int)plVar18[0x1af] <= (int)uVar13)) goto LAB_14343e255;
            ppuVar14 = *(undefined8 ***)(plVar18[0x1ae] + (ulonglong)uVar13 * 8);
          }
          if ((((ppuVar14 != (undefined8 **)0x0) && (((ulonglong)ppuVar14[1] & 1) != 0)) &&
              (*(uint *)((longlong)ppuVar14 + 4) != 0)) &&
             (((uVar13 = *(uint *)ppuVar14, -1 < (int)uVar13 && ((int)uVar13 < DAT_14c9647dc)) &&
              ((plVar18 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 &&
               ((*(uint *)(plVar18 + 2) == *(uint *)((longlong)ppuVar14 + 4) &&
                ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))))) {
            if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
              lVar20 = *plVar18;
            }
            else {
              lVar20 = 0;
            }
            lVar15 = DAT_14c997cc0;
            if (DAT_14c997cc0 == 0) {
              plVar18 = (longlong *)FUN_145a62958();
              lVar15 = plVar18[0x22];
              if (lVar15 == 0) {
                local_3c0 = plVar18;
                (**(code **)(*plVar18 + 1000))();
                lVar15 = local_3c0[0x22];
              }
            }
            cVar11 = *(char *)(lVar15 + 0x75);
            if (*(char *)(lVar20 + 0x31) != '\0') {
              cVar11 = *(char *)(lVar20 + 0x31);
            }
            if ((cVar11 != '\x03') && (ppuVar14[0x27] != (undefined8 *)0x0)) {
              ppuVar1 = ppuVar14 + 0x27;
              if (0.0 < DAT_14cad0b00) {
                local_208 = 0.0;
                local_1e8[0] = &local_208;
                local_300 = local_1e8;
                local_308 = (code *)&LAB_14362051c;
                FUN_1448e6002(ppuVar1,&local_308);
                if ((1e-08 < local_208) && (*(float *)(param_1 + 0x360) / local_208 < DAT_14cad0b00)
                   ) goto LAB_14343e255;
              }
              FUN_1447f067c(ppuVar14,local_1e8,1,0);
              local_208 = (float)DAT_14c8464e0;
              uStack_204 = DAT_14c8464e0._4_4_;
              uStack_200 = (undefined4)DAT_14c8464e8;
              uStack_1fc = DAT_14c8464e8._4_4_;
              local_1f8 = DAT_14c8464f0;
              local_350 = &local_208;
              local_300 = &local_350;
              local_308 = (code *)&LAB_143620340;
              local_348 = ppuVar14;
              FUN_1448e6002(ppuVar1);
              dVar30 = local_1b8;
              plVar18 = plStack_1c0;
              dVar10 = local_1c8;
              memset(&local_308,0,0x100);
              local_238 = 0xffffffff;
              local_308 = (code *)CONCAT44(0x3f800000,(undefined4)local_308);
              local_264 = 0xffffffff;
              dVar24 = *(double *)(param_1 + 0x230);
              dVar26 = *(double *)(param_1 + 0x238);
              dVar6 = *(double *)(param_1 + 0x240);
              dVar27 = dVar3 * dVar6 + dVar4 * dVar24 + dVar5 * dVar26;
              local_3c0 = plVar18;
              dVar25 = dVar30 * dVar6 + dVar10 * dVar24 + (double)plVar18 * dVar26;
              local_310 = dVar6 * dVar25 + (dVar3 - dVar6 * dVar27);
              local_318 = dVar26 * dVar25 + (dVar5 - dVar26 * dVar27);
              local_320 = dVar25 * dVar24 + (dVar4 - dVar27 * dVar24);
              local_338 = dVar10;
              plStack_330 = plVar18;
              local_328 = dVar30;
              local_418 = local_170;
              bVar12 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x978))
                                 (*(longlong **)(param_1 + 0x118),&local_308,&local_338,&local_320);
              if (bVar12 == 0) {
                bVar16 = 1;
                dVar24 = dVar30;
                dVar26 = dVar10;
                local_3b8 = local_3c0;
              }
              else {
                bVar16 = (local_25b & 2) >> 1 | 2.5 < local_268;
                dVar24 = local_2d0;
                dVar26 = local_2e0;
                local_3b8 = local_2d8;
              }
              local_3a0 = dVar30;
              local_398 = dVar10;
              plStack_390 = plVar18;
              local_378 = *(double *)(param_1 + 0x230);
              local_388 = *(double *)(param_1 + 0x238);
              dVar6 = *(double *)(param_1 + 0x240);
              dVar27 = (dVar24 - dVar30) * dVar6 +
                       (dVar26 - dVar10) * local_378 +
                       ((double)local_3b8 - (double)local_3c0) * local_388;
              uStack_380 = 0;
              uStack_370 = 0;
              dVar25 = (dVar24 - dVar30) - dVar6 * dVar27;
              dVar28 = ((double)local_3b8 - (double)local_3c0) - local_388 * dVar27;
              dVar27 = (dVar26 - dVar10) - dVar27 * local_378;
              fVar23 = (float)(dVar25 * dVar25 + dVar27 * dVar27 + dVar28 * dVar28);
              if (((fVar23 < 2.5 & bVar12) == 1) && (bVar16 == 0)) {
                local_171 = 0;
                local_188 = &DAT_14c8464e0;
                local_180 = &local_171;
                local_348 = &local_188;
                local_350 = (float *)FUN_14362224a;
                FUN_144966906(ppuVar1,&local_350);
              }
              else {
                dVar28 = dVar24 - (local_1f8 * dVar8 + dVar30);
                dVar29 = dVar26 - ((double)CONCAT44(uStack_204,local_208) * dVar8 + dVar10);
                dVar25 = (double)local_3b8 -
                         ((double)CONCAT44(uStack_1fc,uStack_200) * dVar8 + (double)local_3c0);
                dVar27 = dVar28 * dVar6 + dVar29 * local_378 + local_388 * dVar25;
                dVar28 = dVar28 - dVar6 * dVar27;
                dVar29 = dVar29 - local_378 * dVar27;
                dVar25 = dVar25 - dVar27 * local_388;
                if ((float)(dVar28 * dVar28 + dVar29 * dVar29 + dVar25 * dVar25) <= fVar23 ||
                    bVar16 != 0) {
                  uStack_360 = 0;
                  dVar27 = -dVar6;
                  dVar25 = -local_388;
                  dVar28 = -local_378;
                  if (bVar12 == 0) {
                    dVar24 = dVar3 * dVar27 + dVar4 * dVar28 + dVar5 * dVar25;
                    dVar26 = dVar24 + dVar9;
                    dVar24 = dVar24 - dVar9;
                    dVar30 = dVar30 * dVar27 + dVar28 * dVar10 + (double)local_3c0 * dVar25;
                    if (dVar26 <= dVar30) {
                      dVar30 = dVar26;
                    }
                    if (dVar30 <= dVar24) {
                      dVar30 = dVar24;
                    }
                  }
                  else {
                    dVar30 = dVar24 * dVar27 + dVar26 * dVar28 + (double)local_3b8 * dVar25;
                  }
                  dVar24 = dVar3 * dVar6 + dVar4 * local_378 + dVar5 * local_388;
                  local_340 = (dVar3 - dVar6 * dVar24) - dVar6 * dVar30;
                  local_348 = (undefined8 **)((dVar5 - local_388 * dVar24) - local_388 * dVar30);
                  local_350 = (float *)((dVar4 - dVar24 * local_378) - local_378 * dVar30);
                  local_410 = local_410 & 0xffffff00;
                  local_418 = (ulonglong *)((ulonglong)local_418 & 0xffffffffffffff00);
                  local_408 = CONCAT31(local_408._1_3_,1);
                  local_368 = dVar6;
                  FUN_147c48170(ppuVar14,&local_350,
                                CONCAT44(unaff_XMM6_Db,
                                         (float)(double)CONCAT44(uVar22,uVar21) * fVar2 * 1.2),
                                *(float *)(param_1 + 0x380) * *(float *)(param_1 + 0x360));
                }
              }
            }
          }
        }
LAB_14343e255:
        lVar17 = lVar17 + 1;
        lVar19 = lVar19 + 0x108;
      } while (lVar17 < *(int *)(lVar7 + 0x408));
      if (local_100 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343ebb2 FUN_14343ebb2 body=476 status=ok
// SIG undefined FUN_14343ebb2(void)

void FUN_14343ebb2(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  
  dVar2 = ((double)param_1[0x80] * -(double)param_1[0x46] -
          (double)param_1[0x81] * (double)param_1[0x47]) -
          (double)param_1[0x82] * (double)param_1[0x48];
  dVar1 = (-(double)param_1[0x46] * (double)param_1[0x83] -
          (double)param_1[0x47] * (double)param_1[0x84]) -
          (double)param_1[0x48] * (double)param_1[0x85];
  if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    cVar4 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if (cVar4 != '\0') {
      fVar5 = (float)(**(code **)(*param_1 + 0x478))(param_1);
      if (9.99999993922529e-09 < (double)(fVar5 * param_2) + dVar1 * (double)param_2 + dVar2) {
        (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
      }
    }
  }
  dVar1 = (double)param_2;
  param_1[0x25] =
       (longlong)(dVar1 * (double)param_1[0x83] + (double)param_1[0x80] + (double)param_1[0x25]);
  param_1[0x26] =
       (longlong)((double)param_1[0x84] * dVar1 + (double)param_1[0x81] + (double)param_1[0x26]);
  param_1[0x27] =
       (longlong)((double)param_1[0x85] * dVar1 + (double)param_1[0x82] + (double)param_1[0x27]);
  param_1[0x82] = DAT_14c8464f0;
  lVar3 = DAT_14c8464e8;
  param_1[0x80] = DAT_14c8464e0;
  param_1[0x81] = lVar3;
  param_1[0x85] = DAT_14c8464f0;
  lVar3 = DAT_14c8464e8;
  param_1[0x83] = DAT_14c8464e0;
  param_1[0x84] = lVar3;
  return;
}



// FUNCTION 14343ed8e FUN_14343ed8e body=759 status=ok
// SIG undefined FUN_14343ed8e(void)

void FUN_14343ed8e(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_d8 [32];
  char local_b8 [48];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 < 1e-06) goto LAB_14343eff9;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x428);
  *(byte *)((longlong)plVar1 + 0xc71) = *(byte *)((longlong)plVar1 + 0xc71) | 4;
  if ((*(char *)(param_1 + 0x1028) != '\0') ||
     (cVar4 = (**(code **)(*plVar1 + 0xb48))(plVar1), cVar4 != '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x428);
    if (plVar2 == (longlong *)0x0) {
LAB_14343ee94:
      bVar5 = 0;
    }
    else {
      lVar8 = *plVar2;
      if (*(code **)(lVar8 + 0xba8) == FUN_144b222b6) {
        if (*(code **)(lVar8 + 3000) == (code *)&LAB_147a0c89e) {
          if ((plVar2[0x15d] == 0) || (*(char *)(plVar2[0x15d] + 0x30) != '\x02')) {
LAB_14343ee4f:
            if (*(code **)(lVar8 + 0xbb0) == (code *)&LAB_1400ba9be) {
              lVar8 = plVar2[0x15d];
              if ((lVar8 == 0) || (*(char *)(lVar8 + 0x30) != '\x03')) goto LAB_14343ee94;
              if (*(longlong *)(lVar8 + 0x358) == 0) {
                bVar5 = 0 < *(int *)(lVar8 + 0x368);
              }
              else {
                bVar5 = *(int *)(*(longlong *)(lVar8 + 0x358) + 0x1b4) < 1;
              }
            }
            else {
              bVar5 = (**(code **)(lVar8 + 0xbb0))(plVar2);
            }
            goto LAB_14343eeb2;
          }
        }
        else {
          cVar4 = (**(code **)(lVar8 + 3000))(plVar2);
          if (cVar4 == '\0') {
            lVar8 = *plVar2;
            goto LAB_14343ee4f;
          }
        }
        bVar5 = 1;
      }
      else {
        bVar5 = (**(code **)(lVar8 + 0xba8))(plVar2);
      }
    }
LAB_14343eeb2:
    lVar8 = *(longlong *)(param_1 + 0x1f0);
    if (*(char *)(param_1 + 0x1028) == '\0') {
      if (*(longlong **)(lVar8 + 0x428) == (longlong *)0x0) {
        uVar7 = (uint)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x428) + 0xbb0))();
        uVar7 = uVar7 ^ 1;
      }
      (**(code **)(*plVar1 + 0xb08))(plVar1,param_2,uVar7);
      lVar8 = *(longlong *)(param_1 + 0x1f0);
    }
    plVar2 = *(longlong **)(lVar8 + 0x428);
    if (plVar2 == (longlong *)0x0) {
LAB_14343f028:
      bVar6 = 0;
LAB_14343ef94:
      if ((bVar5 | bVar6) != 1) goto LAB_14343eff2;
    }
    else {
      lVar8 = *plVar2;
      if (*(code **)(lVar8 + 0xba8) != FUN_144b222b6) {
        bVar6 = (**(code **)(lVar8 + 0xba8))(plVar2);
        goto LAB_14343ef94;
      }
      if (*(code **)(lVar8 + 3000) == (code *)&LAB_147a0c89e) {
        if ((plVar2[0x15d] == 0) || (*(char *)(plVar2[0x15d] + 0x30) != '\x02')) {
LAB_14343ef49:
          if (*(code **)(lVar8 + 0xbb0) == (code *)&LAB_1400ba9be) {
            lVar8 = plVar2[0x15d];
            if ((lVar8 == 0) || (*(char *)(lVar8 + 0x30) != '\x03')) goto LAB_14343f028;
            if (*(longlong *)(lVar8 + 0x358) == 0) {
              bVar6 = 0 < *(int *)(lVar8 + 0x368);
            }
            else {
              bVar6 = *(int *)(*(longlong *)(lVar8 + 0x358) + 0x1b4) < 1;
            }
          }
          else {
            bVar6 = (**(code **)(lVar8 + 0xbb0))(plVar2);
          }
          goto LAB_14343ef94;
        }
      }
      else {
        cVar4 = (**(code **)(lVar8 + 3000))(plVar2);
        if (cVar4 == '\0') {
          lVar8 = *plVar2;
          goto LAB_14343ef49;
        }
      }
    }
    FUN_14021124a(plVar1,local_b8);
    if (local_b8[0] == '\x01') {
      dVar9 = (double)*(float *)(*(longlong *)(param_1 + 0x1f0) + 0x548);
      dVar3 = dVar9 * (double)local_88._8_8_;
      local_78 = dVar9 * local_78;
      dStack_70 = dStack_70 * 0.0;
      local_88._8_4_ = SUB84(dVar3,0);
      local_88._0_8_ = dVar9 * (double)local_88._0_8_;
      local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      FUN_140167042(param_1 + 0xf80);
    }
  }
LAB_14343eff2:
  *(byte *)((longlong)plVar1 + 0xc71) = *(byte *)((longlong)plVar1 + 0xc71) & 0xfb;
LAB_14343eff9:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343f086 FUN_14343f086 body=94 status=ok
// SIG undefined FUN_14343f086(void)

void FUN_14343f086(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1479d9002(param_1,iVar2);
  }
  FUN_1479acea8((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14343f0e4 FUN_14343f0e4 body=201 status=ok
// SIG undefined FUN_14343f0e4(void)

undefined8 * FUN_14343f0e4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)param_1 + 0x5c) <= (int)param_1[4]) {
    if (0 < (int)param_1[4]) {
      lVar3 = 0;
      lVar5 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1,param_1[3] + lVar3);
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar5 < (int)param_1[4]);
    }
    iVar2 = *(int *)((longlong)param_1 + 0x24);
    FUN_1410a3383(param_1[3]);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      FUN_145868660(param_1 + 3,0);
    }
  }
  if ((longlong)(int)param_1[6] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    plVar4 = (longlong *)*param_2;
  }
  else {
    lVar3 = param_1[5];
    lVar5 = (longlong)(int)param_1[6] * 0x10;
    plVar4 = *(longlong **)(lVar3 + -0x10 + lVar5);
    *param_2 = plVar4;
    param_2[1] = *(undefined8 *)(lVar3 + -8 + lVar5);
    puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1434744c0(param_1 + 5,(int)param_1[6] + -1);
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  return param_2;
}



// FUNCTION 14343f1ae FUN_14343f1ae body=247 status=ok
// SIG undefined FUN_14343f1ae(void)

void FUN_14343f1ae(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 < *(int *)(param_1 + 0x58)) {
      *(uint *)(param_1 + 0x30) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
        FUN_1479d8e28((longlong *)(param_1 + 0x28),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
      lVar5 = param_2[1];
      *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
    }
    if (*(longlong *)(param_1 + 0x38) == *param_2) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      plVar6 = *(longlong **)(param_1 + 0x40);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
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
    }
    if (*(longlong *)(param_1 + 0x48) == *param_2) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      plVar6 = *(longlong **)(param_1 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014343f257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x10))(plVar6);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14343f2a6 FUN_14343f2a6 body=622 status=ok
// SIG undefined FUN_14343f2a6(void)

undefined1 (*) [16] FUN_14343f2a6(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(int *)(param_1 + 0x204) != 0) && (uVar1 = *(uint *)(param_1 + 0x200), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x204))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      (**(code **)(*plVar5 + 0x4a8))(plVar5,&local_c8,*(undefined8 *)(param_1 + 0x208),0);
      local_88 = *(double *)(param_1 + 0x210) * local_88;
      dStack_80 = *(double *)(param_1 + 0x218) * dStack_80;
      local_78 = *(double *)(param_1 + 0x220) * local_78;
      dVar6 = dStack_80 * local_c8 - local_88 * dStack_c0;
      dVar7 = local_78 * dStack_c0 - dStack_80 * local_b8;
      dVar8 = local_88 * local_b8 - local_c8 * local_78;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dStack_a0 = (local_b8 * dVar7 - local_c8 * dVar6) + dStack_b0 * dVar8 + dStack_80 + dStack_a0;
      auVar3._8_4_ = SUB84(dStack_a0,0);
      auVar3._0_8_ = (dVar6 * dStack_c0 - dVar8 * local_b8) + dStack_b0 * dVar7 + local_88 +
                     local_a8;
      auVar3._12_4_ = (int)((ulonglong)dStack_a0 >> 0x20);
      *param_2 = auVar3;
      *(double *)param_2[1] =
           dVar6 * dStack_b0 + local_78 + (dVar8 * local_c8 - dVar7 * dStack_c0) + local_98;
      goto LAB_14343f4ed;
    }
  }
  if (((*(int *)(param_1 + 0x1ec) != 0) && (uVar1 = *(uint *)(param_1 + 0x1e8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x1ec))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
       ((lVar2 = *plVar5, lVar2 != 0 && (*(char *)(lVar2 + 0x1fb) == '\x02')))) {
      FUN_14341f746(lVar2,*(undefined8 *)(param_1 + 0x1f0),param_1 + 0x48,param_2);
LAB_14343f4ed:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
    }
  }
  *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(*param_2 + 8) = uVar4;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14343f536 FUN_14343f536 body=2243 status=ok
// SIG undefined FUN_14343f536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14343f536(longlong *param_1,float param_2,byte *param_3)

{
  float fVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar7;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char cVar23;
  char cVar24;
  byte bVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  double dVar30;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_70;
  double dVar3;
  double dVar6;
  double dVar8;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  bVar18 = true;
  if ((param_1[0x16] == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar26 = FUN_1447210f0(), lVar26 == 0)))) {
    lVar26 = param_1[4];
    if (lVar26 != 0) {
      if (DAT_14cb10130 == 0) {
        local_f0 = &local_d8;
        local_d8 = FUN_140754f84;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_14081d0ea;
        local_f8 = &LAB_147da9a76;
        local_100 = FUN_1409f3105;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x10000000;
        local_120 = (undefined8 *)CONCAT44(local_120._4_4_,8);
        local_128 = (longlong *)CONCAT44(local_128._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar26 = *(longlong *)(lVar26 + 0x10);
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(lVar26 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar26 + 0x30) + (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8)
          == DAT_14cb10130 + 0x30)) goto LAB_14343f5b8;
    }
    bVar18 = false;
  }
LAB_14343f5b8:
  cVar23 = (**(code **)(*param_1 + 0x600))(param_1);
  if ((!bVar18) || (cVar23 == '\0')) goto LAB_14343fbdd;
  plVar28 = *(longlong **)(param_1[0x3e] + 0x428);
  if (plVar28 == (longlong *)0x0) {
LAB_14343f6b7:
    cVar23 = '\0';
  }
  else {
    lVar26 = *plVar28;
    if (*(code **)(lVar26 + 0xba8) == FUN_144b222b6) {
      if (*(code **)(lVar26 + 3000) == (code *)&LAB_147a0c89e) {
        if ((plVar28[0x15d] == 0) || (*(char *)(plVar28[0x15d] + 0x30) != '\x02')) {
LAB_14343f633:
          if (*(code **)(lVar26 + 0xbb0) == (code *)&LAB_1400ba9be) {
            lVar26 = plVar28[0x15d];
            if ((lVar26 == 0) || (*(char *)(lVar26 + 0x30) != '\x03')) goto LAB_14343f6b7;
            if (*(longlong *)(lVar26 + 0x358) == 0) {
              cVar23 = 0 < *(int *)(lVar26 + 0x368);
            }
            else {
              cVar23 = *(int *)(*(longlong *)(lVar26 + 0x358) + 0x1b4) < 1;
            }
          }
          else {
            cVar23 = (**(code **)(lVar26 + 0xbb0))(plVar28);
          }
          goto LAB_14343f773;
        }
      }
      else {
        cVar23 = (**(code **)(lVar26 + 3000))(plVar28);
        if (cVar23 == '\0') {
          lVar26 = *plVar28;
          goto LAB_14343f633;
        }
      }
      cVar23 = '\x01';
    }
    else {
      cVar23 = (**(code **)(lVar26 + 0xba8))(plVar28);
    }
  }
LAB_14343f773:
  *param_3 = *param_3 | *(byte *)(param_1 + 0x1f0);
  if (((*(char *)((longlong)param_1 + 0x291) == '\0') ||
      (plVar28 = (longlong *)param_1[0x22], *(char *)((longlong)plVar28 + 0x1fb) != '\x02')) ||
     (cVar24 = (**(code **)(*plVar28 + 0x480))(plVar28,0), cVar24 != '\0')) {
    lVar26 = param_1[0x3e];
    if (((*(byte *)(lVar26 + 0x550) & 0x10) == 0) && ((*(byte *)(lVar26 + 0x551) & 4) == 0)) {
      if ((cVar23 != '\0') && (*(longlong *)(lVar26 + 0x428) != 0)) {
        *(undefined1 *)(param_1 + 0x1f0) = 0;
        *(undefined4 *)((longlong)param_1 + 0xf84) = 0;
      }
      if ((0 < (int)param_1[0x1b3]) || (0 < (int)param_1[0x1b5])) {
        FUN_140239626(param_1 + 0x1b1);
      }
    }
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x1f0);
    cVar24 = FUN_143432570(param_1);
    if (cVar24 != '\0') {
      lVar26 = param_1[0x3e];
      bVar25 = *(byte *)(lVar26 + 0x550);
      if (((bVar25 & 0x10) == 0) && ((*(byte *)(lVar26 + 0x551) & 4) == 0)) {
        FUN_1434e77ce(param_1 + 0x1b1,param_2,lVar26,param_1);
        lVar26 = param_1[0x3e];
        bVar25 = *(byte *)(lVar26 + 0x550);
      }
      if (((bVar25 & 0x10) == 0) && ((*(byte *)(lVar26 + 0x551) & 4) == 0)) {
        if ((cVar23 != '\0') && (*(longlong *)(lVar26 + 0x428) != 0)) {
          cVar23 = (**(code **)(*param_1 + 0x600))(param_1);
          if (cVar23 == '\0') goto LAB_14343fbdd;
          cVar23 = (**(code **)(*(longlong *)param_1[0x3e] + 0x700))();
          lVar26 = param_1[0x3e];
          if (((cVar23 != '\0') && (*(char *)(lVar26 + 0x178) == '\x02')) &&
             (*(longlong **)(lVar26 + 0x428) != (longlong *)0x0)) {
            cVar23 = (**(code **)(**(longlong **)(lVar26 + 0x428) + 0xbb0))();
            lVar26 = param_1[0x3e];
            if (cVar23 != '\0') {
              *(char *)(lVar26 + 0x600) = (char)param_1[0x1f0];
              *(undefined4 *)(lVar26 + 0x604) = *(undefined4 *)((longlong)param_1 + 0xf84);
              plVar28 = param_1 + 0x1f2;
              plVar29 = (longlong *)(lVar26 + 0x610);
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *plVar29 = *plVar28;
                plVar28 = plVar28 + 1;
                plVar29 = plVar29 + 1;
              }
              lVar26 = param_1[0x3e];
            }
          }
        }
        local_128 = (longlong *)CONCAT71(local_128._1_7_,1);
        FUN_1434e7e92(param_1 + 0x1b1,param_2,lVar26,param_1);
        cVar23 = (**(code **)(*(longlong *)param_1[0x3e] + 0x700))();
        if ((cVar23 != '\0') && (*(char *)(param_1[0x3e] + 0x178) == '\x02')) {
          FUN_140fb3d70(param_1[0x3e] + 0x5b8,param_1 + 0x1b1);
        }
      }
    }
    param_3[1] = param_3[1] | *(byte *)(param_1 + 0x1b6) >> 1 & 1;
    param_3[2] = param_3[2] | *(byte *)(param_1 + 0x1b6) >> 2 & 1;
    param_3[3] = param_3[3] | *(byte *)(param_1 + 0x1b6) & 1;
    param_3[4] = param_3[4] | *(byte *)((longlong)param_1 + 0xdb1) & 1;
    if (((*(byte *)(param_1 + 0x1b6) >> 1 | bVar9) & 1) != 0) {
      if (bVar9 == 0) {
        if (0.0 < param_2) {
          local_c8 = (double)param_1[0x27];
          local_120 = &local_d8;
          local_d8 = (code *)param_1[0x25];
          uStack_d0 = (undefined4)param_1[0x26];
          uStack_cc = *(undefined4 *)((longlong)param_1 + 0x134);
          local_128 = param_1;
          FUN_147aa0094(param_1 + 0x1b1,0,param_2,param_1[0x3e]);
          fVar1 = *(float *)(param_3 + 0xc0);
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            dVar3 = (double)fVar1;
            dVar30 = (double)param_2;
            dVar2 = 1.0 / (double)(fVar1 + param_2);
            *(double *)(param_3 + 0x20) =
                 dVar2 * (dVar30 * (double)local_d8 + dVar3 * *(double *)(param_3 + 0x20));
            *(double *)(param_3 + 0x28) =
                 ((double)CONCAT44(uStack_cc,uStack_d0) * dVar30 +
                 *(double *)(param_3 + 0x28) * dVar3) * dVar2;
            *(double *)(param_3 + 0x30) =
                 (local_c8 * dVar30 + *(double *)(param_3 + 0x30) * dVar3) * dVar2;
          }
          else {
            *(double *)(param_3 + 0x30) = local_c8;
            *(undefined4 *)(param_3 + 0x20) = (undefined4)local_d8;
            *(undefined4 *)(param_3 + 0x24) = local_d8._4_4_;
            *(undefined4 *)(param_3 + 0x28) = uStack_d0;
            *(undefined4 *)(param_3 + 0x2c) = uStack_cc;
          }
        }
      }
      else if (*(longlong *)(param_1[0x3e] + 0x428) != 0) {
        (**(code **)(*param_1 + 0xb90))(param_1,&local_d8,param_1 + 0x1f2,param_2);
        *(undefined1 *)(param_1 + 0x1f0) = 1;
        param_1[0x1f2] = (longlong)local_d8;
        param_1[499] = CONCAT44(uStack_cc,uStack_d0);
        param_1[500] = (longlong)local_c8;
        param_1[0x1f5] = (longlong)dStack_c0;
        param_1[0x1f6] = local_b8;
        param_1[0x1f7] = lStack_b0;
        param_1[0x1f8] = local_a8;
        param_1[0x1f9] = lStack_a0;
        lVar27 = DAT_14cacb0f0;
        lVar26 = DAT_14cacb0e8;
        param_1[0x1fa] = _DAT_14cacb0e0;
        param_1[0x1fb] = lVar26;
        param_1[0x1fc] = lVar27;
        param_1[0x1fd] = 0;
        *(undefined4 *)((longlong)param_1 + 0xf84) = 0x3f800000;
        dVar2 = (double)param_1[0x1f5];
        dVar3 = (double)param_1[0x1f5];
        dVar19 = *(double *)(param_3 + 0x60);
        dVar20 = *(double *)(param_3 + 0x68);
        dVar21 = *(double *)(param_3 + 0x70);
        dVar22 = *(double *)(param_3 + 0x78);
        dVar4 = (double)param_1[0x1f2];
        dVar30 = (double)param_1[0x1f2];
        dVar5 = (double)param_1[499];
        dVar6 = (double)param_1[499];
        dVar7 = (double)param_1[500];
        dVar8 = (double)param_1[500];
        dVar16 = dVar19 * dVar8 * 1.0 + dVar22 * dVar6 + dVar21 * dVar30 * -1.0 + dVar3 * dVar20;
        dVar3 = dVar21 * dVar8 * -1.0 + ((dVar30 * dVar19 * -1.0 + dVar3 * dVar22) - dVar20 * dVar6)
        ;
        auVar12._8_4_ = SUB84(dVar16,0);
        auVar12._0_8_ =
             dVar20 * dVar7 * -1.0 + dVar21 * dVar5 + dVar22 * dVar4 * 1.0 + dVar2 * dVar19;
        auVar12._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0x60) = auVar12;
        auVar17._8_4_ = SUB84(dVar3,0);
        auVar17._0_8_ =
             dVar22 * dVar7 * 1.0 + ((dVar4 * dVar20 * 1.0 + dVar2 * dVar21) - dVar19 * dVar5);
        auVar17._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0x70) = auVar17;
        dVar3 = (double)param_1[0x1f8];
        dVar2 = (double)param_1[0x1f9];
        auVar10._8_4_ = SUB84((double)param_1[0x1f7] + *(double *)(param_3 + 0x88),0);
        auVar10._0_8_ = (double)param_1[0x1f6] + *(double *)(param_3 + 0x80);
        auVar10._12_4_ =
             (int)((ulonglong)((double)param_1[0x1f7] + *(double *)(param_3 + 0x88)) >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0x80) = auVar10;
        auVar13._8_4_ = SUB84(dVar2 + *(double *)(param_3 + 0x98),0);
        auVar13._0_8_ = dVar3 + *(double *)(param_3 + 0x90);
        auVar13._12_4_ = (int)((ulonglong)(dVar2 + *(double *)(param_3 + 0x98)) >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0x90) = auVar13;
        dVar3 = (double)param_1[0x1fc];
        dVar2 = (double)param_1[0x1fd];
        auVar11._8_4_ = SUB84((double)param_1[0x1fb] * *(double *)(param_3 + 0xa8),0);
        auVar11._0_8_ = (double)param_1[0x1fa] * *(double *)(param_3 + 0xa0);
        auVar11._12_4_ =
             (int)((ulonglong)((double)param_1[0x1fb] * *(double *)(param_3 + 0xa8)) >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0xa0) = auVar11;
        auVar14._8_4_ = SUB84(dVar2 * *(double *)(param_3 + 0xb8),0);
        auVar14._0_8_ = dVar3 * *(double *)(param_3 + 0xb0);
        auVar14._12_4_ = (int)((ulonglong)(dVar2 * *(double *)(param_3 + 0xb8)) >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0xb0) = auVar14;
      }
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined4 *)((longlong)param_1 + 0xf84) = 0;
    }
    if ((bVar9 == 0) &&
       ((((0 < (int)param_1[0x1b3] || (0 < (int)param_1[0x1b5])) && (param_1[0x3e] != 0)) &&
        (param_1[0x22] != 0)))) {
      local_128 = &local_d8;
      cVar23 = FUN_147aa0766(param_1 + 0x1b1,param_2,param_1[0x3e],param_1);
      if (cVar23 != '\0') {
        dVar2 = *(double *)(param_3 + 0x40);
        dVar30 = *(double *)(param_3 + 0x48);
        dVar4 = *(double *)(param_3 + 0x50);
        dVar6 = *(double *)(param_3 + 0x58);
        dVar3 = dVar4 * local_c8 * -1.0 +
                (((double)local_d8 * dVar2 * -1.0 + dStack_c0 * dVar6) -
                (double)CONCAT44(uStack_cc,uStack_d0) * dVar30);
        *(double *)(param_3 + 0x40) =
             dVar30 * local_c8 * -1.0 +
             dVar4 * (double)CONCAT44(uStack_cc,uStack_d0) +
             (double)local_d8 * dVar6 * 1.0 + dStack_c0 * dVar2;
        *(double *)(param_3 + 0x48) =
             dVar2 * local_c8 * 1.0 +
             dVar6 * (double)CONCAT44(uStack_cc,uStack_d0) +
             (double)local_d8 * dVar4 * -1.0 + dStack_c0 * dVar30;
        auVar15._8_4_ = SUB84(dVar3,0);
        auVar15._0_8_ =
             dVar6 * local_c8 * 1.0 +
             (((double)local_d8 * dVar30 * 1.0 + dStack_c0 * dVar4) -
             (double)CONCAT44(uStack_cc,uStack_d0) * dVar2);
        auVar15._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        *(undefined1 (*) [16])(param_3 + 0x50) = auVar15;
      }
    }
  }
  *(float *)(param_3 + 0xc0) = param_2 + *(float *)(param_3 + 0xc0);
LAB_14343fbdd:
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14343fdfa FUN_14343fdfa body=4875 status=ok
// SIG undefined FUN_14343fdfa(void)

void FUN_14343fdfa(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined4 unaff_EBP;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 uStack_48;
  uint uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1[0x3e] == 0) || (*(longlong *)(param_1[0x3e] + 0x3c0) == 0)) goto LAB_14343fe33;
  (**(code **)(*param_1 + 0x758))(param_1,(int)param_1[0x1dc]);
  *(undefined1 *)(param_3 + 0x10) = 1;
  uVar19 = param_2[1];
  uVar20 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_3 + 0x18) = *param_2;
  *(undefined4 *)(param_3 + 0x1c) = uVar19;
  *(undefined4 *)(param_3 + 0x20) = uVar20;
  *(undefined4 *)(param_3 + 0x24) = uVar5;
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_3 + 0x30) = *(undefined1 *)((longlong)param_1 + 0x293);
  iVar10 = 0;
  if (param_1[0x15] != 0) {
    iVar10 = FUN_14487fd02();
  }
  *(bool *)(param_3 + 0x31) = iVar10 == 3;
  *(byte *)(param_3 + 0x32) = *(byte *)((longlong)param_1 + 0x5b7) & 1;
  *(byte *)(param_3 + 0x33) = *(byte *)((longlong)param_1 + 0x349) >> 3 & 1;
  *(byte *)(param_3 + 0x34) = *(byte *)((longlong)param_1 + 0x349) >> 2 & 1;
  uVar19 = (**(code **)(*param_1 + 0x710))(param_1);
  *(undefined4 *)(param_3 + 0x38) = uVar19;
  uVar19 = (**(code **)(*param_1 + 0x708))(param_1);
  *(undefined4 *)(param_3 + 0x3c) = uVar19;
  *(byte *)(param_3 + 0x40) = *(byte *)((longlong)param_1 + 0x5b5) >> 7;
  *(byte *)(param_3 + 0x41) = *(byte *)(param_1 + 0x69) >> 4 & 1;
  *(byte *)(param_3 + 0x42) = *(byte *)(param_1 + 0x69) >> 3 & 1;
  *(byte *)(param_3 + 0x43) = *(byte *)(param_1 + 0x2e) >> 4 & 1;
  *(longlong *)(param_3 + 0x58) = param_1[0x2d];
  lVar12 = param_1[0x2c];
  *(longlong *)(param_3 + 0x48) = param_1[0x2b];
  *(longlong *)(param_3 + 0x50) = lVar12;
  uVar19 = *(undefined4 *)((longlong)param_1 + 0x144);
  lVar12 = param_1[0x29];
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x14c);
  *(int *)(param_3 + 0x60) = (int)param_1[0x28];
  *(undefined4 *)(param_3 + 100) = uVar19;
  *(int *)(param_3 + 0x68) = (int)lVar12;
  *(undefined4 *)(param_3 + 0x6c) = uVar20;
  *(longlong *)(param_3 + 0x70) = param_1[0x2a];
  uVar9 = (**(code **)(*param_1 + 0x600))(param_1);
  *(undefined1 *)(param_3 + 0x78) = uVar9;
  *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
  *(byte *)(param_3 + 0x80) = *(byte *)((longlong)param_1 + 0x5b6) >> 1 & 1;
  *(int *)(param_3 + 0x84) = (int)param_1[0x45];
  *(byte *)(param_3 + 0x88) = *(byte *)((longlong)param_1 + 0x5b6) >> 2 & 1;
  uVar19 = (**(code **)(*param_1 + 0x478))(param_1);
  *(undefined4 *)(param_3 + 0x8c) = uVar19;
  uVar9 = (**(code **)(param_1[0x2f] + 0x110))(param_1 + 0x2f);
  *(undefined1 *)(param_3 + 0x90) = uVar9;
  *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)((longlong)param_1 + 0x444);
  *(int *)(param_3 + 0x98) = (int)param_1[0x88];
  *(byte *)(param_3 + 0x9c) = *(byte *)((longlong)param_1 + 0x5b4) & 1;
  *(byte *)(param_3 + 0x9d) = *(byte *)(param_1 + 0x69) & 1;
  *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)((longlong)param_1 + 0x294);
  *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x2f4);
  *(int *)(param_3 + 0xa8) = (int)param_1[0x5f];
  *(undefined4 *)(param_3 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x2fc);
  *(int *)(param_3 + 0xb0) = (int)param_1[0x60];
  *(undefined4 *)(param_3 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x304);
  *(int *)(param_3 + 0xb8) = (int)param_1[0x61];
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x30c);
  *(undefined4 *)(param_3 + 200) = *(undefined4 *)((longlong)param_1 + 0x454);
  *(int *)(param_3 + 0xc0) = (int)param_1[0x8a];
  *(undefined4 *)(param_3 + 0xc4) = *(undefined4 *)((longlong)param_1 + 0x44c);
  *(int *)(param_3 + 0xcc) = (int)param_1[0x8b];
  *(byte *)(param_3 + 0xd0) = *(byte *)((longlong)param_1 + 0x349) >> 7;
  *(byte *)(param_3 + 0xd1) = *(byte *)((longlong)param_1 + 0x349) >> 6 & 1;
  *(undefined4 *)(param_3 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x48c);
  *(int *)(param_3 + 0xd8) = (int)param_1[0x65];
  *(int *)(param_3 + 0xdc) = (int)param_1[0x62];
  *(undefined4 *)(param_3 + 0xe0) = *(undefined4 *)((longlong)param_1 + 0x314);
  *(int *)(param_3 + 0xe4) = (int)param_1[99];
  *(byte *)(param_3 + 0xe8) = *(byte *)(param_1 + 0x69) >> 1 & 1;
  *(byte *)(param_3 + 0xe9) = *(byte *)(param_1 + 0x69) >> 2 & 1;
  lVar12 = (**(code **)(*param_1 + 0x4a0))(param_1);
  *(undefined4 *)(param_3 + 0xec) = *(undefined4 *)(lVar12 + 0x3c8);
  *(int *)(param_3 + 0xf0) = (int)param_1[0x89];
  *(uint *)(param_3 + 0xf4) = (uint)*(byte *)(param_1 + 0xb5);
  *(undefined4 *)(param_3 + 0xf8) = *(undefined4 *)((longlong)param_1 + 0x31c);
  *(int *)(param_3 + 0xfc) = (int)param_1[0x40];
  *(byte *)(param_3 + 0x100) = *(byte *)((longlong)param_1 + 0x5b7) >> 1 & 1;
  *(byte *)(param_3 + 0x101) = *(byte *)((longlong)param_1 + 0x34a) >> 5 & 1;
  *(byte *)(param_3 + 0x102) = *(byte *)((longlong)param_1 + 0x5b6) >> 6 & 1;
  *(undefined4 *)(param_3 + 0x104) = *(undefined4 *)((longlong)param_1 + 0x32c);
  *(byte *)(param_3 + 0x108) = *(byte *)(param_1 + 0x32) >> 1 & 1;
  *(byte *)(param_3 + 0x109) = *(byte *)(param_1 + 0x39) >> 1 & 1;
  *(undefined4 *)(param_3 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(int *)(param_3 + 0x110) = (int)param_1[0x5b];
  *(int *)(param_3 + 0x114) = (int)param_1[0x5c];
  *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  *(int *)(param_3 + 0x11c) = (int)param_1[0x5d];
  *(longlong *)(param_3 + 0x130) = param_1[0x68];
  lVar12 = param_1[0x67];
  *(longlong *)(param_3 + 0x120) = param_1[0x66];
  *(longlong *)(param_3 + 0x128) = lVar12;
  memcpy((void *)(param_3 + 0x140),param_1 + 0x1c4,200);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe24) = 0;
  param_1[0x1c7] = DAT_14c8464f0;
  lVar12 = DAT_14c8464e8;
  param_1[0x1c5] = DAT_14c8464e0;
  param_1[0x1c6] = lVar12;
  lVar12 = DAT_14c8464e8;
  param_1[0x1c8] = DAT_14c8464e0;
  param_1[0x1c9] = lVar12;
  param_1[0x1ca] = DAT_14c8464f0;
  lVar12 = DAT_14c8463d8;
  param_1[0x1cc] = DAT_14c8463d0;
  param_1[0x1cd] = lVar12;
  lVar12 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_1[0x1ce] = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_1[0x1cf] = lVar12;
  plVar16 = &DAT_14c846480;
  plVar17 = param_1 + 0x1d0;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar17 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar17 = plVar17 + 1;
  }
  if (param_1[0x3e] == 0) {
    *(undefined8 *)(param_3 + 0x210) = 0;
    lVar12 = param_1[0x55];
    lVar4 = param_1[0x56];
    lVar8 = param_1[0x57];
    *(longlong *)(param_3 + 0x260) = param_1[0x54];
    *(longlong *)(param_3 + 0x268) = lVar12;
    *(longlong *)(param_3 + 0x270) = lVar4;
    *(longlong *)(param_3 + 0x278) = lVar8;
    lVar12 = param_1[0x59];
    *(longlong *)(param_3 + 0x280) = param_1[0x58];
    *(longlong *)(param_3 + 0x288) = lVar12;
    *(longlong *)(param_3 + 0x290) = param_1[0x5a];
LAB_143440490:
    *(undefined1 *)(param_3 + 0x21c) = 0;
    *(undefined4 *)(param_3 + 0x218) = 0;
    lVar12 = DAT_14c8464e8;
    *(longlong *)(param_3 + 0x240) = DAT_14c8464e0;
    *(longlong *)(param_3 + 0x248) = lVar12;
    *(longlong *)(param_3 + 0x250) = DAT_14c8464f0;
    lVar12 = DAT_14c8463d8;
    *(longlong *)(param_3 + 0x220) = DAT_14c8463d0;
    *(longlong *)(param_3 + 0x228) = lVar12;
    uVar5 = DAT_14c8463e8._4_4_;
    uVar20 = (undefined4)DAT_14c8463e8;
    uVar19 = DAT_14c8463e0._4_4_;
    *(undefined4 *)(param_3 + 0x230) = (undefined4)DAT_14c8463e0;
    *(undefined4 *)(param_3 + 0x234) = uVar19;
    *(undefined4 *)(param_3 + 0x238) = uVar20;
    *(undefined4 *)(param_3 + 0x23c) = uVar5;
    *(undefined1 *)(param_3 + 0x21d) = 0;
  }
  else {
    plVar16 = *(longlong **)(param_1[0x3e] + 0x450);
    *(longlong **)(param_3 + 0x210) = plVar16;
    lVar12 = param_1[0x55];
    lVar4 = param_1[0x56];
    lVar8 = param_1[0x57];
    *(longlong *)(param_3 + 0x260) = param_1[0x54];
    *(longlong *)(param_3 + 0x268) = lVar12;
    *(longlong *)(param_3 + 0x270) = lVar4;
    *(longlong *)(param_3 + 0x278) = lVar8;
    uVar19 = *(undefined4 *)((longlong)param_1 + 0x2c4);
    lVar12 = param_1[0x59];
    uVar20 = *(undefined4 *)((longlong)param_1 + 0x2cc);
    *(int *)(param_3 + 0x280) = (int)param_1[0x58];
    *(undefined4 *)(param_3 + 0x284) = uVar19;
    *(int *)(param_3 + 0x288) = (int)lVar12;
    *(undefined4 *)(param_3 + 0x28c) = uVar20;
    *(longlong *)(param_3 + 0x290) = param_1[0x5a];
    if ((plVar16 == (longlong *)0x0) || ((*(uint *)(plVar16 + 1) >> 0x1e & 1) != 0))
    goto LAB_143440490;
    *(undefined2 *)(param_3 + 0x21a) = 0x101;
    *(bool *)(param_3 + 0x218) = *(char *)((longlong)plVar16 + 0x1fb) == '\x02';
    plVar17 = plVar16;
    do {
      bVar15 = (**(code **)(*plVar17 + 0x480))(plVar17,0);
      plVar17 = (longlong *)plVar17[0x24];
    } while ((~bVar15 & plVar17 != (longlong *)0x0) != 0);
    *(byte *)(param_3 + 0x219) = bVar15;
    *(bool *)(param_3 + 0x21c) = *(char *)((longlong)plVar16 + 0x1fb) == '\x02';
    uVar9 = FUN_1403d625c(plVar16,*(undefined8 *)(param_1[0x3e] + 0x444),param_3 + 0x240,
                          param_3 + 0x220);
    *(undefined1 *)(param_3 + 0x21d) = uVar9;
  }
  FUN_1479987d8(param_1[0x3e],*(undefined8 *)(param_3 + 0x2a8));
  lVar12 = param_1[0x16];
  if ((lVar12 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar12 = FUN_1447210f0(), lVar12 == 0)))) {
    lVar12 = param_1[4];
    if (lVar12 != 0) {
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
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_143440531;
    }
    lVar12 = 0;
  }
LAB_143440531:
  *(longlong *)(param_3 + 0x2b0) = lVar12;
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    uVar11 = (**(code **)(*(longlong *)param_1[0x22] + 0x570))();
    *(bool *)(*(longlong *)(param_3 + 0x2a0) + 8) = uVar11 == 5 || (uVar11 & 0xfffffffd) == 1;
    uVar9 = (**(code **)(*(longlong *)param_1[0x22] + 0x480))((longlong *)param_1[0x22],0);
    *(undefined1 *)(*(longlong *)(param_3 + 0x2a0) + 9) = uVar9;
    *(undefined8 *)(*(longlong *)(param_3 + 0x2a0) + 0xc0) = 0;
    plVar16 = (longlong *)param_1[0x22];
    plVar17 = (longlong *)0x0;
    if (plVar16 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_70 = &local_50;
        local_50 = FUN_144a7958c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b47bc4;
        local_78 = &LAB_1478989f1;
        local_80 = (code *)&LAB_146391124;
        local_88 = L"Engine";
        local_90 = 0x10000000000;
        local_98 = 0x10000005;
        local_a0 = 0x10;
        local_a8 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        plVar16 = (longlong *)param_1[0x22];
        if (plVar16 == (longlong *)0x0) {
          plVar17 = (longlong *)0x0;
          goto LAB_143440909;
        }
      }
      plVar17 = plVar16;
      if (((DAT_14cac6e60 != 0) && (lVar12 = plVar16[2], lVar12 != 0)) &&
         ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar12 + 0x38) &&
          (*(longlong *)
            (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
           DAT_14cac6e60 + 0x30)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad0d58) &&
           (FUN_144b3d300(&DAT_14cad0d58), DAT_14cad0d58 == -1)) {
          FUN_1446f470e(&DAT_14cad0d50,L"MoveComponent",1);
          _Init_thread_footer(&DAT_14cad0d58);
        }
        uVar9 = 1;
        bVar15 = 1;
        if (0 < (longlong)(int)plVar16[0x44]) {
          lVar12 = *(longlong *)(plVar16[0x43] + -8 + (longlong)(int)plVar16[0x44] * 8);
          bVar15 = 1;
          if (lVar12 != 0) {
            bVar15 = (*(byte *)(lVar12 + 0x608) & 4) >> 2;
          }
        }
        *(byte *)(*(longlong *)(param_3 + 0x2a0) + 0xd8) = bVar15 ^ 1;
        if ((*(byte *)((longlong)plVar16 + 0x2d3) & 8) == 0) {
          uVar9 = *(undefined1 *)(*(longlong *)(param_3 + 0x2a0) + 0xd8);
        }
        *(undefined1 *)(*(longlong *)(param_3 + 0x2a0) + 0xd9) = uVar9;
        *(longlong **)(*(longlong *)(param_3 + 0x2a0) + 0xb8) = plVar16;
        *(longlong *)(*(longlong *)(param_3 + 0x2a0) + 0xc0) = plVar16[0xa9];
        lVar12 = param_1[0x15];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad0e70) &&
           (FUN_144b3d300(&DAT_14cad0e70), DAT_14cad0e70 == -1)) {
          local_50 = (code *)0x14a83cba6;
          uStack_48 = 0xd;
          uStack_44 = uStack_44 & 0xffffff00;
          uVar11 = FUN_14001a6c0();
          DAT_14cad0e68 = (ulonglong)uVar11;
          _Init_thread_footer(&DAT_14cad0e70);
        }
        if (lVar12 != 0) {
          unaff_EBP = *(undefined4 *)(lVar12 + 0xc);
          uVar14 = *(undefined8 *)(lVar12 + 0x18);
        }
        else {
          uVar14 = 0;
        }
        uVar18 = *(ulonglong *)(param_3 + 0x2a0);
        *(ulonglong *)(uVar18 + 0x10) = DAT_14cad0e68;
        *(undefined8 *)(uVar18 + 0x18) = uVar14;
        *(undefined2 *)(uVar18 + 0x20) = 0x100;
        *(undefined4 *)(uVar18 + 0x22) = 0;
        *(undefined1 *)(uVar18 + 0x26) = 0;
        *(undefined2 *)(uVar18 + 0x27) = 0x101;
        *(undefined4 *)(uVar18 + 0x2c) = 0;
        *(undefined1 *)(uVar18 + 0x30) = 0;
        *(undefined4 *)(uVar18 + 0x34) = 0;
        *(undefined2 *)(uVar18 + 0x38) = 0x101;
        if (*(longlong *)(uVar18 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(uVar18 + 0x60) = 0;
        *(undefined8 *)(uVar18 + 0x68) = 0x800000000;
        *(undefined4 *)(uVar18 + 0x70) = unaff_EBP;
        if (*(longlong *)(uVar18 + 0x80) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(uVar18 + 0x80) = 0;
        *(uint *)(uVar18 + 0x88) = (uint)(lVar12 != 0);
        *(undefined4 *)(uVar18 + 0x8c) = 4;
        *(undefined1 *)(uVar18 + 0x90) = 0;
        FUN_14485d390(plVar16,*(longlong *)(param_3 + 0x2a0) + 0x10,
                      *(longlong *)(param_3 + 0x2a0) + 0x98);
        pbVar1 = (byte *)(*(longlong *)(param_3 + 0x2a0) + 0x25);
        *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)(param_3 + 0x2a0) + 0xd9) ^ 1;
        *(undefined8 *)(*(longlong *)(param_3 + 0x2a0) + 0x10) = DAT_14cad0d50;
        (**(code **)(*plVar16 + 0x820))(plVar16,&local_50,DAT_14c76140c);
        lVar12 = *(longlong *)(param_3 + 0x2a0);
        *(undefined4 *)(lVar12 + 200) = (undefined4)local_50;
        *(undefined4 *)(lVar12 + 0xcc) = local_50._4_4_;
        *(undefined4 *)(lVar12 + 0xd0) = uStack_48;
        *(uint *)(lVar12 + 0xd4) = uStack_44;
        lVar12 = param_1[0x15];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad0e80) &&
           (FUN_144b3d300(&DAT_14cad0e80), DAT_14cad0e80 == -1)) {
          local_50 = (code *)0x14a83ce20;
          uStack_48 = 0x10;
          uStack_44 = uStack_44 & 0xffffff00;
          uVar11 = FUN_14001a6c0();
          DAT_14cad0e78 = (ulonglong)uVar11;
          _Init_thread_footer(&DAT_14cad0e80);
        }
        if (lVar12 != 0) {
          uVar18 = (ulonglong)*(uint *)(lVar12 + 0xc);
          uVar14 = *(undefined8 *)(lVar12 + 0x18);
        }
        else {
          uVar14 = 0;
        }
        *(ulonglong *)(param_3 + 0x2b8) = DAT_14cad0e78;
        *(undefined8 *)(param_3 + 0x2c0) = uVar14;
        *(undefined2 *)(param_3 + 0x2c8) = 0x100;
        *(undefined4 *)(param_3 + 0x2ca) = 0;
        *(undefined1 *)(param_3 + 0x2ce) = 0;
        *(undefined2 *)(param_3 + 0x2cf) = 0x101;
        *(undefined4 *)(param_3 + 0x2d4) = 0;
        *(undefined1 *)(param_3 + 0x2d8) = 0;
        *(undefined4 *)(param_3 + 0x2dc) = 0;
        *(undefined2 *)(param_3 + 0x2e0) = 0x101;
        if (*(longlong *)(param_3 + 0x308) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(param_3 + 0x308) = 0;
        *(undefined8 *)(param_3 + 0x310) = 0x800000000;
        *(int *)(param_3 + 0x318) = (int)uVar18;
        if (*(longlong *)(param_3 + 0x328) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(param_3 + 0x328) = 0;
        *(uint *)(param_3 + 0x330) = (uint)(lVar12 != 0);
        *(undefined4 *)(param_3 + 0x334) = 4;
        *(undefined1 *)(param_3 + 0x338) = 0;
        FUN_14485d390(plVar16,param_3 + 0x2b8,param_3 + 0x340);
        uVar19 = (**(code **)(*plVar16 + 0x580))(plVar16);
        *(undefined4 *)(param_3 + 0x360) = uVar19;
        plVar17 = (longlong *)param_1[0x22];
      }
    }
LAB_143440909:
    uVar19 = *(undefined4 *)((longlong)plVar17 + 0x284);
    lVar8 = plVar17[0x51];
    uVar20 = *(undefined4 *)((longlong)plVar17 + 0x28c);
    lVar12 = plVar17[0x52];
    lVar4 = *(longlong *)(param_3 + 0x2a0);
    *(int *)(lVar4 + 0xe0) = (int)plVar17[0x50];
    *(undefined4 *)(lVar4 + 0xe4) = uVar19;
    *(int *)(lVar4 + 0xe8) = (int)lVar8;
    *(undefined4 *)(lVar4 + 0xec) = uVar20;
    *(longlong *)(lVar4 + 0xf0) = lVar12;
  }
  if (DAT_14c846538 == '\x01') {
    lVar12 = param_1[3];
  }
  else {
    lVar12 = 0;
  }
  FUN_140e70c9e(param_3 + 1000,lVar12);
  *(byte *)(param_3 + 0x400) = *(byte *)((longlong)param_1 + 0x5b5) >> 5 & 1;
  if (*(byte *)((longlong)param_1 + 0x291) == 0) {
    *(uint *)(param_3 + 0x404) = (uint)*(byte *)((longlong)param_1 + 0x5aa);
    uVar9 = 1;
  }
  else {
    *(uint *)(param_3 + 0x404) = (uint)*(byte *)((longlong)param_1 + 0x291);
    uVar9 = (undefined1)param_1[0x44];
  }
  *(undefined1 *)(param_3 + 0x401) = uVar9;
  *(byte *)(param_3 + 0x408) = *(byte *)(param_1[0x3e] + 0x550) >> 3 & 1;
  if (*(char *)(param_1[0x42] + 0x360) == '\0') {
    *(byte *)(param_1[0x42] + 0x18) = *(byte *)((longlong)param_1 + 0x5b7) & 1;
    *(uint *)(param_1[0x42] + 0x1c) = (uint)*(byte *)((longlong)param_1 + 0x291);
    *(uint *)(param_1[0x42] + 0x20) = (uint)*(byte *)((longlong)param_1 + 0x5aa);
    *(undefined1 *)(param_1[0x42] + 0x24) = *(undefined1 *)((longlong)param_1 + 0x292);
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x38) = param_1[0x73];
    lVar4 = param_1[0x72];
    *(longlong *)(lVar12 + 0x28) = param_1[0x71];
    *(longlong *)(lVar12 + 0x30) = lVar4;
    *(int *)(param_1[0x42] + 0x40) = (int)param_1[0x86];
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x58) = param_1[0x7a];
    lVar4 = param_1[0x79];
    *(longlong *)(lVar12 + 0x48) = param_1[0x78];
    *(longlong *)(lVar12 + 0x50) = lVar4;
    lVar12 = param_1[0x42];
    lVar4 = param_1[0x77];
    *(longlong *)(lVar12 + 0x70) = param_1[0x76];
    *(longlong *)(lVar12 + 0x78) = lVar4;
    lVar4 = param_1[0x75];
    *(longlong *)(lVar12 + 0x60) = param_1[0x74];
    *(longlong *)(lVar12 + 0x68) = lVar4;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x90) = param_1[0x7d];
    lVar4 = param_1[0x7c];
    *(longlong *)(lVar12 + 0x80) = param_1[0x7b];
    *(longlong *)(lVar12 + 0x88) = lVar4;
    *(byte *)(param_1[0x42] + 0x98) = *(byte *)((longlong)param_1 + 0x349) >> 4 & 1;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0xb0) = param_1[0x27];
    lVar4 = param_1[0x26];
    *(longlong *)(lVar12 + 0xa0) = param_1[0x25];
    *(longlong *)(lVar12 + 0xa8) = lVar4;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 200) = DAT_14c8464f0;
    lVar4 = DAT_14c8464e8;
    *(longlong *)(lVar12 + 0xb8) = DAT_14c8464e0;
    *(longlong *)(lVar12 + 0xc0) = lVar4;
    *(undefined1 *)(param_1[0x42] + 0xd0) = 0;
    *(byte *)(param_1[0x42] + 0xd1) = *(byte *)((longlong)param_1 + 0x5bc) >> 4 & 1;
    *(int *)(param_1[0x42] + 0xd4) = (int)param_1[0x24];
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0xe8) = param_1[0x85];
    lVar4 = param_1[0x84];
    *(longlong *)(lVar12 + 0xd8) = param_1[0x83];
    *(longlong *)(lVar12 + 0xe0) = lVar4;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x100) = param_1[0x82];
    lVar4 = param_1[0x81];
    *(longlong *)(lVar12 + 0xf0) = param_1[0x80];
    *(longlong *)(lVar12 + 0xf8) = lVar4;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x118) = param_1[199];
    lVar4 = param_1[0xc6];
    *(longlong *)(lVar12 + 0x108) = param_1[0xc5];
    *(longlong *)(lVar12 + 0x110) = lVar4;
    *(byte *)(param_1[0x42] + 0x120) = *(byte *)((longlong)param_1 + 0x5b5) >> 6 & 1;
    *(byte *)(param_1[0x42] + 0x121) = *(byte *)((longlong)param_1 + 0x5b4) >> 5 & 1;
    lVar12 = param_1[0x42];
    lVar4 = *(longlong *)(param_1[0x3e] + 0x438);
    dVar2 = *(double *)(lVar4 + 0x280);
    uVar19 = SUB84(dVar2,0);
    uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)(lVar4 + 0x288);
    if (dVar3 <= dVar2) {
      uVar19 = SUB84(dVar3,0);
      uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    *(float *)(lVar12 + 0x124) = (float)(double)CONCAT44(uVar20,uVar19) * *(float *)(lVar4 + 0x644);
    *(float *)(lVar12 + 0x128) = (float)*(double *)(lVar4 + 0x290) * *(float *)(lVar4 + 0x640);
    *(byte *)(param_1[0x42] + 300) = *(byte *)(param_1[0x3e] + 0x550) >> 1 & 1;
    *(byte *)(param_1[0x42] + 0x12d) = *(byte *)((longlong)param_1 + 0x5b5) >> 5 & 1;
    *(byte *)(param_1[0x42] + 0x12e) = *(byte *)(param_1 + 0x69) >> 7;
    memcpy((void *)(param_1[0x42] + 0x130),param_1 + 0x93,0x110);
    *(byte *)(param_1[0x42] + 0x240) = *(byte *)((longlong)param_1 + 0x5bc) & 1;
    *(byte *)(param_1[0x42] + 0x241) = *(byte *)((longlong)param_1 + 0x5bc) >> 1 & 1;
    lVar12 = param_1[0x42];
    lVar4 = param_1[0xbd];
    *(longlong *)(lVar12 + 0x248) = param_1[0xbc];
    *(longlong *)(lVar12 + 0x250) = lVar4;
    *(longlong *)(lVar12 + 600) = param_1[0xbe];
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x270) = param_1[0xc1];
    lVar4 = param_1[0xc0];
    *(longlong *)(lVar12 + 0x260) = param_1[0xbf];
    *(longlong *)(lVar12 + 0x268) = lVar4;
    *(undefined4 *)(param_1[0x42] + 0x278) = *(undefined4 *)((longlong)param_1 + 0x43c);
    *(undefined1 *)(param_1[0x42] + 0x298) = 0;
    lVar4 = DAT_14c8464e8;
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x2a0) = DAT_14c8464e0;
    *(longlong *)(lVar12 + 0x2a8) = lVar4;
    *(longlong *)(lVar12 + 0x2b0) = DAT_14c8464f0;
    lVar12 = param_1[0x42];
    uVar14 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
    *(ulonglong *)(lVar12 + 0x2d0) = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
    *(undefined8 *)(lVar12 + 0x2d8) = uVar14;
    lVar4 = DAT_14c8463d8;
    *(longlong *)(lVar12 + 0x2c0) = DAT_14c8463d0;
    *(longlong *)(lVar12 + 0x2c8) = lVar4;
    *(undefined4 *)(param_1[0x42] + 0x2e0) = 0;
    lVar12 = param_1[0x22];
    if (lVar12 == 0) {
      puVar13 = &DAT_14c8464e0;
      uVar19 = (undefined4)DAT_14c8464f0;
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar19 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
      puVar13 = (undefined8 *)(lVar12 + 0x260);
    }
    uVar5 = *(undefined4 *)((longlong)puVar13 + 4);
    uVar6 = *(undefined4 *)(puVar13 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar13 + 0xc);
    lVar12 = param_1[0x42];
    *(undefined4 *)(lVar12 + 0x300) = *(undefined4 *)puVar13;
    *(undefined4 *)(lVar12 + 0x304) = uVar5;
    *(undefined4 *)(lVar12 + 0x308) = uVar6;
    *(undefined4 *)(lVar12 + 0x30c) = uVar7;
    *(ulonglong *)(lVar12 + 0x310) = CONCAT44(uVar20,uVar19);
    lVar12 = param_1[0x42];
    *(longlong *)(lVar12 + 0x2f8) = param_1[0x27];
    uVar19 = *(undefined4 *)((longlong)param_1 + 300);
    lVar4 = param_1[0x26];
    uVar20 = *(undefined4 *)((longlong)param_1 + 0x134);
    *(int *)(lVar12 + 0x2e8) = (int)param_1[0x25];
    *(undefined4 *)(lVar12 + 0x2ec) = uVar19;
    *(int *)(lVar12 + 0x2f0) = (int)lVar4;
    *(undefined4 *)(lVar12 + 0x2f4) = uVar20;
    uVar14 = 0;
    *(undefined1 *)(param_1[0x42] + 0x331) = 0;
    *(undefined1 *)(param_1[0x42] + 0x332) = 0;
    *(undefined1 *)(param_1[0x42] + 0x333) = 0;
    *(undefined1 *)(param_1[0x42] + 0x334) = 0;
    *(undefined8 *)(param_1[0x42] + 0x338) = *(undefined8 *)(param_3 + 0x210);
    lVar12 = *(longlong *)(param_1[0x42] + 0x338);
    if (lVar12 != 0) {
      uVar14 = *(undefined8 *)(lVar12 + 0xa8);
    }
    *(undefined8 *)(param_1[0x42] + 0x340) = uVar14;
    FUN_1479988a4(param_1[0x3e],*(undefined8 *)(param_1[0x42] + 0x358));
    *(undefined1 *)(param_1[0x42] + 0x360) = 1;
  }
LAB_14343fe33:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


