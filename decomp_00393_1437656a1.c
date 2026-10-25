// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437656a1 FUN_1437656a1 body=69 status=ok
// SIG undefined FUN_1437656a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437656a1(void)

{
  _DAT_14cb0d0a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437656e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d0b0,1);
  return;
}



// FUNCTION 1437656e6 FUN_1437656e6 body=5325 status=ok
// SIG undefined FUN_1437656e6(void)

void FUN_1437656e6(code *param_1,code *param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  code *pcVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  code **ppcVar22;
  undefined8 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined4 local_4a0;
  int local_498;
  undefined8 local_490;
  wchar_t *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  code ***local_470;
  code *local_468;
  code *local_460;
  longlong local_458;
  undefined8 local_450;
  longlong *local_448;
  longlong local_440;
  undefined8 local_438;
  code *local_430;
  longlong *local_428;
  longlong local_420;
  code *local_418;
  longlong local_410;
  undefined8 *local_408;
  undefined8 uStack_400;
  code *local_3f0;
  code *local_3e8;
  undefined **local_3e0 [11];
  longlong *local_388;
  longlong local_368;
  longlong local_330;
  int local_328;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  code *local_2f0;
  code *local_2e8;
  undefined1 local_2dc [4];
  code *local_2d8;
  code **ppcStack_2d0;
  code **local_2c8;
  code **ppcStack_2c0;
  byte local_29e;
  byte local_29d;
  longlong *local_270;
  longlong local_250;
  code *local_238;
  undefined4 local_228;
  undefined2 local_170;
  longlong *local_168;
  code *local_160;
  code *local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  uVar10 = local_60;
  local_2f8 = param_3;
  local_2f0 = param_1;
  local_2e8 = param_2;
  if (param_2 == (code *)0x0) {
LAB_1437657c2:
    local_450 = CONCAT71((int7)(uVar10 >> 8),1);
    local_430 = (code *)0x0;
LAB_1437657d5:
    local_448 = (longlong *)0x0;
LAB_1437657e1:
    local_458 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_470 = &local_2c8;
      local_2c8 = (code **)FUN_141030f22;
      local_460 = FUN_14081d0ea;
      local_468 = FUN_14081d0ea;
      local_478 = &LAB_1478c0a72;
      local_480 = &LAB_1417b2375;
      local_488 = L"Engine";
      local_490 = 0x1000000000;
      local_498 = 0x10000004;
      local_4a0 = 8;
      local_4a8 = CONCAT44(local_4a8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    uVar10 = DAT_14cac9ca8;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (uVar10 = DAT_14cac9ca8 + 0x30,
       *(ulonglong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != uVar10)) goto LAB_1437657c2;
    local_430 = param_2;
    if (*(char *)(param_3 + 4) != '\x01') {
LAB_1437657b7:
      local_450 = 0;
      goto LAB_1437657d5;
    }
    local_2c8 = (code **)0x14a78dfce;
    ppcStack_2c0 = (code **)CONCAT35(ppcStack_2c0._5_3_,0xd);
    uVar6 = FUN_14001a6c0(&local_2c8,1);
    local_448 = (longlong *)FUN_140ae7da1(*(undefined8 *)(param_2 + 0x10),uVar6,3);
    if (local_448 == (longlong *)0x0) goto LAB_1437657b7;
    local_458 = (**(code **)(*local_448 + 0x220))(local_448,param_2,0);
    if (local_458 == 0) {
LAB_1437669f4:
      local_450 = 0;
      goto LAB_1437657e1;
    }
    if (DAT_14cac7648 == 0) {
      local_2c8 = (code **)FUN_144a7958c;
      local_460 = FUN_14081d0ea;
      local_468 = FUN_143242436;
      local_478 = &LAB_14789ef1f;
      local_480 = &LAB_1417b008f;
      local_488 = L"Engine";
      local_490 = 0x8000000000;
      local_498 = 0x10000004;
      local_4a0 = 0x10;
      local_4a8 = CONCAT44(local_4a8._4_4_,0x2b0);
      local_470 = &local_2c8;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((*(int *)(*(longlong *)(local_458 + 0x10) + 0x38) < *(int *)(DAT_14cac7648 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_458 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) != DAT_14cac7648 + 0x30)) goto LAB_1437669f4;
    local_450 = 0;
  }
  local_308 = 0;
  uStack_300 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  FUN_147d81ed4(local_3e0,local_2f0,local_2e8);
  local_108 = 0;
  uStack_100 = 0;
  FUN_143766bb4(&local_2f8,local_2f0,&local_108);
  lVar24 = local_108;
  lVar17 = (longlong)(int)uStack_100;
  local_440 = param_3;
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar24 + lVar21);
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar10 = uStack_300;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      lVar20 = (longlong)(int)uStack_300;
      uVar7 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar7);
      if (uStack_300._4_4_ < uVar7) {
        FUN_1456bd870(&local_308,uVar10 & 0xffffffff);
      }
      *(undefined8 **)(local_308 + lVar20 * 8) = puVar11;
      puVar11[2] = uVar4;
      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,(int)uStack_300 + -1);
      local_158 = (code *)0x0;
      uStack_150 = 0;
      FUN_1401031ac(uVar4,local_2f0,&local_158);
      ppcStack_2c0 = (code **)&local_408;
      local_2c8 = &local_158;
      FUN_147d88b62(&local_b8,&local_2d8,&local_2c8);
      if (local_158 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_498 = (uint)*(byte *)(local_440 + 3) << 0x1b;
      local_4a0 = CONCAT31(local_4a0._1_3_,*(undefined1 *)(local_440 + 1));
      local_4a8 = CONCAT71(local_4a8._1_7_,1);
      FUN_147587eae(&local_2c8,uVar4,puVar11);
      plVar14 = local_270;
      local_2c8 = (code **)&PTR__purecall_149e35f70;
      if (local_270 != (longlong *)0x0) {
        if (*local_270 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar14);
      }
      lVar20 = local_250;
      if (local_250 != 0) {
        if (*(longlong *)(local_250 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar20);
      }
      lVar21 = lVar21 + 8;
    } while (lVar17 * 8 != lVar21);
  }
  lVar24 = local_440;
  if (local_108 != 0) {
    FUN_1400020a8(local_108);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_2c8 = &local_2f0;
  ppcStack_2c0 = &local_2e8;
  FUN_140503212(&local_108,&local_158);
  local_3e8 = (code *)FUN_144938c96(local_2f0);
  local_3f0 = (code *)FUN_144938c96(local_2e8);
  if ((local_3e8 != local_3f0) &&
     ((lVar17 = *(longlong *)(lVar24 + 0x18), lVar17 == 0 ||
      (lVar17 = FUN_147d82020(lVar17,local_3f0), lVar17 == 0)))) {
    local_2c8 = &local_3e8;
    ppcStack_2c0 = &local_3f0;
    FUN_140503212(&local_108,&local_158);
  }
  pcVar13 = *(code **)(local_2e8 + 0x10);
  if (*(code **)(local_2f0 + 0x10) != pcVar13) {
    if (*(char *)(lVar24 + 2) == '\x01') {
      local_2c8 = &local_2d8;
      local_2d8 = *(code **)(local_2f0 + 0x10);
      ppcStack_2c0 = &local_158;
      local_158 = pcVar13;
      FUN_147d88cbe(&local_108,&local_408);
      pcVar13 = *(code **)(local_2e8 + 0x10);
    }
    pcVar12 = *(code **)(pcVar13 + 0x110);
    if (pcVar12 == (code *)0x0) {
      (**(code **)(*(longlong *)pcVar13 + 1000))(pcVar13);
      pcVar12 = *(code **)(pcVar13 + 0x110);
    }
    plVar14 = *(longlong **)(local_2f0 + 0x10);
    pcVar13 = (code *)plVar14[0x22];
    local_158 = pcVar12;
    if (pcVar13 == (code *)0x0) {
      (**(code **)(*plVar14 + 1000))(plVar14);
      pcVar13 = (code *)plVar14[0x22];
    }
    local_2c8 = &local_2d8;
    local_2d8 = pcVar13;
    ppcStack_2c0 = &local_158;
    FUN_147d88cbe(&local_108,&local_408);
  }
  lVar24 = DAT_14cb0d0b8;
  local_408 = (undefined8 *)0x0;
  uStack_400 = 0;
  uVar10 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = (code *)0x0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_420 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar19 = *(int *)(local_420 + 0xc60);
  if (iVar19 != 0x40000002) {
    bVar25 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar19 != 2)) {
      if (iVar19 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar25 = DVar8 == DVar9;
      }
      else {
        bVar25 = false;
      }
    }
    uVar10 = (ulonglong)(bVar25 ^ 1);
  }
  local_438 = CONCAT71(local_438._1_7_,*(undefined1 *)(lVar24 + uVar10));
  FUN_143766bb4(&local_2f8,local_2e8,&local_408);
  if (0 < (int)uStack_400) {
    lVar24 = 0;
LAB_143765cd4:
    local_2d8 = (code *)local_408[lVar24];
    local_2c8 = (code **)0x0;
    ppcStack_2c0 = (code **)0x0;
    FUN_1401031ac(local_2d8,local_2e8,&local_2c8);
    iVar19 = (int)ppcStack_2c0 + -1;
    if ((int)ppcStack_2c0 == 0) {
      iVar19 = 0;
    }
    uVar7 = 0;
    if (0 < iVar19) {
      ppcVar22 = (code **)&DAT_149dfb77a;
      if ((int)ppcStack_2c0 != 0) {
        ppcVar22 = local_2c8;
      }
      lVar17 = 0;
      uVar7 = 0;
      do {
        uVar2 = *(ushort *)((longlong)ppcVar22 + lVar17 * 2);
        uVar16 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
        uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar16) & 0xff) * 4);
        uVar7 = uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
        lVar17 = lVar17 + 1;
      } while (iVar19 != (int)lVar17);
    }
    if ((int)uStack_b0 != local_84) {
      puVar15 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar15 = local_80;
      }
      iVar19 = *(int *)(puVar15 + (ulonglong)(local_70 - 1U & uVar7) * 4);
      if (iVar19 != -1) {
LAB_143765de1:
        lVar17 = (longlong)iVar19 * 0x20;
        plVar14 = (longlong *)(local_b8 + lVar17);
        iVar19 = *(int *)(local_b8 + 8 + lVar17);
        if (iVar19 == (int)ppcStack_2c0) {
          if (1 < (int)ppcStack_2c0) {
            lVar21 = 0;
            do {
              uVar2 = *(ushort *)(*plVar14 + lVar21);
              uVar3 = *(ushort *)((longlong)local_2c8 + lVar21);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar19 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_143765e43;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x000143765e40;
              }
              lVar21 = lVar21 + 2;
            } while( true );
          }
        }
        else if (iVar19 + (int)ppcStack_2c0 != 1) goto LAB_143765e53;
        goto LAB_143765e69;
      }
    }
    plVar14 = (longlong *)0x0;
    goto LAB_143765e69;
  }
LAB_143765f89:
  lVar24 = local_440;
  if (*(char *)(local_440 + 0xb) == '\0') {
    local_438 = 0;
    local_428 = (longlong *)0x0;
  }
  else {
    local_438 = *(undefined8 *)(local_440 + 0x20);
    local_428 = *(longlong **)(local_440 + 0x18);
    if (*(longlong **)(local_440 + 0x18) == (longlong *)0x0) {
      local_428 = &local_108;
    }
  }
  iVar19 = (int)uStack_400;
  if (0 < local_328) {
    local_4a8 = local_438;
    FUN_147d82120(&local_2c8,local_3e0,local_2e8);
    plVar14 = local_270;
    local_2c8 = (code **)&PTR__purecall_149e35f70;
    if (local_270 != (longlong *)0x0) {
      if (*local_270 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar14);
    }
    lVar17 = local_250;
    if (local_250 != 0) {
      if (*(longlong *)(local_250 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar17);
    }
    iVar19 = (int)uStack_400;
  }
  local_2d8 = (code *)0x0;
  ppcStack_2d0 = (code **)0x0;
  if (iVar19 != 0) {
    puVar11 = local_408 + iVar19;
    puVar23 = local_408;
    do {
      uVar4 = *puVar23;
      local_2c8 = (code **)0x0;
      ppcStack_2c0 = (code **)0x0;
      FUN_1401031ac(uVar4,local_2e8,&local_2c8);
      iVar19 = (int)ppcStack_2c0 + -1;
      if ((int)ppcStack_2c0 == 0) {
        iVar19 = 0;
      }
      uVar7 = 0;
      if (0 < iVar19) {
        ppcVar22 = (code **)&DAT_149dfb77a;
        if ((int)ppcStack_2c0 != 0) {
          ppcVar22 = local_2c8;
        }
        lVar24 = 0;
        uVar7 = 0;
        do {
          uVar2 = *(ushort *)((longlong)ppcVar22 + lVar24 * 2);
          uVar16 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar16) & 0xff) * 4);
          uVar7 = uVar7 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
          lVar24 = lVar24 + 1;
        } while (iVar19 != (int)lVar24);
      }
      if ((int)uStack_b0 != local_84) {
        puVar15 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = local_80;
        }
        iVar19 = *(int *)(puVar15 + (ulonglong)(local_70 - 1U & uVar7) * 4);
        if (iVar19 != -1) {
LAB_143766171:
          lVar24 = (longlong)iVar19 * 0x20;
          plVar14 = (longlong *)(local_b8 + lVar24);
          iVar19 = *(int *)(local_b8 + 8 + lVar24);
          if (iVar19 == (int)ppcStack_2c0) {
            if (1 < (int)ppcStack_2c0) {
              lVar17 = 0;
              do {
                uVar2 = *(ushort *)(*plVar14 + lVar17);
                uVar3 = *(ushort *)((longlong)local_2c8 + lVar17);
                if (uVar2 == uVar3) {
                  if (uVar2 == 0) break;
                }
                else {
                  if (0x7f < (uVar3 | uVar2)) {
                    iVar19 = (uint)uVar2 - (uint)uVar3;
                    goto LAB_1437661d9;
                  }
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                  goto code_r0x0001437661d6;
                }
                lVar17 = lVar17 + 2;
              } while( true );
            }
          }
          else if (iVar19 + (int)ppcStack_2c0 != 1) goto LAB_1437661e9;
          goto LAB_143766208;
        }
      }
LAB_143766206:
      plVar14 = (longlong *)0x0;
LAB_143766208:
      plVar18 = plVar14 + 2;
      if (plVar14 == (longlong *)0x0) {
        plVar18 = (longlong *)0x0;
      }
      if (local_2c8 != (code **)0x0) {
        FUN_1400020a8();
      }
      if (plVar18 != (longlong *)0x0) {
        lVar24 = *(longlong *)(local_308 + (longlong)(int)*plVar18 * 8);
        local_4a8 = local_438;
        FUN_147d821fa(&local_2c8,uVar4,lVar24,local_428);
        local_4a8 = *(undefined8 *)(local_440 + 0x18);
        FUN_14686df6e(*(undefined8 *)(lVar24 + 0x10),uVar4,&local_108);
        plVar14 = local_270;
        local_2c8 = (code **)&PTR__purecall_149e35f70;
        if (local_270 != (longlong *)0x0) {
          if (*local_270 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar14);
        }
        lVar24 = local_250;
        if (local_250 != 0) {
          if (*(longlong *)(local_250 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar24);
        }
      }
      uVar10 = uStack_400;
      lVar24 = local_440;
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar11);
    lVar17 = (longlong)(int)(uint)ppcStack_2d0;
    if (lVar17 != 0) {
      iVar19 = (int)uStack_400;
      lVar21 = (longlong)(int)uStack_400;
      uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + (uint)ppcStack_2d0);
      if ((uint)(uStack_400._4_4_ - iVar19) < (uint)ppcStack_2d0) {
        FUN_1447f76d2(&local_408,uVar10 & 0xffffffff);
      }
      memmove(local_408 + lVar21,local_2d8,lVar17 << 3);
      ppcStack_2d0 = (code **)((ulonglong)ppcStack_2d0 & 0xffffffff00000000);
    }
    if (local_2d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  local_4a8 = *(undefined8 *)(lVar24 + 0x18);
  FUN_14686df6e(local_2f0,local_2e8,&local_108,&local_408);
  ppcStack_2d0 = &local_418;
  ppcStack_2c0 = &local_2d8;
  local_2d8 = FUN_14376a4c6;
  local_2c8 = (code **)FUN_1449cc908;
  local_4a8 = CONCAT44(local_4a8._4_4_,0x200000);
  local_418 = (code *)&local_108;
  local_410 = lVar24;
  FUN_14482c30e(local_2f0,&local_2c8,CONCAT71((int7)((ulonglong)ppcStack_2c0 >> 8),1),0);
  pcVar13 = local_2e8;
  if (*(char *)(lVar24 + 9) != '\0') {
LAB_143766415:
    pcVar12 = pcVar13;
    pcVar13 = pcVar12;
    if (*(code **)(pcVar12 + 0x20) != (code *)0x0) goto code_r0x000143766424;
    goto LAB_143766438;
  }
LAB_143766634:
  pcVar13 = local_430;
  piVar1 = (int *)(local_420 + 0xc60);
  if (((char)local_450 == '\0') && (*(char *)(lVar24 + 4) == '\x01')) {
    if ((local_448 != (longlong *)0x0) &&
       ((local_458 != 0 || ((*(byte *)((longlong)local_448 + 0x39) & 0x10) == 0)))) {
      (**(code **)(*local_448 + 0x200))(local_448,local_430,local_458,0);
    }
    FUN_140115ede(pcVar13);
  }
  lVar17 = DAT_14cb0d088;
  iVar19 = *piVar1;
  if (iVar19 == 0x40000002) {
    uVar10 = 0;
  }
  else {
    bVar25 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar19 != 2)) {
      if (iVar19 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar25 = DVar8 == DVar9;
      }
      else {
        bVar25 = false;
      }
    }
    uVar10 = (ulonglong)(bVar25 ^ 1);
  }
  pcVar13 = local_2f0;
  if (*(int *)(lVar17 + uVar10 * 4) != 0) {
    FUN_144750a86(local_2f0,&local_2d8,0,0);
    pcVar12 = (code *)&DAT_149dfb77a;
    if ((uint)ppcStack_2d0 != 0) {
      pcVar12 = local_2d8;
    }
    FUN_140002266(&local_2c8,L"CopyPropertiesForUnrelatedObjects: Old (%s)",pcVar12);
    ppcVar22 = (code **)&DAT_149dfb77a;
    if ((int)ppcStack_2c0 != 0) {
      ppcVar22 = local_2c8;
    }
    FUN_14376c59f(ppcVar22,pcVar13);
    if (local_2c8 != (code **)0x0) {
      FUN_1400020a8();
    }
    if (local_2d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_144750a86(local_2e8,&local_2d8,0,0);
    pcVar13 = (code *)&DAT_149dfb77a;
    if ((uint)ppcStack_2d0 != 0) {
      pcVar13 = local_2d8;
    }
    FUN_140002266(&local_2c8,L"CopyPropertiesForUnrelatedObjects: New (%s)",pcVar13);
    ppcVar22 = (code **)&DAT_149dfb77a;
    if ((int)ppcStack_2c0 != 0) {
      ppcVar22 = local_2c8;
    }
    FUN_14376c59f(ppcVar22);
    if (local_2c8 != (code **)0x0) {
      FUN_1400020a8();
    }
    if (local_2d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14cb0d2b0 != (longlong *)0x0 & *(byte *)(lVar24 + 8)) == 1) {
    uVar7 = *(uint *)(local_2f0 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar24 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    if ((*(uint *)(lVar24 + 8) & 0xc400000) == 0) {
      (**(code **)(*DAT_14cb0d2b0 + 0x3f8))(DAT_14cb0d2b0,&local_108);
    }
  }
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(&local_158);
  if (local_408 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(&local_108);
  local_3e0[0] = &PTR_FUN_14aae5a30;
  if (local_330 != 0) {
    FUN_1400020a8();
  }
  local_3e0[0] = &PTR__purecall_149e35f70;
  if (local_388 != (longlong *)0x0) {
    if (*local_388 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_388);
  }
  if (local_368 != 0) {
    if (*(longlong *)(local_368 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_368);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(&local_b8);
  FUN_147d8232e(&local_308);
  if ((local_60 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143765e40:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143765e43:
  if (iVar19 == 0) goto LAB_143765e69;
LAB_143765e53:
  iVar19 = *(int *)(local_b8 + 0x18 + lVar17);
  if (iVar19 == -1) goto LAB_143765e67;
  goto LAB_143765de1;
LAB_143765e67:
  plVar14 = (longlong *)0x0;
LAB_143765e69:
  plVar18 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
  }
  if (local_2c8 != (code **)0x0) {
    FUN_1400020a8();
  }
  if (plVar18 != (longlong *)0x0) {
    ppcVar22 = (code **)(*(longlong *)(local_308 + (longlong)(int)*plVar18 * 8) + 0x10);
    local_2c8 = ppcVar22;
    ppcStack_2c0 = &local_2d8;
    FUN_140503212(&local_108,&local_418,&local_2c8);
    if (*(longlong *)(local_440 + 0x18) != 0) {
      local_2c8 = ppcVar22;
      ppcStack_2c0 = &local_2d8;
      FUN_140503212(*(longlong *)(local_440 + 0x18),&local_418,&local_2c8);
    }
    if ((((char)local_438 != '\0') && (*(longlong *)(*(longlong *)(local_2f0 + 0x10) + 0x40) != 0))
       && (local_418 = (code *)FUN_1468915d4(*(longlong *)(*(longlong *)(local_2f0 + 0x10) + 0x40),
                                             *(longlong *)(local_2d8 + 0x18)),
          local_418 != (code *)0x0)) {
      local_2c8 = &local_418;
      ppcStack_2c0 = &local_2d8;
      FUN_140503212(&local_108,local_2dc,&local_2c8);
    }
  }
  lVar24 = lVar24 + 1;
  if ((int)uStack_400 <= lVar24) goto LAB_143765f89;
  goto LAB_143765cd4;
code_r0x0001437661d6:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1437661d9:
  if (iVar19 == 0) goto LAB_143766208;
LAB_1437661e9:
  iVar19 = *(int *)(local_b8 + 0x18 + lVar24);
  if (iVar19 == -1) goto LAB_143766206;
  goto LAB_143766171;
code_r0x000143766424:
  pcVar13 = *(code **)(pcVar12 + 0x20);
  if ((*(uint *)(pcVar12 + 8) >> 0x1c & 1) == 0) goto LAB_143766415;
  pcVar13 = (code *)FUN_142840154(pcVar12);
LAB_143766438:
  pcVar5 = local_2e8;
  if (pcVar13 == (code *)0x0) {
    pcVar13 = *(code **)(pcVar12 + 0x20);
    goto LAB_143766415;
  }
  plVar14 = *(longlong **)(lVar24 + 0x18);
  if (plVar14 != (longlong *)0x0) {
    FUN_147d88e0e(&local_2c8);
    local_2c8 = (code **)&PTR_FUN_14aae6ee0;
    local_170 = 0;
    local_238 = pcVar5;
    local_228 = 0;
    local_29d = local_29d | 6;
    local_29e = local_29e & 0x9b | 0x40;
    local_168 = plVar14;
    FUN_147d87d0a(&local_2c8);
    FUN_147d8229a(&local_2c8);
  }
  pcVar12 = local_2e8;
  FUN_147d88e0e(&local_2c8);
  local_168 = &local_108;
  local_170 = 0;
  local_238 = pcVar12;
  local_228 = 0;
  local_29d = local_29d | 6;
  local_29e = local_29e & 0x9b | 0x40;
  local_2c8 = (code **)&PTR_FUN_14aae6c80;
  local_160 = pcVar13;
  FUN_147d87d0a(&local_2c8);
  FUN_147d8229a(&local_2c8);
  if (0 < (int)uStack_400) {
    lVar17 = 0;
    do {
      pcVar12 = (code *)local_408[lVar17];
      plVar14 = *(longlong **)(lVar24 + 0x18);
      if (plVar14 != (longlong *)0x0) {
        FUN_147d88e0e(&local_2c8);
        local_2c8 = (code **)&PTR_FUN_14aae6ee0;
        local_170 = 0;
        local_228 = 0;
        local_29d = local_29d | 6;
        local_29e = local_29e & 0x9b | 0x40;
        local_238 = pcVar12;
        local_168 = plVar14;
        FUN_147d87d0a(&local_2c8);
        FUN_147d8229a(&local_2c8);
      }
      FUN_147d88e0e(&local_2c8);
      local_168 = &local_108;
      local_170 = 0;
      local_228 = 0;
      local_29d = local_29d | 6;
      local_29e = local_29e & 0x9b | 0x40;
      local_2c8 = (code **)&PTR_FUN_14aae6c80;
      local_238 = pcVar12;
      local_160 = pcVar13;
      FUN_147d87d0a(&local_2c8);
      FUN_147d8229a(&local_2c8);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_400);
  }
  goto LAB_143766634;
}



// FUNCTION 143766bb4 FUN_143766bb4 body=336 status=ok
// SIG undefined FUN_143766bb4(void)

void FUN_143766bb4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar5 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  FUN_14086ecde(param_2,param_3,
                CONCAT71((int7)((ulonglong)plVar5 >> 8),*(undefined1 *)(*param_1 + 6)) ^ 1,0,0);
  if (0 < (int)param_3[1]) {
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(*param_3 + (longlong)(int)uVar6 * 8);
      cVar2 = FUN_14008df84(lVar1);
      if ((cVar2 == '\0') && ((*(uint *)(lVar1 + 8) >> 0x12 & 1) == 0)) {
        iVar3 = (int)param_3[1];
        iVar4 = ~uVar6 + iVar3;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_3 + (longlong)(int)uVar6 * 8),
                  (void *)(*param_3 + (longlong)(iVar3 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar3 = (int)param_3[1];
        }
        uVar6 = uVar6 - 1;
        *(int *)(param_3 + 1) = iVar3 + -1;
        FUN_1404559b4(param_3);
      }
      else if (*(char *)(*param_1 + 6) == '\x01') {
        FUN_14086ecde(lVar1,param_3,0,0,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 143766d04 FUN_143766d04 body=68 status=ok
// SIG undefined FUN_143766d04(void)

void FUN_143766d04(longlong *param_1)

{
  wchar_t *_Str;
  float fVar1;
  double dVar2;
  
  if ((int)param_1[1] == 0) {
    fVar1 = 20.0;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar2 = _wtof(_Str);
    fVar1 = (float)dVar2;
  }
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  FUN_143203ce2(fVar1);
  return;
}



// FUNCTION 143766d48 FUN_143766d48 body=69 status=ok
// SIG undefined FUN_143766d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143766d48(void)

{
  _DAT_14cb0d0c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143766d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d0c8,1);
  return;
}



// FUNCTION 143766d8d FUN_143766d8d body=69 status=ok
// SIG undefined FUN_143766d8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143766d8d(void)

{
  _DAT_14cb0d0d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143766dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d0d8,1);
  return;
}



// FUNCTION 143766dd2 FUN_143766dd2 body=49 status=ok
// SIG undefined FUN_143766dd2(void)

void FUN_143766dd2(void)

{
  FUN_1447a1747(DAT_14cb0d0f0,DAT_14cb0d0f8);
  if (DAT_14cb0d0f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143766e1b FUN_143766e1b body=2425 status=ok
// SIG undefined FUN_143766e1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143766e1b(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ushort uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    bVar20 = false;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = *(undefined2 **)*param_1;
    }
    lVar15 = 0;
    while( true ) {
      uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
      uVar8 = (uint)uVar14;
      uVar17 = *(ushort *)((longlong)L"default" + lVar15);
      uVar18 = (uint)uVar17;
      if (uVar14 != uVar17) {
        if ((uVar17 | uVar14) < 0x80) {
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar14];
          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar17]) goto LAB_143766e8c;
        }
        iVar9 = uVar8 - uVar18;
        goto LAB_143766eb5;
      }
      if (uVar14 == 0) break;
LAB_143766e8c:
      lVar15 = lVar15 + 2;
    }
    iVar9 = 0;
LAB_143766eb5:
    bVar20 = iVar9 == 0;
  }
  if ((bVar20) || ((DAT_14cb0d254 & 1) == 0)) {
    DAT_14cb0d138 = 0xffffffffffffffff;
    DAT_14cb0d148 = 0xffffffffffffffff;
    DAT_14cb0d108 = 0xffffffffffffffff;
    DAT_14cb0d118 = 0xffffffffffffffff;
    DAT_14cb0d128 = 0xffffffffffffffff;
    DAT_14cb0d140 = 5;
    DAT_14cb0d150 = 2;
    _DAT_14cb0d110 = 0;
    _DAT_14cb0d120 = 0;
    _DAT_14cb0d130 = 0;
    DAT_14cb0d254 = 1;
  }
  if ((!bVar20) && ((longlong)(int)param_1[1] != 0)) {
    lVar15 = *param_1;
    lVar10 = (longlong)(int)param_1[1] * 0x10 + lVar15;
    local_b0 = lVar10;
LAB_143767253:
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_1403de9f2(lVar15,&local_78,&DAT_149e31048);
    if (1 < (int)uStack_70) {
      local_88 = (undefined2 *)0x0;
      local_80 = *(int *)(local_78 + 1);
      lVar19 = (longlong)local_80;
      pvVar3 = (void *)*local_78;
      local_b8 = lVar15;
      if (lVar19 == 0) {
        local_7c = 0;
        puVar11 = &DAT_149dfb77a;
        iVar9 = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,pvVar3,lVar19 * 2);
        puVar11 = local_88;
        iVar9 = local_80;
        if (local_80 == 0) {
          puVar11 = &DAT_149dfb77a;
        }
      }
      lVar15 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
        uVar12 = (ulonglong)uVar14;
        uVar17 = *(ushort *)((longlong)&DAT_14aae6150 + lVar15);
        if (uVar14 != uVar17) {
          if ((uVar17 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar16 = (ulonglong)uVar17;
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_14376730f;
          }
          puVar13 = &DAT_14cb0d108;
          if (uVar14 == uVar17) goto LAB_143767512;
          puVar11 = local_88;
          if (iVar9 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          lVar15 = 0;
          goto LAB_143767360;
        }
        if (uVar14 == 0) break;
LAB_14376730f:
        lVar15 = lVar15 + 2;
      }
      puVar13 = &DAT_14cb0d108;
      goto LAB_143767512;
    }
    goto LAB_1437676a7;
  }
LAB_143766f31:
  uVar6 = DAT_14c7585c8;
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70 = CONCAT44(uStack_70._4_4_,2);
  *local_78 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_78[2] = lVar10;
  *local_78 = &PTR_FUN_149e062c0;
  local_78[3] = &LAB_143766e03;
  local_d8 = uVar6;
  FUN_142c039ac(&local_a0,&local_78);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  if ((int)uStack_70 == 0) {
LAB_143767020:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    goto LAB_143767020;
  }
  if (DAT_14c842751 == '\x01') {
    local_78 = (undefined8 *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1446efa72(&local_78,0,2,0x10);
    uStack_70 = CONCAT44(uStack_70._4_4_,2);
    *local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_78[2] = lVar10;
    *local_78 = &PTR_FUN_149e062c0;
    local_78[3] = &LAB_143766e0f;
    local_d8 = 0;
    FUN_142c039ac(&local_a8,&local_78);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
    if ((int)uStack_70 != 0) {
      if (local_78 == (undefined8 *)0x0) goto LAB_14376712e;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      uStack_70 = uStack_70 & 0xffffffff00000000;
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14376712e:
  FUN_14279b91a(DAT_14cb0d108);
  FUN_14080c2b4();
  iVar5 = FUN_145afebe4();
  iVar9 = 2;
  if (iVar5 < 2) {
    iVar9 = iVar5;
  }
  iVar4 = iVar5 - iVar9;
  if (iVar5 - iVar9 < 2) {
    iVar4 = 1;
  }
  iVar9 = iVar5 - iVar4;
  if (iVar5 - iVar4 < 2) {
    iVar9 = 1;
  }
  local_c0 = DAT_14cb0d148;
  local_c8 = DAT_14cb0d138;
  local_d0 = DAT_14cb0d150;
  local_d8 = DAT_14cb0d140;
  FUN_1467a7a68(&DAT_14c82ba00,iVar9,iVar4,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_1400e4168(&DAT_14c872ee0,0);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143767360:
  uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
  uVar12 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)&DAT_149dff672 + lVar15);
  if (uVar14 != uVar17) {
    if ((uVar17 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar16 = (ulonglong)uVar17;
      uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_143767378;
    }
    puVar13 = &DAT_14cb0d118;
    if (uVar14 == uVar17) goto LAB_143767512;
    lVar15 = 0;
    goto LAB_1437673bf;
  }
  if (uVar14 == 0) goto LAB_1437676df;
LAB_143767378:
  lVar15 = lVar15 + 2;
  goto LAB_143767360;
LAB_1437673bf:
  uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
  uVar12 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)&DAT_149e0334a + lVar15);
  if (uVar14 != uVar17) {
    if ((uVar17 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar16 = (ulonglong)uVar17;
      uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_1437673d7;
    }
    puVar13 = &DAT_14cb0d128;
    if (uVar14 == uVar17) goto LAB_143767512;
    lVar15 = 0;
    goto LAB_14376741e;
  }
  if (uVar14 == 0) goto LAB_1437676eb;
LAB_1437673d7:
  lVar15 = lVar15 + 2;
  goto LAB_1437673bf;
LAB_14376741e:
  uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
  uVar12 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)&DAT_14a1e76ae + lVar15);
  if (uVar14 != uVar17) {
    if ((uVar17 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar16 = (ulonglong)uVar17;
      uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_143767436;
    }
    puVar13 = &DAT_14cb0d138;
    if (uVar14 == uVar17) goto LAB_143767512;
    lVar15 = 0;
    goto LAB_143767485;
  }
  if (uVar14 == 0) goto LAB_1437676f7;
LAB_143767436:
  lVar15 = lVar15 + 2;
  goto LAB_14376741e;
LAB_143767485:
  uVar14 = *(ushort *)((longlong)puVar11 + lVar15);
  uVar12 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)&DAT_14aae6156 + lVar15);
  if (uVar14 != uVar17) {
    if ((uVar17 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar16 = (ulonglong)uVar17;
      uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_14376749d;
    }
    puVar13 = &DAT_14cb0d148;
    if (uVar14 == uVar17) goto LAB_143767512;
    lVar15 = local_b8;
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
      lVar15 = local_b8;
    }
    goto LAB_1437676a7;
  }
  if (uVar14 == 0) goto LAB_143767703;
LAB_14376749d:
  lVar15 = lVar15 + 2;
  goto LAB_143767485;
LAB_143767703:
  puVar13 = &DAT_14cb0d148;
  goto LAB_143767512;
LAB_1437676f7:
  puVar13 = &DAT_14cb0d138;
  goto LAB_143767512;
LAB_1437676eb:
  puVar13 = &DAT_14cb0d128;
  goto LAB_143767512;
LAB_1437676df:
  puVar13 = &DAT_14cb0d118;
LAB_143767512:
  if (1 < (int)uStack_70) {
    lVar15 = 1;
    iVar9 = (int)uStack_70;
    do {
      puVar2 = local_78 + lVar15 * 2;
      iVar5 = *(int *)(local_78 + lVar15 * 2 + 1);
      puVar11 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar11 = (undefined2 *)*puVar2;
      }
      lVar10 = 2;
      lVar19 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)puVar11 + lVar19);
        uVar12 = (ulonglong)uVar14;
        uVar17 = *(ushort *)((longlong)&DAT_149e26620 + lVar19);
        if (uVar14 != uVar17) break;
        if (uVar14 == 0) goto LAB_1437675a1;
LAB_143767569:
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_1437675a1;
        lVar19 = lVar19 + 2;
      }
      if ((uVar17 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar16 = (ulonglong)uVar17;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_143767569;
      }
      if (uVar14 != uVar17) goto LAB_1437675b8;
LAB_1437675a1:
      puVar11 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar11 = (undefined2 *)*puVar2;
      }
      uVar7 = FUN_146816e5e(puVar11);
      *puVar13 = uVar7;
      iVar5 = *(int *)(puVar2 + 1);
LAB_1437675b8:
      puVar11 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar11 = (undefined2 *)*puVar2;
      }
      lVar10 = 4;
      lVar19 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)puVar11 + lVar19);
        uVar12 = (ulonglong)uVar14;
        uVar17 = *(ushort *)((longlong)&DAT_14aae6164 + lVar19);
        if (uVar14 != uVar17) break;
        if (uVar14 == 0) goto LAB_143767617;
LAB_1437675df:
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_143767617;
        lVar19 = lVar19 + 2;
      }
      if ((uVar17 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar16 = (ulonglong)uVar17;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_1437675df;
      }
      if (uVar14 != uVar17) goto LAB_143767670;
LAB_143767617:
      local_98 = (void *)0x0;
      local_90 = *(int *)(puVar2 + 1);
      lVar10 = (longlong)local_90;
      pvVar3 = (void *)*puVar2;
      if (lVar10 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,pvVar3,lVar10 * 2);
      }
      uVar6 = FUN_147d82673(&local_98);
      *(undefined4 *)(puVar13 + 1) = uVar6;
      iVar9 = (int)uStack_70;
LAB_143767670:
      lVar15 = lVar15 + 1;
      lVar10 = local_b0;
    } while (lVar15 < iVar9);
  }
  lVar15 = local_b8;
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437676a7:
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar15 = lVar15 + 0x10;
  if (lVar15 == lVar10) goto LAB_143766f31;
  goto LAB_143767253;
}



// FUNCTION 143767795 FUN_143767795 body=69 status=ok
// SIG undefined FUN_143767795(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767795(void)

{
  _DAT_14cb0d158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437677d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d160,1);
  return;
}



// FUNCTION 1437677e1 FUN_1437677e1 body=1655 status=ok
// SIG undefined FUN_1437677e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437677e1(longlong *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  LARGE_INTEGER LVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_108 [40];
  longlong local_e0;
  wchar_t *local_d8;
  int local_d0;
  wchar_t *local_c8;
  int local_c0;
  LARGE_INTEGER local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  ulonglong uStack_a0;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_94 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"DelayedCmdOffsetZ=",&local_94);
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    puVar16 = (undefined8 *)*param_1;
    puVar15 = puVar16 + (longlong)(int)param_1[1] * 2;
    fVar21 = (float)local_94;
    fVar19 = 0.0;
    fVar20 = 0.0;
    bVar2 = false;
    bVar11 = 0;
    local_e0 = 0;
LAB_1437678a3:
    local_b8.QuadPart = 0;
    local_b0 = *(int *)(puVar16 + 1);
    lVar9 = (longlong)local_b0;
    pvVar1 = (void *)*puVar16;
    if (lVar9 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy((void *)local_b8,pvVar1,lVar9 * 2);
    }
    FUN_140056680(&local_c8,L"-empty");
    pwVar4 = local_c8;
    if (local_b0 == local_c0) {
      bVar17 = true;
      if (1 < local_b0) {
        iVar3 = wcscmp((wchar_t *)local_b8,local_c8);
        bVar17 = iVar3 == 0;
      }
    }
    else {
      bVar17 = local_c0 + local_b0 == 1;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar4);
    }
    if (!bVar17) {
      if (!bVar2) {
        if (0x7ffffffd < local_b0 - 3U) goto LAB_143767b7d;
        FUN_140056680(&local_c8,(wchar_t *)(local_b8.QuadPart + (ulonglong)(local_b0 - 1) * 2) + -1)
        ;
        iVar3 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar3 = 0;
        }
        LVar8.QuadPart = (LONGLONG)&DAT_149dfb77a;
        if (local_b0 != 0) {
          LVar8 = local_b8;
        }
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        FUN_14006620a(&local_d8,LVar8.QuadPart,iVar3 + -1);
        pwVar4 = L"";
        if (local_c0 != 0) {
          pwVar4 = local_c8;
        }
        lVar9 = 0;
        while( true ) {
          uVar6 = *(ushort *)((longlong)pwVar4 + lVar9);
          uVar7 = (ulonglong)uVar6;
          uVar13 = *(ushort *)((longlong)&DAT_149e25cf8 + lVar9);
          if (uVar6 != uVar13) break;
          if (uVar6 == 0) goto LAB_143767b39;
LAB_143767a30:
          lVar9 = lVar9 + 2;
        }
        if ((uVar13 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_143767a30;
        }
        if (uVar6 != uVar13) {
          lVar9 = 0;
          goto LAB_143767a68;
        }
LAB_143767b39:
        pwVar4 = L"";
        if (local_d0 != 0) {
          pwVar4 = local_d8;
        }
        dVar18 = _wtof(pwVar4);
        fVar20 = (float)dVar18;
        if (0.0 < fVar20) goto LAB_143767b5c;
        goto LAB_143767b5f;
      }
      LVar8.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if (local_b0 != 0) {
        LVar8 = local_b8;
      }
      FUN_140002266(&local_c8,&DAT_149f9c75e,LVar8.QuadPart);
      FUN_1400020e8(&local_a8,local_c8);
      goto LAB_143767b6e;
    }
    bVar11 = 1;
    goto LAB_143767b7d;
  }
  FUN_140ded26a(&local_a8);
  FUN_140ded312(&local_a8);
LAB_143767ccc:
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143767a68:
  uVar6 = *(ushort *)((longlong)pwVar4 + lVar9);
  uVar7 = (ulonglong)uVar6;
  uVar13 = *(ushort *)((longlong)&DAT_14aae61a2 + lVar9);
  if (uVar6 == uVar13) {
    if (uVar6 == 0) goto LAB_143767ba5;
LAB_143767a86:
    lVar9 = lVar9 + 2;
    goto LAB_143767a68;
  }
  if ((uVar13 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar14 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_143767a86;
  }
  if (uVar6 != uVar13) {
    lVar9 = 0;
    goto LAB_143767abe;
  }
LAB_143767ba5:
  pwVar4 = L"";
  if (local_d0 != 0) {
    pwVar4 = local_d8;
  }
  dVar18 = _wtof(pwVar4);
  fVar19 = (float)dVar18;
  if (0.0 < fVar19) {
    fVar19 = fVar19 + fVar21;
LAB_143767b5c:
    bVar2 = true;
  }
LAB_143767b5f:
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143767b6e:
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143767b7d:
  if ((wchar_t *)local_b8.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  puVar16 = puVar16 + 2;
  if ((bool)(bVar17 | puVar16 == puVar15)) goto LAB_143767bcf;
  goto LAB_1437678a3;
LAB_143767abe:
  uVar6 = *(ushort *)((longlong)pwVar4 + lVar9);
  uVar7 = (ulonglong)uVar6;
  uVar13 = *(ushort *)((longlong)&DAT_149fc3c34 + lVar9);
  if (uVar6 == uVar13) {
    if (uVar6 == 0) goto LAB_143767b0a;
LAB_143767ad8:
    lVar9 = lVar9 + 2;
    goto LAB_143767abe;
  }
  if ((uVar13 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar14 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_143767ad8;
  }
  if (uVar6 != uVar13) goto LAB_143767b5f;
LAB_143767b0a:
  pwVar4 = L"";
  if (local_d0 != 0) {
    pwVar4 = local_d8;
  }
  local_e0 = _wtoi64(pwVar4);
  if ((int)local_e0 != 0) {
    bVar2 = true;
  }
  goto LAB_143767b5f;
LAB_143767bcf:
  if ((bool)(bVar11 & DAT_14cb0d2b0 != 0)) {
    FUN_147d84d72(DAT_14cb0d2b0 + 0x1240);
    FUN_147d850a2(DAT_14cb0d2b0 + 0x1290);
  }
  else {
    FUN_140ded26a(&local_a8);
    FUN_140ded312(&local_a8);
    if (((DAT_14cb0d2b0 != 0) && (bVar2)) && ((int)uStack_a0 - 2U < 0x7fffffff)) {
      if ((int)local_e0 == 0) {
        if (0.0 < fVar20) {
          QueryPerformanceCounter(&local_b8);
          local_b8 = (LARGE_INTEGER)
                     ((double)fVar20 +
                     (((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8));
          iVar3 = local_b8.s.HighPart * 0x17 + local_b8.s.LowPart;
        }
        else {
          if (fVar19 <= 0.0) goto LAB_143767ccc;
          QueryPerformanceCounter(&local_b8);
          LVar8 = (LARGE_INTEGER)(double)fVar19;
          if ((double)LVar8 <=
              ((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8)
          goto LAB_143767ccc;
          iVar3 = LVar8.s.HighPart * 0x17 + LVar8.s.LowPart;
          local_b8 = LVar8;
        }
        plVar5 = (longlong *)FUN_147d857c6(DAT_14cb0d2b0 + 0x1290,iVar3,&local_b8);
      }
      else {
        local_b8.s.LowPart = (int)local_e0 + (int)DAT_14c872be0;
        plVar5 = (longlong *)FUN_147d853ee(DAT_14cb0d2b0 + 0x1240);
      }
      iVar3 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(plVar5,iVar3);
      }
      pvVar1 = local_a8;
      lVar9 = *plVar5;
      lVar10 = (longlong)iVar3 * 0x10;
      puVar16 = (undefined8 *)(lVar9 + lVar10);
      *(undefined8 *)(lVar9 + lVar10) = 0;
      lVar12 = (longlong)(int)uStack_a0;
      *(int *)(lVar9 + 8 + lVar10) = (int)uStack_a0;
      if (lVar12 == 0) {
        *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar16,uStack_a0 & 0xffffffff,0);
        memcpy((void *)*puVar16,pvVar1,lVar12 * 2);
      }
    }
  }
  goto LAB_143767ccc;
}



// FUNCTION 143767e59 FUN_143767e59 body=69 status=ok
// SIG undefined FUN_143767e59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767e59(void)

{
  _DAT_14cb0d168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143767e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d170,1);
  return;
}



// FUNCTION 143767eaa FUN_143767eaa body=29 status=ok
// SIG undefined FUN_143767eaa(void)

undefined8 FUN_143767eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143767ec7 FUN_143767ec7 body=69 status=ok
// SIG undefined FUN_143767ec7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767ec7(void)

{
  _DAT_14cb0d198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143767f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d1a0,1);
  return;
}



// FUNCTION 143767f0c FUN_143767f0c body=69 status=ok
// SIG undefined FUN_143767f0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767f0c(void)

{
  _DAT_14cb0d1b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143767f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d1c0,1);
  return;
}



// FUNCTION 143767f51 FUN_143767f51 body=69 status=ok
// SIG undefined FUN_143767f51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767f51(void)

{
  _DAT_14cb0d1d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143767f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d1e0,1);
  return;
}



// FUNCTION 143767f96 FUN_143767f96 body=69 status=ok
// SIG undefined FUN_143767f96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143767f96(void)

{
  _DAT_14cb0d1f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143767fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d200,1);
  return;
}



// FUNCTION 143767fdc FUN_143767fdc body=2577 status=ok
// SIG undefined FUN_143767fdc(void)

void FUN_143767fdc(longlong param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auVar10 [4];
  undefined4 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  byte bVar20;
  undefined8 *puVar21;
  wchar_t *_Dest;
  bool bVar22;
  undefined1 auStack_418 [32];
  undefined8 *local_3f8;
  float local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e0;
  float local_3d8;
  float local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  char **local_3b8;
  undefined4 local_3b0;
  longlong local_3a0;
  char *local_398;
  longlong lStack_390;
  undefined8 local_388;
  char **local_380;
  undefined4 local_378;
  char *local_370;
  longlong lStack_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined1 local_354 [8];
  undefined4 local_34c;
  undefined8 uStack_345;
  undefined4 uStack_33d;
  byte bStack_339;
  longlong *local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined2 local_324;
  undefined1 local_278 [16];
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [7];
  undefined1 auStack_249 [5];
  undefined1 auStack_244 [3];
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  undefined8 local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  undefined5 uStack_19c;
  undefined8 uStack_197;
  undefined1 local_188 [8];
  undefined1 auStack_180 [8];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_418;
  lVar12 = 0x15;
  do {
    *(undefined1 (*) [16])(local_354 + lVar12 + 7) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)&uStack_33d + lVar12) = 0xffffffff;
    (&bStack_339 + lVar12)[0] = 0;
    (&bStack_339 + lVar12)[1] = 0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xd5);
  local_264 = 0;
  local_278 = (undefined1  [16])0x0;
  local_268 = 0;
  local_260 = 0xffffffff;
  uStack_25c = 0xffffffff;
  uStack_258 = 0xffffffff;
  uStack_254 = 0xffffffff;
  _local_250 = 0;
  auStack_249._1_4_ = auStack_249._1_4_ & 0xffffff00;
  _auStack_244 = 0;
  auStack_241._1_3_ = 0;
  local_330 = 0;
  local_328 = 0xffffffff;
  local_324 = 0x900;
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar13 = _Dest + 0x1b;
  local_388 = param_4;
  local_338 = param_3;
  if ((wchar_t *)param_2[1] < pwVar13) {
    FUN_140023dd8(param_2,0x38);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar13 = _Dest + 0x1b;
  }
  *param_2 = (ulonglong)pwVar13;
  wcscpy(_Dest,L"RenderTexture_RenderThread");
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar21 + 0x23;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x120);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar21 + 0x23;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a217b50;
  memcpy(puVar21 + 2,&local_338,0xe8);
  puVar21[0x1f] = 0;
  puVar21[0x20] = CONCAT44(_auStack_244,auStack_249._1_4_);
  *(uint *)((longlong)puVar21 + 0x107) = CONCAT31(auStack_241._1_3_,auStack_241[0]);
  puVar21[0x22] = _Dest;
  lVar12 = 0x11;
  do {
    *(undefined8 *)(local_250 + lVar12 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar12 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar12) = 0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xd1);
  _local_178 = _local_178 & 0xffffff0000000000;
  lVar12 = 0xd9;
  do {
    *(undefined8 *)(local_250 + lVar12 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar12 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar12) = 0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x199);
  local_b0 = 0;
  local_80 = 0;
  local_78 = local_78 & 0xff;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = local_88 & 0xff00;
  lVar12 = 0x15;
  do {
    if (*(longlong *)(local_354 + lVar12 + 7) == 0) break;
    *(longlong *)(local_250 + lVar12 + 3) = *(longlong *)(local_354 + lVar12 + 7);
    bVar3 = *(byte *)((longlong)&local_338 + lVar12);
    bVar20 = bVar3 >> 2;
    auStack_241[lVar12 + 4] = bVar20;
    abStack_23c[lVar12] = bVar3 & 3;
    *(undefined4 *)(auStack_244 + lVar12 + 3) = *(undefined4 *)((longlong)&uStack_33d + lVar12);
    *(uint *)(auStack_249 + lVar12 + 4) = (uint)(&bStack_339)[lVar12];
    iVar2 = (int)local_178 + 1;
    bVar3 = bStack_174 | bVar20 == 2;
    _local_178 = CONCAT14(bVar3,iVar2);
    lVar7 = *(longlong *)((longlong)&uStack_345 + lVar12);
    if (lVar7 != 0) {
      local_b0 = 1;
      uVar8 = *(undefined8 *)(auStack_249 + lVar12 + 4);
      *(undefined8 *)(local_188 + lVar12 + 3) = *(undefined8 *)(local_250 + lVar12 + 3);
      *(undefined8 *)(auStack_180 + lVar12 + 3) = uVar8;
      *(undefined8 *)(local_178 + lVar12 + 3) = *(undefined8 *)(auStack_241 + lVar12 + 4);
      *(longlong *)(local_188 + lVar12 + 3) = lVar7;
    }
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xd5);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a8 = ZEXT816(0);
  auVar10 = local_178;
  if (0 < (longlong)(int)local_178) {
    memcpy(param_2 + 0x15,&local_238,(longlong)(int)local_178 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar10;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  uVar16 = 0;
  local_1e8 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  uStack_19f = 0;
  uStack_19c = 0;
  uStack_197 = 0;
  local_188 = (undefined1  [8])0x0;
  auStack_180 = (undefined1  [8])0x0;
  _local_178 = 0;
  local_170 = 1;
  uStack_168 = 0;
  FUN_144b0e33a(param_2,&local_238);
  local_208 = DAT_14c9c0d50;
  uStack_200 = DAT_14c9c0db0;
  local_1f8 = DAT_14c9c0d98;
  uVar8 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)DAT_14ca85550 * 8);
  uVar15 = FUN_1417ed4a6();
  FUN_1448e935e(uVar8,&local_370,uVar15,0);
  FUN_1417ed4a6();
  pcVar9 = local_370;
  local_3a0 = lStack_368;
  uVar15 = FUN_1460b15ce();
  FUN_1448e935e(uVar8,&local_370,uVar15,0);
  FUN_1460b15ce();
  local_398 = local_370;
  lStack_390 = lStack_368;
  local_238 = DAT_14ca94df8;
  if (pcVar9 != (char *)0x0) {
    lVar12 = (longlong)*(int *)(pcVar9 + 0xd4);
    uVar16 = *(ulonglong *)(*(longlong *)(*(longlong *)(local_3a0 + 8) + 0x50) + lVar12 * 8);
    if (uVar16 == 0) {
      uVar16 = FUN_1400bafc2(*(longlong *)(local_3a0 + 8),lVar12,1);
    }
  }
  uStack_230 = uVar16;
  if (local_398 == (char *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)
              (*(longlong *)(*(longlong *)(lStack_390 + 8) + 0x50) +
              (longlong)*(int *)(local_398 + 0xd4) * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(*(longlong *)(lStack_390 + 8),(longlong)*(int *)(local_398 + 0xd4),1);
    }
  }
  local_1e0 = 0;
  local_228 = lVar12;
  lVar12 = FUN_140028f18(param_2);
  if ((lVar12 != 0) && ((local_170 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_218;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_218._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_210;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_210._4_4_;
    *(undefined4 *)(param_2 + 0x33) = (undefined4)local_228;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_228._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_220;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_220._4_4_;
    param_2[0x31] = local_238;
    param_2[0x32] = uStack_230;
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar21 + 4;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x28);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar21 + 4;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar21;
    param_2[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a37d348;
    puVar21[2] = lVar12;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined1 *)((longlong)puVar21 + 0x1c) = 1;
  }
  local_370 = (char *)0xffffffffffffffff;
  lStack_368 = CONCAT44(lStack_368._4_4_,0xffffffff);
  local_360 = local_388;
  local_358 = 1;
  local_354 = (undefined1  [8])0x7000000000;
  local_34c = 0;
  uStack_345._5_1_ = 0;
  local_378 = 1;
  lVar12 = 0;
  local_380 = &local_370;
  FUN_144760590(param_2,&local_380,0);
  local_370 = DAT_14c9c0d80;
  if (local_398 != (char *)0x0) {
    lVar12 = *(longlong *)
              (*(longlong *)(*(longlong *)(lStack_390 + 8) + 0x50) +
              (longlong)*(int *)(local_398 + 0xd4) * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(*(longlong *)(lStack_390 + 8),(longlong)*(int *)(local_398 + 0xd4),1);
    }
  }
  local_3f8 = &local_388;
  FUN_147d839b3(param_2,&local_398,lVar12,&local_370);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x14);
  local_370 = "Renderer";
  lStack_368 = CONCAT35(lStack_368._5_3_,8);
  uVar11 = FUN_14001a6c0(&local_370,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar17 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar11);
  local_3f0 = (float)iVar4;
  local_3d8 = (float)iVar2;
  lStack_368 = local_3a0;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3f8 = (undefined8 *)CONCAT44(local_3f8._4_4_,local_3d8);
  local_3b0 = 1;
  local_3d0 = local_3f0;
  local_3c8 = uVar8;
  local_3c0 = uVar8;
  local_3b8 = &local_370;
  (**(code **)(*plVar17 + 0xd8))(plVar17,param_2,0,0);
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar21 + 2;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x18);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar21 + 2;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  lVar12 = (**(code **)(*param_3 + 8))(param_3);
  uVar5 = *(uint *)(lVar12 + 0x24);
  lVar12 = (**(code **)(*param_3 + 8))(param_3);
  uVar6 = *(uint *)(lVar12 + 0x28);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar21 + 5;
  }
  lVar12 = _local_250;
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  puVar21[2] = 0;
  *puVar21 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar21 + 3) = 0;
  *(float *)((longlong)puVar21 + 0x1c) = (float)uVar5;
  *(float *)(puVar21 + 4) = (float)uVar6;
  *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
  if (_local_250 != 0) {
    LOCK();
    puVar1 = (uint *)(_local_250 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(_local_250 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(_local_250 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar12;
        plVar17 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar17;
            LOCK();
            bVar22 = plVar17 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar22) {
              plVar17 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar22 = plVar19 != DAT_14ca843c8;
            plVar17 = plVar18;
            if (bVar22) {
              plVar19 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437689ee FUN_1437689ee body=429 status=ok
// SIG undefined FUN_1437689ee(void)

undefined8
FUN_1437689ee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,ulonglong param_6,ulonglong param_7,longlong *param_8,
             undefined8 param_9)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  undefined4 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_6 | param_7 | 0x119;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_5c = *(undefined8 *)(param_1 + 0xc);
  local_4e = 1;
  local_4c = 0xff00;
  local_54 = 0x20001;
  local_50 = 0x101;
  local_78 = 1;
  local_60 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_40 = L"EmulateStereoSwapchainImage";
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_4d = param_4;
  local_48 = FUN_1431edf91(local_80,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_88,&DAT_14ca85100,&local_80);
  iVar4 = (int)param_8[1];
  *(uint *)(param_8 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_8 + 0xc) < iVar4 + 1U) {
    FUN_14632596a(param_8,iVar4);
  }
  *(longlong *)(*param_8 + (longlong)iVar4 * 8) = local_88;
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  FUN_147d83ae0(param_9,param_8);
  if (local_88 != 0) {
    LOCK();
    puVar1 = (uint *)(local_88 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_88 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_88 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = local_88;
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
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143768b9c FUN_143768b9c body=69 status=ok
// SIG undefined FUN_143768b9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143768b9c(void)

{
  _DAT_14cb0d218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143768bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d220,1);
  return;
}



// FUNCTION 143768be1 FUN_143768be1 body=69 status=ok
// SIG undefined FUN_143768be1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143768be1(void)

{
  _DAT_14cb0d238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143768c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d240,1);
  return;
}



// FUNCTION 143768c4e FUN_143768c4e body=29 status=ok
// SIG undefined FUN_143768c4e(void)

undefined8 FUN_143768c4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143768c80 FUN_143768c80 body=85 status=ok
// SIG undefined FUN_143768c80(void)

void FUN_143768c80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae63b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6340;
  return;
}



// FUNCTION 143768cd6 FUN_143768cd6 body=85 status=ok
// SIG undefined FUN_143768cd6(void)

void FUN_143768cd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae63b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6340;
  return;
}



// FUNCTION 143768d2c FUN_143768d2c body=118 status=ok
// SIG undefined FUN_143768d2c(void)

void FUN_143768d2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aae63b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6340;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143768d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143768da2 FUN_143768da2 body=70 status=ok
// SIG undefined FUN_143768da2(void)

undefined8
FUN_143768da2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_4;
  FUN_143768e32(param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143768dea FUN_143768dea body=70 status=ok
// SIG undefined FUN_143768dea(void)

undefined8
FUN_143768dea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_4;
  FUN_143768e32(param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143768e32 FUN_143768e32 body=227 status=ok
// SIG undefined FUN_143768e32(void)

void FUN_143768e32(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_41;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  if (lVar3 != 0) {
    lVar5 = FUN_1413dbcfa();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (lVar6 = lVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
       == lVar5 + 0x30)) goto LAB_143768e7f;
  }
  lVar6 = 0;
LAB_143768e7f:
  uVar4 = *param_1;
  FUN_147bd6d0c(*(undefined8 *)(*(longlong *)(lVar6 + 0x130) + 0x58),&local_40,uVar4);
  local_60 = &local_41;
  local_41 = 0;
  local_68 = param_1[1];
  local_58 = 0;
  FUN_147ce19a8(local_40,uVar4,param_2,lVar3);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143768f16 FUN_143768f16 body=277 status=ok
// SIG undefined FUN_143768f16(void)

longlong FUN_143768f16(longlong param_1)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b47bc4;
      local_38 = &LAB_1478989f1;
      local_40 = &LAB_146391124;
      local_48 = L"Engine";
      local_50 = 0x10000000000;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) goto LAB_143768f5e;
  }
  param_1 = 0;
LAB_143768f5e:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1 + 0x3b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376903c FUN_14376903c body=277 status=ok
// SIG undefined FUN_14376903c(void)

longlong FUN_14376903c(longlong param_1)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cad3688 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144b223ce;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417963e0;
      local_38 = &LAB_147a2f4c9;
      local_40 = &LAB_1400ea6f8;
      local_48 = L"Engine";
      local_50 = 0x200000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) goto LAB_143769084;
  }
  param_1 = 0;
LAB_143769084:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1 + 0x6e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769152 FUN_143769152 body=1163 status=ok
// SIG undefined FUN_143769152(void)

void FUN_143769152(undefined8 *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = L"ActorLocatorFragment";
  local_70 = 0x14;
  FUN_1446e940c(&local_50,&local_78);
  local_78 = L"Engine";
  local_70 = 6;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Actor";
  local_70 = 5;
  FUN_140208c1e(&local_88,&local_98,&local_50,&local_78);
  local_78 = L"actor";
  local_70 = 5;
  local_6c = 0;
  uVar3 = FUN_14001a6c0(&local_78,1);
  pwVar2 = local_88;
  local_68 = (ulonglong)uVar3;
  local_78 = local_88;
  if (local_88 == (wchar_t *)0x0) {
    local_70 = local_80;
    local_60 = 0;
    local_58 = 0;
  }
  else {
    (**(code **)(*(longlong *)local_88 + 8))(local_88);
    local_70 = local_80;
    local_60 = 0;
    local_58 = 0;
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  local_50 = "Actor";
  local_48 = 5;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_60 = (ulonglong)uVar3;
  FUN_1460d94da(*param_1,&local_50);
  DAT_14cb0cab8 = local_50._0_1_;
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  local_78 = L"AssetLocatorFragment";
  local_70 = 0x14;
  FUN_1446e940c(&local_50,&local_78);
  local_78 = L"Engine";
  local_70 = 6;
  FUN_1446e940c(&local_a8,&local_78);
  local_78 = L"Asset";
  local_70 = 5;
  FUN_140208c1e(&local_98,&local_a8,&local_50,&local_78);
  local_78 = L"asset";
  local_70 = 5;
  local_6c = 0;
  uVar3 = FUN_14001a6c0(&local_78,1);
  pwVar2 = local_98;
  uVar5 = (ulonglong)uVar3;
  local_78 = local_98;
  if (local_98 == (wchar_t *)0x0) {
    local_70 = local_90;
    local_60 = 0;
    local_58 = 0;
    local_68 = uVar5;
  }
  else {
    (**(code **)(*(longlong *)local_98 + 8))(local_98);
    local_70 = local_90;
    local_60 = 0;
    local_58 = 0;
    local_68 = uVar5;
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
  }
  local_50 = "Asset";
  local_48 = 5;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_60 = (ulonglong)uVar3;
  local_58 = 1;
  FUN_1460d961c(*param_1,&local_50);
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  local_78 = L"AnimInstanceLocatorFragment";
  local_70 = 0x1b;
  FUN_1446e940c(&local_50,&local_78);
  local_78 = L"Engine";
  local_70 = 6;
  FUN_1446e940c(local_ac,&local_78);
  local_78 = L"AnimInstance";
  local_70 = 0xc;
  FUN_140208c1e(&local_a8,local_ac,&local_50,&local_78);
  local_78 = L"animinst";
  local_70 = 8;
  local_6c = 0;
  uVar3 = FUN_14001a6c0(&local_78,1);
  pwVar2 = local_a8;
  uVar5 = (ulonglong)uVar3;
  local_78 = local_a8;
  if (local_a8 == (wchar_t *)0x0) {
    local_70 = local_a0;
    local_60 = 0;
    local_58 = 0;
    local_68 = uVar5;
  }
  else {
    (**(code **)(*(longlong *)local_a8 + 8))(local_a8);
    local_70 = local_a0;
    local_60 = 0;
    local_58 = 0;
    local_68 = uVar5;
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  local_50 = "AnimInstance";
  local_48 = 0xc;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  local_60 = (ulonglong)uVar3;
  FUN_1460d975e(*param_1,&local_50);
  DAT_14cb0cab9 = local_50._0_1_;
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  plVar1 = (longlong *)*param_1;
  uVar4 = FUN_140522a3e();
  (**(code **)(*plVar1 + 0x50))(plVar1,&local_78,uVar4);
  DAT_14cb0caba = local_78._0_1_;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769608 FUN_143769608 body=29 status=ok
// SIG undefined FUN_143769608(void)

undefined8 FUN_143769608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143769634 FUN_143769634 body=282 status=ok
// SIG undefined FUN_143769634(void)

undefined8 * FUN_143769634(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143768c26);
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



// FUNCTION 14376974e FUN_14376974e body=97 status=ok
// SIG undefined FUN_14376974e(void)

void FUN_14376974e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140eb1606(&DAT_14ca85100,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140eb1606(&DAT_14ca85100,0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014376978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437697b0 FUN_1437697b0 body=101 status=ok
// SIG undefined FUN_1437697b0(void)

void FUN_1437697b0(void)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  code *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_149e16f80;
  local_20 = FUN_143769816;
  local_48 = FUN_140d11fbe;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769816 FUN_143769816 body=154 status=ok
// SIG undefined FUN_143769816(void)

void FUN_143769816(void)

{
  longlong *plVar1;
  
  if (DAT_14cb0d2b0 != 0) {
    plVar1 = (longlong *)(DAT_14cb0d2b0 + 0x28);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014376986b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,0,L"r.Vt.Flush",&DAT_14c872ee0);
    return;
  }
  return;
}



// FUNCTION 1437698b0 FUN_1437698b0 body=84 status=ok
// SIG undefined FUN_1437698b0(void)

void FUN_1437698b0(longlong *param_1,undefined8 param_2)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2);
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001437698f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
    return;
  }
  return;
}



// FUNCTION 14376990e FUN_14376990e body=12 status=ok
// SIG undefined FUN_14376990e(void)

void FUN_14376990e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143769917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14376991a FUN_14376991a body=29 status=ok
// SIG undefined FUN_14376991a(void)

undefined8 FUN_14376991a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143769938 FUN_143769938 body=282 status=ok
// SIG undefined FUN_143769938(void)

undefined8 * FUN_143769938(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143768c26);
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



// FUNCTION 143769a52 FUN_143769a52 body=139 status=ok
// SIG undefined FUN_143769a52(void)

ulonglong FUN_143769a52(undefined8 *param_1)

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
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    uVar2 = (**(code **)(*(longlong *)param_1[0x15] + 8))((longlong *)param_1[0x15],&DAT_14ca85100);
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
    uVar2 = (**(code **)(*(longlong *)param_1[0x16] + 8))((longlong *)param_1[0x16],&DAT_14ca85100);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143769ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143769ade FUN_143769ade body=105 status=ok
// SIG undefined FUN_143769ade(void)

void FUN_143769ade(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) &&
     (((0 < *(int *)(lVar2 + 0x2f8) || (0 < *(int *)(lVar2 + 0x2e8))) ||
      ((*(byte *)(lVar2 + 0x157) & 1) != 0)))) {
    lVar3 = *param_1;
    iVar1 = *(int *)(lVar3 + 0x88);
    *(uint *)(lVar3 + 0x88) = iVar1 + 1U;
    if (*(uint *)(lVar3 + 0x8c) < iVar1 + 1U) {
      FUN_1417f6da8(lVar3,iVar1);
    }
    lVar4 = *(longlong *)(lVar3 + 0x80);
    if (*(longlong *)(lVar3 + 0x80) == 0) {
      lVar4 = lVar3;
    }
    *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 143769b58 FUN_143769b58 body=31 status=ok
// SIG undefined FUN_143769b58(void)

undefined8 FUN_143769b58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143769b78 FUN_143769b78 body=31 status=ok
// SIG undefined FUN_143769b78(void)

undefined8 FUN_143769b78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143769b98 FUN_143769b98 body=227 status=ok
// SIG undefined FUN_143769b98(void)

longlong FUN_143769b98(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14640a91c(DAT_14c951640,param_1);
  *(undefined1 *)(lVar3 + 0x30) = 1;
  *(undefined8 *)(lVar3 + 0x140) = param_2;
  *(undefined4 *)(lVar3 + 0x13c) = param_3;
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_30);
  FUN_14588f37a(lVar3 + 0x148,local_30);
  FUN_14588f37a(lVar3 + 0x158,local_30 + 0x10);
  *(undefined4 *)(lVar3 + 0x168) = *(undefined4 *)(local_30 + 0x20);
  FUN_14588f44c(lVar3 + 0x170,local_30 + 0x28);
  *(undefined1 *)(lVar3 + 0x180) = *(undefined1 *)(local_30 + 0x38);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769c7c FUN_143769c7c body=242 status=ok
// SIG undefined FUN_143769c7c(void)

undefined8 FUN_143769c7c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (*plVar1 == 0) {
    local_40 = "Regular";
    local_38 = 7;
    local_34 = 0;
    uVar3 = FUN_14001a6c0(&local_40,1);
    local_40 = "DefaultRegularFont";
    local_38 = 0x12;
    local_34 = 0;
    uVar4 = FUN_14001a6c0(&local_40,1);
    lVar5 = FUN_143769b98(uVar4,uVar3,10);
    lVar2 = *plVar1;
    if (lVar5 == 0) {
      if (lVar2 == 0) goto LAB_143769d47;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
    }
    else {
      if (lVar2 == lVar5) goto LAB_143769d47;
      if ((lVar2 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar5);
    }
    *plVar1 = lVar5;
  }
LAB_143769d47:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769d70 FUN_143769d70 body=25 status=ok
// SIG undefined FUN_143769d70(void)

void FUN_143769d70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143769d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 143769d8a FUN_143769d8a body=29 status=ok
// SIG undefined FUN_143769d8a(void)

undefined8 FUN_143769d8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143769da8 FUN_143769da8 body=145 status=ok
// SIG undefined FUN_143769da8(void)

void FUN_143769da8(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  if ((ulonglong)DAT_14cb0d020 < 3) {
    uVar3 = 2;
  }
  else {
    iVar2 = DAT_14cb0d024 - DAT_14cb0d020;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(DAT_14cb0d024 * 2) <= (int)(DAT_14cb0d020 * 3)) {
        return;
      }
    }
    else if (iVar2 < 0x41) {
      return;
    }
    uVar3 = DAT_14cb0d020;
    if (0 < (int)DAT_14cb0d020) {
      uVar1 = FUN_144a3809e((ulonglong)DAT_14cb0d020 << 3,0);
      uVar3 = (uint)(uVar1 >> 3);
    }
  }
  if (uVar3 == DAT_14cb0d024) {
    return;
  }
  DAT_14cb0d024 = uVar3;
  FUN_147d8728e(DAT_14cb0d020);
  return;
}



// FUNCTION 143769e3a FUN_143769e3a body=145 status=ok
// SIG undefined FUN_143769e3a(void)

void FUN_143769e3a(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  if ((ulonglong)DAT_14cb0d048 < 4) {
    uVar3 = 3;
  }
  else {
    iVar2 = DAT_14cb0d04c - DAT_14cb0d048;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(DAT_14cb0d04c * 2) <= (int)(DAT_14cb0d048 * 3)) {
        return;
      }
    }
    else if (iVar2 < 0x41) {
      return;
    }
    uVar3 = DAT_14cb0d048;
    if (0 < (int)DAT_14cb0d048) {
      uVar1 = FUN_144a3809e((ulonglong)DAT_14cb0d048 << 3,0);
      uVar3 = (uint)(uVar1 >> 3);
    }
  }
  if (uVar3 == DAT_14cb0d04c) {
    return;
  }
  DAT_14cb0d04c = uVar3;
  FUN_147d87388(DAT_14cb0d048);
  return;
}



// FUNCTION 143769ecc FUN_143769ecc body=173 status=ok
// SIG undefined FUN_143769ecc(void)

void FUN_143769ecc(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_143769f63;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143769f63:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143769f7a FUN_143769f7a body=83 status=ok
// SIG undefined FUN_143769f7a(void)

void FUN_143769f7a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143769fce FUN_143769fce body=282 status=ok
// SIG undefined FUN_143769fce(void)

undefined8 * FUN_143769fce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143768c26);
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



// FUNCTION 14376a0e8 FUN_14376a0e8 body=173 status=ok
// SIG undefined FUN_14376a0e8(void)

void FUN_14376a0e8(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,5);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,5);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 14376a1aa FUN_14376a1aa body=158 status=ok
// SIG undefined FUN_14376a1aa(void)

void FUN_14376a1aa(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  (**(code **)(*DAT_14ca83900 + 0x328))();
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,7);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376a24a FUN_14376a24a body=282 status=ok
// SIG undefined FUN_14376a24a(void)

undefined8 * FUN_14376a24a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143768c26);
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



// FUNCTION 14376a364 FUN_14376a364 body=329 status=ok
// SIG undefined FUN_14376a364(void)

void FUN_14376a364(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    (**(code **)(*DAT_14ca83900 + 0x328))();
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    (**(code **)(*DAT_14ca83900 + 0x328))();
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376a4c6 FUN_14376a4c6 body=371 status=ok
// SIG undefined FUN_14376a4c6(void)

void FUN_14376a4c6(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  ulonglong *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*plVar1 + (longlong)iVar5 * 0x18) == local_28) goto LAB_14376a61e;
        iVar5 = *(int *)(*plVar1 + (longlong)iVar5 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  plVar3 = *(longlong **)(param_1[1] + 0x18);
  if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    uVar2 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar4 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)(*plVar3 + (longlong)iVar5 * 0x18) == local_28) goto LAB_14376a61e;
        iVar5 = *(int *)(*plVar3 + (longlong)iVar5 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_18 = &local_30;
  local_30 = 0;
  local_20 = &local_28;
  FUN_14092eb9e(plVar1,local_c,&local_20,0);
LAB_14376a61e:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376a63a FUN_14376a63a body=3330 status=ok
// SIG undefined FUN_14376a63a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14376a63a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  int local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_38,&DAT_14cb0cabc);
  if (cVar2 == '\0') {
    _DAT_14cb0cabc = 0;
    uRam000000014cb0cac4 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = &DAT_14a19662d;
  local_30 = 4;
  local_2c = 0;
  FUN_14001a6c0(&local_38,1);
  local_38 = "SMInstance";
  local_30 = 10;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb0cad0 = (ulonglong)uVar3;
  local_38 = "AssetRegistry";
  local_30 = 0xd;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb0cad8 = (ulonglong)uVar3;
  local_38 = (char *)((ulonglong)local_38 & 0xffffffffffffff00);
  local_48 = 0;
  FUN_140bd5914(&DAT_14cb0cae0,L"r.gbx.PSOPrecacheRemainingMessage",&local_38,
                L"If True, it will display top left PSO Precache remaining count.");
  atexit(FUN_1437522c4);
  local_38 = (char *)0x8000000149e2b68a;
  local_24 = 6;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14640970e(&local_38);
  _DAT_14cb0d27c = 0;
  DAT_14cb0d284 = 2;
  DAT_14cb0d288 = 0;
  local_38._0_4_ = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0cb20,L"r.OneFrameThreadLag",&local_38,
                L"Whether to allow the rendering thread to lag one frame behind the game thread (0: disabled, otherwise enabled)"
               );
  atexit(FUN_143752309);
  local_38._0_4_ = 0;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0cb38,L"r.GTSyncType",&local_38,
                L"Determines how the game thread syncs with the render thread, RHI thread and GPU.\nSyncing to the GPU swap chain flip allows for lower frame latency.\n <= 0 - Sync the game thread with the N-1 render thread frame. Then sync with the N-m RHI thread frame where m is (2 + (-r.GTSyncType)) (i.e. negative values increase the amount of RHI thread overlap) (default = 0).\n    1 - Sync the game thread with the N-1 RHI thread frame.\n    2 - Sync the game thread with the GPU swap chain flip (only on supported platforms).\n"
               );
  atexit(FUN_14375234e);
  local_48 = 0;
  FUN_1463e9db8(&DAT_14cb0cb50,L"r.SetRes",L"1280x720w",
                L"Set the display resolution for the current game view. Has no effect in the editor.\ne.g. 1280x720w for windowed\n     1920x1080f for fullscreen\n     1920x1080wf for windowed fullscreen\n"
               );
  atexit(FUN_143752393);
  local_38._0_4_ = 0;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cb0cb60,L"r.DynamicRes.OperationMode",&local_38,
                L"Select the operation mode for dynamic resolution.\n 0: Disabled (default);\n 1: Enable according to the game user settings;\n 2: Enable regardless of the game user settings."
               );
  atexit(FUN_1437523d8);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0cb80,L"Engine.SupressWarningsInOnScreenDisplay",&DAT_14cb0cb78,
                L"0: Show both errors and warnings on screen, 1: Show only errors on screen (in either case only when DurationOfErrorsAndWarningsOnHUD is greater than zero)"
               );
  atexit(FUN_14375241d);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0cb98,L"Engine.DelayTrimMemoryDuringMapLoadMode",&DAT_14cb0cb90,
                L"0: TrimMemory during LoadMap as normal\n1: Delay TrimMemory until the end of LoadMap (initial boot up)\n2: Delay TrimMemory in _every_ LoadMap call"
               );
  atexit(FUN_143752462);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0cba8,L"Engine.FlushRTAndRHIBeforeGCInTrimMemory",&DAT_14c761e10,
                L"Flush Rendering and RHI before GC in trim memory in case there are some UStreamableRenderAssets with pending RenderAssetUpdate RHI tasks (default: 1)"
               );
  atexit(FUN_1437524a7);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0cbb8,L"Engine.VerifyLoadMapWorldCleanup.Severity.Shipping",&DAT_14c761e14,
                L"Controls severity of logging when the engine detects that a UWorld was leaked during LoadMap.\n0 - all reference tracing and logging is disabled\n1 - logs an error\n2 - ensure\n3 - fatal error\n"
               );
  atexit(FUN_1437524ec);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0cbc8,L"Engine.VerifyLoadMapWorldCleanup.TraceMode.Shipping",&DAT_14cb0cbd8
                ,
                L"Controls detail level of reference tracing when the engine detects that a world was leaked during LoadMap.\n0 - direct references only\n1 - full reference trace"
               );
  atexit(FUN_143752531);
  DAT_14cb0cbf4 = 0;
  _DAT_14cb0cbf8 = 0xffffffff;
  DAT_14cb0cc00 = 4;
  _DAT_14cb0cc04 = 0xffffffffffffffff;
  _DAT_14cb0cc0c = 0xbf800000bf800000;
  _DAT_14cb0cc18 = &DAT_3f8000003f800000;
  _DAT_14cb0cc20 = 0;
  _DAT_14cb0cc28 = 0;
  _DAT_14cb0cc2c = 0xffffffff;
  DAT_14cb0ce18 = 0;
  DAT_14cb0ce20 = 0;
  _DAT_14cb0ce28 = 0;
  _DAT_14cb0ce30 = 2;
  atexit(FUN_143752576);
  local_48 = 0;
  FUN_141471170(&DAT_14cb0ce40,L"gc.PerformGCWhileAsyncLoading",&DAT_14cb0ce38,
                L"Allow performing GC even if there\'s async loading in progress.");
  atexit(FUN_1437525a7);
  local_38._0_4_ = 0;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0ce50,L"gc.CollectGarbageEveryFrame",&local_38,
                L"Used to debug garbage collection...Collects garbage every N frames if the value is > 0."
               );
  atexit(FUN_1437525ec);
  local_38 = (char *)((ulonglong)local_38._4_4_ << 0x20);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0ce68,L"gc.ContinuousIncrementalGC",&local_38,
                L"Used to debug garbage collection...Kicks off Incremental Garbage Collection as soon as the previous one finishes."
               );
  atexit(FUN_143752631);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0ce80,L"gc.TimeBetweenPurgingPendingKillObjects",&DAT_14c761e20,
                L"Time in seconds (game time) we should wait between purging object references to objects that are pending kill."
               );
  atexit(FUN_143752676);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0ce90,L"gc.TimeBetweenPurgingPendingKillObjectsOnIdleServerMultiplier",
                &DAT_14c761e24,
                L"Multiplier to apply to time between purging pending kill objects when on an idle server."
               );
  atexit(FUN_1437526bb);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0cea0,L"gc.LowMemory.TimeBetweenPurgingPendingKillObjects",&DAT_14c761e28,
                L"Time in seconds (game time) we should wait between purging object references to objects that are pending kill when we\'re low on memory"
               );
  atexit(FUN_143752700);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0ceb0,L"gc.LowMemory.TimeBetweenPurgingPendingLevels",&DAT_14c761e2c,
                L"Time in seconds (game time) we should wait between GC when we\'re low on memory and there are levels pending unload"
               );
  atexit(FUN_143752745);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0cec0,L"gc.LowMemory.MemoryThresholdMB",&DAT_14cb0ced0,
                L"Memory threshold for low memory GC mode, in MB");
  atexit(FUN_14375278a);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0ced8,L"gc.LowMemory.IncrementalGCTimePerFrame",&DAT_14c761e30,
                L"How much time is allowed for incremental GC each frame in seconds if memory is low"
               );
  atexit(FUN_1437527cf);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb0cee8,L"gc.IncrementalGCTimePerFrame",&DAT_14c761e34,
                L"How much time is allowed for incremental GC each frame in seconds");
  atexit(FUN_143752814);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
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
  *(longlong *)((longlong)local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(undefined1 **)((longlong)local_38 + 0x18) = &LAB_1437586cc;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14cb0cf10,L"CustomTimeStep.reset",L"Resets the current custom step.",&local_38)
  ;
  if (local_30 == 0) {
LAB_14376ac98:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_14376ac98;
  }
  atexit(FUN_1437586d8);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
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
  *(longlong *)((longlong)local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(undefined1 **)((longlong)local_38 + 0x18) = &LAB_14375871d;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14cb0cf20,L"TimecodeProvider.reset",L"Resets the current timecode provider.",
                &local_38);
  if (local_30 == 0) {
LAB_14376ad76:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_14376ad76;
  }
  atexit(FUN_143758729);
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  local_48 = 0;
  FUN_140a6b41e(&DAT_14cb0cf80,L"t.MaxFPS",&local_38,
                L"Caps FPS to the given value.  Set to <= 0 to be uncapped.");
  atexit(FUN_14375d2bf);
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0cf98,L"CauseHitches",&local_38,
                L"Causes a 200ms hitch every second. Size of the hitch is controlled by CauseHitchesHitchMS"
               );
  atexit(FUN_14375d304);
  local_38._0_4_ = 200;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0cfb0,L"CauseHitchesHitchMS",&local_38,
                L"Controls the size of the hitch caused by CauseHitches in ms.");
  atexit(FUN_14375d349);
  local_38._0_4_ = 0;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0cfc8,L"t.UnsteadyFPS",&local_38,
                L"Causes FPS to bounce around randomly in the 8-32 range.");
  atexit(FUN_14375d38e);
  DAT_14cb0d018 = 0;
  _DAT_14cb0d020 = 0x200000000;
  atexit((_func_5014 *)&LAB_14375da68);
  DAT_14cb0d040 = 0;
  _DAT_14cb0d048 = 0x300000000;
  atexit((_func_5014 *)&LAB_14375da6d);
  DAT_14cb0d060 = 0;
  _DAT_14cb0d068 = 0;
  atexit((_func_5014 *)&LAB_14375dffe);
  local_38 = (char *)((ulonglong)local_38._4_4_ << 0x20);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb0d078,L"DumpCopyPropertiesForUnrelatedObjects",&local_38,
                L"Dump the objects that are cross class copied");
  atexit(FUN_143765617);
  local_38._0_1_ = 1;
  local_48 = 1;
  FUN_140bd5914(&DAT_14cb0d090,L"cpfuo.AuditAggressiveReferenceReplacment",&local_38,
                L"Whether to audit and report on reference replacements that come from the aggressive replacement path.\n"
               );
  atexit(FUN_14376565c);
  local_38 = (char *)((ulonglong)local_38._1_7_ << 8);
  local_48 = 0;
  FUN_140bd5914(&DAT_14cb0d0a8,L"cpfuo.UseAggressiveReferenceReplacment",&local_38,
                L"Whether to aggressively replace references. This behavior is being deprecated but being left with the ability to toggle back on in case issues arise.\n"
               );
  atexit(FUN_1437656a1);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e001f0;
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
  *(longlong *)((longlong)local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_38 + 0x18) = FUN_143766d04;
  local_48 = 0;
  FUN_1415c7246(&DAT_14cb0d0c0,L"r.SetNearClipPlane",L"Set the near clipping plane (in cm)",
                &local_38);
  if (local_30 == 0) {
LAB_14376b030:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_14376b030;
  }
  atexit(FUN_143766d48);
  local_38 = (char *)CONCAT44(local_38._4_4_,1);
  local_48 = 0x24;
  FUN_14078dbce(&DAT_14cb0d0d0,L"r.HighQualityLightMaps",&local_38,
                L"If set to 1, allow high quality lightmaps which don\'t bake in direct lighting of stationary lights"
               );
  atexit(FUN_143766d8d);
  _DAT_14cb0d110 = 0;
  DAT_14cb0d108 = 0xffffffffffffffff;
  _DAT_14cb0d120 = 0;
  DAT_14cb0d118 = 0xffffffffffffffff;
  _DAT_14cb0d130 = 0;
  DAT_14cb0d128 = 0xffffffffffffffff;
  DAT_14cb0d140 = 0;
  DAT_14cb0d138 = 0xffffffffffffffff;
  DAT_14cb0d150 = 0;
  DAT_14cb0d148 = 0xffffffffffffffff;
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e001f0;
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
  *(longlong *)((longlong)local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_38 + 0x18) = FUN_143766e1b;
  local_48 = 0;
  FUN_1415c7246(&DAT_14cb0d158,L"SetThreadConfig",
                L"Sets a thread Priority and/or Affinity. A single arg of default resets all the thread Priorities and Affinities, otherwise [GT|RT|RHI|Task|TaskBP] both/either [TPri_type] [0x] sets the Priority and/or Affinity."
                ,&local_38);
  if (local_30 == 0) {
LAB_14376b190:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_14376b190;
  }
  atexit(FUN_143767795);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e001f0;
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
  *(longlong *)((longlong)local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_38 + 0x18) = FUN_1437677e1;
  local_48 = 0;
  FUN_1415c7246(&DAT_14cb0d168,L"DelayedCmd",
                L"Performs a console command after a delay specified in frames or seconds.\nUsage:\nTo open playground_p in 10 seconds: \'DelayedCmd 10s open Playground_P\'\nTo take a screenshot in 100 frames: \'DelayedCmd 100f screenshot\'\nTo take a screenshot 50 seconds after startup(based on GStartTime):  \'DelayedCmd 50z screenshot\'"
                ,&local_38);
  if (local_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_14376b27c;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14376b27c:
  atexit(FUN_143767e59);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376b351 FUN_14376b351 body=41 status=ok
// SIG undefined FUN_14376b351(void)

void FUN_14376b351(void)

{
  DAT_14cb0d320 = 0;
  if (DAT_14cb0d318 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6362e();
  return;
}



// FUNCTION 14376b37a FUN_14376b37a body=333 status=ok
// SIG undefined FUN_14376b37a(void)

undefined8
FUN_14376b37a(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,uint param_7,byte param_8,longlong param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if ((param_3 == (longlong *)0x0) &&
     (param_3 = (longlong *)FUN_147d89376(param_2,param_5), param_3 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x5c);
    *(undefined4 *)((longlong)param_3 + 0x5c) = param_6;
    *(uint *)(param_3 + 0xc) = (*(uint *)(param_3 + 0xc) & 0xfffffffd) + (uint)param_8 * 2;
    if ((param_9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    param_3[6] = param_9;
    param_7 = ~param_7 * 2 & 0x100 | param_7;
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)(param_5 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)((longlong)&DAT_14aae7658 + lVar4);
      if (uVar5 != uVar7) {
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_14376b423;
        }
        uVar3 = param_7 | 0x800;
        if (uVar5 != uVar7) {
          uVar3 = param_7;
        }
        goto LAB_14376b460;
      }
      if (uVar5 == 0) break;
LAB_14376b423:
      lVar4 = lVar4 + 2;
    }
    uVar3 = param_7 | 0x800;
LAB_14376b460:
    uVar2 = (**(code **)(*param_3 + 0x2a8))
                      (param_3,param_1,param_2,param_5,param_4,DAT_14c872be8,uVar3);
    *(undefined4 *)((longlong)param_3 + 0x5c) = uVar1;
  }
  return uVar2;
}



// FUNCTION 14376b4c8 FUN_14376b4c8 body=4310 status=ok
// SIG undefined FUN_14376b4c8(void)

/* WARNING: Removing unreachable block (ram,0x00014376be97) */
/* WARNING: Removing unreachable block (ram,0x00014376b855) */

ulonglong FUN_14376b4c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  wchar_t *pwVar18;
  undefined **ppuVar19;
  wchar_t *_Str2;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined ***unaff_R12;
  longlong **pplVar25;
  int iVar26;
  undefined1 auStack_2f8 [32];
  undefined **local_2d8;
  undefined8 *local_2d0;
  uint local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  undefined ***local_2a0;
  code *local_298;
  code *local_290;
  undefined **local_280;
  undefined8 *local_278;
  longlong *local_270;
  undefined **local_268;
  undefined8 local_260;
  longlong *local_258;
  longlong *local_250 [2];
  longlong local_240;
  int local_238;
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  longlong *local_228 [2];
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208 [2];
  longlong *local_1f8 [2];
  wchar_t *local_1e8;
  undefined8 uStack_1e0;
  undefined2 *local_1d8;
  int local_1d0;
  undefined **local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  longlong *local_1b0;
  wchar_t **local_1a8;
  ulonglong *local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined **local_188;
  undefined8 local_180;
  longlong local_140;
  undefined4 local_138;
  longlong *local_130;
  longlong local_110;
  void *local_e0;
  size_t local_d8;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  wchar_t *local_80;
  undefined8 local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  puVar21 = (undefined8 *)(param_1 + 0x38);
  uVar11 = (ulonglong)(*(int *)(param_1 + 0x40) - 1);
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar11 = 0;
  }
  FUN_1402980a2(&DAT_14cb0d2c8,*(undefined8 *)(param_1 + 0x38),uVar11);
  plVar16 = *(longlong **)(param_1 + 0x30);
  FUN_144a06df0(&local_1c8,puVar21,0);
  if (plVar16 == (longlong *)0x0) {
    unaff_R12 = &local_188;
    uVar9 = 0;
    local_278 = puVar21;
    do {
      local_2d0 = (undefined8 *)CONCAT44(local_2d0._4_4_,uVar9);
      local_2d8 = (undefined **)((ulonglong)local_2d8 & 0xffffffff00000000);
      iVar8 = FUN_1447ee042(&DAT_14cb0d2c8,&DAT_149e0635c,1,0);
      if (iVar8 == -1) {
        FUN_144750a86(*(undefined8 *)(param_1 + 0x28),&local_80,0,0);
        pwVar18 = L"";
        if ((int)local_78 != 0) {
          pwVar18 = local_80;
        }
        ppuVar19 = (undefined **)&DAT_149dfb77a;
        if (local_1c0 != 0) {
          ppuVar19 = local_1c8;
        }
        FUN_140002266(&local_188,L"No %s exporter found for %s",ppuVar19,pwVar18);
        iVar8 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar8 + 1U) {
          FUN_1447a1bd6((longlong *)(param_1 + 0x68),iVar8);
        }
        lVar4 = *(longlong *)(param_1 + 0x68);
        lVar20 = (longlong)iVar8 * 0x10;
        *(undefined8 *)(lVar4 + lVar20) = 0;
        *(undefined ***)(lVar4 + lVar20) = local_188;
        *(int *)(lVar4 + 8 + lVar20) = (int)local_180;
        *(undefined4 *)(lVar4 + 0xc + lVar20) = local_180._4_4_;
        local_198 = (undefined2 *)0x0;
        goto LAB_14376b862;
      }
      uVar22 = DAT_14cb0d2d0 - 1;
      puVar24 = DAT_14cb0d2c8;
      if (DAT_14cb0d2d0 == 0) {
        uVar22 = 0;
        puVar24 = &DAT_149dfb77a;
      }
      uVar9 = iVar8 + 1;
      uVar17 = uVar22;
      if ((int)uVar9 < (int)uVar22) {
        uVar17 = uVar9;
      }
      uVar11 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar11 = 0;
      }
      FUN_14006620a(unaff_R12,puVar24 + uVar11,uVar22 - (int)uVar11);
      if (local_1c8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_1c8 = local_188;
      local_1c0 = (int)local_180;
      local_1bc = local_180._4_4_;
      ppuVar19 = local_188;
      if ((int)local_180 == 0) {
        ppuVar19 = (undefined **)&DAT_149dfb77a;
      }
      plVar16 = (longlong *)FUN_147d89376(*(undefined8 *)(param_1 + 0x28),ppuVar19);
      puVar21 = local_278;
    } while (plVar16 == (longlong *)0x0);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 != 0) {
      lVar20 = plVar16[5];
      if ((lVar20 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar20);
LAB_14376b561:
        if (DAT_14c927740 == 0) {
          local_2a0 = &local_188;
          local_188 = (undefined **)FUN_1449e2820;
          local_290 = FUN_14081d0ea;
          local_298 = FUN_14081d0ea;
          local_2a8 = &LAB_146856450;
          local_2b0 = FUN_1427b121c;
          local_2b8 = L"Engine";
          local_2c0 = 0;
          local_2c8 = 0x10000021;
          local_2d0 = (undefined8 *)CONCAT44(local_2d0._4_4_,8);
          local_2d8 = (undefined **)CONCAT44(local_2d8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          if (DAT_14c927740 == 0) goto LAB_14376b57f;
        }
        if (*(int *)(lVar20 + 0x38) < *(int *)(DAT_14c927740 + 0x38)) goto LAB_14376b57f;
        lVar10 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
            DAT_14c927740 + 0x30) {
          lVar10 = lVar20;
        }
      }
      else {
        if (lVar20 != 0) goto LAB_14376b561;
LAB_14376b57f:
        lVar10 = 0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
          lVar10 + 0x30)) {
        local_188 = *(undefined ***)(lVar4 + 0x18);
        FUN_1400021e4(&local_188,&local_80);
        pwVar18 = L"";
        if ((int)local_78 != 0) {
          pwVar18 = local_80;
        }
        local_188 = (undefined **)plVar16[3];
        FUN_1400021e4(&local_188,&local_198);
        puVar24 = &DAT_149dfb77a;
        if (local_190 != 0) {
          puVar24 = local_198;
        }
        FUN_140002266(&local_188,
                      L"Chosen exporter \'%s\' does not support the exported object\'s class \'%s\'!"
                      ,puVar24,pwVar18);
        iVar8 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar8 + 1U) {
          FUN_1447a1bd6((longlong *)(param_1 + 0x68),iVar8);
        }
        lVar4 = *(longlong *)(param_1 + 0x68);
        lVar20 = (longlong)iVar8 * 0x10;
        *(undefined8 *)(lVar4 + lVar20) = 0;
        *(undefined ***)(lVar4 + lVar20) = local_188;
        *(int *)(lVar4 + 8 + lVar20) = (int)local_180;
        *(undefined4 *)(lVar4 + 0xc + lVar20) = local_180._4_4_;
LAB_14376b862:
        local_180 = 0;
        local_188 = (undefined **)0x0;
        if (local_198 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = 0;
        goto LAB_14376b881;
      }
    }
  }
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  plVar16[0xd] = param_1;
  *(uint *)(plVar16 + 0xc) =
       (*(uint *)(plVar16 + 0xc) & 0xfffffffd) + (uint)*(byte *)(param_1 + 0x48) * 2;
  cVar7 = FUN_14786c470(plVar16,param_1);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (cVar7 != '\0') goto LAB_14376b881;
  if ((*(byte *)(plVar16 + 0xc) & 1) == 0) {
    iVar8 = (**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(param_1 + 0x28));
    if (0 < iVar8) {
      local_270 = (longlong *)(param_1 + 0x68);
      iVar26 = 0;
      local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
      do {
        FUN_147d89b3e(&local_188);
        ppuVar19 = (undefined **)&DAT_149dfb77a;
        if (local_1c0 != 0) {
          ppuVar19 = local_1c8;
        }
        local_2d0 = (undefined8 *)CONCAT44(local_2d0._4_4_,iVar26);
        local_2d8 = DAT_14c872be8;
        local_2c8 = 0;
        cVar7 = (**(code **)(*plVar16 + 0x2c0))
                          (plVar16,*(undefined8 *)(param_1 + 0x28),ppuVar19,&local_188);
        pwVar18 = (wchar_t *)CONCAT71((int7)(uVar11 >> 8),1);
        if (cVar7 != '\0') {
          puVar24 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 0x40) != 0) {
            puVar24 = (undefined2 *)*puVar21;
          }
          local_2d0 = (undefined8 *)CONCAT44(local_2d0._4_4_,iVar8);
          local_2d8 = (undefined **)CONCAT44(local_2d8._4_4_,iVar26);
          uVar11 = (**(code **)(*plVar16 + 0x2d0))
                             (plVar16,&local_1d8,*(undefined8 *)(param_1 + 0x28),puVar24);
          if (*(char *)(param_1 + 0x49) == '\0') {
            local_1e8 = (wchar_t *)0x0;
            uStack_1e0 = 0;
            puVar24 = &DAT_149dfb77a;
            if (local_1d0 != 0) {
              puVar24 = local_1d8;
            }
            uVar11 = FUN_14158b496(&local_1e8,puVar24,0);
            pwVar18 = local_1e8;
            if ((char)uVar11 == '\0') {
LAB_14376ba64:
              if (*(char *)(param_1 + 0x4a) == '\x01') {
                local_268 = DAT_14c872be8;
                FUN_140009b9a(local_250,&local_1d8);
                local_80 = L"Overwrite";
                local_78._0_4_ = 9;
                FUN_1446e940c(local_22c,&local_80);
                local_80 = L"Core";
                local_78._0_4_ = 4;
                FUN_1446e940c(local_230,&local_80);
                local_80 = 
                L"The file \'{0}\' needs to be updated.  Do you want to overwrite the existing version?"
                ;
                local_78 = CONCAT44(local_78._4_4_,0x53);
                FUN_140208c1e(local_228,local_230,local_22c,&local_80);
                FUN_14023409e(&local_260,local_228,1);
                local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
                FUN_14023423e(local_70,local_250);
                local_1a0 = local_60;
                local_1a8 = &local_80;
                FUN_14010d304(&local_198,&local_1a8);
                local_1b8 = local_260;
                local_1b0 = local_258;
                if (local_258 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_258 + 1) = (int)local_258[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_1f8,&local_1b8,&local_198);
                FUN_14007f2db(local_198,local_190);
                if (local_198 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_70[0] != (longlong *)0x0) {
                  (**(code **)(*local_70[0] + 0x10))();
                }
                plVar13 = local_258;
                if (local_258 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_258 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*local_258)(local_258);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
                if (local_250[0] != (longlong *)0x0) {
                  (**(code **)(*local_250[0] + 0x10))();
                }
                uVar11 = (**(code **)(*local_268 + 0x58))(local_268,local_1f8);
                cVar7 = (char)uVar11;
                if (local_1f8[0] != (longlong *)0x0) {
                  uVar11 = (**(code **)(*local_1f8[0] + 0x10))();
                }
                if (local_228[0] != (longlong *)0x0) {
                  uVar11 = (**(code **)(*local_228[0] + 0x10))();
                }
                if (cVar7 == '\0') {
                  uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
                  local_280 = (undefined **)CONCAT44(local_280._4_4_,(int)uVar11);
                  bVar5 = false;
                  pwVar18 = local_1e8;
                  goto LAB_14376bcb0;
                }
              }
              bVar5 = true;
              pwVar18 = local_1e8;
            }
            else {
              if (local_d8 != (longlong)(int)uStack_1e0) goto LAB_14376ba64;
              uVar9 = memcmp(local_1e8,local_e0,(longlong)(int)uStack_1e0);
              uVar11 = (ulonglong)uVar9;
              if (uVar9 != 0) goto LAB_14376ba64;
              uVar11 = 0;
              local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
              bVar5 = false;
            }
LAB_14376bcb0:
            if (pwVar18 != (wchar_t *)0x0) {
              uVar11 = FUN_1400020a8(pwVar18);
            }
            if (bVar5) goto LAB_14376bcc5;
            pwVar18 = (wchar_t *)0x0;
          }
          else {
LAB_14376bcc5:
            if ((*(char *)(param_1 + 0x4d) == '\0') && (local_d8 == 0)) {
              local_280 = (undefined **)
                          CONCAT44(local_280._4_4_,(int)CONCAT71((int7)(uVar11 >> 8),1));
              pwVar18 = (wchar_t *)0x0;
            }
            else {
              uVar12 = FUN_14054d1d4();
              puVar24 = &DAT_149dfb77a;
              if (local_1d0 != 0) {
                puVar24 = local_1d8;
              }
              cVar7 = FUN_146810dee(&local_e0,puVar24,uVar12,0);
              pwVar18 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar18 >> 8),1);
              if (cVar7 == '\0') {
                puVar24 = &DAT_149dfb77a;
                if (local_1d0 != 0) {
                  puVar24 = local_1d8;
                }
                FUN_144750a86(*(undefined8 *)(param_1 + 0x28),&local_198,0,0);
                puVar23 = &DAT_149dfb77a;
                if (local_190 != 0) {
                  puVar23 = local_198;
                }
                FUN_140002266(&local_80,L"Error exporting %s: couldn\'t open file \'%s\'",puVar23,
                              puVar24);
                iVar3 = *(int *)(param_1 + 0x70);
                uVar9 = iVar3 + 1;
                *(uint *)(param_1 + 0x70) = uVar9;
                if (*(uint *)(param_1 + 0x74) < uVar9) {
                  FUN_1447a1bd6(local_270);
                }
                lVar4 = *local_270;
                lVar20 = (longlong)iVar3 * 0x10;
                *(undefined8 *)(lVar4 + lVar20) = 0;
                *(wchar_t **)(lVar4 + lVar20) = local_80;
                *(int *)(lVar4 + 8 + lVar20) = (int)local_78;
                *(undefined4 *)(lVar4 + 0xc + lVar20) = local_78._4_4_;
                local_78 = 0;
                local_80 = (wchar_t *)0x0;
                if (local_198 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                pwVar18 = (wchar_t *)0x0;
                local_280 = (undefined **)((ulonglong)local_280 & 0xffffffff00000000);
              }
            }
          }
          if (local_1d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_e0 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar13 = local_130;
        local_188 = &PTR__purecall_149e35f70;
        if (local_130 != (longlong *)0x0) {
          if (*local_130 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar13);
        }
        lVar4 = local_110;
        if (local_110 != 0) {
          if (*(longlong *)(local_110 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar4);
        }
        if ((char)pwVar18 == '\0') {
          uVar11 = (ulonglong)local_280 & 0xffffffff;
          break;
        }
        iVar26 = iVar26 + 1;
        uVar11 = CONCAT71((int7)((ulonglong)pwVar18 >> 8),1);
      } while (iVar8 != iVar26);
    }
    goto LAB_14376b881;
  }
  FUN_140bee914(&local_1d8,puVar21);
  if (((*(byte *)(plVar16 + 0xc) & 4) == 0) && (*(char *)(param_1 + 0x4c) != '\x01')) {
    plVar14 = (longlong *)0x0;
LAB_14376c007:
    plVar13 = (longlong *)FUN_14001cc68(0x20,0x10);
    FUN_140056680(plVar13 + 2,&DAT_149dfb77a);
    *(undefined2 *)(plVar13 + 1) = 0;
    *plVar13 = (longlong)&PTR_FUN_149e98010;
    plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar15[1] = (longlong)&DAT_100000001;
    *plVar15 = (longlong)&PTR_FUN_14aaf8fb0;
    plVar15[2] = (longlong)plVar13;
    if (plVar15 == plVar14) {
      if (plVar14 == (longlong *)0x0) {
        bVar5 = false;
        plVar14 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar2 = plVar15 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        bVar5 = false;
      }
    }
    else {
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
      bVar5 = false;
      plVar14 = plVar15;
    }
  }
  else {
    plVar13 = (longlong *)FUN_14054d1d4();
    puVar24 = &DAT_149dfb77a;
    if (local_1d0 != 0) {
      puVar24 = local_1d8;
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,puVar24,0);
    FUN_1400020e8(&local_1d8,L"/UnrealExportFile.tmp",0x15);
    plVar13 = (longlong *)FUN_14001cc68(0x880,0x10);
    local_c8[0] = 0;
    local_b8 = 0;
    puVar24 = &DAT_149dfb77a;
    if (local_1d0 != 0) {
      puVar24 = local_1d8;
    }
    local_2d0 = local_c8;
    local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,1);
    FUN_1427867de(plVar13,puVar24,0,0);
    plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar14[1] = (longlong)&DAT_100000001;
    *plVar14 = (longlong)&PTR_FUN_14aaf8f90;
    plVar14[2] = (longlong)plVar13;
    if (plVar13 == (longlong *)0x0) goto LAB_14376c007;
    *(undefined2 *)(plVar13 + 1) = 1;
    bVar5 = true;
  }
  FUN_147d89826(&local_188,param_1 + 0x50);
  local_2d8 = local_1c8;
  if (local_1c0 == 0) {
    local_2d8 = (undefined **)&DAT_149dfb77a;
  }
  local_2c0 = CONCAT71(local_2c0._1_7_,*(undefined1 *)(param_1 + 0x48));
  local_2b8 = (wchar_t *)0x0;
  local_2c8 = 4;
  local_2d0 = (undefined8 *)((ulonglong)local_2d0 & 0xffffffff00000000);
  FUN_14376b37a(&local_188,*(undefined8 *)(param_1 + 0x28),plVar16);
  if (bVar5) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
    plVar16 = (longlong *)FUN_14054d1d4();
    puVar24 = &DAT_149dfb77a;
    puVar23 = &DAT_149dfb77a;
    if (local_1d0 != 0) {
      puVar23 = local_1d8;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      puVar24 = (undefined2 *)*puVar21;
    }
    pplVar25 = (longlong **)0x0;
    local_2c8 = local_2c8 & 0xffffff00;
    local_2d0 = (undefined8 *)((ulonglong)local_2d0 & 0xffffffffffffff00);
    local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,1);
    (**(code **)(*plVar16 + 0x40))(plVar16,puVar24,puVar23,1);
  }
  else {
    pplVar25 = (longlong **)CONCAT71((int7)((ulonglong)&local_188 >> 8),1);
    if (1 < *(uint *)(plVar13 + 3)) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        local_1e8 = (wchar_t *)0x0;
        uStack_1e0 = 0;
        if (*(int *)(param_1 + 0x40) == 0) {
          puVar24 = &DAT_149dfb77a;
        }
        else {
          puVar24 = (undefined2 *)*puVar21;
        }
        cVar7 = FUN_140f7cb10(&local_1e8,puVar24,0);
        local_278 = puVar21;
        if (cVar7 == '\0') {
LAB_14376c20a:
          if (*(char *)(param_1 + 0x4a) == '\x01') {
            local_280 = DAT_14c872be8;
            FUN_140009b9a(local_208,local_278);
            local_80 = L"Overwrite";
            local_78._0_4_ = 9;
            FUN_1446e940c(local_22c,&local_80);
            local_80 = L"Core";
            local_78._0_4_ = 4;
            FUN_1446e940c(local_230,&local_80);
            local_80 = 
            L"The file \'{0}\' needs to be updated.  Do you want to overwrite the existing version?"
            ;
            local_78 = CONCAT44(local_78._4_4_,0x53);
            FUN_140208c1e(local_228,local_230,local_22c);
            FUN_14023409e(&local_218,local_228,1);
            local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
            FUN_14023423e(local_70,local_208);
            local_1a0 = local_60;
            local_1a8 = &local_80;
            FUN_14010d304(&local_198);
            local_1b8 = local_218;
            local_1b0 = local_210;
            if (local_210 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_210 + 1) = (int)local_210[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_1f8,&local_1b8,&local_198);
            FUN_14007f2db(local_198,local_190);
            if (local_198 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_70[0] != (longlong *)0x0) {
              (**(code **)(*local_70[0] + 0x10))();
            }
            if (local_210 != (longlong *)0x0) {
              LOCK();
              plVar16 = local_210 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*local_210)(local_210);
                LOCK();
                piVar1 = (int *)((longlong)local_210 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_210 + 0x10))(local_210);
                }
              }
            }
            if (local_208[0] != (longlong *)0x0) {
              (**(code **)(*local_208[0] + 0x10))();
            }
            pplVar25 = local_1f8;
            cVar7 = (**(code **)(*local_280 + 0x58))(local_280,pplVar25);
            if (local_1f8[0] != (longlong *)0x0) {
              (**(code **)(*local_1f8[0] + 0x10))();
            }
            if (local_228[0] != (longlong *)0x0) {
              (**(code **)(*local_228[0] + 0x10))();
            }
            if (cVar7 == '\0') goto LAB_14376c40e;
          }
          bVar6 = true;
          pplVar25 = (longlong **)0x0;
        }
        else {
          pwVar18 = L"";
          _Str2 = L"";
          if ((int)uStack_1e0 != 0) {
            _Str2 = local_1e8;
          }
          if ((int)plVar13[3] != 0) {
            pwVar18 = (wchar_t *)plVar13[2];
          }
          iVar8 = wcscmp(pwVar18,_Str2);
          if (iVar8 != 0) goto LAB_14376c20a;
LAB_14376c40e:
          pplVar25 = (longlong **)CONCAT71((int7)((ulonglong)pplVar25 >> 8),1);
          bVar6 = false;
        }
        if (local_1e8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        puVar21 = local_278;
        if (!bVar6) goto LAB_14376c481;
      }
      uVar12 = FUN_14054d1d4();
      if (*(int *)(param_1 + 0x40) == 0) {
        puVar24 = &DAT_149dfb77a;
      }
      else {
        puVar24 = (undefined2 *)*puVar21;
      }
      local_240 = plVar13[2];
      local_238 = (int)plVar13[3] + -1;
      if ((int)plVar13[3] == 0) {
        local_238 = 0;
      }
      local_2d8 = (undefined **)((ulonglong)local_2d8 & 0xffffffff00000000);
      uVar9 = FUN_1415d54ec(&local_240,puVar24,0,uVar12);
      pplVar25 = (longlong **)(ulonglong)uVar9;
    }
  }
LAB_14376c481:
  local_188 = &PTR_FUN_14aae7870;
  local_138 = 0;
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  FUN_147d9b188(&local_180);
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  uVar11 = CONCAT71((int7)((ulonglong)pplVar25 >> 8),(byte)pplVar25 & (bVar5 ^ 1U));
LAB_14376b881:
  if (local_1c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_14020fad6(&DAT_14cb0d2c8,&DAT_149dfb77a);
  if ((local_60[0] ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 14376c59f FUN_14376c59f body=82 status=ok
// SIG undefined FUN_14376c59f(void)

void FUN_14376c59f(void)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d89e96(local_20);
  if (local_20[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376c5ff FUN_14376c5ff body=49 status=ok
// SIG undefined FUN_14376c5ff(void)

void FUN_14376c5ff(void)

{
  FUN_144760e21(DAT_14cb0d328,DAT_14cb0d330);
  if (DAT_14cb0d328 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c630 FUN_14376c630 body=49 status=ok
// SIG undefined FUN_14376c630(void)

void FUN_14376c630(void)

{
  FUN_144760e21(DAT_14cb0d340,DAT_14cb0d348);
  if (DAT_14cb0d340 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c661 FUN_14376c661 body=49 status=ok
// SIG undefined FUN_14376c661(void)

void FUN_14376c661(void)

{
  FUN_144760e21(DAT_14cb0f1e8,DAT_14cb0f1f0);
  if (DAT_14cb0f1e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c692 FUN_14376c692 body=49 status=ok
// SIG undefined FUN_14376c692(void)

void FUN_14376c692(void)

{
  FUN_144760e21(DAT_14cb0f210,DAT_14cb0f218);
  if (DAT_14cb0f210 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c6c3 FUN_14376c6c3 body=49 status=ok
// SIG undefined FUN_14376c6c3(void)

void FUN_14376c6c3(void)

{
  FUN_144760e21(DAT_14cb0f238,DAT_14cb0f240);
  if (DAT_14cb0f238 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c6f4 FUN_14376c6f4 body=49 status=ok
// SIG undefined FUN_14376c6f4(void)

void FUN_14376c6f4(void)

{
  FUN_144760e21(DAT_14cb0d358,DAT_14cb0d360);
  if (DAT_14cb0d358 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c725 FUN_14376c725 body=91 status=ok
// SIG undefined FUN_14376c725(void)

void FUN_14376c725(void)

{
  if (DAT_14cb0f230 != 0) {
    if (DAT_14cb0f228 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb0f228)(DAT_14cb0f228,0);
    FUN_1446efa72(&DAT_14cb0f228,0,0,0x10);
    DAT_14cb0f230 = 0;
  }
  if (DAT_14cb0f228 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14376c780 FUN_14376c780 body=91 status=ok
// SIG undefined FUN_14376c780(void)

void FUN_14376c780(void)

{
  if (DAT_14cb0f208 != 0) {
    if (DAT_14cb0f200 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb0f200)(DAT_14cb0f200,0);
    FUN_1446efa72(&DAT_14cb0f200,0,0,0x10);
    DAT_14cb0f208 = 0;
  }
  if (DAT_14cb0f200 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14376c7db FUN_14376c7db body=49 status=ok
// SIG undefined FUN_14376c7db(void)

void FUN_14376c7db(void)

{
  FUN_144760e21(DAT_14cb0d370,DAT_14cb0d378);
  if (DAT_14cb0d370 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c80c FUN_14376c80c body=49 status=ok
// SIG undefined FUN_14376c80c(void)

void FUN_14376c80c(void)

{
  FUN_144760e21(DAT_14cb0d388,DAT_14cb0d390);
  if (DAT_14cb0d388 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c83d FUN_14376c83d body=49 status=ok
// SIG undefined FUN_14376c83d(void)

void FUN_14376c83d(void)

{
  FUN_144760e21(DAT_14cb0d3a0,DAT_14cb0d3a8);
  if (DAT_14cb0d3a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c86e FUN_14376c86e body=49 status=ok
// SIG undefined FUN_14376c86e(void)

void FUN_14376c86e(void)

{
  FUN_144760e21(DAT_14cb0d3b8,DAT_14cb0d3c0);
  if (DAT_14cb0d3b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c89f FUN_14376c89f body=49 status=ok
// SIG undefined FUN_14376c89f(void)

void FUN_14376c89f(void)

{
  FUN_144760e21(DAT_14cb0d3d0,DAT_14cb0d3d8);
  if (DAT_14cb0d3d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c8d0 FUN_14376c8d0 body=49 status=ok
// SIG undefined FUN_14376c8d0(void)

void FUN_14376c8d0(void)

{
  FUN_144760e21(DAT_14cb0f1b8,DAT_14cb0f1c0);
  if (DAT_14cb0f1b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c901 FUN_14376c901 body=49 status=ok
// SIG undefined FUN_14376c901(void)

void FUN_14376c901(void)

{
  FUN_144760e21(DAT_14cb0f1d0,DAT_14cb0f1d8);
  if (DAT_14cb0f1d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c932 FUN_14376c932 body=49 status=ok
// SIG undefined FUN_14376c932(void)

void FUN_14376c932(void)

{
  FUN_144760e21(DAT_14cb0d3e8,DAT_14cb0d3f0);
  if (DAT_14cb0d3e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c963 FUN_14376c963 body=49 status=ok
// SIG undefined FUN_14376c963(void)

void FUN_14376c963(void)

{
  FUN_144760e21(DAT_14cb0f1a0,DAT_14cb0f1a8);
  if (DAT_14cb0f1a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376c9e1 FUN_14376c9e1 body=49 status=ok
// SIG undefined FUN_14376c9e1(void)

void FUN_14376c9e1(void)

{
  FUN_144760e21(DAT_14cb0f0e8,DAT_14cb0f0f0);
  if (DAT_14cb0f0e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14376ca24 FUN_14376ca24 body=157 status=ok
// SIG undefined FUN_14376ca24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14376ca24(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  if ((void **)param_1 != &DAT_14cb0f100) {
    iVar1 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    _DAT_14cb0f108 = iVar1;
    if (iVar1 == 0 && DAT_14cb0f10c == 0) {
      DAT_14cb0f10c = 0;
    }
    else {
      FUN_1446dd670(&DAT_14cb0f100,iVar1);
      if (iVar1 != 0) {
        memcpy(DAT_14cb0f100,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  DAT_14cb0f110 = *(undefined1 *)(param_1 + 2);
  FUN_147d9ef0a();
  FUN_1411f311e(&DAT_14c86a930,&DAT_14cb0f100);
  return;
}



// FUNCTION 14376cac2 FUN_14376cac2 body=751 status=ok
// SIG undefined FUN_14376cac2(void)

undefined8 FUN_14376cac2(longlong *param_1,longlong param_2,undefined1 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 8;
  if (0 < (int)param_1[9]) {
    FUN_1408eddbe(param_1);
  }
  local_98 = param_2;
  FUN_140966f98(plVar1,param_2);
  *(undefined1 *)(param_1 + 10) = param_3;
  *(char *)((longlong)param_1 + 0x51) = (char)(param_4 & 0xffffffff);
  FUN_140967468(param_1,&local_58);
  uVar9 = 0;
  bVar10 = true;
LAB_14376cb33:
  puVar8 = local_58;
  if (uVar9 == 0) {
    local_68 = (void *)0x0;
    lVar6 = (longlong)local_50;
    local_60 = local_50;
    if (lVar6 == 0) {
      local_5c = 0;
      iVar4 = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,puVar8,lVar6 * 2);
      iVar4 = local_60;
    }
  }
  else {
    puVar8 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar8 = local_58;
    }
    FUN_140002266(&local_68,L"%s_%d",puVar8,uVar9 - 1);
    iVar4 = local_60;
  }
  _Src = local_68;
  local_90 = (undefined2 *)0x0;
  local_88 = iVar4;
  FUN_1446dd670(&local_90,(uint)(iVar4 == 0) + iVar4 + 4,0);
  if (iVar4 != 0) {
    memcpy(local_90,_Src,(longlong)iVar4 * 2);
  }
  FUN_1400020e8(&local_90,L"_MAX",4);
  puVar8 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar8 = local_90;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_80,puVar8);
  puVar8 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar8 = local_80;
  }
  FUN_1446f470e(&local_70,puVar8);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar4 = FUN_1448e5bf4(param_1,local_70);
  uVar3 = local_70;
  plVar5 = param_1;
  if ((iVar4 == -1) || (*(longlong *)(*plVar1 + 8 + (longlong)iVar4 * 0x10) == -1)) {
LAB_14376cca1:
    plVar7 = plVar5;
    plVar5 = plVar7;
    if ((longlong *)plVar7[4] != (longlong *)0x0) goto code_r0x00014376ccb0;
    goto LAB_14376ccc2;
  }
  goto LAB_14376ccdf;
code_r0x00014376ccb0:
  plVar5 = (longlong *)plVar7[4];
  if ((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0) goto LAB_14376cca1;
  plVar5 = (longlong *)FUN_142840154(plVar7);
LAB_14376ccc2:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)plVar7[4];
    goto LAB_14376cca1;
  }
  lVar6 = FUN_1409678c4(plVar5[3],uVar3,0,0);
  if (lVar6 == -1) {
    if (*(int *)(local_98 + 8) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_1404d8156(param_1);
      lVar6 = lVar6 + 1;
    }
    iVar4 = (int)param_1[9];
    *(uint *)(param_1 + 9) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar4 + 1U) {
      FUN_1409670d4(plVar1,iVar4);
    }
    lVar2 = param_1[8];
    *(undefined8 *)(lVar2 + (longlong)iVar4 * 0x10) = local_70;
    *(longlong *)(lVar2 + 8 + (longlong)iVar4 * 0x10) = lVar6;
    FUN_1409676c4(param_1);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14376cd07;
  }
LAB_14376ccdf:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  bVar10 = uVar9 < 0x3ff;
  uVar9 = uVar9 + 1;
  if (uVar9 == 0x400) {
LAB_14376cd07:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bVar10);
  }
  goto LAB_14376cb33;
}



// FUNCTION 14376cdb2 FUN_14376cdb2 body=55 status=ok
// SIG undefined FUN_14376cdb2(void)

void FUN_14376cdb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0db90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0db90 = FUN_14171c317(FUN_14640aaa1,uVar1,L"ERenderFocusRule");
  }
  return;
}



// FUNCTION 14376cde9 FUN_14376cde9 body=55 status=ok
// SIG undefined FUN_14376cde9(void)

void FUN_14376cde9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0dba8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0dba8 = FUN_14171c317(FUN_14640aad0,uVar1,L"EUIScalingRule");
  }
  return;
}



// FUNCTION 14376ce20 FUN_14376ce20 body=55 status=ok
// SIG undefined FUN_14376ce20(void)

void FUN_14376ce20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0dbc0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0dbc0 = FUN_14171c317(FUN_14640aaff,uVar1,L"EFontDPI");
  }
  return;
}



// FUNCTION 14376ce58 FUN_14376ce58 body=2159 status=ok
// SIG undefined FUN_14376ce58(void)

void FUN_14376ce58(undefined8 param_1,double param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double dVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong in_RDX;
  longlong *_Src;
  double *pdVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  double dVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  double dVar12;
  undefined1 auStack_a8 [32];
  int *local_88;
  double *local_80;
  undefined8 local_78;
  code *local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 uStack_50;
  longlong local_48;
  double local_40;
  int local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = (double *)0x0;
    local_88 = (int *)0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(in_RDX + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(in_RDX + 0x88);
    *(longlong *)(in_RDX + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(in_RDX + 0x28);
      *(longlong *)(in_RDX + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(in_RDX + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar8 = (*pcVar3)(plVar4), cVar8 == '\0')) {
          _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
          if (_Src != &local_48) {
            if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src,(int)plVar4[6]);
            }
            else {
              memcpy(&local_48,_Src,
                     (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = (double *)CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (int *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(in_RDX + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(in_RDX + 0x38) = puVar6[1];
      *(undefined8 *)(in_RDX + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(in_RDX + 0x18);
    *(byte **)(in_RDX + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,in_RDX,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,in_RDX,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(in_RDX + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,in_RDX,&local_48);
    }
  }
  dVar11 = 0.0;
  local_58 = 0.0;
  uStack_50 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) &&
     (dVar11 = (double)FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_140dafe7a;
    local_80 = (double *)0x0;
    local_88 = (int *)0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    dVar11 = (double)_Init_thread_footer(&DAT_14c963e88);
  }
  pbVar1 = *(byte **)(in_RDX + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(in_RDX + 0x88);
    *(longlong *)(in_RDX + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(in_RDX + 0x28);
      *(longlong *)(in_RDX + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(in_RDX + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          dVar11 = (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          if (cVar8 != '\0') {
            dVar11 = (double)(**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_14376d1e3;
          }
        }
        pdVar10 = (double *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (pdVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            dVar11 = (double)(**(code **)(*plVar4 + 0x100))(plVar4,&local_58,pdVar10,(int)plVar4[6])
            ;
          }
          else {
            memcpy(&local_58,pdVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
            dVar11 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = (double *)CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (int *)((ulonglong)local_88 & 0xffffffff00000000);
        dVar11 = (double)FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        dVar11 = (double)(*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(in_RDX + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(in_RDX + 0x38) = puVar6[1];
      *(undefined8 *)(in_RDX + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(in_RDX + 0x18);
    *(byte **)(in_RDX + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      dVar11 = (double)FUN_14002ddda(uVar2,in_RDX,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      dVar11 = (double)FUN_14002dfbe(uVar2,in_RDX,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(double *)(pbVar1 + 1);
      *(byte **)(in_RDX + 0x20) = pbVar1 + 9;
      dVar11 = local_58;
    }
    else {
      dVar11 = (double)(*pcVar3)(uVar2,in_RDX,&local_58);
    }
  }
LAB_14376d1e3:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) &&
     (dVar11 = (double)FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1403a682c;
    local_80 = (double *)0x0;
    local_88 = (int *)0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    dVar11 = (double)_Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(in_RDX + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(in_RDX + 0x88);
    *(longlong *)(in_RDX + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(in_RDX + 0x28);
      *(longlong *)(in_RDX + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(in_RDX + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          dVar11 = (double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
          if (cVar8 != '\0') {
            dVar11 = (double)(**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_68);
            goto LAB_14376d38e;
          }
        }
        pdVar10 = (double *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (pdVar10 != &local_68) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            dVar11 = (double)(**(code **)(*plVar4 + 0x100))(plVar4,&local_68,pdVar10,(int)plVar4[6])
            ;
          }
          else {
            memcpy(&local_68,pdVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
            dVar11 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = (double *)CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (int *)((ulonglong)local_88 & 0xffffffff00000000);
        dVar11 = (double)FUN_1400746b0(plVar4,&local_68,lVar5,1);
      }
      else {
        dVar11 = (double)(*pcVar3)(plVar4,&local_68,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(in_RDX + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(in_RDX + 0x38) = puVar6[1];
      *(undefined8 *)(in_RDX + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(in_RDX + 0x18);
    *(byte **)(in_RDX + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      dVar11 = (double)FUN_14002ddda(uVar2,in_RDX,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      dVar11 = (double)FUN_14002dfbe(uVar2,in_RDX,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(double *)(pbVar1 + 1);
      *(byte **)(in_RDX + 0x20) = pbVar1 + 9;
      dVar11 = local_68;
    }
    else {
      dVar11 = (double)(*pcVar3)(uVar2,in_RDX,&local_68);
    }
  }
LAB_14376d38e:
  *(ulonglong *)(in_RDX + 0x20) =
       (*(longlong *)(in_RDX + 0x20) + 1) - (ulonglong)(*(longlong *)(in_RDX + 0x20) == 0);
  dVar12 = DAT_14c8463f8;
  dVar7 = DAT_14c8463f0;
  if ((1 < (int)uStack_50) && (dVar12 = param_2, dVar7 = dVar11, local_48 != 0)) {
    local_38 = (int)uStack_50 + -1;
    local_80 = &local_40;
    local_40 = local_58;
    local_88 = &local_30;
    FUN_147d8e5d2(local_48,(float)local_68,(float)local_60,&local_2c);
    dVar12 = (double)local_30;
    dVar7 = (double)local_2c;
  }
  *param_3 = dVar7;
  param_3[1] = dVar12;
  if (local_58 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14376d6c8 FUN_14376d6c8 body=217 status=ok
// SIG undefined FUN_14376d6c8(void)

void FUN_14376d6c8(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  iStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = 0;
  local_30 = param_5;
  local_48 = param_3;
  local_38 = param_4;
  if ((param_5 != 0) && (*(undefined4 *)(param_5 + 8) = 0, *(int *)(param_5 + 0xc) != 0)) {
    FUN_146b9c00c(param_5,0);
  }
  iVar2 = iStack_50;
  if (iStack_50 != 0) {
    local_68 = local_58;
    uStack_64 = uStack_54;
    iStack_60 = iStack_50;
    uStack_5c = uStack_4c;
    (**(code **)(*(longlong *)*param_1 + 0x28))();
    local_78 = local_58;
    uStack_74 = uStack_54;
    iStack_70 = iStack_50;
    uStack_6c = uStack_4c;
    (**(code **)(*(longlong *)param_1[2] + 0x28))();
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        cVar1 = FUN_147d8d3f2(param_1,&local_58);
        if (cVar1 == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iStack_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376d7a2 FUN_14376d7a2 body=1253 status=ok
// SIG undefined FUN_14376d7a2(void)

ulonglong FUN_14376d7a2(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined1 local_120 [16];
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 **local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((*(int *)(lVar3 + 8) == 0) && (*(int *)(lVar3 + 0x18) == 0)) &&
      (*(int *)(lVar3 + 0x68) == 0)) &&
     (((*(int *)(lVar3 + 0x170) == 0 && (*(int *)(lVar3 + 0x58) == 0)) &&
      (*(int *)(lVar3 + 0x28) < 1)))) {
    uVar10 = 0;
  }
  else {
    local_a8 = *param_3;
    uStack_a0 = param_3[1];
    local_98 = *(undefined4 *)(param_3 + 2);
    uStack_94 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_90 = *(undefined4 *)(param_3 + 3);
    uStack_8c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_88 = *(undefined4 *)(param_3 + 4);
    uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_80 = *(undefined4 *)(param_3 + 5);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_78 = *(undefined4 *)(param_3 + 6);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_70 = *(undefined4 *)(param_3 + 7);
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0x3c);
    lVar4 = *param_2;
    puVar1 = (ulonglong *)(lVar4 + 0x70);
    puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar11 + 0x22;
    local_c0 = param_4;
    if (*(undefined8 **)(lVar4 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x120);
      puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar11 + 0x22;
    }
    *puVar1 = (ulonglong)puVar9;
    *puVar11 = &PTR_FUN_14a1fbd30;
    local_c8 = puVar11 + 2;
    lVar8 = 0x22;
    do {
      *(undefined1 (*) [16])((longlong)puVar11 + lVar8 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar11 + lVar8 + -2) = 0xffff0000;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xe2);
    *(undefined4 *)((longlong)puVar11 + 0xe4) = 0;
    *(undefined1 (*) [16])(puVar11 + 0x1a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar11 + 0x1c) = 0;
    *(undefined4 *)(puVar11 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar11 + 0xfc) = 0;
    puVar11[0x20] = 0;
    iVar2 = *(int *)(lVar4 + 0xa0);
    *(uint *)(lVar4 + 0xa0) = iVar2 + 1U;
    local_b8 = param_1;
    if (*(uint *)(lVar4 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(lVar4 + 0x98),iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar2 * 8) = puVar11;
    puVar11[2] = param_2[1];
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0xffff0001;
    lVar4 = *param_2;
    local_d0 = param_2[2];
    lVar8 = param_2[4];
    lVar5 = param_2[5];
    lVar6 = param_2[3];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c1080) {
      FUN_144b3d300(&DAT_14c9c1080);
      if (DAT_14c9c1080 == -1) {
        FUN_145fddb1e(&local_60);
        local_e0 = 0;
        local_f0 = 0;
        local_110 = "Unknown";
        local_120 = (undefined1  [16])0x0;
        local_128 = L"FRenderTargetParameters";
        local_e8 = 0;
        local_100 = 0x100;
        local_108 = 0x7af;
        local_f8 = &local_60;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_60 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14377b3b5);
        _Init_thread_footer(&DAT_14c9c1080);
      }
    }
    FUN_140069376(lVar4);
    puVar1 = (ulonglong *)(lVar4 + 0x70);
    puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x45;
    if (*(undefined8 **)(lVar4 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x230);
      puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x45;
    }
    *puVar1 = (ulonglong)puVar9;
    local_60 = local_c8;
    local_58 = DAT_14c9c1048;
    if (DAT_14c9c1048 != 0) {
      LOCK();
      *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14c9c1000;
    local_128 = (wchar_t *)CONCAT71(local_128._1_7_,2);
    FUN_140068f1a(puVar11,&local_a9,&local_60,1);
    param_4 = local_c0;
    *puVar11 = &PTR_FUN_14aaf9130;
    puVar11[0x37] = lVar8;
    puVar11[0x38] = lVar5;
    puVar11[0x39] = local_d0;
    puVar11[0x3a] = lVar6;
    puVar11[0x3b] = lVar3;
    puVar11[0x3c] = local_a8;
    puVar11[0x3d] = uStack_a0;
    *(undefined4 *)(puVar11 + 0x3e) = local_98;
    *(undefined4 *)((longlong)puVar11 + 500) = uStack_94;
    *(undefined4 *)(puVar11 + 0x3f) = uStack_90;
    *(undefined4 *)((longlong)puVar11 + 0x1fc) = uStack_8c;
    *(undefined4 *)(puVar11 + 0x40) = local_88;
    *(undefined4 *)((longlong)puVar11 + 0x204) = uStack_84;
    *(undefined4 *)(puVar11 + 0x41) = uStack_80;
    *(undefined4 *)((longlong)puVar11 + 0x20c) = uStack_7c;
    *(undefined4 *)(puVar11 + 0x42) = local_78;
    *(undefined4 *)((longlong)puVar11 + 0x214) = uStack_74;
    *(undefined4 *)(puVar11 + 0x43) = uStack_70;
    *(undefined4 *)((longlong)puVar11 + 0x21c) = uStack_6c;
    puVar11[0x44] = local_c0;
    iVar2 = *(int *)(lVar4 + 0x170);
    *(uint *)(lVar4 + 0x170) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(lVar4 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar4 + 0x168) + (longlong)iVar2 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x2c) = *(int *)(lVar4 + 0x170) + -1;
    FUN_140069100(lVar4,puVar11);
    uVar10 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    param_1 = local_b8;
  }
  if ((*(byte *)(param_4 + 0x78) & 2) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    lVar3 = *param_2;
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar11 + 2;
    if (*(undefined8 **)(lVar3 + 0x78) < puVar9) {
      FUN_140023dd8((longlong *)(lVar3 + 0x70),0x20);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar11 + 2;
    }
    *(undefined8 **)(lVar3 + 0x70) = puVar9;
    *puVar11 = &PTR_FUN_14aaf9148;
    puVar11[1] = uVar7;
    iVar2 = *(int *)(lVar3 + 0xa0);
    *(uint *)(lVar3 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(lVar3 + 0x98),iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar2 * 8) = puVar11;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376dc88 FUN_14376dc88 body=2128 status=ok
// SIG undefined FUN_14376dc88(void)

void FUN_14376dc88(longlong param_1,longlong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong lStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((((*(byte *)(param_1 + 0x78) & 1) == 0 & (param_3 ^ 1)) == 0) &&
     (*(int *)(param_1 + 0xc0) != 0)) {
    local_3b8 = (longlong *)(param_1 + 0xb8);
    FUN_140206174(DAT_14cb0e288);
    iVar21 = *(int *)(param_1 + 0xc0);
    if (1 < (longlong)iVar21) {
      lVar14 = *local_3b8;
      local_3b0 = param_2;
      memset(&local_358,0,0x2f0);
      lStack_360 = lVar14 + (longlong)iVar21 * 0x18 + -0x18;
      local_368 = lVar14;
      fVar29 = logf((float)iVar21);
      local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar29 + fVar29));
      plVar10 = &local_368;
      do {
        plVar12 = (longlong *)*plVar10;
        plVar19 = (longlong *)plVar10[1];
        iVar21 = (int)plVar10[2];
        iVar13 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar12) >> 3) * -0x55555555;
        uVar23 = iVar13 + 1;
        plVar22 = plVar19;
        plVar16 = plVar12;
        if (iVar21 != 0) {
LAB_14376dd8a:
          if (8 < (int)uVar23) {
            uVar18 = (ulonglong)(uVar23 >> 1);
            lVar14 = plVar12[uVar18 * 3 + 2];
            lVar2 = plVar12[uVar18 * 3];
            lVar17 = (plVar12 + uVar18 * 3)[1];
            plVar12[uVar18 * 3 + 2] = plVar12[2];
            lVar5 = plVar12[1];
            plVar12[uVar18 * 3] = *plVar12;
            (plVar12 + uVar18 * 3)[1] = lVar5;
            plVar12[2] = lVar14;
            *plVar12 = lVar2;
            plVar12[1] = lVar17;
            plVar25 = plVar19 + 3;
            plVar11 = plVar12;
            do {
              plVar8 = plVar11 + 3;
              plVar20 = plVar11 + 3;
              do {
                plVar11 = plVar20;
                plVar26 = plVar8;
                if (plVar19 < plVar11) break;
                plVar8 = plVar26 + 3;
                plVar20 = plVar11 + 3;
              } while ((int)*plVar12 <= (int)*plVar11);
              plVar8 = plVar25 + -6;
              do {
                plVar20 = plVar25;
                plVar27 = plVar8;
                plVar25 = plVar20 + -3;
                if (plVar25 <= plVar12) break;
                plVar8 = plVar27 + -3;
              } while ((int)*plVar25 <= (int)*plVar12);
              if (plVar25 < plVar11) goto LAB_14376de61;
              lVar14 = plVar11[2];
              lVar2 = *plVar11;
              lVar17 = plVar11[1];
              plVar11[2] = plVar20[-1];
              lVar5 = plVar20[-2];
              *plVar11 = *plVar25;
              plVar11[1] = lVar5;
              plVar20[-1] = lVar14;
              *plVar25 = lVar2;
              plVar20[-2] = lVar17;
            } while( true );
          }
          if (plVar12 < plVar19) {
            do {
              plVar22 = plVar12;
              if (plVar12 + 3 <= plVar19) {
                iVar21 = (int)*plVar12;
                plVar16 = plVar12 + 3;
                do {
                  if ((int)*plVar16 < iVar21) {
                    plVar22 = plVar16;
                    iVar21 = (int)*plVar16;
                  }
                  plVar16 = plVar16 + 3;
                } while (plVar16 <= plVar19);
              }
              local_388 = plVar22[2];
              lVar14 = *plVar22;
              lVar2 = plVar22[1];
              plVar22[2] = plVar19[2];
              lVar17 = plVar19[1];
              *plVar22 = *plVar19;
              plVar22[1] = lVar17;
              plVar19[2] = local_388;
              local_398._0_4_ = (int)lVar14;
              local_398._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
              uStack_390._0_4_ = (int)lVar2;
              uStack_390._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
              *(int *)plVar19 = (int)local_398;
              *(int *)((longlong)plVar19 + 4) = local_398._4_4_;
              *(int *)(plVar19 + 1) = (int)uStack_390;
              *(int *)((longlong)plVar19 + 0xc) = uStack_390._4_4_;
              plVar19 = plVar19 + -3;
              local_398 = lVar14;
              uStack_390 = lVar2;
            } while (plVar12 < plVar19);
          }
          goto LAB_14376e1a5;
        }
LAB_14376df26:
        if (uVar23 != 0) {
          iVar21 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          iVar13 = iVar21;
joined_r0x00014376df4d:
          do {
            iVar24 = iVar21 * 2 + 1;
            if (iVar24 < (int)uVar23) {
              iVar15 = iVar21 * 2 + 2;
              if ((iVar15 < (int)uVar23) &&
                 ((int)plVar12[(longlong)iVar15 * 3] <= (int)plVar12[(longlong)iVar24 * 3])) {
                iVar24 = iVar15;
              }
              if ((int)plVar12[(longlong)iVar24 * 3] < (int)plVar12[(longlong)iVar21 * 3]) {
                plVar19 = plVar12 + (longlong)iVar21 * 3;
                plVar22 = plVar12 + (longlong)iVar24 * 3;
                local_388 = plVar19[2];
                lVar14 = *plVar19;
                lVar2 = plVar19[1];
                plVar19[2] = plVar22[2];
                lVar17 = plVar22[1];
                *plVar19 = *plVar22;
                plVar19[1] = lVar17;
                plVar22[2] = local_388;
                local_398._0_4_ = (int)lVar14;
                local_398._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
                uStack_390._0_4_ = (int)lVar2;
                uStack_390._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
                *(int *)plVar22 = (int)local_398;
                *(int *)((longlong)plVar22 + 4) = local_398._4_4_;
                *(int *)(plVar22 + 1) = (int)uStack_390;
                *(int *)((longlong)plVar22 + 0xc) = uStack_390._4_4_;
                iVar21 = iVar24;
                local_398 = lVar14;
                uStack_390 = lVar2;
                goto joined_r0x00014376df4d;
              }
            }
            bVar28 = iVar13 != 0;
            iVar21 = iVar13 + -1;
            iVar13 = iVar21;
          } while (bVar28);
          if (1 < (int)uVar23) {
            uVar18 = (ulonglong)uVar23 - 1;
            local_388 = plVar12[2];
            lVar14 = *plVar12;
            lVar2 = plVar12[1];
            plVar12[2] = plVar12[uVar18 * 3 + 2];
            lVar17 = (plVar12 + uVar18 * 3)[1];
            *plVar12 = plVar12[uVar18 * 3];
            plVar12[1] = lVar17;
            plVar12[uVar18 * 3 + 2] = local_388;
            local_398._0_4_ = (int)lVar14;
            local_398._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
            uStack_390._0_4_ = (int)lVar2;
            uStack_390._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
            plVar19 = plVar12 + uVar18 * 3;
            *(int *)plVar19 = (int)local_398;
            *(int *)((longlong)plVar19 + 4) = local_398._4_4_;
            *(int *)(plVar19 + 1) = (int)uStack_390;
            *(int *)((longlong)plVar19 + 0xc) = uStack_390._4_4_;
            local_398 = lVar14;
            uStack_390 = lVar2;
            if (uVar23 != 2) {
              do {
                iVar21 = 0;
                iVar24 = 1;
                iVar13 = 0;
                do {
                  iVar21 = iVar21 + 2;
                  iVar15 = iVar24;
                  if (((longlong)iVar21 < (longlong)uVar18) &&
                     ((int)plVar12[(longlong)iVar21 * 3] <= (int)plVar12[(longlong)iVar24 * 3])) {
                    iVar15 = iVar21;
                  }
                  if ((int)plVar12[(longlong)iVar13 * 3] <= (int)plVar12[(longlong)iVar15 * 3])
                  break;
                  plVar19 = plVar12 + (longlong)iVar13 * 3;
                  plVar22 = plVar12 + (longlong)iVar15 * 3;
                  lVar14 = plVar19[2];
                  lVar2 = *plVar19;
                  lVar17 = plVar19[1];
                  plVar19[2] = plVar22[2];
                  lVar5 = plVar22[1];
                  *plVar19 = *plVar22;
                  plVar19[1] = lVar5;
                  plVar22[2] = lVar14;
                  *plVar22 = lVar2;
                  plVar22[1] = lVar17;
                  iVar21 = iVar15 * 2;
                  iVar24 = iVar15 * 2 + 1;
                  iVar13 = iVar15;
                } while ((longlong)iVar24 < (longlong)uVar18);
                uVar1 = uVar18 - 1;
                local_388 = plVar12[2];
                lVar14 = *plVar12;
                lVar2 = plVar12[1];
                plVar12[2] = plVar12[uVar1 * 3 + 2];
                lVar17 = (plVar12 + uVar1 * 3)[1];
                *plVar12 = plVar12[uVar1 * 3];
                plVar12[1] = lVar17;
                plVar12[uVar1 * 3 + 2] = local_388;
                local_398._0_4_ = (int)lVar14;
                local_398._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
                uStack_390._0_4_ = (int)lVar2;
                uStack_390._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
                plVar19 = plVar12 + uVar1 * 3;
                *(int *)plVar19 = (int)local_398;
                *(int *)((longlong)plVar19 + 4) = local_398._4_4_;
                *(int *)(plVar19 + 1) = (int)uStack_390;
                *(int *)((longlong)plVar19 + 0xc) = uStack_390._4_4_;
                bVar28 = 2 < uVar18;
                uVar18 = uVar1;
                local_398 = lVar14;
                uStack_390 = lVar2;
              } while (bVar28);
            }
          }
        }
LAB_14376e1a5:
        plVar10 = plVar10 + -3;
        param_2 = local_3b0;
      } while (&local_368 <= plVar10);
    }
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_368,L"Renderer",1);
      lVar14 = local_368;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,lVar14,&local_398,1);
    }
    (**(code **)(*DAT_14cad8310 + 0x90))(DAT_14cad8310,*(undefined8 *)(param_2 + 0x18));
    cVar3 = *(char *)(param_1 + 0x98);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    lVar14 = *(longlong *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    local_398 = param_2;
    uStack_390 = (**(code **)(**(longlong **)(param_1 + 0x58) + 8))
                           (*(longlong **)(param_1 + 0x58),param_2);
    if ((((int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)lVar14 >> 0x20)) *
         ((int)uVar4 - (int)lVar14) < 1) || (local_388 = lVar14, local_380 = uVar4, cVar3 != '\0'))
    {
      local_380 = *(undefined8 *)(uStack_390 + 0x84);
      local_388 = DAT_14c967818;
    }
    local_378 = uVar6;
    uStack_370 = uVar7;
    if (*(char *)(param_1 + 0xa1) == '\x01') {
      local_358 = 0;
      uStack_350 = 0;
      local_368 = 0;
      lStack_360 = 0;
      local_348 = 0;
      local_340 = 1;
      uStack_338 = CONCAT44(uStack_338._4_4_,1);
      FUN_1401a4871(param_2,uStack_390);
    }
    local_368 = 0;
    local_358 = CONCAT44(local_358._4_4_,0x11);
    local_340 = 0;
    uStack_338 = 0;
    uStack_350 = 0;
    local_348 = 0;
    lStack_360 = DAT_14c9c0d98;
    local_330 = 0;
    if ((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) *
        (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) < 1) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                (*(longlong **)(param_1 + 0x58),&local_3a8);
      *(longlong *)(param_1 + 0x38) = DAT_14c967818;
      *(undefined8 *)(param_1 + 0x40) = local_3a8;
    }
    if (0 < *(int *)(param_1 + 0xc0)) {
      lVar14 = 0;
      do {
        lVar2 = *local_3b8 + lVar14 * 0x18;
        if (0 < *(int *)(lVar2 + 0x10)) {
          lVar17 = 0;
          do {
            plVar10 = *(longlong **)(*(longlong *)(lVar2 + 8) + lVar17 * 8);
            if (plVar10 != (longlong *)0x0) {
              bVar9 = (**(code **)(*plVar10 + 8))(plVar10,&local_398,&local_368,param_1);
              *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | bVar9;
              if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
                local_3a0 = plVar10;
                FUN_140ae4ada(&local_398,&local_3a0);
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(lVar2 + 0x10));
        }
        if (((*(byte *)(param_1 + 0x78) & 2) != 0) &&
           (*(undefined4 *)(lVar2 + 0x10) = 0, *(int *)(lVar2 + 0x14) != 0)) {
          FUN_1417f9652((longlong *)(lVar2 + 8));
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0xc0));
    }
    if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
      FUN_14010aeed(*(undefined8 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (*(int *)(param_1 + 0xc4) != 0) {
        FUN_14010b220(local_3b8,0);
      }
      FUN_14010afec(param_1 + 200,0);
      *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14376de61:
  local_388 = plVar12[2];
  lVar14 = *plVar12;
  lVar2 = plVar12[1];
  plVar12[2] = plVar20[-1];
  lVar17 = plVar20[-2];
  *plVar12 = *plVar25;
  plVar12[1] = lVar17;
  plVar20[-1] = local_388;
  local_398._0_4_ = (int)lVar14;
  local_398._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uStack_390._0_4_ = (int)lVar2;
  uStack_390._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
  *(int *)plVar25 = (int)local_398;
  *(int *)((longlong)plVar20 + -0x14) = local_398._4_4_;
  *(int *)(plVar20 + -2) = (int)uStack_390;
  *(int *)((longlong)plVar20 + -0xc) = uStack_390._4_4_;
  iVar21 = iVar21 + -1;
  plVar20 = plVar20 + -6;
  local_398 = lVar14;
  uStack_390 = lVar2;
  if ((longlong)plVar27 - (longlong)plVar16 < (longlong)plVar22 - (longlong)plVar26) {
    if (plVar11 < plVar19) {
      *plVar10 = (longlong)plVar11;
      plVar10[1] = (longlong)plVar19;
      *(int *)(plVar10 + 2) = iVar21;
      plVar10 = plVar10 + 3;
    }
    plVar26 = plVar12;
    if (plVar25 <= plVar12 + 3) goto LAB_14376e1a5;
  }
  else {
    if (plVar12 + 3 < plVar25) {
      *plVar10 = (longlong)plVar12;
      plVar10[1] = (longlong)plVar20;
      *(int *)(plVar10 + 2) = iVar21;
      plVar10 = plVar10 + 3;
    }
    plVar12 = plVar11;
    plVar20 = plVar19;
    plVar27 = plVar19;
    if (plVar19 <= plVar11) goto LAB_14376e1a5;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar27 - (longlong)plVar26) >> 3) * -0x55555555;
  uVar23 = iVar13 + 1;
  plVar19 = plVar20;
  plVar22 = plVar27;
  plVar16 = plVar26;
  if (iVar21 == 0) goto LAB_14376df26;
  goto LAB_14376dd8a;
}



// FUNCTION 14376e4da FUN_14376e4da body=3324 status=ok
// SIG undefined FUN_14376e4da(void)

void FUN_14376e4da(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  byte bVar15;
  DWORD DVar16;
  DWORD DVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  code **ppcVar21;
  undefined ***pppuVar22;
  code *pcVar23;
  code *pcVar24;
  uint *puVar25;
  code *pcVar26;
  undefined8 *puVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  code *pcVar31;
  longlong lVar32;
  longlong lVar33;
  longlong *plVar34;
  code *pcVar35;
  longlong lVar36;
  ulonglong uVar37;
  code *pcVar38;
  code *pcVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  code *pcVar43;
  code *pcVar44;
  bool bVar45;
  float fVar46;
  undefined1 auStack_3d8 [32];
  code **local_3b8;
  longlong *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 *local_390;
  code *local_388;
  code *local_380;
  undefined ***local_378 [2];
  undefined **local_368;
  longlong *local_360;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((((*(byte *)(param_1 + 0x78) & 1) == 0 & (param_2 ^ 1)) != 0) ||
     (uVar41 = *(uint *)(param_1 + 0xc0), uVar41 == 0)) goto LAB_14376edcd;
  if (DAT_14cb0e288 != 0) {
    FUN_140206174();
    uVar41 = *(uint *)(param_1 + 0xc0);
  }
  uVar37 = (ulonglong)uVar41;
  local_3a8 = (longlong *)(param_1 + 0xb8);
  if (1 < (int)uVar41) {
    pcVar38 = (code *)*local_3a8;
    memset(local_378,0,0x2f0);
    local_380 = pcVar38 + uVar37 * 0x18 + -0x18;
    local_388 = pcVar38;
    fVar46 = logf((float)(int)uVar41);
    local_378[0] = (undefined ***)CONCAT44(local_378[0]._4_4_,(int)(longlong)(fVar46 + fVar46));
    ppcVar21 = &local_388;
    do {
      pcVar24 = *ppcVar21;
      pcVar26 = ppcVar21[1];
      iVar40 = *(int *)(ppcVar21 + 2);
      iVar29 = (int)((ulonglong)((longlong)pcVar26 - (longlong)pcVar24) >> 3) * -0x55555555;
      uVar41 = iVar29 + 1;
      pcVar38 = pcVar26;
      pcVar31 = pcVar24;
      if (iVar40 != 0) {
LAB_14376e5c9:
        if (8 < (int)uVar41) {
          uVar37 = (ulonglong)(uVar41 >> 1);
          uVar20 = *(undefined8 *)(pcVar24 + (uVar37 * 6 + 4) * 4);
          uVar11 = *(undefined8 *)(pcVar24 + uVar37 * 0x18);
          uVar12 = *(undefined8 *)(pcVar24 + uVar37 * 0x18 + 8);
          *(undefined8 *)(pcVar24 + (uVar37 * 6 + 4) * 4) = *(undefined8 *)(pcVar24 + 0x10);
          uVar13 = *(undefined8 *)(pcVar24 + 8);
          *(undefined8 *)(pcVar24 + uVar37 * 0x18) = *(undefined8 *)pcVar24;
          *(undefined8 *)(pcVar24 + uVar37 * 0x18 + 8) = uVar13;
          *(undefined8 *)(pcVar24 + 0x10) = uVar20;
          *(undefined8 *)pcVar24 = uVar11;
          *(undefined8 *)(pcVar24 + 8) = uVar12;
          pcVar43 = pcVar38 + 0x18;
          pcVar23 = pcVar24;
          do {
            pcVar14 = pcVar23 + 0x18;
            pcVar39 = pcVar23 + 0x18;
            do {
              pcVar23 = pcVar39;
              pcVar44 = pcVar14;
              if (pcVar38 < pcVar23) break;
              pcVar14 = pcVar44 + 0x18;
              pcVar39 = pcVar23 + 0x18;
            } while (*(int *)pcVar24 <= *(int *)pcVar23);
            pcVar14 = pcVar43 + -0x30;
            do {
              pcVar39 = pcVar43;
              pcVar35 = pcVar14;
              pcVar43 = pcVar39 + -0x18;
              if (pcVar43 <= pcVar24) break;
              pcVar14 = pcVar35 + -0x18;
            } while (*(int *)pcVar43 <= *(int *)pcVar24);
            if (pcVar43 < pcVar23) goto LAB_14376e6b8;
            uVar20 = *(undefined8 *)(pcVar23 + 0x10);
            uVar11 = *(undefined8 *)pcVar23;
            uVar12 = *(undefined8 *)(pcVar23 + 8);
            *(undefined8 *)(pcVar23 + 0x10) = *(undefined8 *)(pcVar39 + -8);
            uVar13 = *(undefined8 *)(pcVar39 + -0x10);
            *(undefined8 *)pcVar23 = *(undefined8 *)pcVar43;
            *(undefined8 *)(pcVar23 + 8) = uVar13;
            *(undefined8 *)(pcVar39 + -8) = uVar20;
            *(undefined8 *)pcVar43 = uVar11;
            *(undefined8 *)(pcVar39 + -0x10) = uVar12;
          } while( true );
        }
        if (pcVar24 < pcVar38) {
          do {
            pcVar26 = pcVar24;
            if (pcVar24 + 0x18 <= pcVar38) {
              iVar40 = *(int *)pcVar24;
              pcVar31 = pcVar24 + 0x18;
              do {
                if (*(int *)pcVar31 < iVar40) {
                  pcVar26 = pcVar31;
                  iVar40 = *(int *)pcVar31;
                }
                pcVar31 = pcVar31 + 0x18;
              } while (pcVar31 <= pcVar38);
            }
            local_78 = *(undefined ***)(pcVar26 + 0x10);
            local_88 = *(undefined8 **)pcVar26;
            uStack_80 = *(undefined8 *)(pcVar26 + 8);
            puVar6 = local_88;
            uVar11 = uStack_80;
            *(undefined8 *)(pcVar26 + 0x10) = *(undefined8 *)(pcVar38 + 0x10);
            uVar20 = *(undefined8 *)(pcVar38 + 8);
            *(undefined8 *)pcVar26 = *(undefined8 *)pcVar38;
            *(undefined8 *)(pcVar26 + 8) = uVar20;
            *(undefined ***)(pcVar38 + 0x10) = local_78;
            local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (int)((ulonglong)uStack_80 >> 0x20);
            *(int *)pcVar38 = (int)local_88;
            *(int *)(pcVar38 + 4) = local_88._4_4_;
            *(int *)(pcVar38 + 8) = (int)uStack_80;
            *(int *)(pcVar38 + 0xc) = uStack_80._4_4_;
            pcVar38 = pcVar38 + -0x18;
            local_88 = puVar6;
            uStack_80 = uVar11;
          } while (pcVar24 < pcVar38);
        }
        goto LAB_14376ea42;
      }
LAB_14376e789:
      if (uVar41 != 0) {
        iVar40 = (iVar29 - (iVar29 + -1 >> 0x1f)) + -1 >> 1;
        iVar29 = iVar40;
joined_r0x00014376e7b0:
        do {
          iVar42 = iVar40 * 2 + 1;
          if (iVar42 < (int)uVar41) {
            iVar30 = iVar40 * 2 + 2;
            if ((iVar30 < (int)uVar41) &&
               (*(int *)(pcVar24 + (longlong)iVar30 * 0x18) <=
                *(int *)(pcVar24 + (longlong)iVar42 * 0x18))) {
              iVar42 = iVar30;
            }
            if (*(int *)(pcVar24 + (longlong)iVar42 * 0x18) <
                *(int *)(pcVar24 + (longlong)iVar40 * 0x18)) {
              pcVar38 = pcVar24 + (longlong)iVar40 * 0x18;
              pcVar26 = pcVar24 + (longlong)iVar42 * 0x18;
              local_78 = *(undefined ***)(pcVar38 + 0x10);
              local_88 = *(undefined8 **)pcVar38;
              uStack_80 = *(undefined8 *)(pcVar38 + 8);
              puVar6 = local_88;
              uVar11 = uStack_80;
              *(undefined8 *)(pcVar38 + 0x10) = *(undefined8 *)(pcVar26 + 0x10);
              uVar20 = *(undefined8 *)(pcVar26 + 8);
              *(undefined8 *)pcVar38 = *(undefined8 *)pcVar26;
              *(undefined8 *)(pcVar38 + 8) = uVar20;
              *(undefined ***)(pcVar26 + 0x10) = local_78;
              local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (int)((ulonglong)uStack_80 >> 0x20);
              *(int *)pcVar26 = (int)local_88;
              *(int *)(pcVar26 + 4) = local_88._4_4_;
              *(int *)(pcVar26 + 8) = (int)uStack_80;
              *(int *)(pcVar26 + 0xc) = uStack_80._4_4_;
              iVar40 = iVar42;
              local_88 = puVar6;
              uStack_80 = uVar11;
              goto joined_r0x00014376e7b0;
            }
          }
          bVar45 = iVar29 != 0;
          iVar40 = iVar29 + -1;
          iVar29 = iVar40;
        } while (bVar45);
        if (1 < (int)uVar41) {
          uVar37 = (ulonglong)uVar41 - 1;
          local_78 = *(undefined ***)(pcVar24 + 0x10);
          local_88 = *(undefined8 **)pcVar24;
          uStack_80 = *(undefined8 *)(pcVar24 + 8);
          puVar6 = local_88;
          uVar11 = uStack_80;
          *(undefined8 *)(pcVar24 + 0x10) = *(undefined8 *)(pcVar24 + (uVar37 * 6 + 4) * 4);
          uVar20 = *(undefined8 *)(pcVar24 + uVar37 * 0x18 + 8);
          *(undefined8 *)pcVar24 = *(undefined8 *)(pcVar24 + uVar37 * 0x18);
          *(undefined8 *)(pcVar24 + 8) = uVar20;
          *(undefined ***)(pcVar24 + (uVar37 * 6 + 4) * 4) = local_78;
          local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (int)((ulonglong)uStack_80 >> 0x20);
          pcVar38 = pcVar24 + uVar37 * 0x18;
          *(int *)pcVar38 = (int)local_88;
          *(int *)(pcVar38 + 4) = local_88._4_4_;
          *(int *)(pcVar38 + 8) = (int)uStack_80;
          *(int *)(pcVar38 + 0xc) = uStack_80._4_4_;
          local_88 = puVar6;
          uStack_80 = uVar11;
          if (uVar41 != 2) {
            do {
              iVar40 = 0;
              iVar42 = 1;
              iVar29 = 0;
              do {
                iVar40 = iVar40 + 2;
                iVar30 = iVar42;
                if (((longlong)iVar40 < (longlong)uVar37) &&
                   (*(int *)(pcVar24 + (longlong)iVar40 * 0x18) <=
                    *(int *)(pcVar24 + (longlong)iVar42 * 0x18))) {
                  iVar30 = iVar40;
                }
                if (*(int *)(pcVar24 + (longlong)iVar29 * 0x18) <=
                    *(int *)(pcVar24 + (longlong)iVar30 * 0x18)) break;
                pcVar38 = pcVar24 + (longlong)iVar29 * 0x18;
                pcVar26 = pcVar24 + (longlong)iVar30 * 0x18;
                uVar20 = *(undefined8 *)(pcVar38 + 0x10);
                uVar11 = *(undefined8 *)pcVar38;
                uVar12 = *(undefined8 *)(pcVar38 + 8);
                *(undefined8 *)(pcVar38 + 0x10) = *(undefined8 *)(pcVar26 + 0x10);
                uVar13 = *(undefined8 *)(pcVar26 + 8);
                *(undefined8 *)pcVar38 = *(undefined8 *)pcVar26;
                *(undefined8 *)(pcVar38 + 8) = uVar13;
                *(undefined8 *)(pcVar26 + 0x10) = uVar20;
                *(undefined8 *)pcVar26 = uVar11;
                *(undefined8 *)(pcVar26 + 8) = uVar12;
                iVar40 = iVar30 * 2;
                iVar42 = iVar30 * 2 + 1;
                iVar29 = iVar30;
              } while ((longlong)iVar42 < (longlong)uVar37);
              uVar1 = uVar37 - 1;
              local_78 = *(undefined ***)(pcVar24 + 0x10);
              local_88 = *(undefined8 **)pcVar24;
              uStack_80 = *(undefined8 *)(pcVar24 + 8);
              puVar6 = local_88;
              uVar11 = uStack_80;
              *(undefined8 *)(pcVar24 + 0x10) = *(undefined8 *)(pcVar24 + (uVar1 * 6 + 4) * 4);
              uVar20 = *(undefined8 *)(pcVar24 + uVar1 * 0x18 + 8);
              *(undefined8 *)pcVar24 = *(undefined8 *)(pcVar24 + uVar1 * 0x18);
              *(undefined8 *)(pcVar24 + 8) = uVar20;
              *(undefined ***)(pcVar24 + (uVar1 * 6 + 4) * 4) = local_78;
              local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (int)((ulonglong)uStack_80 >> 0x20);
              pcVar38 = pcVar24 + uVar1 * 0x18;
              *(int *)pcVar38 = (int)local_88;
              *(int *)(pcVar38 + 4) = local_88._4_4_;
              *(int *)(pcVar38 + 8) = (int)uStack_80;
              *(int *)(pcVar38 + 0xc) = uStack_80._4_4_;
              bVar45 = 2 < uVar37;
              uVar37 = uVar1;
              local_88 = puVar6;
              uStack_80 = uVar11;
            } while (bVar45);
          }
        }
      }
LAB_14376ea42:
      ppcVar21 = ppcVar21 + -3;
    } while (&local_388 <= ppcVar21);
    uVar37 = (ulonglong)*(uint *)(param_1 + 0xc0);
  }
  plVar34 = local_3a8;
  if (0 < (int)uVar37) {
    if (DAT_14ca84e78 == '\x01') {
      lVar36 = 0;
      do {
        lVar28 = *local_3a8 + lVar36 * 0x18;
        iVar40 = *(int *)(lVar28 + 0x10);
        if (0 < iVar40) {
          lVar32 = 0;
          do {
            puVar6 = *(undefined8 **)(*(longlong *)(lVar28 + 8) + lVar32 * 8);
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
              iVar40 = *(int *)(lVar28 + 0x10);
            }
            lVar32 = lVar32 + 1;
          } while (lVar32 < iVar40);
        }
        *(undefined4 *)(lVar28 + 0x10) = 0;
        if (*(int *)(lVar28 + 0x14) != 0) {
          FUN_1417f9652((longlong *)(lVar28 + 8));
        }
        lVar36 = lVar36 + 1;
        uVar37 = (ulonglong)*(int *)(param_1 + 0xc0);
        plVar34 = local_3a8;
      } while (lVar36 < (longlong)uVar37);
    }
    else {
      local_3a0 = param_1;
      local_398 = param_1;
      local_390 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      lVar36 = local_3a0;
      *local_390 = 0;
      local_390[1] = 0;
      lVar28 = 0;
      do {
        lVar32 = *plVar34 + lVar28 * 0x18;
        iVar40 = *(int *)(lVar32 + 0x10);
        if (0 < iVar40) {
          lVar33 = 0;
          do {
            plVar34 = *(longlong **)(*(longlong *)(lVar32 + 8) + lVar33 * 8);
            if (plVar34 != (longlong *)0x0) {
              bVar15 = (**(code **)(*plVar34 + 0x10))(plVar34,lVar36,&local_398);
              pbVar2 = (byte *)(lVar36 + 0x7c);
              *pbVar2 = *pbVar2 | bVar15;
              local_378[0] = (undefined ***)0x0;
              local_368 = &PTR_LAB_14aaf9260;
              local_388 = FUN_140ae4a94;
              local_360 = plVar34;
              FUN_14031f22a(&local_398,&local_388);
              if (local_388 != (code *)0x0) {
                pppuVar22 = local_378[0];
                if (local_378[0] == (undefined ***)0x0) {
                  pppuVar22 = &local_368;
                }
                (*(code *)(*pppuVar22)[2])();
              }
              iVar40 = *(int *)(lVar32 + 0x10);
            }
            lVar33 = lVar33 + 1;
          } while (lVar33 < iVar40);
        }
        *(undefined4 *)(lVar32 + 0x10) = 0;
        if (*(int *)(lVar32 + 0x14) != 0) {
          FUN_1417f9652((longlong *)(lVar32 + 8));
        }
        lVar28 = lVar28 + 1;
        plVar34 = local_3a8;
      } while (lVar28 < *(int *)(local_3a0 + 0xc0));
      local_88 = local_390;
      uStack_80 = *(undefined8 *)(local_398 + 0x58);
      ppuVar7 = *(undefined ***)(local_398 + 0x38);
      ppuVar8 = *(undefined ***)(local_398 + 0x40);
      ppuVar9 = *(undefined ***)(local_398 + 0x48);
      ppuVar10 = *(undefined ***)(local_398 + 0x50);
      uVar5 = *(undefined1 *)(local_398 + 0x98);
      lVar36 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar40 = *(int *)(lVar36 + 0xc60);
      local_78 = ppuVar7;
      local_70 = ppuVar8;
      local_68 = ppuVar9;
      local_60 = ppuVar10;
      local_58 = uVar5;
      if (DAT_14c86a9fc == 0) {
        if (iVar40 != 2) {
          if (iVar40 != 1) goto LAB_14376ec60;
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          if (DVar16 == DVar17) goto LAB_14376ec65;
          goto LAB_14376eca3;
        }
LAB_14376ec65:
        FUN_14377bc42(&local_88,&DAT_14ca85100);
        plVar34 = local_3a8;
        param_1 = local_3a0;
      }
      else {
LAB_14376ec60:
        if (iVar40 == 0x10) goto LAB_14376ec65;
LAB_14376eca3:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar40 = *(int *)(lVar36 + 0xc60), iVar40 == 2))
          goto LAB_14376ec65;
          if (iVar40 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_14376ec65;
          }
        }
        param_1 = local_3a0;
        plVar34 = local_3a8;
        if (DAT_14ca9a43c == 0) {
          puVar6 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar19 = (uint *)*puVar6;
          if (puVar19 != (uint *)0x0) goto LAB_14376eea5;
          while( true ) {
            uVar41 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar41 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar41 | 1;
              __tlregdtor(&LAB_14377a02f);
            }
            lVar36 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar18 = *(undefined4 **)(lVar36 + 0x310);
            *(undefined8 *)(lVar36 + 0x310) = 0;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar18 = 0xffffffff;
            *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar6 = puVar18;
            FUN_140217a48(puVar6);
            puVar19 = (uint *)*puVar6;
LAB_14376eea5:
            puVar27 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar25 = (uint *)(puVar27 + 0x1c);
            uVar41 = puVar19[0x12];
            if (puVar25 <= puVar19 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
              LOCK();
              uVar4 = *puVar19;
              *puVar19 = *puVar19 + uVar41 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar41) != 0xffffffff) break;
              puVar19 = (uint *)*puVar6;
              *puVar19 = 0xffffffff;
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
              puVar19[0x12] = 0;
              *puVar6 = puVar19;
              puVar27 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
              puVar25 = (uint *)(puVar27 + 0x1c);
              uVar41 = 0;
              if (puVar25 <= puVar19 + 0x4000) {
                uVar41 = 1;
                goto LAB_14376ef25;
              }
            }
          }
          uVar41 = uVar41 + 1;
LAB_14376ef25:
          *(uint **)(puVar19 + 0x10) = puVar25;
          puVar19[0x12] = uVar41;
          iVar40 = 0;
          FUN_1447247dc(puVar27,0);
          *puVar27 = &PTR_FUN_14aaf9240;
          *(int *)(puVar27 + 0x15) = (int)local_88;
          *(int *)((longlong)puVar27 + 0xac) = local_88._4_4_;
          *(int *)(puVar27 + 0x16) = (int)uStack_80;
          *(int *)((longlong)puVar27 + 0xb4) = uStack_80._4_4_;
          puVar27[0x17] = local_78;
          puVar27[0x18] = local_70;
          puVar27[0x19] = local_68;
          puVar27[0x1a] = local_60;
          *(undefined1 *)(puVar27 + 0x1b) = local_58;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar41 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar41 < 2) {
              uVar37 = (ulonglong)(byte)(&DAT_149e38edc)[uVar41];
              iVar40 = 0;
            }
            else {
              uVar37 = 2;
            }
          }
          else {
            iVar40 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar37 = 5;
          }
          if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
          }
          puVar27[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar27[9] = puVar27;
          puVar27[10] = puVar27;
          lVar36 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar36 == 0) {
            uVar1 = 1;
            if ((char)uVar37 != '\x06') {
              uVar1 = uVar37;
            }
            uVar37 = uVar1;
            uVar20 = 0;
          }
          else {
            if ((char)uVar37 == '\x06') {
              uVar37 = *(ulonglong *)(lVar36 + 0x38) >> 0x3b;
            }
            uVar20 = *(undefined8 *)(lVar36 + 0x30);
          }
          puVar27[0xf] = uVar20;
          puVar27[0x10] = uVar37 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar27 + 0x1c) = iVar40;
          if (puVar27 == (undefined8 *)0x0) {
            local_388 = (code *)CONCAT71(local_388._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
            UNLOCK();
            local_388 = (code *)CONCAT71(local_388._1_7_,1);
            FUN_1447439e4(puVar27);
            LOCK();
            piVar3 = (int *)(puVar27 + 1);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)*puVar27)(puVar27,1);
            }
          }
        }
        else {
          local_388 = (code *)0x0;
          local_378[0] = (undefined ***)FUN_14001cc68(0x40,8);
          *local_378[0] = &PTR_LAB_14aaf91e0;
          *(int *)(local_378[0] + 1) = (int)local_88;
          *(int *)((longlong)local_378[0] + 0xc) = local_88._4_4_;
          *(int *)(local_378[0] + 2) = (int)uStack_80;
          *(int *)((longlong)local_378[0] + 0x14) = uStack_80._4_4_;
          local_378[0][3] = ppuVar7;
          local_378[0][4] = ppuVar8;
          local_378[0][5] = ppuVar9;
          local_378[0][6] = ppuVar10;
          *(undefined1 *)(local_378[0] + 7) = uVar5;
          if (local_378[0] + 1 != (undefined ***)0x0) {
            local_388 = (code *)&LAB_14377c4ca;
          }
          local_3b8 = &local_388;
          FUN_14005a792(&DAT_14ca9a440,L"DispatchCanvasRenderCommands",&DAT_14cb0f074);
          param_1 = local_3a0;
          plVar34 = local_3a8;
          if (local_388 != (code *)0x0) {
            pppuVar22 = &local_368;
            if (local_378[0] != (undefined ***)0x0) {
              pppuVar22 = local_378[0];
            }
            (*(code *)(*pppuVar22)[2])();
          }
        }
      }
      uVar37 = (ulonglong)*(uint *)(param_1 + 0xc0);
    }
  }
  FUN_14010aeed(*(undefined8 *)(param_1 + 0xb8),uVar37 & 0xffffffff);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14010b220(plVar34,0);
  }
  FUN_14010afec(param_1 + 200,0);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
LAB_14376edcd:
  if ((local_48 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14376e6b8:
  local_78 = *(undefined ***)(pcVar24 + 0x10);
  local_88 = *(undefined8 **)pcVar24;
  uStack_80 = *(undefined8 *)(pcVar24 + 8);
  puVar6 = local_88;
  uVar11 = uStack_80;
  *(undefined8 *)(pcVar24 + 0x10) = *(undefined8 *)(pcVar39 + -8);
  uVar20 = *(undefined8 *)(pcVar39 + -0x10);
  *(undefined8 *)pcVar24 = *(undefined8 *)pcVar43;
  *(undefined8 *)(pcVar24 + 8) = uVar20;
  *(undefined ***)(pcVar39 + -8) = local_78;
  local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (int)((ulonglong)uStack_80 >> 0x20);
  *(int *)pcVar43 = (int)local_88;
  *(int *)(pcVar39 + -0x14) = local_88._4_4_;
  *(int *)(pcVar39 + -0x10) = (int)uStack_80;
  *(int *)(pcVar39 + -0xc) = uStack_80._4_4_;
  iVar40 = iVar40 + -1;
  pcVar39 = pcVar39 + -0x30;
  local_88 = puVar6;
  uStack_80 = uVar11;
  if ((longlong)pcVar35 - (longlong)pcVar31 < (longlong)pcVar26 - (longlong)pcVar44) {
    if (pcVar23 < pcVar38) {
      *ppcVar21 = pcVar23;
      ppcVar21[1] = pcVar38;
      *(int *)(ppcVar21 + 2) = iVar40;
      ppcVar21 = ppcVar21 + 3;
    }
    pcVar26 = pcVar35;
    pcVar44 = pcVar24;
    if (pcVar43 <= pcVar24 + 0x18) goto LAB_14376ea42;
  }
  else {
    if (pcVar24 + 0x18 < pcVar43) {
      *ppcVar21 = pcVar24;
      ppcVar21[1] = pcVar39;
      *(int *)(ppcVar21 + 2) = iVar40;
      ppcVar21 = ppcVar21 + 3;
    }
    pcVar24 = pcVar23;
    pcVar39 = pcVar38;
    pcVar26 = pcVar38;
    if (pcVar38 <= pcVar23) goto LAB_14376ea42;
  }
  iVar29 = (int)((ulonglong)((longlong)pcVar26 - (longlong)pcVar44) >> 3) * -0x55555555;
  uVar41 = iVar29 + 1;
  pcVar38 = pcVar39;
  pcVar31 = pcVar44;
  if (iVar40 == 0) goto LAB_14376e789;
  goto LAB_14376e5c9;
}



// FUNCTION 14376f1d8 FUN_14376f1d8 body=1236 status=ok
// SIG undefined FUN_14376f1d8(void)

void FUN_14376f1d8(longlong param_1,undefined4 *param_2)

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
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(undefined8 *)(param_1 + 0x58);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14376f227;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14376f22c;
      goto LAB_14376f25d;
    }
  }
  else {
LAB_14376f227:
    if (iVar6 != 0x10) {
LAB_14376f25d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14376f22c;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14376f22c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14376f3c7;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14377a02f);
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
LAB_14376f3c7:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
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
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14376f447;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14376f447:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aaf92e0;
        *(undefined4 *)(puVar16 + 0x15) = local_88;
        *(undefined4 *)((longlong)puVar16 + 0xac) = uStack_84;
        *(undefined4 *)(puVar16 + 0x16) = uStack_80;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_7c;
        puVar16[0x17] = local_78;
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
        local_98 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aaf92a0;
        local_40 = local_88;
        uStack_3c = uStack_84;
        uStack_38 = uStack_80;
        uStack_34 = uStack_7c;
        local_30 = local_78;
        local_68[0] = &LAB_14377d064;
        FUN_14005a792(&DAT_14ca9a440,L"ClearCommand",&DAT_14cb0f078);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14376f302;
    }
  }
LAB_14376f22c:
  FUN_14377c6a0(&local_88,&DAT_14ca85100);
LAB_14376f302:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376f6ae FUN_14376f6ae body=313 status=ok
// SIG undefined FUN_14376f6ae(void)

void FUN_14376f6ae(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 8) != 0) goto LAB_14376f6d8;
  lVar4 = FUN_14001cc68(0x20,0x10);
  FUN_147d8d2dc(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aaf92f0;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 8) = lVar4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_14376f6d8;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14376f6d8;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_14376f6d8;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14376f6d8;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14376f6d8:
  if (*(longlong *)(param_2 + 0x20) != 0) {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    local_58 = param_6;
    FUN_14376d6c8(*(undefined8 *)(param_1 + 8),&local_48,param_2,param_5);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14376f7e8 FUN_14376f7e8 body=275 status=ok
// SIG undefined FUN_14376f7e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14376f7e8(void)

{
  _DAT_14cb0dce8 = &PTR_LAB_149e668b0;
  if (DAT_14c948580 == 0) {
LAB_14376f8cd:
    _DAT_14cb0dcd0 = &PTR_LAB_149e668b0;
LAB_14376f8d4:
    _DAT_14cb0dcb8 = &PTR_LAB_149e668b0;
    _DAT_14cb0dca0 = &PTR_LAB_149e668b0;
  }
  else {
    if (DAT_14cb0dcf1 != '\0') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0dce8);
      DAT_14cb0dcf1 = '\0';
      if (DAT_14c948580 == 0) goto LAB_14376f8cd;
    }
    _DAT_14cb0dcd0 = &PTR_LAB_149e668b0;
    if (DAT_14cb0dcd9 != '\0') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0dcd0);
      DAT_14cb0dcd9 = '\0';
      if (DAT_14c948580 == 0) goto LAB_14376f8d4;
    }
    _DAT_14cb0dcb8 = &PTR_LAB_149e668b0;
    if (DAT_14cb0dcc1 != '\0') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0dcb8);
      DAT_14cb0dcc1 = '\0';
      _DAT_14cb0dca0 = &PTR_LAB_149e668b0;
      if (DAT_14c948580 == 0) {
        DAT_14cb0dcc1 = 0;
        return;
      }
    }
    _DAT_14cb0dca0 = &PTR_LAB_149e668b0;
    if (DAT_14cb0dca9 == '\x01') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0dca0);
      DAT_14cb0dca9 = '\0';
    }
  }
  return;
}



// FUNCTION 14376f8fc FUN_14376f8fc body=1712 status=ok
// SIG undefined FUN_14376f8fc(void)

void FUN_14376f8fc(longlong param_1,char param_2,float param_3,float param_4,int *param_5,
                  int *param_6,longlong param_7,float param_8,float param_9,char param_10,
                  char param_11,undefined8 *param_12,uint *param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_3b8 [32];
  undefined8 **local_398;
  undefined8 *local_390;
  char local_381;
  undefined8 local_380;
  int local_378;
  undefined8 local_36c;
  undefined4 uStack_364;
  undefined8 *local_358;
  ulonglong uStack_350;
  undefined8 local_340;
  float local_338;
  undefined4 local_334;
  double local_330;
  double local_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined **local_308;
  double dStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  float local_2cc;
  undefined8 local_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  double local_270;
  undefined8 uStack_268;
  double local_260;
  undefined8 uStack_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 local_23c;
  double local_238;
  double local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_170;
  undefined1 local_108;
  longlong *local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_381 = param_2;
  if (((0.0 <= *(float *)(param_1 + 0x30)) && (param_7 != 0)) &&
     (0.0 < *(float *)(param_1 + 0x34) || *(float *)(param_1 + 0x34) == 0.0)) {
    local_338 = *(float *)(param_1 + 0x30) - (*(float *)(param_1 + 0x28) + param_3);
    local_340 = 0;
    local_334 = 0;
    local_320 = param_7;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_7);
    }
    dVar5 = (double)param_8;
    local_318 = 0;
    uStack_310 = 0;
    dVar6 = (double)param_9;
    local_398 = &local_358;
    local_358 = (undefined8 *)0x0;
    uStack_350 = 0;
    local_308 = (undefined **)*param_12;
    dStack_300 = (double)param_12[1];
    local_390 = (undefined8 *)0x0;
    local_330 = dVar5;
    local_328 = dVar6;
    FUN_14376f6ae(*(undefined8 *)(param_1 + 0x2e0));
    param_4 = param_4 + *(float *)(param_1 + 0x2c);
    if (param_11 != '\0') {
      fVar10 = 0.0;
      if ((longlong)(int)uStack_350 != 0) {
        lVar7 = 0;
        do {
          fVar10 = (float)((double)fVar10 + *(double *)((longlong)local_358 + lVar7 + 0x18));
          lVar7 = lVar7 + 0x20;
        } while ((longlong)(int)uStack_350 * 0x20 != lVar7);
      }
      param_4 = param_4 + fVar10 * -0.5;
    }
    param_3 = param_3 + *(float *)(param_1 + 0x28);
    uVar1 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x3a)];
    uVar2 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x39)];
    uVar3 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x38)];
    fVar10 = (float)*(byte *)(param_1 + 0x3b) * 0.003921569;
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
    dStack_300 = (double)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    uStack_2f8 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    local_2e0 = 0;
    local_2e8 = 0;
    local_2c8 = 0x3f80000000000000;
    local_2c0 = local_2c0 & 0xfffffffc;
    uStack_2b8 = uStack_2b8 & 0xfffffffe;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_274 = 0x3f800000;
    local_250 = 0;
    local_24e = 0;
    local_24c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240 = 0x3f800000;
    local_23c = 1;
    local_220 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    uStack_218 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    local_200 = 0;
    local_210 = 0;
    local_208 = 0;
    local_228 = &PTR_FUN_14aaeb770;
    local_1d8 = 0x3f800000;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0x3ff0000000000000;
    local_1b8 = 0x3ff0000000000000;
    local_1b0 = DAT_14ca94e18;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = (undefined4)DAT_14c8463f0;
    uStack_184 = DAT_14c8463f0._4_4_;
    uStack_180 = (undefined4)DAT_14c8463f8;
    uStack_17c = DAT_14c8463f8._4_4_;
    local_238 = 1.0;
    local_230 = 1.0;
    local_170 = param_7;
    local_108 = 0;
    local_2f0 = 0x200000000;
    local_308 = &PTR_FUN_14aaeb7f0;
    local_100 = DAT_14c844840;
    local_2d8 = uVar1;
    local_2d4 = uVar2;
    local_2d0 = uVar3;
    local_2cc = fVar10;
    local_270 = dStack_300;
    uStack_268 = uStack_2f8;
    local_260 = dStack_300;
    uStack_258 = uStack_2f8;
    local_1f8 = uVar1;
    local_1f4 = uVar2;
    local_1f0 = uVar3;
    local_1ec = fVar10;
    local_1e8 = local_220;
    uStack_1e0 = uStack_218;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_f8 = DAT_14c844848;
    local_2f0 = CONCAT44(2,(undefined4)local_2f0);
    local_2c0 = *param_13;
    uStack_2bc = param_13[1];
    uStack_2b8 = param_13[2];
    uStack_2b4 = param_13[3];
    local_2a0 = *(undefined8 *)(param_13 + 8);
    uStack_298 = *(undefined8 *)(param_13 + 10);
    local_290 = *(undefined8 *)(param_13 + 0xc);
    uStack_288 = *(undefined8 *)(param_13 + 0xe);
    uStack_2b0 = (undefined4)*(undefined8 *)(param_13 + 4);
    uStack_2ac = (undefined4)((ulonglong)*(undefined8 *)(param_13 + 4) >> 0x20);
    uStack_2a8 = (undefined4)*(undefined8 *)(param_13 + 6);
    uStack_2a4 = (undefined4)((ulonglong)*(undefined8 *)(param_13 + 6) >> 0x20);
    fVar10 = 0.0;
    fVar12 = 0.0;
    local_238 = dVar5;
    local_230 = dVar6;
    if ((longlong)(int)uStack_350 != 0) {
      lVar8 = (longlong)(int)uStack_350 << 5;
      lVar7 = (longlong)&local_36c + 4;
      puVar9 = local_358;
      do {
        fVar11 = param_3;
        if (param_10 != '\0') {
          fVar11 = (float)((double)puVar9[2] * -0.5 + (double)param_3);
        }
        if (local_381 == '\0') {
          local_380 = *puVar9;
          local_378 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            local_378 = 0;
          }
          local_390 = &local_380;
          local_398 = (undefined8 **)&local_36c;
          FUN_147d8e5d2(param_7,param_8,param_9,lVar7);
          fVar11 = (float)local_36c._4_4_;
        }
        else {
          FUN_140009b9a(lVar7,puVar9);
          FUN_140008f88(&local_100,lVar7);
          if ((longlong *)CONCAT44(uStack_364,local_36c._4_4_) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_364,local_36c._4_4_) + 0x10))();
          }
          lVar4 = *(longlong *)(param_1 + 0x2e0);
          (*(code *)local_308[1])(&local_308,lVar4,fVar11,param_4);
          if (*(int *)(lVar4 + 0xac) == 1) {
            FUN_14376e4da(lVar4,0);
          }
          fVar11 = (float)local_260;
        }
        if (fVar10 <= fVar11) {
          fVar10 = fVar11;
        }
        fVar11 = (float)FUN_140324d4e(param_7);
        param_4 = param_4 + fVar11 * param_9;
        fVar11 = (float)FUN_140324d4e(param_7);
        fVar12 = fVar12 + fVar11 * param_9;
        puVar9 = puVar9 + 4;
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
    }
    *param_5 = (int)fVar10;
    *param_6 = (int)fVar12;
    FUN_140b2399e(&local_308);
    FUN_147d6ce84(local_358,uStack_350 & 0xffffffff);
    if (local_358 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14376ffae FUN_14376ffae body=161 status=ok
// SIG undefined FUN_14376ffae(void)

void FUN_14376ffae(undefined8 param_1,longlong param_2,undefined4 *param_3,float *param_4,
                  float *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_78 [32];
  int *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    local_50 = &local_48;
    local_58 = &local_30;
    FUN_147d8e5d2(param_2,param_6,param_7,&local_2c);
    *param_4 = (float)local_2c;
    *param_5 = (float)local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143770050 FUN_143770050 body=12589 status=ok
// SIG undefined FUN_143770050(void)

void FUN_143770050(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  longlong *plVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 uVar35;
  longlong *plVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  float fVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar62;
  float fVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  float fVar70;
  float fVar71;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined1 *local_240;
  undefined1 local_238 [16];
  double local_228;
  longlong local_220;
  longlong local_218;
  longlong *local_210;
  float local_204;
  float local_200;
  float local_1fc;
  double local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  double local_1d0;
  double local_1c8;
  longlong *local_1c0;
  double local_1b8;
  longlong *local_1b0;
  double local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  float *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  double dStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 200),0);
  dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                   (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
  if ((dVar38 == 0.0) && (!NAN(dVar38))) {
    dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0xd0),0);
    dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                     (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
    if ((dVar38 == 0.0) && (!NAN(dVar38))) {
      dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0xd8),0);
      dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                       (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
      if ((dVar38 == 0.0) &&
         (dVar3 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168), !NAN(dVar38)))
      goto LAB_1437701ab;
    }
  }
  local_1f8 = *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0xe8);
  uStack_1f0 = 0;
  local_238._8_8_ = 0;
  local_238._0_8_ = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0xe0);
  dVar5 = *(double *)(param_1 + 200) * 0.01745329238474369;
  dVar6 = *(double *)(param_1 + 0xd0) * 0.01745329238474369;
  dVar7 = *(double *)(param_1 + 0xd8) * 0.01745329238474369;
  dVar38 = sin(dVar5);
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar7);
  sin(0.0);
  dVar5 = cos(dVar5);
  dVar6 = cos(dVar6);
  dVar7 = cos(dVar7);
  cos(0.0);
  dVar14 = local_1f8;
  dVar47 = dVar5 * dVar6;
  dVar11 = dVar3 * dVar5;
  dVar40 = dVar38 * dVar4 * dVar6 - dVar3 * dVar7;
  dVar12 = dVar38 * dVar4 * dVar3 + dVar6 * dVar7;
  dVar67 = -dVar4 * dVar5;
  dVar43 = -(dVar38 * dVar7 * dVar6 + dVar3 * dVar4);
  dVar64 = dVar6 * dVar4 - dVar3 * dVar38 * dVar7;
  local_228 = dVar5 * dVar7;
  dVar42 = local_228 * 0.0;
  dVar44 = dVar43 * 0.0;
  dVar45 = dVar64 * 0.0;
  dVar48 = ((dVar47 * -(double)local_238._0_8_ - dVar40 * local_1f8) - dVar44) + DAT_14c8464e0;
  dVar51 = ((dVar11 * -(double)local_238._0_8_ - dVar12 * local_1f8) - dVar45) + DAT_14c8464e8;
  dVar3 = DAT_14c8464e0 * 0.0;
  dVar4 = DAT_14c8464e8 * 0.0;
  dVar5 = ((-(double)local_238._0_8_ * dVar38 - dVar67 * local_1f8) - dVar42) + DAT_14c8464f0;
  dVar6 = ((-(double)local_238._0_8_ * 0.0 - local_1f8 * 0.0) - 0.0) + 1.0;
  dVar41 = DAT_14c8464f0 * 0.0;
  dVar7 = dVar47 + dVar40 * 0.0 + dVar44 + dVar3;
  dVar69 = dVar11 + dVar12 * 0.0 + dVar45 + dVar4;
  dVar59 = dVar38 + dVar67 * 0.0 + dVar42 + dVar41;
  dVar44 = dVar47 * 0.0 + dVar40 + dVar44 + dVar3;
  dVar45 = dVar11 * 0.0 + dVar12 + dVar45 + dVar4;
  dVar65 = dVar67 + dVar38 * 0.0 + dVar42 + dVar41;
  dVar3 = dVar47 * 0.0 + dVar40 * 0.0 + dVar43 + dVar3;
  dVar4 = dVar11 * 0.0 + dVar12 * 0.0 + dVar64 + dVar4;
  dVar41 = dVar38 * 0.0 + dVar67 * 0.0 + local_228 + dVar41;
  dVar11 = (double)local_238._0_8_ * 0.0 + dVar59 * 0.0 + dVar69 * 0.0 + dVar7 * 1.0;
  dVar12 = local_1f8 * 0.0 + dVar59 * 0.0 + dVar69 * 1.0 + dVar7 * 0.0;
  dVar60 = dVar59 * 1.0 + dVar69 * 0.0 + dVar7 * 0.0 + 0.0;
  dVar62 = dVar59 * 0.0 + dVar69 * 0.0 + dVar7 * 0.0 + 0.0;
  dVar40 = (double)local_238._0_8_ * 0.0 + dVar65 * 0.0 + dVar45 * 0.0 + dVar44 * 1.0;
  dVar42 = local_1f8 * 0.0 + dVar65 * 0.0 + dVar45 * 1.0 + dVar44 * 0.0;
  dVar66 = dVar65 * 1.0 + dVar45 * 0.0 + dVar44 * 0.0 + 0.0;
  dVar68 = dVar65 * 0.0 + dVar45 * 0.0 + dVar44 * 0.0 + 0.0;
  dVar38 = (double)local_238._0_8_ * 0.0 + dVar41 * 0.0 + dVar4 * 0.0 + dVar3 * 1.0;
  dVar45 = local_1f8 * 0.0 + dVar41 * 0.0 + dVar4 * 1.0 + dVar3 * 0.0;
  dVar56 = dVar41 * 1.0 + dVar4 * 0.0 + dVar3 * 0.0 + 0.0;
  dVar57 = dVar41 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + 0.0;
  local_1f8 = 0.0;
  uStack_1f0 = 0x3ff0000000000000;
  dVar41 = (double)local_238._0_8_ * dVar6 + dVar5 * 0.0 + dVar51 * 0.0 + dVar48 * 1.0;
  dVar47 = dVar14 * dVar6 + dVar5 * 0.0 + dVar51 * 1.0 + dVar48 * 0.0;
  dVar67 = dVar6 * 0.0 + dVar5 * 1.0 + dVar51 * 0.0 + dVar48 * 0.0;
  dVar69 = dVar6 * 1.0 + dVar5 * 0.0 + dVar51 * 0.0 + dVar48 * 0.0;
  dVar6 = dVar38 * 0.0;
  dVar7 = dVar45 * 0.0;
  dVar43 = dVar41 * 0.0;
  dVar44 = dVar47 * 0.0;
  dVar4 = dVar40 * 0.0 + dVar11 + dVar6 + dVar43;
  dVar5 = dVar42 * 0.0 + dVar12 + dVar7 + dVar44;
  dVar65 = dVar40 + dVar11 * 0.0 + dVar6 + dVar43;
  dVar46 = dVar42 + dVar12 * 0.0 + dVar7 + dVar44;
  dVar43 = dVar11 * 0.0 + dVar40 * 0.0 + dVar38 + dVar43;
  dVar44 = dVar12 * 0.0 + dVar42 * 0.0 + dVar45 + dVar44;
  dVar49 = -*(double *)(param_1 + 0x10);
  dVar52 = -*(double *)(param_1 + 0x10);
  dVar38 = *(double *)(param_1 + 8);
  dVar3 = *(double *)(param_1 + 8);
  dVar48 = dVar56 * 0.0;
  dVar51 = dVar57 * 0.0;
  dVar50 = ((dVar49 * dVar66 - dVar60 * dVar38) - dVar48) + dVar67;
  dVar53 = ((dVar52 * dVar68 - dVar62 * dVar3) - dVar51) + dVar69;
  dVar67 = dVar67 * 0.0;
  dVar69 = dVar69 * 0.0;
  dVar45 = dVar66 * 0.0 + dVar60 + dVar48 + dVar67;
  dVar14 = dVar68 * 0.0 + dVar62 + dVar51 + dVar69;
  dVar59 = dVar66 + dVar60 * 0.0 + dVar48 + dVar67;
  dVar64 = dVar68 + dVar62 * 0.0 + dVar51 + dVar69;
  dVar67 = dVar60 * 0.0 + dVar66 * 0.0 + dVar56 + dVar67;
  dVar69 = dVar62 * 0.0 + dVar68 * 0.0 + dVar57 + dVar69;
  dVar48 = *(double *)(param_1 + 8);
  dVar51 = *(double *)(param_1 + 0x10);
  dVar41 = ((dVar40 * dVar49 - dVar11 * dVar38) - dVar6) + dVar41;
  dVar47 = ((dVar42 * dVar52 - dVar12 * dVar3) - dVar7) + dVar47;
  local_178._0_8_ = dVar48 * dVar14 + dVar45 * 0.0 + dVar5 * 0.0 + dVar4 * 1.0;
  dVar38 = dVar51 * dVar14 + dVar45 * 0.0 + dVar5 * 1.0 + dVar4 * 0.0;
  local_238._8_4_ = SUB84(dVar38,0);
  local_238._0_8_ = local_178._0_8_;
  local_238._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  local_168 = dVar14 * 0.0 + dVar45 * 1.0 + dVar5 * 0.0 + dVar4 * 0.0;
  dVar4 = dVar14 * 1.0 + dVar45 * 0.0 + dVar5 * 0.0 + dVar4 * 0.0;
  dStack_158 = dVar48 * dVar64 + dVar59 * 0.0 + dVar46 * 0.0 + dVar65 * 1.0;
  dVar38 = dVar51 * dVar64 + dVar59 * 0.0 + dVar46 * 1.0 + dVar65 * 0.0;
  dStack_148 = dVar64 * 0.0 + dVar59 * 1.0 + dVar46 * 0.0 + dVar65 * 0.0;
  dStack_140 = dVar64 * 1.0 + dVar59 * 0.0 + dVar46 * 0.0 + dVar65 * 0.0;
  dVar3 = dVar51 * dVar69 + dVar67 * 0.0 + dVar44 * 1.0 + dVar43 * 0.0;
  local_128 = dVar69 * 0.0 + dVar67 * 1.0 + dVar44 * 0.0 + dVar43 * 0.0;
  dStack_120 = dVar69 * 1.0 + dVar67 * 0.0 + dVar44 * 0.0 + dVar43 * 0.0;
  local_118 = dVar48 * dVar53 + dVar50 * 0.0 + dVar47 * 0.0 + dVar41 * 1.0;
  dStack_110 = dVar51 * dVar53 + dVar50 * 0.0 + dVar47 * 1.0 + dVar41 * 0.0;
  local_108 = dVar53 * 0.0 + dVar50 * 1.0 + dVar47 * 0.0 + dVar41 * 0.0;
  dStack_100 = dVar53 * 1.0 + dVar50 * 0.0 + dVar47 * 0.0 + dVar41 * 0.0;
  local_178._8_8_ = local_238._8_8_;
  auVar13._8_4_ = SUB84(dVar4,0);
  auVar13._0_8_ = local_168;
  auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_160 = auVar13._8_8_;
  auVar61._8_4_ = SUB84(dVar38,0);
  auVar61._0_8_ = dStack_158;
  auVar61._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  uStack_150 = auVar61._8_8_;
  local_138._8_4_ = SUB84(dVar3,0);
  local_138._0_8_ = dVar48 * dVar69 + dVar67 * 0.0 + dVar44 * 0.0 + dVar43 * 1.0;
  local_138._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  FUN_147d8e05e(param_2);
  dVar3 = local_168;
LAB_1437701ab:
  local_168._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    local_180 = *(undefined4 *)(param_1 + 0x38);
    local_188 = *(undefined8 *)(param_1 + 0x30);
    fVar55 = *(float *)(param_1 + 0x3c) * *param_2;
    local_210 = *(longlong **)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
      local_210 = DAT_14ca94e18;
    }
    plVar30 = *(longlong **)(param_1 + 0xa8);
    if (*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) {
      plVar30 = DAT_14ca94e18;
    }
    plVar27 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar27 = DAT_14ca94e18;
    }
    plVar26 = *(longlong **)(param_1 + 0xb8);
    if (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0) {
      plVar26 = DAT_14ca94e18;
    }
    plVar36 = *(longlong **)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
      plVar36 = DAT_14ca94e18;
    }
    local_250 = (longlong *)local_178;
    local_178 = ZEXT816(0);
    local_168._0_4_ = 0;
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)(param_1 + 0x1c));
    local_248 = CONCAT31(local_248._1_3_,1);
    local_1e0 = *(longlong *)(param_1 + 0x98);
    lVar25 = FUN_14011db44(param_2,1,*(undefined8 *)(param_1 + 0x28));
    if (*(longlong *)(param_2 + 0x1a) == 0) {
      local_238._0_4_ = 0xffffffff;
    }
    else {
      local_238._0_4_ = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + 0x18);
    }
    dVar38 = (double)*(float *)(param_1 + 0x70);
    fVar63 = (float)(*(double *)(param_1 + 8) * dVar38);
    fVar71 = (float)(*(double *)(param_1 + 0x10) * dVar38);
    fVar58 = (float)((*(double *)(param_1 + 8) + *(double *)(param_1 + 0x40)) * dVar38);
    fVar70 = (float)((*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x48)) * dVar38);
    local_190 = param_2;
    uVar18 = (**(code **)(*plVar30 + 0x30))(plVar30);
    dVar38 = *(double *)(param_1 + 0x50);
    uVar19 = (**(code **)(*plVar30 + 0x38))(plVar30);
    local_1b8 = (double)uVar19 * *(double *)(param_1 + 0x58);
    uVar19 = (**(code **)(*plVar26 + 0x30))(plVar26);
    local_1d0 = (double)uVar19 * *(double *)(param_1 + 0x50);
    uVar20 = (**(code **)(*plVar26 + 0x38))(plVar26);
    dVar3 = *(double *)(param_1 + 0x58);
    uVar21 = (**(code **)(*plVar27 + 0x30))(plVar27);
    dVar4 = *(double *)(param_1 + 0x50);
    uVar19 = (**(code **)(*plVar27 + 0x38))(plVar27);
    local_1a8 = (double)uVar19 * *(double *)(param_1 + 0x58);
    uVar19 = (**(code **)(*plVar36 + 0x30))(plVar36);
    local_1c8 = (double)uVar19 * *(double *)(param_1 + 0x50);
    uVar22 = (**(code **)(*plVar36 + 0x38))(plVar36);
    plVar16 = local_210;
    dVar5 = *(double *)(param_1 + 0x58);
    local_1f8 = (double)CONCAT44(local_1f8._4_4_,fVar63);
    local_1fc = fVar58;
    uVar23 = (**(code **)(*local_210 + 0x30))(local_210);
    dVar6 = *(double *)(param_1 + 0x60);
    local_228 = (double)CONCAT44(local_228._4_4_,fVar70);
    local_220 = CONCAT44(local_220._4_4_,fVar71);
    uVar24 = (**(code **)(*plVar16 + 0x38))(plVar16);
    dVar7 = *(double *)(param_1 + 0x68);
    lVar33 = lVar25 + 0x180;
    uVar19 = *(uint *)(lVar25 + 0x294);
    if ((int)uVar19 < 0x24) {
      FUN_1447e6282(lVar33,0x24);
      uVar19 = *(uint *)(lVar25 + 0x294);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar54 = (float)((double)uVar20 * dVar3) + (float)local_220;
    fVar37 = (float)((double)uVar18 * dVar38) + local_1f8._0_4_;
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    local_1b0 = plVar36;
    local_1a0 = plVar30;
    if (uVar19 < iVar8 + 1U) {
      FUN_14021e72e(lVar33,iVar8);
    }
    fVar17 = local_1fc;
    fVar58 = (float)((double)(fVar58 - fVar63) / ((double)uVar23 * dVar6));
    lVar31 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar31 = lVar33;
    }
    lVar28 = (longlong)iVar8 * 0x40;
    *(float *)(lVar31 + lVar28) = fVar37;
    *(float *)(lVar31 + 4 + lVar28) = fVar54;
    *(undefined4 *)(lVar31 + 8 + lVar28) = 0;
    *(undefined4 *)(lVar31 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)(lVar31 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar31 + 0x20 + lVar28) = 0;
    *(undefined8 *)(lVar31 + 0x28 + lVar28) = local_188;
    *(undefined4 *)(lVar31 + 0x30 + lVar28) = local_180;
    *(float *)(lVar31 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)(lVar31 + 0x38 + lVar28) = local_238._0_4_;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar39 = local_1fc - (float)((double)uVar21 * dVar4);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    fVar63 = local_228._0_4_;
    local_1c0 = plVar26;
    uVar35 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(lVar33,iVar9);
      fVar63 = local_228._0_4_;
      uVar35 = local_238._0_4_;
    }
    fVar70 = (float)((double)(fVar70 - fVar71) / ((double)uVar24 * dVar7));
    lVar31 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar31 = lVar33;
    }
    lVar28 = (longlong)iVar9 * 0x40;
    *(float *)(lVar31 + lVar28) = fVar39;
    *(float *)(lVar31 + 4 + lVar28) = fVar54;
    *(undefined4 *)(lVar31 + 8 + lVar28) = 0;
    *(undefined4 *)(lVar31 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)(lVar31 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)(lVar31 + 0x20 + lVar28) = fVar58;
    *(undefined4 *)(lVar31 + 0x24 + lVar28) = 0;
    *(undefined8 *)(lVar31 + 0x28 + lVar28) = local_188;
    *(undefined4 *)(lVar31 + 0x30 + lVar28) = local_180;
    *(float *)(lVar31 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)(lVar31 + 0x38 + lVar28) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar63 = fVar63 - (float)((double)uVar22 * dVar5);
    iVar10 = *(int *)(lVar25 + 0x290);
    lVar31 = (longlong)iVar10;
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    local_1e4 = fVar54;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(lVar33,iVar10);
      uVar35 = local_238._0_4_;
    }
    lVar28 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar28 = lVar33;
    }
    lVar29 = lVar31 * 0x40;
    *(float *)(lVar28 + lVar29) = fVar37;
    *(float *)(lVar28 + 4 + lVar29) = fVar63;
    *(undefined4 *)(lVar28 + 8 + lVar29) = 0;
    *(undefined4 *)(lVar28 + 0xc + lVar29) = uVar2;
    auVar61 = ZEXT416(0);
    *(undefined1 (*) [16])(lVar28 + 0x10 + lVar29) = auVar61;
    *(undefined4 *)(lVar28 + 0x20 + lVar29) = 0;
    *(float *)(lVar28 + 0x24 + lVar29) = fVar70;
    *(undefined8 *)(lVar28 + 0x28 + lVar29) = local_188;
    *(undefined4 *)(lVar28 + 0x30 + lVar29) = local_180;
    *(float *)(lVar28 + 0x34 + lVar29) = fVar55;
    *(undefined4 *)(lVar28 + 0x38 + lVar29) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    local_218 = lVar31;
    local_200 = fVar37;
    local_198 = plVar27;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(lVar33,iVar10);
      uVar35 = local_238._0_4_;
    }
    plVar30 = local_210;
    local_238._0_4_ = uVar35;
    lVar31 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar31 = lVar33;
    }
    lVar28 = (longlong)iVar10 * 0x40;
    *(float *)(lVar31 + lVar28) = fVar39;
    *(float *)(lVar31 + 4 + lVar28) = fVar63;
    *(undefined4 *)(lVar31 + 8 + lVar28) = 0;
    *(undefined4 *)(lVar31 + 0xc + lVar28) = uVar2;
    *(undefined1 (*) [16])(lVar31 + 0x10 + lVar28) = auVar61;
    *(float *)(lVar31 + 0x20 + lVar28) = fVar58;
    *(float *)(lVar31 + 0x24 + lVar28) = fVar70;
    *(undefined8 *)(lVar31 + 0x28 + lVar28) = local_188;
    *(undefined4 *)(lVar31 + 0x30 + lVar28) = local_180;
    *(float *)(lVar31 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)(lVar31 + 0x38 + lVar28) = uVar35;
    local_168._0_4_ = 0;
    uVar15 = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = local_210;
    local_240 = local_178;
    local_204 = fVar39;
    local_1e8 = fVar63;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,iVar9,iVar10);
    local_168._0_4_ = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = plVar30;
    local_240 = local_178;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,iVar10,local_218);
    uVar19 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))();
    dVar38 = *(double *)(param_1 + 0x88);
    dVar3 = *(double *)(param_1 + 0x78);
    uVar18 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x38))();
    dVar4 = *(double *)(param_1 + 0x90);
    dVar5 = *(double *)(param_1 + 0x80);
    fVar58 = (float)((double)(float)((dVar38 - dVar3) * (double)uVar19) *
                     *(double *)(param_1 + 0xf0) * *(double *)(param_1 + 0x50));
    dVar38 = *(double *)(param_1 + 0xf8);
    dVar3 = *(double *)(param_1 + 0x58);
    dVar6 = *(double *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(lVar33,iVar8);
    }
    fVar63 = (float)((double)(float)((dVar4 - dVar5) * (double)uVar18) * dVar38 * dVar3);
    lVar31 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar31 = lVar33;
    }
    lVar28 = (longlong)iVar8 * 0x40;
    *(float *)(lVar31 + lVar28) = local_1f8._0_4_;
    *(float *)(lVar31 + 4 + lVar28) = (float)local_220;
    *(undefined4 *)(lVar31 + 8 + lVar28) = 0;
    *(undefined4 *)(lVar31 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)(lVar31 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)(lVar31 + 0x20 + lVar28) = (float)dVar6;
    *(float *)(lVar31 + 0x24 + lVar28) = (float)dVar5;
    *(undefined8 *)(lVar31 + 0x28 + lVar28) = local_188;
    *(undefined4 *)(lVar31 + 0x30 + lVar28) = local_180;
    *(float *)(lVar31 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)(lVar31 + 0x38 + lVar28) = local_238._0_4_;
    dVar38 = *(double *)(param_1 + 0x80);
    dVar3 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar70 = local_1f8._0_4_ + fVar58;
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar31 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(lVar33,iVar9);
    }
    lVar28 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar28 = lVar33;
    }
    lVar29 = lVar31 * 0x40;
    *(float *)(lVar28 + lVar29) = fVar70;
    *(float *)(lVar28 + 4 + lVar29) = (float)local_220;
    *(undefined4 *)(lVar28 + 8 + lVar29) = 0;
    *(undefined4 *)(lVar28 + 0xc + lVar29) = uVar2;
    puVar1 = (undefined8 *)(lVar28 + 0x10 + lVar29);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)(lVar28 + 0x20 + lVar29) = (float)(dVar3 * dVar4);
    *(float *)(lVar28 + 0x24 + lVar29) = (float)dVar38;
    *(undefined8 *)(lVar28 + 0x28 + lVar29) = local_188;
    *(undefined4 *)(lVar28 + 0x30 + lVar29) = local_180;
    *(float *)(lVar28 + 0x34 + lVar29) = fVar55;
    *(undefined4 *)(lVar28 + 0x38 + lVar29) = local_238._0_4_;
    dVar3 = *(double *)(param_1 + 0x90) * *(double *)(param_1 + 0xf8);
    dVar38 = *(double *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar71 = (float)local_220 + fVar63;
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar28 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    local_218 = CONCAT44(local_218._4_4_,fVar71);
    uVar35 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(SUB84(dVar3,0),iVar9);
      fVar71 = (float)local_218;
      uVar35 = local_238._0_4_;
    }
    lVar29 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar29 = lVar33;
    }
    lVar34 = lVar28 * 0x40;
    *(float *)(lVar29 + lVar34) = local_1f8._0_4_;
    *(float *)(lVar29 + 4 + lVar34) = fVar71;
    *(undefined4 *)(lVar29 + 8 + lVar34) = 0;
    *(undefined4 *)(lVar29 + 0xc + lVar34) = uVar2;
    puVar1 = (undefined8 *)(lVar29 + 0x10 + lVar34);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)(lVar29 + 0x20 + lVar34) = (float)dVar38;
    *(float *)(lVar29 + 0x24 + lVar34) = (float)dVar3;
    *(undefined8 *)(lVar29 + 0x28 + lVar34) = local_188;
    *(undefined4 *)(lVar29 + 0x30 + lVar34) = local_180;
    *(float *)(lVar29 + 0x34 + lVar34) = fVar55;
    *(undefined4 *)(lVar29 + 0x38 + lVar34) = uVar35;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x88) * *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    local_1d8 = lVar28;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(SUB84(dVar4,0),iVar9,lVar31);
      fVar71 = (float)local_218;
      uVar35 = local_238._0_4_;
    }
    lVar28 = local_1e0;
    lVar29 = *(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      lVar29 = lVar33;
    }
    lVar34 = (longlong)iVar9 * 0x40;
    *(float *)(lVar29 + lVar34) = fVar70;
    *(float *)(lVar29 + 4 + lVar34) = fVar71;
    *(undefined4 *)(lVar29 + 8 + lVar34) = 0;
    *(undefined4 *)(lVar29 + 0xc + lVar34) = uVar2;
    puVar1 = (undefined8 *)(lVar29 + 0x10 + lVar34);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)(lVar29 + 0x20 + lVar34) = (float)dVar4;
    *(float *)(lVar29 + 0x24 + lVar34) = (float)(dVar38 * dVar3);
    *(undefined8 *)(lVar29 + 0x28 + lVar34) = local_188;
    *(undefined4 *)(lVar29 + 0x30 + lVar34) = local_180;
    *(float *)(lVar29 + 0x34 + lVar34) = fVar55;
    *(undefined4 *)(lVar29 + 0x38 + lVar34) = uVar35;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)local_1e0;
    local_240 = local_178;
    local_210 = (longlong *)lVar33;
    FUN_14002b732(lVar25,iVar8,lVar31,iVar9);
    plVar30 = local_210;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)lVar28;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar9,local_1d8);
    dVar38 = *(double *)(param_1 + 0x80);
    dVar3 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0x78);
    dVar5 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar58 = fVar17 - fVar58;
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = fVar58;
    *(float *)((longlong)plVar27 + 4 + lVar33) = (float)local_220;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar33) = ZEXT416(0);
    *(float *)((longlong)plVar27 + 0x20 + lVar33) = (float)(dVar3 - (dVar3 - dVar4) * dVar5);
    *(float *)((longlong)plVar27 + 0x24 + lVar33) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = uVar35;
    dVar38 = *(double *)(param_1 + 0x80);
    dVar3 = *(double *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar33 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar17;
    *(float *)((longlong)plVar27 + 4 + lVar31) = (float)local_220;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar31) = ZEXT416(0);
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)dVar3;
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x88);
    dVar5 = *(double *)(param_1 + 0x78);
    dVar6 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar58;
    *(float *)((longlong)plVar27 + 4 + lVar31) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)(dVar4 - (dVar4 - dVar5) * dVar6);
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)(dVar38 * dVar3);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10,lVar33);
      uVar35 = local_238._0_4_;
    }
    lVar31 = local_1e0;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar28 = (longlong)iVar10 * 0x40;
    *(float *)((longlong)plVar27 + lVar28) = fVar17;
    *(float *)((longlong)plVar27 + 4 + lVar28) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar28) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar28) = (float)dVar4;
    *(float *)((longlong)plVar27 + 0x24 + lVar28) = (float)(dVar38 * dVar3);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar28) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar28) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar28) = uVar35;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)local_1e0;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,lVar33,iVar10);
    plVar30 = local_210;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)lVar31;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar10,iVar9);
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x80);
    dVar4 = *(double *)(param_1 + 0xf8);
    dVar5 = *(double *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    fVar63 = local_228._0_4_ - fVar63;
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = local_1f8._0_4_;
    *(float *)((longlong)plVar27 + 4 + lVar33) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar33);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar33) = (float)dVar5;
    *(float *)((longlong)plVar27 + 0x24 + lVar33) = (float)(dVar38 - (dVar38 - dVar3) * dVar4);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x80);
    dVar4 = *(double *)(param_1 + 0xf8);
    dVar5 = *(double *)(param_1 + 0x88);
    dVar6 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar33 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    fVar71 = local_228._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      fVar71 = local_228._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar31) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)(dVar5 * dVar6);
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)(dVar38 - (dVar38 - dVar3) * dVar4);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = local_238._0_4_;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    uVar35 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      fVar71 = local_228._0_4_;
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = local_1f8._0_4_;
    *(float *)((longlong)plVar27 + 4 + lVar31) = fVar71;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)dVar3;
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10,lVar33);
      fVar71 = local_228._0_4_;
      uVar35 = local_238._0_4_;
    }
    lVar31 = local_1e0;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar28 = (longlong)iVar10 * 0x40;
    *(float *)((longlong)plVar27 + lVar28) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar28) = fVar71;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar28) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar28) = (float)(dVar3 * dVar4);
    *(float *)((longlong)plVar27 + 0x24 + lVar28) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar28) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar28) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar28) = uVar35;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)local_1e0;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,lVar33,iVar10);
    plVar30 = local_210;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)lVar31;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar10,iVar9);
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x80);
    dVar4 = *(double *)(param_1 + 0xf8);
    dVar5 = *(double *)(param_1 + 0x88);
    dVar6 = *(double *)(param_1 + 0x78);
    dVar7 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = fVar58;
    *(float *)((longlong)plVar27 + 4 + lVar33) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar33);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar33) = (float)(dVar5 - (dVar5 - dVar6) * dVar7);
    *(float *)((longlong)plVar27 + 0x24 + lVar33) = (float)(dVar38 - (dVar38 - dVar3) * dVar4);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x80);
    dVar4 = *(double *)(param_1 + 0xf8);
    dVar5 = *(double *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = fVar17;
    *(float *)((longlong)plVar27 + 4 + lVar33) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar33);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar33) = (float)dVar5;
    *(float *)((longlong)plVar27 + 0x24 + lVar33) = (float)(dVar38 - (dVar38 - dVar3) * dVar4);
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0x78);
    dVar5 = *(double *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    lVar33 = (longlong)iVar10;
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    uVar35 = local_228._0_4_;
    uVar32 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10);
      uVar35 = local_228._0_4_;
      uVar32 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar58;
    *(undefined4 *)((longlong)plVar27 + 4 + lVar31) = uVar35;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)(dVar3 - (dVar3 - dVar4) * dVar5);
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar32;
    dVar38 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    local_1d8 = lVar33;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10);
      uVar35 = local_228._0_4_;
      uVar32 = local_238._0_4_;
    }
    lVar33 = local_1e0;
    fVar71 = (float)local_1d0;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = (longlong)iVar10 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = local_1fc;
    *(undefined4 *)((longlong)plVar27 + 4 + lVar31) = uVar35;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = (float)dVar3;
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = (float)dVar38;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar32;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)local_1e0;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar9,iVar10);
    plVar30 = local_210;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = (longlong *)lVar33;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar10,local_1d8);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    fVar71 = (fVar58 - fVar70) / fVar71;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar33) = (float)local_220;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar33);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar33) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = uVar32;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    lVar33 = (longlong)*(int *)(lVar25 + 0x290);
    uVar19 = *(int *)(lVar25 + 0x290) + 1;
    *(uint *)(lVar25 + 0x290) = uVar19;
    if (*(uint *)(lVar25 + 0x294) < uVar19) {
      FUN_14021e72e(plVar30);
      uVar32 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar58;
    *(float *)((longlong)plVar27 + 4 + lVar31) = (float)local_220;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = fVar71;
    *(undefined4 *)((longlong)plVar27 + 0x24 + lVar31) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar32;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar31 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar32 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar28 = lVar31 * 0x40;
    *(float *)((longlong)plVar27 + lVar28) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar28) = local_1e4;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar28) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar28) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar28) = 0x3f80000000000000;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar28) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar28) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar28) = uVar32;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    local_220 = lVar31;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9,lVar33);
      uVar32 = local_238._0_4_;
    }
    plVar27 = local_1c0;
    fVar37 = (float)local_1c8;
    plVar26 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar26 = plVar30;
    }
    lVar31 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar26 + lVar31) = fVar58;
    *(float *)((longlong)plVar26 + 4 + lVar31) = local_1e4;
    *(undefined4 *)((longlong)plVar26 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar26 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar26 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar26 + 0x20 + lVar31) = fVar71;
    *(undefined4 *)((longlong)plVar26 + 0x24 + lVar31) = 0x3f800000;
    *(undefined8 *)((longlong)plVar26 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar26 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar26 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar26 + 0x38 + lVar31) = uVar32;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = local_1c0;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,lVar33,iVar9);
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = plVar27;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar9,local_220);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    fVar71 = local_1fc;
    fVar37 = (fVar58 - fVar70) / fVar37;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar33) = local_1e8;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar33);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar33) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    lVar33 = (longlong)*(int *)(lVar25 + 0x290);
    uVar19 = *(int *)(lVar25 + 0x290) + 1;
    *(uint *)(lVar25 + 0x290) = uVar19;
    if (*(uint *)(lVar25 + 0x294) < uVar19) {
      FUN_14021e72e(plVar30);
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar58;
    *(float *)((longlong)plVar27 + 4 + lVar31) = local_1e8;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(float *)((longlong)plVar27 + 0x20 + lVar31) = fVar37;
    *(undefined4 *)((longlong)plVar27 + 0x24 + lVar31) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = local_238._0_4_;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar31 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    uVar35 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar28 = lVar31 * 0x40;
    *(float *)((longlong)plVar27 + lVar28) = fVar70;
    *(float *)((longlong)plVar27 + 4 + lVar28) = local_228._0_4_;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar28) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar28) = uVar2;
    auVar61 = ZEXT416(0);
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar28) = auVar61;
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar28) = 0x3f80000000000000;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar28) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar28) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar28) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar28) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    local_220 = lVar31;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9,lVar33);
      uVar35 = local_238._0_4_;
    }
    plVar27 = local_1b0;
    plVar26 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar26 = plVar30;
    }
    lVar31 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar26 + lVar31) = fVar58;
    *(float *)((longlong)plVar26 + 4 + lVar31) = local_228._0_4_;
    *(undefined4 *)((longlong)plVar26 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar26 + 0xc + lVar31) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar26 + 0x10 + lVar31) = auVar61;
    *(float *)((longlong)plVar26 + 0x20 + lVar31) = fVar37;
    *(undefined4 *)((longlong)plVar26 + 0x24 + lVar31) = 0x3f800000;
    *(undefined8 *)((longlong)plVar26 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar26 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar26 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar26 + 0x38 + lVar31) = uVar35;
    local_168._0_4_ = 0;
    uVar15 = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = local_1b0;
    local_240 = local_178;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,lVar33,iVar9);
    local_168._0_4_ = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = plVar27;
    local_240 = local_178;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,iVar9,local_220);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    fVar58 = (float)local_1b8;
    fVar70 = fVar63 - (float)local_218;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = local_1f8._0_4_;
    *(float *)((longlong)plVar27 + 4 + lVar33) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar33) = ZEXT416(0);
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar33) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
    }
    fVar58 = fVar70 / fVar58;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = local_200;
    *(float *)((longlong)plVar27 + 4 + lVar33) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar33) = ZEXT416(0);
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar33) = 0x3f800000;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = local_238._0_4_;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    lVar33 = (longlong)iVar10;
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    uVar35 = local_238._0_4_;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10);
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = local_1f8._0_4_;
    *(float *)((longlong)plVar27 + 4 + lVar31) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    auVar61 = ZEXT416(0);
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar31) = auVar61;
    *(undefined4 *)((longlong)plVar27 + 0x20 + lVar31) = 0;
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = fVar58;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    local_1f8 = (double)lVar33;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10);
      uVar35 = local_238._0_4_;
    }
    plVar27 = local_1a0;
    plVar26 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar26 = plVar30;
    }
    lVar33 = (longlong)iVar10 * 0x40;
    *(float *)((longlong)plVar26 + lVar33) = local_200;
    *(float *)((longlong)plVar26 + 4 + lVar33) = fVar63;
    *(undefined4 *)((longlong)plVar26 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar26 + 0xc + lVar33) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar26 + 0x10 + lVar33) = auVar61;
    *(undefined4 *)((longlong)plVar26 + 0x20 + lVar33) = 0x3f800000;
    *(float *)((longlong)plVar26 + 0x24 + lVar33) = fVar58;
    *(undefined8 *)((longlong)plVar26 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar26 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar26 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar26 + 0x38 + lVar33) = uVar35;
    local_168._0_4_ = 0;
    uVar15 = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = local_1a0;
    local_240 = local_178;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,iVar9,iVar10);
    local_168._0_4_ = 0;
    dStack_158 = 0.0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = plVar27;
    local_240 = local_178;
    local_178 = auVar61;
    uStack_160 = uVar15;
    uStack_150 = uVar15;
    FUN_14002b732(lVar25,iVar8,iVar10,local_1f8);
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar8 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar8 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar8 + 1U) {
      FUN_14021e72e(plVar30,iVar8);
    }
    fVar58 = (float)local_1a8;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar33 = (longlong)iVar8 * 0x40;
    *(float *)((longlong)plVar27 + lVar33) = local_204;
    *(float *)((longlong)plVar27 + 4 + lVar33) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar33) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar33) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar33) = ZEXT416(0);
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar33) = 0;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar33) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar33) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar33) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar33) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    lVar33 = (longlong)iVar9;
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar35 = local_238._0_4_;
    }
    fVar70 = fVar70 / fVar58;
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = lVar33 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = fVar71;
    *(float *)((longlong)plVar27 + 4 + lVar31) = (float)local_218;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    *(undefined1 (*) [16])((longlong)plVar27 + 0x10 + lVar31) = ZEXT416(0);
    *(undefined8 *)((longlong)plVar27 + 0x20 + lVar31) = 0x3f800000;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar9 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar9 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar9 + 1U) {
      FUN_14021e72e(plVar30,iVar9);
      uVar35 = local_238._0_4_;
    }
    plVar27 = (longlong *)*(longlong *)(lVar25 + 0x280);
    if (*(longlong *)(lVar25 + 0x280) == 0) {
      plVar27 = plVar30;
    }
    lVar31 = (longlong)iVar9 * 0x40;
    *(float *)((longlong)plVar27 + lVar31) = local_204;
    *(float *)((longlong)plVar27 + 4 + lVar31) = fVar63;
    *(undefined4 *)((longlong)plVar27 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar27 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar27 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)plVar27 + 0x20 + lVar31) = 0;
    *(float *)((longlong)plVar27 + 0x24 + lVar31) = fVar70;
    *(undefined8 *)((longlong)plVar27 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar27 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar27 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar27 + 0x38 + lVar31) = uVar35;
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar25 + 0x290);
    *(uint *)(lVar25 + 0x290) = iVar10 + 1U;
    if (*(uint *)(lVar25 + 0x294) < iVar10 + 1U) {
      FUN_14021e72e(plVar30,iVar10,lVar33);
      uVar35 = local_238._0_4_;
    }
    plVar27 = local_198;
    if (*(longlong *)(lVar25 + 0x280) != 0) {
      plVar30 = (longlong *)*(longlong *)(lVar25 + 0x280);
    }
    lVar31 = (longlong)iVar10 * 0x40;
    *(float *)((longlong)plVar30 + lVar31) = fVar71;
    *(float *)((longlong)plVar30 + 4 + lVar31) = fVar63;
    *(undefined4 *)((longlong)plVar30 + 8 + lVar31) = 0;
    *(undefined4 *)((longlong)plVar30 + 0xc + lVar31) = uVar2;
    puVar1 = (undefined8 *)((longlong)plVar30 + 0x10 + lVar31);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)plVar30 + 0x20 + lVar31) = 0x3f800000;
    *(float *)((longlong)plVar30 + 0x24 + lVar31) = fVar70;
    *(undefined8 *)((longlong)plVar30 + 0x28 + lVar31) = local_188;
    *(undefined4 *)((longlong)plVar30 + 0x30 + lVar31) = local_180;
    *(float *)((longlong)plVar30 + 0x34 + lVar31) = fVar55;
    *(undefined4 *)((longlong)plVar30 + 0x38 + lVar31) = uVar35;
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = local_198;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,lVar33,iVar10);
    local_168._0_4_ = 0;
    local_178 = ZEXT816(0);
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    dStack_148 = 0.0;
    local_248 = *(undefined4 *)(param_1 + 0x1c);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = plVar27;
    local_240 = local_178;
    FUN_14002b732(lVar25,iVar8,iVar10,iVar9);
    dVar3 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168);
    param_2 = local_190;
  }
  local_168 = dVar3;
  dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 200),0);
  dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                   (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
  if ((dVar38 == 0.0) && (!NAN(dVar38))) {
    dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0xd0),0);
    dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                     (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
    if ((dVar38 == 0.0) && (!NAN(dVar38))) {
      dVar38 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0xd8));
      dVar38 = (double)(~-(ulonglong)(dVar38 < 0.0) & (ulonglong)dVar38 |
                       (ulonglong)(dVar38 + 360.0) & -(ulonglong)(dVar38 < 0.0));
      if ((dVar38 == 0.0) && (!NAN(dVar38))) {
        if ((local_f0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  param_2[0xc] = (float)((int)param_2[0xc] + -1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_278);
}



// FUNCTION 143773234 FUN_143773234 body=1454 status=ok
// SIG undefined FUN_143773234(void)

void FUN_143773234(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong local_180;
  undefined1 local_178;
  longlong local_168;
  int local_160;
  int local_15c;
  longlong local_158;
  double *local_150;
  longlong local_148;
  double *local_140;
  longlong local_138;
  int *local_130;
  longlong local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined4 *local_100;
  float *local_f8;
  float *local_f0;
  longlong **local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  uVar7 = DAT_14c8463f8._4_4_;
  uVar6 = (undefined4)DAT_14c8463f8;
  uVar5 = DAT_14c8463f0._4_4_;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  uVar3 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar3 != 0) {
    local_b8 = 0.0;
    dStack_b0 = 0.0;
    if (*(longlong *)(param_2 + 0x68) == 0) {
      local_bc = 0xffffffff;
    }
    else {
      local_bc = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    local_c8 = (longlong *)0x0;
    if (0 < (int)uVar3) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x198) + 0x6c);
      fVar1 = *(float *)(param_1 + 0x40);
      dVar2 = *(double *)(param_1 + 0xd0);
      local_150 = (double *)(param_1 + 0xa8);
      local_148 = param_1 + 0x50;
      local_15c = uVar3 * 2;
      local_160 = uVar3 * 4;
      fVar17 = 1.0;
      uVar15 = 0;
      local_168 = 0;
      fVar18 = fVar17;
      do {
        uVar8 = FUN_140eee8d6(*(undefined8 *)(param_1 + 0x198),
                              *(undefined2 *)(*param_3 + uVar15 * 2));
        if ((int)(uint)uVar8 < *(int *)(*(longlong *)(param_1 + 0x198) + 0x40)) {
          piVar13 = (int *)((ulonglong)((uint)uVar8 * 0x18) +
                           *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x38));
          if ((*(double *)(param_1 + 0xb0) == 0.0) && (!NAN(*(double *)(param_1 + 0xb0)))) {
            fVar16 = (float)FUN_140324d4e();
            *(double *)(param_1 + 0xb0) = (double)fVar16 * *(double *)(param_1 + 0xd8);
          }
          uVar8 = *(ushort *)(*param_3 + uVar15 * 2);
          if (((uVar8 - 10 < 4) || (uVar8 - 0x2028 < 2)) || (uVar8 == 0x85)) {
            local_b8 = 0.0;
            fVar16 = (float)FUN_140324d4e(*(undefined8 *)(param_1 + 0x198));
            dStack_b0 = (double)fVar16 * *(double *)(param_1 + 0xd8) + dStack_b0;
            fVar16 = (float)FUN_140324d4e(*(undefined8 *)(param_1 + 0x198));
            *(double *)(param_1 + 0xb0) =
                 (double)fVar16 * *(double *)(param_1 + 0xd8) + *(double *)(param_1 + 0xb0);
          }
          else if ((((int)(uint)*(byte *)(piVar13 + 4) <
                     *(int *)(*(longlong *)(param_1 + 0x198) + 0x50)) &&
                   (local_c8 = *(longlong **)
                                (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x48) +
                                (ulonglong)*(byte *)(piVar13 + 4) * 8), local_c8 != (longlong *)0x0)
                   ) && (lVar10 = FUN_1447b4020(), lVar10 != 0)) {
            local_158 = param_2;
            lVar10 = FUN_1447b4020(local_c8);
            if ((local_168 != lVar10) || (*(longlong *)(param_1 + 400) == 0)) {
              uVar5 = *(undefined4 *)(param_1 + 0x1c);
              local_168 = param_4;
              uVar11 = FUN_1447b4020(local_c8);
              local_180 = local_148;
              local_178 = 0;
              local_188 = uVar5;
              uVar11 = FUN_14011db44(local_158,1,0,uVar11);
              *(undefined8 *)(param_1 + 400) = uVar11;
              uVar5 = *(undefined4 *)(param_1 + 0x1c);
              uVar12 = FUN_1447b4020(local_c8);
              param_4 = local_168;
              FUN_14011da02(uVar11,local_15c,uVar12,uVar5);
              FUN_14011d944(*(undefined8 *)(param_1 + 400),local_160);
              fVar17 = (float)(**(code **)(*local_c8 + 0x350))();
              fVar17 = 1.0 / fVar17;
              fVar18 = (float)(**(code **)(*local_c8 + 0x358))();
              fVar18 = 1.0 / fVar18;
            }
            local_168 = FUN_1447b4020(local_c8);
            local_cc = (float)((double)piVar13[2] * *(double *)(param_1 + 0xd0));
            local_d0 = (float)((double)piVar13[3] * *(double *)(param_1 + 0xd8));
            local_d4 = (float)*piVar13 * fVar17;
            local_d8 = (float)piVar13[1] * fVar18;
            local_dc = (float)piVar13[2] * fVar17;
            local_e0 = (float)piVar13[3] * fVar18;
            local_140 = &local_b8;
            local_120 = &local_cc;
            local_118 = &local_d0;
            local_110 = &local_d4;
            local_108 = &local_d8;
            local_100 = &local_bc;
            local_f8 = &local_dc;
            local_f0 = &local_e0;
            local_e8 = &local_c8;
            local_138 = param_4;
            local_130 = piVar13;
            local_128 = param_1;
            if ((longlong)(int)param_6[1] != 0) {
              lVar10 = *param_6;
              lVar14 = (longlong)(int)param_6[1] * 0x18 + lVar10;
              do {
                FUN_1437737e4(&local_140,lVar10,lVar10 + 8);
                lVar10 = lVar10 + 0x18;
              } while (lVar10 != lVar14);
            }
            FUN_1437737e4(&local_140,&DAT_14c84635c);
            fVar16 = local_cc;
            if (((longlong)(uVar15 + 1) < (longlong)(int)param_3[1]) &&
               (iVar9 = iswspace(*(wint_t *)(*param_3 + 2 + uVar15 * 2)), fVar16 = local_cc,
               iVar9 == 0)) {
              fVar16 = local_cc + (float)((double)((float)iVar4 + fVar1) * dVar2);
            }
            local_b8 = (double)fVar16 + local_b8;
            param_2 = local_158;
            if (*local_150 <= local_b8 && local_b8 != *local_150) {
              *local_150 = local_b8;
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437737e4 FUN_1437737e4 body=1198 status=ok
// SIG undefined FUN_1437737e4(void)

void FUN_1437737e4(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar18 = (float)((double)*param_2 + *(double *)param_1[1] + *(double *)*param_1);
  lVar12 = param_1[3];
  fVar23 = (float)((double)*(int *)(param_1[2] + 0x14) * *(double *)(lVar12 + 0xd8) +
                  (double)param_2[1] + ((double *)param_1[1])[1] + ((double *)*param_1)[1]);
  fVar20 = *(float *)(lVar12 + 0x44);
  fVar21 = fVar20 * fVar18;
  fVar22 = fVar20 * fVar23;
  fVar19 = *(float *)param_1[4];
  fVar3 = *(float *)param_1[5];
  lVar17 = *(longlong *)(lVar12 + 400);
  uVar5 = *(undefined4 *)param_1[8];
  uVar6 = *(undefined4 *)param_1[7];
  uVar7 = *(undefined4 *)param_1[6];
  iVar8 = *(int *)(lVar17 + 0x290);
  *(uint *)(lVar17 + 0x290) = iVar8 + 1U;
  if (*(uint *)(lVar17 + 0x294) < iVar8 + 1U) {
    FUN_14021e72e(lVar17 + 0x180,iVar8);
  }
  fVar19 = (fVar18 + fVar19) * fVar20;
  lVar16 = lVar17 + 0x180;
  if (*(longlong *)(lVar17 + 0x280) != 0) {
    lVar16 = *(longlong *)(lVar17 + 0x280);
  }
  lVar17 = (longlong)iVar8 * 0x40;
  *(float *)(lVar16 + lVar17) = fVar21;
  *(float *)(lVar16 + 4 + lVar17) = fVar22;
  *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
  *(float *)(lVar16 + 0xc + lVar17) = fVar20;
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar16 + 0x20 + lVar17) = uVar7;
  *(undefined4 *)(lVar16 + 0x24 + lVar17) = uVar6;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar14 = param_3[3];
  puVar2 = (undefined4 *)(lVar16 + 0x28 + lVar17);
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar14;
  *(undefined4 *)(lVar16 + 0x38 + lVar17) = uVar5;
  lVar17 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[8];
  fVar18 = *(float *)param_1[6];
  fVar4 = *(float *)param_1[9];
  uVar7 = *(undefined4 *)param_1[7];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar9 = *(int *)(lVar17 + 0x290);
  *(uint *)(lVar17 + 0x290) = iVar9 + 1U;
  if (*(uint *)(lVar17 + 0x294) < iVar9 + 1U) {
    FUN_14021e72e(lVar17 + 0x180,iVar9);
  }
  fVar20 = fVar20 * (fVar23 + fVar3);
  lVar16 = lVar17 + 0x180;
  if (*(longlong *)(lVar17 + 0x280) != 0) {
    lVar16 = *(longlong *)(lVar17 + 0x280);
  }
  lVar17 = (longlong)iVar9 * 0x40;
  *(float *)(lVar16 + lVar17) = fVar19;
  *(float *)(lVar16 + 4 + lVar17) = fVar22;
  *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
  *(undefined4 *)(lVar16 + 0xc + lVar17) = uVar5;
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(float *)(lVar16 + 0x20 + lVar17) = fVar18 + fVar4;
  *(undefined4 *)(lVar16 + 0x24 + lVar17) = uVar7;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar14 = param_3[3];
  puVar2 = (undefined4 *)(lVar16 + 0x28 + lVar17);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar14;
  *(undefined4 *)(lVar16 + 0x38 + lVar17) = uVar6;
  lVar17 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[8];
  fVar3 = *(float *)param_1[7];
  fVar18 = *(float *)param_1[10];
  uVar7 = *(undefined4 *)param_1[6];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar10 = *(int *)(lVar17 + 0x290);
  *(uint *)(lVar17 + 0x290) = iVar10 + 1U;
  if (*(uint *)(lVar17 + 0x294) < iVar10 + 1U) {
    FUN_14021e72e(lVar17 + 0x180,iVar10);
  }
  lVar16 = lVar17 + 0x180;
  if (*(longlong *)(lVar17 + 0x280) != 0) {
    lVar16 = *(longlong *)(lVar17 + 0x280);
  }
  lVar17 = (longlong)iVar10 * 0x40;
  *(float *)(lVar16 + lVar17) = fVar21;
  *(float *)(lVar16 + 4 + lVar17) = fVar20;
  *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
  *(undefined4 *)(lVar16 + 0xc + lVar17) = uVar5;
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar16 + 0x20 + lVar17) = uVar7;
  *(float *)(lVar16 + 0x24 + lVar17) = fVar3 + fVar18;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar14 = param_3[3];
  puVar2 = (undefined4 *)(lVar16 + 0x28 + lVar17);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar14;
  *(undefined4 *)(lVar16 + 0x38 + lVar17) = uVar6;
  lVar17 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[8];
  fVar3 = *(float *)param_1[7];
  fVar18 = *(float *)param_1[10];
  fVar21 = *(float *)param_1[6];
  fVar22 = *(float *)param_1[9];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar11 = *(int *)(lVar17 + 0x290);
  *(uint *)(lVar17 + 0x290) = iVar11 + 1U;
  if (*(uint *)(lVar17 + 0x294) < iVar11 + 1U) {
    FUN_14021e72e(lVar17 + 0x180,iVar11);
  }
  lVar16 = lVar17 + 0x180;
  if (*(longlong *)(lVar17 + 0x280) != 0) {
    lVar16 = *(longlong *)(lVar17 + 0x280);
  }
  lVar17 = (longlong)iVar11 * 0x40;
  *(float *)(lVar16 + lVar17) = fVar19;
  *(float *)(lVar16 + 4 + lVar17) = fVar20;
  *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
  *(undefined4 *)(lVar16 + 0xc + lVar17) = uVar5;
  puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar17);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(float *)(lVar16 + 0x20 + lVar17) = fVar21 + fVar22;
  *(float *)(lVar16 + 0x24 + lVar17) = fVar3 + fVar18;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar14 = param_3[3];
  puVar2 = (undefined4 *)(lVar16 + 0x28 + lVar17);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar14;
  *(undefined4 *)(lVar16 + 0x38 + lVar17) = uVar6;
  uVar13 = *(undefined8 *)(lVar12 + 400);
  uVar5 = *(undefined4 *)(lVar12 + 0x1c);
  uVar15 = FUN_1447b4020(*(undefined8 *)param_1[0xb]);
  FUN_14002b732(uVar13,iVar8,(longlong)iVar9,iVar11,0,uVar15,uVar5,lVar12 + 0x50);
  uVar13 = *(undefined8 *)(lVar12 + 400);
  uVar5 = *(undefined4 *)(lVar12 + 0x1c);
  uVar15 = FUN_1447b4020(*(undefined8 *)param_1[0xb]);
  FUN_14002b732(uVar13,iVar8,iVar11,iVar10,0,uVar15,uVar5,lVar12 + 0x50);
  return;
}



// FUNCTION 143773c92 FUN_143773c92 body=198 status=ok
// SIG undefined FUN_143773c92(void)

void FUN_143773c92(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_68 = CONCAT31(local_68._1_3_,1);
  local_78 = 0x2e;
  uVar1 = FUN_14011db44(param_2,0,0,0);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    local_78 = 0xffffffff;
  }
  else {
    local_78 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x70));
  local_60 = 0;
  local_68 = 0;
  FUN_14095857a(uVar1,param_1 + 0x40,param_1 + 0x58,param_1 + 0x30);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143773d5a FUN_143773d5a body=1534 status=ok
// SIG undefined FUN_143773d5a(void)

void FUN_143773d5a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined8 *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = param_1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_160 = &local_138;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(param_1 + 0x1c));
    local_158 = CONCAT31(local_158._1_3_,1);
    lVar23 = FUN_14011db44(param_2,1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40)
                          );
    lVar16 = local_148;
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    uVar9 = *(uint *)(local_148 + 0x60);
    FUN_14011d944(lVar23,uVar9 * 3);
    if (*(longlong *)(lVar16 + 0x50) == 0) {
      FUN_14011da02(lVar23,(ulonglong)uVar9,*(undefined8 *)(local_148 + 0x40),
                    *(undefined4 *)(lVar16 + 0x1c));
      lVar16 = local_148;
    }
    if (0 < (int)uVar9) {
      lVar17 = lVar23 + 0x180;
      local_140 = (ulonglong)uVar9 * 0x90;
      lVar24 = 0;
      do {
        lVar12 = *(longlong *)(lVar16 + 0x58);
        dVar4 = *(double *)(lVar12 + 0x18 + lVar24);
        dVar5 = *(double *)(lVar12 + 0x10 + lVar24);
        dVar6 = *(double *)(lVar12 + 8 + lVar24);
        dVar7 = *(double *)(lVar12 + lVar24);
        iVar8 = *(int *)(lVar23 + 0x290);
        *(uint *)(lVar23 + 0x290) = iVar8 + 1U;
        if (*(uint *)(lVar23 + 0x294) < iVar8 + 1U) {
          FUN_14021e72e(lVar17,iVar8);
          lVar16 = local_148;
        }
        lVar18 = lVar12 + lVar24;
        lVar20 = *(longlong *)(lVar23 + 0x280);
        if (*(longlong *)(lVar23 + 0x280) == 0) {
          lVar20 = lVar17;
        }
        lVar19 = (longlong)iVar8 * 0x40;
        *(float *)(lVar20 + lVar19) = (float)dVar7;
        *(float *)(lVar20 + 4 + lVar19) = (float)dVar6;
        *(undefined8 *)(lVar20 + 8 + lVar19) = 0x3f80000000000000;
        puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar19);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(float *)(lVar20 + 0x20 + lVar19) = (float)dVar5;
        *(float *)(lVar20 + 0x24 + lVar19) = (float)dVar4;
        uVar13 = *(undefined4 *)(lVar18 + 0x24);
        uVar14 = *(undefined4 *)(lVar18 + 0x28);
        uVar15 = *(undefined4 *)(lVar18 + 0x2c);
        puVar3 = (undefined4 *)(lVar20 + 0x28 + lVar19);
        *puVar3 = *(undefined4 *)(lVar18 + 0x20);
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        *(undefined4 *)(lVar20 + 0x38 + lVar19) = uVar22;
        dVar4 = *(double *)(lVar18 + 0x48);
        dVar5 = *(double *)(lVar18 + 0x40);
        dVar6 = *(double *)(lVar18 + 0x38);
        dVar7 = *(double *)(lVar18 + 0x30);
        iVar10 = *(int *)(lVar23 + 0x290);
        *(uint *)(lVar23 + 0x290) = iVar10 + 1U;
        if (*(uint *)(lVar23 + 0x294) < iVar10 + 1U) {
          FUN_14021e72e(lVar17,iVar10);
          lVar16 = local_148;
        }
        lVar18 = lVar12 + lVar24;
        lVar20 = *(longlong *)(lVar23 + 0x280);
        if (*(longlong *)(lVar23 + 0x280) == 0) {
          lVar20 = lVar17;
        }
        lVar19 = (longlong)iVar10 * 0x40;
        *(float *)(lVar20 + lVar19) = (float)dVar7;
        *(float *)(lVar20 + 4 + lVar19) = (float)dVar6;
        *(undefined8 *)(lVar20 + 8 + lVar19) = 0x3f80000000000000;
        puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar19);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(float *)(lVar20 + 0x20 + lVar19) = (float)dVar5;
        *(float *)(lVar20 + 0x24 + lVar19) = (float)dVar4;
        uVar13 = *(undefined4 *)(lVar18 + 0x54);
        uVar14 = *(undefined4 *)(lVar18 + 0x58);
        uVar15 = *(undefined4 *)(lVar18 + 0x5c);
        puVar3 = (undefined4 *)(lVar20 + 0x28 + lVar19);
        *puVar3 = *(undefined4 *)(lVar18 + 0x50);
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        *(undefined4 *)(lVar20 + 0x38 + lVar19) = uVar22;
        dVar4 = *(double *)(lVar18 + 0x78);
        dVar5 = *(double *)(lVar18 + 0x70);
        dVar6 = *(double *)(lVar18 + 0x68);
        dVar7 = *(double *)(lVar18 + 0x60);
        iVar11 = *(int *)(lVar23 + 0x290);
        *(uint *)(lVar23 + 0x290) = iVar11 + 1U;
        if (*(uint *)(lVar23 + 0x294) < iVar11 + 1U) {
          FUN_14021e72e(lVar17,iVar11);
          lVar16 = local_148;
        }
        lVar12 = lVar12 + lVar24;
        lVar18 = *(longlong *)(lVar23 + 0x280);
        if (*(longlong *)(lVar23 + 0x280) == 0) {
          lVar18 = lVar17;
        }
        lVar20 = (longlong)iVar11 * 0x40;
        *(float *)(lVar18 + lVar20) = (float)dVar7;
        *(float *)(lVar18 + 4 + lVar20) = (float)dVar6;
        *(undefined8 *)(lVar18 + 8 + lVar20) = 0x3f80000000000000;
        puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar20);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(float *)(lVar18 + 0x20 + lVar20) = (float)dVar5;
        *(float *)(lVar18 + 0x24 + lVar20) = (float)dVar4;
        uVar13 = *(undefined4 *)(lVar12 + 0x84);
        uVar14 = *(undefined4 *)(lVar12 + 0x88);
        uVar15 = *(undefined4 *)(lVar12 + 0x8c);
        puVar3 = (undefined4 *)(lVar18 + 0x28 + lVar20);
        *puVar3 = *(undefined4 *)(lVar12 + 0x80);
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        *(undefined4 *)(lVar18 + 0x38 + lVar20) = uVar22;
        local_168 = *(longlong *)(lVar16 + 0x50);
        if (local_168 == 0) {
          local_158 = *(undefined4 *)(lVar16 + 0x1c);
          local_160 = *(undefined8 **)(lVar16 + 0x40);
          local_168 = 0;
        }
        else {
          local_158 = *(undefined4 *)(lVar16 + 0x1c);
          local_160 = DAT_14ca94e18;
        }
        local_150 = &local_138;
        uStack_108 = 0;
        local_110 = 0;
        uStack_118 = 0;
        local_120 = 0;
        local_128 = 0;
        uStack_130 = 0;
        local_138 = 0;
        FUN_14002b732(lVar23,iVar8,iVar10,iVar11);
        lVar24 = lVar24 + 0x90;
        lVar16 = local_148;
      } while (local_140 != lVar24);
    }
  }
  else {
    lVar16 = FUN_144914fe6(param_2,*(undefined4 *)
                                    (*(longlong *)(param_2 + 0x18) +
                                    (longlong)(*(int *)(param_2 + 0x20) + -1) * 4));
    lVar23 = (longlong)(*(int *)(param_2 + 0x30) + -1) * 0x90 + *(longlong *)(param_2 + 0x28);
    plVar1 = (longlong *)(lVar16 + 8);
    if (((((longlong)*(int *)(lVar16 + 0x10) < 1) ||
         (lVar17 = (**(code **)(**(longlong **)
                                  (*plVar1 + -8 + (longlong)*(int *)(lVar16 + 0x10) * 8) + 0x28))(),
         lVar17 == 0)) || (**(longlong **)(lVar17 + 8) != *(longlong *)(local_148 + 0x48))) ||
       ((int)(*(longlong **)(lVar17 + 8))[0x12] != *(int *)(lVar23 + 0x80))) {
      lVar17 = FUN_14001cc68(0x20,0x10);
      local_168 = CONCAT71(local_168._1_7_,*(undefined1 *)(local_148 + 0x20));
      FUN_147d8df22(lVar17,*(undefined4 *)(param_2 + 0x9c),*(undefined8 *)(local_148 + 0x48),lVar23)
      ;
      iVar8 = *(int *)(lVar16 + 0x10);
      *(uint *)(lVar16 + 0x10) = iVar8 + 1U;
      if (*(uint *)(lVar16 + 0x14) < iVar8 + 1U) {
        FUN_1417f94f0(plVar1,iVar8);
      }
      *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar17;
    }
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    uVar9 = *(uint *)(local_148 + 0x60);
    uVar21 = (ulonglong)uVar9;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21);
    }
    if (*(int *)(*(longlong *)(lVar17 + 8) + 0x40c) < (int)uVar9) {
      FUN_147d9bc00(*(longlong *)(lVar17 + 8) + 0x400,uVar9);
    }
    if (uVar21 != 0) {
      lVar16 = 0;
      do {
        lVar23 = *(longlong *)(lVar17 + 8);
        memcpy(&local_138,(void *)(*(longlong *)(local_148 + 0x58) + lVar16),0x90);
        iVar8 = *(int *)(lVar23 + 0x408);
        *(uint *)(lVar23 + 0x408) = iVar8 + 1U;
        if (*(uint *)(lVar23 + 0x40c) < iVar8 + 1U) {
          FUN_147d9b8f8((longlong *)(lVar23 + 0x400),iVar8);
        }
        lVar23 = *(longlong *)(lVar23 + 0x400);
        memcpy((void *)(lVar23 + (longlong)iVar8 * 0x98),&local_138,0x90);
        *(undefined4 *)(lVar23 + 0x90 + (longlong)iVar8 * 0x98) = uVar22;
        lVar16 = lVar16 + 0x90;
      } while (uVar21 * 0x90 != lVar16);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377435a FUN_14377435a body=49 status=ok
// SIG undefined FUN_14377435a(void)

void FUN_14377435a(void)

{
  FUN_144760e21(DAT_14cb0dd48,DAT_14cb0dd50);
  if (DAT_14cb0dd48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14377438b FUN_14377438b body=49 status=ok
// SIG undefined FUN_14377438b(void)

void FUN_14377438b(void)

{
  FUN_144760e21(DAT_14cb0dd60,DAT_14cb0dd68);
  if (DAT_14cb0dd60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437743bc FUN_1437743bc body=69 status=ok
// SIG undefined FUN_1437743bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437743bc(void)

{
  _DAT_14cb0dd78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437743fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0dd80,1);
  return;
}



// FUNCTION 143774401 FUN_143774401 body=69 status=ok
// SIG undefined FUN_143774401(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143774401(void)

{
  _DAT_14cb0dd90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143774443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0dd98,1);
  return;
}



// FUNCTION 143774446 FUN_143774446 body=69 status=ok
// SIG undefined FUN_143774446(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143774446(void)

{
  _DAT_14cb0dda8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143774488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ddb0,1);
  return;
}



// FUNCTION 14377448b FUN_14377448b body=69 status=ok
// SIG undefined FUN_14377448b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377448b(void)

{
  _DAT_14cb0ddc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437744cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ddc8,1);
  return;
}



// FUNCTION 1437744d0 FUN_1437744d0 body=69 status=ok
// SIG undefined FUN_1437744d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437744d0(void)

{
  _DAT_14cb0ddd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143774512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0dde0,1);
  return;
}



// FUNCTION 143774526 FUN_143774526 body=130 status=ok
// SIG undefined FUN_143774526(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143774526(void)

{
  _DAT_14cb0de18 = &PTR_LAB_149e668b0;
  if (DAT_14c948580 == 0) {
    _DAT_14cb0de00 = &PTR_LAB_149e668b0;
  }
  else {
    if (DAT_14cb0de21 != '\0') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0de18);
      DAT_14cb0de21 = '\0';
      _DAT_14cb0de00 = &PTR_LAB_149e668b0;
      if (DAT_14c948580 == 0) {
        DAT_14cb0de21 = 0;
        return;
      }
    }
    _DAT_14cb0de00 = &PTR_LAB_149e668b0;
    if (DAT_14cb0de09 == '\x01') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cb0de00);
      DAT_14cb0de09 = '\0';
    }
  }
  return;
}



// FUNCTION 1437745b6 FUN_1437745b6 body=138 status=ok
// SIG undefined FUN_1437745b6(void)

uint FUN_1437745b6(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_1447ee042(param_1,&DAT_149e001d8,1,0,param_3,param_2);
  uVar2 = FUN_1447ee042(param_1,&DAT_149e0635c,1,0,param_3,param_2);
  uVar3 = uVar1;
  if (param_3 == 1) {
    if ((int)uVar1 < (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  else if ((int)uVar1 < 0) {
    uVar3 = uVar2;
    if ((uVar2 == 0xffffffff) && (uVar3 = *(int *)(param_1 + 8) - 1, *(int *)(param_1 + 8) == 0)) {
      uVar3 = 0;
    }
  }
  else if ((-1 < (int)uVar2) && (uVar3 = uVar2, uVar1 < uVar2)) {
    uVar3 = uVar1;
  }
  return uVar3;
}



// FUNCTION 143774677 FUN_143774677 body=48 status=ok
// SIG undefined FUN_143774677(void)

void FUN_143774677(void)

{
  if (DAT_14cb0e248 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0e238 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437746b4 FUN_1437746b4 body=49 status=ok
// SIG undefined FUN_1437746b4(void)

void FUN_1437746b4(void)

{
  FUN_144760e21(DAT_14cb0e290,DAT_14cb0e298);
  if (DAT_14cb0e290 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437746e5 FUN_1437746e5 body=55 status=ok
// SIG undefined FUN_1437746e5(void)

void FUN_1437746e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0e328 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0e328 = FUN_14171c317(FUN_14640b3b0,uVar1,L"EHardwareDeviceSupportedFeatures");
  }
  return;
}



// FUNCTION 14377471c FUN_14377471c body=55 status=ok
// SIG undefined FUN_14377471c(void)

void FUN_14377471c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0e340 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0e340 = FUN_14171c317(FUN_14640b3df,uVar1,L"EHardwareDevicePrimaryType");
  }
  return;
}



// FUNCTION 143774754 FUN_143774754 body=290 status=ok
// SIG undefined FUN_143774754(void)

void FUN_143774754(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  FUN_1417f7b1c(param_1);
  FUN_14640b4e0(param_1);
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x98) * 0x28;
    lVar3 = *(longlong *)(param_1 + 0x90) + 0x10;
    do {
      FUN_1413a51d4(lVar3);
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xa8) * 0x28;
    lVar3 = *(longlong *)(param_1 + 0xa0) + 0x10;
    do {
      FUN_1413a51d4(lVar3);
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143774876 FUN_143774876 body=31 status=ok
// SIG undefined FUN_143774876(void)

void FUN_143774876(longlong param_1)

{
  FUN_14640b4e0();
  if ((*(byte *)(param_1 + 0x49) & 2) == 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 2;
  }
  return;
}



// FUNCTION 143774895 FUN_143774895 body=69 status=ok
// SIG undefined FUN_143774895(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143774895(void)

{
  _DAT_14cb0e3b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437748d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0e3b8,1);
  return;
}



// FUNCTION 1437748da FUN_1437748da body=49 status=ok
// SIG undefined FUN_1437748da(void)

void FUN_1437748da(void)

{
  FUN_1457e92cc(DAT_14cb0e498,DAT_14cb0e4a0);
  if (DAT_14cb0e498 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14377490b FUN_14377490b body=49 status=ok
// SIG undefined FUN_14377490b(void)

void FUN_14377490b(void)

{
  FUN_1457e927f(DAT_14cb0e4a8,DAT_14cb0e4b0);
  if (DAT_14cb0e4a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14377493c FUN_14377493c body=49 status=ok
// SIG undefined FUN_14377493c(void)

void FUN_14377493c(void)

{
  FUN_1457e92cc(DAT_14cb0e4b8,DAT_14cb0e4c0);
  if (DAT_14cb0e4b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14377496d FUN_14377496d body=49 status=ok
// SIG undefined FUN_14377496d(void)

void FUN_14377496d(void)

{
  FUN_1457e927f(DAT_14cb0e4c8,DAT_14cb0e4d0);
  if (DAT_14cb0e4c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14377499e FUN_14377499e body=69 status=ok
// SIG undefined FUN_14377499e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377499e(void)

{
  _DAT_14cb0e4d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437749e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0e4e0,1);
  return;
}



// FUNCTION 1437749e3 FUN_1437749e3 body=69 status=ok
// SIG undefined FUN_1437749e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437749e3(void)

{
  _DAT_14cb0e4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143774a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0e4f0,1);
  return;
}



// FUNCTION 143774a28 FUN_143774a28 body=69 status=ok
// SIG undefined FUN_143774a28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143774a28(void)

{
  _DAT_14cb0e4f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143774a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0e500,1);
  return;
}



// FUNCTION 143774a6e FUN_143774a6e body=327 status=ok
// SIG undefined FUN_143774a6e(void)

void FUN_143774a6e(longlong *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  
  lVar1 = *param_1;
  if ((param_3 != 0.0) || (NAN(param_3))) {
LAB_143774b0c:
    if ((param_3 != 0.0) || (NAN(param_3))) {
      lVar2 = param_1[1];
      dVar5 = SQRT(*(double *)(lVar2 + 0x38) * *(double *)(lVar2 + 0x38) +
                   *(double *)(lVar2 + 0x28) * *(double *)(lVar2 + 0x28) +
                   *(double *)(lVar2 + 0x30) * *(double *)(lVar2 + 0x30));
      if ((dVar5 == 0.0) && (!NAN(dVar5))) {
        *(int *)(lVar1 + 0x490) = *(int *)(lVar1 + 0x490) + 1;
        plVar3 = (longlong *)(param_2 + 0x98);
        iVar4 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
        if (iVar4 + 1U <= *(uint *)(param_2 + 0xa4)) goto LAB_143774af9;
        goto LAB_143774aef;
      }
    }
    *(int *)(lVar1 + 0x490) = *(int *)(lVar1 + 0x490) + 1;
    plVar3 = (longlong *)(param_2 + 0xa8);
    iVar4 = *(int *)(param_2 + 0xb0);
    *(uint *)(param_2 + 0xb0) = iVar4 + 1U;
    if (iVar4 + 1U <= *(uint *)(param_2 + 0xb4)) goto LAB_143774af9;
  }
  else {
    lVar2 = param_1[1];
    dVar5 = SQRT(*(double *)(lVar2 + 0x38) * *(double *)(lVar2 + 0x38) +
                 *(double *)(lVar2 + 0x28) * *(double *)(lVar2 + 0x28) +
                 *(double *)(lVar2 + 0x30) * *(double *)(lVar2 + 0x30));
    if ((dVar5 == 0.0) && (!NAN(dVar5))) goto LAB_143774b0c;
    *(int *)(lVar1 + 0x490) = *(int *)(lVar1 + 0x490) + 1;
    plVar3 = (longlong *)(param_2 + 0x88);
    iVar4 = *(int *)(param_2 + 0x90);
    *(uint *)(param_2 + 0x90) = iVar4 + 1U;
    if (iVar4 + 1U <= *(uint *)(param_2 + 0x94)) goto LAB_143774af9;
  }
LAB_143774aef:
  FUN_1447808da(plVar3,iVar4);
LAB_143774af9:
  *(undefined4 *)(*plVar3 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar1 + 0x490);
  return;
}



// FUNCTION 143774bb6 FUN_143774bb6 body=250 status=ok
// SIG undefined FUN_143774bb6(void)

float FUN_143774bb6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  fVar9 = 0.0;
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar3 = *param_2;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar6 = *(longlong *)(param_1 + 800);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x328) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar8 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar8 * 0x110) == lVar3) {
          if (lVar6 != -0x18 && lVar6 != 0) {
            fVar9 = (float)*(double *)(lVar6 + 0x30);
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x108);
      } while (iVar8 != -1);
    }
  }
  plVar4 = (longlong *)param_2[2];
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
  return fVar9;
}



// FUNCTION 143774cb0 FUN_143774cb0 body=49 status=ok
// SIG undefined FUN_143774cb0(void)

void FUN_143774cb0(void)

{
  FUN_14377d26e(DAT_14cb0e510,DAT_14cb0e518);
  if (DAT_14cb0e510 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143774ce2 FUN_143774ce2 body=2414 status=ok
// SIG undefined FUN_143774ce2(void)

void FUN_143774ce2(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  double *pdVar24;
  byte *pbVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  longlong lVar34;
  float fVar35;
  undefined1 auStack_158 [32];
  longlong *local_138;
  int local_12c;
  longlong local_128;
  longlong local_120;
  byte *local_118;
  uint local_10c;
  uint *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  double local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar7 = (int)param_1[0x61];
  if (iVar7 == 0) {
    uVar30 = 1;
    uVar23 = 0;
    iVar29 = 0;
    iVar16 = 0;
  }
  else {
    puVar20 = (uint *)param_1[0x60];
    if ((uint *)param_1[0x60] == (uint *)0x0) {
      puVar20 = (uint *)(param_1 + 0x5e);
    }
    uVar14 = *puVar20;
    if (uVar14 == 0) {
      iVar29 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar29 = iVar7 + -1;
      }
      uVar23 = 0;
      uVar30 = (ulonglong)(uint)(iVar29 >> 5);
      if (iVar29 >> 5 < 1) {
        uVar30 = uVar23;
      }
      iVar29 = 0;
      do {
        if (uVar30 == uVar23) goto LAB_1437755e7;
        iVar29 = iVar29 + 0x20;
        uVar14 = puVar20[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar23 = 0;
      iVar29 = 0;
    }
    uVar30 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar30 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar16 = (iVar29 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    local_138 = param_1;
    local_108 = (uint *)(param_1 + 0x5e);
    uVar14 = 0xffffffff;
    do {
      local_10c = uVar14;
      local_120 = param_1[0x5c];
      local_128 = (longlong)iVar16 * 0x110;
      lVar28 = local_120 + local_128;
      pdVar24 = (double *)(lVar28 + 0x18);
      plVar26 = (longlong *)(local_120 + local_128);
      lVar22 = local_120 + local_128;
      lVar31 = 0;
      bVar12 = false;
      local_12c = iVar29;
      local_100 = uVar23;
      do {
        plVar32 = (longlong *)(lVar22 + 0x50 + lVar31);
        *(undefined4 *)(lVar22 + 0x58 + lVar31) = 0;
        if (*(int *)(lVar22 + 0x5c + lVar31) < 0) {
          FUN_14480809c(plVar32,0);
        }
        lVar34 = *plVar32;
        lVar8 = plVar32[1];
        plVar27 = (longlong *)(lVar22 + 0xa0 + lVar31);
        lVar33 = plVar27[1];
        *plVar32 = *plVar27;
        plVar32[1] = lVar33;
        local_98._0_4_ = (undefined4)lVar34;
        local_98._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
        uStack_90._0_4_ = (undefined4)lVar8;
        uStack_90._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        puVar4 = (undefined4 *)(lVar22 + 0xa0 + lVar31);
        *puVar4 = (undefined4)local_98;
        puVar4[1] = local_98._4_4_;
        puVar4[2] = (undefined4)uStack_90;
        puVar4[3] = uStack_90._4_4_;
        local_98 = lVar34;
        uStack_90 = lVar8;
        if ((!bVar12) && (0 < (int)plVar32[1])) {
          lVar34 = param_4[1];
          uVar14 = (int)lVar34 + 1;
          *(uint *)(param_4 + 1) = uVar14;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar14) {
            FUN_1463d04dc(param_4);
          }
          lVar8 = *param_4;
          lVar33 = (longlong)(int)lVar34 * 0x20;
          *(longlong *)(lVar8 + lVar33) = *plVar26;
          *(longlong *)(lVar8 + 8 + lVar33) = plVar26[1];
          lVar34 = plVar26[2];
          *(longlong *)(lVar8 + 0x10 + lVar33) = lVar34;
          if (lVar34 != 0) {
            LOCK();
            *(int *)(lVar34 + 8) = *(int *)(lVar34 + 8) + 1;
            UNLOCK();
          }
          *(double **)(lVar8 + lVar33 + 0x18) = pdVar24;
          bVar12 = true;
        }
        param_1 = local_138;
        lVar31 = lVar31 + 0x10;
      } while (lVar31 != 0x50);
      local_118 = (byte *)(local_120 + local_128 + 0x4d);
      if (*local_118 == 0) {
        lVar22 = plVar26[1];
        if (lVar22 == 0) {
          local_98 = *plVar26;
          uStack_90 = 0;
          local_88 = (longlong *)plVar26[2];
          if (local_88 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
          }
          FUN_1402df5c4(&local_c8,&local_98);
          plVar27 = plStack_c0;
          plVar26[1] = (longlong)local_c8;
          local_c8 = 0.0;
          plVar32 = (longlong *)plVar26[2];
          if (plStack_c0 == plVar32) {
LAB_14377553f:
            plVar32 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar27 = plStack_c0 + 1;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)*plVar27 == 0) {
                (**(code **)*plStack_c0)();
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar32 + 0x10))();
                }
              }
            }
          }
          else {
            plStack_c0 = (longlong *)0x0;
            plVar26[2] = (longlong)plVar27;
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              plVar27 = plVar32 + 1;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              param_1 = local_138;
              if ((int)*plVar27 == 0) {
                (**(code **)*plVar32)();
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                param_1 = local_138;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar32 + 0x10))();
                  param_1 = local_138;
                }
              }
              goto LAB_14377553f;
            }
          }
          lVar22 = plVar26[1];
          pbVar25 = local_118;
          if (lVar22 != 0) goto LAB_143774f03;
        }
        else {
LAB_143774f03:
          pbVar25 = local_118;
          if ((*(byte *)(lVar22 + 0x40) & 0x20) != 0) goto LAB_143774f0d;
        }
      }
      else {
LAB_143774f0d:
        lVar22 = local_120 + local_128;
        if ((*(byte *)(lVar22 + 0x4c) & 0x70) == 0) {
          *(undefined8 *)(lVar28 + 0x28) = *(undefined8 *)(lVar22 + 0x100);
          uVar9 = *(undefined4 *)(lVar22 + 0xf4);
          uVar10 = *(undefined4 *)(lVar22 + 0xf8);
          uVar11 = *(undefined4 *)(lVar22 + 0xfc);
          *(undefined4 *)pdVar24 = *(undefined4 *)(lVar22 + 0xf0);
          *(undefined4 *)(lVar28 + 0x1c) = uVar9;
          *(undefined4 *)(lVar28 + 0x20) = uVar10;
          *(undefined4 *)(lVar28 + 0x24) = uVar11;
        }
        else {
          lVar31 = 0;
          do {
            if ((1 << ((byte)lVar31 & 0x1f) & *(uint *)(local_120 + local_128 + 0x4c) >> 4 & 7) != 0
               ) {
              *(undefined8 *)(lVar22 + 0x18 + lVar31 * 8) =
                   *(undefined8 *)((undefined4 *)(lVar22 + 0xf0) + lVar31 * 2);
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 != 3);
        }
        pbVar25 = local_118;
        if (*local_118 == 0) {
          lVar22 = local_120 + local_128;
          *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
          iVar7 = *(int *)(lVar22 + 0x68);
          *(uint *)(lVar22 + 0x68) = iVar7 + 1U;
          if (*(uint *)(lVar22 + 0x6c) < iVar7 + 1U) {
            FUN_1447808da((longlong *)(lVar22 + 0x60),iVar7);
          }
          pbVar25 = local_118;
          *(int *)(*(longlong *)(lVar22 + 0x60) + (longlong)iVar7 * 4) = (int)param_1[0x92];
          if (!bVar12) {
            iVar7 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
              FUN_1463d04dc(param_4,iVar7);
            }
            lVar22 = *param_4;
            lVar34 = (longlong)iVar7 * 0x20;
            *(longlong *)(lVar22 + lVar34) = *plVar26;
            *(longlong *)(lVar22 + 8 + lVar34) = plVar26[1];
            lVar31 = plVar26[2];
            *(longlong *)(lVar22 + 0x10 + lVar34) = lVar31;
            if (lVar31 != 0) {
              LOCK();
              *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
              UNLOCK();
            }
            *(double **)(lVar22 + lVar34 + 0x18) = pdVar24;
          }
        }
      }
      lVar22 = *plVar26;
      if (((*plVar26 == DAT_14c964cb0) &&
          ((lVar22 = DAT_14c964cb0, *pdVar24 != 0.0 || (NAN(*pdVar24))))) &&
         ((*(float *)(param_1 + 0x31) != 0.0 || (NAN(*(float *)(param_1 + 0x31)))))) {
        *(float *)((longlong)param_1 + 0x194) =
             (float)DAT_14c759090 + *(float *)((longlong)param_1 + 0x194);
        *(uint *)(param_1 + 0x32) = (int)param_1[0x32] + (uint)*pbVar25;
        lVar22 = *plVar26;
      }
      lVar31 = plVar26[1];
      plVar26 = (longlong *)plVar26[2];
      if (plVar26 == (longlong *)0x0) {
        if (lVar31 == 0) {
          local_88 = (longlong *)0x0;
          goto LAB_143775399;
        }
LAB_14377509c:
        cVar13 = *(char *)(lVar31 + 0x42);
        if (cVar13 != '\x03') {
LAB_1437750a8:
          if (cVar13 != '\x04') goto LAB_1437750b0;
        }
        local_c8 = *pdVar24;
        plStack_c0 = *(longlong **)(lVar28 + 0x20);
        local_b8 = *(undefined8 *)(lVar28 + 0x28);
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
          UNLOCK();
        }
        local_e0 = lVar22;
        local_d8 = lVar31;
        local_d0 = plVar26;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_98,&local_e0,&local_c8);
        *(longlong **)(local_120 + 0x40 + local_128) = local_88;
        puVar4 = (undefined4 *)(local_120 + 0x30 + local_128);
        *puVar4 = (undefined4)local_98;
        puVar4[1] = local_98._4_4_;
        puVar4[2] = (undefined4)uStack_90;
        puVar4[3] = uStack_90._4_4_;
        uVar23 = local_100;
        puVar20 = local_108;
        lVar34 = local_120;
        lVar28 = local_128;
      }
      else {
        LOCK();
        *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
        UNLOCK();
        if (lVar31 != 0) goto LAB_14377509c;
        LOCK();
        *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
        UNLOCK();
        local_88 = plVar26;
LAB_143775399:
        uStack_90 = 0;
        local_98 = lVar22;
        FUN_1402df5c4(&local_a8,&local_98);
        plVar32 = local_a0;
        lVar31 = local_a8;
        local_a8 = 0;
        plVar27 = plVar26;
        if (local_a0 == plVar26) {
LAB_1437754da:
          plVar26 = local_a0;
          plVar32 = plVar27;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar27 = local_a0 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            param_1 = local_138;
            if ((int)*plVar27 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_1 = local_138;
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
                param_1 = local_138;
              }
            }
          }
        }
        else {
          local_a0 = (longlong *)0x0;
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar26 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            plVar27 = plVar32;
            param_1 = local_138;
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_1 = local_138;
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
                param_1 = local_138;
              }
            }
            goto LAB_1437754da;
          }
        }
        plVar26 = plVar32;
        if (lVar31 != 0) goto LAB_14377509c;
        uStack_90 = 0;
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
        }
        local_98 = lVar22;
        local_88 = plVar32;
        FUN_1402df5c4(&local_a8,&local_98);
        plVar26 = local_a0;
        lVar31 = local_a8;
        local_a8 = 0;
        plVar27 = plVar32;
        if (local_a0 == plVar32) {
LAB_1437755a7:
          plVar32 = local_a0;
          plVar26 = plVar27;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar27 = local_a0 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar32 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
              }
            }
          }
        }
        else {
          local_a0 = (longlong *)0x0;
          if (plVar32 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar32 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            plVar27 = plVar26;
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar32)(plVar32);
              LOCK();
              piVar1 = (int *)((longlong)plVar32 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
              }
            }
            goto LAB_1437755a7;
          }
        }
        param_1 = local_138;
        if (lVar31 != 0) {
          cVar13 = *(char *)(lVar31 + 0x42);
          goto LAB_1437750a8;
        }
        lVar31 = 0;
LAB_1437750b0:
        uVar23 = local_100;
        puVar20 = local_108;
        lVar34 = local_120;
        lVar28 = local_128;
        dVar6 = *pdVar24;
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
          UNLOCK();
        }
        local_f8 = lVar22;
        local_f0 = lVar31;
        local_e8 = plVar26;
        if (*(code **)(*param_1 + 0x2e0) == FUN_143778818) {
          fVar35 = (float)FUN_143778818();
        }
        else {
          fVar35 = (float)(**(code **)(*param_1 + 0x2e0))(param_1,&local_f8,(float)dVar6);
        }
        *(double *)(lVar34 + 0x30 + lVar28) = (double)fVar35;
      }
      iVar7 = *(int *)(lVar34 + 0x68 + lVar28);
      iVar29 = *(int *)(lVar34 + 0x58 + lVar28);
      if (iVar29 < iVar7) {
        pbVar25 = (byte *)(lVar34 + 0x4c + lVar28);
        *pbVar25 = *pbVar25 & 0xfe;
      }
      else {
        pbVar25 = (byte *)(lVar34 + 0x4c + lVar28);
        bVar15 = *pbVar25;
        if (iVar29 == iVar7) {
          bVar15 = bVar15 & 0xfe | bVar15 >> 1 & 1;
        }
        else {
          bVar15 = bVar15 | 1;
        }
        *pbVar25 = bVar15;
      }
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar32 = plVar26 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
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
      *local_118 = 0;
      puVar5 = (undefined8 *)(lVar34 + 0xf0 + lVar28);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar34 + 0x100 + lVar28) = 0;
      pbVar25 = (byte *)(lVar34 + 0x4c + lVar28);
      *pbVar25 = *pbVar25 & 0x8f;
      uVar14 = local_10c & ~(uint)uVar30;
      puVar21 = (uint *)param_1[0x60];
      if ((uint *)param_1[0x60] == (uint *)0x0) {
        puVar21 = puVar20;
      }
      iVar7 = (int)param_1[0x61];
      iVar16 = (int)uVar23;
      lVar28 = (longlong)iVar16;
      uVar17 = puVar21[lVar28] & uVar14;
      iVar29 = local_12c;
      if (uVar17 == 0) {
        iVar18 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar18 = iVar7 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar16) {
          iVar19 = iVar16;
        }
        if (iVar18 <= iVar16) break;
        lVar22 = 0;
        while( true ) {
          iVar29 = iVar29 + 0x20;
          uVar17 = puVar21[lVar28 + lVar22 + 1];
          if (uVar17 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar19 - lVar28 == lVar22) goto LAB_1437755e7;
        }
        uVar23 = (ulonglong)(iVar16 + (int)lVar22 + 1);
        uVar14 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = uVar30 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar16 = (iVar29 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
LAB_1437755e7:
  *(int *)((longlong)param_1 + 0x49c) = (int)param_1[0x92];
  *(undefined4 *)(param_1 + 0x92) = 0;
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143775652 FUN_143775652 body=8028 status=ok
// SIG undefined FUN_143775652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143775652(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  char cVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined4 local_3c0;
  longlong *local_3b0;
  undefined1 local_3a1;
  longlong *local_3a0;
  uint local_394;
  ulonglong local_390;
  longlong local_388;
  longlong local_380;
  longlong *local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  char local_249;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined8 *puStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  
  param_4 = param_4 & 0xffffffff;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_3b0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e538) && (FUN_144b3d300(&DAT_14cb0e538), DAT_14cb0e538 == -1)) {
    _DAT_14cb0e528 = (undefined1  [16])0x0;
    atexit(FUN_1437775af);
    _Init_thread_footer(&DAT_14cb0e538);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e550) && (FUN_144b3d300(&DAT_14cb0e550), DAT_14cb0e550 == -1)) {
    _DAT_14cb0e540 = (undefined1  [16])0x0;
    atexit(FUN_1437775e0);
    _Init_thread_footer(&DAT_14cb0e550);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e568) && (FUN_144b3d300(&DAT_14cb0e568), DAT_14cb0e568 == -1)) {
    _DAT_14cb0e558 = (undefined1  [16])0x0;
    atexit(FUN_143777611);
    _Init_thread_footer(&DAT_14cb0e568);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e580) && (FUN_144b3d300(&DAT_14cb0e580), DAT_14cb0e580 == -1)) {
    _DAT_14cb0e570 = (undefined1  [16])0x0;
    atexit(FUN_143777642);
    _Init_thread_footer(&DAT_14cb0e580);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e598) && (FUN_144b3d300(&DAT_14cb0e598), DAT_14cb0e598 == -1)) {
    _DAT_14cb0e588 = (undefined1  [16])0x0;
    atexit(FUN_143777673);
    _Init_thread_footer(&DAT_14cb0e598);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e5b0) && (FUN_144b3d300(&DAT_14cb0e5b0), DAT_14cb0e5b0 == -1)) {
    _DAT_14cb0e5a0 = (undefined1  [16])0x0;
    atexit(FUN_1437776a4);
    _Init_thread_footer(&DAT_14cb0e5b0);
  }
  local_378 = (longlong *)(param_1 + 0x49c);
  local_370 = param_1 + 0x278;
  local_388 = param_1 + 0x318;
  puVar2 = (undefined8 *)(param_1 + 0x480);
  local_380 = param_1 + 0x168;
  local_3a1 = (undefined1)param_4;
  plVar15 = local_3b0;
  uVar17 = (ulonglong)*(uint *)(local_3b0 + 1);
  do {
    if ((int)uVar17 < 1) goto LAB_14377715f;
    uVar21 = (int)uVar17 - 1;
    uVar11 = (ulonglong)uVar21;
    plVar5 = *(longlong **)(*plVar15 + uVar11 * 8);
    bVar7 = false;
    if ((plVar5 != (longlong *)0x0) && ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0)) {
      local_1b8 = (uint)param_1;
      uStack_1b4 = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_1b0 = in_XMM2._0_4_;
      uStack_1ac = CONCAT31(uStack_1ac._1_3_,(char)param_4);
      local_1a8 = local_378;
      puStack_1a0 = &DAT_14cb0e570;
      local_198 = SUB84(param_5,0);
      uStack_194 = (undefined4)((ulonglong)param_5 >> 0x20);
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      local_3a0 = plVar5;
      local_394 = uVar21;
      local_390 = uVar17;
      (**(code **)(*plVar5 + 0x488))(plVar5,&local_1b8);
      FUN_144a65a1e(local_188,uStack_180);
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      FUN_14347a102(local_3a0,param_1);
      lVar26 = param_5[1];
      if ((longlong)(int)lVar26 != 0) {
        lVar18 = *param_5;
        lVar25 = 0;
        do {
          if ((*(byte *)(*(longlong *)(lVar18 + 0x18 + lVar25) + 0x34) & 4) == 0) {
            uVar29 = *(undefined8 *)(lVar18 + 8 + lVar25);
            plVar15 = *(longlong **)(lVar18 + 0x10 + lVar25);
            local_1b8 = (uint)*(undefined8 *)(lVar18 + lVar25);
            uStack_1b4 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar25) >> 0x20);
            uStack_1b0 = (undefined4)uVar29;
            uStack_1ac = (undefined4)((ulonglong)uVar29 >> 0x20);
            if (plVar15 == (longlong *)0x0) {
              local_1a8 = (longlong *)0x0;
              FUN_1447a9ab2(local_3a0,param_1,&local_1b8,&DAT_14cb0e5a0);
            }
            else {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              local_1a8 = plVar15;
              FUN_1447a9ab2(local_3a0,param_1,&local_1b8,&DAT_14cb0e5a0);
              LOCK();
              plVar5 = plVar15 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          lVar25 = lVar25 + 0x20;
        } while ((longlong)(int)lVar26 * 0x20 != lVar25);
      }
      lVar26 = DAT_14cb0e5a0;
      lVar18 = (longlong)DAT_14cb0e5a8;
      if (lVar18 == 0) {
        uVar28 = 0;
      }
      else {
        lVar25 = 0;
        do {
          FUN_147d94d32(param_1,*(undefined8 *)(lVar26 + lVar25));
          lVar25 = lVar25 + 0x10;
        } while (lVar18 * 0x10 != lVar25);
        uVar28 = DAT_14cb0e5a8;
      }
      iVar14 = DAT_14cb0e5ac;
      FUN_140ffc319(DAT_14cb0e5a0,uVar28);
      DAT_14cb0e5a8 = 0;
      if ((iVar14 < 0) && (DAT_14cb0e5ac != 0)) {
        FUN_1479f6f24(&DAT_14cb0e5a0,0);
      }
      if ((longlong)(int)local_3a0[0x23] != 0) {
        lVar26 = local_3a0[0x22];
        lVar18 = (longlong)(int)local_3a0[0x23] * 0x60;
        do {
          FUN_14011afa0(param_1,lVar26,param_4 & 0xffffffff,0);
          lVar26 = lVar26 + 0x60;
          lVar18 = lVar18 + -0x60;
        } while (lVar18 != 0);
      }
      FUN_1437776d6(&DAT_14cb0e588);
      if (0 < DAT_14cb0e590) {
        lVar26 = 0;
        do {
          lVar25 = lVar26 * 0xd8;
          lVar18 = *(longlong *)(DAT_14cb0e588 + 0x40 + lVar25);
          if ((lVar18 == 0) || ((*(byte *)(lVar18 + 1) & 1) == 0)) {
LAB_143775c04:
            cVar9 = FUN_147d953ac(DAT_14cb0e588 + lVar25 + 8);
            if (cVar9 != '\0') {
              iVar14 = DAT_14cb0e560;
              lVar18 = (longlong)DAT_14cb0e560;
              *(int *)(DAT_14cb0e588 + 4 + lVar25) = DAT_14cb0e560;
              lVar25 = lVar25 + DAT_14cb0e588;
              uVar21 = iVar14 + 1;
              DAT_14cb0e560 = uVar21;
              if (DAT_14cb0e564 < uVar21) {
                FUN_147da2d50(&DAT_14cb0e558,iVar14);
              }
              FUN_147da2c3e(lVar18 * 0xd8 + DAT_14cb0e558,lVar25);
            }
          }
          else {
            if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
              lVar18 = *(longlong *)(lVar18 + 4);
              uVar21 = (uint)((ulonglong)lVar18 >> 0x10);
              uVar13 = (uint)lVar18 & 0xffff;
              lVar12 = *(longlong *)(param_1 + 0x280);
              if (*(longlong *)(param_1 + 0x280) == 0) {
                lVar12 = local_370;
              }
              iVar14 = *(int *)(lVar12 + (ulonglong)
                                         (*(int *)(param_1 + 0x288) - 1U &
                                         (int)((ulonglong)lVar18 >> 0x20) +
                                         ((uint)lVar18 << 0x10 | uVar13) +
                                         (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4)) * 4);
              if (iVar14 != -1) {
                do {
                  lVar12 = *(longlong *)(param_1 + 0x240) + (longlong)iVar14 * 0x40;
                  if (*(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar14 * 0x40) ==
                      lVar18) goto LAB_143775b15;
                  iVar14 = *(int *)(lVar12 + 0x38);
                } while (iVar14 != -1);
              }
            }
            lVar12 = 0;
LAB_143775b15:
            lVar18 = DAT_14cb0e588 + lVar25;
            cVar9 = FUN_1403e7f2a((longlong *)(lVar12 + 0x18));
            if ((cVar9 == '\0') ||
               ((lVar6 = *(longlong *)(lVar12 + 0x18), lVar6 == *(longlong *)(lVar18 + 0x48) &&
                (((*(uint *)(lVar18 + 0x60) ^ *(uint *)(lVar12 + 0x30)) & 0xf) == 0)))) {
LAB_143775b83:
              if (*(char *)(*(longlong *)(lVar18 + 0x40) + 2) == '\0') {
                *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar18 + 0x48);
                uVar29 = *(undefined8 *)(lVar18 + 0x50);
                lVar6 = *(longlong *)(lVar18 + 0x58);
                if (lVar6 != 0) {
                  LOCK();
                  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                  UNLOCK();
                }
                plVar15 = *(longlong **)(lVar12 + 0x28);
                *(undefined8 *)(lVar12 + 0x20) = uVar29;
                *(longlong *)(lVar12 + 0x28) = lVar6;
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar15 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                *(undefined1 *)(lVar12 + 0x30) = *(undefined1 *)(lVar18 + 0x60);
              }
              else {
                *(undefined8 *)(lVar12 + 0x18) = DAT_14c966e80;
                lVar18 = DAT_14c966e90;
                uVar29 = DAT_14c966e88;
                if (DAT_14c966e90 != 0) {
                  LOCK();
                  *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
                  UNLOCK();
                }
                plVar15 = *(longlong **)(lVar12 + 0x28);
                *(undefined8 *)(lVar12 + 0x20) = uVar29;
                *(longlong *)(lVar12 + 0x28) = lVar18;
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar15 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
              }
              goto LAB_143775c04;
            }
            local_a0 = *(undefined8 *)(lVar12 + 0x20);
            local_98 = *(longlong *)(lVar12 + 0x28);
            if (local_98 != 0) {
              LOCK();
              *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
              UNLOCK();
            }
            local_a8 = lVar6;
            cVar9 = FUN_14482ef28(param_1,&local_a8);
            if (cVar9 == '\0') goto LAB_143775b83;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < DAT_14cb0e590);
      }
      if (0 < (int)local_3a0[0x25]) {
        lVar26 = 0;
        do {
          pbVar19 = (byte *)(lVar26 * 0x28 + local_3a0[0x24]);
          lVar18 = 0;
          do {
            local_c0 = (&DAT_14c965af0)[lVar18 * 3];
            if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
              uVar21 = (uint)((ulonglong)local_c0 >> 0x10);
              uVar13 = (uint)local_c0 & 0xffff;
              lVar25 = *(longlong *)(param_1 + 800);
              if (*(longlong *)(param_1 + 800) == 0) {
                lVar25 = local_388;
              }
              iVar14 = *(int *)(lVar25 + (ulonglong)
                                         (*(int *)(param_1 + 0x328) - 1U &
                                         (int)((ulonglong)local_c0 >> 0x20) +
                                         ((uint)local_c0 << 0x10 | uVar13) +
                                         (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4)) * 4);
              if (iVar14 != -1) {
                do {
                  lVar25 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110;
                  if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110) ==
                      local_c0) goto LAB_143775d9d;
                  iVar14 = *(int *)(lVar25 + 0x108);
                } while (iVar14 != -1);
              }
            }
            lVar25 = 0;
LAB_143775d9d:
            local_3c8 = (undefined8 *)(lVar25 + 0x18);
            if (lVar25 == 0) {
              local_3c8 = (undefined8 *)0x0;
            }
            local_b8 = (&DAT_14c965af8)[lVar18 * 3];
            local_b0 = (&DAT_14c965b00)[lVar18 * 3];
            if (local_b0 != 0) {
              LOCK();
              *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
              UNLOCK();
            }
            cVar9 = FUN_14011b9d8(param_1,&local_c0);
            if (cVar9 != '\0') {
              local_d8 = (&DAT_14c965af0)[lVar18 * 3];
              local_d0 = (&DAT_14c965af8)[lVar18 * 3];
              local_c8 = (&DAT_14c965b00)[lVar18 * 3];
              if (local_c8 != 0) {
                LOCK();
                *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
                UNLOCK();
              }
              cVar9 = FUN_14011b7ae(param_1,&local_d8);
              if (cVar9 == '\0') {
                bVar10 = *pbVar19;
                if (((bVar10 & 2) != 0) || ((char)param_4 == '\0')) {
                  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
                    lVar25 = *(longlong *)(param_1 + 0x170);
                    if (*(longlong *)(param_1 + 0x170) == 0) {
                      lVar25 = local_380;
                    }
                    uVar21 = *(uint *)(lVar25 + (ulonglong)
                                                (*(int *)(param_1 + 0x178) - 1U &
                                                **(uint **)(param_1 + 0x480)) * 4);
                    if (uVar21 != 0xffffffff) {
                      do {
                        puVar3 = (uint *)(*(longlong *)(param_1 + 0x130) +
                                         (longlong)(int)uVar21 * 0x28);
                        if (*puVar3 == **(uint **)(param_1 + 0x480)) {
                          if (puVar3 + 2 != (uint *)0x0 && puVar3 != (uint *)0x0) {
                            local_1c8 = *(undefined8 *)(puVar3 + 6);
                            local_1d8 = *(undefined8 *)(puVar3 + 2);
                            uStack_1d0 = *(undefined8 *)(puVar3 + 4);
                            goto LAB_143775f04;
                          }
                          break;
                        }
                        uVar21 = puVar3[8];
                      } while (uVar21 != 0xffffffff);
                    }
                  }
                  local_1d8 = 0xbff0000000000000;
                  uStack_1d0 = 0xbff0000000000000;
                  local_1c8 = 0;
LAB_143775f04:
                  local_1f8 = *(undefined8 *)(pbVar19 + 8);
                  local_1f0 = *(longlong *)(pbVar19 + 0x10);
                  if (local_1f0 != 0) {
                    LOCK();
                    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
                    UNLOCK();
                  }
                  local_1e8 = *(undefined8 *)(pbVar19 + 0x18);
                  local_1e0 = *(longlong *)(pbVar19 + 0x20);
                  if (local_1e0 != 0) {
                    LOCK();
                    *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
                    UNLOCK();
                  }
                  local_3c0 = (undefined4)lVar18;
                  local_3c8 = &local_1d8;
                  FUN_147d953ea(&local_1b8,*(undefined4 *)*puVar2);
                  iVar14 = DAT_14cb0e560;
                  lVar25 = (longlong)DAT_14cb0e560;
                  uVar21 = DAT_14cb0e560 + 1;
                  DAT_14cb0e560 = uVar21;
                  if (DAT_14cb0e564 < uVar21) {
                    FUN_147da2d50(&DAT_14cb0e558,iVar14);
                  }
                  FUN_147da2c3e(lVar25 * 0xd8 + DAT_14cb0e558,&local_1b8);
                  if (1 < *(int *)(param_1 + 0x488)) {
                    param_4 = 1;
                    do {
                      local_1b8 = *(uint *)(*(longlong *)(param_1 + 0x480) + param_4 * 4);
                      uVar29 = 0;
                      if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
                        lVar25 = *(longlong *)(param_1 + 0x170);
                        if (*(longlong *)(param_1 + 0x170) == 0) {
                          lVar25 = local_380;
                        }
                        uVar21 = *(uint *)(lVar25 + (ulonglong)
                                                    (*(int *)(param_1 + 0x178) - 1U & local_1b8) * 4
                                          );
                        if (uVar21 != 0xffffffff) {
                          do {
                            puVar3 = (uint *)(*(longlong *)(param_1 + 0x130) +
                                             (longlong)(int)uVar21 * 0x28);
                            if (*puVar3 == local_1b8) {
                              uVar32 = 0xbff0000000000000;
                              local_128 = 0xbff0000000000000;
                              if (((ulonglong)(puVar3 + 2) & 0xfffffffffffffff7) != 0) {
                                local_128 = *(undefined8 *)(puVar3 + 2);
                                uVar32 = *(undefined8 *)(puVar3 + 4);
                                uVar29 = *(undefined8 *)(puVar3 + 6);
                              }
                              goto LAB_14377603f;
                            }
                            uVar21 = puVar3[8];
                          } while (uVar21 != 0xffffffff);
                        }
                      }
                      local_128 = 0xbff0000000000000;
                      uVar32 = 0xbff0000000000000;
LAB_14377603f:
                      uStack_120 = (undefined4)uVar32;
                      uStack_11c = (undefined4)((ulonglong)uVar32 >> 0x20);
                      local_118 = (undefined4)uVar29;
                      uStack_114 = (undefined4)((ulonglong)uVar29 >> 0x20);
                      iVar14 = DAT_14cb0e560;
                      lVar25 = (longlong)DAT_14cb0e560;
                      uVar21 = DAT_14cb0e560 + 1;
                      DAT_14cb0e560 = uVar21;
                      if (DAT_14cb0e564 < uVar21) {
                        FUN_147da2d50(&DAT_14cb0e558,iVar14);
                      }
                      FUN_147da2c3e(lVar25 * 0xd8 + DAT_14cb0e558,&local_1b8);
                      param_4 = param_4 + 1;
                    } while ((longlong)param_4 < (longlong)*(int *)(param_1 + 0x488));
                  }
                  FUN_147d94cdc(&local_1b8);
                  bVar10 = *pbVar19;
                  param_4 = CONCAT71((int7)(param_4 >> 8),local_3a1);
                }
                if ((bVar10 & 1) != 0) {
                  FUN_14011b67e(&DAT_14cb0e570,&DAT_14c965af0 + lVar18 * 3);
                }
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != 0xb);
          *(undefined4 *)(param_1 + 0x488) = 0;
          if (*(int *)(param_1 + 0x48c) < 0) {
            FUN_14480809c(puVar2,0);
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < (int)local_3a0[0x25]);
      }
      if ((longlong)(int)local_3a0[0x2d] != 0) {
        pbVar19 = (byte *)local_3a0[0x2c];
        pbVar20 = pbVar19 + (longlong)(int)local_3a0[0x2d] * 0x40;
        do {
          local_210 = *(longlong *)(pbVar19 + 8);
          if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
            uVar21 = (uint)((ulonglong)local_210 >> 0x10);
            uVar13 = (uint)local_210 & 0xffff;
            lVar26 = *(longlong *)(param_1 + 800);
            if (*(longlong *)(param_1 + 800) == 0) {
              lVar26 = local_388;
            }
            iVar14 = *(int *)(lVar26 + (ulonglong)
                                       (*(int *)(param_1 + 0x328) - 1U &
                                       (int)((ulonglong)local_210 >> 0x20) +
                                       ((uint)local_210 << 0x10 | uVar13) +
                                       (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4)) * 4);
            if (iVar14 != -1) {
              do {
                lVar26 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110;
                if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110) ==
                    local_210) goto LAB_1437761f6;
                iVar14 = *(int *)(lVar26 + 0x108);
              } while (iVar14 != -1);
            }
          }
          lVar26 = 0;
LAB_1437761f6:
          puVar27 = (undefined8 *)(lVar26 + 0x18);
          if (lVar26 == 0) {
            puVar27 = (undefined8 *)0x0;
          }
          local_208 = *(undefined8 *)(pbVar19 + 0x10);
          local_200 = *(longlong *)(pbVar19 + 0x18);
          if (local_200 != 0) {
            LOCK();
            *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
            UNLOCK();
          }
          local_3c8 = puVar27;
          cVar9 = FUN_14011b9d8(param_1,&local_210);
          if (cVar9 != '\0') {
            local_228 = *(undefined8 *)(pbVar19 + 8);
            local_220 = *(undefined8 *)(pbVar19 + 0x10);
            local_218 = *(longlong *)(pbVar19 + 0x18);
            if (local_218 != 0) {
              LOCK();
              *(int *)(local_218 + 8) = *(int *)(local_218 + 8) + 1;
              UNLOCK();
            }
            cVar9 = FUN_14011b7ae(param_1,&local_228);
            if ((puVar27 != (undefined8 *)0x0) && (cVar9 == '\0')) {
              dVar4 = (double)puVar27[3];
              local_248 = *(undefined8 *)(pbVar19 + 0x20);
              local_240 = *(longlong *)(pbVar19 + 0x28);
              if (local_240 != 0) {
                LOCK();
                *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
                UNLOCK();
              }
              local_238 = *(undefined8 *)(pbVar19 + 0x30);
              local_230 = *(longlong *)(pbVar19 + 0x38);
              if (local_230 != 0) {
                LOCK();
                *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
                UNLOCK();
              }
              local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,(float)dVar4);
              FUN_147d954a0(&local_1b8,*(undefined4 *)*puVar2,DAT_14cb0e560);
              iVar14 = DAT_14cb0e560;
              lVar26 = (longlong)DAT_14cb0e560;
              uVar21 = DAT_14cb0e560 + 1;
              DAT_14cb0e560 = uVar21;
              if (DAT_14cb0e564 < uVar21) {
                FUN_147da2d50(&DAT_14cb0e558,iVar14);
              }
              lVar18 = DAT_14cb0e558;
              lVar26 = lVar26 * 0xd8;
              *(ulonglong *)(DAT_14cb0e558 + lVar26) = CONCAT44(uStack_1b4,local_1b8);
              *(ulonglong *)(lVar18 + 8 + lVar26) = CONCAT44(uStack_1ac,uStack_1b0);
              *(longlong **)(lVar18 + 0x10 + lVar26) = local_1a8;
              uStack_1b0 = 0;
              uStack_1ac = 0;
              local_1a8 = (longlong *)0x0;
              *(undefined8 **)(lVar18 + 0x18 + lVar26) = puStack_1a0;
              *(ulonglong *)(lVar18 + 0x20 + lVar26) = CONCAT44(uStack_194,local_198);
              puStack_1a0 = (undefined8 *)0x0;
              local_198 = 0;
              uStack_194 = 0;
              *(ulonglong *)(lVar18 + 0x28 + lVar26) = CONCAT71(uStack_18f,uStack_190);
              *(longlong *)(lVar18 + 0x30 + lVar26) = local_188;
              uStack_190 = 0;
              uStack_18f = 0;
              local_188 = 0;
              *(undefined1 *)(lVar18 + 0x38 + lVar26) = (undefined1)uStack_180;
              *(undefined8 *)(lVar18 + 0x40 + lVar26) = local_178;
              *(undefined8 *)(lVar18 + 0x48 + lVar26) = local_170;
              *(undefined8 *)(lVar18 + 0x50 + lVar26) = local_168._0_8_;
              *(undefined8 *)(lVar18 + 0x58 + lVar26) = local_168._8_8_;
              local_168 = (undefined1  [16])0x0;
              *(undefined1 *)(lVar18 + 0x60 + lVar26) = local_158;
              *(undefined1 *)(lVar18 + 0x68 + lVar26) = local_150;
              *(undefined8 *)(lVar18 + 0x70 + lVar26) = local_148._0_8_;
              *(undefined8 *)(lVar18 + 0x78 + lVar26) = local_148._8_8_;
              local_148 = (undefined1  [16])0x0;
              *(undefined8 *)(lVar18 + 0x80 + lVar26) = local_138._0_8_;
              *(undefined8 *)(lVar18 + 0x88 + lVar26) = local_138._8_8_;
              local_138 = (undefined1  [16])0x0;
              puVar27 = (undefined8 *)(lVar18 + 0x9c + lVar26);
              *puVar27 = CONCAT44(local_118,uStack_11c);
              puVar27[1] = CONCAT44(uStack_110,uStack_114);
              puVar27 = (undefined8 *)(lVar18 + 0x90 + lVar26);
              *puVar27 = local_128;
              puVar27[1] = CONCAT44(uStack_11c,uStack_120);
              *(undefined8 *)(lVar18 + 0xb0 + lVar26) = local_108._0_8_;
              *(undefined8 *)(lVar18 + 0xb8 + lVar26) = local_108._8_8_;
              local_108 = (undefined1  [16])0x0;
              *(undefined8 *)(lVar18 + 0xc0 + lVar26) = local_f8._0_8_;
              *(undefined8 *)(lVar18 + 200 + lVar26) = local_f8._8_8_;
              local_f8 = (undefined1  [16])0x0;
              *(undefined4 *)(lVar18 + 0xd0 + lVar26) = local_e8;
              if ((*pbVar19 & 1) != 0) {
                FUN_14011b67e(&DAT_14cb0e570,pbVar19 + 8);
              }
              FUN_147d94cdc(&local_1b8);
            }
          }
          *(undefined4 *)(param_1 + 0x488) = 0;
          if (*(int *)(param_1 + 0x48c) < 0) {
            FUN_14480809c(puVar2,0);
          }
          pbVar19 = pbVar19 + 0x40;
        } while (pbVar19 != pbVar20);
      }
      local_249 = '\0';
      if ((longlong)(int)local_3a0[0x27] != 0) {
        lVar26 = local_3a0[0x26];
        lVar18 = (longlong)(int)local_3a0[0x27] * 0x38;
        do {
          uVar28 = FUN_147d9518c(param_1,lVar26);
          *(undefined4 *)(lVar26 + 0x30) = uVar28;
          if (((local_249 != '\0') || (DAT_14c761e3c == '\0')) &&
             (cVar9 = FUN_147d95542(lVar26 + 0x10), cVar9 != '\0')) {
            local_198 = *(undefined4 *)(lVar26 + 0x30);
            uVar29 = *(undefined8 *)(lVar26 + 0x10);
            lVar25 = *(longlong *)(lVar26 + 0x18);
            if (lVar25 != 0) {
              LOCK();
              *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
              UNLOCK();
            }
            local_1a8 = *(longlong **)(lVar26 + 0x20);
            puStack_1a0 = *(undefined8 **)(lVar26 + 0x28);
            if (puStack_1a0 == (undefined8 *)0x0) {
              puStack_1a0 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)puStack_1a0 + 8) = *(int *)((longlong)puStack_1a0 + 8) + 1;
              UNLOCK();
            }
            local_1b8 = (uint)uVar29;
            uStack_1b4 = (undefined4)((ulonglong)uVar29 >> 0x20);
            uStack_1b0 = (undefined4)lVar25;
            uStack_1ac = (undefined4)((ulonglong)lVar25 >> 0x20);
            local_278 = (undefined1  [16])0x0;
            local_268 = (undefined1  [16])0x0;
            FUN_1457dfb3e(local_278);
            iVar14 = DAT_14cb0e530;
            lVar25 = (longlong)DAT_14cb0e530;
            uVar21 = DAT_14cb0e530 + 1;
            DAT_14cb0e530 = uVar21;
            if (DAT_14cb0e534 < uVar21) {
              FUN_14377d376(iVar14);
            }
            lVar12 = DAT_14cb0e528;
            *(ulonglong *)(DAT_14cb0e528 + lVar25 * 0x28) = CONCAT44(uStack_1b4,local_1b8);
            *(ulonglong *)(lVar12 + 8 + lVar25 * 0x28) = CONCAT44(uStack_1ac,uStack_1b0);
            local_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            *(longlong **)(lVar12 + 0x10 + lVar25 * 0x28) = local_1a8;
            *(undefined8 **)(lVar12 + 0x18 + lVar25 * 0x28) = puStack_1a0;
            local_1a8 = (longlong *)0x0;
            puStack_1a0 = (undefined8 *)0x0;
            *(undefined4 *)(lVar12 + 0x20 + lVar25 * 0x28) = local_198;
            FUN_1457dfb3e(&local_1b8);
          }
          lVar26 = lVar26 + 0x38;
          lVar18 = lVar18 + -0x38;
        } while (lVar18 != 0);
      }
      if ((longlong)(int)local_3a0[0x29] != 0) {
        lVar26 = (longlong)(int)local_3a0[0x29] << 6;
        puVar27 = (undefined8 *)(local_3a0[0x28] + 0x20);
        do {
          local_290 = puVar27[-3];
          local_288 = puVar27[-2];
          local_280 = puVar27[-1];
          if (local_280 != 0) {
            LOCK();
            *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
            UNLOCK();
          }
          cVar9 = FUN_14011b7ae(param_1,&local_290);
          if (cVar9 == '\0') {
            if (((char)param_4 == '\0') || (bVar10 = *(byte *)(puVar27 + -4), (bVar10 & 2) != 0)) {
              local_2a8 = puVar27[-3];
              local_2a0 = puVar27[-2];
              local_298 = puVar27[-1];
              if (local_298 != 0) {
                LOCK();
                *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
                UNLOCK();
              }
              uVar28 = FUN_143774bb6(param_1,&local_2a8);
              *(undefined4 *)((longlong)puVar27 + -0x1c) = uVar28;
              bVar10 = *(byte *)(puVar27 + -4);
            }
            else {
              *(undefined4 *)((longlong)puVar27 + -0x1c) = 0;
            }
            if ((bVar10 & 1) != 0) {
              FUN_14011b67e(&DAT_14cb0e570,puVar27 + -3);
            }
          }
          else if (DAT_14c761e3e == '\x01') {
            *(undefined4 *)((longlong)puVar27 + -0x1c) = 0;
          }
          cVar9 = FUN_147d95542(puVar27);
          if (cVar9 != '\0') {
            local_198 = *(undefined4 *)((longlong)puVar27 + -0x1c);
            uVar29 = *puVar27;
            lVar18 = puVar27[1];
            if (lVar18 != 0) {
              LOCK();
              *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
              UNLOCK();
            }
            local_1a8 = (longlong *)puVar27[2];
            puStack_1a0 = (undefined8 *)puVar27[3];
            if (puStack_1a0 == (undefined8 *)0x0) {
              puStack_1a0 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)puStack_1a0 + 8) = *(int *)((longlong)puStack_1a0 + 8) + 1;
              UNLOCK();
            }
            local_1b8 = (uint)uVar29;
            uStack_1b4 = (undefined4)((ulonglong)uVar29 >> 0x20);
            uStack_1b0 = (undefined4)lVar18;
            uStack_1ac = (undefined4)((ulonglong)lVar18 >> 0x20);
            local_2c8 = (undefined1  [16])0x0;
            local_2b8 = (undefined1  [16])0x0;
            FUN_1457dfb3e(local_2c8);
            iVar14 = DAT_14cb0e530;
            lVar18 = (longlong)DAT_14cb0e530;
            uVar21 = DAT_14cb0e530 + 1;
            DAT_14cb0e530 = uVar21;
            if (DAT_14cb0e534 < uVar21) {
              FUN_14377d376(iVar14);
            }
            lVar25 = DAT_14cb0e528;
            *(ulonglong *)(DAT_14cb0e528 + lVar18 * 0x28) = CONCAT44(uStack_1b4,local_1b8);
            *(ulonglong *)(lVar25 + 8 + lVar18 * 0x28) = CONCAT44(uStack_1ac,uStack_1b0);
            local_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            *(longlong **)(lVar25 + 0x10 + lVar18 * 0x28) = local_1a8;
            *(undefined8 **)(lVar25 + 0x18 + lVar18 * 0x28) = puStack_1a0;
            local_1a8 = (longlong *)0x0;
            puStack_1a0 = (undefined8 *)0x0;
            *(undefined4 *)(lVar25 + 0x20 + lVar18 * 0x28) = local_198;
            FUN_1457dfb3e(&local_1b8);
          }
          puVar27 = puVar27 + 8;
          lVar26 = lVar26 + -0x40;
        } while (lVar26 != 0);
      }
      if ((longlong)(int)local_3a0[0x2b] != 0) {
        pbVar19 = (byte *)local_3a0[0x2a];
        pbVar20 = pbVar19 + (longlong)(int)local_3a0[0x2b] * 0x58;
        do {
          local_2e0 = *(undefined8 *)(pbVar19 + 0x20);
          local_2d8 = *(undefined8 *)(pbVar19 + 0x28);
          local_2d0 = *(longlong *)(pbVar19 + 0x30);
          if (local_2d0 != 0) {
            LOCK();
            *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
            UNLOCK();
          }
          cVar9 = FUN_14011b7ae(param_1,&local_2e0);
          if (cVar9 == '\0') {
            if (((char)param_4 == '\0') || (bVar10 = *pbVar19, (bVar10 & 2) != 0)) {
              lVar26 = *(longlong *)(pbVar19 + 0x20);
              plVar15 = *(longlong **)(pbVar19 + 0x30);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                UNLOCK();
              }
              if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
                uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
                uVar13 = (uint)lVar26 & 0xffff;
                lVar18 = *(longlong *)(param_1 + 800);
                if (*(longlong *)(param_1 + 800) == 0) {
                  lVar18 = local_388;
                }
                iVar14 = *(int *)(lVar18 + (ulonglong)
                                           (*(int *)(param_1 + 0x328) - 1U &
                                           (int)((ulonglong)lVar26 >> 0x20) +
                                           ((uint)lVar26 << 0x10 | uVar13) +
                                           (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4)) * 4);
                if (iVar14 != -1) {
                  do {
                    lVar18 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110;
                    if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar14 * 0x110) ==
                        lVar26) {
                      if (lVar18 != -0x18 && lVar18 != 0) {
                        local_1a8 = *(longlong **)(lVar18 + 0x40);
                        local_1b8 = (uint)*(undefined8 *)(lVar18 + 0x30);
                        uStack_1b4 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x30) >> 0x20)
                        ;
                        uStack_1b0 = (undefined4)*(undefined8 *)(lVar18 + 0x38);
                        uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x38) >> 0x20)
                        ;
                        goto LAB_143776a83;
                      }
                      break;
                    }
                    iVar14 = *(int *)(lVar18 + 0x108);
                  } while (iVar14 != -1);
                }
              }
              local_1b8 = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              uStack_1ac = 0;
              local_1a8 = (longlong *)0x0;
LAB_143776a83:
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar15 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
              *(longlong **)(pbVar19 + 0x18) = local_1a8;
              *(ulonglong *)(pbVar19 + 8) = CONCAT44(uStack_1b4,local_1b8);
              *(ulonglong *)(pbVar19 + 0x10) = CONCAT44(uStack_1ac,uStack_1b0);
              bVar10 = *pbVar19;
            }
            else {
              *(undefined8 *)(pbVar19 + 0x18) = DAT_14c8464f0;
              uVar29 = DAT_14c8464e8;
              *(undefined8 *)(pbVar19 + 8) = DAT_14c8464e0;
              *(undefined8 *)(pbVar19 + 0x10) = uVar29;
            }
            if ((bVar10 & 1) != 0) {
              FUN_14011b67e(&DAT_14cb0e570,pbVar19 + 0x20);
            }
          }
          cVar9 = FUN_147d9558a(pbVar19 + 0x38);
          if (cVar9 != '\0') {
            local_2f8 = *(undefined8 *)(pbVar19 + 8);
            uStack_2f0 = *(undefined8 *)(pbVar19 + 0x10);
            local_2e8 = *(longlong *)(pbVar19 + 0x18);
            uVar29 = *(undefined8 *)(pbVar19 + 0x38);
            lVar26 = *(longlong *)(pbVar19 + 0x40);
            if (lVar26 != 0) {
              LOCK();
              *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
              UNLOCK();
            }
            local_1a8 = *(longlong **)(pbVar19 + 0x48);
            puStack_1a0 = *(undefined8 **)(pbVar19 + 0x50);
            if (puStack_1a0 == (undefined8 *)0x0) {
              puStack_1a0 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)puStack_1a0 + 8) = *(int *)((longlong)puStack_1a0 + 8) + 1;
              UNLOCK();
            }
            local_1b8 = (uint)uVar29;
            uStack_1b4 = (undefined4)((ulonglong)uVar29 >> 0x20);
            uStack_1b0 = (undefined4)lVar26;
            uStack_1ac = (undefined4)((ulonglong)lVar26 >> 0x20);
            local_318 = (undefined1  [16])0x0;
            local_308 = (undefined1  [16])0x0;
            local_198 = (undefined4)local_2f8;
            uStack_194 = (undefined4)((ulonglong)local_2f8 >> 0x20);
            uStack_190 = (undefined1)uStack_2f0;
            uStack_18f = (undefined7)((ulonglong)uStack_2f0 >> 8);
            local_188 = local_2e8;
            FUN_1479f6e18(local_318);
            iVar14 = DAT_14cb0e548;
            lVar26 = (longlong)DAT_14cb0e548;
            uVar21 = DAT_14cb0e548 + 1;
            DAT_14cb0e548 = uVar21;
            if (DAT_14cb0e54c < uVar21) {
              FUN_14377d4ea(iVar14);
            }
            lVar18 = DAT_14cb0e540;
            lVar26 = lVar26 * 0x38;
            *(ulonglong *)(DAT_14cb0e540 + lVar26) = CONCAT44(uStack_1b4,local_1b8);
            *(ulonglong *)(lVar18 + 8 + lVar26) = CONCAT44(uStack_1ac,uStack_1b0);
            local_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            *(longlong **)(lVar18 + 0x10 + lVar26) = local_1a8;
            *(undefined8 **)(lVar18 + 0x18 + lVar26) = puStack_1a0;
            local_1a8 = (longlong *)0x0;
            puStack_1a0 = (undefined8 *)0x0;
            *(longlong *)(lVar18 + 0x30 + lVar26) = local_188;
            puVar27 = (undefined8 *)(lVar18 + 0x20 + lVar26);
            *puVar27 = CONCAT44(uStack_194,local_198);
            puVar27[1] = CONCAT71(uStack_18f,uStack_190);
            FUN_1479f6e18(&local_1b8);
          }
          pbVar19 = pbVar19 + 0x58;
        } while (pbVar19 != pbVar20);
      }
      if ((*(byte *)((longlong)local_3a0 + 0x194) & 1) == 0) {
        if (0 < DAT_14cb0e578) {
          lVar26 = 0;
          iVar14 = DAT_14cb0e578;
          do {
            if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
              lVar18 = *(longlong *)(DAT_14cb0e570 + lVar26 * 0x18);
              uVar21 = (uint)((ulonglong)lVar18 >> 0x10);
              uVar13 = (uint)lVar18 & 0xffff;
              lVar25 = *(longlong *)(param_1 + 800);
              if (*(longlong *)(param_1 + 800) == 0) {
                lVar25 = local_388;
              }
              iVar22 = *(int *)(lVar25 + (ulonglong)
                                         (*(int *)(param_1 + 0x328) - 1U &
                                         (int)((ulonglong)lVar18 >> 0x20) +
                                         ((uint)lVar18 << 0x10 | uVar13) +
                                         (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4)) * 4);
              if (iVar22 != -1) {
                do {
                  lVar25 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar22 * 0x110;
                  if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar22 * 0x110) ==
                      lVar18) {
                    if (lVar25 != -0x18 && lVar25 != 0) {
                      *(byte *)(lVar25 + 0x4c) = *(byte *)(lVar25 + 0x4c) | 4;
                      iVar14 = DAT_14cb0e578;
                    }
                    break;
                  }
                  iVar22 = *(int *)(lVar25 + 0x108);
                } while (iVar22 != -1);
              }
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar14);
        }
        iVar14 = DAT_14cb0e57c;
        FUN_144a65a1e(DAT_14cb0e570);
        DAT_14cb0e578 = 0;
        if ((iVar14 < 0) && (DAT_14cb0e57c != 0)) {
          FUN_145811e2e(&DAT_14cb0e570,0);
        }
        iVar22 = DAT_14cb0e594;
        FUN_14377d34a(DAT_14cb0e588,DAT_14cb0e590);
        bVar7 = false;
        iVar14 = DAT_14cb0e594;
        DAT_14cb0e590 = 0;
        if (iVar22 < 0) {
          uVar11 = (ulonglong)local_394;
joined_r0x000143776e66:
          plVar15 = local_3b0;
          if (iVar14 != 0) {
            FUN_147da30b0(&DAT_14cb0e588);
            plVar15 = local_3b0;
          }
        }
        else {
          uVar11 = (ulonglong)local_394;
          plVar15 = local_3b0;
        }
      }
      else {
        iVar14 = DAT_14cb0e57c;
        FUN_144a65a1e(DAT_14cb0e570,DAT_14cb0e578);
        DAT_14cb0e578 = 0;
        if ((iVar14 < 0) && (DAT_14cb0e57c != 0)) {
          FUN_145811e2e(&DAT_14cb0e570,0);
        }
        local_390 = (ulonglong)((int)local_390 - 2);
        iVar22 = DAT_14cb0e594;
        FUN_14377d34a(DAT_14cb0e588,DAT_14cb0e590);
        iVar14 = DAT_14cb0e594;
        DAT_14cb0e590 = 0;
        bVar7 = true;
        plVar15 = local_3b0;
        uVar11 = local_390;
        if (iVar22 < 0) goto joined_r0x000143776e66;
      }
    }
    auVar8 = _DAT_149931e80;
    uVar17 = uVar11;
  } while (!bVar7);
  if (-1 < (int)uVar11) {
    auVar36 = pmovsxbq(in_XMM2,0x302);
    auVar37 = pmovsxbq((undefined1  [16])0x0,0x100);
    uVar17 = uVar11 & 0xffffffff;
    do {
      plVar5 = *(longlong **)(*plVar15 + uVar17 * 8);
      if (plVar5 != (longlong *)0x0) {
        if ((longlong)(int)plVar5[0x27] != 0) {
          uVar11 = (longlong)(int)plVar5[0x27] * 0x38 - 0x38U >> 3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar11;
          auVar30._8_4_ = SUB164(auVar34 * ZEXT816(0x2492492492492493),8);
          auVar30._0_8_ = uVar11 / 7;
          auVar30._12_4_ = (int)(uVar11 / 0x700000000);
          puVar23 = (undefined4 *)(plVar5[0x26] + 0xd8);
          uVar16 = 0;
          do {
            lVar26 = SUB168(auVar30 | auVar8,0);
            lVar18 = SUB168(auVar30 | auVar8,8);
            if ((bool)(~(lVar26 < (longlong)(uVar16 ^ auVar8._0_8_)) & 1)) {
              puVar23[-0x2a] = 0;
            }
            auVar33._8_4_ = (int)uVar16;
            auVar33._0_8_ = uVar16;
            auVar33._12_4_ = (int)(uVar16 >> 0x20);
            if ((longlong)((auVar33._8_8_ | auVar37._8_8_) ^ auVar8._8_8_) <= lVar18) {
              puVar23[-0x1c] = 0;
            }
            auVar34 = (auVar33 | auVar36) ^ auVar8;
            if (auVar34._0_8_ <= lVar26) {
              puVar23[-0xe] = 0;
            }
            if (auVar34._8_8_ <= lVar18) {
              *puVar23 = 0;
            }
            uVar16 = uVar16 + 4;
            puVar23 = puVar23 + 0x38;
          } while ((uVar11 / 7 + 4 & 0xfffffffffffffffc) != uVar16);
        }
        if ((longlong)(int)plVar5[0x29] != 0) {
          uVar11 = (longlong)(int)plVar5[0x29] + 0x3ffffffffffffff;
          uVar16 = uVar11 & 0x3ffffffffffffff;
          auVar31._8_4_ = (int)uVar16;
          auVar31._0_8_ = uVar16;
          auVar31._12_4_ = (int)(uVar16 >> 0x20);
          puVar23 = (undefined4 *)(plVar5[0x28] + 0xc4);
          uVar24 = 0;
          do {
            lVar26 = SUB168(auVar31 | auVar8,0);
            lVar18 = SUB168(auVar31 | auVar8,8);
            if ((bool)(~(lVar26 < (longlong)(uVar24 ^ auVar8._0_8_)) & 1)) {
              puVar23[-0x30] = 0;
            }
            auVar35._8_4_ = (int)uVar24;
            auVar35._0_8_ = uVar24;
            auVar35._12_4_ = (int)(uVar24 >> 0x20);
            if ((longlong)((auVar35._8_8_ | auVar37._8_8_) ^ auVar8._8_8_) <= lVar18) {
              puVar23[-0x20] = 0;
            }
            auVar34 = (auVar35 | auVar36) ^ auVar8;
            if (auVar34._0_8_ <= lVar26) {
              puVar23[-0x10] = 0;
            }
            if (auVar34._8_8_ <= lVar18) {
              *puVar23 = 0;
            }
            uVar24 = uVar24 + 4;
            puVar23 = puVar23 + 0x40;
          } while ((uVar16 - ((uint)uVar11 & 3)) + 4 != uVar24);
        }
        lVar26 = plVar5[0x2b];
        if ((longlong)(int)lVar26 != 0) {
          lVar18 = plVar5[0x2a];
          lVar25 = 0;
          do {
            *(undefined8 *)(lVar18 + 0x18 + lVar25) = DAT_14c8464f0;
            uVar29 = DAT_14c8464e8;
            puVar2 = (undefined8 *)(lVar18 + 8 + lVar25);
            *puVar2 = DAT_14c8464e0;
            puVar2[1] = uVar29;
            lVar25 = lVar25 + 0x58;
          } while ((longlong)(int)lVar26 * 0x58 - lVar25 != 0);
        }
        (**(code **)(*plVar5 + 0x490))();
        plVar15 = local_3b0;
      }
      bVar7 = 0 < (longlong)uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar7);
  }
LAB_14377715f:
  FUN_1437776d6(&DAT_14cb0e558);
  if ((longlong)DAT_14cb0e560 != 0) {
    lVar18 = (longlong)DAT_14cb0e560 * 0xd8;
    lVar26 = DAT_14cb0e558 + 0x70;
    do {
      cVar9 = FUN_147d953ac(lVar26 + -0x68);
      if (cVar9 == '\0') {
        cVar9 = FUN_147d9572c(lVar26);
        if (cVar9 == '\0') {
          cVar9 = FUN_147d95830(lVar26 + 0x40);
          if (cVar9 != '\0') {
            FUN_147d95878(lVar26 + 0x40,*(undefined4 *)(lVar26 + 0x60));
          }
        }
        else {
          local_338 = *(undefined8 *)(lVar26 + 0x30);
          local_348 = *(undefined8 *)(lVar26 + 0x20);
          uStack_340 = *(undefined8 *)(lVar26 + 0x28);
          FUN_147d95774(lVar26,*(undefined4 *)(lVar26 + 0x38),&local_348);
        }
      }
      else {
        local_330 = *(undefined8 *)(lVar26 + -0x28);
        local_328 = *(undefined8 *)(lVar26 + -0x20);
        local_320 = *(longlong *)(lVar26 + -0x18);
        if (local_320 != 0) {
          LOCK();
          *(int *)(local_320 + 8) = *(int *)(local_320 + 8) + 1;
          UNLOCK();
        }
        FUN_147d955d2(lVar26 + -0x68,&local_330);
      }
      lVar26 = lVar26 + 0xd8;
      lVar18 = lVar18 + -0xd8;
    } while (lVar18 != 0);
  }
  if ((longlong)DAT_14cb0e530 != 0) {
    lVar26 = (longlong)DAT_14cb0e530 * 0x28;
    lVar18 = DAT_14cb0e528;
    do {
      cVar9 = FUN_147d95542(lVar18);
      if (cVar9 != '\0') {
        FUN_147d95902(lVar18,*(undefined4 *)(lVar18 + 0x20));
      }
      lVar18 = lVar18 + 0x28;
      lVar26 = lVar26 + -0x28;
    } while (lVar26 != 0);
  }
  if ((longlong)DAT_14cb0e548 != 0) {
    lVar18 = (longlong)DAT_14cb0e548 * 0x38;
    lVar26 = DAT_14cb0e540;
    do {
      cVar9 = FUN_147d9558a(lVar26);
      if (cVar9 != '\0') {
        local_358 = *(undefined8 *)(lVar26 + 0x30);
        local_368 = *(undefined8 *)(lVar26 + 0x20);
        uStack_360 = *(undefined8 *)(lVar26 + 0x28);
        FUN_147d9598c(lVar26,&local_368);
      }
      lVar26 = lVar26 + 0x38;
      lVar18 = lVar18 + -0x38;
    } while (lVar18 != 0);
  }
  iVar14 = DAT_14cb0e534;
  FUN_14377d2fe(DAT_14cb0e528,DAT_14cb0e530);
  DAT_14cb0e530 = 0;
  if ((iVar14 < 0) && (DAT_14cb0e534 != 0)) {
    FUN_14377d65a();
  }
  iVar14 = DAT_14cb0e54c;
  FUN_14377d324(DAT_14cb0e540,DAT_14cb0e548);
  DAT_14cb0e548 = 0;
  if ((iVar14 < 0) && (DAT_14cb0e54c != 0)) {
    FUN_14377d69a();
  }
  iVar14 = DAT_14cb0e564;
  FUN_14377d34a(DAT_14cb0e558,DAT_14cb0e560);
  DAT_14cb0e560 = 0;
  if ((iVar14 < 0) && (DAT_14cb0e564 != 0)) {
    FUN_147da30b0(&DAT_14cb0e558);
  }
  if ((local_90 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437775af FUN_1437775af body=49 status=ok
// SIG undefined FUN_1437775af(void)

void FUN_1437775af(void)

{
  FUN_14377d2fe(DAT_14cb0e528,DAT_14cb0e530);
  if (DAT_14cb0e528 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437775e0 FUN_1437775e0 body=49 status=ok
// SIG undefined FUN_1437775e0(void)

void FUN_1437775e0(void)

{
  FUN_14377d324(DAT_14cb0e540,DAT_14cb0e548);
  if (DAT_14cb0e540 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143777611 FUN_143777611 body=49 status=ok
// SIG undefined FUN_143777611(void)

void FUN_143777611(void)

{
  FUN_14377d34a(DAT_14cb0e558,DAT_14cb0e560);
  if (DAT_14cb0e558 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143777642 FUN_143777642 body=49 status=ok
// SIG undefined FUN_143777642(void)

void FUN_143777642(void)

{
  FUN_144a65a1e(DAT_14cb0e570,DAT_14cb0e578);
  if (DAT_14cb0e570 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143777673 FUN_143777673 body=49 status=ok
// SIG undefined FUN_143777673(void)

void FUN_143777673(void)

{
  FUN_14377d34a(DAT_14cb0e588,DAT_14cb0e590);
  if (DAT_14cb0e588 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437776a4 FUN_1437776a4 body=49 status=ok
// SIG undefined FUN_1437776a4(void)

void FUN_1437776a4(void)

{
  FUN_140ffc319(DAT_14cb0e5a0,DAT_14cb0e5a8);
  if (DAT_14cb0e5a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437776d6 FUN_1437776d6 body=1684 status=ok
// SIG undefined FUN_1437776d6(void)

void FUN_1437776d6(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint *puVar15;
  uint *_Src;
  uint *_Src_00;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_468 [32];
  longlong *local_448;
  ulonglong local_440;
  uint *local_438;
  uint *local_430;
  longlong local_428;
  longlong local_420;
  undefined4 local_418 [190];
  undefined1 local_120 [216];
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  iVar17 = (int)param_1[1];
  if (1 < (longlong)iVar17) {
    lVar8 = *param_1;
    memset(local_418,0,0x2f0);
    local_420 = (longlong)iVar17 * 0xd8 + lVar8 + -0xd8;
    local_428 = lVar8;
    fVar20 = logf((float)iVar17);
    local_418[0] = (int)(longlong)(fVar20 + fVar20);
    plVar14 = &local_428;
    do {
      puVar15 = (uint *)*plVar14;
      _Src_00 = (uint *)plVar14[1];
      iVar17 = (int)plVar14[2];
      iVar4 = (int)((ulonglong)((longlong)_Src_00 - (longlong)puVar15) >> 3) * 0x684bda13;
      uVar19 = iVar4 + 1;
      puVar10 = puVar15;
      _Src = puVar15;
      puVar18 = _Src_00;
      local_448 = plVar14;
      if (iVar17 != 0) {
LAB_143777793:
        if (8 < (int)uVar19) {
          local_440 = CONCAT44(local_440._4_4_,iVar17);
          local_438 = puVar15;
          local_430 = puVar18;
          memcpy(local_120,_Src + (ulonglong)(uVar19 >> 1) * 0x36,0xd8);
          memcpy(_Src + (ulonglong)(uVar19 >> 1) * 0x36,_Src,0xd8);
          memcpy(_Src,local_120,0xd8);
          puVar15 = _Src_00 + 0x36;
          puVar10 = _Src;
          do {
            puVar18 = puVar10 + 0x36;
            puVar3 = puVar10 + 0x36;
            do {
              puVar10 = puVar3;
              puVar6 = puVar18;
              if (_Src_00 < puVar10) break;
              bVar1 = *_Src < *puVar10;
              if (*_Src == *puVar10) {
                bVar1 = _Src[1] < puVar10[1];
              }
              puVar18 = puVar6 + 0x36;
              puVar3 = puVar10 + 0x36;
            } while (!bVar1);
            puVar3 = puVar15 + -0x6c;
            do {
              puVar16 = puVar15;
              puVar18 = puVar3;
              puVar15 = puVar16 + -0x36;
              if (puVar15 <= _Src) break;
              bVar1 = *puVar15 < *_Src;
              if (*puVar15 == *_Src) {
                bVar1 = puVar16[-0x35] < _Src[1];
              }
              puVar3 = puVar18 + -0x36;
            } while (!bVar1);
            if (puVar15 < puVar10) goto LAB_1437778d1;
            memcpy(local_120,puVar10,0xd8);
            memcpy(puVar10,puVar15,0xd8);
            memcpy(puVar15,local_120,0xd8);
          } while( true );
        }
        plVar14 = local_448;
        if (_Src < _Src_00) {
          do {
            puVar15 = _Src;
            if (_Src + 0x36 <= _Src_00) {
              uVar19 = *_Src;
              puVar10 = _Src + 0x36;
              do {
                uVar5 = *puVar10;
                bVar1 = uVar19 < uVar5;
                if (uVar19 == uVar5) {
                  bVar1 = puVar15[1] < puVar10[1];
                }
                puVar18 = puVar10;
                if (!bVar1) {
                  puVar18 = puVar15;
                  uVar5 = uVar19;
                }
                uVar19 = uVar5;
                puVar15 = puVar18;
                puVar10 = puVar10 + 0x36;
              } while (puVar10 <= _Src_00);
            }
            puVar10 = _Src_00 + -0x36;
            memcpy(local_120,puVar15,0xd8);
            memcpy(puVar15,_Src_00,0xd8);
            memcpy(_Src_00,local_120,0xd8);
            plVar14 = local_448;
            _Src_00 = puVar10;
          } while (_Src < puVar10);
        }
        goto LAB_143777d2b;
      }
LAB_1437779c4:
      plVar14 = local_448;
      if (uVar19 != 0) {
        uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar7 = (ulonglong)uVar5;
          local_440 = uVar7;
          while (uVar2 = uVar5 * 2 + 1, (int)uVar2 < (int)uVar19) {
            uVar11 = uVar5 * 2 + 2;
            uVar5 = uVar2;
            if ((int)uVar11 < (int)uVar19) {
              bVar1 = puVar10[(longlong)(int)uVar11 * 0x36] < puVar10[(longlong)(int)uVar2 * 0x36];
              if (puVar10[(longlong)(int)uVar11 * 0x36] == puVar10[(longlong)(int)uVar2 * 0x36]) {
                bVar1 = puVar10[(longlong)(int)uVar11 * 0x36 + 1] <
                        puVar10[(longlong)(int)uVar2 * 0x36 + 1];
              }
              if (!bVar1) {
                uVar5 = uVar11;
              }
            }
            lVar8 = (longlong)(int)uVar7;
            lVar9 = (longlong)(int)uVar5;
            bVar1 = puVar10[lVar8 * 0x36] < puVar10[lVar9 * 0x36];
            if (puVar10[lVar8 * 0x36] == puVar10[lVar9 * 0x36]) {
              bVar1 = puVar10[lVar8 * 0x36 + 1] < puVar10[lVar9 * 0x36 + 1];
            }
            if (!bVar1) break;
            memcpy(local_120,puVar10 + lVar8 * 0x36,0xd8);
            memcpy(puVar10 + lVar8 * 0x36,puVar10 + lVar9 * 0x36,0xd8);
            memcpy(puVar10 + lVar9 * 0x36,local_120,0xd8);
            uVar7 = (ulonglong)uVar5;
          }
          uVar5 = (int)local_440 - 1;
        } while ((int)local_440 != 0);
        plVar14 = local_448;
        if (1 < (int)uVar19) {
          memcpy(local_120,puVar10,0xd8);
          memcpy(puVar10,puVar10 + ((ulonglong)uVar19 - 1) * 0x36,0xd8);
          memcpy(puVar10 + ((ulonglong)uVar19 - 1) * 0x36,local_120,0xd8);
          plVar14 = local_448;
          uVar7 = (ulonglong)uVar19 - 1;
          if (uVar19 != 2) {
            do {
              iVar17 = 0;
              iVar13 = 1;
              iVar4 = 0;
              do {
                lVar8 = (longlong)(iVar17 + 2);
                iVar12 = iVar13;
                if (lVar8 < (longlong)uVar7) {
                  bVar1 = puVar10[lVar8 * 0x36] < puVar10[(longlong)iVar13 * 0x36];
                  if (puVar10[lVar8 * 0x36] == puVar10[(longlong)iVar13 * 0x36]) {
                    bVar1 = puVar10[lVar8 * 0x36 + 1] < puVar10[(longlong)iVar13 * 0x36 + 1];
                  }
                  if (!bVar1) {
                    iVar12 = iVar17 + 2;
                  }
                }
                lVar8 = (longlong)iVar4;
                lVar9 = (longlong)iVar12;
                bVar1 = puVar10[lVar8 * 0x36] < puVar10[lVar9 * 0x36];
                if (puVar10[lVar8 * 0x36] == puVar10[lVar9 * 0x36]) {
                  bVar1 = puVar10[lVar8 * 0x36 + 1] < puVar10[lVar9 * 0x36 + 1];
                }
                if (!bVar1) break;
                memcpy(local_120,puVar10 + lVar8 * 0x36,0xd8);
                memcpy(puVar10 + lVar8 * 0x36,puVar10 + lVar9 * 0x36,0xd8);
                memcpy(puVar10 + lVar9 * 0x36,local_120,0xd8);
                iVar17 = iVar12 * 2;
                iVar13 = iVar12 * 2 + 1;
                iVar4 = iVar12;
              } while ((longlong)iVar13 < (longlong)uVar7);
              memcpy(local_120,puVar10,0xd8);
              memcpy(puVar10,puVar10 + (uVar7 - 1) * 0x36,0xd8);
              memcpy(puVar10 + (uVar7 - 1) * 0x36,local_120,0xd8);
              bVar1 = 2 < uVar7;
              plVar14 = local_448;
              uVar7 = uVar7 - 1;
            } while (bVar1);
          }
        }
      }
LAB_143777d2b:
      plVar14 = plVar14 + -3;
    } while (&local_428 <= plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1437778d1:
  memcpy(local_120,_Src,0xd8);
  memcpy(_Src,puVar15,0xd8);
  memcpy(puVar15,local_120,0xd8);
  iVar17 = (int)local_440 + -1;
  puVar16 = puVar16 + -0x6c;
  if ((longlong)puVar18 - (longlong)local_438 < (longlong)local_430 - (longlong)puVar6) {
    plVar14 = local_448;
    if (puVar10 < _Src_00) {
      *local_448 = (longlong)puVar10;
      local_448[1] = (longlong)_Src_00;
      *(int *)(local_448 + 2) = iVar17;
      plVar14 = local_448 + 3;
    }
    puVar10 = _Src;
    if (puVar15 <= _Src + 0x36) goto LAB_143777d2b;
  }
  else {
    if (_Src + 0x36 < puVar15) {
      *local_448 = (longlong)_Src;
      local_448[1] = (longlong)puVar16;
      *(int *)(local_448 + 2) = iVar17;
      local_448 = local_448 + 3;
    }
    plVar14 = local_448;
    _Src = puVar6;
    puVar16 = _Src_00;
    puVar18 = _Src_00;
    if (_Src_00 <= puVar10) goto LAB_143777d2b;
  }
  local_448 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)puVar18 - (longlong)_Src) >> 3) * 0x684bda13;
  uVar19 = iVar4 + 1;
  puVar15 = _Src;
  _Src_00 = puVar16;
  _Src = puVar10;
  if (iVar17 == 0) goto LAB_1437779c4;
  goto LAB_143777793;
}



// FUNCTION 143777d6c FUN_143777d6c body=2180 status=ok
// SIG undefined FUN_143777d6c(void)

void FUN_143777d6c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  int iVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined **local_180;
  double local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 != 0) {
    local_190 = param_2 + 0xa8;
    *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xdc) = 0;
    *(undefined4 *)(param_2 + 0xe0) = 0;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    local_d0 = 0;
    local_180 = (undefined **)param_1[3];
    FUN_1400021e4(&local_180,&local_c0);
    if (local_b8 == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    else {
      puVar20 = (undefined2 *)CONCAT44(uStack_bc,local_c0);
    }
    FUN_140002266(&local_180,L"INPUT %s",puVar20);
    FUN_147d8f316(local_190,&local_180,&local_d0);
    if (local_180 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_bc,local_c0) != 0) {
      FUN_1400020a8();
    }
    lVar9 = (**(code **)(*param_1 + 0x180))();
    dVar2 = *(double *)(lVar9 + 0x6e0);
    iVar7 = (int)param_1[0x61];
    local_188 = param_2;
    if (iVar7 == 0) {
      uVar21 = 1;
      uVar23 = 0;
      iVar19 = 0;
      iVar16 = 0;
    }
    else {
      puVar17 = (uint *)param_1[0x60];
      if ((uint *)param_1[0x60] == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0x5e);
      }
      uVar24 = *puVar17;
      if (uVar24 == 0) {
        iVar19 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar19 = iVar7 + -1;
        }
        uVar23 = 0;
        uVar18 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar18 = uVar23;
        }
        iVar19 = 0;
        do {
          if (uVar18 == uVar23) goto LAB_14377827e;
          iVar19 = iVar19 + 0x20;
          uVar24 = puVar17[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar23 = 0;
        iVar19 = 0;
      }
      uVar21 = (ulonglong)(-uVar24 & uVar24);
      uVar18 = uVar21 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar16) {
        iVar16 = iVar7;
      }
    }
    if (iVar16 < iVar7) {
      uVar24 = 0xffffffff;
      do {
        lVar9 = param_1[0x5c];
        lVar22 = (longlong)iVar16 * 0x110;
        local_180 = *(undefined ***)(lVar9 + lVar22);
        local_178 = *(double *)(lVar9 + 8 + lVar22);
        local_170 = *(longlong **)(lVar9 + 0x10 + lVar22);
        if (local_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_170 + 1) = (int)local_170[1] + 1;
          UNLOCK();
        }
        puVar10 = (undefined8 *)(lVar22 + 0x18 + lVar9);
        uVar3 = *puVar10;
        uVar4 = puVar10[3];
        FUN_1459c4454(&local_180,&local_d0,1);
        plVar11 = (longlong *)CONCAT44(uStack_cc,local_d0);
        if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
        }
        FUN_1447a1fc0(plVar11);
        plVar11 = (longlong *)CONCAT44(uStack_cc,local_d0);
        pcVar6 = *(code **)(*plVar11 + 0x28);
        if (pcVar6 == FUN_14482841c) {
          plVar12 = plVar11 + 3;
          if (plVar11[5] != 0) {
            plVar12 = (longlong *)(plVar11[5] + 8);
          }
        }
        else if (pcVar6 == (code *)&LAB_14010c34c) {
          plVar12 = plVar11 + 2;
        }
        else {
          plVar12 = (longlong *)(*pcVar6)(plVar11);
        }
        puVar20 = &DAT_149dfb77a;
        if ((int)plVar12[1] != 0) {
          puVar20 = (undefined2 *)*plVar12;
        }
        local_198 = uVar3;
        FUN_140002266(&local_c0,L" %s: %.2f (raw %.2f)",puVar20,uVar4);
        if ((longlong *)CONCAT44(uStack_cc,local_d0) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_cc,local_d0) + 0x10))();
        }
        if ((((*(byte *)(lVar9 + 0x4c + lVar22) & 1) != 0) ||
            (dVar5 = *(double *)(lVar22 + 0x30 + lVar9), dVar5 != 0.0)) || (NAN(dVar5))) {
          cVar8 = FUN_140f47498(&local_180);
          if (cVar8 == '\0') {
            FUN_140002266(&local_d0,L" time: %.2f",
                          (double)((float)dVar2 - *(float *)(lVar9 + 0x48 + lVar22)));
            iVar7 = local_c8 + -1;
            if (local_c8 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(&local_c0,CONCAT44(uStack_cc,local_d0),iVar7);
            if (CONCAT44(uStack_cc,local_d0) != 0) {
              FUN_1400020a8();
            }
          }
          *(undefined8 *)(local_188 + 0xd8) = 0x3f8000003f34b4b5;
          *(undefined8 *)(local_188 + 0xe0) = 0x3f8000003f34b4b5;
        }
        else {
          *(undefined8 *)(local_188 + 0xd8) = 0x3f34b4b53f34b4b5;
          *(undefined8 *)(local_188 + 0xe0) = 0x3f8000003f34b4b5;
        }
        local_d0 = 0;
        FUN_147d8f316(local_190,&local_c0,&local_d0);
        if (CONCAT44(uStack_bc,local_c0) != 0) {
          FUN_1400020a8();
        }
        plVar11 = local_170;
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_170 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        uVar24 = uVar24 & ~(uint)uVar21;
        puVar17 = (uint *)param_1[0x60];
        if ((uint *)param_1[0x60] == (uint *)0x0) {
          puVar17 = (uint *)(param_1 + 0x5e);
        }
        iVar7 = (int)param_1[0x61];
        iVar16 = (int)uVar23;
        lVar9 = (longlong)iVar16;
        uVar13 = puVar17[lVar9] & uVar24;
        if (uVar13 == 0) {
          iVar14 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar14 = iVar7 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar16) {
            iVar15 = iVar16;
          }
          if (iVar14 <= iVar16) break;
          lVar22 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar13 = puVar17[lVar22 + lVar9 + 1];
            if (uVar13 != 0) break;
            lVar22 = lVar22 + 1;
            if (iVar15 - lVar9 == lVar22) goto LAB_14377827e;
          }
          uVar23 = (ulonglong)(iVar16 + (int)lVar22 + 1);
          uVar24 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar13 & uVar13);
        uVar18 = uVar21 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar16 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar7);
    }
LAB_14377827e:
    lVar22 = local_188;
    lVar9 = param_1[0x32];
    fVar25 = *(float *)((longlong)param_1 + 0x194);
    *(undefined4 *)(local_188 + 0xd8) = 0x3f800000;
    *(undefined4 *)(local_188 + 0xdc) = 0x3f800000;
    *(undefined4 *)(local_188 + 0xe0) = 0x3f800000;
    *(undefined4 *)(local_188 + 0xe4) = 0x3f800000;
    local_c0 = 0;
    FUN_140002266(&local_180,L"MouseSampleRate: %.2f",(double)((float)(int)lVar9 / fVar25));
    FUN_147d8f316(local_190,&local_180,&local_c0);
    if (local_180 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    FUN_140002266(&local_180,L"MouseX ZeroTime: %.2f, Smoothed: %.2f",
                  (double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x31));
    FUN_147d8f316(local_190,&local_180,&local_c0);
    if (local_180 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    FUN_140002266(&local_180,L"MouseY ZeroTime: %.2f, Smoothed: %.2f",
                  (double)*(float *)((longlong)param_1 + 0x184),
                  (double)*(float *)((longlong)param_1 + 0x18c));
    FUN_147d8f316(local_190,&local_180,&local_c0);
    if (local_180 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (((*(float *)(param_1 + 0x30) <= 2.0) || (*(float *)((longlong)param_1 + 0x184) <= 2.0)) ||
       (cVar8 = (**(code **)(*param_1 + 0x2f8))(), cVar8 == '\0')) {
      fVar26 = (float)*(int *)(lVar22 + 0x40) * 0.5;
      fVar25 = (float)*(int *)(lVar22 + 0x44) * 0.5;
      fVar28 = fVar26 + 700.0;
      fVar26 = fVar26 + -700.0;
      if (fVar28 <= DAT_14cb0e5b8) {
        DAT_14cb0e5b8 = fVar28;
      }
      if (DAT_14cb0e5b8 <= fVar26) {
        DAT_14cb0e5b8 = fVar26;
      }
      fVar27 = fVar25 + 700.0;
      fVar25 = fVar25 + -700.0;
      if (fVar27 <= DAT_14cb0e5c0) {
        DAT_14cb0e5c0 = fVar27;
      }
      if (DAT_14cb0e5c0 <= fVar25) {
        DAT_14cb0e5c0 = fVar25;
      }
      if (fVar28 <= DAT_14cb0e5b4) {
        DAT_14cb0e5b4 = fVar28;
      }
      if (DAT_14cb0e5b4 <= fVar26) {
        DAT_14cb0e5b4 = fVar26;
      }
      if (fVar27 <= DAT_14cb0e5bc) {
        DAT_14cb0e5bc = fVar27;
      }
      if (DAT_14cb0e5bc <= fVar25) {
        DAT_14cb0e5bc = fVar25;
      }
    }
    else {
      DAT_14cb0e5b8 = (float)*(int *)(lVar22 + 0x40) * 0.5;
      DAT_14cb0e5c0 = (float)*(int *)(lVar22 + 0x44) * 0.5;
      DAT_14cb0e5b4 = DAT_14cb0e5b8;
      DAT_14cb0e5bc = DAT_14cb0e5c0;
    }
    local_170 = (longlong *)(double)DAT_14cb0e5c0;
    local_178 = (double)DAT_14cb0e5b8;
    local_158 = 0;
    local_168 = 0;
    local_160 = 0;
    local_180 = &PTR_FUN_14aaeb770;
    local_140 = 0x4020000000000000;
    local_138 = 0x4020000000000000;
    local_130 = 0x3f800000;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    local_110 = 0x3ff0000000000000;
    local_108 = DAT_14ca94e18;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = DAT_14c8463f0;
    uStack_d8 = DAT_14c8463f8;
    local_150 = &DAT_3f8000003f800000;
    puStack_148 = (undefined1 *)0x3f80000000000000;
    lVar9 = *(longlong *)(lVar22 + 0x2e0);
    FUN_1405054c0(&local_180,lVar9);
    if (*(int *)(lVar9 + 0xac) == 1) {
      FUN_14376e4da(lVar9,0);
    }
    local_150 = &DAT_3f8000003f800000;
    puStack_148 = &DAT_3f8000003f800000;
    local_140 = 0x4014000000000000;
    local_170 = (longlong *)(double)DAT_14cb0e5bc;
    local_178 = (double)DAT_14cb0e5b4;
    local_138 = 0x4014000000000000;
    lVar9 = *(longlong *)(lVar22 + 0x2e0);
    FUN_1405054c0(&local_180,lVar9);
    if (*(int *)(lVar9 + 0xac) == 1) {
      FUN_14376e4da(lVar9,0);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437785f2 FUN_1437785f2 body=291 status=ok
// SIG undefined FUN_1437785f2(void)

float FUN_1437785f2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  float fVar10;
  
  lVar6 = (**(code **)(*param_1 + 0x180))();
  fVar10 = 0.0;
  if ((lVar6 != 0) && ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314))) {
    lVar4 = *param_2;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    plVar8 = param_1 + 99;
    if ((longlong *)param_1[100] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[100];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_1[0x65] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar3 = param_1[0x5c] + (longlong)iVar7 * 0x110;
        if (*(longlong *)(param_1[0x5c] + (longlong)iVar7 * 0x110) == lVar4) {
          if ((lVar3 != -0x18 && lVar3 != 0) && ((*(byte *)(lVar3 + 0x4c) & 1) != 0)) {
            fVar10 = (float)(*(double *)(lVar6 + 0x6e0) - (double)*(float *)(lVar3 + 0x48));
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x108);
      } while (iVar7 != -1);
    }
  }
  plVar8 = (longlong *)param_2[2];
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
  return fVar10;
}



// FUNCTION 143778716 FUN_143778716 body=258 status=ok
// SIG undefined FUN_143778716(void)

undefined8 * FUN_143778716(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar3 = *param_3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar10 = (uint)lVar3 & 0xffff;
    lVar9 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar9 = *(longlong *)(param_1 + 800);
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0x328) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar10) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar11 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar11 * 0x110) == lVar3) {
          if ((undefined4 *)(lVar9 + 0x18) != (undefined4 *)0x0 && lVar9 != 0) {
            param_2[2] = *(undefined8 *)(lVar9 + 0x28);
            uVar6 = *(undefined4 *)(lVar9 + 0x1c);
            uVar7 = *(undefined4 *)(lVar9 + 0x20);
            uVar8 = *(undefined4 *)(lVar9 + 0x24);
            *(undefined4 *)param_2 = *(undefined4 *)(lVar9 + 0x18);
            *(undefined4 *)((longlong)param_2 + 4) = uVar6;
            *(undefined4 *)(param_2 + 1) = uVar7;
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
            goto LAB_1437787d8;
          }
          break;
        }
        iVar11 = *(int *)(lVar9 + 0x108);
      } while (iVar11 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_1437787d8:
  plVar4 = (longlong *)param_3[2];
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
  return param_2;
}



// FUNCTION 143778818 FUN_143778818 body=1447 status=ok
// SIG undefined FUN_143778818(void)

undefined8 FUN_143778818(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  uint uVar17;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  code *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  code **local_98;
  longlong local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  uVar17 = (uint)((ulonglong)param_3 >> 0x20);
  fVar13 = (float)param_3;
  auVar19._8_4_ = in_XMM2_Dc;
  auVar19._0_8_ = param_3;
  auVar19._12_4_ = in_XMM2_Dd;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar5 = (int)param_1[0x3f];
  iVar8 = *(int *)((longlong)param_1 + 0x224);
  if (iVar5 == iVar8) {
    if ((longlong)(int)param_1[0x37] == 0) goto LAB_1437789e4;
    lVar11 = (longlong)(int)param_1[0x37] * 0x18;
    lVar10 = param_1[0x36] + 8;
    do {
      local_b0 = *(code **)(lVar10 + -8);
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      cVar4 = FUN_1403e7f2a(&local_b0);
      if (cVar4 != '\0') {
        local_98 = &local_b0;
        local_90 = lVar10;
        FUN_14090b41a(param_1 + 0x3e,local_84,&local_98,0);
      }
      plVar6 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar10 = lVar10 + 0x18;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
    iVar5 = (int)param_1[0x3f];
    iVar8 = *(int *)((longlong)param_1 + 0x224);
  }
  if (iVar5 != iVar8) {
    lVar11 = *param_2;
    uVar12 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar9 = (uint)lVar11 & 0xffff;
    plVar6 = param_1 + 0x45;
    if ((longlong *)param_1[0x46] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x46];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x47] - 1U &
                    (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar9) +
                    (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar10 = param_1[0x3e];
      do {
        lVar3 = lVar10 + (longlong)iVar5 * 0x30;
        if (*(longlong *)(lVar10 + (longlong)iVar5 * 0x30) == lVar11) {
          if ((float *)(lVar3 + 0x18) != (float *)0x0 && lVar3 != 0) {
            fVar14 = *(float *)(lVar3 + 0x18);
            if (0.0 < fVar14) {
              if (fVar13 <= 0.0) {
                fVar16 = -(-fVar13 - fVar14);
                uVar12 = -(uint)(-fVar13 - fVar14 < fVar16);
                auVar18._0_4_ = ~uVar12 & (uint)fVar16;
                auVar18._4_4_ = ~(uVar17 ^ 0x80000000) & uVar17;
                auVar18._8_4_ = ~(in_XMM2_Dc ^ 0x80000000) & in_XMM2_Dc;
                auVar18._12_4_ = ~(in_XMM2_Dd ^ 0x80000000) & in_XMM2_Dd;
                auVar18 = auVar18 | ZEXT416(uVar12 & 0x80000000);
                auVar19._4_12_ = auVar18._4_12_;
                auVar19._0_4_ = auVar18._0_4_ / (1.0 - fVar14);
              }
              else {
                fVar16 = 0.0;
                if (0.0 <= fVar13 - fVar14) {
                  fVar16 = fVar13 - fVar14;
                }
                auVar19 = ZEXT416((uint)(fVar16 / (1.0 - fVar14)));
              }
            }
            fVar13 = *(float *)(lVar3 + 0x20);
            if ((fVar13 != 1.0) || (auVar21 = auVar19, NAN(fVar13))) {
              fVar14 = auVar19._0_4_;
              fVar13 = powf(ABS(fVar14),fVar13);
              auVar20._4_4_ = extraout_XMM0_Db;
              auVar20._0_4_ = fVar13;
              auVar20._8_4_ = extraout_XMM0_Dc;
              auVar20._12_4_ = extraout_XMM0_Dd;
              auVar21._4_12_ = auVar20._4_12_;
              auVar21._0_4_ =
                   fVar13 * (float)(-(uint)(0.0 < fVar14) & 0x3f800000 |
                                   ~-(uint)(0.0 < fVar14) & -(uint)(fVar14 < 0.0) & 0xbf800000);
            }
            auVar19._4_12_ = auVar21._4_12_;
            auVar19._0_4_ = auVar21._0_4_ * *(float *)(lVar3 + 0x1c);
            if ((*(byte *)(lVar3 + 0x24) & 1) != 0) {
              auVar19._0_8_ = CONCAT44(auVar21._4_4_,auVar19._0_4_) ^ 0x8000000080000000;
              auVar19._8_4_ = auVar21._8_4_ ^ 0x80000000;
              auVar19._12_4_ = auVar21._12_4_ ^ 0x80000000;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x28);
      } while (iVar5 != -1);
    }
  }
LAB_1437789e4:
  uVar15 = auVar19._0_8_;
  if ((*param_2 == DAT_14c964cb0) || (*param_2 == DAT_14c964cc8)) {
    plVar6 = (longlong *)FUN_140389788();
    lVar11 = plVar6[0x22];
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar11 = plVar6[0x22];
    }
    lVar10 = param_1[4];
    fVar13 = 1.0;
    if (lVar10 != 0) {
      if (DAT_14caf9cd0 == 0) {
        local_d0 = &local_b0;
        local_b0 = FUN_141030f22;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_1463c0cc2;
        local_d8 = &LAB_147c9db5b;
        local_e0 = &LAB_1463f9c44;
        local_e8 = &DAT_149e063b2;
        local_f0 = 0x2000000000;
        local_f8 = 0x10000004;
        local_100 = 8;
        local_108 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if ((((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
          ((*(byte *)(lVar11 + 0x48) & 0x10) != 0)) &&
         (*(longlong **)(lVar10 + 0x448) != (longlong *)0x0)) {
        fVar14 = *(float *)(lVar11 + 0x84);
        fVar13 = (float)(**(code **)(**(longlong **)(lVar10 + 0x448) + 0x6e8))();
        fVar13 = fVar13 * fVar14;
      }
    }
    auVar22._4_12_ = auVar19._4_12_;
    auVar22._0_4_ = auVar19._0_4_ * fVar13;
    uVar15 = auVar22._0_8_;
    fVar13 = -auVar22._0_4_;
    pfVar7 = (float *)&DAT_14cb0e5bc;
    fVar14 = fVar13;
    if (*param_2 == DAT_14c964cb0) {
      pfVar7 = (float *)&DAT_14cb0e5b4;
      fVar14 = auVar22._0_4_;
    }
    *pfVar7 = fVar14 * 8.0 + *pfVar7;
    cVar4 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if ((cVar4 != '\0') && ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314))) {
      lVar11 = *param_2;
      uVar17 = (uint)((ulonglong)lVar11 >> 0x10);
      uVar12 = (uint)lVar11 & 0xffff;
      plVar6 = param_1 + 99;
      if ((longlong *)param_1[100] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[100];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_1[0x65] - 1U &
                      (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar12) +
                      (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar10 = param_1[0x5c] + (longlong)iVar5 * 0x110;
          if (*(longlong *)(param_1[0x5c] + (longlong)iVar5 * 0x110) == lVar11) {
            if (lVar10 != -0x18 && lVar10 != 0) {
              uVar15 = (**(code **)(*param_1 + 0x2c8))
                                 (param_1,auVar22._0_4_,lVar10 + 0x4d,lVar11 != DAT_14c964cb0);
              fVar13 = -(float)uVar15;
            }
            break;
          }
          iVar5 = *(int *)(lVar10 + 0x108);
        } while (iVar5 != -1);
      }
    }
    pfVar7 = (float *)&DAT_14cb0e5c0;
    if (*param_2 == DAT_14c964cb0) {
      pfVar7 = (float *)&DAT_14cb0e5b8;
      fVar13 = (float)uVar15;
    }
    *pfVar7 = fVar13 * 8.0 + *pfVar7;
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
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
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143778dc0 FUN_143778dc0 body=359 status=ok
// SIG undefined FUN_143778dc0(void)

void FUN_143778dc0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  longlong local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x224)) &&
     ((longlong)*(int *)(param_1 + 0x1b8) != 0)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
    lVar5 = *(longlong *)(param_1 + 0x1b0) + 8;
    do {
      local_a0 = *(undefined8 *)(lVar5 + -8);
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      cVar3 = FUN_1403e7f2a(&local_a0);
      if (cVar3 != '\0') {
        local_88 = &local_a0;
        local_80 = lVar5;
        FUN_14090b41a(param_1 + 0x1f0,local_74,&local_88,0);
      }
      plVar4 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  plVar4 = (longlong *)FUN_140389788();
  lVar6 = plVar4[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar6 = plVar4[0x22];
  }
  if ((*(byte *)(lVar6 + 0x49) & 0x40) != 0) {
    FUN_147ad8550(param_1 + 0x338,param_1 + 0x28,param_1,param_2);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143778f28 FUN_143778f28 body=58 status=ok
// SIG undefined FUN_143778f28(void)

undefined8 FUN_143778f28(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)FUN_140389788();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x48)) & 0xffffffffffffff08
  ;
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
}



// FUNCTION 143778f62 FUN_143778f62 body=1302 status=ok
// SIG undefined FUN_143778f62(void)

void FUN_143778f62(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) goto LAB_1437790d9;
  if ((char)param_1[0x3a] != '\x01') goto LAB_1437790a2;
  LOCK();
  *(int *)(plVar3 + 0xc) = (int)plVar3[0xc] + 1;
  UNLOCK();
  plVar15 = plVar3 + 0xc;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar11 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143778fc6;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143778fcb;
      goto LAB_14377900b;
    }
LAB_143778fcb:
    (**(code **)(*plVar3 + 0x20))(plVar3);
    LOCK();
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      puVar8 = (undefined8 *)*plVar3;
      plVar15 = plVar3;
LAB_143778fe4:
      (*(code *)*puVar8)(plVar15,1);
    }
  }
  else {
LAB_143778fc6:
    if (iVar5 == 0x10) goto LAB_143778fcb;
LAB_14377900b:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar11 + 0xc60), iVar5 == 2))
      goto LAB_143778fcb;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143778fcb;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar8 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar8;
      if (puVar10 != (uint *)0x0) goto LAB_14377919f;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14377a02f);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar8 = puVar9;
        FUN_140217a48(puVar8);
        puVar10 = (uint *)*puVar8;
LAB_14377919f:
        plVar15 = (longlong *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(plVar15 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar2 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar8;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar8 = puVar10;
          plVar15 = (longlong *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(plVar15 + 0x16);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_14377921f;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_14377921f:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(plVar15,0);
      *plVar15 = (longlong)&PTR_FUN_14aaf9828;
      plVar15[0x15] = (longlong)plVar3;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(plVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar15[0xe] + 0x18))(plVar15 + 0xe,plVar15 + 9);
      }
      plVar15[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar15[9] = (longlong)plVar15;
      plVar15[10] = (longlong)plVar15;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        lVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      }
      plVar15[0xf] = lVar11;
      plVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar15 + 0x1c) = iVar5;
      if (plVar15 == (longlong *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_1437790a2;
      }
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(plVar15);
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) goto LAB_1437790a2;
      puVar8 = (undefined8 *)*plVar15;
      goto LAB_143778fe4;
    }
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aaf97c0;
    local_78[0] = FUN_14377d6da;
    local_50 = plVar3;
    FUN_14005a792(&DAT_14ca9a440,L"FDestroyVectorFieldResourceCommand",&DAT_14cb0f07c);
    if (local_78[0] != (code *)0x0) {
      pppuVar13 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar13 = &local_58;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
LAB_1437790a2:
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    puVar8 = (undefined8 *)*param_1;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
LAB_1437790d9:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377947a FUN_14377947a body=39 status=ok
// SIG undefined FUN_14377947a(void)

longlong FUN_14377947a(longlong *param_1)

{
  longlong lVar1;
  
  if ((((longlong *)*param_1 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_1, lVar1 == 0)) ||
     (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 == 0)) {
    lVar1 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  return lVar1;
}



// FUNCTION 1437794a2 FUN_1437794a2 body=1280 status=ok
// SIG undefined FUN_1437794a2(void)

void FUN_1437794a2(longlong param_1)

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
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x640);
  if ((*(byte *)(param_1 + 0x630) & 1) == 0) {
    if (lVar4 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x638) + 0x48))
                (*(longlong **)(param_1 + 0x638),param_1);
    }
    goto LAB_1437795ee;
  }
  if (lVar4 == 0) goto LAB_1437795ee;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143779517;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14377951c;
      goto LAB_14377954c;
    }
LAB_14377951c:
    FUN_143778f62(lVar4);
    FUN_1400020a8(lVar4);
  }
  else {
LAB_143779517:
    if (iVar7 == 0x10) goto LAB_14377951c;
LAB_14377954c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_14377951c;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14377951c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1437796c2;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14377a02f);
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
LAB_1437796c2:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x16);
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
          puVar15 = (uint *)(puVar16 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143779742;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143779742:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14aaf9918;
      puVar16[0x15] = lVar4;
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
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
      local_48 = &PTR_LAB_14aaf98b0;
      local_68[0] = FUN_14377dace;
      local_40 = lVar4;
      FUN_14005a792(&DAT_14ca9a440,L"FDestroyVectorFieldInstanceCommand",&DAT_14cb0f084);
      if (local_68[0] != (code *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x640) = 0;
LAB_1437795ee:
  *(undefined8 *)(param_1 + 0x638) = 0;
  FUN_1447c0e7a(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437799c7 FUN_1437799c7 body=47 status=ok
// SIG undefined FUN_1437799c7(void)

void FUN_1437799c7(void)

{
  DAT_14cb0e8a8 = &PTR_FUN_14aaf9930;
  FUN_144725486(&DAT_14cb0e8a8);
  FUN_14640c654(&DAT_14cb0e8a8);
  return;
}



// FUNCTION 1437799f6 FUN_1437799f6 body=240 status=ok
// SIG undefined FUN_1437799f6(void)

void FUN_1437799f6(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14cb0e8c0 = &PTR_FUN_14aaf9990;
  FUN_144725486(&DAT_14cb0e8c0);
  lVar4 = DAT_14cb0e8d0;
  DAT_14cb0e8c0 = &PTR_FUN_14a38cff0;
  if (DAT_14cb0e8d0 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cb0e8d0 + 8);
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
  DAT_14cb0e8c0 = &PTR_FUN_14a38cd70;
  DAT_14cb0e8ce = 2;
  if ((DAT_14cb0e8c8 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 143779b31 FUN_143779b31 body=29 status=ok
// SIG undefined FUN_143779b31(void)

undefined * FUN_143779b31(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\0') {
    FUN_14603bfae();
    puVar1 = &DAT_14cb0e838;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// FUNCTION 143779b6a FUN_143779b6a body=243 status=ok
// SIG undefined FUN_143779b6a(void)

longlong * FUN_143779b6a(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f9d498();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cb0e7e8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143779c5e FUN_143779c5e body=49 status=ok
// SIG undefined FUN_143779c5e(void)

void FUN_143779c5e(void)

{
  FUN_1401b9920(DAT_14cb0e978,DAT_14cb0e980);
  if (DAT_14cb0e978 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143779cb2 FUN_143779cb2 body=53 status=ok
// SIG undefined FUN_143779cb2(void)

undefined8 FUN_143779cb2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 0x10);
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
  return 0;
}



// FUNCTION 143779de8 FUN_143779de8 body=582 status=ok
// SIG undefined FUN_143779de8(void)

void FUN_143779de8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined **local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_52;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  undefined4 local_48;
  wchar_t *local_40;
  undefined ***local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x68) == 0) || (DAT_14ca84e19 != '\x01')) goto LAB_143779fd9;
  local_5c = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x20) * 8;
  local_38 = &local_98;
  local_98 = &PTR_FUN_14aaf89b0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_30 = 0;
  uStack_28 = 0;
  local_4e = 2;
  local_80 = 8;
  local_4d = 10;
  local_54 = (undefined2)*(int *)(param_1 + 0x20);
  local_52 = 0x1010001;
  local_78 = 1;
  local_60 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_4b = 0xff;
  local_40 = L"FVectorFieldStaticResource";
  local_48 = 0x70;
  local_90 = *(longlong *)(param_1 + 0x68);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 == &local_a0) {
LAB_143779f6c:
    lVar4 = local_a0;
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
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
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
  else {
    lVar4 = *plVar7;
    *plVar7 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
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
      goto LAB_143779f6c;
    }
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
LAB_143779fd9:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377a056 FUN_14377a056 body=582 status=ok
// SIG undefined FUN_14377a056(void)

void FUN_14377a056(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (0 < (int)param_2[1]) {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    uVar10 = 0;
    do {
      if ((param_4 >> ((uint)uVar10 & 0x1f) & 1) != 0) {
        lVar6 = *(longlong *)(*param_2 + uVar10 * 8);
        lVar7 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar7 = param_5 + 0x50;
        }
        FUN_147d96e84(*(undefined8 *)(lVar7 + uVar10 * 8),*(undefined8 *)(param_1 + 0x298));
        if ((*(byte *)(param_1 + 0x6c) & 6) != 0) {
          uVar3 = *(undefined4 *)(lVar6 + 0x3090);
          plVar4 = *(longlong **)(param_5 + 0xe8);
          puVar5 = (uint *)*puVar1;
          if (puVar5 != (uint *)0x0) goto LAB_14377a114;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar5 = (uint *)*puVar1;
LAB_14377a114:
            puVar8 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar9 = puVar5[0x12];
            if (puVar8 + 0x29 <= puVar5 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
              LOCK();
              uVar2 = *puVar5;
              *puVar5 = *puVar5 + uVar9 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar9) != 0xffffffff) break;
              puVar5 = (uint *)*puVar1;
              *puVar5 = 0xffffffff;
              *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
              puVar5[0x12] = 0;
              *puVar1 = puVar5;
              puVar8 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
              uVar9 = 0;
              if (puVar8 + 0x29 <= puVar5 + 0x4000) {
                uVar9 = 1;
                goto LAB_14377a190;
              }
            }
          }
          uVar9 = uVar9 + 1;
LAB_14377a190:
          *(undefined8 **)(puVar5 + 0x10) = puVar8 + 0x2a;
          puVar5[0x12] = uVar9;
          *(int *)(puVar8 + -1) = ((int)puVar8 + -8) - (int)puVar5;
          *(undefined4 *)((longlong)puVar8 + -4) = 0x148;
          puVar8[1] = 0;
          *puVar8 = &PTR_FUN_14aaf8c78;
          lVar6 = *plVar4;
          do {
            puVar8[1] = lVar6;
            LOCK();
            lVar7 = *plVar4;
            bVar11 = lVar6 == lVar7;
            if (bVar11) {
              *plVar4 = (longlong)puVar8;
              lVar7 = lVar6;
            }
            UNLOCK();
            lVar6 = lVar7;
          } while (!bVar11);
          puVar8[2] = &PTR_FUN_14aaf8c80;
          *(undefined4 *)(puVar8 + 4) = 0xffffffff;
          *(char *)((longlong)puVar8 + 0x24) = (char)uVar3;
          *(undefined2 *)((longlong)puVar8 + 0x25) = 1;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0x800000000;
          puVar8[0x1b] = 0;
          puVar8[0x1c] = 0x200000000;
          puVar8[0x23] = 0;
          puVar8[0x24] = 0x300000000;
          puVar8[0x25] = 0;
          puVar8[0x26] = 0;
          puVar8[0x27] = 0;
          *(undefined4 *)(puVar8 + 0x28) = 0x1ffffff;
          puVar8[3] = &PTR_FUN_14aaf8c20;
          FUN_14006bf18(puVar8 + 3,*(undefined8 *)(param_5 + 0x110));
          FUN_147d972d8(puVar8 + 3,*(undefined8 *)(param_1 + 0x298),uVar10 & 0xffffffff,param_5);
        }
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)(int)param_2[1]);
  }
  return;
}



// FUNCTION 14377a29c FUN_14377a29c body=954 status=ok
// SIG undefined FUN_14377a29c(void)

void FUN_14377a29c(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14ca84e19 != '\x01') goto LAB_14377a5c6;
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar3 = DAT_14c760db4;
  }
  puVar4 = &DAT_00020008;
  if ((int)uVar3 < 3) {
    puVar4 = (undefined1 *)0x0;
  }
  local_7c = *(undefined2 *)(param_1 + 0x20);
  local_84 = *(undefined8 *)(param_1 + 0x18);
  local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  uStack_50 = 0;
  local_76 = 2;
  local_a8 = SUB81(puVar4,0);
  uStack_a7 = 0;
  uStack_a6 = (undefined1)((ulonglong)puVar4 >> 0x10);
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_75 = 10;
  local_7a = 0x1010001;
  uStack_a0 = 1;
  uStack_9e = 0;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_73 = 0xff;
  local_68 = L"FVectorFieldAnimatedResource";
  local_60 = 0;
  local_70 = FUN_1431edf91(puVar4,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_b0) {
LAB_14377a40b:
    lVar6 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar6 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_14377a40b;
    }
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar3 = DAT_14c760db4;
  }
  if (2 < (int)uVar3) {
    plVar9 = (longlong *)*plVar9;
    uStack_a7 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_a8 = 3;
    uStack_a4 = 1;
    lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    if (*(byte *)(lVar6 + 0x32) < 5) {
      uStack_a6 = (undefined1)(0x4030502010 >> ((*(byte *)(lVar6 + 0x32) & 7) << 3));
    }
    uStack_a5 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    local_b8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2,plVar9);
    plVar9 = (longlong *)(param_1 + 0x68);
    if (plVar9 != &local_b0) {
      lVar6 = *plVar9;
      *plVar9 = local_b0;
      local_b0 = 0;
      if (lVar6 == 0) goto LAB_14377a5c6;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
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
    lVar6 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
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
  }
LAB_14377a5c6:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377a658 FUN_14377a658 body=2183 status=ok
// SIG undefined FUN_14377a658(void)

void FUN_14377a658(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *_Dst;
  size_t _Size;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong local_140;
  undefined8 *local_138;
  void *local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar7 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar7 = DAT_14c760db4;
  }
  if ((((2 < (int)uVar7) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x68) != 0)) &&
     (lVar8 = FUN_1447b4020(), lVar8 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x70);
    local_cc = (float)param_3 * *(float *)(lVar8 + 0x8c) + *(float *)(param_1 + 0x78);
    iVar21 = (int)local_cc;
    *(float *)(param_1 + 0x78) = local_cc;
    iVar19 = *(int *)(lVar8 + 0x88);
    if ((*(byte *)(lVar8 + 0x90) & 1) == 0) {
      iVar19 = iVar19 + -1;
      if (iVar19 <= iVar21) {
        iVar21 = iVar19;
      }
      iVar22 = *(int *)(lVar8 + 0x80);
      iVar20 = iVar21 / iVar22;
      iVar5 = iVar21 % iVar22;
      iVar17 = iVar21 + 1;
      if (iVar19 <= iVar21 + 1) {
        iVar17 = iVar19;
      }
    }
    else {
      iVar17 = (int)((longlong)iVar21 % (longlong)iVar19);
      iVar22 = *(int *)(lVar8 + 0x80);
      uVar10 = (ulonglong)(uint)(iVar17 >> 0x1f) << 0x20 |
               (longlong)iVar21 % (longlong)iVar19 & 0xffffffffU;
      iVar20 = (int)((longlong)uVar10 / (longlong)iVar22);
      iVar5 = (int)((longlong)uVar10 % (longlong)iVar22);
      iVar17 = (iVar17 + 1) % iVar19;
    }
    local_f4 = 1.0 / (float)*(int *)(lVar8 + 0x84);
    local_f8 = 1.0 / (float)iVar22;
    local_ec = (float)iVar20 * local_f4;
    local_f0 = (float)iVar5 * local_f8;
    local_dc = (float)(iVar17 / iVar22) * local_f4;
    local_e0 = (float)(iVar17 % iVar22) * local_f8;
    local_d0 = 1.0 / (float)*(int *)(param_1 + 0x20);
    local_d4 = 1.0 / (float)*(int *)(param_1 + 0x1c);
    local_d8 = 1.0 / (float)*(int *)(param_1 + 0x18);
    auVar24._4_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar24._0_4_ = local_cc;
    auVar24._8_4_ = in_XMM2_Dc;
    auVar24._12_4_ = in_XMM2_Dd;
    auVar24 = roundss(ZEXT816(0),auVar24,0xb);
    local_cc = local_cc - auVar24._0_4_;
    local_c8 = *(undefined4 *)(lVar8 + 0xa0);
    local_c4 = *(undefined4 *)(lVar8 + 0xa4);
    local_c0 = (uint)*(byte *)(lVar8 + 0x70);
    local_e8 = local_f8;
    local_e4 = local_f4;
    FUN_145e39462();
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffff00000000);
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_b8,&local_f8,DAT_14cb0e628);
    lVar8 = local_b8;
    local_110 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      UNLOCK();
      if (local_b8 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b8 + 8);
        uVar7 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b8 + 8);
          LOCK();
          uVar7 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar7 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b8 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar8;
            plVar16 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar16;
                LOCK();
                bVar23 = plVar16 != DAT_14ca843c0;
                plVar15 = plVar9;
                if (bVar23) {
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar23);
            }
            else {
              do {
                *plVar9 = (longlong)plVar15;
                LOCK();
                bVar23 = plVar15 != DAT_14ca843c8;
                plVar16 = plVar9;
                if (bVar23) {
                  plVar15 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar23);
            }
          }
        }
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + 0xc);
    if (*(byte *)(param_1 + 0xc) == 5) {
      uVar7 = DAT_14c760db4;
    }
    uVar11 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar7 * 2) * 8);
    FUN_145e19ad8();
    FUN_1448e935e(uVar11,&local_b8,&DAT_14cb0e6e0,0);
    FUN_145e19ad8();
    lVar6 = local_b8;
    lVar18 = CONCAT44(uStack_ac,local_b0);
    local_120 = local_b8;
    local_128 = *(undefined8 *)(DAT_14ca94db8 + 0x10);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x98);
    if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x78), lVar8 != 0)) {
      local_128 = *(undefined8 *)(lVar8 + 0x10);
    }
    local_a8 = *(undefined8 *)(param_1 + 0x68);
    local_b8 = -1;
    local_b0 = 0xffffffff;
    local_a0 = 3;
    local_9c = 0x40000000000;
    local_94 = 0;
    local_88 = 0;
    local_100 = 1;
    uVar10 = 0;
    local_118 = lVar18;
    local_108 = &local_b8;
    FUN_144760590(param_2,&local_108,0);
    if (lVar6 != 0) {
      lVar8 = *(longlong *)(lVar18 + 8);
      lVar18 = (longlong)*(int *)(lVar6 + 0xd4);
      uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar18 * 8);
      if (uVar10 == 0) {
        uVar10 = FUN_1400bafc2(lVar8,lVar18,1);
      }
    }
    uVar11 = FUN_140029432(param_2,uVar10,0);
    param_2[0x37] = uVar10;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d340;
    puVar12[2] = uVar11;
    lVar8 = FUN_1447b4020(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68));
    if (local_120 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_118 + 8) + 0x50) +
                (longlong)*(int *)(local_120 + 0xd4) * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(local_118 + 8),(longlong)*(int *)(local_120 + 0xd4),1);
      }
    }
    local_138 = &local_128;
    local_148 = (undefined8 *)(param_1 + 0x68);
    local_140 = lVar8 + 0x10;
    FUN_147d9de1d(param_2,&local_120,lVar18,&local_110);
    iVar19 = *(int *)(param_1 + 0x20);
    iVar21 = iVar19 + 7;
    if (-1 < iVar19) {
      iVar21 = iVar19;
    }
    iVar19 = *(int *)(param_1 + 0x18);
    iVar22 = *(int *)(param_1 + 0x1c);
    iVar20 = iVar22 + 7;
    if (-1 < iVar22) {
      iVar20 = iVar22;
    }
    iVar22 = iVar19 + 7;
    if (-1 < iVar19) {
      iVar22 = iVar19;
    }
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fbc30;
    *(int *)(puVar12 + 2) = iVar22 >> 3;
    *(int *)((longlong)puVar12 + 0x14) = iVar20 >> 3;
    *(int *)(puVar12 + 3) = iVar21 >> 3;
    if (DAT_14ca8507b == '\x01') {
      puVar2 = param_2 + 0x12;
      if ((0 < (int)param_2[0x13]) &&
         (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
        FUN_147139e90(puVar2,0);
      }
      lVar8 = local_120;
      if ((*(char *)(local_120 + 0xf2) != '\0') && (*(char *)(local_120 + 0xf3) != '\x06')) {
        uVar4 = *(undefined2 *)(local_120 + 0xf0);
        iVar19 = (int)param_2[0x13];
        *(uint *)(param_2 + 0x13) = iVar19 + 1U;
        if (*(uint *)((longlong)param_2 + 0x9c) < iVar19 + 1U) {
          FUN_1447477d8(puVar2,iVar19);
        }
        uVar10 = *puVar2;
        *(undefined2 *)(uVar10 + (longlong)iVar19 * 4) = uVar4;
        *(undefined1 *)(uVar10 + 2 + (longlong)iVar19 * 4) = 1;
      }
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar18 = (longlong)*(int *)(lVar8 + 0xd4);
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(local_118 + 8) + 0x50) + lVar18 * 8);
        if (lVar8 == 0) {
          lVar8 = FUN_1400bafc2(*(longlong *)(local_118 + 8),lVar18,1);
        }
      }
      uVar10 = param_2[0x13];
      lVar18 = (longlong)(int)uVar10;
      if (0 < lVar18) {
        if (DAT_14ca8507b == '\x01') {
          local_130 = (void *)*puVar2;
          puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar12 + 5;
          if ((undefined8 *)param_2[1] < puVar13) {
            FUN_140023dd8(param_2,0x30);
            puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar12 + 5;
          }
          *param_2 = (ulonglong)puVar13;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar12;
          param_2[6] = (ulonglong)(puVar12 + 1);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + lVar18 * 4);
          _Size = lVar18 * 4;
          if ((void *)param_2[1] < pvVar14) {
            FUN_140023dd8(param_2,(uint)_Size | 2);
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar14 = (void *)((longlong)_Dst + _Size);
          }
          *param_2 = (ulonglong)pvVar14;
          memcpy(_Dst,local_130,_Size);
          puVar12[1] = 0;
          *puVar12 = &PTR_FUN_14a1fbc38;
          puVar12[2] = lVar8;
          puVar12[3] = _Dst;
          *(int *)(puVar12 + 4) = (int)uVar10;
        }
        *(undefined4 *)(param_2 + 0x13) = 0;
        if (*(int *)((longlong)param_2 + 0x9c) < 0) {
          FUN_147139e90(puVar2,0);
        }
      }
    }
    local_108 = &local_b8;
    local_a8 = *(undefined8 *)(param_1 + 0x68);
    local_b8 = -1;
    local_b0 = 0xffffffff;
    local_a0 = 3;
    local_9c = 0x7000000400;
    local_94 = 0;
    local_88 = 0;
    local_100 = 1;
    FUN_144760590(param_2,&local_108,0);
    lVar8 = local_110;
    if (local_110 != 0) {
      LOCK();
      puVar1 = (uint *)(local_110 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_110 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_110 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar8;
          plVar16 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c0;
              plVar15 = plVar9;
              if (bVar23) {
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar9 = (longlong)plVar15;
              LOCK();
              bVar23 = plVar15 != DAT_14ca843c8;
              plVar16 = plVar9;
              if (bVar23) {
                plVar15 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377aefe FUN_14377aefe body=25 status=ok
// SIG undefined FUN_14377aefe(void)

void FUN_14377aefe(void)

{
  FUN_145d5a994();
  FUN_14170c56a(&DAT_14cb0d400);
  return;
}



// FUNCTION 14377af17 FUN_14377af17 body=130 status=ok
// SIG undefined FUN_14377af17(void)

void FUN_14377af17(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14cb0f068;
  if (DAT_14cb0f068 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cb0f068 + 8);
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
  return;
}



// FUNCTION 14377af9a FUN_14377af9a body=38 status=ok
// SIG undefined FUN_14377af9a(void)

undefined8 FUN_14377af9a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377afc0 FUN_14377afc0 body=1012 status=ok
// SIG undefined FUN_14377afc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14377afc0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined1 auStack_31e8 [32];
  undefined1 *local_31c8;
  undefined1 local_31c0;
  float local_31b8;
  undefined4 local_31b0;
  undefined4 local_31a8 [2];
  undefined1 local_31a0 [4];
  undefined4 local_319c;
  undefined8 local_3198;
  undefined4 local_3190;
  undefined4 local_318c;
  undefined1 local_3188 [8];
  undefined1 *local_3180;
  int local_3178;
  undefined1 local_3170 [64];
  undefined1 *local_3130;
  int local_3128;
  undefined4 local_3120;
  undefined4 uStack_311c;
  undefined4 uStack_3118;
  undefined4 uStack_3114;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x14377afd6;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_31e8;
  FUN_144b1c6fa(param_1 + 0x10,local_3188);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_3178;
  if ((longlong)local_3178 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar10 = local_3180;
    if (local_3180 == (undefined1 *)0x0) {
      puVar10 = local_3188;
    }
    FUN_1446fe144(puVar9 + 2,local_3178,0);
    puVar8 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar8 = puVar9 + 2;
    }
    memcpy(puVar8,puVar10,(longlong)local_3178);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_3128;
  if ((longlong)local_3128 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar10 = local_3130;
    if (local_3130 == (undefined1 *)0x0) {
      puVar10 = local_3170;
    }
    FUN_1446fe1b8(puVar9 + 5,local_3128,0);
    puVar8 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar9 + 5;
    }
    memcpy(puVar8,puVar10,(longlong)local_3128 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_3120;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_311c;
  *(undefined4 *)(puVar9 + 0x10) = uStack_3118;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_3114;
  if (local_3130 != (undefined1 *)0x0) {
    FUN_1400020a8(local_3130);
  }
  if (local_3180 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar9 + 2) = (float)iVar4;
  *(float *)((longlong)puVar9 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(float *)((longlong)puVar9 + 0x1c) = (float)iVar2;
  *(float *)(puVar9 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1c0);
  iVar2 = *(int *)(param_1 + 0x1b8);
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar4 = *(int *)(param_1 + 0x1c4);
  if (0 < (iVar4 - iVar3) * (iVar1 - iVar2)) {
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x30);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar9 + 2) = 1;
    *(int *)((longlong)puVar9 + 0x14) = iVar2;
    *(int *)(puVar9 + 3) = iVar3;
    *(int *)((longlong)puVar9 + 0x1c) = iVar1;
    *(int *)(puVar9 + 4) = iVar4;
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x58);
  fVar11 = (float)(**(code **)(*plVar5 + 0x30))(plVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x60);
  (**(code **)(*plVar5 + 0x28))(plVar5,local_31a0);
  (**(code **)(*plVar5 + 0x28))(plVar5,local_31a8);
  local_3198 = 0;
  local_3190 = local_31a8[0];
  local_318c = local_319c;
  FUN_140189754(local_3188,*(longlong *)(param_1 + 0x1d8) + 0x2c0);
  local_31c0 = lVar7 != 0;
  local_31b8 = 1.0 / fVar11;
  local_31b0 = 3;
  local_31c8 = local_3188;
  FUN_140b8e5fa(uVar6,param_2,param_1 + 0x1e0,*(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x9c)
               );
  FUN_1400468f8(local_3188);
  if ((local_90 ^ (ulonglong)auStack_31e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377b3c2 FUN_14377b3c2 body=930 status=ok
// SIG undefined FUN_14377b3c2(void)

void FUN_14377b3c2(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 **local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *param_2;
  puVar1 = (ulonglong *)(lVar3 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar10 + 0x22;
  if (*(undefined8 **)(lVar3 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x120);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar10 + 0x22;
  }
  *puVar1 = (ulonglong)puVar8;
  *puVar10 = &PTR_FUN_14a1fbd30;
  lVar7 = 0x22;
  do {
    *(undefined1 (*) [16])((longlong)puVar10 + lVar7 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar10 + lVar7 + -2) = 0xffff0000;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xe2);
  *(undefined4 *)((longlong)puVar10 + 0xe4) = 0;
  *(undefined1 (*) [16])(puVar10 + 0x1a) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0xec) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0xf4) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar10 + 0xfc) = 0;
  puVar10[0x20] = 0;
  iVar2 = *(int *)(lVar3 + 0xa0);
  *(uint *)(lVar3 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(lVar3 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar2 * 8) = puVar10;
  puVar10[2] = param_2[1];
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffff0001;
  lVar3 = *param_2;
  lVar7 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  local_68 = *(undefined8 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 8);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  local_78 = *(undefined4 *)(param_1 + 0x18);
  uStack_74 = *(undefined4 *)(param_1 + 0x1c);
  uStack_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_6c = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1080) {
    FUN_144b3d300(&DAT_14c9c1080);
    if (DAT_14c9c1080 == -1) {
      FUN_145fddb1e(&local_60);
      local_a0 = 0;
      local_b0 = 0;
      local_d0 = "Unknown";
      local_e0 = 0;
      uStack_d8 = 0;
      local_e8 = L"FRenderTargetParameters";
      local_a8 = 0;
      local_c0 = 0x100;
      local_c8 = 0x7af;
      local_b8 = &local_60;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14377b3b5);
      _Init_thread_footer(&DAT_14c9c1080);
    }
  }
  FUN_140069376(lVar3);
  puVar1 = (ulonglong *)(lVar3 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 0x40;
  if (*(undefined8 **)(lVar3 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x208);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 0x40;
  }
  *puVar1 = (ulonglong)puVar8;
  local_58 = DAT_14c9c1048;
  if (DAT_14c9c1048 != 0) {
    LOCK();
    *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14c9c1000;
  local_e8 = (wchar_t *)CONCAT71(local_e8._1_7_,2);
  local_60 = puVar10 + 2;
  FUN_140068f1a(puVar9,&local_89,&local_60,1);
  *puVar9 = &PTR_FUN_14aaf9170;
  puVar9[0x37] = lVar7;
  puVar9[0x38] = lVar4;
  puVar9[0x39] = lVar5;
  puVar9[0x3a] = lVar6;
  puVar9[0x3b] = local_88;
  puVar9[0x3c] = uStack_80;
  *(undefined4 *)(puVar9 + 0x3d) = local_78;
  *(undefined4 *)((longlong)puVar9 + 0x1ec) = uStack_74;
  *(undefined4 *)(puVar9 + 0x3e) = uStack_70;
  *(undefined4 *)((longlong)puVar9 + 500) = uStack_6c;
  puVar9[0x3f] = local_68;
  iVar2 = *(int *)(lVar3 + 0x170);
  *(uint *)(lVar3 + 0x170) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(lVar3 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x168) + (longlong)iVar2 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x2c) = *(int *)(lVar3 + 0x170) + -1;
  FUN_140069100(lVar3,puVar9);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377b766 FUN_14377b766 body=78 status=ok
// SIG undefined FUN_14377b766(void)

undefined8 * FUN_14377b766(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14aaf9150;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 14377b7ba FUN_14377b7ba body=29 status=ok
// SIG undefined FUN_14377b7ba(void)

void FUN_14377b7ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14377b7d8 FUN_14377b7d8 body=29 status=ok
// SIG undefined FUN_14377b7d8(void)

undefined8 FUN_14377b7d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377b7f6 FUN_14377b7f6 body=38 status=ok
// SIG undefined FUN_14377b7f6(void)

undefined8 FUN_14377b7f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377b81c FUN_14377b81c body=1060 status=ok
// SIG undefined FUN_14377b81c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14377b81c(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_3208 [32];
  undefined1 *local_31e8;
  byte local_31e0;
  undefined4 local_31d8;
  undefined4 local_31d0;
  undefined8 local_31c8;
  undefined8 local_31c0;
  undefined4 local_31b8;
  undefined8 local_31b0;
  undefined8 uStack_31a8;
  undefined8 local_31a0;
  undefined8 uStack_3198;
  undefined4 local_3190;
  undefined1 local_3188 [8];
  undefined1 *local_3180;
  int local_3178;
  undefined1 local_3170 [64];
  undefined1 *local_3130;
  int local_3128;
  undefined4 local_3120;
  undefined4 uStack_311c;
  undefined4 uStack_3118;
  undefined4 uStack_3114;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x14377b832;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3208;
  FUN_144b1c6fa(param_1 + 0x10,local_3188);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_3178;
  if ((longlong)local_3178 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar9 = local_3180;
    if (local_3180 == (undefined1 *)0x0) {
      puVar9 = local_3188;
    }
    FUN_1446fe144(puVar8 + 2,local_3178,0);
    puVar7 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar7 = puVar8 + 2;
    }
    memcpy(puVar7,puVar9,(longlong)local_3178);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_3128;
  if ((longlong)local_3128 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar9 = local_3130;
    if (local_3130 == (undefined1 *)0x0) {
      puVar9 = local_3170;
    }
    FUN_1446fe1b8(puVar8 + 5,local_3128,0);
    puVar7 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar8 + 5;
    }
    memcpy(puVar7,puVar9,(longlong)local_3128 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_3120;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_311c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_3118;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_3114;
  if (local_3130 != (undefined1 *)0x0) {
    FUN_1400020a8(local_3130);
  }
  if (local_3180 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_1 + 0x1d4);
  iVar3 = *(int *)(param_1 + 0x1d0);
  iVar4 = *(int *)(param_1 + 0x1cc);
  iVar5 = *(int *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar8 + 2) = (float)iVar5;
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar3;
  *(float *)(puVar8 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 0x1bc);
  iVar5 = *(int *)(param_1 + 0x1c4);
  if (0 < (iVar5 - iVar4) * (iVar2 - iVar3)) {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x30);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(int *)((longlong)puVar8 + 0x14) = iVar3;
    *(int *)(puVar8 + 3) = iVar4;
    *(int *)((longlong)puVar8 + 0x1c) = iVar2;
    *(int *)(puVar8 + 4) = iVar5;
  }
  local_31c0 = *(undefined8 *)(param_1 + 0x1e4);
  local_31c8 = 0;
  FUN_140189754(local_3188,*(longlong *)(param_1 + 0x1d8) + 0x2c0,&local_31c8);
  local_31b8 = 0x11;
  local_31b0 = 0;
  uStack_31a8 = 0;
  local_31a0 = 0;
  uStack_3198 = 0;
  local_31c0 = DAT_14c9c0d98;
  local_3190 = 0;
  local_31c8 = DAT_14c9c0d50;
  local_31d8 = *(undefined4 *)(param_1 + 0x1ec);
  local_31e0 = *(byte *)(param_1 + 0x1e0) & 1;
  local_31d0 = 3;
  local_31e8 = local_3188;
  FUN_140b8e5fa(*(undefined8 *)(param_1 + 0x1d8),param_2,&local_31c8,*(undefined4 *)(param_1 + 500))
  ;
  if (((*(byte *)(param_1 + 0x1f0) & 2) != 0) &&
     (lVar6 = *(longlong *)(param_1 + 0x1d8), lVar6 != 0)) {
    puVar7 = *(undefined8 **)(lVar6 + 0x2a0);
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    FUN_144734080(lVar6);
    FUN_1400020a8(lVar6);
  }
  FUN_1400468f8(local_3188);
  if ((local_90 ^ (ulonglong)auStack_3208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377bc42 FUN_14377bc42 body=1706 status=ok
// SIG undefined FUN_14377bc42(void)

void FUN_14377bc42(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_788 [32];
  wchar_t *local_768;
  undefined1 local_760 [16];
  char *local_750;
  undefined4 local_748;
  undefined4 local_740;
  longlong **local_738;
  undefined1 local_730;
  undefined8 local_728;
  undefined1 local_720;
  undefined1 local_711;
  undefined8 *local_710;
  longlong local_708;
  longlong local_700;
  longlong local_6f8;
  longlong local_6f0;
  longlong lStack_6e8;
  longlong *local_6e0;
  longlong local_6d8;
  undefined *local_6d0;
  undefined8 local_6c8 [14];
  undefined8 *local_658;
  undefined8 *local_650;
  longlong local_630;
  uint local_628;
  uint local_624;
  longlong local_560;
  uint local_558;
  uint local_554;
  longlong local_4f0;
  undefined1 local_4b0 [8];
  undefined1 *local_4a8;
  undefined1 local_498 [8];
  undefined1 *local_490;
  uint local_480;
  int local_47c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (((longlong *)param_1[1] == (longlong *)0x0) ||
     (plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x10))(), *plVar9 == 0)) {
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      FUN_14079e418(*param_1,(int)param_1[1]);
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_788);
    }
  }
  else {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(local_6c8,L"Renderer",1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_6c8[0],&local_710,1);
    }
    (**(code **)(*DAT_14cad8310 + 0x90))(DAT_14cad8310,param_2);
    FUN_1407779ba(local_6c8,param_2);
    lVar7 = param_1[6];
    lVar5 = param_1[4];
    lVar6 = param_1[5];
    lVar12 = param_1[2];
    lVar2 = param_1[3];
    local_710 = local_6c8;
    local_708 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],local_6c8);
    if ((((int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar12 >> 0x20)) *
         ((int)lVar2 - (int)lVar12) < 1) ||
       (local_700 = lVar12, local_6f8 = lVar2, (char)lVar7 != '\0')) {
      local_6f8 = *(longlong *)(local_708 + 0x84);
      local_700 = DAT_14c967818;
    }
    iVar1 = *(int *)(*param_1 + 8);
    local_6f0 = lVar5;
    lStack_6e8 = lVar6;
    if (iVar1 != 0) {
      iVar17 = 0;
      do {
        puVar10 = (undefined8 *)(*(longlong *)*param_1 + (longlong)iVar17 * 0x40);
        pcVar3 = (code *)*puVar10;
        plVar9 = (longlong *)puVar10[2];
        if ((longlong *)puVar10[2] == (longlong *)0x0) {
          plVar9 = puVar10 + 4;
        }
        uVar11 = (**(code **)(*plVar9 + 8))();
        (*pcVar3)(uVar11,&local_710);
        iVar17 = iVar17 + 1;
      } while (iVar1 != iVar17);
    }
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)param_1[1] + 0x10))();
    lVar12 = (**(code **)(*(longlong *)*puVar10 + 8))();
    if (1 < *(byte *)(lVar12 + 0x31)) {
      puVar16 = (undefined8 *)((longlong)local_658 + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar16 + 0x22;
      if (local_650 < puVar10) {
        FUN_140023dd8(&local_658,0x120);
        puVar16 = (undefined8 *)((longlong)local_658 + 0xfU & 0xfffffffffffffff0);
        puVar10 = puVar16 + 0x22;
      }
      uVar8 = local_628;
      *puVar16 = &PTR_FUN_14a1fbd30;
      lVar12 = 0x22;
      do {
        *(undefined1 (*) [16])((longlong)puVar16 + lVar12 + -0x12) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar16 + lVar12 + -2) = 0xffff0000;
        lVar12 = lVar12 + 0x18;
      } while (lVar12 != 0xe2);
      *(undefined4 *)((longlong)puVar16 + 0xe4) = 0;
      *(undefined1 (*) [16])(puVar16 + 0x1a) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar16 + 0x1c) = 0;
      *(undefined4 *)(puVar16 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar16 + 0xec) = 0xffffffff;
      *(undefined4 *)(puVar16 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar16 + 0xf4) = 0xffffffff;
      *(undefined4 *)(puVar16 + 0x1f) = 0;
      *(undefined2 *)((longlong)puVar16 + 0xfc) = 0;
      puVar16[0x20] = 0;
      lVar12 = (longlong)(int)local_628;
      local_628 = local_628 + 1;
      local_658 = puVar10;
      if (local_624 < local_628) {
        FUN_1448cfae8(&local_630,uVar8);
      }
      *(undefined8 **)(local_630 + lVar12 * 8) = puVar16;
      puVar13 = (ulonglong *)(**(code **)(*(longlong *)param_1[1] + 0x20))();
      uVar4 = *puVar13;
      uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 & 0x7fffffff ^ uVar8 >> 0x10;
      uVar15 = uVar8 & local_480;
      if (local_490 == (undefined1 *)0x0) {
        local_490 = local_498;
      }
      if (local_4a8 == (undefined1 *)0x0) {
        local_4a8 = local_4b0;
      }
      do {
        if (*(uint *)(local_490 + (longlong)(int)uVar15 * 4) == uVar8) {
          lVar12 = (longlong)*(int *)(local_4a8 + (longlong)(int)uVar15 * 4) * 0x10;
          if (*(ulonglong *)(local_4f0 + lVar12) == uVar4) {
            if (((*(int *)(local_4a8 + (longlong)(int)uVar15 * 4) != -1) &&
                (plVar9 = (longlong *)(local_4f0 + lVar12 + 8), plVar9 != (longlong *)0x0)) &&
               (lVar12 = *plVar9, lVar12 != 0)) goto LAB_14377bfa7;
            break;
          }
        }
        uVar15 = uVar15 + 1 & local_480;
      } while (uVar15 != (local_47c + uVar8 + 1 & local_480));
      FUN_1447ec05f(&local_6e0,uVar4,L"MSAAResolveCanvasTexture");
      lVar12 = FUN_14473c272(local_6c8,&local_6e0,0);
      if (local_6e0 != (longlong *)0x0) {
        (**(code **)(*local_6e0 + 0x38))();
      }
LAB_14377bfa7:
      uVar11 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],local_6c8);
      puVar16[2] = uVar11;
      puVar16[3] = lVar12;
      *(undefined4 *)(puVar16 + 4) = 0xffff0001;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1))
      {
        FUN_145fddb1e(&local_6e0);
        local_720 = 0;
        local_730 = 0;
        local_750 = "Unknown";
        local_760 = (undefined1  [16])0x0;
        local_768 = L"FRenderTargetParameters";
        local_728 = 0;
        local_740 = 0x100;
        local_748 = 0x7af;
        local_738 = &local_6e0;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_6e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14377b3b5);
        _Init_thread_footer(&DAT_14c9c1080);
      }
      FUN_140069376(local_6c8);
      puVar14 = (undefined8 *)((longlong)local_658 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar14 + 0x38;
      if (local_650 < puVar10) {
        FUN_140023dd8(&local_658,0x1c8);
        puVar14 = (undefined8 *)((longlong)local_658 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar14 + 0x38;
      }
      local_6d8 = DAT_14c9c1048;
      if (DAT_14c9c1048 != 0) {
        LOCK();
        *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
        UNLOCK();
      }
      local_6d0 = &DAT_14c9c1000;
      local_768 = (wchar_t *)CONCAT71(local_768._1_7_,2);
      local_6e0 = puVar16 + 2;
      local_658 = puVar10;
      FUN_140068f1a(puVar14,&local_711,&local_6e0,1);
      uVar8 = local_558;
      *puVar14 = &PTR_FUN_14aaf91c0;
      lVar12 = (longlong)(int)local_558;
      local_558 = local_558 + 1;
      if (local_554 < local_558) {
        FUN_14470e57a(&local_560,uVar8);
      }
      *(undefined8 **)(local_560 + lVar12 * 8) = puVar14;
      *(uint *)((longlong)puVar14 + 0x2c) = local_558 - 1;
      FUN_140069100(local_6c8,puVar14);
    }
    FUN_140779360(local_6c8);
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      FUN_14079e418(*param_1,(int)param_1[1]);
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(param_1);
    }
    FUN_140778010(local_6c8);
  }
  if ((local_50 ^ (ulonglong)auStack_788) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377c310 FUN_14377c310 body=38 status=ok
// SIG undefined FUN_14377c310(void)

undefined8 FUN_14377c310(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377c336 FUN_14377c336 body=403 status=ok
// SIG undefined FUN_14377c336(void)

void FUN_14377c336(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 *local_a0;
  int local_98;
  undefined1 local_90 [64];
  undefined1 *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144b1c6fa(param_1 + 0x10,local_a8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_98;
  if ((longlong)local_98 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_a8;
    if (local_a0 != (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe144(puVar3 + 2,local_98,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_98);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar2 = local_90;
    }
    FUN_1446fe1b8(puVar3 + 5,local_48,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_48 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_40;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_3c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_34;
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8(local_50);
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377c4da FUN_14377c4da body=29 status=ok
// SIG undefined FUN_14377c4da(void)

void FUN_14377c4da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14377c4f8 FUN_14377c4f8 body=29 status=ok
// SIG undefined FUN_14377c4f8(void)

undefined8 FUN_14377c4f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377c516 FUN_14377c516 body=282 status=ok
// SIG undefined FUN_14377c516(void)

undefined8 * FUN_14377c516(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14377a02f);
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



// FUNCTION 14377c630 FUN_14377c630 body=105 status=ok
// SIG undefined FUN_14377c630(void)

void FUN_14377c630(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14377bc42(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14377bc42(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014377c673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14377c6a0 FUN_14377c6a0 body=2499 status=ok
// SIG undefined FUN_14377c6a0(void)

void FUN_14377c6a0(float *param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [4];
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  byte bVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_378 [32];
  undefined1 local_358;
  undefined4 local_350;
  undefined1 local_348;
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [7];
  byte bStack_329;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined2 local_314;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined1 local_1f8;
  longlong lStack_175;
  undefined1 local_168 [4];
  byte local_164;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(longlong **)(param_1 + 4) == (longlong *)0x0) goto LAB_14377cf59;
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
  if (*plVar5 == 0) {
LAB_14377ca87:
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    if (*plVar5 == 0) goto LAB_14377cf59;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    local_328 = *puVar6;
    lVar7 = 0x15;
    do {
      *(undefined8 *)(local_340 + lVar7 + 3) = 0;
      *(undefined8 *)(local_338 + lVar7 + 3) = 0;
      *(undefined4 *)(local_330 + lVar7 + 3) = 0xffffffff;
      (&bStack_329 + lVar7)[0] = 0;
      (&bStack_329 + lVar7)[1] = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd5);
    local_254 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_250 = 0xffffffff;
    uStack_24c = 0xffffffff;
    uStack_248 = 0xffffffff;
    uStack_244 = 0xffffffff;
    _local_240 = 0;
    auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
    _auStack_234 = 0;
    auStack_231._1_3_ = 0;
    local_320 = 0;
    local_318 = 0xffffffff;
    local_314 = 0x100;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    local_218 = *puVar6;
    local_338 = (undefined1  [8])&local_228;
    local_228 = 0xffffffffffffffff;
    uStack_220 = 0xffffffff;
    local_210 = 1;
    local_20c = 0x100000000000;
    local_204 = 0;
    local_1f8 = 0;
    local_330._0_4_ = 1;
    FUN_144760590(param_2,local_338,0);
    pwVar9 = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar8 = pwVar9 + 0xc;
    if ((wchar_t *)param_2[1] < pwVar8) {
      FUN_140023dd8(param_2,0x1a);
      pwVar9 = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
      pwVar8 = pwVar9 + 0xc;
    }
    *param_2 = (ulonglong)pwVar8;
    wcscpy(pwVar9,L"ClearCanvas");
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x23;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x120);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 0x23;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_14a217b50;
    memcpy(puVar11 + 2,&local_328,0xe8);
    puVar11[0x1f] = 0;
    puVar11[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
    *(uint *)((longlong)puVar11 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
    puVar11[0x22] = pwVar9;
    lVar7 = 0x11;
    do {
      *(undefined8 *)(local_240 + lVar7 + 7) = 0;
      *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_229 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd1);
    local_168 = (undefined1  [4])0x0;
    local_164 = 0;
    lVar7 = 0xd9;
    do {
      *(undefined8 *)(local_240 + lVar7 + 7) = 0;
      *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_229 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x199);
    local_a0 = 0;
    local_70 = 0;
    local_68 = local_68 & 0xff;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = local_78 & 0xff00;
    lVar7 = 0x15;
    do {
      if (*(longlong *)(local_340 + lVar7 + 3) == 0) break;
      *(longlong *)(local_240 + lVar7 + 3) = *(longlong *)(local_340 + lVar7 + 3);
      bVar1 = *(byte *)((longlong)&local_328 + lVar7);
      bVar10 = bVar1 >> 2;
      auStack_231[lVar7 + 4] = bVar10;
      abStack_22c[lVar7] = bVar1 & 3;
      *(undefined4 *)(auStack_234 + lVar7 + 3) = *(undefined4 *)(local_330 + lVar7 + 3);
      *(uint *)(auStack_239 + lVar7 + 4) = (uint)(&bStack_329)[lVar7];
      local_168 = (undefined1  [4])((int)local_168 + 1);
      local_164 = local_164 | bVar10 == 2;
      lVar2 = *(longlong *)(local_338 + lVar7 + 3);
      if (lVar2 != 0) {
        local_a0 = 1;
        uVar3 = *(undefined8 *)(auStack_239 + lVar7 + 4);
        *(undefined8 *)((longlong)&lStack_175 + lVar7) = *(undefined8 *)(local_240 + lVar7 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe93 + lVar7) = uVar3;
        *(undefined8 *)(local_168 + lVar7 + 3) = *(undefined8 *)(auStack_231 + lVar7 + 4);
        *(longlong *)((longlong)&lStack_175 + lVar7) = lVar2;
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd5);
    auVar4 = local_168;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_98 = ZEXT816(0);
    if (0 < (longlong)(int)local_168) {
      memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
    }
    *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
    *(undefined2 *)(param_2 + 0x2f) = 0;
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
    (**(code **)(**(longlong **)(param_1 + 4) + 0x28))(*(longlong **)(param_1 + 4),&local_228);
    fVar12 = (float)local_228._4_4_;
    (**(code **)(**(longlong **)(param_1 + 4) + 0x28))(*(longlong **)(param_1 + 4),local_338);
    fVar13 = (float)(int)local_338._0_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    *(undefined1 (*) [16])(puVar11 + 1) = (undefined1  [16])0x0;
    *puVar11 = &PTR_LAB_14a1e7fc8;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(float *)((longlong)puVar11 + 0x1c) = fVar13;
    *(float *)(puVar11 + 4) = fVar12;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    local_340._0_4_ = 0;
    local_348 = 0;
    local_350 = 0;
    local_358 = 0;
    FUN_140d1dede(param_2,1,1,param_1);
    bVar1 = *(byte *)((longlong)param_2 + 0x17b);
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    lVar7 = (**(code **)(*(longlong *)*puVar6 + 8))();
    if ((((((*(int *)(lVar7 + 8) != 1) || (*(float *)(lVar7 + 0xc) != *param_1)) ||
          (NAN(*(float *)(lVar7 + 0xc)) || NAN(*param_1))) ||
         ((*(float *)(lVar7 + 0x10) != param_1[1] ||
          (NAN(*(float *)(lVar7 + 0x10)) || NAN(param_1[1]))))) ||
        ((*(float *)(lVar7 + 0x14) != param_1[2] ||
         ((NAN(*(float *)(lVar7 + 0x14)) || NAN(param_1[2]) ||
          (*(float *)(lVar7 + 0x18) != param_1[3])))))) ||
       (NAN(*(float *)(lVar7 + 0x18)) || NAN(param_1[3]))) goto LAB_14377ca87;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    local_328 = *puVar6;
    lVar7 = 0x15;
    do {
      *(undefined8 *)(local_340 + lVar7 + 3) = 0;
      *(undefined8 *)(local_338 + lVar7 + 3) = 0;
      *(undefined4 *)(local_330 + lVar7 + 3) = 0xffffffff;
      (&bStack_329 + lVar7)[0] = 0;
      (&bStack_329 + lVar7)[1] = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd5);
    local_254 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_250 = 0xffffffff;
    uStack_24c = 0xffffffff;
    uStack_248 = 0xffffffff;
    uStack_244 = 0xffffffff;
    _local_240 = 0;
    auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
    _auStack_234 = 0;
    auStack_231._1_3_ = 0;
    local_320 = 0;
    local_318 = 0xffffffff;
    local_314 = 0x900;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    local_218 = *puVar6;
    local_338 = (undefined1  [8])&local_228;
    local_228 = 0xffffffffffffffff;
    uStack_220 = 0xffffffff;
    local_210 = 1;
    local_20c = 0x100000000000;
    local_204 = 0;
    local_1f8 = 0;
    local_330._0_4_ = 1;
    FUN_144760590(param_2,local_338,0);
    pwVar9 = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar8 = pwVar9 + 0xc;
    if ((wchar_t *)param_2[1] < pwVar8) {
      FUN_140023dd8(param_2,0x1a);
      pwVar9 = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
      pwVar8 = pwVar9 + 0xc;
    }
    *param_2 = (ulonglong)pwVar8;
    wcscpy(pwVar9,L"ClearCanvas");
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x23;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x120);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 0x23;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_14a217b50;
    memcpy(puVar11 + 2,&local_328,0xe8);
    puVar11[0x1f] = 0;
    puVar11[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
    *(uint *)((longlong)puVar11 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
    puVar11[0x22] = pwVar9;
    lVar7 = 0x11;
    do {
      *(undefined8 *)(local_240 + lVar7 + 7) = 0;
      *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_229 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd1);
    local_168 = (undefined1  [4])0x0;
    local_164 = 0;
    lVar7 = 0xd9;
    do {
      *(undefined8 *)(local_240 + lVar7 + 7) = 0;
      *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_229 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x199);
    local_a0 = 0;
    local_70 = 0;
    local_68 = local_68 & 0xff;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = local_78 & 0xff00;
    lVar7 = 0x15;
    do {
      if (*(longlong *)(local_340 + lVar7 + 3) == 0) break;
      *(longlong *)(local_240 + lVar7 + 3) = *(longlong *)(local_340 + lVar7 + 3);
      bVar1 = *(byte *)((longlong)&local_328 + lVar7);
      bVar10 = bVar1 >> 2;
      auStack_231[lVar7 + 4] = bVar10;
      abStack_22c[lVar7] = bVar1 & 3;
      *(undefined4 *)(auStack_234 + lVar7 + 3) = *(undefined4 *)(local_330 + lVar7 + 3);
      *(uint *)(auStack_239 + lVar7 + 4) = (uint)(&bStack_329)[lVar7];
      local_168 = (undefined1  [4])((int)local_168 + 1);
      local_164 = local_164 | bVar10 == 2;
      lVar2 = *(longlong *)(local_338 + lVar7 + 3);
      if (lVar2 != 0) {
        local_a0 = 1;
        uVar3 = *(undefined8 *)(auStack_239 + lVar7 + 4);
        *(undefined8 *)((longlong)&lStack_175 + lVar7) = *(undefined8 *)(local_240 + lVar7 + 3);
        *(undefined8 *)(&stack0xfffffffffffffe93 + lVar7) = uVar3;
        *(undefined8 *)(local_168 + lVar7 + 3) = *(undefined8 *)(auStack_231 + lVar7 + 4);
        *(longlong *)((longlong)&lStack_175 + lVar7) = lVar2;
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xd5);
    auVar4 = local_168;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_98 = ZEXT816(0);
    if (0 < (longlong)(int)local_168) {
      memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
    }
    *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    bVar1 = *(byte *)((longlong)param_2 + 0x17b);
    *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
    *(undefined2 *)(param_2 + 0x2f) = 0;
    *(byte *)((longlong)param_2 + 0x17b) = bVar1 & 0xfc | 2;
  }
  if ((bVar1 & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 2;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x18);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 2;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
LAB_14377cf59:
  if ((local_60 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377d074 FUN_14377d074 body=12 status=ok
// SIG undefined FUN_14377d074(void)

void FUN_14377d074(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014377d07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14377d080 FUN_14377d080 body=29 status=ok
// SIG undefined FUN_14377d080(void)

undefined8 FUN_14377d080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377d09e FUN_14377d09e body=282 status=ok
// SIG undefined FUN_14377d09e(void)

undefined8 * FUN_14377d09e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14377a02f);
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



// FUNCTION 14377d1b8 FUN_14377d1b8 body=105 status=ok
// SIG undefined FUN_14377d1b8(void)

void FUN_14377d1b8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14377c6a0(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14377c6a0(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014377d1fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14377d26e FUN_14377d26e body=75 status=ok
// SIG undefined FUN_14377d26e(void)

void FUN_14377d26e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14377d2ba FUN_14377d2ba body=68 status=ok
// SIG undefined FUN_14377d2ba(void)

void FUN_14377d2ba(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147da2f0c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14377d2fe FUN_14377d2fe body=38 status=ok
// SIG undefined FUN_14377d2fe(void)

void FUN_14377d2fe(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457dfb3e(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14377d324 FUN_14377d324 body=38 status=ok
// SIG undefined FUN_14377d324(void)

void FUN_14377d324(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1479f6e18(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14377d34a FUN_14377d34a body=43 status=ok
// SIG undefined FUN_14377d34a(void)

void FUN_14377d34a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147d94cdc(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 14377d376 FUN_14377d376 body=371 status=ok
// SIG undefined FUN_14377d376(void)

void FUN_14377d376(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = DAT_14cb0e530;
  if ((int)DAT_14cb0e530 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cb0e534 == 0) {
    uVar3 = 4;
    if (4 < DAT_14cb0e530) {
      uVar3 = DAT_14cb0e530;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cb0e530 * 3) >> 3) + (longlong)(int)DAT_14cb0e530 +
            0x10;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14377d40e;
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
LAB_14377d40e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  DAT_14cb0e534 = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cb0e528,param_1,uVar7,0x28,8);
  return;
}



// FUNCTION 14377d4ea FUN_14377d4ea body=367 status=ok
// SIG undefined FUN_14377d4ea(void)

void FUN_14377d4ea(int param_1)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = DAT_14cb0e548;
  if ((int)DAT_14cb0e548 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cb0e54c == 0) {
    uVar5 = 4;
    if (4 < DAT_14cb0e548) {
      uVar5 = DAT_14cb0e548;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)DAT_14cb0e548 * 3) >> 3) + (longlong)(int)DAT_14cb0e548 +
            0x10;
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
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14377d57e;
            lVar6 = uVar9 + 1 + uVar10;
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
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14377d57e:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar3 * ZEXT816(0x2492492492492493),8);
  DAT_14cb0e54c = 0x7fffffff;
  if ((int)uVar4 <= iVar8) {
    DAT_14cb0e54c = iVar8;
  }
  FUN_1446f8d3c(&DAT_14cb0e540,param_1,DAT_14cb0e54c,0x38,8);
  return;
}



// FUNCTION 14377d65a FUN_14377d65a body=64 status=ok
// SIG undefined FUN_14377d65a(void)

void FUN_14377d65a(void)

{
  if (DAT_14cb0e534 != 0) {
    DAT_14cb0e534 = 0;
    FUN_1446f8d3c(&DAT_14cb0e528,DAT_14cb0e530,0,0x28,8);
  }
  return;
}



// FUNCTION 14377d69a FUN_14377d69a body=64 status=ok
// SIG undefined FUN_14377d69a(void)

void FUN_14377d69a(void)

{
  if (DAT_14cb0e54c != 0) {
    DAT_14cb0e54c = 0;
    FUN_1446f8d3c(&DAT_14cb0e540,DAT_14cb0e548,0,0x38,8);
  }
  return;
}



// FUNCTION 14377d6da FUN_14377d6da body=62 status=ok
// SIG undefined FUN_14377d6da(void)

void FUN_14377d6da(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  piVar1 = (int *)(puVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (puVar2 == (undefined8 *)0x0 || *piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014377d715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}



// FUNCTION 14377d722 FUN_14377d722 body=12 status=ok
// SIG undefined FUN_14377d722(void)

void FUN_14377d722(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014377d72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14377d72e FUN_14377d72e body=29 status=ok
// SIG undefined FUN_14377d72e(void)

undefined8 FUN_14377d72e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377d74c FUN_14377d74c body=282 status=ok
// SIG undefined FUN_14377d74c(void)

undefined8 * FUN_14377d74c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14377a02f);
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



// FUNCTION 14377d866 FUN_14377d866 body=110 status=ok
// SIG undefined FUN_14377d866(void)

void FUN_14377d866(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  LOCK();
  piVar1 = (int *)(puVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (puVar2 != (undefined8 *)0x0 && *piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014377d8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14377d8d4 FUN_14377d8d4 body=62 status=ok
// SIG undefined FUN_14377d8d4(void)

void FUN_14377d8d4(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  piVar1 = (int *)(puVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (puVar2 == (undefined8 *)0x0 || *piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014377d90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}



// FUNCTION 14377d91c FUN_14377d91c body=12 status=ok
// SIG undefined FUN_14377d91c(void)

void FUN_14377d91c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014377d925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14377d928 FUN_14377d928 body=29 status=ok
// SIG undefined FUN_14377d928(void)

undefined8 FUN_14377d928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377d946 FUN_14377d946 body=282 status=ok
// SIG undefined FUN_14377d946(void)

undefined8 * FUN_14377d946(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14377a02f);
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



// FUNCTION 14377da60 FUN_14377da60 body=110 status=ok
// SIG undefined FUN_14377da60(void)

void FUN_14377da60(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  LOCK();
  piVar1 = (int *)(puVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (puVar2 != (undefined8 *)0x0 && *piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014377dac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14377dace FUN_14377dace body=41 status=ok
// SIG undefined FUN_14377dace(void)

void FUN_14377dace(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_143778f62(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14377db02 FUN_14377db02 body=12 status=ok
// SIG undefined FUN_14377db02(void)

void FUN_14377db02(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014377db0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14377db0e FUN_14377db0e body=29 status=ok
// SIG undefined FUN_14377db0e(void)

undefined8 FUN_14377db0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377db2c FUN_14377db2c body=282 status=ok
// SIG undefined FUN_14377db2c(void)

undefined8 * FUN_14377db2c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14377a02f);
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



// FUNCTION 14377dc46 FUN_14377dc46 body=94 status=ok
// SIG undefined FUN_14377dc46(void)

ulonglong FUN_14377dc46(undefined8 *param_1)

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
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_143778f62(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014377dc99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14377dca4 FUN_14377dca4 body=25 status=ok
// SIG undefined FUN_14377dca4(void)

void FUN_14377dca4(void)

{
  FUN_14603bfae();
  FUN_14170c56a(&DAT_14cb0e838);
  return;
}



// FUNCTION 14377dcbe FUN_14377dcbe body=249 status=ok
// SIG undefined FUN_14377dcbe(void)

undefined8 * FUN_14377dcbe(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14377dcf4;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_14377dcf4:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 5 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 5 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_14377dd6a;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14377dd6a:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 6;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x28;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14aaf99e8;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 14377ddb8 FUN_14377ddb8 body=29 status=ok
// SIG undefined FUN_14377ddb8(void)

undefined8 FUN_14377ddb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377ddea FUN_14377ddea body=93 status=ok
// SIG undefined FUN_14377ddea(void)

void FUN_14377ddea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1361f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14377de48 FUN_14377de48 body=93 status=ok
// SIG undefined FUN_14377de48(void)

void FUN_14377de48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1361f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14377dea6 FUN_14377dea6 body=126 status=ok
// SIG undefined FUN_14377dea6(void)

void FUN_14377dea6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1361f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aaf9a00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014377df15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14377df3e FUN_14377df3e body=29 status=ok
// SIG undefined FUN_14377df3e(void)

undefined8 FUN_14377df3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14377df70 FUN_14377df70 body=93 status=ok
// SIG undefined FUN_14377df70(void)

void FUN_14377df70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1361f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14377dfce FUN_14377dfce body=93 status=ok
// SIG undefined FUN_14377dfce(void)

void FUN_14377dfce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1361f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14377e02c FUN_14377e02c body=126 status=ok
// SIG undefined FUN_14377e02c(void)

void FUN_14377e02c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1361f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aaf9a70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014377e09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14377e0c3 FUN_14377e0c3 body=3609 status=ok
// SIG undefined FUN_14377e0c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377e0c3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined **ppuStack_d0;
  undefined1 *local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb0d2b8);
  if (cVar1 == '\0') {
    _DAT_14cb0d2b8 = 0;
    uRam000000014cb0d2c0 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&DAT_14cb0d2c8,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_14376b340);
  DAT_14cb0d2f8 = 0;
  DAT_14cb0d300 = 0;
  DAT_14cb0d2d8 = 0;
  _DAT_14cb0d2e0 = 0;
  _DAT_14cb0d304 = 0xffffffff00000080;
  DAT_14cb0d30c = 0;
  DAT_14cb0d318 = 0;
  DAT_14cb0d320 = 0;
  atexit(FUN_14376b351);
  DAT_14cb0d328 = 0;
  _DAT_14cb0d330 = 0;
  _DAT_14cb0d338 = 2;
  atexit(FUN_14376c5ff);
  DAT_14cb0d340 = 0;
  _DAT_14cb0d348 = 0;
  _DAT_14cb0d350 = 2;
  atexit(FUN_14376c630);
  DAT_14cb0f1e8 = 0;
  _DAT_14cb0f1f0 = 0;
  _DAT_14cb0f1f8 = 2;
  atexit(FUN_14376c661);
  DAT_14cb0f210 = 0;
  _DAT_14cb0f218 = 0;
  _DAT_14cb0f220 = 2;
  atexit(FUN_14376c692);
  DAT_14cb0f238 = 0;
  _DAT_14cb0f240 = 0;
  _DAT_14cb0f248 = 2;
  atexit(FUN_14376c6c3);
  DAT_14cb0d358 = 0;
  _DAT_14cb0d360 = 0;
  _DAT_14cb0d368 = 2;
  atexit(FUN_14376c6f4);
  DAT_14cb0f228 = 0;
  DAT_14cb0f230 = 0;
  atexit(FUN_14376c725);
  DAT_14cb0f200 = 0;
  DAT_14cb0f208 = 0;
  atexit(FUN_14376c780);
  DAT_14cb0d370 = 0;
  _DAT_14cb0d378 = 0;
  _DAT_14cb0d380 = 2;
  atexit(FUN_14376c7db);
  DAT_14cb0d388 = 0;
  _DAT_14cb0d390 = 0;
  _DAT_14cb0d398 = 2;
  atexit(FUN_14376c80c);
  DAT_14cb0d3a0 = 0;
  _DAT_14cb0d3a8 = 0;
  _DAT_14cb0d3b0 = 2;
  atexit(FUN_14376c83d);
  DAT_14cb0d3b8 = 0;
  _DAT_14cb0d3c0 = 0;
  _DAT_14cb0d3c8 = 2;
  atexit(FUN_14376c86e);
  DAT_14cb0d3d0 = 0;
  _DAT_14cb0d3d8 = 0;
  _DAT_14cb0d3e0 = 2;
  atexit(FUN_14376c89f);
  DAT_14cb0f1b8 = 0;
  _DAT_14cb0f1c0 = 0;
  _DAT_14cb0f1c8 = 2;
  atexit(FUN_14376c8d0);
  DAT_14cb0f1d0 = 0;
  _DAT_14cb0f1d8 = 0;
  _DAT_14cb0f1e0 = 2;
  atexit(FUN_14376c901);
  DAT_14cb0d3e8 = 0;
  _DAT_14cb0d3f0 = 0;
  _DAT_14cb0d3f8 = 2;
  atexit(FUN_14376c932);
  DAT_14cb0f1a0 = 0;
  _DAT_14cb0f1a8 = 0;
  _DAT_14cb0f1b0 = 2;
  atexit(FUN_14376c963);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14377aefe;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb0d468,6,&local_a8);
  pcStack_a0 = FUN_145e195ae;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0d588,&local_a8);
  pcStack_a0 = FUN_145d5a724;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0d6b0,&local_a8);
  pcStack_a0 = FUN_1460abe44;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0d7d8,&local_a8);
  pcStack_a0 = FUN_1460ac0b4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0d900,&local_a8);
  pcStack_a0 = FUN_1460444a2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0da28,&local_a8);
  pcStack_a0 = FUN_1460447e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0db50,&local_a8);
  local_a8 = (code *)0x149fca2ba;
  pcStack_a0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb0db60 = (ulonglong)uVar2;
  DAT_14cb0f148 = 0;
  _DAT_14cb0f150 = 0;
  DAT_14cb0f158 = 0;
  uRam000000014cb0f160 = 0;
  DAT_14cb0f168 = 0;
  _DAT_14cb0f170 = 0;
  DAT_14cb0f178 = 0;
  _DAT_14cb0f180 = 0;
  DAT_14cb0f188 = 0;
  _DAT_14cb0f190 = 0;
  atexit((_func_5014 *)&LAB_14376c9dc);
  DAT_14cb0f0e8 = 0;
  _DAT_14cb0f0f0 = 0;
  _DAT_14cb0f0f8 = 2;
  atexit(FUN_14376c9e1);
  DAT_14cb0f100 = 0;
  _DAT_14cb0f108 = 0;
  DAT_14cb0f110 = 0;
  atexit((_func_5014 *)&LAB_14376ca12);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aae7e80,1,0);
  ppuStack_d0 = &PTR_FUN_14aae8fd0;
  local_d8 = (undefined1 *)0x1;
  local_c8 = (undefined1 *)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aae9060,1,&PTR_FUN_14aae9030);
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaeb710,1,&PTR_FUN_14aaeb6e0);
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaec050,1,&PTR_FUN_14aaec020);
  FUN_1446f470e(&DAT_14cb0dd38,L"Typing",1);
  FUN_1446f470e(&DAT_14cb0dd40,L"Open",1);
  DAT_14cb0dd48 = 0;
  _DAT_14cb0dd50 = 0;
  _DAT_14cb0dd58 = 2;
  atexit(FUN_14377435a);
  DAT_14cb0dd60 = 0;
  _DAT_14cb0dd68 = 0;
  _DAT_14cb0dd70 = 2;
  atexit(FUN_14377438b);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0dd78,L"console.position.enable",&local_a8,
                L"Enable custom console positioning \n");
  atexit(FUN_1437743bc);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0dd90,L"console.position.x",&local_a8,
                L"Console X offset from left border \n");
  atexit(FUN_143774401);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0dda8,L"console.position.y",&local_a8,
                L"Console Y offset from bottom border \n");
  atexit(FUN_143774446);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cb0ddc0,L"console.searchmode.legacy",&local_a8,
                L"Use the legacy search behaviour for console commands \n");
  atexit(FUN_14377448b);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cb0ddd8,L"console.searchmode.prefixfirst",&local_a8,
                L"When displaying auto-completion suggestions for console commands, suggest prefix matches before mid-string matches"
               );
  atexit(FUN_1437744d0);
  FUN_140056680(&DAT_14cb0ddf0,&DAT_14aaec3a4);
  atexit((_func_5014 *)&LAB_143774515);
  local_c8 = (undefined1 *)0x2;
  ppuStack_d0 = &PTR_FUN_14aaeec20;
  local_d8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaeec90,2,&PTR_FUN_14aaeec60);
  DAT_14cb0f128._4_4_ = 0;
  DAT_14cb0f118 = 0;
  DAT_14cb0f120 = 0;
  DAT_14cb0f128._0_1_ = 0;
  FUN_1446f470e(&local_a8,L"DefaultKeyboardAndMouse",1);
  FUN_1446f470e(&local_b0,&DAT_149eca138,1);
  _DAT_14cb0f130 = local_a8;
  _DAT_14cb0f138 = local_b0;
  DAT_14cb0f140 = 1;
  _DAT_14cb0f144 = 3;
  FUN_1446f470e(&local_a8,L"DefaultGamepad",1);
  FUN_1446f470e(&local_b0,L"Gamepad",1);
  _DAT_14cb0e380 = local_a8;
  _DAT_14cb0e388 = local_b0;
  DAT_14cb0e390 = 2;
  _DAT_14cb0e394 = 4;
  FUN_1446f470e(&local_a8,L"DefaultMobileTouch",1);
  FUN_1446f470e(&local_b0,L"MobileTouch",1);
  _DAT_14cb0e398 = local_a8;
  _DAT_14cb0e3a0 = local_b0;
  DAT_14cb0e3a8 = 3;
  _DAT_14cb0e3ac = 8;
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0e3b0,L"gbx.UseConsoleKeyFallbackFrench",&DAT_14cb0e234,
                L"If true, the fallback console key chord for french will be enabled in shipping builds"
               );
  atexit(FUN_143774895);
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf03a0,1,&PTR_FUN_14aaf02b0);
  DAT_14cb0e498 = 0;
  _DAT_14cb0e4a0 = 0;
  atexit(FUN_1437748da);
  DAT_14cb0e4a8 = 0;
  _DAT_14cb0e4b0 = 0;
  atexit(FUN_14377490b);
  DAT_14cb0e4b8 = 0;
  _DAT_14cb0e4c0 = 0;
  atexit(FUN_14377493c);
  DAT_14cb0e4c8 = 0;
  _DAT_14cb0e4d0 = 0;
  atexit(FUN_14377496d);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb0e4d8,L"Input.AxisEventsCanBeConsumed",&DAT_14c761e3c,
                L"If true and all FKey\'s for a given Axis Event are consumed, then the axis delegate will not fire."
               );
  atexit(FUN_14377499e);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb0e4e8,L"Input.AutoReconcilePressedEventsOnFirstRepeat",&DAT_14c761e3d,
                L"If true, then we will automatically mark a IE_Pressed event if we receive an IE_Repeat event but have not received a pressed event first.\nNote: This option will be removed in a future update."
               );
  atexit(FUN_1437749e3);
  local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb0e4f8,L"Input.ClearAxisValueIfConsumed",&DAT_14c761e3e,
                L"If true, we will clear the value of any FInputAxisKeyBinding whose FKey has been previously consumed.\nNote: This option will be removed in a future update."
               );
  atexit(FUN_143774a28);
  local_a8 = (code *)&DAT_149e3cc53;
  pcStack_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x149edbe10;
  pcStack_a0._0_5_ = 5;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x14a3a3418;
  pcStack_a0._0_5_ = 6;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x14a65da60;
  pcStack_a0._0_5_ = 5;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x149e35218;
  pcStack_a0._0_5_ = 6;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)&DAT_14aaf094c;
  pcStack_a0._0_5_ = 3;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)&DAT_149eda610;
  pcStack_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)&DAT_149e54500;
  pcStack_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x14aaf0950;
  pcStack_a0 = (code *)CONCAT35(pcStack_a0._5_3_,6);
  FUN_14001a6c0(&local_a8,1);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf0d10,1,0);
  pcStack_a0 = FUN_145e39462;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cb0e668,&local_a8);
  pcStack_a0 = FUN_145e19ad8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0e790,&local_a8);
  pcStack_a0 = FUN_145f9d498;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cb0e828,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14377dca4;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb0e8a0,6,&local_a8);
  _DAT_14cb0e8b0 = 0xffffffff;
  DAT_14cb0e8b4 = 5;
  DAT_14cb0e8b5 = 1;
  DAT_14cb0e8b6 = 0;
  DAT_14cb0e8b8 = 0;
  DAT_14cb0e8a8 = &PTR_FUN_14aaf9930;
  FUN_14640c56e();
  atexit(FUN_1437799c7);
  DAT_14cb0e8c8 = 0xffffffff;
  DAT_14cb0e8cc = 5;
  DAT_14cb0e8cd = 1;
  DAT_14cb0e8ce = 0;
  DAT_14cb0e8d0 = 0;
  DAT_14cb0e8c0 = &PTR_FUN_14aaf9990;
  FUN_14640c698();
  atexit(FUN_1437799f6);
  local_b8 = &LAB_143779ae6;
  local_c0 = &DAT_147ad7216;
  local_c8 = &LAB_143779b12;
  ppuStack_d0 = (undefined **)FUN_143779b31;
  local_d8 = &LAB_143779b4e;
  FUN_141585c60(&DAT_14cb0e8d8,L"FVectorFieldVisualizationVertexFactory",
                L"/Engine/Private/VectorFieldVisualizationVertexFactory.ush",10);
  atexit((_func_5014 *)&LAB_143779b5d);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf1800,1,0);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf1bc0,1,0);
  FUN_1417f8407();
  atexit(FUN_143779c5e);
  DAT_14cb0e988 = 0;
  uRam000000014cb0e990 = 0;
  atexit((_func_5014 *)&LAB_143779c8f);
  _DAT_14cb0e998 = 0;
  DAT_14cb0e9c0 = 0;
  DAT_14cb0e9c8 = 0;
  DAT_14cb0e9a0 = 0;
  _DAT_14cb0e9a8 = 0;
  DAT_14cb0e9cc = 0x80;
  _DAT_14cb0e9d0 = 0xffffffff;
  _DAT_14cb0e9d4 = 0;
  DAT_14cb0e9e0 = 0;
  _DAT_14cb0e9e8 = 0;
  DAT_14cb0e9f0 = 0xffffffff;
  _DAT_14cb0e9f4 = 0;
  DAT_14cb0ea00 = 0;
  uRam000000014cb0ea08 = 0;
  DAT_14cb0ea10 = 0;
  atexit((_func_5014 *)&LAB_143779ca0);
  local_a8 = (code *)0xcaea41c9a4237a36;
  pcStack_a0 = (code *)0x58681bf38fa218f8;
  _DAT_14cb0ea18 = 0xa4237a36;
  uRam000000014cb0ea1c = 0xcaea41c9;
  uRam000000014cb0ea20 = 0x8fa218f8;
  uRam000000014cb0ea24 = 0x58681bf3;
  FUN_141005458(&local_a8,5,L"VisualLogger",0);
  atexit((_func_5014 *)&LAB_143779ca5);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf3ce0,1,0);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf4410,1,0);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaf6610,1,0);
  _DAT_14cb0ead8 = 0;
  _DAT_14cb0eadc = 0;
  FUN_1446f470e(&DAT_14cb0eae0,L"VisLogBP",1);
  FUN_1446f470e(&DAT_14cb0eae8,L"UnnamedCategry",1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377eee0 FUN_14377eee0 body=295 status=ok
// SIG undefined FUN_14377eee0(void)

void FUN_14377eee0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1a8) != 0)) {
    do {
      cVar4 = (**(code **)(*param_2 + 0x38))(param_2);
      if (cVar4 != '\0') break;
      plVar5 = (longlong *)FUN_140489acc();
      local_68 = param_2;
      (**(code **)(*plVar5 + 0x368))
                (plVar5,&local_48,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x1a8));
      lVar3 = local_48;
      if (local_48 == 0) {
        FUN_14572541c(param_2);
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
        if (plVar5[0x1e] == 0) {
          local_58 = local_48;
          local_50 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x370))(plVar5,&local_58);
        }
      }
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377f008 FUN_14377f008 body=566 status=ok
// SIG undefined FUN_14377f008(void)

void FUN_14377f008(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Dst;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [41];
  byte local_157;
  byte local_8c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(longlong *)(param_1[5] + 0x30) != 0) &&
     (*(char *)(*(longlong *)(param_1[5] + 0x30) + 0x5f8) == '\x01')) {
    if (0 < (int)param_1[0xe]) {
      lVar11 = 8;
      uVar10 = 0;
      do {
        iVar7 = (**(code **)(*(longlong *)param_1[5] + 0x308))((longlong *)param_1[5],0);
        if (iVar7 == 0) {
          iVar7 = (int)param_1[0xe];
          break;
        }
        FUN_1449daf8c(local_180,param_1,0);
        plVar2 = *(longlong **)(param_1[0xd] + -8 + lVar11);
        plVar3 = *(longlong **)(param_1[0xd] + lVar11);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if ((*(byte *)(param_1 + 6) & 1) == 0) {
          bVar5 = 0x10;
        }
        else {
          cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
          bVar5 = cVar6 << 4;
        }
        local_8c = local_8c & 0xef | bVar5;
        (**(code **)(*plVar2 + 0x28))(plVar2,local_180);
        bVar5 = local_157;
        if ((local_157 & 2) == 0) {
          (**(code **)(*param_1 + 0x308))(param_1,local_188,local_180,1);
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
        FUN_1449daebe(local_180);
        iVar7 = (int)param_1[0xe];
        if ((bVar5 & 2) != 0) break;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)uVar10 < (longlong)iVar7);
      iVar9 = (int)uVar10;
      if (iVar9 < iVar7) {
        if (iVar9 != 0) {
          _Dst = (void *)param_1[0xd];
          FUN_141359731(_Dst,uVar10 & 0xffffffff);
          iVar8 = (int)param_1[0xe] - iVar9;
          iVar7 = iVar9;
          if (iVar8 != 0) {
            memmove(_Dst,(void *)((uVar10 & 0xffffffff) * 0x10 + (longlong)_Dst),
                    (longlong)iVar8 << 4);
            iVar7 = (int)param_1[0xe];
          }
          *(int *)(param_1 + 0xe) = iVar7 - iVar9;
          FUN_147daeb86(param_1 + 0xd);
        }
        goto LAB_14377f1b9;
      }
    }
    FUN_141359731(param_1[0xd]);
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (*(int *)((longlong)param_1 + 0x74) != 0) {
      FUN_147daeb26(param_1 + 0xd,0);
    }
  }
LAB_14377f1b9:
  uVar10 = (ulonglong)(int)param_1[0xe];
  if (0 < (longlong)uVar10) {
    lVar11 = uVar10 << 4;
    do {
      lVar11 = lVar11 + -0x10;
      cVar6 = (**(code **)(**(longlong **)(param_1[0xd] + lVar11) + 0x20))();
      if (cVar6 == '\0') {
        FUN_147daec22(param_1 + 0xd,(int)uVar10 + -1);
      }
      bVar4 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377f240 FUN_14377f240 body=134 status=ok
// SIG undefined FUN_14377f240(void)

void FUN_14377f240(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
      FUN_147daec98((longlong *)(param_1 + 0x68),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014377f2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14377f2c6 FUN_14377f2c6 body=41 status=ok
// SIG undefined FUN_14377f2c6(void)

void FUN_14377f2c6(void)

{
  DAT_14cb0f338 = 0;
  if (DAT_14cb0f330 != 0) {
    FUN_1400020a8();
  }
  FUN_146195a18();
  return;
}



// FUNCTION 14377f2ef FUN_14377f2ef body=69 status=ok
// SIG undefined FUN_14377f2ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f2ef(void)

{
  _DAT_14cb0f340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f348,1);
  return;
}



// FUNCTION 14377f334 FUN_14377f334 body=69 status=ok
// SIG undefined FUN_14377f334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f334(void)

{
  _DAT_14cb0f358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f360,1);
  return;
}



// FUNCTION 14377f379 FUN_14377f379 body=69 status=ok
// SIG undefined FUN_14377f379(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f379(void)

{
  _DAT_14cb0f370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f378,1);
  return;
}



// FUNCTION 14377f3be FUN_14377f3be body=69 status=ok
// SIG undefined FUN_14377f3be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f3be(void)

{
  _DAT_14cb0f388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f390,1);
  return;
}



// FUNCTION 14377f403 FUN_14377f403 body=69 status=ok
// SIG undefined FUN_14377f403(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f403(void)

{
  _DAT_14cb0f398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3a0,1);
  return;
}



// FUNCTION 14377f448 FUN_14377f448 body=69 status=ok
// SIG undefined FUN_14377f448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f448(void)

{
  _DAT_14cb0f3b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f48a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3b8,1);
  return;
}



// FUNCTION 14377f48d FUN_14377f48d body=69 status=ok
// SIG undefined FUN_14377f48d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f48d(void)

{
  _DAT_14cb0f3c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3c8,1);
  return;
}



// FUNCTION 14377f4d2 FUN_14377f4d2 body=69 status=ok
// SIG undefined FUN_14377f4d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f4d2(void)

{
  _DAT_14cb0f3d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3d8,1);
  return;
}



// FUNCTION 14377f517 FUN_14377f517 body=69 status=ok
// SIG undefined FUN_14377f517(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f517(void)

{
  _DAT_14cb0f3e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3e8,1);
  return;
}



// FUNCTION 14377f55c FUN_14377f55c body=69 status=ok
// SIG undefined FUN_14377f55c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f55c(void)

{
  _DAT_14cb0f3f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f3f8,1);
  return;
}



// FUNCTION 14377f5b2 FUN_14377f5b2 body=72 status=ok
// SIG undefined FUN_14377f5b2(void)

undefined8 * FUN_14377f5b2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  if (plVar1 == (longlong *)0x0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[6] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x528))(plVar1,param_2,plVar1 + 0x48);
  }
  return param_2;
}



// FUNCTION 14377f612 FUN_14377f612 body=240 status=ok
// SIG undefined FUN_14377f612(void)

void FUN_14377f612(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14cb0f6c0 = &PTR_FUN_14ab09500;
  FUN_144725486(&DAT_14cb0f6c0);
  lVar4 = DAT_14cb0f6d0;
  DAT_14cb0f6c0 = &PTR_FUN_14a38cff0;
  if (DAT_14cb0f6d0 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cb0f6d0 + 8);
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
  DAT_14cb0f6c0 = &PTR_FUN_14a38cd70;
  DAT_14cb0f6ce = 2;
  if ((DAT_14cb0f6c8 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14377f702 FUN_14377f702 body=217 status=ok
// SIG undefined FUN_14377f702(void)

void FUN_14377f702(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [42];
  undefined1 local_2e [2];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412e490a();
  uVar3 = 0;
  FUN_140562eea(local_2e,param_2,0,&DAT_14c896044);
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_2c = uVar3;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    uVar3 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_2);
      uVar3 = local_2c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((uVar3 != 0) || ((param_2[0xd] != 0 && (*(longlong *)(param_2[0xd] + 0x10) != 0)))) {
    FUN_14373315c(param_1,param_2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14377f7dc FUN_14377f7dc body=69 status=ok
// SIG undefined FUN_14377f7dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f7dc(void)

{
  _DAT_14cb0f6f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f6f8,1);
  return;
}



// FUNCTION 14377f82a FUN_14377f82a body=190 status=ok
// SIG undefined FUN_14377f82a(void)

undefined8 FUN_14377f82a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x138);
  uVar2 = 0;
  if ((((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x20))) && ((DAT_14ca84e19 & 1) != 0)) &&
     (uVar2 = 0, ((&DAT_14c873438)[(uint)*(byte *)(lVar1 + 0xc) * 0x30] & 1) != 0)) {
    uVar2 = FUN_14001cc68(0x1a0,0x10);
    local_40 = 0;
    local_48 = 0;
    local_38 = 0;
    FUN_143732a68(param_1,local_30,lVar1,DAT_14c761e58);
    FUN_1436842fe(uVar2,param_1,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377f8e9 FUN_14377f8e9 body=69 status=ok
// SIG undefined FUN_14377f8e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f8e9(void)

{
  _DAT_14cb0f730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f92b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f738,1);
  return;
}



// FUNCTION 14377f92e FUN_14377f92e body=69 status=ok
// SIG undefined FUN_14377f92e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f92e(void)

{
  _DAT_14cb0f748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f750,1);
  return;
}



// FUNCTION 14377f973 FUN_14377f973 body=69 status=ok
// SIG undefined FUN_14377f973(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f973(void)

{
  _DAT_14cb0f760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f9b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f768,1);
  return;
}



// FUNCTION 14377f9b8 FUN_14377f9b8 body=69 status=ok
// SIG undefined FUN_14377f9b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f9b8(void)

{
  _DAT_14cb0f778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377f9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f780,1);
  return;
}



// FUNCTION 14377f9fd FUN_14377f9fd body=69 status=ok
// SIG undefined FUN_14377f9fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377f9fd(void)

{
  _DAT_14cb0f790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377fa3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f798,1);
  return;
}



// FUNCTION 14377fa42 FUN_14377fa42 body=69 status=ok
// SIG undefined FUN_14377fa42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377fa42(void)

{
  _DAT_14cb0f7a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377fa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f7b0,1);
  return;
}



// FUNCTION 14377fa87 FUN_14377fa87 body=69 status=ok
// SIG undefined FUN_14377fa87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14377fa87(void)

{
  _DAT_14cb0f7c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014377fac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f7c8,1);
  return;
}



// FUNCTION 14377fadd FUN_14377fadd body=147 status=ok
// SIG undefined FUN_14377fadd(void)

int FUN_14377fadd(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14cb0f788;
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
  uVar3 = *(uint *)(lVar2 + uVar7 * 4);
  uVar6 = 0x400;
  if (uVar3 < 0x400) {
    uVar6 = uVar3;
  }
  uVar3 = 0x10;
  if (0x10 < uVar6) {
    uVar3 = uVar6;
  }
  uVar7 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return 1 << ((byte)lVar2 & 0x1f);
}



// FUNCTION 14377fb70 FUN_14377fb70 body=41 status=ok
// SIG undefined FUN_14377fb70(void)

void FUN_14377fb70(void)

{
  DAT_14cb0f840 = 0;
  if (DAT_14cb0f838 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7128e();
  return;
}



// FUNCTION 14377fb99 FUN_14377fb99 body=261 status=ok
// SIG undefined FUN_14377fb99(void)

void FUN_14377fb99(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14cb0f850;
  if (DAT_14cb0f850 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cb0f850 + 8);
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
  lVar4 = DAT_14cb0f848;
  if (DAT_14cb0f848 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cb0f848 + 8);
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
  return;
}



// FUNCTION 14377fc9e FUN_14377fc9e body=810 status=ok
// SIG undefined FUN_14377fc9e(void)

/* WARNING: Removing unreachable block (ram,0x00014377fd16) */
/* WARNING: Removing unreachable block (ram,0x00014377fefe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14377fc9e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  DWORD DVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_68 [40];
  undefined1 local_40 [7];
  undefined1 local_39;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar9 = *(longlong **)(param_1 + 0x80);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)FUN_147d6e916();
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      local_38 = plVar9;
      DVar7 = GetCurrentThreadId();
      if ((DAT_14cb0f868 & 1) == 0) {
        DAT_14cb0f868 = DAT_14cb0f868 | 1;
        LOCK();
        UNLOCK();
        DAT_14cb0f86c = DVar7;
      }
      else if (DAT_14cb0f86c == DVar7) {
        LOCK();
        DAT_14cb0f868 = DAT_14cb0f868 + 4;
        UNLOCK();
      }
      else {
        FUN_1402441ea(&DAT_14cb0f868,DAT_14cb0f868);
      }
      local_39 = 0;
      FUN_147dac486(local_40,&local_38);
      plVar6 = local_38;
      lVar10 = (**(code **)(*local_38 + 0x10))(local_38,0);
      lVar5 = DAT_14cb0f848;
      if (DAT_14cb0f848 != lVar10) {
        DAT_14cb0f848 = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar5 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar5 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = lVar5;
              plVar14 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar14;
                  LOCK();
                  bVar15 = plVar14 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar15) {
                    plVar14 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar15);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar15 = plVar12 != DAT_14ca843c8;
                  plVar14 = plVar11;
                  if (bVar15) {
                    plVar12 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar15);
              }
            }
          }
        }
      }
      lVar10 = (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar5 = DAT_14cb0f850;
      if (DAT_14cb0f850 != lVar10) {
        DAT_14cb0f850 = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar5 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar5 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = lVar5;
              plVar14 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar14;
                  LOCK();
                  bVar15 = plVar14 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar15) {
                    plVar14 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar15);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar15 = plVar12 != DAT_14ca843c8;
                  plVar14 = plVar11;
                  if (bVar15) {
                    plVar12 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar15);
              }
            }
          }
        }
      }
      uVar2 = *(uint *)(plVar6 + 2);
      uVar4 = *(uint *)((longlong)plVar6 + 0x14);
      uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,0);
      _DAT_14cb0f864 = 1.0 / (float)uVar8;
      _DAT_14cb0f858 = 0xffffffff;
      _DAT_14cb0f85c = (float)uVar2 * _DAT_14cb0f864;
      _DAT_14cb0f860 = (float)uVar4 * _DAT_14cb0f864;
      _DAT_14cb0f864 = (float)(uVar2 + uVar4 * 2) * _DAT_14cb0f864;
      if (*(char *)((longlong)plVar6 + 0x6d) != '\x01') {
        _DAT_14cb0f864 = -_DAT_14cb0f864;
      }
      if (DAT_14cb0f868 < 4) {
        DAT_14cb0f86c = 0;
        if (DAT_14cb0f868 < 2) {
          LOCK();
          DAT_14cb0f868 = 0;
          UNLOCK();
        }
        else {
          FUN_140d366d2(&DAT_14cb0f868);
        }
      }
      else {
        LOCK();
        DAT_14cb0f868 = DAT_14cb0f868 - 4;
        UNLOCK();
      }
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_38,L"Renderer",1);
        plVar6 = local_38;
        uVar13 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,plVar6);
      }
      (**(code **)(*DAT_14cad8310 + 0x158))
                (DAT_14cad8310,(longlong)plVar9 + 0x24,FUN_14378ff32,plVar9);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14377ffca FUN_14377ffca body=1397 status=ok
// SIG undefined FUN_14377ffca(void)

void FUN_14377ffca(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140265dc0();
  plVar9 = (longlong *)FUN_1447b4020(param_1);
  if ((plVar9 != (longlong *)0x0) && (lVar10 = (**(code **)(*plVar9 + 0x98))(plVar9), lVar10 != 0))
  {
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar11 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_143780036;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14378003b;
        goto LAB_143780063;
      }
    }
    else {
LAB_143780036:
      if (iVar6 != 0x10) {
LAB_143780063:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar11 + 0xc60), iVar6 == 2))
          goto LAB_14378003b;
          if (iVar6 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            if (DVar7 == DVar8) goto LAB_14378003b;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar13 = (uint *)*puVar2;
          if (puVar13 != (uint *)0x0) goto LAB_143780266;
          while( true ) {
            uVar15 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar15 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar15 | 1;
              __tlregdtor(&LAB_14379017d);
            }
            lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar12 = *(undefined4 **)(lVar11 + 0x310);
            *(undefined8 *)(lVar11 + 0x310) = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar12 = 0xffffffff;
            *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            FUN_140217a48(puVar2);
            puVar13 = (uint *)*puVar2;
LAB_143780266:
            puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x16);
            uVar15 = puVar13[0x12];
            if (puVar17 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar3 = *puVar13;
              *puVar13 = *puVar13 + uVar15 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar15) != 0xffffffff) break;
              puVar13 = (uint *)*puVar2;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
              puVar17 = (uint *)(puVar19 + 0x16);
              uVar15 = 0;
              if (puVar17 <= puVar13 + 0x4000) {
                uVar15 = 1;
                goto LAB_1437802e6;
              }
            }
          }
          uVar15 = uVar15 + 1;
LAB_1437802e6:
          *(uint **)(puVar13 + 0x10) = puVar17;
          puVar13[0x12] = uVar15;
          iVar6 = 0;
          FUN_1447247dc(puVar19,0);
          *puVar19 = &PTR_FUN_14ab08338;
          puVar19[0x15] = lVar10;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar15 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
              uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
              iVar6 = 0;
            }
            else {
              uVar18 = 2;
            }
          }
          else {
            iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar18 = 5;
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
          lVar10 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar10 == 0) {
            uVar4 = 1;
            if ((char)uVar18 != '\x06') {
              uVar4 = uVar18;
            }
            uVar18 = uVar4;
            uVar14 = 0;
          }
          else {
            if ((char)uVar18 == '\x06') {
              uVar18 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
            }
            uVar14 = *(undefined8 *)(lVar10 + 0x30);
          }
          puVar19[0xf] = uVar14;
          puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar19 + 0x1c) = iVar6;
          if (puVar19 == (undefined8 *)0x0) {
            local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
            local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
          local_78 = local_68;
          local_58 = (undefined ***)0x0;
          local_48 = &PTR_LAB_14ab08300;
          local_68[0] = &LAB_143790142;
          local_40 = lVar10;
          FUN_14005a792(&DAT_14ca9a440,L"AcquireVT",&DAT_14cb10510);
          if (local_68[0] != (undefined1 *)0x0) {
            pppuVar16 = local_58;
            if (local_58 == (undefined ***)0x0) {
              pppuVar16 = &local_48;
            }
            (*(code *)(*pppuVar16)[2])();
          }
        }
        goto LAB_1437800fa;
      }
    }
LAB_14378003b:
    FUN_14377fc9e(lVar10);
  }
LAB_1437800fa:
  if (((((*(int *)(param_1 + 0x15c) != 0) && (uVar15 = *(uint *)(param_1 + 0x158), -1 < (int)uVar15)
        ) && ((int)uVar15 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x15c))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      ((lVar10 = *plVar9, lVar10 != 0 && ((~*(byte *)(lVar10 + 0x9c) & 3) == 0)))))) {
    bVar5 = *(byte *)(lVar10 + 0x9d);
    if ((bVar5 & 1) != 0) {
      if ((*(longlong *)(lVar10 + 0xb0) != 0) || (lVar11 = FUN_1448abda6(lVar10), lVar11 != 0))
      goto LAB_1437801a5;
      bVar5 = *(byte *)(lVar10 + 0x9d);
    }
    *(byte *)(lVar10 + 0x9d) = bVar5 | 1;
    FUN_1401057d4(lVar10);
    FUN_14010586c(&DAT_14cad0140,lVar10);
  }
LAB_1437801a5:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143780540 FUN_143780540 body=69 status=ok
// SIG undefined FUN_143780540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780540(void)

{
  _DAT_14cb0f8b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143780582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f8b8,1);
  return;
}



// FUNCTION 143780585 FUN_143780585 body=69 status=ok
// SIG undefined FUN_143780585(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780585(void)

{
  _DAT_14cb0f8c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437805c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f8d0,1);
  return;
}



// FUNCTION 1437805ca FUN_1437805ca body=69 status=ok
// SIG undefined FUN_1437805ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437805ca(void)

{
  _DAT_14cb0f8e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f8e8,1);
  return;
}



// FUNCTION 14378060f FUN_14378060f body=69 status=ok
// SIG undefined FUN_14378060f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378060f(void)

{
  _DAT_14cb0f8f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143780651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f900,1);
  return;
}



// FUNCTION 143780654 FUN_143780654 body=69 status=ok
// SIG undefined FUN_143780654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780654(void)

{
  _DAT_14cb0f910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143780696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f918,1);
  return;
}



// FUNCTION 143780699 FUN_143780699 body=69 status=ok
// SIG undefined FUN_143780699(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780699(void)

{
  _DAT_14cb0f928 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437806db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0f930,1);
  return;
}



// FUNCTION 1437806de FUN_1437806de body=32 status=ok
// SIG undefined FUN_1437806de(void)

undefined8 FUN_1437806de(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
    return *(undefined8 *)(lVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001437806f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
  return uVar2;
}



// FUNCTION 1437806fe FUN_1437806fe body=101 status=ok
// SIG undefined FUN_1437806fe(void)

void FUN_1437806fe(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  switch(param_3) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(param_1 + 0x6c);
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar8 = *(undefined4 *)(param_1 + 0x7c);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    uVar4 = *(undefined4 *)(param_1 + 0x8c);
    uVar5 = *(undefined4 *)(param_1 + 0x90);
    uVar6 = *(undefined4 *)(param_1 + 0x94);
    uVar7 = *(undefined4 *)(param_1 + 0x98);
    uVar8 = *(undefined4 *)(param_1 + 0x9c);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
    uVar3 = *(undefined4 *)(param_1 + 0xa8);
    uVar4 = *(undefined4 *)(param_1 + 0xac);
    uVar5 = *(undefined4 *)(param_1 + 0xb0);
    uVar6 = *(undefined4 *)(param_1 + 0xb4);
    uVar7 = *(undefined4 *)(param_1 + 0xb8);
    uVar8 = *(undefined4 *)(param_1 + 0xbc);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    uVar3 = *(undefined4 *)(param_1 + 200);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    uVar5 = *(undefined4 *)(param_1 + 0xd0);
    uVar6 = *(undefined4 *)(param_1 + 0xd4);
    uVar7 = *(undefined4 *)(param_1 + 0xd8);
    uVar8 = *(undefined4 *)(param_1 + 0xdc);
    break;
  default:
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    goto LAB_143780746;
  }
  param_2[4] = uVar5;
  param_2[5] = uVar6;
  param_2[6] = uVar7;
  param_2[7] = uVar8;
LAB_143780746:
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  return;
}


