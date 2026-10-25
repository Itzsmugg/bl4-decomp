// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e7a652 FUN_140e7a652 body=228 status=ok
// SIG undefined FUN_140e7a652(void)

longlong FUN_140e7a652(void)

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
  if (DAT_14c9a5268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462ac690;
    local_38 = &LAB_1470c83a7;
    local_40 = &LAB_1462ac695;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x820;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineCharacter",&DAT_14c9a5268,&DAT_1470c83a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7a738 FUN_140e7a738 body=1889 status=ok
// SIG undefined FUN_140e7a738(void)

void FUN_140e7a738(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
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
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 0xa8);
    if (lVar5 == 0) goto LAB_140e7ad10;
    if (DAT_14cacf818 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = (code *)&LAB_1463b216c;
      local_98 = &LAB_1479977e3;
      local_a0 = (code *)&LAB_1463b2171;
      local_a8 = L"Game";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) !=
        DAT_14cacf818 + 0x30)) goto LAB_140e7ad10;
    lVar5 = FUN_1400b5618();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_140e7ad10;
  }
  if ((char)param_1[0x69] < '\0') {
    *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 0x20;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0x6a] = param_2;
    goto LAB_140e7ad10;
  }
  *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) & 0xdf;
  param_1[0x6a] = 0;
  lVar5 = param_1[0x22];
  if (lVar5 != 0) {
    lVar9 = lVar5;
    if (DAT_14cac6e60 == 0) {
      local_90 = &local_58;
      local_58 = FUN_144a7958c;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_142b47bc4;
      local_98 = &LAB_1478989f1;
      local_a0 = (code *)&LAB_146391124;
      local_a8 = L"Engine";
      local_b0 = 0x10000000000;
      local_b8 = 0x10000005;
      local_c0 = 0x10;
      local_c8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar9 = param_1[0x22];
      if (lVar9 == 0) goto LAB_140e7a874;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar6 = *(longlong *)(lVar9 + 0x10), lVar6 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
          == DAT_14cac6e60 + 0x30 && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) &&
        (*(char *)(lVar9 + 0x599) == '\x01')))) {
      FUN_141791564(&local_68);
      FUN_140e7a486(lVar9 + 0x599,param_1,local_68);
    }
  }
LAB_140e7a874:
  FUN_1417be2b4(param_1,param_2);
  lVar9 = param_1[0x3b];
  if (lVar9 == 0) {
LAB_140e7ab22:
    lVar6 = 0;
  }
  else {
    if (DAT_14cacf818 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = (code *)&LAB_1463b216c;
      local_98 = &LAB_1479977e3;
      local_a0 = (code *)&LAB_1463b2171;
      local_a8 = L"Game";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
      lVar9 = param_1[0x3b];
      if (lVar9 == 0) goto LAB_140e7ab22;
    }
    lVar6 = 0;
    if ((DAT_14cacf818 != 0) && (lVar1 = *(longlong *)(lVar9 + 0x10), lVar1 != 0)) {
      if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8)
          != DAT_14cacf818 + 0x30)) goto LAB_140e7ab22;
      lVar6 = lVar9;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
    }
  }
  param_1[0x3e] = lVar6;
  if (param_1[0x22] != lVar5) {
    (**(code **)(*param_1 + 0x750))();
    lVar5 = param_1[0x22];
  }
  if (lVar5 == 0) {
    (**(code **)(param_1[0x2f] + 0xf8))();
  }
  lVar5 = param_1[0x23];
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
    bVar3 = *(byte *)(param_1 + 0x69);
    if ((bVar3 & 0x40) != 0) {
      bVar8 = 0;
      goto LAB_140e7acb6;
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x34a) & 0x40) != 0) {
      FUN_141791564(&local_70);
      local_50 = local_70;
      if (param_1 == (longlong *)0x0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar4 = *(uint *)(lVar9 + 0x10);
          bVar13 = uVar4 == 0;
          if (bVar13) {
            *(uint *)(lVar9 + 0x10) = uVar10;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar13) {
            uVar4 = uVar10;
          }
        }
        uVar11 = (ulonglong)uVar4;
        if (local_70 == 0) {
          local_50 = 0;
        }
        else if (uVar4 == 0) {
          uVar11 = 0;
        }
        else if (((((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
                  (plVar7 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                  plVar7 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar7 + 2) == uVar4 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0))))
                && (*plVar7 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),local_70,1);
        }
      }
      FUN_140838726(lVar5 + 0x599,&local_60);
      local_58 = (code *)((ulonglong)uVar12 | uVar11 << 0x20);
      bVar3 = FUN_140a28ca8(lVar5,local_60);
      *(byte *)(lVar5 + 0x599) = *(byte *)(lVar5 + 0x599) | bVar3;
    }
    bVar3 = *(byte *)(param_1 + 0x69);
    if ((bVar3 & 0x40) != 0) {
      bVar8 = (*(byte *)(param_1[0x23] + 0x2d3) & 8) << 2;
LAB_140e7acb6:
      *(byte *)(param_1 + 0x69) = bVar3 & 0x9f | bVar8;
    }
  }
  if (((param_2 == 0) || ((*(byte *)((longlong)param_1 + 0x5b6) & 0x20) == 0)) ||
     ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) goto LAB_140e7ad10;
  lVar5 = param_1[0x16];
  if ((lVar5 == 0) &&
     (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
      (lVar5 = FUN_1447210f0(), lVar5 == 0)))) {
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      if (DAT_14cb10130 == 0) {
        local_90 = &local_58;
        local_58 = FUN_140754f84;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_147da9a76;
        local_a0 = FUN_1409f3105;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000000;
        local_c0 = 8;
        local_c8 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_140e7ad04;
    }
    lVar5 = 0;
  }
LAB_140e7ad04:
  if (*(longlong *)(lVar5 + 0x188) != 0) {
    FUN_1478ca664(*(longlong *)(lVar5 + 0x188),param_1,(int)param_1[0xc4]);
  }
LAB_140e7ad10:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7aeaa FUN_140e7aeaa body=41 status=ok
// SIG undefined FUN_140e7aeaa(void)

void FUN_140e7aeaa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 140e7aed4 FUN_140e7aed4 body=67 status=ok
// SIG undefined FUN_140e7aed4(void)

void FUN_140e7aed4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e7af18(param_2);
  *param_2 = &PTR_FUN_14b3184e0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  return;
}



// FUNCTION 140e7af18 FUN_140e7af18 body=875 status=ok
// SIG undefined FUN_140e7af18(void)

undefined8 * FUN_140e7af18(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b303990;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &PTR_FUN_14b3039d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x1010;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3b9cbb9e;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x13] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x15] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x1a] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar2 = DAT_14cb842e8;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 140e7b284 FUN_140e7b284 body=375 status=ok
// SIG undefined FUN_140e7b284(void)

void FUN_140e7b284(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b4862f0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x140;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0xa0);
  FUN_140e7b3fb(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e7b3fb FUN_140e7b3fb body=102 status=ok
// SIG undefined FUN_140e7b3fb(void)

void FUN_140e7b3fb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x160);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      FUN_1403c48c4(plVar1 + -0x17);
      if (plVar1[-0x1b] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x2e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e7b470 FUN_140e7b470 body=45 status=ok
// SIG undefined FUN_140e7b470(void)

undefined8 FUN_140e7b470(undefined8 param_1,int param_2)

{
  FUN_140c440ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140e7b49e FUN_140e7b49e body=285 status=ok
// SIG undefined FUN_140e7b49e(void)

undefined4
FUN_140e7b49e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144a73fdc(local_68,param_3,param_2);
  local_a8 = *(undefined8 *)(param_4 + 0x20);
  uStack_a0 = *(undefined8 *)(param_4 + 0x28);
  local_98 = *(undefined8 *)(param_4 + 0x30);
  local_c8 = local_58;
  uStack_c4 = uStack_54;
  uStack_c0 = uStack_50;
  uStack_bc = uStack_4c;
  local_b8 = local_48;
  uStack_b4 = uStack_44;
  uStack_b0 = uStack_40;
  uStack_ac = uStack_3c;
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  local_d8 = param_6;
  uVar3 = FUN_140e7b5bc(param_1,local_68[0],&local_c8,param_5);
  if (local_68[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68[0] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_68[0] + 0xc) == 0)) {
      pcVar2 = *(code **)*local_68[0];
      if ((pcVar2 == FUN_141724e50) || (pcVar2 == FUN_141724e26)) {
        *local_68[0] = &PTR_FUN_149f553e0;
        FUN_1400020a8();
      }
      else {
        (*pcVar2)(local_68[0],1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7b5bc FUN_140e7b5bc body=1111 status=ok
// SIG undefined FUN_140e7b5bc(void)

byte FUN_140e7b5bc(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  byte param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_3b8 [36];
  uint local_394;
  undefined8 local_390;
  undefined8 *local_388;
  undefined4 *local_380;
  undefined8 local_378 [13];
  ulonglong *local_310;
  double *local_308;
  undefined8 *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  double local_2c8;
  ulonglong local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [512];
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar16 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar16 = param_1;
  }
  lVar6 = *(longlong *)(lVar16 + 0x138);
  local_390 = param_2;
  local_388 = param_3;
  if (lVar6 == 0) {
    bVar7 = 0;
    goto LAB_140e7b82d;
  }
  local_58 = (undefined1 *)0x0;
  local_4c = 0x20;
  lVar17 = *(longlong *)(lVar6 + 0x40);
  uVar12 = *(uint *)(lVar17 + 0x88);
  uVar15 = (ulonglong)uVar12;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_50 = 0;
  local_380 = param_4;
  if (uVar12 < 0x21) {
    if (uVar15 != 0) goto LAB_140e7b655;
  }
  else {
    FUN_140e4bc70(local_258,uVar12);
LAB_140e7b655:
    uVar8 = 0;
    do {
      uVar12 = local_50;
      lVar10 = *(longlong *)(lVar17 + 0x80);
      if (*(longlong *)(lVar17 + 0x80) == 0) {
        lVar10 = lVar17 + 0x78;
      }
      uVar1 = *(undefined8 *)(lVar10 + uVar8 * 8);
      lVar10 = (longlong)(int)local_50;
      local_50 = local_50 + 1;
      if (local_4c < local_50) {
        FUN_146ef97fe(local_258,uVar12);
      }
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_258;
      }
      *(undefined8 *)(puVar5 + lVar10 * 0x10) = uVar1;
      *(longlong *)(puVar5 + lVar10 * 0x10 + 8) = lVar6;
      uVar8 = uVar8 + 1;
    } while (uVar15 != uVar8);
    lVar17 = *(longlong *)(lVar6 + 0x40);
  }
  puVar3 = local_380;
  dStack_2b0 = (double)*(float *)(lVar17 + 0x44);
  local_2b8 = (double)*(float *)(lVar17 + 0x40);
  local_2a8._8_4_ = SUB84((double)*(float *)(lVar17 + 0x4c),0);
  local_2a8._0_8_ = (double)*(float *)(lVar17 + 0x48);
  local_2a8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar17 + 0x4c) >> 0x20);
  local_298 = *(undefined8 *)(lVar17 + 0x20);
  uStack_290 = *(undefined8 *)(lVar17 + 0x28);
  local_288 = *(undefined8 *)(lVar17 + 0x30);
  uStack_280 = 0;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0x3ff0000000000000;
  local_268 = 0x3ff0000000000000;
  uStack_260 = 0;
  if (local_380 != (undefined4 *)0x0) {
    local_380[6] = 0;
  }
  if ((int)local_50 < 1) {
    bVar7 = 0;
  }
  else {
    bVar18 = true;
    uVar15 = 0;
    bVar7 = 0;
    local_394 = local_50;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_258;
      }
      local_2c0 = *(ulonglong *)(puVar5 + uVar15 * 0x10);
      if ((*(uint *)(local_2c0 + 0x54 + (ulonglong)((*(byte *)(local_2c0 + 8) & 3) == 0) * 8) &
          param_5 + 1) != 0) {
        lVar6 = *(longlong *)(lVar16 + 0x108);
        if (*(longlong *)(lVar16 + 0x108) == 0) {
          lVar6 = lVar16;
        }
        plVar2 = *(longlong **)(lVar6 + 0x170);
        if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
          uVar12 = ((uint)(local_2c0 >> 0x14) & 0xffff ^ (uint)(local_2c0 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          plVar14 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar14 = (longlong *)plVar2[8];
          }
          iVar13 = *(int *)((longlong)plVar14 +
                           (ulonglong)((int)plVar2[9] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
          if (iVar13 != -1) {
            do {
              lVar17 = *plVar2 + (longlong)iVar13 * 0x90;
              if (*(ulonglong *)(*plVar2 + (longlong)iVar13 * 0x90) == local_2c0) {
                if ((longlong *)(lVar17 + 0x10) != (longlong *)0x0 && lVar17 != 0) {
                  lVar6 = *(longlong *)(lVar17 + 0x10);
                }
                break;
              }
              iVar13 = *(int *)(lVar17 + 0x80);
            } while (iVar13 != -1);
          }
        }
        if (lVar6 == lVar16) {
          if (puVar3 == (undefined4 *)0x0) {
            local_2f8 = &local_2c0;
            uStack_2f0 = &local_2b8;
            puVar9 = local_388;
            puVar11 = local_378;
            for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            cVar4 = FUN_1400ccc48(local_390,local_378,&local_2f8);
            if (cVar4 != '\0') break;
          }
          else {
            local_310 = &local_2c0;
            local_308 = &local_2b8;
            local_300 = &local_2f8;
            puVar9 = local_388;
            puVar11 = local_378;
            for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            cVar4 = FUN_140e1240b(local_390);
            if ((cVar4 != '\0') && (bVar7 = 1, (double)(float)puVar3[6] < local_2c8)) {
              puVar3[6] = (float)local_2c8;
              *puVar3 = (undefined4)local_2f8;
              puVar3[1] = local_2f8._4_4_;
              puVar3[2] = (undefined4)uStack_2f0;
              puVar3[3] = uStack_2f0._4_4_;
              *(undefined8 *)(puVar3 + 4) = local_2e8;
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
      bVar18 = uVar15 < local_394;
    } while (uVar15 != local_394);
    bVar7 = bVar7 | bVar18;
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140e7b82d:
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 140e7ba14 FUN_140e7ba14 body=1122 status=ok
// SIG undefined FUN_140e7ba14(void)

void FUN_140e7ba14(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
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
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_28);
    }
  }
  uStack_30 = 0;
  uStack_29 = 0;
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
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_30);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        uStack_30 = (undefined7)uVar1;
        uStack_29 = (undefined1)((ulonglong)uVar1 >> 0x38);
        goto LAB_140e7bb6d;
      }
      (*pcVar2)(uVar1,param_2,&uStack_30);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
LAB_140e7bb6d:
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_31);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_31);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
      local_31 = (undefined1)uVar1;
      uStack_30 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_31);
    }
  }
  puVar4 = &local_31;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = CONCAT17(uStack_29,uStack_30);
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140e7be78(&local_48,local_28,&local_50,puVar4);
  if (DAT_14c950c29 == '\x01') {
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      FUN_1456cec3c(local_48);
    }
  }
  *param_3 = local_48;
  param_3[1] = local_40;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7be78 FUN_140e7be78 body=623 status=ok
// SIG undefined FUN_140e7be78(void)

longlong * FUN_140e7be78(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 1;
  if (param_2 == (longlong *)0x0) goto LAB_140e7bf67;
  lVar1 = *param_3;
  if (lVar1 == 0) {
LAB_140e7c032:
    lVar1 = 0;
  }
  else {
    if (DAT_14c950d78 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468b50ee;
      local_70 = FUN_1427f23a3;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      if (DAT_14c950d78 == 0) goto LAB_140e7c032;
    }
    if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14c950d78 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) !=
        DAT_14c950d78 + 0x30)) goto LAB_140e7c032;
    lVar1 = *param_3;
  }
  lVar1 = (**(code **)(*param_2 + 0x288))(param_2,lVar1);
  if (lVar1 == 0) goto LAB_140e7bf67;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = lVar1;
  lVar2 = *param_3;
  if (lVar2 == 0) {
LAB_140e7c0d4:
    lVar2 = 0;
  }
  else {
    if (DAT_14c950d78 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468b50ee;
      local_70 = FUN_1427f23a3;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      if (DAT_14c950d78 == 0) goto LAB_140e7c0d4;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c950d78 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) !=
        DAT_14c950d78 + 0x30)) goto LAB_140e7c0d4;
    lVar2 = *param_3;
  }
  lVar1 = FUN_144718840(lVar1,lVar2);
  param_1[1] = lVar1;
  uVar3 = 0;
LAB_140e7bf67:
  *param_4 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7c0e8 FUN_140e7c0e8 body=321 status=ok
// SIG undefined FUN_140e7c0e8(void)

longlong FUN_140e7c0e8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  lVar16 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_14689c22e();
      lVar16 = *(longlong *)(param_2 + 0x50);
    }
  }
  bVar15 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x50) = lVar16;
  lVar16 = *(longlong *)(param_2 + 0x58);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_14689c22e();
      lVar16 = *(longlong *)(param_2 + 0x58);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar16;
  uVar12 = *(undefined8 *)(param_2 + 0x68);
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  uVar14 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar13;
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  FUN_140e7c22a(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 140e7c22a FUN_140e7c22a body=106 status=ok
// SIG undefined FUN_140e7c22a(void)

void * FUN_140e7c22a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    }
    else {
      FUN_140e7c294(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140e7c294 FUN_140e7c294 body=101 status=ok
// SIG undefined FUN_140e7c294(void)

void FUN_140e7c294(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 2, 2 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1457ca0f4(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 140e7c2fa FUN_140e7c2fa body=565 status=ok
// SIG undefined FUN_140e7c2fa(void)

void FUN_140e7c2fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x108);
    lVar7 = 0;
    do {
      FUN_140e7c5aa(*(undefined8 *)(lVar6 + lVar7));
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  iVar3 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x118);
    lVar7 = 0;
    do {
      FUN_140e7c5aa(*(undefined8 *)(lVar6 + lVar7));
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  iVar3 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x128);
    lVar7 = 0;
    do {
      FUN_140e7c5aa(*(undefined8 *)(lVar6 + lVar7));
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  FUN_140e7c52f(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_140e7c57a(param_1 + 0x108);
  }
  FUN_140e7c52f(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_140e7c57a(param_1 + 0x118);
  }
  FUN_140e7c52f(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_140e7c57a(param_1 + 0x128);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_14891bfee();
    *(undefined8 *)(param_1 + 0xf8) = 0;
    plVar4 = *(longlong **)(param_1 + 0x100);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
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
  lVar6 = *(longlong *)(param_1 + 0x138);
  iVar3 = *(int *)(param_1 + 0x140);
  uVar5 = 0;
  if ((longlong)iVar3 != 0) {
    lVar7 = 0;
    do {
      FUN_14891b99e(*(undefined8 *)(lVar6 + lVar7));
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
    uVar5 = *(undefined4 *)(param_1 + 0x140);
    lVar6 = *(longlong *)(param_1 + 0x138);
  }
  FUN_140e7c646(lVar6,uVar5);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_1489190a0(param_1 + 0x138,0);
    return;
  }
  return;
}



// FUNCTION 140e7c52f FUN_140e7c52f body=75 status=ok
// SIG undefined FUN_140e7c52f(void)

void FUN_140e7c52f(longlong param_1,int param_2)

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



// FUNCTION 140e7c57a FUN_140e7c57a body=48 status=ok
// SIG undefined FUN_140e7c57a(void)

void FUN_140e7c57a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140e7c5aa FUN_140e7c5aa body=104 status=ok
// SIG undefined FUN_140e7c5aa(void)

void FUN_140e7c5aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140e7c60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e7c61c FUN_140e7c61c body=42 status=ok
// SIG undefined FUN_140e7c61c(void)

void FUN_140e7c61c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3a4940;
  FUN_1407e878c(param_1 + 0x80);
  FUN_140e7c694(param_1 + 0x10);
  return;
}



// FUNCTION 140e7c646 FUN_140e7c646 body=77 status=ok
// SIG undefined FUN_140e7c646(void)

void FUN_140e7c646(longlong param_1,int param_2)

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



// FUNCTION 140e7c694 FUN_140e7c694 body=196 status=ok
// SIG undefined FUN_140e7c694(void)

void FUN_140e7c694(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b3a48c0;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar2 = param_1 + 6;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 10) * 0x120))
  ;
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 9)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 9)) {
    FUN_1400020a8(*plVar2);
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e7c754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e7c766 FUN_140e7c766 body=59 status=ok
// SIG undefined FUN_140e7c766(void)

undefined8 * FUN_140e7c766(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00bd50;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e7c7b0 FUN_140e7c7b0 body=36 status=ok
// SIG undefined FUN_140e7c7b0(void)

undefined8 FUN_140e7c7b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140e7c7e0 FUN_140e7c7e0 body=412 status=ok
// SIG undefined FUN_140e7c7e0(void)

undefined8 * FUN_140e7c7e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4bffe0;
  param_1[0x1f] = &PTR_LAB_14a4c0350;
  FUN_140e7c97e(param_1 + 0x20);
  param_1[0x59] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3ff00000;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x3ff00000;
  param_1[0x6c] = 0x3ff0000000000000;
  param_1[0x6d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x28c) = *(byte *)((longlong)param_1 + 0x28c) & 0xfe;
  param_1[0x52] = DAT_14cab53b0;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  local_28 = 0x7b5ae74c;
  uStack_24 = 0xd2704c10;
  uStack_20 = 0xa9585798;
  uStack_1c = 0xb212a5a;
  iVar5 = FUN_1448a256a(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = '\x02' - (iVar5 < 6);
  uVar1 = DAT_14c8464e8;
  param_1[0x53] = DAT_14c8464e0;
  param_1[0x54] = uVar1;
  param_1[0x55] = DAT_14c8464f0;
  param_1[0x58] = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  param_1[0x56] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  param_1[0x57] = uVar1;
  param_1[0x59] = 0;
  param_1[0x5c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x5a] = DAT_14c8464e0;
  param_1[0x5b] = uVar1;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x5d) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar2;
  *(undefined4 *)(param_1 + 0x5e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar4;
  param_1[0x5f] = DAT_14c846508;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0x80 | 0xb;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7c97e FUN_140e7c97e body=167 status=ok
// SIG undefined FUN_140e7c97e(void)

undefined8 * FUN_140e7c97e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  FUN_1406ed278(param_1 + 7);
  *param_1 = 0;
  param_1[6] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 **)((longlong)param_1 + 0x14c) = &DAT_ff7fffffff7fffff;
  param_1[3] = 0x3ff0000000000000;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x24) = DAT_14cab53b0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14a) = 2;
  return param_1;
}



// FUNCTION 140e7ca26 FUN_140e7ca26 body=256 status=ok
// SIG undefined FUN_140e7ca26(void)

void FUN_140e7ca26(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [24];
  longlong local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  char local_d6;
  longlong *local_48;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140cf02e4(param_2,local_148);
  if (local_130 != 0) {
    uVar3 = FUN_140e7cbd2(param_1,local_148);
    FUN_140e7cb28(param_2,uVar3);
  }
  *param_2 = 0x7fffffff;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_d6 == '\x01') {
    local_d6 = '\0';
  }
  if (local_118 != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7cb28 FUN_140e7cb28 body=169 status=ok
// SIG undefined FUN_140e7cb28(void)

void FUN_140e7cb28(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  
  puVar4 = (uint *)(param_1 + 0x140);
  if (*(uint **)(param_1 + 0x300) != (uint *)0x0) {
    puVar4 = *(uint **)(param_1 + 0x300);
  }
  if (param_2 == 0) {
    *puVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *puVar4 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar3 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
    }
  }
  puVar4[1] = uVar2;
  return;
}



// FUNCTION 140e7cbd2 FUN_140e7cbd2 body=140 status=ok
// SIG undefined FUN_140e7cbd2(void)

undefined8 FUN_140e7cbd2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [64];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140e7cc9e(param_1,local_a8,param_2);
  uVar1 = FUN_140e7cc60(param_1,param_2,local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7cc60 FUN_140e7cc60 body=62 status=ok
// SIG undefined FUN_140e7cc60(void)

longlong FUN_140e7cc60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140e7cf58();
  if (lVar1 != 0) {
    FUN_140e7cdd6();
    FUN_140e7d272(param_1,param_2,lVar1);
  }
  return lVar1;
}



// FUNCTION 140e7cc9e FUN_140e7cc9e body=311 status=ok
// SIG undefined FUN_140e7cc9e(void)

undefined8 * FUN_140e7cc9e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 6) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 8;
  param_2[8] = 0;
  param_2[10] = 0;
  *(byte *)((longlong)param_2 + 0x32) = *(byte *)((longlong)param_2 + 0x32) & 0xe0 | 6;
  puVar6 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar2 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar2);
    DAT_14c947fe0 = lVar2;
  }
  FUN_140045924(DAT_14c947fe0,param_2,puVar6,1);
  *(undefined1 *)((longlong)param_2 + 0x33) = 3;
  if (*(char *)(param_3 + 0x72) == '\x01') {
    puVar5 = (undefined1 *)(param_3 + 0x71);
  }
  else {
    puVar5 = (undefined1 *)(param_1 + 0x25);
  }
  *(undefined1 *)(param_2 + 6) = *puVar5;
  param_2[2] = *(undefined8 *)(param_3 + 0xe8);
  param_2[3] = *(undefined8 *)(param_3 + 0xf0);
  if (*(int *)(param_3 + 0x10c) != 0) {
    uVar1 = *(uint *)(param_3 + 0x108);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e7cd8f;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_3 + 0x10c) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140e7cd8f;
    }
  }
  uVar3 = 0;
LAB_140e7cd8f:
  param_2[4] = uVar3;
  return param_2;
}



// FUNCTION 140e7cdd6 FUN_140e7cdd6 body=384 status=ok
// SIG undefined FUN_140e7cdd6(void)

void FUN_140e7cdd6(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    pcVar2 = *(code **)(param_2 + 0xc);
    if (pcVar2 != (code *)0x0) {
      plVar8 = (longlong *)(param_2 + 0x14);
      if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_2 + 0x10);
      }
      local_30 = param_3;
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar7,&local_30);
    }
    uVar7 = FUN_1401b0f18();
    plVar8 = (longlong *)FUN_144718840(param_3,uVar7);
    lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
    *(undefined8 *)(lVar9 + 200) = *(undefined8 *)(param_2 + 4);
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(lVar9 + 0xb8) = *param_2;
    *(undefined4 *)(lVar9 + 0xbc) = uVar3;
    *(undefined4 *)(lVar9 + 0xc0) = uVar4;
    *(undefined4 *)(lVar9 + 0xc4) = uVar5;
    if (*(longlong *)(param_2 + 0x38) == 0) {
      *(undefined4 *)(lVar9 + 0xd0) = 0;
      iVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x38) + 0xc);
      *(uint *)(lVar9 + 0xd0) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar6 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar6 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar10;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar6 = iVar10;
        }
      }
    }
    *(int *)(lVar9 + 0xd4) = iVar6;
    lVar11 = *(longlong *)(param_2 + 0x3e);
    if (lVar11 != 0) {
      local_38 = *(longlong *)(param_2 + 0x40);
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      local_40 = lVar11;
      FUN_1405f862c(lVar9,&local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7cf58 FUN_140e7cf58 body=793 status=ok
// SIG undefined FUN_140e7cf58(void)

longlong FUN_140e7cf58(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined1 local_1a0 [24];
  longlong local_188;
  undefined8 uStack_180;
  undefined ***local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined **local_168 [3];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  code *local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [2];
  longlong *local_b8 [2];
  longlong local_a8 [4];
  longlong local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(longlong *)(param_2 + 0x18) == 0) ||
     ((*(byte *)(*(longlong *)(param_2 + 0x18) + 0x155) & 0x20) != 0)) {
    lVar4 = 0;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x80))();
    if (cVar3 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x150))(param_1,param_2);
    }
    uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    local_c8[0] = param_3[8];
    local_b8[0] = (longlong *)0x0;
    if (param_3[8] == 0) {
      local_118 = param_3[6];
      local_128 = param_3[4];
      uStack_120 = param_3[5];
      local_138 = param_3[2];
      uStack_130 = param_3[3];
      local_148 = *param_3;
      uStack_140 = param_3[1];
      local_108 = (code *)0x0;
      local_f8 = (undefined ***)0x0;
    }
    else {
      puVar6 = (undefined8 *)param_3[10];
      if ((undefined8 *)param_3[10] == (undefined8 *)0x0) {
        puVar6 = param_3 + 0xc;
      }
      (**(code **)*puVar6)(puVar6,local_b8);
      local_108 = (code *)param_3[8];
      local_118 = param_3[6];
      local_128 = param_3[4];
      uStack_120 = param_3[5];
      local_138 = param_3[2];
      uStack_130 = param_3[3];
      local_148 = *param_3;
      uStack_140 = param_3[1];
      local_f8 = (undefined ***)0x0;
      if (local_108 != (code *)0x0) {
        puVar6 = param_3 + 0xc;
        if ((undefined8 *)param_3[10] != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)param_3[10];
        }
        (**(code **)*puVar6)(puVar6,&local_f8);
      }
    }
    local_178 = local_f8;
    local_188 = (longlong)local_108;
    local_58 = local_d8;
    uStack_50 = uStack_d0;
    uVar2 = uStack_50;
    local_68 = local_e8;
    plStack_60 = plStack_e0;
    local_78 = local_f8;
    uStack_70 = uStack_f0;
    uVar1 = uStack_70;
    local_88 = (longlong)local_108;
    uStack_80 = uStack_100;
    local_d8 = local_c8;
    local_e8 = &PTR_LAB_14ab63460;
    plStack_e0 = param_1;
    local_f8 = (undefined ***)0x0;
    local_108 = FUN_1437e92fa;
    uStack_100 = uStack_180;
    uStack_70._0_4_ = (undefined4)uStack_f0;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
    uStack_50._0_4_ = (undefined4)uStack_d0;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    uStack_150 = (undefined4)uStack_50;
    uStack_14c = uStack_50._4_4_;
    uStack_170 = (undefined4)uStack_70;
    uStack_16c = uStack_70._4_4_;
    uStack_50 = uVar2;
    if (local_188 != 0) {
      pppuVar7 = local_178;
      if (local_178 == (undefined ***)0x0) {
        pppuVar7 = local_168;
      }
      uStack_70 = uVar1;
      (*(code *)(*pppuVar7)[2])();
    }
    local_188 = *(longlong *)(param_2 + 0xa0);
    uStack_180 = *(undefined8 *)(param_2 + 0xa8);
    local_178 = *(undefined ****)(param_2 + 0xb0);
    local_88 = *(longlong *)(param_2 + 0x80);
    uStack_80 = *(undefined8 *)(param_2 + 0x88);
    local_78 = *(undefined ****)(param_2 + 0x90);
    uStack_70 = *(undefined8 *)(param_2 + 0x98);
    FUN_1448052ee(&local_88,local_1a0);
    if (lVar4 == 0) {
      local_1a8 = &local_148;
      lVar4 = FUN_141137228(*(undefined8 *)(param_2 + 0x18),uVar5,&local_188,local_1a0);
    }
    if (local_108 != (code *)0x0) {
      pppuVar7 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar7 = &local_e8;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    if (local_c8[0] != 0) {
      plVar8 = local_b8[0];
      if (local_b8[0] == (longlong *)0x0) {
        plVar8 = local_a8;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7d272 FUN_140e7d272 body=1362 status=ok
// SIG undefined FUN_140e7d272(void)

void FUN_140e7d272(longlong param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  double *pdVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined1 local_148 [24];
  double local_130;
  longlong *plStack_128;
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined1 *local_98;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_3 != (longlong *)0x0) {
    local_118 = *(undefined1 (*) [16])(param_2 + 0x80);
    local_108 = *(double *)(param_2 + 0x90);
    dStack_100 = *(double *)(param_2 + 0x98);
    puVar9 = local_118;
    dVar8 = (double)FUN_1448052ee(local_118,local_148);
    uVar13 = SUB84(puVar9,0);
    lVar18 = param_3[0x39];
    if (lVar18 == 0) {
      uVar20 = (undefined4)DAT_14c8464f0;
      uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_158 = DAT_14c846508;
      local_168 = (undefined4)DAT_14c8464f8;
      uStack_164 = DAT_14c8464f8._4_4_;
      uStack_160 = (undefined4)DAT_14c846500;
      uStack_15c = DAT_14c846500._4_4_;
      uVar22 = (undefined4)DAT_14c8464e0;
      uVar23 = DAT_14c8464e0._4_4_;
      uVar24 = (undefined4)DAT_14c8464e8;
      uVar25 = DAT_14c8464e8._4_4_;
    }
    else {
      uVar20 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
      uVar22 = *(undefined4 *)(lVar18 + 0x260);
      uVar23 = *(undefined4 *)(lVar18 + 0x264);
      uVar24 = *(undefined4 *)(lVar18 + 0x268);
      uVar25 = *(undefined4 *)(lVar18 + 0x26c);
      dVar1 = *(double *)*(undefined1 (*) [16])(lVar18 + 0x240);
      dVar2 = *(double *)(lVar18 + 0x248);
      local_118 = *(undefined1 (*) [16])(lVar18 + 0x240);
      dVar5 = *(double *)(lVar18 + 0x250);
      dVar6 = *(double *)(lVar18 + 600);
      local_108 = dVar5;
      dStack_100 = dVar6;
      pdVar16 = *(double **)(lVar18 + 0x228);
      if (pdVar16 == (double *)0x0) {
        uVar13 = 0x40;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar8 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar8;
        dVar8 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar8;
        dVar8 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar16[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar16[5] = dVar8;
        dVar8 = DAT_14c846508;
        pdVar16[6] = DAT_14c846508;
        *(double **)(lVar18 + 0x228) = pdVar16;
      }
      lVar18 = -(ulonglong)(dVar2 != pdVar16[1]);
      lVar19 = -(ulonglong)(dVar6 != pdVar16[3]);
      auVar3._8_4_ = (int)lVar18;
      auVar3._0_8_ = -(ulonglong)(dVar1 != *pdVar16);
      auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar7 = movmskpd(SUB84(dVar8,0),auVar3);
      auVar4._8_4_ = (int)lVar19;
      auVar4._0_8_ = -(ulonglong)(dVar5 != pdVar16[2]);
      auVar4._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar14 = movmskpd(uVar13,auVar4);
      if ((uVar14 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar16[2] = local_108;
        pdVar16[3] = dStack_100;
        *(undefined4 *)pdVar16 = local_118._0_4_;
        *(undefined4 *)((longlong)pdVar16 + 4) = local_118._4_4_;
        *(undefined4 *)(pdVar16 + 1) = local_118._8_4_;
        *(undefined4 *)((longlong)pdVar16 + 0xc) = local_118._12_4_;
        FUN_1448052ee(local_118,&local_130);
        pdVar16[6] = local_120;
        pdVar16[4] = local_130;
        pdVar16[5] = (double)plStack_128;
      }
      local_158 = pdVar16[6];
      local_168 = *(undefined4 *)(pdVar16 + 4);
      uStack_164 = *(undefined4 *)((longlong)pdVar16 + 0x24);
      uStack_160 = *(undefined4 *)(pdVar16 + 5);
      uStack_15c = *(undefined4 *)((longlong)pdVar16 + 0x2c);
    }
    dVar8 = (double)CONCAT44(uVar23,uVar22);
    dVar1 = (double)CONCAT44(uVar21,uVar20);
    dVar2 = (double)CONCAT44(uVar25,uVar24);
    if (*(char *)(param_1 + 0x24) == '\x01') {
      (**(code **)(*param_3 + 0x528))(param_3,local_118,&local_130);
      local_108 = (double)local_130._0_4_;
      local_118 = ZEXT816(0);
      FUN_1401c9a0e(&local_168,&local_130,local_118);
      dVar8 = local_130 + (double)CONCAT44(uVar23,uVar22);
      dVar2 = (double)CONCAT44(uVar25,uVar24) + (double)plStack_128;
      dVar1 = (double)CONCAT44(uVar21,uVar20) + local_120;
    }
    local_178 = local_158;
    local_188 = local_168;
    uStack_184 = uStack_164;
    uStack_180 = uStack_160;
    uStack_17c = uStack_15c;
    lVar18 = param_3[0x39];
    if (lVar18 != 0) {
      local_108 = dVar1 - *(double *)(lVar18 + 0x270);
      dVar2 = dVar2 - *(double *)(lVar18 + 0x268);
      local_118._8_4_ = SUB84(dVar2,0);
      local_118._0_8_ = dVar8 - *(double *)(lVar18 + 0x260);
      local_118._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      FUN_1407fd932(lVar18,local_118,&local_188);
    }
    if ((*(char *)(param_1 + 0x26) == '\0') && (lVar18 = param_3[0x39], lVar18 != 0)) {
      dVar8 = *(double *)(lVar18 + 0x288) * *(double *)(param_2 + 200);
      local_108 = *(double *)(lVar18 + 0x290) * *(double *)(param_2 + 0xd0);
      local_118._8_4_ = SUB84(dVar8,0);
      local_118._0_8_ = *(double *)(lVar18 + 0x280) * *(double *)(param_2 + 0xc0);
      local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      FUN_141226a1c();
    }
    plVar17 = *(longlong **)(param_2 + 0x28);
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0xa70))(plVar17,param_3);
    }
    if ((*(byte *)((longlong)param_3 + 100) & 1) == 0) {
      puVar15 = &DAT_14c846480;
      if (param_3[0x39] != 0) {
        puVar15 = (undefined8 *)(param_3[0x39] + 0x240);
      }
      local_1a8 = local_1a8 & 0xffffffffffffff00;
      FUN_14113775c(param_3,puVar15,1);
    }
    plVar17 = *(longlong **)(param_2 + 0xe0);
    if ((plVar17 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x28) == 0)) {
      (**(code **)(*plVar17 + 0xa18))(plVar17,param_3);
    }
    local_98 = (undefined1 *)0x0;
    local_90 = 0x1000000001;
    local_118._0_8_ = param_3;
    plVar17 = (longlong *)param_3[0x36];
    if (plVar17 != (longlong *)0x0) {
      local_90._0_4_ = 1;
      while( true ) {
        puVar9 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar9 = local_118;
        }
        lVar18 = (longlong)(int)local_90;
        if ((int)local_90 != 0) {
          lVar19 = 0;
          do {
            if (*(longlong **)(puVar9 + lVar19) == plVar17) goto LAB_140e7d724;
            lVar19 = lVar19 + 8;
          } while (lVar18 * 8 - lVar19 != 0);
        }
        uVar14 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,uVar14);
        if (local_90._4_4_ < uVar14) {
          FUN_147e216c0(local_118);
        }
        puVar9 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar9 = local_118;
        }
        *(longlong **)(puVar9 + lVar18 * 8) = plVar17;
        uVar10 = FUN_1401b0f18();
        plVar11 = (longlong *)(**(code **)(*plVar17 + 0x288))(plVar17,uVar10);
        if (plVar11 != (longlong *)0x0) {
          uVar10 = FUN_1401b0f18();
          plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
          if ((((((plVar11 != plVar12) && (plVar12 != (longlong *)0x0)) &&
                (lVar18 = (**(code **)(*plVar12 + 0x28))(plVar12), lVar18 != 0)) &&
               ((*(int *)(lVar18 + 0x74) != 0 &&
                (uVar14 = *(uint *)(lVar18 + 0x70), -1 < (int)uVar14)))) &&
              (((int)uVar14 < DAT_14c9647dc &&
               ((pdVar16 = (double *)
                           ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                pdVar16 != (double *)0x0 && (*(int *)(pdVar16 + 2) == *(int *)(lVar18 + 0x74)))))))
             && ((((ulonglong)pdVar16[1] & 0x10200000) == 0 && (dVar8 = *pdVar16, dVar8 != 0.0)))) {
            FUN_1437e8e50(lVar18,dVar8,param_3);
            local_130 = dVar8;
            plStack_128 = param_3;
            FUN_1447cd2ec(lVar18 + 0x18,&local_130);
          }
        }
        plVar17 = (longlong *)plVar17[0x36];
        if (plVar17 == (longlong *)0x0) break;
      }
LAB_140e7d724:
      if (local_98 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7d7d4 FUN_140e7d7d4 body=31 status=ok
// SIG undefined FUN_140e7d7d4(void)

undefined8 FUN_140e7d7d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e7d7f4 FUN_140e7d7f4 body=297 status=ok
// SIG undefined FUN_140e7d7f4(void)

undefined8 *
FUN_140e7d7f4(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  
  plVar9 = (longlong *)(param_1 + 0xc0);
  if (*(char *)(param_3 + 0x10) == '\0') {
    plVar9 = (longlong *)(param_1 + 0x110);
  }
  iVar3 = *(int *)(param_4 + 1);
  uVar7 = 0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar3 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_4;
    }
    lVar10 = 0;
    uVar7 = 0;
    do {
      uVar8 = ((uint)(ushort)puVar4[lVar10] + (uint)(0x19 < (ushort)puVar4[lVar10] - 0x61) * 0x20) -
              0x20;
      uVar11 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar10 = lVar10 + 1;
    } while (iVar6 != (int)lVar10);
  }
  iVar3 = FUN_140e7d91e(plVar9,uVar7,param_4);
  if (iVar3 == -1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar10 = *plVar9 + (longlong)iVar3 * 0x38;
    if ((lVar10 != 0) && (*plVar9 + (longlong)iVar3 * 0x38 != -0x10)) {
      uVar5 = *(undefined8 *)(lVar10 + 0x20);
      plVar9 = *(longlong **)(lVar10 + 0x28);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *param_2 = uVar5;
        param_2[1] = plVar9;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return param_2;
      }
    }
  }
  *param_2 = uVar5;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e7d91e FUN_140e7d91e body=186 status=ok
// SIG undefined FUN_140e7d91e(void)

int FUN_140e7d91e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140e7d961:
      lVar11 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_140e7d9b3;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_140e7d9b3;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140e7d9b9;
    }
  }
  return -1;
LAB_140e7d9b3:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_140e7d9b9:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140e7d961;
}



// FUNCTION 140e7e0ee FUN_140e7e0ee body=254 status=ok
// SIG undefined FUN_140e7e0ee(void)

void FUN_140e7e0ee(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x150) == 0) ||
     (bVar1 = true, *(char *)(*(longlong *)(param_1 + 0x150) + 0x178) != '\x03')) {
    if ((int)param_3 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa8) <= (int)param_3) {
      return;
    }
    if (param_4 < *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x6c + (ulonglong)param_3 * 0x170)) {
      return;
    }
    bVar1 = false;
  }
  lVar2 = FUN_140e7e1ec(param_1,param_3,param_2);
  if (((bVar1) && (lVar2 != 0)) && (lVar2 != param_2)) {
    FUN_145810f82(lVar2,1);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0xa8))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_3 * 0x170);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    if (((lVar2 != param_2 && lVar2 != 0) && ((*(byte *)(lVar2 + 0x65) & 2) == 0)) &&
       ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
      return;
    }
  }
  FUN_140e7e2ce(param_1,param_3);
  return;
}



// FUNCTION 140e7e1ec FUN_140e7e1ec body=226 status=ok
// SIG undefined FUN_140e7e1ec(void)

longlong FUN_140e7e1ec(longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x150) != 0) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = (ulonglong)param_2 * 0x170;
    if ((*(byte *)(lVar2 + 0x68 + lVar3) & 1) != 0) {
      lVar1 = *(longlong *)(lVar2 + lVar3 + 0x28);
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        lVar2 = *(longlong *)(param_1 + 0xa0);
      }
      if (lVar1 != param_3 && lVar1 != 0) {
        FUN_140e7ecae(param_1,lVar2 + lVar3);
        lVar2 = *(longlong *)(param_1 + 0xa0);
      }
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar2 + lVar3 + 0x28) = param_3;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x6c + lVar3) = param_4;
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140e7e2ce FUN_140e7e2ce body=2368 status=ok
// SIG undefined FUN_140e7e2ce(void)

void FUN_140e7e2ce(longlong param_1,uint param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
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
  uint local_74;
  longlong local_70;
  longlong *local_68;
  code *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((int)param_2 < 0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) ||
      (lVar16 = *(longlong *)(param_1 + 0x150), lVar16 == 0)) ||
     ((*(byte *)(lVar16 + 0x65) & 2) != 0)) goto LAB_140e7e70f;
  lVar14 = (ulonglong)param_2 * 0x170;
  local_70 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar14);
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_70);
    lVar16 = *(longlong *)(param_1 + 0x150);
  }
  if (DAT_14cb94538 == 0) {
    local_90 = &local_60;
    local_60 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_148a18249;
    local_a0 = FUN_14657713c;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  local_68 = (longlong *)FUN_144718840(lVar16,DAT_14cb94538);
  if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar14) == 0) {
LAB_140e7e73d:
    uVar8 = FUN_140e7ec10(param_1,param_2);
  }
  else {
    FUN_140e7ecae(param_1,*(longlong *)(param_1 + 0xa0) + lVar14);
    lVar16 = *(longlong *)(param_1 + 0xa0);
    lVar15 = *(longlong *)(lVar16 + 0x28 + lVar14);
    if ((*(byte *)(lVar15 + 0x3e0) & 2) == 0) {
      lVar16 = *(longlong *)(param_1 + 0x150);
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar4 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar9;
      *(undefined ***)local_60 = &PTR_FUN_14b4a9a90;
      *(longlong *)(local_60 + 0x18) = 0;
      iVar12 = 0;
      if (lVar16 != 0) {
        uVar10 = *(uint *)(lVar16 + 0xc);
        *(uint *)(local_60 + 0x18) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar12 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar12 = *(int *)(lVar16 + 0x10);
          bVar17 = iVar12 == 0;
          if (bVar17) {
            *(int *)(lVar16 + 0x10) = iVar7;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar12 = iVar7;
          }
        }
      }
      *(int *)(pcVar4 + 0x1c) = iVar12;
      *(uint *)(pcVar4 + 0x20) = param_2;
      *(longlong *)(pcVar4 + 0x28) = param_1;
      FUN_1448b6402(lVar15 + 0x3b8,&local_50,&local_60);
      if (local_58 == 0) {
LAB_140e7e842:
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_60 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
        goto LAB_140e7e842;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x98 + lVar14) = local_50;
      lVar16 = *(longlong *)(param_1 + 0xa0);
      uVar11 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
    }
    else {
      uVar11 = 0;
    }
    uVar10 = (uint)uVar11;
    cVar6 = (**(code **)(*local_68 + 0xb8))
                      (local_68,param_2,*(undefined8 *)(lVar16 + lVar14 + 0x28));
    if (cVar6 == '\0') {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0xa0) + 0x68 + lVar14);
      *pbVar2 = *pbVar2 | 4;
      lVar16 = *(longlong *)(param_1 + 0xa0);
      lVar15 = *(longlong *)(param_1 + 0x150);
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar4 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar9;
      *(undefined ***)local_60 = &PTR_FUN_14b4a9b00;
      *(undefined8 *)(local_60 + 0x18) = 0;
      iVar12 = 0;
      if (lVar15 != 0) {
        uVar10 = *(uint *)(lVar15 + 0xc);
        *(uint *)(local_60 + 0x18) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar12 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar12 = *(int *)(lVar15 + 0x10);
          bVar17 = iVar12 == 0;
          if (bVar17) {
            *(int *)(lVar15 + 0x10) = iVar7;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar12 = iVar7;
          }
        }
      }
      *(int *)(pcVar4 + 0x1c) = iVar12;
      *(uint *)(pcVar4 + 0x20) = param_2;
      *(longlong *)(pcVar4 + 0x28) = param_1;
      FUN_1448b6402(lVar16 + lVar14 + 0xa8,&local_50,&local_60);
      if (local_58 == 0) {
LAB_140e7e4e3:
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_60 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
        goto LAB_140e7e4e3;
      }
      uVar10 = (uint)CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
LAB_140e7e4f6:
      lVar16 = *(longlong *)(param_1 + 0x150);
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar14);
      local_60 = (code *)0x0;
      local_58 = 0;
      local_74 = uVar10;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar4 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14a3a3510;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar9;
      *(undefined ***)local_60 = &PTR_FUN_14b4a9b70;
      *(longlong *)(local_60 + 0x18) = 0;
      iVar12 = 0;
      if (lVar16 != 0) {
        uVar10 = *(uint *)(lVar16 + 0xc);
        *(uint *)(local_60 + 0x18) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar12 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar12 = *(int *)(lVar16 + 0x10);
          bVar17 = iVar12 == 0;
          if (bVar17) {
            *(int *)(lVar16 + 0x10) = iVar7;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar12 = iVar7;
          }
        }
      }
      *(int *)(pcVar4 + 0x1c) = iVar12;
      *(uint *)(pcVar4 + 0x20) = param_2;
      *(longlong *)(pcVar4 + 0x28) = param_1;
      if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar6 == '\0')) {
        if (local_58 == 0) {
          uVar8 = 0;
          goto LAB_140e7e6ca;
        }
        if (local_60 != (code *)0x0) {
          uVar8 = 0;
          (*(code *)**(undefined8 **)local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          goto LAB_140e7e6b3;
        }
        uVar8 = 0;
        uVar11 = (ulonglong)local_74;
      }
      else {
        plVar1 = (longlong *)(lVar15 + 0x2b8);
        if (*(int *)(lVar15 + 0x2cc) < 1) {
          iVar12 = *(int *)(lVar15 + 0x2c0);
          iVar7 = *(int *)(lVar15 + 0x2c8) + -1;
          *(int *)(lVar15 + 0x2c8) = iVar7;
          if (iVar7 <= iVar12) {
            iVar7 = iVar12;
            if (0 < iVar12) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar1 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar13 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar1,iVar13);
                  FUN_14005b248(plVar1);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar7 = *(int *)(lVar15 + 0x2c0);
              } while (iVar13 < iVar7);
            }
            iVar13 = 2;
            if (2 < iVar7 * 2) {
              iVar13 = iVar7 * 2;
            }
            *(int *)(lVar15 + 0x2c8) = iVar13;
            if ((iVar13 < iVar12) && (*(int *)(lVar15 + 0x2c4) != iVar7)) {
              FUN_14045812c();
            }
          }
        }
        uVar8 = 0;
        if ((local_58 != 0) && (local_60 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
          uVar8 = local_50;
        }
        iVar12 = *(int *)(lVar15 + 0x2c0);
        *(uint *)(lVar15 + 0x2c0) = iVar12 + 1U;
        if (*(uint *)(lVar15 + 0x2c4) < iVar12 + 1U) {
          FUN_1447a71f6(plVar1,iVar12);
        }
        lVar16 = *plVar1;
        lVar15 = (longlong)iVar12 * 0x10;
        *(undefined8 *)(lVar16 + lVar15) = 0;
        *(undefined4 *)(lVar16 + 8 + lVar15) = 0;
        *(code **)(lVar16 + lVar15) = local_60;
        local_60 = (code *)0x0;
        *(int *)(lVar16 + 8 + lVar15) = local_58;
LAB_140e7e6b3:
        local_58 = 0;
LAB_140e7e6ca:
        uVar11 = (ulonglong)local_74;
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa0 + lVar14) = uVar8;
    }
    else if ((char)uVar11 != '\0') goto LAB_140e7e4f6;
    if ((char)uVar11 == '\0') goto LAB_140e7e73d;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar14) = 0;
    uVar8 = 0;
  }
  (**(code **)(*local_68 + 0xc0))(local_68,local_70,uVar8);
LAB_140e7e70f:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7ec10 FUN_140e7ec10 body=157 status=ok
// SIG undefined FUN_140e7ec10(void)

undefined8 FUN_140e7ec10(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x150) == 0) || ((int)param_2 < 0)) ||
     (*(int *)(param_1 + 0xa8) <= (int)param_2)) {
    uVar1 = 0;
  }
  else {
    lVar4 = (ulonglong)param_2 * 0x170;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar4);
    lVar3 = *(longlong *)(param_1 + 0xa0) + lVar4;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(lVar3 + 0x28);
      }
    }
    *(longlong *)(lVar3 + 0x20) = lVar2;
    FUN_140e7ecae(param_1,*(longlong *)(param_1 + 0xa0) + lVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar4) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30 + lVar4) = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar4);
  }
  return uVar1;
}



// FUNCTION 140e7ecae FUN_140e7ecae body=150 status=ok
// SIG undefined FUN_140e7ecae(void)

void FUN_140e7ecae(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    if (*(longlong *)(param_2 + 0xa0) != 0) {
      FUN_14480f766(*(longlong *)(param_2 + 0x28) + 0x2b8);
      *(undefined8 *)(param_2 + 0xa0) = 0;
    }
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_14480f766(*(longlong *)(param_2 + 0x28) + 0x3b8);
      *(undefined8 *)(param_2 + 0x98) = 0;
    }
    if ((*(byte *)(param_2 + 0x68) & 4) != 0) {
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfb;
      FUN_140457ffc(param_2 + 0xa8,*(undefined8 *)(param_1 + 0x150));
      FUN_140efa5a0(param_2 + 0xa8);
      return;
    }
  }
  return;
}



// FUNCTION 140e7ed44 FUN_140e7ed44 body=286 status=ok
// SIG undefined FUN_140e7ed44(void)

undefined8 FUN_140e7ed44(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e7ee5c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e7ee5c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140e7ee5c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e7ee09;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140e7ee09;
    }
  }
  uVar6 = 0;
LAB_140e7ee09:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e7ee64 FUN_140e7ee64 body=763 status=ok
// SIG undefined FUN_140e7ee64(void)

void FUN_140e7ee64(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 unaff_XMM7 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x9f0);
  if ((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x9ec) != 0)) {
    puVar1 = (uint *)(param_1 + 0x9e8);
    uVar7 = *puVar1;
    if ((-1 < (int)uVar7) &&
       (((((int)uVar7 < DAT_14c9647dc &&
          (lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x9ec))) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plVar4 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar4);
      if (((cVar2 != '\0') && (*(char *)(param_1 + 0xac1) == '\x01')) &&
         ((0 < *(int *)(param_1 + 0xa50) && (*(longlong *)(param_1 + 0xa98) != 0)))) {
        lVar6 = FUN_14008e0ae(puVar1);
        fVar14 = *(float *)(lVar6 + 200);
        lVar6 = FUN_14008e0ae(puVar1);
        if ((*(longlong *)(lVar6 + 0x18) == 0) ||
           (*(char *)(*(longlong *)(lVar6 + 0x18) + 0x18) != '\x01')) {
          fVar15 = *(float *)(lVar6 + 0x30);
        }
        else {
          auVar8 = roundps(unaff_XMM7,ZEXT416(*(uint *)(lVar6 + 0x30)),3);
          fVar15 = auVar8._0_4_;
        }
        if (fVar14 < fVar15) {
          lVar6 = (**(code **)(*param_2 + 8))(param_2);
          if ((longlong)*(int *)(lVar6 + 0xe8) == 0) {
            auVar8 = ZEXT816(0);
          }
          else {
            fVar10 = 0.0;
            uVar12 = 0;
            uVar13 = 0;
            lVar5 = 0;
            do {
              fVar9 = *(float *)(*(longlong *)(lVar6 + 0xe0) + 0x18 + lVar5);
              uVar7 = -(uint)(0.0001 < fVar9);
              auVar8._0_4_ = ~uVar7 & (uint)fVar10;
              auVar8._4_4_ = 0;
              auVar8._8_4_ = uVar12;
              auVar8._12_4_ = uVar13;
              auVar8 = auVar8 | ZEXT416((uint)(fVar10 + fVar9) & uVar7);
              lVar5 = lVar5 + 0x20;
              fVar10 = auVar8._0_4_;
              uVar12 = auVar8._8_4_;
              uVar13 = auVar8._12_4_;
            } while ((longlong)*(int *)(lVar6 + 0xe8) * 0x20 != lVar5);
          }
          lVar6 = *(longlong *)(param_1 + 0xa98);
          fVar10 = auVar8._0_4_ * *(float *)(lVar6 + 0x50);
          fVar9 = *(float *)(lVar6 + 0x48) * fVar15;
          fVar11 = *(float *)(lVar6 + 0x4c) * fVar15;
          if (fVar11 <= fVar10) {
            fVar10 = fVar11;
          }
          if (fVar10 <= fVar9) {
            fVar10 = fVar9;
          }
          fVar14 = fVar14 + fVar10;
          if (fVar15 <= fVar14) {
            if ((lVar6 != 0) && (*(longlong *)(param_1 + 0xac8) != 0)) {
              cVar2 = FUN_140226bbe();
              if (cVar2 == '\0') {
                FUN_1413347e6(*(undefined8 *)(param_1 + 0xac8),8);
              }
              else {
                local_78 = 0;
                FUN_140b32deb(&local_68,*(undefined8 *)(param_1 + 0xac8),
                              *(longlong *)(param_1 + 0xa98) + 0xe8,0);
                local_68 = 0;
                local_60 = 0xffffffffffffffff;
              }
            }
            param_1 = param_1 + 0x9a8;
            cVar2 = FUN_14486ea84(param_1);
            fVar14 = fVar15;
            if (cVar2 != '\0') {
              lVar6 = FUN_14008e0ae(param_1);
              fVar15 = *(float *)(lVar6 + 200);
              lVar6 = FUN_14008e0ae(param_1);
              if ((*(longlong *)(lVar6 + 0x18) == 0) ||
                 (*(char *)(*(longlong *)(lVar6 + 0x18) + 0x18) != '\x01')) {
                fVar10 = *(float *)(lVar6 + 0x30);
              }
              else {
                auVar8 = roundps(ZEXT416(*(uint *)(lVar6 + 0x30)),ZEXT416(*(uint *)(lVar6 + 0x30)),3
                                );
                fVar10 = auVar8._0_4_;
              }
              if (fVar15 < fVar10) {
                uVar3 = FUN_14008e0ae(param_1);
                FUN_1414f49d2(uVar3,0x3f800000,0,1);
                fVar14 = 0.0;
              }
            }
          }
          uVar3 = FUN_14008e0ae(puVar1);
          FUN_1409d461e(uVar3,fVar14,1);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7f160 FUN_140e7f160 body=107 status=ok
// SIG undefined FUN_140e7f160(void)

int FUN_140e7f160(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_140e7f1cb(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e7f1cb FUN_140e7f1cb body=62 status=ok
// SIG undefined FUN_140e7f1cb(void)

bool FUN_140e7f1cb(char *param_1,char *param_2)

{
  bool bVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
      (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) ||
     (((NAN(*(float *)(param_1 + 4)) || NAN(*(float *)(param_2 + 4)) ||
       (*(float *)(param_1 + 8) != *(float *)(param_2 + 8))) ||
      ((NAN(*(float *)(param_1 + 8)) || NAN(*(float *)(param_2 + 8)) ||
       (param_1[0xc] != param_2[0xc])))))) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[0xd] == param_2[0xd];
  }
  return bVar1;
}



// FUNCTION 140e7f20a FUN_140e7f20a body=444 status=ok
// SIG undefined FUN_140e7f20a(void)

void FUN_140e7f20a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a74281(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e7f3c8 FUN_140e7f3c8 body=7511 status=ok
// SIG undefined FUN_140e7f3c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e7f3c8(undefined8 *****param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double *pdVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  undefined8 uVar16;
  double *pdVar17;
  byte bVar18;
  undefined2 uVar19;
  undefined8 *puVar20;
  undefined8 *****pppppuVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 *****pppppuVar24;
  int iVar25;
  undefined8 ******ppppppuVar26;
  double *pdVar27;
  undefined2 *puVar28;
  uint *puVar29;
  undefined4 *puVar30;
  bool bVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 ****ppppuVar34;
  double dVar35;
  undefined1 auStack_1b8 [32];
  undefined2 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  undefined8 ****local_160;
  code *local_158;
  code *local_150;
  undefined8 ****local_140;
  undefined8 ****local_138;
  uint *local_130;
  undefined8 ***local_128;
  longlong local_120;
  longlong local_118;
  undefined2 local_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  ushort local_f8;
  byte local_f0;
  undefined8 ****local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8;
  longlong local_d0;
  undefined4 local_c0 [6];
  byte local_a8;
  undefined8 *****local_98;
  int local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((ulonglong)param_1[1] & 0x10) == 0) {
    local_128 = param_1[4];
  }
  else {
    local_128 = (undefined8 ****)0x0;
  }
  bVar18 = 1;
  if (1 < (byte)(*(char *)(param_1 + 0x21) + 1U)) {
    bVar18 = *(char *)(param_1 + 0x21) + 1U;
  }
  *(byte *)(param_1 + 0x21) = bVar18;
  ppppuVar15 = *(undefined8 *****)(param_2 + 8);
  iVar25 = *(int *)(param_2 + 0x10);
  lVar12 = FUN_1403d77ae(param_2 + 8);
  if (*(int *)(lVar12 + 0x788) != *(int *)(lVar12 + 0x7b4)) {
    lVar22 = lVar12 + 0x7b8;
    if (*(longlong *)(lVar12 + 0x7c0) != 0) {
      lVar22 = *(longlong *)(lVar12 + 0x7c0);
    }
    iVar11 = *(int *)(lVar22 + (ulonglong)
                               (*(int *)(lVar12 + 0x7c8) - 1U & (uint)*(byte *)(param_2 + 0x184)) *
                               4);
    if (iVar11 != -1) {
      do {
        pbVar2 = (byte *)(*(longlong *)(lVar12 + 0x780) + (longlong)iVar11 * 0x28);
        if (*pbVar2 == *(byte *)(param_2 + 0x184)) {
          if ((pbVar2 != &DAT_fffffffffffffff8 && pbVar2 != (byte *)0x0) &&
             (lVar22 = FUN_1403d77ae(), lVar22 != 0)) {
            ppppuVar15 = *(undefined8 *****)(pbVar2 + 8);
            iVar25 = *(int *)(pbVar2 + 0x10);
            lVar12 = lVar22;
          }
          break;
        }
        iVar11 = *(int *)(pbVar2 + 0x20);
      } while (iVar11 != -1);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar10 & 0xdfffffff;
  uVar19 = (undefined2)*(uint *)(param_2 + 0x68);
  if ((*(uint *)(param_2 + 0x68) & 5) == 4) {
    *(uint *)(param_1 + 0x20) = uVar10 | 0x20000000;
    uVar19 = (undefined2)*(undefined4 *)(param_2 + 0x68);
  }
  *(undefined2 *)((longlong)param_1 + 0x104) = uVar19;
  pppppuVar24 = param_1 + 0x76;
  iVar11 = *(int *)((longlong)param_1 + 0x3bc);
  FUN_1403e0ff1(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  *(undefined4 *)(param_1 + 0x77) = 0;
  if ((iVar11 < 0) && (*(int *)((longlong)param_1 + 0x3bc) != 0)) {
    FUN_1407a322c(pppppuVar24,0);
  }
  if (((((*(int *)(param_2 + 0x14c) != 0) && (uVar10 = *(uint *)(param_2 + 0x148), -1 < (int)uVar10)
        ) && ((int)uVar10 < DAT_14c9647dc)) &&
      ((lVar22 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar22 != 0 &&
       (*(int *)(lVar22 + 0x10) == *(int *)(param_2 + 0x14c))))) &&
     ((*(uint *)(lVar22 + 8) & 0x10200000) == 0)) {
    *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) | 0x80;
  }
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x21);
  if ((param_1[0x24] != ppppuVar15) || (*(int *)(param_1 + 0x25) != iVar25)) {
    param_1[0x24] = ppppuVar15;
    *(int *)(param_1 + 0x25) = iVar25;
    param_1[0x26] = (undefined8 ****)0x0;
  }
  ppppuVar15 = *(undefined8 *****)(param_2 + 0x20);
  ppppuVar34 = *(undefined8 *****)(param_2 + 0x28);
  param_1[0x29] = *(undefined8 *****)(param_2 + 0x30);
  param_1[0x27] = ppppuVar15;
  param_1[0x28] = ppppuVar34;
  ppppuVar15 = *(undefined8 *****)(param_2 + 0x38);
  ppppuVar34 = *(undefined8 *****)(param_2 + 0x40);
  ppppuVar3 = *(undefined8 *****)(param_2 + 0x48);
  if (((((double)ppppuVar15 == 0.0) && (!NAN((double)ppppuVar15))) && ((double)ppppuVar34 == 0.0))
     && (((!NAN((double)ppppuVar34) && ((double)ppppuVar3 == 0.0)) && (!NAN((double)ppppuVar3))))) {
    ppppuVar3 = (undefined8 ****)(*(double *)(param_2 + 0x60) - *(double *)(param_2 + 0x30));
    ppppuVar34 = (undefined8 ****)(*(double *)(param_2 + 0x58) - *(double *)(param_2 + 0x28));
    ppppuVar15 = (undefined8 ****)(*(double *)(param_2 + 0x50) - *(double *)(param_2 + 0x20));
    dVar35 = (double)ppppuVar3 * (double)ppppuVar3 +
             (double)ppppuVar15 * (double)ppppuVar15 + (double)ppppuVar34 * (double)ppppuVar34;
    if ((dVar35 != 1.0) || (NAN(dVar35))) {
      if (9.99999993922529e-09 <= dVar35) {
        dVar35 = 1.0 / SQRT(dVar35);
        ppppuVar3 = (undefined8 ****)((double)ppppuVar3 * dVar35);
        ppppuVar34 = (undefined8 ****)((double)ppppuVar34 * dVar35);
        ppppuVar15 = (undefined8 ****)((double)ppppuVar15 * dVar35);
      }
      else {
        ppppuVar15 = (undefined8 ****)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        ppppuVar34 = (undefined8 ****)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        ppppuVar3 = DAT_14c8464f0;
      }
    }
  }
  param_1[0x2a] = ppppuVar15;
  param_1[0x2b] = ppppuVar34;
  param_1[0x2c] = ppppuVar3;
  uVar32 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x2f] = *(undefined8 *****)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x2d) = uVar32;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar7;
  local_130 = (uint *)(param_2 + 0x6c);
  if (*(int *)(param_2 + 0x70) == 0) {
LAB_140e7fbc9:
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    uVar10 = *local_130;
    ppppuVar15 = (undefined8 ****)0x0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar23 == (longlong *)0x0) ||
         (((int)plVar23[2] != *(int *)(param_2 + 0x70) ||
          ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_140e7fbc9;
      ppppuVar15 = (undefined8 ****)*plVar23;
      if ((ppppuVar15 != (undefined8 ****)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(ppppuVar15);
      }
    }
  }
  param_1[0x30] = ppppuVar15;
  if (*(int *)(param_2 + 0x78) == 0) {
LAB_140e7fbd1:
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x74);
    ppppuVar15 = (undefined8 ****)0x0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar23 == (longlong *)0x0) ||
         (((int)plVar23[2] != *(int *)(param_2 + 0x78) ||
          ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_140e7fbd1;
      ppppuVar15 = (undefined8 ****)*plVar23;
      if ((ppppuVar15 != (undefined8 ****)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(ppppuVar15);
      }
    }
  }
  param_1[0x31] = ppppuVar15;
  if (*(int *)(param_2 + 0x14c) == 0) {
LAB_140e7fbd9:
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x148);
    ppppuVar15 = (undefined8 ****)0x0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar23 == (longlong *)0x0) ||
         (((int)plVar23[2] != *(int *)(param_2 + 0x14c) ||
          ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_140e7fbd9;
      ppppuVar15 = (undefined8 ****)*plVar23;
      if ((ppppuVar15 != (undefined8 ****)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(ppppuVar15);
      }
    }
  }
  param_1[0x32] = ppppuVar15;
  if (*(int *)(param_2 + 0x154) == 0) {
LAB_140e7fbe1:
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x150);
    ppppuVar15 = (undefined8 ****)0x0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar23 == (longlong *)0x0) ||
         (((int)plVar23[2] != *(int *)(param_2 + 0x154) ||
          ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_140e7fbe1;
      ppppuVar15 = (undefined8 ****)*plVar23;
      if ((ppppuVar15 != (undefined8 ****)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(ppppuVar15);
      }
    }
  }
  param_1[0x33] = ppppuVar15;
  param_1[0x34] = *(undefined8 *****)(param_2 + 0x158);
  ppppuVar15 = *(undefined8 *****)(param_2 + 0x160);
  ppppuVar34 = *(undefined8 *****)(param_2 + 0x168);
  param_1[0x37] = *(undefined8 *****)(param_2 + 0x170);
  param_1[0x35] = ppppuVar15;
  param_1[0x36] = ppppuVar34;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = *(undefined2 *)((longlong)param_1 + 0x104);
  *(undefined2 *)((longlong)param_1 + 0x1de) = *(undefined2 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x179);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x180);
  uVar10 = rand();
  iVar11 = (int)(((float)(uVar10 & 0x7fff) / 32767.0) * 2.1474836e+09);
  iVar25 = 0x7ffffffe;
  if (iVar11 < 0x7ffffffe) {
    iVar25 = iVar11;
  }
  *(int *)(param_1 + 0x3c) = iVar25 + 1;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x7c);
  if ((param_1[0x3d] != *(undefined8 *****)(param_2 + 0x88)) ||
     (*(int *)(param_1 + 0x3e) != *(int *)(param_2 + 0x90))) {
    param_1[0x3d] = *(undefined8 *****)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x90);
    param_1[0x3f] = (undefined8 ****)0x0;
  }
  pppppuVar21 = param_1 + 0x40;
  local_138 = pppppuVar24;
  if (pppppuVar21 != (undefined8 *****)(param_2 + 0xa0)) {
    pppppuVar24 = (undefined8 *****)(param_2 + 0xa0);
    if (*(undefined8 ******)(param_2 + 0xd0) != (undefined8 *****)0x0) {
      pppppuVar24 = *(undefined8 ******)(param_2 + 0xd0);
    }
    FUN_1400709d4(pppppuVar21,pppppuVar24,*(undefined4 *)(param_2 + 0xd8),
                  *(undefined4 *)((longlong)param_1 + 0x23c));
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0xe0);
  local_e8 = (undefined8 ****)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_c0[0] = 0;
  uVar32 = FUN_140a8b8c6(param_2 + 0xe8,&local_e8);
  *(undefined4 *)((longlong)param_1 + 0x244) = uVar32;
  FUN_1448173f8(local_c0);
  if (((char)local_e8 == '\x03') && ((undefined8 ****)local_d8 != (undefined8 ****)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (*(code *)(*local_d8)[2])();
    }
  }
  *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x124);
  uVar32 = 0x3f800000;
  if ((*(char *)(lVar12 + 0x5c) == '\x01') && (param_1[0x30] != (undefined8 ****)0x0)) {
    uVar32 = *(undefined4 *)((longlong)param_1[0x30] + 0x74);
  }
  *(undefined4 *)(param_1 + 0x4e) = uVar32;
  *(undefined1 *)((longlong)param_1 + 0x274) = *(undefined1 *)(param_2 + 0x184);
  bVar18 = DAT_14c950c29;
  puVar29 = (uint *)(param_2 + 0x80);
  if ((((*(int *)(param_2 + 0x84) == 0) || (uVar10 = *puVar29, (int)uVar10 < 0)) ||
      (DAT_14c9647dc <= (int)uVar10)) ||
     (((plVar23 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)(param_2 + 0x84))) ||
      ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) {
    param_1[0x39] = (undefined8 ****)0x0;
LAB_140e7fbb0:
    if (bVar18 == 0) {
LAB_140e7fbee:
      param_1[0x39] = param_1[0x31];
      bVar18 = DAT_14c950c29;
      if (param_1[0x31] != (undefined8 ****)0x0) goto LAB_140e7fc29;
    }
    else {
      if (param_1[0x31] != (undefined8 ****)0x0) {
        FUN_1456cec3c();
        goto LAB_140e7fbee;
      }
      param_1[0x39] = (undefined8 ****)0x0;
    }
    ppppuVar15 = param_1[0x30];
    if ((bVar18 & 1) != 0) {
      if (ppppuVar15 == (undefined8 ****)0x0) {
        ppppuVar15 = (undefined8 ****)0x0;
      }
      else {
        FUN_1456cec3c(ppppuVar15);
        ppppuVar15 = param_1[0x30];
      }
    }
LAB_140e7fc21:
    param_1[0x39] = ppppuVar15;
  }
  else {
    ppppuVar15 = (undefined8 ****)*plVar23;
    if (ppppuVar15 != (undefined8 ****)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(ppppuVar15);
      goto LAB_140e7fc21;
    }
    param_1[0x39] = ppppuVar15;
    if (ppppuVar15 == (undefined8 ****)0x0) goto LAB_140e7fbb0;
  }
LAB_140e7fc29:
  local_140 = param_1 + 0x39;
  if (((*(char *)(param_2 + 0x178) == '\x01') &&
      (pppppuVar24 = param_1 + 0x32, *pppppuVar24 != (undefined8 ****)0x0)) &&
     (ppppuVar15 = param_1[0x30], ppppuVar15 != (undefined8 ****)0x0)) {
    if (DAT_14cb22108 == 0) {
      local_e8 = (undefined8 ****)FUN_1449e2820;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_1427b09ee;
      local_168 = &LAB_147f28909;
      local_170 = FUN_1464376d6;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x10004001;
      local_190 = 8;
      local_198 = (undefined2 *)CONCAT44(local_198._4_4_,0x28);
      local_160 = &local_e8;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
    }
    plVar23 = (longlong *)(*(code *)(*ppppuVar15)[0x51])(ppppuVar15,DAT_14cb22108);
    if (plVar23 != (longlong *)0x0) {
      if (DAT_14cb22108 == 0) {
        local_e8 = (undefined8 ****)FUN_1449e2820;
        local_150 = FUN_14081d0ea;
        local_158 = FUN_1427b09ee;
        local_168 = &LAB_147f28909;
        local_170 = FUN_1464376d6;
        local_178 = L"Engine";
        local_180 = 0;
        local_188 = 0x10004001;
        local_190 = 8;
        local_198 = (undefined2 *)CONCAT44(local_198._4_4_,0x28);
        local_160 = &local_e8;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      plVar13 = (longlong *)FUN_144718840(plVar23,DAT_14cb22108);
      if (plVar13 != (longlong *)0x0 && plVar23 != plVar13) {
        ppppuVar15 = *pppppuVar24;
        uVar16 = (**(code **)(*plVar13 + 0x28))(plVar13);
        cVar9 = FUN_147f5daba(uVar16,ppppuVar15,0x3f800000);
        if (cVar9 == '\0') {
          ppppuVar15 = *pppppuVar24;
          uVar16 = (**(code **)(*plVar13 + 0x28))(plVar13);
          lVar22 = FUN_1447ca08a(uVar16,ppppuVar15,1);
          pdVar17 = (double *)&DAT_14cb242f8;
          if (lVar22 != 0) {
            pdVar17 = (double *)(lVar22 + 0x28);
          }
          pdVar27 = (double *)&DAT_14cb242e8;
          pdVar8 = (double *)&DAT_14cb242f0;
          if (lVar22 != 0) {
            pdVar27 = (double *)(lVar22 + 0x18);
            pdVar8 = (double *)(lVar22 + 0x20);
          }
          ppppuVar15 = (undefined8 ****)*pdVar27;
          ppppuVar34 = (undefined8 ****)*pdVar8;
          ppppuVar3 = (undefined8 ****)*pdVar17;
          if ((((((double)ppppuVar15 != _DAT_14cb84ba0) ||
                (NAN((double)ppppuVar15) || NAN(_DAT_14cb84ba0))) ||
               ((double)ppppuVar34 != _DAT_14cb84ba8)) ||
              ((NAN((double)ppppuVar34) || NAN(_DAT_14cb84ba8) ||
               ((double)ppppuVar3 != _DAT_14cb84bb0)))) ||
             (NAN((double)ppppuVar3) || NAN(_DAT_14cb84bb0))) {
            param_1[0x35] = ppppuVar15;
            param_1[0x36] = ppppuVar34;
            param_1[0x37] = ppppuVar3;
            param_1[0x2d] = ppppuVar15;
            param_1[0x2e] = ppppuVar34;
            param_1[0x2f] = ppppuVar3;
          }
          else {
            param_1[0x37] = DAT_14c8464f0;
            ppppuVar15 = (undefined8 ****)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            param_1[0x35] = (undefined8 ****)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
            ;
            param_1[0x36] = ppppuVar15;
          }
          *pppppuVar24 = (undefined8 ****)0x0;
          param_1[0x33] = (undefined8 ****)0x0;
          FUN_1488e1a94(param_1,CONCAT62((int6)((ulonglong)(lVar22 + 0x20) >> 0x10),0x80));
        }
      }
    }
  }
  pppppuVar24 = param_1 + 0x3d;
  lVar22 = FUN_14082ce84(lVar12 + 0x3f8);
  lVar14 = FUN_1405faa04((longlong *)(lVar12 + 0x3c0));
  if (lVar14 == 0) {
    if ((*(char *)(lVar12 + 0x518) != '\0') ||
       ((lVar22 != 0 && (*(char *)(lVar22 + 0x34) == '\x01')))) {
      if (*(int *)(param_2 + 0x70) == 0) {
LAB_140e803e9:
        if (((puVar29[1] != 0) && (uVar10 = *puVar29, -1 < (int)uVar10)) &&
           (((((int)uVar10 < DAT_14c9647dc &&
              ((plVar23 = (longlong *)
                          ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
               plVar23 != (longlong *)0x0 && (*(uint *)(plVar23 + 2) == puVar29[1])))) &&
             ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) &&
            (plVar23 = (longlong *)*plVar23, plVar23 != (longlong *)0x0)))) {
          uVar16 = FUN_1406d192e();
          plVar23 = (longlong *)(**(code **)(*plVar23 + 0x288))(plVar23,uVar16);
          if (plVar23 != (longlong *)0x0) {
            uVar16 = FUN_1406d192e();
            plVar13 = (longlong *)FUN_144718840(plVar23,uVar16);
            if ((plVar13 != (longlong *)0x0 && plVar23 != plVar13) &&
               (lVar14 = (**(code **)(*plVar13 + 0x18))(plVar13), lVar14 != 0)) {
              puVar30 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar14 + 8) != (undefined4 *)0x0) {
                puVar30 = *(undefined4 **)(lVar14 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar14 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar14);
                DAT_14c947fe0 = lVar14;
              }
              plVar23 = &local_120;
              goto LAB_140e80869;
            }
          }
        }
      }
      else {
        uVar10 = *local_130;
        if ((((((int)uVar10 < 0) || (DAT_14c9647dc <= (int)uVar10)) ||
             (plVar23 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
             plVar23 == (longlong *)0x0)) ||
            (((int)plVar23[2] != *(int *)(param_2 + 0x70) ||
             ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) ||
           (plVar23 = (longlong *)*plVar23, plVar23 == (longlong *)0x0)) {
LAB_140e80399:
          if (((*(int *)(param_2 + 0x70) != 0) && (uVar10 = *local_130, -1 < (int)uVar10)) &&
             (((int)uVar10 < DAT_14c9647dc &&
              (((lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                lVar14 != 0 && (*(int *)(lVar14 + 0x10) == *(int *)(param_2 + 0x70))) &&
               ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))))) {
            puVar29 = local_130;
          }
          goto LAB_140e803e9;
        }
        uVar16 = FUN_1403ec9c0();
        plVar23 = (longlong *)(**(code **)(*plVar23 + 0x288))(plVar23,uVar16);
        if (plVar23 == (longlong *)0x0) goto LAB_140e80399;
        uVar16 = FUN_1403ec9c0();
        plVar13 = (longlong *)FUN_144718840(plVar23,uVar16);
        if (plVar13 == (longlong *)0x0 || plVar23 == plVar13) goto LAB_140e80399;
        lVar14 = (**(code **)(*plVar13 + 0x30))(plVar13);
        if (lVar14 == 0) goto LAB_140e7fd02;
        puVar30 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar14 + 8) != (undefined4 *)0x0) {
          puVar30 = *(undefined4 **)(lVar14 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        plVar23 = &local_118;
LAB_140e80869:
        FUN_140045924(DAT_14c947fe0,plVar23,puVar30,1);
        ppppuVar15 = (undefined8 ****)*plVar23;
        if (*pppppuVar24 != ppppuVar15) {
          param_1[0x3f] = (undefined8 ****)0x0;
        }
        *pppppuVar24 = ppppuVar15;
      }
    }
  }
  else {
    ppppuVar15 = *(undefined8 *****)(lVar12 + 0x3c0);
    if ((*pppppuVar24 != ppppuVar15) || (*(int *)(param_1 + 0x3e) != *(int *)(lVar12 + 0x3c8))) {
      param_1[0x3d] = ppppuVar15;
      *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar12 + 0x3c8);
      param_1[0x3f] = (undefined8 ****)0x0;
    }
  }
LAB_140e7fd02:
  lVar14 = FUN_1405faa04();
  if (((lVar22 != 0) && (lVar14 == 0)) &&
     ((*pppppuVar24 != *(undefined8 *****)(lVar22 + 0x18) ||
      (*(int *)(param_1 + 0x3e) != *(int *)(lVar22 + 0x20))))) {
    param_1[0x3d] = *(undefined8 *****)(lVar22 + 0x18);
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar22 + 0x20);
    param_1[0x3f] = (undefined8 ****)0x0;
  }
  *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
  if (((ulonglong)param_1[1] & 0x10) == 0) {
    ppppuVar15 = param_1[4];
  }
  else {
    ppppuVar15 = (undefined8 ****)0x0;
  }
  *(int *)(ppppuVar15 + 0x92) = *(int *)(ppppuVar15 + 0x92) + 1;
  (*(code *)(*ppppuVar15)[0xaf])();
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x7c);
  local_98 = (undefined8 *****)param_1[0x3d];
  FUN_1446dcdd4(&local_e8);
  if (DAT_14cb77da0 == 0) {
    ppppuVar15 = (undefined8 ****)0x0;
  }
  else {
    ppppuVar15 = (undefined8 ****)FUN_144837462(DAT_14cb77da0,&local_e8);
  }
  param_1[0x12] = ppppuVar15;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 *****)param_1[0x46] != (undefined8 *****)0x0) {
    pppppuVar21 = (undefined8 *****)param_1[0x46];
  }
  FUN_1400709d4(param_1 + 0x13,pppppuVar21,*(undefined4 *)(param_1 + 0x47),
                *(undefined4 *)((longlong)param_1 + 0xd4));
  (*(code *)param_1[0x78][4])(param_1 + 0x78,0);
  param_1[0x79] = *(undefined8 *****)(param_2 + 0x198);
  FUN_1406022fe(param_1 + 0x7a,param_2 + 0x1a0);
  FUN_1405dc634(param_1 + 0x78,lVar12 + 0x3d8);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((longlong)param_1 + 0x244);
  *(undefined8 *****)((longlong)param_1 + 0xdc) = param_1[0x49];
  fVar33 = *(float *)(param_2 + 0xe0);
  *(float *)((longlong)param_1 + 0x8c) = fVar33;
  if (fVar33 <= 0.0) {
    local_e8 = (undefined8 ****)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_c0[0] = 0;
    FUN_1456bb102(&local_e8,*local_140);
    puVar28 = &local_110;
    FUN_1448729ea(lVar12 + 0x410,puVar28,&local_e8);
    if (local_f0 == 3) {
      uVar32 = CONCAT22(uStack_10e,local_110);
      bVar18 = 3;
    }
    else {
      uVar32 = *(undefined4 *)((longlong)param_1 + 0x8c);
      FUN_1400b56fe(&local_98,&local_110,3);
      if (local_78 != 0) {
        uVar32 = local_98._0_4_;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar26 = &local_98;
        if (0x18 < local_80) {
          ppppppuVar26 = (undefined8 ******)local_98;
        }
        (*pcVar4)(ppppppuVar26);
      }
      bVar18 = local_f0;
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
        bVar18 = local_f0;
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar32;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar18 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_f8) {
        puVar28 = (undefined2 *)CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110));
      }
      (*pcVar4)(puVar28);
    }
    if (0x18 < local_f8) {
      FUN_1400020a8(CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110)));
    }
    FUN_1448173f8(local_c0);
    if (((char)local_e8 == '\x03') && ((undefined8 ****)local_d8 != (undefined8 ****)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_d8)[2])();
      }
    }
    fVar33 = *(float *)((longlong)param_1 + 0x8c);
  }
  if (0.0 < fVar33) {
    if (*(int *)(param_2 + 0x70) == 0) {
LAB_140e80b22:
      uVar16 = 0;
    }
    else {
      uVar10 = *local_130;
      uVar16 = 0;
      if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
        puVar20 = (undefined8 *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
        if ((puVar20 == (undefined8 *)0x0) ||
           ((*(int *)(puVar20 + 2) != *(int *)(param_2 + 0x70) ||
            ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_140e80b22;
        uVar16 = *puVar20;
      }
    }
    fVar33 = (float)FUN_140acff56(uVar16);
    fVar33 = fVar33 * *(float *)((longlong)param_1 + 0x8c);
    *(float *)((longlong)param_1 + 0x8c) = fVar33;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  *(float *)(param_1 + 0x48) = fVar33;
  *(uint *)(param_1 + 0x20) = uVar10 & 0xfdffffff;
  if (lVar22 != 0) {
    if (((*(float *)(param_1 + 0x11) == 0.0) && (!NAN(*(float *)(param_1 + 0x11)))) &&
       (bVar18 = *(byte *)(lVar22 + 0xa9),
       *(uint *)(param_1 + 0x20) = (uint)bVar18 << 0x19 | uVar10 & 0xfdffffff, bVar18 == 0)) {
      uVar32 = FUN_14074d5ce(lVar22,param_1[0x39],0);
      *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar32;
      *(undefined4 *)(param_1 + 0x11) = uVar32;
    }
    if ((*(float *)(param_1 + 0x1b) == 0.0) && (!NAN(*(float *)(param_1 + 0x1b)))) {
      uVar32 = FUN_140a8b812(lVar22,param_1[0x39],0);
      *(undefined4 *)((longlong)param_1 + 0x244) = uVar32;
      *(undefined4 *)(param_1 + 0x1b) = uVar32;
    }
    if ((*(float *)((longlong)param_1 + 0xdc) == 0.0) &&
       (!NAN(*(float *)((longlong)param_1 + 0xdc)))) {
      uVar32 = FUN_14187bb14(lVar22,param_1[0x39],0);
      *(undefined4 *)(param_1 + 0x49) = uVar32;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar32;
    }
    if ((*(float *)(param_1 + 0x1c) == 0.0) && (!NAN(*(float *)(param_1 + 0x1c)))) {
      uVar32 = FUN_14187bbf0(lVar22,param_1[0x39],0);
      *(undefined4 *)((longlong)param_1 + 0x24c) = uVar32;
      *(undefined4 *)(param_1 + 0x1c) = uVar32;
    }
  }
  cVar9 = (*(code *)param_1[6][0xd])(param_1 + 6);
  pppppuVar24 = (undefined8 *****)local_138;
  if ((cVar9 == '\0') && ((*(byte *)(lVar12 + 0x5e0) & 1) != 0)) {
    local_e8 = (undefined8 ****)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_c0[0] = 0;
    FUN_1456bb102(&local_e8,*local_140);
    puVar28 = &local_110;
    FUN_1447c3578(lVar12 + 0x5e8,puVar28,&local_e8);
    if (local_f0 == 3) {
      fVar33 = (float)CONCAT22(uStack_10e,local_110);
      bVar18 = 3;
    }
    else {
      FUN_1400b56fe(&local_98,&local_110,3);
      fVar33 = 0.0;
      if (local_78 != 0) {
        fVar33 = local_98._0_4_;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar26 = &local_98;
        if (0x18 < local_80) {
          ppppppuVar26 = (undefined8 ******)local_98;
        }
        (*pcVar4)(ppppppuVar26);
      }
      pppppuVar24 = (undefined8 *****)local_138;
      bVar18 = local_f0;
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
        pppppuVar24 = (undefined8 *****)local_138;
        bVar18 = local_f0;
      }
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar18 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_f8) {
        puVar28 = (undefined2 *)CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110));
      }
      (*pcVar4)(puVar28);
    }
    if (0x18 < local_f8) {
      FUN_1400020a8(CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110)));
    }
    FUN_1448173f8(local_c0);
    if (((char)local_e8 == '\x03') && ((undefined8 ****)local_d8 != (undefined8 ****)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_d8)[2])();
      }
    }
    if (fVar33 <= 0.0001) {
      *(byte *)((longlong)param_1 + 0x1dc) = *(byte *)((longlong)param_1 + 0x1dc) | 1;
    }
    else {
      uVar16 = FUN_1401b4c98(local_128);
      local_98 = (undefined8 ******)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      pppppuVar24 = local_98;
      local_90 = 3;
      *local_98 = (undefined8 ****)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppppuVar21 = (undefined8 *****)(DAT_14c758608 + 1);
      lVar22 = DAT_14c758608 + 1;
      if (pppppuVar21 == (undefined8 *****)0x0) {
        LOCK();
        UNLOCK();
        pppppuVar21 = (undefined8 *****)(DAT_14c758608 + 2);
        lVar22 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar22;
      local_98[2] = pppppuVar21;
      *local_98 = (undefined8 ****)&PTR_FUN_14b414e00;
      local_98[3] = (undefined8 *****)0x0;
      iVar25 = 0;
      if (param_1 != (undefined8 *****)0x0) {
        uVar10 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar22 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar22 = 0;
        }
        iVar25 = *(int *)(lVar22 + 0x10);
        if (*(int *)(lVar22 + 0x10) == 0) {
          LOCK();
          iVar25 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar31 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar25;
          if (bVar31) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar25 = *(int *)(lVar22 + 0x10);
          bVar31 = iVar25 == 0;
          if (bVar31) {
            *(int *)(lVar22 + 0x10) = iVar11;
            iVar25 = 0;
          }
          UNLOCK();
          if (bVar31) {
            iVar25 = iVar11;
          }
        }
      }
      *(int *)((longlong)pppppuVar24 + 0x1c) = iVar25;
      pppppuVar24[4] = param_1;
      local_e8 = (undefined8 *****)0x0;
      local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
      FUN_14487d8d8(&local_e8,&local_98);
      local_a8 = 1;
      local_198 = &local_110;
      local_110 = 0;
      uStack_10c = 0xbf800000;
      FUN_1406f4044(uVar16,param_1 + 0xb1,&local_e8,fVar33);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
      pppppuVar24 = (undefined8 *****)local_138;
      if (local_90 != 0) {
        if ((undefined8 ******)local_98 == (undefined8 ******)0x0) goto LAB_140e8001f;
        (*(code *)**local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if ((undefined8 ******)local_98 != (undefined8 ******)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140e8001f:
  if ((*(byte *)(lVar12 + 0x5e0) & 2) != 0) {
    local_e8 = (undefined8 ****)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_c0[0] = 0;
    FUN_1456bb102(&local_e8,*local_140);
    puVar28 = &local_110;
    FUN_1447c3578(lVar12 + 0x6d8,puVar28,&local_e8);
    if (local_f0 == 3) {
      local_f0 = 3;
      fVar33 = (float)CONCAT22(uStack_10e,local_110);
    }
    else {
      FUN_1400b56fe(&local_98,&local_110,3);
      fVar33 = 0.0;
      if (local_78 != 0) {
        fVar33 = local_98._0_4_;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar26 = &local_98;
        if (0x18 < local_80) {
          ppppppuVar26 = (undefined8 ******)local_98;
        }
        (*pcVar4)(ppppppuVar26);
      }
      pppppuVar24 = (undefined8 *****)local_138;
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
        pppppuVar24 = (undefined8 *****)local_138;
      }
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_f8) {
        puVar28 = (undefined2 *)CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110));
      }
      (*pcVar4)(puVar28);
    }
    if (0x18 < local_f8) {
      FUN_1400020a8(CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110)));
    }
    FUN_1448173f8(local_c0);
    if (((char)local_e8 == '\x03') && ((undefined8 ****)local_d8 != (undefined8 ****)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_d8)[2])();
      }
    }
    if (fVar33 <= 0.0001) {
      *(byte *)((longlong)param_1 + 0x1dd) = *(byte *)((longlong)param_1 + 0x1dd) | 4;
    }
    else {
      uVar16 = FUN_1401b4c98(local_128);
      local_98 = (undefined8 ******)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      pppppuVar24 = local_98;
      local_90 = 3;
      *local_98 = (undefined8 ****)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppppuVar21 = (undefined8 *****)(DAT_14c758608 + 1);
      lVar12 = DAT_14c758608 + 1;
      if (pppppuVar21 == (undefined8 *****)0x0) {
        LOCK();
        UNLOCK();
        pppppuVar21 = (undefined8 *****)(DAT_14c758608 + 2);
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      local_98[2] = pppppuVar21;
      *local_98 = (undefined8 ****)&PTR_FUN_14b414e70;
      local_98[3] = (undefined8 *****)0x0;
      iVar25 = 0;
      if (param_1 != (undefined8 *****)0x0) {
        uVar10 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar25 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar25 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar31 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar25;
          if (bVar31) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar25 = *(int *)(lVar12 + 0x10);
          bVar31 = iVar25 == 0;
          if (bVar31) {
            *(int *)(lVar12 + 0x10) = iVar11;
            iVar25 = 0;
          }
          UNLOCK();
          if (bVar31) {
            iVar25 = iVar11;
          }
        }
      }
      *(int *)((longlong)pppppuVar24 + 0x1c) = iVar25;
      pppppuVar24[4] = param_1;
      local_e8 = (undefined8 *****)0x0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_14487d8d8(&local_e8,&local_98);
      local_a8 = 1;
      local_198 = &local_110;
      local_110 = 0;
      uStack_10c = 0xbf800000;
      FUN_1406f4044(uVar16,param_1 + 200,&local_e8,fVar33);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
      pppppuVar24 = (undefined8 *****)local_138;
      if (local_90 != 0) {
        if ((undefined8 ******)local_98 == (undefined8 ******)0x0) goto LAB_140e8002c;
        (*(code *)**local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if ((undefined8 ******)local_98 != (undefined8 ******)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140e8002c:
  FUN_1408da3b0(pppppuVar24,param_2 + 0x1b0);
  if (((*(byte *)(param_2 + 0x69) & 2) == 0) &&
     (ppppuVar15 = (undefined8 ****)*local_140, ppppuVar15 != (undefined8 ****)0x0)) {
    uVar16 = FUN_141419b90();
    plVar23 = (longlong *)FUN_144718840(ppppuVar15,uVar16);
    if (plVar23 != (longlong *)0x0) {
      plVar23 = (longlong *)(**(code **)(*plVar23 + 0x10))(plVar23);
      (**(code **)(*plVar23 + 0x28))(plVar23,pppppuVar24);
    }
  }
  if (param_1[0x4a] != (undefined8 ****)0x0) {
    param_1[0x4c] = (undefined8 ****)0x0;
  }
  param_1[0x4a] = (undefined8 ****)0x0;
  if (*(int *)(param_2 + 0x138) - 1U < 0xfffffffe &&
      *(undefined8 *******)(param_2 + 0x130) != (undefined8 ******)0x0) {
    ppppppuVar26 = *(undefined8 *******)(param_2 + 0x130);
    iVar25 = 0x4fc71eb4;
    if (*(int *)(param_2 + 0x138) == 0x3d418293) {
      local_e8 = (undefined8 *****)0x0;
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)((longlong)param_1 + 0x8c));
      local_d8 = param_1[0x12];
      FUN_141125464(param_2 + 0x130,&local_98);
      ppppppuVar26 = (undefined8 ******)0x0;
      if (local_90 != 0x4fc71eb4) {
        ppppppuVar26 = (undefined8 ******)local_98;
      }
      iVar25 = local_90;
      if ((undefined8 ******)local_98 != (undefined8 ******)0x0) {
        ppppppuVar26 = (undefined8 ******)local_98;
      }
    }
    if (((ppppppuVar26 != (undefined8 ******)0x0) && (iVar25 - 1U < 0xfffffffe)) &&
       (((undefined8 ******)param_1[0x4a] != ppppppuVar26 || (*(int *)(param_1 + 0x4b) != iVar25))))
    {
      param_1[0x4a] = ppppppuVar26;
      *(int *)(param_1 + 0x4b) = iVar25;
      param_1[0x4c] = (undefined8 ****)0x0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x4f] = (undefined8 ****)0x0;
  param_1[0x50] = (undefined8 ****)0x0;
  param_1[0x51] = (undefined8 ****)0x0;
  param_1[0x52] = (undefined8 ****)0x0;
  param_1[0x53] = (undefined8 ****)0x0;
  param_1[0x54] = (undefined8 ****)0x0;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar32 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x55) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar32;
  *(undefined4 *)(param_1 + 0x56) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar6;
  param_1[0x57] = DAT_14c846508;
  param_1[0x58] = (undefined8 ****)0x3ff0000000000000;
  param_1[0x59] = (undefined8 ****)0x0;
  param_1[0x5a] = (undefined8 ****)0x0;
  ppppuVar15 = (undefined8 ****)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x5c] = (undefined8 ****)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x5d] = ppppuVar15;
  param_1[0x5e] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar32 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x60) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar32;
  *(undefined4 *)(param_1 + 0x61) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x30c) = uVar6;
  param_1[0x62] = DAT_14c8464f0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  if (((*(byte *)((longlong)param_1 + 0x104) & 0x40) != 0) &&
     (ppppuVar15 = param_1[0x30], ppppuVar15 != (undefined8 ****)0x0)) {
    uVar16 = FUN_140757e32();
    plVar23 = (longlong *)FUN_144718840(ppppuVar15,uVar16);
    if (plVar23 != (longlong *)0x0) {
      uVar32 = (**(code **)(*plVar23 + 0x18))(plVar23);
      *(undefined4 *)((longlong)param_1 + 0x32c) = uVar32;
    }
  }
  param_1[0x4d] = (undefined8 ****)0x0;
  *(undefined1 *)((longlong)param_1 + 0x275) = 0xff;
  plVar23 = (longlong *)FUN_140b51ce6();
  if (plVar23 != (longlong *)0x0) {
    local_e0 = 0;
    local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffff00000000);
    local_d0 = 0;
    local_e8 = param_1;
    (**(code **)(*plVar23 + 0x20))(plVar23,&local_e8,0,(longlong)param_1 + 0x275);
  }
  *(uint *)(param_1 + 0x20) =
       *(uint *)(param_1 + 0x20) & 0xfffbffff | (*(byte *)(param_2 + 0x1c2) & 1) << 0x12;
  *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_2 + 0x1c4);
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e81132 FUN_140e81132 body=1767 status=ok
// SIG undefined FUN_140e81132(void)

void FUN_140e81132(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x578))();
  if (((((char)param_1[0x2f] != '\x03') && (*(char *)((longlong)param_1 + 0xd44) != -1)) &&
      (lVar7 = param_1[0x1a9], lVar7 != 0)) &&
     ((((*(byte *)(lVar7 + 0x65) & 2) == 0 && (lVar7 != param_2)) &&
      ((*(uint *)(lVar7 + 8) & 0x40000000) == 0)))) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0xd36);
    *(undefined1 *)((longlong)param_1 + 0xd36) = 1;
    uVar6 = FUN_141262f1a();
    plVar8 = (longlong *)FUN_144718840(lVar7,uVar6);
    if (plVar8 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_140f07252(uVar6,param_1,*(undefined1 *)((longlong)param_1 + 0xd44));
    }
    *(undefined1 *)((longlong)param_1 + 0xd36) = uVar1;
    FUN_140f069cc(param_1);
  }
  (**(code **)(*param_1 + 0x440))(param_1,param_2);
  FUN_140eeb8c0(param_1,param_2);
  if ((((char)param_1[0x2f] == '\x03') && (param_1[0x1ac] == DAT_14cb95120)) &&
     (param_1[0x1a7] == 0)) {
    *(undefined4 *)(param_1 + 0x1a6) = 0;
    *(undefined1 *)((longlong)param_1 + 0xd34) = 0xff;
    *(undefined2 *)((longlong)param_1 + 0xd35) = 0;
    uVar3 = param_1[5];
    if (uVar3 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar3,0x18);
    }
    else {
      uVar12 = (uint)uVar3;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c998088)) {
        puVar10 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)(puVar10 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar12 & 0x1f) & 1) != 0) {
          lVar7 = DAT_14c998060 + (ulonglong)(uVar12 & 0x7fffffff) * 0x68;
          puVar11 = *(uint **)(lVar7 + 0x18);
          if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
            puVar11 = (uint *)(lVar7 + 8);
          }
          *puVar11 = *puVar11 | 0x1000000;
          *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
        }
      }
    }
  }
  if (param_1[0x36] != 0) {
    if ((char)param_1[0x19f] == '\0') {
      lVar7 = param_1[0x1a2];
      if ((longlong)(int)lVar7 != 0) {
        lVar5 = param_1[0x1a1];
        lVar13 = 0;
        do {
          lVar2 = *(longlong *)(lVar5 + lVar13);
          *(byte *)(lVar2 + 0x78) = *(byte *)(lVar2 + 0x78) & 0xf7;
          FUN_140cf5864(lVar2);
          FUN_140cf57c4(lVar2);
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar13);
      }
      lVar7 = param_1[0x1a4];
      if ((longlong)(int)lVar7 != 0) {
        lVar5 = param_1[0x1a3];
        lVar13 = 0;
        do {
          FUN_140cf579c(*(undefined8 *)(lVar5 + lVar13),0);
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar13);
      }
    }
    lVar7 = param_1[0x36];
    if (lVar7 != 0) {
      if (DAT_14cb94538 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_148a18249;
        local_70 = FUN_14657713c;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      lVar5 = FUN_144718840(lVar7,DAT_14cb94538);
      lVar7 = param_1[0x36];
      if (lVar5 == 0) {
LAB_140e81777:
        if (lVar7 != 0) {
LAB_140e81262:
          uVar6 = FUN_140e819e6();
          lVar5 = FUN_144718840(lVar7,uVar6);
          lVar7 = param_1[0x36];
          if (lVar5 == 0) {
LAB_140e817e4:
            if (lVar7 == 0) goto LAB_140e816b2;
          }
          else {
            param_1[0x166] = lVar5;
            if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar7);
              param_1[0x165] = lVar7;
              lVar7 = param_1[0x36];
              goto LAB_140e817e4;
            }
            param_1[0x165] = lVar7;
            if (lVar7 == 0) {
              plVar8 = param_1 + 0x166;
              goto LAB_140e816ab;
            }
          }
          uVar6 = FUN_140e81900();
          lVar7 = FUN_144718840(lVar7,uVar6);
          plVar8 = (longlong *)param_1[0x36];
          if (lVar7 == 0) {
LAB_140e8179b:
            *(undefined2 *)(param_1 + 0x169) = 6;
            *(undefined1 *)((longlong)param_1 + 0xb4a) = 0;
            if (plVar8 == (longlong *)0x0) goto LAB_140e8138e;
          }
          else {
            param_1[0x168] = lVar7;
            if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar8);
              param_1[0x167] = (longlong)plVar8;
              plVar8 = (longlong *)param_1[0x36];
              goto LAB_140e8179b;
            }
            param_1[0x167] = (longlong)plVar8;
            if (plVar8 == (longlong *)0x0) {
              param_1[0x168] = 0;
              goto LAB_140e816b2;
            }
            *(undefined2 *)(param_1 + 0x169) = 6;
            *(undefined1 *)((longlong)param_1 + 0xb4a) = 0;
          }
          if (DAT_14cb223d8 == 0) {
            local_60 = &local_40;
            local_40 = FUN_1449e2820;
            local_50 = FUN_14081d0ea;
            local_58 = FUN_1427b09ee;
            local_68 = &LAB_147f29feb;
            local_70 = FUN_1464384fe;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10004001;
            local_90 = 8;
            local_98 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
          if (plVar8 != (longlong *)0x0) {
            if (DAT_14cb223d8 == 0) {
              local_60 = &local_40;
              local_40 = FUN_1449e2820;
              local_50 = FUN_14081d0ea;
              local_58 = FUN_1427b09ee;
              local_68 = &LAB_147f29feb;
              local_70 = FUN_1464384fe;
              local_78 = L"Engine";
              local_80 = 0;
              local_88 = 0x10004001;
              local_90 = 8;
              local_98 = 0x28;
              FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
            }
            plVar9 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
            if ((((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) &&
                (lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar7 != 0)) &&
               ((cVar4 = FUN_140e8181a(lVar7,param_1 + 0x169,&local_40), cVar4 != '\0' &&
                (*(char *)(lVar7 + 0x52) == '\0')))) {
              *(undefined1 *)((longlong)param_1 + 0xb49) = 1;
              *(char *)((longlong)param_1 + 0xb4a) =
                   (char)(1 << (*(byte *)(param_1 + 0x169) & 0x1f));
            }
          }
          goto LAB_140e8138e;
        }
      }
      else {
        param_1[0x164] = lVar5;
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
          param_1[0x163] = lVar7;
          lVar7 = param_1[0x36];
          goto LAB_140e81777;
        }
        param_1[0x163] = lVar7;
        if (lVar7 != 0) goto LAB_140e81262;
        plVar8 = param_1 + 0x164;
LAB_140e816ab:
        *plVar8 = 0;
      }
    }
  }
LAB_140e816b2:
  *(undefined2 *)(param_1 + 0x169) = 6;
  *(undefined1 *)((longlong)param_1 + 0xb4a) = 0;
LAB_140e8138e:
  (**(code **)(*param_1 + 0x8d0))(param_1);
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8181a FUN_140e8181a body=81 status=ok
// SIG undefined FUN_140e8181a(void)

undefined8 FUN_140e8181a(longlong param_1,byte *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0x50) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)
       ) && ((*(short *)(param_1 + 0x28) < 0 || (*(longlong *)(param_1 + 0x30) != 0)))) &&
     (*(char *)(lVar1 + 0x88) == '\x01')) {
    *param_2 = *(byte *)(lVar1 + 0x89);
    *(undefined2 *)(param_3 + 1) = 0;
    *param_3 = 0;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    if (*(char *)(param_1 + 0x51) == '\x01') {
      *(undefined1 *)((longlong)param_3 + (ulonglong)*param_2) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140e8186c FUN_140e8186c body=147 status=ok
// SIG undefined FUN_140e8186c(void)

void FUN_140e8186c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0xd70);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    lVar3 = *(longlong *)(param_1 + 0xd68);
    lVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      if ((plVar4 != (longlong *)0x0 & bVar5) == 1) {
        FUN_1456cec3c(plVar4);
LAB_140e818b9:
        (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar2);
        bVar5 = DAT_14c950c29;
      }
      else if (plVar4 != (longlong *)0x0) goto LAB_140e818b9;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_1447cd2ec(param_1 + 0x960,0);
  return;
}



// FUNCTION 140e81900 FUN_140e81900 body=228 status=ok
// SIG undefined FUN_140e81900(void)

longlong FUN_140e81900(void)

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
  if (DAT_14cb55540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486247cd;
    local_40 = FUN_1464b26b7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"BodyActionAnimOwner",&DAT_14cb55540,FUN_1464b2690);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e819e6 FUN_140e819e6 body=228 status=ok
// SIG undefined FUN_140e819e6(void)

longlong FUN_140e819e6(void)

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
  if (DAT_14cb94360 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148a153ab;
    local_40 = FUN_1465763d1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponTargetLockInterface",&DAT_14cb94360,&DAT_148a153aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94360;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e81ad6 FUN_140e81ad6 body=223 status=ok
// SIG undefined FUN_140e81ad6(void)

undefined8 * FUN_140e81ad6(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b1db000;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"OpportunisticAudioComponent",1);
  uVar2 = FUN_140e81bb6();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e81bb6 FUN_140e81bb6 body=228 status=ok
// SIG undefined FUN_140e81bb6(void)

longlong FUN_140e81bb6(void)

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
  if (DAT_14cb619c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1486dbba9;
    local_40 = FUN_14185560d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxOpportunisticAmbientAudioComponent",&DAT_14cb619c8,
                  FUN_1464f44d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb619c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e81caa FUN_140e81caa body=45 status=ok
// SIG undefined FUN_140e81caa(void)

undefined8 FUN_140e81caa(undefined8 param_1,int param_2)

{
  FUN_140e81cd8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140e81cd8 FUN_140e81cd8 body=324 status=ok
// SIG undefined FUN_140e81cd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e81cd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b26bef0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140e81e1c(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140e81e1c(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140e81e67(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140e81e8f(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140e81dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e81e1c FUN_140e81e1c body=75 status=ok
// SIG undefined FUN_140e81e1c(void)

void FUN_140e81e1c(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e81e67 FUN_140e81e67 body=40 status=ok
// SIG undefined FUN_140e81e67(void)

void FUN_140e81e67(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458afd38(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 140e81e8f FUN_140e81e8f body=149 status=ok
// SIG undefined FUN_140e81e8f(void)

void FUN_140e81e8f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x68);
    do {
      FUN_140e81e1c(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar4 + -6) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -10);
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
      if (*(longlong *)(puVar4 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar4 + -0x1a) != 0) {
        FUN_1400020a8();
      }
      puVar4 = puVar4 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e81f2c FUN_140e81f2c body=311 status=ok
// SIG undefined FUN_140e81f2c(void)

undefined8 * FUN_140e81f2c(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c51004();
  *param_1 = &PTR_FUN_14b977010;
  FUN_1400b22c2(&local_68,"/Script/OakGame.ModularGrenade");
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 0x15);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 0x16) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf8 | 2;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xfd;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e820c0 FUN_140e820c0 body=477 status=ok
// SIG undefined FUN_140e820c0(void)

void FUN_140e820c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  
  cVar3 = FUN_144904448((longlong *)(param_1 + 0xc90));
  if (cVar3 == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0xc90);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xc98) == -1) {
    return;
  }
  if (*plVar1 == *(longlong *)(param_1 + 0xc98)) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    lVar4 = FUN_1447210f0(param_1);
    fVar8 = 1.0 - (float)(*(double *)(lVar4 + 0x6d0) - (double)*(float *)(param_1 + 0xc70)) /
                  *(float *)(param_1 + 0xc44);
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    lVar4 = *(longlong *)(param_1 + 0xbe8);
    lVar5 = *(longlong *)(lVar4 + 0x578);
    if (lVar5 == 0) {
      uVar6 = FUN_1407f787c();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(lVar4 + 0x578) = lVar5;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    lVar7 = *(longlong *)(lVar4 + 0x580);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar4 + 0x570) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar4 + 0x570));
      }
      *(longlong *)(lVar4 + 0x580) = lVar7;
    }
    FUN_1447997cc(plVar1,lVar7,fVar8,0,0);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) {
          return;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        return;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140e8229d FUN_140e8229d body=49 status=ok
// SIG undefined FUN_140e8229d(void)

longlong FUN_140e8229d(void)

{
  if (DAT_14c9a2da8 == 0) {
    FUN_140f50038(&DAT_14c9a2da8,&PTR_s__Script_GbxCore_14a17d48f_1_14a17d470);
  }
  return DAT_14c9a2da8;
}



// FUNCTION 140e822ce FUN_140e822ce body=49 status=ok
// SIG undefined FUN_140e822ce(void)

longlong FUN_140e822ce(void)

{
  if (DAT_14cb9ada8 == 0) {
    FUN_140f50038(&DAT_14cb9ada8,&PTR_s__Script_ModelViewViewModel_14b54a60e_2_14b54a5f0);
  }
  return DAT_14cb9ada8;
}



// FUNCTION 140e82300 FUN_140e82300 body=175 status=ok
// SIG undefined FUN_140e82300(void)

undefined8 * FUN_140e82300(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  return &DAT_14c844840;
}



// FUNCTION 140e823be FUN_140e823be body=44 status=ok
// SIG undefined FUN_140e823be(void)

undefined8 FUN_140e823be(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  return 1;
}



// FUNCTION 140e825f0 FUN_140e825f0 body=601 status=ok
// SIG undefined FUN_140e825f0(void)

longlong * FUN_140e825f0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [46];
  byte local_ca;
  byte local_c9;
  int local_c8;
  int local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x138);
    lVar11 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar11);
      (**(code **)(*plVar2 + 0x18))(plVar2,param_3,&local_98);
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar11);
  }
  FUN_140e83cb0(&local_98,param_2);
  FUN_140e836da(*param_2,(int)param_2[1]);
  lVar6 = FUN_140d5712e();
  iVar1 = (int)param_2[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    lVar7 = *param_2;
    local_a8 = param_2;
    bVar4 = FUN_140e8284a(lVar6,lVar7);
    local_b0 = lVar7 + 0x10;
    iVar9 = 0;
    iVar8 = 0;
    local_b8 = lVar7;
    do {
      local_c9 = bVar4;
      local_ca = local_c9 ^ 1;
      lVar7 = (longlong)iVar8;
      iVar10 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar10 = iVar1;
      }
      local_c0 = lVar7 * 0x10;
      lVar12 = local_b0 + local_c0;
      bVar4 = local_c9 & 1;
      local_c8 = iVar9;
      local_c4 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar10;
        if (lVar11 <= lVar7) break;
        lVar3 = *(longlong *)(lVar6 + 0x20);
        FUN_140e82a34(lVar3);
        bVar5 = FUN_140e82874(*(undefined8 *)(lVar3 + 0x138),lVar12);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x10;
        iVar9 = iVar8;
      } while (bVar4 == bVar5);
      iVar8 = iVar9;
      iVar9 = local_c8;
      bVar4 = local_ca;
      iVar10 = iVar8 - local_c4;
      if ((local_c9 & 1) == 0) {
        FUN_1447a1747(local_c0 + local_b8,iVar10);
        iVar9 = local_c8;
        bVar4 = local_ca;
      }
      else {
        if (local_c8 != local_c4) {
          memmove((void *)((longlong)local_c8 * 0x10 + local_b8),(void *)(local_c0 + local_b8),
                  (longlong)iVar10 << 4);
        }
        iVar9 = iVar9 + iVar10;
      }
    } while (lVar7 < lVar11);
    *(int *)(local_a8 + 1) = iVar9;
    param_2 = local_a8;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e8284a FUN_140e8284a body=42 status=ok
// SIG undefined FUN_140e8284a(void)

void FUN_140e8284a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_140e82a34(lVar1);
  FUN_140e82874(*(undefined8 *)(lVar1 + 0x138),param_2);
  return;
}



// FUNCTION 140e82874 FUN_140e82874 body=447 status=ok
// SIG undefined FUN_140e82874(void)

ulonglong FUN_140e82874(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    unaff_RBX = 0;
    uVar4 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar4 = unaff_RBX;
    }
    uVar2 = FUN_144a49b4a(uVar4,puVar5);
    iVar3 = FUN_1456cf568(param_1,uVar2,param_2);
    if (iVar3 == -1) goto LAB_140e829ee;
  }
  iVar3 = (int)param_2[1];
  uVar13 = 0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    lVar9 = 0;
    do {
      uVar6 = ((uint)(ushort)puVar5[lVar9] + (uint)(0x19 < (ushort)puVar5[lVar9] - 0x61) * 0x20) -
              0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar6) & 0xff) * 4);
      unaff_RBX = 0;
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar9 = lVar9 + 1;
    } while (iVar8 != (int)lVar9);
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar13) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
LAB_140e8295c:
      lVar10 = (longlong)iVar8;
      iVar1 = *(int *)(lVar9 + 8 + lVar10 * 0x18);
      iVar12 = iVar8;
      if (iVar1 == iVar3) {
        if (1 < iVar3) {
          unaff_RBX = 0;
          do {
            uVar11 = *(ushort *)(*(longlong *)(lVar9 + lVar10 * 0x18) + unaff_RBX);
            uVar4 = (ulonglong)uVar11;
            uVar7 = *(ushort *)(*param_2 + unaff_RBX);
            if (uVar11 == uVar7) {
              if (uVar11 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar11)) goto LAB_140e829c4;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
              uVar14 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar14]) goto LAB_140e829c4;
            }
            unaff_RBX = unaff_RBX + 2;
          } while( true );
        }
      }
      else if (iVar1 + iVar3 != 1) goto LAB_140e82979;
      goto LAB_140e829e7;
    }
  }
  goto LAB_140e829ee;
LAB_140e829c4:
  if (uVar11 == uVar7) goto LAB_140e829e7;
LAB_140e82979:
  iVar8 = *(int *)(lVar9 + 0x10 + lVar10 * 0x18);
  iVar12 = -1;
  if (iVar8 == -1) goto LAB_140e829e7;
  goto LAB_140e8295c;
LAB_140e829e7:
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),iVar12 == -1);
LAB_140e829ee:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 140e82a34 FUN_140e82a34 body=784 status=ok
// SIG undefined FUN_140e82a34(void)

void FUN_140e82a34(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14c872ce0 != 0 && *(char *)(param_1 + 0x130) == '\0') &&
     (*(char *)(DAT_14c872ce0 + 9) == '\x01')) {
    *(undefined1 *)(param_1 + 0x130) = 1;
    local_78 = 0;
    iVar16 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar10 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c);
    if (uVar10 != 0) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar10);
      }
      FUN_140e83416(&local_98,uVar10);
      if (uVar10 < 4) {
        iVar6 = 1;
      }
      else {
        uVar10 = (uVar10 | 1) + 0xe;
        iVar6 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 1 << ((byte)iVar6 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar6)) {
        local_50 = iVar6;
        FUN_14482b9e8();
      }
    }
    lVar1 = param_1 + 0x48;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_b0 = lVar1;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar15 = 1;
      local_a8._0_4_ = 0xffffffff;
      local_a8._4_4_ = 0;
      local_b8._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      uVar15 = local_b8 >> 0x20;
      iVar16 = *(int *)(param_1 + 0x60);
    }
    lVar5 = local_b0;
    iVar6 = (int)local_b8;
    uVar10 = (uint)local_a8;
    iVar8 = local_a8._4_4_;
    iVar9 = local_a0;
    if (local_a8._4_4_ != iVar16 || local_b0 != lVar1) {
      do {
        FUN_14482b35e(&local_98,&local_b8,(longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x38),0);
        uVar10 = ~(uint)uVar15 & uVar10;
        lVar14 = *(longlong *)(lVar5 + 0x10);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          lVar14 = lVar5;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
        lVar12 = (longlong)iVar6;
        uVar11 = *(uint *)(lVar14 + lVar12 * 4) & uVar10;
        if (uVar11 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar6 < iVar8) {
            lVar13 = 0;
            do {
              uVar11 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
              if (uVar11 != 0) {
                iVar6 = iVar6 + (int)lVar13 + 1;
                uVar10 = 0xffffffff;
                goto LAB_140e82c33;
              }
              iVar9 = iVar9 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar12 != lVar13);
            uVar10 = 0xffffffff;
            iVar6 = iVar4;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar3;
        }
        else {
LAB_140e82c33:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar16 || lVar5 != lVar1);
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
    *puVar7 = FUN_145a09b74;
    puVar7[1] = 0;
    FUN_1457ba470(puVar7 + 2,&local_98);
    lVar1 = *(longlong *)(param_1 + 0x138);
    *(undefined8 **)(param_1 + 0x138) = puVar7 + 2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e82d46 FUN_140e82d46 body=298 status=ok
// SIG undefined FUN_140e82d46(void)

void FUN_140e82d46(longlong *param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    lVar4 = lVar3 + 0x40;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x48);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x50) + 0x7fU & (uint)param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = param_1[1];
      do {
        lVar1 = *(longlong *)(lVar3 + 8) + (longlong)iVar2 * 0xb0;
        if (*(byte *)(*(longlong *)(lVar3 + 8) + (longlong)iVar2 * 0xb0) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            local_48 = 0;
            uStack_40 = 0;
            FUN_1467d5e76(lVar1 + 8,&local_48);
            FUN_140e82fa0(lVar4,&local_48);
            FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            local_48 = 0;
            uStack_40 = 0;
            FUN_1467d5e76(lVar1 + 0x58,&local_48);
            FUN_140e82fa0(lVar4,&local_48);
            FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xa8);
      } while (iVar2 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e82e72 FUN_140e82e72 body=3 status=ok
// SIG undefined FUN_140e82e72(void)

undefined1 FUN_140e82e72(void)

{
  return 4;
}



// FUNCTION 140e82e76 FUN_140e82e76 body=101 status=ok
// SIG undefined FUN_140e82e76(void)

longlong FUN_140e82e76(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aee1c();
  if ((DAT_14c872ce0 != 0 && *(char *)(lVar1 + 0x122) == '\0') &&
     (*(char *)(DAT_14c872ce0 + 9) == '\x01')) {
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"LocalizationPaths",lVar1 + 0xd8,
                  &DAT_14c872af8);
    *(undefined1 *)(lVar1 + 0x122) = 1;
  }
  return lVar1 + 0xd8;
}



// FUNCTION 140e82edc FUN_140e82edc body=195 status=ok
// SIG undefined FUN_140e82edc(void)

longlong FUN_140e82edc(void)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1401aee1c();
  if (*(char *)(lVar1 + 0x11d) == '\0') {
    if ((DAT_14c872ce0 == 0) || (*(char *)(DAT_14c872ce0 + 9) != '\x01')) {
      FUN_140056680(local_30,L"../../../Engine/Content/Localization/Engine");
      FUN_1405e9454(lVar1 + 0x88,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_38 = &DAT_14c872ce8;
      FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"LocalizationPaths",lVar1 + 0x88);
      *(undefined1 *)(lVar1 + 0x11d) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 + 0x88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e82fa0 FUN_140e82fa0 body=268 status=ok
// SIG undefined FUN_140e82fa0(void)

void FUN_140e82fa0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar4 = uVar2 + iVar1;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140e83416(param_1,uVar4);
    if (uVar4 < 4) {
      iVar1 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_14482b9e8(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  lVar5 = *param_2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = (longlong)iVar1 << 4;
    do {
      FUN_140e830ae(param_1,local_34,lVar5,0);
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar5 = *param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(lVar5,uVar3);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e830ae FUN_140e830ae body=726 status=ok
// SIG undefined FUN_140e830ae(void)

int * FUN_140e830ae(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  int *local_68;
  char *local_60;
  int local_58 [2];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_4;
  FUN_14482b5a6(param_1,local_58);
  *local_50 = 0;
  *local_50 = *param_3;
  *param_3 = 0;
  *(int *)(local_50 + 1) = (int)param_3[1];
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  iVar8 = (int)local_50[1];
  uVar9 = 0;
  uVar3 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar3 = uVar9;
  }
  if (0 < (int)uVar3) {
    if (iVar8 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*local_50;
    }
    lVar12 = 0;
    uVar7 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar5[lVar12] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar12]) -
              0x20;
      uVar15 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar9) & 0xff) * 4);
      uVar9 = uVar15 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      uVar7 = (ulonglong)uVar9;
      lVar12 = lVar12 + 1;
    } while (uVar3 != (uint)lVar12);
  }
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar16 != -1) {
LAB_140e831dc:
      plVar6 = (longlong *)(*param_1 + (longlong)iVar16 * 0x18);
      local_68 = param_2;
      if ((int)plVar6[1] == iVar8) {
        lVar12 = *plVar6;
        if (1 < iVar8) {
          lVar13 = 0;
          do {
            uVar14 = *(ushort *)(lVar12 + lVar13);
            uVar7 = (ulonglong)uVar14;
            uVar10 = *(ushort *)(*local_50 + lVar13);
            if (uVar14 == uVar10) {
              if (uVar14 == 0) break;
            }
            else {
              if (0x7f < (uVar10 | uVar14)) goto LAB_140e8324d;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_140e8324d;
            }
            lVar13 = lVar13 + 2;
          } while( true );
        }
        goto LAB_140e83354;
      }
      if ((int)plVar6[1] + iVar8 == 1) {
        lVar12 = *plVar6;
        goto LAB_140e83354;
      }
      goto LAB_140e831fe;
    }
  }
  cVar4 = '\0';
LAB_140e83262:
  if (local_60 != (char *)0x0) {
    *local_60 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar3 < 4) {
      iVar8 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar8 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)((longlong)local_50 + 0x14) = uVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar8;
      FUN_14482b9e8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_140e8324d:
  if (uVar14 == uVar10) {
LAB_140e83354:
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined4 *)((longlong)local_50 + 4);
    lVar12 = local_50[1];
    uVar2 = *(undefined4 *)((longlong)local_50 + 0xc);
    *(int *)plVar6 = (int)*local_50;
    *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
    *(int *)(plVar6 + 1) = (int)lVar12;
    *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
    FUN_140e83386(param_1,local_58[0],1);
    cVar4 = '\x01';
    param_2 = local_68;
    local_58[0] = iVar16;
    goto LAB_140e83262;
  }
LAB_140e831fe:
  iVar16 = *(int *)(*param_1 + 0x10 + (longlong)iVar16 * 0x18);
  cVar4 = '\0';
  if (iVar16 == -1) goto LAB_140e83262;
  goto LAB_140e831dc;
}



// FUNCTION 140e83386 FUN_140e83386 body=144 status=ok
// SIG undefined FUN_140e83386(void)

void FUN_140e83386(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e83416 FUN_140e83416 body=708 status=ok
// SIG undefined FUN_140e83416(void)

void FUN_140e83416(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_1 + 1);
  uVar11 = param_2 - uVar14;
  if (uVar11 != 0 && (int)uVar14 <= (int)param_2) {
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    iVar13 = *(int *)((longlong)param_1 + 0xc);
    uVar9 = uVar14;
    if (iVar13 < (int)param_2) {
      FUN_144727cd0(param_1);
      uVar9 = *(uint *)(param_1 + 1);
      iVar13 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar9 + uVar11;
    if (iVar13 - uVar9 < uVar11) {
      FUN_14482b872(param_1);
    }
    if ((int)uVar9 < (int)param_2) {
      lVar1 = *param_1;
      iVar13 = *(int *)((longlong)param_1 + 0x34);
      puVar8 = (undefined4 *)(lVar1 + uVar3 * 0x18 + -0x14);
      do {
        iVar2 = (int)uVar3;
        if (iVar13 != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x18) = iVar2 + -1;
        }
        puVar8[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (undefined4)param_1[6];
        }
        uVar3 = uVar3 - 1;
        *puVar8 = uVar12;
        *(int *)(param_1 + 6) = iVar2 + -1;
        iVar13 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar13;
        puVar8 = puVar8 + -6;
      } while ((longlong)(int)uVar9 < (longlong)uVar3);
    }
    if (uVar14 == 0) {
      *(uint *)(param_1 + 5) = uVar11;
      if (param_2 != 0) {
        plVar10 = param_1 + 2;
        uVar14 = uVar11 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar14) {
          FUN_14499171c(plVar10,0,uVar14,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar11 + 0x1f & 0xffffffe0;
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar10;
        }
        if (uVar11 < 0x101) {
          uVar14 = uVar14 + (uVar14 == 0);
        }
        memset(plVar6,0,(ulonglong)(uVar14 << 2));
        iVar13 = (int)param_1[5];
        iVar2 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar13 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar10 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar13 % 0x20);
          *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar11) {
      plVar10 = param_1 + 2;
      iVar13 = (int)param_1[5];
      if (param_2 != uVar14) {
        if (iVar13 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar2 = iVar13 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar15 = iVar13 + uVar11;
        iVar5 = iVar13 + uVar11 + -1;
        iVar7 = iVar13 + uVar11 + 0x1e;
        if (-1 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar7 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar15;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) < iVar15) {
            if (iVar15 + 0x1fU < 0xa0) {
              iVar15 = 0x80;
              iVar2 = iVar13;
            }
            else {
              uVar14 = iVar15 + 0x1fU >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar14) {
                  uVar9 = uVar14;
                }
              }
              else {
                uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar3 = FUN_144a3809e(uVar9 << 2,0);
              iVar2 = (int)(uVar3 >> 2);
              iVar15 = -0x20;
              if ((int)uVar14 <= iVar2) {
                iVar15 = iVar2 << 5;
              }
              iVar2 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar15;
            FUN_1446efbd8(plVar10,iVar2);
            iVar15 = (int)param_1[5] + uVar11;
          }
          iVar2 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar2 = iVar15;
          }
          *(int *)(param_1 + 5) = iVar15;
          if (iVar15 % 0x20 != 0) {
            plVar6 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar6 = plVar10;
            }
            bVar4 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f))
                 >> (bVar4 & 0x1f);
          }
        }
      }
      FUN_1447c6044(plVar10,iVar13,uVar11,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e836da FUN_140e836da body=933 status=ok
// SIG undefined FUN_140e836da(void)

void FUN_140e836da(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    local_368 = param_4;
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar20 = &local_358;
    do {
      puVar8 = (undefined8 *)*plVar20;
      iVar16 = (int)plVar20[2];
      iVar11 = (int)((ulonglong)(plVar20[1] - (longlong)puVar8) >> 4);
      puVar14 = puVar8;
      puVar6 = (undefined8 *)plVar20[1];
      if (iVar16 != 0) {
LAB_140e8378b:
        puVar15 = puVar6;
        if (8 < (int)(iVar11 + 1U)) {
          uVar9 = (ulonglong)(iVar11 + 1U >> 1);
          uVar3 = puVar14[uVar9 * 2];
          uVar4 = (puVar14 + uVar9 * 2)[1];
          uVar5 = puVar14[1];
          puVar14[uVar9 * 2] = *puVar14;
          (puVar14 + uVar9 * 2)[1] = uVar5;
          *puVar14 = uVar3;
          puVar14[1] = uVar4;
          puVar10 = puVar15 + 2;
          puVar8 = puVar14;
LAB_140e837c8:
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + 2;
            if (puVar15 < puVar8) break;
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(puVar7 + 3) != 0) {
              puVar17 = (undefined2 *)puVar7[2];
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar14;
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar19 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar17 + lVar12);
              uVar13 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140e83805;
                }
                iVar11 = uVar19 - uVar13;
                goto LAB_140e8382f;
              }
              if (uVar1 == 0) break;
LAB_140e83805:
              lVar12 = lVar12 + 2;
            }
            iVar11 = 0;
LAB_140e8382f:
          } while (-1 < iVar11);
LAB_140e83834:
          puVar6 = puVar10;
          puVar10 = puVar6 + -2;
          if (puVar14 < puVar10) {
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar17 = (undefined2 *)*puVar14;
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar6 + -1) != 0) {
              puVar18 = (undefined2 *)puVar6[-2];
            }
            lVar12 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar2 = *(ushort *)((longlong)puVar17 + lVar12);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_140e8389b;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar11 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_140e8389d;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_140e8389d;
                }
              }
              lVar12 = lVar12 + 2;
            } while( true );
          }
          goto LAB_140e838a1;
        }
        for (; puVar8 = puVar14, puVar6 = puVar14, puVar14 < puVar15; puVar15 = puVar15 + -2) {
joined_r0x000140e83983:
          puVar10 = puVar6 + 2;
          if (puVar10 <= puVar15) {
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(puVar6 + 3) != 0) {
              puVar17 = (undefined2 *)puVar6[2];
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar8;
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar19 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar17 + lVar12);
              uVar13 = (uint)uVar2;
              puVar6 = puVar10;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x000140e83983;
LAB_140e839c3:
              lVar12 = lVar12 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140e839c3;
            }
            if ((int)(uVar19 - uVar13) < 0) {
              puVar8 = puVar10;
            }
            goto joined_r0x000140e83983;
          }
          local_58 = *puVar8;
          uStack_50 = puVar8[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = puVar15[1];
          *puVar8 = *puVar15;
          puVar8[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar15 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_140e83a2c;
      }
LAB_140e83a74:
      FUN_1467c01ab(puVar8);
LAB_140e83a2c:
      plVar20 = plVar20 + -3;
    } while (&local_358 <= plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140e8389b:
  iVar11 = 0;
LAB_140e8389d:
  if (iVar11 < 0) goto LAB_140e838a1;
  goto LAB_140e83834;
LAB_140e838a1:
  if (puVar8 <= puVar10) {
    uVar3 = *puVar8;
    uVar4 = puVar7[3];
    uVar5 = puVar6[-1];
    *puVar8 = *puVar10;
    puVar7[3] = uVar5;
    *puVar10 = uVar3;
    puVar6[-1] = uVar4;
    goto LAB_140e837c8;
  }
  local_58 = *puVar14;
  uStack_50 = puVar14[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = puVar6[-1];
  *puVar14 = *puVar10;
  puVar14[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar6 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar6 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar6 + -4) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar6 = puVar6 + -4;
  local_360 = puVar15;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar6 - (longlong)puVar14 < (longlong)puVar15 - (longlong)puVar8) {
    if (puVar8 < puVar15) {
      *plVar20 = (longlong)puVar8;
      plVar20[1] = (longlong)puVar15;
      *(int *)(plVar20 + 2) = iVar16;
      plVar20 = plVar20 + 3;
    }
    puVar8 = puVar14;
    if (puVar10 <= puVar14 + 2) goto LAB_140e83a2c;
  }
  else {
    if (puVar14 + 2 < puVar10) {
      *plVar20 = (longlong)puVar14;
      plVar20[1] = (longlong)puVar6;
      *(int *)(plVar20 + 2) = iVar16;
      plVar20 = plVar20 + 3;
    }
    puVar6 = puVar15;
    if (puVar15 <= puVar8) goto LAB_140e83a2c;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar8) >> 4);
  puVar14 = puVar8;
  if (iVar16 == 0) goto LAB_140e83a74;
  goto LAB_140e8378b;
}



// FUNCTION 140e83a80 FUN_140e83a80 body=559 status=ok
// SIG undefined FUN_140e83a80(void)

longlong * FUN_140e83a80(byte *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  bVar2 = *param_1;
  if ((bVar2 & 8) != 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_58 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",param_3,&local_48);
    lVar3 = (longlong)(int)(uint)uStack_40;
    if (lVar3 != 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_40;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_40) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      memmove((void *)((longlong)iVar1 * 0x10 + *param_2),local_48,lVar3 << 4);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
    FUN_1447a1747(local_48,0);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar2 = *param_1;
  }
  if ((bVar2 & 2) != 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_58 = &DAT_14c872bc8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",param_3,&local_48);
    lVar3 = (longlong)(int)(uint)uStack_40;
    if (lVar3 != 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_40;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_40) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      memmove((void *)((longlong)iVar1 * 0x10 + *param_2),local_48,lVar3 << 4);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
    FUN_1447a1747(local_48,0);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar2 = *param_1;
  }
  if ((bVar2 & 4) != 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_58 = &DAT_14c872af8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",param_3,&local_48);
    lVar3 = (longlong)(int)(uint)uStack_40;
    if (lVar3 != 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_40;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_40) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      memmove((void *)((longlong)iVar1 * 0x10 + *param_2),local_48,lVar3 << 4);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
    FUN_1447a1747(local_48,0);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e83cb0 FUN_140e83cb0 body=564 status=ok
// SIG undefined FUN_140e83cb0(void)

longlong * FUN_140e83cb0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_78 = param_1;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1408be2c4(param_2);
  }
  local_60 = local_78 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)local_78[5] == 0) {
    uVar16 = 1;
    uVar13 = 0xffffffff;
    local_58._4_4_ = 0;
    uVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 & 0xffffffff;
    uVar16 = local_68 >> 0x20;
    uVar13 = local_58 & 0xffffffff;
  }
  plVar4 = local_60;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      local_7c = (uint)uVar13;
      puVar15 = (undefined8 *)((longlong)iVar7 * 0x18 + *local_78);
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      local_70 = uVar11;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1447a1bd6(param_2,iVar7);
      }
      lVar14 = *param_2;
      lVar9 = (longlong)iVar7 * 0x10;
      puVar1 = (undefined8 *)(lVar14 + lVar9);
      *(undefined8 *)(lVar14 + lVar9) = 0;
      iVar7 = *(int *)(puVar15 + 1);
      _Src = (void *)*puVar15;
      *(int *)(lVar14 + 8 + lVar9) = iVar7;
      if ((longlong)iVar7 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar7,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar7 * 2);
      }
      uVar12 = local_7c & ~(uint)uVar16;
      uVar13 = (ulonglong)uVar12;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar3 = (int)plVar4[3];
      iVar7 = (int)local_70;
      lVar14 = (longlong)iVar7;
      uVar12 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar12;
      uVar11 = local_70;
      if (uVar12 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar12 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar14 * 4 + 4);
          if (uVar12 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar14 == lVar9) goto LAB_140e83e6f;
        }
        uVar11 = (ulonglong)(iVar7 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_140e83e6f:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e83ee5 FUN_140e83ee5 body=770 status=ok
// SIG undefined FUN_140e83ee5(void)

longlong * FUN_140e83ee5(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_e8 [46];
  byte local_ba;
  byte local_b9;
  int local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong **local_80;
  code *local_78;
  longlong **local_70;
  longlong *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1457ba7b4(local_58);
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar10 = (undefined8 *)*param_2;
    lVar11 = (longlong)*(int *)(param_2 + 1) << 4;
    do {
      FUN_140c50e9c(&local_90,puVar10,1);
      iVar1 = (int)local_88;
      iVar5 = ((int)local_88 == 0) + 7;
      local_68 = local_90;
      local_90 = (longlong *)0x0;
      local_60 = (int)local_88;
      iVar12 = local_88._4_4_;
      local_5c = local_88._4_4_;
      local_88 = (longlong *)0x0;
      iVar8 = iVar5 + iVar1;
      if (iVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar8);
      }
      if (iVar12 < iVar8) {
        FUN_1446f8c06(&local_68);
      }
      FUN_1400020e8(&local_68,L".locres",7);
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar6 = (longlong *)FUN_14054d1d4();
      local_88 = local_58;
      local_78 = FUN_14276b84a;
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(puVar10 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar10;
      }
      local_90 = param_1;
      local_80 = &local_68;
      local_70 = &local_90;
      (**(code **)(*plVar6 + 0x88))(plVar6,puVar9,&local_78);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  lVar11 = FUN_140d5712e();
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar7 = *param_1;
    bVar3 = FUN_140e8284a(lVar11,lVar7);
    local_98 = lVar7 + 0x10;
    iVar12 = 0;
    iVar5 = 0;
    local_a8 = lVar7;
    local_a0 = param_1;
    do {
      local_b9 = bVar3;
      local_ba = local_b9 ^ 1;
      lVar7 = (longlong)iVar5;
      iVar8 = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      local_b0 = lVar7 * 0x10;
      lVar14 = local_98 + local_b0;
      bVar3 = local_b9 & 1;
      local_b8 = iVar12;
      local_b4 = iVar5;
      do {
        lVar7 = lVar7 + 1;
        iVar12 = iVar8;
        if (lVar13 <= lVar7) break;
        lVar2 = *(longlong *)(lVar11 + 0x20);
        FUN_140e82a34(lVar2);
        bVar4 = FUN_140e82874(*(undefined8 *)(lVar2 + 0x138),lVar14);
        iVar5 = iVar5 + 1;
        lVar14 = lVar14 + 0x10;
        iVar12 = iVar5;
      } while (bVar3 == bVar4);
      iVar5 = iVar12;
      param_1 = local_a0;
      iVar12 = local_b8;
      bVar3 = local_ba;
      iVar8 = iVar5 - local_b4;
      if ((local_b9 & 1) == 0) {
        FUN_1447a1747(local_b0 + local_a8,iVar8);
        param_1 = local_a0;
        iVar12 = local_b8;
        bVar3 = local_ba;
      }
      else {
        if (local_b8 != local_b4) {
          memmove((void *)((longlong)local_b8 * 0x10 + local_a8),(void *)(local_b0 + local_a8),
                  (longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
    } while (lVar7 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e841e8 FUN_140e841e8 body=1155 status=ok
// SIG undefined FUN_140e841e8(void)

void FUN_140e841e8(longlong *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 **ppuVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined2 **ppuVar16;
  uint uVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined2 **local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar17 = *(uint *)(param_2 + 1);
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) < uVar17) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar17);
    }
    FUN_140e83416(param_3,uVar17);
    iVar6 = 1;
    if (3 < uVar17) {
      uVar17 = (uVar17 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((*(int *)(param_3 + 0x48) == 0) || (*(int *)(param_3 + 0x48) < iVar6)) {
      *(int *)(param_3 + 0x48) = iVar6;
      FUN_14482b9e8(param_3);
    }
  }
  if ((longlong)(int)param_2[1] != 0) {
    ppuVar11 = (undefined2 **)*param_2;
    ppuVar16 = ppuVar11 + (longlong)(int)param_2[1] * 2;
    local_b8 = ppuVar16;
    local_b0 = param_1;
    local_a8 = param_3;
    do {
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_140056680(&local_98,&DAT_149e06120);
      local_c0 = 0;
      local_c8 = 0;
      cVar5 = FUN_1407cdbc6(ppuVar11,&local_98,&local_78,local_88);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (cVar5 == '\0') {
        if (&local_78 != ppuVar11) {
          uVar17 = *(uint *)(ppuVar11 + 1);
          puVar12 = *ppuVar11;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar17);
          if (uVar17 == 0 && uStack_70._4_4_ == 0) {
            uStack_70 = (ulonglong)uVar17;
          }
          else {
            FUN_1446dd670(&local_78);
            if (uVar17 != 0) {
              memcpy(local_78,puVar12,(longlong)(int)uVar17 * 2);
            }
          }
        }
LAB_140e84476:
        plVar3 = (longlong *)param_1[1];
        if (plVar3 == (longlong *)0x0) {
LAB_140e845b7:
          FUN_140e830ae(param_3,&local_98,&local_78,0);
        }
        else {
          uVar17 = 0;
          iVar6 = (int)uStack_70 + -1;
          if ((int)uStack_70 == 0) {
            iVar6 = 0;
          }
          if (0 < iVar6) {
            puVar12 = &DAT_149dfb77a;
            if ((int)uStack_70 != 0) {
              puVar12 = local_78;
            }
            lVar14 = 0;
            do {
              uVar7 = ((uint)(ushort)puVar12[lVar14] +
                      (uint)(0x19 < (ushort)puVar12[lVar14] - 0x61) * 0x20) - 0x20;
              uVar17 = uVar17 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar17 ^ uVar7) & 0xff) * 4);
              uVar17 = uVar17 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar7 >> 8 & 0xff) * 4
                                );
              lVar14 = lVar14 + 1;
            } while (iVar6 != (int)lVar14);
          }
          if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
            plVar8 = plVar3 + 7;
            if ((longlong *)plVar3[8] != (longlong *)0x0) {
              plVar8 = (longlong *)plVar3[8];
            }
            iVar6 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar3[9] - 1U & uVar17) * 4);
            if (iVar6 != -1) {
              lVar14 = *plVar3;
LAB_140e84532:
              lVar9 = (longlong)iVar6;
              iVar6 = *(int *)(lVar14 + 8 + lVar9 * 0x18);
              if (iVar6 == (int)uStack_70) {
                if (1 < (int)uStack_70) {
                  lVar13 = 0;
                  do {
                    uVar1 = *(ushort *)(*(longlong *)(lVar14 + lVar9 * 0x18) + lVar13);
                    uVar2 = *(ushort *)((longlong)local_78 + lVar13);
                    if (uVar1 == uVar2) {
                      if (uVar1 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar2 | uVar1)) {
                        iVar6 = (uint)uVar1 - (uint)uVar2;
                        goto LAB_140e845ab;
                      }
                      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                      goto code_r0x000140e845a8;
                    }
                    lVar13 = lVar13 + 2;
                  } while( true );
                }
              }
              else if (iVar6 + (int)uStack_70 != 1) goto LAB_140e84549;
              goto LAB_140e845b7;
            }
          }
        }
      }
      else {
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        bVar4 = true;
        iVar6 = FUN_1403de9f2(local_88,&local_98,&DAT_149e06196,1);
        if (iVar6 != 0) {
          if ((int)uStack_90 != 0) {
            plVar3 = (longlong *)*param_1;
            iVar6 = (int)plVar3[1];
            plVar8 = local_98;
LAB_140e8434f:
            if (iVar6 == (int)plVar8[1]) {
              if (1 < iVar6) {
                lVar14 = 0;
                do {
                  uVar1 = *(ushort *)(*plVar3 + lVar14);
                  uVar2 = *(ushort *)(*plVar8 + lVar14);
                  param_1 = local_b0;
                  ppuVar16 = local_b8;
                  param_3 = local_a8;
                  local_a0 = plVar3;
                  if (uVar1 == uVar2) {
                    if (uVar1 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar2 | uVar1)) {
                      iVar15 = (uint)uVar1 - (uint)uVar2;
                      goto LAB_140e843b9;
                    }
                    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                    goto code_r0x000140e843b6;
                  }
                  lVar14 = lVar14 + 2;
                } while( true );
              }
            }
            else if ((int)plVar8[1] + iVar6 != 1) goto LAB_140e843e0;
            goto LAB_140e84459;
          }
LAB_140e84457:
          bVar4 = false;
        }
LAB_140e84459:
        FUN_1447a1747();
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (bVar4) goto LAB_140e84476;
      }
LAB_140e845cc:
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar11 = ppuVar11 + 2;
    } while (ppuVar11 != ppuVar16);
  }
  cVar5 = FUN_1467d5c20(param_3);
  if (cVar5 != '\0') {
    uVar17 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
    iVar6 = 1;
    if (3 < uVar17) {
      uVar10 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar14 & 0x1f);
    }
    *(int *)(param_3 + 0x48) = iVar6;
    FUN_14482b9e8(param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140e843b6:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_140e843b9:
  if (iVar15 == 0) goto LAB_140e84459;
LAB_140e843e0:
  plVar8 = plVar8 + 2;
  if (plVar8 == local_98 + (longlong)(int)uStack_90 * 2) goto LAB_140e84457;
  goto LAB_140e8434f;
code_r0x000140e845a8:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_140e845ab:
  if (iVar6 == 0) goto LAB_140e845b7;
LAB_140e84549:
  iVar6 = *(int *)(lVar14 + 0x10 + lVar9 * 0x18);
  if (iVar6 == -1) goto LAB_140e845cc;
  goto LAB_140e84532;
}



// FUNCTION 140e8467c FUN_140e8467c body=40 status=ok
// SIG undefined FUN_140e8467c(void)

undefined8 FUN_140e8467c(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e846a4 FUN_140e846a4 body=6 status=ok
// SIG undefined FUN_140e846a4(void)

byte FUN_140e846a4(longlong param_1)

{
  return *(byte *)(param_1 + 1) & 0xf;
}



// FUNCTION 140e846aa FUN_140e846aa body=18 status=ok
// SIG undefined FUN_140e846aa(void)

void FUN_140e846aa(uint *param_1,byte param_2)

{
  *param_1 = (uint)param_2 << 0xc | *param_1 & 0xffffefff;
  return;
}



// FUNCTION 140e846bc FUN_140e846bc body=18 status=ok
// SIG undefined FUN_140e846bc(void)

void FUN_140e846bc(uint *param_1,byte param_2)

{
  *param_1 = (uint)param_2 << 8 | *param_1 & 0xfffff0ff;
  return;
}



// FUNCTION 140e846ce FUN_140e846ce body=27 status=ok
// SIG undefined FUN_140e846ce(void)

undefined8 FUN_140e846ce(undefined4 *param_1,undefined8 param_2)

{
  FUN_140e846e9(param_2,*param_1);
  return param_2;
}



// FUNCTION 140e846e9 FUN_140e846e9 body=243 status=ok
// SIG undefined FUN_140e846e9(void)

longlong * FUN_140e846e9(longlong *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_2 & 0xff) != 0) && (DAT_14cae3c70 != (code *)0x0)) {
    uVar7 = param_2 & 0xff;
    do {
      pcVar2 = DAT_14cae3c70;
      uVar6 = -uVar7 & uVar7;
      local_44 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> local_44 & 1) == 0; local_44 = local_44 + 1) {
        }
      }
      if (uVar6 == 0) {
        local_44 = 0;
      }
      plVar5 = DAT_14cae3c80;
      if (DAT_14cae3c80 == (longlong *)0x0) {
        plVar5 = &DAT_14cae3c90;
      }
      uVar3 = (**(code **)(*plVar5 + 8))();
      lVar4 = (*pcVar2)(uVar3,&local_44);
      if (lVar4 != 0) {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_147adf96a(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      bVar8 = uVar6 != uVar7;
      uVar7 = uVar6 ^ uVar7;
    } while (bVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e847de FUN_140e847de body=45 status=ok
// SIG undefined FUN_140e847de(void)

longlong FUN_140e847de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_140e8480c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e8480c FUN_140e8480c body=234 status=ok
// SIG undefined FUN_140e8480c(void)

void FUN_140e8480c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a44e760;
  param_1[3] = &PTR_FUN_14a44e7a8;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3d];
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
  plVar3 = (longlong *)param_1[0x3b];
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
  plVar3 = (longlong *)param_1[0x39];
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
  lVar4 = 0x158;
  do {
    FUN_140e848f6((longlong)param_1 + lVar4);
    lVar4 = lVar4 + -0x68;
  } while (lVar4 != -0x48);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e848b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e848f6 FUN_140e848f6 body=128 status=ok
// SIG undefined FUN_140e848f6(void)

void FUN_140e848f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149edadb0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_140055b91(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140055b91(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 140e84976 FUN_140e84976 body=127 status=ok
// SIG undefined FUN_140e84976(void)

void FUN_140e84976(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar3[5];
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
    *puVar3 = &PTR_LAB_14a451c70;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    return;
  }
  return;
}



// FUNCTION 140e849f6 FUN_140e849f6 body=159 status=ok
// SIG undefined FUN_140e849f6(void)

void FUN_140e849f6(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e84a96();
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    local_28 = 0x17ca2837;
    uStack_24 = 0xc1bf47e1;
    uStack_20 = 0x96b238e4;
    uStack_1c = 0x9d8f14fe;
    iVar1 = FUN_1448a256a();
    if (iVar1 < 0) {
      fVar2 = *(float *)(param_1 + 0x1a0);
      fVar3 = *(float *)(param_1 + 0x1c0);
      if (90.0 <= fVar2) {
        fVar2 = 90.0;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 0x1a0) = fVar2;
      if (90.0 <= fVar3) {
        fVar3 = 90.0;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0x1c0) = fVar3;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e84a96 FUN_140e84a96 body=110 status=ok
// SIG undefined FUN_140e84a96(void)

void FUN_140e84a96(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14024bdb0();
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    local_28 = 0x7bf5b87a;
    uStack_24 = 0x18e7404f;
    uStack_20 = 0x8b9a2ea5;
    uStack_1c = 0x8c48535f;
    iVar1 = FUN_1448a256a();
    if ((iVar1 < 0) && (*(char *)(param_1 + 0x58) == '\x01')) {
      *(undefined1 *)(param_1 + 0x58) = 3;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e84b06 FUN_140e84b06 body=63 status=ok
// SIG undefined FUN_140e84b06(void)

longlong FUN_140e84b06(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140e84b64(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_140e84b45(lVar2);
  return lVar2;
}



// FUNCTION 140e84b45 FUN_140e84b45 body=30 status=ok
// SIG undefined FUN_140e84b45(void)

void FUN_140e84b45(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  return;
}



// FUNCTION 140e84b64 FUN_140e84b64 body=370 status=ok
// SIG undefined FUN_140e84b64(void)

void FUN_140e84b64(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e84bed;
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
LAB_140e84bed:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140e84ce4 FUN_140e84ce4 body=237 status=ok
// SIG undefined FUN_140e84ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e84ce4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac5d6a0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140e84dd2(param_1 + 7);
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e84dd2 FUN_140e84dd2 body=55 status=ok
// SIG undefined FUN_140e84dd2(void)

void FUN_140e84dd2(longlong *param_1)

{
  FUN_140e84e0a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e84e0a FUN_140e84e0a body=123 status=ok
// SIG undefined FUN_140e84e0a(void)

void FUN_140e84e0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140e84e94 FUN_140e84e94 body=96 status=ok
// SIG undefined FUN_140e84e94(void)

undefined8 * FUN_140e84e94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b30c720;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e84ef4 FUN_140e84ef4 body=910 status=ok
// SIG undefined FUN_140e84ef4(void)

uint * FUN_140e84ef4(longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *_Dst;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_1447262c2(param_4);
  if (lVar7 == 0) {
LAB_140e84f59:
    lVar7 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140e84f59;
    lVar7 = *(longlong *)(lVar7 + 0xf48);
  }
  lVar8 = FUN_1447262c2(param_4);
  if (lVar8 == 0) {
LAB_140e8504a:
    if (lVar7 != 0) goto LAB_140e84fd7;
LAB_140e8504f:
    lVar7 = FUN_1400e8a68(param_4);
    if (lVar7 != 0) goto LAB_140e84fd7;
  }
  else {
    lVar9 = FUN_140e85284();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_140e8504a;
    lVar7 = *(longlong *)(lVar8 + 0x168);
    if (lVar7 == 0) goto LAB_140e8504f;
    if (DAT_14cba8288 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140e8504f;
LAB_140e84fd7:
    cVar2 = (char)param_1[1];
    if (cVar2 == '\x02') {
      if (*(longlong *)(lVar7 + 0x11e8) == 0) {
        lVar7 = 0xc;
      }
      else {
        lVar7 = (ulonglong)(*(uint *)(*(longlong *)(lVar7 + 0x11e8) + 0x36a8) & 4) + 0xc;
      }
      uVar1 = *(uint *)((longlong)param_1 + lVar7);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar1;
      bVar4 = 3;
      goto LAB_140e85012;
    }
    if (cVar2 == '\0') {
      cVar2 = FUN_1457baa4c(lVar7);
      bVar4 = 1;
      bVar5 = 1;
      if (cVar2 != '\0') {
        bVar5 = FUN_145a368d2(lVar7 + 0x4ea0);
      }
      bVar3 = FUN_1457baa60(lVar7 + 0x4ea0);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (uint)(bVar3 & bVar5);
      goto LAB_140e85012;
    }
    if (cVar2 == '\x01') {
      bVar4 = FUN_1457baa4c(lVar7);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (uint)bVar4;
      bVar4 = 1;
      goto LAB_140e85012;
    }
  }
  bVar4 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar10 = (ulonglong)((uint)bVar4 * 0x120);
  uVar1 = *(uint *)((longlong)&DAT_14c9a8510 + uVar10);
  uVar6 = (ushort)uVar1;
  *(ushort *)(param_2 + 6) = uVar6;
  _Dst = param_2;
  if (0x18 < uVar6) {
    _Dst = (uint *)FUN_14001cc68(uVar1 & 0xffff);
    *(uint **)param_2 = _Dst;
  }
  if (*(code **)((longlong)&DAT_14c9a85a8 + uVar10) == (code *)0x0) {
    memset(_Dst,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
  }
  else {
    (**(code **)((longlong)&DAT_14c9a85a8 + uVar10))();
  }
LAB_140e85012:
  *(byte *)(param_2 + 8) = bVar4;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e85284 FUN_140e85284 body=228 status=ok
// SIG undefined FUN_140e85284(void)

longlong FUN_140e85284(void)

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
  if (DAT_14cba9d10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464dbf9a;
    local_38 = &LAB_148c0cc29;
    local_40 = &LAB_1413f9882;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2f20;
    FUN_14081cfa3(L"/Script/OakGame",L"OakDrone",&DAT_14cba9d10,&DAT_148c0cc28);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba9d10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8536a FUN_140e8536a body=508 status=ok
// SIG undefined FUN_140e8536a(void)

ulonglong FUN_140e8536a(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  ushort uVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  ulonglong uStack_70;
  longlong local_68;
  int local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  undefined7 uVar9;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(byte *)(param_1 + 0x74c) & 0xc) != 0) || (lVar3 = FUN_1447210f0(), lVar3 == 0)) {
    uVar8 = 0;
    goto LAB_140e8539e;
  }
  pplVar7 = &local_78;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_145821ea6(pplVar7);
  local_98 = (uint)*(undefined8 *)(lVar3 + 0x18);
  uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
  FUN_1400021e4(&local_98,&local_68);
  bVar1 = true;
  if ((longlong)(int)uStack_70 != 0) {
    plVar4 = local_78;
LAB_140e85422:
    if ((int)plVar4[1] != local_60) {
      if ((int)plVar4[1] + local_60 == 1) goto LAB_140e8548b;
      goto LAB_140e85480;
    }
    if (1 < local_60) {
      pplVar7 = (longlong **)0x0;
      do {
        uVar10 = *(ushort *)(*plVar4 + (longlong)pplVar7);
        uVar8 = (ulonglong)uVar10;
        uVar5 = *(ushort *)(local_68 + (longlong)pplVar7);
        if (uVar10 == uVar5) {
          if (uVar10 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar10)) goto LAB_140e8546d;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_140e8546d;
        }
        pplVar7 = (longlong **)((longlong)pplVar7 + 2);
      } while( true );
    }
    goto LAB_140e8548b;
  }
LAB_140e8548d:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar9 = (undefined7)((ulonglong)pplVar7 >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if (!bVar1) {
    FUN_144928b90(&local_68,2);
    local_88 = DAT_14cbca888;
    local_80 = DAT_14cbca890;
    FUN_144928d62(local_58,1);
    local_98 = local_98 & 0xffffff00;
    uStack_94 = 0;
    uStack_90 = 0;
    local_8c = 0;
    lVar3 = FUN_140149a73(lVar3,0);
    if (lVar3 == 0) {
LAB_140e85552:
      uVar2 = FUN_140321d1a(&local_98);
      uVar8 = (ulonglong)uVar2;
    }
    else {
      FUN_14039fc7b(&local_68,&local_98,lVar3,0);
      if ((char)local_98 != '\x01') goto LAB_140e85552;
      uVar8 = CONCAT71(uVar9,local_8c != 0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140e8539e:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
LAB_140e8546d:
  if (uVar10 == uVar5) {
LAB_140e8548b:
    bVar1 = false;
    goto LAB_140e8548d;
  }
LAB_140e85480:
  plVar4 = plVar4 + 2;
  if (plVar4 == local_78 + (longlong)(int)uStack_70 * 2) goto LAB_140e8548d;
  goto LAB_140e85422;
}



// FUNCTION 140e85568 FUN_140e85568 body=297 status=ok
// SIG undefined FUN_140e85568(void)

void FUN_140e85568(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x158) != 0) {
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_140bef9ec();
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_140bef9ec(*(undefined8 *)(param_1 + 0x158));
    }
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  plVar3 = *(longlong **)(param_1 + 0x170);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
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
  *(undefined8 *)(param_1 + 0x178) = 0;
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
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
  *(undefined8 *)(param_1 + 0x158) = 0;
  plVar3 = *(longlong **)(param_1 + 0x160);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140e85658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e85692 FUN_140e85692 body=9 status=ok
// SIG undefined FUN_140e85692(void)

void FUN_140e85692(longlong param_1)

{
  FUN_140e8569c(param_1 + 0x10);
  return;
}



// FUNCTION 140e8569c FUN_140e8569c body=140 status=ok
// SIG undefined FUN_140e8569c(void)

void FUN_140e8569c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9a2a60;
  FUN_140d4df51(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b430d60;
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
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
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e85724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e85728 FUN_140e85728 body=582 status=ok
// SIG undefined FUN_140e85728(void)

void FUN_140e85728(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  
  plVar1 = (longlong *)(param_1 + 0x3b0);
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0x3b0) + 0x10))(plVar1);
  if (cVar5 != '\0') {
    lVar7 = (**(code **)(*plVar1 + 0x20))(plVar1);
    if (*(char *)(lVar7 + 0x18) == '\x01') {
      *(undefined1 *)(lVar7 + 0x18) = 0;
      FUN_140cd522c(lVar7 + 8);
    }
    *(undefined1 *)(lVar7 + 0x590) = 0;
  }
  lVar7 = FUN_1447210f0(param_1);
  if ((((lVar7 != 0) && (lVar7 = FUN_1400f6e0c(lVar7), lVar7 != 0)) && (param_1 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0xc0), lVar7 != 0)) {
    iVar3 = *(int *)(lVar7 + 0x60);
    if (iVar3 == 0) {
      uVar14 = 1;
      uVar17 = 0;
      iVar6 = 0;
      iVar13 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar7 + 0x58);
      if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
        puVar8 = (uint *)(lVar7 + 0x48);
      }
      uVar18 = *puVar8;
      if (uVar18 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        uVar17 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar17;
        }
        iVar13 = 0;
        do {
          if (uVar14 == uVar17) goto LAB_140e85915;
          iVar13 = iVar13 + 0x20;
          uVar18 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar17 = 0;
        iVar13 = 0;
      }
      uVar14 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar14 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 != iVar3) {
      uVar18 = 0xffffffff;
      do {
        puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x38) + (longlong)iVar6 * 0x1d8 + 0x38);
        cVar5 = FUN_140e8596e(puVar12,param_1);
        if (cVar5 != '\0') {
          *puVar12 = 0;
          break;
        }
        uVar18 = uVar18 & ~(uint)uVar14;
        puVar8 = *(uint **)(lVar7 + 0x58);
        if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
          puVar8 = (uint *)(lVar7 + 0x48);
        }
        iVar4 = *(int *)(lVar7 + 0x60);
        iVar6 = (int)uVar17;
        lVar16 = (longlong)iVar6;
        uVar11 = puVar8[lVar16] & uVar18;
        if (uVar11 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar15 = 0;
            do {
              uVar11 = puVar8[lVar16 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar18 = 0xffffffff;
                goto LAB_140e858e0;
              }
              iVar13 = iVar13 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar16 != lVar15);
            uVar18 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar4;
        }
        else {
LAB_140e858e0:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar6 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
        }
      } while (iVar6 != iVar3);
    }
  }
LAB_140e85915:
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140e8596e FUN_140e8596e body=316 status=ok
// SIG undefined FUN_140e8596e(void)

bool FUN_140e8596e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140e85aaa FUN_140e85aaa body=2494 status=ok
// SIG undefined FUN_140e85aaa(void)

void FUN_140e85aaa(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  uint *puVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  bool bVar18;
  uint uVar19;
  undefined1 auStack_188 [32];
  uint local_168;
  uint local_160;
  uint local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  code *local_120;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  int local_d0;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  ushort local_a8;
  byte local_a0;
  undefined8 ***local_98;
  int local_90;
  undefined8 local_88;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar5 = param_1[6];
  param_1[6] = (longlong)param_2;
  (**(code **)(*param_1 + 0x2b8))();
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar5;
  if ((param_1[10] != 0) && ((int)param_1[0xb] - 1U < 0xfffffffe)) {
    if (((*(byte *)(param_1 + 7) & 1) == 0) && (*(char *)((longlong)param_1 + 0x3c) != '\x01')) {
      if (((longlong *)param_2[0x15] != (longlong *)0x0) &&
         (lVar5 = (**(code **)(*(longlong *)param_2[0x15] + 0x5d8))(), lVar5 != 0)) {
        if (DAT_14cb61cd0 == 0) {
          local_130 = &local_f8;
          local_f8 = FUN_141030f22;
          local_120 = FUN_14081d0ea;
          local_128 = &LAB_1463b31ae;
          local_138 = &LAB_1486dca4f;
          local_140 = (undefined8 *)&LAB_1464f50a6;
          local_148 = &DAT_149e063b2;
          local_150 = 0;
          local_158 = 0x10000004;
          local_160 = 8;
          local_168 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
          local_f8 = (code *)((ulonglong)local_f8 & 0xffffffffffffff00);
          local_d0 = 0;
          FUN_1456bb102(&local_f8,*(undefined8 *)(lVar5 + 0x3d0));
          puVar10 = &local_c0;
          FUN_1448729ea(param_1 + 0x10,puVar10,&local_f8);
          uVar19 = local_c0;
          if (local_a0 != 3) {
            FUN_1400b56fe(&local_98,&local_c0,3);
            if (local_78 == 0) {
              uVar19 = 0x3f800000;
            }
            else {
              uVar19 = (uint)local_98;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar17 = &local_98;
              if (0x18 < local_80) {
                ppppuVar17 = (undefined8 ****)local_98;
              }
              (*pcVar2)(ppppuVar17);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(local_98);
            }
          }
          local_98 = (undefined8 ***)param_1[10];
          local_90 = (int)param_1[0xb];
          local_88 = 0;
          local_150 = 0;
          local_160 = local_160 & 0xffffff00;
          local_168 = local_168 & 0xffffff00;
          local_158 = uVar19;
          FUN_140cab31c(lVar5,&local_98,(int)param_1[0x1a],lVar5 + 0x960);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_a8) {
              puVar10 = (uint *)CONCAT44(uStack_bc,local_c0);
            }
            (*pcVar2)(puVar10);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
          }
          lVar5 = DAT_14c9a3da0;
          if ((longlong)local_d0 != 0) {
            lVar13 = (longlong)local_d0 + -1;
            lVar14 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
            if (*(longlong *)(lVar5 + lVar14) != 0) {
              FUN_1400020a8();
            }
            lVar5 = DAT_14c9a3da0;
            iVar15 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
            }
            *(undefined4 *)(lVar5 + lVar14) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar7 = DAT_14c9a3dd0;
            }
            *(int *)(lVar5 + 4 + lVar14) = iVar7;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar6 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar6 = DAT_14c9a3dc0;
            }
            iVar7 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            bVar4 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar15;
            *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) =
                 *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) &
                 (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            local_d0 = 0;
          }
          if (((char)local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
        }
      }
    }
    else if (((param_2[0x15] != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
            (0 < *(int *)(lVar5 + 0x238))) {
      local_100 = param_1 + 0x10;
      lVar13 = 0;
      do {
        iVar15 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar13 * 8);
        if (((((iVar15 != 0) &&
              (uVar19 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar13 * 8), -1 < (int)uVar19)) &&
             (((int)uVar19 < DAT_14c9647dc &&
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar15)))))) &&
            ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) && (lVar14 = *plVar12, lVar14 != 0)) {
          if (DAT_14cb61cd0 == 0) {
            local_f8 = FUN_141030f22;
            local_120 = FUN_14081d0ea;
            local_128 = &LAB_1463b31ae;
            local_130 = &local_f8;
            local_138 = &LAB_1486dca4f;
            local_140 = (undefined8 *)&LAB_1464f50a6;
            local_148 = &DAT_149e063b2;
            local_150 = 0;
            local_158 = 0x10000004;
            local_160 = 8;
            local_168 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
            ppppuVar17 = (undefined8 ****)param_1[10];
            iVar15 = (int)param_1[0xb];
            if (((~*(uint *)(param_1 + 7) & 3) == 0) &&
               (lVar16 = (**(code **)(*(longlong *)param_2[0x15] + 0x5d0))(), lVar16 == lVar14)) {
              ppppuVar11 = (undefined8 ****)param_1[0xd];
              if ((ppppuVar11 == (undefined8 ****)0x0) ||
                 (iVar7 = (int)param_1[0xe], 0xfffffffd < iVar7 - 1U)) goto LAB_140e85f2d;
              ppppuVar9 = ppppuVar11;
              if (iVar15 == iVar7) {
                ppppuVar9 = ppppuVar17;
              }
              bVar18 = ppppuVar17 != ppppuVar11;
              ppppuVar17 = ppppuVar9;
              iVar15 = iVar7;
              if (bVar18) {
                ppppuVar17 = ppppuVar11;
              }
            }
            local_f8 = (code *)((ulonglong)local_f8 & 0xffffffffffffff00);
            local_d0 = 0;
            FUN_1456bb102(&local_f8,*(undefined8 *)(lVar14 + 0x3d0));
            FUN_1448729ea(local_100,&local_c0,&local_f8);
            if (local_a0 == 3) {
              uVar19 = local_c0;
              bVar4 = 3;
            }
            else {
              FUN_1400b56fe(&local_98,&local_c0,3);
              uVar19 = 0x3f800000;
              if (local_78 != 0) {
                uVar19 = (uint)local_98;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
              if (pcVar2 != (code *)0x0) {
                ppppuVar11 = &local_98;
                if (0x18 < local_80) {
                  ppppuVar11 = (undefined8 ****)local_98;
                }
                (*pcVar2)(ppppuVar11);
              }
              bVar4 = local_a0;
              if (0x18 < local_80) {
                FUN_1400020a8(local_98);
                bVar4 = local_a0;
              }
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
            if (pcVar2 != (code *)0x0) {
              puVar10 = &local_c0;
              if (0x18 < local_a8) {
                puVar10 = (uint *)CONCAT44(uStack_bc,local_c0);
              }
              (*pcVar2)(puVar10);
            }
            if (0x18 < local_a8) {
              FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
            }
            if ((longlong)local_d0 != 0) {
              lVar16 = (longlong)local_d0 + -1;
              local_108 = DAT_14c9a3da0;
              local_110 = lVar16 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_110),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + local_110));
              if (*(longlong *)(local_108 + local_110) != 0) {
                FUN_1400020a8();
              }
              lVar3 = DAT_14c9a3da0;
              iVar7 = (int)lVar16;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
              }
              *(undefined4 *)(lVar3 + local_110) = 0xffffffff;
              iVar8 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar8 = DAT_14c9a3dd0;
              }
              *(int *)(lVar3 + 4 + local_110) = iVar8;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar6 = DAT_14c9a3dc0;
              if (DAT_14c9a3dc0 == (undefined *)0x0) {
                puVar6 = &DAT_14c9a3db0;
              }
              iVar8 = iVar7 + 0x1f;
              if (-1 < iVar7) {
                iVar8 = iVar7;
              }
              bVar4 = (byte)lVar16 & 0x1f;
              DAT_14c9a3dd0 = iVar7;
              *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) =
                   *(uint *)(puVar6 + (longlong)(iVar8 >> 5) * 4) &
                   (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              local_d0 = 0;
            }
            if (((char)local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_e8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_e8 + 0x10))();
              }
            }
            if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
              (**(code **)(*param_2 + 0x4b0))(param_2,&local_c0,param_1[8]);
              local_e8 = local_b0;
              local_f8 = (code *)CONCAT44(uStack_bc,local_c0);
              iStack_f0 = iStack_b8;
              uStack_ec = uStack_b4;
              local_88 = 0;
              local_130 = (undefined8 *)
                          CONCAT44(local_130._4_4_,*(undefined4 *)((longlong)param_1 + 0x4c));
              local_138 = (undefined1 *)CONCAT44(local_138._4_4_,(int)param_1[9]);
              local_140 = &local_f8;
              local_148 = (undefined2 *)0x0;
              local_150 = CONCAT44(local_150._4_4_,uVar19);
              local_158 = local_158 & 0xffffff00;
              local_160 = local_160 & 0xffffff00;
              local_168 = local_168 & 0xffffff00;
              local_98 = ppppuVar17;
              local_90 = iVar15;
              FUN_1410a29b6(lVar14,&local_98,(int)param_1[0x1a],lVar14 + 0x960);
            }
            else {
              local_e8 = (longlong *)0x0;
              local_150 = 0;
              local_160 = local_160 & 0xffffff00;
              local_168 = local_168 & 0xffffff00;
              local_158 = uVar19;
              local_f8 = (code *)ppppuVar17;
              iStack_f0 = iVar15;
              FUN_140cab31c(lVar14,&local_f8,(int)param_1[0x1a],lVar14 + 0x960);
            }
          }
        }
LAB_140e85f2d:
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < *(int *)(lVar5 + 0x238));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8646a FUN_140e8646a body=179 status=ok
// SIG undefined FUN_140e8646a(void)

void FUN_140e8646a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0xa8), lVar3 != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x44) != '\0' ||
      (cVar4 = FUN_140b329fc(param_2), cVar4 != '\0')))) {
    FUN_1407f65cc(&local_30,lVar3);
    if (local_30 != 0) {
      FUN_140e8651e(local_30,*(longlong *)(param_1 + 0x38) + 0x30);
    }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8651e FUN_140e8651e body=1615 status=ok
// SIG undefined FUN_140e8651e(void)

void FUN_140e8651e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d8 [96];
  undefined8 local_178;
  undefined4 local_170;
  undefined8 *local_168;
  int local_160;
  longlong local_158 [8];
  undefined4 local_118;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
     (((((int)uVar3 < DAT_14c9647dc &&
        (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0)) &&
       ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x1c) &&
        (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 && (*(char *)(param_1 + 0x300) == '\0')))))) &&
      (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc))))) {
    lVar11 = *param_2;
    uVar3 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar9 = (uint)lVar11 & 0xffff;
    lVar6 = param_1 + 0x3c0;
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x3c8);
    }
    iVar10 = *(int *)(lVar6 + (ulonglong)
                              (*(int *)(param_1 + 0x3d0) - 1U &
                              (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar9) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x388) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar10 * 0x20) == lVar11) {
          if (((lVar6 != 0) && ((longlong *)(lVar6 + 8) != (longlong *)0x0)) &&
             ((longlong)*(int *)(lVar6 + 0x10) != 0)) {
            lVar11 = *(longlong *)(lVar6 + 8);
            lVar12 = 0;
            lVar13 = 0;
            goto LAB_140e8667b;
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0x18);
      } while (iVar10 != -1);
    }
  }
  goto LAB_140e869ce;
  while( true ) {
    lVar13 = lVar13 + -0x70;
    lVar12 = lVar12 + 0x70;
    if ((longlong)*(int *)(lVar6 + 0x10) * -0x70 - lVar13 == 0) break;
LAB_140e8667b:
    if (*(longlong *)(lVar11 + lVar12) == *(longlong *)((longlong)param_2 + 0xc)) {
      lVar11 = lVar11 - lVar13;
      if (lVar11 != 0) {
        bVar5 = FUN_1407f6f4c(param_1);
        lVar6 = FUN_1401f6e4a(lVar11 + 8);
        if (*(char *)(param_1 + 0x303) == '\x01') {
          lVar6 = FUN_1401f6e4a(lVar11 + 0x20);
          bVar5 = 2;
        }
        else {
          bVar5 = bVar5 ^ 1;
        }
        if (lVar6 != 0) {
          local_158[6] = 0;
          local_158[7] = 0;
          local_158[4] = 0;
          local_158[5] = 0;
          local_158[2] = 0;
          local_158[3] = 0;
          local_158[0] = 0;
          local_158[1] = 0;
          local_118 = 0xc0;
          local_108 = 0;
          local_f8 = (longlong *)0x0;
          local_c8 = 0;
          local_b8 = (longlong *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0x3ff0000000000000;
          local_68 = 0x3ff0000000000000;
          local_60 = 0x3ff0000000000000;
          local_58 = 0x3f80000000000000;
          local_50 = *(float *)(param_2 + 3);
          if ((char)param_2[7] == '\0') {
            if (1.0 <= local_50) {
              local_50 = 1.0;
            }
            if (local_50 <= 0.0) {
              local_50 = 0.0;
            }
            local_50 = (*(float *)(lVar6 + 0x54) - *(float *)(lVar6 + 0x50)) * local_50 +
                       *(float *)(lVar6 + 0x50);
          }
          FUN_1407f7390(param_1);
          if (bVar5 != 0) {
            if (bVar5 == 1) {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                        (*(longlong **)(param_1 + 0x20),local_1d8,
                         *(undefined8 *)((longlong)param_2 + 0xc),0);
              FUN_1407f7bc4(param_1,lVar6,local_1d8,local_158);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                        (*(longlong **)(param_1 + 0x20),local_1d8,
                         *(undefined8 *)((longlong)param_2 + 0xc),0);
              FUN_1407f8ebe(param_1,lVar6,local_1d8,local_158);
            }
            goto LAB_140e86973;
          }
          local_168 = (undefined8 *)0x0;
          local_160 = 0;
          FUN_1446efa72(&local_168,0,4,0x10);
          local_160 = 4;
          plVar7 = *(longlong **)(param_1 + 0x10);
          bVar8 = true;
          if (plVar7 == (longlong *)0x0) goto LAB_140e86aba;
          iVar10 = (int)plVar7[1];
          goto LAB_140e86805;
        }
      }
      break;
    }
  }
  goto LAB_140e869ce;
LAB_140e86aba:
  uVar14 = 0;
  plVar7 = (longlong *)0x0;
  goto LAB_140e86829;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar15 = iVar10 == iVar4;
    if (bVar15) {
      *(int *)(plVar7 + 1) = iVar10 + 1;
      iVar4 = iVar10;
    }
    iVar10 = iVar4;
    UNLOCK();
    if (bVar15) break;
LAB_140e86805:
    if (iVar10 == 0) goto LAB_140e86aba;
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  bVar8 = false;
LAB_140e86829:
  *local_168 = &PTR_LAB_14b401ed0;
  local_168[1] = *param_2;
  local_168[2] = *(undefined8 *)((longlong)param_2 + 0xc);
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_168[3] = lVar12;
  *local_168 = &PTR_FUN_14b401e60;
  local_168[4] = uVar14;
  local_168[5] = plVar7;
  if (bVar8) {
    local_168[6] = FUN_140b4f660;
    *(undefined4 *)(local_168 + 7) = 0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    local_168[6] = FUN_140b4f660;
    *(undefined4 *)(local_168 + 7) = 0;
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
  local_178 = 0;
  local_170 = 0;
  FUN_1405bcfbc(&local_178,&local_168);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),local_1d8,*(undefined8 *)((longlong)param_2 + 0xc),0);
  local_1e8 = param_2;
  local_1e0 = &local_178;
  FUN_1407f8722(param_1,lVar6,local_1d8,local_158);
  if (local_160 == 0) {
LAB_140e86923:
    if (local_168 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_168 != (undefined8 *)0x0) {
    (**(code **)*local_168)(local_168,0);
    FUN_1446efa72(&local_168,0,0,0x10);
    local_160 = 0;
    goto LAB_140e86923;
  }
LAB_140e86973:
  if (local_c8 != 0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = local_a8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_108 != 0) {
    plVar7 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar7 = local_e8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_158[6] != 0) {
    FUN_1400020a8();
  }
  if (local_158[4] != 0) {
    FUN_1400020a8();
  }
  if (local_158[2] != 0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_140e869ce:
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e86b6e FUN_140e86b6e body=1889 status=ok
// SIG undefined FUN_140e86b6e(void)

void FUN_140e86b6e(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte bVar18;
  undefined *puVar19;
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong *local_98;
  double dStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14caa7238 != DAT_14caa7264) {
    puVar19 = &DAT_14caa7268;
    if (DAT_14caa7270 != (undefined *)0x0) {
      puVar19 = DAT_14caa7270;
    }
    uVar11 = *(uint *)(puVar19 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_2 + 3)) * 4);
    while (uVar11 != 0xffffffff) {
      puVar1 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar11 * 0x18);
      if (*puVar1 == *(uint *)(param_2 + 3)) {
        if (puVar1 != (uint *)0x0) goto LAB_140e86c14;
        break;
      }
      uVar11 = puVar1[4];
    }
  }
  local_98 = param_2 + 3;
  FUN_140e879e8(&local_b0);
  puVar1 = (uint *)(DAT_14caa7230 + (longlong)local_b0 * 0x18);
LAB_140e86c14:
  puVar12 = *(uint **)(puVar1 + 2);
  if (puVar12 == (uint *)0x0) {
    puVar12 = (uint *)FUN_14001cc68(0x208,0x10);
    lVar22 = param_2[6];
    uVar11 = *(uint *)(param_2 + 3);
    puVar12[1] = 0x7fffffff;
    puVar12[2] = 0x7fffffff;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(undefined ***)(puVar12 + 6) = &PTR_FUN_14a34c530;
    puVar12[0x22] = 0;
    puVar12[0x23] = 0;
    puVar12[0x24] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x17] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x25] = 0x80;
    puVar12[0x26] = 0xffffffff;
    puVar12[0x27] = 0;
    puVar12[0x2a] = 0;
    puVar12[0x2b] = 0;
    puVar12[0x2c] = 0;
    puVar12[0x36] = 0;
    puVar12[0x37] = 0;
    puVar12[0x38] = 0;
    puVar12[0x2e] = 0;
    puVar12[0x2f] = 0;
    puVar12[0x30] = 0;
    puVar12[0x31] = 0;
    puVar12[0x39] = 0x80;
    puVar12[0x3a] = 0xffffffff;
    puVar12[0x3b] = 0;
    puVar12[0x3e] = 0;
    puVar12[0x3f] = 0;
    puVar12[0x40] = 0;
    puVar12[0x4a] = 0;
    puVar12[0x4b] = 0;
    puVar12[0x4c] = 0;
    puVar12[0x42] = 0;
    puVar12[0x43] = 0;
    puVar12[0x44] = 0;
    puVar12[0x45] = 0;
    puVar12[0x4d] = 0x80;
    puVar12[0x4e] = 0xffffffff;
    puVar12[0x4f] = 0;
    puVar12[0x52] = 0;
    puVar12[0x53] = 0;
    puVar12[0x54] = 0;
    puVar12[0x5e] = 0;
    puVar12[0x5f] = 0;
    puVar12[0x60] = 0;
    puVar12[0x56] = 0;
    puVar12[0x57] = 0;
    puVar12[0x58] = 0;
    puVar12[0x59] = 0;
    puVar12[0x61] = 0x80;
    puVar12[0x62] = 0xffffffff;
    puVar12[99] = 0;
    puVar12[0x66] = 0;
    puVar12[0x67] = 0;
    puVar12[0x68] = 0;
    *(undefined1 *)(puVar12 + 0x6a) = 0xff;
    puVar12[0x6b] = 0xffffffff;
    *(undefined8 *)(puVar12 + 0x70) = DAT_14c8464f0;
    uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
    *(ulonglong *)(puVar12 + 0x6c) = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
    *(undefined8 *)(puVar12 + 0x6e) = uVar9;
    *(undefined8 *)(puVar12 + 0x76) = DAT_14c8464f0;
    uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
    *(ulonglong *)(puVar12 + 0x72) = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
    *(undefined8 *)(puVar12 + 0x74) = uVar9;
    uVar25 = DAT_14c8464e8._4_4_;
    uVar24 = (uint)DAT_14c8464e8;
    uVar10 = DAT_14c8464e0._4_4_;
    puVar12[0x78] = (uint)DAT_14c8464e0;
    puVar12[0x79] = uVar10;
    puVar12[0x7a] = uVar24;
    puVar12[0x7b] = uVar25;
    *(undefined8 *)(puVar12 + 0x7c) = DAT_14c8464f0;
    puVar12[0x7e] = 0;
    puVar12[0x7f] = uVar11;
    *(longlong *)(puVar12 + 0x80) = lVar22;
    puVar15 = DAT_14caa7290;
    puVar21 = DAT_14caa7290;
    if (DAT_14caa7290 == (uint *)0x0) {
      puVar21 = &DAT_14caa7280;
    }
    *(undefined1 *)(puVar12 + 0xc) = 1;
    uVar10 = DAT_14caa7298;
    uVar11 = DAT_14caa7298 + 0x1f;
    if (0x1f < uVar11) {
      lVar22 = 0;
      puVar23 = puVar21;
LAB_140e86ff8:
      if (*puVar23 == 0xffffffff) goto LAB_140e8729d;
      uVar24 = ~*puVar23;
      iVar20 = 0;
      if (uVar24 != 0) {
        for (; (uVar24 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
        }
      }
      uVar24 = iVar20 - (int)lVar22;
      if (iVar20 + 1 == (int)lVar22 || (int)DAT_14caa7298 <= (int)uVar24) goto LAB_140e8702f;
      uVar11 = uVar24 + 0x1f;
      if (-1 < (int)uVar24) {
        uVar11 = uVar24;
      }
      puVar21[(int)uVar11 >> 5] = puVar21[(int)uVar11 >> 5] | 1 << ((byte)iVar20 & 0x1f);
      goto LAB_140e87082;
    }
LAB_140e8702f:
    *puVar12 = 0xffffffff;
    if (uVar10 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = uVar10 + 0x1e;
      if (-1 < (int)(uVar10 - 1)) {
        iVar20 = uVar10 - 1;
      }
      iVar20 = iVar20 >> 5;
    }
    uVar24 = uVar10 + 1;
    if (-1 < (int)uVar10) {
      uVar11 = uVar10;
    }
    if ((int)uVar11 >> 5 != iVar20) {
      if (DAT_14caa729c <= (int)uVar10) {
        if (uVar10 + 0x20 < 0xa0) {
          DAT_14caa729c = 0x80;
          uVar24 = uVar10;
        }
        else {
          uVar25 = uVar10 + 0x20 >> 5;
          if (DAT_14caa729c + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar25) {
              uVar24 = uVar25;
            }
          }
          else {
            uVar24 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar24 << 2,0);
          iVar20 = (int)(uVar16 >> 2);
          DAT_14caa729c = -0x20;
          uVar24 = DAT_14caa7298;
          if ((int)uVar25 <= iVar20) {
            DAT_14caa729c = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14caa7280,uVar24);
        uVar24 = DAT_14caa7298 + 1;
        puVar15 = DAT_14caa7290;
      }
      uVar25 = uVar24 + 0x1f;
      if (-1 < (int)uVar24) {
        uVar25 = uVar24;
      }
      if ((int)uVar24 % 0x20 != 0) {
        if (puVar15 == (uint *)0x0) {
          puVar15 = &DAT_14caa7280;
        }
        bVar18 = -(char)((int)uVar24 % 0x20);
        DAT_14caa7298 = uVar24;
        puVar15[(int)uVar25 >> 5] =
             (puVar15[(int)uVar25 >> 5] << (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
        puVar15 = DAT_14caa7290;
        uVar24 = DAT_14caa7298;
      }
    }
    DAT_14caa7298 = uVar24;
    puVar21 = &DAT_14caa7280;
    if (puVar15 != (uint *)0x0) {
      puVar21 = puVar15;
    }
    puVar21[(int)uVar11 >> 5] = puVar21[(int)uVar11 >> 5] | 1 << ((byte)uVar10 & 0x1f);
    uVar24 = uVar10;
LAB_140e87082:
    *puVar12 = uVar24;
    local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar24);
    local_88 = &DAT_100000001;
    local_80 = *(undefined8 *)(DAT_14ca8c040 + 0x18);
    FUN_140e87840();
    local_d0 = 1;
    local_d8 = 2;
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_b0,&local_98,DAT_14caa71e0);
    lVar22 = CONCAT44(uStack_ac,local_b0);
    if (lVar22 != 0) {
      LOCK();
      *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
      UNLOCK();
      lVar8 = CONCAT44(uStack_ac,local_b0);
      if (lVar8 != 0) {
        LOCK();
        puVar15 = (uint *)(lVar8 + 8);
        uVar11 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          puVar15 = (uint *)(lVar8 + 8);
          LOCK();
          uVar11 = *puVar15;
          *puVar15 = *puVar15 | 0x40000000;
          UNLOCK();
          if ((uVar11 >> 0x1e & 1) == 0) {
            bVar18 = *(byte *)(lVar8 + 0xd);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = lVar8;
            plVar17 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar18 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar17;
                LOCK();
                bVar26 = plVar17 != DAT_14ca843c0;
                plVar14 = plVar13;
                if (bVar26) {
                  plVar17 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar26);
            }
            else {
              do {
                *plVar13 = (longlong)plVar14;
                LOCK();
                bVar26 = plVar14 != DAT_14ca843c8;
                plVar17 = plVar13;
                if (bVar26) {
                  plVar14 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar26);
            }
          }
        }
      }
    }
    lVar8 = *(longlong *)(puVar12 + 0x18);
    *(longlong *)(puVar12 + 0x18) = lVar22;
    if (lVar8 != 0) {
      LOCK();
      puVar15 = (uint *)(lVar8 + 8);
      uVar11 = *puVar15;
      *puVar15 = *puVar15 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(uint **)(puVar1 + 2) = puVar12;
  }
  param_2[4] = param_2[5];
  *(undefined1 *)(param_2 + 7) = 1;
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,&local_98,&local_b0,&local_c8);
    uVar11 = (**(code **)(*param_2 + 0x40))(param_2);
    if ((int)puVar12[0x6b] < 0) {
      puVar12[0x6b] = uVar11;
      *(undefined1 **)(puVar12 + 0x70) = local_88;
      *(longlong **)(puVar12 + 0x6c) = local_98;
      *(double *)(puVar12 + 0x6e) = dStack_90;
      *(ulonglong *)(puVar12 + 0x72) = CONCAT44(uStack_ac,local_b0);
      *(undefined8 *)(puVar12 + 0x74) = uStack_a8;
      *(undefined8 *)(puVar12 + 0x76) = local_a0;
      *(undefined8 *)(puVar12 + 0x78) = local_c8;
      *(undefined8 *)(puVar12 + 0x7a) = uStack_c0;
      *(undefined8 *)(puVar12 + 0x7c) = local_b8;
    }
    dVar2 = *(double *)(puVar12 + 0x70);
    dVar3 = *(double *)(puVar12 + 0x6e);
    dVar4 = *(double *)(puVar12 + 0x6c);
    dVar5 = *(double *)(puVar12 + 0x72);
    dVar6 = *(double *)(puVar12 + 0x74);
    dVar7 = *(double *)(puVar12 + 0x76);
    dVar5 = (((double)local_88 - dVar2) * dVar7 +
            ((double)local_98 - dVar4) * dVar5 + (dStack_90 - dVar3) * dVar6) /
            (dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
    *(int *)(param_2 + 4) = (int)ROUND(dVar5 + dVar5 + 0.5) >> 1;
    dVar2 = (((double)local_88 - dVar2) * *(double *)(puVar12 + 0x7c) +
            ((double)local_98 - dVar4) * *(double *)(puVar12 + 0x78) +
            (dStack_90 - dVar3) * *(double *)(puVar12 + 0x7a)) /
            (*(double *)(puVar12 + 0x76) * *(double *)(puVar12 + 0x76) +
            *(double *)(puVar12 + 0x72) * *(double *)(puVar12 + 0x72) +
            *(double *)(puVar12 + 0x74) * *(double *)(puVar12 + 0x74));
    *(int *)((longlong)param_2 + 0x24) = (int)ROUND(dVar2 + dVar2 + 0.5) >> 1;
  }
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  FUN_140e872d0(puVar12,param_2 + 4);
  puVar12[0x12] = puVar12[0x12] + 1;
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140e8729d:
  lVar22 = lVar22 + -0x20;
  puVar23 = puVar23 + 1;
  if ((ulonglong)(uVar11 & 0xffffffe0) + lVar22 == 0) goto LAB_140e8702f;
  goto LAB_140e86ff8;
}



// FUNCTION 140e872d0 FUN_140e872d0 body=107 status=ok
// SIG undefined FUN_140e872d0(void)

void FUN_140e872d0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar4 = *(undefined8 *)param_2;
    uVar6 = uVar4;
  }
  else {
    iVar7 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) + *(int *)(param_1 + 0x10) + -1;
    iVar5 = param_2[1];
    iVar2 = *(int *)(param_1 + 8);
    if (iVar5 <= *(int *)(param_1 + 8)) {
      iVar2 = iVar5;
    }
    iVar1 = *param_2;
    iVar3 = *(int *)(param_1 + 4);
    if (iVar1 <= *(int *)(param_1 + 4)) {
      iVar3 = iVar1;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    iVar5 = (int)*(undefined8 *)(param_1 + 4) + *(int *)(param_1 + 0xc) + -1;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    uVar4 = CONCAT44(iVar2,iVar3);
    uVar6 = CONCAT44(iVar7,iVar5);
  }
  FUN_140e8733c(param_1,uVar4,uVar6);
  return;
}



// FUNCTION 140e8733c FUN_140e8733c body=841 status=ok
// SIG undefined FUN_140e8733c(void)

void FUN_140e8733c(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined **local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar16 = (uint)param_2 & 0xfffffffc;
  uVar15 = (uint)(param_2 >> 0x20) & 0xfffffffc;
  iVar8 = ((uint)param_3 & 0xfffffffc) + 4;
  iVar11 = iVar8 - uVar16;
  iVar18 = (int)((param_3 & 0xfffffffc00000000) + 0x400000000 >> 0x20);
  iVar17 = iVar18 - uVar15;
  if ((((uVar16 != *(uint *)(param_1 + 4)) || (uVar15 != *(uint *)(param_1 + 8))) ||
      (*(int *)(param_1 + 0xc) != iVar11)) || (*(int *)(param_1 + 0x10) != iVar17)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    local_88 = param_2;
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    local_60 = 0;
    uStack_58 = 0;
    local_68 = &PTR_FUN_14a34c530;
    local_50 = 0;
    iVar9 = iVar17 * iVar11;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_98 = iVar11;
    FUN_140e87686();
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar9);
    if (iVar9 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      FUN_140e876de(&local_78);
      _Dst = local_78;
    }
    memset(_Dst,0,(longlong)iVar9 << 3);
    uVar7 = 0;
    iVar11 = *(int *)(param_1 + 0x10);
    if (0 < iVar11) {
      local_90 = (ulonglong *)(param_1 + 0x20);
      iVar9 = -uVar15;
      do {
        iVar2 = *(int *)(param_1 + 8);
        iVar4 = (int)uVar7;
        iVar5 = iVar2 + iVar4;
        if ((-1 < (int)(iVar5 - uVar15)) && (iVar5 < iVar18)) {
          iVar5 = *(int *)(param_1 + 0xc);
          if (0 < iVar5) {
            uVar12 = iVar5 * iVar4;
            lVar3 = (ulonglong)uVar12 * 8;
            lVar13 = 0;
            do {
              iVar11 = (int)lVar13 + *(int *)(param_1 + 4);
              if ((-1 < (int)(-uVar16 + iVar11)) && (iVar11 < iVar8)) {
                uVar14 = *local_90;
                if ((uVar14 & 1) != 0) {
                  uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)local_90;
                }
                uVar10 = (longlong)&local_60 + ((longlong)local_60 >> 0x18);
                if ((local_60 & 1) == 0) {
                  uVar10 = local_60;
                }
                lVar6 = (longlong)
                        (int)(*(int *)(param_1 + 4) + (iVar2 + iVar9) * local_98 + -uVar16 +
                             (int)lVar13);
                *(undefined4 *)(uVar10 + lVar6 * 4) =
                     *(undefined4 *)(uVar14 + (ulonglong)uVar12 * 4 + lVar13 * 4);
                *(undefined8 *)((longlong)local_78 + lVar6 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar3 + lVar13 * 8);
                *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar3 + lVar13 * 8) = 0;
                iVar5 = *(int *)(param_1 + 0xc);
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar5);
            iVar11 = *(int *)(param_1 + 0x10);
            local_94 = iVar9;
            local_80 = uVar7;
          }
        }
        uVar7 = (ulonglong)(iVar4 + 1U);
        iVar9 = iVar9 + 1;
      } while ((int)(iVar4 + 1U) < iVar11);
    }
    *(ulonglong *)(param_1 + 4) = local_88 & 0xfffffffcfffffffc;
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(iVar17,local_98);
    if ((undefined ***)(param_1 + 0x18) != &local_68) {
      FUN_140702250(param_1 + 0x20,&local_60);
      *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_58;
      *(undefined4 *)(param_1 + 0x2c) = uStack_58._4_4_;
      uStack_58 = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = local_50;
    if ((void **)(param_1 + 0x38) == &local_78) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x38) = local_78;
      local_78 = (void *)0x0;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x44) = uStack_70._4_4_;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    if (local_60 != 0 && (local_60 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e87686 FUN_140e87686 body=88 status=ok
// SIG undefined FUN_140e87686(void)

int FUN_140e87686(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14066e04e(param_1);
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = (longlong)param_1 + ((longlong)uVar2 >> 0x18);
  }
  memset((void *)(uVar2 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return iVar1;
}



// FUNCTION 140e876de FUN_140e876de body=353 status=ok
// SIG undefined FUN_140e876de(void)

void FUN_140e876de(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0xfff) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140e87760;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140e87760:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 >> 3)) {
    uVar6 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,8,8);
  return;
}



// FUNCTION 140e87840 FUN_140e87840 body=423 status=ok
// SIG undefined FUN_140e87840(void)

undefined * FUN_140e87840(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7218) {
    FUN_144b3d300(&DAT_14caa7218);
    if (DAT_14caa7218 == -1) {
      FUN_1457bab58(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LandscapeContinuousLODParameters";
      local_78 = L"FLandscapeSectionLODUniformParameters";
      local_50 = 0x20;
      local_58 = 0x87;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa7198,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143263261);
      _Init_thread_footer(&DAT_14caa7218);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caa7198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e879e8 FUN_140e879e8 body=583 status=ok
// SIG undefined FUN_140e879e8(void)

int * FUN_140e879e8(int *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar5 = DAT_14caa7260;
  iVar10 = DAT_14caa7238;
  if (DAT_14caa7264 == 0) {
    iVar5 = DAT_14caa7238 + 1;
    bVar13 = DAT_14caa723c == DAT_14caa7238;
    DAT_14caa7238 = iVar5;
    if (bVar13) {
      FUN_14482b872(&DAT_14caa7230,iVar10);
    }
    lVar12 = (longlong)iVar10;
    iVar5 = FUN_144a54ea4(&DAT_14caa7240,1);
    puVar9 = DAT_14caa7250;
    if (DAT_14caa7250 == (undefined4 *)0x0) {
      puVar9 = &DAT_14caa7240;
    }
    iVar7 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar9[iVar7 >> 5] = puVar9[iVar7 >> 5] & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    lVar12 = (longlong)DAT_14caa7260;
    DAT_14caa7260 = *(int *)(DAT_14caa7230 + 4 + lVar12 * 0x18);
    DAT_14caa7264 = DAT_14caa7264 + -1;
    iVar10 = iVar5;
    if (DAT_14caa7264 != 0) {
      *(undefined4 *)(DAT_14caa7230 + (longlong)DAT_14caa7260 * 0x18) = 0xffffffff;
    }
  }
  puVar9 = &DAT_14caa7240;
  if (DAT_14caa7250 != (undefined4 *)0x0) {
    puVar9 = DAT_14caa7250;
  }
  iVar5 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar5 = iVar10;
  }
  puVar9[iVar5 >> 5] = puVar9[iVar5 >> 5] | 1 << ((byte)iVar10 & 0x1f);
  iVar7 = 1;
  piVar1 = (int *)(DAT_14caa7230 + lVar12 * 0x18);
  iVar5 = *(int *)*param_3;
  *piVar1 = iVar5;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = -1;
  uVar11 = DAT_14caa7238 - DAT_14caa7264;
  if ((uVar11 != 0) && (uVar11 != 1)) {
    puVar8 = &DAT_14caa7268;
    if (DAT_14caa7270 != (undefined *)0x0) {
      puVar8 = DAT_14caa7270;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)(DAT_14caa7278 - 1U & param_2) * 4);
    while (iVar3 != -1) {
      piVar2 = (int *)(DAT_14caa7230 + (longlong)iVar3 * 0x18);
      if (*piVar2 == iVar5) {
        iVar5 = piVar1[1];
        iVar7 = piVar1[2];
        iVar3 = piVar1[3];
        *piVar2 = *piVar1;
        piVar2[1] = iVar5;
        piVar2[2] = iVar7;
        piVar2[3] = iVar3;
        FUN_140d05c3a(iVar10);
        goto LAB_140e87b5d;
      }
      iVar3 = piVar2[4];
    }
  }
  if (3 < uVar11) {
    uVar6 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (iVar7 <= DAT_14caa7278)) {
    param_2 = DAT_14caa7278 - 1U & param_2;
    piVar1[5] = param_2;
    puVar8 = DAT_14caa7270;
    if (DAT_14caa7270 == (undefined *)0x0) {
      puVar8 = &DAT_14caa7268;
    }
    piVar1[4] = *(int *)(puVar8 + ((longlong)DAT_14caa7278 - 1U & (longlong)(int)param_2) * 4);
    puVar8 = DAT_14caa7270;
    if (DAT_14caa7270 == (undefined *)0x0) {
      puVar8 = &DAT_14caa7268;
    }
    *(int *)(puVar8 + ((longlong)DAT_14caa7278 - 1U & (longlong)(int)param_2) * 4) = iVar10;
  }
  else {
    DAT_14caa7278 = iVar7;
    FUN_140e87c30();
  }
LAB_140e87b5d:
  *param_1 = iVar10;
  return param_1;
}



// FUNCTION 140e87c30 FUN_140e87c30 body=473 status=ok
// SIG undefined FUN_140e87c30(void)

void FUN_140e87c30(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14caa7270 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa7270,0,0,4);
  }
  uVar2 = DAT_14caa7278;
  uVar3 = local_50;
  if (DAT_14caa7278 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14caa7268,0,DAT_14caa7278,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14caa7270;
        if (DAT_14caa7270 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7268;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14caa7278 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caa7240;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caa7258 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caa7230;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14caa7278 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14caa7270;
        if (DAT_14caa7270 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7268;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caa7278 - 1U & uVar9) * 4);
        puVar6 = DAT_14caa7270;
        if (DAT_14caa7270 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7268;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14caa7278 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e87e0a FUN_140e87e0a body=135 status=ok
// SIG undefined FUN_140e87e0a(void)

void FUN_140e87e0a(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140e87e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e87e9e FUN_140e87e9e body=824 status=ok
// SIG undefined FUN_140e87e9e(void)

ulonglong FUN_140e87e9e(uint *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
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
  longlong local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = param_1 + 7;
  pcVar1 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,1);
  }
  else {
    *(char *)puVar2 = *pcVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((char)*puVar2 == -1) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 7) = 0xff;
      param_1[6] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    goto LAB_140e8803c;
  }
  if (param_1[1] == 0) {
LAB_140e88091:
    local_50 = 0;
  }
  else {
    uVar4 = *param_1;
    local_50 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_1[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_140e88091;
      local_50 = *plVar6;
    }
  }
  if (DAT_14c927740 == 0) {
    local_70 = &local_48;
    local_48 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_146856450;
    local_80 = FUN_1427b121c;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000021;
    local_a0 = 8;
    local_a8 = CONCAT44(local_a8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_a8 = 0;
  uVar4 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,DAT_14c927740,&local_50);
  lVar8 = local_50;
  uVar7 = (ulonglong)uVar4;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((local_50 == 0) || (DAT_14c950c29 == '\0')) {
      if (local_50 != 0) goto LAB_140e87fb2;
      *param_1 = 0;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      FUN_1456cec3c(local_50);
LAB_140e87fb2:
      uVar5 = FUN_1403c7982();
      uVar5 = FUN_144718840(lVar8,uVar5);
      uVar4 = *(uint *)(lVar8 + 0xc);
      *param_1 = uVar4;
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
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar4 = *(uint *)(lVar8 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar8 + 0x10) = uVar9;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar9;
        }
      }
    }
    param_1[1] = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  param_1 = param_1 + 6;
  puVar2 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
LAB_140e8803c:
  *param_4 = 1;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140e881d8 FUN_140e881d8 body=185 status=ok
// SIG undefined FUN_140e881d8(void)

void FUN_140e881d8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140e88292(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e88292 FUN_140e88292 body=267 status=ok
// SIG undefined FUN_140e88292(void)

longlong * FUN_140e88292(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_144750f90(param_2);
    }
    FUN_140a4b95e(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1408ef3d7(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 140e883a0 FUN_140e883a0 body=632 status=ok
// SIG undefined FUN_140e883a0(void)

void FUN_140e883a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x7012;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14170fd90;
      local_60 = 0x8000000000000000;
      local_68 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140e88496;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140e88496:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf58))(param_1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8861a FUN_140e8861a body=69 status=ok
// SIG undefined FUN_140e8861a(void)

void FUN_140e8861a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    FUN_140e88660(lVar2 + 8,param_2,param_1 + 0x960);
    return;
  }
  return;
}



// FUNCTION 140e88660 FUN_140e88660 body=290 status=ok
// SIG undefined FUN_140e88660(void)

void FUN_140e88660(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))();
  uVar6 = (ulonglong)(int)plVar4[1];
  if (0 < (longlong)uVar6) {
    lVar7 = uVar6 * 0x78;
    do {
      lVar7 = lVar7 + -0x78;
      lVar1 = *plVar4;
      puVar2 = *(undefined4 **)(*(longlong *)(lVar1 + lVar7) + 8);
      puVar8 = &DAT_14c9485f0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar8 = puVar2;
      }
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,puVar8,1);
      if (((local_50 == *param_2) && ((int)param_2[1] == 0x7012)) &&
         (*(longlong *)(lVar1 + 8 + lVar7) == local_58)) {
        FUN_14051f3ba(lVar1 + lVar7);
        FUN_14051f312(plVar4,(int)uVar6 + -1,1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e88792 FUN_140e88792 body=31 status=ok
// SIG undefined FUN_140e88792(void)

undefined8 FUN_140e88792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e887b2 FUN_140e887b2 body=276 status=ok
// SIG undefined FUN_140e887b2(void)

undefined4 FUN_140e887b2(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140da2b58(param_1,&local_38);
  if (local_38 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144904448(param_1 + 5);
    if ((char)uVar1 != '\0') {
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_140e888c8(local_38,param_1[7],(int)(param_2 * 1000.0),0);
      *(undefined1 *)((longlong)param_1 + 0x14) = 0;
      *(float *)(param_1 + 2) = param_2;
    }
    if ((local_38 != (longlong *)0x0) &&
       (*(int *)(local_38 + 0x21) = (int)local_38[0x21] + -1, (int)local_38[0x26] < 1)) {
      FUN_1400847bc(local_38 + 0x17,0);
      if ((int)local_38[0x21] == 0) {
        FUN_140087e46(local_38);
        if (*local_38 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140e8885c;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_38);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_38);
        }
      }
    }
  }
LAB_140e8885c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e888c8 FUN_140e888c8 body=118 status=ok
// SIG undefined FUN_140e888c8(void)

undefined8 FUN_140e888c8(__uint64 *param_1,__uint64 param_2,int param_3,bool param_4)

{
  __uint64 _Var1;
  AKRESULT AVar2;
  __uint64 *p_Var3;
  undefined4 extraout_var;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_14cb25ab0 == '\0') {
    return 0;
  }
  p_Var3 = param_1 + 0x24;
  do {
    _Var1 = *p_Var3;
    p_Var3 = (__uint64 *)(_Var1 + 0x30);
  } while (_Var1 != 0 && _Var1 != param_2);
  if (_Var1 != 0) {
    if (*(longlong *)(_Var1 + 0x18) == 0) {
      return 0;
    }
    if ((DAT_14cb26569 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(_Var1 + 8) != 0) {
      AVar2 = AK::SoundEngine::SeekOnEvent
                        (*(uint *)(*(longlong *)(_Var1 + 0x18) + 0x38),*param_1,param_3,param_4,
                         *(uint *)(_Var1 + 8));
      return CONCAT71((int7)(CONCAT44(extraout_var,AVar2) >> 8),AVar2 == 1);
    }
  }
  return 0;
}



// FUNCTION 140e8893e FUN_140e8893e body=213 status=ok
// SIG undefined FUN_140e8893e(void)

bool FUN_140e8893e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da2b58(param_1,&local_20);
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    FUN_140da2a90(local_20,*(undefined8 *)(param_1 + 0x38),2);
    *(undefined1 *)(param_1 + 0x14) = 0;
    if ((local_20 != (longlong *)0x0) &&
       (*(int *)(local_20 + 0x21) = (int)local_20[0x21] + -1, (int)local_20[0x26] < 1)) {
      FUN_1400847bc(local_20 + 0x17,0);
      if ((int)local_20[0x21] == 0) {
        FUN_140087e46(local_20);
        if (*local_20 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140e889ae;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_20);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_20);
        }
      }
    }
  }
LAB_140e889ae:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e88a14 FUN_140e88a14 body=23 status=ok
// SIG undefined FUN_140e88a14(void)

undefined8 FUN_140e88a14(ushort param_1)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_1 * 0x3c >> 8),
                   *(undefined1 *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 1)) &
          0xffffffffffffff02;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
}



// FUNCTION 140e88a32 FUN_140e88a32 body=57 status=ok
// SIG undefined FUN_140e88a32(void)

void FUN_140e88a32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f00 = FUN_140002ddd(FUN_1465bc143,uVar1,L"GpsTest_InsideWaterBody");
  }
  return;
}



// FUNCTION 140e88a72 FUN_140e88a72 body=57 status=ok
// SIG undefined FUN_140e88a72(void)

void FUN_140e88a72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4658 = FUN_140002ddd(FUN_1465be364,uVar1,L"GrenadeBehaviorDef_PayloadSpawnActor");
  }
  return;
}



// FUNCTION 140e88aac FUN_140e88aac body=3827 status=ok
// SIG undefined FUN_140e88aac(void)

void FUN_140e88aac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  ulonglong uVar25;
  wchar_t *_Str;
  ulonglong uVar26;
  uint uVar27;
  undefined2 *puVar28;
  undefined *puVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  int iVar34;
  undefined2 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  ulonglong uStack_110;
  longlong local_108 [2];
  wchar_t *local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [6];
  undefined8 *local_b8;
  ulonglong uStack_b0;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar22 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xb0);
  (**(code **)(*plVar22 + 0x20))(plVar22,0xffffffff,0);
  local_140 = (longlong *)(param_1 + 0x50);
  local_150 = param_1;
  do {
    while( true ) {
      puVar28 = &DAT_149dfb77a;
      lVar19 = *(longlong *)(param_1 + 8);
      lVar37 = **(longlong **)(lVar19 + 0x18);
      if (lVar37 != 0) break;
      FUN_14000f986(0x38d1b717);
    }
    lVar6 = *(longlong *)(lVar37 + 8);
    local_138 = *(longlong **)(lVar37 + 0x10);
    *(undefined8 *)(lVar37 + 8) = 0;
    if (local_138 != (longlong *)0x0) {
      *(undefined8 *)(lVar37 + 0x10) = 0;
    }
    lVar7 = *(longlong *)(lVar19 + 0x18);
    *(longlong *)(lVar19 + 0x18) = lVar37;
    *(undefined8 *)(lVar37 + 8) = 0;
    plVar22 = *(longlong **)(lVar37 + 0x10);
    if (plVar22 != (longlong *)0x0) {
      *(undefined8 *)(lVar37 + 0x10) = 0;
      LOCK();
      plVar17 = plVar22 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar2 = (int *)((longlong)plVar22 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    if (lVar7 != 0) {
      plVar22 = *(longlong **)(lVar7 + 0x10);
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar22 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar2 = (int *)((longlong)plVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      FUN_1400020a8(lVar7);
    }
    if ((lVar6 != 0) && (local_130 = DAT_14c9a1ab0, DAT_14c9a1ab0 != 0)) {
      plVar17 = (longlong *)FUN_1400dbadc();
      plVar22 = (longlong *)*plVar17;
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)FUN_140e92164();
        *plVar17 = (longlong)plVar22;
      }
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      if (*(char *)(lVar6 + 0x41) == '\x01') {
        puVar28 = &DAT_149dfb77a;
        if (DAT_14c9a0e18 != 0) {
          puVar28 = DAT_14c9a0e10;
        }
LAB_140e88bdf:
        puVar35 = &DAT_149dfb77a;
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar35 = *(undefined2 **)(lVar6 + 0x30);
        }
        (**(code **)(*plVar22 + 0x1c0))(plVar22,&local_118,puVar35,puVar28);
      }
      else if (*(char *)(lVar6 + 0x40) == '\x01') {
        puVar28 = &DAT_149dfb77a;
        if (DAT_14c9a0e28 != 0) {
          puVar28 = DAT_14c9a0e20;
        }
        puVar35 = &DAT_149dfb77a;
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar35 = *(undefined2 **)(lVar6 + 0x30);
        }
        (**(code **)(*plVar22 + 0x1c8))(plVar22,&local_118,puVar35,puVar28);
      }
      else {
        if (*(char *)(lVar6 + 0x42) != '\x01') {
          if (DAT_14c9a0e28 != 0) {
            puVar28 = DAT_14c9a0e20;
          }
          goto LAB_140e88bdf;
        }
        uVar21 = FUN_1457baddc();
        FUN_1457bafe8(uVar21,&local_b8,DAT_14c9a0a78);
        FUN_1410e5bda(&local_118,&local_b8);
        FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
        if (local_b8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_148 = (longlong *)FUN_140d57cf8();
        local_128 = 0;
        uStack_120 = 0;
        if ((longlong)(int)uStack_110 != 0) {
          lVar19 = (longlong)(int)uStack_110 << 4;
          plVar22 = local_118;
          do {
            local_b8 = (undefined8 *)0x0;
            uStack_b0 = 0;
            local_e8[4] = 0;
            local_e8[5] = 0;
            local_e8[2] = 0;
            local_e8[3] = 0;
            FUN_1457bae9a(plVar22,&local_b8,local_e8 + 4,local_e8 + 2);
            local_e8[0] = 0;
            local_e8[1] = 0;
            local_f8 = (wchar_t *)0x0;
            uStack_f0 = 0;
            FUN_140056680(local_108,&DAT_149e01f60);
            local_160 = 1;
            local_168 = 0;
            cVar13 = FUN_1407cdbc6(local_e8 + 4,local_108,local_e8,&local_f8);
            if (cVar13 == '\0') {
              if (local_108[0] != 0) {
                FUN_1400020a8();
              }
LAB_140e894d9:
              bVar38 = true;
            }
            else {
              cVar13 = FUN_1405b43cc(&local_f8);
              if (local_108[0] != 0) {
                FUN_1400020a8();
              }
              if (cVar13 == '\0') goto LAB_140e894d9;
              _Str = L"";
              if ((int)uStack_f0 != 0) {
                _Str = local_f8;
              }
              iVar34 = _wtoi(_Str);
              uVar15 = (**(code **)(*local_148 + 0x10))(local_148,iVar34);
              if (1 < uVar15) goto LAB_140e894d9;
              bVar38 = false;
            }
            if (local_f8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_e8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_e8[2] != 0) {
              FUN_1400020a8();
            }
            if (local_e8[4] != 0) {
              FUN_1400020a8();
            }
            if (local_b8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            uVar25 = uStack_120;
            if (bVar38) {
              lVar37 = (longlong)(int)uStack_120;
              uVar15 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar15);
              if (uStack_120._4_4_ < uVar15) {
                FUN_1447a1bd6(&local_128,uVar25 & 0xffffffff);
              }
              lVar37 = lVar37 * 0x10;
              puVar5 = (undefined8 *)(local_128 + lVar37);
              *(undefined8 *)(local_128 + lVar37) = 0;
              iVar34 = (int)plVar22[1];
              pvVar8 = (void *)*plVar22;
              *(int *)(local_128 + 8 + lVar37) = iVar34;
              if ((longlong)iVar34 == 0) {
                *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar5,iVar34,0);
                memcpy((void *)*puVar5,pvVar8,(longlong)iVar34 * 2);
              }
            }
            plVar22 = plVar22 + 2;
            lVar19 = lVar19 + -0x10;
          } while (lVar19 != 0);
        }
        FUN_1410e5bda(&local_118,&local_128);
        FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)(int)uStack_110 == 0) {
        uVar25 = 0;
      }
      else {
        local_148 = local_118 + (longlong)(int)uStack_110 * 2;
        plVar22 = local_118;
        do {
          FUN_140e89a5a(local_e8 + 4,lVar6,plVar22);
          FUN_140e899a0(local_130,local_e8 + 4);
          local_b8 = (undefined8 *)0x0;
          uVar15 = *(uint *)(plVar22 + 1);
          pvVar8 = (void *)*plVar22;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
          if ((longlong)(int)uVar15 == 0) {
            uStack_b0 = (ulonglong)uVar15;
          }
          else {
            FUN_1446dd670(&local_b8,uVar15,0);
            memcpy(local_b8,pvVar8,(longlong)(int)uVar15 * 2);
          }
          iVar34 = *(int *)(lVar6 + 0x18);
          iVar32 = iVar34 + -1;
          if (iVar34 == 0) {
            iVar32 = 0;
          }
          puVar28 = &DAT_149dfb77a;
          if (iVar34 != 0) {
            puVar28 = *(undefined2 **)(lVar6 + 0x10);
          }
          FUN_140c540b4(&local_b8,puVar28,iVar32,1);
          cVar13 = FUN_140e89b52(*(undefined8 *)(param_1 + 8),&local_b8);
          if (cVar13 != '\0') {
            if (DAT_14c9a0e40 != DAT_14c9a0e6c) {
              uVar15 = (uint)((ulonglong)local_e8[4] >> 0x10);
              uVar27 = (uint)local_e8[4] & 0xffff;
              puVar29 = DAT_14c9a0e78;
              if (DAT_14c9a0e78 == (undefined *)0x0) {
                puVar29 = &DAT_14c9a0e70;
              }
              iVar34 = *(int *)(puVar29 +
                               (ulonglong)
                               (DAT_14c9a0e80 - 1U &
                               (int)((ulonglong)local_e8[4] >> 0x20) +
                               ((uint)local_e8[4] << 0x10 | uVar27) +
                               (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar27 >> 4)) * 4);
              while (iVar34 != -1) {
                lVar19 = DAT_14c9a0e38 + (longlong)iVar34 * 0x20;
                if (*(longlong *)(DAT_14c9a0e38 + (longlong)iVar34 * 0x20) == local_e8[4]) {
                  if (lVar19 != 0) {
                    plVar17 = *(longlong **)(lVar19 + 8);
                    plVar33 = *(longlong **)(lVar19 + 0x10);
                    if (plVar33 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                      UNLOCK();
                    }
                    plVar20 = plVar33;
                    if (plVar17 != (longlong *)0x0) goto LAB_140e890e4;
                    goto LAB_140e88cde;
                  }
                  break;
                }
                iVar34 = *(int *)(lVar19 + 0x18);
              }
            }
            plVar20 = (longlong *)0x0;
LAB_140e88cde:
            plVar18 = (longlong *)FUN_14001cc68(0x60,0x10);
            plVar18[1] = (longlong)&DAT_100000001;
            *plVar18 = (longlong)&PTR_FUN_14a176270;
            plVar18[2] = 0;
            plVar18[3] = 0;
            plVar18[4] = 0;
            plVar18[5] = 0;
            plVar18[6] = 0;
            plVar18[7] = 0;
            plVar18[8] = 0;
            plVar18[9] = 0;
            plVar18[10] = 0;
            plVar18[0xb] = 0;
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
            }
            iVar32 = DAT_14c9a0e68;
            iVar34 = DAT_14c9a0e40;
            if (DAT_14c9a0e6c == 0) {
              iVar32 = DAT_14c9a0e40 + 1;
              bVar38 = DAT_14c9a0e44 == DAT_14c9a0e40;
              DAT_14c9a0e40 = iVar32;
              if (bVar38) {
                FUN_1447711aa(&DAT_14c9a0e38,iVar34);
              }
              iVar32 = DAT_14c9a0e60;
              if (DAT_14c9a0e60 == 0) {
                iVar14 = -1;
              }
              else {
                iVar14 = DAT_14c9a0e60 + 0x1e;
                if (-1 < DAT_14c9a0e60 + -1) {
                  iVar14 = DAT_14c9a0e60 + -1;
                }
                iVar14 = iVar14 >> 5;
              }
              iVar24 = DAT_14c9a0e60 + 1;
              iVar31 = DAT_14c9a0e60 + 0x1f;
              if (-1 < DAT_14c9a0e60) {
                iVar31 = DAT_14c9a0e60;
              }
              if (iVar31 >> 5 != iVar14) {
                if (DAT_14c9a0e64 <= DAT_14c9a0e60) {
                  if (DAT_14c9a0e60 + 0x20U < 0xa0) {
                    DAT_14c9a0e64 = 0x80;
                  }
                  else {
                    uVar15 = DAT_14c9a0e60 + 0x20U >> 5;
                    if (DAT_14c9a0e64 + 0x1fU < 0xa0) {
                      uVar27 = 4;
                      if (4 < uVar15) {
                        uVar27 = uVar15;
                      }
                    }
                    else {
                      uVar27 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
                    }
                    uVar25 = (ulonglong)(uVar27 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar16 = (uint)(uVar25 + 0xf);
                        if (uVar27 < 0x1ffd) {
                          uVar25 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar25 + 0xf >> 4]];
                        }
                        else {
                          uVar26 = (ulonglong)(uVar16 & 0xfffffff0);
                          if (uVar26 < 0x7ff1) {
                            bVar23 = (&DAT_14c841e00)[uVar16 >> 4];
                            uVar30 = 0x32;
                            if (0x32 < bVar23) {
                              uVar30 = (ulonglong)bVar23;
                            }
                            uVar36 = 0x32 - (ulonglong)bVar23;
                            do {
                              uVar25 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                              goto LAB_140e896a3;
                              lVar19 = uVar30 + 1 + uVar36;
                              uVar36 = uVar36 - 1;
                            } while (lVar19 != 0x33);
                          }
                          uVar25 = 0x10;
                          if (0x10 < DAT_14c841df8) {
                            uVar25 = (ulonglong)DAT_14c841df8;
                          }
                          uVar25 = -uVar25 & (uVar26 + uVar25) - 1;
                        }
                      }
                      else {
                        local_158 = (longlong *)(ulonglong)uVar15;
                        uVar25 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar25,0);
                        uVar15 = (uint)local_158;
                      }
                    }
LAB_140e896a3:
                    iVar14 = (int)(uVar25 >> 2);
                    DAT_14c9a0e64 = iVar14 << 5;
                    if (iVar14 < (int)uVar15) {
                      DAT_14c9a0e64 = -0x20;
                    }
                  }
                  FUN_1446efbd8(&DAT_14c9a0e48,DAT_14c9a0e60);
                  iVar24 = DAT_14c9a0e60 + 1;
                }
                iVar14 = iVar24 + 0x1f;
                if (-1 < iVar24) {
                  iVar14 = iVar24;
                }
                if (iVar24 % 0x20 != 0) {
                  puVar29 = DAT_14c9a0e58;
                  if (DAT_14c9a0e58 == (undefined *)0x0) {
                    puVar29 = &DAT_14c9a0e48;
                  }
                  bVar23 = -(char)(iVar24 % 0x20);
                  DAT_14c9a0e60 = iVar24;
                  *(uint *)(puVar29 + (longlong)(iVar14 >> 5) * 4) =
                       (uint)(*(int *)(puVar29 + (longlong)(iVar14 >> 5) * 4) << (bVar23 & 0x1f)) >>
                       (bVar23 & 0x1f);
                  iVar24 = DAT_14c9a0e60;
                }
              }
              DAT_14c9a0e60 = iVar24;
              lVar19 = (longlong)iVar34;
              puVar29 = DAT_14c9a0e58;
              if (DAT_14c9a0e58 == (undefined *)0x0) {
                puVar29 = &DAT_14c9a0e48;
              }
              bVar23 = (byte)iVar32 & 0x1f;
              *(uint *)(puVar29 + (longlong)(iVar31 >> 5) * 4) =
                   *(uint *)(puVar29 + (longlong)(iVar31 >> 5) * 4) &
                   (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
              iVar32 = iVar34;
            }
            else {
              lVar19 = (longlong)DAT_14c9a0e68;
              DAT_14c9a0e68 = *(int *)(DAT_14c9a0e38 + 4 + lVar19 * 0x20);
              DAT_14c9a0e6c = DAT_14c9a0e6c + -1;
              if (DAT_14c9a0e6c != 0) {
                *(undefined4 *)(DAT_14c9a0e38 + (longlong)DAT_14c9a0e68 * 0x20) = 0xffffffff;
              }
            }
            param_1 = local_150;
            puVar29 = DAT_14c9a0e58;
            if (DAT_14c9a0e58 == (undefined *)0x0) {
              puVar29 = &DAT_14c9a0e48;
            }
            iVar34 = iVar32 + 0x1f;
            if (-1 < iVar32) {
              iVar34 = iVar32;
            }
            *(uint *)(puVar29 + (longlong)(iVar34 >> 5) * 4) =
                 *(uint *)(puVar29 + (longlong)(iVar34 >> 5) * 4) | 1 << ((byte)iVar32 & 0x1f);
            lVar37 = DAT_14c9a0e38;
            lVar19 = lVar19 * 0x20;
            puVar3 = (undefined4 *)(DAT_14c9a0e38 + lVar19);
            *(longlong *)(DAT_14c9a0e38 + lVar19) = local_e8[4];
            *(longlong **)(lVar37 + 8 + lVar19) = plVar18 + 2;
            *(longlong **)(lVar37 + 0x10 + lVar19) = plVar18;
            *(undefined4 *)(lVar37 + 0x18 + lVar19) = 0xffffffff;
            uVar15 = (uint)((ulonglong)local_e8[4] >> 0x10);
            uVar27 = (uint)local_e8[4] & 0xffff;
            uVar15 = ((uint)local_e8[4] << 0x10 | uVar27) + (int)((ulonglong)local_e8[4] >> 0x20) +
                     (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar27 >> 4);
            uVar27 = DAT_14c9a0e40 - DAT_14c9a0e6c;
            if ((uVar27 != 0) && (uVar27 != 1)) {
              puVar29 = DAT_14c9a0e78;
              if (DAT_14c9a0e78 == (undefined *)0x0) {
                puVar29 = &DAT_14c9a0e70;
              }
              iVar34 = *(int *)(puVar29 + (ulonglong)(DAT_14c9a0e80 - 1U & uVar15) * 4);
              while (iVar34 != -1) {
                puVar4 = (undefined4 *)(DAT_14c9a0e38 + (longlong)iVar34 * 0x20);
                if (*(longlong *)(DAT_14c9a0e38 + (longlong)iVar34 * 0x20) == local_e8[4]) {
                  local_158 = *(longlong **)(puVar4 + 4);
                  if (local_158 != (longlong *)0x0) {
                    LOCK();
                    plVar17 = local_158 + 1;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    if ((int)*plVar17 == 0) {
                      (**(code **)*local_158)();
                      LOCK();
                      piVar2 = (int *)((longlong)local_158 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*local_158 + 0x10))();
                      }
                    }
                  }
                  uVar9 = *puVar3;
                  uVar10 = puVar3[1];
                  uVar11 = puVar3[2];
                  uVar12 = puVar3[3];
                  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
                  *puVar4 = uVar9;
                  puVar4[1] = uVar10;
                  puVar4[2] = uVar11;
                  puVar4[3] = uVar12;
                  FUN_147099fda(iVar32);
                  param_1 = local_150;
                  iVar32 = iVar34;
                  goto LAB_140e88f3a;
                }
                iVar34 = puVar4[6];
              }
            }
            if (uVar27 < 4) {
              iVar34 = 1;
            }
            else {
              uVar25 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
              lVar19 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar34 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar27 < 1) || (iVar34 <= DAT_14c9a0e80)) {
              uVar15 = DAT_14c9a0e80 - 1U & uVar15;
              puVar3[7] = uVar15;
              puVar29 = DAT_14c9a0e78;
              if (DAT_14c9a0e78 == (undefined *)0x0) {
                puVar29 = &DAT_14c9a0e70;
              }
              puVar3[6] = *(undefined4 *)
                           (puVar29 + ((longlong)DAT_14c9a0e80 - 1U & (longlong)(int)uVar15) * 4);
              puVar29 = DAT_14c9a0e78;
              if (DAT_14c9a0e78 == (undefined *)0x0) {
                puVar29 = &DAT_14c9a0e70;
              }
              *(int *)(puVar29 + ((longlong)DAT_14c9a0e80 - 1U & (longlong)(int)uVar15) * 4) =
                   iVar32;
            }
            else {
              DAT_14c9a0e80 = iVar34;
              FUN_140e8a184();
            }
LAB_140e88f3a:
            plVar17 = *(longlong **)(DAT_14c9a0e38 + 8 + (longlong)iVar32 * 0x20);
            plVar33 = *(longlong **)(DAT_14c9a0e38 + 0x10 + (longlong)iVar32 * 0x20);
            if (plVar33 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
              UNLOCK();
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar20 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar20 = plVar18 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
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
            if (local_138 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_138 + 1) = (int)local_138[1] + 1;
              UNLOCK();
            }
            plVar20 = (longlong *)plVar17[9];
            plVar17[8] = lVar6;
            plVar17[9] = (longlong)local_138;
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar20 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
            if (plVar17 != plVar22) {
              iVar34 = (int)plVar22[1];
              pvVar8 = (void *)*plVar22;
              *(int *)(plVar17 + 1) = iVar34;
              if (iVar34 == 0 && *(int *)((longlong)plVar17 + 0xc) == 0) {
                *(undefined4 *)((longlong)plVar17 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(plVar17,iVar34);
                if (iVar34 != 0) {
                  memcpy((void *)*plVar17,pvVar8,(longlong)iVar34 * 2);
                }
              }
            }
            plVar17[2] = local_e8[4];
LAB_140e890e4:
            if ((int)plVar17[5] < DAT_14c9a0e30) {
              plVar20 = (longlong *)FUN_14054d1d4();
              puVar28 = &DAT_149dfb77a;
              if ((int)plVar22[1] != 0) {
                puVar28 = (undefined2 *)*plVar22;
              }
              (**(code **)(*plVar20 + 0xd0))(plVar20,local_e8 + 2,puVar28);
              if (plVar17[3] != local_e8[2]) {
                plVar17[3] = local_e8[2];
                plVar20 = (longlong *)FUN_14054d1d4();
                puVar28 = &DAT_149dfb77a;
                if ((int)plVar22[1] != 0) {
                  puVar28 = (undefined2 *)*plVar22;
                }
                lVar19 = (**(code **)(*plVar20 + 0x108))(plVar20,puVar28);
                plVar17[4] = lVar19;
                *(int *)(plVar17 + 5) = DAT_14c9a0e30;
                if (plVar17 != (longlong *)0x0) {
                  if (*(longlong *)(param_1 + 0x18) < lVar19 + *(longlong *)(param_1 + 0x10)) {
                    FUN_140e89c6c(param_1);
                  }
                  iVar34 = *(int *)(param_1 + 0x58);
                  *(uint *)(param_1 + 0x58) = iVar34 + 1U;
                  if (*(uint *)(param_1 + 0x5c) < iVar34 + 1U) {
                    FUN_1457baf62(local_140,iVar34);
                  }
                  lVar19 = *local_140;
                  *(longlong **)(lVar19 + (longlong)iVar34 * 0x10) = plVar17;
                  *(longlong **)(lVar19 + 8 + (longlong)iVar34 * 0x10) = plVar33;
                  if (plVar33 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                    UNLOCK();
                  }
                  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + plVar17[4];
                }
              }
            }
            if (plVar33 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar33 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar33)(plVar33);
                LOCK();
                piVar2 = (int *)((longlong)plVar33 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar33 + 0x10))(plVar33);
                }
              }
            }
          }
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          plVar22 = plVar22 + 2;
        } while (plVar22 != local_148);
        uVar25 = uStack_110 & 0xffffffff;
      }
      FUN_1447a1747(local_118,uVar25);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar22 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_138 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)plVar22 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    if (lVar6 == 0) {
      FUN_140e89c6c(param_1);
      local_80 = *(undefined8 *)(param_1 + 8);
      local_98 = 0;
      local_88 = &PTR_LAB_14a176250;
      local_a8 = FUN_142b1d8b8;
      local_168 = 0x6ff;
      FUN_14014aede(&local_b8);
      FUN_14009fd82(DAT_14c82b500,&local_b8,0xff);
      if (local_b8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_b8 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*local_b8)(local_b8,1);
        }
      }
      if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140e899a0 FUN_140e899a0 body=185 status=ok
// SIG undefined FUN_140e899a0(void)

void FUN_140e899a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          lVar2 = plVar1[1];
          if (lVar2 == 0) {
            return;
          }
          *(undefined4 *)(lVar2 + 0x164) = *(undefined4 *)(param_1 + 0x5c);
          return;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140e89a5a FUN_140e89a5a body=246 status=ok
// SIG undefined FUN_140e89a5a(void)

undefined8 FUN_140e89a5a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  uVar1 = *(int *)(param_2 + 3) - 1;
  if (*(int *)(param_2 + 3) == 0) {
    uVar1 = uVar3;
  }
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar5 = (undefined2 *)*param_3;
    uVar3 = *(int *)(param_3 + 1) - 1;
  }
  if ((int)uVar3 <= (int)uVar1) {
    uVar1 = uVar3;
  }
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  FUN_14006620a(&local_38,puVar5 + uVar2,uVar3 - (int)uVar2);
  puVar5 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_48,L"%ls%ls",puVar4,puVar5);
  puVar5 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FUN_1446f470e(param_1,puVar5,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e89b52 FUN_140e89b52 body=281 status=ok
// SIG undefined FUN_140e89b52(void)

ulonglong FUN_140e89b52(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)(param_1 + 0x6c) != -1) {
    local_40 = (undefined2 *)0x0;
    local_38 = *(int *)(param_1 + 0x68);
    lVar5 = (longlong)local_38;
    _Src = *(void **)(param_1 + 0x60);
    if (lVar5 == 0) {
      local_34 = 0;
      iVar6 = 0;
      puVar3 = &DAT_149dfb77a;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar5 * 2);
      iVar6 = local_38 + -1;
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
        iVar6 = 0;
      }
    }
    cVar1 = FUN_144a791f8(param_2,puVar3,iVar6,1);
    uVar4 = CONCAT71((int7)((ulonglong)_Src >> 8),1);
    if (cVar1 == '\0') {
      iVar6 = 0;
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
        iVar6 = *(int *)(param_2 + 1) + -1;
      }
      uVar2 = FUN_144a791f8(&local_40,puVar3,iVar6,1);
      uVar4 = (ulonglong)uVar2;
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e89c6c FUN_140e89c6c body=1302 status=ok
// SIG undefined FUN_140e89c6c(void)

void FUN_140e89c6c(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 *local_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xb8) + 0x10))();
  iVar5 = *(int *)(param_1 + 0x58);
  if (0 < iVar5) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    local_d0 = 0;
    uVar8 = *puVar1;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,iVar5);
    FUN_140fa4598(&local_d0,iVar5);
    FUN_140fa4570(local_d0,uVar8,iVar5);
    local_78 = 0;
    local_68 = &PTR_LAB_14a176290;
    local_60 = local_d0;
    uStack_58 = uStack_c8;
    local_d0 = 0;
    uStack_c8 = 0;
    local_88 = FUN_142b1d926;
    local_e8 = 0x8ff;
    FUN_14014aede(&local_d8);
    local_c0 = local_d8;
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = *(int *)(local_d8 + 1) + 1;
      UNLOCK();
    }
    local_98 = (undefined1 *)0x0;
    local_90 = 1;
    FUN_144727e94(local_b8,1,0);
    puVar10 = local_98;
    if (local_98 == (undefined1 *)0x0) {
      puVar10 = local_b8;
    }
    FUN_144727e6e(puVar10,&local_c0,1);
    if (local_c0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_c0 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_c0)(local_c0,1);
      }
    }
    uVar9 = local_90;
    lVar12 = param_1 + 0x20;
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar5 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = lVar12;
      }
      lVar15 = (longlong)(int)local_90;
      local_90 = local_90 + 1;
      if (local_8c < local_90) {
        FUN_14476a5c8(local_b8,uVar9);
      }
      puVar10 = local_b8;
      if (local_98 != (undefined1 *)0x0) {
        puVar10 = local_98;
      }
      lVar13 = *(longlong *)(lVar13 + (longlong)(iVar5 + -1) * 8);
      *(longlong *)(puVar10 + lVar15 * 8) = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar7 = (uint *)*puVar3;
    if (puVar7 != (uint *)0x0) goto LAB_140e89eb6;
    while( true ) {
      uVar9 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar9 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar9 | 1;
        __tlregdtor(&LAB_142b1bd68);
      }
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar6 = *(undefined4 **)(lVar13 + 0x310);
      *(undefined8 *)(lVar13 + 0x310) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar6 = 0xffffffff;
      *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar3 = puVar6;
      FUN_140217a48(puVar3);
      puVar7 = (uint *)*puVar3;
LAB_140e89eb6:
      puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar11 = (uint *)(puVar14 + 0x1b);
      uVar9 = puVar7[0x12];
      if (puVar11 <= puVar7 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
        LOCK();
        uVar4 = *puVar7;
        *puVar7 = *puVar7 + uVar9 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar9) != 0xffffffff) break;
        puVar7 = (uint *)*puVar3;
        *puVar7 = 0xffffffff;
        *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        *puVar3 = puVar7;
        puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
        puVar11 = (uint *)(puVar14 + 0x1b);
        uVar9 = 0;
        if (puVar11 <= puVar7 + 0x4000) {
          uVar9 = 1;
          goto LAB_140e89f36;
        }
      }
    }
    uVar9 = uVar9 + 1;
LAB_140e89f36:
    *(uint **)(puVar7 + 0x10) = puVar11;
    puVar7[0x12] = uVar9;
    FUN_1447247dc(puVar14,local_b8);
    *puVar14 = &PTR_FUN_14a1760c8;
    FUN_140fa44e8(puVar14 + 0x15,uVar8,puVar1);
    if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
    }
    puVar14[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar14[9] = puVar14;
    puVar14[10] = puVar14;
    lVar13 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar13 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar13 + 0x30);
    }
    puVar14[0xf] = uVar8;
    puVar14[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,1);
    FUN_1447439e4(puVar14);
    iVar5 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar5 + 1U) {
      FUN_14476a5c8(lVar12,iVar5);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined8 **)(lVar12 + (longlong)iVar5 * 8) = puVar14;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    FUN_140f6e7ef(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((iVar5 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      FUN_14709a05a(puVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar14 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
    puVar10 = local_b8;
    if (local_98 != (undefined1 *)0x0) {
      puVar10 = local_98;
    }
    FUN_144717c65(puVar10,local_90);
    if (local_98 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_d8 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_d8)(local_d8,1);
      }
    }
    FUN_140f6e7ef(local_d0,uStack_c8 & 0xffffffff);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8a184 FUN_140e8a184 body=631 status=ok
// SIG undefined FUN_140e8a184(void)

void FUN_140e8a184(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a0e78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a0e78,0,0,4);
  }
  uVar5 = DAT_14c9a0e80;
  if (DAT_14c9a0e80 != 0) {
    FUN_144a1cbf0(&DAT_14c9a0e70,0,DAT_14c9a0e80,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14c9a0e78;
        if (DAT_14c9a0e78 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a0e70;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c9a0e80 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c9a0e48;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c9a0e60 == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
      do {
        lVar13 = DAT_14c9a0e38;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar1 = *(undefined8 *)(DAT_14c9a0e38 + lVar12);
        uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar14 = (uint)uVar1 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) &
                 (longlong)(int)DAT_14c9a0e80 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(DAT_14c9a0e38 + 0x1c + lVar12) = iVar10;
        puVar7 = DAT_14c9a0e78;
        if (DAT_14c9a0e78 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a0e70;
        }
        *(undefined4 *)(lVar13 + 0x18 + lVar12) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c9a0e80 - 1U & uVar11) * 4);
        puVar7 = DAT_14c9a0e78;
        if (DAT_14c9a0e78 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a0e70;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14c9a0e80 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_58 + 0x10);
        if (*(undefined **)(local_58 + 0x10) == (undefined *)0x0) {
          puVar7 = local_58;
        }
        iVar10 = *(int *)(local_58 + 0x18);
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140e8a3b4;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar10);
    }
  }
LAB_140e8a3b4:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8a3fc FUN_140e8a3fc body=1322 status=ok
// SIG undefined FUN_140e8a3fc(void)

void FUN_140e8a3fc(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_140e8a432;
  puVar1 = (uint *)(param_1 + 5);
  cVar5 = FUN_140e8a950(puVar1);
  if (cVar5 != '\0') goto LAB_140e8a432;
  if (((((*(int *)((longlong)param_1 + 0x2c) != 0) && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x2c))))) &&
     ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar12 = *plVar10;
    }
    else {
      lVar12 = 0;
    }
    if (param_1[7] != 0) {
      FUN_14480f766(lVar12 + 0x89f0);
    }
  }
  iVar6 = DAT_14c9647dc;
  uVar3 = *(uint *)(param_2 + 0xc);
  *puVar1 = uVar3;
  if ((int)uVar3 < iVar6) {
    lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  iVar6 = *(int *)(lVar12 + 0x10);
  if (iVar6 == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar6 = *(int *)(lVar12 + 0x10);
    bVar14 = iVar6 == 0;
    if (bVar14) {
      *(int *)(lVar12 + 0x10) = iVar7;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar6 = iVar7;
    }
    *(int *)((longlong)param_1 + 0x2c) = iVar6;
    if (iVar6 == 0) goto LAB_140e8a432;
  }
  else {
    *(int *)((longlong)param_1 + 0x2c) = iVar6;
  }
  uVar3 = *puVar1;
  if ((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
     ((plVar10 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
      plVar10 == (longlong *)0x0 ||
      (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))))
  goto LAB_140e8a432;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar12 = *plVar10;
  }
  else {
    lVar12 = 0;
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  plVar10 = (longlong *)param_1[1];
  if (plVar10 == (longlong *)0x0) {
LAB_140e8a7dc:
    *local_50 = (longlong)&PTR_LAB_14b99c5f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_50[2] = lVar9;
    *local_50 = (longlong)&PTR_FUN_14b9a02b0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = (longlong)FUN_14586a42c;
  }
  else {
    iVar6 = (int)plVar10[1];
    do {
      if (iVar6 == 0) goto LAB_140e8a7dc;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar14 = iVar6 == iVar7;
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar14);
    lVar13 = *param_1;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *local_50 = (longlong)&PTR_LAB_14b99c5f0;
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
    *local_50 = (longlong)&PTR_FUN_14b9a02b0;
    local_50[3] = lVar13;
    local_50[4] = (longlong)plVar10;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    local_50[5] = (longlong)FUN_14586a42c;
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 == 0) {
      lVar13 = 0;
      goto LAB_140e8a6fd;
    }
    if (local_50 != (longlong *)0x0) {
      lVar13 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140e8a6f0;
    }
    lVar13 = 0;
  }
  else {
    plVar10 = (longlong *)(lVar12 + 0x89f0);
    if (*(int *)(lVar12 + 0x8a04) < 1) {
      iVar6 = *(int *)(lVar12 + 0x89f8);
      iVar7 = *(int *)(lVar12 + 0x8a00) + -1;
      *(int *)(lVar12 + 0x8a00) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar10 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar10 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar10,iVar8);
              FUN_14005b248(plVar10);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar7 = *(int *)(lVar12 + 0x89f8);
          } while (iVar8 < iVar7);
        }
        iVar8 = 2;
        if (2 < iVar7 * 2) {
          iVar8 = iVar7 * 2;
        }
        *(int *)(lVar12 + 0x8a00) = iVar8;
        if ((iVar8 < iVar6) && (*(int *)(lVar12 + 0x89fc) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    lVar13 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      lVar13 = local_40;
    }
    iVar6 = *(int *)(lVar12 + 0x89f8);
    *(uint *)(lVar12 + 0x89f8) = iVar6 + 1U;
    if (*(uint *)(lVar12 + 0x89fc) < iVar6 + 1U) {
      FUN_1447a71f6(plVar10,iVar6);
    }
    lVar12 = *plVar10;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar12 + lVar9) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar9) = 0;
    *(longlong **)(lVar12 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar12 + 8 + lVar9) = local_48;
LAB_140e8a6f0:
    local_48 = 0;
LAB_140e8a6fd:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[7] = lVar13;
LAB_140e8a432:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8a950 FUN_140e8a950 body=322 status=ok
// SIG undefined FUN_140e8a950(void)

bool FUN_140e8a950(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140e8aa92 FUN_140e8aa92 body=133 status=ok
// SIG undefined FUN_140e8aa92(void)

longlong FUN_140e8aa92(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x28,param_2 + 0x28);
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_140e8ab18(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 140e8ab18 FUN_140e8ab18 body=93 status=ok
// SIG undefined FUN_140e8ab18(void)

undefined8 * FUN_140e8ab18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140485972(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140e8ac72(param_1,iVar1);
      FUN_140e8ab75(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140e8ab75 FUN_140e8ab75 body=60 status=ok
// SIG undefined FUN_140e8ab75(void)

void FUN_140e8ab75(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140e8abb2(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 140e8abb2 FUN_140e8abb2 body=191 status=ok
// SIG undefined FUN_140e8abb2(void)

undefined8 * FUN_140e8abb2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x275c8fdc;
  param_1[3] = 0;
  FUN_140265f12();
  param_1[5] = &DAT_14cb83310;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = &PTR_FUN_14b1828b0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  FUN_140ba9fba(param_1,param_2);
  return param_1;
}



// FUNCTION 140e8ac72 FUN_140e8ac72 body=333 status=ok
// SIG undefined FUN_140e8ac72(void)

void FUN_140e8ac72(longlong param_1,int param_2,int param_3)

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
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0xe8;
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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140e8ace3;
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
LAB_140e8ace3:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0xe8,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e8adce FUN_140e8adce body=40 status=ok
// SIG undefined FUN_140e8adce(void)

undefined8 FUN_140e8adce(undefined8 param_1,int param_2)

{
  FUN_140e8adf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e8adf6 FUN_140e8adf6 body=457 status=ok
// SIG undefined FUN_140e8adf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e8adf6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b1e5a50;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140e8afc0(param_1 + 0x17,0);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e8b2a6(param_1 + 0xd,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
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
  plVar3 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140e8af41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e8afc0 FUN_140e8afc0 body=627 status=ok
// SIG undefined FUN_140e8afc0(void)

void FUN_140e8afc0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140e8b102;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *param_1;
      if (*(longlong *)(lVar14 + 0x108 + (longlong)iVar9 * 0x120) != 0) {
        FUN_1400020a8();
      }
      lVar14 = lVar14 + (longlong)iVar9 * 0x120;
      if (*(longlong *)(lVar14 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      plVar5 = *(longlong **)(lVar14 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (*(longlong *)(lVar14 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
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
          if (iVar8 - lVar14 == lVar12) goto LAB_140e8b102;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140e8b102:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e8b234(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140e8b234 FUN_140e8b234 body=113 status=ok
// SIG undefined FUN_140e8b234(void)

void FUN_140e8b234(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x120)) {
      uVar2 = uVar1 / 0x120 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x120,8);
  }
  return;
}



// FUNCTION 140e8b2a6 FUN_140e8b2a6 body=697 status=ok
// SIG undefined FUN_140e8b2a6(void)

void FUN_140e8b2a6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140e8b4d9;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *param_1;
      if (*(longlong *)(lVar14 + 0x78 + (longlong)iVar9 * 0x90) != 0) {
        FUN_1400020a8();
      }
      lVar14 = lVar14 + (longlong)iVar9 * 0x90;
      if (*(longlong *)(lVar14 + 0x68) != 0) {
        FUN_1400020a8();
      }
      plVar5 = *(longlong **)(lVar14 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = *(longlong **)(lVar14 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
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
          if (iVar8 - lVar14 == lVar12) goto LAB_140e8b4d9;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140e8b4d9:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140e8b560 FUN_140e8b560 body=80 status=ok
// SIG undefined FUN_140e8b560(void)

void FUN_140e8b560(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_140e8b5b2(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8b5b2 FUN_140e8b5b2 body=53 status=ok
// SIG undefined FUN_140e8b5b2(void)

undefined8 FUN_140e8b5b2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb1b378,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 140e8b5e8 FUN_140e8b5e8 body=775 status=ok
// SIG undefined FUN_140e8b5e8(void)

void FUN_140e8b5e8(longlong param_1,uint *param_2,undefined8 param_3)

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
  uVar10 = *param_2;
  if ((longlong)iVar7 == -1) {
    if (((uVar10 != 0) && (param_2[1] != 0)) && (uVar10 != DAT_14c948000)) {
      puVar4 = &DAT_14c948028;
      goto LAB_140e8b644;
    }
LAB_140e8b883:
    puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar10 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar10 == 0) || (uVar3 = param_2[1], uVar3 == 0)) || (uVar10 == DAT_14c948000))
    goto LAB_140e8b883;
    puVar5 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar5 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar3) {
      puVar5 = *(uint **)(param_2 + 6);
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
      if ((int)uVar3 <= iVar7) goto LAB_140e8b883;
      puVar4 = (ulonglong *)(puVar5 + (longlong)iVar7 * 3 + 1);
      uVar10 = puVar5[(longlong)iVar7 * 3];
    }
  }
LAB_140e8b644:
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
              (local_68 = *(uint **)(lVar1 + 0x10), local_68 != (uint *)0x0)))) goto LAB_140e8b797;
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
  FUN_1447715ec(puVar5,param_2);
  iVar7 = *(int *)(param_1 + 0x2c8);
  local_5c = *puVar5;
  if ((longlong)iVar7 == -1) {
    if (((local_5c != 0) && (puVar5[1] != 0)) && (local_5c != DAT_14c948000)) {
      puVar5 = (uint *)&DAT_14c948028;
      goto LAB_140e8b765;
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
      goto LAB_140e8b765;
    }
    if (iVar7 < (int)uVar10) {
      puVar5 = puVar6 + (longlong)iVar7 * 3 + 1;
      local_5c = puVar6[(longlong)iVar7 * 3];
      goto LAB_140e8b765;
    }
  }
  puVar5 = (uint *)((longlong)&DAT_14c948618 + 4);
  local_5c = (uint)DAT_14c948618;
LAB_140e8b765:
  local_58 = *(undefined8 *)puVar5;
  local_50 = &local_5c;
  local_48 = &local_68;
  FUN_14021fdc6((longlong *)(param_1 + 0x278),local_3c,&local_50,0);
LAB_140e8b797:
  FUN_140e8b8f0(param_1,local_68,param_3);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8b8f0 FUN_140e8b8f0 body=402 status=ok
// SIG undefined FUN_140e8b8f0(void)

void FUN_140e8b8f0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    plVar10 = (longlong *)(param_2 + 0x60);
    plVar7 = *(longlong **)(param_2 + 0x60);
    if (plVar7 == (longlong *)0x0) {
LAB_140e8b918:
      plVar7 = (longlong *)FUN_1457bb178(param_1,param_3);
      *plVar7 = param_2;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      plVar9 = plVar10;
      if (lVar4 != plVar7[1]) {
        do {
          plVar9 = plVar7;
          plVar7 = (longlong *)plVar9[8];
          if (plVar7 == (longlong *)0x0) goto LAB_140e8b918;
        } while (lVar4 != plVar7[1]);
        plVar9 = plVar9 + 8;
      }
      if ((*(char *)(lVar4 + 0x158) == '\x01') &&
         (FUN_140220358(param_2), *param_3 != (int)plVar7[3])) {
        iVar2 = DAT_14c9a1758 + 1;
        *(int *)(param_2 + 0x44) = DAT_14c9a1758;
        DAT_14c9a1758 = iVar2;
        FUN_140220358(param_2);
        *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 8;
      }
      *(undefined4 *)(plVar7 + 2) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x168);
      FUN_1447715ec(plVar7 + 3,param_3);
      if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x160) & 1) == 0) {
        return;
      }
      *plVar9 = plVar7[8];
      plVar7[8] = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x158) == '\x01') {
      iVar2 = DAT_14c9a1758 + 1;
      *(int *)(param_2 + 0x44) = DAT_14c9a1758;
      DAT_14c9a1758 = iVar2;
      FUN_140220358(param_2);
      *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 8;
    }
    if (*plVar10 == 0) {
      lVar8 = 0;
    }
    else {
      lVar4 = plVar7[1];
      iVar2 = *(int *)(lVar4 + 0x15c);
      lVar5 = *plVar10;
      do {
        lVar8 = lVar5;
        lVar5 = *(longlong *)(lVar8 + 8);
        iVar1 = *(int *)(lVar5 + 0x15c);
        bVar12 = SBORROW4(iVar2,iVar1);
        iVar6 = iVar2 - iVar1;
        bVar11 = false;
        if (iVar2 == iVar1) {
          iVar1 = *(int *)(lVar5 + 0x98);
          iVar3 = *(int *)(lVar4 + 0x98);
          bVar12 = SBORROW4(iVar3,iVar1);
          iVar6 = iVar3 - iVar1;
          bVar11 = iVar3 == iVar1;
          if (!bVar11) goto LAB_140e8b9dc;
          if (*(float *)(lVar5 + 0x9c) <= *(float *)(lVar4 + 0x9c)) break;
        }
        else {
LAB_140e8b9dc:
          if (!bVar11 && bVar12 == iVar6 < 0) break;
        }
        plVar9 = (longlong *)(lVar8 + 0x40);
        plVar10 = (longlong *)(lVar8 + 0x40);
        lVar8 = 0;
        lVar5 = *plVar9;
      } while (*plVar9 != 0);
    }
    plVar7[8] = lVar8;
    *plVar10 = (longlong)plVar7;
  }
  return;
}



// FUNCTION 140e8ba82 FUN_140e8ba82 body=40 status=ok
// SIG undefined FUN_140e8ba82(void)

undefined8 FUN_140e8ba82(undefined8 param_1,int param_2)

{
  FUN_140e8baaa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e8baaa FUN_140e8baaa body=205 status=ok
// SIG undefined FUN_140e8baaa(void)

void FUN_140e8baaa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a530730;
  param_1[5] = &PTR_FUN_14a530aa0;
  plVar3 = (longlong *)param_1[100];
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
  param_1[0x46] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x41];
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
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 140e8bb78 FUN_140e8bb78 body=200 status=ok
// SIG undefined FUN_140e8bb78(void)

undefined8 * FUN_140e8bb78(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac51100;
  FUN_140e8bc40(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac4eaf0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e8bc40 FUN_140e8bc40 body=105 status=ok
// SIG undefined FUN_140e8bc40(void)

void FUN_140e8bc40(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e8bcb2 FUN_140e8bcb2 body=614 status=ok
// SIG undefined FUN_140e8bcb2(void)

void FUN_140e8bcb2(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68 [72];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140982196(local_20,param_1);
  if (*param_1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) =
         *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 2;
  }
  FUN_1448a432c(local_68,param_1);
  if (*param_1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    bVar6 = 1;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) =
         *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 2;
    bVar6 = *param_1;
  }
  if ((bVar6 & 1) == 0) {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_88 = &local_7c;
      local_80 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_80 = 1;
      local_88 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_80 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_88 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_70 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_78 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_78 = &local_6c;
      local_70 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_70 = 1;
      local_78 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != 0) {
    pbVar9 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_88 + (int)local_80;
      *local_88 = (int)DAT_14c84635c;
      puVar2 = local_78 + (int)local_70;
      *local_78 = (int)((ulonglong)DAT_14c84635c >> 0x20);
      iVar8 = iVar8 + 1;
      pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      local_88 = puVar1;
      local_78 = puVar2;
    } while (iVar8 < *(int *)pbVar9);
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8bf30 FUN_140e8bf30 body=157 status=ok
// SIG undefined FUN_140e8bf30(void)

void FUN_140e8bf30(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140e8bfce(*(undefined8 *)(param_1 + 0x30),param_1);
  if ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x93) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x38) + 0x98) != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x58);
      uVar3 = FUN_1401b4c98(lVar2);
      lVar4 = FUN_144a61814(uVar3,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
    FUN_1401073f6(lVar2 + 0xa00,param_1);
    FUN_1401073f6(lVar2 + 0xa10,param_1);
  }
  *(undefined1 *)(param_1 + 0x48) = 2;
  return;
}



// FUNCTION 140e8bfce FUN_140e8bfce body=91 status=ok
// SIG undefined FUN_140e8bfce(void)

void FUN_140e8bfce(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 & 0xff;
      if ((int)uVar3 < iVar2) {
        lVar1 = *(longlong *)
                 (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                 (ulonglong)(uVar3 << 7) + (ulonglong)uVar3 * 8);
        if (lVar1 != 0) {
          FUN_140457ffc(lVar1 + 0x40,param_2);
          iVar2 = *(int *)(param_1 + 0xbf0);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}



// FUNCTION 140e8c03a FUN_140e8c03a body=44 status=ok
// SIG undefined FUN_140e8c03a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e8c03a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe6afc = _DAT_14cbe6afc + -1;
  *param_1 = DAT_14cbe6af0;
  DAT_14cbe6af0 = param_1;
  return;
}



// FUNCTION 140e8c066 FUN_140e8c066 body=26 status=ok
// SIG undefined FUN_140e8c066(void)

void FUN_140e8c066(undefined8 param_1)

{
  FUN_140e8c080();
  FUN_140e8c10e(param_1);
  return;
}



// FUNCTION 140e8c080 FUN_140e8c080 body=142 status=ok
// SIG undefined FUN_140e8c080(void)

void FUN_140e8c080(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cb7f9a0 != DAT_14cb7f9cc) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cb7f9d0;
    if (DAT_14cb7f9d8 != (undefined *)0x0) {
      puVar3 = DAT_14cb7f9d8;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14cb7f9e0 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14cb7f998 + (longlong)iVar1 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cb7f998 + (longlong)iVar1 * 0x18) == param_1) {
        FUN_1457bb248(iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e8c10e FUN_140e8c10e body=142 status=ok
// SIG undefined FUN_140e8c10e(void)

void FUN_140e8c10e(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cb7f9f0 != DAT_14cb7fa1c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cb7fa20;
    if (DAT_14cb7fa28 != (undefined *)0x0) {
      puVar3 = DAT_14cb7fa28;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14cb7fa30 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14cb7f9e8 + (longlong)iVar1 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cb7f9e8 + (longlong)iVar1 * 0x18) == param_1) {
        FUN_1457bb1ec(iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e8c19c FUN_140e8c19c body=306 status=ok
// SIG undefined FUN_140e8c19c(void)

undefined8 FUN_140e8c19c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e8c2c8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e8c2c8;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140e8c2c8:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e8c270;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140e8c270;
    }
  }
  uVar6 = 0;
LAB_140e8c270:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8c2d0 FUN_140e8c2d0 body=300 status=ok
// SIG undefined FUN_140e8c2d0(void)

void FUN_140e8c2d0(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  char local_50;
  undefined7 uStack_4f;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449027d0(param_1,&local_50);
  pfVar3 = *(float **)(CONCAT71(uStack_4f,local_50) + 0x2a0);
  AcquireSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x1a));
  pfVar3[0x18] = (float)((int)pfVar3[0x18] + 1);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  cVar4 = FUN_140280fd6(param_2,param_1 + 0x58);
  if (cVar4 != '\0') {
    if (pfVar3[1] == 0.0 || param_3 != *pfVar3) {
      *pfVar3 = param_3;
      pfVar3[1] = (float)((int)pfVar3[1] + 1);
    }
    local_50 = '\x04';
    uVar5 = FUN_140280ec4(param_2);
    cVar4 = FUN_140280f4a(uVar5,&local_50);
    if (cVar4 != '\0') {
      if ((local_50 != *(char *)(pfVar3 + 10)) || (pfVar3[0xb] == 0.0)) {
        *(char *)(pfVar3 + 10) = local_50;
        pfVar3[0xb] = (float)((int)pfVar3[0xb] + 1);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x1a));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8c3fe FUN_140e8c3fe body=48 status=ok
// SIG undefined FUN_140e8c3fe(void)

undefined8 FUN_140e8c3fe(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1401499b2();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1403a0144(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e8c423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140e8c432 FUN_140e8c432 body=2467 status=ok
// SIG undefined FUN_140e8c432(void)

void FUN_140e8c432(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x30,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = local_88;
    if (local_68 == 0) {
      uVar9 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0xd0,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = 0;
    if (local_68 != 0) {
      uVar9 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x120,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = 0;
    if (local_68 != 0) {
      uVar9 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x178,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = 0;
    if (local_68 != 0) {
      uVar9 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_88;
  FUN_1448729ea(param_1 + 0x1d0,puVar7,local_e0);
  iVar5 = FUN_14005fbd2(puVar7,1);
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,4);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar7 = &local_b0;
  FUN_1448729ea(param_1 + 0x80,puVar7,local_e0);
  uVar9 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar9 = 0;
    if (local_68 != 0) {
      uVar9 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_140e8cdd6();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,5);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar6,uVar9,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar7 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8cdd6 FUN_140e8cdd6 body=57 status=ok
// SIG undefined FUN_140e8cdd6(void)

void FUN_140e8cdd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c78 = FUN_14171c317(FUN_146618f14,uVar1,L"EAtt_WeaponBehaviorCharge");
  }
  return;
}



// FUNCTION 140e8ce10 FUN_140e8ce10 body=136 status=ok
// SIG undefined FUN_140e8ce10(void)

undefined8 * FUN_140e8ce10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e8ce9a(&local_28,param_3);
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



// FUNCTION 140e8ce9a FUN_140e8ce9a body=286 status=ok
// SIG undefined FUN_140e8ce9a(void)

undefined8 * FUN_140e8ce9a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  wchar_t *_Str;
  longlong *plVar5;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14ba3d920;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  uVar3 = _wcstoui64(_Str,(wchar_t **)0x0,10);
  puVar2[3] = uVar3;
  *param_1 = puVar2;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba3d970;
  plVar4[2] = (longlong)puVar2;
  param_1[1] = plVar4;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar5 = (longlong *)puVar2[2];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar4) goto LAB_140e8cf59;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar2[2];
    if (plVar5 == (longlong *)0x0) {
      puVar2[2] = plVar4;
      goto LAB_140e8cf59;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  puVar2[2] = plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
LAB_140e8cf59:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_1;
}



// FUNCTION 140e8cfb8 FUN_140e8cfb8 body=68 status=ok
// SIG undefined FUN_140e8cfb8(void)

undefined8 * FUN_140e8cfb8(undefined8 *param_1)

{
  FUN_140e8cffc();
  *param_1 = &PTR_LAB_14b47ae80;
  *(ushort *)(param_1 + 0x53) = (ushort)*(undefined4 *)(param_1 + 0x53) & 0xff80 | 0x40;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(byte *)((longlong)param_1 + 0x8e) = *(byte *)((longlong)param_1 + 0x8e) & 0xfb;
  return param_1;
}



// FUNCTION 140e8cffc FUN_140e8cffc body=386 status=ok
// SIG undefined FUN_140e8cffc(void)

void FUN_140e8cffc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b475390;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfc000000 | 0x880000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x281) = 0x101;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  return;
}



// FUNCTION 140e8d17e FUN_140e8d17e body=40 status=ok
// SIG undefined FUN_140e8d17e(void)

undefined8 FUN_140e8d17e(undefined8 param_1,int param_2)

{
  FUN_140e8d1a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e8d1a6 FUN_140e8d1a6 body=913 status=ok
// SIG undefined FUN_140e8d1a6(void)

void FUN_140e8d1a6(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3c930;
  plVar1 = param_1 + 0x4c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x50) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x44;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x48) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x47)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x47)) {
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
  plVar1 = param_1 + 0x33;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x37) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x36)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x36)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x22;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x26) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x25)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x25)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
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



// FUNCTION 140e8d538 FUN_140e8d538 body=195 status=ok
// SIG undefined FUN_140e8d538(void)

void FUN_140e8d538(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x60;
  lVar2 = FUN_140e8d5fc(lVar1);
  if (lVar2 != 0) {
    FUN_14014e996(lVar2,local_58,1,0);
    lVar3 = FUN_140495e96(param_1 + 0x30);
    if (lVar3 != 0) {
      FUN_1457bb42e(lVar3,local_58);
    }
    FUN_1457bb536(lVar1,&local_5c,lVar2);
    FUN_1457bb4b4(lVar1,local_5c);
    FUN_140e8d6fc(param_1,param_2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8d5fc FUN_140e8d5fc body=254 status=ok
// SIG undefined FUN_140e8d5fc(void)

longlong FUN_140e8d5fc(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar1 = 0;
    do {
      if (*(int *)(*local_68 + 0x38 + (longlong)iStack_4c * 0x48) == param_2) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0x48;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140e8d6fc FUN_140e8d6fc body=103 status=ok
// SIG undefined FUN_140e8d6fc(void)

void FUN_140e8d6fc(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar2 = (longlong *)FUN_140e8d764();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
  FUN_140e8d7da(lVar1,&local_24);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8d764 FUN_140e8d764 body=116 status=ok
// SIG undefined FUN_140e8d764(void)

longlong FUN_140e8d764(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
    return local_28 + 0x140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8d7da FUN_140e8d7da body=764 status=ok
// SIG undefined FUN_140e8d7da(void)

void FUN_140e8d7da(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  void *_Dst;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  uint *local_d8;
  int *local_d0;
  longlong local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88 [2];
  undefined8 local_78;
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
  local_d0 = param_2;
  if (*param_2 != -1) {
    uVar4 = *(uint *)(param_1 + 5);
    if (uVar4 == 0) {
      uVar15 = 1;
      uVar8 = 0;
      uVar3 = 0;
      iVar14 = 0;
    }
    else {
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) {
        iVar14 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar14 = uVar4 - 1;
        }
        uVar8 = 0;
        uVar15 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar15 = uVar8;
        }
        iVar14 = 0;
        do {
          if (uVar15 == uVar8) goto LAB_140e8da24;
          iVar14 = iVar14 + 0x20;
          uVar3 = puVar5[uVar8 + 1];
          uVar8 = uVar8 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar8 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar15 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar3 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if ((int)uVar4 <= (int)uVar3) {
        uVar3 = uVar4;
      }
    }
    if (uVar3 != uVar4) {
      uVar13 = 0xffffffff;
      local_e0 = (ulonglong)uVar4;
      local_d8 = (uint *)(param_1 + 2);
      do {
        lVar9 = *param_1 + (longlong)(int)uVar3 * 0x28;
        local_a8 = &PTR_LAB_14b9a5460;
        uStack_a0 = local_d0;
        piVar2 = uStack_a0;
        local_88[0] = &LAB_144246dfc;
        local_78 = 0;
        local_b8 = (undefined ***)0x0;
        uStack_a0._0_4_ = SUB84(local_d0,0);
        uStack_a0._4_4_ = (undefined4)((ulonglong)local_d0 >> 0x20);
        local_58 = local_98;
        uStack_54 = uStack_94;
        uStack_50 = uStack_90;
        uStack_4c = uStack_8c;
        local_68 = 0x4b9a5460;
        uStack_64 = 1;
        uStack_60 = (undefined4)uStack_a0;
        uStack_5c = uStack_a0._4_4_;
        local_c8 = 0;
        uStack_a0 = piVar2;
        uVar4 = FUN_140e8dad8((longlong *)(lVar9 + 8),local_88);
        if (local_c8 != 0) {
          pppuVar7 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar7 = &local_a8;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar9 + 0x10))) {
          _Dst = (void *)((ulonglong)uVar4 * 0x120 + *(longlong *)(lVar9 + 8));
          FUN_140989cc7(_Dst,1);
          iVar14 = *(int *)(lVar9 + 0x10);
          iVar6 = iVar14 - (uVar4 + 1);
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x120),(longlong)iVar6 * 0x120);
            iVar14 = *(int *)(lVar9 + 0x10);
          }
          *(int *)(lVar9 + 0x10) = iVar14 + -1;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
          break;
        }
        uVar13 = uVar13 & ~(uint)uVar15;
        puVar5 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar5 = local_d8;
        }
        uVar4 = *(uint *)(param_1 + 5);
        iVar6 = (int)uVar8;
        lVar9 = (longlong)iVar6;
        uVar3 = puVar5[lVar9] & uVar13;
        if (uVar3 == 0) {
          iVar11 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar11 = uVar4 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar6) {
            iVar12 = iVar6;
          }
          if (iVar6 < iVar11) {
            lVar10 = 0;
            do {
              uVar3 = puVar5[lVar9 + lVar10 + 1];
              if (uVar3 != 0) {
                uVar8 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                uVar13 = 0xffffffff;
                goto LAB_140e8d9b1;
              }
              iVar14 = iVar14 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar12 - lVar9 != lVar10);
            uVar13 = 0xffffffff;
            lVar9 = (longlong)iVar12;
          }
          uVar8 = lVar9 + 1U & 0xffffffff;
          uVar3 = uVar4;
        }
        else {
LAB_140e8d9b1:
          uVar15 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar15 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar3 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar3) {
            uVar3 = uVar4;
          }
        }
      } while (uVar3 != (uint)local_e0);
    }
  }
LAB_140e8da24:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e8dad8 FUN_140e8dad8 body=166 status=ok
// SIG undefined FUN_140e8dad8(void)

int FUN_140e8dad8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  
  lVar3 = param_1[1];
  iVar7 = -1;
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    uVar8 = 0;
    do {
      pcVar2 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar2)(uVar5,lVar1 + uVar8);
      if (cVar4 != '\0') {
        iVar7 = (int)(uVar8 >> 5) * 0x38e38e39;
        break;
      }
      uVar8 = uVar8 + 0x120;
    } while ((longlong)(int)lVar3 * 0x120 != uVar8);
  }
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar7;
}



// FUNCTION 140e8db7e FUN_140e8db7e body=63 status=ok
// SIG undefined FUN_140e8db7e(void)

void FUN_140e8db7e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e8dbbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7d20c0;
  puVar1[0x72] = &PTR_FUN_14b7d2700;
  puVar1[0x73] = &PTR_FUN_14b7d2720;
  return;
}



// FUNCTION 140e8dbbe FUN_140e8dbbe body=402 status=ok
// SIG undefined FUN_140e8dbbe(void)

undefined8 * FUN_140e8dbbe(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b3a4ae0;
  param_1[0x72] = &PTR_LAB_14b3a5120;
  param_1[0x73] = &PTR_LAB_14b3a5140;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a7) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d9) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x421) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  FUN_1446f470e(&local_28,L"Perch",1);
  uVar2 = FUN_14061d078();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x8f] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  lVar3 = param_1[0x8f];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x8f];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8dd62 FUN_140e8dd62 body=44 status=ok
// SIG undefined FUN_140e8dd62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e8dd62(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb6ff3c = _DAT_14cb6ff3c + -1;
  *param_1 = DAT_14cb6ff30;
  DAT_14cb6ff30 = param_1;
  return;
}



// FUNCTION 140e8dd8e FUN_140e8dd8e body=49 status=ok
// SIG undefined FUN_140e8dd8e(void)

longlong FUN_140e8dd8e(void)

{
  if (DAT_14c926fd0 == 0) {
    FUN_140f50038(&DAT_14c926fd0,&PTR_s__Script_CoreUObject_149e4a470);
  }
  return DAT_14c926fd0;
}



// FUNCTION 140e8ddc0 FUN_140e8ddc0 body=758 status=ok
// SIG undefined FUN_140e8ddc0(void)

void FUN_140e8ddc0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_2 + 0xd8);
  uVar6 = 0;
  if (((*(int *)(param_2 + 0xc) != 0) && (uVar2 = *(uint *)(param_2 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_2 + 0xc))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if (((*(uint *)(plVar5 + 1) & 0x10200000) == 0) && (lVar4 = *plVar5, lVar4 != 0)) {
        lVar3 = FUN_14116e48a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar3 = FUN_14187eb96(lVar4);
          lVar4 = FUN_14479d2ce(lVar4 + 200);
          uVar6 = (uint)(lVar3 == lVar4);
          goto LAB_140e8df05;
        }
      }
      if (((*(int *)(param_2 + 0xc) != 0) && (uVar6 = *(uint *)(param_2 + 8), -1 < (int)uVar6)) &&
         ((int)uVar6 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_2 + 0xc))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))) {
          if (DAT_14cba14f0 == 0) {
            local_70 = &local_50;
            local_50 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_145885dac;
            local_78 = &LAB_148b9e16b;
            local_80 = FUN_140f505de;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000000;
            local_a0 = 8;
            local_a8 = 0x110;
            FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                          &DAT_14cba14f0,&DAT_148b9e16a);
          }
          if ((*(int *)(DAT_14cba14f0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) == DAT_14cba14f0 + 0x30)) {
            uVar6 = (uint)*(byte *)(lVar4 + 0xd8) + (uint)*(byte *)(lVar4 + 0xd8) * 2;
            goto LAB_140e8df05;
          }
        }
      }
      uVar6 = (uint)*(byte *)(param_2 + 0x83) * 2;
    }
  }
LAB_140e8df05:
  *(uint *)(param_2 + 0xd8) = uVar6;
  FUN_140e8e0b8(param_1 + 0x1b0,param_2,1);
  FUN_140e8e0b8(param_1 + 0x1c0,param_2,1);
  FUN_140e8e0b8(param_1 + 0x1d0,param_2,1);
  if ((param_3 != 2) && (uVar6 != 0)) {
    lVar4 = param_1 + 0x1b0;
    if ((uVar6 != 1) && (lVar4 = param_1 + 0x1c0, uVar6 == 3)) {
      lVar4 = param_1 + 0x1d0;
    }
    FUN_148d74bca(lVar4,param_2);
  }
  if (uVar1 != uVar6) {
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  if (((param_3 & 0xfffffffd) == 0) && (*(int *)(param_2 + 0xd8) != 0)) {
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8e0b8 FUN_140e8e0b8 body=160 status=ok
// SIG undefined FUN_140e8e0b8(void)

int FUN_140e8e0b8(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar3 = 0;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)(int)uVar5 * 8) == *param_2) {
        iVar6 = ~uVar5 + iVar4;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + (longlong)(int)uVar5 * 8),
                  (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
          iVar4 = (int)param_1[1];
        }
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 1) = iVar4;
        bVar3 = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar3)) {
      FUN_140e8e158(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 140e8e158 FUN_140e8e158 body=64 status=ok
// SIG undefined FUN_140e8e158(void)

void FUN_140e8e158(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140e8e198(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 140e8e198 FUN_140e8e198 body=87 status=ok
// SIG undefined FUN_140e8e198(void)

ulonglong FUN_140e8e198(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 140e8e1f0 FUN_140e8e1f0 body=215 status=ok
// SIG undefined FUN_140e8e1f0(void)

void FUN_140e8e1f0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar5 = 0;
  local_48 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_40 = lVar5;
  }
  local_38 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_38 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_50 = lVar5;
  }
  FUN_140e8e2c8(param_3 + 8,lVar2,lVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8e2c8 FUN_140e8e2c8 body=221 status=ok
// SIG undefined FUN_140e8e2c8(void)

void FUN_140e8e2c8(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6)

{
  short sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)param_4[2];
      if (*(ushort *)(param_2 + 0xe) != 0 && puVar3 != (undefined8 *)0x0) {
        uVar4 = 0;
        do {
          FUN_14158feea(*puVar3,*(undefined8 *)(param_3 + uVar4 * 8),
                        *(undefined1 *)(param_6 + uVar4));
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar5 != uVar4);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        sVar1 = *(short *)(lVar2 + uVar4 * 2);
        if (sVar1 != 0) {
          FUN_140e8e3a6(*(undefined8 *)(param_3 + uVar4 * 8),*(undefined2 *)(param_5 + uVar4 * 2),
                        sVar1,*(undefined1 *)(param_6 + uVar4));
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),*(undefined1 *)(param_6 + uVar4));
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 140e8e3a6 FUN_140e8e3a6 body=148 status=ok
// SIG undefined FUN_140e8e3a6(void)

void FUN_140e8e3a6(longlong param_1,ushort param_2,ushort param_3,byte param_4)

{
  byte bVar1;
  ulonglong uVar3;
  uint uVar2;
  
  uVar3 = (ulonglong)param_3;
  bVar1 = (byte)(param_2 >> 8);
  uVar2 = (uint)(param_2 >> 8);
  if ((char)param_2 == '\x01') {
    *(byte *)(param_1 + uVar3) =
         param_4 << (bVar1 & 0x1f) | *(byte *)(param_1 + uVar3) & ~(byte)(1 << (uVar2 & 0x1f));
    return;
  }
  switch((char)param_2) {
  case '\0':
    *(byte *)(param_1 + uVar3) = param_4;
    return;
  case '\x02':
    *(ushort *)(param_1 + uVar3) =
         (ushort)param_4 << (bVar1 & 0x1f) |
         *(ushort *)(param_1 + uVar3) & ~(ushort)(1 << (uVar2 & 0x1f));
    return;
  case '\x04':
    *(uint *)(param_1 + uVar3) =
         (uint)param_4 << (bVar1 & 0x1f) | *(uint *)(param_1 + uVar3) & ~(1 << (uVar2 & 0x1f));
    return;
  case '\b':
    *(ulonglong *)(param_1 + uVar3) =
         (ulonglong)param_4 << (bVar1 & 0x3f) |
         *(ulonglong *)(param_1 + uVar3) & ~(1L << ((ulonglong)(param_2 >> 8) & 0x3f));
  }
  return;
}



// FUNCTION 140e8e43a FUN_140e8e43a body=330 status=ok
// SIG undefined FUN_140e8e43a(void)

void FUN_140e8e43a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x310,0x10);
  puVar4[1] = param_2;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0x1800000000;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[0x3c] = 0;
  puVar4[0x3e] = 0;
  *(undefined1 *)(puVar4 + 0x4d) = 0;
  *(undefined1 *)(puVar4 + 0x4f) = 0;
  puVar4[0x5c] = 0;
  *(undefined4 *)(puVar4 + 0x5d) = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  *(undefined2 *)(puVar4 + 0x3b) = 0;
  puVar4[0x44] = 0;
  puVar4[0x45] = 0;
  puVar4[0x46] = 0;
  puVar4[0x47] = 0;
  puVar4[0x48] = 0;
  puVar4[0x49] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4b] = 0;
  puVar4[0x58] = 0;
  puVar4[0x59] = 0;
  puVar4[0x56] = 0;
  puVar4[0x57] = 0;
  puVar4[0x54] = 0;
  puVar4[0x55] = 0;
  puVar4[0x52] = 0;
  puVar4[0x53] = 0;
  puVar4[0x50] = 0;
  puVar4[0x51] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x2f4) = 0;
  puVar4[0x60] = 0;
  *(undefined4 *)(puVar4 + 0x61) = 0;
  *puVar4 = &PTR_FUN_14a349180;
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447183c0(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = puVar4;
  uVar5 = FUN_14178c720(lVar3 + 0xd8,param_2);
  puVar4[0x4e] = uVar5;
  *(undefined1 *)(puVar4 + 0x4f) = 1;
  return;
}



// FUNCTION 140e8e584 FUN_140e8e584 body=435 status=ok
// SIG undefined FUN_140e8e584(void)

ulonglong FUN_140e8e584(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  FUN_140e8e738(&local_20);
  iVar1 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < iVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8e738 FUN_140e8e738 body=120 status=ok
// SIG undefined FUN_140e8e738(void)

undefined8 * FUN_140e8e738(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca47510) {
    FUN_144b3d300(&DAT_14ca47510);
    if (DAT_14ca47510 == -1) {
      FUN_1446f470e(&DAT_14ca47508,L"RenderCaptureProvider",1);
      _Init_thread_footer(&DAT_14ca47510);
    }
  }
  *param_1 = DAT_14ca47508;
  return param_1;
}



// FUNCTION 140e8e7b0 FUN_140e8e7b0 body=3881 status=ok
// SIG undefined FUN_140e8e7b0(void)

/* WARNING: Removing unreachable block (ram,0x000140e8f2f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e8e7b0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  code *pcVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined8 uVar19;
  longlong lVar20;
  byte bVar21;
  bool bVar22;
  undefined1 auStack_578 [32];
  wchar_t *local_558;
  wchar_t *local_550;
  undefined4 local_548;
  undefined4 local_540;
  code *local_538;
  code *local_530;
  undefined1 *local_528;
  undefined1 *local_520;
  undefined1 *local_518;
  undefined1 *local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined1 local_4f1;
  uint local_4f0;
  undefined4 local_4ec;
  ulonglong local_4e8;
  ulonglong local_4e0;
  ulonglong local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  ulonglong local_4b0;
  undefined8 local_4a8;
  wchar_t local_49a;
  undefined8 local_498;
  undefined1 local_48d;
  uint local_48c;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined8 local_458 [6];
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_3c8;
  undefined1 local_3b8 [48];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined2 local_252;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_190 [4];
  undefined8 local_188 [12];
  undefined4 auStack_128 [30];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  pcVar12 = *(code **)(*param_3 + 0x270);
  plVar15 = param_3;
  if (pcVar12 == (code *)&LAB_1447f82f4) {
    plVar15 = (longlong *)param_3[9];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)param_3[8];
      pcVar12 = *(code **)(*plVar15 + 0x408);
      if (pcVar12 != (code *)&LAB_14470b702) goto LAB_140e8f67b;
      bVar18 = *(byte *)((longlong)plVar15 + 0x129);
      if (bVar18 == 1) {
        bVar18 = ~*(byte *)((longlong)plVar15 + 0x1d6) & 1;
      }
      uVar9 = (uint)bVar18;
    }
    else {
      pcVar12 = *(code **)(*plVar15 + 0x408);
      if (pcVar12 != (code *)&LAB_14497e176) goto LAB_140e8f67b;
      uVar9 = (uint)*(byte *)(plVar15 + 0x2b);
    }
  }
  else {
LAB_140e8f67b:
    uVar9 = (*pcVar12)(plVar15);
  }
  if (((uVar9 < 2) || (iVar7 = (**(code **)(*param_3 + 0x30))(param_3), iVar7 == 3)) ||
     (cVar5 = (**(code **)(*param_3 + 0x2b0))(param_3), cVar5 == '\0')) goto LAB_140e8e832;
  lVar10 = *param_4;
  memset(local_190,0,0x98);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ca4a0) && (FUN_144b3d300(&DAT_14c9ca4a0), DAT_14c9ca4a0 == -1)) {
    FUN_1456bdc0e();
    local_510 = &LAB_14712ac08;
    local_518 = &LAB_14712ac0c;
    local_520 = &LAB_147157c54;
    local_528 = &LAB_142bf7e6c;
    local_530 = FUN_147157c58;
    local_538 = FUN_147157c80;
    local_550 = L"Main";
    local_558 = L"/Engine/Private/DistortAccumulateVS.usf";
    local_500 = 0;
    local_508 = 0x108;
    local_540 = 1;
    local_548 = 0;
    FUN_140db5666(&DAT_14c9ca3f8,2,&DAT_14c9ca390,L"FDistortionMeshVS");
    _DAT_14c9ca3f8 = &PTR_FUN_14a1fb500;
    atexit((_func_5014 *)&LAB_142bf7e80);
    _Init_thread_footer(&DAT_14c9ca4a0);
  }
  local_188[DAT_14c9ca440] = &DAT_14c9ca3f8;
  auStack_128[DAT_14c9ca440] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ca5c8) && (FUN_144b3d300(&DAT_14c9ca5c8), DAT_14c9ca5c8 == -1)) {
    FUN_1456bdd58();
    local_510 = &LAB_14712ac08;
    local_518 = &LAB_14712ac0c;
    local_520 = &LAB_147157e30;
    local_528 = &LAB_142bf7e8c;
    local_530 = FUN_147157e34;
    local_538 = FUN_147157e5c;
    local_550 = L"Main";
    local_558 = L"/Engine/Private/DistortAccumulatePS.usf";
    local_500 = 0;
    local_508 = 0x108;
    local_540 = 1;
    local_548 = 3;
    FUN_140db5666(&DAT_14c9ca520,2,&DAT_14c9ca4b8,L"FDistortionMeshPS");
    _DAT_14c9ca520 = &PTR_FUN_14a1fb500;
    atexit((_func_5014 *)&LAB_142bf7ea0);
    _Init_thread_footer(&DAT_14c9ca5c8);
  }
  local_188[DAT_14c9ca568] = &DAT_14c9ca520;
  auStack_128[DAT_14c9ca568] = 0;
  local_2b8 = (undefined1  [16])0x0;
  local_2c8 = (undefined1  [16])0x0;
  local_2d8 = (undefined1  [16])0x0;
  local_2e8 = (undefined1  [16])0x0;
  local_2f8 = (undefined1  [16])0x0;
  local_308 = (undefined1  [16])0x0;
  local_318 = (undefined1  [16])0x0;
  cVar5 = FUN_14007744c(param_3,local_190,lVar10);
  if (cVar5 == '\0') goto LAB_140e8e832;
  local_4c8 = local_318._0_8_;
  if (local_308._0_8_ == 0) {
    local_4c8 = 0;
  }
  uVar4 = local_2f8._8_8_;
  uVar19 = local_318._0_8_;
  if (local_2f8._8_8_ == 0) {
    uVar19 = 0;
  }
  local_4b0 = *param_5;
  pcVar12 = *(code **)(*param_3 + 0x38);
  local_4c0 = local_308._0_8_;
  plVar15 = param_3;
  if (pcVar12 == FUN_144765e18) {
    plVar15 = (longlong *)param_3[9];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)param_3[8];
      pcVar12 = *(code **)(*plVar15 + 0x420);
      pcVar16 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar12 = *(code **)(*plVar15 + 0x420);
      pcVar16 = (code *)&LAB_14497e108;
    }
    if (pcVar12 != pcVar16) goto LAB_140e8f685;
  }
  else {
LAB_140e8f685:
    (*pcVar12)(plVar15);
  }
  lVar10 = *param_3;
  if (*(code **)(lVar10 + 0x100) == (code *)&LAB_144b25520) {
    bVar18 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar18 = (**(code **)(lVar10 + 0x100))(param_3);
    lVar10 = *param_3;
  }
  pcVar12 = *(code **)(lVar10 + 0x38);
  plVar15 = param_3;
  local_4b8 = uVar19;
  if (pcVar12 == FUN_144765e18) {
    plVar15 = (longlong *)param_3[9];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)param_3[8];
      pcVar12 = *(code **)(*plVar15 + 0x420);
      if (pcVar12 != (code *)&LAB_144b24e8a) goto LAB_140e8f69e;
      bVar21 = *(byte *)(plVar15 + 0x30);
    }
    else {
      pcVar12 = *(code **)(*plVar15 + 0x420);
      if (pcVar12 != (code *)&LAB_14497e108) goto LAB_140e8f69e;
      bVar21 = *(byte *)(plVar15 + 0x2a);
    }
    bVar21 = (bVar21 & 0x10) >> 4;
  }
  else {
LAB_140e8f69e:
    bVar21 = (*pcVar12)(plVar15);
  }
  local_468 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_488 = (undefined1  [16])0x0;
  local_4d8 = DAT_14ca4af08;
  iVar7 = FUN_140e8f79c(*(undefined2 *)(param_2 + 0xc));
  uVar1 = (ulonglong)(iVar7 != 0) * 8 + 2;
  cVar5 = FUN_140e8f6da();
  local_4d0 = uVar4;
  if (cVar5 == '\0') {
    local_4ec = 1;
    local_4e8 = 0;
    local_4e0 = uVar1;
  }
  else {
    local_4e8 = DAT_14ca4af08 | 9;
    local_4e0 = uVar1 | 0x1500;
    local_4ec = 2;
  }
  local_4a8 = *(undefined8 *)(param_2 + 0x38);
  local_4f1 = ((uint)local_4a8 >> 0xc & 1) == 0;
  uVar8 = (**(code **)(*param_3 + 0x78))(param_3);
  uVar1 = *param_5;
  uVar9 = *(uint *)(param_1 + 8);
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  lStack_68 = 0;
  cVar5 = FUN_1406917e6();
  if (cVar5 == '\0') {
    uVar13 = (uint)local_4b0;
    uVar2 = local_4b0 >> 0x11;
    lVar20 = (ulonglong)((uVar8 & 0xff) << 6) + 0x40;
    local_1ac = (uint)uVar1 & 0x3f;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    lVar10 = param_4[1];
    local_4f0 = uVar9;
    if (lVar10 == 0) {
      local_290 = 0x1100000000;
      (**(code **)(*param_4 + 0x48))(0,local_318);
      lVar10 = FUN_14486d71a(local_318);
      uVar13 = (uint)local_4b0;
    }
    bVar22 = (uVar13 >> 0x10 & 1) != 0;
    local_2d8 = ZEXT816(0);
    local_318._8_8_ = local_4c8;
    local_318._0_8_ = local_4c0;
    local_308._8_8_ = local_4b8;
    local_308._0_8_ = local_4d0;
    local_2f8 = ZEXT816(0);
    local_2e8 = ZEXT816(0);
    local_2c8 = ZEXT816(0);
    FUN_144765e6c(&local_238,lVar10);
    bVar3 = (uVar2 & 1) == 0;
    puVar14 = &DAT_14c9c0e10;
    if (bVar22 && (bVar3 && bVar21 == 0)) {
      puVar14 = &DAT_14c9c0e28;
    }
    puVar17 = &DAT_14c9c0d68;
    if (bVar22 && (bVar3 && bVar21 == 0)) {
      puVar17 = &DAT_14c9c0df8;
    }
    bVar3 = (uVar2 & 1) == 0;
    if (!bVar3 || bVar21 != 0) {
      puVar14 = &DAT_14c9c0e40;
    }
    puVar11 = &DAT_14c9c0db0;
    if (bVar3 && bVar21 == 0) {
      puVar11 = puVar17;
    }
    if (bVar18 != 0) {
      puVar11 = puVar14;
    }
    uStack_1d0 = *puVar11;
    local_1d8 = *(undefined8 *)(param_1 + lVar20);
    local_1c8 = *(undefined8 *)(param_1 + 8 + lVar20);
    uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
    uVar1 = local_4d8;
    uVar9 = local_4f0;
    if (uVar8 < 4) {
      uVar6 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
    }
    else {
      uVar6 = 0;
      if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar6 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar6,(undefined1)local_1af);
    cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
    if (cVar5 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar6);
    FUN_144a1fecc(&local_238,local_318);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_248;
      FUN_14573402d(local_3b8);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar10 = *param_4;
        local_458[0] = local_328;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_558 = (wchar_t *)&local_48c;
        local_48c = local_48c & 0xffff0000;
        local_550 = &local_49a;
        FUN_14573482a(&DAT_14cafccf8,&local_498,
                      (int)((ulonglong)local_458[0] >> 0x20) * 0x17 + (int)local_458[0] & 0x7fffffff
                      ,local_458);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_498 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_498 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,uVar9,lVar10);
        }
      }
      FUN_1457340f6(local_458,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar10 = *param_4;
        local_498 = local_3c8;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_558 = &local_49a;
        local_49a = L'\0';
        local_550 = (wchar_t *)&local_48d;
        FUN_14573482a(&DAT_14cafd9c8,&local_48c,
                      (int)((ulonglong)local_498 >> 0x20) * 0x17 + (int)local_498 & 0x7fffffff,
                      &local_498);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_48c * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_48c * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,uVar9,lVar10);
        }
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_428 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
      if (local_388 != 0) {
        FUN_140021284();
      }
    }
    local_2c8._12_4_ = local_4ec;
    local_2b8._8_8_ = uVar1 | 9;
    local_2b8._0_8_ = local_4e0;
    local_2a8 = local_4e8;
    local_2a0 = local_488._0_8_;
    uStack_298 = local_488._8_8_;
    local_290 = local_478._0_8_;
    uStack_288 = local_478._8_8_;
    local_280 = local_468._0_8_;
    uStack_278 = local_468._8_8_;
    local_258 = 1;
    local_270 = 0xb;
    local_268 = local_4a8;
    local_260 = 1;
    local_25f = local_4f1;
    local_25e = 1;
    local_25d = local_4f1;
    local_25c = 0x21;
    local_252 = 0;
    local_256 = 0;
    memcpy(local_188,local_318,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d8 = (undefined1  [16])0x0;
    local_318._8_8_ = local_4c8;
    local_318._0_8_ = local_4c0;
    local_308._8_8_ = local_4b8;
    local_308._0_8_ = local_4d0;
    local_2f8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    FUN_145734aa6(local_318,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = uVar9 & 0x7fffffff | local_70;
  lStack_68 = *param_4;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar18 = (**(code **)(*param_3 + 0x400))(param_3);
    local_70 = local_70 & 0x7fffffff | (uint)bVar18 << 0x1f;
    FUN_1406918b2();
  }
  iVar7 = (int)param_6[1];
  *(uint *)(param_6 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_6 + 0xc) < iVar7 + 1U) {
    FUN_14069191a(param_6,iVar7);
  }
  lVar10 = *param_6;
  _Dst = (void *)(lVar10 + (longlong)iVar7 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar10 + 0x110 + (longlong)iVar7 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  local_80 = 0;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  local_78 = 0x300000000;
  *(ulonglong *)((longlong)_Dst + 0x120) = CONCAT44(uStack_6c,local_70);
  *(longlong *)((longlong)_Dst + 0x128) = lStack_68;
LAB_140e8e832:
  if ((local_60 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8f6da FUN_140e8f6da body=194 status=ok
// SIG undefined FUN_140e8f6da(void)

undefined8 FUN_140e8f6da(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar5 = DAT_14ca97170;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar3 + 0xc60);
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
  lVar4 = DAT_14c9c9fe0;
  if (*(int *)(lVar5 + uVar9 * 4) < 1) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0xc60);
    uVar9 = (ulonglong)uVar2;
    if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
      uVar10 = 0;
    }
    else if (uVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = CONCAT44(extraout_var,DVar7);
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    uVar8 = CONCAT71((int7)(uVar9 >> 8),0 < *(int *)(lVar4 + uVar10 * 4));
  }
  return uVar8;
}



// FUNCTION 140e8f79c FUN_140e8f79c body=444 status=ok
// SIG undefined FUN_140e8f79c(void)

undefined8 FUN_140e8f79c(uint param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ca128) && (FUN_144b3d300(&DAT_14c9ca128), DAT_14c9ca128 == -1)) {
    FUN_140056680(&DAT_14c9ca110,L"r.Refraction.OffsetQuality");
    DAT_14c9ca120 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142bf7d7e);
    _Init_thread_footer(&DAT_14c9ca128);
  }
  puVar2 = &DAT_14ca84468;
  uVar6 = (ushort)param_1;
  if (uVar6 != 0x31) {
    switch(param_1 & 0xffff) {
    case 0x30:
switchD_140e8f892_caseD_30:
      puVar2 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140e8f892_caseD_31:
      if ((uVar6 & 0xfff0) != 0x20) {
        uVar3 = 0;
        goto LAB_140e8f7d9;
      }
      lVar4 = FUN_14741392a();
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_140e8f892_caseD_34:
      puVar2 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140e8f892_caseD_35:
      puVar2 = &DAT_14ca84478;
      break;
    default:
      switch(param_1 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140e8f892_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140e8f892_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140e8f892_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140e8f892_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar2 = &DAT_14ca84488;
      }
    }
  }
  uVar3 = *puVar2;
LAB_140e8f7d9:
  if (DAT_14c9ca120 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = DAT_14c9ca110;
    if (DAT_14c9ca118 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    DAT_14c9ca120 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
  }
  cVar1 = FUN_14002b5e0(uVar3,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar6)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e8f819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*DAT_14c9ca120 + 0xb0))();
  return uVar3;
}



// FUNCTION 140e8f966 FUN_140e8f966 body=172 status=ok
// SIG undefined FUN_140e8f966(void)

undefined8 * FUN_140e8f966(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b90ffb0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
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



// FUNCTION 140e8fa1e FUN_140e8fa1e body=445 status=ok
// SIG undefined FUN_140e8fa1e(void)

undefined8 FUN_140e8fa1e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  cVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar5 != '\0') {
    puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
    pbVar4 = (byte *)*puVar7;
    if (pbVar4 != (byte *)0x0) {
      if ((*pbVar4 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar9 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar8[9];
        }
        iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb54318) * 4);
        if (iVar10 != -1) {
          do {
            lVar2 = *plVar8 + (longlong)iVar10 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar10 * 0x40) == DAT_14cb54318) {
              if ((((lVar2 != 0) &&
                   (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
              goto LAB_140e8fac3;
              break;
            }
            iVar10 = *(int *)(lVar2 + 0x38);
          } while (iVar10 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_140e8fac3:
    pbVar4 = (byte *)*puVar7;
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 2)) {
      plVar9 = *(longlong **)(pbVar4 + 8);
      uVar3 = *(uint *)(plVar9 + 2);
      iVar10 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar10 + uVar3;
      if ((uint)(*(int *)(param_1 + 0x4c) - iVar10) < uVar3) {
        FUN_14488eebe(param_1 + 0x40);
      }
      memset((void *)((longlong)iVar10 * 2 + *(longlong *)(param_1 + 0x40)),0,
             (longlong)(int)uVar3 * 2);
      iVar10 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar10 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x40);
        lVar11 = 0;
        lVar12 = 0;
        do {
          FUN_14029cd3e();
          uVar6 = FUN_14029cda8(*plVar9 + lVar12,&DAT_14cb54430);
          *(undefined2 *)(lVar2 + lVar11) = uVar6;
          lVar12 = lVar12 + 0x10;
          lVar11 = lVar11 + 2;
        } while ((longlong)iVar10 * 2 != lVar11);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  return 0;
}



// FUNCTION 140e8fbe2 FUN_140e8fbe2 body=483 status=ok
// SIG undefined FUN_140e8fbe2(void)

void FUN_140e8fbe2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_6c;
  undefined4 local_64;
  undefined2 *local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140e4b700();
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar1 + 8))();
    lVar5 = FUN_1418d3c02();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar7 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar7 = plVar1;
      }
      goto LAB_140e8fc42;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140e8fc42:
  *(longlong **)(param_1 + 0x22e0) = plVar7;
  local_38 = *(undefined8 *)(param_1 + 0x2240);
  FUN_1400021e4(&local_38,&local_48);
  local_80 = 0xffffffff;
  local_88 = 1;
  iVar2 = FUN_1447ee042(&local_48,&DAT_149e0635c,1,1);
  if (iVar2 == -1) {
    local_60 = (undefined2 *)0x0;
  }
  else {
    uVar8 = local_40 - 1;
    puVar9 = local_48;
    if (local_40 == 0) {
      uVar8 = 0;
      puVar9 = &DAT_149dfb77a;
    }
    uVar3 = iVar2 + 1U;
    if ((int)uVar8 <= (int)(iVar2 + 1U)) {
      uVar3 = uVar8;
    }
    uVar6 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(&local_58,puVar9 + uVar6,uVar8 - (int)uVar6);
    puVar9 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    FUN_1446f470e(&local_60,puVar9,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 0x840) = DAT_14c948620;
  *(undefined8 *)(param_1 + 0x838) = DAT_14c948618;
  local_58 = local_60;
  FUN_1401533ba(&local_6c,&local_58,1);
  *(undefined4 *)(param_1 + 0x84c) = local_64;
  *(undefined8 *)(param_1 + 0x844) = local_6c;
  FUN_140655f5e(param_1,param_2);
  FUN_140f354e6(param_1 + -0x400);
  if (*param_2 != 0) {
    FUN_1418f33ce(param_1 + -0x400);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e8fdc6 FUN_140e8fdc6 body=61 status=ok
// SIG undefined FUN_140e8fdc6(void)

void FUN_140e8fdc6(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b5414d0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140e8fe04(param_1 + 0x10);
  return;
}



// FUNCTION 140e8fe04 FUN_140e8fe04 body=77 status=ok
// SIG undefined FUN_140e8fe04(void)

void FUN_140e8fe04(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b538be0;
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e8fe4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e8ffac FUN_140e8ffac body=343 status=ok
// SIG undefined FUN_140e8ffac(void)

void FUN_140e8ffac(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = 0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      if (puVar6[iVar2] == 0x2e) {
        FUN_140e90204(&local_50,iVar2 - iVar3,puVar6 + iVar3);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_140e90104(param_1,iVar3);
        }
        FUN_14702c9de((longlong)iVar3 * 0x20 + *param_1,&local_50);
        iVar3 = iVar2 + 1;
        iVar2 = iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  FUN_140e90204(&local_50,iVar4 - iVar3,puVar6 + iVar3);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140e90104(param_1,iVar2);
  }
  lVar1 = *param_1;
  lVar5 = (longlong)iVar2 * 0x20;
  *(undefined4 *)(lVar1 + 8 + lVar5) = local_48;
  *(undefined8 *)(lVar1 + lVar5) = local_50;
  *(longlong *)(lVar1 + 0x10 + lVar5) = local_40;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(ulonglong *)(lVar1 + lVar5 + 0x18) = local_38;
  if ((((local_38 & 1) != 0) && ((local_38 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
    FUN_1456cec3c();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e90104 FUN_140e90104 body=255 status=ok
// SIG undefined FUN_140e90104(void)

void FUN_140e90104(longlong param_1,int param_2)

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



// FUNCTION 140e90204 FUN_140e90204 body=293 status=ok
// SIG undefined FUN_140e90204(void)

undefined8 * FUN_140e90204(undefined8 *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (1 < (int)param_2) {
    lVar2 = -4;
    lVar4 = 0;
    do {
      if (*(short *)(param_3 + 2 + lVar4 * 2) == 0x5b) {
        FUN_14006620a(&local_38,param_3 - lVar2,(param_2 - (int)lVar4) + -3);
        pwVar3 = local_38;
        if (local_30 == 0) {
          pwVar3 = L"";
        }
        param_2 = (int)lVar4 + 1;
        iVar1 = _wtoi(pwVar3);
        *(int *)(param_1 + 1) = iVar1;
        if (local_38 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar2 = lVar2 + -2;
      lVar4 = lVar4 + 1;
    } while ((ulonglong)param_2 - 1 != lVar4);
  }
  FUN_14006620a(&local_38,param_3,param_2);
  pwVar3 = local_38;
  if (local_30 == 0) {
    pwVar3 = L"";
  }
  FUN_1446f470e(&local_40,pwVar3,0);
  *param_1 = local_40;
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e9032a FUN_140e9032a body=996 status=ok
// SIG undefined FUN_140e9032a(void)

undefined8 FUN_140e9032a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  char local_b1;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14caf84d0 == 0) {
    local_d0 = &local_88;
    local_88 = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_145a62952;
    local_d8 = &LAB_147c8cd45;
    local_e0 = &LAB_1461468ae;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000006;
    local_100 = 8;
    local_108 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  lVar17 = DAT_14caf84d0;
  lVar16 = *(longlong *)(DAT_14caf84d0 + 0x110);
  if (lVar16 == 0) {
    FUN_140aa6c08(DAT_14caf84d0);
    lVar16 = *(longlong *)(lVar17 + 0x110);
  }
  local_b1 = *(char *)(lVar16 + 0x14f);
  if (local_b1 == '\x01') {
    iVar20 = (int)param_2[7];
    *(int *)(param_2 + 7) = iVar20 + 1;
    if (*(int *)((longlong)param_2 + 0x3c) == iVar20) {
      FUN_141724806(param_2 + 6);
    }
    puVar2 = (undefined8 *)(param_2[6] + (longlong)iVar20 * 0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  uVar14 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar16 = 0;
    local_90 = param_2 + 2;
    plVar15 = param_2 + 4;
    iVar20 = 0;
    local_b0 = plVar15;
    local_98 = param_1;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x58 + lVar16 * 0x60) == '\x01') {
        plVar19 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 0x60);
        local_a8 = lVar16;
        if (0 < (int)plVar19[1]) {
          lVar17 = 0;
          lVar18 = 0;
          cVar21 = local_b1;
          do {
            lVar22 = *plVar19;
            dVar3 = *(double *)(lVar22 + 0x10 + lVar17);
            dVar4 = *(double *)(lVar22 + 8 + lVar17);
            dVar5 = *(double *)(lVar22 + lVar17);
            iVar6 = (int)param_2[1];
            lVar22 = (longlong)iVar6;
            *(uint *)(param_2 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
              FUN_140c0b6f2(param_2,iVar6);
              plVar15 = local_b0;
              lVar16 = local_a8;
            }
            lVar10 = *param_2;
            *(float *)(lVar10 + lVar22 * 0xc) = (float)dVar5;
            *(float *)(lVar10 + 4 + lVar22 * 0xc) = (float)dVar4;
            *(float *)(lVar10 + 8 + lVar22 * 0xc) = (float)dVar3;
            if (cVar21 != '\0') {
              plVar15 = (longlong *)param_2[6];
              lVar16 = *plVar19;
              iVar6 = (int)plVar15[1];
              *(uint *)(plVar15 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)plVar15 + 0xc) < iVar6 + 1U) {
                FUN_14489624a(plVar15,iVar6);
              }
              lVar16 = lVar16 + lVar17;
              uVar11 = *(undefined4 *)(lVar16 + 0x5c);
              uVar12 = *(undefined4 *)(lVar16 + 0x60);
              uVar13 = *(undefined4 *)(lVar16 + 100);
              puVar1 = (undefined4 *)(*plVar15 + (longlong)iVar6 * 0x10);
              *puVar1 = *(undefined4 *)(lVar16 + 0x58);
              puVar1[1] = uVar11;
              puVar1[2] = uVar12;
              puVar1[3] = uVar13;
              plVar15 = local_b0;
              lVar16 = local_a8;
              cVar21 = local_b1;
            }
            lVar18 = lVar18 + 1;
            lVar17 = lVar17 + 0x98;
          } while (lVar18 < (int)plVar19[1]);
        }
        if (2 < (int)*(uint *)(plVar19 + 3)) {
          lVar17 = ((ulonglong)*(uint *)(plVar19 + 3) * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3
          ;
          lVar18 = 0;
          local_a0 = lVar17;
          do {
            lVar22 = plVar19[2];
            iVar6 = *(int *)(lVar22 + lVar18);
            iVar7 = *(int *)(lVar22 + 4 + lVar18);
            iVar8 = *(int *)(lVar22 + 8 + lVar18);
            iVar9 = (int)param_2[3];
            lVar22 = (longlong)iVar9;
            *(uint *)(param_2 + 3) = iVar9 + 1U;
            if (*(uint *)((longlong)param_2 + 0x1c) < iVar9 + 1U) {
              FUN_140e90710(local_90,iVar9);
              plVar15 = local_b0;
              lVar16 = local_a8;
              lVar17 = local_a0;
            }
            lVar10 = param_2[2];
            *(int *)(lVar10 + lVar22 * 0xc) = iVar6 + iVar20;
            *(int *)(lVar10 + 4 + lVar22 * 0xc) = iVar7 + iVar20;
            *(int *)(lVar10 + 8 + lVar22 * 0xc) = iVar8 + iVar20;
            iVar6 = (int)param_2[5];
            *(uint *)(param_2 + 5) = iVar6 + 1U;
            if (*(uint *)((longlong)param_2 + 0x2c) < iVar6 + 1U) {
              FUN_14488eebe(plVar15,iVar6);
              plVar15 = local_b0;
              lVar16 = local_a8;
              lVar17 = local_a0;
            }
            *(short *)(*plVar15 + (longlong)iVar6 * 2) = (short)lVar16;
            lVar18 = lVar18 + 0xc;
          } while (lVar17 != lVar18);
        }
        iVar20 = (int)param_2[1];
        uVar14 = (ulonglong)*(uint *)(local_98 + 0x20);
        param_1 = local_98;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar14);
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 7;
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar14 >> 8),1);
}



// FUNCTION 140e90710 FUN_140e90710 body=373 status=ok
// SIG undefined FUN_140e90710(void)

void FUN_140e90710(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e9079b;
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
LAB_140e9079b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140e90886 FUN_140e90886 body=90 status=ok
// SIG undefined FUN_140e90886(void)

void FUN_140e90886(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x628) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(400,0x10);
    FUN_14126fe3c(puVar1,param_1 + -0x1e8);
    *puVar1 = &PTR_FUN_14b964100;
    *(undefined8 **)(param_1 + 0x628) = puVar1;
  }
  FUN_140e908e0(param_1);
  return;
}



// FUNCTION 140e908e0 FUN_140e908e0 body=88 status=ok
// SIG undefined FUN_140e908e0(void)

undefined8 * FUN_140e908e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x628);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(400,0x10);
    FUN_14126fe3c(puVar1,param_1 + -0x1e8);
    *puVar1 = &PTR_FUN_14b3f3cc0;
    *(undefined8 **)(param_1 + 0x628) = puVar1;
  }
  return puVar1;
}



// FUNCTION 140e90938 FUN_140e90938 body=58 status=ok
// SIG undefined FUN_140e90938(void)

void FUN_140e90938(longlong param_1,longlong *param_2)

{
  FUN_140b972e4(param_1,*(undefined8 *)(*(longlong *)(*param_2 + 0x58) + 0x10),
                *(undefined8 *)(*param_2 + 0x38));
  FUN_140b9733e(param_1);
  FUN_140e90972(*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 140e90972 FUN_140e90972 body=499 status=ok
// SIG undefined FUN_140e90972(void)

byte FUN_140e90972(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  lVar4 = param_2[1];
  uVar5 = *(undefined8 *)(*param_2 + 0x78);
  iVar2 = *(int *)(lVar4 + 0xd0);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar18 = 0;
    iVar8 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar4 + 200);
    if (*(uint **)(lVar4 + 200) == (uint *)0x0) {
      puVar7 = (uint *)(lVar4 + 0xb8);
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar11 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_140e90b2c;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar18 = 0;
      iVar11 = 0;
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 == iVar2) {
LAB_140e90b2c:
    bVar10 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    bVar10 = 0;
    do {
      bVar6 = FUN_140af2104((longlong)iVar8 * 0x60 + *(longlong *)(lVar4 + 0xa8) + 8,uVar5,
                            *(undefined8 *)(*param_2 + 0x58));
      uVar9 = ~(uint)uVar12 & uVar9;
      puVar7 = *(uint **)(lVar4 + 200);
      if (*(uint **)(lVar4 + 200) == (uint *)0x0) {
        puVar7 = (uint *)(lVar4 + 0xb8);
      }
      iVar3 = *(int *)(lVar4 + 0xd0);
      iVar8 = (int)uVar18;
      lVar16 = (longlong)iVar8;
      uVar15 = puVar7[lVar16] & uVar9;
      if (uVar15 == 0) {
        iVar13 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar13 = iVar3 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar8) {
          iVar14 = iVar8;
        }
        if (iVar8 < iVar13) {
          lVar17 = 0;
          do {
            uVar15 = puVar7[lVar16 + lVar17 + 1];
            if (uVar15 != 0) {
              uVar18 = (ulonglong)(iVar8 + (int)lVar17 + 1);
              uVar9 = 0xffffffff;
              goto LAB_140e90ad2;
            }
            iVar11 = iVar11 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar14 - lVar16 != lVar17);
          uVar9 = 0xffffffff;
          iVar8 = iVar14;
        }
        uVar18 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar3;
      }
      else {
LAB_140e90ad2:
        uVar12 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar12 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
      bVar10 = bVar10 | bVar6;
    } while (iVar8 != iVar2);
  }
  return bVar10 & 1;
}



// FUNCTION 140e90b74 FUN_140e90b74 body=59 status=ok
// SIG undefined FUN_140e90b74(void)

undefined8 * FUN_140e90b74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6a7800;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e90bb0 FUN_140e90bb0 body=86 status=ok
// SIG undefined FUN_140e90bb0(void)

void FUN_140e90bb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140659abc(param_1 + 8,lVar2,uVar1);
    FUN_140e90c06(param_1 + 0x20,lVar2,uVar1);
    FUN_140b5f6dc(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 140e90c06 FUN_140e90c06 body=195 status=ok
// SIG undefined FUN_140e90c06(void)

void FUN_140e90c06(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_140e90c3b;
      plVar5 = plVar5 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_140e90c3b:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar2 = *plVar5;
  lVar4 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar5 + 0x1c);
  lVar3 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar2 + lVar4) = lVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = *(undefined8 *)(param_1 + 8);
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140e90ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140e90cca FUN_140e90cca body=111 status=ok
// SIG undefined FUN_140e90cca(void)

void FUN_140e90cca(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408a74b4();
  FUN_1446e0cf4(param_1);
  local_18 = &local_28;
  local_20 = FUN_1433d1d5e;
  local_28 = param_1;
  (**(code **)(*(longlong *)(param_1 + 0x3b0) + 0xb8))(param_1 + 0x3b0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e90d3a FUN_140e90d3a body=60 status=ok
// SIG undefined FUN_140e90d3a(void)

void FUN_140e90d3a(longlong param_1)

{
  FUN_140e90d76();
  if ((*(longlong *)(param_1 + 0x460) != 0) && (*(int *)(param_1 + 0x468) - 1U < 0xfffffffe)) {
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
  }
  return;
}



// FUNCTION 140e90d76 FUN_140e90d76 body=95 status=ok
// SIG undefined FUN_140e90d76(void)

void FUN_140e90d76(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1401b2056();
  if ((*(byte *)(param_1 + 0x3f8) & 1) != 0) {
    *(byte *)(param_1 + 0x3a8) = *(byte *)(param_1 + 0x3a8) | 1;
    *(byte *)(param_1 + 0x3f8) = *(byte *)(param_1 + 0x3f8) & 0xfe;
  }
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x2d4) = *(undefined8 *)(param_1 + 0x3c8);
  uVar2 = *(undefined8 *)(param_1 + 0x3a8);
  uVar3 = *(undefined8 *)(param_1 + 0x3b0);
  uVar4 = *(undefined8 *)(param_1 + 0x3c0);
  *(undefined8 *)(lVar1 + 0x2c4) = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(lVar1 + 0x2cc) = uVar4;
  *(undefined8 *)(lVar1 + 0x2b4) = uVar2;
  *(undefined8 *)(lVar1 + 700) = uVar3;
  return;
}



// FUNCTION 140e90dd6 FUN_140e90dd6 body=233 status=ok
// SIG undefined FUN_140e90dd6(void)

undefined8 * FUN_140e90dd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a8b60;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ef8(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x1a);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e90ec0 FUN_140e90ec0 body=55 status=ok
// SIG undefined FUN_140e90ec0(void)

void FUN_140e90ec0(longlong *param_1)

{
  FUN_140e90f30(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e90ef8 FUN_140e90ef8 body=55 status=ok
// SIG undefined FUN_140e90ef8(void)

void FUN_140e90ef8(longlong *param_1)

{
  FUN_140e90fac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e90f30 FUN_140e90f30 body=123 status=ok
// SIG undefined FUN_140e90f30(void)

void FUN_140e90f30(longlong param_1,int param_2)

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



// FUNCTION 140e90fac FUN_140e90fac body=123 status=ok
// SIG undefined FUN_140e90fac(void)

void FUN_140e90fac(longlong param_1,int param_2)

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



// FUNCTION 140e91028 FUN_140e91028 body=208 status=ok
// SIG undefined FUN_140e91028(void)

void FUN_140e91028(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x110;
        lVar1 = lVar2 + lVar7;
        if (*(int *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x104) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x104) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x110 + lVar2 + 0x100);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x100);
          lVar2 = *param_1;
          if (*(longlong *)(lVar2 + 0x20 + lVar7) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar2 + lVar7 + 0x10) != 0) {
            FUN_1400020a8();
          }
          FUN_140e910f8(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x100);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140e910f8 FUN_140e910f8 body=124 status=ok
// SIG undefined FUN_140e910f8(void)

void FUN_140e910f8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140e91174 FUN_140e91174 body=38 status=ok
// SIG undefined FUN_140e91174(void)

undefined8 FUN_140e91174(undefined8 param_1,int param_2)

{
  FUN_140e9119a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9119a FUN_140e9119a body=252 status=ok
// SIG undefined FUN_140e9119a(void)

void FUN_140e9119a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a7070;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140e912ce(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140e912ce(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91296(param_1 + 0x17);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b9a70e8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d40(param_1 + 1);
  return;
}



// FUNCTION 140e91296 FUN_140e91296 body=55 status=ok
// SIG undefined FUN_140e91296(void)

void FUN_140e91296(longlong *param_1)

{
  FUN_140e91306(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e912ce FUN_140e912ce body=55 status=ok
// SIG undefined FUN_140e912ce(void)

void FUN_140e912ce(longlong *param_1)

{
  FUN_140e91520(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e91306 FUN_140e91306 body=538 status=ok
// SIG undefined FUN_140e91306(void)

void FUN_140e91306(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140e91407;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
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
          if (iVar8 - lVar14 == lVar12) goto LAB_140e91407;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140e91407:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140e91520 FUN_140e91520 body=415 status=ok
// SIG undefined FUN_140e91520(void)

void FUN_140e91520(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1457bbb8e(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
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
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e916c2 FUN_140e916c2 body=55 status=ok
// SIG undefined FUN_140e916c2(void)

void FUN_140e916c2(longlong *param_1)

{
  FUN_140e916fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e916fa FUN_140e916fa body=588 status=ok
// SIG undefined FUN_140e916fa(void)

void FUN_140e916fa(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140e918c1;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x58;
      FUN_1403e75f6(*(undefined8 *)(lVar11 + 0x30 + lVar10),*(undefined4 *)(lVar11 + 0x38 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x30 + lVar10) != 0) {
        FUN_1400020a8();
      }
      plVar13 = (longlong *)(lVar11 + lVar10);
      FUN_1403e75f6(plVar13[4],(int)plVar13[5]);
      if (plVar13[4] != 0) {
        FUN_1400020a8();
      }
      if (plVar13[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar13 != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar15;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_140e918c1;
        }
        uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar15 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140e918c1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e91948(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140e91948 FUN_140e91948 body=324 status=ok
// SIG undefined FUN_140e91948(void)

void FUN_140e91948(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140e919dc;
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
LAB_140e919dc:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 140e91a8c FUN_140e91a8c body=72 status=ok
// SIG undefined FUN_140e91a8c(void)

void FUN_140e91a8c(longlong param_1)

{
  FUN_1418b762f(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_143eaed10(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e91ad4 FUN_140e91ad4 body=65 status=ok
// SIG undefined FUN_140e91ad4(void)

void FUN_140e91ad4(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(puVar1 + -0x12);
      puVar1 = puVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e91b24 FUN_140e91b24 body=36 status=ok
// SIG undefined FUN_140e91b24(void)

undefined8 FUN_140e91b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140e91b56 FUN_140e91b56 body=36 status=ok
// SIG undefined FUN_140e91b56(void)

undefined8 FUN_140e91b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 140e91b88 FUN_140e91b88 body=148 status=ok
// SIG undefined FUN_140e91b88(void)

undefined8 * FUN_140e91b88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9575a0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91c1c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e91c1c FUN_140e91c1c body=178 status=ok
// SIG undefined FUN_140e91c1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e91c1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2d60b0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140e91caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e91cce FUN_140e91cce body=312 status=ok
// SIG undefined FUN_140e91cce(void)

void FUN_140e91cce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46cec0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_14472eb64(param_1 + 0x1c,0);
  }
  param_1[0x22] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x10c)) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
    FUN_1446efbd8(param_1 + 0x1e,0);
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x15);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91e06(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 140e91e06 FUN_140e91e06 body=49 status=ok
// SIG undefined FUN_140e91e06(void)

void FUN_140e91e06(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 140e91e37 FUN_140e91e37 body=176 status=ok
// SIG undefined FUN_140e91e37(void)

void FUN_140e91e37(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar2 = (undefined8 *)*param_1;
  uVar3 = FUN_14007ca06();
  FUN_140e91ee8(puVar2,uVar3);
  *puVar2 = &PTR_FUN_14b4578c0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x84) = 1;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  if ((*(uint *)(puVar2 + 1) & 0x30) == 0) {
    plVar1 = puVar2 + 0x11;
    puVar2[0x14] = &DAT_14cb91658;
    puVar2[0x13] = puVar2;
    lVar4 = DAT_14cb91658;
    while( true ) {
      puVar2[0x11] = lVar4;
      LOCK();
      lVar5 = *(longlong *)puVar2[0x14];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)puVar2[0x14] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      puVar2[0x11] = lVar5;
      lVar4 = *(longlong *)puVar2[0x14];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140e91ee8 FUN_140e91ee8 body=254 status=ok
// SIG undefined FUN_140e91ee8(void)

undefined8 * FUN_140e91ee8(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_14077009c();
  *param_1 = &PTR_FUN_14acd2330;
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
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = DAT_14c844848;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 140e91fe6 FUN_140e91fe6 body=84 status=ok
// SIG undefined FUN_140e91fe6(void)

void FUN_140e91fe6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_1409dfab8();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_1409dff21(param_1 + 0xb,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140e9202e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140e9203a FUN_140e9203a body=78 status=ok
// SIG undefined FUN_140e9203a(void)

void FUN_140e9203a(longlong param_1,uint param_2)

{
  FUN_1409df9ef(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,*(undefined4 *)(param_1 + 0x18),
                param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}


