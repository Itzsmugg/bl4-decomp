// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ac3266 FUN_143ac3266 body=69 status=ok
// SIG undefined FUN_143ac3266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac3266(void)

{
  _DAT_14cb43760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac32a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43768,1);
  return;
}



// FUNCTION 143ac32ab FUN_143ac32ab body=69 status=ok
// SIG undefined FUN_143ac32ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac32ab(void)

{
  _DAT_14cb43770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac32ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43778,1);
  return;
}



// FUNCTION 143ac32f0 FUN_143ac32f0 body=3 status=ok
// SIG undefined FUN_143ac32f0(void)

undefined8 FUN_143ac32f0(void)

{
  return 0;
}



// FUNCTION 143ac332e FUN_143ac332e body=1509 status=ok
// SIG undefined FUN_143ac332e(void)

void FUN_143ac332e(longlong param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) goto LAB_143ac36df;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400337aa();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400337aa();
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FUN_1446f470e(&local_40,L"SystemSpawnScript",1);
    local_50 = 0;
    local_58 = 0;
    lVar4 = FUN_14283d079(0,param_1,local_40,1);
    if (lVar4 != 0) {
      lVar7 = FUN_14585dcc6();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(param_1 + 0xd8) = lVar4;
        FUN_1400337aa(lVar4);
        goto LAB_143ac33d0;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
LAB_143ac33d0:
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_1446f470e(&local_48,L"SystemUpdateScript",1);
    local_50 = 0;
    local_58 = 0;
    lVar4 = FUN_14283d079(0,param_1,local_48,1);
    if (lVar4 != 0) {
      lVar7 = FUN_14585dcc6();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(param_1 + 0xe0) = lVar4;
        FUN_1400337aa(lVar4);
        goto LAB_143ac3422;
      }
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
LAB_143ac3422:
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb8);
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar4 + 0x28 + lVar7) != 0) {
        FUN_143a7c12a();
      }
      lVar7 = lVar7 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar7);
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  uVar6 = 0;
  if ((lVar4 != 0) && (lVar7 = *(longlong *)(param_1 + 0xe0), lVar7 != 0)) {
    if (*(char *)(lVar4 + 0x348) == '\0') {
      uVar6 = 0;
    }
    else {
      if (*(char *)(lVar4 + 0x348) == '\x04') {
        if (((*(int *)(lVar4 + 0x1e0) < 1) && (*(int *)(lVar4 + 0x1f8) < 1)) &&
           (*(int *)(lVar4 + 0x368) != 0)) goto LAB_143ac383e;
      }
      else if ((*(int *)(lVar4 + 0x1e0) < 1) && (*(int *)(lVar4 + 0x1f8) < 1)) {
LAB_143ac383e:
        if (*(int *)(lVar4 + 0x368) == 0) goto LAB_143ac353f;
      }
      if (*(char *)(lVar7 + 0x348) == '\0') {
        uVar6 = 0;
      }
      else {
        if (*(char *)(lVar7 + 0x348) == '\x04') {
          if (((*(int *)(lVar7 + 0x1e0) < 1) && (*(int *)(lVar7 + 0x1f8) < 1)) &&
             (*(int *)(lVar7 + 0x368) != 0)) goto LAB_143ac388d;
        }
        else if ((*(int *)(lVar7 + 0x1e0) < 1) && (*(int *)(lVar7 + 0x1f8) < 1)) {
LAB_143ac388d:
          if (*(int *)(lVar7 + 0x368) == 0) goto LAB_143ac353f;
        }
        if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
          lVar4 = *(longlong *)(param_1 + 0xb8);
          lVar7 = (longlong)*(int *)(param_1 + 0xc0) * 0x48;
          do {
            if ((*(char *)(lVar4 + 0x20) == '\x01') && (lVar5 = FUN_14040f60c(lVar4), lVar5 != 0)) {
              if (*(char *)(lVar5 + 0x365) == '\x01') {
                bVar2 = *(byte *)(lVar5 + 0x364) & 1;
              }
              else {
                bVar2 = FUN_1405c05c4(lVar5);
                *(byte *)(lVar5 + 0x364) = bVar2;
                *(undefined1 *)(lVar5 + 0x365) = 1;
              }
              if ((bVar2 == 0) && (cVar3 = FUN_1481bc170(lVar5), cVar3 != '\0')) goto LAB_143ac353f;
            }
            lVar4 = lVar4 + 0x48;
            lVar7 = lVar7 + -0x48;
          } while (lVar7 != 0);
          uVar6 = 1;
        }
      }
    }
  }
LAB_143ac353f:
  *(uint *)(param_1 + 0x4a0) = *(uint *)(param_1 + 0x4a0) & 0xfffffffe | uVar6;
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
    uVar6 = 0;
    if ((DAT_14c872bf1 == '\x01') && (uVar6 = 0, (DAT_14c8442b8 & 1) == 0)) {
LAB_143ac35ab:
      FUN_143ac332e(param_1);
      lVar4 = *(longlong *)(param_1 + 0xd8);
      uVar6 = 0;
      if ((((lVar4 != 0) && (lVar7 = *(longlong *)(param_1 + 0xe0), lVar7 != 0)) &&
          ((((*(char *)(lVar4 + 0x348) != '\x04' || (0 < *(int *)(lVar4 + 0x1e0))) ||
            (0 < *(int *)(lVar4 + 0x1f8))) || (*(int *)(lVar4 + 0x368) != 0)))) &&
         ((((*(char *)(lVar7 + 0x348) != '\x04' || (0 < *(int *)(lVar7 + 0x1e0))) ||
           (0 < *(int *)(lVar7 + 0x1f8))) || (*(int *)(lVar7 + 0x368) != 0)))) {
        iVar1 = *(int *)(param_1 + 0xc0);
        if (0 < (longlong)iVar1) {
          lVar4 = 0;
          do {
            lVar7 = FUN_14040f60c(*(longlong *)(param_1 + 0xb8) + lVar4);
            if (lVar7 != 0) {
              if (*(char *)(lVar7 + 0x367) == '\x01') {
                bVar2 = *(byte *)(lVar7 + 0x366) & 1;
              }
              else {
                bVar2 = FUN_1404d270c(lVar7);
                *(byte *)(lVar7 + 0x366) = bVar2;
                *(undefined1 *)(lVar7 + 0x367) = 1;
              }
              if (bVar2 == 0) goto LAB_143ac35a4;
            }
            lVar4 = lVar4 + 0x48;
          } while ((longlong)iVar1 * 0x48 != lVar4);
          lVar4 = *(longlong *)(param_1 + 0xd8);
          lVar7 = *(longlong *)(param_1 + 0xe0);
        }
        if (*(int *)(lVar4 + 0x270) == *(int *)(lVar7 + 0x270)) {
          bVar2 = FUN_143909b4c(*(undefined8 *)(lVar4 + 0x268),*(undefined8 *)(lVar7 + 0x268));
          uVar6 = (uint)bVar2 * 2;
        }
      }
    }
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_143ac35ab;
LAB_143ac35a4:
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x4a0) = *(uint *)(param_1 + 0x4a0) & 0xfffffffd | uVar6;
  FUN_1402d68f0(param_1);
  FUN_14080d0b8(param_1);
  FUN_14080c8ea(param_1);
  FUN_14080afdc(param_1);
  FUN_1402d64a0(param_1);
  FUN_1402d6426(param_1);
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_1481fbdfc(param_1);
  }
LAB_143ac36df:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ac3914 FUN_143ac3914 body=2919 status=ok
// SIG undefined FUN_143ac3914(void)

void FUN_143ac3914(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code **ppcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined8 uStack_190;
  longlong *local_180;
  code *local_178;
  longlong **local_170;
  code **local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_208 = 0;
    uStack_200 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (DAT_14cb43780 == '\0') {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_143ac43aa;
      }
    }
    else {
LAB_143ac43aa:
      DAT_14cb43780 = '\x01';
      local_178 = (code *)0x14aa85e27;
      local_170 = (longlong **)CONCAT35(local_170._5_3_,7);
      uVar6 = FUN_14001a6c0(&local_178,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      FUN_1402c9134(&DAT_14c874628,uVar6,&local_178,1);
    }
  }
  FUN_1400563e2(param_1 + 0x67,param_1);
  FUN_140056480(param_1 + 0x67,1);
  FUN_1400563e2(param_1 + 0x1f,param_1);
  lVar12 = param_1[4];
  if (lVar12 != 0) {
    if (DAT_14c951858 == 0) {
      local_178 = FUN_1449e2820;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = FUN_14081d0ea;
      local_1d0 = &local_178;
      local_1d8 = &LAB_1468c5283;
      local_1e0 = FUN_142809da0;
      local_1e8 = L"Engine";
      local_1f0 = 0x400000000;
      local_1f8 = 0x10000000;
      uStack_200 = CONCAT44(uStack_200._4_4_,8);
      local_208 = CONCAT44(local_208._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    if (((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) &&
       ((*(uint *)(param_1 + 1) & 3) != 0)) {
      local_180 = &local_198;
      local_198 = 0;
      uStack_190 = 0;
      local_170 = &local_180;
      local_178 = FUN_14284083c;
      local_208 = local_208 & 0xffffffff00000000;
      FUN_144a56f9f(lVar12,&local_178,1,0);
      lVar12 = local_198;
      lVar13 = (longlong)(int)uStack_190;
      if (lVar13 != 0) {
        lVar15 = 0;
        do {
          lVar8 = *(longlong *)(lVar12 + lVar15);
          if (lVar8 != 0) {
            if (DAT_14cb3e268 == 0) {
              local_178 = FUN_1449e2820;
              local_1c0 = FUN_14081d0ea;
              local_1c8 = FUN_14081d0ea;
              local_1d8 = &LAB_1481bbd47;
              local_1e0 = FUN_143a7bac5;
              local_1e8 = L"Engine";
              local_1f0 = 0;
              local_1f8 = 0x10000000;
              uStack_200 = CONCAT44(uStack_200._4_4_,8);
              local_208 = CONCAT44(local_208._4_4_,0x70);
              local_1d0 = &local_178;
              FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter",&DAT_14cb3e268,&DAT_1481bbd46);
            }
            if ((*(int *)(DAT_14cb3e268 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb3e268 + 0x38) * 8) == DAT_14cb3e268 + 0x30)) {
              FUN_1400337aa(lVar8);
              FUN_14472eae2(lVar8,3);
            }
          }
          lVar15 = lVar15 + 8;
        } while (lVar13 * 8 != lVar15);
      }
      if (local_198 != 0) {
        FUN_1400020a8(local_198);
      }
    }
  }
  local_1a8 = 0xfcf57afa;
  uStack_1a4 = 0x50764283;
  uStack_1a0 = 0xb9a9e658;
  uStack_19c = 0xffa02d32;
  iVar3 = FUN_1448a256a(param_1);
  if (iVar3 < 0x52) {
    *(byte *)((longlong)param_1 + 0x51) = *(byte *)((longlong)param_1 + 0x51) & 0xef;
  }
  lVar12 = param_1[0x10];
  if ((longlong)(int)lVar12 != 0) {
    lVar13 = param_1[0xf];
    lVar15 = 0;
    do {
      if (iVar3 < 0x47) {
        *(uint *)(lVar13 + 0x50 + lVar15) =
             *(uint *)(lVar13 + 0x50 + lVar15) & 0xfffffffe | *(uint *)(lVar13 + 0x38 + lVar15) & 1;
        *(undefined4 *)(lVar13 + 0x58 + lVar15) = *(undefined4 *)(lVar13 + 0x44 + lVar15);
      }
      lVar15 = lVar15 + 0xa0;
    } while ((longlong)(int)lVar12 * 0xa0 != lVar15);
  }
  lVar12 = param_1[0x18];
  if ((longlong)(int)lVar12 != 0) {
    lVar13 = param_1[0x17];
    lVar15 = 0;
    do {
      if (*(longlong *)(lVar13 + 0x28 + lVar15) != 0) {
        FUN_1400337aa();
      }
      lVar15 = lVar15 + 0x48;
    } while ((longlong)(int)lVar12 * 0x48 != lVar15);
  }
  if ((longlong)(int)param_1[0x10] != 0) {
    lVar12 = param_1[0xf];
    lVar13 = (longlong)(int)param_1[0x10] * 0xa0;
    do {
      FUN_1411717d4(lVar12);
      lVar12 = lVar12 + 0xa0;
      lVar13 = lVar13 + -0xa0;
    } while (lVar13 != 0);
  }
  lVar12 = param_1[0x6e];
  if ((longlong)(int)lVar12 != 0) {
    lVar13 = param_1[0x6d];
    lVar15 = 0;
    do {
      lVar8 = *(longlong *)(lVar13 + lVar15);
      if (lVar8 != 0) {
        lVar7 = FUN_140d29022();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          FUN_1411717d4(lVar8 + 0x38);
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar12 * 8 != lVar15);
  }
  lVar12 = param_1[0x1b];
  if ((lVar12 != 0) && (iVar3 = *(int *)(lVar12 + 0x390), (longlong)iVar3 != 0)) {
    lVar12 = *(longlong *)(lVar12 + 0x388);
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar12 + 0x40 + lVar13) != 0) {
        lVar8 = FUN_140d29022();
        lVar15 = *(longlong *)(lVar12 + 0x40 + lVar13);
        if ((((lVar15 != 0) && (lVar8 != 0)) && (lVar7 = *(longlong *)(lVar15 + 0x10), lVar7 != 0))
           && ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)))) {
          FUN_1411717d4(lVar15 + 0x38);
        }
      }
      lVar13 = lVar13 + 0x50;
    } while ((longlong)iVar3 * 0x50 != lVar13);
  }
  lVar12 = param_1[0x1c];
  if ((lVar12 != 0) && (iVar3 = *(int *)(lVar12 + 0x390), (longlong)iVar3 != 0)) {
    lVar12 = *(longlong *)(lVar12 + 0x388);
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar12 + 0x40 + lVar13) != 0) {
        lVar8 = FUN_140d29022();
        lVar15 = *(longlong *)(lVar12 + 0x40 + lVar13);
        if ((((lVar15 != 0) && (lVar8 != 0)) && (lVar7 = *(longlong *)(lVar15 + 0x10), lVar7 != 0))
           && ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)))) {
          FUN_1411717d4(lVar15 + 0x38);
        }
      }
      lVar13 = lVar13 + 0x50;
    } while ((longlong)iVar3 * 0x50 != lVar13);
  }
  local_1b0 = param_1;
  if ((longlong)(int)param_1[0x18] != 0) {
    lVar13 = param_1[0x17];
    lVar12 = lVar13 + (longlong)(int)param_1[0x18] * 0x48;
    do {
      lVar15 = FUN_14040f60c(lVar13);
      if (lVar15 != 0) {
        FUN_1411717d4(lVar15 + 0x90);
        if ((longlong)*(int *)(lVar15 + 200) != 0) {
          lVar8 = *(longlong *)(lVar15 + 0xc0);
          lVar7 = (longlong)*(int *)(lVar15 + 200) << 6;
          do {
            FUN_1411717d4(lVar8);
            lVar8 = lVar8 + 0x40;
            lVar7 = lVar7 + -0x40;
          } while (lVar7 != 0);
        }
        iVar3 = *(int *)(lVar15 + 0x230);
        if ((longlong)iVar3 != 0) {
          lVar8 = *(longlong *)(lVar15 + 0x228);
          lVar7 = 0;
          do {
            lVar10 = *(longlong *)(lVar8 + lVar7);
            if (lVar10 != 0) {
              FUN_1411717d4(lVar10 + 0x28);
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar3 * 8 != lVar7);
        }
        lVar8 = *(longlong *)(lVar15 + 0x118);
        if ((lVar8 != 0) && (iVar3 = *(int *)(lVar8 + 0x390), (longlong)iVar3 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x388);
          lVar7 = 0;
          do {
            if (*(longlong *)(lVar8 + 0x40 + lVar7) != 0) {
              lVar9 = FUN_140d29022();
              lVar10 = *(longlong *)(lVar8 + 0x40 + lVar7);
              if ((((lVar10 != 0) && (lVar9 != 0)) &&
                  (lVar1 = *(longlong *)(lVar10 + 0x10), lVar1 != 0)) &&
                 ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                   == lVar9 + 0x30)))) {
                FUN_1411717d4(lVar10 + 0x38);
              }
            }
            lVar7 = lVar7 + 0x50;
          } while ((longlong)iVar3 * 0x50 != lVar7);
        }
        lVar8 = *(longlong *)(lVar15 + 0xf0);
        if ((lVar8 != 0) && (iVar3 = *(int *)(lVar8 + 0x390), (longlong)iVar3 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x388);
          lVar7 = 0;
          do {
            if (*(longlong *)(lVar8 + 0x40 + lVar7) != 0) {
              lVar9 = FUN_140d29022();
              lVar10 = *(longlong *)(lVar8 + 0x40 + lVar7);
              if ((((lVar10 != 0) && (lVar9 != 0)) &&
                  (lVar1 = *(longlong *)(lVar10 + 0x10), lVar1 != 0)) &&
                 ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                   == lVar9 + 0x30)))) {
                FUN_1411717d4(lVar10 + 0x38);
              }
            }
            lVar7 = lVar7 + 0x50;
          } while ((longlong)iVar3 * 0x50 != lVar7);
        }
        lVar8 = *(longlong *)(lVar15 + 0x268);
        if ((lVar8 != 0) && (iVar3 = *(int *)(lVar8 + 0x390), (longlong)iVar3 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x388);
          lVar7 = 0;
          do {
            if (*(longlong *)(lVar8 + 0x40 + lVar7) != 0) {
              lVar9 = FUN_140d29022();
              lVar10 = *(longlong *)(lVar8 + 0x40 + lVar7);
              if ((((lVar10 != 0) && (lVar9 != 0)) &&
                  (lVar1 = *(longlong *)(lVar10 + 0x10), lVar1 != 0)) &&
                 ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                   == lVar9 + 0x30)))) {
                FUN_1411717d4(lVar10 + 0x38);
              }
            }
            lVar7 = lVar7 + 0x50;
          } while ((longlong)iVar3 * 0x50 != lVar7);
        }
        if ((longlong)*(int *)(lVar15 + 0x88) != 0) {
          plVar14 = *(longlong **)(lVar15 + 0x80);
          plVar16 = plVar14 + (longlong)*(int *)(lVar15 + 0x88) * 0xb;
          do {
            lVar15 = *plVar14;
            if ((lVar15 != 0) && (iVar3 = *(int *)(lVar15 + 0x390), (longlong)iVar3 != 0)) {
              lVar15 = *(longlong *)(lVar15 + 0x388);
              lVar8 = 0;
              do {
                if (*(longlong *)(lVar15 + 0x40 + lVar8) != 0) {
                  lVar10 = FUN_140d29022();
                  lVar7 = *(longlong *)(lVar15 + 0x40 + lVar8);
                  if ((((lVar7 != 0) && (lVar10 != 0)) &&
                      (lVar9 = *(longlong *)(lVar7 + 0x10), lVar9 != 0)) &&
                     ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                       lVar10 + 0x30)))) {
                    FUN_1411717d4(lVar7 + 0x38);
                  }
                }
                lVar8 = lVar8 + 0x50;
              } while ((longlong)iVar3 * 0x50 != lVar8);
            }
            plVar14 = plVar14 + 0xb;
          } while (plVar14 != plVar16);
        }
      }
      lVar13 = lVar13 + 0x48;
    } while (lVar13 != lVar12);
  }
  plVar14 = local_1b0;
  FUN_143ac332e(local_1b0);
  if ((DAT_14c7629e8 == 0) || ((char)plVar14[6] != '\0')) goto LAB_143ac4081;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
    plVar14 = local_1b0;
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 == '\x01') && ((DAT_14c8442b8 & 1) == 0)) goto LAB_143ac3f52;
LAB_143ac4383:
    cVar2 = FUN_140c62276();
    if (cVar2 == '\0') goto LAB_143ac4081;
  }
  else {
    if (DAT_14c8442b8 != 0) goto LAB_143ac4383;
LAB_143ac3f52:
    if ((((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) &&
        (cVar2 = FUN_1406917e6(), cVar2 == '\0')) || (DAT_14c76194c == 0)) goto LAB_143ac4383;
  }
  local_58 = (code **)0x0;
  local_50 = 0x400000000;
  if ((longlong)(int)plVar14[0x18] != 0) {
    lVar13 = local_1b0[0x17];
    lVar12 = lVar13 + (longlong)(int)plVar14[0x18] * 0x48;
    do {
      lVar15 = FUN_14040f60c(lVar13);
      if (((lVar15 != 0) && (*(char *)(lVar13 + 0x20) == '\x01')) &&
         (iVar3 = *(int *)(lVar15 + 0x230), (longlong)iVar3 != 0)) {
        lVar8 = *(longlong *)(lVar15 + 0x228);
        lVar7 = 0;
        do {
          plVar14 = *(longlong **)(lVar8 + lVar7);
          if ((plVar14 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*plVar14 + 0x308))(plVar14), cVar2 != '\0')) {
            cVar2 = (**(code **)(*plVar14 + 0x2d8))(plVar14,*(undefined1 *)(lVar15 + 0x3c));
            if (cVar2 != '\0') {
              FUN_1401acb72(plVar14,0,&local_178);
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar3 * 8 != lVar7);
      }
      lVar13 = lVar13 + 0x48;
    } while (lVar13 != lVar12);
  }
  FUN_1435bd87a(local_1b0,&local_178);
  ppcVar11 = local_58;
  if (local_58 == (code **)0x0) {
    ppcVar11 = &local_178;
  }
  FUN_144747713(ppcVar11,local_50 & 0xffffffff);
  if (local_58 != (code **)0x0) {
    FUN_1400020a8();
  }
LAB_143ac4081:
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ac447c FUN_143ac447c body=8 status=ok
// SIG undefined FUN_143ac447c(void)

longlong FUN_143ac447c(longlong param_1)

{
  return param_1 + 0xb8;
}



// FUNCTION 143ac4484 FUN_143ac4484 body=36 status=ok
// SIG undefined FUN_143ac4484(void)

undefined8 FUN_143ac4484(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0xa0) & 1) != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_1 + 0x4a0)) &
            0xffffffffffffff02;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143ac44a8 FUN_143ac44a8 body=145 status=ok
// SIG undefined FUN_143ac44a8(void)

void FUN_143ac44a8(longlong param_1,uint param_2)

{
  uint *_Dst;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar2 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  uVar2 = (int)uVar2 >> 5;
  iVar1 = param_2 + 0x3f;
  if (-1 < (int)(param_2 + 0x20)) {
    iVar1 = param_2 + 0x20;
  }
  uVar4 = -1 << ((byte)param_2 & 0x1f);
  uVar3 = 0xffffffff >> (~(byte)(param_2 & 0xffffff1f) & 0x1f);
  iVar1 = (iVar1 >> 5) - uVar2;
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar5 = param_1;
  }
  _Dst = (uint *)(lVar5 + (ulonglong)uVar2 * 4);
  if (iVar1 == 1) {
    uVar3 = uVar3 & uVar4;
  }
  else {
    *_Dst = *_Dst | uVar4;
    _Dst = _Dst + 1;
    if (iVar1 != 2) {
      memset(_Dst,CONCAT31((int3)((param_2 & 0xffffff1f) >> 8),0xff),(ulonglong)(iVar1 - 3) * 4 + 4)
      ;
      _Dst = (uint *)(lVar5 + ((ulonglong)uVar2 + (ulonglong)(iVar1 - 3)) * 4 + 8);
    }
  }
  *_Dst = *_Dst | uVar3;
  return;
}



// FUNCTION 143ac453a FUN_143ac453a body=2939 status=ok
// SIG undefined FUN_143ac453a(void)

void FUN_143ac453a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = *(uint *)(param_1 + 0x4a0);
  if ((uVar11 & 4) == 0) goto LAB_143ac4a24;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x4d8) + 0xa0) & 1) == 0) goto LAB_143ac4a24;
    uVar11 = *(uint *)(param_1 + 0x4a0);
  }
  if ((uVar11 & 2) == 0) goto LAB_143ac4a24;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_143abc096(*(longlong *)(param_1 + 0xd8),&local_a8,0);
    uVar14 = local_50;
    lVar17 = CONCAT71(uStack_a7,local_a8);
    if (lVar17 != 0) {
      lVar18 = (longlong)(int)local_50;
      uVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar11);
      if (local_50._4_4_ < uVar11) {
        FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
        lVar17 = CONCAT71(uStack_a7,local_a8);
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        *(longlong *)(puVar12 + lVar18 * 8) = lVar17;
        if (lVar17 == 0) goto LAB_143ac4654;
      }
      else {
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        *(longlong *)(puVar12 + lVar18 * 8) = lVar17;
      }
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
      puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
LAB_143ac4654:
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_143abc096(*(longlong *)(param_1 + 0xe0),&local_a8,0);
    uVar14 = local_50;
    lVar17 = CONCAT71(uStack_a7,local_a8);
    if (lVar17 != 0) {
      lVar18 = (longlong)(int)local_50;
      uVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar11);
      if (local_50._4_4_ < uVar11) {
        FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
        lVar17 = CONCAT71(uStack_a7,local_a8);
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        *(longlong *)(puVar12 + lVar18 * 8) = lVar17;
        if (lVar17 == 0) goto LAB_143ac46f3;
      }
      else {
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        *(longlong *)(puVar12 + lVar18 * 8) = lVar17;
      }
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
      puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
LAB_143ac46f3:
  local_b8 = param_1;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar18 = *(longlong *)(param_1 + 0xb8);
    lVar17 = lVar18 + (longlong)*(int *)(param_1 + 0xc0) * 0x48;
    do {
      if ((*(char *)(lVar18 + 0x20) == '\x01') && (lVar7 = FUN_14040f60c(lVar18), lVar7 != 0)) {
        if (*(longlong *)(lVar7 + 0x118) != 0) {
          FUN_143abc096(*(longlong *)(lVar7 + 0x118),&local_a8,0);
          uVar14 = local_50;
          lVar16 = CONCAT71(uStack_a7,local_a8);
          if (lVar16 != 0) {
            lVar19 = (longlong)(int)local_50;
            uVar11 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar11);
            if (local_50._4_4_ < uVar11) {
              FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
              lVar16 = CONCAT71(uStack_a7,local_a8);
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
              if (lVar16 == 0) goto LAB_143ac47e1;
            }
            else {
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
            }
            LOCK();
            *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
            UNLOCK();
            puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
            if (puVar2 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar2 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar2)(puVar2,1);
              }
            }
          }
        }
LAB_143ac47e1:
        if (*(longlong *)(lVar7 + 0xf0) != 0) {
          FUN_143abc096(*(longlong *)(lVar7 + 0xf0),&local_a8,0);
          uVar14 = local_50;
          lVar16 = CONCAT71(uStack_a7,local_a8);
          if (lVar16 != 0) {
            lVar19 = (longlong)(int)local_50;
            uVar11 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar11);
            if (local_50._4_4_ < uVar11) {
              FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
              lVar16 = CONCAT71(uStack_a7,local_a8);
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
              if (lVar16 == 0) goto LAB_143ac487e;
            }
            else {
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
            }
            LOCK();
            *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
            UNLOCK();
            puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
            if (puVar2 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar2 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar2)(puVar2,1);
              }
            }
          }
        }
LAB_143ac487e:
        if (*(longlong *)(lVar7 + 0x268) != 0) {
          FUN_143abc096(*(longlong *)(lVar7 + 0x268),&local_a8,0);
          uVar14 = local_50;
          lVar16 = CONCAT71(uStack_a7,local_a8);
          if (lVar16 != 0) {
            lVar19 = (longlong)(int)local_50;
            uVar11 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar11);
            if (local_50._4_4_ < uVar11) {
              FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
              lVar16 = CONCAT71(uStack_a7,local_a8);
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
              if (lVar16 == 0) goto LAB_143ac491b;
            }
            else {
              puVar12 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar12 = local_78;
              }
              *(longlong *)(puVar12 + lVar19 * 8) = lVar16;
            }
            LOCK();
            *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
            UNLOCK();
            puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
            if (puVar2 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar2 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar2)(puVar2,1);
              }
            }
          }
        }
LAB_143ac491b:
        iVar6 = *(int *)(lVar7 + 0x88);
        if ((longlong)iVar6 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x80);
          lVar16 = 0;
          do {
            lVar19 = *(longlong *)(lVar7 + lVar16);
            if (lVar19 != 0) {
              FUN_143abc096(lVar19,&local_a8,0);
              uVar14 = local_50;
              lVar19 = CONCAT71(uStack_a7,local_a8);
              if (lVar19 != 0) {
                lVar21 = (longlong)(int)local_50;
                uVar11 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar11);
                if (local_50._4_4_ < uVar11) {
                  FUN_14476a5c8(local_78,uVar14 & 0xffffffff);
                  lVar19 = CONCAT71(uStack_a7,local_a8);
                  puVar12 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar12 = local_78;
                  }
                  *(longlong *)(puVar12 + lVar21 * 8) = lVar19;
                  if (lVar19 == 0) goto LAB_143ac49d1;
                }
                else {
                  puVar12 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar12 = local_78;
                  }
                  *(longlong *)(puVar12 + lVar21 * 8) = lVar19;
                }
                LOCK();
                *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                UNLOCK();
                puVar2 = (undefined8 *)CONCAT71(uStack_a7,local_a8);
                if (puVar2 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar2 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar2)(puVar2,1);
                  }
                }
              }
            }
LAB_143ac49d1:
            lVar16 = lVar16 + 0x58;
          } while ((longlong)iVar6 * 0x58 - lVar16 != 0);
        }
      }
      lVar18 = lVar18 + 0x48;
    } while (lVar18 != lVar17);
  }
  lVar17 = local_b8;
  if (0 < (int)local_50) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143ac4af2;
    do {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_143acaafd);
      }
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar18 + 0x310);
      *(undefined8 *)(lVar18 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_143ac4af2:
      uVar14 = *(longlong *)(puVar10 + 0x10) + 7;
      uVar11 = puVar10[0x12];
      while( true ) {
        puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff8);
        if (puVar15 + 0x16 <= puVar10 + 0x4000) {
          *(undefined8 **)(puVar10 + 0x10) = puVar15 + 0x16;
          puVar10[0x12] = uVar11 + 1;
          FUN_1447247dc(puVar15,local_78);
          *puVar15 = &PTR_FUN_149f56280;
          *(undefined4 *)(puVar15 + 0x15) = 0xff;
          if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
          }
          puVar15[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar15[9] = puVar15;
          puVar15[10] = puVar15;
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lVar7 = *(longlong *)(lVar18 + 0x2b8);
          if (lVar7 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar7 + 0x30);
          }
          puVar15[0xf] = uVar9;
          puVar15[0x10] = 0xc80000527800b400;
          *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
            UNLOCK();
          }
          local_a8 = 1;
          FUN_1447439e4(puVar15,&local_a8);
          puVar3 = (undefined8 *)(lVar17 + 0x4d0);
          puVar5 = *(undefined8 **)(lVar17 + 0x4d0);
          *(undefined8 **)(lVar17 + 0x4d0) = puVar15;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar5 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            puVar15 = (undefined8 *)*puVar3;
          }
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
            UNLOCK();
          }
          local_88 = (undefined1 *)0x0;
          local_80 = 1;
          local_b0 = puVar15;
          FUN_144727e94(&local_a8,1,0);
          puVar12 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar12 = &local_a8;
          }
          FUN_144727e6e(puVar12,&local_b0,1);
          if (local_b0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_b0 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_b0)(local_b0,1);
            }
          }
          puVar10 = (uint *)*puVar2;
          if (puVar10 != (uint *)0x0) goto LAB_143ac4d99;
          goto LAB_143ac4d1b;
        }
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar4 = *puVar10;
        *puVar10 = *puVar10 + uVar11 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar11) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        uVar14 = (longlong)puVar10 + 0x5f;
        uVar11 = 0;
      }
    } while( true );
  }
  goto LAB_143ac49fb;
LAB_143ac4d1b:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_143acaafd);
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar8 = *(undefined4 **)(lVar7 + 0x310);
  *(undefined8 *)(lVar7 + 0x310) = 0;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar8 = 0xffffffff;
  *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
  puVar8[0x12] = 0;
  *puVar2 = puVar8;
  FUN_140217a48(puVar2);
  puVar10 = (uint *)*puVar2;
LAB_143ac4d99:
  puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar13 = (uint *)(puVar15 + 0x18);
  uVar11 = puVar10[0x12];
  if (puVar13 <= puVar10 + 0x4000) goto LAB_143ac5010;
  while( true ) {
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
    LOCK();
    uVar4 = *puVar10;
    *puVar10 = *puVar10 + uVar11 + 1;
    UNLOCK();
    if ((uVar4 ^ uVar11) != 0xffffffff) break;
    puVar10 = (uint *)*puVar2;
    *puVar10 = 0xffffffff;
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
    puVar10[0x12] = 0;
    *puVar2 = puVar10;
    puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
    puVar13 = (uint *)(puVar15 + 0x18);
    uVar11 = 0;
    if (puVar13 <= puVar10 + 0x4000) {
      uVar11 = 1;
      goto LAB_143ac4e19;
    }
  }
  goto LAB_143ac4d1b;
LAB_143ac5010:
  uVar11 = uVar11 + 1;
LAB_143ac4e19:
  *(uint **)(puVar10 + 0x10) = puVar13;
  puVar10[0x12] = uVar11;
  FUN_1447247dc(puVar15,&local_a8);
  *puVar15 = &PTR_FUN_14ae26778;
  puVar15[0x15] = 0;
  if (lVar17 == 0) {
    *(undefined4 *)(puVar15 + 0x15) = 0;
    iVar6 = 0;
  }
  else {
    uVar11 = *(uint *)(lVar17 + 0xc);
    *(uint *)(puVar15 + 0x15) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar6 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar6 = *(int *)(lVar17 + 0x10);
      bVar22 = iVar6 == 0;
      if (bVar22) {
        *(int *)(lVar17 + 0x10) = iVar20;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar6 = iVar20;
      }
    }
  }
  *(int *)((longlong)puVar15 + 0xac) = iVar6;
  puVar15[0x16] = puVar3;
  puVar15[0x17] = *puVar3;
  if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
  }
  lVar17 = local_b8;
  puVar15[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar15[9] = puVar15;
  puVar15[10] = puVar15;
  lVar18 = *(longlong *)(lVar18 + 0x2b8);
  if (lVar18 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar18 + 0x30);
  }
  puVar15[0xf] = uVar9;
  puVar15[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 3;
  if (puVar15 == (undefined8 *)0x0) {
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
    FUN_1447439e4(puVar15);
    LOCK();
    piVar1 = (int *)(puVar15 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar15)(puVar15,1);
    }
  }
  puVar12 = &local_a8;
  if (local_88 != (undefined1 *)0x0) {
    puVar12 = local_88;
  }
  FUN_144717c65(puVar12,local_80);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ac49fb:
  *(byte *)(lVar17 + 0x4a0) = *(byte *)(lVar17 + 0x4a0) & 0xfb;
  puVar12 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar12 = local_78;
  }
  FUN_144717c65(puVar12,(int)local_50);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ac4a24:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac50b6 FUN_143ac50b6 body=5 status=ok
// SIG undefined FUN_143ac50b6(void)

undefined8 FUN_143ac50b6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 143ac50bc FUN_143ac50bc body=2023 status=ok
// SIG undefined FUN_143ac50bc(void)

void FUN_143ac50bc(longlong param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar23 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143ac5113;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143ac511c;
      goto LAB_143ac52c6;
    }
LAB_143ac511c:
    (**(code **)(*param_2 + 0xc0))(param_2);
    iVar9 = *(int *)(param_1 + 0x58);
    lVar23 = (longlong)iVar9;
    iVar20 = iVar9;
    if (0 < lVar23) {
      lVar18 = 0;
      do {
        FUN_1481c9124(*(longlong *)(param_1 + 0x50) + lVar18);
        lVar18 = lVar18 + 0x58;
      } while (lVar23 * 0x58 - lVar18 != 0);
      iVar20 = *(int *)(param_1 + 0x58);
    }
    if (iVar9 != 0) {
      pvVar5 = *(void **)(param_1 + 0x50);
      FUN_144727c04(pvVar5);
      iVar8 = *(int *)(param_1 + 0x58) - iVar9;
      iVar15 = iVar9;
      if (iVar8 != 0) {
        memmove(pvVar5,(void *)(lVar23 * 0x58 + (longlong)pvVar5),(longlong)iVar8 * 0x58);
        iVar15 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar15 - iVar9;
      if (iVar9 == iVar20) {
        FUN_144727c3a((longlong *)(param_1 + 0x50));
      }
    }
    iVar9 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar9 != 0) {
      lVar23 = *(longlong *)(param_1 + 0x40);
      lVar18 = 0;
      do {
        lVar4 = *(longlong *)(lVar23 + lVar18);
        *(undefined1 *)(lVar4 + 0x228) = 0;
        *(undefined4 *)(lVar4 + 0x274) = 0;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x1f0) + 0x5c) = 0xffffffff;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x1f8) + 0x5c) = 0xffffffff;
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar9 * 8 != lVar18);
      iVar9 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar9 != 0) {
        lVar23 = *(longlong *)(param_1 + 0x40);
        lVar18 = 0;
        do {
          lVar4 = *(longlong *)(lVar23 + lVar18);
          FUN_144807ef6(lVar4,param_2);
          FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f0));
          FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f0));
          *(undefined8 *)(lVar4 + 0x1f0) = 0;
          FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f8));
          FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f8));
          *(undefined8 *)(lVar4 + 0x1f8) = 0;
          lVar18 = lVar18 + 8;
        } while ((longlong)iVar9 * 8 != lVar18);
      }
    }
  }
  else {
LAB_143ac5113:
    if (iVar9 == 0x10) goto LAB_143ac511c;
LAB_143ac52c6:
    if (DAT_14ca9a438 != '\0') {
LAB_143ac52f7:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143ac5435;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar23 + 0x310);
          *(undefined8 *)(lVar23 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143ac5435:
          puVar22 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar22 + 0x18);
          uVar16 = puVar13[0x12];
          if (puVar19 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar16 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar16) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar22 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar22 + 0x18);
            uVar16 = 0;
            if (puVar19 <= puVar13 + 0x4000) {
              uVar16 = 1;
              goto LAB_143ac54b5;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_143ac54b5:
        *(uint **)(puVar13 + 0x10) = puVar19;
        puVar13[0x12] = uVar16;
        iVar9 = 0;
        FUN_1447247dc(puVar22,0);
        *puVar22 = &PTR_FUN_14ae268c0;
        puVar22[0x15] = param_1;
        puVar22[0x16] = param_2;
        *(byte *)(puVar22 + 0x17) = param_3;
        uVar6 = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar22 + 0xb9) = uVar6;
        *(undefined4 *)((longlong)puVar22 + 0xbc) = local_88._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar9 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar23 == 0) {
          uVar7 = 1;
          if ((char)uVar21 != '\x06') {
            uVar7 = uVar21;
          }
          uVar21 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar23 + 0x30);
        }
        puVar22[0xf] = uVar14;
        puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar9;
        if (puVar22 == (undefined8 *)0x0) {
          local_89 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          local_89 = 1;
          FUN_1447439e4(puVar22);
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
      }
      else {
        local_98 = &local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14ae26870;
        local_88 = FUN_143acc080;
        local_60 = param_1;
        local_58 = param_2;
        local_50 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"RemoveFromRenderThread",&DAT_14cb439a0);
        if (local_88 != (code *)0x0) {
          pppuVar17 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar17 = &local_68;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_143ac536d;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 = *(int *)(lVar23 + 0xc60), iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_143ac571c;
      }
      goto LAB_143ac52f7;
    }
LAB_143ac571c:
    (**(code **)(*param_2 + 0xc0))(param_2);
    iVar9 = *(int *)(param_1 + 0x58);
    lVar23 = (longlong)iVar9;
    iVar20 = iVar9;
    if (0 < lVar23) {
      lVar18 = 0;
      do {
        FUN_1481c9124(*(longlong *)(param_1 + 0x50) + lVar18);
        lVar18 = lVar18 + 0x58;
      } while (lVar23 * 0x58 - lVar18 != 0);
      iVar20 = *(int *)(param_1 + 0x58);
    }
    if (iVar9 != 0) {
      pvVar5 = *(void **)(param_1 + 0x50);
      FUN_144727c04(pvVar5);
      iVar8 = *(int *)(param_1 + 0x58) - iVar9;
      iVar15 = iVar9;
      if (iVar8 != 0) {
        memmove(pvVar5,(void *)(lVar23 * 0x58 + (longlong)pvVar5),(longlong)iVar8 * 0x58);
        iVar15 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar15 - iVar9;
      if (iVar9 == iVar20) {
        FUN_144727c3a((longlong *)(param_1 + 0x50));
      }
    }
    iVar9 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar9 != 0) {
      lVar23 = *(longlong *)(param_1 + 0x40);
      lVar18 = 0;
      do {
        lVar4 = *(longlong *)(lVar23 + lVar18);
        *(undefined1 *)(lVar4 + 0x228) = 0;
        *(undefined4 *)(lVar4 + 0x274) = 0;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x1f0) + 0x5c) = 0xffffffff;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x1f8) + 0x5c) = 0xffffffff;
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar9 * 8 != lVar18);
      iVar9 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar9 != 0) {
        lVar23 = *(longlong *)(param_1 + 0x40);
        lVar18 = 0;
        do {
          lVar4 = *(longlong *)(lVar23 + lVar18);
          FUN_144807ef6(lVar4,param_2);
          FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f0));
          FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f0));
          *(undefined8 *)(lVar4 + 0x1f0) = 0;
          FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f8));
          FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f8));
          *(undefined8 *)(lVar4 + 0x1f8) = 0;
          lVar18 = lVar18 + 8;
        } while ((longlong)iVar9 * 8 != lVar18);
      }
    }
  }
  if ((param_1 != 0 & param_3) != 0) {
    FUN_141839f38(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
LAB_143ac536d:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac58bc FUN_143ac58bc body=69 status=ok
// SIG undefined FUN_143ac58bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac58bc(void)

{
  _DAT_14cb43798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac58fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb437a0,1);
  return;
}



// FUNCTION 143ac5901 FUN_143ac5901 body=69 status=ok
// SIG undefined FUN_143ac5901(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac5901(void)

{
  _DAT_14cb437b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb437b8,1);
  return;
}



// FUNCTION 143ac5946 FUN_143ac5946 body=69 status=ok
// SIG undefined FUN_143ac5946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac5946(void)

{
  _DAT_14cb437c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb437c8,1);
  return;
}



// FUNCTION 143ac598b FUN_143ac598b body=69 status=ok
// SIG undefined FUN_143ac598b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac598b(void)

{
  _DAT_14cb437d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac59cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb437e0,1);
  return;
}



// FUNCTION 143ac59d0 FUN_143ac59d0 body=69 status=ok
// SIG undefined FUN_143ac59d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac59d0(void)

{
  _DAT_14cb437f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb437f8,1);
  return;
}



// FUNCTION 143ac5a15 FUN_143ac5a15 body=69 status=ok
// SIG undefined FUN_143ac5a15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac5a15(void)

{
  _DAT_14cb43800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43808,1);
  return;
}



// FUNCTION 143ac5a5a FUN_143ac5a5a body=69 status=ok
// SIG undefined FUN_143ac5a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac5a5a(void)

{
  _DAT_14cb43810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43818,1);
  return;
}



// FUNCTION 143ac5a9f FUN_143ac5a9f body=69 status=ok
// SIG undefined FUN_143ac5a9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac5a9f(void)

{
  _DAT_14cb43820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac5ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43828,1);
  return;
}



// FUNCTION 143ac5ae4 FUN_143ac5ae4 body=88 status=ok
// SIG undefined FUN_143ac5ae4(void)

void FUN_143ac5ae4(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x108) + lVar2);
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(plVar1[1] + 0x38) + 0xb8) +
           (longlong)(int)plVar1[0x19] * 0x48) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x000143ac5b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))(plVar1,param_3);
        return;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x110) * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 143ac5b3c FUN_143ac5b3c body=327 status=ok
// SIG undefined FUN_143ac5b3c(void)

void FUN_143ac5b3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143aa355c(*(longlong *)(param_1 + 0x430) + 0x38,0);
  local_38 = 0;
  FUN_140056680(local_48,L"Spawn Instance Parameters");
  local_58 = &local_38;
  FUN_1481b9880(param_1 + 0x2c0,*(undefined4 *)(param_2 + 0x18),1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_143aa355c(*(longlong *)(param_1 + 0x438) + 0x38,0);
  local_38 = 0;
  FUN_140056680(local_48,L"Update Instance Parameters");
  local_58 = &local_38;
  FUN_1481b9880(param_1 + 0x378,*(undefined4 *)(param_2 + 0x18),1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  FUN_140056680(local_48,L"System Data");
  local_58 = &local_38;
  FUN_1481b9880(param_1 + 0x98,*(undefined4 *)(param_2 + 0x18),1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac5c84 FUN_143ac5c84 body=1419 status=ok
// SIG undefined FUN_143ac5c84(void)

undefined8
FUN_143ac5c84(longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  if (*(longlong *)(param_2 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar5 = 0;
  }
  else {
    uVar14 = *(uint *)(*(longlong *)(param_2 + 0x68) + 0xc);
    *(uint *)(param_1 + 0x18) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar5 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar5 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar5 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar5 = iVar15;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar5;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(longlong *)(param_1 + 0x28) = param_3;
  *(uint *)(param_1 + 0x30) = (*(uint *)(param_1 + 0x30) & 0xfffffff1) + (param_4 & 0xff) * 8;
  uVar14 = 0;
  if (((param_3 == 0) || (*(longlong **)(param_3 + 0x218) == (longlong *)0x0)) ||
     (puVar7 = (undefined8 *)(**(code **)(**(longlong **)(param_3 + 0x218) + 0x420))(),
     puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar7)(puVar7,&DAT_14cb3e918);
  }
  *(undefined8 *)(param_1 + 0x558) = uVar8;
  lVar17 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(*(longlong *)(lVar17 + 0xd8) + 0x348) != '\0') {
    uVar14 = (uint)(*(char *)(*(longlong *)(lVar17 + 0xe0) + 0x348) != '\0');
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar6 & 0xfffffffe | uVar14;
  uVar13 = (*(uint *)(lVar17 + 0x508) & 1) << 4;
  *(uint *)(param_1 + 0x30) = uVar6 & 0xffffffee | uVar14 | uVar13;
  uVar6 = uVar6 & 0xffffffce | uVar14 | uVar13 | (*(uint *)(lVar17 + 0x508) & 2) << 4;
  uVar12 = (ulonglong)uVar6;
  *(uint *)(param_1 + 0x30) = uVar6;
  if (*(char *)(lVar17 + 0x4a8) == '\0') {
    if (*(char *)(param_1 + 0x534) == '\x01') {
      *(undefined1 *)(param_1 + 0x534) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(lVar17 + 0x4a4);
    *(undefined1 *)(param_1 + 0x534) = 1;
  }
  if (uVar14 != 0) {
    lVar1 = lVar17 + 0x180;
    FUN_1402ed004(param_1 + 0x98,lVar1,0);
    FUN_1402ed004(param_1 + 0x150,lVar1,0);
    FUN_1402ed004(param_1 + 0x208,lVar1,0);
    FUN_1402ed004(param_1 + 0x2c0,lVar17 + 0x1c8,0);
    FUN_1402ed004(param_1 + 0x378,lVar17 + 0x210,0);
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd8);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe0);
    puVar9 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
    FUN_14015b754(puVar9);
    *puVar9 = &PTR_FUN_14ae26c00;
    *(undefined1 *)(puVar9 + 0x4c) = 0;
    puVar9[0x53] = 0;
    puVar9[0x54] = 0;
    puVar9[0x55] = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x430);
    *(undefined8 **)(param_1 + 0x430) = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
    FUN_14015b754(puVar9);
    *puVar9 = &PTR_FUN_14ae26c00;
    puVar9[0x53] = 0;
    puVar9[0x54] = 0;
    puVar9[0x55] = 0;
    *(undefined1 *)(puVar9 + 0x4c) = 1;
    puVar7 = *(undefined8 **)(param_1 + 0x438);
    *(undefined8 **)(param_1 + 0x438) = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    bVar4 = (**(code **)(**(longlong **)(param_1 + 0x430) + 8))
                      (*(longlong **)(param_1 + 0x430),0,lVar17,0);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & (bVar4 | 0xfffffffe);
    bVar4 = (**(code **)(**(longlong **)(param_1 + 0x438) + 8))
                      (*(longlong **)(param_1 + 0x438),0,lVar1,0);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & (bVar4 | 0xfffffffe);
    iVar5 = *(int *)(lVar17 + 0x380);
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(lVar17 + 0x378);
      lVar16 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar16) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x430);
          lVar10 = FUN_14026116e(param_1);
          if (lVar10 != 0) {
            FUN_1448b09be(lVar10 + 0x40,lVar3 + 0x38,0);
          }
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar5 * 8 != lVar16);
    }
    iVar5 = *(int *)(lVar1 + 0x380);
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x378);
      lVar16 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar16) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x438);
          lVar10 = FUN_14026116e(param_1);
          if (lVar10 != 0) {
            FUN_1448b09be(lVar10 + 0x40,lVar3 + 0x38,0);
          }
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar5 * 8 != lVar16);
    }
    FUN_1448b09be(lVar17 + 0x48,*(longlong *)(param_1 + 0x430) + 0x38,0);
    FUN_1448b09be(lVar1 + 0x48,*(longlong *)(param_1 + 0x438) + 0x38,0);
    lVar17 = *(longlong *)(param_1 + 0x430);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb418f8,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(longlong *)(param_1 + 0x4f0) = lVar17;
    lVar17 = *(longlong *)(param_1 + 0x438);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb418f8,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(longlong *)(param_1 + 0x4f8) = lVar17;
    lVar17 = *(longlong *)(param_1 + 0x430);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb41918,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(longlong *)(param_1 + 0x500) = lVar17;
    lVar17 = *(longlong *)(param_1 + 0x438);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb41918,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(longlong *)(param_1 + 0x508) = lVar17;
    lVar17 = *(longlong *)(param_1 + 0x430);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb41938,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(longlong *)(param_1 + 0x510) = lVar17;
    lVar17 = *(longlong *)(param_1 + 0x438);
    piVar11 = (int *)(**(code **)(*(longlong *)(lVar17 + 0x38) + 0x58))
                               (lVar17 + 0x38,&DAT_14cb41938,0);
    if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
      uVar12 = 0;
    }
    else {
      uVar12 = (longlong)*piVar11 + *(longlong *)(lVar17 + 0x58);
    }
    *(ulonglong *)(param_1 + 0x518) = uVar12;
  }
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 143ac6210 FUN_143ac6210 body=1222 status=ok
// SIG undefined FUN_143ac6210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_143ac6210(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
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
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar7 = 6;
  if (DAT_14cb437d0 == 0) {
    cVar1 = *(char *)(param_1 + 9);
    bVar7 = 0;
    bVar4 = 0;
    if (cVar1 == '\x01') {
      if ((((*(int *)(param_1 + 0x4c) != 0) &&
           (uVar11 = *(uint *)(param_1 + 0x48), -1 < (int)uVar11)) &&
          (bVar7 = bVar4, (int)uVar11 < DAT_14c9647dc)) &&
         (((plVar8 = (longlong *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x4c))) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
        bVar4 = *(byte *)(*plVar8 + 0x48);
        bVar7 = 6;
        if (bVar4 < 6) {
          bVar7 = bVar4;
        }
      }
    }
    else if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        uVar5 = 0;
        uVar11 = 0;
        if ((((*(int *)(param_1 + 0x4c) != 0) &&
             (uVar2 = *(uint *)(param_1 + 0x48), uVar11 = uVar5, -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (((plVar8 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x4c))) &&
              ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))))) && (lVar10 = *plVar8, lVar10 != 0)) {
          if (DAT_14cb39ca0 == 0) {
            local_60 = &local_40;
            local_40 = FUN_144a7958c;
            local_50 = FUN_14081d0ea;
            local_58 = &LAB_14638c6c0;
            local_68 = &LAB_14811044c;
            local_70 = &LAB_1407f5cf8;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10000004;
            local_90 = 0x10;
            local_98 = 0x8e0;
            FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
          }
          if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb39ca0 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) != DAT_14cb39ca0 + 0x30)) ||
             (lVar10 = *(longlong *)(lVar10 + 0x120), lVar10 != 0)) {
            bVar7 = (byte)*(undefined4 *)(lVar10 + 0x48);
            if (bVar7 < *(byte *)(lVar10 + 0x49)) {
              bVar7 = *(byte *)(lVar10 + 0x49);
            }
            if (DAT_14cad2858 == 0) {
              local_60 = &local_40;
              local_40 = FUN_144a7958c;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_146395584;
              local_68 = &LAB_147a0ba80;
              local_70 = &LAB_14575ccce;
              local_78 = L"Engine";
              local_80 = 0x40000000000;
              local_88 = 0x10000004;
              local_90 = 0x10;
              local_98 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            uVar11 = bVar7 + 1;
            if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
               (((*(byte *)(lVar10 + 0xc61) & 0x20) != 0 && (uVar11 < 5)))) {
              uVar11 = 4;
            }
          }
        }
        bVar7 = *(byte *)(param_1 + 0x798);
        if (((bVar7 & 4) != 0) && (iVar9 = *(int *)(param_1 + 0x170), (longlong)iVar9 != 0)) {
          lVar10 = *(longlong *)(param_1 + 0x168);
          lVar12 = 0;
          do {
            iVar3 = *(int *)(lVar10 + 4 + lVar12);
            if ((((((iVar3 != 0) && (uVar5 = *(uint *)(lVar10 + lVar12), -1 < (int)uVar5)) &&
                  ((int)uVar5 < DAT_14c9647dc)) &&
                 ((plVar8 = (longlong *)
                            ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                  plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar3)))) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
               ((plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0 &&
                (uVar5 = (**(code **)(*plVar8 + 0x3b0))
                                   (plVar8,(longlong)*(int *)(lVar10 + 8 + lVar12) +
                                           *(longlong *)(param_1 + 0x138)), (int)uVar11 < (int)uVar5
                )))) {
              uVar11 = uVar5;
            }
            lVar12 = lVar12 + 0xc;
          } while ((longlong)iVar9 * 0xc != lVar12);
          bVar7 = *(byte *)(param_1 + 0x798);
        }
        iVar9 = 8;
        if (((bVar7 & 8) != 0) && (iVar3 = *(int *)(param_1 + 0x170), (longlong)iVar3 != 0)) {
          lVar10 = *(longlong *)(param_1 + 0x168);
          lVar12 = 0;
          do {
            iVar6 = *(int *)(lVar10 + 4 + lVar12);
            if ((((iVar6 != 0) && (uVar5 = *(uint *)(lVar10 + lVar12), -1 < (int)uVar5)) &&
                ((int)uVar5 < DAT_14c9647dc)) &&
               (((plVar8 = (longlong *)
                           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                 plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar6)) &&
                (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
                 ((plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0 &&
                  (iVar6 = (**(code **)(*plVar8 + 0x3c0))
                                     (plVar8,(longlong)*(int *)(lVar10 + 8 + lVar12) +
                                             *(longlong *)(param_1 + 0x138)), iVar6 <= iVar9))))))))
            {
              iVar9 = iVar6;
            }
            lVar12 = lVar12 + 0xc;
          } while ((longlong)iVar3 * 0xc != lVar12);
        }
        if (((iVar9 < (int)uVar11) &&
            (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb43850)) &&
           (FUN_144b3d300(&DAT_14cb43850), DAT_14cb43850 == -1)) {
          _DAT_14cb43848 = FUN_14786402d();
          _Init_thread_footer(&DAT_14cb43850);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
      }
      bVar7 = 6;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac66de FUN_143ac66de body=174 status=ok
// SIG undefined FUN_143ac66de(void)

void FUN_143ac66de(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      ((*(byte *)(lVar1 + 0x4a0) & 1) != 0)) && (cVar2 = FUN_1400713b4(param_1), cVar2 != '\0')) {
    if (((DAT_14c7629f4 != 0) && (*(int *)(param_1 + 0x18) != -1)) &&
       (*(longlong *)(param_1 + 0x7b0) != 0)) {
      *(char *)(param_1 + 10) = (char)param_2;
      return;
    }
    FUN_140336cb8(param_1,0);
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      FUN_14005a35e(param_1,1);
    }
    *(undefined1 *)(param_1 + 10) = 3;
    FUN_14090ddfa(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x868) != 4) {
    *(undefined4 *)(param_1 + 0x86c) = 4;
    FUN_140389866(param_1);
    *(undefined4 *)(param_1 + 0x868) = 4;
  }
  return;
}



// FUNCTION 143ac678c FUN_143ac678c body=410 status=ok
// SIG undefined FUN_143ac678c(void)

void FUN_143ac678c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  
  bVar2 = *(byte *)(param_1 + 0x798);
  if (*(int *)(param_1 + 0x18) == -1) {
    if (1 < *(int *)(param_1 + 0x86c) - 3U) {
      *(undefined4 *)(param_1 + 0x86c) = 3;
    }
    if (1 < *(int *)(param_1 + 0x868) - 3U) {
      *(undefined4 *)(param_1 + 0x868) = 3;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    plVar8 = *(longlong **)(param_1 + 0x28);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    FUN_140336ad0(uVar4,param_1);
    if (1 < *(int *)(param_1 + 0x86c) - 3U) {
      *(undefined4 *)(param_1 + 0x86c) = 3;
    }
    if (1 < *(int *)(param_1 + 0x868) - 3U) {
      *(undefined4 *)(param_1 + 0x868) = 3;
    }
    iVar3 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x108);
      lVar9 = 0;
      do {
        plVar6 = *(longlong **)(lVar5 + lVar9);
        (**(code **)(*plVar6 + 0x28))(plVar6,1);
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar9);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  FUN_140389b3e(param_1);
  lVar5 = *(longlong *)(param_1 + 0x878);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x878) = 0;
    FUN_143ac50bc(lVar5,*(undefined8 *)(param_1 + 0x870),1);
  }
  if ((*(byte *)(param_1 + 0x799) & 1) == 0) {
    FUN_1403899a2(param_1,1);
  }
  if ((((bVar2 & 1) != 0) &&
      (*(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) & 0xfe,
      *(int *)(param_1 + 0x130) != 0)) && (*(longlong **)(param_1 + 0x128) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))();
    if (cVar7 != '\0') {
      if (*(int *)(param_1 + 0x130) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x128);
      }
                    /* WARNING: Could not recover jumptable at 0x000143ac6923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x58))(plVar8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143ac6926 FUN_143ac6926 body=220 status=ok
// SIG undefined FUN_143ac6926(void)

void FUN_143ac6926(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  FUN_143ac6af4();
  if (-1 < (char)*(byte *)(param_1 + 0x798)) {
    *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) & 0x3f;
  }
  *(undefined8 *)(param_1 + 0x894) = 0;
  *(byte *)(param_1 + 0x799) = *(byte *)(param_1 + 0x799) & 0xfd;
  if (((*(longlong *)(param_1 + 0x38) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x38) + 8) >> 0x1e & 1) == 0)) &&
     (*(int *)(param_1 + 0x86c) != 4)) {
    cVar4 = FUN_1400713b4(param_1);
    if (cVar4 != '\0') {
      if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x4a0) & 1) == 0) {
        if (*(int *)(param_1 + 0x868) != 4) {
          *(undefined4 *)(param_1 + 0x86c) = 4;
          FUN_140389866(param_1);
          *(undefined4 *)(param_1 + 0x868) = 4;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x110);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x108);
          lVar5 = 0;
          do {
            plVar3 = *(longlong **)(lVar2 + lVar5);
            (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
            lVar5 = lVar5 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 143ac6a02 FUN_143ac6a02 body=217 status=ok
// SIG undefined FUN_143ac6a02(void)

void FUN_143ac6a02(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((0 < param_2) && (*(char *)(param_1 + 8) != '\x02')) && (*(char *)(param_1 + 8) != '\x05')) {
    FUN_140336cb8(param_1,0);
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      FUN_14005a35e(param_1,1);
    }
    if (1 < *(int *)(param_1 + 0x86c) - 3U) {
      FUN_140c71a02(param_1,1);
      *(byte *)(param_1 + 0x794) = *(byte *)(param_1 + 0x794) | 1;
      do {
        local_48 = 0;
        FUN_143ac6bf0(param_1,param_3,&local_48);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *(byte *)(param_1 + 0x794) = *(byte *)(param_1 + 0x794) & 0xfe;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac6af4 FUN_143ac6af4 body=252 status=ok
// SIG undefined FUN_143ac6af4(void)

void FUN_143ac6af4(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0x8b0) = iVar5;
  *(int *)(param_1 + 0x8b4) = iVar5;
  *(undefined4 *)(param_1 + 0x960) = 0;
  fVar1 = *(float *)(lVar4 + 0x52c);
  fVar2 = *(float *)(lVar4 + 0x528);
  uVar6 = iVar5 * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x8b4) = uVar6;
  fVar2 = ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar2) + fVar2;
  *(float *)(param_1 + 0x964) = fVar2;
  fVar1 = *(float *)(lVar4 + 0x554);
  fVar3 = *(float *)(lVar4 + 0x550);
  uVar6 = iVar5 * -0x4b9b4d07 + 0x9d6f2492;
  *(uint *)(param_1 + 0x8b4) = uVar6;
  fVar3 = ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar3) + fVar3;
  *(float *)(param_1 + 0x968) = fVar3;
  *(undefined4 *)(param_1 + 0x96c) = 0;
  *(float *)(param_1 + 0x970) = fVar3 + 0.0 + fVar2;
  return;
}



// FUNCTION 143ac6bf0 FUN_143ac6bf0 body=757 status=ok
// SIG undefined FUN_143ac6bf0(void)

void FUN_143ac6bf0(longlong param_1,float param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x86c) != 4) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 == (undefined8 *)0x0) {
      if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x44a) != '\x01') {
        *(undefined1 *)(lVar3 + 0x564) = 0;
        *(float *)(lVar3 + 0x568) = param_2;
        *(float *)(lVar3 + 0x56c) = param_2;
        *(undefined8 *)(lVar3 + 0x570) = 1;
        *(undefined4 *)(lVar3 + 0x578) = 0x3f800000;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
      }
      fVar2 = *(float *)(*(longlong *)(lVar3 + 0x10) + 0x45c);
      if (fVar2 <= 0.0) {
        iVar5 = 0;
      }
      else {
        fVar7 = (float)FUN_1447c7e44(*(undefined4 *)(lVar3 + 0x560),fVar2);
        fVar7 = (fVar7 + param_2) / fVar2;
        iVar5 = (int)ROUND(fVar7 + fVar7 + -0.5) >> 1;
        if (DAT_14c762a14 <= iVar5) {
          iVar5 = DAT_14c762a14;
        }
      }
      *(undefined1 *)(lVar3 + 0x564) = 1;
      *(float *)(lVar3 + 0x568) = param_2;
      *(float *)(lVar3 + 0x56c) = fVar2;
      *(int *)(lVar3 + 0x570) = iVar5;
      *(undefined8 *)(lVar3 + 0x574) = 0xffffffff;
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          *(int *)(lVar3 + 0x574) = iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(lVar3 + 0x578) = (float)iVar6 / (float)iVar5;
          local_68 = 0;
          FUN_1400e24f4(lVar3,fVar2,&local_68);
        } while (iVar5 != iVar6);
      }
      *(float *)(lVar3 + 0x560) = param_2 + *(float *)(lVar3 + 0x560);
    }
    else {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x44a) == '\x01') {
        fVar2 = *(float *)(*(longlong *)(lVar3 + 0x10) + 0x45c);
        if (fVar2 <= 0.0) {
          iVar5 = 0;
        }
        else {
          fVar7 = (float)FUN_1447c7e44(*(undefined4 *)(lVar3 + 0x560),fVar2);
          fVar7 = (fVar7 + param_2) / fVar2;
          iVar5 = (int)ROUND(fVar7 + fVar7 + -0.5) >> 1;
          if (DAT_14c762a14 <= iVar5) {
            iVar5 = DAT_14c762a14;
          }
        }
        *(undefined1 *)(lVar3 + 0x564) = 1;
        *(float *)(lVar3 + 0x568) = param_2;
        *(float *)(lVar3 + 0x56c) = fVar2;
        *(int *)(lVar3 + 0x570) = iVar5;
        *(undefined8 *)(lVar3 + 0x574) = 0xffffffff;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            *(int *)(lVar3 + 0x574) = iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(lVar3 + 0x578) = (float)iVar6 / (float)iVar5;
            local_68 = 0;
            FUN_1400e24f4(lVar3,fVar2,&local_68);
          } while (iVar5 != iVar6);
        }
        *(float *)(lVar3 + 0x560) = param_2 + *(float *)(lVar3 + 0x560);
      }
      else {
        *(undefined1 *)(lVar3 + 0x564) = 0;
        *(float *)(lVar3 + 0x568) = param_2;
        *(float *)(lVar3 + 0x56c) = param_2;
        *(undefined8 *)(lVar3 + 0x570) = 1;
        *(undefined4 *)(lVar3 + 0x578) = 0x3f800000;
        FUN_1400e24f4(lVar3,param_2,param_3);
      }
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac6f32 FUN_143ac6f32 body=918 status=ok
// SIG undefined FUN_143ac6f32(void)

void FUN_143ac6f32(longlong *param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_d8 [42];
  char local_ae;
  char local_ad;
  uint local_ac;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  local_ae = param_3;
  local_ad = param_4;
  local_a0 = param_1;
  (**(code **)*param_2)(param_2,&local_70);
  if ((longlong)local_68 != 0) {
    local_98 = (longlong *)(lVar2 + 0x1e8);
    local_a8 = (undefined8 *)(lVar2 + 0x168);
    puVar12 = local_70;
    do {
      uVar8 = FUN_144741050(puVar12 + 1);
      cVar5 = FUN_14487ac36(uVar8);
      if (cVar5 != '\0') {
        plVar3 = *(longlong **)(param_2[6] + (longlong)*(int *)((longlong)puVar12 + 0xc) * 8);
        if (param_5 == '\0') {
LAB_143ac702e:
          plVar13 = plVar3;
          if (plVar3 == (longlong *)0x0) goto LAB_143ac7202;
        }
        else {
          local_88 = *(undefined4 *)(puVar12 + 1);
          local_90 = *puVar12;
          local_80 = 0;
          uStack_78 = 0;
          piVar9 = (int *)(**(code **)(*local_98 + 0x58))(local_98,&local_90,0);
          if (piVar9 == (int *)0x0) {
LAB_143ac7018:
            plVar13 = (longlong *)0x0;
          }
          else {
            iVar6 = *piVar9;
            if (((longlong)iVar6 < 0) || (*(int *)(lVar2 + 0x220) <= iVar6)) goto LAB_143ac7018;
            plVar13 = *(longlong **)(*(longlong *)(lVar2 + 0x218) + (longlong)iVar6 * 8);
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (plVar13 == (longlong *)0x0) goto LAB_143ac702e;
        }
        iVar6 = (**(code **)(*plVar13 + 0x318))(plVar13);
        puVar4 = local_a8;
        if (iVar6 != 0) {
          puVar10 = *(uint **)(lVar2 + 0x168);
          iVar1 = *(int *)(lVar2 + 0x170);
          lVar17 = (longlong)iVar1;
          if (lVar17 != 0) {
            lVar14 = lVar17 * 0xc;
            puVar16 = puVar10;
            do {
              if ((((puVar16[1] != 0) && (uVar7 = *puVar16, -1 < (int)uVar7)) &&
                  ((int)uVar7 < DAT_14c9647dc)) &&
                 (((puVar18 = (undefined8 *)
                              ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                   puVar18 != (undefined8 *)0x0 && (*(uint *)(puVar18 + 2) == puVar16[1])) &&
                  (((*(uint *)(puVar18 + 1) & 0x10200000) == 0 && ((longlong *)*puVar18 == plVar13))
                  )))) {
                if (puVar16 != (uint *)0x0) goto LAB_143ac716c;
                break;
              }
              puVar16 = puVar16 + 3;
              lVar14 = lVar14 + -0xc;
            } while (lVar14 != 0);
          }
          *(uint *)(lVar2 + 0x170) = iVar1 + 1U;
          if (*(uint *)(lVar2 + 0x174) < iVar1 + 1U) {
            FUN_14183a168(local_a8,iVar1);
            puVar10 = (uint *)*puVar4;
          }
          puVar10 = puVar10 + lVar17 * 3;
          FUN_143acaaee(puVar10);
          uVar7 = *(uint *)((longlong)plVar13 + 0xc);
          *puVar10 = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          uVar7 = *(uint *)(lVar17 + 0x10);
          if (*(uint *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            uVar15 = DAT_14c964868 + 1;
            bVar19 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar19) {
              local_ac = uVar15;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar15);
              uVar15 = local_ac;
            }
            LOCK();
            uVar7 = *(uint *)(lVar17 + 0x10);
            bVar19 = uVar7 == 0;
            if (bVar19) {
              *(uint *)(lVar17 + 0x10) = uVar15;
              uVar7 = 0;
            }
            UNLOCK();
            if (bVar19) {
              uVar7 = uVar15;
            }
          }
          puVar10[1] = uVar7;
          puVar10[2] = *(uint *)local_a0[1];
          *(int *)local_a0[1] = *(int *)local_a0[1] + (iVar6 + 0xfU & 0xfffffff0);
        }
LAB_143ac716c:
        bVar11 = *(byte *)(lVar2 + 0x798);
        if ((bVar11 & 4) == 0) {
          cVar5 = (**(code **)(*plVar13 + 0x3a8))(plVar13);
          bVar11 = *(byte *)(lVar2 + 0x798) & 0xfb | cVar5 << 2;
          *(byte *)(lVar2 + 0x798) = bVar11;
        }
        if ((bVar11 & 8) == 0) {
          cVar5 = (**(code **)(*plVar13 + 0x3b8))(plVar13);
          *(byte *)(lVar2 + 0x798) = *(byte *)(lVar2 + 0x798) & 0xf7 | cVar5 << 3;
        }
        if (local_ad == '\0') {
          if (local_ae != '\0') {
            *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) | 2;
          }
        }
        else {
          uVar7 = *(uint *)(plVar13 + 6);
          *(uint *)(plVar13 + 6) = uVar7 | 4;
          if ((uVar7 & 1) != 0) {
            (**(code **)(*plVar13 + 0x428))(plVar13);
            *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) & 0xfe;
          }
          if (plVar13[5] != 0) {
            *(undefined8 *)(plVar13[5] + 8) = *puVar12;
          }
        }
      }
LAB_143ac7202:
      puVar12 = puVar12 + 5;
    } while (puVar12 != local_70 + (longlong)local_68 * 5);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ac72ca FUN_143ac72ca body=861 status=ok
// SIG undefined FUN_143ac72ca(void)

void FUN_143ac72ca(longlong param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lVar11;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x86c) != 4)) {
    if (param_3 == '\0') {
      iVar2 = *(int *)(param_1 + 0x150);
      if ((longlong)iVar2 == 0) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x148);
      lVar11 = 0;
      bVar10 = false;
      do {
        lVar8 = (longlong)*(int *)(lVar5 + lVar11);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x168) + 4 + lVar8 * 0xc);
        if (iVar3 != 0) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x168) + lVar8 * 0xc);
          uVar4 = *puVar1;
          if (((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
               (plVar9 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0)) &&
              (((int)plVar9[2] == iVar3 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) &&
             ((plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0 &&
              (cVar6 = (**(code **)(*plVar9 + 0x2e8))
                                 (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),
                                  param_1,param_2), cVar6 != '\0')))) {
            (**(code **)(*plVar9 + 0x2e0))
                      (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),param_1);
            (**(code **)(*plVar9 + 0x2d8))
                      (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),param_1);
            bVar10 = true;
          }
        }
        lVar11 = lVar11 + 4;
      } while ((longlong)iVar2 * 4 != lVar11);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x160);
      if ((longlong)iVar2 == 0) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x158);
      lVar11 = 0;
      bVar10 = false;
      do {
        lVar8 = (longlong)*(int *)(lVar5 + lVar11);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x168) + 4 + lVar8 * 0xc);
        if (iVar3 != 0) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x168) + lVar8 * 0xc);
          uVar4 = *puVar1;
          if ((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
              ((plVar9 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0 &&
               ((((int)plVar9[2] == iVar3 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
                (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))))) &&
             (cVar6 = (**(code **)(*plVar9 + 0x2f0))
                                (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),
                                 param_1,param_2), cVar6 != '\0')) {
            (**(code **)(*plVar9 + 0x2e0))
                      (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),param_1);
            (**(code **)(*plVar9 + 0x2d8))
                      (plVar9,(longlong)(int)puVar1[2] + *(longlong *)(param_1 + 0x138),param_1);
            bVar10 = true;
          }
        }
        lVar11 = lVar11 + 4;
      } while ((longlong)iVar2 * 4 != lVar11);
    }
    if (bVar10) {
      iVar2 = *(int *)(param_1 + 0x110);
      if ((longlong)iVar2 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x108);
        lVar11 = 0;
        do {
          lVar8 = (**(code **)(**(longlong **)(lVar5 + lVar11) + 0x68))();
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0xd4) != 4)) {
            FUN_143a8398c(lVar8);
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar11);
      }
      iVar2 = *(int *)(param_1 + 0x1d4);
      FUN_14183a82e(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x1d4) != 0)) {
        FUN_1481f7fa2(param_1 + 0x1c8);
      }
      iVar2 = *(int *)(param_1 + 0x1e4);
      FUN_14183a82e(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
        FUN_1481f7fa2(param_1 + 0x1d8);
      }
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x430);
      cVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,param_1,param_1 + 0x1c8);
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x438);
      cVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,param_1,param_1 + 0x1d8);
      if ((cVar6 == '\0') || (cVar7 == '\0')) {
        FUN_143ac678c(param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ac7628 FUN_143ac7628 body=257 status=ok
// SIG undefined FUN_143ac7628(void)

undefined8 FUN_143ac7628(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x748) != *(int *)(param_1 + 0x774)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x778;
    if (*(longlong *)(param_1 + 0x780) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x780);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x788) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x740);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x20;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0) {
        return 0;
      }
      return *(undefined8 *)(lVar1 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 143ac772a FUN_143ac772a body=917 status=ok
// SIG undefined FUN_143ac772a(void)

void FUN_143ac772a(longlong param_1,longlong param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  iVar7 = DAT_14cb3a5f8;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14cb3a5f8 != 0) {
    lVar10 = FUN_14811173e();
    if (param_1 == 0) {
      lVar15 = lVar10 + 0x88;
    }
    else {
      lVar15 = FUN_1481f5624(param_1);
    }
    FUN_148121460(lVar10,lVar15);
  }
  if (*(int *)(param_1 + 0x86c) - 3U < 2) goto LAB_143ac7821;
  if (((((*(int *)(param_1 + 0x4c) == 0) || (uVar9 = *(uint *)(param_1 + 0x48), (int)uVar9 < 0)) ||
       (DAT_14c9647dc <= (int)uVar9)) ||
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(param_1 + 0x4c))))) ||
     (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (*plVar14 == 0)))) {
    uVar11 = 1;
  }
  else {
    if (param_3 <= *(float *)(param_2 + 0x60) + *(float *)(param_2 + 100)) {
      if (ABS(*(float *)(param_1 + 0xd0) - param_3) <= 1e-08) goto LAB_143ac7821;
      *(undefined4 *)(param_1 + 0x7b8) = param_4;
      plVar14 = *(longlong **)(param_1 + 0x40);
      if (plVar14 != (longlong *)0x0) {
        if ((*(uint *)(plVar14 + 0x10) & 8) != 0) {
          fVar1 = *(float *)(param_1 + 0x14);
          fVar2 = *(float *)(param_1 + 0x10);
          fVar3 = *(float *)(param_1 + 0xc);
          uVar9 = *(uint *)(plVar14 + 0x10) & 0xfffffff7;
          *(uint *)(plVar14 + 0x10) = uVar9;
          lVar10 = plVar14[0xb];
          if ((longlong)(int)lVar10 != 0) {
            lVar15 = plVar14[10];
            lVar16 = 0;
            do {
              local_c0 = *(undefined8 *)(lVar15 + lVar16);
              local_b8[0] = FUN_144830b78(local_b8,&DAT_14cb42130);
              local_b0 = 0;
              uStack_a8 = 0;
              piVar12 = (int *)(**(code **)(*plVar14 + 0x58))(plVar14,&local_c0,0);
              if ((piVar12 != (int *)0x0) && (lVar13 = (longlong)*piVar12, lVar13 != -1)) {
                dVar4 = *(double *)(lVar15 + 0x10 + lVar16);
                dVar5 = *(double *)(lVar15 + 0x18 + lVar16);
                lVar6 = plVar14[4];
                *(float *)(lVar6 + lVar13) =
                     (float)(*(double *)(lVar15 + 8 + lVar16) - (double)fVar3 * 65536.0);
                *(float *)(lVar6 + 4 + lVar13) = (float)(dVar4 - (double)fVar2 * 65536.0);
                *(float *)(lVar6 + 8 + lVar13) = (float)(dVar5 - (double)fVar1 * 65536.0);
              }
              if (local_b0 != 0) {
                FUN_1400020a8();
              }
              lVar16 = lVar16 + 0x20;
            } while ((longlong)(int)lVar10 * 0x20 != lVar16);
            uVar9 = *(uint *)(plVar14 + 0x10);
          }
          *(uint *)(plVar14 + 0x10) = uVar9 | 1;
          plVar14 = *(longlong **)(param_1 + 0x40);
        }
        if ((0 < (int)plVar14[0xd]) && ((*(byte *)(plVar14 + 0x10) & 7) != 0)) {
          FUN_14004222e(plVar14);
        }
        *(byte *)(plVar14 + 0x10) = *(byte *)(plVar14 + 0x10) & 0xf8;
      }
      *(float *)(param_1 + 0xd0) = param_3;
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      cVar8 = FUN_1481e5d20(param_2,*(undefined8 *)(param_1 + 0x38));
      if (cVar8 != '\0') {
        cVar8 = FUN_1481e6b5a(param_2,*(undefined4 *)(param_1 + 0xd0),param_1);
        if (cVar8 != '\0') {
          if (*(char *)(param_1 + 8) == '\x01') {
            FUN_144962840(*(undefined8 *)(param_1 + 0x20),param_1,4);
          }
          FUN_1481f51a4(*(undefined8 *)(param_1 + 0x20));
          if ((*(int *)(param_1 + 0x120) != 0) &&
             (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
            cVar8 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x30))();
            if (cVar8 != '\0') {
              if (*(int *)(param_1 + 0x120) == 0) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = *(longlong **)(param_1 + 0x118);
              }
              (**(code **)(*plVar14 + 0x58))();
            }
          }
          goto LAB_143ac7821;
        }
      }
    }
    uVar11 = 0;
  }
  FUN_143ac678c(param_1,uVar11);
LAB_143ac7821:
  if (iVar7 != 0) {
    uVar11 = FUN_14811173e();
    FUN_1481117c2(uVar11);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac7ac0 FUN_143ac7ac0 body=1363 status=ok
// SIG undefined FUN_143ac7ac0(void)

void FUN_143ac7ac0(longlong param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 uVar11;
  bool bVar12;
  float fVar13;
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
  code *local_48;
  ulonglong local_40;
  
  iVar3 = DAT_14cb3a5f8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb3a5f8 != 0) {
    lVar7 = FUN_14811173e();
    if (param_1 == 0) {
      lVar10 = lVar7 + 0x88;
    }
    else {
      lVar10 = FUN_1481f5624(param_1);
    }
    FUN_148121460(lVar7,lVar10);
  }
  FUN_140336cb8(param_1,0);
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FUN_14005a35e(param_1,1);
  }
  lVar7 = DAT_14cb43830;
  if ((((*(int *)(param_1 + 0x4c) == 0) || (uVar1 = *(uint *)(param_1 + 0x48), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x4c))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))) {
    FUN_143ac678c(param_1,1);
    goto LAB_143ac7da9;
  }
  if (*(int *)(param_1 + 0x86c) - 3U < 2) goto LAB_143ac7da9;
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x80) & 2) != 0) {
    FUN_14090ddfa(param_1,CONCAT71((int7)((ulonglong)plVar9 >> 8),2));
    goto LAB_143ac7da9;
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar12 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        bVar12 = DVar4 == DVar5;
      }
      else {
        bVar12 = false;
      }
    }
    uVar6 = (ulonglong)(bVar12 ^ 1);
  }
  if ((((*(int *)(lVar7 + uVar6 * 4) == 1) && (*(int *)(param_1 + 0x4c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0)) &&
      (((int)plVar9[2] == *(int *)(param_1 + 0x4c) &&
       (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
        (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))))))) {
    if (DAT_14cb39ca0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_14638c6c0;
      local_68 = &LAB_14811044c;
      local_70 = &LAB_1407f5cf8;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if ((((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) ==
          DAT_14cb39ca0 + 0x30)) && (plVar9[0x15] != 0)) &&
       (((*(byte *)(plVar9 + 0x119) & 2) != 0 && ((*(byte *)(plVar9 + 0xea) & 1) == 0)))) {
      fVar13 = ABS(*(float *)(plVar9[0x15] + 0x74) + -1.0);
      if (fVar13 <= 1e-08) {
        if ((*(char *)((longlong)plVar9 + 0x8cc) != '\0') && ((*(byte *)(param_1 + 0x794) & 1) == 0)
           ) {
          uVar11 = 0;
          goto LAB_143ac7e54;
        }
      }
      else {
        uVar11 = 1;
        if (*(char *)((longlong)plVar9 + 0x8cc) == '\0') {
LAB_143ac7e54:
          uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1e-08 < fVar13);
          FUN_140c71a02(param_1,uVar6 & 0xffffffff);
          (**(code **)(*plVar9 + 0x3b0))(plVar9,uVar6 & 0xffffffff);
          *(undefined1 *)((longlong)plVar9 + 0x8cc) = uVar11;
        }
      }
    }
  }
  *(float *)(param_1 + 0x7b8) = param_2;
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7c4);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x7c8);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x7cc);
  *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(param_1 + 0x7d8);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x7e0);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x7e8);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x7ec);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0x7f0);
  FUN_1447cea0c(param_1,param_2);
  FUN_143ac72ca(param_1,param_2,0);
  *(float *)(param_1 + 0xd0) = param_2 + *(float *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x4c))) &&
      (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
       (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))))) {
    if (DAT_14cb39ca0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_14638c6c0;
      local_68 = &LAB_14811044c;
      local_70 = &LAB_1407f5cf8;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if (((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) ==
         DAT_14cb39ca0 + 0x30)) &&
       ((((*(byte *)(plVar9 + 0x119) & 1) != 0 && ((*(byte *)((longlong)plVar9 + 0x9e) & 0x10) != 0)
         ) && (((lVar7 = plVar9[0x24], lVar7 == 0 || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) ||
               ((*(byte *)(lVar7 + 0x9f) & 0x40) != 0)))))) {
      if ((char)plVar9[0xf3] == '\0') {
        *(byte *)(plVar9 + 0xf2) = *(byte *)(plVar9 + 0xf2) | 1;
      }
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
    }
  }
LAB_143ac7da9:
  if (iVar3 != 0) {
    uVar8 = FUN_14811173e();
    FUN_1481117c2(uVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ac8014 FUN_143ac8014 body=1666 status=ok
// SIG undefined FUN_143ac8014(void)

void FUN_143ac8014(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStack_168 [32];
  undefined1 **local_148;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120 [8];
  undefined2 local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8 [8];
  undefined2 local_88;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(int *)(param_1 + 0x898) == 0) || (0xfffffffd < *(int *)(param_1 + 0x86c) - 5U))
  goto LAB_143ac8276;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_88 = 0;
  FUN_14474aff8(&local_d8,param_1);
  uVar15 = uStack_d0;
  lVar12 = local_d8;
  local_138 = *(longlong *)(param_1 + 0x878);
  local_130 = 0;
  local_128 = CONCAT44(local_128._4_4_,(int)uStack_d0);
  if ((int)uStack_d0 == 0) {
    local_128 = uStack_d0 & 0xffffffff;
  }
  else {
    FUN_1481f79f8(&local_130,uStack_d0 & 0xffffffff);
    FUN_1481f7a51(local_130,lVar12,uVar15 & 0xffffffff);
  }
  plVar13 = local_c8;
  plVar16 = local_120;
  for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar16 = *plVar13;
    plVar13 = plVar13 + 1;
    plVar16 = plVar16 + 1;
  }
  local_e0 = local_88;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143ac8102;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143ac8107;
      goto LAB_143ac8134;
    }
LAB_143ac8107:
    FUN_1456be786(local_138,&local_130);
  }
  else {
LAB_143ac8102:
    if (iVar5 == 0x10) goto LAB_143ac8107;
LAB_143ac8134:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar12 + 0xc60), iVar5 == 2))
      goto LAB_143ac8107;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143ac8107;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_143ac833f;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_143acaafd);
        }
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar12 + 0x310);
        *(undefined8 *)(lVar12 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar2 = puVar8;
        FUN_140217a48(puVar2);
        puVar9 = (uint *)*puVar2;
LAB_143ac833f:
        puVar17 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar17 + 0x21);
        uVar11 = puVar9[0x12];
        if (puVar14 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar3 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          puVar17 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x21);
          uVar11 = 0;
          if (puVar14 <= puVar9 + 0x4000) {
            uVar11 = 1;
            goto LAB_143ac83bf;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_143ac83bf:
      *(uint **)(puVar9 + 0x10) = puVar14;
      puVar9[0x12] = uVar11;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ae269f8;
      puVar17[0x15] = local_138;
      puVar17[0x16] = local_130;
      local_130 = 0;
      *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar17 + 0xbc) = local_128._4_4_;
      local_128 = 0;
      plVar13 = local_120;
      plVar16 = puVar17 + 0x18;
      for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar16 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar16 = plVar16 + 1;
      }
      *(undefined2 *)(puVar17 + 0x20) = local_e0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
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
      lVar12 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar12 == 0) {
        uVar4 = 1;
        if ((char)uVar15 != '\x06') {
          uVar4 = uVar15;
        }
        uVar15 = uVar4;
        uVar10 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar17[0xf] = uVar10;
      puVar17[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x68,8);
      *local_68 = (longlong)&PTR_LAB_14ae26990;
      local_68[1] = local_138;
      local_68[2] = local_130;
      local_130 = 0;
      *(undefined4 *)(local_68 + 3) = (undefined4)local_128;
      *(undefined4 *)((longlong)local_68 + 0x1c) = local_128._4_4_;
      local_128 = 0;
      plVar13 = local_120;
      plVar16 = local_68 + 4;
      for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar16 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar16 = plVar16 + 1;
      }
      *(undefined2 *)(local_68 + 0xc) = local_e0;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143acc98e;
      }
      local_148 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FNiagaraGiveSystemInstanceTickToRT",&DAT_14cb439a8);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar13 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar13 = local_58;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  FUN_14474ae1f(local_130,local_128 & 0xffffffff);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  FUN_14474ae1f(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_143ac8276:
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac8698 FUN_143ac8698 body=165 status=ok
// SIG undefined FUN_143ac8698(void)

void FUN_143ac8698(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
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
  undefined4 uVar12;
  longlong lVar13;
  
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar13 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar13);
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x38) + 0xb8) +
           (longlong)*(int *)(lVar1 + 200) * 0x48) == param_2) {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x150));
        *(undefined8 *)(lVar1 + 0x188) = *(undefined8 *)(param_3 + 0xc);
        uVar2 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        uVar6 = param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[6];
        uVar9 = param_3[7];
        uVar10 = param_3[9];
        uVar11 = param_3[10];
        uVar12 = param_3[0xb];
        *(undefined4 *)(lVar1 + 0x178) = param_3[8];
        *(undefined4 *)(lVar1 + 0x17c) = uVar10;
        *(undefined4 *)(lVar1 + 0x180) = uVar11;
        *(undefined4 *)(lVar1 + 0x184) = uVar12;
        *(undefined4 *)(lVar1 + 0x168) = uVar6;
        *(undefined4 *)(lVar1 + 0x16c) = uVar7;
        *(undefined4 *)(lVar1 + 0x170) = uVar8;
        *(undefined4 *)(lVar1 + 0x174) = uVar9;
        *(undefined4 *)(lVar1 + 0x158) = uVar2;
        *(undefined4 *)(lVar1 + 0x15c) = uVar3;
        *(undefined4 *)(lVar1 + 0x160) = uVar4;
        *(undefined4 *)(lVar1 + 0x164) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000143ac8736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x150));
        return;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x110) * 0x10 != lVar13);
  }
  return;
}



// FUNCTION 143ac873e FUN_143ac873e body=49 status=ok
// SIG undefined FUN_143ac873e(void)

void FUN_143ac873e(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1414c8733();
    if (param_2 != '\0') {
      FUN_1481f4dac(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 143ac8770 FUN_143ac8770 body=70 status=ok
// SIG undefined FUN_143ac8770(void)

void FUN_143ac8770(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) * 0x18;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143ac87b6 FUN_143ac87b6 body=69 status=ok
// SIG undefined FUN_143ac87b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac87b6(void)

{
  _DAT_14cb43870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac87f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43878,1);
  return;
}



// FUNCTION 143ac87fc FUN_143ac87fc body=2021 status=ok
// SIG undefined FUN_143ac87fc(void)

void FUN_143ac87fc(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  code *pcVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_138 [32];
  code **local_118;
  code *local_108;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x40) == param_2) goto LAB_143ac8bdf;
  *(char *)(param_1 + 0x40) = param_2;
  local_f8 = (longlong *)0x0;
  local_e8 = &PTR_LAB_14ae26be0;
  uStack_e0 = param_1;
  local_108 = (code *)&LAB_143acdc40;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar18 = DAT_14cb3af10 == '\0';
    if (bVar18) {
      DAT_14cb3af10 = '\x01';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_1447d2058(&DAT_14cb3af10);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cb3af08) {
      local_88[0] = local_108;
      local_78 = local_f8;
      local_f8 = (longlong *)0x0;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_48 = 0;
      FUN_1401a96bc(&DAT_14cb3af08,local_88,L"FNiagaraSystemRenderData_SetRenderingEnabled",
                    &DAT_14cb439e4);
LAB_143ac89c3:
      (*(code *)(&PTR_LAB_14a3931f0)[local_48])();
      bVar18 = false;
    }
    else {
      if (DAT_14cb3af18 != 0) {
        local_88[0] = local_108;
        local_78 = local_f8;
        local_f8 = (longlong *)0x0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = local_d8;
        uStack_54 = uStack_d4;
        uStack_50 = uStack_d0;
        uStack_4c = uStack_cc;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        local_48 = 0;
        FUN_1401a98c8(&DAT_14cb3af08,local_88,L"FNiagaraSystemRenderData_SetRenderingEnabled",
                      &DAT_14cb439e4);
        goto LAB_143ac89c3;
      }
      bVar18 = true;
    }
    LOCK();
    bVar19 = DAT_14cb3af10 == '\x01';
    if (bVar19) {
      DAT_14cb3af10 = '\0';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_14008cdb0(&DAT_14cb3af10);
    }
    if (bVar18) {
      local_c8 = local_108;
      local_b8 = local_f8;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      local_98 = local_d8;
      uStack_94 = uStack_d4;
      uStack_90 = uStack_d0;
      uStack_8c = uStack_cc;
      if (local_108 != (code *)0x0) goto LAB_143ac8a34;
      pcVar14 = (code *)0x0;
      goto LAB_143ac8a3d;
    }
  }
  else {
    local_c8 = (code *)&LAB_143acdc40;
    local_b8 = (longlong *)0x0;
    local_a8 = &PTR_LAB_14ae26be0;
    uStack_a0 = param_1;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
LAB_143ac8a34:
    local_108 = (code *)0x0;
    pcVar14 = local_c8;
LAB_143ac8a3d:
    local_f8 = (longlong *)0x0;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar16 = *(int *)(lVar4 + 0xc60);
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    if (DAT_14c86a9fc == 0) {
      if (iVar16 != 2) {
        if (iVar16 != 1) goto LAB_143ac8a60;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        pcVar14 = local_c8;
        if (DVar7 == DVar8) goto LAB_143ac8a65;
        goto LAB_143ac8a9f;
      }
LAB_143ac8a65:
      plVar12 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar12 = &local_a8;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      (*pcVar14)(uVar9);
    }
    else {
LAB_143ac8a60:
      if (iVar16 == 0x10) goto LAB_143ac8a65;
LAB_143ac8a9f:
      if (DAT_14ca9a438 == '\0') {
        pcVar14 = local_c8;
        if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar4 + 0xc60), iVar16 == 2))
        goto LAB_143ac8a65;
        if (iVar16 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          pcVar14 = local_c8;
          if (DVar7 == DVar8) goto LAB_143ac8a65;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143ac8ca8;
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar6 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar6 | 1;
            __tlregdtor(&LAB_143acaafd);
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
LAB_143ac8ca8:
          puVar15 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar13 = (uint *)(puVar15 + 0x1e);
          uVar6 = puVar11[0x12];
          if (puVar13 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar6 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar6) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar15 = (undefined8 *)((longlong)puVar11 + 0x67U & 0xfffffffffffffff0);
            puVar13 = (uint *)(puVar15 + 0x1e);
            uVar6 = 0;
            if (puVar13 <= puVar11 + 0x4000) {
              uVar6 = 1;
              goto LAB_143ac8d28;
            }
          }
        }
        uVar6 = uVar6 + 1;
LAB_143ac8d28:
        *(uint **)(puVar11 + 0x10) = puVar13;
        puVar11[0x12] = uVar6;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14ae26bd0;
        puVar15[0x16] = local_c8;
        puVar15[0x18] = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(puVar15 + 0x1c) = local_98;
        *(undefined4 *)((longlong)puVar15 + 0xe4) = uStack_94;
        *(undefined4 *)(puVar15 + 0x1d) = uStack_90;
        *(undefined4 *)((longlong)puVar15 + 0xec) = uStack_8c;
        *(undefined4 *)(puVar15 + 0x1a) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar15 + 0xd4) = local_a8._4_4_;
        *(undefined4 *)(puVar15 + 0x1b) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar15 + 0xdc) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar6 = DAT_14c7585c8 >> 10 & 3;
          iVar16 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar16 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar17 != '\x06') {
            uVar5 = uVar17;
          }
          uVar17 = uVar5;
          uVar9 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar9 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar9;
        puVar15[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar16;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_78 = (longlong)&PTR_LAB_14ae26bb0;
        local_78[2] = (longlong)local_c8;
        local_78[4] = (longlong)local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(local_78 + 8) = local_98;
        *(undefined4 *)((longlong)local_78 + 0x44) = uStack_94;
        *(undefined4 *)(local_78 + 9) = uStack_90;
        *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_8c;
        *(undefined4 *)(local_78 + 6) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0x34) = local_a8._4_4_;
        *(undefined4 *)(local_78 + 7) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
          local_88[0] = FUN_143acd9fc;
        }
        local_118 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraSystemRenderData_SetRenderingEnabled",&DAT_14cb439e4)
        ;
        if (local_88[0] != (code *)0x0) {
          plVar12 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar12 = (longlong *)&local_68;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
    if (local_c8 != (code *)0x0) {
      plVar12 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar12 = local_b8;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (local_108 != (code *)0x0) {
    plVar12 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar12 = local_f8;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_143ac8bdf:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac8fe2 FUN_143ac8fe2 body=69 status=ok
// SIG undefined FUN_143ac8fe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac8fe2(void)

{
  _DAT_14cb43880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac9024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43888,1);
  return;
}



// FUNCTION 143ac9027 FUN_143ac9027 body=69 status=ok
// SIG undefined FUN_143ac9027(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac9027(void)

{
  _DAT_14cb43898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac9069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438a0,1);
  return;
}



// FUNCTION 143ac906c FUN_143ac906c body=69 status=ok
// SIG undefined FUN_143ac906c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac906c(void)

{
  _DAT_14cb438a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac90ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438b0,1);
  return;
}



// FUNCTION 143ac90b1 FUN_143ac90b1 body=69 status=ok
// SIG undefined FUN_143ac90b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac90b1(void)

{
  _DAT_14cb438b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac90f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438c0,1);
  return;
}



// FUNCTION 143ac90f6 FUN_143ac90f6 body=69 status=ok
// SIG undefined FUN_143ac90f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac90f6(void)

{
  _DAT_14cb438c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac9138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438d0,1);
  return;
}



// FUNCTION 143ac913b FUN_143ac913b body=69 status=ok
// SIG undefined FUN_143ac913b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac913b(void)

{
  _DAT_14cb438d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac917d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438e0,1);
  return;
}



// FUNCTION 143ac9180 FUN_143ac9180 body=69 status=ok
// SIG undefined FUN_143ac9180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac9180(void)

{
  _DAT_14cb438e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac91c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb438f0,1);
  return;
}



// FUNCTION 143ac91c5 FUN_143ac91c5 body=69 status=ok
// SIG undefined FUN_143ac91c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac91c5(void)

{
  _DAT_14cb438f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac9207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43900,1);
  return;
}



// FUNCTION 143ac920a FUN_143ac920a body=69 status=ok
// SIG undefined FUN_143ac920a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac920a(void)

{
  _DAT_14cb43910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43918,1);
  return;
}



// FUNCTION 143ac924f FUN_143ac924f body=69 status=ok
// SIG undefined FUN_143ac924f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac924f(void)

{
  _DAT_14cb43920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac9291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43928,1);
  return;
}



// FUNCTION 143ac9294 FUN_143ac9294 body=69 status=ok
// SIG undefined FUN_143ac9294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac9294(void)

{
  _DAT_14cb43938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac92d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43940,1);
  return;
}



// FUNCTION 143ac92da FUN_143ac92da body=273 status=ok
// SIG undefined FUN_143ac92da(void)

longlong *
FUN_143ac92da(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 0x10);
  param_1[2] = *(longlong *)(param_2 + 0x28);
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x400000000;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x400000000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43958) {
    FUN_144b3d300(&DAT_14cb43958);
    if (DAT_14cb43958 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb43950 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"sg.EffectsQuality",1);
      _Init_thread_footer(&DAT_14cb43958);
    }
  }
  uVar2 = (**(code **)(*DAT_14cb43950 + 0xb0))();
  *(undefined4 *)(param_1 + 6) = uVar2;
  uVar1 = 0;
  if ((param_7 != '\0') && (DAT_14c762a04 != 0)) {
    uVar1 = FUN_1447e0190();
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = uVar1;
  return param_1;
}



// FUNCTION 143ac93ec FUN_143ac93ec body=649 status=ok
// SIG undefined FUN_143ac93ec(void)

undefined8 * FUN_143ac93ec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffc0 | 0x30;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000002;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x14] = &DAT_14cb3db48;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000002;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x2b] = &DAT_14cb3db48;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000002;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x42] = &DAT_14cb3db48;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0xffffffff00000002;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x59] = &DAT_14cb3db48;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xffffffff00000002;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x70] = &DAT_14cb3db48;
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  memset(param_1 + 0x86,0,0x100);
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x555) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55d) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  return param_1;
}



// FUNCTION 143ac9676 FUN_143ac9676 body=2624 status=ok
// SIG undefined FUN_143ac9676(void)

void FUN_143ac9676(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar16 = (longlong)*(int *)(param_2 + 0x98);
  if (lVar16 != 0) {
    plVar1 = (longlong *)(param_2 + 0x70);
    if (*(char *)(param_2 + 0x34) == '\x01') {
      local_58 = (undefined1 *)0x0;
      local_50 = 0x400000000;
      if ((*(byte *)(param_1 + 0x30) & 0x20) != 0) {
        puVar12 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar8 = (uint *)*puVar12;
        if (puVar8 != (uint *)0x0) goto LAB_143ac9819;
LAB_143ac9799:
        uVar4 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar4 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar4 | 1;
          __tlregdtor(&LAB_143acaafd);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar7 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        *puVar12 = puVar7;
        FUN_140217a48(puVar12);
        puVar8 = (uint *)*puVar12;
LAB_143ac9819:
        uVar17 = *(longlong *)(puVar8 + 0x10) + 7;
        uVar4 = puVar8[0x12];
LAB_143ac9836:
        puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
        if (puVar18 + 0x1e <= puVar8 + 0x4000) {
          *(undefined8 **)(puVar8 + 0x10) = puVar18 + 0x1e;
          puVar8[0x12] = uVar4 + 1;
          FUN_1447247dc(puVar18,param_2 + 0x38);
          *puVar18 = &PTR_FUN_14ae26c38;
          uVar9 = *(undefined8 *)(param_2 + 0x10);
          puVar18[0x16] = param_1;
          puVar18[0x1b] = 0;
          iVar5 = *(int *)(param_2 + 0x98);
          plVar6 = *(longlong **)(param_2 + 0x90);
          *(int *)(puVar18 + 0x1c) = iVar5;
          if ((longlong)iVar5 == 0) {
            *(undefined4 *)((longlong)puVar18 + 0xe4) = 4;
          }
          else {
            if (plVar6 == (longlong *)0x0) {
              plVar6 = plVar1;
            }
            FUN_144b38ea8(puVar18 + 0x17,iVar5);
            puVar12 = (undefined8 *)puVar18[0x1b];
            if ((undefined8 *)puVar18[0x1b] == (undefined8 *)0x0) {
              puVar12 = puVar18 + 0x17;
            }
            memcpy(puVar12,plVar6,(longlong)iVar5 << 3);
          }
          puVar18[0x1d] = uVar9;
          if (((int)DAT_14c7629d4 < 0) ||
             ((uVar4 = DAT_14c7629d4, DAT_14caf6060 < 1 && (DAT_14caf6064 < 1)))) {
            uVar4 = DAT_14cb435a0;
          }
          uVar10 = 3;
          if ((int)uVar4 < 3) {
            uVar10 = uVar4;
          }
          uVar4 = 0;
          if (0 < (int)uVar10) {
            uVar4 = uVar10;
          }
          uVar17 = (ulonglong)uVar4;
          uVar4 = (&DAT_14cb43480)[uVar17 * 0x10];
          if (((uVar4 == 0x400) && (DAT_14c7585d8 == 0)) ||
             ((uVar4 == 0x800 && (DAT_14c7585dc == 0)))) {
            uVar4 = *(uint *)(&DAT_14cb43488 + uVar17 * 0x40);
          }
          else {
            uVar4 = uVar4 | (&DAT_14cb43484)[uVar17 * 0x10];
          }
          *(uint *)(puVar18 + 0x15) = uVar4 | 0xff;
          uVar10 = uVar4 >> 10 & 3;
          if ((uVar4 >> 9 & 1) == 0 || uVar10 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
          }
          else {
            uVar17 = 2;
          }
          if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
          }
          puVar18[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar18[9] = puVar18;
          puVar18[10] = puVar18;
          lVar16 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar16 == 0) {
            uVar3 = 1;
            if ((char)uVar17 != '\x06') {
              uVar3 = uVar17;
            }
            uVar17 = uVar3;
            uVar9 = 0;
          }
          else {
            if ((char)uVar17 == '\x06') {
              uVar17 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
            }
            uVar9 = *(undefined8 *)(lVar16 + 0x30);
          }
          puVar18[0xf] = uVar9;
          puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
          *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
          if (puVar18 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
            UNLOCK();
          }
          local_79 = 1;
          FUN_1447439e4(puVar18);
          plVar6 = *(longlong **)(param_2 + 0x90);
          if (*(longlong **)(param_2 + 0x90) == (longlong *)0x0) {
            plVar6 = plVar1;
          }
          iVar5 = *(int *)(param_2 + 0x98);
          if ((longlong)iVar5 != 0) {
            lVar16 = 0;
            do {
              puVar12 = *(undefined8 **)(*(longlong *)((longlong)plVar6 + lVar16) + 0x7a8);
              if (puVar12 != puVar18) {
                *(undefined8 **)(*(longlong *)((longlong)plVar6 + lVar16) + 0x7a8) = puVar18;
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                if (puVar12 != (undefined8 *)0x0) {
                  LOCK();
                  piVar2 = (int *)(puVar12 + 1);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)*puVar12)(puVar12,1);
                  }
                }
              }
              lVar16 = lVar16 + 8;
            } while ((longlong)iVar5 * 8 != lVar16);
          }
          uVar17 = local_50;
          lVar16 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_14476a5c8(local_78,uVar17 & 0xffffffff);
          }
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_78;
          }
          *(undefined8 **)(puVar13 + lVar16 * 8) = puVar18;
          if (puVar18 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
            UNLOCK();
            LOCK();
            piVar2 = (int *)(puVar18 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar18)(puVar18,1);
            }
          }
          goto LAB_143ac9b91;
        }
        *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
        LOCK();
        uVar10 = *puVar8;
        *puVar8 = *puVar8 + uVar4 + 1;
        UNLOCK();
        if ((uVar10 ^ uVar4) == 0xffffffff) goto code_r0x000143ac9858;
        goto LAB_143ac9799;
      }
      plVar6 = *(longlong **)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x90) == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      lVar19 = 0;
      do {
        FUN_14005bd36(*(undefined8 *)((longlong)plVar6 + lVar19),1);
        lVar19 = lVar19 + 8;
      } while (lVar16 * 8 != lVar19);
LAB_143ac9b91:
      uVar17 = local_50;
      plVar6 = *(longlong **)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x90) == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      lVar16 = *plVar6;
      lVar19 = (longlong)(int)local_50;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_14476a5c8(local_78,uVar17 & 0xffffffff);
      }
      puVar13 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar13 = local_78;
      }
      lVar16 = *(longlong *)(lVar16 + 0x7a0);
      *(longlong *)(puVar13 + lVar19 * 8) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      puVar12 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar8 = (uint *)*puVar12;
      if (puVar8 != (uint *)0x0) goto LAB_143ac9c86;
      while( true ) {
        uVar4 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar4 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar4 | 1;
          __tlregdtor(&LAB_143acaafd);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar7 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        *puVar12 = puVar7;
        FUN_140217a48(puVar12);
        puVar8 = (uint *)*puVar12;
LAB_143ac9c86:
        puVar18 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar18 + 0x1e);
        uVar4 = puVar8[0x12];
        if (puVar15 <= puVar8 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
          LOCK();
          uVar10 = *puVar8;
          *puVar8 = *puVar8 + uVar4 + 1;
          UNLOCK();
          if ((uVar10 ^ uVar4) != 0xffffffff) break;
          puVar8 = (uint *)*puVar12;
          *puVar8 = 0xffffffff;
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar12 = puVar8;
          puVar18 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x1e);
          uVar4 = 0;
          if (puVar15 <= puVar8 + 0x4000) {
            uVar4 = 1;
            goto LAB_143ac9d06;
          }
        }
      }
      uVar4 = uVar4 + 1;
LAB_143ac9d06:
      *(uint **)(puVar8 + 0x10) = puVar15;
      puVar8[0x12] = uVar4;
      FUN_1447247dc(puVar18,local_78);
      *puVar18 = &PTR_FUN_14ae26c80;
      puVar18[0x15] = param_1;
      puVar12 = puVar18 + 0x16;
      puVar18[0x1a] = 0;
      iVar5 = *(int *)(param_2 + 0x98);
      plVar6 = *(longlong **)(param_2 + 0x90);
      *(int *)(puVar18 + 0x1b) = iVar5;
      if ((longlong)iVar5 == 0) {
        *(undefined4 *)((longlong)puVar18 + 0xdc) = 4;
        lVar16 = param_1;
      }
      else {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        FUN_144b38ea8(puVar12,iVar5);
        puVar14 = (undefined8 *)puVar18[0x1a];
        if ((undefined8 *)puVar18[0x1a] == (undefined8 *)0x0) {
          puVar14 = puVar12;
        }
        memcpy(puVar14,plVar6,(longlong)iVar5 << 3);
        lVar16 = puVar18[0x15];
      }
      iVar11 = 0;
      iVar5 = 0;
      if (((((*(longlong *)(lVar16 + 0x558) != 0) && (iVar5 = iVar11, DAT_14c7627fc != 0)) &&
           (DAT_14c7627f8 != 0)) &&
          ((DAT_14ca84d96 == '\x01' && (*(longlong *)(lVar16 + 0x10) != 0)))) &&
         (uVar4 = *(uint *)(*(longlong *)(lVar16 + 0x10) + 0x4f8), (uVar4 & 0x10) != 0)) {
        if (DAT_14c762a10 == 0) {
          iVar11 = 2;
          iVar5 = 1;
        }
        else {
          bVar20 = (*(uint *)(lVar16 + 0x30) & 8) == 0;
          iVar5 = (uint)bVar20 * 2 + 1;
          iVar11 = (uint)bVar20 * 2 + 2;
        }
        if (DAT_14c762a0c != 0 && (char)((uVar4 & 2) >> 1) == '\0') {
          iVar5 = iVar11;
        }
      }
      *(int *)(puVar18 + 0x1c) = iVar5;
      puVar18[0x1d] = 0;
      if (((*(longlong *)(param_1 + 0x28) == 0) || (DAT_14caf6068 < 1)) ||
         ((DAT_14c7616fc & 1) == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_14005c7aa();
      }
      puVar18[0x1d] = uVar9;
      if (0 < *(int *)(puVar18 + 0x1b)) {
        lVar16 = 0;
        lVar19 = 0;
        do {
          puVar14 = (undefined8 *)puVar18[0x1a];
          if ((undefined8 *)puVar18[0x1a] == (undefined8 *)0x0) {
            puVar14 = puVar12;
          }
          *(longlong *)(*(longlong *)((longlong)puVar14 + lVar16) + 0x7b0) =
               (longlong)puVar14 + lVar16;
          lVar19 = lVar19 + 1;
          lVar16 = lVar16 + 8;
        } while (lVar19 < *(int *)(puVar18 + 0x1b));
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar16 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar16 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar16 + 0x30);
      }
      puVar18[0xf] = uVar9;
      puVar18[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar18 + 0x1c) = 3;
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      local_79 = 1;
      FUN_1447439e4(puVar18);
      lVar16 = *(longlong *)(param_2 + 0x68);
      iVar5 = *(int *)(lVar16 + 0x28);
      *(uint *)(lVar16 + 0x28) = iVar5 + 1U;
      if (*(uint *)(lVar16 + 0x2c) < iVar5 + 1U) {
        FUN_14476a5c8(lVar16,iVar5);
      }
      lVar19 = *(longlong *)(lVar16 + 0x20);
      if (*(longlong *)(lVar16 + 0x20) == 0) {
        lVar19 = lVar16;
      }
      *(undefined8 **)(lVar19 + (longlong)iVar5 * 8) = puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar2 = (int *)(puVar18 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
      puVar13 = local_78;
      if (local_58 != (undefined1 *)0x0) {
        puVar13 = local_58;
      }
      FUN_144717c65(puVar13,local_50 & 0xffffffff);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x90) == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      lVar19 = 0;
      do {
        FUN_14005bd36(*(undefined8 *)((longlong)plVar6 + lVar19),1);
        lVar19 = lVar19 + 8;
      } while (lVar16 * 8 != lVar19);
    }
    *(undefined4 *)(param_2 + 0x98) = 0;
    if (*(int *)(param_2 + 0x9c) < 0) {
      FUN_1481f8662(plVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143ac9858:
  puVar8 = (uint *)*puVar12;
  *puVar8 = 0xffffffff;
  *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
  puVar8[0x12] = 0;
  *puVar12 = puVar8;
  uVar17 = (longlong)puVar8 + 0x5f;
  uVar4 = 0;
  goto LAB_143ac9836;
}



// FUNCTION 143aca0b8 FUN_143aca0b8 body=1281 status=ok
// SIG undefined FUN_143aca0b8(void)

void FUN_143aca0b8(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 8);
  if (iVar2 != 0) {
    lVar7 = param_1 + 0x348;
    lVar5 = *(longlong *)(param_1 + 0x358);
    if (*(longlong *)(param_1 + 0x358) == 0) {
      lVar5 = lVar7;
    }
    iVar3 = *(int *)(param_1 + 0x360);
    if ((longlong)iVar3 != 0) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar5 + lVar6);
        if (puVar4 != *(undefined8 **)(param_1 + 0x338)) {
          LOCK();
          bVar8 = *(int *)(puVar4 + 1) == 0;
          if (bVar8) {
            *(int *)(puVar4 + 1) = -1;
          }
          UNLOCK();
          if (bVar8) goto LAB_143aca281;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar3 * 8 != lVar6);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x198,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_14ade2d80;
    puVar4[2] = param_1 + 0x2c0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0xffffffff00000000;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x84) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    *(undefined8 *)((longlong)puVar4 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar4 + 0xb4) = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    *(undefined8 *)((longlong)puVar4 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x114) = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    *(undefined8 *)((longlong)puVar4 + 300) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x134) = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    *(undefined4 *)(puVar4 + 0x30) = 1;
    puVar4[0x31] = 0;
    puVar4[0x32] = 0;
    iVar3 = *(int *)(param_1 + 0x360);
    *(uint *)(param_1 + 0x360) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x364) < iVar3 + 1U) {
      FUN_140e69270(lVar7,iVar3);
    }
    if (*(longlong *)(param_1 + 0x358) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x358);
    }
    *(undefined8 **)(lVar7 + (longlong)iVar3 * 8) = puVar4;
    LOCK();
    if (*(int *)(puVar4 + 1) == 0) {
      *(int *)(puVar4 + 1) = -1;
    }
    UNLOCK();
LAB_143aca281:
    *(undefined8 **)(param_1 + 0x340) = puVar4;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    lVar7 = *(longlong *)(param_1 + 0x340);
    if (*(int *)(lVar7 + 0x54) < 0) {
      *(undefined4 *)(lVar7 + 0x50) = 0;
      FUN_14481578e(lVar7 + 0x48,0);
    }
    else {
      *(undefined4 *)(lVar7 + 0x50) = 0;
    }
    lVar7 = param_1 + 0x400;
    lVar5 = *(longlong *)(param_1 + 0x410);
    if (*(longlong *)(param_1 + 0x410) == 0) {
      lVar5 = lVar7;
    }
    iVar3 = *(int *)(param_1 + 0x418);
    if ((longlong)iVar3 != 0) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar5 + lVar6);
        if (puVar4 != *(undefined8 **)(param_1 + 0x3f0)) {
          LOCK();
          bVar8 = *(int *)(puVar4 + 1) == 0;
          if (bVar8) {
            *(int *)(puVar4 + 1) = -1;
          }
          UNLOCK();
          if (bVar8) goto LAB_143aca41f;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar3 * 8 != lVar6);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x198,0x10);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_14ade2d80;
    puVar4[2] = param_1 + 0x378;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0xffffffff00000000;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x84) = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    *(undefined8 *)((longlong)puVar4 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar4 + 0xb4) = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    *(undefined8 *)((longlong)puVar4 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x114) = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    *(undefined8 *)((longlong)puVar4 + 300) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x134) = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    *(undefined4 *)(puVar4 + 0x30) = 1;
    puVar4[0x31] = 0;
    puVar4[0x32] = 0;
    iVar3 = *(int *)(param_1 + 0x418);
    *(uint *)(param_1 + 0x418) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x41c) < iVar3 + 1U) {
      FUN_140e69270(lVar7,iVar3);
    }
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x410);
    }
    *(undefined8 **)(lVar7 + (longlong)iVar3 * 8) = puVar4;
    LOCK();
    if (*(int *)(puVar4 + 1) == 0) {
      *(int *)(puVar4 + 1) = -1;
    }
    UNLOCK();
LAB_143aca41f:
    *(undefined8 **)(param_1 + 0x3f8) = puVar4;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    lVar7 = *(longlong *)(param_1 + 0x3f8);
    if (*(int *)(lVar7 + 0x54) < 0) {
      *(undefined4 *)(lVar7 + 0x50) = 0;
      FUN_14481578e(lVar7 + 0x48,0);
    }
    else {
      *(undefined4 *)(lVar7 + 0x50) = 0;
    }
    FUN_1447a955c(param_1 + 0x2c0,iVar2,0);
    FUN_1447a955c(param_1 + 0x378,iVar2,0);
    local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x4b0);
    local_80 = &local_78;
    local_70 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4b8);
    local_60 = &local_90;
    local_98 = &local_58;
    local_58 = 0;
    local_50 = 0;
    local_68 = FUN_143ace5b8;
    local_a0 = 1;
    local_90 = param_2;
    local_88 = param_1;
    FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(*(longlong *)(param_2 + 0x18) + 8),1);
    *(int *)(*(longlong *)(param_1 + 0x340) + 0x120) = iVar2;
    *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x120) = iVar2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x340) + 8);
    LOCK();
    if (*piVar1 == -1) {
      *piVar1 = 0;
    }
    UNLOCK();
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x340);
    *(undefined8 *)(param_1 + 0x340) = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3f8) + 8);
    LOCK();
    if (*piVar1 == -1) {
      *piVar1 = 0;
    }
    UNLOCK();
    *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0x3f8);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aca5ba FUN_143aca5ba body=1233 status=ok
// SIG undefined FUN_143aca5ba(void)

void FUN_143aca5ba(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong local_118;
  longlong local_110 [2];
  undefined8 local_100;
  undefined8 local_f8 [12];
  longlong local_98;
  undefined8 local_90;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 8);
  iVar3 = *(int *)(param_2 + 0x2c);
  lVar4 = *(longlong *)(param_2 + 0x20);
  lVar9 = lVar4 + 0x88;
  lVar10 = *(longlong *)(lVar4 + 0x98);
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    lVar10 = lVar9;
  }
  iVar12 = *(int *)(lVar4 + 0xa0);
  if ((longlong)iVar12 != 0) {
    lVar11 = 0;
    do {
      puVar8 = *(undefined8 **)(lVar10 + lVar11);
      if (puVar8 != *(undefined8 **)(lVar4 + 0x78)) {
        LOCK();
        bVar13 = *(int *)(puVar8 + 1) == 0;
        if (bVar13) {
          *(int *)(puVar8 + 1) = -1;
        }
        UNLOCK();
        if (bVar13) goto LAB_143aca797;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar12 * 8 != lVar11);
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x198,0x10);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR_FUN_14ade2d80;
  puVar8[2] = lVar4;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0xffffffff00000000;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x84) = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  *(undefined8 *)((longlong)puVar8 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar8 + 0xb4) = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  *(undefined8 *)((longlong)puVar8 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x114) = 0;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  *(undefined8 *)((longlong)puVar8 + 300) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x134) = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 0;
  puVar8[0x2f] = 0;
  *(undefined4 *)(puVar8 + 0x30) = 1;
  puVar8[0x31] = 0;
  puVar8[0x32] = 0;
  lVar10 = (longlong)*(int *)(lVar4 + 0xa0);
  uVar7 = *(int *)(lVar4 + 0xa0) + 1;
  *(uint *)(lVar4 + 0xa0) = uVar7;
  if (*(uint *)(lVar4 + 0xa4) < uVar7) {
    local_118 = lVar10;
    FUN_140e69270(lVar9,lVar10);
    lVar10 = local_118;
  }
  if (*(longlong *)(lVar4 + 0x98) != 0) {
    lVar9 = *(longlong *)(lVar4 + 0x98);
  }
  *(undefined8 **)(lVar9 + lVar10 * 8) = puVar8;
  LOCK();
  if (*(int *)(puVar8 + 1) == 0) {
    *(int *)(puVar8 + 1) = -1;
  }
  UNLOCK();
LAB_143aca797:
  *(undefined8 **)(lVar4 + 0x80) = puVar8;
  *(undefined4 *)(puVar8 + 0x24) = 0;
  lVar9 = *(longlong *)(lVar4 + 0x80);
  if (*(int *)(lVar9 + 0x54) < 0) {
    *(undefined4 *)(lVar9 + 0x50) = 0;
    FUN_14481578e(lVar9 + 0x48,0);
  }
  else {
    *(undefined4 *)(lVar9 + 0x50) = 0;
  }
  FUN_1447a955c(*(undefined8 *)(param_2 + 0x20),iVar2);
  *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80) + 0x120) = iVar2;
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x18))();
  if (cVar6 == '\0') {
    lVar9 = (longlong)(int)(*(longlong **)(param_2 + 0x18))[1];
    if (lVar9 != 0) {
      lVar4 = **(longlong **)(param_2 + 0x18);
      lVar10 = 0;
      do {
        lVar11 = *(longlong *)(lVar4 + lVar10);
        if (*(int *)(lVar11 + 0x86c) != 4) {
          *(undefined4 *)(lVar11 + 0x86c) = 4;
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
    lVar9 = *(longlong *)(param_2 + 0x20);
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x80) + 8);
    LOCK();
    if (*piVar1 == -1) {
      *piVar1 = 0;
    }
    UNLOCK();
    *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar9 + 0x80);
    *(undefined8 *)(lVar9 + 0x80) = 0;
  }
  else {
    iVar12 = iVar2 - iVar3;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x28))
              (*(longlong **)(param_1 + 0x430),*(undefined8 *)(param_2 + 0x18));
    local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_144966a0a(*(undefined8 *)(param_1 + 0x430),0,*(undefined8 *)(param_2 + 0x20),iVar12);
    local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_144966a0a(*(undefined8 *)(param_1 + 0x430),1,param_1 + 0x2c0,iVar12);
    local_98 = 0;
    local_90 = 0xc00000000;
    local_58 = 0;
    local_50 = 0xc00000000;
    FUN_144b38724((ulonglong)
                  ((*(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x18) + 0x790) & 1) << 5) +
                  *(longlong *)**(undefined8 **)(param_2 + 0x18) + 0x270,param_1 + 0x430);
    local_128 = local_f8;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x20))
              (*(longlong **)(param_1 + 0x430),0,*(undefined4 *)(param_2 + 0x28),iVar3);
    if ((DAT_14cb43890 != 0) || ((*(byte *)(*(longlong *)(param_2 + 8) + 0x60) & 1) != 0)) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x80);
      local_100 = 0;
      FUN_140056680(local_110,L"System Dataset - Post Spawn");
      local_128 = &local_100;
      FUN_143a774ea(uVar5,0,iVar2,local_110);
      if (local_110[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x338);
      local_100 = 0;
      FUN_140056680(local_110,L"Spawn Instance Parameter Data");
      local_128 = &local_100;
      FUN_143a774ea(uVar5,0,iVar2,local_110);
      if (local_110[0] != 0) {
        FUN_1400020a8();
      }
    }
    lVar9 = *(longlong *)(param_2 + 0x20);
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x80) + 8);
    LOCK();
    if (*piVar1 == -1) {
      *piVar1 = 0;
    }
    UNLOCK();
    *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar9 + 0x80);
    *(undefined8 *)(lVar9 + 0x80) = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acaaee FUN_143acaaee body=15 status=ok
// SIG undefined FUN_143acaaee(void)

void FUN_143acaaee(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143acab46 FUN_143acab46 body=12 status=ok
// SIG undefined FUN_143acab46(void)

void FUN_143acab46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acab4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acab52 FUN_143acab52 body=29 status=ok
// SIG undefined FUN_143acab52(void)

undefined8 FUN_143acab52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acab70 FUN_143acab70 body=282 status=ok
// SIG undefined FUN_143acab70(void)

undefined8 * FUN_143acab70(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acac8a FUN_143acac8a body=85 status=ok
// SIG undefined FUN_143acac8a(void)

ulonglong FUN_143acac8a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acacd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143acace0 FUN_143acace0 body=323 status=ok
// SIG undefined FUN_143acace0(void)

void FUN_143acace0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  
  lVar3 = *param_1;
  *(int *)(lVar3 + 0x10) = (int)param_1[1];
  *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_14011fb0c(lVar3 + 0x20);
  if ((int)param_1[3] < 1) {
    return;
  }
  FUN_140661c88(lVar3 + 0x20,param_2,L"NiagaraSimCache",4,(int)param_1[3],0x1c,1,0);
  uVar2 = *(undefined4 *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0,uVar2,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,(void *)param_1[2],(ulonglong)*(uint *)(lVar3 + 0x30));
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143acaddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 143acae34 FUN_143acae34 body=29 status=ok
// SIG undefined FUN_143acae34(void)

void FUN_143acae34(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143acae52 FUN_143acae52 body=57 status=ok
// SIG undefined FUN_143acae52(void)

undefined8 * FUN_143acae52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae26590;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acae8c FUN_143acae8c body=282 status=ok
// SIG undefined FUN_143acae8c(void)

undefined8 * FUN_143acae8c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acafa6 FUN_143acafa6 body=99 status=ok
// SIG undefined FUN_143acafa6(void)

void FUN_143acafa6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143acace0(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acafff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acb00a FUN_143acb00a body=29 status=ok
// SIG undefined FUN_143acb00a(void)

undefined8 FUN_143acb00a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acb03c FUN_143acb03c body=85 status=ok
// SIG undefined FUN_143acb03c(void)

void FUN_143acb03c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26620;
  return;
}



// FUNCTION 143acb092 FUN_143acb092 body=85 status=ok
// SIG undefined FUN_143acb092(void)

void FUN_143acb092(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26620;
  return;
}



// FUNCTION 143acb0e8 FUN_143acb0e8 body=118 status=ok
// SIG undefined FUN_143acb0e8(void)

void FUN_143acb0e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae26620;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143acb14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143acb164 FUN_143acb164 body=16 status=ok
// SIG undefined FUN_143acb164(void)

undefined1 FUN_143acb164(void)

{
  FUN_143acb174();
  return 1;
}



// FUNCTION 143acb174 FUN_143acb174 body=130 status=ok
// SIG undefined FUN_143acb174(void)

ulonglong FUN_143acb174(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  uVar1 = FUN_14786402d();
  do {
    uVar2 = FUN_1401cfad2(uVar1,local_30,lVar3);
    if ((-1 < DAT_14c7629d4) && (uVar2 = (ulonglong)DAT_14caf6060, (int)DAT_14caf6060 < 1)) {
      uVar2 = (ulonglong)DAT_14caf6064;
    }
    if (local_30[0] != 0) {
      uVar2 = FUN_1400020a8();
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acb1f8 FUN_143acb1f8 body=29 status=ok
// SIG undefined FUN_143acb1f8(void)

undefined8 FUN_143acb1f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acb22a FUN_143acb22a body=85 status=ok
// SIG undefined FUN_143acb22a(void)

void FUN_143acb22a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26690;
  return;
}



// FUNCTION 143acb280 FUN_143acb280 body=85 status=ok
// SIG undefined FUN_143acb280(void)

void FUN_143acb280(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26690;
  return;
}



// FUNCTION 143acb2d6 FUN_143acb2d6 body=118 status=ok
// SIG undefined FUN_143acb2d6(void)

void FUN_143acb2d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae26690;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143acb33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143acb354 FUN_143acb354 body=19 status=ok
// SIG undefined FUN_143acb354(void)

undefined1 FUN_143acb354(undefined8 param_1,undefined8 param_2)

{
  FUN_143acb368(param_2);
  return 1;
}



// FUNCTION 143acb368 FUN_143acb368 body=194 status=ok
// SIG undefined FUN_143acb368(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143acb368(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  
  if ((int)param_1[1] < 1) {
switchD_143acb3a6_caseD_0:
    _DAT_14cb435a0 = &DAT_200000002;
    _DAT_14cb435a8 = &DAT_200000002;
    _DAT_14cb435b0 = &DAT_200000002;
    _DAT_14cb435b8 = &DAT_200000002;
    DAT_14c7629d8 = 1;
    return;
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)*param_1;
  }
  iVar1 = _wtoi(_Str);
  switch(iVar1) {
  case 0:
    goto switchD_143acb3a6_caseD_0;
  case 1:
    DAT_14c7629d8 = 1;
    break;
  case 2:
    DAT_14c7629d8 = 0;
    break;
  case 3:
    _DAT_14cb435a0 = &DAT_200000002;
    _DAT_14cb435a8 = (undefined1 *)CONCAT44(DAT_14cb435a8_4,2);
    _DAT_14cb435b8 = (undefined1 *)((ulonglong)_DAT_14cb435b8 & 0xffffffff00000000);
    DAT_14c7629d8 = 0;
    return;
  default:
    goto switchD_143acb3a6_default;
  }
  _DAT_14cb435a0 = &DAT_200000002;
  _DAT_14cb435a8 = (undefined1 *)CONCAT44(DAT_14cb435a8_4,2);
switchD_143acb3a6_default:
  return;
}



// FUNCTION 143acb42a FUN_143acb42a body=41 status=ok
// SIG undefined FUN_143acb42a(void)

void FUN_143acb42a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14183ac64(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 143acb45e FUN_143acb45e body=12 status=ok
// SIG undefined FUN_143acb45e(void)

void FUN_143acb45e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acb467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acb46a FUN_143acb46a body=29 status=ok
// SIG undefined FUN_143acb46a(void)

undefined8 FUN_143acb46a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acb488 FUN_143acb488 body=282 status=ok
// SIG undefined FUN_143acb488(void)

undefined8 * FUN_143acb488(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acb5a2 FUN_143acb5a2 body=94 status=ok
// SIG undefined FUN_143acb5a2(void)

ulonglong FUN_143acb5a2(undefined8 *param_1)

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
    FUN_14183ac64(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acb5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143acb600 FUN_143acb600 body=7 status=ok
// SIG undefined FUN_143acb600(void)

void FUN_143acb600(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 143acb608 FUN_143acb608 body=282 status=ok
// SIG undefined FUN_143acb608(void)

undefined8 * FUN_143acb608(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acb722 FUN_143acb722 body=183 status=ok
// SIG undefined FUN_143acb722(void)

void FUN_143acb722(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0xac))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
          ((*plVar4 != 0 && (plVar4 = (longlong *)param_1[0x16], plVar4 != (longlong *)0x0)))))) &&
        (puVar3 = (undefined8 *)*plVar4, puVar3 != (undefined8 *)0x0)) &&
       (puVar3 == (undefined8 *)param_1[0x17])) {
      *plVar4 = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acb7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acb7da FUN_143acb7da body=191 status=ok
// SIG undefined FUN_143acb7da(void)

void FUN_143acb7da(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar4 = *(longlong *)(param_1[1] + 0x40);
  lVar5 = *(longlong *)(*param_1 + 0x38);
  if (lVar5 != lVar4) {
    *(longlong *)(*param_1 + 0x38) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
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
  }
  lVar4 = DAT_14cb427b0;
  if ((*(longlong *)(*param_1 + 0x38) == 0) && (DAT_14cb427b0 != 0)) {
    *(longlong *)(*param_1 + 0x38) = DAT_14cb427b0;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143acb8a4 FUN_143acb8a4 body=12 status=ok
// SIG undefined FUN_143acb8a4(void)

void FUN_143acb8a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acb8ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acb8b0 FUN_143acb8b0 body=29 status=ok
// SIG undefined FUN_143acb8b0(void)

undefined8 FUN_143acb8b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acb8ce FUN_143acb8ce body=282 status=ok
// SIG undefined FUN_143acb8ce(void)

undefined8 * FUN_143acb8ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acb9e8 FUN_143acb9e8 body=253 status=ok
// SIG undefined FUN_143acb9e8(void)

void FUN_143acb9e8(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1[0x16] + 0x40);
  lVar6 = *(longlong *)(param_1[0x15] + 0x38);
  if (lVar6 != lVar5) {
    *(longlong *)(param_1[0x15] + 0x38) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
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
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
  lVar5 = DAT_14cb427b0;
  if ((*(longlong *)(param_1[0x15] + 0x38) == 0) && (DAT_14cb427b0 != 0)) {
    *(longlong *)(param_1[0x15] + 0x38) = DAT_14cb427b0;
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acbac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acbae6 FUN_143acbae6 body=509 status=ok
// SIG undefined FUN_143acbae6(void)

void FUN_143acbae6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  (**(code **)(*(longlong *)param_1[1] + 0xb8))((longlong *)param_1[1],lVar2);
  iVar1 = *(int *)(lVar2 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x40);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      *(undefined1 *)(lVar3 + 0x228) = 0;
      *(undefined4 *)(lVar3 + 0x274) = 0;
      *(undefined1 *)(lVar3 + 0x204) = 0;
      puVar5 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      uVar4 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_FUN_14ade2d80;
      puVar5[2] = uVar4;
      puVar5[0xb] = 0xffffffff00000000;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      *(undefined8 *)((longlong)puVar5 + 300) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x134) = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      *(undefined4 *)(puVar5 + 0x30) = 1;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      *(undefined8 **)(lVar3 + 0x1f0) = puVar5;
      puVar5 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      uVar4 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_FUN_14ade2d80;
      puVar5[2] = uVar4;
      puVar5[0xb] = 0xffffffff00000000;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      *(undefined8 *)((longlong)puVar5 + 300) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x134) = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      *(undefined4 *)(puVar5 + 0x30) = 1;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      *(undefined8 **)(lVar3 + 0x1f8) = puVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 143acbcee FUN_143acbcee body=12 status=ok
// SIG undefined FUN_143acbcee(void)

void FUN_143acbcee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acbcf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acbcfa FUN_143acbcfa body=29 status=ok
// SIG undefined FUN_143acbcfa(void)

undefined8 FUN_143acbcfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acbd18 FUN_143acbd18 body=282 status=ok
// SIG undefined FUN_143acbd18(void)

undefined8 * FUN_143acbd18(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acbe32 FUN_143acbe32 body=590 status=ok
// SIG undefined FUN_143acbe32(void)

void FUN_143acbe32(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  (**(code **)(*(longlong *)param_1[0x16] + 0xb8))((longlong *)param_1[0x16],lVar3);
  iVar2 = *(int *)(lVar3 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x40);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      *(undefined1 *)(lVar4 + 0x228) = 0;
      *(undefined4 *)(lVar4 + 0x274) = 0;
      *(undefined1 *)(lVar4 + 0x204) = 0;
      puVar6 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      uVar5 = *(undefined8 *)(lVar4 + 0x50);
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_FUN_14ade2d80;
      puVar6[2] = uVar5;
      puVar6[0xb] = 0xffffffff00000000;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      *(undefined8 *)((longlong)puVar6 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      *(undefined8 *)((longlong)puVar6 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
      puVar6[0x1a] = 0;
      puVar6[0x1b] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
      puVar6[0x20] = 0;
      puVar6[0x21] = 0;
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      *(undefined8 *)((longlong)puVar6 + 300) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
      puVar6[0x24] = 0;
      puVar6[0x25] = 0;
      puVar6[0x28] = 0;
      puVar6[0x29] = 0;
      puVar6[0x2c] = 0;
      puVar6[0x2d] = 0;
      puVar6[0x2e] = 0;
      puVar6[0x2f] = 0;
      *(undefined4 *)(puVar6 + 0x30) = 1;
      puVar6[0x31] = 0;
      puVar6[0x32] = 0;
      *(undefined8 **)(lVar4 + 0x1f0) = puVar6;
      puVar6 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      uVar5 = *(undefined8 *)(lVar4 + 0x50);
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_FUN_14ade2d80;
      puVar6[2] = uVar5;
      puVar6[0xb] = 0xffffffff00000000;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      *(undefined8 *)((longlong)puVar6 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      *(undefined8 *)((longlong)puVar6 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
      puVar6[0x1a] = 0;
      puVar6[0x1b] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
      puVar6[0x20] = 0;
      puVar6[0x21] = 0;
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      *(undefined8 *)((longlong)puVar6 + 300) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
      puVar6[0x24] = 0;
      puVar6[0x25] = 0;
      puVar6[0x28] = 0;
      puVar6[0x29] = 0;
      puVar6[0x2c] = 0;
      puVar6[0x2d] = 0;
      puVar6[0x2e] = 0;
      puVar6[0x2f] = 0;
      *(undefined4 *)(puVar6 + 0x30) = 1;
      puVar6[0x31] = 0;
      puVar6[0x32] = 0;
      *(undefined8 **)(lVar4 + 0x1f8) = puVar6;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acc067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acc080 FUN_143acc080 body=436 status=ok
// SIG undefined FUN_143acc080(void)

void FUN_143acc080(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  (**(code **)(*(longlong *)param_1[1] + 0xc0))();
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar8 = (longlong)iVar1;
  iVar7 = iVar1;
  if (0 < lVar8) {
    lVar6 = 0;
    do {
      FUN_1481c9124(*(longlong *)(lVar2 + 0x50) + lVar6);
      lVar6 = lVar6 + 0x58;
    } while (lVar8 * 0x58 - lVar6 != 0);
    iVar7 = *(int *)(lVar2 + 0x58);
  }
  if (iVar1 != 0) {
    _Dst = *(void **)(lVar2 + 0x50);
    FUN_144727c04(_Dst);
    iVar4 = *(int *)(lVar2 + 0x58) - iVar1;
    iVar5 = iVar1;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)(lVar8 * 0x58 + (longlong)_Dst),(longlong)iVar4 * 0x58);
      iVar5 = *(int *)(lVar2 + 0x58);
    }
    *(int *)(lVar2 + 0x58) = iVar5 - iVar1;
    if (iVar1 == iVar7) {
      FUN_144727c3a((longlong *)(lVar2 + 0x50));
    }
  }
  iVar1 = *(int *)(lVar2 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(lVar2 + 0x40);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar8 + lVar6);
      *(undefined1 *)(lVar3 + 0x228) = 0;
      *(undefined4 *)(lVar3 + 0x274) = 0;
      *(undefined4 *)(*(longlong *)(lVar3 + 0x1f0) + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar3 + 0x1f8) + 0x5c) = 0xffffffff;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    iVar1 = *(int *)(lVar2 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(lVar2 + 0x40);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar8 + lVar6);
        FUN_144807ef6(lVar3,param_1[1]);
        FUN_143a79364(*(undefined8 *)(lVar3 + 0x1f0));
        FUN_14032eae4(*(undefined8 *)(lVar3 + 0x1f0));
        *(undefined8 *)(lVar3 + 0x1f0) = 0;
        FUN_143a79364(*(undefined8 *)(lVar3 + 0x1f8));
        FUN_14032eae4(*(undefined8 *)(lVar3 + 0x1f8));
        *(undefined8 *)(lVar3 + 0x1f8) = 0;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if ((lVar2 != 0) && ((char)param_1[2] != '\0')) {
    FUN_141839f38(lVar2);
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 143acc23e FUN_143acc23e body=12 status=ok
// SIG undefined FUN_143acc23e(void)

void FUN_143acc23e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acc247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acc24a FUN_143acc24a body=29 status=ok
// SIG undefined FUN_143acc24a(void)

undefined8 FUN_143acc24a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acc268 FUN_143acc268 body=282 status=ok
// SIG undefined FUN_143acc268(void)

undefined8 * FUN_143acc268(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acc382 FUN_143acc382 body=492 status=ok
// SIG undefined FUN_143acc382(void)

void FUN_143acc382(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  (**(code **)(*(longlong *)param_1[0x16] + 0xc0))();
  iVar2 = *(int *)(lVar3 + 0x58);
  lVar9 = (longlong)iVar2;
  iVar8 = iVar2;
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      FUN_1481c9124(*(longlong *)(lVar3 + 0x50) + lVar7);
      lVar7 = lVar7 + 0x58;
    } while (lVar9 * 0x58 - lVar7 != 0);
    iVar8 = *(int *)(lVar3 + 0x58);
  }
  if (iVar2 != 0) {
    _Dst = *(void **)(lVar3 + 0x50);
    FUN_144727c04(_Dst);
    iVar5 = *(int *)(lVar3 + 0x58) - iVar2;
    iVar6 = iVar2;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)(lVar9 * 0x58 + (longlong)_Dst),(longlong)iVar5 * 0x58);
      iVar6 = *(int *)(lVar3 + 0x58);
    }
    *(int *)(lVar3 + 0x58) = iVar6 - iVar2;
    if (iVar2 == iVar8) {
      FUN_144727c3a((longlong *)(lVar3 + 0x50));
    }
  }
  iVar2 = *(int *)(lVar3 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(lVar3 + 0x40);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar9 + lVar7);
      *(undefined1 *)(lVar4 + 0x228) = 0;
      *(undefined4 *)(lVar4 + 0x274) = 0;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x1f0) + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x1f8) + 0x5c) = 0xffffffff;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
    iVar2 = *(int *)(lVar3 + 0x48);
    if ((longlong)iVar2 != 0) {
      lVar9 = *(longlong *)(lVar3 + 0x40);
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(lVar9 + lVar7);
        FUN_144807ef6(lVar4,param_1[0x16]);
        FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f0));
        FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f0));
        *(undefined8 *)(lVar4 + 0x1f0) = 0;
        FUN_143a79364(*(undefined8 *)(lVar4 + 0x1f8));
        FUN_14032eae4(*(undefined8 *)(lVar4 + 0x1f8));
        *(undefined8 *)(lVar4 + 0x1f8) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
  }
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x17) != '\0')) {
    FUN_141839f38(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acc4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acc56e FUN_143acc56e body=244 status=ok
// SIG undefined FUN_143acc56e(void)

void FUN_143acc56e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar6 = (longlong)iVar1;
  iVar5 = iVar1;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      FUN_1481c9124(*(longlong *)(lVar2 + 0x50) + lVar7);
      lVar7 = lVar7 + 0x58;
    } while (lVar6 * 0x58 - lVar7 != 0);
    iVar5 = *(int *)(lVar2 + 0x58);
  }
  if (iVar1 != 0) {
    _Dst = *(void **)(lVar2 + 0x50);
    FUN_144727c04(_Dst);
    iVar3 = *(int *)(lVar2 + 0x58) - iVar1;
    iVar4 = iVar1;
    if (iVar3 != 0) {
      memmove(_Dst,(void *)(lVar6 * 0x58 + (longlong)_Dst),(longlong)iVar3 * 0x58);
      iVar4 = *(int *)(lVar2 + 0x58);
    }
    *(int *)(lVar2 + 0x58) = iVar4 - iVar1;
    if (iVar1 == iVar5) {
      FUN_144727c3a((longlong *)(lVar2 + 0x50));
    }
  }
  iVar1 = *(int *)(lVar2 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x40);
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(lVar2 + lVar6);
      *(undefined1 *)(lVar7 + 0x228) = 0;
      *(undefined4 *)(lVar7 + 0x274) = 0;
      *(undefined4 *)(*(longlong *)(lVar7 + 0x1f0) + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar7 + 0x1f8) + 0x5c) = 0xffffffff;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 143acc66c FUN_143acc66c body=12 status=ok
// SIG undefined FUN_143acc66c(void)

void FUN_143acc66c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acc675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acc678 FUN_143acc678 body=29 status=ok
// SIG undefined FUN_143acc678(void)

undefined8 FUN_143acc678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acc696 FUN_143acc696 body=282 status=ok
// SIG undefined FUN_143acc696(void)

undefined8 * FUN_143acc696(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acc7b0 FUN_143acc7b0 body=317 status=ok
// SIG undefined FUN_143acc7b0(void)

void FUN_143acc7b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x58);
  lVar6 = (longlong)iVar2;
  iVar7 = iVar2;
  if (0 < lVar6) {
    lVar8 = 0;
    do {
      FUN_1481c9124(*(longlong *)(lVar3 + 0x50) + lVar8);
      lVar8 = lVar8 + 0x58;
    } while (lVar6 * 0x58 - lVar8 != 0);
    iVar7 = *(int *)(lVar3 + 0x58);
  }
  if (iVar2 != 0) {
    _Dst = *(void **)(lVar3 + 0x50);
    FUN_144727c04(_Dst);
    iVar4 = *(int *)(lVar3 + 0x58) - iVar2;
    iVar5 = iVar2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)(lVar6 * 0x58 + (longlong)_Dst),(longlong)iVar4 * 0x58);
      iVar5 = *(int *)(lVar3 + 0x58);
    }
    *(int *)(lVar3 + 0x58) = iVar5 - iVar2;
    if (iVar2 == iVar7) {
      FUN_144727c3a((longlong *)(lVar3 + 0x50));
    }
  }
  iVar2 = *(int *)(lVar3 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x40);
    lVar6 = 0;
    do {
      lVar8 = *(longlong *)(lVar3 + lVar6);
      *(undefined1 *)(lVar8 + 0x228) = 0;
      *(undefined4 *)(lVar8 + 0x274) = 0;
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1f0) + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1f8) + 0x5c) = 0xffffffff;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acc868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acc8ee FUN_143acc8ee body=159 status=ok
// SIG undefined FUN_143acc8ee(void)

void FUN_143acc8ee(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_143acc92b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_143acc92b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_143acc92b:
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
                    /* WARNING: Could not recover jumptable at 0x000143acc989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143acc9a8 FUN_143acc9a8 body=29 status=ok
// SIG undefined FUN_143acc9a8(void)

void FUN_143acc9a8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143acc9c6 FUN_143acc9c6 body=69 status=ok
// SIG undefined FUN_143acc9c6(void)

undefined8 * FUN_143acc9c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae26990;
  FUN_14474ae1f(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acca0c FUN_143acca0c body=282 status=ok
// SIG undefined FUN_143acca0c(void)

undefined8 * FUN_143acca0c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143accb26 FUN_143accb26 body=117 status=ok
// SIG undefined FUN_143accb26(void)

void FUN_143accb26(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1456be786(param_1[0x15],param_1 + 0x16);
  FUN_14474ae1f(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143accb91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143accb9c FUN_143accb9c body=195 status=ok
// SIG undefined FUN_143accb9c(void)

void FUN_143accb9c(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + 0x30);
    if ((cVar1 == '\b') && (*(char *)*param_1 == '\0')) {
      if ((longlong)*(int *)(param_2 + 0x2f8) == 0) {
        return;
      }
      lVar4 = *(longlong *)(param_2 + 0x2f0);
      lVar5 = (longlong)*(int *)(param_2 + 0x2f8) * 0x38 + lVar4;
      do {
        if ((longlong)*(int *)(lVar4 + 0x30) != 0) {
          plVar2 = *(longlong **)(lVar4 + 0x28);
          lVar3 = (longlong)*(int *)(lVar4 + 0x30) * 0x50;
          do {
            if (*plVar2 == *(longlong *)param_1[1]) {
              if (plVar2 != (longlong *)0x0) {
                *(char *)*param_1 = '\x01';
                goto LAB_143accc17;
              }
              break;
            }
            plVar2 = plVar2 + 10;
            lVar3 = lVar3 + -0x50;
          } while (lVar3 != 0);
        }
        lVar4 = lVar4 + 0x38;
      } while (lVar4 != lVar5);
    }
LAB_143accc17:
    if (((cVar1 != '\b') && (*(char *)param_1[2] == '\0')) &&
       ((longlong)*(int *)(param_2 + 0x2a8) != 0)) {
      plVar2 = *(longlong **)(param_2 + 0x2a0);
      lVar4 = (longlong)*(int *)(param_2 + 0x2a8) * 0x58;
      do {
        if (*plVar2 == *(longlong *)param_1[1]) {
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          *(char *)param_1[2] = '\x01';
          return;
        }
        plVar2 = plVar2 + 0xb;
        lVar4 = lVar4 + -0x58;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143accc60 FUN_143accc60 body=29 status=ok
// SIG undefined FUN_143accc60(void)

undefined8 FUN_143accc60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143accc92 FUN_143accc92 body=85 status=ok
// SIG undefined FUN_143accc92(void)

void FUN_143accc92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26a10;
  return;
}



// FUNCTION 143accce8 FUN_143accce8 body=85 status=ok
// SIG undefined FUN_143accce8(void)

void FUN_143accce8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26a10;
  return;
}



// FUNCTION 143accd3e FUN_143accd3e body=118 status=ok
// SIG undefined FUN_143accd3e(void)

void FUN_143accd3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae26a10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143accda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143accdbc FUN_143accdbc body=19 status=ok
// SIG undefined FUN_143accdbc(void)

undefined1 FUN_143accdbc(undefined8 param_1,undefined8 param_2)

{
  FUN_143accdd0(param_2);
  return 1;
}



// FUNCTION 143accdd0 FUN_143accdd0 body=1191 status=ok
// SIG undefined FUN_143accdd0(void)

void FUN_143accdd0(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  wchar_t *local_78;
  int local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb439c0) && (FUN_144b3d300(&DAT_14cb439c0), DAT_14cb439c0 == -1)) {
    FUN_1400b22c2(&DAT_14cb439b0,"-filter=");
    atexit((_func_5014 *)&LAB_143acd278);
    _Init_thread_footer(&DAT_14cb439c0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb439d8) && (FUN_144b3d300(&DAT_14cb439d8), DAT_14cb439d8 == -1)) {
    FUN_1400b22c2(&DAT_14cb439c8,"-type=");
    atexit((_func_5014 *)&LAB_143acd289);
    _Init_thread_footer(&DAT_14cb439d8);
  }
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    pwVar7 = (wchar_t *)0x0;
    iVar16 = 0;
    local_9c = 0;
  }
  else {
    puVar18 = (undefined8 *)*param_1;
    puVar17 = puVar18 + (longlong)*(int *)(param_1 + 1) * 2;
    local_9c = 0;
    iVar16 = 0;
    pwVar6 = (wchar_t *)0x0;
    do {
      uVar2 = DAT_14cb439b8 - 1;
      if (DAT_14cb439b8 == 0) {
        uVar2 = 0;
      }
      puVar5 = &DAT_149dfb77a;
      if (DAT_14cb439b8 != 0) {
        puVar5 = DAT_14cb439b0;
      }
      if ((int)uVar2 < 1) {
LAB_143acd0e1:
        uVar15 = 0;
        uVar2 = DAT_14cb439d0 - 1;
        if (DAT_14cb439d0 == 0) {
          uVar2 = uVar15;
        }
        puVar5 = &DAT_149dfb77a;
        if (DAT_14cb439d0 != 0) {
          puVar5 = DAT_14cb439c8;
        }
        pwVar7 = pwVar6;
        if (0 < (int)uVar2) {
          iVar3 = *(int *)(puVar18 + 1);
          puVar4 = &DAT_149dfb77a;
          if (iVar3 != 0) {
            puVar4 = (undefined2 *)*puVar18;
          }
          uVar10 = (ulonglong)uVar2;
          lVar11 = 0;
          while( true ) {
            uVar12 = *(ushort *)((longlong)puVar4 + lVar11);
            uVar14 = (ulonglong)uVar12;
            uVar8 = *(ushort *)((longlong)puVar5 + lVar11);
            if (uVar12 != uVar8) break;
            if (uVar12 == 0) goto LAB_143acd160;
LAB_143acd12c:
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_143acd160;
            lVar11 = lVar11 + 2;
          }
          if ((uVar8 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar9]) goto LAB_143acd12c;
          }
          if (uVar12 != uVar8) goto LAB_143acd0bf;
LAB_143acd160:
          puVar5 = &DAT_149dfb77a;
          if (iVar3 != 0) {
            puVar5 = (undefined2 *)*puVar18;
            uVar15 = iVar3 - 1;
          }
          if ((int)uVar15 <= (int)uVar2) {
            uVar2 = uVar15;
          }
          uVar10 = (ulonglong)uVar2;
          if ((int)uVar2 < 1) {
            uVar10 = 0;
          }
          FUN_14006620a(&local_78,puVar5 + uVar10,uVar15 - (int)uVar10);
          pwVar6 = L"";
          if (local_70 != 0) {
            pwVar6 = local_78;
          }
          iVar3 = _wtoi(pwVar6);
          local_9c = 0;
          if (local_78 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_9c = CONCAT31((int3)((uint)local_9c >> 8),0 < iVar3);
        }
      }
      else {
        iVar3 = *(int *)(puVar18 + 1);
        puVar4 = &DAT_149dfb77a;
        if (iVar3 != 0) {
          puVar4 = (undefined2 *)*puVar18;
        }
        uVar10 = (ulonglong)uVar2;
        lVar11 = 0;
        while( true ) {
          uVar12 = *(ushort *)((longlong)puVar4 + lVar11);
          uVar8 = *(ushort *)((longlong)puVar5 + lVar11);
          if (uVar12 != uVar8) break;
          if ((uVar12 == 0) || (uVar10 == 1)) goto LAB_143acd079;
LAB_143acd03d:
          uVar10 = uVar10 - 1;
          lVar11 = lVar11 + 2;
        }
        if ((uVar8 | uVar12) < 0x80) {
          if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[(uint)uVar8]) {
            iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12] -
                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar8];
            goto LAB_143acd0d4;
          }
          if (uVar10 != 1) goto LAB_143acd03d;
        }
        else {
          iVar13 = (uint)uVar12 - (uint)uVar8;
LAB_143acd0d4:
          if (iVar13 != 0) goto LAB_143acd0e1;
        }
LAB_143acd079:
        puVar5 = &DAT_149dfb77a;
        uVar15 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar15 = 0;
        }
        else {
          puVar5 = (undefined2 *)*puVar18;
        }
        if ((int)uVar15 <= (int)uVar2) {
          uVar2 = uVar15;
        }
        uVar10 = (ulonglong)uVar2;
        if ((int)uVar2 < 1) {
          uVar10 = 0;
        }
        FUN_14006620a(&local_78,puVar5 + uVar10,uVar15 - (int)uVar10);
        pwVar7 = local_78;
        iVar16 = local_70;
        if (pwVar6 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar6);
          pwVar7 = local_78;
          iVar16 = local_70;
        }
      }
LAB_143acd0bf:
      puVar18 = puVar18 + 2;
      pwVar6 = pwVar7;
    } while (puVar18 != puVar17);
  }
  FUN_1456d06d8(&local_78,0x10,1,0);
  uVar10 = (ulonglong)local_68;
  if ((-1 < (int)local_68) && ((int)local_68 < local_70)) {
    do {
      lVar11 = *(longlong *)(local_78 + (uVar10 & 0xffffffff) * 4);
      if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
        if (1 < iVar16) {
          local_98 = (undefined2 *)0x0;
          uStack_90 = 0;
          FUN_1401031ac(lVar11,0,&local_98);
          puVar5 = local_98;
          puVar4 = local_98;
          if ((int)uStack_90 == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          iVar3 = (int)uStack_90 + -1;
          if ((int)uStack_90 == 0) {
            iVar3 = 0;
          }
          cVar1 = FUN_14038a9c4(puVar4,iVar3,pwVar7,iVar16 + -1);
          if (puVar5 != (undefined2 *)0x0) {
            FUN_1400020a8(puVar5);
          }
          if (cVar1 == '\0') goto LAB_143accf0e;
        }
        local_98 = (undefined2 *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_1481f62c4(&local_98,local_9c,lVar11,0);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_143accf0e:
      uVar10 = (longlong)(int)local_68;
      do {
        uVar14 = uVar10;
        uVar10 = uVar14 + 1;
        local_68 = (uint)uVar10;
        if ((longlong)local_70 <= (longlong)uVar10) break;
      } while (*(longlong *)(local_78 + uVar10 * 4) == 0);
    } while ((-2 < (longlong)uVar14) && ((int)local_68 < local_70));
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acd29a FUN_143acd29a body=43 status=ok
// SIG undefined FUN_143acd29a(void)

void FUN_143acd29a(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143acd2c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 143acd2d0 FUN_143acd2d0 body=29 status=ok
// SIG undefined FUN_143acd2d0(void)

void FUN_143acd2d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143acd2ee FUN_143acd2ee body=71 status=ok
// SIG undefined FUN_143acd2ee(void)

undefined8 * FUN_143acd2ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ae26aa0;
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



// FUNCTION 143acd336 FUN_143acd336 body=282 status=ok
// SIG undefined FUN_143acd336(void)

undefined8 * FUN_143acd336(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acd450 FUN_143acd450 body=141 status=ok
// SIG undefined FUN_143acd450(void)

void FUN_143acd450(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acd4d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acd4e8 FUN_143acd4e8 body=5 status=ok
// SIG undefined FUN_143acd4e8(void)

longlong FUN_143acd4e8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143acd4ee FUN_143acd4ee body=12 status=ok
// SIG undefined FUN_143acd4ee(void)

void FUN_143acd4ee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acd4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acd4fa FUN_143acd4fa body=68 status=ok
// SIG undefined FUN_143acd4fa(void)

undefined8 * FUN_143acd4fa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14ae26ad0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acd53e FUN_143acd53e body=336 status=ok
// SIG undefined FUN_143acd53e(void)

void FUN_143acd53e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  lVar3 = param_1[3];
  if (lVar3 == 0) goto LAB_143acd5a1;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar1) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar4)
        goto LAB_143acd682;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_143acd682:
    FUN_140082318(lVar3);
  }
LAB_143acd5a1:
  FUN_1405e23da(lVar2);
  if ((longlong *)(lVar2 + 0x20) != param_1 + 1) {
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 0x20) = param_1[1];
    param_1[1] = 0;
    *(int *)(lVar2 + 0x28) = (int)param_1[2];
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x14);
    param_1[2] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acd69a FUN_143acd69a body=29 status=ok
// SIG undefined FUN_143acd69a(void)

void FUN_143acd69a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143acd6b8 FUN_143acd6b8 body=82 status=ok
// SIG undefined FUN_143acd6b8(void)

undefined8 * FUN_143acd6b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14ae26af0;
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acd70a FUN_143acd70a body=282 status=ok
// SIG undefined FUN_143acd70a(void)

undefined8 * FUN_143acd70a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acd824 FUN_143acd824 body=447 status=ok
// SIG undefined FUN_143acd824(void)

void FUN_143acd824(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) goto LAB_143acd89d;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar4 + 0x1c);
    if (2 < iVar2) {
      bVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar6 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar6)
        goto LAB_143acd9ee;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_58);
  }
  else {
LAB_143acd9ee:
    FUN_140082318(lVar4);
  }
LAB_143acd89d:
  FUN_1405e23da(lVar3);
  if ((longlong *)(lVar3 + 0x20) != (longlong *)(param_1 + 0xb0)) {
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acd9fc FUN_143acd9fc body=43 status=ok
// SIG undefined FUN_143acd9fc(void)

void FUN_143acd9fc(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143acda24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 143acda32 FUN_143acda32 body=29 status=ok
// SIG undefined FUN_143acda32(void)

void FUN_143acda32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143acda50 FUN_143acda50 body=71 status=ok
// SIG undefined FUN_143acda50(void)

undefined8 * FUN_143acda50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ae26bb0;
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



// FUNCTION 143acda98 FUN_143acda98 body=282 status=ok
// SIG undefined FUN_143acda98(void)

undefined8 * FUN_143acda98(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acdbb2 FUN_143acdbb2 body=141 status=ok
// SIG undefined FUN_143acdbb2(void)

void FUN_143acdbb2(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acdc33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acdc4e FUN_143acdc4e body=5 status=ok
// SIG undefined FUN_143acdc4e(void)

longlong FUN_143acdc4e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143acdc54 FUN_143acdc54 body=12 status=ok
// SIG undefined FUN_143acdc54(void)

void FUN_143acdc54(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143acdc5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143acdc60 FUN_143acdc60 body=29 status=ok
// SIG undefined FUN_143acdc60(void)

undefined8 FUN_143acdc60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143acdc7e FUN_143acdc7e body=282 status=ok
// SIG undefined FUN_143acdc7e(void)

undefined8 * FUN_143acdc7e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acdd98 FUN_143acdd98 body=282 status=ok
// SIG undefined FUN_143acdd98(void)

undefined8 * FUN_143acdd98(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143acdeb2 FUN_143acdeb2 body=194 status=ok
// SIG undefined FUN_143acdeb2(void)

void FUN_143acdeb2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)param_1[0x45];
  puVar4 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = param_1 + 0x15;
  }
  if ((longlong)*(int *)(param_1 + 0x46) == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = puVar4 + (longlong)*(int *)(param_1 + 0x46) * 0xc;
    do {
      FUN_1456be786(*puVar4,puVar4 + 1);
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != puVar2);
    uVar3 = *(undefined4 *)(param_1 + 0x46);
    puVar2 = (undefined8 *)param_1[0x45];
  }
  puVar4 = param_1 + 0x15;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  FUN_14474ade3(puVar4,uVar3);
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143acdf5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143acdf74 FUN_143acdf74 body=282 status=ok
// SIG undefined FUN_143acdf74(void)

undefined8 * FUN_143acdf74(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143ace08e FUN_143ace08e body=282 status=ok
// SIG undefined FUN_143ace08e(void)

undefined8 * FUN_143ace08e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143ace1a8 FUN_143ace1a8 body=194 status=ok
// SIG undefined FUN_143ace1a8(void)

void FUN_143ace1a8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)param_1[0x45];
  puVar4 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = param_1 + 0x15;
  }
  if ((longlong)*(int *)(param_1 + 0x46) == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = puVar4 + (longlong)*(int *)(param_1 + 0x46) * 0xc;
    do {
      FUN_1456be786(*puVar4,puVar4 + 1);
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != puVar2);
    uVar3 = *(undefined4 *)(param_1 + 0x46);
    puVar2 = (undefined8 *)param_1[0x45];
  }
  puVar4 = param_1 + 0x15;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  FUN_14474ade3(puVar4,uVar3);
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ace255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ace26a FUN_143ace26a body=282 status=ok
// SIG undefined FUN_143ace26a(void)

undefined8 * FUN_143ace26a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143ace384 FUN_143ace384 body=282 status=ok
// SIG undefined FUN_143ace384(void)

undefined8 * FUN_143ace384(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143ace49e FUN_143ace49e body=282 status=ok
// SIG undefined FUN_143ace49e(void)

undefined8 * FUN_143ace49e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143acaafd);
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



// FUNCTION 143ace5b8 FUN_143ace5b8 body=2244 status=ok
// SIG undefined FUN_143ace5b8(void)

void FUN_143ace5b8(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  ushort uVar19;
  float fVar20;
  int iVar21;
  longlong lVar22;
  
  uVar1 = *param_2;
  uVar13 = (ulonglong)uVar1;
  lVar4 = param_1[1];
  lVar5 = *(longlong *)(**(longlong **)(*param_1 + 0x18) + (longlong)(int)uVar1 * 8);
  if (((*(byte *)(lVar5 + 0x268) & 1) != 0) && ((*(byte *)(lVar4 + 0x30) & 1) != 0)) {
    lVar6 = *(longlong *)(lVar4 + 0x340);
    lVar7 = *(longlong *)(lVar5 + 0x208);
    if ((longlong)*(int *)(lVar4 + 0x448) != 0) {
      piVar12 = *(int **)(lVar4 + 0x440);
      piVar18 = piVar12 + (longlong)*(int *)(lVar4 + 0x448) * 2;
      do {
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 0x128) * piVar12[1]) + *(longlong *)(lVar6 + 0x18) +
         uVar13 * 4) = *(undefined4 *)(lVar7 + *piVar12);
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar18);
    }
    if ((longlong)*(int *)(lVar4 + 0x458) != 0) {
      piVar12 = *(int **)(lVar4 + 0x450);
      piVar18 = piVar12 + (longlong)*(int *)(lVar4 + 0x458) * 2;
      do {
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 300) * piVar12[1]) + *(longlong *)(lVar6 + 0x28) +
         uVar13 * 4) = *(undefined4 *)(lVar7 + *piVar12);
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar18);
    }
    iVar2 = *(int *)(lVar4 + 0x468);
    if ((longlong)iVar2 != 0) {
      lVar16 = *(longlong *)(lVar4 + 0x460);
      lVar8 = 0;
      do {
        if (*(char *)(lVar16 + 8 + lVar8) == '\x01') {
          fVar3 = *(float *)(lVar7 + *(int *)(lVar16 + lVar8));
          fVar20 = ABS(fVar3);
          if ((uint)fVar20 < 0x47800000) {
            if ((uint)fVar20 < 0x38800000) {
              fVar9 = fVar20 + 0.5;
            }
            else {
              fVar20 = (float)((int)fVar20 + 0x8000fff + (uint)(((uint)fVar20 >> 0xd & 1) != 0) >>
                              0xd);
              fVar9 = fVar20;
            }
          }
          else {
            fVar9 = (float)((0x7f800000 < (uint)fVar20 | 0x3e) << 9);
          }
          iVar21 = movmskps(fVar20,ZEXT416((uint)fVar3));
          uVar19 = (ushort)(iVar21 << 0xf) | SUB42(fVar9,0);
        }
        else {
          uVar19 = *(ushort *)(lVar7 + *(int *)(lVar16 + lVar8));
        }
        *(ushort *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 0x130) * *(int *)(lVar16 + 4 + lVar8)) +
          *(longlong *)(lVar6 + 0x38) + uVar13 * 2) = uVar19;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)iVar2 * 0xc != lVar8);
    }
    lVar6 = *(longlong *)(lVar4 + 0x3f8);
    lVar7 = *(longlong *)(lVar5 + 0x208);
    if ((longlong)*(int *)(lVar4 + 0x478) != 0) {
      piVar12 = *(int **)(lVar4 + 0x470);
      piVar18 = piVar12 + (longlong)*(int *)(lVar4 + 0x478) * 2;
      do {
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 0x128) * piVar12[1]) + *(longlong *)(lVar6 + 0x18) +
         uVar13 * 4) = *(undefined4 *)(lVar7 + *piVar12);
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar18);
    }
    if ((longlong)*(int *)(lVar4 + 0x488) != 0) {
      piVar12 = *(int **)(lVar4 + 0x480);
      piVar18 = piVar12 + (longlong)*(int *)(lVar4 + 0x488) * 2;
      do {
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 300) * piVar12[1]) + *(longlong *)(lVar6 + 0x28) +
         uVar13 * 4) = *(undefined4 *)(lVar7 + *piVar12);
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar18);
    }
    iVar2 = *(int *)(lVar4 + 0x498);
    if ((longlong)iVar2 != 0) {
      lVar16 = *(longlong *)(lVar4 + 0x490);
      lVar8 = 0;
      do {
        if (*(char *)(lVar16 + 8 + lVar8) == '\x01') {
          fVar3 = *(float *)(lVar7 + *(int *)(lVar16 + lVar8));
          fVar20 = ABS(fVar3);
          if ((uint)fVar20 < 0x47800000) {
            if ((uint)fVar20 < 0x38800000) {
              fVar9 = fVar20 + 0.5;
            }
            else {
              fVar20 = (float)((int)fVar20 + 0x8000fff + (uint)(((uint)fVar20 >> 0xd & 1) != 0) >>
                              0xd);
              fVar9 = fVar20;
            }
          }
          else {
            fVar9 = (float)((0x7f800000 < (uint)fVar20 | 0x3e) << 9);
          }
          iVar21 = movmskps(fVar20,ZEXT416((uint)fVar3));
          uVar19 = (ushort)(iVar21 << 0xf) | SUB42(fVar9,0);
        }
        else {
          uVar19 = *(ushort *)(lVar7 + *(int *)(lVar16 + lVar8));
        }
        *(ushort *)
         ((ulonglong)(uint)(*(int *)(lVar6 + 0x130) * *(int *)(lVar16 + 4 + lVar8)) +
          *(longlong *)(lVar6 + 0x38) + uVar13 * 2) = uVar19;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)iVar2 * 0xc != lVar8);
    }
  }
  lVar6 = *(longlong *)(*param_1 + 8);
  lVar16 = (ulonglong)((*(byte *)(lVar5 + 0x790) & 1) << 5) + lVar5 + 0x270;
  lVar7 = *(longlong *)(lVar4 + 0x340);
  if ((longlong)*(int *)(lVar6 + 0x260) != 0) {
    piVar12 = *(int **)(lVar6 + 600);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x260) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 0x270) != 0) {
    piVar12 = *(int **)(lVar6 + 0x268);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x270) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  lVar7 = *(longlong *)(lVar4 + 0x3f8);
  if ((longlong)*(int *)(lVar6 + 0x2d0) != 0) {
    piVar12 = *(int **)(lVar6 + 0x2c8);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x2d0) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 0x2e0) != 0) {
    piVar12 = *(int **)(lVar6 + 0x2d8);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x2e0) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  lVar16 = (ulonglong)((*(byte *)(lVar5 + 0x790) & 1) << 6) + lVar5 + 0x2b0;
  lVar7 = *(longlong *)(lVar4 + 0x340);
  if ((longlong)*(int *)(lVar6 + 0x280) != 0) {
    piVar12 = *(int **)(lVar6 + 0x278);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x280) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 0x290) != 0) {
    piVar12 = *(int **)(lVar6 + 0x288);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x290) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  lVar7 = *(longlong *)(lVar4 + 0x3f8);
  if ((longlong)*(int *)(lVar6 + 0x2f0) != 0) {
    piVar12 = *(int **)(lVar6 + 0x2e8);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x2f0) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 0x300) != 0) {
    piVar12 = *(int **)(lVar6 + 0x2f8);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x300) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  lVar16 = (ulonglong)((*(byte *)(lVar5 + 0x790) & 1) << 9) + lVar5 + 0x330;
  lVar7 = *(longlong *)(lVar4 + 0x340);
  if ((longlong)*(int *)(lVar6 + 0x2a0) != 0) {
    piVar12 = *(int **)(lVar6 + 0x298);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x2a0) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 0x2b0) != 0) {
    piVar12 = *(int **)(lVar6 + 0x2a8);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x2b0) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  lVar7 = *(longlong *)(lVar4 + 0x3f8);
  if ((longlong)*(int *)(lVar6 + 0x310) != 0) {
    piVar12 = *(int **)(lVar6 + 0x308);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 0x310) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 0x128) * piVar12[1]) + *(longlong *)(lVar7 + 0x18) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  if ((longlong)*(int *)(lVar6 + 800) != 0) {
    piVar12 = *(int **)(lVar6 + 0x318);
    piVar18 = piVar12 + (longlong)*(int *)(lVar6 + 800) * 2;
    do {
      *(undefined4 *)
       ((ulonglong)(uint)(*(int *)(lVar7 + 300) * piVar12[1]) + *(longlong *)(lVar7 + 0x28) +
       uVar13 * 4) = *(undefined4 *)(lVar16 + *piVar12);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar18);
  }
  uVar15 = *(uint *)(lVar5 + 0x110);
  uVar11 = *(uint *)(lVar6 + 0x2c0);
  if ((int)uVar15 < (int)*(uint *)(lVar6 + 0x2c0)) {
    uVar11 = uVar15;
  }
  if (0 < (int)uVar11) {
    uVar17 = (ulonglong)uVar1;
    uVar13 = 0;
    do {
      lVar8 = ((ulonglong)((*(byte *)(lVar5 + 0x790) & 1) << 5) | uVar13 << 6) +
              *(longlong *)(lVar5 + 0x730);
      lVar7 = *(longlong *)(lVar6 + 0x2b8);
      lVar22 = uVar13 * 0x20;
      lVar16 = *(longlong *)(lVar4 + 0x340);
      lVar10 = (longlong)*(int *)(lVar7 + 8 + lVar22);
      if (lVar10 != 0) {
        piVar18 = *(int **)(lVar7 + lVar22);
        piVar12 = piVar18 + lVar10 * 2;
        do {
          *(undefined4 *)
           ((ulonglong)(uint)(*(int *)(lVar16 + 0x128) * piVar18[1]) + *(longlong *)(lVar16 + 0x18)
           + uVar17 * 4) = *(undefined4 *)(lVar8 + *piVar18);
          piVar18 = piVar18 + 2;
        } while (piVar18 != piVar12);
      }
      lVar10 = (longlong)*(int *)(lVar7 + lVar22 + 0x18);
      if (lVar10 != 0) {
        piVar12 = *(int **)(lVar7 + lVar22 + 0x10);
        piVar18 = piVar12 + lVar10 * 2;
        do {
          *(undefined4 *)
           ((ulonglong)(uint)(*(int *)(lVar16 + 300) * piVar12[1]) + *(longlong *)(lVar16 + 0x28) +
           uVar17 * 4) = *(undefined4 *)(lVar8 + *piVar12);
          piVar12 = piVar12 + 2;
        } while (piVar12 != piVar18);
      }
      lVar7 = *(longlong *)(lVar6 + 0x328);
      lVar16 = *(longlong *)(lVar4 + 0x3f8);
      lVar10 = (longlong)*(int *)(lVar7 + 8 + lVar22);
      if (lVar10 != 0) {
        piVar18 = *(int **)(lVar7 + lVar22);
        piVar12 = piVar18 + lVar10 * 2;
        do {
          *(undefined4 *)
           ((ulonglong)(uint)(*(int *)(lVar16 + 0x128) * piVar18[1]) + *(longlong *)(lVar16 + 0x18)
           + uVar17 * 4) = *(undefined4 *)(lVar8 + *piVar18);
          piVar18 = piVar18 + 2;
        } while (piVar18 != piVar12);
      }
      lVar10 = (longlong)*(int *)(lVar7 + lVar22 + 0x18);
      if (lVar10 != 0) {
        piVar12 = *(int **)(lVar7 + lVar22 + 0x10);
        piVar18 = piVar12 + lVar10 * 2;
        do {
          *(undefined4 *)
           ((ulonglong)(uint)(*(int *)(lVar16 + 300) * piVar12[1]) + *(longlong *)(lVar16 + 0x28) +
           uVar17 * 4) = *(undefined4 *)(lVar8 + *piVar12);
          piVar12 = piVar12 + 2;
        } while (piVar12 != piVar18);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar11);
    uVar15 = *(uint *)(lVar5 + 0x110);
  }
  if (0 < (int)uVar15) {
    plVar14 = *(longlong **)(lVar5 + 0x108);
    uVar13 = 0;
    do {
      if (((((longlong)uVar13 < (longlong)(int)((longlong *)param_1[2])[1]) &&
           (iVar2 = *(int *)(*(longlong *)param_1[2] + uVar13 * 4), iVar2 != -1)) &&
          (lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x80), lVar4 != 0)) &&
         ((int)uVar1 <= *(int *)(lVar4 + 0x120))) {
        *(undefined4 *)
         ((ulonglong)(uint)(iVar2 * *(int *)(lVar4 + 300)) + *(longlong *)(lVar4 + 0x28) +
         (longlong)(int)uVar1 * 4) = *(undefined4 *)(*plVar14 + 0xd4);
      }
      uVar13 = uVar13 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar15 != uVar13);
  }
  return;
}



// FUNCTION 143acee7c FUN_143acee7c body=3719 status=ok
// SIG undefined FUN_143acee7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143acee7c(void)

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
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cb433e0);
  if (cVar2 == '\0') {
    _DAT_14cb433e0 = 0;
    uRam000000014cb433e8 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae1f110,2,0);
  local_70 = "ParticleSpawnUpdate";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43420 = (ulonglong)uVar3;
  local_70 = "Particles.StateIndex";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb43428 = (ulonglong)uVar3;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43430,L"fx.Niagara.TaskPriorities.PerfCapturePriority",&DAT_14c7629d4,
                L"Priority to use if performance captures are enabled.  Reduces the amount of context switching for Niagara to make performance measurements more reliable.Default is 1, set to -1 to not override the default priorities."
               );
  atexit(FUN_143ac2ce0);
  local_88._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb43440,L"fx.Niagara.TaskPriorities.PostActorTickPriority",&DAT_14c7629d8,
                L"Any tasks we execute, such as spawning, in post actor tick will run at this priority."
               );
  atexit(FUN_143ac2d25);
  ppuStack_80._0_4_ = 0x200;
  local_88._0_4_ = 0x200;
  FUN_1412c7f16(&DAT_14cb43450,L"fx.Niagara.TaskPriorities.High",L"Task Priority When Set to High",
                0x400);
  ppuStack_80._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_1412c7f16(&DAT_14cb43490,L"fx.Niagara.TaskPriorities.Normal",
                L"Task Priority When Set to Normal",0x400);
  ppuStack_80._0_4_ = 0;
  local_88._0_4_ = 0x200;
  FUN_1412c7f16(&DAT_14cb434d0,L"fx.Niagara.TaskPriorities.Low",L"Task Priority When Set to Low",0);
  ppuStack_80._0_4_ = 0;
  local_88 = (char **)((ulonglong)local_88._4_4_ << 0x20);
  FUN_1412c7f16(&DAT_14cb43510,L"fx.Niagara.TaskPriorities.Background",
                L"Task Priority When Set to Background",0x800);
  atexit(FUN_143ac2d6a);
  DAT_14cb43550 = 0;
  uRam000000014cb43558 = 0;
  atexit((_func_5014 *)&LAB_143ac2de2);
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
  *(code **)(local_70 + 0x18) = FUN_143ac2df3;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb43560,L"fx.Niagara.TaskPriorities.TickGroupPriority",&DAT_14cb43550,
                L"Set tick group priories for Niagara.For example, TG_PrePhysics:2,TG_DuringPhysics:2"
               );
  if (local_68 == 0) {
LAB_143acf161:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143acf161;
  }
  atexit(FUN_143ac3012);
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
  *(undefined ***)local_70 = &PTR_FUN_14ae26620;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cb43570,L"fx.Niagara.TaskPriorities.Dump",L"Dump currently set priorities",
                &local_70);
  if (local_68 == 0) {
LAB_143acf242:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143acf242;
  }
  atexit(FUN_143ac3057);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
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
  *(undefined ***)local_70 = &PTR_FUN_14ae26690;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb43580,L"fx.Niagara.TaskPriorities.RunTest",L"Run a test set of priorites",
                &local_70);
  if (local_68 == 0) {
LAB_143acf323:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143acf323;
  }
  atexit(FUN_143ac309c);
  ppuStack_80 = &PTR_FUN_14ae21060;
  local_88 = (char **)0x0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae210c0,1,0);
  DAT_14cb43620 = 0;
  _DAT_14cb43628 = 0;
  atexit((_func_5014 *)&LAB_143ac3186);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = (char **)0x5;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae231b0,1,&PTR_FUN_14ae230e0);
  local_70 = "ActiveEmitters";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436c0 = (ulonglong)uVar3;
  local_70 = "ActiveRenderers";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436c8 = (ulonglong)uVar3;
  local_70 = "ActiveStatelessEmitters";
  local_68 = 0x17;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436d0 = (ulonglong)uVar3;
  local_70 = "GPUSimsMissingFixedBounds";
  local_68 = 0x19;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436d8 = (ulonglong)uVar3;
  local_70 = "EffectType";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436e0 = (ulonglong)uVar3;
  local_70 = "WarmupTime";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436e8 = (ulonglong)uVar3;
  local_70 = "HasOverrideScalabilityForSystem";
  local_68 = 0x1f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436f0 = (ulonglong)uVar3;
  local_70 = "HasDIsWithPostSimulateTick";
  local_68 = 0x1a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb436f8 = (ulonglong)uVar3;
  local_70 = "NeedsSortedSignificanceCull";
  local_68 = 0x1b;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43700 = (ulonglong)uVar3;
  local_70 = "ActiveDIs";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43708 = (ulonglong)uVar3;
  local_70 = "HasGPUEmitter";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43710 = (ulonglong)uVar3;
  local_70 = "FixedBoundsSize";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43718 = (ulonglong)uVar3;
  local_70 = "NumEmitters";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb43720 = (ulonglong)uVar3;
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cb43730,L"fx.EnableNiagaraRuntimeCycleCounts",&DAT_14cb43728,
                L"Toggle for runtime cylce counts tracking Niagara\'s frame time. \n");
  atexit(FUN_143ac3197);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb43740,L"fx.Niagara.Scalability.MinMaxDistance",&DAT_14c7629dc,
                L"Minimum value for Niagara\'s Max distance value. Primariy to prevent divide by zero issues and ensure a sensible distance value for sorted significance culling."
               );
  atexit(FUN_143ac31dc);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb43750,L"fx.Niagara.CompileWaitLoggingThreshold",&DAT_14c7629e0,
                L"During automation, how long do we wait for a compile result before logging.");
  atexit(FUN_143ac3221);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb43760,L"fx.Niagara.CompileWaitLoggingCap",&DAT_14c7629e4,
                L"During automation, how many times do we log before failing compilation?");
  atexit(FUN_143ac3266);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb43770,L"r.PSOPrecache.NiagaraPrecachePSOAtAssetLoadingTime",&DAT_14c7629e8,
                L"Controls whether Niagara systems start PSO precaching at asset loading time (1 = default) or only when activated (0)."
               );
  atexit(FUN_143ac32ab);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb43798,L"fx.WaitForAsyncStallWarnThresholdMS",&DAT_14cb437a8,
                L"If we stall in WaitForAsync for longer than this threshold then we emit a stall warning message."
               );
  atexit(FUN_143ac58bc);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb437b0,L"fx.LastRenderTimeSafetyBias",&DAT_14c762a18,
                L"The time to bias the LastRenderTime value to allow for the delay from it being written by the RT."
               );
  atexit(FUN_143ac5901);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb437c0,L"fx.Niagara.ForceLastTickGroup",&DAT_14cb437d0,
                L"Force Niagara ticks to be in the last tick group, this mirrors old behavour and can be useful to test for async overlapping issues."
               );
  atexit(FUN_143ac5946);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb437d8,L"fx.Niagara.EmitterBounds.DynamicSnapValue",&DAT_14cb437e8,
                L"The value used to snap (round up) dynamic bounds calculations to.For example, a snap of 128 and a value of 1 would result in 128"
               );
  atexit(FUN_143ac598b);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb437f0,L"fx.Niagara.EmitterBounds.DynamicExpandMultiplier",&DAT_14c7629ec,
                L"Multiplier used on dynamic bounds gathering, i.e. 1 means no change, 1.1 means increase by 10%.\nThis value is applied after we calculate any dynamic bounds snapping."
               );
  atexit(FUN_143ac59d0);
  local_88._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb43800,L"fx.Niagara.EmitterBounds.FixedExpandMultiplier",&DAT_14c7629f0,
                L"Multiplier used on fixed bounds gathering, i.e. 1 means no change, 1.1 means increase by 10%."
               );
  atexit(FUN_143ac5a15);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb43810,L"fx.Niagara.AllowDeferredReset",&DAT_14c7629f4,
                L"If we are running async work when a reset is requested we will instead queue for the finalize to perform, this avoid stalling the GameThread."
               );
  atexit(FUN_143ac5a5a);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb43820,L"fx.Niagara.gbxAllowOwnerToOverrideCustomTimeDilation",&local_70,
                L"Allow Niagara component\'s Owner to override its CustomTimeDilation");
  atexit(FUN_143ac5a9f);
  local_70 = "ByteCode";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb43858 = (ulonglong)uVar3;
  local_70 = "RapidIterationParameters";
  local_68 = 0x18;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb43860 = (ulonglong)uVar3;
  local_70 = "ScriptExecutionParamStore";
  local_68 = 0x19;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70);
  DAT_14cb43868 = (ulonglong)uVar3;
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
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
  *(undefined ***)local_70 = &PTR_FUN_14ae26a10;
  local_88 = (char **)((ulonglong)local_88._4_4_ << 0x20);
  FUN_14156bb10(&DAT_14cb43870,L"NiagaraReportSystemMemory",
                L"Dumps some rough information about system memory breakdown",&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_143acfa36;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143acfa36:
  atexit(FUN_143ac87b6);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43880,L"fx.DumpSystemData",&DAT_14cb43890,
                L"If > 0, results of system simulations will be dumped to the log. \n");
  atexit(FUN_143ac8fe2);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43898,L"fx.Niagara.SystemSimulation.UpdateOnSpawn",&DAT_14c762a00,
                L"If > 0, system simulations are given a small update after spawn. \n");
  atexit(FUN_143ac9027);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb438a8,L"fx.Niagara.SystemSimulation.AllowASync",&DAT_14c762a04,
                L"If > 0, system post tick is parallelized. \n");
  atexit(FUN_143ac906c);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb438b8,L"fx.Niagara.SystemSimulation.TaskStallTimeout",&DAT_14cb43854,
                L"Timeout in microseconds for Niagara simulation tasks to be considered stalled.\nWhen this is > 0 we busy wait as opposed to joining the TG so avoid using execpt for debugging."
               );
  atexit(FUN_143ac90b1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb438c8,L"fx.Niagara.SystemSimulation.TickBatchSize",&DAT_14c762a08,
                L"The number of system instances to process per async task. \n");
  atexit(FUN_143ac90f6);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb438d8,L"fx.Niagara.SystemSimulation.ConcurrentGPUTickInit",&DAT_14c762a0c,
                L"The if non zero we allow GPU Ticks to be initialized in the System\'s concurrent tick rather than on the game thread."
               );
  atexit(FUN_143ac913b);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb438e8,L"fx.Niagara.SystemSimulation.BatchGPUTickSubmit",&DAT_14c762a10,
                L"The if non zero we allow GPU Ticks to be submitted to the Render Thread in batches."
               );
  atexit(FUN_143ac9180);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb438f8,L"fx.Niagara.SystemSimulation.SkipTickDeltaSeconds",&DAT_14cb43908,
                L"When none zero we skip all ticks with a delta seconds less than equal to this number."
               );
  atexit(FUN_143ac91c5);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43910,L"fx.Niagara.SystemSimulation.MaxTickSubsteps",&DAT_14c762a14,
                L"The max number of possible substeps per frame when a system uses a fixed tick delta."
               );
  atexit(FUN_143ac920a);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb43920,L"fx.Niagara.SystemSimulation.TickTaskShouldWait",&DAT_14cb43930,
                L"When enabled the tick task will wait for concurrent work to complete, when disabled the task is complete once the GT tick is complete."
               );
  atexit(FUN_143ac924f);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43938,L"fx.Niagara.SystemSimulation.TickTaskAllowFrameOverlap",
                &DAT_14cb43948,
                L"When enabled we allow ticks to overlap beyond PostActorTick until either EOF updates or the next tick."
               );
  atexit(FUN_143ac9294);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143acfd04 FUN_143acfd04 body=1281 status=ok
// SIG undefined FUN_143acfd04(void)

void FUN_143acfd04(undefined1 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
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
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 1;
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 < 1) goto LAB_143acfe63;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_143acfd53;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) {
        iVar7 = *(int *)(param_1 + 0x28);
        goto LAB_143acfd58;
      }
      goto LAB_143acfdc4;
    }
  }
  else {
LAB_143acfd53:
    if (iVar4 != 0x10) {
LAB_143acfdc4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143ad01e3:
          iVar7 = *(int *)(param_1 + 0x28);
          goto LAB_143acfd5c;
        }
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143ad01e3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143acff28;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143ad8169);
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
LAB_143acff28:
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
              goto LAB_143acffa8;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143acffa8:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ae2f8b8;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ae2f880;
        local_68[0] = FUN_143ad80f4;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"InitBuffers",&DAT_14cb4441c);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
LAB_143acfe63:
      if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_143acfd58:
LAB_143acfd5c:
  local_70 = param_1 + 0x18;
  local_88 = (code **)CONCAT44(local_88._4_4_,iVar7);
  local_78 = 1;
  local_80 = 0xd;
  FUN_140661c88(param_1 + 0x38,&DAT_14ca85100,L"NiagaraSystemStaticBuffers",4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 143ad020b FUN_143ad020b body=55 status=ok
// SIG undefined FUN_143ad020b(void)

void FUN_143ad020b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b70 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b70 = FUN_14171c317(FUN_14647af86,uVar1,L"ENiagaraStructConversionType");
  }
  return;
}



// FUNCTION 143ad0242 FUN_143ad0242 body=55 status=ok
// SIG undefined FUN_143ad0242(void)

void FUN_143ad0242(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c18 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c18 = FUN_14171c317(FUN_14647b2d4,uVar1,L"ENiagaraNumericOutputTypeSelectionMode");
  }
  return;
}



// FUNCTION 143ad0279 FUN_143ad0279 body=55 status=ok
// SIG undefined FUN_143ad0279(void)

void FUN_143ad0279(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c30 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c30 = FUN_14171c317(FUN_14647b303,uVar1,L"ENiagaraExecutionStateSource");
  }
  return;
}



// FUNCTION 143ad02b0 FUN_143ad02b0 body=55 status=ok
// SIG undefined FUN_143ad02b0(void)

void FUN_143ad02b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c48 = FUN_14171c317(FUN_14647b332,uVar1,L"ENiagaraExecutionState");
  }
  return;
}



// FUNCTION 143ad02e7 FUN_143ad02e7 body=55 status=ok
// SIG undefined FUN_143ad02e7(void)

void FUN_143ad02e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c60 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c60 = FUN_14171c317(FUN_14647b363,uVar1,L"ENiagaraExecutionStateManagement");
  }
  return;
}



// FUNCTION 143ad031e FUN_143ad031e body=55 status=ok
// SIG undefined FUN_143ad031e(void)

void FUN_143ad031e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c78 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c78 = FUN_14171c317(FUN_14647b394,uVar1,L"ENiagaraCoordinateSpace");
  }
  return;
}



// FUNCTION 143ad0355 FUN_143ad0355 body=55 status=ok
// SIG undefined FUN_143ad0355(void)

void FUN_143ad0355(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c90 = FUN_14171c317(FUN_14647b3c3,uVar1,L"ENiagaraPythonUpdateScriptReference");
  }
  return;
}



// FUNCTION 143ad038c FUN_143ad038c body=55 status=ok
// SIG undefined FUN_143ad038c(void)

void FUN_143ad038c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ca8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ca8 = FUN_14171c317(FUN_14647b3f2,uVar1,L"ENiagaraOrientationAxis");
  }
  return;
}



// FUNCTION 143ad03c4 FUN_143ad03c4 body=181 status=ok
// SIG undefined FUN_143ad03c4(void)

uint * FUN_143ad03c4(longlong *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *param_1;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0xc);
    *param_2 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar4 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar3;
      }
    }
  }
  param_2[1] = uVar2;
  lVar4 = param_1[2];
  *(longlong *)(param_2 + 2) = param_1[1];
  *(longlong *)(param_2 + 4) = lVar4;
  return param_2;
}



// FUNCTION 143ad048a FUN_143ad048a body=41 status=ok
// SIG undefined FUN_143ad048a(void)

void FUN_143ad048a(void)

{
  DAT_14cb43df0 = 0;
  if (DAT_14cb43de8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d639e6();
  return;
}



// FUNCTION 143ad04b3 FUN_143ad04b3 body=55 status=ok
// SIG undefined FUN_143ad04b3(void)

void FUN_143ad04b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43e70 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43e70 = FUN_14171c317(FUN_14647b8b4,uVar1,L"ENiagaraValidationSeverity");
  }
  return;
}



// FUNCTION 143ad04ea FUN_143ad04ea body=55 status=ok
// SIG undefined FUN_143ad04ea(void)

void FUN_143ad04ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ea0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ea0 = FUN_14171c317(FUN_14647b93a,uVar1,L"ENiagaraVariantMode");
  }
  return;
}



// FUNCTION 143ad053e FUN_143ad053e body=69 status=ok
// SIG undefined FUN_143ad053e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad053e(void)

{
  _DAT_14cb43f70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43f78,1);
  return;
}



// FUNCTION 143ad0583 FUN_143ad0583 body=69 status=ok
// SIG undefined FUN_143ad0583(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0583(void)

{
  _DAT_14cb43f80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad05c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43f88,1);
  return;
}



// FUNCTION 143ad05c8 FUN_143ad05c8 body=69 status=ok
// SIG undefined FUN_143ad05c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad05c8(void)

{
  _DAT_14cb43f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad060a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43f98,1);
  return;
}



// FUNCTION 143ad060d FUN_143ad060d body=69 status=ok
// SIG undefined FUN_143ad060d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad060d(void)

{
  _DAT_14cb43fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad064f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43fa8,1);
  return;
}



// FUNCTION 143ad0652 FUN_143ad0652 body=69 status=ok
// SIG undefined FUN_143ad0652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0652(void)

{
  _DAT_14cb43fb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43fb8,1);
  return;
}



// FUNCTION 143ad0697 FUN_143ad0697 body=69 status=ok
// SIG undefined FUN_143ad0697(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0697(void)

{
  _DAT_14cb43fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad06d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43fc8,1);
  return;
}



// FUNCTION 143ad06dc FUN_143ad06dc body=69 status=ok
// SIG undefined FUN_143ad06dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad06dc(void)

{
  _DAT_14cb43fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad071e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43fd8,1);
  return;
}



// FUNCTION 143ad0721 FUN_143ad0721 body=69 status=ok
// SIG undefined FUN_143ad0721(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0721(void)

{
  _DAT_14cb43fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43fe8,1);
  return;
}



// FUNCTION 143ad0766 FUN_143ad0766 body=69 status=ok
// SIG undefined FUN_143ad0766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0766(void)

{
  _DAT_14cb43ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad07a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43ff8,1);
  return;
}



// FUNCTION 143ad07ab FUN_143ad07ab body=69 status=ok
// SIG undefined FUN_143ad07ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad07ab(void)

{
  _DAT_14cb44000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad07ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44008,1);
  return;
}



// FUNCTION 143ad07f0 FUN_143ad07f0 body=69 status=ok
// SIG undefined FUN_143ad07f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad07f0(void)

{
  _DAT_14cb44010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44018,1);
  return;
}



// FUNCTION 143ad0835 FUN_143ad0835 body=69 status=ok
// SIG undefined FUN_143ad0835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0835(void)

{
  _DAT_14cb44020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44028,1);
  return;
}



// FUNCTION 143ad087a FUN_143ad087a body=69 status=ok
// SIG undefined FUN_143ad087a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad087a(void)

{
  _DAT_14cb44038 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad08bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44040,1);
  return;
}



// FUNCTION 143ad08bf FUN_143ad08bf body=69 status=ok
// SIG undefined FUN_143ad08bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad08bf(void)

{
  _DAT_14cb44048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44050,1);
  return;
}



// FUNCTION 143ad0904 FUN_143ad0904 body=69 status=ok
// SIG undefined FUN_143ad0904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0904(void)

{
  _DAT_14cb44058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44060,1);
  return;
}



// FUNCTION 143ad0949 FUN_143ad0949 body=69 status=ok
// SIG undefined FUN_143ad0949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0949(void)

{
  _DAT_14cb44068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad098b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44070,1);
  return;
}



// FUNCTION 143ad098e FUN_143ad098e body=69 status=ok
// SIG undefined FUN_143ad098e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad098e(void)

{
  _DAT_14cb44078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44080,1);
  return;
}



// FUNCTION 143ad09d3 FUN_143ad09d3 body=69 status=ok
// SIG undefined FUN_143ad09d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad09d3(void)

{
  _DAT_14cb44088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44090,1);
  return;
}



// FUNCTION 143ad0a18 FUN_143ad0a18 body=41 status=ok
// SIG undefined FUN_143ad0a18(void)

void FUN_143ad0a18(void)

{
  DAT_14cb44498 = 0;
  if (DAT_14cb44490 != 0) {
    FUN_1400020a8();
  }
  FUN_145d63a84();
  return;
}



// FUNCTION 143ad0a4d FUN_143ad0a4d body=69 status=ok
// SIG undefined FUN_143ad0a4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad0a4d(void)

{
  _DAT_14cb44128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad0a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44130,1);
  return;
}



// FUNCTION 143ad0a92 FUN_143ad0a92 body=531 status=ok
// SIG undefined FUN_143ad0a92(void)

void FUN_143ad0a92(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  iVar2 = DAT_14cb44478;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb44478 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar7 = 0;
    iVar3 = 0;
  }
  else {
    puVar11 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar11 = DAT_14cb44470;
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar3 = DAT_14cb44478 + 0x1e;
      if (-1 < DAT_14cb44478 + -1) {
        iVar3 = DAT_14cb44478 + -1;
      }
      uVar12 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar13 == uVar12) goto LAB_143ad0b3c;
        iVar7 = iVar7 + 0x20;
        uVar8 = puVar11[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar13 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (DAT_14cb44478 <= iVar3) {
      iVar3 = DAT_14cb44478;
    }
  }
  if (iVar3 != DAT_14cb44478) {
    uVar8 = 0xffffffff;
    do {
      FUN_14012e468(&local_58,0x10,1,0);
      if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
        do {
          puVar11 = (uint *)(*(longlong *)(local_58 + (ulonglong)local_48 * 8) + 0x6f8);
          *puVar11 = *puVar11 | 4;
          lVar10 = (longlong)(int)local_48;
          do {
            lVar9 = lVar10;
            lVar10 = lVar9 + 1;
            local_48 = local_48 + 1;
            if (local_50 <= lVar10) goto LAB_143ad0bda;
          } while (*(longlong *)(local_58 + lVar10 * 8) == 0);
        } while ((-2 < lVar9) && ((int)local_48 < local_50));
      }
LAB_143ad0bda:
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 & ~(uint)uVar13;
      puVar11 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar11 = &DAT_14cb44460;
      }
      iVar3 = (int)uVar12;
      lVar10 = (longlong)iVar3;
      uVar6 = puVar11[lVar10] & uVar8;
      if (uVar6 == 0) {
        iVar4 = DAT_14cb44478 + 0x1e;
        if (-1 < DAT_14cb44478 + -1) {
          iVar4 = DAT_14cb44478 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar3 < iVar4) {
          lVar9 = 0;
          do {
            uVar6 = puVar11[lVar10 + lVar9 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar3 + (int)lVar9 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143ad0c5e;
            }
            iVar7 = iVar7 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar5 - lVar10 != lVar9);
          uVar8 = 0xffffffff;
          iVar3 = iVar5;
        }
        uVar12 = (ulonglong)(iVar3 + 1);
        iVar3 = DAT_14cb44478;
      }
      else {
LAB_143ad0c5e:
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar3 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (DAT_14cb44478 <= iVar3) {
          iVar3 = DAT_14cb44478;
        }
      }
    } while (iVar3 != iVar2);
  }
LAB_143ad0b3c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ad0ca6 FUN_143ad0ca6 body=1553 status=ok
// SIG undefined FUN_143ad0ca6(void)

longlong * FUN_143ad0ca6(longlong param_1,longlong *param_2,uint param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  longlong *plVar30;
  
  uVar12 = 6;
  if ((int)param_3 < 6) {
    uVar12 = param_3;
  }
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  uVar24 = uVar12;
  if (*(uint *)(param_1 + 0x18) == uVar12) {
    uVar24 = 5;
    if ((int)param_3 < 5) {
      uVar24 = param_3;
    }
    uVar27 = 0xffffffff;
    if (-1 < (int)uVar24) {
      uVar27 = uVar24;
    }
    uVar24 = uVar27 + 1;
    if (uVar27 + 1 == uVar12) {
      uVar24 = 0;
    }
  }
  lVar4 = param_1 + (ulonglong)uVar24 * 0x50;
  plVar30 = (longlong *)(lVar4 + 0x1c0);
  if (*(int *)(lVar4 + 0x1c8) != *(int *)(lVar4 + 500)) {
    uVar12 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    lVar25 = lVar4 + 0x1f8;
    if (*(longlong *)(lVar4 + 0x200) != 0) {
      lVar25 = *(longlong *)(lVar4 + 0x200);
    }
    iVar20 = *(int *)(lVar25 + (ulonglong)(*(int *)(lVar4 + 0x208) - 1U & (uVar12 >> 0x10 ^ uVar12))
                               * 4);
    if (iVar20 != -1) {
      do {
        lVar25 = *plVar30 + (longlong)iVar20 * 0x20;
        if (*(ulonglong *)(*plVar30 + (longlong)iVar20 * 0x20) == param_4) {
          if ((lVar25 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(longlong *)(lVar25 + 8);
            lVar4 = *(longlong *)(lVar25 + 0x10);
            param_2[1] = lVar4;
            if (lVar4 == 0) {
              return param_2;
            }
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            return param_2;
          }
          break;
        }
        iVar20 = *(int *)(lVar25 + 0x18);
      } while (iVar20 != -1);
    }
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x590,0x10);
  puVar16[1] = &DAT_100000001;
  *puVar16 = &PTR_FUN_14ae26cf0;
  puVar1 = puVar16 + 2;
  FUN_143ac93ec(puVar1);
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar16;
  FUN_143acc8ee(param_2,puVar1);
  if (*(int *)(lVar4 + 500) == 0) {
    iVar20 = *(int *)(lVar4 + 0x1c8);
    *(int *)(lVar4 + 0x1c8) = iVar20 + 1;
    if (*(int *)(lVar4 + 0x1cc) == iVar20) {
      FUN_1447711aa(plVar30,iVar20);
    }
    iVar13 = *(int *)(lVar4 + 0x1e8);
    if (iVar13 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar21 = iVar13 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    lVar17 = lVar4 + 0x1d0;
    iVar22 = iVar13 + 1;
    iVar29 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar29 = iVar13;
    }
    if (iVar29 >> 5 == iVar21) {
      *(int *)(lVar4 + 0x1e8) = iVar22;
    }
    else {
      if (*(int *)(lVar4 + 0x1ec) <= iVar13) {
        iVar21 = iVar13;
        if (iVar13 + 0x20U < 0xa0) {
          iVar22 = 0x80;
        }
        else {
          uVar12 = iVar13 + 0x20U >> 5;
          if (*(int *)(lVar4 + 0x1ec) + 0x1fU < 0xa0) {
            uVar27 = 4;
            if (4 < uVar12) {
              uVar27 = uVar12;
            }
          }
          else {
            uVar27 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar27 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar18 + 0xf);
              if (uVar27 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
              }
              else {
                uVar23 = (ulonglong)(uVar14 & 0xfffffff0);
                if (uVar23 < 0x7ff1) {
                  bVar19 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar26 = 0x32;
                  if (0x32 < bVar19) {
                    uVar26 = (ulonglong)bVar19;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar19;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_143ad1174;
                    lVar25 = uVar26 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar25 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar23 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar21 = *(int *)(lVar4 + 0x1e8);
            }
          }
LAB_143ad1174:
          iVar15 = (int)(uVar18 >> 2);
          iVar22 = -0x20;
          if ((int)uVar12 <= iVar15) {
            iVar22 = iVar15 << 5;
          }
        }
        *(int *)(lVar4 + 0x1ec) = iVar22;
        FUN_1446efbd8(lVar17,iVar21);
        iVar22 = *(int *)(lVar4 + 0x1e8) + 1;
      }
      iVar21 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar21 = iVar22;
      }
      *(int *)(lVar4 + 0x1e8) = iVar22;
      if (iVar22 % 0x20 != 0) {
        lVar25 = *(longlong *)(lVar4 + 0x1e0);
        if (*(longlong *)(lVar4 + 0x1e0) == 0) {
          lVar25 = lVar17;
        }
        bVar19 = -(char)(iVar22 % 0x20);
        *(uint *)(lVar25 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)(lVar25 + (longlong)(iVar21 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar25 = (longlong)iVar20;
    if (*(longlong *)(lVar4 + 0x1e0) != 0) {
      lVar17 = *(longlong *)(lVar4 + 0x1e0);
    }
    bVar19 = (byte)iVar13 & 0x1f;
    puVar5 = (uint *)(lVar17 + (longlong)(iVar29 >> 5) * 4);
    *puVar5 = *puVar5 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar20 = *(int *)(lVar4 + 0x1f0);
    lVar25 = (longlong)iVar20;
    iVar13 = *(int *)(*plVar30 + 4 + lVar25 * 0x20);
    *(int *)(lVar4 + 0x1f0) = iVar13;
    iVar21 = *(int *)(lVar4 + 500) + -1;
    *(int *)(lVar4 + 500) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*plVar30 + (longlong)iVar13 * 0x20) = 0xffffffff;
    }
  }
  lVar17 = lVar4 + 0x1d0;
  if (*(longlong *)(lVar4 + 0x1e0) != 0) {
    lVar17 = *(longlong *)(lVar4 + 0x1e0);
  }
  iVar13 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar13 = iVar20;
  }
  puVar5 = (uint *)(lVar17 + (longlong)(iVar13 >> 5) * 4);
  *puVar5 = *puVar5 | 1 << ((byte)iVar20 & 0x1f);
  iVar13 = 1;
  lVar17 = *plVar30;
  lVar25 = lVar25 * 0x20;
  puVar6 = (ulonglong *)(lVar17 + lVar25);
  *(ulonglong *)(lVar17 + lVar25) = param_4;
  *(longlong *)(lVar17 + 8 + lVar25) = *param_2;
  lVar8 = param_2[1];
  *(longlong *)(lVar17 + 0x10 + lVar25) = lVar8;
  uVar18 = param_4;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar18 = *puVar6;
  }
  *(undefined4 *)(puVar6 + 3) = 0xffffffff;
  uVar12 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  uVar27 = *(int *)(lVar4 + 0x1c8) - *(int *)(lVar4 + 500);
  if (uVar27 != 1) {
    if (*(int *)(lVar4 + 0x1c8) != *(int *)(lVar4 + 500)) {
      lVar25 = lVar4 + 0x1f8;
      if (*(longlong *)(lVar4 + 0x200) != 0) {
        lVar25 = *(longlong *)(lVar4 + 0x200);
      }
      iVar21 = *(int *)(lVar25 + (ulonglong)(*(int *)(lVar4 + 0x208) - 1U & uVar12) * 4);
      if (iVar21 != -1) {
        do {
          puVar7 = (undefined4 *)(*plVar30 + (longlong)iVar21 * 0x20);
          if (*(ulonglong *)(*plVar30 + (longlong)iVar21 * 0x20) == uVar18) {
            plVar9 = *(longlong **)(puVar7 + 4);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar9 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar9)();
                LOCK();
                piVar3 = (int *)((longlong)plVar9 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
              }
            }
            uVar18 = *puVar6;
            uVar10 = *(undefined4 *)((longlong)puVar6 + 4);
            uVar23 = puVar6[1];
            uVar11 = *(undefined4 *)((longlong)puVar6 + 0xc);
            *(ulonglong *)(puVar7 + 4) = puVar6[2];
            *puVar7 = (int)uVar18;
            puVar7[1] = uVar10;
            puVar7[2] = (int)uVar23;
            puVar7[3] = uVar11;
            FUN_14820849c(plVar30,iVar20);
            goto LAB_143ad0f8d;
          }
          iVar21 = puVar7[6];
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar27) {
      uVar18 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar25 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar25 & 0x1f);
    }
  }
  if (((int)uVar27 < 1) || (iVar13 <= *(int *)(lVar4 + 0x208))) {
    uVar12 = *(int *)(lVar4 + 0x208) - 1U & uVar12;
    *(uint *)((longlong)puVar6 + 0x1c) = uVar12;
    lVar25 = *(longlong *)(lVar4 + 0x200);
    if (*(longlong *)(lVar4 + 0x200) == 0) {
      lVar25 = lVar4 + 0x1f8;
    }
    *(undefined4 *)(puVar6 + 3) =
         *(undefined4 *)
          (lVar25 + ((longlong)*(int *)(lVar4 + 0x208) - 1U & (longlong)(int)uVar12) * 4);
    lVar25 = *(longlong *)(lVar4 + 0x200);
    if (*(longlong *)(lVar4 + 0x200) == 0) {
      lVar25 = lVar4 + 0x1f8;
    }
    *(int *)(lVar25 + ((longlong)*(int *)(lVar4 + 0x208) - 1U & (longlong)(int)uVar12) * 4) = iVar20
    ;
  }
  else {
    *(int *)(lVar4 + 0x208) = iVar13;
    FUN_14032d9b6(plVar30);
  }
LAB_143ad0f8d:
  FUN_143ac5c84(*param_2,param_4,*(undefined8 *)(param_1 + 0x10),0,param_3);
  if ((*(byte *)(param_4 + 0x4f8) & 8) == 0) {
    *(char *)(param_1 + 0x29 + (ulonglong)uVar24 * 0x30) = (char)uVar24;
  }
  return param_2;
}



// FUNCTION 143ad12b8 FUN_143ad12b8 body=500 status=ok
// SIG undefined FUN_143ad12b8(void)

void FUN_143ad12b8(longlong param_1,longlong param_2,double *param_3,float param_4,byte param_5,
                  longlong param_6)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  double *pdVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (DAT_14cb444a0 != '\0') {
    return;
  }
  uVar5 = *(uint *)(param_2 + 0x50);
  if ((uVar5 & 2) == 0) {
LAB_143ad1404:
    *(float *)(param_6 + 4) = (float)*(double *)(*(longlong *)(param_1 + 0x10) + 0x6d0);
    uVar5 = *(uint *)(param_2 + 0x50);
    fVar9 = 0.0;
    if ((uVar5 & 2) != 0) goto LAB_143ad1448;
  }
  else {
    lVar6 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x1b10) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1b10);
    }
    if ((longlong)*(int *)(param_1 + 0x1b20) == 0) goto LAB_143ad1404;
    lVar7 = (longlong)*(int *)(param_1 + 0x1b20) * 0x2e0 + lVar6;
    bVar2 = false;
    do {
      if (!bVar2) {
        lVar3 = lVar6 + 0x200;
        if (*(longlong *)(lVar6 + 0x2c0) != 0) {
          lVar3 = *(longlong *)(lVar6 + 0x2c0);
        }
        if ((longlong)*(int *)(lVar6 + 0x2d0) != 0) {
          pdVar4 = (double *)(lVar3 + 0x18);
          do {
            if ((9.999999747378752e-05 < ABS(pdVar4[-3])) ||
               (9.999999747378752e-05 < ABS(pdVar4[-2]))) {
              uVar10 = SUB84(pdVar4[-1],0);
              uVar11 = (undefined4)((ulonglong)pdVar4[-1] >> 0x20);
LAB_143ad13bb:
              if (param_3[3] <
                  ((double)CONCAT44(uVar11,uVar10) * param_3[2] +
                  pdVar4[-3] * *param_3 + pdVar4[-2] * param_3[1]) - *pdVar4) goto LAB_143ad133e;
            }
            else {
              dVar1 = pdVar4[-1];
              uVar10 = SUB84(dVar1,0);
              uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
              if (9.999999747378752e-05 < ABS(dVar1)) goto LAB_143ad13bb;
            }
            pdVar8 = pdVar4 + 1;
            pdVar4 = pdVar4 + 4;
          } while (pdVar8 != (double *)((longlong)*(int *)(lVar6 + 0x2d0) * 0x20 + lVar3));
        }
      }
      bVar2 = true;
LAB_143ad133e:
      lVar6 = lVar6 + 0x2e0;
    } while (lVar6 != lVar7);
    if (bVar2) goto LAB_143ad1404;
    fVar9 = (float)(*(double *)(*(longlong *)(param_1 + 0x10) + 0x6d0) -
                   (double)*(float *)(param_6 + 4));
LAB_143ad1448:
    if ((param_5 & (uVar5 & 4) == 0) == 0) {
      bVar2 = *(float *)(param_2 + 0x54) <= fVar9 && fVar9 != *(float *)(param_2 + 0x54);
      goto LAB_143ad1464;
    }
  }
  bVar2 = false;
LAB_143ad1464:
  if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x1c00) != '\0')) {
    bVar2 = (bool)((*(float *)(param_2 + 0x58) <= param_4 && param_4 != *(float *)(param_2 + 0x58))
                  | bVar2);
  }
  *(byte *)(param_6 + 10) =
       *(byte *)(param_6 + 10) & 0xfb | (*(byte *)(param_6 + 10) >> 2 & 1 | bVar2) << 2;
  return;
}



// FUNCTION 143ad14ac FUN_143ad14ac body=425 status=ok
// SIG undefined FUN_143ad14ac(void)

void FUN_143ad14ac(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (DAT_14cb444a0 == '\0') {
    uVar1 = *(uint *)(param_3 + 0x30);
    iVar5 = *(int *)(param_3 + 0x3c);
    bVar4 = false;
    bVar3 = false;
    if ((uVar1 & 2) != 0) {
      bVar3 = iVar5 <= *(int *)(param_1 + 0x70);
    }
    iVar6 = *(int *)(param_3 + 0x40);
    if ((uVar1 & 4) != 0) {
      bVar4 = iVar6 <= *(int *)(param_2 + 0x4fc);
    }
    bVar4 = (bool)(bVar4 | bVar3);
    if ((((DAT_14c762a48 != 0) && (DAT_14caf2ef8 == '\x01')) && (!bVar4)) &&
       ((DAT_14c76292c & 1) != 0)) {
      uVar2 = *(uint *)(param_3 + 0x5c);
      if ((uVar2 & 0xc) == 0) {
        bVar4 = false;
      }
      else {
        if ((uVar2 & 4) != 0) {
          fVar7 = *(float *)(param_3 + 0x74);
          if (DAT_14caf2f10 <= fVar7) {
            fVar7 = *(float *)(param_3 + 0x78);
          }
          else if (*(float *)(param_3 + 0x7c) <= DAT_14caf2f10) {
            fVar7 = *(float *)(param_3 + 0x80);
          }
          else {
            fVar7 = (*(float *)(param_3 + 0x80) - *(float *)(param_3 + 0x78)) *
                    ((DAT_14caf2f10 - fVar7) / (*(float *)(param_3 + 0x7c) - fVar7)) +
                    *(float *)(param_3 + 0x78);
          }
          iVar5 = (int)((float)iVar5 * fVar7);
        }
        if ((uVar2 & 8) != 0) {
          fVar7 = *(float *)(param_3 + 0x84);
          if (DAT_14caf2f10 <= fVar7) {
            fVar7 = *(float *)(param_3 + 0x88);
          }
          else if (*(float *)(param_3 + 0x8c) <= DAT_14caf2f10) {
            fVar7 = *(float *)(param_3 + 0x90);
          }
          else {
            fVar7 = (*(float *)(param_3 + 0x90) - *(float *)(param_3 + 0x88)) *
                    ((DAT_14caf2f10 - fVar7) / (*(float *)(param_3 + 0x8c) - fVar7)) +
                    *(float *)(param_3 + 0x88);
          }
          iVar6 = (int)((float)iVar6 * fVar7);
        }
        bVar4 = false;
        bVar3 = false;
        if ((uVar1 & 2) != 0) {
          bVar3 = iVar5 <= *(int *)(param_1 + 0x70);
        }
        if ((uVar1 & 4) != 0) {
          bVar4 = iVar6 <= *(int *)(param_2 + 0x4fc);
        }
        bVar4 = (bool)(bVar4 | bVar3);
        *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) | bVar4 * '\x04';
      }
    }
    *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) | bVar4 << 2;
  }
  return;
}



// FUNCTION 143ad1655 FUN_143ad1655 body=1130 status=ok
// SIG undefined FUN_143ad1655(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad1655(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_168 [44];
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_104 [12];
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar3 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar3 + 0x60;
  lVar1 = *(longlong *)(param_1 + 0xf8) + uVar3;
  local_120 = DAT_14c846330;
  local_118 = DAT_14c846338;
  local_130 = DAT_14c846330;
  local_128 = DAT_14c846338;
  piVar2 = (int *)(*(longlong *)(param_1 + 0xf8) + uVar3);
  FUN_148206f68(param_1,piVar2 + 0xf);
  if (*piVar2 == 2) {
    local_e0 = DAT_14c846384;
    local_e8 = DAT_14c84637c;
    fStack_e4 = _DAT_14c846380;
    local_f0 = DAT_14c846384;
    local_f8 = local_e8;
    fStack_f4 = fStack_e4;
    FUN_148206f68(param_1,lVar1 + 0x20,local_104,&local_e8);
    FUN_148206f68(param_1,lVar1 + 4,local_104,&local_f8);
    fVar6 = local_e0 * local_e0 + local_e8 * local_e8 + fStack_e4 * fStack_e4;
    if (((fVar6 != 1.0) || (fVar7 = local_e8, fVar8 = fStack_e4, fVar4 = local_e0, NAN(fVar6))) &&
       (fVar7 = DAT_14c84637c, fVar8 = _DAT_14c846380, fVar4 = DAT_14c846384, 0.0001 <= fVar6)) {
      fVar7 = 1.0 / SQRT(fVar6);
      fVar4 = local_e0 * fVar7;
      fVar8 = fStack_e4 * fVar7;
      fVar7 = local_e8 * fVar7;
    }
    _local_e8 = CONCAT44(fVar8,fVar7);
    fVar6 = local_f0 * local_f0 + local_f8 * local_f8 + fStack_f4 * fStack_f4;
    if (((fVar6 != 1.0) || (fVar7 = local_f8, fVar8 = fStack_f4, fVar5 = local_f0, NAN(fVar6))) &&
       (fVar7 = DAT_14c84637c, fVar8 = _DAT_14c846380, fVar5 = DAT_14c846384, 0.0001 <= fVar6)) {
      fVar7 = 1.0 / SQRT(fVar6);
      fVar5 = local_f0 * fVar7;
      fVar8 = fStack_f4 * fVar7;
      fVar7 = local_f8 * fVar7;
    }
    _local_f8 = CONCAT44(fVar8,fVar7);
    local_f0 = fVar5;
    local_e0 = fVar4;
    FUN_1467fb7de(&local_d8,&local_e8);
    FUN_1467f5e0c(&local_d8,&local_110);
    local_108 = local_108 + (float)local_130;
    local_110 = local_110 + local_130._4_4_;
    local_10c = local_10c + local_128;
  }
  else {
    local_108 = (float)local_130;
    local_110 = local_130._4_4_;
    local_10c = local_128;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fVar6 = (float)local_120 * 0.0027777778;
    fVar7 = local_120._4_4_ * 0.0027777778;
    fVar8 = local_118 * 0.0027777778;
    uVar3 = 0;
    do {
      local_dc = *(int *)(param_1 + 0x18) + 0x1905;
      local_e0 = (float)(*(int *)(*(longlong *)(param_1 + 0x60) + uVar3 * 4) + 0xdfd);
      _local_e8 = CONCAT44(*(undefined4 *)(param_1 + 0x14),0x1bd3);
      FUN_148204234(&local_d8,&local_e8);
      local_134 = (float)(local_d0 >> 8) * 5.9604645e-08 * fVar8 + local_10c * 0.0027777778;
      local_138 = (float)(local_d4 >> 8) * 5.9604645e-08 * fVar7 + local_110 * 0.0027777778;
      local_13c = (float)(local_d8 >> 8) * 5.9604645e-08 * fVar6 + local_108 * 0.0027777778;
      FUN_14806dde6(&local_d8,&local_13c);
      FUN_14806e29c(param_1,*(undefined4 *)(lVar1 + 0x58),uVar3 & 0xffffffff,&local_d8);
      FUN_14806e29c(param_1,*(undefined4 *)(lVar1 + 0x5c),uVar3 & 0xffffffff,&local_d8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ad1ac0 FUN_143ad1ac0 body=489 status=ok
// SIG undefined FUN_143ad1ac0(void)

void FUN_143ad1ac0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar10 + 0x10;
  lVar2 = *(longlong *)(param_1 + 0xf8);
  uVar8 = *(uint *)(lVar2 + uVar10);
  uVar3 = uVar8 & 0x7fffffff;
  if ((int)uVar8 < 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 << 2));
  }
  uVar8 = *(uint *)(param_1 + 8);
  if (*(int *)(lVar2 + 8 + uVar10) < 1) {
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        lVar9 = (longlong)*(int *)(lVar2 + 0xc + uVar10);
        if (-1 < lVar9) {
          lVar5 = *(longlong *)(param_1 + 0xe8);
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            lVar5 = param_1 + 0x68;
          }
          *(uint *)(*(longlong *)(lVar5 + lVar9 * 8) + (longlong)(int)uVar6 * 4) = uVar3;
          uVar8 = *(uint *)(param_1 + 8);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  else if (uVar8 != 0) {
    lVar9 = 0;
    do {
      local_8c = *(undefined4 *)(param_1 + 0x14);
      local_84 = *(int *)(param_1 + 0x18) + 0x1905;
      local_88 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar9 * 4) + 0xdfd;
      local_90 = 0x1bd3;
      FUN_148204234(&local_80,&local_90);
      fVar11 = (float)(local_7c >> 8) * 5.9604645e-08;
      fVar12 = (float)*(int *)(lVar2 + 8 + uVar10) * (float)(local_80 >> 8) * 5.9604645e-08;
      uVar3 = (uint)ROUND(fVar12 + fVar12 + 0.5);
      iVar4 = *(int *)(lVar2 + 4 + uVar10);
      pfVar1 = (float *)(*(longlong *)(param_1 + 0x120) +
                        (longlong)(int)((uVar3 & 0xfffffffe) + iVar4) * 4);
      if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
        iVar4 = (int)uVar3 >> 1;
      }
      else {
        iVar4 = (int)*(float *)(*(longlong *)(param_1 + 0x120) +
                               (longlong)(int)(iVar4 + (uVar3 | 1)) * 4);
      }
      lVar5 = (longlong)*(int *)(lVar2 + 0xc + uVar10);
      if (-1 < lVar5) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = param_1 + 0x68;
        }
        *(int *)(*(longlong *)(lVar7 + lVar5 * 8) + (longlong)(int)lVar9 * 4) = iVar4;
        uVar8 = *(uint *)(param_1 + 8);
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < uVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ad1caa FUN_143ad1caa body=1119 status=ok
// SIG undefined FUN_143ad1caa(void)

void FUN_143ad1caa(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float *local_a0;
  float *local_98;
  ulonglong uVar15;
  
  uVar11 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar11 + 0x5c;
  lVar4 = *(longlong *)(param_1 + 0xf8);
  uVar14 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  uVar15 = (ulonglong)uVar14;
  lVar7 = FUN_145e059f6();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar7 + 0x3c) + uVar14;
  if (*(int *)(param_1 + 8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x110);
    lVar7 = param_1 + 0x68;
    uVar14 = 0;
    do {
      pfVar13 = (float *)&DAT_14c846350;
      lVar18 = (longlong)*(int *)(lVar4 + 0x4c + uVar11);
      lVar25 = (longlong)(int)uVar14;
      pfVar20 = (float *)&DAT_14c846350;
      pfVar9 = (float *)((longlong)&DAT_14c846350 + 4);
      pfVar19 = (float *)&DAT_14c846358;
      if (-1 < lVar18) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        pfVar20 = (float *)(lVar25 * 4 + *(longlong *)(lVar8 + lVar18 * 8));
        pfVar19 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar20);
        pfVar9 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar20);
      }
      lVar18 = (longlong)*(int *)(lVar4 + 0x50 + uVar11);
      pfVar22 = (float *)&DAT_14c846350;
      pfVar21 = (float *)((longlong)&DAT_14c846350 + 4);
      pfVar24 = (float *)&DAT_14c846358;
      if (-1 < lVar18) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        pfVar22 = (float *)(lVar25 * 4 + *(longlong *)(lVar8 + lVar18 * 8));
        pfVar24 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar22);
        pfVar21 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar22);
      }
      pfVar16 = (float *)((longlong)&DAT_14c846350 + 4);
      iVar3 = *(int *)(lVar4 + 0x54 + uVar11);
      lVar18 = (longlong)iVar3;
      local_a0 = (float *)&DAT_14c846358;
      local_98 = (float *)((longlong)&DAT_14c846350 + 4);
      if (-1 < lVar18) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        pfVar13 = (float *)(lVar25 * 4 + *(longlong *)(lVar8 + lVar18 * 8));
        local_a0 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar13);
        local_98 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar13);
      }
      uVar17 = *(uint *)(lVar4 + 0x58 + uVar11);
      pfVar12 = (float *)&DAT_14c846358;
      pfVar23 = (float *)&DAT_14c846350;
      if (-1 < (longlong)(int)uVar17) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        pfVar23 = (float *)(lVar25 * 4 + *(longlong *)(lVar8 + (longlong)(int)uVar17 * 8));
        pfVar12 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar23);
        pfVar16 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar23);
      }
      fVar28 = *(float *)(param_1 + 0x10);
      fVar26 = (*pfVar19 - *pfVar24) * fVar28;
      fVar27 = (*pfVar9 - *pfVar21) * fVar28;
      fVar28 = (*pfVar20 - *pfVar22) * fVar28;
      fVar28 = (fVar26 * fVar26 + fVar28 * fVar28 + fVar27 * fVar27) *
               *(float *)(lVar5 + 0x28 + uVar15);
      uVar10 = *(ulonglong *)(lVar5 + 0x20 + uVar15);
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      fVar28 = (float)(uVar10 >> 0x20) * fVar28;
      iVar6 = (int)uVar10;
      fVar26 = *(float *)(*(longlong *)(param_1 + 0x120) +
                         (longlong)(((int)ROUND(fVar28 + fVar28 + -0.5) >> 1) + iVar6) * 4);
      auVar29 = roundss(ZEXT816(0),ZEXT416((uint)fVar28),0xb);
      fVar26 = (*(float *)(*(longlong *)(param_1 + 0x120) +
                          (longlong)(iVar6 - ((int)ROUND(-0.5 - (fVar28 + fVar28)) >> 1)) * 4) -
               fVar26) * (fVar28 - auVar29._0_4_) + fVar26;
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar30 = *(float *)(lVar5 + 0x18 + uVar15) * fVar26 + *(float *)(lVar5 + 8 + uVar15);
      fVar32 = *(float *)(lVar5 + 0x14 + uVar15) * fVar26 + *(float *)(lVar5 + 4 + uVar15);
      fVar31 = fVar26 * *(float *)(lVar5 + 0x10 + uVar15) + *(float *)(lVar5 + uVar15);
      fVar28 = *pfVar23;
      fVar26 = *pfVar16;
      fVar27 = *pfVar12;
      if (-1 < iVar3) {
        fVar1 = *local_a0;
        fVar2 = *local_98;
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        *(float *)(*(longlong *)(lVar8 + lVar18 * 8) + lVar25 * 4) = fVar31 * *pfVar13;
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar8 + lVar18 * 8) +
                  lVar25 * 4) = fVar32 * fVar2;
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar8 + lVar18 * 8) + lVar25 * 4) = fVar30 * fVar1;
        uVar17 = *(uint *)(lVar4 + 0x58 + uVar11);
      }
      if (-1 < (int)uVar17) {
        lVar18 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar18 = lVar7;
        }
        uVar10 = (ulonglong)uVar17;
        *(float *)(*(longlong *)(lVar18 + uVar10 * 8) + lVar25 * 4) = fVar28 * fVar31;
        lVar18 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar18 = lVar7;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar18 + uVar10 * 8) +
                  lVar25 * 4) = fVar26 * fVar32;
        lVar18 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar18 = lVar7;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar18 + uVar10 * 8) + lVar25 * 4) = fVar27 * fVar30;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 143ad2109 FUN_143ad2109 body=1039 status=ok
// SIG undefined FUN_143ad2109(void)

void FUN_143ad2109(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  ulonglong uVar10;
  
  uVar7 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar7 + 0x4c;
  lVar2 = *(longlong *)(param_1 + 0xf8);
  uVar9 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  uVar10 = (ulonglong)uVar9;
  lVar5 = FUN_145dfe8c2();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar5 + 0x3c) + uVar9;
  if (*(int *)(param_1 + 8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar5 = param_1 + 0x68;
    uVar9 = 0;
    do {
      pfVar11 = (float *)&DAT_14c846358;
      lVar14 = (longlong)*(int *)(lVar2 + 0x3c + uVar7);
      lVar19 = (longlong)(int)uVar9;
      pfVar12 = (float *)&DAT_14c846350;
      pfVar18 = (float *)((longlong)&DAT_14c846350 + 4);
      pfVar13 = (float *)&DAT_14c846358;
      if (-1 < lVar14) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        pfVar12 = (float *)(lVar19 * 4 + *(longlong *)(lVar8 + lVar14 * 8));
        pfVar13 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar12);
        pfVar18 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar12);
      }
      lVar14 = (longlong)*(int *)(lVar2 + 0x40 + uVar7);
      pfVar16 = (float *)&DAT_14c846350;
      pfVar15 = (float *)((longlong)&DAT_14c846350 + 4);
      if (-1 < lVar14) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        pfVar16 = (float *)(lVar19 * 4 + *(longlong *)(lVar8 + lVar14 * 8));
        pfVar11 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar16);
        pfVar15 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar16);
      }
      iVar1 = *(int *)(lVar2 + 0x44 + uVar7);
      lVar14 = (longlong)iVar1;
      fVar20 = DAT_14c8461b4._4_4_;
      fVar22 = (float)DAT_14c8461b4;
      if (-1 < lVar14) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        lVar8 = *(longlong *)(lVar8 + lVar14 * 8);
        fVar20 = *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + lVar8 + lVar19 * 4);
        fVar22 = *(float *)(lVar8 + lVar19 * 4);
      }
      uVar17 = *(uint *)(lVar2 + 0x48 + uVar7);
      fVar21 = DAT_14c8461b4._4_4_;
      fVar23 = (float)DAT_14c8461b4;
      if (-1 < (longlong)(int)uVar17) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        lVar8 = *(longlong *)(lVar8 + (longlong)(int)uVar17 * 8);
        fVar21 = *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + lVar8 + lVar19 * 4);
        fVar23 = *(float *)(lVar8 + lVar19 * 4);
      }
      fVar26 = *(float *)(param_1 + 0x10);
      fVar24 = (*pfVar13 - *pfVar11) * fVar26;
      fVar25 = (*pfVar18 - *pfVar15) * fVar26;
      fVar26 = (*pfVar12 - *pfVar16) * fVar26;
      fVar26 = (fVar24 * fVar24 + fVar26 * fVar26 + fVar25 * fVar25) *
               *(float *)(lVar3 + 0x18 + uVar10);
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      uVar4 = *(ulonglong *)(lVar3 + 0x10 + uVar10);
      fVar26 = (float)(uVar4 >> 0x20) * fVar26;
      iVar6 = (int)uVar4;
      fVar24 = *(float *)(*(longlong *)(param_1 + 0x120) +
                         (longlong)(((int)ROUND(fVar26 + fVar26 + -0.5) >> 1) + iVar6) * 4);
      auVar27 = roundss(ZEXT816(0),ZEXT416((uint)fVar26),0xb);
      fVar24 = (*(float *)(*(longlong *)(param_1 + 0x120) +
                          (longlong)(iVar6 - ((int)ROUND(-0.5 - (fVar26 + fVar26)) >> 1)) * 4) -
               fVar24) * (fVar26 - auVar27._0_4_) + fVar24;
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar25 = *(float *)(lVar3 + 0xc + uVar10) * fVar24 + *(float *)(lVar3 + 4 + uVar10);
      fVar26 = fVar24 * *(float *)(lVar3 + 8 + uVar10) + *(float *)(lVar3 + uVar10);
      if (-1 < iVar1) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        *(float *)(*(longlong *)(lVar8 + lVar14 * 8) + lVar19 * 4) = fVar22 * fVar26;
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar5;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar8 + lVar14 * 8) +
                  lVar19 * 4) = fVar20 * fVar25;
        uVar17 = *(uint *)(lVar2 + 0x48 + uVar7);
      }
      if (-1 < (int)uVar17) {
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar5;
        }
        *(float *)(*(longlong *)(lVar14 + (ulonglong)uVar17 * 8) + lVar19 * 4) = fVar26 * fVar23;
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar5;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) +
                   *(longlong *)(lVar14 + (ulonglong)uVar17 * 8) + lVar19 * 4) = fVar25 * fVar21;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 143ad2518 FUN_143ad2518 body=534 status=ok
// SIG undefined FUN_143ad2518(void)

void FUN_143ad2518(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined1 auStack_78 [36];
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = *(int *)(param_1 + 0x108) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x108) = uVar7 + 0x40;
  if (*(int *)(param_1 + 8) != 0) {
    lVar13 = (longlong)(int)uVar7 + *(longlong *)(param_1 + 0xf8);
    lVar1 = param_1 + 0x68;
    uVar7 = 0;
    do {
      FUN_1481ffeca(&local_54,param_1,lVar13,uVar7);
      lVar9 = (longlong)*(int *)(lVar13 + 0x30);
      lVar8 = (longlong)(int)uVar7;
      pfVar14 = (float *)&DAT_14c846330;
      pfVar10 = (float *)((longlong)&DAT_14c846330 + 4);
      pfVar15 = (float *)&DAT_14c846338;
      if (-1 < lVar9) {
        lVar12 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar12 = lVar1;
        }
        pfVar14 = (float *)(lVar8 * 4 + *(longlong *)(lVar12 + lVar9 * 8));
        pfVar15 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar14);
        pfVar10 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar14);
      }
      fVar2 = *pfVar15;
      fVar3 = *pfVar10;
      uVar11 = (ulonglong)*(int *)(lVar13 + 0x34);
      pfVar15 = (float *)&DAT_14c846330;
      pfVar10 = (float *)((longlong)&DAT_14c846330 + 4);
      pfVar16 = (float *)&DAT_14c846338;
      if (-1 < (longlong)uVar11) {
        lVar12 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar12 = lVar1;
        }
        pfVar15 = (float *)(lVar8 * 4 + *(longlong *)(lVar12 + uVar11 * 8));
        pfVar16 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar15);
        pfVar10 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar15);
      }
      fVar4 = *pfVar16;
      fVar5 = *pfVar10;
      fVar6 = *pfVar15;
      if (-1 < *(int *)(lVar13 + 0x30)) {
        lVar12 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar12 = lVar1;
        }
        *(float *)(*(longlong *)(lVar12 + lVar9 * 8) + lVar8 * 4) = *pfVar14 + local_54;
        lVar12 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar12 = lVar1;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar12 + lVar9 * 8) +
                  lVar8 * 4) = fVar3 + local_50;
        lVar12 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar12 = lVar1;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar12 + lVar9 * 8) + lVar8 * 4) = fVar2 + local_4c;
        uVar11 = (ulonglong)*(uint *)(lVar13 + 0x34);
      }
      if (-1 < (int)uVar11) {
        lVar9 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar9 = lVar1;
        }
        uVar11 = uVar11 & 0xffffffff;
        *(float *)(*(longlong *)(lVar9 + uVar11 * 8) + lVar8 * 4) = fVar6 + local_54;
        lVar9 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar9 = lVar1;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar9 + uVar11 * 8) +
                  lVar8 * 4) = fVar5 + local_50;
        lVar9 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar9 = lVar1;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar9 + uVar11 * 8) + lVar8 * 4) = fVar4 + local_4c;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 8));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad2740 FUN_143ad2740 body=69 status=ok
// SIG undefined FUN_143ad2740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad2740(void)

{
  _DAT_14cb442b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad2782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb442c0,1);
  return;
}



// FUNCTION 143ad2785 FUN_143ad2785 body=69 status=ok
// SIG undefined FUN_143ad2785(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad2785(void)

{
  _DAT_14cb442c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad27c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb442d0,1);
  return;
}



// FUNCTION 143ad27ca FUN_143ad27ca body=69 status=ok
// SIG undefined FUN_143ad27ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad27ca(void)

{
  _DAT_14cb442d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb442e0,1);
  return;
}



// FUNCTION 143ad280f FUN_143ad280f body=69 status=ok
// SIG undefined FUN_143ad280f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad280f(void)

{
  _DAT_14cb442f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ad2851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb442f8,1);
  return;
}



// FUNCTION 143ad2854 FUN_143ad2854 body=2201 status=ok
// SIG undefined FUN_143ad2854(void)

void FUN_143ad2854(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *_Dst;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_138 [32];
  uint *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar4 = (int)param_3[1];
  local_e8 = *(undefined8 *)(param_2 + 0x60);
  local_78 = 0;
  uStack_70 = 0;
  iVar1 = iVar4 * 2 + 1;
  local_88 = 0;
  uStack_80 = 0;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  FUN_144addb80(&local_78,iVar1);
  if ((int)uStack_80._4_4_ <= iVar4 * 2) {
    FUN_144addb80(&local_88,iVar1);
  }
  uVar8 = uStack_70;
  lVar15 = (longlong)(int)uStack_70;
  uVar9 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
  if (uStack_70._4_4_ < uVar9) {
    FUN_141792ef4(&local_78,uVar8 & 0xffffffff);
  }
  uVar8 = uStack_80;
  lVar15 = lVar15 * 0x38;
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(local_78 + lVar15) = 0xffffffffffffffff;
  *(undefined4 *)(local_78 + 8 + lVar15) = 0xffffffff;
  *(undefined8 *)(local_78 + 0x10 + lVar15) = uVar12;
  *(undefined1 *)(local_78 + 0x18 + lVar15) = 2;
  *(undefined8 *)(local_78 + 0x1c + lVar15) = 0x400000000f0;
  *(undefined4 *)(local_78 + 0x24 + lVar15) = 0;
  *(undefined1 *)(local_78 + 0x30 + lVar15) = 0;
  lVar15 = (longlong)(int)uStack_80;
  uVar9 = (int)uStack_80 + 1;
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
  if (uStack_80._4_4_ < uVar9) {
    FUN_141792ef4(&local_88,uVar8 & 0xffffffff);
  }
  lVar15 = lVar15 * 0x38;
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(local_88 + lVar15) = 0xffffffffffffffff;
  *(undefined4 *)(local_88 + 8 + lVar15) = 0xffffffff;
  *(undefined8 *)(local_88 + 0x10 + lVar15) = uVar12;
  *(undefined1 *)(local_88 + 0x18 + lVar15) = 2;
  *(undefined8 *)(local_88 + 0x1c + lVar15) = 0xf000000400;
  *(undefined4 *)(local_88 + 0x24 + lVar15) = 0;
  *(undefined1 *)(local_88 + 0x30 + lVar15) = 0;
  lVar15 = param_3[1];
  local_f8 = param_3;
  local_f0 = param_2;
  if ((longlong)(int)lVar15 != 0) {
    lVar6 = *param_3;
    lVar19 = 0;
    do {
      uVar8 = uStack_70;
      lVar7 = *(longlong *)(lVar6 + lVar19);
      if (*(int *)(lVar7 + 0x78) != 0) {
        lVar18 = (longlong)(int)uStack_70;
        uVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        if (uStack_70._4_4_ < uVar9) {
          FUN_141792ef4(&local_78,uVar8 & 0xffffffff);
        }
        uVar8 = uStack_80;
        lVar18 = lVar18 * 0x38;
        uVar12 = *(undefined8 *)(lVar7 + 0x60);
        *(undefined8 *)(local_78 + lVar18) = 0xffffffffffffffff;
        *(undefined4 *)(local_78 + 8 + lVar18) = 0xffffffff;
        *(undefined8 *)(local_78 + 0x10 + lVar18) = uVar12;
        *(undefined1 *)(local_78 + 0x18 + lVar18) = 2;
        *(undefined8 *)(local_78 + 0x1c + lVar18) = 0x40000000070;
        *(undefined4 *)(local_78 + 0x24 + lVar18) = 0;
        *(undefined1 *)(local_78 + 0x30 + lVar18) = 0;
        lVar18 = (longlong)(int)uStack_80;
        uVar9 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
        if (uStack_80._4_4_ < uVar9) {
          FUN_141792ef4(&local_88,uVar8 & 0xffffffff);
        }
        lVar18 = lVar18 * 0x38;
        uVar12 = *(undefined8 *)(lVar7 + 0x60);
        *(undefined8 *)(local_88 + lVar18) = 0xffffffffffffffff;
        *(undefined4 *)(local_88 + 8 + lVar18) = 0xffffffff;
        *(undefined8 *)(local_88 + 0x10 + lVar18) = uVar12;
        *(undefined1 *)(local_88 + 0x18 + lVar18) = 2;
        *(undefined8 *)(local_88 + 0x1c + lVar18) = 0x7000000400;
        *(undefined4 *)(local_88 + 0x24 + lVar18) = 0;
        *(undefined1 *)(local_88 + 0x30 + lVar18) = 0;
      }
      uVar8 = uStack_70;
      if (*(int *)(lVar7 + 0xa8) != 0) {
        lVar18 = (longlong)(int)uStack_70;
        uVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        if (uStack_70._4_4_ < uVar9) {
          FUN_141792ef4(&local_78,uVar8 & 0xffffffff);
        }
        uVar8 = uStack_80;
        lVar18 = lVar18 * 0x38;
        uVar12 = *(undefined8 *)(lVar7 + 0x90);
        *(undefined8 *)(local_78 + lVar18) = 0xffffffffffffffff;
        *(undefined4 *)(local_78 + 8 + lVar18) = 0xffffffff;
        *(undefined8 *)(local_78 + 0x10 + lVar18) = uVar12;
        *(undefined1 *)(local_78 + 0x18 + lVar18) = 2;
        *(undefined8 *)(local_78 + 0x1c + lVar18) = 0x40000000070;
        *(undefined4 *)(local_78 + 0x24 + lVar18) = 0;
        *(undefined1 *)(local_78 + 0x30 + lVar18) = 0;
        lVar18 = (longlong)(int)uStack_80;
        uVar9 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
        if (uStack_80._4_4_ < uVar9) {
          FUN_141792ef4(&local_88,uVar8 & 0xffffffff);
        }
        lVar18 = lVar18 * 0x38;
        uVar12 = *(undefined8 *)(lVar7 + 0x90);
        *(undefined8 *)(local_88 + lVar18) = 0xffffffffffffffff;
        *(undefined4 *)(local_88 + 8 + lVar18) = 0xffffffff;
        *(undefined8 *)(local_88 + 0x10 + lVar18) = uVar12;
        *(undefined1 *)(local_88 + 0x18 + lVar18) = 2;
        *(undefined8 *)(local_88 + 0x1c + lVar18) = 0x7000000400;
        *(undefined4 *)(local_88 + 0x24 + lVar18) = 0;
        *(undefined1 *)(local_88 + 0x30 + lVar18) = 0;
      }
      lVar19 = lVar19 + 0x18;
    } while ((longlong)(int)lVar15 * 0x18 != lVar19);
  }
  lVar15 = local_f0;
  local_d8 = *(int **)(local_f0 + 0x30);
  *local_d8 = *local_d8 + 1;
  local_d0 = FUN_1405668b6(*(undefined8 *)(local_f0 + 0x30),param_1,0xd,0);
  local_f0 = FUN_1405668b6(*(undefined8 *)(lVar15 + 0x30),param_1,0x1d,0);
  local_98 = local_78;
  local_90 = (int)uStack_70;
  FUN_144760590(param_1,&local_98,0);
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar16 + 1;
  if ((undefined8 *)param_1[1] < puVar13) {
    FUN_140023dd8(param_1,0x10);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 1;
  }
  plVar17 = local_f8;
  *param_1 = (ulonglong)puVar13;
  *puVar16 = local_e8;
  puVar10 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar10 + 4;
  if ((undefined8 *)param_1[1] < puVar13) {
    FUN_140023dd8(param_1,0x28);
    puVar10 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar10 + 4;
  }
  *param_1 = (ulonglong)puVar13;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar10;
  param_1[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a2dc3b0;
  puVar10[2] = puVar16;
  *(undefined4 *)(puVar10 + 3) = 1;
  lVar15 = (longlong)(int)plVar17[1];
  if (lVar15 != 0) {
    lVar6 = *plVar17;
    plVar17 = (longlong *)(lVar15 * 0x18);
    plVar14 = (longlong *)0x0;
    do {
      lVar15 = *(longlong *)(lVar6 + (longlong)plVar14);
      lVar19 = *(longlong *)(lVar6 + 8 + (longlong)plVar14);
      lVar7 = *(longlong *)(lVar19 + 0x10);
      if (*(char *)(lVar19 + 0x48) == '\x01') {
        *(undefined1 *)(lVar19 + 0x48) = 0;
        FUN_14011fb0c(lVar19 + 0x60);
        if (*(int *)(lVar19 + 0x58) != 0) {
          local_118 = (uint *)CONCAT44(local_118._4_4_,*(int *)(lVar19 + 0x58) >> 2);
          local_100 = 0;
          local_108 = 1;
          local_110 = CONCAT31(local_110._1_3_,0x1c);
          local_f8 = plVar17;
          FUN_140661c88(lVar19 + 0x60,param_1,L"FNiagaraStatelessEmitterInstance::BindingBuffer",4);
          uVar5 = *(undefined4 *)(lVar19 + 0x70);
          cVar3 = *(char *)((longlong)param_1 + 0x69);
          uVar12 = *(undefined8 *)(lVar19 + 0x60);
          if (cVar3 == '\0') {
            local_e0 = *(undefined8 *)(lVar19 + 0x60);
            FUN_14002049c(param_1,1);
            uVar12 = local_e0;
          }
          local_118 = (uint *)CONCAT44(local_118._4_4_,uVar5);
          local_110 = 1;
          _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,uVar12,0);
          if (cVar3 == '\0') {
            FUN_14002049c(param_1,0);
          }
          memcpy(_Dst,*(void **)(lVar19 + 0x50),(ulonglong)*(uint *)(lVar19 + 0x70));
          plVar17 = local_f8;
          uVar12 = *(undefined8 *)(lVar19 + 0x60);
          if (*(char *)((longlong)param_1 + 0x69) == '\0') {
            FUN_14002049c(param_1,1);
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar12);
            FUN_14002049c(param_1,0);
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar12);
          }
        }
      }
      lVar18 = *(longlong *)(lVar19 + 0x40);
      *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(lVar19 + 0x24);
      fVar2 = *(float *)(lVar19 + 0x28);
      *(float *)(lVar18 + 8) = fVar2;
      *(uint *)(lVar18 + 0xc) = -(uint)(0.0 < fVar2) & (uint)(1.0 / fVar2);
      *(uint *)(lVar18 + 0x18) = *(uint *)(lVar15 + 0x128) >> 2;
      *(undefined4 *)(lVar18 + 0x1c) = *(undefined4 *)(lVar15 + 0x5c);
      lVar11 = *(longlong *)(lVar15 + 0x68);
      if (*(longlong *)(lVar15 + 0x68) == 0) {
        lVar11 = local_d0;
      }
      *(longlong *)(lVar18 + 0x20) = lVar11;
      lVar11 = *(longlong *)(lVar15 + 0x98);
      if (*(longlong *)(lVar15 + 0x98) == 0) {
        lVar11 = local_f0;
      }
      *(longlong *)(lVar18 + 0x28) = lVar11;
      *(undefined8 *)(lVar18 + 0x30) = local_e8;
      *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)(lVar7 + 0x1d8);
      lVar15 = *(longlong *)(lVar19 + 0x68);
      if (*(longlong *)(lVar19 + 0x68) == 0) {
        lVar15 = DAT_14cb428f0;
      }
      *(longlong *)(lVar18 + 0x40) = lVar15;
      FUN_1482014ac(lVar7,&local_a8);
      if (local_a8 != 0) {
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(local_a0 + 8) + 0x50) +
             (longlong)*(int *)(local_a8 + 0xd4) * 8) == 0) {
          FUN_1400bafc2(*(longlong *)(local_a0 + 8),(longlong)*(int *)(local_a8 + 0xd4),1);
        }
      }
      local_b4 = *(int *)(lVar6 + 0x10 + (longlong)plVar14) + 0x3fU >> 6;
      local_b0 = local_b4 + 0x7f >> 7;
      local_ac = 1;
      if ((int)local_b4 <= DAT_14ca84f24) {
        local_b0 = 1;
      }
      if (DAT_14ca84f24 < (int)local_b4) {
        local_b4 = 0x80;
      }
      uVar9 = local_b0 + 0x7f;
      if (DAT_14ca84f28 < (int)local_b0) {
        local_b0 = 0x80;
        local_ac = uVar9 >> 7;
      }
      uVar12 = (**(code **)(**(longlong **)(lVar7 + 0x1a8) + 0x2a8))();
      local_118 = &local_b4;
      FUN_148201562(param_1,&local_a8,uVar12,lVar18);
      plVar14 = plVar14 + 3;
    } while (plVar17 != plVar14);
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar16 + 1;
  if ((undefined8 *)param_1[1] < puVar13) {
    FUN_140023dd8(param_1,0x10);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 1;
  }
  *param_1 = (ulonglong)puVar13;
  *puVar16 = local_e8;
  puVar10 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar10 + 4;
  if ((undefined8 *)param_1[1] < puVar13) {
    FUN_140023dd8(param_1,0x28);
    puVar10 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar10 + 4;
  }
  *param_1 = (ulonglong)puVar13;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar10;
  param_1[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a2dc3b8;
  puVar10[2] = puVar16;
  *(undefined4 *)(puVar10 + 3) = 1;
  local_c8 = local_88;
  local_c0 = (int)uStack_80;
  FUN_144760590(param_1,&local_c8,0);
  *local_d8 = *local_d8 + -1;
  if (*local_d8 == 0) {
    FUN_1449e245a();
  }
  FUN_144705e08(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_144705e08(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad30f0 FUN_143ad30f0 body=955 status=ok
// SIG undefined FUN_143ad30f0(void)

void FUN_143ad30f0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_61;
  undefined *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  iVar9 = *(int *)(param_1 + 0xb8);
  if (iVar9 != 0) {
    puVar4 = *(ulonglong **)(param_2 + 0x18);
    uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar2 = *(uint *)((longlong)puVar4 + 0x17c);
    if (uVar2 != uVar6) {
      *(uint *)((longlong)puVar4 + 0x17c) = uVar6;
      puVar7 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if ((undefined8 *)puVar4[1] < puVar8) {
        FUN_140023dd8(puVar4,0x20);
        puVar7 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *puVar4 = (ulonglong)puVar8;
      *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
      *(undefined8 **)puVar4[6] = puVar7;
      puVar4[6] = (ulonglong)(puVar7 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar3;
      iVar9 = *(int *)(param_1 + 0xb8);
    }
    local_70 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    local_74 = *(undefined4 *)(param_1 + 0xbc);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x3a;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(puVar1,0x1d8);
      puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 0x3a;
    }
    *puVar1 = (ulonglong)puVar8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_60);
        local_80 = 0;
        local_90 = 0;
        local_b0 = "Unknown";
        local_c0 = 0;
        uStack_b8 = 0;
        local_c8 = L"FEmptyShaderParameters";
        local_88 = 0;
        local_a0 = 0x10;
        local_a8 = 0x7a6;
        local_98 = &local_60;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_60 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143ad9ba1);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_60 = &DAT_14cb44360;
    local_58 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14c9e1d18;
    local_c8 = (wchar_t *)((ulonglong)local_c8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar7,&local_61,&local_60,0x10);
    puVar7[0x37] = uVar5;
    *(int *)(puVar7 + 0x38) = iVar9;
    *(undefined4 *)((longlong)puVar7 + 0x1c4) = local_74;
    puVar7[0x39] = local_70;
    *puVar7 = &PTR_FUN_14ae2fd30;
    iVar9 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar7);
    FUN_14820888a(0,0);
    FUN_14820888a(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_1482090be(param_1 + 0xb0);
    }
    if (*(uint *)((longlong)puVar4 + 0x17c) != uVar2) {
      *(uint *)((longlong)puVar4 + 0x17c) = uVar2;
      puVar7 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if ((undefined8 *)puVar4[1] < puVar8) {
        FUN_140023dd8(puVar4,0x20);
        puVar7 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *puVar4 = (ulonglong)puVar8;
      *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
      *(undefined8 **)puVar4[6] = puVar7;
      puVar4[6] = (ulonglong)(puVar7 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar3;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad34ac FUN_143ad34ac body=790 status=ok
// SIG undefined FUN_143ad34ac(void)

void FUN_143ad34ac(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined *local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c)) + *(int *)(param_1 + 0x90) +
      *(int *)(param_1 + 0xa0) != 0) {
    puVar5 = *(ulonglong **)(param_2 + 0x18);
    uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar2 = *(uint *)((longlong)puVar5 + 0x17c);
    if (uVar2 != uVar6) {
      *(uint *)((longlong)puVar5 + 0x17c) = uVar6;
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if ((undefined8 *)puVar5[1] < puVar8) {
        FUN_140023dd8(puVar5,0x20);
        puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *puVar5 = (ulonglong)puVar8;
      *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
      *(undefined8 **)puVar5[6] = puVar7;
      puVar5[6] = (ulonglong)(puVar7 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar3;
    }
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x38;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 0x38;
    }
    *puVar1 = (ulonglong)puVar8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_50);
        local_60 = 0;
        local_70 = 0;
        local_90 = "Unknown";
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = L"FEmptyShaderParameters";
        local_68 = 0;
        local_80 = 0x10;
        local_88 = 0x7a6;
        local_78 = &local_50;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_50 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143ad9ba1);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_50 = &DAT_14cb44370;
    local_48 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_40 = &DAT_14c9e1d18;
    local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar7,&local_51,&local_50,0x10);
    puVar7[0x37] = param_1;
    *puVar7 = &PTR_FUN_14ae2fd70;
    iVar4 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar7);
    if (*(uint *)((longlong)puVar5 + 0x17c) != uVar2) {
      *(uint *)((longlong)puVar5 + 0x17c) = uVar2;
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if ((undefined8 *)puVar5[1] < puVar8) {
        FUN_140023dd8(puVar5,0x20);
        puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *puVar5 = (ulonglong)puVar8;
      *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
      *(undefined8 **)puVar5[6] = puVar7;
      puVar5[6] = (ulonglong)(puVar7 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar3;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad37c4 FUN_143ad37c4 body=1449 status=ok
// SIG undefined FUN_143ad37c4(void)

undefined8 FUN_143ad37c4(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  uint local_a4;
  longlong local_a0;
  int *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong *local_68;
  int **local_60;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar3 = (char *)(param_1 + 0xc0);
  LOCK();
  bVar18 = *(char *)(param_1 + 0xc0) == '\0';
  if (bVar18) {
    *(char *)(param_1 + 0xc0) = '\x01';
  }
  UNLOCK();
  local_70 = param_3;
  if (!bVar18) {
    FUN_1447d2058();
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar16 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x78);
    }
    iVar12 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x80) - 1U &
                               (int)local_70 + (int)(local_70 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        puVar4 = (ulonglong *)(*plVar1 + (longlong)iVar12 * 0x18);
        if (*puVar4 == local_70) {
          if (puVar4 + 1 != (ulonglong *)0x0 && puVar4 != (ulonglong *)0x0) {
            piVar14 = (int *)puVar4[1];
            goto LAB_143ad38de;
          }
          break;
        }
        iVar12 = (int)puVar4[2];
      } while (iVar12 != -1);
    }
  }
  if (1 < *(int *)(param_4 + 0x2c) - 3U) {
    lVar16 = *(longlong *)(param_4 + 0x10);
    FUN_1482014ac(lVar16,&local_80);
    if (local_80 != 0) {
      lVar13 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_78 + 8) + 0x50) +
                (longlong)*(int *)(local_80 + 0xd4) * 8);
      if (lVar13 == 0) {
        lVar13 = FUN_1400bafc2(*(longlong *)(local_78 + 8),(longlong)*(int *)(local_80 + 0xd4),1);
      }
      if (lVar13 != 0) {
        local_50 = *(undefined4 *)(param_4 + 0x24);
        local_4c = 1;
        local_90 = *(undefined8 *)(param_4 + 0x30);
        local_88 = *(undefined4 *)(param_4 + 0x38);
        uVar11 = FUN_148201918(lVar16,&local_90,&local_50,*(longlong *)(param_4 + 0x40) + 0x50);
        if (uVar11 != 0) {
          local_a0 = *(longlong *)(param_1 + 8);
          local_a4 = uVar11;
          iVar12 = FUN_148073748(**(undefined8 **)(param_4 + 0x10));
          if ((DAT_14c762a46 == '\x01') && (0 < (longlong)*(int *)(param_1 + 0x90))) {
            lVar13 = 0;
            do {
              piVar14 = *(int **)(*(longlong *)(param_1 + 0x88) + lVar13 * 8);
              if (*piVar14 == iVar12) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar13 * 8) = 0;
                local_98 = piVar14;
                FUN_148208a3c();
                if (piVar14 != (int *)0x0) goto LAB_143ad3b75;
                break;
              }
              lVar13 = lVar13 + 1;
            } while (*(int *)(param_1 + 0x90) != lVar13);
          }
          piVar14 = (int *)FUN_14001cc68(0xd8);
          memset(piVar14,0,0xd0);
          piVar14[0x2f] = 2;
          piVar14[0x30] = -1;
          piVar14[0x31] = -1;
          *(undefined8 **)(piVar14 + 8) = &DAT_14cb3db48;
          piVar14[0x34] = 0;
          piVar14[0x35] = 0;
          *piVar14 = iVar12;
          uVar17 = **(undefined8 **)(param_4 + 0x10);
          lVar13 = (*(undefined8 **)(param_4 + 0x10))[1];
          local_98 = piVar14;
          if (lVar13 == 0) {
            *(undefined8 *)(piVar14 + 2) = uVar17;
            piVar14[4] = 0;
            piVar14[5] = 0;
          }
          else {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(piVar14 + 4);
            *(undefined8 *)(piVar14 + 2) = uVar17;
            *(longlong *)(piVar14 + 4) = lVar13;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar6 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar14 = (int *)((longlong)plVar6 + 0xc);
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (*piVar14 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          piVar8 = local_98;
          piVar14 = local_98 + 6;
          FUN_1402ed004(piVar14,*(undefined8 *)(local_98 + 2),0);
          puVar15 = (undefined8 *)FUN_14001cc68(0x198,0x10);
          *(undefined4 *)(puVar15 + 1) = 0;
          *puVar15 = &PTR_FUN_14ade2d80;
          puVar15[2] = piVar14;
          puVar15[3] = 0;
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[7] = 0;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0xffffffff00000000;
          puVar15[0xc] = 0;
          puVar15[0xd] = 0;
          puVar15[0xe] = 0;
          puVar15[0xf] = 0;
          *(undefined8 *)((longlong)puVar15 + 0x7c) = 0;
          *(undefined8 *)((longlong)puVar15 + 0x84) = 0;
          puVar15[0x12] = 0;
          puVar15[0x13] = 0;
          puVar15[0x14] = 0;
          puVar15[0x15] = 0;
          *(undefined8 *)((longlong)puVar15 + 0xac) = 0;
          *(undefined8 *)((longlong)puVar15 + 0xb4) = 0;
          puVar15[0x18] = 0;
          puVar15[0x19] = 0;
          puVar15[0x1a] = 0;
          puVar15[0x1b] = 0;
          *(undefined8 *)((longlong)puVar15 + 0xdc) = 0;
          *(undefined8 *)((longlong)puVar15 + 0xe4) = 0;
          *(undefined8 *)((longlong)puVar15 + 0x10c) = 0;
          *(undefined8 *)((longlong)puVar15 + 0x114) = 0;
          puVar15[0x20] = 0;
          puVar15[0x21] = 0;
          puVar15[0x1e] = 0;
          puVar15[0x1f] = 0;
          *(undefined8 *)((longlong)puVar15 + 300) = 0;
          *(undefined8 *)((longlong)puVar15 + 0x134) = 0;
          puVar15[0x24] = 0;
          puVar15[0x25] = 0;
          puVar15[0x28] = 0;
          puVar15[0x29] = 0;
          puVar15[0x2c] = 0;
          puVar15[0x2d] = 0;
          puVar15[0x2e] = 0;
          puVar15[0x2f] = 0;
          *(undefined4 *)(puVar15 + 0x30) = 1;
          puVar15[0x31] = 0;
          puVar15[0x32] = 0;
          puVar7 = *(undefined8 **)(piVar8 + 0x34);
          if (puVar7 != puVar15) {
            *(undefined8 **)(piVar8 + 0x34) = puVar15;
            if (puVar15 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
              UNLOCK();
            }
            if (puVar7 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + -1;
              UNLOCK();
            }
          }
LAB_143ad3b75:
          piVar14 = local_98;
          uVar11 = local_a4;
          local_b8 = L"StatelessSimBuffer";
          FUN_143a7817e(*(undefined8 *)(local_98 + 0x34),param_2,local_a4,
                        *(undefined4 *)(local_a0 + 0x24));
          bVar9 = *(byte *)(param_1 + 0xa8) & (byte)*(uint *)(lVar16 + 0x24);
          if (((*(uint *)(lVar16 + 0x24) & 2) == 0) || ((DAT_14cb442e8 < uVar11 & bVar9) == 1)) {
            if (bVar9 != 0) {
              iVar12 = FUN_143a8d9ca(local_a0 + 0x38);
              piVar14 = local_98;
              lVar16 = *(longlong *)(local_98 + 0x34);
              if (iVar12 == -1) goto LAB_143ad3ce6;
              *(uint *)(lVar16 + 0x120) = local_a4;
              *(int *)(*(longlong *)(local_98 + 0x34) + 0x5c) = iVar12;
              iVar5 = *(int *)(param_1 + 0xb8);
              *(uint *)(param_1 + 0xb8) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0xbc) < iVar5 + 1U) {
                FUN_148208fa4((longlong *)(param_1 + 0xb0),iVar5);
              }
              plVar6 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 0x18);
              lVar16 = *(longlong *)(piVar14 + 0x34);
              *plVar6 = lVar16;
              if (lVar16 != 0) {
                LOCK();
                *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
                UNLOCK();
              }
              plVar6[1] = param_4;
              *(uint *)(plVar6 + 2) = local_a4;
              iVar5 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
                FUN_1447808da((longlong *)(param_1 + 0x98),iVar5);
              }
              *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 4) = iVar12;
              goto LAB_143ad3cf5;
            }
            iVar12 = *(int *)(param_1 + 0x90);
            *(uint *)(param_1 + 0x90) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0x94) < iVar12 + 1U) {
              FUN_148209038((longlong *)(param_1 + 0x88),iVar12);
              piVar14 = local_98;
            }
            *(int **)(*(longlong *)(param_1 + 0x88) + (longlong)iVar12 * 8) = piVar14;
          }
          else {
            lVar16 = *(longlong *)(piVar14 + 0x34);
LAB_143ad3ce6:
            cVar10 = FUN_1482010a9(param_2,param_4,lVar16);
            if (cVar10 != '\0') {
LAB_143ad3cf5:
              local_68 = &local_70;
              local_60 = &local_98;
              FUN_148208ab0(plVar1,local_54);
              piVar14 = local_98;
LAB_143ad38de:
              uVar17 = *(undefined8 *)(piVar14 + 0x34);
              goto LAB_143ad3898;
            }
            local_68 = &local_70;
            local_60 = &local_98;
            FUN_148208ab0(plVar1,local_54);
          }
        }
      }
    }
  }
  uVar17 = 0;
LAB_143ad3898:
  LOCK();
  cVar10 = *pcVar3;
  if (cVar10 == '\x01') {
    *pcVar3 = '\0';
  }
  UNLOCK();
  if (cVar10 != '\x01') {
    FUN_14008cdb0(pcVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 143ad3d6e FUN_143ad3d6e body=553 status=ok
// SIG undefined FUN_143ad3d6e(void)

ulonglong FUN_143ad3d6e(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong unaff_RBP;
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
  code *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_70 = local_50;
    local_50[0] = FUN_1449e2820;
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
  lVar6 = *(longlong *)(param_1 + 0x20);
  bVar1 = true;
  if (lVar6 == 0) {
LAB_143ad3e1e:
    lVar7 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (lVar7 = lVar6,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         != lVar5 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    if (lVar7 == 0) goto LAB_143ad3e1e;
    if ((longlong)*(int *)(lVar7 + 0xc0) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x40 + lVar5) == param_1) {
          bVar1 = false;
          unaff_RBP = 0;
          if (*(char *)(*(longlong *)(lVar7 + 0xb8) + 0x20 + lVar5) == '\x01') goto LAB_143ad3e31;
          goto LAB_143ad3e5e;
        }
        lVar5 = lVar5 + 0x48;
      } while ((longlong)*(int *)(lVar7 + 0xc0) * 0x48 != lVar5);
    }
    bVar1 = false;
  }
LAB_143ad3e31:
  (**(code **)(*param_2 + 8))(param_2,local_50);
  iVar2 = DAT_14c762930;
  if (local_50[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (iVar2 != 0) {
    if (!bVar1) {
      (**(code **)(*param_2 + 8))(param_2,local_50);
      cVar3 = FUN_1481d079c(lVar7 + 0x88,local_50);
      if (local_50[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar3 == '\0') {
        unaff_RBP = 0;
        goto LAB_143ad3e5e;
      }
    }
    (**(code **)(*param_2 + 8))(param_2,local_50);
    uVar4 = FUN_1481d079c(param_1 + 0x138,local_50);
    unaff_RBP = (ulonglong)uVar4;
    if (local_50[0] != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ad3e5e:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad3f98 FUN_143ad3f98 body=3282 status=ok
// SIG undefined FUN_143ad3f98(void)

void FUN_143ad3f98(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  void *_Dst;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint *puVar20;
  longlong lVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  longlong *plVar24;
  int *piVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int *piVar29;
  ulonglong uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  _Dst = (void *)FUN_14001cc68(0x1f0);
  memset(_Dst,0,0x1f0);
  FUN_14820222a(_Dst);
  plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14ae2fd90;
  plVar16[2] = (longlong)_Dst;
  *(void **)(param_1 + 0x28) = _Dst;
  plVar24 = *(longlong **)(param_1 + 0x30);
  if (plVar16 == plVar24) {
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar16 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar25 = (int *)((longlong)plVar16 + 0xc);
        *piVar25 = *piVar25 + -1;
        iVar13 = *piVar25;
        UNLOCK();
joined_r0x000143ad405e:
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x30) = plVar16;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar24 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar25 = (int *)((longlong)plVar24 + 0xc);
        *piVar25 = *piVar25 + -1;
        iVar13 = *piVar25;
        UNLOCK();
        plVar16 = plVar24;
        goto joined_r0x000143ad405e;
      }
    }
  }
  plVar24 = *(longlong **)(param_1 + 0x48);
  if (plVar24 == (longlong *)0x0) {
    lVar18 = 0;
  }
  else {
    lVar18 = plVar24[0x22];
    if (lVar18 == 0) {
      (**(code **)(*plVar24 + 1000))(plVar24);
      lVar18 = plVar24[0x22];
    }
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1a8) = lVar18;
  FUN_148202314(param_1);
  lVar18 = *(longlong *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 0x98);
  *(undefined1 *)(lVar18 + 0x78) = *(undefined1 *)(param_1 + 0xa0);
  *(undefined8 *)(lVar18 + 0x70) = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar18 + 0x88) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar18 + 0x90) = uVar17;
  *(undefined8 *)(lVar18 + 0x98) = *(undefined8 *)(param_1 + 0xc0);
  uVar17 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(lVar18 + 0xa8) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(lVar18 + 0xb0) = uVar17;
  *(undefined8 *)(lVar18 + 0xb8) = *(undefined8 *)(param_1 + 0xe0);
  uVar17 = *(undefined8 *)(param_1 + 0xe8);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar7 = *(undefined8 *)(param_1 + 0xfc);
  *(undefined8 *)(lVar18 + 0xcc) = *(undefined8 *)(param_1 + 0xf4);
  *(undefined8 *)(lVar18 + 0xd4) = uVar7;
  *(undefined8 *)(lVar18 + 0xc0) = uVar17;
  *(undefined8 *)(lVar18 + 200) = uVar6;
  lVar18 = *(longlong *)(param_1 + 0x28);
  uVar12 = *(uint *)(lVar18 + 0xc0);
  if ((uVar12 & 0x10) != 0) {
    *(uint *)(lVar18 + 0xc0) = uVar12 & 0xffffffef | ((uVar12 >> 7 | uVar12 >> 6) & 1) << 4;
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  fVar31 = *(float *)(lVar18 + 0x98);
  if (fVar31 <= 0.0001) {
    fVar31 = 0.0001;
  }
  *(float *)(lVar18 + 0x98) = fVar31;
  fVar31 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x9c);
  if (fVar31 <= 0.0001) {
    fVar31 = 0.0001;
  }
  *(float *)(*(longlong *)(param_1 + 0x28) + 0x9c) = fVar31;
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar18 + 0x1a8) != 0) {
    local_110 = 0;
    FUN_148202422(param_1 + 0x118,&local_110);
    if (local_110 != 0) {
      if (*(int *)(local_110 + 0x38) == 1) {
        uVar32 = *(undefined4 *)(local_110 + 0x48);
        uVar33 = uVar32;
      }
      else {
        uVar32 = *(undefined4 *)(local_110 + 0x48);
        uVar33 = *(undefined4 *)(local_110 + 0x4c);
      }
      lVar18 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar18 + 0x2c) = 0xffffffff;
      *(undefined4 *)(lVar18 + 0x30) = uVar32;
      *(undefined4 *)(lVar18 + 0x34) = uVar33;
    }
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  *(byte *)(lVar18 + 0x21) = *(byte *)(param_1 + 0x50) & 1;
  *(uint *)(*(longlong *)(param_1 + 0x28) + 0x28) = *(uint *)(param_1 + 0x58) ^ 0xdefa081;
  lVar18 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar18 + 0x68) = *(undefined8 *)(param_1 + 0x90);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(lVar18 + 0x58) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(lVar18 + 0x60) = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar18 + 0x50) = uVar17;
  uVar32 = *(undefined4 *)(param_1 + 100);
  uVar33 = *(undefined4 *)(param_1 + 0x68);
  uVar5 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(lVar18 + 0x38) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(lVar18 + 0x3c) = uVar32;
  *(undefined4 *)(lVar18 + 0x40) = uVar33;
  *(undefined4 *)(lVar18 + 0x44) = uVar5;
  iVar13 = *(int *)(param_1 + 0x110);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar18 + 0xec) < iVar13) {
    FUN_148209340(lVar18 + 0xe0);
    lVar18 = *(longlong *)(param_1 + 0x28);
    iVar13 = *(int *)(param_1 + 0x110);
  }
  if (iVar13 != 0) {
    puVar28 = *(undefined8 **)(param_1 + 0x108);
    lVar27 = (longlong)iVar13 * 0x68;
    do {
      local_110._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0xc4));
      cVar9 = FUN_148203eca(puVar28,&local_110);
      if (cVar9 != '\0') {
        iVar13 = *(int *)(lVar18 + 0xe8);
        *(uint *)(lVar18 + 0xe8) = iVar13 + 1U;
        if (*(uint *)(lVar18 + 0xec) < iVar13 + 1U) {
          FUN_1482093ac((longlong *)(lVar18 + 0xe0),iVar13);
        }
        lVar4 = *(longlong *)(lVar18 + 0xe0);
        lVar21 = (longlong)iVar13 * 0x68;
        uVar17 = *puVar28;
        uVar6 = puVar28[1];
        uVar7 = puVar28[3];
        puVar26 = (undefined8 *)(lVar4 + 0x10 + lVar21);
        *puVar26 = puVar28[2];
        puVar26[1] = uVar7;
        *(undefined8 *)(lVar4 + lVar21) = uVar17;
        ((undefined8 *)(lVar4 + lVar21))[1] = uVar6;
        *(undefined ***)(lVar4 + 0x20 + lVar21) = &PTR_FUN_14ad6aa90;
        uVar17 = puVar28[6];
        puVar26 = (undefined8 *)(lVar4 + 0x28 + lVar21);
        *puVar26 = puVar28[5];
        puVar26[1] = uVar17;
        *(undefined ***)(lVar4 + 0x20 + lVar21) = &PTR_FUN_14ad6ad70;
        *(undefined8 *)(lVar4 + 0x38 + lVar21) = puVar28[7];
        *(undefined1 *)(lVar4 + 0x40 + lVar21) = *(undefined1 *)(puVar28 + 8);
        *(undefined ***)(lVar4 + 0x48 + lVar21) = &PTR_FUN_14ad6aa90;
        uVar32 = *(undefined4 *)((longlong)puVar28 + 0x54);
        uVar33 = *(undefined4 *)(puVar28 + 0xb);
        uVar5 = *(undefined4 *)((longlong)puVar28 + 0x5c);
        puVar19 = (undefined4 *)(lVar4 + 0x50 + lVar21);
        *puVar19 = *(undefined4 *)(puVar28 + 10);
        puVar19[1] = uVar32;
        puVar19[2] = uVar33;
        puVar19[3] = uVar5;
        *(undefined ***)(lVar4 + 0x48 + lVar21) = &PTR_FUN_14ad6ad70;
        *(undefined8 *)(lVar4 + 0x60 + lVar21) = puVar28[0xc];
      }
      puVar28 = puVar28 + 0xd;
      lVar27 = lVar27 + -0x68;
    } while (lVar27 != 0);
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  FUN_1481c1bbe(lVar18 + 0xf8,param_1 + 0x128);
  iVar13 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar13 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x128);
    lVar27 = 0;
    do {
      plVar24 = *(longlong **)(lVar18 + lVar27);
      if ((plVar24 != (longlong *)0x0) &&
         (cVar9 = (**(code **)(*plVar24 + 0x308))(plVar24), cVar9 != '\0')) {
        (**(code **)(*plVar24 + 0x318))(plVar24,**(undefined8 **)(param_1 + 0x28));
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)iVar13 * 8 != lVar27);
  }
  uVar10 = FUN_1482020a1(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x20) = uVar10;
  bVar11 = FUN_1401e6e8e(param_1 + 0x138);
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x28) + 0x20);
  *pbVar1 = *pbVar1 & bVar11;
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x24) = DAT_14cb442a8;
    puVar20 = (uint *)(*(longlong *)(param_1 + 0x28) + 0x24);
    *puVar20 = *puVar20 & *(uint *)(param_1 + 0x54);
    iVar13 = *(int *)(param_1 + 0x120);
    if ((longlong)iVar13 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x118);
      lVar27 = 0;
      do {
        plVar24 = *(longlong **)(lVar18 + lVar27);
        if ((*(byte *)(plVar24 + 5) & 1) != 0) {
          uVar12 = (**(code **)(*plVar24 + 0x2a0))();
          puVar20 = (uint *)(*(longlong *)(param_1 + 0x28) + 0x24);
          *puVar20 = *puVar20 & uVar12;
        }
        lVar27 = lVar27 + 8;
      } while ((longlong)iVar13 * 8 != lVar27);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x24) == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x20) = 0;
    }
  }
  FUN_148202484(param_1);
  plVar24 = *(longlong **)(param_1 + 0x28);
  if ((char)plVar24[4] != '\x01') goto LAB_143ad4441;
  if ((*(byte *)((longlong)plVar24 + 0x24) & 2) != 0) {
    uVar17 = FUN_14001cc68(0x28,0x10);
    FUN_14820253e(uVar17,*plVar24);
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1e8) = uVar17;
    plVar24 = *(longlong **)(param_1 + 0x28);
  }
  local_110 = *plVar24;
  local_f0 = plVar24[0x3d];
  local_f8 = plVar24 + 0x38;
  local_100 = plVar24 + 0x36;
  local_108 = plVar24 + 0x24;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar18 = FUN_145ddc770();
  local_11c = *(undefined4 *)(lVar18 + 0x3c);
  iVar13 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar13 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x118);
    lVar27 = 0;
    do {
      plVar24 = *(longlong **)(lVar18 + lVar27);
      local_e8 = CONCAT44(local_11c,(int)local_100[1]);
      local_e0 = local_e0 + 1;
      (**(code **)(*plVar24 + 0x2b0))(plVar24,&local_11c);
      (**(code **)(*plVar24 + 0x2a8))(plVar24,&local_110);
      lVar27 = lVar27 + 8;
    } while ((longlong)iVar13 * 8 != lVar27);
  }
  *(bool *)(*(longlong *)(param_1 + 0x28) + 0x118) =
       0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x138);
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar18 + 0x1c8) == 0) {
    *(undefined4 *)(lVar18 + 0x1c8) = 1;
    if (*(int *)(lVar18 + 0x1cc) == 0) {
      FUN_14475e4ac((undefined8 *)(lVar18 + 0x1c0),0);
    }
    **(undefined4 **)(lVar18 + 0x1c0) = 0;
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar27 + 0xc60);
  local_118 = lVar18;
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_143ad4612;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_143ad461b;
      goto LAB_143ad482d;
    }
LAB_143ad461b:
    FUN_143ada1cc(&local_118,&DAT_14ca85100);
  }
  else {
LAB_143ad4612:
    if (iVar13 == 0x10) goto LAB_143ad461b;
LAB_143ad482d:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar27 + 0xc60), iVar13 == 2))
      goto LAB_143ad461b;
      if (iVar13 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_143ad461b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar28 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar20 = (uint *)*puVar28;
      if (puVar20 != (uint *)0x0) goto LAB_143ad490b;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143ad8169);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar28 = puVar19;
        FUN_140217a48(puVar28);
        puVar20 = (uint *)*puVar28;
LAB_143ad490b:
        puVar26 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar23 = (uint *)(puVar26 + 0x16);
        uVar12 = puVar20[0x12];
        if (puVar23 <= puVar20 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
          LOCK();
          uVar2 = *puVar20;
          *puVar20 = *puVar20 + uVar12 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar12) != 0xffffffff) break;
          puVar20 = (uint *)*puVar28;
          *puVar20 = 0xffffffff;
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar28 = puVar20;
          puVar26 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar26 + 0x16);
          uVar12 = 0;
          if (puVar23 <= puVar20 + 0x4000) {
            uVar12 = 1;
            goto LAB_143ad498b;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143ad498b:
      *(uint **)(puVar20 + 0x10) = puVar23;
      puVar20[0x12] = uVar12;
      iVar13 = 0;
      FUN_1447247dc(puVar26,0);
      *puVar26 = &PTR_FUN_14ae2ff10;
      puVar26[0x15] = local_118;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar13 = 0;
        }
        else {
          uVar30 = 2;
        }
      }
      else {
        iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar30 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar8 = 1;
        if ((char)uVar30 != '\x06') {
          uVar8 = uVar30;
        }
        uVar30 = uVar8;
        uVar17 = 0;
      }
      else {
        if ((char)uVar30 == '\x06') {
          uVar30 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar17 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar26[0xf] = uVar17;
      puVar26[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar13;
      if (puVar26 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar26);
        LOCK();
        piVar25 = (int *)(puVar26 + 1);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (**(code **)*puVar26)(puVar26,1);
        }
      }
    }
    else {
      local_128 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14ae2feb0;
      local_88[0] = &LAB_143ada2ea;
      local_60 = lVar18;
      FUN_14005a792(&DAT_14ca9a440,L"InitNiagaraStatelessEmitterData",&DAT_14cb44424);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar22 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar22 = &local_68;
        }
        (*(code *)(*pppuVar22)[2])();
      }
    }
  }
  FUN_148202610(*(longlong *)(param_1 + 0x28) + 0x108,*(undefined4 *)(param_1 + 0x1d8));
  iVar13 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar13 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x1d0);
    lVar27 = 0;
    do {
      lVar4 = *(longlong *)(lVar18 + lVar27);
      if (lVar4 != 0) {
        lVar21 = *(longlong *)(param_1 + 0x28);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        iVar3 = *(int *)(lVar21 + 0x110);
        *(uint *)(lVar21 + 0x110) = iVar3 + 1U;
        if (*(uint *)(lVar21 + 0x114) < iVar3 + 1U) {
          FUN_14820949c((longlong *)(lVar21 + 0x108),iVar3);
        }
        *(longlong *)(*(longlong *)(lVar21 + 0x108) + (longlong)iVar3 * 8) = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)iVar13 * 8 != lVar27);
  }
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar18 + 0x88) == 0) {
    FUN_1482029d2(&local_110,lVar18 + 0x8c);
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  if (*(int *)(lVar18 + 0xa8) == 0) {
    FUN_1482029d2(&local_110,lVar18 + 0xac);
    lVar18 = *(longlong *)(param_1 + 0x28);
  }
  if ((longlong)*(int *)(lVar18 + 0xe8) != 0) {
    piVar25 = *(int **)(lVar18 + 0xe0);
    piVar29 = piVar25 + (longlong)*(int *)(lVar18 + 0xe8) * 0x1a;
    do {
      if (*piVar25 == 1) {
        if (piVar25[10] == 0) {
          lVar18 = 0x2c;
LAB_143ad47f1:
          FUN_1482029d2(&local_110,lVar18 + (longlong)piVar25);
        }
      }
      else if (piVar25[2] == 0) {
        lVar18 = 0xc;
        goto LAB_143ad47f1;
      }
      if (piVar25[0x14] == 0) {
        FUN_1482029d2(&local_110,piVar25 + 0x15);
      }
      piVar25 = piVar25 + 0x1a;
    } while (piVar25 != piVar29);
  }
  iVar13 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar13 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x128);
    lVar27 = 0;
    do {
      plVar24 = *(longlong **)(lVar18 + lVar27);
      if ((plVar24 != (longlong *)0x0) &&
         (cVar9 = (**(code **)(*plVar24 + 0x308))(plVar24), cVar9 != '\0')) {
        (**(code **)(*plVar24 + 0x2e8))(plVar24,*(longlong *)(param_1 + 0x28) + 0x120);
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)iVar13 * 8 != lVar27);
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_148207248(&local_d8);
LAB_143ad4441:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad4c6c FUN_143ad4c6c body=1260 status=ok
// SIG undefined FUN_143ad4c6c(void)

void FUN_143ad4c6c(longlong param_1)

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
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 != DVar8) {
          iVar6 = *piVar1;
          if (DAT_14c86a9fc != 0) goto LAB_143ad4cad;
LAB_143ad4d0c:
          if (iVar6 != 2) {
            if (iVar6 != 1) goto LAB_143ad4cad;
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            if (DVar7 != DVar8) goto LAB_143ad4d27;
          }
        }
      }
      else if (iVar6 != 0x10) goto LAB_143ad4d0c;
    }
  }
  else {
LAB_143ad4cad:
    if (iVar6 != 0x10) {
LAB_143ad4d27:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_143ad4cb2;
        if (*piVar1 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143ad4cb2;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143ad4e81;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143ad8169);
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
LAB_143ad4e81:
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
              goto LAB_143ad4f01;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143ad4f01:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ae2fe38;
        puVar16[0x15] = param_1;
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
        local_48 = &PTR_LAB_14ae2fdd0;
        local_68[0] = FUN_143ad9ff6;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"DeleteNiagaraStatelessEmitterData",&DAT_14cb44420);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143ad4dbf;
    }
  }
LAB_143ad4cb2:
  if (param_1 != 0) {
    FUN_1482027be(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_143ad4dbf:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad516c FUN_143ad516c body=1432 status=ok
// SIG undefined FUN_143ad516c(void)

void FUN_143ad516c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148202d3a(param_1,0);
  puVar5 = (undefined8 *)param_1[0x4f];
  param_1[0x4f] = 0;
  lVar6 = param_1[2];
  if (puVar5 == (undefined8 *)0x0 && lVar6 == 0) goto LAB_143ad55fc;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143ad51d6;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143ad51db;
      goto LAB_143ad5226;
    }
LAB_143ad51db:
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (lVar6 != 0) {
      FUN_14032e8b2(lVar6);
      FUN_1400020a8(lVar6);
    }
  }
  else {
LAB_143ad51d6:
    if (iVar10 == 0x10) goto LAB_143ad51db;
LAB_143ad5226:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
      goto LAB_143ad51db;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143ad51db;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar3;
      if (puVar14 != (uint *)0x0) goto LAB_143ad52fc;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143ad8169);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar7 + 0x310);
        *(undefined8 *)(lVar7 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar14 = (uint *)*puVar3;
LAB_143ad52fc:
        puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar20 + 0x17);
        uVar16 = puVar14[0x12];
        if (puVar18 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar4 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar3;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x17);
          uVar16 = 0;
          if (puVar18 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_143ad537c;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143ad537c:
      *(uint **)(puVar14 + 0x10) = puVar18;
      puVar14[0x12] = uVar16;
      iVar10 = 0;
      FUN_1447247dc(puVar20,0);
      *puVar20 = &PTR_FUN_14ae2ff78;
      puVar20[0x15] = puVar5;
      puVar20[0x16] = lVar6;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar10 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      lVar6 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar6 == 0) {
        uVar9 = 1;
        if ((char)uVar19 != '\x06') {
          uVar9 = uVar19;
        }
        uVar19 = uVar9;
        uVar15 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar6 + 0x30);
      }
      puVar20[0xf] = uVar15;
      puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar20 + 0x1c) = iVar10;
      if (puVar20 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar20);
        LOCK();
        piVar2 = (int *)(puVar20 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
    }
    else {
      local_88 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14ae2ff20;
      local_78[0] = FUN_143ada4a8;
      local_50 = puVar5;
      local_48 = lVar6;
      FUN_14005a792(&DAT_14ca9a440,L"FReleaseStatelessEmitter",&DAT_14cb44428);
      if (local_78[0] != (code *)0x0) {
        pppuVar17 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar17 = &local_58;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
  }
  param_1[2] = 0;
  puVar5 = (undefined8 *)param_1[0x4f];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_143ad55fc:
  FUN_1482095de(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  plVar8 = (longlong *)param_1[0x35];
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
  *param_1 = &PTR_LAB_14ae00170;
  FUN_14006c2ae(param_1 + 8);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad5706 FUN_143ad5706 body=1921 status=ok
// SIG undefined FUN_143ad5706(void)

void FUN_143ad5706(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 200) = param_2;
  FUN_148202dba();
  if ((*(byte *)(param_1 + 400) & 1) == 0) {
    *(undefined4 *)(param_1 + 600) = 4;
    *(undefined4 *)(param_1 + 0xd4) = 4;
    goto LAB_143ad5749;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x1a0);
  uVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0xe0) + *(int *)(puVar14 + 5);
  *(uint *)(param_1 + 0x194) = uVar6;
  if (*(char *)((longlong)puVar14 + 0x21) == '\0') {
    QueryPerformanceCounter((LARGE_INTEGER *)&local_78);
    uVar6 = (undefined4)local_78 ^ *(uint *)(param_1 + 0x194);
    *(uint *)(param_1 + 0x194) = uVar6;
    puVar14 = *(undefined8 **)(param_1 + 0x1a0);
  }
  *(uint *)(param_1 + 0x198) = uVar6;
  *(uint *)(param_1 + 0x19c) = uVar6;
  FUN_1402ed004(*(undefined8 *)(param_1 + 0x10),*puVar14,0);
  lVar16 = *(longlong *)(param_1 + 0x1a0) + 0x120;
  FUN_1402ae190(param_1 + 0x40,lVar16);
  lVar4 = *(longlong *)(param_1 + 8);
  fStack_60 = (float)*(double *)(lVar4 + 0x80);
  fStack_5c = (float)*(double *)(lVar4 + 0x88);
  fStack_70 = (float)*(double *)(lVar4 + 0x60);
  fStack_6c = (float)*(double *)(lVar4 + 0x68);
  local_78._4_4_ = (float)*(double *)(lVar4 + 0x58);
  local_78._0_4_ = (float)*(double *)(lVar4 + 0x50);
  local_68 = (longlong *)CONCAT44((float)*(double *)(lVar4 + 0x78),(float)*(double *)(lVar4 + 0x70))
  ;
  local_58 = (undefined **)
             CONCAT44((float)*(double *)(lVar4 + 0x98),(float)*(double *)(lVar4 + 0x90));
  uStack_50 = CONCAT44((float)*(double *)(lVar4 + 0xa8),(float)*(double *)(lVar4 + 0xa0));
  FUN_1482009b6(param_1 + 0x1c0,
                CONCAT71((int7)((ulonglong)lVar16 >> 8),*(undefined1 *)(param_1 + 0xd0)) &
                0xffffffffffffff01,&local_78);
  puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[0xe] = 0;
  *puVar10 = &PTR_FUN_14ae2f7f0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  *(undefined1 *)(puVar10 + 9) = 1;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  *(undefined4 *)(puVar10 + 0xe) = 0;
  puVar14 = *(undefined8 **)(param_1 + 0x278);
  puVar19 = puVar14;
  if ((puVar14 != puVar10) &&
     (*(undefined8 **)(param_1 + 0x278) = puVar10, puVar19 = puVar10, puVar14 != (undefined8 *)0x0))
  {
    (**(code **)*puVar14)(puVar14,1);
    puVar19 = *(undefined8 **)(param_1 + 0x278);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1a0);
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar15 = (longlong *)puVar19[3];
  puVar19[2] = uVar11;
  puVar19[3] = lVar4;
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
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x20) = *(undefined4 *)(param_1 + 0x194);
  uVar11 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x24) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x28) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x2c) = 0;
  lVar4 = *(longlong *)(param_1 + 0x278);
  if (*(int *)(param_1 + 0x1b4) != 0) {
    uVar6 = *(uint *)(param_1 + 0x1b0);
    uVar11 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x1b4) ||
          ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = *puVar14;
      }
    }
  }
  lVar16 = FUN_14820263a(uVar11,param_1 + 0x1c0,param_1 + 0x40);
  if (*(longlong *)(lVar4 + 0x40) != lVar16) {
    *(longlong *)(lVar4 + 0x40) = lVar16;
    FUN_1400020a8();
  }
  **(undefined4 **)(*(longlong *)(param_1 + 0x278) + 0x40) = *(undefined4 *)(param_1 + 0x194);
  lVar4 = *(longlong *)(param_1 + 0x278);
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x870);
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar16 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143ad5a02;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143ad5a07;
      goto LAB_143ad5a59;
    }
LAB_143ad5a07:
    uVar11 = FUN_1482095f8(uVar11);
    *(undefined8 *)(lVar4 + 8) = uVar11;
  }
  else {
LAB_143ad5a02:
    if (iVar7 == 0x10) goto LAB_143ad5a07;
LAB_143ad5a59:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar16 + 0xc60), iVar7 == 2))
      goto LAB_143ad5a07;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143ad5a07;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar14 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar13 = (uint *)*puVar14;
      if (puVar13 != (uint *)0x0) goto LAB_143ad5b2f;
      while( true ) {
        uVar6 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar6 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar6 | 1;
          __tlregdtor(&LAB_143ad8169);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar14 = puVar12;
        FUN_140217a48(puVar14);
        puVar13 = (uint *)*puVar14;
LAB_143ad5b2f:
        puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar19 + 0x17);
        uVar6 = puVar13[0x12];
        if (puVar17 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar6 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar6) != 0xffffffff) break;
          puVar13 = (uint *)*puVar14;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar14 = puVar13;
          puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x17);
          uVar6 = 0;
          if (puVar17 <= puVar13 + 0x4000) {
            uVar6 = 1;
            goto LAB_143ad5baf;
          }
        }
      }
      uVar6 = uVar6 + 1;
LAB_143ad5baf:
      *(uint **)(puVar13 + 0x10) = puVar17;
      puVar13[0x12] = uVar6;
      iVar7 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14ae30000;
      puVar19[0x15] = lVar4;
      puVar19[0x16] = uVar11;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar6 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
          iVar7 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar18 != '\x06') {
          uVar5 = uVar18;
        }
        uVar18 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar19[0xf] = uVar11;
      puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar7;
      if (puVar19 == (undefined8 *)0x0) {
        local_78._0_1_ = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
        local_78._0_1_ = 1;
        FUN_1447439e4(puVar19);
        LOCK();
        piVar2 = (int *)(puVar19 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar19)(puVar19,1);
        }
      }
    }
    else {
      local_68 = (longlong *)0x0;
      local_58 = &PTR_LAB_14ae2ffb0;
      local_78 = FUN_143ada6aa;
      local_88 = &local_78;
      uStack_50 = lVar4;
      local_48 = uVar11;
      FUN_14005a792(&DAT_14ca9a440,L"FInitStatelessEmitter",&DAT_14cb4443c);
      if (local_78 != (code *)0x0) {
        plVar15 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar15 = &local_58;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x278);
  FUN_148202f06(param_1);
  FUN_148202fe4(param_1,0);
LAB_143ad5749:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad5e88 FUN_143ad5e88 body=1545 status=ok
// SIG undefined FUN_143ad5e88(void)

void FUN_143ad5e88(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
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
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  LARGE_INTEGER *local_78;
  LARGE_INTEGER local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 400) & 1) == 0) goto LAB_143ad5ea9;
  if (param_2 == '\0') {
    iVar7 = *(int *)(param_1 + 0x240);
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x238);
      lVar15 = 0;
      do {
        *(float *)(lVar5 + 8 + lVar15) =
             *(float *)(lVar5 + 8 + lVar15) - *(float *)(param_1 + 0x230);
        *(float *)(lVar5 + 0xc + lVar15) =
             *(float *)(lVar5 + 0xc + lVar15) - *(float *)(param_1 + 0x230);
        lVar15 = lVar15 + 0x18;
      } while ((longlong)iVar7 * 0x18 != lVar15);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
    if (*(int *)(param_1 + 0x244) != 0) {
      FUN_148209780(param_1 + 0x238);
    }
    *(undefined4 *)(param_1 + 0x234) = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x21) == '\0') {
      QueryPerformanceCounter(local_68);
      *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) ^ local_68[0].s.LowPart;
    }
  }
  FUN_1482095de(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
    FUN_1482097b0(param_1 + 0x248,0);
  }
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(uint *)(param_1 + 400) =
       (*(uint *)(param_1 + 400) & 0xfffffff3) + (*(uint *)(param_1 + 400) & 2) * 2 + 8;
  FUN_148202f06(param_1);
  FUN_148202fe4(param_1,0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  lVar5 = *(longlong *)(param_1 + 0x278);
  if (lVar5 == 0) goto LAB_143ad5ea9;
  uVar4 = *(undefined4 *)(param_1 + 0x194);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143ad6030;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143ad6035;
      goto LAB_143ad6078;
    }
  }
  else {
LAB_143ad6030:
    if (iVar7 != 0x10) {
LAB_143ad6078:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar15 + 0xc60), iVar7 == 2))
        goto LAB_143ad6035;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143ad6035;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143ad61b7;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143ad8169);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143ad61b7:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
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
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x17);
            uVar13 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143ad6237;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143ad6237:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14ae30058;
        puVar18[0x15] = lVar5;
        *(undefined4 *)(puVar18 + 0x16) = uVar4;
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
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_68[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ae30010;
        local_68[0].QuadPart = (LONGLONG)&LAB_143ada888;
        local_40 = lVar5;
        local_38 = uVar4;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateStatelessAge",&DAT_14cb44440);
        if ((undefined1 *)local_68[0].QuadPart != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143ad5ea9;
    }
  }
LAB_143ad6035:
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x20) = uVar4;
  if (*(undefined4 **)(lVar5 + 0x40) != (undefined4 *)0x0) {
    **(undefined4 **)(lVar5 + 0x40) = uVar4;
  }
LAB_143ad5ea9:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad6492 FUN_143ad6492 body=1243 status=ok
// SIG undefined FUN_143ad6492(void)

ulonglong FUN_143ad6492(longlong param_1,char param_2)

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
  undefined8 unaff_RBX;
  ulonglong uVar16;
  undefined8 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  undefined7 uVar17;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar20 = *(int *)(param_1 + 0xd4) - 3U < 2;
  uVar17 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar16 = CONCAT71(uVar17,bVar20);
  if (param_2 != '\x01' || bVar20) goto LAB_143ad65cd;
  *(undefined4 *)(param_1 + 600) = 3;
  *(undefined4 *)(param_1 + 0xd4) = 3;
  lVar4 = *(longlong *)(param_1 + 0x278);
  uVar16 = CONCAT71(uVar17,1);
  if (lVar4 == 0) goto LAB_143ad65cd;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143ad6509;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143ad650e;
      goto LAB_143ad6536;
    }
  }
  else {
LAB_143ad6509:
    if (iVar7 != 0x10) {
LAB_143ad6536:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143ad650e;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143ad650e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143ad6690;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143ad8169);
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
LAB_143ad6690:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x16);
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
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar18 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143ad6710;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143ad6710:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14ae300c8;
        puVar18[0x15] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar19 != '\x06') {
            uVar6 = uVar19;
          }
          uVar19 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ae30070;
        local_68[0] = &LAB_143adaa6e;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"CompleteStatelessEmitter",&DAT_14cb44444);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143ad65cd;
    }
  }
LAB_143ad650e:
  *(undefined4 *)(lVar4 + 0x2c) = 3;
LAB_143ad65cd:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad696e FUN_143ad696e body=2456 status=ok
// SIG undefined FUN_143ad696e(void)

void FUN_143ad696e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char local_118;
  void *local_110;
  undefined8 uStack_108;
  char local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  char local_a8;
  void *local_a0;
  ulonglong uStack_98;
  char local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 == 0) goto LAB_143ad699b;
  puStack_b0 = (undefined4 *)0x0;
  local_a8 = '\0';
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = '\0';
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = *(undefined4 *)(param_1 + 0x230);
  uStack_b4 = *(undefined4 *)(param_1 + 600);
  uVar19 = *(uint *)(param_1 + 0xc0);
  bVar6 = false;
  if ((uVar19 & 1) != 0) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      FUN_14004222e(param_1 + 0x40);
      uVar19 = *(uint *)(param_1 + 0xc0);
    }
    *(uint *)(param_1 + 0xc0) = uVar19 & 0xfffffff8;
    bVar6 = false;
    if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x118) == '\x01') {
      local_a8 = '\x01';
      bVar6 = true;
      if (&local_a0 != (void **)(param_1 + 0x60)) {
        uVar19 = *(uint *)(param_1 + 0x68);
        pvVar4 = *(void **)(param_1 + 0x60);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar19);
        if ((longlong)(int)uVar19 == 0) {
          uStack_98 = (ulonglong)uVar19;
        }
        else {
          FUN_1447a127e(&local_a0,uVar19,0);
          memcpy(local_a0,pvVar4,(longlong)(int)uVar19);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 8);
  fStack_c0 = (float)*(double *)(lVar5 + 0xa0);
  fStack_bc = (float)*(double *)(lVar5 + 0xa8);
  local_c8 = (float)*(double *)(lVar5 + 0x90);
  fStack_c4 = (float)*(double *)(lVar5 + 0x98);
  fStack_d0 = (float)*(double *)(lVar5 + 0x80);
  fStack_cc = (float)*(double *)(lVar5 + 0x88);
  local_d8 = (float)*(double *)(lVar5 + 0x70);
  fStack_d4 = (float)*(double *)(lVar5 + 0x78);
  fStack_e0 = (float)*(double *)(lVar5 + 0x60);
  fStack_dc = (float)*(double *)(lVar5 + 0x68);
  local_e8 = (float)*(double *)(lVar5 + 0x50);
  fStack_e4 = (float)*(double *)(lVar5 + 0x58);
  cVar12 = FUN_148200af4(param_1 + 0x1c0);
  if (cVar12 != '\0' || bVar6) {
    if (*(int *)(param_1 + 0x1b4) == 0) {
LAB_143ad6d1f:
      uVar18 = 0;
    }
    else {
      uVar19 = *(uint *)(param_1 + 0x1b0);
      uVar18 = 0;
      if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
        puVar20 = (undefined8 *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        if ((puVar20 == (undefined8 *)0x0) ||
           ((*(int *)(puVar20 + 2) != *(int *)(param_1 + 0x1b4) ||
            ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_143ad6d1f;
        uVar18 = *puVar20;
      }
    }
    puStack_b0 = (undefined4 *)FUN_14820263a(uVar18,param_1 + 0x1c0,param_1 + 0x40);
    *puStack_b0 = *(undefined4 *)(param_1 + 0x194);
  }
  if ((*(byte *)(param_1 + 400) & 8) != 0) {
    local_90 = '\x01';
    FUN_148203df0(&local_88,param_1 + 0x238);
    *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) & 0xf7;
  }
  local_128 = CONCAT44(uStack_b4,local_b8);
  uStack_120 = puStack_b0;
  local_118 = local_a8;
  local_110 = local_a0;
  uStack_108 = uStack_98;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_100 = local_90;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  local_88 = 0;
  uStack_80 = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar5 + 0xc60);
  local_130 = lVar3;
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_143ad6ba0;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_143ad6ba9;
      goto LAB_143ad6d50;
    }
LAB_143ad6ba9:
    fVar25 = (float)local_128 - *(float *)(local_130 + 0x24);
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    *(float *)(local_130 + 0x28) = fVar25;
    *(float *)(local_130 + 0x24) = (float)local_128;
    *(undefined4 *)(local_130 + 0x2c) = local_128._4_4_;
    if ((uStack_120 != (undefined4 *)0x0) && (*(undefined4 **)(local_130 + 0x40) != uStack_120)) {
      *(undefined4 **)(local_130 + 0x40) = uStack_120;
LAB_143ad6beb:
      FUN_1400020a8();
    }
LAB_143ad6bf0:
    lVar3 = local_130;
    if ((local_118 == '\x01') &&
       (*(undefined1 *)(local_130 + 0x48) = 1, (void **)(local_130 + 0x50) != &local_110)) {
      if (*(longlong *)(local_130 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar3 + 0x50) = local_110;
      local_110 = (void *)0x0;
      *(undefined4 *)(lVar3 + 0x58) = (undefined4)uStack_108;
      *(undefined4 *)(lVar3 + 0x5c) = uStack_108._4_4_;
      uStack_108 = 0;
    }
    lVar3 = local_130;
    if ((local_100 == '\x01') && ((longlong *)(local_130 + 0x30) != &local_f8)) {
      if (*(longlong *)(local_130 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar3 + 0x30) = local_f8;
      local_f8 = 0;
      *(undefined4 *)(lVar3 + 0x38) = (undefined4)uStack_f0;
      *(undefined4 *)(lVar3 + 0x3c) = uStack_f0._4_4_;
      uStack_f0 = 0;
    }
  }
  else {
LAB_143ad6ba0:
    if (iVar13 == 0x10) goto LAB_143ad6ba9;
LAB_143ad6d50:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 = *(int *)(lVar5 + 0xc60), iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_143ad729b;
        }
        goto LAB_143ad6d81;
      }
LAB_143ad729b:
      fVar25 = (float)local_128 - *(float *)(local_130 + 0x24);
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      *(float *)(local_130 + 0x28) = fVar25;
      *(float *)(local_130 + 0x24) = (float)local_128;
      *(undefined4 *)(local_130 + 0x2c) = local_128._4_4_;
      if ((uStack_120 != (undefined4 *)0x0) && (*(undefined4 **)(local_130 + 0x40) != uStack_120)) {
        *(undefined4 **)(local_130 + 0x40) = uStack_120;
        goto LAB_143ad6beb;
      }
      goto LAB_143ad6bf0;
    }
LAB_143ad6d81:
    if (DAT_14ca9a43c == 0) {
      puVar20 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar17 = (uint *)*puVar20;
      if (puVar17 != (uint *)0x0) goto LAB_143ad6f6b;
      while( true ) {
        uVar19 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar19 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar19 | 1;
          __tlregdtor(&LAB_143ad8169);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar20 = puVar16;
        FUN_140217a48(puVar20);
        puVar17 = (uint *)*puVar20;
LAB_143ad6f6b:
        puVar24 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar22 = (uint *)(puVar24 + 0x1e);
        uVar19 = puVar17[0x12];
        if (puVar22 <= puVar17 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar2 = *puVar17;
          *puVar17 = *puVar17 + uVar19 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar19) != 0xffffffff) break;
          puVar17 = (uint *)*puVar20;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar20 = puVar17;
          puVar24 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar24 + 0x1e);
          uVar19 = 0;
          if (puVar22 <= puVar17 + 0x4000) {
            uVar19 = 1;
            goto LAB_143ad6feb;
          }
        }
      }
      uVar19 = uVar19 + 1;
LAB_143ad6feb:
      *(uint **)(puVar17 + 0x10) = puVar22;
      puVar17[0x12] = uVar19;
      iVar13 = 0;
      FUN_1447247dc(puVar24,0);
      *puVar24 = &PTR_FUN_14ae30100;
      puVar24[0x15] = local_130;
      *(char *)(puVar24 + 0x18) = local_118;
      *(float *)(puVar24 + 0x16) = (float)local_128;
      *(undefined4 *)((longlong)puVar24 + 0xb4) = local_128._4_4_;
      *(undefined4 *)(puVar24 + 0x17) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)puVar24 + 0xbc) = uStack_120._4_4_;
      puVar24[0x19] = local_110;
      local_110 = (void *)0x0;
      *(undefined4 *)(puVar24 + 0x1a) = (undefined4)uStack_108;
      *(undefined4 *)((longlong)puVar24 + 0xd4) = uStack_108._4_4_;
      uStack_108 = 0;
      *(char *)(puVar24 + 0x1b) = local_100;
      puVar24[0x1c] = local_f8;
      local_f8 = 0;
      *(undefined4 *)(puVar24 + 0x1d) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar24 + 0xec) = uStack_f0._4_4_;
      uStack_f0 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar19 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
          uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
        }
        else {
          uVar23 = 2;
        }
      }
      else {
        iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar11 = 1;
        if ((char)uVar23 != '\x06') {
          uVar11 = uVar23;
        }
        uVar23 = uVar11;
        uVar18 = 0;
      }
      else {
        if ((char)uVar23 == '\x06') {
          uVar23 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar18 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar24[0xf] = uVar18;
      puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar24 + 0x1c) = iVar13;
      if (puVar24 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,8);
      lVar3 = local_f8;
      pvVar4 = local_110;
      *local_68 = (longlong)&PTR_LAB_14ae300e0;
      local_110 = (void *)0x0;
      uVar7 = (undefined4)uStack_108;
      uVar8 = uStack_108._4_4_;
      uStack_108 = 0;
      local_f8 = 0;
      uVar9 = (undefined4)uStack_f0;
      uVar10 = uStack_f0._4_4_;
      uStack_f0 = 0;
      local_68[1] = local_130;
      *(char *)(local_68 + 4) = local_118;
      *(float *)(local_68 + 2) = (float)local_128;
      *(undefined4 *)((longlong)local_68 + 0x14) = local_128._4_4_;
      *(undefined4 *)(local_68 + 3) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_120._4_4_;
      local_68[5] = (longlong)pvVar4;
      *(undefined4 *)(local_68 + 6) = uVar7;
      *(undefined4 *)((longlong)local_68 + 0x34) = uVar8;
      *(char *)(local_68 + 7) = local_100;
      local_68[8] = lVar3;
      *(undefined4 *)(local_68 + 9) = uVar9;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uVar10;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143adacf8;
      }
      local_138 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateStatelessAge",&DAT_14cb44448);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar21 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar21 = local_58;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_110 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143ad699b:
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad7308 FUN_143ad7308 body=104 status=ok
// SIG undefined FUN_143ad7308(void)

void FUN_143ad7308(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 600) == param_2) {
    return;
  }
  if (1 < param_2 - 2U) {
    if (param_2 != 1) {
      return;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x70) != '\x01') {
      FUN_1482037f6(param_1);
      iVar1 = (uint)(*(int *)(param_1 + 0x240) < 1) * 2 + 1;
      goto LAB_143ad7345;
    }
  }
  FUN_148203938(param_1);
  iVar1 = 3;
LAB_143ad7345:
  *(int *)(param_1 + 600) = iVar1;
  *(int *)(param_1 + 0xd4) = iVar1;
  return;
}



// FUNCTION 143ad7370 FUN_143ad7370 body=1274 status=ok
// SIG undefined FUN_143ad7370(void)

void FUN_143ad7370(longlong param_1,longlong param_2)

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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_2 + 0x120) = 0;
  if (((*(byte *)(param_1 + 400) & 1) == 0) || (*(int *)(param_1 + 0xd4) - 3U < 2))
  goto LAB_143ad74c2;
  lVar4 = *(longlong *)(param_1 + 0x278);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143ad73de;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143ad73e3;
      goto LAB_143ad7422;
    }
LAB_143ad73e3:
    if (*(longlong *)(lVar4 + 8) != 0) {
      FUN_148201af2(*(longlong *)(lVar4 + 8),&DAT_14ca85100,param_2,lVar4);
    }
  }
  else {
LAB_143ad73de:
    if (iVar7 == 0x10) goto LAB_143ad73e3;
LAB_143ad7422:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_143ad73e3;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143ad73e3;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143ad7583;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143ad8169);
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
LAB_143ad7583:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
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
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143ad7603;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143ad7603:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14ae30170;
      puVar16[0x15] = lVar4;
      puVar16[0x16] = param_2;
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
      local_48 = &PTR_LAB_14ae30110;
      local_68[0] = &LAB_143adaef6;
      local_40 = lVar4;
      local_38 = param_2;
      FUN_14005a792(&DAT_14ca9a440,L"CaptureStatelessForDebugging",&DAT_14cb4444c);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_14080c2b4();
LAB_143ad74c2:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad788d FUN_143ad788d body=55 status=ok
// SIG undefined FUN_143ad788d(void)

void FUN_143ad788d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44330 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb44330 = FUN_14171c317(FUN_14647c256,uVar1,L"EVolumeCacheType");
  }
  return;
}



// FUNCTION 143ad78c4 FUN_143ad78c4 body=142 status=ok
// SIG undefined FUN_143ad78c4(void)

void FUN_143ad78c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
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
  local_20 = *(undefined4 *)(param_1 + 0x44);
  local_28 = *(undefined8 *)(param_1 + 0x3c);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad7ab4 FUN_143ad7ab4 body=368 status=ok
// SIG undefined FUN_143ad7ab4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143ad7ab4(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb443a0) {
    FUN_144b3d300(&DAT_14cb443a0);
    if (DAT_14cb443a0 == -1) {
      local_38 = DAT_14c84633c._4_4_;
      uStack_34 = DAT_14c846344;
      uStack_30 = DAT_14c846348;
      uStack_2c = DAT_14c84634c;
      FUN_1446f470e(&local_40,L"Particles.VolumeRotation",1);
      DAT_14cb44380 = local_40;
      DAT_14cb44388 = FUN_144830b78(&DAT_14cb44388,&DAT_14cb42190);
      DAT_14cb44390 = (void *)0x0;
      _DAT_14cb44398 = 0;
      FUN_140121138(&DAT_14cb44380);
      memcpy(DAT_14cb44390,&local_38,(longlong)DAT_14cb44398);
      atexit((_func_5014 *)&LAB_143ad8087);
      _Init_thread_footer(&DAT_14cb443a0);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb44388;
  *param_1 = DAT_14cb44380;
  param_1[2] = 0;
  uVar1 = _DAT_14cb44398;
  _Src = DAT_14cb44390;
  _Size = (size_t)DAT_14cb44398;
  *(int *)(param_1 + 3) = DAT_14cb44398;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad7c25 FUN_143ad7c25 body=378 status=ok
// SIG undefined FUN_143ad7c25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143ad7c25(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb443c8) {
    FUN_144b3d300(&DAT_14cb443c8);
    if (DAT_14cb443c8 == -1) {
      local_38 = &DAT_3f8000003f800000;
      local_30 = 0x3f800000;
      FUN_1446f470e(&local_40,L"Particles.VolumeScale",1);
      DAT_14cb443a8 = local_40;
      DAT_14cb443b0 = FUN_144830b78(&DAT_14cb443b0,&DAT_14cb42140);
      DAT_14cb443b8 = (void *)0x0;
      _DAT_14cb443c0 = 0;
      FUN_140121138(&DAT_14cb443a8);
      memcpy(DAT_14cb443b8,&local_38,(longlong)DAT_14cb443c0);
      atexit((_func_5014 *)&LAB_143ad8098);
      _Init_thread_footer(&DAT_14cb443c8);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb443b0;
  *param_1 = DAT_14cb443a8;
  param_1[2] = 0;
  uVar1 = _DAT_14cb443c0;
  _Src = DAT_14cb443b8;
  _Size = (size_t)DAT_14cb443c0;
  *(int *)(param_1 + 3) = DAT_14cb443c0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad7da0 FUN_143ad7da0 body=364 status=ok
// SIG undefined FUN_143ad7da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143ad7da0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb443f0) {
    FUN_144b3d300(&DAT_14cb443f0);
    if (DAT_14cb443f0 == -1) {
      local_2c = 0;
      FUN_1446f470e(&local_38,L"Particles.VolumeResolutionMaxAxis",1);
      DAT_14cb443d0 = local_38;
      DAT_14cb443d8 = FUN_144830b78(&DAT_14cb443d8,&DAT_14cb420d0);
      DAT_14cb443e0 = (void *)0x0;
      _DAT_14cb443e8 = 0;
      FUN_140121138(&DAT_14cb443d0);
      memcpy(DAT_14cb443e0,&local_2c,(longlong)DAT_14cb443e8);
      atexit((_func_5014 *)&LAB_143ad80a9);
      _Init_thread_footer(&DAT_14cb443f0);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb443d8;
  *param_1 = DAT_14cb443d0;
  param_1[2] = 0;
  uVar1 = _DAT_14cb443e8;
  _Src = DAT_14cb443e0;
  _Size = (size_t)DAT_14cb443e8;
  *(int *)(param_1 + 3) = DAT_14cb443e8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad7f0d FUN_143ad7f0d body=377 status=ok
// SIG undefined FUN_143ad7f0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143ad7f0d(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb44418) {
    FUN_144b3d300(&DAT_14cb44418);
    if (DAT_14cb44418 == -1) {
      local_30 = DAT_14c846338;
      local_38 = DAT_14c846330;
      FUN_1446f470e(&local_40,L"Particles.VolumeWorldSpaceSize",1);
      DAT_14cb443f8 = local_40;
      DAT_14cb44400 = FUN_144830b78(&DAT_14cb44400,&DAT_14cb42140);
      DAT_14cb44408 = (void *)0x0;
      _DAT_14cb44410 = 0;
      FUN_140121138(&DAT_14cb443f8);
      memcpy(DAT_14cb44408,&local_38,(longlong)DAT_14cb44410);
      atexit((_func_5014 *)&LAB_143ad80ba);
      _Init_thread_footer(&DAT_14cb44418);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb44400;
  *param_1 = DAT_14cb443f8;
  param_1[2] = 0;
  uVar1 = _DAT_14cb44410;
  _Src = DAT_14cb44408;
  _Size = (size_t)DAT_14cb44410;
  *(int *)(param_1 + 3) = DAT_14cb44410;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad80f4 FUN_143ad80f4 body=66 status=ok
// SIG undefined FUN_143ad80f4(void)

void FUN_143ad80f4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_140661c88(lVar1 + 0x38,param_2,L"NiagaraSystemStaticBuffers",4,*(undefined4 *)(lVar1 + 0x28),
                0xd,1,lVar1 + 0x18);
  return;
}



// FUNCTION 143ad8140 FUN_143ad8140 body=12 status=ok
// SIG undefined FUN_143ad8140(void)

void FUN_143ad8140(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ad8149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ad814c FUN_143ad814c body=29 status=ok
// SIG undefined FUN_143ad814c(void)

undefined8 FUN_143ad814c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad8190 FUN_143ad8190 body=282 status=ok
// SIG undefined FUN_143ad8190(void)

undefined8 * FUN_143ad8190(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143ad82aa FUN_143ad82aa body=195 status=ok
// SIG undefined FUN_143ad82aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad82aa(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140661c88(_DAT_000000a8 + 0x38,&DAT_14ca85100,L"NiagaraSystemStaticBuffers",4,
                  *(undefined4 *)(_DAT_000000a8 + 0x28),0xd,1,_DAT_000000a8 + 0x18);
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    lVar2 = param_1[0x15];
    FUN_140661c88(lVar2 + 0x38,&DAT_14ca85100,L"NiagaraSystemStaticBuffers",4,
                  *(undefined4 *)(lVar2 + 0x28),0xd,1,lVar2 + 0x18);
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad831b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ad836e FUN_143ad836e body=29 status=ok
// SIG undefined FUN_143ad836e(void)

undefined8 FUN_143ad836e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad83a0 FUN_143ad83a0 body=85 status=ok
// SIG undefined FUN_143ad83a0(void)

void FUN_143ad83a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f8d0;
  return;
}



// FUNCTION 143ad83f6 FUN_143ad83f6 body=85 status=ok
// SIG undefined FUN_143ad83f6(void)

void FUN_143ad83f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f8d0;
  return;
}



// FUNCTION 143ad844c FUN_143ad844c body=118 status=ok
// SIG undefined FUN_143ad844c(void)

void FUN_143ad844c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2f8d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad84b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad84c2 FUN_143ad84c2 body=59 status=ok
// SIG undefined FUN_143ad84c2(void)

void FUN_143ad84c2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143ad853c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad84fe FUN_143ad84fe body=61 status=ok
// SIG undefined FUN_143ad84fe(void)

undefined8 FUN_143ad84fe(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143ad853c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad853c FUN_143ad853c body=236 status=ok
// SIG undefined FUN_143ad853c(void)

void FUN_143ad853c(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400bd118(*param_1);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  FUN_1481fbb88(lVar1,&DAT_14c872ee0);
  return;
}



// FUNCTION 143ad8628 FUN_143ad8628 body=29 status=ok
// SIG undefined FUN_143ad8628(void)

undefined8 FUN_143ad8628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad865a FUN_143ad865a body=85 status=ok
// SIG undefined FUN_143ad865a(void)

void FUN_143ad865a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f940;
  return;
}



// FUNCTION 143ad86b0 FUN_143ad86b0 body=85 status=ok
// SIG undefined FUN_143ad86b0(void)

void FUN_143ad86b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f940;
  return;
}



// FUNCTION 143ad8706 FUN_143ad8706 body=118 status=ok
// SIG undefined FUN_143ad8706(void)

void FUN_143ad8706(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2f940;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad876d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad877c FUN_143ad877c body=62 status=ok
// SIG undefined FUN_143ad877c(void)

void FUN_143ad877c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad87fe(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad87bc FUN_143ad87bc body=64 status=ok
// SIG undefined FUN_143ad87bc(void)

undefined8 FUN_143ad87bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad87fe(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad87fe FUN_143ad87fe body=81 status=ok
// SIG undefined FUN_143ad87fe(void)

void FUN_143ad87fe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  wchar_t *_Str;
  
  lVar2 = FUN_1400bd118(*param_2);
  if ((lVar2 != 0) && ((int)param_1[1] == 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    bVar3 = 3;
    if ((byte)iVar1 < 3) {
      bVar3 = (byte)iVar1;
    }
    *(byte *)(lVar2 + 0x1c08) = bVar3;
  }
  return;
}



// FUNCTION 143ad8850 FUN_143ad8850 body=29 status=ok
// SIG undefined FUN_143ad8850(void)

undefined8 FUN_143ad8850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad8882 FUN_143ad8882 body=85 status=ok
// SIG undefined FUN_143ad8882(void)

void FUN_143ad8882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f9b0;
  return;
}



// FUNCTION 143ad88d8 FUN_143ad88d8 body=85 status=ok
// SIG undefined FUN_143ad88d8(void)

void FUN_143ad88d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2f9b0;
  return;
}



// FUNCTION 143ad892e FUN_143ad892e body=118 status=ok
// SIG undefined FUN_143ad892e(void)

void FUN_143ad892e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2f9b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad8995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad89a4 FUN_143ad89a4 body=62 status=ok
// SIG undefined FUN_143ad89a4(void)

void FUN_143ad89a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad8a26(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad89e4 FUN_143ad89e4 body=64 status=ok
// SIG undefined FUN_143ad89e4(void)

undefined8 FUN_143ad89e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad8a26(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad8a26 FUN_143ad8a26 body=93 status=ok
// SIG undefined FUN_143ad8a26(void)

void FUN_143ad8a26(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  float fVar2;
  double dVar3;
  
  lVar1 = FUN_1400bd118(*param_2);
  if ((lVar1 != 0) && ((int)param_1[1] == 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar3 = _wtof(_Str);
    fVar2 = (float)dVar3;
    if (10.0 <= fVar2) {
      fVar2 = 10.0;
    }
    if (fVar2 <= 0.0001) {
      fVar2 = 0.0001;
    }
    *(float *)(lVar1 + 0x1c0c) = fVar2;
  }
  return;
}



// FUNCTION 143ad8a84 FUN_143ad8a84 body=29 status=ok
// SIG undefined FUN_143ad8a84(void)

undefined8 FUN_143ad8a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad8ab6 FUN_143ad8ab6 body=85 status=ok
// SIG undefined FUN_143ad8ab6(void)

void FUN_143ad8ab6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fa20;
  return;
}



// FUNCTION 143ad8b0c FUN_143ad8b0c body=85 status=ok
// SIG undefined FUN_143ad8b0c(void)

void FUN_143ad8b0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fa20;
  return;
}



// FUNCTION 143ad8b62 FUN_143ad8b62 body=118 status=ok
// SIG undefined FUN_143ad8b62(void)

void FUN_143ad8b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fa20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad8bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad8bd8 FUN_143ad8bd8 body=62 status=ok
// SIG undefined FUN_143ad8bd8(void)

void FUN_143ad8bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad8c5a(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad8c18 FUN_143ad8c18 body=64 status=ok
// SIG undefined FUN_143ad8c18(void)

undefined8 FUN_143ad8c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143ad8c5a(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad8c5a FUN_143ad8c5a body=92 status=ok
// SIG undefined FUN_143ad8c5a(void)

void FUN_143ad8c5a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *_Str;
  
  lVar3 = FUN_1400bd118(*param_2);
  if ((lVar3 != 0) && ((int)param_1[1] == 1)) {
    cVar1 = FUN_1405b43cc(*param_1);
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      iVar2 = _wtoi(_Str);
      iVar4 = 2;
      if ((byte)iVar2 < 2) {
        iVar4 = iVar2;
      }
      FUN_1481fb64e(iVar4);
      return;
    }
  }
  return;
}



// FUNCTION 143ad8cb6 FUN_143ad8cb6 body=29 status=ok
// SIG undefined FUN_143ad8cb6(void)

undefined8 FUN_143ad8cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


