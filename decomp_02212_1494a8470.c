// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494a8470 FUN_1494a8470 body=371 status=ok
// SIG undefined FUN_1494a8470(void)

longlong * FUN_1494a8470(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1457a9e34(&local_38,0x10,1,0);
  uVar4 = (ulonglong)local_28;
  if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
    do {
      lVar3 = *(longlong *)(local_38 + (uVar4 & 0xffffffff) * 8);
      if (((*(uint *)(lVar3 + 0xd4) & 0x3000001) == 0) &&
         ((((lVar2 = FUN_14590aaa4(), lVar2 != 0 &&
            (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) && (lVar2 = FUN_144b00ba4(lVar3), lVar2 != DAT_14c951640)))) {
        lVar2 = *(longlong *)(lVar3 + 0x110);
        if (lVar2 == 0) {
          FUN_140aa6c08(lVar3);
          lVar2 = *(longlong *)(lVar3 + 0x110);
          if (lVar2 == 0) goto LAB_1494a84d1;
        }
        lVar3 = FUN_14590aaa4();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1494d8a62(param_1,iVar1);
          }
          *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
        }
      }
LAB_1494a84d1:
      uVar4 = (longlong)(int)local_28;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_28 = (uint)uVar4;
        if ((longlong)local_30 <= (longlong)uVar4) break;
      } while (*(longlong *)(local_38 + uVar4 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_28 < local_30));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494a85e8 FUN_1494a85e8 body=185 status=ok
// SIG undefined FUN_1494a85e8(void)

void FUN_1494a85e8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a86a2 FUN_1494a86a2 body=185 status=ok
// SIG undefined FUN_1494a86a2(void)

void FUN_1494a86a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a8760 FUN_1494a8760 body=48 status=ok
// SIG undefined FUN_1494a8760(void)

void FUN_1494a8760(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_145b15b04(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001494a878d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
  return;
}



// FUNCTION 1494a8790 FUN_1494a8790 body=1499 status=ok
// SIG undefined FUN_1494a8790(void)

void FUN_1494a8790(longlong param_1,uint param_2,longlong *param_3)

{
  void *pvVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auStack_128 [32];
  int local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  void *local_e8;
  uint local_e0;
  longlong *local_d8;
  int local_d0;
  void *local_c8;
  ulonglong uStack_c0;
  undefined2 *local_b0;
  int local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined7 uStack_9f;
  longlong *local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xe8) <= (int)param_2)) goto LAB_1494a8ce2;
  lVar11 = *(longlong *)(param_1 + 0x20);
  if (lVar11 == 0) {
LAB_1494a87e6:
    lVar11 = 0;
  }
  else {
    lVar12 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) != lVar12 + 0x30)) goto LAB_1494a87e6;
  }
  plVar4 = (longlong *)FUN_14479d2ce((ulonglong)param_2 * 8 + *(longlong *)(param_1 + 0xe0));
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,&local_a0);
    puVar5 = (undefined8 *)FUN_1447a1f4a(&local_a0);
    local_f0 = *(undefined8 *)(param_1 + 0x18);
    FUN_14029eeae(&local_f0,&local_c8);
    local_b0 = *(undefined2 **)(lVar11 + 0x18);
    local_100 = lVar11;
    FUN_1400021e4(&local_b0,&local_d8);
    iVar9 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar9 = 0;
    }
    FUN_1412cfe60(&local_b0,&local_d8,iVar9 + 1 + (uint)(local_d0 == 0));
    FUN_1401aebe8(&local_b0,local_c8,iVar9);
    iVar9 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar9 = 0;
    }
    FUN_1412cfe60(&local_e8,&local_b0,iVar9 + 1 + (uint)(local_a8 == 0));
    FUN_1401aebe8(&local_e8,*puVar5,iVar9);
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT71(uStack_9f,local_a0) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT71(uStack_9f,local_a0) + 0x10))();
    }
    if ((longlong)(int)param_3[1] == 0) {
      bVar14 = 0;
    }
    else {
      lVar11 = *param_3;
      local_f8 = (longlong)(int)param_3[1] * 0x48;
      lVar12 = 0;
      bVar14 = 0;
      do {
        local_a0 = 0;
        FUN_144a5dc74(local_98);
        local_78 = (void *)0x0;
        uStack_70 = 0;
        local_68 = 0;
        iVar9 = *(int *)(lVar11 + lVar12);
        if (iVar9 == 1) {
          local_a0 = 1;
        }
        else if (iVar9 == 2) {
          local_a0 = 2;
        }
        else if (iVar9 == 3) {
          local_a0 = 3;
        }
        local_88 = *(undefined4 *)(lVar11 + 0x38 + lVar12);
        local_84 = *(undefined4 *)(lVar11 + 0x3c + lVar12);
        local_80 = *(undefined4 *)(lVar11 + 0x40 + lVar12);
        local_b0 = (undefined2 *)0x0;
        local_a8 = *(int *)(lVar11 + 0x20 + lVar12);
        lVar13 = (longlong)local_a8;
        pvVar1 = *(void **)(lVar11 + 0x18 + lVar12);
        if (lVar13 == 0) {
          local_a4 = 0;
        }
        else {
          FUN_1446dd670(&local_b0,local_a8,0);
          memcpy(local_b0,pvVar1,lVar13 * 2);
        }
        cVar3 = FUN_1494bd322(&local_b0);
        if (cVar3 != '\0') {
          puVar10 = &DAT_149dfb77a;
          if (local_a8 != 0) {
            puVar10 = local_b0;
          }
          uVar6 = FUN_140277b32(0,0,puVar10,1);
          FUN_14485c47a(&local_68,uVar6);
          plVar7 = (longlong *)FUN_14479d2ce(&local_68);
          pvVar1 = local_e8;
          if (plVar7 != (longlong *)0x0) {
            if (plVar7 == plVar4) {
              local_c8 = (void *)0x0;
              lVar13 = (longlong)(int)local_e0;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,local_e0);
              if (lVar13 == 0) {
                uStack_c0 = (ulonglong)local_e0;
              }
              else {
                FUN_1446dd670(&local_c8,local_e0,0);
                memcpy(local_c8,pvVar1,lVar13 * 2);
              }
            }
            else {
              local_d8 = (longlong *)plVar7[3];
              FUN_1400021e4(&local_d8,&local_c8);
            }
            iVar9 = (int)uStack_c0 + -1;
            if ((int)uStack_c0 == 0) {
              iVar9 = 0;
            }
            FUN_1402980a2(&local_b0,local_c8,iVar9);
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        if (1 < *(int *)(lVar11 + 0x30 + lVar12)) {
          plVar7 = (longlong *)FUN_14054d1d4();
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(lVar11 + 0x30 + lVar12) != 0) {
            puVar10 = *(undefined2 **)(lVar11 + 0x28 + lVar12);
          }
          (**(code **)(*plVar7 + 0xf8))(plVar7,&local_c8,puVar10);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_78 = local_c8;
          uStack_70 = uStack_c0;
        }
        local_c8 = (void *)0x0;
        uStack_c0 = 0;
        if (1 < local_a8) {
          FUN_1402980a2(&local_c8,local_b0,local_a8 + -1);
          if (*(int *)(lVar11 + 0x38 + lVar12) != -1) {
            iVar9 = *(int *)(lVar11 + 0x40 + lVar12);
            if (*(int *)(lVar11 + 0x3c + lVar12) == iVar9) {
              pwVar8 = L" (%d,%d)";
            }
            else {
              pwVar8 = L" (%d,%d-%d)";
              local_108 = iVar9;
            }
            FUN_140002266(&local_d8,pwVar8);
            iVar9 = local_d0 + -1;
            if (local_d0 == 0) {
              iVar9 = 0;
            }
            FUN_1400020e8(&local_c8,local_d8,iVar9);
            if (local_d8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1400020e8(&local_c8,&DAT_149e35320,2);
        }
        FUN_1400020e8(&local_c8,*(undefined8 *)(lVar11 + 8 + lVar12));
        FUN_140009b9a(&local_d8,&local_c8);
        FUN_140008f88(local_98);
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))();
        }
        if (local_100 != 0) {
          FUN_1494d8ae8(local_100 + 0x180);
        }
        bVar2 = local_a0;
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_98[0] != (longlong *)0x0) {
          (**(code **)(*local_98[0] + 0x10))();
        }
        if (bVar14 < bVar2) {
          bVar14 = bVar2;
        }
        lVar12 = lVar12 + 0x48;
      } while (local_f8 != lVar12);
    }
    if (*(byte *)(plVar4 + 0x16) != bVar14) {
      *(byte *)(plVar4 + 0x16) = bVar14;
      FUN_1494bd580(plVar4,4);
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1494a8ce2:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a8d6c FUN_1494a8d6c body=134 status=ok
// SIG undefined FUN_1494a8d6c(void)

byte FUN_1494a8d6c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 == 0) {
    bVar7 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar8 = 0;
    bVar7 = 0;
    do {
      if ((*(char *)(lVar2 + 0x10 + lVar8) == '\0') &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(lVar2 + 8 + lVar8) * 8),
         lVar3 != 0)) {
        uVar5 = FUN_145a96a28();
        plVar6 = (longlong *)FUN_144718840(lVar3,uVar5);
        if (plVar6 != (longlong *)0x0) {
          bVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(lVar2 + 0xc + lVar8));
          bVar7 = bVar7 | bVar4;
        }
      }
      lVar8 = lVar8 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar8 != 0);
  }
  return bVar7;
}



// FUNCTION 1494a8df2 FUN_1494a8df2 body=94 status=ok
// SIG undefined FUN_1494a8df2(void)

longlong FUN_1494a8df2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_145ba5066();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 1494a8e50 FUN_1494a8e50 body=192 status=ok
// SIG undefined FUN_1494a8e50(void)

undefined8 FUN_1494a8e50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_2;
  if ((((lVar2 != 0) && (lVar1 = FUN_140fc6edc(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (lVar2 = *param_2, lVar2 != 0)))) {
    lVar1 = FUN_140fc6edc();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    plVar3 = *(longlong **)(lVar2 + 0x110);
    if (plVar3 == (longlong *)0x0) {
      FUN_140aa6c08(lVar2);
      plVar3 = *(longlong **)(lVar2 + 0x110);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
    }
    lVar2 = FUN_140fc6edc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar3 + 0x370))(plVar3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1494a8f10 FUN_1494a8f10 body=1032 status=ok
// SIG undefined FUN_1494a8f10(void)

void FUN_1494a8f10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  int local_118;
  undefined4 local_114;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_3;
  FUN_1446ddc76(&local_c0,"AssetRegistry",1);
  uVar9 = FUN_144a52528();
  plVar10 = (longlong *)FUN_14493e38c(uVar9,local_c0);
  local_d8 = 0;
  uStack_d0 = 0;
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10);
  uVar9 = FUN_1458f36a4();
  FUN_1414d7078(uVar9,local_e8);
  (**(code **)(*plVar10 + 0x30))(plVar10,local_e8,&local_d8,0);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)(int)uStack_d0 != 0) {
    lVar15 = (longlong)(int)uStack_d0 * 0x70;
    lVar14 = local_d8;
    do {
      FUN_1494a931a(local_b8,lVar14);
      lVar14 = lVar14 + 0x70;
      lVar15 = lVar15 + -0x70;
    } while (lVar15 != 0);
  }
  uVar9 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar17 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar16 = (uint)uVar9 & 0xffff;
  uVar4 = ((uint)uVar9 << 0x10 | uVar16) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4);
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  iVar7 = *(int *)(param_2 + 3);
  if (iVar7 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)param_2[2];
  }
  uVar12 = (ulonglong)(iVar7 - 1);
  if (iVar7 == 0) {
    uVar12 = 0;
  }
  uVar6 = FUN_144a49b4a(uVar12,puVar13);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  iVar7 = FUN_1494d9160(local_b8,uVar5,param_2);
  uVar12 = 0;
  if (iVar7 != -1) {
    uVar12 = (longlong)iVar7 * 0x78 + local_b8[0];
  }
  lVar14 = local_f8;
  if (uVar12 != 0) {
    plVar10 = (longlong *)(uVar12 + 0x20);
    lVar15 = uVar12 + 0x30;
    local_138 = 0x100000000;
    lStack_128 = 0xffffffff;
    local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
    iVar7 = 0;
    local_130 = lVar15;
    if (*(int *)(uVar12 + 0x48) != 0) {
      FUN_1449c0562(&local_138);
      iVar7 = *(int *)(uVar12 + 0x48);
    }
    local_108 = local_138;
    local_100 = local_130;
    local_f8 = lStack_128;
    lVar14 = local_f8;
    local_f0 = (undefined4)local_120;
    local_ec = local_120._4_4_;
    local_f8._4_4_ = (int)((ulonglong)lStack_128 >> 0x20);
    local_110 = plVar10;
    if ((local_f8._4_4_ != iVar7) || (local_130 != lVar15)) {
      iVar8 = local_f8._4_4_;
      local_f8 = lVar14;
      do {
        lVar14 = *local_110;
        lVar11 = (longlong)iVar8 * 0x30;
        local_138 = *(undefined8 *)(lVar14 + lVar11);
        plVar1 = (longlong *)(lVar14 + 8 + lVar11);
        local_130 = *plVar1;
        lStack_128 = plVar1[1];
        local_120 = (void *)0x0;
        local_118 = *(int *)(lVar14 + 0x20 + lVar11);
        lVar18 = (longlong)local_118;
        _Src = *(void **)(lVar14 + 0x18 + lVar11);
        if (lVar18 == 0) {
          local_114 = 0;
        }
        else {
          FUN_1446dd670(&local_120,local_118,0);
          memcpy(local_120,_Src,lVar18 * 2);
        }
        lVar14 = FUN_1494a96ac(&local_138);
        if (lVar14 != 0) {
          FUN_1494a236c(lVar14,local_140);
          FUN_14282b7b8(lVar14);
        }
        if (local_120 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
        FUN_1449c0562(&local_108);
        iVar8 = local_f8._4_4_;
        lVar14 = local_f8;
      } while (local_110 != plVar10 || (local_100 != lVar15 || local_f8._4_4_ != iVar7));
    }
  }
  local_f8 = lVar14;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1494cffd8(local_b8);
  FUN_140195631(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a931a FUN_1494a931a body=913 status=ok
// SIG undefined FUN_1494a931a(void)

void FUN_1494a931a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong **local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_146ff8bfc(param_2,&local_e8,DAT_14cc1c728);
  if (1 < local_e0) {
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    puVar10 = local_e8;
    if (DAT_14cc1cc98 == 0) {
      uVar9 = FUN_140c44346();
      DAT_14cc1cc98 = FUN_140002ddd(FUN_14673acd6,uVar9,L"OptimusFunctionReferenceData");
      puVar10 = local_e8;
      if (local_e0 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
    }
    uStack_110 = 0;
    local_118 = (longlong *)0x0;
    local_128 = &local_118;
    local_120 = 1;
    local_130 = 0;
    local_138 = 0;
    FUN_14115911a(DAT_14cc1cc98,puVar10,local_b8,0);
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_d0 = local_a8;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    local_c0 = 0;
    iVar14 = 0;
    if (local_90 != 0) {
      FUN_1449c0562(&local_d8);
      iVar14 = local_90;
    }
    local_100 = local_c8;
    uVar9 = local_100;
    local_f8 = local_c0;
    local_f4 = local_bc;
    uStack_110 = local_d8;
    local_108 = local_d0;
    local_118 = local_b8;
    local_100._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    iVar5 = local_100._4_4_;
    if ((local_100._4_4_ != iVar14) || (local_100 = uVar9, local_d0 != local_a8)) {
      do {
        local_100 = uVar9;
        lVar1 = *local_118;
        lVar12 = (longlong)iVar5 * 0x78;
        uVar9 = *(undefined8 *)(lVar1 + lVar12);
        uVar2 = *(undefined8 *)(lVar1 + 8 + lVar12);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar13 = (uint)uVar2 & 0xffff;
        uVar6 = (uint)((ulonglong)uVar9 >> 0x10);
        uVar11 = (uint)uVar9 & 0xffff;
        uVar6 = ((uint)uVar9 << 0x10 | uVar11) + (int)((ulonglong)uVar9 >> 0x20) +
                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4);
        uVar7 = FUN_144a78877(0,(uVar6 >> 2) +
                                ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4) + uVar6 * 0x40 +
                                0x9e3779b9 ^ uVar6);
        iVar5 = *(int *)(lVar1 + 0x18 + lVar12);
        puVar10 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar10 = *(undefined2 **)(lVar1 + 0x10 + lVar12);
        }
        iVar3 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        uVar8 = FUN_144a49b4a(iVar3,puVar10);
        uVar7 = FUN_144a78877(uVar7,uVar8);
        uVar9 = FUN_1494d91ce(param_1,uVar7,lVar1 + lVar12);
        FUN_1494a96ec(uVar9,lVar1 + lVar12 + 0x20);
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~uStack_110._4_4_);
        FUN_1449c0562(&uStack_110);
        iVar5 = local_100._4_4_;
        uVar9 = local_100;
      } while (local_118 != local_b8 || (local_108 != local_a8 || local_100._4_4_ != iVar14));
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1494cffd8(local_b8);
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a96ac FUN_1494a96ac body=63 status=ok
// SIG undefined FUN_1494a96ac(void)

longlong FUN_1494a96ac(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1459f781e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1494a96ec FUN_1494a96ec body=356 status=ok
// SIG undefined FUN_1494a96ec(void)

void FUN_1494a96ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1494d9aa8(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1494d9c4a(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_1494d9f30(param_1,&local_50,(longlong)iStack_5c * 0x30 + *local_78);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a9852 FUN_1494a9852 body=197 status=ok
// SIG undefined FUN_1494a9852(void)

undefined4 * FUN_1494a9852(undefined4 *param_1,longlong *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(longlong *)(param_1 + 8) = *param_2;
  *param_2 = 0;
  param_1[10] = (int)param_2[1];
  param_1[0xb] = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1446ddc76(&local_40,"Vertex",1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 1;
  FUN_1401b309e(param_1 + 0xc,1,0);
  **(undefined8 **)(param_1 + 0xc) = local_40;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a9918 FUN_1494a9918 body=102 status=ok
// SIG undefined FUN_1494a9918(void)

void FUN_1494a9918(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    _Src = *(void **)(param_1 + 0x30);
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_1401b309e(param_1 + 8,iVar1,*(undefined4 *)(param_1 + 0x14));
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 << 3);
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) < 0) {
      FUN_1402191ca(param_1 + 0x30,0);
      return;
    }
  }
  return;
}



// FUNCTION 1494a997e FUN_1494a997e body=567 status=ok
// SIG undefined FUN_1494a997e(void)

/* WARNING: Removing unreachable block (ram,0x0001494a9a5b) */

undefined8 FUN_1494a997e(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == 1) {
    if (1 < param_1[10]) {
      FUN_140ded208(param_1 + 8,&local_58);
      puVar8 = local_58;
      if ((int)uStack_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"\'%s\'",puVar8);
LAB_1494a9b74:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    pwVar6 = L"Undefined";
  }
  else if (*param_1 == 0) {
    iVar1 = param_1[4];
    if ((longlong)iVar1 != 0) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      lVar2 = *(longlong *)(param_1 + 2);
      lVar7 = 0;
      local_78 = param_2;
      puVar8 = local_70;
      uVar4 = local_68;
      do {
        local_68 = uVar4;
        local_70 = puVar8;
        local_60 = *(undefined8 *)(lVar2 + lVar7);
        FUN_1400021e4(&local_60,&local_70);
        uVar3 = uStack_50;
        lVar9 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a1bd6(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar9 * 8) = 0;
        *(undefined2 **)(local_58 + lVar9 * 8) = local_70;
        local_70 = (undefined2 *)0x0;
        puVar8 = local_70;
        *(int *)(local_58 + lVar9 * 8 + 4) = (int)local_68;
        *(undefined4 *)(local_58 + lVar9 * 8 + 6) = local_68._4_4_;
        local_68 = 0;
        uVar4 = local_68;
        local_68 = 0;
        local_70 = (undefined2 *)0x0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
      FUN_142746448(&local_70,&DAT_14bd0fb49);
      param_2 = local_78;
      puVar8 = local_70;
      if ((int)local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_144a8b2a0(local_78,&local_58,puVar8);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (1 < param_1[6]) {
        FUN_140002266(&local_70,L" x %d");
        iVar1 = (int)local_68 + -1;
        if ((int)local_68 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_2,local_70,iVar1);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
      goto LAB_1494a9b74;
    }
    pwVar6 = L"Parameter";
  }
  else {
    pwVar6 = L"";
  }
  FUN_140056680(param_2,pwVar6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1494a9bb6 FUN_1494a9bb6 body=367 status=ok
// SIG undefined FUN_1494a9bb6(void)

ulonglong FUN_1494a9bb6(int *param_1,int *param_2,longlong *param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*param_1 == 1) && (param_1[10] < 2)) || ((*param_2 == 1 && (param_2[10] < 2)))) {
    if (param_3 != (longlong *)0x0) {
      pwVar2 = L"One of the pins has undefined datadomain";
LAB_1494a9bf2:
      FUN_14020fad6(param_3,pwVar2);
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (*param_1 == 0 && param_1[4] == 0) goto LAB_1494a9bfc;
    if (*param_2 == 0 && param_2[4] == 0) {
      if (param_3 != (longlong *)0x0) {
        pwVar2 = L"Can\'t connect a resource output into a value input.";
        goto LAB_1494a9bf2;
      }
    }
    else {
      cVar1 = FUN_1494a5a62(param_1,param_2);
      if (cVar1 != '\0') goto LAB_1494a9bfc;
      if (param_3 != (longlong *)0x0) {
        FUN_1494a997e(param_2,&local_50);
        puVar4 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar4 = local_50;
        }
        FUN_1494a997e(param_1,&local_60);
        puVar5 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar5 = local_60;
        }
        FUN_140002266(&local_40,
                      L"Can\'t connect resources with incompatible data domain types (%s vs %s).",
                      puVar5,puVar4);
        if (&local_40 == param_3) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_3 != 0) {
            FUN_1400020a8();
          }
          *param_3 = local_40;
          local_40 = 0;
          *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
          *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
          local_38 = 0;
        }
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar3 = 0;
LAB_1494a9bfc:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a9d2c FUN_1494a9d2c body=4964 status=ok
// SIG undefined FUN_1494a9d2c(void)

/* WARNING: Removing unreachable block (ram,0x0001494aa54b) */
/* WARNING: Removing unreachable block (ram,0x0001494aa555) */
/* WARNING: Removing unreachable block (ram,0x0001494aa567) */
/* WARNING: Removing unreachable block (ram,0x0001494a9f07) */
/* WARNING: Removing unreachable block (ram,0x0001494a9f12) */
/* WARNING: Removing unreachable block (ram,0x0001494a9f16) */
/* WARNING: Removing unreachable block (ram,0x0001494aa9b6) */
/* WARNING: Removing unreachable block (ram,0x0001494aa9c0) */
/* WARNING: Removing unreachable block (ram,0x0001494aa9d2) */

ulonglong FUN_1494a9d2c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  byte bVar26;
  undefined7 uVar27;
  undefined ***pppuVar28;
  longlong lVar29;
  ulonglong uVar30;
  int *piVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStack_4b8 [32];
  undefined ****local_498;
  void **local_490;
  undefined8 local_488;
  int local_47c;
  ulonglong local_478;
  longlong local_470;
  void *local_468;
  undefined8 uStack_460;
  void *local_458;
  int local_450;
  undefined4 local_44c;
  longlong local_448;
  undefined8 uStack_440;
  int local_434;
  undefined8 local_430;
  undefined ***local_428;
  undefined ***local_420;
  undefined ***local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined2 uStack_3f4;
  undefined1 uStack_3f2;
  undefined1 uStack_3f1;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined ***pppuStack_3e0;
  undefined8 local_3d8;
  longlong local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a0;
  longlong *local_398 [2];
  byte local_381;
  undefined8 *local_380;
  code *local_378 [2];
  undefined8 *local_368;
  code *local_338 [2];
  undefined8 local_328 [6];
  undefined ***local_2f8 [2];
  undefined8 local_2e8;
  code *local_2b8 [2];
  undefined8 *local_2a8;
  code *local_278 [2];
  undefined8 local_268 [6];
  undefined ***local_238 [2];
  undefined8 local_228 [6];
  undefined8 local_1f8;
  undefined ***pppuStack_1f0;
  undefined ***local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  longlong lStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined ***local_1b8;
  undefined ***pppuStack_1b0;
  undefined ***local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined **local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178 [4];
  undefined4 local_158;
  undefined4 local_154;
  int local_14c;
  undefined ***local_148;
  undefined ***pppuStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined ***pppuStack_100;
  undefined ***local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_380 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    uVar25 = 0;
    goto LAB_1494a9d79;
  }
  local_381 = FUN_1494ab2b2(param_2);
  local_381 = local_381 & 0xfc;
  local_1b8 = (undefined ***)param_2[3];
  FUN_145715fae(local_398,&local_1b8);
  FUN_146739dc5(&local_3a0,local_380,1);
  uVar12 = FUN_14452b4ce();
  uVar11 = uStack_d0;
  local_118 = local_d8;
  lVar29 = uStack_e0;
  local_128 = local_e8;
  uVar4 = uStack_f0;
  pppuStack_1b0 = pppuStack_100;
  pppuVar21 = pppuStack_140;
  puVar23 = local_380;
  uStack_120 = CONCAT71(uStack_120._1_7_,uVar12);
  uStack_190 = (undefined4)uStack_e0;
  uStack_18c = uStack_e0._4_4_;
  uStack_180 = (undefined4)uStack_d0;
  uStack_17c = uStack_d0._4_4_;
  uStack_1a0 = (undefined4)uStack_f0;
  uStack_19c = uStack_f0._4_4_;
  local_1a8 = (undefined ***)0x0;
  local_1b8 = (undefined ***)0x0;
  local_f8 = (undefined ***)0x0;
  uStack_f0 = uStack_130;
  local_108 = FUN_14452fe54;
  pppuStack_100 = pppuStack_140;
  local_e8 = &PTR_LAB_14bd1d860;
  uStack_e0 = uStack_120;
  local_d8 = local_380;
  uStack_d0 = uStack_110;
  local_148 = (undefined ***)0x0;
  local_138 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14bd1d860;
  local_f8 = (undefined ***)0x0;
  local_108 = FUN_14452fe54;
  uStack_110 = uVar11;
  uStack_120 = lVar29;
  uStack_130 = uVar4;
  local_138 = (undefined ***)0x0;
  pppuStack_140 = pppuStack_1b0;
  local_148 = (undefined ***)0x0;
  local_188 = local_118;
  local_198 = local_128;
  local_1a8 = (undefined ***)0x0;
  local_1b8 = (undefined ***)0x0;
  if (local_381 == 0) {
    if (local_380 == (undefined8 *)0x0) {
LAB_1494aaa61:
      bVar13 = (byte)pppuVar21;
      bVar26 = 0;
      uVar27 = 0;
    }
    else {
      pppuVar21 = (undefined ***)FUN_1408cc5f4();
      lVar29 = puVar23[2];
      pppuVar28 = pppuVar21 + 7;
      if ((*(int *)(lVar29 + 0x38) < *(int *)pppuVar28) ||
         (pppuVar21 = pppuVar21 + 6,
         *(undefined ****)(*(longlong *)(lVar29 + 0x30) + (longlong)*(int *)pppuVar28 * 8) !=
         pppuVar21)) goto LAB_1494aaa61;
      local_468 = (void *)0x0;
      uStack_460 = 0;
      local_2f8[0] = (undefined ***)0x0;
      local_2e8 = 0;
      local_338[0] = local_108;
      local_328[0] = 0;
      if (local_108 != (code *)0x0) {
        pppuVar21 = local_f8;
        if (local_f8 == (undefined ***)0x0) {
          pppuVar21 = &local_e8;
        }
        (*(code *)**pppuVar21)(0,local_328);
      }
      local_378[0] = (code *)0x0;
      local_368 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_368 = &PTR_FUN_14bd1d8c0;
      local_368[1] = &local_3a0;
      local_368[2] = local_398;
      local_368[3] = &local_380;
      local_368[4] = &local_381;
      if (local_368 + 1 != (longlong *)0x0) {
        local_378[0] = FUN_144530b92;
      }
      local_490 = &local_468;
      local_498 = local_2f8;
      bVar13 = FUN_140fc92aa(param_1,local_3a0,local_378,local_338);
      uVar27 = (undefined7)((ulonglong)puVar23 >> 8);
      bVar26 = 1;
    }
    uVar25 = CONCAT71(uVar27,bVar26 & bVar13);
  }
  else {
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_1f8 = (undefined ***)local_380;
    iVar34 = 0;
    if (local_380 == (undefined8 *)0x0) {
      pppuStack_1f0 = (undefined ***)0x0;
    }
    else {
      pppuStack_1f0 = (undefined ***)local_380[10];
    }
    local_1e8 = (undefined ***)CONCAT17(local_1e8._7_1_,0x101ffffffff);
    local_488 = param_1;
    FUN_144a2daf0(&local_1f8);
    local_3d8 = local_1e8;
    local_3e8 = (undefined4)local_1f8;
    uStack_3e4 = local_1f8._4_4_;
    pppuStack_3e0 = pppuStack_1f0;
    local_408 = 0;
    uStack_400 = (undefined ***)0x0;
    local_3f8 = 0xffffffff;
    uStack_3f4 = 0x101;
    uStack_3f2 = 0;
    FUN_144a2daf0(&local_408);
    if (pppuStack_3e0 != uStack_400) {
      iVar34 = 0;
      do {
        pppuVar21 = pppuStack_3e0;
        bVar36 = true;
        if (pppuStack_3e0 == (undefined ***)0x0) {
          pppuVar28 = (undefined ***)0x0;
        }
        else {
          ppuVar19 = pppuStack_3e0[1];
          ppuVar18 = (undefined **)FUN_1446e6bbc();
          pppuVar28 = pppuVar21;
          if (ppuVar18[1] == (undefined *)0x0) {
            bVar35 = ppuVar19 != (undefined **)0x0;
            if (ppuVar19 != ppuVar18 && bVar35) {
              do {
                ppuVar19 = (undefined **)ppuVar19[6];
                bVar35 = ppuVar19 != (undefined **)0x0;
                if (ppuVar19 == ppuVar18) break;
              } while (ppuVar19 != (undefined **)0x0);
            }
            if (bVar35) {
LAB_1494aa0a5:
              iVar34 = iVar34 + 1;
              bVar36 = false;
              pppuVar28 = (undefined ***)pppuVar21[0xf];
            }
          }
          else if (((ulonglong)ppuVar19[3] & (ulonglong)ppuVar18[1]) != 0) goto LAB_1494aa0a5;
        }
        FUN_141907aa8(local_488,&local_418,pppuVar28);
        if ((pppuVar28 != (undefined ***)0x0) && (local_418 == (undefined ***)0x0)) {
          ppuVar19 = pppuVar28[1];
          ppuVar18 = (undefined **)FUN_1446dcc8c();
          if (ppuVar18[1] == (undefined *)0x0) {
            bVar35 = ppuVar19 != (undefined **)0x0;
            if (ppuVar19 != ppuVar18 && bVar35) {
              do {
                ppuVar19 = (undefined **)ppuVar19[6];
                bVar35 = ppuVar19 != (undefined **)0x0;
                if (ppuVar19 == ppuVar18) break;
              } while (ppuVar19 != (undefined **)0x0);
            }
            if (bVar35) {
LAB_1494aa0ba:
              FUN_1494a9d2c(local_488,pppuVar28[0xe]);
            }
          }
          else if (((ulonglong)ppuVar19[3] & (ulonglong)ppuVar18[1]) != 0) goto LAB_1494aa0ba;
        }
        FUN_141907aa8(local_488,&local_1b8,pppuVar28);
        pppuVar22 = pppuStack_1b0;
        pppuVar28 = uStack_410;
        local_418 = local_1b8;
        local_1b8 = (undefined ***)0x0;
        if (pppuStack_1b0 == uStack_410) {
LAB_1494aa10e:
          pppuVar28 = pppuStack_1b0;
          if (pppuStack_1b0 != (undefined ***)0x0) {
            LOCK();
            pppuVar22 = pppuStack_1b0 + 1;
            *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
            UNLOCK();
            if (*(int *)pppuVar22 == 0) {
              (*(code *)**pppuStack_1b0)(pppuStack_1b0);
              LOCK();
              piVar31 = (int *)((longlong)pppuVar28 + 0xc);
              *piVar31 = *piVar31 + -1;
              UNLOCK();
              if (*piVar31 == 0) {
                (*(code *)(*pppuVar28)[2])(pppuVar28);
              }
            }
          }
        }
        else {
          pppuStack_1b0 = (undefined ***)0x0;
          uStack_410 = pppuVar22;
          if (pppuVar28 != (undefined ***)0x0) {
            LOCK();
            pppuVar22 = pppuVar28 + 1;
            *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
            UNLOCK();
            if (*(int *)pppuVar22 == 0) {
              (*(code *)**pppuVar28)(pppuVar28);
              LOCK();
              piVar31 = (int *)((longlong)pppuVar28 + 0xc);
              *piVar31 = *piVar31 + -1;
              UNLOCK();
              if (*piVar31 == 0) {
                (*(code *)(*pppuVar28)[2])(pppuVar28);
              }
            }
            goto LAB_1494aa10e;
          }
        }
        if (!bVar36) {
          local_428 = local_418;
          local_420 = uStack_410;
          if (uStack_410 == (undefined ***)0x0) {
            pppuVar28 = (undefined ***)0x0;
          }
          else {
            LOCK();
            *(int *)(uStack_410 + 1) = *(int *)(uStack_410 + 1) + 1;
            UNLOCK();
            pppuVar28 = uStack_410;
          }
          FUN_140fc8cd2(&local_1b8,&local_428);
          pppuVar22 = pppuStack_1b0;
          local_418 = local_1b8;
          local_1b8 = (undefined ***)0x0;
          if (pppuStack_1b0 != pppuVar28) {
            pppuStack_1b0 = (undefined ***)0x0;
            uStack_410 = pppuVar22;
            if (pppuVar28 == (undefined ***)0x0) goto LAB_1494aa235;
            LOCK();
            pppuVar22 = pppuVar28 + 1;
            *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
            UNLOCK();
            if (*(int *)pppuVar22 == 0) {
              (*(code *)**pppuVar28)(pppuVar28);
              LOCK();
              piVar31 = (int *)((longlong)pppuVar28 + 0xc);
              *piVar31 = *piVar31 + -1;
              UNLOCK();
              if (*piVar31 == 0) {
                (*(code *)(*pppuVar28)[2])(pppuVar28);
              }
            }
          }
          pppuVar28 = pppuStack_1b0;
          if (pppuStack_1b0 != (undefined ***)0x0) {
            LOCK();
            pppuVar22 = pppuStack_1b0 + 1;
            *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
            UNLOCK();
            if (*(int *)pppuVar22 == 0) {
              (*(code *)**pppuStack_1b0)(pppuStack_1b0);
              LOCK();
              piVar31 = (int *)((longlong)pppuVar28 + 0xc);
              *piVar31 = *piVar31 + -1;
              UNLOCK();
              if (*piVar31 == 0) {
                (*(code *)(*pppuVar28)[2])(pppuVar28);
              }
            }
          }
        }
LAB_1494aa235:
        pppuVar28 = local_418;
        iVar14 = FUN_1457dcf50(local_418);
        if (0 < iVar14) {
          iVar14 = FUN_1457dcf50(pppuVar28);
          iVar34 = iVar34 + iVar14;
        }
        local_148 = (undefined ***)0x0;
        local_138 = (undefined ***)0x0;
        FUN_140fc897e(local_488,&local_1b8,*pppuVar28);
        puVar23 = local_118;
        ppuVar19 = local_128;
        pppuVar6 = local_138;
        pppuVar5 = pppuStack_140;
        pppuVar22 = local_148;
        uVar17 = (undefined4)uStack_130;
        uVar2 = uStack_130._4_4_;
        uVar7 = (undefined4)uStack_120;
        uVar8 = uStack_120._4_4_;
        uVar9 = (undefined4)uStack_110;
        uVar10 = uStack_110._4_4_;
        local_148 = local_1b8;
        pppuStack_140 = pppuStack_1b0;
        local_138 = local_1a8;
        uStack_130 = CONCAT44(uStack_19c,uStack_1a0);
        local_128 = local_198;
        uStack_120 = CONCAT44(uStack_18c,uStack_190);
        local_118 = local_188;
        uStack_110 = CONCAT44(uStack_17c,uStack_180);
        local_1b8 = pppuVar22;
        pppuStack_1b0 = pppuVar5;
        local_1a8 = pppuVar6;
        uStack_1a0 = uVar17;
        uStack_19c = uVar2;
        local_198 = ppuVar19;
        uStack_190 = uVar7;
        uStack_18c = uVar8;
        local_188 = puVar23;
        uStack_180 = uVar9;
        uStack_17c = uVar10;
        if (pppuVar22 != (undefined ***)0x0) {
          pppuVar22 = local_1a8;
          if (pppuVar6 == (undefined ***)0x0) {
            pppuVar22 = &local_198;
          }
          (*(code *)(*pppuVar22)[2])();
        }
        FUN_1494ab432(&local_448,local_380,pppuVar21);
        lVar29 = local_448;
        if (bVar36) {
          ppuVar19 = pppuVar28[3];
        }
        else {
          ppuVar19 = (undefined **)FUN_1457dd03c(pppuVar28 + 3);
        }
        uVar25 = uStack_3c0;
        lVar32 = (longlong)(int)uStack_3c0;
        uVar15 = (int)uStack_3c0 + 1;
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar15);
        if (uStack_3c0._4_4_ < uVar15) {
          FUN_1460379cc(&local_3c8,uVar25 & 0xffffffff);
        }
        *(longlong *)(local_3c8 + lVar32 * 0x10) = lVar29;
        *(undefined ***)(local_3c8 + 8 + lVar32 * 0x10) = ppuVar19;
        local_198 = (undefined **)0x0;
        local_188 = (undefined8 *)0x0;
        local_1b8 = pppuVar21;
        local_1a8 = uStack_410;
        if (uStack_410 == (undefined ***)0x0) {
          local_1a8 = (undefined ***)0x0;
        }
        else {
          LOCK();
          *(int *)(uStack_410 + 1) = *(int *)(uStack_410 + 1) + 1;
          UNLOCK();
        }
        pppuStack_1b0 = pppuVar28;
        FUN_1494ab5b8(&local_198,&local_148);
        uVar25 = uStack_3b0;
        lVar29 = (longlong)(int)uStack_3b0;
        uVar15 = (int)uStack_3b0 + 1;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar15);
        if (uStack_3b0._4_4_ < uVar15) {
          FUN_1445300c2(&local_3b8,uVar25 & 0xffffffff);
        }
        lVar29 = lVar29 * 0x60;
        *(undefined ****)(local_3b8 + lVar29) = local_1b8;
        *(undefined ****)(local_3b8 + 8 + lVar29) = pppuStack_1b0;
        *(undefined ****)(local_3b8 + 0x10 + lVar29) = local_1a8;
        if (local_1a8 != (undefined ***)0x0) {
          LOCK();
          *(int *)(local_1a8 + 1) = *(int *)(local_1a8 + 1) + 1;
          UNLOCK();
        }
        lVar29 = local_3b8 + lVar29;
        *(undefined ***)(lVar29 + 0x20) = local_198;
        *(undefined8 *)(lVar29 + 0x30) = 0;
        if (local_198 != (undefined **)0x0) {
          puVar23 = local_188;
          if (local_188 == (undefined8 *)0x0) {
            puVar23 = local_178;
          }
          (**(code **)*puVar23)(puVar23,lVar29 + 0x30);
        }
        FUN_14452b732(&local_1b8);
        if (local_148 != (undefined ***)0x0) {
          pppuVar21 = local_138;
          if (local_138 == (undefined ***)0x0) {
            pppuVar21 = &local_128;
          }
          (*(code *)(*pppuVar21)[2])();
        }
        pppuVar21 = uStack_410;
        if (uStack_410 != (undefined ***)0x0) {
          LOCK();
          pppuVar28 = uStack_410 + 1;
          *(int *)pppuVar28 = *(int *)pppuVar28 + -1;
          UNLOCK();
          if (*(int *)pppuVar28 == 0) {
            (*(code *)**uStack_410)(uStack_410);
            LOCK();
            piVar31 = (int *)((longlong)pppuVar21 + 0xc);
            *piVar31 = *piVar31 + -1;
            UNLOCK();
            if (*piVar31 == 0) {
              (*(code *)(*pppuVar21)[2])(pppuVar21);
            }
          }
        }
        pppuStack_3e0 = (undefined ***)pppuStack_3e0[3];
        FUN_144a2daf0(&local_3e8);
      } while (pppuStack_3e0 != uStack_400);
    }
    local_430 = FUN_149458240(local_3a0,&local_3c8);
    local_148 = (undefined ***)0x0;
    local_138 = (undefined ***)0x0;
    local_418 = (undefined ***)0x0;
    uStack_410 = (undefined ***)0x0;
    FUN_1494580a6(&local_3e8);
    local_434 = *(int *)(CONCAT44(uStack_3e4,local_3e8) + 0x3c);
    if (local_380[0x17] == 0) {
      uVar15 = -*(int *)((longlong)local_380 + 0x5c) &
               (*(int *)((longlong)local_380 + 0x5c) + *(int *)(local_380 + 0xb)) - 1U;
    }
    else {
      uVar15 = *(uint *)(local_380[0x17] + 8);
    }
    if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar34);
    }
    if ((int)uStack_410._4_4_ < iVar34) {
      FUN_1494dabde();
    }
    local_478 = (ulonglong)uVar15;
    if ((int)uStack_3b0 < 1) {
      local_448 = 0;
      uStack_440 = 0;
LAB_1494aaae7:
      uVar17 = 0;
      iVar34 = 0;
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      do {
        lVar24 = lVar29 * 0x60;
        lVar32 = *(longlong *)(local_3b8 + lVar24);
        lVar33 = *(longlong *)(local_3b8 + 8 + lVar24);
        plVar3 = *(longlong **)(local_3b8 + 0x10 + lVar24);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar24 = lVar29 * 0x30 + *(longlong *)(CONCAT44(uStack_3e4,local_3e8) + 0x50);
        if (lVar32 == 0) {
LAB_1494aa748:
          iVar34 = FUN_1457dcf50();
          if ((0 < iVar34) && (iVar34 = FUN_1457dcf50(), 0 < iVar34)) {
            iVar34 = 0;
            do {
              iVar16 = FUN_1494ab1be(lVar33,iVar34);
              uVar17 = FUN_1494ab238(lVar33,iVar34);
              pppuVar21 = uStack_410;
              iVar14 = *(int *)(lVar24 + 0x14);
              lVar32 = (longlong)(int)uStack_410;
              uVar15 = (int)uStack_410 + 1;
              uStack_410 = (undefined ***)CONCAT44(uStack_410._4_4_,uVar15);
              if (uStack_410._4_4_ < uVar15) {
                FUN_1494dac3e(&local_418,(ulonglong)pppuVar21 & 0xffffffff);
              }
              local_418[lVar32] = (undefined **)CONCAT44(iVar16 + iVar14,uVar17);
              iVar34 = iVar34 + 1;
              iVar14 = FUN_1457dcf50();
            } while (iVar34 < iVar14);
          }
        }
        else {
          lVar32 = *(longlong *)(lVar32 + 8);
          lVar20 = FUN_1446e6bbc();
          if (*(ulonglong *)(lVar20 + 8) == 0) {
            bVar36 = lVar32 != 0;
            if (lVar32 != lVar20 && bVar36) {
              do {
                lVar32 = *(longlong *)(lVar32 + 0x30);
                bVar36 = lVar32 != 0;
                if (lVar32 == lVar20) break;
              } while (lVar32 != 0);
            }
            if (!bVar36) goto LAB_1494aa748;
          }
          else if ((*(ulonglong *)(lVar32 + 0x18) & *(ulonglong *)(lVar20 + 8)) == 0)
          goto LAB_1494aa748;
          uVar17 = *(undefined4 *)(lVar33 + 0x20);
          uVar2 = *(undefined4 *)(lVar24 + 0x14);
          lVar32 = (longlong)(int)uStack_410;
          uVar15 = (int)uStack_410 + 1;
          uStack_410 = (undefined ***)CONCAT44(uStack_410._4_4_,uVar15);
          if (uStack_410._4_4_ < uVar15) {
            FUN_1494dac3e();
          }
          local_418[lVar32] = (undefined **)CONCAT44(uVar2,uVar17);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)();
            LOCK();
            piVar31 = (int *)((longlong)plVar3 + 0xc);
            *piVar31 = *piVar31 + -1;
            UNLOCK();
            if (*piVar31 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)uStack_3b0);
      local_448 = 0;
      uStack_440 = 0;
      if ((int)uStack_3b0 < 1) goto LAB_1494aaae7;
      lVar29 = 0;
      iVar34 = 0;
      do {
        lVar33 = lVar29 * 0x60;
        lVar32 = *(longlong *)(local_3b8 + lVar33);
        local_470 = *(longlong *)(local_3b8 + 8 + lVar33);
        plVar3 = *(longlong **)(local_3b8 + 0x10 + lVar33);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar24 = *(longlong *)(CONCAT44(uStack_3e4,local_3e8) + 0x50);
        local_198 = (undefined **)0x0;
        local_188 = (undefined8 *)0x0;
        local_1b8 = *(undefined ****)(local_3b8 + lVar33);
        pppuStack_1b0 = *(undefined ****)(local_3b8 + 8 + lVar33);
        local_1a8 = *(undefined ****)(local_3b8 + 0x10 + lVar33);
        if (local_1a8 == (undefined ***)0x0) {
          local_1a8 = (undefined ***)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)local_1a8 + 8) = *(int *)((longlong)local_1a8 + 8) + 1;
          UNLOCK();
        }
        local_47c = iVar34;
        FUN_1494ab5b8(&local_198,local_3b8 + lVar33 + 0x20);
        lVar33 = local_470;
        iVar34 = local_47c;
        local_158 = *(undefined4 *)(lVar24 + 0x14 + lVar29 * 0x30);
        local_154 = *(undefined4 *)(local_470 + 0x20);
        local_14c = local_47c;
        if (lVar32 == 0) {
LAB_1494aaa11:
          iVar14 = FUN_1457dcf50(lVar33);
          if (0 < iVar14) {
            iVar14 = FUN_1457dcf50(lVar33);
            iVar34 = iVar34 + iVar14;
          }
        }
        else {
          lVar32 = *(longlong *)(lVar32 + 8);
          lVar24 = FUN_1446e6bbc();
          if (*(ulonglong *)(lVar24 + 8) == 0) {
            bVar36 = lVar32 != 0;
            if (lVar32 != lVar24 && bVar36) {
              do {
                lVar32 = *(longlong *)(lVar32 + 0x30);
                bVar36 = lVar32 != 0;
                if (lVar32 == lVar24) break;
              } while (lVar32 != 0);
            }
            if (!bVar36) goto LAB_1494aaa11;
          }
          else if ((*(ulonglong *)(lVar32 + 0x18) & *(ulonglong *)(lVar24 + 8)) == 0)
          goto LAB_1494aaa11;
          iVar34 = iVar34 + 1;
        }
        uVar25 = uStack_440;
        lVar32 = (longlong)(int)uStack_440;
        uVar15 = (int)uStack_440 + 1;
        uStack_440 = CONCAT44(uStack_440._4_4_,uVar15);
        if (uStack_440._4_4_ < uVar15) {
          FUN_144530298(&local_448,uVar25 & 0xffffffff);
        }
        FUN_14453022e(lVar32 * 0x70 + local_448);
        FUN_14452b732();
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)();
            LOCK();
            piVar31 = (int *)((longlong)plVar3 + 0xc);
            *piVar31 = *piVar31 + -1;
            UNLOCK();
            if (*piVar31 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        uVar25 = uStack_440;
        lVar32 = local_448;
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)uStack_3b0);
      uVar30 = uStack_440 & 0xffffffff;
      if (0 < (int)uStack_440) {
        lVar29 = 0xd0;
        lVar33 = 0;
        do {
          lVar33 = lVar33 + 1;
          piVar31 = (int *)(local_448 + lVar29);
          if ((int)uVar30 <= lVar33) {
            piVar31 = &local_434;
          }
          *(int *)(local_448 + -0x68 + lVar29) = *piVar31 - *(int *)(local_448 + -0x70 + lVar29);
          uVar30 = (ulonglong)(int)uStack_440;
          lVar29 = lVar29 + 0x70;
        } while (lVar33 < (longlong)uVar30);
      }
      local_408 = 0;
      uStack_400._0_4_ = (int)uStack_440;
      if ((int)uStack_440 == 0) goto LAB_1494aaae7;
      FUN_14453039e(&local_408,uStack_440 & 0xffffffff);
      FUN_144530477(local_408,lVar32,uVar25 & 0xffffffff);
      lVar29 = local_408;
      iVar34 = (int)uStack_400;
      uVar17 = uStack_400._4_4_;
    }
    uStack_1c0 = uStack_110;
    lStack_1d0 = uStack_120;
    local_1d8 = local_128;
    local_1e8 = local_138;
    pppuVar21 = pppuStack_140;
    local_1f8 = local_148;
    local_3f8 = (int)local_478;
    uStack_3f4 = (undefined2)local_434;
    uStack_3f2 = (undefined1)((uint)local_434 >> 0x10);
    uStack_3f1 = (undefined1)((uint)local_434 >> 0x18);
    local_408 = 0;
    uStack_400 = (undefined ***)0x0;
    local_1c8 = (undefined4)local_118;
    uStack_1c4 = local_118._4_4_;
    local_188 = local_118;
    uStack_180 = (undefined4)uStack_110;
    uStack_17c = uStack_110._4_4_;
    local_198 = local_128;
    uStack_190 = (undefined4)uStack_120;
    uStack_18c = uStack_120._4_4_;
    local_1a8 = local_138;
    uStack_1a0 = (undefined4)uStack_130;
    uStack_19c = uStack_130._4_4_;
    local_1b8 = local_148;
    pppuStack_1b0 = pppuStack_140;
    local_118 = (undefined8 *)CONCAT44(uVar17,iVar34);
    uStack_110 = CONCAT17(uStack_3f1,CONCAT16(uStack_3f2,CONCAT24(uStack_3f4,(int)local_478)));
    local_128 = &PTR_FUN_14bd1d880;
    uStack_120 = lVar29;
    local_148 = (undefined ***)FUN_1445304fc;
    pppuStack_140 = pppuStack_1f0;
    local_138 = (undefined ***)0x0;
    pppuStack_1f0 = pppuVar21;
    uStack_1e0 = (undefined4)uStack_130;
    uStack_1dc = uStack_130._4_4_;
    if (local_1f8 == (undefined ***)0x0) {
      uVar25 = 0;
    }
    else {
      pppuVar21 = local_1e8;
      if (local_1e8 == (undefined ***)0x0) {
        pppuVar21 = &local_1d8;
      }
      (*(code *)(*pppuVar21)[2])();
      uVar25 = (ulonglong)uStack_400 & 0xffffffff;
    }
    FUN_1445301cb(local_408,uVar25);
    if (local_408 != 0) {
      FUN_1400020a8();
    }
    pppuVar21 = local_418;
    local_458 = (void *)0x0;
    lVar29 = (longlong)(int)uStack_410;
    local_450 = (int)uStack_410;
    if (lVar29 == 0) {
      local_44c = 0;
    }
    else {
      FUN_140fc867e(&local_458,(ulonglong)uStack_410 & 0xffffffff,0);
      memcpy(local_458,pppuVar21,lVar29 << 3);
    }
    uVar4 = local_488;
    local_238[0] = local_148;
    local_228[0] = 0;
    if (local_148 != (undefined ***)0x0) {
      pppuVar21 = local_138;
      if (local_138 == (undefined ***)0x0) {
        pppuVar21 = &local_128;
      }
      (*(code *)**pppuVar21)(pppuVar21,local_228);
    }
    local_278[0] = local_108;
    local_268[0] = 0;
    if (local_108 != (code *)0x0) {
      pppuVar21 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar21 = &local_e8;
      }
      (*(code *)**pppuVar21)(pppuVar21,local_268);
    }
    local_2b8[0] = (code *)0x0;
    local_2a8 = (undefined8 *)FUN_14001cc68(0x38,8);
    *local_2a8 = &PTR_FUN_14bd1d8a0;
    local_2a8[1] = &local_3a0;
    local_2a8[2] = local_398;
    local_2a8[3] = &local_430;
    local_2a8[4] = &local_434;
    local_2a8[5] = &local_380;
    local_2a8[6] = &local_381;
    if (local_2a8 + 1 != (longlong *)0x0) {
      local_2b8[0] = FUN_1445309b0;
    }
    local_490 = &local_458;
    local_498 = local_238;
    uVar15 = FUN_140fc92aa(uVar4,local_3a0,local_2b8,local_278);
    uVar25 = (ulonglong)uVar15;
    FUN_1445301cb(local_448,uStack_440 & 0xffffffff);
    if (local_448 != 0) {
      FUN_1400020a8();
    }
    FUN_1494581ce(&local_3e8);
    if (local_418 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_148 != (undefined ***)0x0) {
      pppuVar21 = &local_128;
      if (local_138 != (undefined ***)0x0) {
        pppuVar21 = local_138;
      }
      (*(code *)(*pppuVar21)[2])(pppuVar21);
    }
    if (local_3c8 != 0) {
      FUN_1400020a8();
    }
    FUN_14453005f(local_3b8,uStack_3b0 & 0xffffffff);
    if (local_3b8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (code *)0x0) {
    pppuVar21 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar21 = &local_e8;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  if (local_398[0] != (longlong *)0x0) {
    (**(code **)(*local_398[0] + 0x10))();
  }
LAB_1494a9d79:
  if ((local_80 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return uVar25 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab092 FUN_1494ab092 body=229 status=ok
// SIG undefined FUN_1494ab092(void)

undefined4 FUN_1494ab092(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f4f540();
  FUN_140fc897e(&DAT_14cc1c7d8,local_68,*param_1);
  pcVar1 = local_68[0];
  if (local_68[0] == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    local_88 = *param_3;
    local_80 = *(undefined4 *)(param_3 + 1);
    local_78 = param_3[2];
    local_70 = *(undefined4 *)(param_3 + 3);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar4 = local_48;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar2 = (*pcVar1)(uVar3,&local_98,&local_88);
    if (local_68[0] != (code *)0x0) {
      plVar4 = local_48;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab178 FUN_1494ab178 body=69 status=ok
// SIG undefined FUN_1494ab178(void)

undefined8 * FUN_1494ab178(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1457dcf50();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_140393c76(param_2,uVar1,1);
  FUN_14946d3ea(param_2 + 2,uVar2);
  return param_2;
}



// FUNCTION 1494ab1be FUN_1494ab1be body=121 status=ok
// SIG undefined FUN_1494ab1be(void)

undefined4 FUN_1494ab1be(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f4f540();
  FUN_140fc8a88(&DAT_14cc1c7d8,&local_30,*param_1);
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_2) && ((int)param_2 < local_28)) {
    uVar1 = *(undefined4 *)(local_30 + 4 + (ulonglong)param_2 * 8);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab238 FUN_1494ab238 body=120 status=ok
// SIG undefined FUN_1494ab238(void)

undefined4 FUN_1494ab238(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f4f540();
  FUN_140fc8a88(&DAT_14cc1c7d8,&local_30,*param_1);
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_2) && ((int)param_2 < local_28)) {
    uVar1 = *(undefined4 *)(local_30 + (ulonglong)param_2 * 8);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab2b2 FUN_1494ab2b2 body=186 status=ok
// SIG undefined FUN_1494ab2b2(void)

ulonglong FUN_1494ab2b2(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f4f540();
  FUN_146739dc5(&local_30,param_1,1);
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_40,local_30);
  lVar3 = CONCAT62(uStack_3e,local_40);
  if (lVar3 != 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar3 + 0x48));
  }
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
  if (lVar3 == 0) {
    local_40 = 0x1f00;
    uVar4 = FUN_14452ae8e(&local_40,param_1);
    unaff_RBX = (ulonglong)uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1494ab36d FUN_1494ab36d body=196 status=ok
// SIG undefined FUN_1494ab36d(void)

undefined8 FUN_1494ab36d(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1ccb0) {
    FUN_144b3d300(&DAT_14cc1ccb0);
    if (DAT_14cc1ccb0 == -1) {
      FUN_1446f470e(&DAT_14cc1cca8,L"Guid",1);
      _Init_thread_footer(&DAT_14cc1ccb0);
    }
  }
  FUN_1494bd1d8(param_2,DAT_14cc1cca8,&local_38);
  FUN_1494bd120(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab432 FUN_1494ab432 body=389 status=ok
// SIG undefined FUN_1494ab432(void)

undefined8 * FUN_1494ab432(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  wint_t *pwVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  wint_t *local_48;
  undefined8 uStack_40;
  wint_t *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1408cc5f4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x318))(param_2,&local_48,param_3);
      local_68 = 1;
      FUN_1414bc8e4(&local_48,&local_38,&DAT_149e001d8,&DAT_149dfb77a);
      if (local_48 != (wint_t *)0x0) {
        FUN_1400020a8();
      }
      if (1 < (int)local_30) {
        iVar1 = iswalpha(*local_38);
        if ((iVar1 == 0) && (*local_38 != 0x5f)) {
          FUN_140056680(local_58,&DAT_149e01f60);
          FUN_144a7dea0(&local_48,local_58,&local_38);
          if (local_38 != (wint_t *)0x0) {
            FUN_1400020a8();
          }
          local_30 = uStack_40;
          local_38 = local_48;
          local_48 = (wint_t *)0x0;
          uStack_40 = 0;
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      pwVar4 = local_38;
      if ((int)local_30 == 0) {
        pwVar4 = &DAT_149dfb77a;
      }
      FUN_1446f470e(param_1,pwVar4,1);
      if (local_38 != (wint_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1494ab484;
    }
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x20);
  }
  *param_1 = uVar3;
LAB_1494ab484:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab5b8 FUN_1494ab5b8 body=290 status=ok
// SIG undefined FUN_1494ab5b8(void)

longlong * FUN_1494ab5b8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab6dc FUN_1494ab6dc body=168 status=ok
// SIG undefined FUN_1494ab6dc(void)

undefined8 * FUN_1494ab6dc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141907aa8(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1457dd16c(&local_40,*local_38);
    FUN_140f4f5a6(param_1,param_2,local_40);
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
  if (local_38 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab786 FUN_1494ab786 body=429 status=ok
// SIG undefined FUN_1494ab786(void)

void FUN_1494ab786(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  size_t local_68;
  ulonglong local_60;
  
  _Src = DAT_14cacd6c8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined8 *)0x0;
  lVar6 = (longlong)DAT_14cacd6d0;
  local_70 = DAT_14cacd6d0;
  if (lVar6 != 0) {
    FUN_14574b796(&local_78,DAT_14cacd6d0,0);
    memcpy(local_78,_Src,lVar6 << 3);
    if ((longlong)local_70 != 0) {
      puVar3 = local_78 + local_70;
      puVar7 = local_78;
      do {
        local_80 = *puVar7;
        lVar6 = FUN_14479d2ce(&local_80);
        local_98 = 0;
        uStack_90 = 0;
        FUN_14452b789();
        FUN_1494abbe4(&local_98);
        if (lVar6 != 0) {
          if ((longlong)(int)uStack_90 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(local_98 + lVar5) == lVar6) goto LAB_1494ab8d2;
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)uStack_90 * 8 != lVar5);
          }
          FUN_146739dc5(&local_68,lVar6,1);
          FUN_140f4f5a6(param_1,&local_a8,local_68);
          if (local_a8 == 0) {
            FUN_1494a9d2c(param_1);
          }
          plVar4 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a0)(local_a0);
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
LAB_1494ab8d2:
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar3);
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ab934 FUN_1494ab934 body=157 status=ok
// SIG undefined FUN_1494ab934(void)

void FUN_1494ab934(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1408cc5f4();
  FUN_1414d7078(uVar1,&local_38);
  if ((*(undefined8 **)(param_2 + 0x20) == local_38) && (*(longlong *)(param_2 + 0x28) == local_30))
  {
    FUN_1494ab36d(&local_40,param_2);
    local_28 = local_40;
    FUN_1494db3b0(param_1 + 0x10);
    local_38 = &local_28;
    FUN_1408ff3be(param_1 + 0x60);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ab9d2 FUN_1494ab9d2 body=325 status=ok
// SIG undefined FUN_1494ab9d2(void)

void FUN_1494ab9d2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong *local_a8 [2];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar3 = FUN_14700c192(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_1408cc5f4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_146739dc5(&local_88,lVar3,1);
      FUN_140f4f5a6(param_1,&local_98,local_88);
      if (local_98 != 0) {
        local_80 = *(undefined8 *)(lVar3 + 0x18);
        FUN_145715fae(local_a8);
        FUN_140008f88(local_98 + 8,local_a8);
        if (local_a8[0] != (longlong *)0x0) {
          (**(code **)(*local_a8[0] + 0x10))();
        }
        FUN_141440cd6(param_1 + 0xc0,local_88);
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494abb18 FUN_1494abb18 body=203 status=ok
// SIG undefined FUN_1494abb18(void)

void FUN_1494abb18(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar3 = FUN_1408cc5f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      FUN_146739dc5(&local_30,param_2,1);
      FUN_140f4f5a6(param_1,&local_40,local_30);
      if ((param_3 != '\0') && (local_40 == 0)) {
        FUN_1494a9d2c(param_1,param_2);
      }
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494abbe4 FUN_1494abbe4 body=346 status=ok
// SIG undefined FUN_1494abbe4(void)

void FUN_1494abbe4(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = DAT_14cc1cfc8 - DAT_14cc1cff4;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != iVar3) {
    FUN_14575436e(param_1);
  }
  local_50 = 0x100000000;
  local_48 = &DAT_14cc1cfd0;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (DAT_14cc1cfe8 != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = &DAT_14cc1cfc0;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1408ccdda(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x18 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494abd40 FUN_1494abd40 body=453 status=ok
// SIG undefined FUN_1494abd40(void)

longlong FUN_1494abd40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  
  FUN_14452b789();
  uVar4 = (uint)param_2;
  iVar7 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_2 >> 0x10);
  if (DAT_14cc1cfc8 != DAT_14cc1cff4) {
    puVar8 = &DAT_14cc1cff8;
    if (DAT_14cc1d000 != (undefined *)0x0) {
      puVar8 = DAT_14cc1d000;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14cc1d008 - 1U &
                              iVar7 + (uVar4 << 0x10 | uVar4 & 0xffff) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar4 & 0xffff) >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cc1cfc0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == param_2) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             iVar7 + (uVar4 << 0x10 | uVar4 & 0xffff) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar4 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 0xc0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 0xc0) == param_2) {
          if ((longlong *)(lVar5 + 0x10) != (longlong *)0x0 && lVar5 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x10);
            if ((*(byte *)(lVar5 + 0x48) & 4) == 0) {
              return 0;
            }
            lVar5 = FUN_14479d2ce(lVar5 + 0x2c);
            if (lVar5 == 0) {
              return 0;
            }
            lVar6 = FUN_1446f4bba();
            if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) {
              return 0;
            }
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30) {
              return 0;
            }
            return lVar5;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0xb0);
      } while (iVar7 != -1);
    }
  }
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/OptimusDataTypeRegistry.cpp"
                ,0x6b6,L"CreateProperty: Invalid type name.");
  return 0;
}



// FUNCTION 1494abf36 FUN_1494abf36 body=88 status=ok
// SIG undefined FUN_1494abf36(void)

undefined8 * FUN_1494abf36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494db4c8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1494abff8 FUN_1494abff8 body=88 status=ok
// SIG undefined FUN_1494abff8(void)

undefined8 * FUN_1494abff8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494db52a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1494ac074 FUN_1494ac074 body=88 status=ok
// SIG undefined FUN_1494ac074(void)

undefined8 * FUN_1494ac074(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494db58c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1494ac0dc FUN_1494ac0dc body=141 status=ok
// SIG undefined FUN_1494ac0dc(void)

longlong FUN_1494ac0dc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0) {
    FUN_1446f470e(&local_20,L"@ActionStack",1);
    lVar1 = FUN_1494ac16a(param_1,local_20);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x100) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ac16a FUN_1494ac16a body=183 status=ok
// SIG undefined FUN_1494ac16a(void)

undefined8 FUN_1494ac16a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459d961e();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ac222 FUN_1494ac222 body=419 status=ok
// SIG undefined FUN_1494ac222(void)

undefined4 FUN_1494ac222(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14cc1c988);
  iVar3 = (int)param_1[1];
  if (iVar3 == local_28) {
    bVar10 = true;
    if (1 < iVar3) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(local_30 + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1494ac2bd;
LAB_1494ac286:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar9 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_1494ac286;
      }
      if (uVar5 != uVar7) goto LAB_1494ac329;
    }
  }
  else {
    bVar10 = true;
    if (local_28 + iVar3 != 1) {
LAB_1494ac329:
      FUN_1400021e4(&DAT_14cc1c980,&local_40);
      iVar3 = (int)param_1[1];
      if (iVar3 == local_38) {
        bVar10 = true;
        if (1 < iVar3) {
          lVar4 = 0;
          while( true ) {
            uVar5 = *(ushort *)(*param_1 + lVar4);
            uVar2 = (uint)uVar5;
            uVar7 = *(ushort *)(local_40 + lVar4);
            uVar8 = (uint)uVar7;
            if (uVar5 != uVar7) {
              if ((uVar7 | uVar5) < 0x80) {
                uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1494ac374;
              }
              iVar3 = uVar2 - uVar8;
              goto LAB_1494ac3bf;
            }
            if (uVar5 == 0) break;
LAB_1494ac374:
            lVar4 = lVar4 + 2;
          }
          iVar3 = 0;
LAB_1494ac3bf:
          bVar10 = iVar3 == 0;
        }
      }
      else {
        bVar10 = local_38 + iVar3 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1494ac2bd:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (bVar10) {
    uVar1 = 0;
  }
  else {
    FUN_140056680(&local_30,&DAT_14bd1a9ec);
    uVar1 = FUN_14682cc24(param_1,&local_30,0,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1494ac3c6 FUN_1494ac3c6 body=175 status=ok
// SIG undefined FUN_1494ac3c6(void)

longlong FUN_1494ac3c6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + lVar2);
      if (*(int *)(lVar1 + 0x30) == 1) goto LAB_1494ac459;
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x118) * 8 != lVar2);
  }
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_1401031ac(0,0,&local_28);
  puVar3 = local_28;
  if ((int)uStack_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/OptimusDeformer.cpp"
                ,0x93,L"No upgrade graph on deformer (%s).",puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
LAB_1494ac459:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1494ac476 FUN_1494ac476 body=140 status=ok
// SIG undefined FUN_1494ac476(void)

ulonglong FUN_1494ac476(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    local_30 = (longlong *)0x0;
    local_28 = 1;
    FUN_1494e3a2c(&local_30,1,0);
    *local_30 = param_2;
    iVar1 = FUN_1494cb0d0(param_1,&local_30);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < iVar1);
    if (local_30 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ac504 FUN_1494ac504 body=200 status=ok
// SIG undefined FUN_1494ac504(void)

void FUN_1494ac504(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1dbf0;
  puVar1 = puVar3 + 2;
  FUN_149460266(puVar1,*param_2);
  local_38 = puVar1;
  local_30 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_38);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ac5e0 FUN_1494ac5e0 body=496 status=ok
// SIG undefined FUN_1494ac5e0(void)

longlong * FUN_1494ac5e0(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_140f7d9ac();
  if (((lVar8 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x118);
  lVar8 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x110);
  if (lVar8 == 0) {
    local_4c = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1494dc350(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar8 << 3);
    *param_2 = 0;
    param_2[1] = 0;
    if (local_50 != 0) {
      local_60 = param_3 + 0x30;
      do {
        lVar8 = *(longlong *)((longlong)local_58 + (longlong)local_50 * 8 + -8);
        local_50 = local_50 + -1;
        iVar1 = *(int *)(lVar8 + 0x40);
        if ((longlong)iVar1 != 0) {
          lVar3 = *(longlong *)(lVar8 + 0x38);
          lVar11 = 0;
          lVar10 = local_60;
          do {
            if (param_3 != 0) {
              lVar4 = *(longlong *)(lVar3 + lVar11);
              lVar5 = *(longlong *)(lVar4 + 0x10);
              if ((*(int *)(param_3 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) == lVar10)
                 ) {
                iVar6 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar6 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
                  FUN_1494db69c(param_2,iVar6);
                  lVar10 = local_60;
                }
                *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar4;
              }
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar1 * 8 != lVar11);
        }
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)(lVar8 + 0x28) + 0x28))(lVar8 + 0x28);
        iVar1 = local_50;
        uVar2 = *(uint *)(puVar9 + 1);
        if ((longlong)(int)uVar2 != 0) {
          lVar8 = (longlong)local_50;
          iVar6 = local_50 + uVar2;
          uVar7 = local_4c - local_50;
          local_50 = iVar6;
          if (uVar7 < uVar2) {
            FUN_1494dc3b2(&local_58,iVar1);
          }
          memcpy((void *)(lVar8 * 8 + (longlong)local_58),(void *)*puVar9,(longlong)(int)uVar2 << 3)
          ;
        }
      } while (local_50 != 0);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ac7d2 FUN_1494ac7d2 body=176 status=ok
// SIG undefined FUN_1494ac7d2(void)

longlong * FUN_1494ac7d2(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (lVar4 != 0) {
        lVar5 = FUN_14585e15a();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           ((param_3 == 0 || (*(longlong *)(lVar4 + 0x150) == param_3)))) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1494db616(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return param_2;
}



// FUNCTION 1494ac882 FUN_1494ac882 body=386 status=ok
// SIG undefined FUN_1494ac882(void)

void FUN_1494ac882(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0 || param_2 != 0x14) goto LAB_1494ac9ad;
  lVar3 = FUN_145ba6ae8();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) goto LAB_1494ac9ad;
  (**(code **)(*(longlong *)(param_3 + 0x108) + 0x20))(param_3 + 0x108,local_60);
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  FUN_1400bbfc4(local_50,param_3);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 == '\0') {
LAB_1494ac983:
    FUN_14485c47a(&local_88,param_3);
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) goto LAB_1494ac983;
    local_88 = 0;
  }
  FUN_1494ae7f0(param_1 + 0x198,&local_88,local_60);
  FUN_1401f9f5c(local_60);
LAB_1494ac9ad:
  if (*(int *)(param_1 + 0x108) != 3) {
    *(undefined4 *)(param_1 + 0x108) = 2;
  }
  FUN_1494dc8de(param_1 + 0x138,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494aca06 FUN_1494aca06 body=235 status=ok
// SIG undefined FUN_1494aca06(void)

longlong * FUN_1494aca06(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1494cb946(0,&local_58);
  lVar2 = local_58;
  if ((longlong)local_50 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar2 + lVar4) * 8);
      lVar3 = *(longlong *)(lVar1 + 0x28);
      lVar1 = *(longlong *)(lVar1 + 0x30);
      if (lVar1 == param_3) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
LAB_1494aca85:
          FUN_149482de0(param_2,iVar5);
        }
LAB_1494acaa2:
        *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar3;
      }
      else if (lVar3 == param_3) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        lVar3 = lVar1;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) goto LAB_1494aca85;
        goto LAB_1494acaa2;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)local_50 * 4 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494acaf2 FUN_1494acaf2 body=242 status=ok
// SIG undefined FUN_1494acaf2(void)

longlong * FUN_1494acaf2(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc50;
  plVar1 = plVar6 + 2;
  FUN_14946241c(plVar1,*param_3,*param_4);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494acc16 FUN_1494acc16 body=124 status=ok
// SIG undefined FUN_1494acc16(void)

longlong FUN_1494acc16(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_1458b6184();
    lVar2 = FUN_1494acc93(*(undefined8 *)(param_1 + 0x128),uVar1,param_2);
    FUN_1412e3d1e(&local_30);
    *(undefined4 *)(lVar2 + 0x28) = local_30;
    *(undefined4 *)(lVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(lVar2 + 0x30) = uStack_28;
    *(undefined4 *)(lVar2 + 0x34) = uStack_24;
    FUN_14282b7b8(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494acc93 FUN_1494acc93 body=163 status=ok
// SIG undefined FUN_1494acc93(void)

undefined8 FUN_1494acc93(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a5c54a(local_b8);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494acd38 FUN_1494acd38 body=266 status=ok
// SIG undefined FUN_1494acd38(void)

undefined8 FUN_1494acd38(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x128), lVar2 != *(longlong *)(param_2 + 0x20))) {
    uVar3 = 0;
  }
  else {
    if ((param_3 < 0) || (*(int *)(lVar2 + 0x30) <= param_3)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(lVar2 + 0x30);
      *(uint *)(lVar2 + 0x30) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x34) < iVar1 + 1U) {
        FUN_1494db7e6((longlong *)(lVar2 + 0x28),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    else {
      local_40 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_1494ace44(lVar2 + 0x28,&local_40,param_3);
    }
    if (*(int *)(param_1 + 0x108) != 3) {
      *(undefined4 *)(param_1 + 0x108) = 2;
    }
    FUN_1494dc8de(param_1 + 0x138,0xf,param_2);
    uVar3 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ace44 FUN_1494ace44 body=129 status=ok
// SIG undefined FUN_1494ace44(void)

uint FUN_1494ace44(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494db7e6(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1494acec6 FUN_1494acec6 body=218 status=ok
// SIG undefined FUN_1494acec6(void)

undefined8 FUN_1494acec6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  iVar3 = *(int *)(lVar1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    iVar4 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) == param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar3 - iVar4 != 0) {
          memmove((void *)(lVar2 + (lVar5 >> 0x20) * 8),(void *)(lVar2 + (lVar5 >> 0x20) * 8 + 8),
                  (longlong)(iVar3 - iVar4) << 3);
          iVar3 = *(int *)(lVar1 + 0x30);
        }
        *(int *)(lVar1 + 0x30) = iVar3 + -1;
        FUN_1494db86c(lVar1 + 0x28);
        if (*(int *)(param_1 + 0x108) != 3) {
          *(undefined4 *)(param_1 + 0x108) = 2;
        }
        FUN_1494dc8de(param_1 + 0x138,0x10,param_2);
        FUN_1494acfa0(param_2);
        FUN_14282b7b8(param_1);
        return 1;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1494acfa0 FUN_1494acfa0 body=114 status=ok
// SIG undefined FUN_1494acfa0(void)

uint FUN_1494acfa0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  (**(code **)(*param_1 + 0x170))(param_1,0,DAT_14c951640,0x234);
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  do {
    uVar1 = *(uint *)(lVar3 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar2 = *(uint *)(lVar3 + 8);
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return uVar2;
}



// FUNCTION 1494ad012 FUN_1494ad012 body=260 status=ok
// SIG undefined FUN_1494ad012(void)

undefined8 FUN_1494ad012(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
  local_28 = param_3;
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x28) + uVar4) == param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          FUN_1400021e4(&local_28,&local_38);
          puVar5 = local_38;
          if (local_30 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          cVar1 = (**(code **)(*param_2 + 0x170))(param_2,puVar5,0,0x34);
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\0') {
            param_2[7] = local_28;
            if (*(int *)(param_1 + 0x108) != 3) {
              *(undefined4 *)(param_1 + 0x108) = 2;
            }
            FUN_1494dc8de(param_1 + 0x138,0x12,param_2);
            FUN_14282b7b8(param_1);
            uVar3 = 1;
            goto LAB_1494ad05e;
          }
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar2 * 8 != uVar4);
  }
  uVar3 = 0;
LAB_1494ad05e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494ad118 FUN_1494ad118 body=248 status=ok
// SIG undefined FUN_1494ad118(void)

ulonglong FUN_1494ad118(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x28) + uVar3) == param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          if (*(longlong *)(param_2 + 0x40) == *param_3) {
            cVar1 = FUN_144a7afa6(param_2 + 0x50,param_3 + 2);
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (cVar1 != '\0') goto LAB_1494ad165;
          }
          FUN_14945f130(local_60,param_3);
          FUN_1494e842a(param_2,local_60);
          if (*(int *)(param_1 + 0x108) != 3) {
            *(undefined4 *)(param_1 + 0x108) = 2;
          }
          FUN_1494dc8de(param_1 + 0x138,0x13,param_2);
          FUN_14282b7b8(param_1);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
          goto LAB_1494ad165;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar2 * 8 != uVar3);
  }
  unaff_RBP = 0;
LAB_1494ad165:
  if (param_3[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ad212 FUN_1494ad212 body=110 status=ok
// SIG undefined FUN_1494ad212(void)

undefined8 * FUN_1494ad212(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_14945e0fa(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bcfe1b0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ad282 FUN_1494ad282 body=299 status=ok
// SIG undefined FUN_1494ad282(void)

longlong * FUN_1494ad282(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc30;
  plVar1 = plVar6 + 2;
  FUN_14945f130(local_70,param_4);
  FUN_14945eed6(plVar1,*param_3,local_70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ad3ae FUN_1494ad3ae body=242 status=ok
// SIG undefined FUN_1494ad3ae(void)

longlong * FUN_1494ad3ae(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc70;
  plVar1 = plVar6 + 2;
  FUN_14945f1a2(plVar1,*param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494ad4d2 FUN_1494ad4d2 body=55 status=ok
// SIG undefined FUN_1494ad4d2(void)

undefined8 FUN_1494ad4d2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_145862f28();
  uVar1 = FUN_1494ad509(*(undefined8 *)(param_1 + 0x130),uVar1,param_2);
  return uVar1;
}



// FUNCTION 1494ad509 FUN_1494ad509 body=163 status=ok
// SIG undefined FUN_1494ad509(void)

undefined8 FUN_1494ad509(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a5c54a(local_b8);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ad5ae FUN_1494ad5ae body=271 status=ok
// SIG undefined FUN_1494ad5ae(void)

undefined8 FUN_1494ad5ae(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x130), lVar2 != *(longlong *)(param_2 + 0x20))) {
    uVar3 = 0;
  }
  else {
    if ((param_3 < 0) || (*(int *)(lVar2 + 0x30) <= param_3)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(lVar2 + 0x30);
      *(uint *)(lVar2 + 0x30) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x34) < iVar1 + 1U) {
        FUN_1494db930((longlong *)(lVar2 + 0x28),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    else {
      local_40 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_1494ad6be(lVar2 + 0x28,&local_40,param_3);
    }
    if (*(int *)(param_1 + 0x108) != 3) {
      *(undefined4 *)(param_1 + 0x108) = 2;
    }
    FUN_1494dc8de(param_1 + 0x138,9,param_2);
    FUN_14282b7b8(param_1);
    uVar3 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ad6be FUN_1494ad6be body=129 status=ok
// SIG undefined FUN_1494ad6be(void)

uint FUN_1494ad6be(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494db930(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1494ad740 FUN_1494ad740 body=218 status=ok
// SIG undefined FUN_1494ad740(void)

undefined8 FUN_1494ad740(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  iVar3 = *(int *)(lVar1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    iVar4 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) == param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar3 - iVar4 != 0) {
          memmove((void *)(lVar2 + (lVar5 >> 0x20) * 8),(void *)(lVar2 + (lVar5 >> 0x20) * 8 + 8),
                  (longlong)(iVar3 - iVar4) << 3);
          iVar3 = *(int *)(lVar1 + 0x30);
        }
        *(int *)(lVar1 + 0x30) = iVar3 + -1;
        FUN_1494db9b6(lVar1 + 0x28);
        if (*(int *)(param_1 + 0x108) != 3) {
          *(undefined4 *)(param_1 + 0x108) = 2;
        }
        FUN_1494dc8de(param_1 + 0x138,10,param_2);
        FUN_1494acfa0(param_2);
        FUN_14282b7b8(param_1);
        return 1;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1494ad81a FUN_1494ad81a body=260 status=ok
// SIG undefined FUN_1494ad81a(void)

undefined8 FUN_1494ad81a(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x130) + 0x30);
  local_28 = param_3;
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + uVar4) == param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          FUN_1400021e4(&local_28,&local_38);
          puVar5 = local_38;
          if (local_30 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          cVar1 = (**(code **)(*param_2 + 0x170))(param_2,puVar5,0,0x34);
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\0') {
            param_2[5] = local_28;
            if (*(int *)(param_1 + 0x108) != 3) {
              *(undefined4 *)(param_1 + 0x108) = 2;
            }
            FUN_1494dc8de(param_1 + 0x138,0xc,param_2);
            FUN_14282b7b8(param_1);
            uVar3 = 1;
            goto LAB_1494ad866;
          }
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar2 * 8 != uVar4);
  }
  uVar3 = 0;
LAB_1494ad866:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494ad920 FUN_1494ad920 body=216 status=ok
// SIG undefined FUN_1494ad920(void)

ulonglong FUN_1494ad920(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x130) + 0x30);
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + uVar5) == param_2) {
        if ((int)(~uVar5 >> 3) != 0) {
          lVar4 = *param_3;
          if (*(longlong *)(param_2 + 0x30) == lVar4) {
            cVar3 = FUN_144a7afa6(param_2 + 0x40,param_3 + 2);
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (cVar3 != '\0') goto LAB_1494ad95c;
            lVar4 = *param_3;
          }
          *(longlong *)(param_2 + 0x30) = lVar4;
          *(longlong *)(param_2 + 0x38) = param_3[1];
          uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar4 = param_3[3];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(param_2 + 0x40) = (int)param_3[2];
          *(undefined4 *)(param_2 + 0x44) = uVar1;
          *(int *)(param_2 + 0x48) = (int)lVar4;
          *(undefined4 *)(param_2 + 0x4c) = uVar2;
          FUN_144a787a6(param_2 + 0x50,param_3 + 4);
          if (*(int *)(param_1 + 0x108) != 3) {
            *(undefined4 *)(param_1 + 0x108) = 2;
          }
          FUN_1494dc8de(param_1 + 0x138,0xd,param_2);
          FUN_14282b7b8(param_1);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
          goto LAB_1494ad95c;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while (lVar4 * 8 != uVar5);
  }
  unaff_RBP = 0;
LAB_1494ad95c:
  if (param_3[4] != 0) {
    FUN_1400020a8();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1494ad9f8 FUN_1494ad9f8 body=217 status=ok
// SIG undefined FUN_1494ad9f8(void)

ulonglong FUN_1494ad9f8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x130) + 0x30);
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + uVar3) == param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          cVar1 = FUN_1494a5a62(param_2 + 0x68,param_3);
          uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          if (cVar1 == '\0') {
            *(undefined4 *)(param_2 + 0x68) = *param_3;
            FUN_1406fa324(param_2 + 0x70,param_3 + 2);
            *(undefined4 *)(param_2 + 0x80) = param_3[6];
            FUN_144a787a6(param_2 + 0x88,param_3 + 8);
            FUN_1406fa324(param_2 + 0x98,param_3 + 0xc);
            if (*(int *)(param_1 + 0x108) != 3) {
              *(undefined4 *)(param_1 + 0x108) = 2;
            }
            FUN_1494dc8de(param_1 + 0x138,0xd,param_2);
            FUN_14282b7b8(param_1);
          }
          goto LAB_1494ada41;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar2 * 8 != uVar3);
  }
  uVar3 = 0;
LAB_1494ada41:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1494adad2 FUN_1494adad2 body=241 status=ok
// SIG undefined FUN_1494adad2(void)

undefined8 FUN_1494adad2(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x2a8))(param_2,&local_40);
  FUN_149499cc8(&local_40,*(undefined8 *)(param_1 + 0x120),local_40);
  uVar2 = FUN_14001cc68(0x30,0x10);
  FUN_14945e38c(uVar2,param_2,local_40);
  uVar3 = FUN_1494ac0dc(param_1);
  local_40 = uVar2;
  local_38 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_38[1] = &DAT_100000001;
  *local_38 = &PTR_LAB_14bcfe3d0;
  local_38[2] = uVar2;
  cVar1 = FUN_1494a7e7c(uVar3,&local_40);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14945e4ea(uVar2,param_1 + 0x30);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494adbc4 FUN_1494adbc4 body=109 status=ok
// SIG undefined FUN_1494adbc4(void)

longlong FUN_1494adbc4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 == 0 || param_2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_1411c55ba();
    lVar3 = FUN_1494adc31(*(undefined8 *)(param_1 + 0x120),uVar2,param_3);
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(lVar3 + 0x30) = lVar1;
    *(longlong *)(lVar3 + 0x28) = param_3;
  }
  return lVar3;
}



// FUNCTION 1494adc31 FUN_1494adc31 body=163 status=ok
// SIG undefined FUN_1494adc31(void)

undefined8 FUN_1494adc31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a5c54a(local_b8);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494adcd6 FUN_1494adcd6 body=287 status=ok
// SIG undefined FUN_1494adcd6(void)

undefined8 FUN_1494adcd6(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) ||
     (lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != *(longlong *)(param_2 + 0x20))) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x30) == 0) {
      *(undefined1 *)(param_2 + 0x48) = 1;
      lVar3 = *(longlong *)(param_1 + 0x120);
    }
    if ((param_3 < 0) || (*(int *)(lVar3 + 0x30) <= param_3)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(lVar3 + 0x30);
      *(uint *)(lVar3 + 0x30) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x34) < iVar1 + 1U) {
        FUN_1494dba52((longlong *)(lVar3 + 0x28),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    else {
      local_40 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_1494addf6(lVar3 + 0x28,&local_40,param_3);
    }
    if (*(int *)(param_1 + 0x108) != 3) {
      *(undefined4 *)(param_1 + 0x108) = 2;
    }
    FUN_1494dc8de(param_1 + 0x138,4,param_2);
    FUN_14282b7b8(param_1);
    uVar2 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494addf6 FUN_1494addf6 body=129 status=ok
// SIG undefined FUN_1494addf6(void)

uint FUN_1494addf6(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494dba52(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1494ade78 FUN_1494ade78 body=218 status=ok
// SIG undefined FUN_1494ade78(void)

undefined8 FUN_1494ade78(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  iVar3 = *(int *)(lVar1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    iVar4 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) == param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar3 - iVar4 != 0) {
          memmove((void *)(lVar2 + (lVar5 >> 0x20) * 8),(void *)(lVar2 + (lVar5 >> 0x20) * 8 + 8),
                  (longlong)(iVar3 - iVar4) << 3);
          iVar3 = *(int *)(lVar1 + 0x30);
        }
        *(int *)(lVar1 + 0x30) = iVar3 + -1;
        FUN_1494dbad8(lVar1 + 0x28);
        if (*(int *)(param_1 + 0x108) != 3) {
          *(undefined4 *)(param_1 + 0x108) = 2;
        }
        FUN_1494dc8de(param_1 + 0x138,5,param_2);
        FUN_1494acfa0(param_2);
        FUN_14282b7b8(param_1);
        return 1;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1494adf52 FUN_1494adf52 body=260 status=ok
// SIG undefined FUN_1494adf52(void)

undefined8 FUN_1494adf52(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0x30);
  local_28 = param_3;
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x28) + uVar4) == param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          FUN_1400021e4(&local_28,&local_38);
          puVar5 = local_38;
          if (local_30 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          cVar1 = (**(code **)(*param_2 + 0x170))(param_2,puVar5,0,0x34);
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\0') {
            param_2[5] = local_28;
            if (*(int *)(param_1 + 0x108) != 3) {
              *(undefined4 *)(param_1 + 0x108) = 2;
            }
            FUN_1494dc8de(param_1 + 0x138,7,param_2);
            FUN_14282b7b8(param_1);
            uVar3 = 1;
            goto LAB_1494adf9e;
          }
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar2 * 8 != uVar4);
  }
  uVar3 = 0;
LAB_1494adf9e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494ae058 FUN_1494ae058 body=221 status=ok
// SIG undefined FUN_1494ae058(void)

ulonglong FUN_1494ae058(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0x30);
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x28) + uVar3) == param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          lVar1 = *(longlong *)(param_2 + 0x30);
          if (lVar1 == 0) {
LAB_1494ae0b5:
            lVar1 = 0;
          }
          else {
            lVar2 = FUN_14590aaa4();
            if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
                lVar2 + 0x30)) goto LAB_1494ae0b5;
            lVar1 = *(longlong *)(param_2 + 0x30);
          }
          lVar2 = *(longlong *)(param_3 + 0x10);
          uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          if (lVar1 != lVar2) {
            if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar2);
            }
            *(longlong *)(param_2 + 0x30) = lVar2;
            if (*(int *)(param_1 + 0x108) != 3) {
              *(undefined4 *)(param_1 + 0x108) = 2;
            }
            FUN_1494dc8de(param_1 + 0x138,8,param_2);
            FUN_14282b7b8(param_1);
          }
          goto LAB_1494ae095;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar1 * 8 != uVar3);
  }
  uVar3 = 0;
LAB_1494ae095:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1494ae168 FUN_1494ae168 body=1081 status=ok
// SIG undefined FUN_1494ae168(void)

longlong FUN_1494ae168(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  undefined2 *local_a8;
  uint local_a0;
  undefined8 local_98 [8];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x400000000;
  lVar8 = *param_2;
  iVar4 = (int)param_2[1];
  uVar15 = 0;
  iVar9 = -0x7fffffff;
  local_c8 = param_1;
  local_c0 = param_3;
  do {
    local_a8 = &DAT_149e065c6;
    local_a0 = 1;
    local_b0 = iVar4 - uVar15;
    if (iVar4 <= (int)(iVar4 - uVar15)) {
      local_b0 = iVar4;
    }
    if (local_b0 < 1) {
      local_b0 = 0;
    }
    local_b8 = ((longlong)iVar4 * 2 + lVar8) - (ulonglong)(uint)(local_b0 * 2);
    iVar2 = FUN_144a08910(&local_b8,&local_a8,0);
    uVar14 = local_50;
    if ((iVar2 == -1) || (iVar2 + uVar15 == -1)) break;
    uVar7 = (int)uVar15 >> 0x1f & uVar15;
    iVar11 = uVar15 - uVar7;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
    iVar3 = iVar2 + uVar7;
    iVar17 = iVar4 - iVar11;
    if (iVar3 < iVar4 - iVar11) {
      iVar17 = iVar3;
    }
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    lVar12 = (longlong)(int)local_50;
    uVar7 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar7);
    if (local_50._4_4_ < uVar7) {
      FUN_1494dc67e(local_98,uVar14 & 0xffffffff);
    }
    puVar5 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      puVar5 = local_98;
    }
    puVar5[lVar12 * 2] = (longlong)iVar11 * 2 + lVar8;
    *(int *)(puVar5 + lVar12 * 2 + 1) = iVar17;
    uVar15 = iVar2 + uVar15 + 1;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0);
  uVar14 = local_50;
  uVar7 = (int)uVar15 >> 0x1f & uVar15;
  iVar9 = uVar15 - uVar7;
  iVar2 = uVar7 + 0x7fffffff;
  if (iVar4 <= iVar9) {
    iVar9 = iVar4;
  }
  iVar11 = iVar4 - iVar9;
  if (iVar2 < iVar4 - iVar9) {
    iVar11 = iVar2;
  }
  iVar4 = 0;
  if (0 < iVar11) {
    iVar4 = iVar11;
  }
  lVar12 = (longlong)(int)local_50;
  uVar15 = (int)local_50 + 1;
  local_50 = CONCAT44(local_50._4_4_,uVar15);
  if (local_50._4_4_ < uVar15) {
    FUN_1494dc67e(local_98,uVar14 & 0xffffffff);
  }
  puVar5 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    puVar5 = local_98;
  }
  puVar5[lVar12 * 2] = lVar8 + (longlong)iVar9 * 2;
  *(int *)(puVar5 + lVar12 * 2 + 1) = iVar4;
  if (((int)local_50 != 0) && (iVar4 = *(int *)(local_c8 + 0x118), (longlong)iVar4 != 0)) {
    lVar8 = *(longlong *)(local_c8 + 0x110);
    lVar12 = 0;
    do {
      lVar10 = *(longlong *)(lVar8 + lVar12);
      puVar5 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar5 = local_98;
      }
      local_b8 = *(longlong *)(lVar10 + 0x18);
      FUN_1400021e4(&local_b8,&local_a8);
      iVar9 = local_a0 - 1;
      if (local_a0 == 0) {
        iVar9 = 0;
      }
      bVar18 = false;
      if (*(int *)(puVar5 + 1) == iVar9) {
        iVar2 = 0;
        if (1 < local_a0) {
          iVar2 = FUN_144a54874(*puVar5,local_a8,(longlong)iVar9);
        }
        bVar18 = iVar2 == 0;
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar18) {
        if (lVar10 != 0) {
          uVar14 = 1;
          if ((int)local_50 < 2) goto LAB_1494ae548;
          uVar13 = 1;
          goto LAB_1494ae455;
        }
        break;
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar4 * 8 != lVar12);
  }
  lVar10 = 0;
  goto LAB_1494ae3f1;
LAB_1494ae455:
  plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar10 + 0x28) + 0x28))();
  lVar8 = plVar6[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar12 = *plVar6;
    lVar16 = 0;
    local_c8 = uVar13;
    while( true ) {
      lVar1 = *(longlong *)(lVar12 + lVar16);
      puVar5 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar5 = local_98;
      }
      local_b8 = *(longlong *)(lVar1 + 0x18);
      FUN_1400021e4(&local_b8,&local_a8);
      bVar18 = false;
      iVar9 = 0;
      iVar4 = local_a0 - 1;
      if (local_a0 == 0) {
        iVar4 = 0;
      }
      if (*(int *)(puVar5 + uVar13 * 2 + 1) == iVar4) {
        if (1 < local_a0) {
          iVar9 = FUN_144a54874(puVar5[uVar13 * 2],local_a8,(longlong)iVar4);
        }
        bVar18 = iVar9 == 0;
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar18) break;
      lVar16 = lVar16 + 8;
      uVar14 = local_c8;
      if ((longlong)(int)lVar8 * 8 == lVar16) goto LAB_1494ae548;
    }
    uVar13 = local_c8 + 1;
    lVar10 = lVar1;
    uVar14 = uVar13;
    if ((longlong)(int)local_50 <= (longlong)uVar13) goto LAB_1494ae548;
    goto LAB_1494ae455;
  }
  uVar14 = uVar13;
LAB_1494ae548:
  if ((int)uVar14 < (int)local_50) {
    puVar5 = local_98;
    if (local_58 != (undefined8 *)0x0) {
      puVar5 = local_58;
    }
    lVar8 = puVar5[(uVar14 & 0xffffffff) * 2];
    iVar4 = (int)((ulonglong)(puVar5[(longlong)(int)local_50 * 2 + -2] - lVar8) >> 1) +
            *(int *)(puVar5 + (longlong)(int)local_50 * 2 + -1);
  }
  else {
    lVar8 = 0;
    iVar4 = 0;
  }
  *local_c0 = lVar8;
  *(int *)(local_c0 + 1) = iVar4;
LAB_1494ae3f1:
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1494ae5a2 FUN_1494ae5a2 body=589 status=ok
// SIG undefined FUN_1494ae5a2(void)

ulonglong FUN_1494ae5a2(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  uint local_a0;
  longlong local_98;
  uint local_90;
  undefined *local_88;
  uint local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  lVar6 = FUN_1494ae168(local_b8,&local_b8,&local_a8);
  uVar3 = local_a0;
  lVar1 = local_a8;
  uVar13 = 0;
  uVar8 = 0;
  if (local_a0 != 0 && lVar6 != 0) {
    local_88 = &DAT_149e0635c;
    local_80 = 1;
    local_90 = 0;
    if (0 < (int)local_a0) {
      local_90 = local_a0;
    }
    local_98 = (local_a8 + (longlong)(int)local_a0 * 2) - (ulonglong)(local_90 * 2);
    uVar7 = FUN_144a08910();
    iVar4 = (int)uVar7;
    if (iVar4 == -1) {
      plVar14 = &local_78;
    }
    else {
      plVar14 = &local_68;
      uVar8 = (int)uVar3 >> 0x1f & uVar3;
      iVar11 = uVar3 - uVar8;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
      local_70 = 0;
      if (0 < iVar11) {
        local_70 = iVar11;
      }
      local_78 = lVar1 + (longlong)(int)uVar8 * 2;
      uVar8 = iVar4 + 1;
    }
    uVar9 = (int)uVar8 >> 0x1f & uVar8;
    uVar8 = uVar8 - uVar9;
    if ((int)uVar3 <= (int)uVar8) {
      uVar8 = uVar3;
    }
    uVar9 = uVar9 + 0x7fffffff;
    uVar2 = uVar3 - uVar8;
    if ((int)uVar9 < (int)(uVar3 - uVar8)) {
      uVar2 = uVar9;
    }
    uVar13 = 0;
    uVar12 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar12 = uVar13;
    }
    *plVar14 = lVar1 + (longlong)(int)uVar8 * 2;
    *(int *)(plVar14 + 1) = (int)uVar12;
    iVar11 = local_70;
    iVar4 = *(int *)(lVar6 + 0x40);
    if ((longlong)iVar4 != 0) {
      local_c0 = local_78;
      lVar15 = (longlong)local_70;
      lVar1 = *(longlong *)(lVar6 + 0x38);
      lVar6 = 0;
      local_d0 = param_3;
      local_c8 = uVar7;
      do {
        uVar13 = *(ulonglong *)(lVar1 + lVar6);
        if (uVar13 != 0) {
          local_98 = *(longlong *)(uVar13 + 0x18);
          FUN_1400021e4(&local_98,&local_88);
          bVar16 = false;
          iVar5 = 0;
          iVar10 = local_80 - 1;
          if (local_80 == 0) {
            iVar10 = 0;
          }
          if (iVar11 == iVar10) {
            if (1 < local_80 && iVar11 != 0) {
              iVar5 = FUN_144a54874(local_c0,local_88,lVar15);
            }
            bVar16 = iVar5 == 0;
          }
          if (local_88 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          if (bVar16) {
            if ((int)local_c8 == -1) {
              local_68 = 0;
              local_60 = 0;
            }
            *local_d0 = local_68;
            *(undefined4 *)(local_d0 + 1) = local_60;
            *(undefined4 *)((longlong)local_d0 + 0xc) = 0;
            goto LAB_1494ae607;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar4 * 8 != lVar6);
      uVar13 = 0;
    }
  }
LAB_1494ae607:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1494ae7f0 FUN_1494ae7f0 body=194 status=ok
// SIG undefined FUN_1494ae7f0(void)

void FUN_1494ae7f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_50 = *(undefined4 *)(param_2 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 4);
  lVar1 = (longlong)local_40;
  _Src = (void *)param_2[3];
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1494dc77a(param_1,&local_60,param_3);
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ae8b4 FUN_1494ae8b4 body=2144 status=ok
// SIG undefined FUN_1494ae8b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494ae8b4(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  longlong **pplVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  double local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_18c [4];
  longlong **local_188;
  double *pdStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  uint local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_110;
  undefined8 local_10c;
  int local_104;
  longlong local_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar10 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x38) + 0x28))(param_1 + 0x38);
  if ((longlong)(int)plVar10[1] != 0) {
    plVar22 = (longlong *)*plVar10;
    plVar10 = plVar22 + (int)plVar10[1];
    do {
      lVar2 = *plVar22;
      if (*(uint *)(lVar2 + 0x30) < 3) {
        local_118 = 0;
        local_110 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_10c = 0xffffffff00000080;
        local_104 = 0;
        local_f8 = 0;
        local_f0 = 0;
        iVar8 = *(int *)(lVar2 + 0x40);
        if ((longlong)iVar8 != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x38);
          dVar4 = 0.0;
          lVar18 = 0;
          uVar23 = 0xffffffff;
          uVar24 = 0x7fefffff;
          local_1f0 = param_1;
          do {
            plVar13 = *(longlong **)(lVar3 + lVar18);
            dVar1 = (double)plVar13[8];
            if (dVar1 <= (double)CONCAT44(uVar24,uVar23)) {
              uVar23 = SUB84(dVar1,0);
              uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            dVar4 = dVar4 + (double)plVar13[9];
            if (plVar13 != (longlong *)0x0) {
              lVar11 = FUN_145a96ec4();
              if (((*(int *)(lVar11 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                   lVar11 + 0x30)) && (lVar11 = plVar13[0x25], local_1d8 = plVar13, lVar11 != 0)) {
                lVar15 = *(longlong *)(lVar11 + 0x110);
                if (lVar15 == 0) {
                  FUN_140aa6c08(lVar11);
                  lVar15 = *(longlong *)(lVar11 + 0x110);
                }
                lVar11 = local_1f0;
                local_1b0 = (double)FUN_1494afd02(local_1f0,lVar15);
                if (local_1b0 == 0.0) {
                  lVar15 = FUN_1494a1a72(lVar15);
                  if (lVar15 != 0) {
                    local_1b0 = (double)FUN_1494adad2(lVar11,lVar15);
                  }
                  if (local_1b0 == 0.0) goto LAB_1494aea33;
                }
                local_188 = &local_1d8;
                pdStack_180 = &local_1b0;
                FUN_1494dc98c(&local_138,&local_1e0,&local_188);
                FUN_1400337aa(local_1d8);
              }
            }
LAB_1494aea33:
            lVar18 = lVar18 + 8;
          } while ((longlong)iVar8 * 8 != lVar18);
          param_1 = local_1f0;
          if ((int)uStack_130 != local_104) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc1c9a0) && (FUN_144b3d300(&DAT_14cc1c9a0), DAT_14cc1c9a0 == -1))
            {
              DAT_14cc1c990 = 160.0;
              DAT_14cc1c998 = 40.0;
              _Init_thread_footer(&DAT_14cc1c9a0);
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc1c9b8) && (FUN_144b3d300(&DAT_14cc1c9b8), DAT_14cc1c9b8 == -1))
            {
              _DAT_14cc1c9a8 = 40.0;
              DAT_14cc1c9b0 = 20.0;
              _Init_thread_footer(&DAT_14cc1c9b8);
            }
            local_168 = 0;
            local_160 = 0;
            local_188 = (longlong **)0x0;
            pdStack_180 = (double *)0x0;
            local_15c = 0xffffffff00000080;
            local_154 = 0;
            local_148 = (undefined1 *)0x0;
            local_140 = 0;
            local_1b0 = 2.12199579096527e-314;
            local_1a0._0_4_ = 0xffffffff;
            local_1a0._4_4_ = 0;
            local_198 = 0;
            iVar8 = 0;
            local_1a8 = (undefined8 *)local_128;
            if (local_110 != 0) {
              FUN_1449c0562(&local_1b0);
              iVar8 = local_110;
            }
            local_1c0._0_4_ = (uint)local_1a0;
            local_1c0._4_4_ = local_1a0._4_4_;
            local_1b8 = local_198;
            local_1b4 = local_194;
            local_1d0 = local_1b0;
            local_1c8 = (undefined1 *)local_1a8;
            local_1d8 = &local_138;
            if ((local_1a0._4_4_ != iVar8) || (iVar20 = iVar8, local_1a8 != (undefined8 *)local_128)
               ) {
              local_1e8 = plVar10;
              do {
                local_1e0 = 0;
                local_1b0 = (double)(*local_1d8 + (longlong)local_1c0._4_4_ * 0x18 + 8);
                local_1a8 = &local_1e0;
                FUN_1494dce88(&local_188,local_18c,&local_1b0);
                local_1c0._0_4_ = (uint)local_1c0 & ~local_1d0._4_4_;
                FUN_1449c0562(&local_1d0);
                plVar10 = local_1e8;
                iVar20 = local_110;
              } while (local_1d8 != &local_138 ||
                       (local_1c8 != local_128 || local_1c0._4_4_ != iVar8));
            }
            dVar6 = DAT_14cc1c990 + _DAT_14cc1c9a8;
            iVar8 = *(int *)(lVar2 + 0x40);
            iVar17 = ~local_154 + (uint)pdStack_180;
            dVar7 = DAT_14cc1c9b0 + DAT_14cc1c998;
            dVar1 = DAT_14cc1c998 * 0.5;
            local_1b0 = 2.12199579096527e-314;
            local_1a0 = 0xffffffff;
            local_198 = 0;
            iVar21 = 0;
            local_1a8 = (undefined8 *)local_128;
            if (iVar20 != 0) {
              FUN_1449c0562(&local_1b0);
              iVar21 = local_110;
            }
            local_1c0 = local_1a0;
            uVar16 = local_1c0;
            local_1b8 = local_198;
            local_1b4 = local_194;
            local_1d0 = local_1b0;
            local_1c8 = (undefined1 *)local_1a8;
            local_1c0._4_4_ = (int)((ulonglong)local_1a0 >> 0x20);
            local_1d8 = &local_138;
            if ((local_1c0._4_4_ != iVar21) || (local_1a8 != (undefined8 *)local_128)) {
              puVar5 = (undefined1 *)(dVar4 / (double)iVar8 - (dVar1 + dVar7 * (double)iVar17));
              iVar8 = local_1c0._4_4_;
              local_1c0 = uVar16;
              do {
                lVar3 = *local_1d8;
                plVar13 = *(longlong **)(lVar3 + 8 + (longlong)iVar8 * 0x18);
                if ((uint)pdStack_180 != local_154) {
                  uVar9 = ((uint)((ulonglong)plVar13 >> 0x14) & 0xffff ^
                          (uint)((ulonglong)plVar13 >> 4)) * -0x7a143595;
                  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                  puVar12 = local_148;
                  if (local_148 == (undefined1 *)0x0) {
                    puVar12 = local_150;
                  }
                  iVar20 = *(int *)(puVar12 +
                                   (ulonglong)(local_140 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
                  while (iVar20 != -1) {
                    pplVar19 = local_188 + (longlong)iVar20 * 3;
                    if (*pplVar19 == plVar13) goto LAB_1494aee94;
                    iVar20 = *(int *)(pplVar19 + 2);
                  }
                }
                pplVar19 = (longlong **)0x0;
LAB_1494aee94:
                plVar14 = pplVar19[1];
                if (plVar14 == (longlong *)0x0) {
                  local_1b0 = (double)CONCAT44(uVar24,uVar23) - dVar6;
                  local_1a8 = (undefined8 *)puVar5;
                  plVar13 = (longlong *)FUN_1494afe6c(lVar2,plVar13,&local_1b0);
                  if (plVar13 == (longlong *)0x0) {
LAB_1494aeee0:
                    plVar13 = (longlong *)0x0;
                  }
                  else {
                    lVar18 = FUN_145ba6740();
                    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar18 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8)
                        != lVar18 + 0x30)) goto LAB_1494aeee0;
                  }
                  pplVar19[1] = plVar13;
                  puVar5 = (undefined1 *)((double)puVar5 + DAT_14cc1c998 + DAT_14cc1c9b0);
                  plVar14 = pplVar19[1];
                  if (plVar14 != (longlong *)0x0) goto LAB_1494aef18;
                }
                else {
LAB_1494aef18:
                  if ((int)plVar14[0xb] == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = *(undefined8 *)plVar14[10];
                  }
                  FUN_149494c80(lVar2,uVar16,
                                **(undefined8 **)
                                  (*(longlong *)(lVar3 + (longlong)iVar8 * 0x18) + 0x50));
                }
                local_1c0 = CONCAT44(local_1c0._4_4_,(uint)local_1c0 & ~local_1d0._4_4_);
                FUN_1449c0562(&local_1d0);
                iVar8 = local_1c0._4_4_;
                uVar16 = local_1c0;
              } while (local_1d8 != &local_138 ||
                       (local_1c8 != local_128 || local_1c0._4_4_ != iVar21));
            }
            local_1c0 = uVar16;
            local_140 = 0;
            if (local_148 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1494d1374(&local_188);
            param_1 = local_1f0;
          }
        }
        local_f0 = 0;
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        FUN_1494d1402(&local_138);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar10);
  }
  FUN_14282b7b8(param_1);
  if ((local_e0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494af116 FUN_1494af116 body=1344 status=ok
// SIG undefined FUN_1494af116(void)

void FUN_1494af116(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = param_1;
  plVar8 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x38) + 0x28))(param_1 + 0x38);
  if ((longlong)(int)plVar8[1] != 0) {
    plVar9 = (longlong *)*plVar8;
    plVar8 = plVar9 + (int)plVar8[1];
    local_108 = plVar8;
    do {
      lVar11 = *plVar9;
      if (*(uint *)(lVar11 + 0x30) < 3) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_110 = lVar11;
        local_f8 = plVar9;
        if ((longlong)*(int *)(lVar11 + 0x40) != 0) {
          plVar9 = *(longlong **)(lVar11 + 0x38);
          plVar8 = plVar9 + *(int *)(lVar11 + 0x40);
          local_f0 = plVar8;
          do {
            lVar11 = *plVar9;
            if (lVar11 != 0) {
              lVar10 = FUN_145ba6bd2();
              if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                local_e0 = lVar11;
                lVar11 = (**(code **)(*(longlong *)(lVar11 + 0x108) + 0x20))(lVar11 + 0x108);
                FUN_140f4f540();
                uVar12 = FUN_1457dd7ae();
                FUN_146739dc5(&local_90,uVar12,1);
                FUN_140f4f5a6(&DAT_14cc1c7d8,&local_b8,local_90);
                iVar3 = *(int *)(lVar11 + 0xa8);
                local_e8 = lVar11;
                if ((longlong)iVar3 == 0) {
                  local_118 = 0;
                }
                else {
                  lVar11 = *(longlong *)(lVar11 + 0xa0);
                  lVar10 = 0;
                  local_118 = 0;
                  do {
                    lVar13 = *(longlong *)(lVar11 + lVar10);
                    if (*(char *)(lVar13 + 0x29) == '\x01') {
                      FUN_1494947ba(lVar13 + 0x70,&local_90);
                      plVar8 = local_88;
                      puVar6 = local_90;
                      puVar4 = local_b8;
                      if (local_88 != (longlong *)0x0) {
                        LOCK();
                        plVar1 = local_88 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)*local_88)(local_88);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar8 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar8 + 0x10))(plVar8);
                          }
                        }
                      }
                      if (puVar6 == puVar4) {
                        local_70 = 0;
                        local_68 = 0x400000000;
                        FUN_1494e72a0(lVar13,&local_c8,&local_90);
                        if (local_70 != 0) {
                          FUN_1400020a8();
                        }
                        iVar15 = 7;
                        if (local_c0 == 1) {
                          lVar13 = FUN_1494e64f0(*local_c8);
                          if (lVar13 == 0) {
LAB_1494af491:
                            lVar13 = 0;
                          }
                          else {
                            lVar14 = FUN_145a96ec4();
                            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) <
                                 *(int *)(lVar14 + 0x38)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                                 (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30))
                            goto LAB_1494af491;
                          }
                          lVar14 = (**(code **)(*(longlong *)(lVar13 + 0x108) + 0x10))
                                             (lVar13 + 0x108,DAT_14c951640);
                          if (lVar14 != 0) {
                            uVar12 = FUN_1459f6ee6();
                            lVar14 = FUN_144718840(lVar14,uVar12);
                            if (lVar14 != 0) {
                              local_70 = 0;
                              local_68 = 0x400000000;
                              FUN_1494e72a0(**(undefined8 **)(lVar13 + 0x50),&local_d8,&local_90);
                              if (local_70 != 0) {
                                FUN_1400020a8();
                              }
                              iVar15 = 7;
                              lVar13 = local_118;
                              if (local_d0 == 1) {
                                lVar13 = FUN_1494e64f0(*local_d8);
                                if (lVar13 == 0) {
LAB_1494af5b5:
                                  lVar13 = 0;
                                }
                                else {
                                  lVar14 = FUN_145ba6740();
                                  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) <
                                       *(int *)(lVar14 + 0x38)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                                       (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30))
                                  goto LAB_1494af5b5;
                                }
                                iVar15 = 6;
                                if (lVar13 == 0) {
                                  iVar15 = 0;
                                }
                              }
                              local_118 = lVar13;
                              FUN_1494d74c1(local_d8,local_d0);
                              if (local_d8 != (undefined8 *)0x0) {
                                FUN_1400020a8();
                              }
                            }
                          }
                        }
                        FUN_1494d74c1(local_c8,local_c0);
                        if (local_c8 != (undefined8 *)0x0) {
                          FUN_1400020a8();
                        }
                        if ((iVar15 != 7) && (iVar15 != 0)) break;
                      }
                    }
                    lVar10 = lVar10 + 8;
                  } while ((longlong)iVar3 * 8 != lVar10);
                }
                lVar11 = local_e0;
                FUN_14949f0ae(local_e0);
                iVar3 = *(int *)(local_e8 + 0xa8);
                if ((iVar3 < 1) && (local_118 != 0)) {
                  if (*(int *)(local_118 + 0x58) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = **(undefined8 **)(local_118 + 0x50);
                  }
                  FUN_149494c80(local_110,uVar12,**(undefined8 **)(lVar11 + 0x50));
                }
                plVar8 = local_b0;
                if (local_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_b0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_b0)(local_b0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar8 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
                plVar8 = local_f0;
                if (0 < iVar3) goto LAB_1494af1ef;
              }
              lVar10 = FUN_145a96ec4();
              if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                 (lVar10 = (**(code **)(*(longlong *)(lVar11 + 0x108) + 0x10))
                                     (lVar11 + 0x108,DAT_14c951640), lVar10 != 0)) {
                uVar12 = FUN_1459f6ee6();
                lVar10 = FUN_144718840(lVar10,uVar12);
                uVar5 = uStack_a0;
                if (lVar10 != 0) {
                  lVar10 = (longlong)(int)uStack_a0;
                  uVar7 = (int)uStack_a0 + 1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
                  if (uStack_a0._4_4_ < uVar7) {
                    FUN_1494db69c(&local_a8,uVar5 & 0xffffffff);
                  }
                  *(longlong *)(local_a8 + lVar10 * 8) = lVar11;
                }
              }
            }
LAB_1494af1ef:
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar8);
        }
        FUN_1494cb0d0(local_110,&local_a8);
        plVar9 = local_f8;
        plVar8 = local_108;
        if (local_a8 != 0) {
          FUN_1400020a8();
          plVar9 = local_f8;
          plVar8 = local_108;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar8);
  }
  FUN_14282b7b8(local_100);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494af658 FUN_1494af658 body=228 status=ok
// SIG undefined FUN_1494af658(void)

void FUN_1494af658(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  uVar3 = FUN_144b00ba4();
  local_48 = 0;
  FUN_14086ecde(uVar3,&local_38,0,0);
  lVar2 = local_38;
  lVar5 = (longlong)(int)uStack_30;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar6);
      if (lVar1 != 0) {
        lVar4 = FUN_145ba740c();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1494acfa0(lVar1);
          lVar4 = *(longlong *)(lVar1 + 0x110);
          if (lVar4 == 0) {
            FUN_140aa6c08(lVar1);
            lVar4 = *(longlong *)(lVar1 + 0x110);
          }
          FUN_1494acfa0(lVar4);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494af73e FUN_1494af73e body=1474 status=ok
// SIG undefined FUN_1494af73e(void)

void FUN_1494af73e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [48];
  undefined1 local_148 [16];
  longlong local_138 [2];
  undefined4 local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 local_114;
  undefined1 auStack_113 [7];
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined4 *local_f8;
  undefined4 **ppuStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    local_188 = lVar9 + (longlong)*(int *)(param_1 + 0x58) * 0x18;
    local_190 = (longlong *)(param_1 + 0xb0);
    local_180 = param_1 + 0xe8;
    local_198 = 0;
    do {
      lVar3 = FUN_1494a8df2(*(undefined8 *)(lVar9 + 0x10));
      if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x30) != 0)) {
        puVar8 = *(undefined8 **)(lVar3 + 0x28);
        puVar10 = puVar8 + (longlong)*(int *)(lVar3 + 0x30) * 0x11;
        do {
          if ((*(int *)(puVar8 + 9) < 1) && (*(int *)(puVar8 + 0xb) < 1)) {
            if (puVar8[0xd] == 0) {
              puVar5 = &DAT_149dfb77a;
              if (*(int *)(puVar8 + 1) != 0) {
                puVar5 = (undefined2 *)*puVar8;
              }
              FUN_1446f470e(&local_c8,puVar5,1);
              puVar7 = local_c8;
            }
            else {
              FUN_1494aff00(&local_c8,puVar8);
              puVar7 = (undefined4 *)&DAT_149dfb77a;
              if ((int)uStack_c0 != 0) {
                puVar7 = local_c8;
              }
              FUN_1446f470e(&local_f8,puVar7,1);
              puVar7 = local_f8;
              if (local_c8 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
            }
            local_128 = CONCAT31(local_128._1_3_,2);
            uStack_124 = (uint)puVar7;
            iStack_120 = (int)((ulonglong)puVar7 >> 0x20);
            if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
              uVar2 = (uint)((ulonglong)puVar7 >> 0x10);
              lVar3 = *(longlong *)(param_1 + 0xf0);
              if (*(longlong *)(param_1 + 0xf0) == 0) {
                lVar3 = local_180;
              }
              iVar4 = *(int *)(lVar3 + (ulonglong)
                                       (*(int *)(param_1 + 0xf8) - 1U &
                                       (((uStack_124 & 0xffff) >> 4) +
                                        iStack_120 + uStack_124 * 0x10000 + (uStack_124 & 0xffff) +
                                        (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9 ^ 2) + 0x80) *
                                       4);
              if (iVar4 != -1) {
                lVar3 = *local_190;
                do {
                  lVar6 = (longlong)iVar4 * 0x80;
                  if ((*(char *)(lVar3 + lVar6) == '\x02') &&
                     (*(undefined4 **)(lVar3 + 4 + lVar6) == puVar7)) goto LAB_1494af882;
                  iVar4 = *(int *)(lVar6 + lVar3 + 0x78);
                } while (iVar4 != -1);
              }
            }
            lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
            if (lVar3 != 0) {
              lVar6 = 0;
              do {
                lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x28) + lVar6);
                if (*(undefined4 **)(lVar1 + 0x38) == puVar7) {
                  local_f8 = (undefined4 *)0x0;
                  ppuStack_f0 = (undefined4 **)0x0;
                  FUN_140e6511c(&local_c8,&local_f8);
                  local_98 = 0;
                  FUN_141215e22(local_90);
                  local_80 = 0;
                  uStack_78 = 0;
                  local_70 = 0;
                  uStack_68 = 0;
                  local_98 = 2;
                  FUN_140f4f540();
                  FUN_14452aaf6(&DAT_14cc1c7d8,local_148,puVar8[2]);
                  FUN_140e6511c(&local_f8,local_148);
                  local_c8 = local_f8;
                  uStack_c0 = ppuStack_f0;
                  local_b8 = local_e8;
                  uStack_b4 = uStack_e4;
                  uStack_b0 = uStack_e0;
                  uStack_ac = uStack_dc;
                  if (CONCAT44(uStack_a4,local_a8) != 0) {
                    FUN_1400020a8();
                  }
                  local_a8 = local_d8;
                  uStack_a4 = uStack_d4;
                  uStack_a0 = uStack_d0;
                  uStack_9c = uStack_cc;
                  FUN_14945f130(local_178,lVar1 + 0x40);
                  FUN_1494e82f0(lVar1 + 0x70,&local_f8,local_178);
                  FUN_149467a2c(&local_80,&local_f8);
                  FUN_145b26c5e(&local_f8);
                  local_f8 = &local_128;
                  ppuStack_f0 = &local_c8;
                  FUN_1494dc438(local_190,local_138,&local_f8);
                  FUN_149477074(&local_c8);
                  break;
                }
                lVar6 = lVar6 + 8;
              } while (lVar3 * 8 != lVar6);
            }
LAB_1494af882:
            *(int *)(puVar8 + 4) = iStack_120;
            puVar8[3] = CONCAT44(uStack_124,local_128);
          }
          else {
            local_f8 = (undefined4 *)0x0;
            ppuStack_f0 = (undefined4 **)0x0;
            FUN_140e6511c(&local_c8,&local_f8);
            local_98 = 0;
            FUN_141215e22(local_90);
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_98 = 2;
            FUN_140f4f540();
            FUN_14452aaf6(&DAT_14cc1c7d8,local_108,puVar8[2]);
            FUN_140e6511c(&local_f8,local_108);
            local_c8 = local_f8;
            uStack_c0 = ppuStack_f0;
            local_b8 = local_e8;
            uStack_b4 = uStack_e4;
            uStack_b0 = uStack_e0;
            uStack_ac = uStack_dc;
            if (CONCAT44(uStack_a4,local_a8) != 0) {
              FUN_1400020a8();
            }
            local_a8 = local_d8;
            uStack_a4 = uStack_d4;
            uStack_a0 = uStack_d0;
            uStack_9c = uStack_cc;
            FUN_1447a122a(&local_80,puVar8 + 8);
            FUN_14945acde(&local_70,puVar8 + 10);
            local_114 = 1;
            local_128 = 0;
            uStack_124 = 0;
            iStack_120 = 0;
            uStack_11c = 0;
            FUN_144a83b10(&local_128,local_198);
            FUN_1449b8608(local_138,puVar8,L"_PostLoadFixUp_");
            FUN_1401c7f3e(&local_f8,local_138,&local_128);
            puVar7 = (undefined4 *)&DAT_149dfb77a;
            if ((int)ppuStack_f0 != 0) {
              puVar7 = local_f8;
            }
            FUN_1446f470e(auStack_113 + 3,puVar7,1);
            if (local_f8 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            if (local_138[0] != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_124,local_128) != 0) {
              FUN_1400020a8();
            }
            local_198 = (ulonglong)((int)local_198 + 1);
            local_f8 = (undefined4 *)&local_114;
            ppuStack_f0 = &local_c8;
            FUN_1494dc438(local_190,&local_128,&local_f8);
            *(undefined4 *)(puVar8 + 4) = local_10c;
            puVar8[3] = CONCAT71(auStack_113,local_114);
            FUN_149477074(&local_c8);
          }
          puVar8 = puVar8 + 0x11;
        } while (puVar8 != puVar10);
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != local_188);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494afd02 FUN_1494afd02 body=361 status=ok
// SIG undefined FUN_1494afd02(void)

undefined8 FUN_1494afd02(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0x30);
    if (lVar8 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x28);
      lVar6 = 0;
      do {
        uVar5 = *(undefined8 *)(lVar1 + lVar6);
        lVar2 = FUN_14948712a(uVar5);
        if (lVar2 != 0) {
          plVar3 = (longlong *)FUN_14948712a(uVar5);
          (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_50);
          lVar2 = local_50;
          if ((((local_50 == 0) || (lVar4 = FUN_144a78d6a(), lVar4 == 0)) ||
              (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (lVar7 = local_50,
             *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
             lVar4 + 0x30)) {
            lVar7 = 0;
          }
          (**(code **)(*param_2 + 0x360))(param_2,&local_50);
          lVar2 = local_50;
          if (((((local_50 != 0) && (lVar4 = FUN_144a78d6a(), lVar4 != 0)) &&
               ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30 && (local_50 != 0)))))) &&
              (*(int *)(local_50 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(local_50 + 0x38) * 8)
              == local_50 + 0x30)) goto LAB_1494afdd9;
        }
        lVar6 = lVar6 + 8;
      } while (lVar8 * 8 != lVar6);
    }
  }
  uVar5 = 0;
LAB_1494afdd9:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1494afe6c FUN_1494afe6c body=147 status=ok
// SIG undefined FUN_1494afe6c(void)

void FUN_1494afe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd1e380;
  local_58[0] = FUN_144533b62;
  local_30 = param_2;
  local_60 = FUN_145ba6740();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1494c9824(param_1,&local_60,param_3,local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494aff00 FUN_1494aff00 body=170 status=ok
// SIG undefined FUN_1494aff00(void)

undefined8 * FUN_1494aff00(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *_Src;
  int iVar6;
  
  _Src = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar5 = (longlong)iVar2 * 2;
  do {
    if (uVar5 == 0) goto LAB_1494aff67;
    uVar1 = uVar5 - 2;
    lVar3 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)_Src + lVar3) != 0x5f);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 == -1) {
LAB_1494aff67:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  else {
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      _Src = &DAT_149dfb77a;
      iVar6 = 0;
    }
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    FUN_14006620a(param_1,_Src,iVar6);
  }
  return param_1;
}



// FUNCTION 1494affaa FUN_1494affaa body=169 status=ok
// SIG undefined FUN_1494affaa(void)

void FUN_1494affaa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_144b00ba4(param_2);
  FUN_1494b0054(&local_40,uVar3);
  lVar2 = local_40;
  if ((longlong)local_38 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      uVar3 = FUN_144b00ba4(param_1);
      (**(code **)(*plVar1 + 0x170))(plVar1,0,uVar3,0x34);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_38 * 8 != lVar4);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b0054 FUN_1494b0054 body=243 status=ok
// SIG undefined FUN_1494b0054(void)

longlong * FUN_1494b0054(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  FUN_14086ecde(param_2,&local_68,0,0);
  lVar3 = local_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = (longlong)(int)uStack_60;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar6);
      if (lVar2 != 0) {
        lVar4 = FUN_144a797b2();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_140a0062e(param_1,iVar1);
          }
          *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494b014e FUN_1494b014e body=2077 status=ok
// SIG undefined FUN_1494b014e(void)

/* WARNING: Removing unreachable block (ram,0x0001494b02a6) */

void FUN_1494b014e(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined2 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  uint local_158;
  int iStack_154;
  uint uStack_150;
  int iStack_14c;
  undefined2 *local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  undefined2 *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1427dc336(local_e0);
  switchD_143c3d4dc::caseD_3d(param_1,local_e0);
  lVar15 = *(longlong *)(param_1 + 0x120);
  if ((lVar15 != 0) && (iVar2 = *(int *)(lVar15 + 0x30), (longlong)iVar2 != 0)) {
    lVar15 = *(longlong *)(lVar15 + 0x28);
    lVar16 = 0;
    do {
      lVar14 = *(longlong *)(lVar15 + lVar16);
      if (((lVar14 != 0) && (*(char *)(lVar14 + 0x48) == '\x01')) &&
         (lVar13 = FUN_14948712a(lVar14), lVar13 != 0)) {
        plVar11 = (longlong *)FUN_14948712a(lVar14);
        (**(code **)(*plVar11 + 0x2b0))(plVar11,&local_b8);
        puVar12 = local_b8;
        if (((local_b8 != (undefined2 *)0x0) && (lVar15 = FUN_144a78d6a(), lVar15 != 0)) &&
           ((*(int *)(lVar15 + 0x38) <= *(int *)(puVar12 + 0x1c) &&
            ((*(longlong *)(*(longlong *)(puVar12 + 0x18) + (longlong)*(int *)(lVar15 + 0x38) * 8)
              == lVar15 + 0x30 && (local_b8 != (undefined2 *)0x0)))))) {
          FUN_1400bbfc4(&local_b8);
          FUN_14475cc44(&local_b8,&local_d8);
          puVar12 = local_d8;
          if ((int)uStack_d0 == 0) {
            puVar12 = &DAT_149dfb77a;
          }
          FUN_140056680(&local_188,puVar12);
          FUN_1446f470e(&local_108,L"PrimaryBindingClass",1);
          local_100 = local_108;
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_188 = (undefined2 *)0x0;
          uStack_180 = (undefined2 *)0x0;
          local_e8 = 0;
          FUN_1407c67d8(param_2);
          if (local_188 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (lStack_a8 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar2 * 8 != lVar16);
  }
  local_188 = (undefined2 *)0x0;
  uStack_180 = (undefined2 *)0x0;
  FUN_1494ac7d2(param_1,&local_d8,DAT_14cc1c9c0);
  puVar12 = local_d8;
  lVar15 = (longlong)(int)uStack_d0;
  local_1b8 = param_2;
  if (lVar15 != 0) {
    lVar16 = 0;
    local_1b0 = param_1;
    uVar10 = local_a0;
    uVar9 = local_98;
    do {
      local_98 = uVar9;
      local_a0 = uVar10;
      FUN_1494b096c(*(undefined8 *)((longlong)puVar12 + lVar16),&local_b8);
      puVar3 = uStack_180;
      lVar14 = (longlong)(int)uStack_180;
      uVar5 = (int)uStack_180 + 1;
      uStack_180 = (undefined2 *)CONCAT44(uStack_180._4_4_,uVar5);
      if (uStack_180._4_4_ < uVar5) {
        FUN_1494dd384(&local_188,(ulonglong)puVar3 & 0xffffffff);
      }
      *(undefined2 **)(local_188 + lVar14 * 0x1c) = local_b8;
      *(undefined8 *)(local_188 + lVar14 * 0x1c + 4) = uStack_b0;
      *(longlong *)((longlong)(local_188 + lVar14 * 0x1c + 4) + 8) = lStack_a8;
      *(undefined8 *)(local_188 + lVar14 * 0x1c + 0xc) = 0;
      *(undefined8 *)(local_188 + lVar14 * 0x1c + 0xc) = local_a0;
      local_a0 = 0;
      uVar10 = local_a0;
      *(undefined4 *)(local_188 + lVar14 * 0x1c + 0x10) = (undefined4)local_98;
      *(undefined4 *)(local_188 + lVar14 * 0x1c + 0x12) = local_98._4_4_;
      local_98 = 0;
      uVar9 = local_98;
      puVar1 = (undefined4 *)(local_188 + lVar14 * 0x1c + 0x14);
      *puVar1 = local_90;
      puVar1[1] = (undefined4)uStack_8c;
      puVar1[2] = uStack_8c._4_4_;
      puVar1[3] = uStack_84;
      local_98 = 0;
      local_a0 = 0;
      lVar16 = lVar16 + 8;
      param_1 = local_1b0;
    } while (lVar15 * 8 != lVar16);
  }
  uVar10 = local_1b8;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8(local_d8);
  }
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  if (DAT_14cc1cc68 == 0) {
    uVar9 = FUN_140c44346();
    DAT_14cc1cc68 = FUN_140002ddd(FUN_14673abe0,uVar9,L"OptimusFunctionNodeGraphHeaderArray");
  }
  local_1c8 = 0;
  local_1d8 = 0;
  local_1c0 = 1;
  local_1d0 = 0;
  FUN_1446df618(DAT_14cc1cc68,&local_b8,&local_188,0);
  puVar12 = local_b8;
  if ((int)uStack_b0 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_d8,puVar12);
  local_128 = DAT_14cc1c978;
  local_120 = local_d8;
  uStack_118 = uStack_d0;
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_110 = 0;
  FUN_1407c67d8(uVar10);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d148f(local_188,(ulonglong)uStack_180 & 0xffffffff);
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  uStack_8c = 0xffffffff00000080;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar10 = FUN_1459f781e();
  FUN_1494ac5e0(param_1,&local_138,uVar10);
  lVar15 = local_138;
  if ((longlong)local_130 != 0) {
    lVar16 = 0;
    do {
      lVar14 = *(longlong *)(lVar15 + lVar16);
      local_158 = *(uint *)(lVar14 + 0x128);
      iStack_154 = *(int *)(lVar14 + 300);
      uStack_150 = *(uint *)(lVar14 + 0x130);
      iStack_14c = *(int *)(lVar14 + 0x134);
      local_148 = (undefined2 *)0x0;
      local_140 = *(int *)(lVar14 + 0x140);
      lVar13 = (longlong)local_140;
      _Src = *(void **)(lVar14 + 0x138);
      if (lVar13 == 0) {
        local_13c = 0;
      }
      else {
        FUN_1446dd670(&local_148,local_140,0);
        memcpy(local_148,_Src,lVar13 * 2);
      }
      uVar5 = (uint)(CONCAT44(iStack_14c,uStack_150) >> 0x10);
      uVar6 = (uint)(CONCAT44(iStack_154,local_158) >> 0x10);
      uVar6 = (local_158 << 0x10 | local_158 & 0xffff) + iStack_154 +
              (uVar6 << 0x13 | uVar6 & 0xffff) + ((local_158 & 0xffff) >> 4);
      uVar7 = FUN_144a78877(0,(uVar6 >> 2) +
                              (uStack_150 << 0x10 | uStack_150 & 0xffff) + iStack_14c +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + ((uStack_150 & 0xffff) >> 4) +
                              uVar6 * 0x40 + 0x9e3779b9 ^ uVar6);
      puVar12 = &DAT_149dfb77a;
      if (local_140 != 0) {
        puVar12 = local_148;
      }
      iVar2 = local_140 + -1;
      if (local_140 == 0) {
        iVar2 = 0;
      }
      uVar8 = FUN_144a49b4a(iVar2,puVar12);
      uVar7 = FUN_144a78877(uVar7,uVar8);
      uVar10 = FUN_1494dd414(&local_b8,uVar7,&local_158);
      local_178 = 0;
      uStack_170 = 0;
      local_188 = (undefined2 *)0x0;
      uStack_180 = (undefined2 *)0x0;
      local_168 = 0;
      if (lVar14 == 0) {
        local_188 = (undefined2 *)0x0;
        uStack_180 = (undefined2 *)0x0;
        local_178 = 0;
      }
      else {
        FUN_1400bbfc4(&local_d8,lVar14);
        uStack_180 = local_d8;
        local_178 = uStack_d0;
        if (uStack_170 != 0) {
          FUN_1400020a8();
        }
        uStack_170 = CONCAT44(uStack_c4,local_c8);
        local_168 = CONCAT44(uStack_bc,uStack_c0);
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar5 = *(uint *)(lVar14 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          if ((*(uint *)(lVar13 + 8) & 0x8400000) != 0) {
            local_188 = (undefined2 *)0x0;
            goto LAB_1494b0652;
          }
        }
        FUN_14485c47a(&local_188,lVar14);
      }
LAB_1494b0652:
      FUN_1494dd660(uVar10,&local_d8);
      if (uStack_170 != 0) {
        FUN_1400020a8();
      }
      if (local_148 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)local_130 * 8 != lVar16);
  }
  local_188 = (undefined2 *)0x0;
  uStack_180 = (undefined2 *)0x0;
  if (DAT_14cc1cc98 == 0) {
    uVar10 = FUN_140c44346();
    DAT_14cc1cc98 = FUN_140002ddd(FUN_14673acd6,uVar10,L"OptimusFunctionReferenceData");
  }
  local_1c8 = 0;
  local_1d8 = 0;
  local_1c0 = 1;
  local_1d0 = 0;
  FUN_1446df618(DAT_14cc1cc98,&local_188,&local_b8,0);
  uVar10 = local_1b8;
  puVar12 = local_188;
  if ((int)uStack_180 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_d8,puVar12);
  local_1a8 = DAT_14cc1c728;
  local_1a0 = local_d8;
  uStack_198 = uStack_d0;
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_190 = 0;
  FUN_1407c67d8(uVar10);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1494cffd8(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b096c FUN_1494b096c body=298 status=ok
// SIG undefined FUN_1494b096c(void)

undefined8 * FUN_1494b096c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  if (param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_48,param_1);
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
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        *param_2 = 0;
        goto LAB_1494b0a60;
      }
    }
    FUN_14485c47a(param_2,param_1);
  }
LAB_1494b0a60:
  param_2[5] = *(undefined8 *)(param_1 + 0x18);
  param_2[6] = *(undefined8 *)(param_1 + 0x148);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b0a98 FUN_1494b0a98 body=218 status=ok
// SIG undefined FUN_1494b0a98(void)

undefined8 FUN_1494b0a98(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(&local_40,local_50);
  FUN_144a882a8(&local_40,local_50,L"_Settings");
  iVar1 = local_38 + -1;
  if (local_38 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(&local_30,iVar1,local_40,1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = FUN_1494b0b73(param_2,local_30,*(uint *)(param_2 + 8) >> 5 & 1);
  FUN_1494b0c32(uVar2,param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b0b73 FUN_1494b0b73 body=189 status=ok
// SIG undefined FUN_1494b0b73(void)

undefined8 FUN_1494b0b73(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459f79f6();
  FUN_144a5c54a(local_b8,uVar1);
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b0c32 FUN_1494b0c32 body=216 status=ok
// SIG undefined FUN_1494b0c32(void)

void FUN_1494b0c32(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14485c47a(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_1494ba314(plVar1,*(undefined4 *)(*(longlong *)(param_2 + 0x120) + 0x30));
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar2) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x120) + 0x28) + lVar3 * 8) + 0x28)
      ;
      if (lVar3 == 0) {
        if (param_3 == 0) {
          local_48 = 0;
        }
        else {
          FUN_1494ba08a(&local_48,*(undefined8 *)(param_3 + 0x18));
        }
        *(undefined8 *)(*plVar1 + 8) = local_48;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x38));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b0d0c FUN_1494b0d0c body=177 status=ok
// SIG undefined FUN_1494b0d0c(void)

longlong FUN_1494b0d0c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar3 = FUN_144b20ea4(param_2);
    if (lVar3 == 0) {
      uVar2 = (uint)DAT_14ca85550;
    }
    else {
      uVar4 = FUN_144b20ea4(param_2);
      uVar2 = FUN_144a82cbc(uVar4);
    }
    cVar1 = thunk_FUN_149456f7d();
    if ((cVar1 != '\0') && (cVar1 = FUN_140838447(uVar2), cVar1 != '\0')) {
      if (*(longlong *)(param_2 + 0xb0) == 0) {
        FUN_1448abda6(param_2);
      }
      lVar3 = FUN_1494b0dbd(param_2);
      lVar5 = FUN_1494b0e52(param_1,param_2,param_3);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar3 + 0x28) = lVar5;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1494b0dbd FUN_1494b0dbd body=148 status=ok
// SIG undefined FUN_1494b0dbd(void)

undefined8 FUN_1494b0dbd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba3e1e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b0e52 FUN_1494b0e52 body=402 status=ok
// SIG undefined FUN_1494b0e52(void)

longlong FUN_1494b0e52(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined2 **)(param_1 + 0x18);
  FUN_1400021e4(&local_50,local_60);
  FUN_144a882a8(&local_50,local_60,L"_Instance");
  puVar4 = local_50;
  if (local_48 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar4,1);
  FUN_149499cc8(&local_38,param_2,local_40);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_1494b0fe5(param_2,local_38);
  FUN_14485c47a(lVar1 + 0x30,param_2);
  uVar2 = FUN_14479d2ce(lVar1 + 0x30);
  uVar2 = FUN_144b20ea4(uVar2);
  *(undefined8 *)(lVar1 + 0x198) = uVar2;
  if (param_3 != 0) {
    lVar3 = FUN_1459f79f6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_1494b0f58;
  }
  param_3 = 0;
LAB_1494b0f58:
  FUN_14485c47a(lVar1 + 0x38,param_3);
  FUN_1494b109e(lVar1,param_1);
  FUN_140457ffc(param_1 + 0x168,lVar1);
  FUN_1494b168c(param_1 + 0x168,&local_50,lVar1);
  FUN_1494b1782(param_1 + 0x198,&local_50,lVar1);
  FUN_1494b1a40(param_1 + 0x1b0,&local_50,lVar1);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1494b0fe5 FUN_1494b0fe5 body=183 status=ok
// SIG undefined FUN_1494b0fe5(void)

undefined8 FUN_1494b0fe5(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_141235df2();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b109e FUN_1494b109e body=1516 status=ok
// SIG undefined FUN_1494b109e(void)

void FUN_1494b109e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a9 = (**(code **)(*param_1 + 0x2b8))();
  (**(code **)(*param_1 + 0x2a8))(param_1);
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = FUN_14479d2ce(param_1 + 7);
  if (lVar5 == 0) {
    lVar5 = FUN_1494bbebe(DAT_14c951640);
    uVar6 = FUN_14479d2ce(param_1 + 6);
    FUN_1494b0c32(lVar5,param_2,uVar6);
  }
  local_a0 = param_1 + 6;
  uVar6 = FUN_14479d2ce();
  local_a8 = param_2;
  FUN_1494ba382(lVar5,param_2,uVar6,&local_58);
  plVar7 = param_1 + 0x1e;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) < 0) {
    FUN_1494e1fbc(plVar7);
  }
  lVar5 = local_58;
  lVar9 = (longlong)(int)uStack_50;
  if (lVar9 != 0) {
    lVar11 = 0;
    do {
      local_60 = 0;
      FUN_14485c47a(&local_60,*(undefined8 *)(lVar5 + lVar11));
      iVar10 = (int)param_1[0x1f];
      *(uint *)(param_1 + 0x1f) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xfc) < iVar10 + 1U) {
        FUN_1494e1fec(plVar7,iVar10);
      }
      *(undefined8 *)(*plVar7 + (longlong)iVar10 * 8) = local_60;
      lVar11 = lVar11 + 8;
    } while (lVar9 * 8 != lVar11);
  }
  plVar7 = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) < 0) {
    FUN_1494e2072(plVar7);
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(local_a8 + 0x120) + 0x30);
  if (lVar5 != 0) {
    lVar9 = *(longlong *)(*(longlong *)(local_a8 + 0x120) + 0x28);
    lVar11 = 0;
    do {
      uVar6 = FUN_14948712a(*(undefined8 *)(lVar9 + lVar11));
      local_60 = 0;
      FUN_14485c47a(&local_60,uVar6);
      iVar10 = (int)param_1[0x21];
      *(uint *)(param_1 + 0x21) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0x10c) < iVar10 + 1U) {
        FUN_1494e20a2(plVar7,iVar10);
      }
      *(undefined8 *)(*plVar7 + (longlong)iVar10 * 8) = local_60;
      lVar11 = lVar11 + 8;
    } while (lVar5 * 8 != lVar11);
  }
  plVar7 = (longlong *)FUN_1494e2127();
  lVar5 = local_a8;
  if (plVar7 == (longlong *)0x0) {
    local_90 = param_1 + 0x31;
    param_1[0x31] = 0x10;
    plVar13 = (longlong *)param_1[0x32];
    if (plVar13 == (longlong *)0x0) goto LAB_1494b137b;
    param_1[0x32] = 0;
LAB_1494b132b:
    local_90 = param_1 + 0x31;
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
    if (plVar7 == (longlong *)0x0) goto LAB_1494b137b;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_90 = param_1 + 0x31;
    param_1[0x31] = (longlong)(plVar7 + 2);
    plVar13 = (longlong *)param_1[0x32];
    if (plVar7 == plVar13) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    else {
      param_1[0x32] = (longlong)plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_1494b132b;
    }
  }
  LOCK();
  plVar13 = plVar7 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1494b137b:
  FUN_1494d1186(param_1 + 10,lVar5 + 0xb0);
  FUN_1494d0fcc(param_1 + 0x14,lVar5 + 0x60);
  local_98 = param_1 + 8;
  iVar10 = *(int *)((longlong)param_1 + 0x4c);
  FUN_145ee7802(param_1[8],(int)param_1[9]);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((iVar10 < 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) {
    FUN_1494e23a6(local_98);
  }
  local_88 = param_1 + 0x22;
  FUN_1449ad616();
  if (0 < *(int *)(lVar5 + 0x58)) {
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar5 + 0x50);
      puVar8 = (undefined8 *)FUN_1494bbf54(local_98);
      *puVar8 = *(undefined8 *)(lVar5 + 4 + lVar9 * 0x18);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar5 + lVar9 * 0x18);
      lVar11 = *(longlong *)(lVar5 + 0x10 + lVar9 * 0x18);
      if (DAT_14c950c29 == '\x01') {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(lVar5 + lVar9 * 0x18 + 0x10);
        }
      }
      plVar7 = local_a0;
      lVar5 = local_a8;
      puVar8[2] = lVar11;
      *(char *)(puVar8 + 5) = (char)lVar9;
      if ((int)uStack_50 == 0) {
        if (0 < *(int *)(*(longlong *)(local_a8 + 0x120) + 0x30)) {
          iVar10 = 0;
          do {
            local_70 = FUN_14479d2ce(plVar7);
            if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_70);
            }
            FUN_149457460(puVar8 + 3,puVar8[2],iVar10,&local_70);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(*(longlong *)(lVar5 + 0x120) + 0x30));
        }
      }
      else {
        FUN_14479d2ce(local_a0);
        if (0 < (int)uStack_50) {
          uVar12 = 0;
          do {
            local_68 = *(longlong *)(local_58 + uVar12 * 8);
            if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
            }
            FUN_149457460(puVar8 + 3,puVar8[2],uVar12 & 0xffffffff,&local_68);
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)(int)uStack_50);
        }
      }
      iVar10 = *(int *)(puVar8 + 4);
      if ((longlong)iVar10 != 0) {
        lVar5 = puVar8[3];
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar5 + lVar11);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c(lVar3);
LAB_1494b1547:
            uVar6 = FUN_1459f7382();
            plVar7 = (longlong *)FUN_144718840(lVar3,uVar6);
            if (plVar7 != (longlong *)0x0) {
              local_80 = *local_90;
              local_78 = param_1[0x32];
              if (local_78 != 0) {
                LOCK();
                *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar7 + 0x10))(plVar7,&local_80);
            }
            uVar6 = FUN_145923b66();
            plVar7 = (longlong *)FUN_144718840(lVar3,uVar6);
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
            }
          }
          else if (lVar3 != 0) goto LAB_1494b1547;
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar10 * 8 != lVar11);
      }
      if (*(int *)(puVar8 + 1) == 0) {
        FUN_144a13f80(local_88,&local_60,puVar8,0);
      }
      lVar9 = lVar9 + 1;
      lVar5 = local_a8;
    } while (lVar9 < *(int *)(local_a8 + 0x58));
  }
  lVar5 = FUN_14479d2ce(local_a0);
  if (lVar5 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (cVar4 != local_a9) {
      FUN_1448215fa(lVar5);
    }
    FUN_1448c6f34(lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b168c FUN_1494b168c body=244 status=ok
// SIG undefined FUN_1494b168c(void)

undefined8 FUN_1494b168c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bd1dd00;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bd1dc90;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1494b109e;
  FUN_1494dd8ce(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1782 FUN_1494b1782 body=244 status=ok
// SIG undefined FUN_1494b1782(void)

undefined8 FUN_1494b1782(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bd1dde0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bd1dd70;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1494b1878;
  FUN_1494ddc3c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1878 FUN_1494b1878 body=455 status=ok
// SIG undefined FUN_1494b1878(void)

void FUN_1494b1878(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [48];
  byte local_50 [4];
  longlong local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_144a6654a(param_2);
  if (lVar4 != 0) {
    uVar5 = FUN_1459f755a();
    plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x10))(plVar6,local_50),
       *(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
      uVar2 = (uint)((ulonglong)local_4c >> 0x10);
      uVar7 = (uint)local_4c & 0xffff;
      lVar4 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x90);
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               ((uint)(local_50[0] >> 2) +
                                (int)((ulonglong)local_4c >> 0x20) +
                                ((uint)local_4c << 0x10 | uVar7) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                + (uint)local_50[0] * 0x40 + (uVar7 >> 4) + 0x9e3779b9 ^
                               (uint)local_50[0])) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x50);
        do {
          lVar9 = (longlong)iVar8 * 0x80;
          lVar1 = lVar4 + lVar9;
          if ((*(byte *)(lVar4 + lVar9) == local_50[0]) &&
             (*(longlong *)(lVar4 + 4 + lVar9) == local_4c)) {
            if ((lVar1 + 0x10U & 0xffffffffffffffef) == 0) break;
            cVar3 = *(char *)(lVar1 + 0x40);
            if (cVar3 == '\x01') {
              if ((undefined8 *)(lVar1 + 0x48) == param_3) break;
              FUN_1401fa0f0((undefined8 *)(lVar1 + 0x48),*param_3,param_3[1]);
              cVar3 = *(char *)(lVar1 + 0x40);
            }
            if (cVar3 == '\x02') {
              (**(code **)(*plVar6 + 0x18))(plVar6,local_80);
              FUN_1494e82f0(param_3,local_50,local_80);
              FUN_149467a2c(lVar1 + 0x58,local_50);
              FUN_145b26c5e(local_50);
            }
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x78);
        } while (iVar8 != -1);
      }
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b1a40 FUN_1494b1a40 body=244 status=ok
// SIG undefined FUN_1494b1a40(void)

undefined8 FUN_1494b1a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bd1de50;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1494b1b36;
  FUN_140c6314c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1b3e FUN_1494b1b3e body=47 status=ok
// SIG undefined FUN_1494b1b3e(void)

void FUN_1494b1b3e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1494b1b74 FUN_1494b1b74 body=63 status=ok
// SIG undefined FUN_1494b1b74(void)

longlong * FUN_1494b1b74(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_2 + 8) < 2) {
    param_1 = param_1 + 1;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      uVar2 = FUN_1459f70be();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      return plVar3;
    }
    param_1 = (longlong *)0x0;
  }
  return param_1;
}



// FUNCTION 1494b1bb4 FUN_1494b1bb4 body=109 status=ok
// SIG undefined FUN_1494b1bb4(void)

undefined8 FUN_1494b1bb4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined1 local_28 [8];
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  uVar1 = FUN_1494ae168(param_1 + -0x30,&local_38,local_28);
  uVar2 = 0;
  if (local_20 == 0) {
    uVar2 = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1c22 FUN_1494b1c22 body=109 status=ok
// SIG undefined FUN_1494b1c22(void)

undefined8 FUN_1494b1c22(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined1 local_28 [8];
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  uVar1 = FUN_1494ae5a2(param_1 + -0x30,&local_38,local_28);
  uVar2 = 0;
  if (local_20 == 0) {
    uVar2 = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1c90 FUN_1494b1c90 body=135 status=ok
// SIG undefined FUN_1494b1c90(void)

undefined8 FUN_1494b1c90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  uVar2 = 0;
  uStack_18 = 0;
  local_30 = *param_2;
  local_28 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1494ae5a2(param_1 + -0x30,&local_30);
  if (lVar1 != 0) {
    local_48 = (undefined4)local_20;
    uStack_44 = local_20._4_4_;
    uStack_40 = uStack_18;
    uStack_3c = uStack_14;
    uVar2 = FUN_1494a0ce0(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1d18 FUN_1494b1d18 body=60 status=ok
// SIG undefined FUN_1494b1d18(void)

longlong FUN_1494b1d18(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*plVar1 + lVar2) + 0x18) == param_2) {
        return *(longlong *)(*plVar1 + lVar2);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)plVar1[1] * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1494b1d54 FUN_1494b1d54 body=380 status=ok
// SIG undefined FUN_1494b1d54(void)

longlong FUN_1494b1d54(longlong *param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((param_2 & 0xfffffffb) != 1) {
    uVar2 = FUN_141155906();
    if (param_2 == 0) {
      param_3 = DAT_14cc1c988;
      if (((int)param_1[0x1c] < 2) || (*(int *)(*(longlong *)param_1[0x1b] + 0x30) != 0))
      goto LAB_1494b1df3;
    }
    else if (param_2 == 2) {
      FUN_1400021e4(&local_50,local_60);
      cVar1 = FUN_1494ac222(local_60);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
LAB_1494b1eb5:
        FUN_149499cc8(local_60,param_1 + -7,param_3);
        param_3 = local_60[0];
        goto LAB_1494b1df3;
      }
    }
    else if (param_2 == 3) {
      FUN_1400021e4(&local_50,local_60);
      cVar1 = FUN_1494ac222(local_60);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        uVar2 = FUN_14585e15a();
        goto LAB_1494b1eb5;
      }
    }
    else {
LAB_1494b1df3:
      lVar3 = FUN_1494b1ed1(param_1 + -7,uVar2,param_3);
      *(uint *)(lVar3 + 0x30) = param_2;
      if ((*(char *)(param_4 + 1) != '\x01') ||
         (cVar1 = (**(code **)(*param_1 + 0x40))(param_1,lVar3,*param_4), cVar1 != '\0'))
      goto LAB_1494b1d88;
      FUN_1494acfa0(lVar3);
    }
  }
  lVar3 = 0;
LAB_1494b1d88:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1494b1ed1 FUN_1494b1ed1 body=196 status=ok
// SIG undefined FUN_1494b1ed1(void)

undefined8 FUN_1494b1ed1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b1f96 FUN_1494b1f96 body=276 status=ok
// SIG undefined FUN_1494b1f96(void)

ulonglong FUN_1494b1f96(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x20) != param_1 + -0x38)) {
switchD_1494b2033_caseD_1:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xe0);
    uVar2 = (ulonglong)uVar1;
    if ((int)uVar1 < 2) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(**(longlong **)(param_1 + 0xd8) + 0x30) == 0;
    }
    if (param_3 == 0xffffffff) {
      param_3 = uVar1;
    }
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 0:
      uVar2 = 0;
      if (bVar3 != false) goto LAB_1494b1fc8;
      break;
    case 1:
    case 4:
    case 5:
      goto switchD_1494b2033_caseD_1;
    case 2:
      uVar1 = FUN_1494b20ac();
      if ((int)param_3 < (int)uVar1) {
        uVar1 = param_3;
      }
      if ((int)uVar1 < (int)(uint)bVar3) {
        uVar1 = (uint)bVar3;
      }
      uVar2 = (ulonglong)uVar1;
    }
    local_40 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_1494b2106((undefined8 *)(param_1 + 0xd8),&local_40,uVar2);
    if (*(int *)(param_1 + 0xd0) != 3) {
      *(undefined4 *)(param_1 + 0xd0) = 2;
    }
    FUN_1494dc8de(param_1 + 0x100,0,param_2);
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_1494b1fc8:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b20ac FUN_1494b20ac body=90 status=ok
// SIG undefined FUN_1494b20ac(void)

ulonglong FUN_1494b20ac(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = FUN_1494ac3c6();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = (longlong)(int)plVar2[1] << 3;
      uVar4 = 0;
      do {
        if (*(longlong *)(*plVar2 + uVar4 * 8) == lVar1) {
          return uVar4 & 0xffffffff;
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1494b2106 FUN_1494b2106 body=129 status=ok
// SIG undefined FUN_1494b2106(void)

int FUN_1494b2106(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1459511a6(param_1,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*param_1 + lVar3 * 8 + 8),(void *)(*param_1 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + lVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1494b2188 FUN_1494b2188 body=240 status=ok
// SIG undefined FUN_1494b2188(void)

ulonglong FUN_1494b2188(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    iVar3 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == param_2) {
        if ((iVar3 != 0) && (*(int *)(param_2 + 0x30) != 1)) {
          if (iVar2 - iVar3 != 0) {
            memmove((void *)(lVar1 + (lVar5 >> 0x20) * 8),(void *)(lVar1 + (lVar5 >> 0x20) * 8 + 8),
                    (longlong)(iVar2 - iVar3) << 3);
            iVar2 = *(int *)(param_1 + 0xe0);
          }
          *(int *)(param_1 + 0xe0) = iVar2 + -1;
          FUN_1494de2dc(param_1 + 0xd8);
          if (*(int *)(param_1 + 0xd0) != 3) {
            *(undefined4 *)(param_1 + 0xd0) = 2;
          }
          FUN_1494dc8de(param_1 + 0x100,1,param_2);
          uVar4 = CONCAT71((int7)((ulonglong)(param_1 + 0x100) >> 8),1);
          if (param_3 != '\0') {
            FUN_1494acfa0(param_2);
          }
          goto LAB_1494b21e6;
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  uVar4 = 0;
LAB_1494b21e6:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1494b2278 FUN_1494b2278 body=408 status=ok
// SIG undefined FUN_1494b2278(void)

undefined8 FUN_1494b2278(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar2 != 0) {
    iVar6 = 1;
    lVar5 = 0;
    lVar8 = 0;
    do {
      if (*(longlong *)((longlong)*(longlong **)(param_1 + 0xd8) + lVar5) == param_2) {
        if ((iVar6 != 0) && (*(int *)(param_2 + 0x30) == 2)) {
          uVar3 = (uint)param_3;
          if (uVar3 == 0xffffffff) {
            uVar1 = FUN_1494b20ac(param_1 + -0x38);
          }
          else {
            uVar7 = 0;
            if (1 < iVar2) {
              uVar7 = (uint)(*(int *)(**(longlong **)(param_1 + 0xd8) + 0x30) == 0);
            }
            uVar1 = FUN_1494b20ac(param_1 + -0x38);
            if ((int)uVar3 < (int)uVar1) {
              uVar1 = uVar3;
            }
            if ((int)uVar1 < (int)uVar7) {
              uVar1 = uVar7;
            }
          }
          uVar4 = CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
          if (iVar6 - uVar1 != 1) {
            iVar2 = *(int *)(param_1 + 0xe0);
            if (iVar2 - iVar6 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0xd8) + (lVar8 >> 0x20) * 8),
                      (void *)(*(longlong *)(param_1 + 0xd8) + (lVar8 >> 0x20) * 8 + 8),
                      (longlong)(iVar2 - iVar6) << 3);
              iVar2 = *(int *)(param_1 + 0xe0);
            }
            *(int *)(param_1 + 0xe0) = iVar2 + -1;
            FUN_1494de2dc(param_1 + 0xd8);
            local_50 = param_2;
            if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_2);
            }
            FUN_1494b2106(param_1 + 0xd8,&local_50,uVar1);
            if (*(int *)(param_1 + 0xd0) != 3) {
              *(undefined4 *)(param_1 + 0xd0) = 2;
            }
            FUN_1494dc8de(param_1 + 0x100,2,param_2);
          }
          goto LAB_1494b22f3;
        }
        break;
      }
      lVar8 = lVar8 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 - lVar5 != 0);
  }
  uVar4 = 0;
LAB_1494b22f3:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b2412 FUN_1494b2412 body=333 status=ok
// SIG undefined FUN_1494b2412(void)

undefined4 FUN_1494b2412(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if ((int)param_2[6] == 3) {
    FUN_1400bbfc4(&local_78,param_2);
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = CONCAT44(uStack_6c,uStack_70);
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = CONCAT44(uStack_5c,uStack_60);
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  uVar1 = (**(code **)(*param_2 + 0x170))(param_2,puVar4,0,0x34);
  if ((char)uVar1 != '\0') {
    if ((int)param_2[6] == 3) {
      FUN_1446f470e(&local_78,L"OptimusCore",1);
      uVar2 = FUN_144a52528();
      plVar3 = (longlong *)FUN_14493e38c(uVar2,CONCAT44(uStack_74,local_78));
      FUN_1400bbfc4(&local_78,param_2);
      (**(code **)(*plVar3 + 0x48))(plVar3,&local_58,&local_78);
      if (CONCAT44(uStack_64,local_68) != 0) {
        FUN_1400020a8();
      }
    }
    if (*(int *)(param_1 + 0xd0) != 3) {
      *(undefined4 *)(param_1 + 0xd0) = 2;
    }
    FUN_1494dc8de(param_1 + 0x100,3,param_2);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b2560 FUN_1494b2560 body=202 status=ok
// SIG undefined FUN_1494b2560(void)

undefined8 FUN_1494b2560(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd8) + uVar3) == param_2) {
        if (((int)(~uVar3 >> 3) != 0) && (1 < *(uint *)(param_2 + 0x30))) {
          cVar1 = FUN_1494ac222(param_3);
          if (cVar1 != '\0') {
            uVar2 = FUN_1494ac0dc(param_1 + -0x38);
            if (*(int *)(param_3 + 1) == 0) {
              puVar4 = &DAT_149dfb77a;
            }
            else {
              puVar4 = (undefined2 *)*param_3;
            }
            FUN_1446f470e(local_28,puVar4,1);
            uVar2 = FUN_1494b262c(uVar2,&local_20,local_28);
            goto LAB_1494b25ae;
          }
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 8 != uVar3);
  }
  uVar2 = 0;
LAB_1494b25ae:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b262c FUN_1494b262c body=211 status=ok
// SIG undefined FUN_1494b262c(void)

undefined4 FUN_1494b262c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd1dec0;
  plVar1 = plVar4 + 2;
  FUN_1494606ca(plVar1,*param_2,*param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b2700 FUN_1494b2700 body=81 status=ok
// SIG undefined FUN_1494b2700(void)

ulonglong FUN_1494b2700(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = (longlong)(int)plVar1[1] << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*plVar1 + uVar3 * 8) == param_1) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 1494b2752 FUN_1494b2752 body=267 status=ok
// SIG undefined FUN_1494b2752(void)

void FUN_1494b2752(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))();
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      (**(code **)(**(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20) + 0x2a0))();
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b285e FUN_1494b285e body=267 status=ok
// SIG undefined FUN_1494b285e(void)

void FUN_1494b285e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      (**(code **)(**(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20) + 0x2a8))();
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b296a FUN_1494b296a body=1534 status=ok
// SIG undefined FUN_1494b296a(void)

void FUN_1494b296a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar4 != 0) {
    lVar12 = *(longlong *)(param_1 + 0xd0);
    lVar15 = 0;
    do {
      puVar6 = (undefined8 *)(lVar12 + lVar15);
      local_78 = (uint *)*puVar6;
      uStack_70 = puVar6[1];
      uVar5 = (((longlong)local_78 + 0x9ae16a3b2f90404fU << 0x27 |
               (longlong)local_78 + 0x9ae16a3b2f90404fU >> 0x19) + uStack_70) * -0x651e95c4d06fbf91;
      uVar7 = ((longlong)local_78 +
               (uStack_70 << 0x1b | uStack_70 >> 0x25) * -0x651e95c4d06fbf91 + -0x651e95c4d06fbfb1 ^
              uVar5) * -0x651e95c4d06fbf91;
      lVar8 = (uVar7 >> 0x2f ^ uVar5 ^ uVar7) * -0x651e95c4d06fbf91;
      iVar3 = FUN_1494de3a0((longlong *)(param_1 + 0x30),
                            ((uint)((ulonglong)lVar8 >> 0x2f) ^ (uint)lVar8) * 0x2f90406f,&local_78)
      ;
      if ((iVar3 != -1) &&
         (lVar8 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x30),
         puVar6 = (undefined8 *)(lVar8 + 0x10), puVar6 != (undefined8 *)0x0 && lVar8 != 0)) {
        (**(code **)(*(longlong *)*puVar6 + 0x2a0))();
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar15);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_140504644(param_1 + 0xd0,0);
  }
  local_c0 = (longlong *)(param_1 + 0xe0);
  lVar12 = param_1 + 0x118;
  lVar15 = 0;
  plVar16 = (longlong *)(param_1 + 0x30);
  local_d8 = 0;
  bVar14 = 0;
  local_b8 = plVar16;
  local_98 = lVar12;
LAB_1494b2aca:
  uVar1 = local_d8;
  bVar2 = (&DAT_14bd122d4)[lVar15];
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar8 = lVar12;
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & (uint)bVar2) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *local_c0 + (longlong)iVar4 * 0x60;
        if (*(byte *)(*local_c0 + (longlong)iVar4 * 0x60) == bVar2) {
          plVar9 = (longlong *)(lVar8 + 8);
          if (plVar9 != (longlong *)0x0 && lVar8 != 0) {
            local_78 = (uint *)0x0;
            uStack_70 = 0;
            local_d0 = plVar9;
            FUN_1494b2f6a(plVar9,&local_78);
            FUN_144958a06(local_78,uStack_70 & 0xffffffff);
            local_c8 = param_2;
            if (bVar2 != 1) {
              if ((longlong)(int)uStack_70 != 0) {
                local_a0 = local_78 + (int)uStack_70;
                local_b0 = lVar8 + 0x40;
                puVar13 = local_78;
                local_a8 = param_1;
                do {
                  if (*(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 0x3c)) {
                    lVar12 = *(longlong *)(lVar8 + 0x48);
                    if (*(longlong *)(lVar8 + 0x48) == 0) {
                      lVar12 = local_b0;
                    }
                    iVar4 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x50) - 1U & *puVar13) *
                                              4);
                    if (iVar4 != -1) {
                      do {
                        lVar12 = *local_d0 + (longlong)iVar4 * 0x20;
                        if (*(uint *)(*local_d0 + (longlong)iVar4 * 0x20) == *puVar13)
                        goto LAB_1494b2c20;
                        iVar4 = *(int *)(lVar12 + 0x18);
                      } while (iVar4 != -1);
                    }
                  }
                  lVar12 = 0;
LAB_1494b2c20:
                  iVar4 = *(int *)(lVar12 + 0x10);
                  if ((longlong)iVar4 != 0) {
                    local_90 = *(longlong *)(lVar12 + 8);
                    lVar12 = 0;
                    do {
                      plVar9 = (longlong *)(local_90 + lVar12);
                      local_88 = (undefined4)*plVar9;
                      uStack_84 = *(undefined4 *)((longlong)plVar9 + 4);
                      uStack_80 = (undefined4)plVar9[1];
                      uStack_7c = *(undefined4 *)((longlong)plVar9 + 0xc);
                      uVar5 = plVar9[1];
                      uVar7 = *plVar9 + 0x9ae16a3b2f90404f;
                      uVar7 = ((uVar7 << 0x27 | uVar7 >> 0x19) + uVar5) * -0x651e95c4d06fbf91;
                      uVar5 = ((uVar5 << 0x1b | uVar5 >> 0x25) * -0x651e95c4d06fbf91 + *plVar9 +
                               0x9ae16a3b2f90404f ^ uVar7) * -0x651e95c4d06fbf91;
                      lVar10 = (uVar5 >> 0x2f ^ uVar7 ^ uVar5) * -0x651e95c4d06fbf91;
                      iVar3 = FUN_1494de3a0(plVar16,((uint)((ulonglong)lVar10 >> 0x2f) ^
                                                    (uint)lVar10) * 0x2f90406f,&local_88);
                      uVar1 = local_d8;
                      if ((iVar3 != -1) &&
                         (lVar10 = (longlong)iVar3 * 0x20 + *plVar16,
                         plVar9 = (longlong *)(lVar10 + 0x10),
                         plVar9 != (longlong *)0x0 && lVar10 != 0)) {
                        plVar9 = (longlong *)*plVar9;
                        bVar11 = (byte)local_d8;
                        *(byte *)((longlong)plVar9 + 0x2c) = bVar11;
                        bVar2 = (**(code **)(*plVar9 + 0x2b8))(plVar9);
                        param_1 = local_a8;
                        plVar16 = local_b8;
                        local_d8 = CONCAT71((int7)((ulonglong)uVar1 >> 8),bVar11 | bVar2);
                        *(uint *)(plVar9 + 5) = (uint)bVar14;
                        bVar14 = bVar14 + (char)plVar9[9];
                        (**(code **)(*plVar9 + 0x2b0))(plVar9,local_c8);
                      }
                      lVar12 = lVar12 + 0x10;
                    } while ((longlong)iVar4 * 0x10 != lVar12);
                  }
                  puVar13 = puVar13 + 1;
                  lVar12 = local_98;
                } while (puVar13 != local_a0);
              }
              goto LAB_1494b2dbe;
            }
            if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x3c)) goto LAB_1494b2e73;
            lVar10 = lVar8 + 0x40;
            if (*(longlong *)(lVar8 + 0x48) != 0) {
              lVar10 = *(longlong *)(lVar8 + 0x48);
            }
            iVar4 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(lVar8 + 0x50) - 1U & local_78[(int)uStack_70 + -1])
                                      * 4);
            if (iVar4 == -1) goto LAB_1494b2e73;
            goto LAB_1494b2d94;
          }
          break;
        }
        iVar4 = *(int *)(lVar8 + 0x58);
      } while (iVar4 != -1);
    }
  }
  if (bVar2 == 1) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    bVar11 = (byte)local_d8;
    *(byte *)((longlong)plVar9 + 0x2c) = bVar11;
    bVar2 = (**(code **)(*plVar9 + 0x2b8))(plVar9);
    plVar16 = local_b8;
    local_d8 = CONCAT71((int7)((ulonglong)uVar1 >> 8),bVar11 | bVar2);
    *(uint *)(plVar9 + 5) = (uint)bVar14;
    bVar14 = bVar14 + (char)plVar9[9];
    (**(code **)(*plVar9 + 0x2b0))(plVar9,param_2);
  }
  goto LAB_1494b2b28;
  while (iVar4 = *(int *)(lVar8 + 0x18), iVar4 != -1) {
LAB_1494b2d94:
    lVar8 = *local_d0 + (longlong)iVar4 * 0x20;
    if (*(uint *)(*local_d0 + (longlong)iVar4 * 0x20) == local_78[(int)uStack_70 + -1])
    goto LAB_1494b2e75;
  }
LAB_1494b2e73:
  lVar8 = 0;
LAB_1494b2e75:
  plVar9 = (longlong *)(*(longlong *)(lVar8 + 8) + (longlong)(*(int *)(lVar8 + 0x10) + -1) * 0x10);
  local_88 = (undefined4)*plVar9;
  uStack_84 = *(undefined4 *)((longlong)plVar9 + 4);
  uStack_80 = (undefined4)plVar9[1];
  uStack_7c = *(undefined4 *)((longlong)plVar9 + 0xc);
  uVar5 = plVar9[1];
  uVar7 = *plVar9 + 0x9ae16a3b2f90404f;
  uVar7 = ((uVar7 << 0x27 | uVar7 >> 0x19) + uVar5) * -0x651e95c4d06fbf91;
  uVar5 = (*plVar9 + (uVar5 << 0x1b | uVar5 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar7) * -0x651e95c4d06fbf91;
  lVar8 = (uVar5 >> 0x2f ^ uVar7 ^ uVar5) * -0x651e95c4d06fbf91;
  iVar4 = FUN_1494de3a0(plVar16,((uint)((ulonglong)lVar8 >> 0x2f) ^ (uint)lVar8) * 0x2f90406f,
                        &local_88);
  uVar1 = local_d8;
  if ((iVar4 != -1) &&
     (lVar8 = (longlong)iVar4 * 0x20 + *plVar16, plVar9 = (longlong *)(lVar8 + 0x10),
     plVar9 != (longlong *)0x0 && lVar8 != 0)) {
    plVar9 = (longlong *)*plVar9;
    bVar11 = (byte)local_d8;
    *(byte *)((longlong)plVar9 + 0x2c) = bVar11;
    bVar2 = (**(code **)(*plVar9 + 0x2b8))(plVar9);
    local_d8 = CONCAT71((int7)((ulonglong)uVar1 >> 8),bVar11 | bVar2);
    *(uint *)(plVar9 + 5) = (uint)bVar14;
    bVar14 = bVar14 + (char)plVar9[9];
    (**(code **)(*plVar9 + 0x2b0))(plVar9,param_2);
  }
LAB_1494b2dbe:
  param_2 = local_c8;
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8(local_78);
    param_2 = local_c8;
  }
LAB_1494b2b28:
  plVar9 = local_c0;
  lVar15 = lVar15 + 1;
  if (lVar15 == 3) {
    if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
      FUN_1494de414(local_c0);
      FUN_1494de55c(plVar9);
    }
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_1494b2aca;
}



// FUNCTION 1494b2f6a FUN_1494b2f6a body=310 status=ok
// SIG undefined FUN_1494b2f6a(void)

void FUN_1494b2f6a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    FUN_14481578e(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 * 0x20 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b30ac FUN_1494b30ac body=530 status=ok
// SIG undefined FUN_1494b30ac(void)

void FUN_1494b30ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_60;
  int local_58;
  void *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x80);
  local_50 = (void *)0x0;
  FUN_14485c47a(&local_50);
  local_60 = local_50;
  iVar5 = FUN_1494de69c(plVar2,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar5 != -1) {
    if ((*plVar2 + (longlong)iVar5 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
      lVar8 = *plVar2 + (longlong)iVar5 * 0x20;
      local_60 = (void *)0x0;
      local_58 = *(int *)(lVar8 + 0x10);
      lVar11 = (longlong)local_58;
      pvVar4 = *(void **)(lVar8 + 8);
      if (lVar11 != 0) {
        FUN_1417246d8(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar11 << 4);
        pvVar4 = local_60;
        lVar8 = (longlong)local_58;
        if (lVar8 != 0) {
          plVar1 = (longlong *)(param_1 + 0x30);
          lVar11 = 0;
          local_88 = param_1;
          do {
            plVar3 = (longlong *)((longlong)pvVar4 + lVar11);
            local_78 = (undefined4)*plVar3;
            uStack_74 = *(undefined4 *)((longlong)plVar3 + 4);
            uStack_70 = (undefined4)plVar3[1];
            uStack_6c = *(undefined4 *)((longlong)plVar3 + 0xc);
            uVar9 = plVar3[1];
            uVar6 = *plVar3 + 0x9ae16a3b2f90404f;
            uVar6 = ((uVar6 << 0x27 | uVar6 >> 0x19) + uVar9) * -0x651e95c4d06fbf91;
            uVar9 = ((uVar9 << 0x1b | uVar9 >> 0x25) * -0x651e95c4d06fbf91 + *plVar3 +
                     0x9ae16a3b2f90404f ^ uVar6) * -0x651e95c4d06fbf91;
            lVar10 = (uVar9 >> 0x2f ^ uVar6 ^ uVar9) * -0x651e95c4d06fbf91;
            iVar5 = FUN_1494de3a0(plVar1,((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) *
                                         0x2f90406f,&local_78);
            if ((iVar5 != -1) &&
               (lVar10 = (longlong)iVar5 * 0x20 + *plVar1, puVar7 = (undefined8 *)(lVar10 + 0x10),
               puVar7 != (undefined8 *)0x0 && lVar10 != 0)) {
              (**(code **)(*(longlong *)*puVar7 + 0x2a8))();
            }
            FUN_1494de788(plVar1,&local_78);
            lVar11 = lVar11 + 0x10;
            param_1 = local_88;
          } while (lVar8 * 0x10 != lVar11);
        }
        if (local_60 != (void *)0x0) {
          FUN_1400020a8(local_60);
        }
      }
    }
  }
  local_80 = 0;
  FUN_14485c47a(&local_80,param_2);
  FUN_1494de8ec(plVar2,local_80);
  FUN_140457ffc(param_2 + 0x288,param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b32c0 FUN_1494b32c0 body=523 status=ok
// SIG undefined FUN_1494b32c0(void)

void FUN_1494b32c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = FUN_1447addd0(param_3,0x10);
  iVar6 = FUN_1494de3a0(param_1 + 0x30,uVar5,param_3);
  if (iVar6 == -1) {
    local_68 = (undefined4 *)FUN_1494b0e52(param_4,*(undefined8 *)(param_1 + 0x20),0);
    if ((local_68 != (undefined4 *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    local_50 = param_3;
    local_48 = &local_68;
    FUN_1494debe8(param_1 + 0x30,&local_78);
    iVar6 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar6 + 1U) {
      FUN_140c60952(param_1 + 0xd0,iVar6);
    }
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x10);
    *puVar2 = *(undefined4 *)param_3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar3;
    puVar2[3] = uVar4;
    plVar1 = (longlong *)(param_1 + 0x80);
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_2);
    local_50 = local_58;
    iVar6 = FUN_1494de69c(plVar1,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58);
    if (iVar6 != -1) {
      lVar7 = *plVar1 + (longlong)iVar6 * 0x20;
      if ((lVar7 != 0) &&
         (plVar8 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x20 + 8), plVar8 != (longlong *)0x0)) {
        iVar6 = *(int *)(lVar7 + 0x10);
        *(uint *)(lVar7 + 0x10) = iVar6 + 1U;
        if (*(uint *)(lVar7 + 0x14) < iVar6 + 1U) {
          FUN_140c60952(plVar8,iVar6);
        }
        uVar5 = *(undefined4 *)((longlong)param_3 + 4);
        uVar3 = *(undefined4 *)(param_3 + 1);
        uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
        puVar2 = (undefined4 *)(*plVar8 + (longlong)iVar6 * 0x10);
        *puVar2 = *(undefined4 *)param_3;
        puVar2[1] = uVar5;
        puVar2[2] = uVar3;
        puVar2[3] = uVar4;
        goto LAB_1494b330b;
      }
    }
    local_78 = *(undefined4 *)param_3;
    uStack_74 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_70 = *(undefined4 *)(param_3 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_68 = (undefined4 *)0x0;
    local_60 = 1;
    FUN_1417246d8(&local_68,1,0);
    *local_68 = local_78;
    local_68[1] = uStack_74;
    local_68[2] = uStack_70;
    local_68[3] = uStack_6c;
    local_80 = 0;
    FUN_14485c47a(&local_80,param_2);
    local_50 = &local_80;
    local_48 = &local_68;
    FUN_1494df036(plVar1,local_3c);
    if (local_68 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1494b34cc(param_2 + 0x288,&local_50,param_1);
  }
LAB_1494b330b:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b34cc FUN_1494b34cc body=244 status=ok
// SIG undefined FUN_1494b34cc(void)

undefined8 FUN_1494b34cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14bb76340;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bd1dee0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1494b30ac;
  FUN_1491c821c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b35c2 FUN_1494b35c2 body=84 status=ok
// SIG undefined FUN_1494b35c2(void)

undefined8 FUN_1494b35c2(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_1494de3a0((longlong *)(param_1 + 0x30),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x30),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1494b3616 FUN_1494b3616 body=230 status=ok
// SIG undefined FUN_1494b3616(void)

void FUN_1494b3616(longlong param_1,int *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_25 = param_3;
  local_24 = param_4;
  uVar4 = FUN_1494df734(param_1 + 0xe0,param_3,&local_25);
  plVar5 = (longlong *)FUN_1494dff52(uVar4,param_4,&local_24);
  iVar7 = (int)plVar5[1];
  if ((longlong)iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    piVar6 = (int *)*plVar5;
    lVar8 = (longlong)iVar7 << 4;
    do {
      if ((((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) && (piVar6[2] == param_2[2])) &&
         (piVar6[3] == param_2[3])) {
        if (piVar6 != (int *)0x0) {
          piVar6[0] = 0;
          piVar6[1] = 0;
          piVar6[2] = 0;
          piVar6[3] = 0;
          iVar7 = (int)plVar5[1];
        }
        break;
      }
      piVar6 = piVar6 + 4;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  *(uint *)(plVar5 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar7 + 1U) {
    FUN_140c60952(plVar5,iVar7);
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  piVar6 = (int *)(*plVar5 + (longlong)iVar7 * 0x10);
  *piVar6 = *param_2;
  piVar6[1] = iVar1;
  piVar6[2] = iVar2;
  piVar6[3] = iVar3;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b3708 FUN_1494b3708 body=163 status=ok
// SIG undefined FUN_1494b3708(void)

void FUN_1494b3708(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b37ac(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b37ac FUN_1494b37ac body=154 status=ok
// SIG undefined FUN_1494b37ac(void)

undefined8 FUN_1494b37ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) * 0x30;
    do {
      if (((int)plVar3[1] == 2) && (*plVar3 == param_2)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
        FUN_144a13f80(param_1 + 0x110,local_24,plVar3,0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
        uVar2 = 1;
        goto LAB_1494b37f1;
      }
      plVar3 = plVar3 + 6;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  uVar2 = 0;
LAB_1494b37f1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b384e FUN_1494b384e body=265 status=ok
// SIG undefined FUN_1494b384e(void)

void FUN_1494b384e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b3958(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b3958 FUN_1494b3958 body=628 status=ok
// SIG undefined FUN_1494b3958(void)

ulonglong FUN_1494b3958(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_144a5ab96();
  FUN_1457dd16c(&local_b0,*puVar5);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b39c3;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b39c3:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b3bda FUN_1494b3bda body=242 status=ok
// SIG undefined FUN_1494b3bda(void)

void FUN_1494b3bda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b3cce(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b3cce FUN_1494b3cce body=620 status=ok
// SIG undefined FUN_1494b3cce(void)

ulonglong FUN_1494b3cce(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a1 = param_3;
  puVar5 = (undefined8 *)FUN_144a5ab96();
  uVar2 = *puVar5;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_40,uVar2);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar12 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar13 = (longlong *)(lVar12 + 0x10);
          if (plVar13 != (longlong *)0x0 && lVar12 != 0) {
            local_80 = local_40;
            local_78 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_38 + 1) = (int)local_38[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_70,&local_80);
            if (*plVar13 == local_70[0]) {
              cVar4 = FUN_144a7afa6(lVar12 + 0x20,local_60);
            }
            else {
              cVar4 = '\0';
            }
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_40,0,0);
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 1) {
                cVar4 = *(char *)(lVar12 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = &local_a1;
                  local_88 = 1;
                  FUN_1494ab092(local_40,&local_90,lVar12 + 0x58);
                  cVar4 = *(char *)(lVar12 + 0x40);
                }
                if (cVar4 == '\x01') {
                  lVar12 = lVar12 + 0x48;
                  local_a0 = &local_a1;
                  local_98 = 1;
                  FUN_14945f130(local_70,plVar13);
                  FUN_1494e8230(lVar12,local_70,&local_a0);
                }
              }
              uVar11 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b3d2a;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar12 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar11 = 0;
LAB_1494b3d2a:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_38 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1494b3f42 FUN_1494b3f42 body=265 status=ok
// SIG undefined FUN_1494b3f42(void)

void FUN_1494b3f42(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b404c(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b404c FUN_1494b404c body=628 status=ok
// SIG undefined FUN_1494b404c(void)

ulonglong FUN_1494b404c(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_144a49fc8();
  FUN_1457dd16c(&local_b0,*puVar5);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b40b7;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b40b7:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b42c8 FUN_1494b42c8 body=240 status=ok
// SIG undefined FUN_1494b42c8(void)

void FUN_1494b42c8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b43ba(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b43ba FUN_1494b43ba body=1241 status=ok
// SIG undefined FUN_1494b43ba(void)

ulonglong FUN_1494b43ba(longlong param_1,longlong param_2,double param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double **ppdVar15;
  longlong *plVar16;
  undefined1 auStack_e8 [36];
  float local_c4;
  double local_c0;
  double *local_b8;
  undefined4 local_b0;
  double *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [2];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_3;
  puVar8 = (undefined8 *)FUN_144a49fc8();
  uVar3 = *puVar8;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_58,uVar3);
  uVar6 = (uint)param_2;
  iVar11 = (int)((ulonglong)param_2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_2 >> 0x10);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar12 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x90);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (((uVar6 & 0xffff) >> 4) +
                                iVar11 + uVar6 * 0x10000 + (uVar6 & 0xffff) +
                                (uVar7 << 0x13 | uVar7 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar10 != -1) {
      lVar12 = *(longlong *)(param_1 + 0x50);
      do {
        lVar13 = (longlong)iVar10 * 0x80;
        lVar2 = lVar12 + lVar13;
        if ((*(char *)(lVar12 + lVar13) == '\x02') &&
           (*(longlong *)(lVar12 + 4 + lVar13) == param_2)) {
          plVar16 = (longlong *)(lVar2 + 0x10);
          if (plVar16 != (longlong *)0x0 && lVar2 != 0) {
            local_98 = local_58;
            local_90 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_88,&local_98);
            if (*plVar16 == local_88[0]) {
              cVar5 = FUN_144a7afa6(lVar2 + 0x20,local_78);
            }
            else {
              cVar5 = '\0';
            }
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            if (cVar5 != '\0') {
              plVar9 = (longlong *)FUN_149499e14(local_58,0,0);
              if (*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6] == 8) {
                cVar5 = *(char *)(lVar2 + 0x40);
                if (cVar5 == '\x02') {
                  local_a8 = &local_c0;
                  local_a0 = 8;
                  FUN_1494ab092(local_58,&local_a8,lVar2 + 0x58);
                  cVar5 = *(char *)(lVar2 + 0x40);
                }
                if (cVar5 == '\x01') {
                  local_b8 = &local_c0;
                  local_b0 = 8;
                  FUN_14945f130(local_88,plVar16);
                  FUN_1494e8230(lVar2 + 0x48,local_88,&local_b8);
                }
              }
              bVar4 = true;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
              goto LAB_1494b441c;
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x78);
      } while (iVar10 != -1);
    }
  }
  bVar4 = false;
LAB_1494b441c:
  plVar16 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  uVar14 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
  if (!bVar4) {
    local_c4 = (float)local_c0;
    puVar8 = (undefined8 *)FUN_144a64e42();
    uVar3 = *puVar8;
    FUN_140f4f540();
    FUN_140f4f5a6(&DAT_14cc1c7d8,&local_58,uVar3);
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar12 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x90);
      }
      iVar11 = *(int *)(lVar12 + (ulonglong)
                                 (*(int *)(param_1 + 0x98) - 1U &
                                 (((uVar6 & 0xffff) >> 4) +
                                  iVar11 + uVar6 * 0x10000 + (uVar6 & 0xffff) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
      if (iVar11 != -1) {
        lVar12 = *(longlong *)(param_1 + 0x50);
        do {
          lVar13 = (longlong)iVar11 * 0x80;
          lVar2 = lVar12 + lVar13;
          if ((*(char *)(lVar12 + lVar13) == '\x02') &&
             (*(longlong *)(lVar12 + 4 + lVar13) == param_2)) {
            plVar16 = (longlong *)(lVar2 + 0x10);
            if (plVar16 != (longlong *)0x0 && lVar2 != 0) {
              local_98 = local_58;
              local_90 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
              }
              FUN_140e6511c(local_88,&local_98);
              if (*plVar16 == local_88[0]) {
                uVar7 = FUN_144a7afa6(lVar2 + 0x20,local_78);
                ppdVar15 = (double **)(ulonglong)uVar7;
              }
              else {
                ppdVar15 = (double **)0x0;
              }
              if (local_68 != 0) {
                FUN_1400020a8();
              }
              if ((char)ppdVar15 != '\0') {
                plVar9 = (longlong *)FUN_149499e14(local_58,0,0);
                if (*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6] == 4) {
                  cVar5 = *(char *)(lVar2 + 0x40);
                  if (cVar5 == '\x02') {
                    local_a8 = (double *)&local_c4;
                    local_a0 = 4;
                    FUN_1494ab092(local_58,&local_a8,lVar2 + 0x58);
                    cVar5 = *(char *)(lVar2 + 0x40);
                  }
                  if (cVar5 == '\x01') {
                    local_b8 = (double *)&local_c4;
                    ppdVar15 = &local_b8;
                    local_b0 = 4;
                    FUN_14945f130(local_88,plVar16);
                    FUN_1494e8230(lVar2 + 0x48,local_88,ppdVar15);
                  }
                }
                uVar14 = CONCAT71((int7)((ulonglong)ppdVar15 >> 8),1);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
                goto LAB_1494b4547;
              }
            }
            break;
          }
          iVar11 = *(int *)(lVar2 + 0x78);
        } while (iVar11 != -1);
      }
    }
    uVar14 = 0;
LAB_1494b4547:
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_50 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1494b489a FUN_1494b489a body=265 status=ok
// SIG undefined FUN_1494b489a(void)

void FUN_1494b489a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b49a4(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b49a4 FUN_1494b49a4 body=647 status=ok
// SIG undefined FUN_1494b49a4(void)

ulonglong FUN_1494b49a4(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd70a();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b4a22;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b4a22:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b4c32 FUN_1494b4c32 body=243 status=ok
// SIG undefined FUN_1494b4c32(void)

void FUN_1494b4c32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b4d26(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b4d26 FUN_1494b4d26 body=631 status=ok
// SIG undefined FUN_1494b4d26(void)

ulonglong FUN_1494b4d26(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd70a();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 8) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 8;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 8;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b4d94;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b4d94:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b4fa4 FUN_1494b4fa4 body=265 status=ok
// SIG undefined FUN_1494b4fa4(void)

void FUN_1494b4fa4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b50ae(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b50ae FUN_1494b50ae body=647 status=ok
// SIG undefined FUN_1494b50ae(void)

ulonglong FUN_1494b50ae(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd7ae();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b512c;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b512c:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b533c FUN_1494b533c body=243 status=ok
// SIG undefined FUN_1494b533c(void)

void FUN_1494b533c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_34);
  }
  puVar2 = local_34;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b5430(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b5430 FUN_1494b5430 body=631 status=ok
// SIG undefined FUN_1494b5430(void)

ulonglong FUN_1494b5430(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd7ae();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0xc) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0xc;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0xc;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b549e;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b549e:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b56ae FUN_1494b56ae body=265 status=ok
// SIG undefined FUN_1494b56ae(void)

void FUN_1494b56ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b57b8(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b57b8 FUN_1494b57b8 body=647 status=ok
// SIG undefined FUN_1494b57b8(void)

ulonglong FUN_1494b57b8(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd852();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b5836;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b5836:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b5a46 FUN_1494b5a46 body=243 status=ok
// SIG undefined FUN_1494b5a46(void)

void FUN_1494b5a46(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b5b3a(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b5b3a FUN_1494b5b3a body=631 status=ok
// SIG undefined FUN_1494b5b3a(void)

ulonglong FUN_1494b5b3a(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457dd852();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b5ba8;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b5ba8:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b5db8 FUN_1494b5db8 body=265 status=ok
// SIG undefined FUN_1494b5db8(void)

void FUN_1494b5db8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b5ec2(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b5ec2 FUN_1494b5ec2 body=628 status=ok
// SIG undefined FUN_1494b5ec2(void)

ulonglong FUN_1494b5ec2(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_144a7452c();
  FUN_1457dd16c(&local_b0,*puVar5);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b5f2d;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b5f2d:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b613e FUN_1494b613e body=238 status=ok
// SIG undefined FUN_1494b613e(void)

void FUN_1494b613e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b622e(param_1,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b622e FUN_1494b622e body=620 status=ok
// SIG undefined FUN_1494b622e(void)

ulonglong FUN_1494b622e(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a4 = param_3;
  puVar5 = (undefined8 *)FUN_144a7452c();
  uVar2 = *puVar5;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_40,uVar2);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar12 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar13 = (longlong *)(lVar12 + 0x10);
          if (plVar13 != (longlong *)0x0 && lVar12 != 0) {
            local_80 = local_40;
            local_78 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_38 + 1) = (int)local_38[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_70,&local_80);
            if (*plVar13 == local_70[0]) {
              cVar4 = FUN_144a7afa6(lVar12 + 0x20,local_60);
            }
            else {
              cVar4 = '\0';
            }
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_40,0,0);
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 4) {
                cVar4 = *(char *)(lVar12 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = &local_a4;
                  local_88 = 4;
                  FUN_1494ab092(local_40,&local_90,lVar12 + 0x58);
                  cVar4 = *(char *)(lVar12 + 0x40);
                }
                if (cVar4 == '\x01') {
                  lVar12 = lVar12 + 0x48;
                  local_a0 = &local_a4;
                  local_98 = 4;
                  FUN_14945f130(local_70,plVar13);
                  FUN_1494e8230(lVar12,local_70,&local_a0);
                }
              }
              uVar11 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b628a;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar12 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar11 = 0;
LAB_1494b628a:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_38 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1494b64a2 FUN_1494b64a2 body=265 status=ok
// SIG undefined FUN_1494b64a2(void)

void FUN_1494b64a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b65ac(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b65ac FUN_1494b65ac body=647 status=ok
// SIG undefined FUN_1494b65ac(void)

ulonglong FUN_1494b65ac(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_140bf8bc4();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b662a;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b662a:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b683a FUN_1494b683a body=243 status=ok
// SIG undefined FUN_1494b683a(void)

void FUN_1494b683a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b692e(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b692e FUN_1494b692e body=631 status=ok
// SIG undefined FUN_1494b692e(void)

ulonglong FUN_1494b692e(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_140bf8bc4();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b699c;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b699c:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b6bac FUN_1494b6bac body=265 status=ok
// SIG undefined FUN_1494b6bac(void)

void FUN_1494b6bac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b6cb6(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b6cb6 FUN_1494b6cb6 body=628 status=ok
// SIG undefined FUN_1494b6cb6(void)

ulonglong FUN_1494b6cb6(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)FUN_144a63fc8();
  FUN_1457dd16c(&local_b0,*puVar5);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b6d21;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b6d21:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b6f32 FUN_1494b6f32 body=252 status=ok
// SIG undefined FUN_1494b6f32(void)

void FUN_1494b6f32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b7030(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b7030 FUN_1494b7030 body=609 status=ok
// SIG undefined FUN_1494b7030(void)

ulonglong FUN_1494b7030(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar14;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)FUN_144a63fc8();
  uVar3 = *puVar6;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,uVar3);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    lVar10 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x90);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x98) - 1U &
                              ((uVar8 >> 4) +
                               (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar8 +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar9 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x50);
      do {
        lVar11 = (longlong)iVar9 * 0x80;
        lVar2 = lVar10 + lVar11;
        if ((*(char *)(lVar10 + lVar11) == '\x02') &&
           (*(longlong *)(lVar10 + 4 + lVar11) == param_2)) {
          plVar12 = (longlong *)(lVar2 + 0x10);
          if (plVar12 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar12 == local_78[0]) {
              cVar5 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar5 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar5 != '\0') {
              plVar7 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar14 = param_3;
              if (*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6] == 8) {
                cVar5 = *(char *)(lVar2 + 0x40);
                if (cVar5 == '\x02') {
                  local_90 = 8;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar5 = *(char *)(lVar2 + 0x40);
                }
                if (cVar5 == '\x01') {
                  local_a0 = 8;
                  plVar14 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar14,plVar12);
                  FUN_1494e8230(lVar2 + 0x48,plVar14,&local_a8);
                }
              }
              uVar13 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
              goto LAB_1494b708b;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x78);
      } while (iVar9 != -1);
    }
  }
  uVar13 = 0;
LAB_1494b708b:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_40 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1494b7298 FUN_1494b7298 body=265 status=ok
// SIG undefined FUN_1494b7298(void)

void FUN_1494b7298(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b73a2(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b73a2 FUN_1494b73a2 body=647 status=ok
// SIG undefined FUN_1494b73a2(void)

ulonglong FUN_1494b73a2(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1456aed04();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b7420;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b7420:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b7630 FUN_1494b7630 body=243 status=ok
// SIG undefined FUN_1494b7630(void)

void FUN_1494b7630(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b7724(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b7724 FUN_1494b7724 body=631 status=ok
// SIG undefined FUN_1494b7724(void)

ulonglong FUN_1494b7724(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1456aed04();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x20) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x20;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x20;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b7792;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b7792:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b79a2 FUN_1494b79a2 body=265 status=ok
// SIG undefined FUN_1494b79a2(void)

void FUN_1494b79a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b7aac(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b7aac FUN_1494b7aac body=647 status=ok
// SIG undefined FUN_1494b7aac(void)

ulonglong FUN_1494b7aac(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14016b782();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b7b2a;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b7b2a:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b7d3a FUN_1494b7d3a body=243 status=ok
// SIG undefined FUN_1494b7d3a(void)

void FUN_1494b7d3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b7e2e(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b7e2e FUN_1494b7e2e body=631 status=ok
// SIG undefined FUN_1494b7e2e(void)

ulonglong FUN_1494b7e2e(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14016b782();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x18) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x18;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x18;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b7e9c;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b7e9c:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b80ac FUN_1494b80ac body=265 status=ok
// SIG undefined FUN_1494b80ac(void)

void FUN_1494b80ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b81b6(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b81b6 FUN_1494b81b6 body=647 status=ok
// SIG undefined FUN_1494b81b6(void)

ulonglong FUN_1494b81b6(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_140ce9674();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b8234;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b8234:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b8444 FUN_1494b8444 body=322 status=ok
// SIG undefined FUN_1494b8444(void)

void FUN_1494b8444(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b8588(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b8588 FUN_1494b8588 body=631 status=ok
// SIG undefined FUN_1494b8588(void)

ulonglong FUN_1494b8588(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_140ce9674();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x60) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x60;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x60;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b85f6;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b85f6:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b8806 FUN_1494b8806 body=265 status=ok
// SIG undefined FUN_1494b8806(void)

void FUN_1494b8806(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b8910(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b8910 FUN_1494b8910 body=647 status=ok
// SIG undefined FUN_1494b8910(void)

ulonglong FUN_1494b8910(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457aacfc();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b898e;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b898e:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b8b9e FUN_1494b8b9e body=243 status=ok
// SIG undefined FUN_1494b8b9e(void)

void FUN_1494b8b9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b8c92(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b8c92 FUN_1494b8c92 body=631 status=ok
// SIG undefined FUN_1494b8c92(void)

ulonglong FUN_1494b8c92(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1457aacfc();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b8d00;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b8d00:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b8f10 FUN_1494b8f10 body=265 status=ok
// SIG undefined FUN_1494b8f10(void)

void FUN_1494b8f10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b901a(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b901a FUN_1494b901a body=647 status=ok
// SIG undefined FUN_1494b901a(void)

ulonglong FUN_1494b901a(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1456aec84();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b9098;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b9098:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b92a8 FUN_1494b92a8 body=272 status=ok
// SIG undefined FUN_1494b92a8(void)

void FUN_1494b92a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b93ba(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b93ba FUN_1494b93ba body=631 status=ok
// SIG undefined FUN_1494b93ba(void)

ulonglong FUN_1494b93ba(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_1456aec84();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x20) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x20;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x20;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b9428;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b9428:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b9638 FUN_1494b9638 body=265 status=ok
// SIG undefined FUN_1494b9638(void)

void FUN_1494b9638(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b9742(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b9742 FUN_1494b9742 body=647 status=ok
// SIG undefined FUN_1494b9742(void)

ulonglong FUN_1494b9742(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14068e11a();
  FUN_146739dc5(local_78,uVar5,1);
  FUN_1457dd16c(&local_b0,local_78[0]);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x10) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x10;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x10;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b97c0;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b97c0:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b99d0 FUN_1494b99d0 body=243 status=ok
// SIG undefined FUN_1494b99d0(void)

void FUN_1494b99d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494b9ac4(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494b9ac4 FUN_1494b9ac4 body=631 status=ok
// SIG undefined FUN_1494b9ac4(void)

ulonglong FUN_1494b9ac4(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plVar13;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14068e11a();
  FUN_146739dc5(&local_b0,uVar5,1);
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_48,local_b0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uVar7 >> 4) +
                              (int)((ulonglong)param_2 >> 0x20) + (uint)param_2 * 0x10000 + uVar7 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + 0x9e377a39 ^ 2)) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        lVar10 = (longlong)iVar8 * 0x80;
        lVar2 = lVar9 + lVar10;
        if ((*(char *)(lVar9 + lVar10) == '\x02') && (*(longlong *)(lVar9 + 4 + lVar10) == param_2))
        {
          plVar11 = (longlong *)(lVar2 + 0x10);
          if (plVar11 != (longlong *)0x0 && lVar2 != 0) {
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(local_78,&local_88);
            if (*plVar11 == local_78[0]) {
              cVar4 = FUN_144a7afa6(lVar2 + 0x20,local_68);
            }
            else {
              cVar4 = '\0';
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              plVar6 = (longlong *)FUN_149499e14(local_48,0,0);
              plVar13 = param_3;
              if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] == 0x18) {
                cVar4 = *(char *)(lVar2 + 0x40);
                if (cVar4 == '\x02') {
                  local_90 = 0x18;
                  local_98 = param_3;
                  FUN_1494ab092(local_48,&local_98,lVar2 + 0x58);
                  cVar4 = *(char *)(lVar2 + 0x40);
                }
                if (cVar4 == '\x01') {
                  local_a0 = 0x18;
                  plVar13 = local_78;
                  local_a8 = param_3;
                  FUN_14945f130(plVar13,plVar11);
                  FUN_1494e8230(lVar2 + 0x48,plVar13,&local_a8);
                }
              }
              uVar12 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
              goto LAB_1494b9b32;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x78);
      } while (iVar8 != -1);
    }
  }
  uVar12 = 0;
LAB_1494b9b32:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1494b9d40 FUN_1494b9d40 body=477 status=ok
// SIG undefined FUN_1494b9d40(void)

void FUN_1494b9d40(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong param_5,
                  longlong *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  int local_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (int)param_4[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_5 + 0xc) < iVar2) {
    FUN_1494e13da(param_5);
  }
  if (param_3 == 0) {
    local_84 = 1;
    param_3 = param_2;
  }
  else {
    local_84 = (int)param_2 / (int)param_3;
  }
  if (0 < (int)param_4[1]) {
    local_78 = param_1 + 0x188;
    local_80 = param_1 + 0x70;
    lVar10 = 0;
    do {
      uVar6 = *(int *)(*param_4 + lVar10 * 4) * local_84;
      local_49 = 0;
      local_58 = L"FOptimusPersistentBuffer";
      local_68 = 0x10109;
      uVar5 = DAT_14ca84e48;
      if (param_3 < DAT_14ca84e48) {
        uVar5 = param_3;
      }
      local_60 = 0;
      local_70 = uVar5 + (uVar5 == 0);
      if (DAT_14ca84e48 <= uVar6) {
        uVar6 = DAT_14ca84e48;
      }
      local_6c = uVar6 + (uVar6 == 0);
      local_98 = &local_49;
      uVar7 = FUN_144738de6(local_78,local_80,&local_58,&local_70);
      iVar2 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
        FUN_1471a5e98(param_6,iVar2);
      }
      *(undefined8 *)(*param_6 + (longlong)iVar2 * 8) = uVar7;
      plVar8 = (longlong *)FUN_1494ba002(param_5);
      *(uint *)(plVar8 + 1) = param_2;
      *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)(*param_4 + lVar10 * 4);
      plVar9 = (longlong *)FUN_1449609de(param_1,uVar7);
      puVar3 = (undefined8 *)*plVar9;
      puVar4 = (undefined8 *)*plVar8;
      if (puVar4 != puVar3) {
        *plVar8 = (longlong)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
        }
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494b9f20 FUN_1494b9f20 body=226 status=ok
// SIG undefined FUN_1494b9f20(void)

void FUN_1494b9f20(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((0 < (int)param_4[1]) && ((int)param_4[1] == (int)param_3[1])) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = *param_4;
      if (((*(longlong *)(lVar2 + lVar4) == 0) || (*(int *)(lVar2 + 8 + lVar4) != param_2)) ||
         (*(int *)(lVar2 + 0xc + lVar4) != *(int *)(*param_3 + lVar5 * 4))) {
        *(undefined4 *)(param_5 + 1) = 0;
        if (-1 < *(int *)((longlong)param_5 + 0xc)) {
          return;
        }
        FUN_149484272(param_5,0);
        return;
      }
      uVar3 = FUN_144735dd8(param_1,lVar2 + lVar4,0);
      iVar1 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
        FUN_1471a5e98(param_5,iVar1);
      }
      *(undefined8 *)(*param_5 + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (int)param_4[1]);
  }
  return;
}



// FUNCTION 1494ba002 FUN_1494ba002 body=59 status=ok
// SIG undefined FUN_1494ba002(void)

longlong FUN_1494ba002(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494e1440(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1494e1439(lVar2);
  return lVar2;
}



// FUNCTION 1494ba03e FUN_1494ba03e body=76 status=ok
// SIG undefined FUN_1494ba03e(void)

void FUN_1494ba03e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1494e14c6(param_1);
    FUN_1494e160e(param_1);
  }
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
    return;
  }
  FUN_1494e14c6(param_1 + 0x50);
  FUN_1494e160e(param_1 + 0x50);
  return;
}



// FUNCTION 1494ba08a FUN_1494ba08a body=170 status=ok
// SIG undefined FUN_1494ba08a(void)

undefined8 * FUN_1494ba08a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  cVar2 = FUN_140b127b8(&local_40,L"_GEN_VARIABLE",0xd,1);
  if (cVar2 != '\0') {
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_28,iVar1,local_40,1);
    param_2 = local_28;
  }
  *param_1 = param_2;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ba136 FUN_1494ba136 body=371 status=ok
// SIG undefined FUN_1494ba136(void)

undefined8 * FUN_1494ba136(undefined8 *param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58 [3];
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (1 < *(int *)(param_3 + 8))) {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_1401031ac(param_2,0,local_58);
    FUN_144a882a8(&local_38,local_58,&DAT_149e0635c);
    FUN_144a7dea0(local_58 + 2,&local_38,param_3);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_38 = local_58[2];
    local_30 = local_40 + -1;
    if (local_40 == 0) {
      local_30 = 0;
    }
    FUN_14475bf92(&local_78);
    _Src = local_68;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_78._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_70._4_4_;
    param_1[3] = 0;
    lVar1 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 4) = (int)uStack_60;
    if (lVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,uStack_60 & 0xffffffff,0);
      memcpy((void *)param_1[3],_Src,lVar1 * 2);
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8(local_68);
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494ba2aa FUN_1494ba2aa body=105 status=ok
// SIG undefined FUN_1494ba2aa(void)

undefined8 FUN_1494ba2aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1 + 8,local_30);
  FUN_1494ba136(param_2,param_3,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ba314 FUN_1494ba314 body=109 status=ok
// SIG undefined FUN_1494ba314(void)

void FUN_1494ba314(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1494e1762(param_1,iVar1);
    }
    FUN_1494e174e((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1494e17e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494ba382 FUN_1494ba382 body=6416 status=ok
// SIG undefined FUN_1494ba382(void)

void FUN_1494ba382(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong **ppuVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_6a8 [32];
  ulonglong *local_688;
  ulonglong **local_680;
  ulonglong *local_678;
  ulonglong local_670;
  ulonglong *local_668;
  longlong local_660;
  ulonglong local_658;
  ulonglong *local_650;
  longlong local_648;
  longlong *local_640;
  longlong *local_638;
  longlong *local_630;
  ulonglong *local_628;
  ulonglong *local_620;
  undefined1 local_618 [8];
  ulonglong *local_610;
  int local_608;
  undefined1 local_600 [8];
  longlong local_5f8;
  ulonglong local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5bc;
  undefined4 local_5b4;
  longlong local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_578;
  undefined4 local_570;
  undefined8 local_56c;
  undefined4 local_564;
  longlong local_558;
  undefined4 local_550;
  longlong local_548;
  undefined8 uStack_540;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_51c;
  int local_514;
  undefined1 local_510 [8];
  undefined1 *local_508;
  int local_500;
  longlong local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  int local_4c4;
  undefined1 local_4c0 [8];
  undefined1 *local_4b8;
  int local_4b0;
  ulonglong *local_4a8;
  ulonglong *puStack_4a0;
  undefined4 local_498 [2];
  longlong local_490;
  undefined1 local_1a8 [8];
  int local_1a0;
  int local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  int local_150;
  int local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  undefined8 *puStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  if (param_3 == 0) {
    local_660 = 0;
  }
  else {
    local_660 = *(longlong *)(param_3 + 0xa8);
  }
  local_4d8 = 0;
  local_4d0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_4b8 = (undefined1 *)0x0;
  local_4b0 = 0;
  local_670 = param_3;
  local_640 = param_4;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    uVar19 = *(ulonglong *)(param_1 + 0x30);
    lVar24 = (longlong)*(int *)(param_1 + 0x38) << 4;
    do {
      FUN_1494ba2aa(uVar19,&local_4a8,local_660);
      local_108 = FUN_1494bbc94(&local_4a8);
      local_b8 = uVar19;
      puStack_b0 = &local_108;
      FUN_1494e1884(&local_4f8,&local_158);
      if (local_490 != 0) {
        FUN_1400020a8();
      }
      uVar19 = uVar19 + 0x10;
      lVar24 = lVar24 + -0x10;
    } while (lVar24 != 0);
  }
  plVar11 = local_640;
  local_528 = 0;
  local_520 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_51c = 0xffffffff00000080;
  local_514 = 0;
  local_508 = (undefined1 *)0x0;
  local_500 = 0;
  lVar24 = *(longlong *)(param_2 + 0x120);
  FUN_1494bbd5a(local_640,*(undefined4 *)(lVar24 + 0x30));
  if ((longlong)*(int *)(lVar24 + 0x30) == 0) {
LAB_1494ba51d:
    local_500 = 0;
    if (local_508 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1403cd038(&local_548);
    local_4b0 = 0;
    if (local_4b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1494d1796(&local_4f8);
    if ((local_60 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar5 = *(longlong **)(lVar24 + 0x28);
  local_638 = plVar5 + *(int *)(lVar24 + 0x30);
  uVar19 = local_670;
LAB_1494ba5bd:
  lVar24 = *plVar5;
  lVar6 = *(longlong *)(lVar24 + 0x28);
  local_5f0 = 0;
  local_630 = plVar5;
  uVar3 = uVar19;
  if (*(char *)(lVar24 + 0x48) != '\x01') {
    local_648 = lVar24;
    if ((int)uStack_4f0 != local_4c4) {
      uVar18 = (uint)((ulonglong)lVar6 >> 0x10);
      uVar13 = (uint)lVar6 & 0xffff;
      puVar12 = local_4b8;
      if (local_4b8 == (undefined1 *)0x0) {
        puVar12 = local_4c0;
      }
      iVar17 = *(int *)(puVar12 +
                       (ulonglong)
                       (local_4b0 - 1U &
                       (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar13) +
                       (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar13 >> 4)) * 4);
      for (iVar28 = iVar17; iVar28 != -1;
          iVar28 = *(int *)(local_4f8 + (longlong)iVar28 * 0x18 + 0x10)) {
        if (*(longlong *)(local_4f8 + (longlong)iVar28 * 0x18) == lVar6) goto LAB_1494ba706;
      }
    }
    goto LAB_1494ba6ad;
  }
  goto LAB_1494ba5e4;
  while (iVar17 = (int)plVar5[2], iVar17 != -1) {
LAB_1494ba706:
    plVar5 = (longlong *)(local_4f8 + (longlong)iVar17 * 0x18);
    if (*plVar5 == lVar6) goto LAB_1494ba720;
  }
  plVar5 = (longlong *)0x0;
LAB_1494ba720:
  uVar3 = plVar5[1];
  if (uVar3 != 0) {
    plVar5 = (longlong *)FUN_14948712a(lVar24);
    (**(code **)(*plVar5 + 0x2b0))(plVar5,&local_5f8);
    lVar24 = local_5f8;
    if ((local_5f8 == 0) || (lVar6 = FUN_144a78d6a(), lVar6 == 0)) {
      lVar7 = 0;
    }
    else if ((*(int *)(lVar24 + 0x38) < *(int *)(lVar6 + 0x38)) ||
            (lVar7 = local_5f8,
            *(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
      lVar7 = 0;
    }
    uVar19 = local_670;
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(uVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      local_5f0 = uVar3;
    }
  }
LAB_1494ba6ad:
  uVar10 = local_5f0;
  if (local_5f0 == 0 && local_660 != 0) {
    if (*(int *)(local_648 + 0x40) == 0) {
      uVar10 = 0;
    }
    else {
      local_578 = 0;
      local_570 = 0;
      local_598 = 0;
      uStack_590 = 0;
      local_56c = 0xffffffff00000080;
      local_564 = 0;
      local_558 = 0;
      local_550 = 0;
      if ((longlong)*(int *)(local_648 + 0x40) != 0) {
        puVar20 = *(undefined8 **)(local_648 + 0x38);
        puVar1 = puVar20 + *(int *)(local_648 + 0x40);
        do {
          uVar2 = *puVar20;
          plVar11 = (longlong *)FUN_14948712a(local_648);
          (**(code **)(*plVar11 + 0x2b0))(plVar11,local_600);
          FUN_1478ba464(local_660,&local_4a8,local_600,uVar2);
          if ((longlong)(int)puStack_4a0 != 0) {
            puVar8 = local_4a8 + (int)puStack_4a0;
            puVar15 = local_4a8;
            do {
              local_b8 = *puVar15;
              if ((int)uStack_540 != local_514) {
                uVar18 = ((uint)(local_b8 >> 0x14) & 0xffff ^ (uint)(local_b8 >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                puVar12 = local_508;
                if (local_508 == (undefined1 *)0x0) {
                  puVar12 = local_510;
                }
                for (iVar17 = *(int *)(puVar12 +
                                      (ulonglong)(local_500 - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
                    iVar17 != -1; iVar17 = *(int *)((longlong)iVar17 * 0x10 + local_548 + 8)) {
                  if (*(ulonglong *)(local_548 + (longlong)iVar17 * 0x10) == local_b8)
                  goto LAB_1494ba8ff;
                }
              }
              FUN_1479cbdfe(&local_598,&local_108,&local_b8,0);
LAB_1494ba8ff:
              puVar15 = puVar15 + 1;
            } while (puVar15 != puVar8);
          }
          if (local_4a8 != (ulonglong *)0x0) {
            FUN_1400020a8(local_4a8);
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar1);
      }
      lVar24 = local_648;
      FUN_1494bbd86(&local_598,&local_610);
      local_4a8 = *(ulonglong **)(lVar24 + 0x38);
      local_5c8 = 0;
      local_5c0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5bc = 0xffffffff00000080;
      local_5b4 = 0;
      local_5a8 = 0;
      local_5a0 = 0;
      puStack_4a0 = (ulonglong *)CONCAT44(puStack_4a0._4_4_,*(undefined4 *)(lVar24 + 0x40));
      FUN_140ce09a0(&local_5e8);
      iVar17 = local_608;
      puVar8 = local_610;
      lVar24 = (longlong)local_608;
      if (1 < lVar24) {
        memset(local_498,0,0x2f0);
        local_4a8 = puVar8;
        puStack_4a0 = puVar8 + lVar24 + -1;
        fVar31 = logf((float)iVar17);
        local_498[0] = (int)(longlong)(fVar31 + fVar31);
        ppuVar9 = &local_4a8;
        do {
          puVar15 = *ppuVar9;
          puVar8 = ppuVar9[1];
          iVar17 = (int)((ulonglong)((longlong)puVar8 - (longlong)puVar15) >> 3);
          uVar19 = (ulonglong)(iVar17 + 1);
          local_658 = CONCAT44(local_658._4_4_,*(int *)(ppuVar9 + 2));
          puVar14 = puVar15;
          puVar26 = puVar8;
          local_680 = ppuVar9;
          if (*(int *)(ppuVar9 + 2) != 0) {
LAB_1494baa53:
            local_668 = puVar15;
            if (8 < (int)(uint)uVar19) {
              uVar18 = (uint)uVar19 >> 1;
              uVar19 = puVar15[uVar18];
              puVar15[uVar18] = *puVar15;
              *puVar15 = uVar19;
              puVar21 = puVar8 + 1;
              puVar25 = puVar15;
              local_678 = puVar8;
              local_628 = puVar14;
              local_620 = puVar26;
              do {
                puVar8 = puVar25 + 1;
                puVar14 = puVar8;
                do {
                  puVar25 = puVar14;
                  local_688 = puVar8;
                  if (local_678 < puVar25) break;
                  uVar19 = *puVar25;
                  local_108 = *(undefined8 *)(*puVar15 + 0x70);
                  local_98 = 0;
                  local_90 = 0;
                  local_b8 = 0;
                  puStack_b0 = (undefined8 *)0x0;
                  local_8c = 0xffffffff00000080;
                  local_84 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(*puVar15 + 0x78));
                  FUN_140ce09a0(&local_b8,&local_108);
                  local_158 = *(undefined8 *)(uVar19 + 0x70);
                  local_150 = *(int *)(uVar19 + 0x78);
                  local_e8 = 0;
                  local_e0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_dc = 0xffffffff00000080;
                  local_d4 = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  FUN_140ce09a0(&local_108,&local_158);
                  FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                  iVar27 = local_124;
                  iVar22 = local_150;
                  FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                  iVar28 = local_174;
                  iVar17 = local_1a0;
                  local_160 = 0;
                  if (local_168 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(local_1a8);
                  local_110 = 0;
                  if (local_118 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_158);
                  local_c0 = 0;
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_108);
                  local_70 = 0;
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_b8);
                  puVar8 = local_688 + 1;
                  puVar14 = puVar25 + 1;
                  puVar15 = local_668;
                } while (iVar17 - iVar28 <= iVar22 - iVar27);
                puVar14 = puVar21 + -2;
                local_650 = puVar25;
                do {
                  puVar8 = puVar21;
                  puVar26 = puVar14;
                  puVar21 = puVar8 + -1;
                  if (puVar21 <= puVar15) break;
                  uVar19 = *puVar15;
                  local_108 = *(undefined8 *)(*puVar21 + 0x70);
                  local_98 = 0;
                  local_90 = 0;
                  local_b8 = 0;
                  puStack_b0 = (undefined8 *)0x0;
                  local_8c = 0xffffffff00000080;
                  local_84 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(*puVar21 + 0x78));
                  FUN_140ce09a0(&local_b8,&local_108);
                  local_158 = *(undefined8 *)(uVar19 + 0x70);
                  local_150 = *(int *)(uVar19 + 0x78);
                  local_e8 = 0;
                  local_e0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_dc = 0xffffffff00000080;
                  local_d4 = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  FUN_140ce09a0(&local_108,&local_158);
                  FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                  iVar27 = local_124;
                  iVar22 = local_150;
                  FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                  iVar28 = local_174;
                  iVar17 = local_1a0;
                  local_160 = 0;
                  if (local_168 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(local_1a8);
                  local_110 = 0;
                  if (local_118 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_158);
                  puVar25 = local_650;
                  local_c0 = 0;
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_108);
                  local_70 = 0;
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_b8);
                  puVar14 = puVar26 + -1;
                  puVar15 = local_668;
                } while (iVar17 - iVar28 <= iVar22 - iVar27);
                if (puVar21 < puVar25) goto LAB_1494baea8;
                uVar19 = *puVar25;
                *puVar25 = *puVar21;
                *puVar21 = uVar19;
              } while( true );
            }
            ppuVar9 = local_680;
            if (puVar15 < puVar8) {
              local_688 = puVar15 + 1;
              do {
                puVar14 = puVar15;
                puVar26 = local_688;
                if (local_688 <= puVar8) {
                  do {
                    local_678 = puVar8;
                    uVar19 = *puVar26;
                    local_108 = *(undefined8 *)(*puVar14 + 0x70);
                    local_98 = 0;
                    local_90 = 0;
                    local_b8 = 0;
                    puStack_b0 = (undefined8 *)0x0;
                    local_8c = 0xffffffff00000080;
                    local_84 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(*puVar14 + 0x78));
                    FUN_140ce09a0(&local_b8,&local_108);
                    local_158 = *(undefined8 *)(uVar19 + 0x70);
                    local_150 = *(int *)(uVar19 + 0x78);
                    local_e8 = 0;
                    local_e0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_dc = 0xffffffff00000080;
                    local_d4 = 0;
                    local_c8 = 0;
                    local_c0 = 0;
                    FUN_140ce09a0(&local_108,&local_158);
                    FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                    iVar27 = local_124;
                    iVar22 = local_150;
                    FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                    iVar28 = local_174;
                    iVar17 = local_1a0;
                    local_160 = 0;
                    if (local_168 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(local_1a8);
                    local_110 = 0;
                    if (local_118 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_158);
                    local_c0 = 0;
                    if (local_c8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_108);
                    local_70 = 0;
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_b8);
                    if (iVar22 - iVar27 < iVar17 - iVar28) {
                      puVar14 = puVar26;
                    }
                    puVar26 = puVar26 + 1;
                    puVar15 = local_668;
                    puVar8 = local_678;
                  } while (puVar26 <= local_678);
                }
                uVar19 = *puVar14;
                *puVar14 = *puVar8;
                *puVar8 = uVar19;
                puVar8 = puVar8 + -1;
                ppuVar9 = local_680;
              } while (puVar15 < puVar8);
            }
            goto LAB_1494bba78;
          }
LAB_1494baf75:
          ppuVar9 = local_680;
          if ((int)uVar19 != 0) {
            uVar18 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
            local_658 = uVar19;
            local_650 = puVar15;
            do {
              puVar14 = (ulonglong *)(ulonglong)uVar18;
              uVar16 = uVar18 * 2 + 1;
              uVar13 = uVar18;
              puVar8 = puVar14;
              if ((int)uVar16 < (int)uVar19) {
                do {
                  local_678 = puVar8;
                  uVar18 = uVar13 * 2 + 2;
                  uVar13 = uVar16;
                  if ((int)uVar18 < (int)uVar19) {
                    uVar19 = puVar15[(int)uVar16];
                    local_108 = *(undefined8 *)(puVar15[(int)uVar18] + 0x70);
                    local_98 = 0;
                    local_90 = 0;
                    local_b8 = 0;
                    puStack_b0 = (undefined8 *)0x0;
                    local_8c = 0xffffffff00000080;
                    local_84 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_100 = CONCAT44(uStack_100._4_4_,
                                          *(undefined4 *)(puVar15[(int)uVar18] + 0x78));
                    FUN_140ce09a0(&local_b8,&local_108);
                    local_158 = *(undefined8 *)(uVar19 + 0x70);
                    local_150 = *(int *)(uVar19 + 0x78);
                    local_e8 = 0;
                    local_e0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_dc = 0xffffffff00000080;
                    local_d4 = 0;
                    local_c8 = 0;
                    local_c0 = 0;
                    FUN_140ce09a0(&local_108,&local_158);
                    FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                    iVar22 = local_150;
                    local_688 = (ulonglong *)CONCAT44(local_688._4_4_,local_124);
                    FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                    iVar28 = local_174;
                    iVar17 = local_1a0;
                    local_160 = 0;
                    if (local_168 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(local_1a8);
                    local_110 = 0;
                    if (local_118 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_158);
                    local_c0 = 0;
                    if (local_c8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_108);
                    local_70 = 0;
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                    iVar22 = iVar22 - (int)local_688;
                    FUN_14472eaf0(&local_b8);
                    puVar15 = local_650;
                    uVar13 = uVar18;
                    if (iVar22 < iVar17 - iVar28) {
                      uVar13 = uVar16;
                    }
                  }
                  iVar27 = (int)puVar14;
                  local_668 = (ulonglong *)CONCAT44(local_668._4_4_,uVar13);
                  uVar19 = puVar15[(int)uVar13];
                  local_108 = *(undefined8 *)(puVar15[iVar27] + 0x70);
                  local_98 = 0;
                  local_90 = 0;
                  local_b8 = 0;
                  puStack_b0 = (undefined8 *)0x0;
                  local_8c = 0xffffffff00000080;
                  local_84 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(puVar15[iVar27] + 0x78));
                  FUN_140ce09a0(&local_b8,&local_108);
                  local_158 = *(undefined8 *)(uVar19 + 0x70);
                  local_150 = *(int *)(uVar19 + 0x78);
                  local_e8 = 0;
                  local_e0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_dc = 0xffffffff00000080;
                  local_d4 = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  FUN_140ce09a0(&local_108,&local_158);
                  FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                  iVar22 = local_150;
                  local_688 = (ulonglong *)CONCAT44(local_688._4_4_,local_124);
                  FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                  iVar28 = local_174;
                  iVar17 = local_1a0;
                  local_160 = 0;
                  if (local_168 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(local_1a8);
                  local_110 = 0;
                  if (local_118 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_158);
                  puVar15 = local_650;
                  uVar19 = local_658;
                  local_c0 = 0;
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14472eaf0(&local_108);
                  local_70 = 0;
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  iVar22 = iVar22 - (int)local_688;
                  FUN_14472eaf0(&local_b8);
                  uVar18 = (uint)local_678;
                  if (iVar17 - iVar28 <= iVar22) break;
                  uVar3 = puVar15[iVar27];
                  puVar15[iVar27] = puVar15[(int)uVar13];
                  puVar15[(int)uVar13] = uVar3;
                  uVar16 = uVar13 * 2 + 1;
                  puVar14 = (ulonglong *)((ulonglong)local_668 & 0xffffffff);
                  puVar8 = local_678;
                } while ((int)uVar16 < (int)uVar19);
              }
              bVar30 = uVar18 != 0;
              uVar18 = uVar18 - 1;
            } while (bVar30);
            ppuVar9 = local_680;
            if (1 < (int)uVar19) {
              puVar8 = (ulonglong *)(uVar19 & 0xffffffff);
              uVar3 = *puVar15;
              *puVar15 = puVar15[(longlong)puVar8 + -1];
              puVar15[(longlong)puVar8 + -1] = uVar3;
              if ((int)uVar19 != 2) {
                do {
                  local_678 = (ulonglong *)((longlong)puVar8 + -1);
                  iVar17 = 0;
                  iVar22 = 1;
                  iVar28 = 0;
                  do {
                    iVar17 = iVar17 + 2;
                    iVar27 = iVar22;
                    if ((longlong)iVar17 < (longlong)local_678) {
                      uVar19 = puVar15[iVar22];
                      local_108 = *(undefined8 *)(puVar15[iVar17] + 0x70);
                      local_98 = 0;
                      local_90 = 0;
                      local_b8 = 0;
                      puStack_b0 = (undefined8 *)0x0;
                      local_8c = 0xffffffff00000080;
                      local_84 = 0;
                      local_78 = 0;
                      local_70 = 0;
                      uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(puVar15[iVar17] + 0x78)
                                           );
                      FUN_140ce09a0(&local_b8,&local_108);
                      local_158 = *(undefined8 *)(uVar19 + 0x70);
                      local_150 = *(int *)(uVar19 + 0x78);
                      local_e8 = 0;
                      local_e0 = 0;
                      local_108 = 0;
                      uStack_100 = 0;
                      local_dc = 0xffffffff00000080;
                      local_d4 = 0;
                      local_c8 = 0;
                      local_c0 = 0;
                      FUN_140ce09a0(&local_108,&local_158);
                      FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                      iVar23 = local_150;
                      local_688 = (ulonglong *)CONCAT44(local_688._4_4_,local_124);
                      FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                      iVar4 = local_174;
                      iVar29 = local_1a0;
                      local_160 = 0;
                      if (local_168 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_14472eaf0(local_1a8);
                      local_110 = 0;
                      if (local_118 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_14472eaf0(&local_158);
                      local_c0 = 0;
                      if (local_c8 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_14472eaf0(&local_108);
                      local_70 = 0;
                      if (local_78 != 0) {
                        FUN_1400020a8();
                      }
                      iVar23 = iVar23 - (int)local_688;
                      FUN_14472eaf0(&local_b8);
                      puVar15 = local_650;
                      iVar27 = iVar17;
                      if (iVar23 < iVar29 - iVar4) {
                        iVar27 = iVar22;
                      }
                    }
                    local_668 = (ulonglong *)CONCAT44(local_668._4_4_,iVar27);
                    uVar19 = puVar15[iVar27];
                    local_108 = *(undefined8 *)(puVar15[iVar28] + 0x70);
                    local_98 = 0;
                    local_90 = 0;
                    local_b8 = 0;
                    puStack_b0 = (undefined8 *)0x0;
                    local_8c = 0xffffffff00000080;
                    local_84 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(puVar15[iVar28] + 0x78));
                    FUN_140ce09a0(&local_b8,&local_108);
                    local_158 = *(undefined8 *)(uVar19 + 0x70);
                    local_150 = *(int *)(uVar19 + 0x78);
                    local_e8 = 0;
                    local_e0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_dc = 0xffffffff00000080;
                    local_d4 = 0;
                    local_c8 = 0;
                    local_c0 = 0;
                    FUN_140ce09a0(&local_108,&local_158);
                    FUN_1494e1d86(&local_5e8,&local_158,&local_b8);
                    iVar29 = local_150;
                    local_688 = (ulonglong *)CONCAT44(local_688._4_4_,local_124);
                    FUN_1494e1d86(&local_5e8,local_1a8,&local_108);
                    iVar22 = local_174;
                    iVar17 = local_1a0;
                    local_160 = 0;
                    if (local_168 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(local_1a8);
                    local_110 = 0;
                    if (local_118 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_158);
                    puVar15 = local_650;
                    local_c0 = 0;
                    if (local_c8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14472eaf0(&local_108);
                    local_70 = 0;
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                    iVar29 = iVar29 - (int)local_688;
                    FUN_14472eaf0(&local_b8);
                    if (iVar17 - iVar22 <= iVar29) break;
                    uVar19 = puVar15[iVar28];
                    puVar15[iVar28] = puVar15[iVar27];
                    puVar15[iVar27] = uVar19;
                    iVar17 = iVar27 * 2;
                    iVar22 = iVar27 * 2 + 1;
                    iVar28 = (int)local_668;
                  } while ((longlong)iVar22 < (longlong)local_678);
                  uVar19 = *puVar15;
                  *puVar15 = puVar15[(longlong)local_678 + -1];
                  puVar15[(longlong)local_678 + -1] = uVar19;
                  ppuVar9 = local_680;
                  puVar8 = local_678;
                } while ((ulonglong *)0x2 < local_678);
              }
            }
          }
LAB_1494bba78:
          ppuVar9 = ppuVar9 + -3;
        } while (&local_4a8 <= ppuVar9);
      }
      local_5a0 = 0;
      if (local_5a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(&local_5e8);
      plVar11 = local_640;
      uVar19 = local_670;
      if (local_608 != 0) {
        local_5f0 = *local_610;
      }
      if (local_610 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      local_550 = 0;
      if (local_558 != 0) {
        FUN_1400020a8();
      }
      FUN_1403cd038(&local_598);
      uVar10 = local_5f0;
    }
  }
  uVar3 = local_5f0;
  if ((local_660 != 0) && (uVar10 == 0)) {
    local_4a8 = (ulonglong *)0x0;
    puStack_4a0 = (ulonglong *)0x0;
    plVar11 = (longlong *)FUN_14948712a(local_648);
    (**(code **)(*plVar11 + 0x2b0))(plVar11,local_618);
    FUN_1478ba3d6(local_660,local_618,&local_4a8,0);
    uVar19 = local_5f0;
    if ((longlong)(int)puStack_4a0 != 0) {
      puVar12 = local_508;
      if (local_508 == (undefined1 *)0x0) {
        puVar12 = local_510;
      }
      puVar8 = local_4a8;
      while (uVar19 = *puVar8, (int)uStack_540 != local_514) {
        uVar18 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        iVar17 = *(int *)(puVar12 + (ulonglong)((uVar18 >> 0x10 ^ uVar18) & local_500 - 1U) * 4);
        while( true ) {
          if (iVar17 == -1) goto LAB_1494bbc42;
          if (*(ulonglong *)(local_548 + (longlong)iVar17 * 0x10) == uVar19) break;
          iVar17 = *(int *)((longlong)iVar17 * 0x10 + local_548 + 8);
        }
        puVar8 = puVar8 + 1;
        uVar19 = local_5f0;
        if (puVar8 == local_4a8 + (int)puStack_4a0) break;
      }
    }
LAB_1494bbc42:
    local_5f0 = uVar19;
    plVar11 = local_640;
    uVar19 = local_670;
    uVar3 = local_5f0;
    if (local_4a8 != (ulonglong *)0x0) {
      FUN_1400020a8();
      plVar11 = local_640;
      uVar19 = local_670;
      uVar3 = local_5f0;
    }
  }
LAB_1494ba5e4:
  local_5f0 = uVar3;
  iVar17 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar17 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar17 + 1U) {
    FUN_1406ca8e4(plVar11,iVar17);
  }
  *(ulonglong *)(*plVar11 + (longlong)iVar17 * 8) = local_5f0;
  FUN_1479cbdfe(&local_548,&local_4a8);
  plVar5 = local_630 + 1;
  if (plVar5 == local_638) goto LAB_1494ba51d;
  goto LAB_1494ba5bd;
LAB_1494baea8:
  uVar19 = *puVar15;
  *puVar15 = *puVar21;
  *puVar21 = uVar19;
  iVar28 = (int)local_658 + -1;
  local_658 = CONCAT44(local_658._4_4_,iVar28);
  puVar8 = puVar8 + -2;
  if ((longlong)puVar26 - (longlong)local_628 < (longlong)local_620 - (longlong)local_688) {
    if (puVar25 < local_678) {
      *local_680 = puVar25;
      local_680[1] = local_678;
      *(int *)(local_680 + 2) = iVar28;
      local_680 = local_680 + 3;
    }
    ppuVar9 = local_680;
    puVar14 = puVar15;
    if (puVar21 <= puVar15 + 1) goto LAB_1494bba78;
  }
  else {
    ppuVar9 = local_680;
    if (puVar15 + 1 < puVar21) {
      *local_680 = puVar15;
      local_680[1] = puVar8;
      *(int *)(local_680 + 2) = iVar28;
      ppuVar9 = local_680 + 3;
    }
    puVar8 = local_678;
    puVar14 = local_688;
    puVar15 = puVar25;
    puVar26 = local_678;
    if (local_678 <= puVar25) goto LAB_1494bba78;
  }
  local_680 = ppuVar9;
  iVar17 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar14) >> 3);
  uVar19 = (ulonglong)(iVar17 + 1);
  if (iVar28 == 0) goto LAB_1494baf75;
  goto LAB_1494baa53;
}



// FUNCTION 1494bbc94 FUN_1494bbc94 body=197 status=ok
// SIG undefined FUN_1494bbc94(void)

longlong FUN_1494bbc94(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a78d6a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1494bbd5a FUN_1494bbd5a body=42 status=ok
// SIG undefined FUN_1494bbd5a(void)

void FUN_1494bbd5a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1417970e8();
    return;
  }
  return;
}



// FUNCTION 1494bbd86 FUN_1494bbd86 body=310 status=ok
// SIG undefined FUN_1494bbd86(void)

longlong * FUN_1494bbd86(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1417970e8(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1406ca8e4(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bbebe FUN_1494bbebe body=148 status=ok
// SIG undefined FUN_1494bbebe(void)

undefined8 FUN_1494bbebe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f79f6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bbf54 FUN_1494bbf54 body=63 status=ok
// SIG undefined FUN_1494bbf54(void)

longlong FUN_1494bbf54(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494e23f0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1494e23d6(lVar2);
  return lVar2;
}



// FUNCTION 1494bbf94 FUN_1494bbf94 body=194 status=ok
// SIG undefined FUN_1494bbf94(void)

longlong FUN_1494bbf94(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = *(longlong *)(param_2 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    bVar1 = *param_2;
    lVar7 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uint)(bVar1 >> 2) +
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uint)bVar1 * 0x40 + (uVar6 >> 4) +
                              0x9e3779b9 ^ (uint)bVar1)) * 4);
    if (iVar4 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x50);
      do {
        lVar8 = (longlong)iVar4 * 0x80;
        lVar5 = lVar7 + lVar8;
        if ((*(byte *)(lVar7 + lVar8) == bVar1) && (*(longlong *)(lVar7 + 4 + lVar8) == lVar2))
        goto LAB_1494bbfa2;
        iVar4 = *(int *)(lVar5 + 0x78);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1494bbfa2:
  return lVar5 + 0x58;
}



// FUNCTION 1494bc058 FUN_1494bc058 body=131 status=ok
// SIG undefined FUN_1494bc058(void)

byte FUN_1494bc058(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 == 0) {
    bVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    bVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar7) != 0) {
        lVar5 = FUN_1459f790a();
        lVar3 = *(longlong *)(lVar2 + 0x10 + lVar7);
        if ((((lVar3 != 0) && (lVar5 != 0)) && (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)) &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))) {
          bVar4 = FUN_1494a8d6c();
          bVar6 = bVar6 | bVar4;
        }
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar7);
  }
  return bVar6;
}



// FUNCTION 1494bc0dc FUN_1494bc0dc body=812 status=ok
// SIG undefined FUN_1494bc0dc(void)

float * FUN_1494bc0dc(float *param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ushort uVar16;
  uint uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    uVar5 = 0;
    iVar6 = -1;
    uVar14 = 0xffffffff;
  }
  else {
    uVar10 = 0xffffffff;
    uVar5 = 0;
    iVar6 = -1;
    do {
      uVar14 = (uint)uVar10;
      sVar1 = *(short *)(*param_2 + uVar5 * 2);
      if ((ushort)(sVar1 - 0x30U) < 10) {
        iVar7 = (int)uVar5;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        if (sVar1 != 0x30) {
          iVar6 = iVar7;
        }
      }
      else {
        if ((sVar1 != 0x2e) || (-1 < (int)uVar14)) goto LAB_1494bc154;
        uVar10 = uVar5 & 0xffffffff;
      }
      uVar14 = (uint)uVar10;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar5 = (ulonglong)uVar2;
  }
LAB_1494bc154:
  uVar4 = (uint)uVar5;
  iVar7 = ((int)~uVar14 >> 0x1f) + uVar4;
  if (iVar7 == 0) {
    lVar3 = *param_3;
    lVar15 = *param_2;
    FUN_140056680(&local_58,L"Invalid floating point value");
    *(undefined8 *)param_1 = local_58;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = (float)((ulonglong)(lVar15 - lVar3) >> 1);
    param_1[7] = (float)((lVar15 + (ulonglong)(0 < (int)uVar2) * 2) - lVar3 >> 1);
  }
  else {
    uVar13 = uVar4;
    if (-1 < (int)uVar14) {
      uVar13 = uVar14;
    }
    iVar12 = 0;
    iVar11 = uVar4 - iVar6;
    if (iVar6 < 0) {
      iVar11 = iVar12;
    }
    uVar14 = iVar11 - (uint)(iVar6 < (int)uVar14 && -1 < (int)uVar14);
    iVar11 = -0xb;
    if ((int)uVar14 < 0xc) {
      iVar11 = -iVar7;
    }
    lVar3 = *param_2;
    if ((int)uVar14 < 1) {
      dVar18 = 0.0;
    }
    else {
      puVar9 = (ushort *)(lVar3 + (longlong)iVar6 * 2);
      uVar8 = 0xb;
      if (uVar14 < 0xb) {
        uVar8 = uVar14;
      }
      lVar15 = 0;
      do {
        uVar16 = *puVar9;
        if (uVar16 == 0x2e) {
          uVar16 = puVar9[1];
          puVar9 = puVar9 + 2;
        }
        else {
          puVar9 = puVar9 + 1;
        }
        lVar15 = (ulonglong)uVar16 + lVar15 * 10 + -0x30;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      auVar19._8_4_ = (int)((ulonglong)lVar15 >> 0x20);
      auVar19._0_8_ = lVar15;
      auVar19._12_4_ = 0x45300000;
      dVar18 = ((double)CONCAT44(0x43300000,(int)lVar15) - 4503599627370496.0) +
               (auVar19._8_8_ - 1.9342813113834067e+25);
    }
    uVar14 = uVar4 + 1;
    if (((int)uVar14 < (int)uVar2) &&
       ((*(ushort *)(lVar3 + (uVar5 & 0xffffffff) * 2) | 0x20) == 0x65)) {
      sVar1 = *(short *)(lVar3 + (ulonglong)uVar14 * 2);
      uVar8 = uVar4 + 2;
      if ((sVar1 - 0x2bU & 0xfffd) != 0) {
        uVar8 = uVar14;
      }
      iVar6 = 0;
      uVar14 = uVar4;
      if ((int)uVar8 < (int)uVar2) {
        lVar15 = 0;
        iVar6 = 0;
        do {
          uVar16 = *(ushort *)(lVar3 + (ulonglong)uVar8 * 2 + lVar15 * 2);
          uVar17 = (uint)lVar15;
          if (9 < (ushort)(uVar16 - 0x30)) {
            uVar14 = uVar8 + uVar17;
            if (uVar17 == 0) {
              uVar14 = uVar4;
            }
            break;
          }
          if (uVar17 < 2) {
            iVar6 = (uVar16 - 0x30) + iVar6 * 10;
          }
          lVar15 = lVar15 + 1;
          uVar14 = uVar2;
        } while ((uVar8 - uVar2) + (int)lVar15 != 0);
      }
      uVar4 = uVar14;
      iVar12 = -iVar6;
      if (sVar1 != 0x2d) {
        iVar12 = iVar6;
      }
    }
    uVar14 = iVar11 + uVar13 + iVar12;
    if (uVar14 == 0) {
      dVar20 = 1.0;
    }
    else {
      uVar13 = -uVar14;
      if ((int)-uVar14 < 0) {
        uVar13 = uVar14;
      }
      uVar5 = 0x26;
      if (uVar13 < 0x26) {
        uVar5 = (ulonglong)uVar13;
      }
      dVar20 = 1.0;
      lVar15 = 0;
      do {
        if ((uVar5 & 1) != 0) {
          dVar20 = dVar20 * *(double *)((longlong)&DAT_14bd15ac8 + lVar15);
        }
        if (lVar15 == 0x28) break;
        uVar13 = (uint)uVar5;
        uVar5 = uVar5 >> 1;
        lVar15 = lVar15 + 8;
      } while (1 < uVar13);
    }
    if ((int)uVar14 < 0) {
      dVar18 = dVar18 / dVar20;
    }
    else {
      dVar18 = dVar18 * dVar20;
    }
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
    uVar5 = 0;
    if (0 < (int)uVar4) {
      uVar5 = (ulonglong)uVar4;
    }
    iVar6 = uVar2 - uVar4;
    if ((int)(uVar2 - uVar4) < 1) {
      iVar6 = 0;
    }
    *param_2 = lVar3 + (longlong)(int)uVar4 * 2;
    *(int *)(param_2 + 1) = iVar6;
    lVar15 = *param_3;
    *(undefined1 *)(param_1 + 2) = 2;
    *param_1 = (float)dVar18;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[6] = (float)((ulonglong)(lVar3 - lVar15) >> 1);
    param_1[7] = (float)((lVar3 + uVar5 * 2) - lVar15 >> 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494bc40a FUN_1494bc40a body=645 status=ok
// SIG undefined FUN_1494bc40a(void)

undefined8 * FUN_1494bc40a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  wint_t *pwVar1;
  longlong lVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pwVar1 = (wint_t *)*param_2;
  if (*pwVar1 == 0x27) {
    uVar9 = *(uint *)(param_2 + 1);
    uVar10 = (ulonglong)(int)uVar9;
    if ((longlong)uVar10 < 2) {
      lVar12 = *param_3;
      FUN_140056680(&local_50,L"Missing end quote for constant");
      *param_1 = local_50;
      *(undefined4 *)(param_1 + 1) = local_48;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_44;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      uVar10 = (ulonglong)uVar9;
      uVar6 = 2;
      if (uVar9 == 2) {
LAB_1494bc506:
        uVar4 = (uint)uVar6;
        if (uVar4 != uVar9) {
          uVar8 = 1;
          uVar11 = uVar4 + 1;
          goto LAB_1494bc54a;
        }
      }
      else {
        uVar6 = 2;
        do {
          if (pwVar1[uVar6] == 0x27) goto LAB_1494bc506;
          uVar6 = uVar6 + 1;
        } while (uVar10 != uVar6);
      }
      lVar12 = *param_3;
      FUN_140056680(&local_50,L"Missing end quote for constant");
      *param_1 = local_50;
      *(undefined4 *)(param_1 + 1) = local_48;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_44;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    *(int *)(param_1 + 3) = (int)((ulonglong)((longlong)pwVar1 - lVar12) >> 1);
    uVar10 = (longlong)pwVar1 + (uVar10 * 2 - lVar12);
  }
  else {
    iVar5 = iswalpha(*pwVar1);
    if ((iVar5 != 0) || (psVar3 = (short *)*param_2, *psVar3 == 0x5f)) {
      uVar9 = *(uint *)(param_2 + 1);
      uVar11 = 1;
      uVar8 = 0;
      if ((int)uVar9 < 2) {
        uVar4 = 1;
      }
      else {
        lVar12 = 1;
        do {
          iVar5 = iswalnum(*(wint_t *)(*param_2 + lVar12 * 2));
          if ((iVar5 == 0) && (*(short *)(*param_2 + lVar12 * 2) != 0x5f)) {
            uVar9 = *(uint *)(param_2 + 1);
            break;
          }
          lVar12 = lVar12 + 1;
          uVar9 = *(uint *)(param_2 + 1);
        } while ((int)lVar12 < (int)uVar9);
        uVar4 = (uint)lVar12;
        uVar11 = uVar4;
      }
LAB_1494bc54a:
      uVar7 = uVar8;
      if ((int)uVar9 <= (int)uVar8) {
        uVar7 = uVar9;
      }
      iVar5 = uVar9 - uVar7;
      if ((int)(uVar4 - uVar8) < (int)(uVar9 - uVar7)) {
        iVar5 = uVar4 - uVar8;
      }
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      FUN_1446f82e2(param_1,iVar5,(longlong)(int)uVar7 * 2 + *param_2,1);
      uVar9 = *(uint *)(param_2 + 1);
      if ((int)uVar9 <= (int)uVar11) {
        uVar11 = uVar9;
      }
      uVar10 = 0;
      if (0 < (int)uVar11) {
        uVar10 = (ulonglong)uVar11;
      }
      lVar12 = *param_2;
      iVar5 = uVar9 - uVar11;
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      *param_2 = lVar12 + (longlong)(int)uVar11 * 2;
      *(int *)(param_2 + 1) = iVar5;
      lVar2 = *param_3;
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)(param_1 + 2) = 1;
      *(int *)(param_1 + 3) = (int)((ulonglong)(lVar12 - lVar2) >> 1);
      *(int *)((longlong)param_1 + 0x1c) = (int)((lVar12 + uVar10 * 2) - lVar2 >> 1);
      goto LAB_1494bc5d4;
    }
    lVar12 = *param_3;
    lVar2 = param_2[1];
    FUN_140056680(&local_50,L"Unexpected character");
    *param_1 = local_50;
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_44;
    *(undefined1 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 3) = (int)((ulonglong)((longlong)psVar3 - lVar12) >> 1);
    uVar10 = (longlong)psVar3 + ((ulonglong)(0 < (int)lVar2) * 2 - lVar12);
  }
  *(int *)((longlong)param_1 + 0x1c) = (int)(uVar10 >> 1);
LAB_1494bc5d4:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494bc690 FUN_1494bc690 body=835 status=ok
// SIG undefined FUN_1494bc690(void)

undefined4 * FUN_1494bc690(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (ushort *)*param_2;
  uVar1 = *puVar3;
  if (uVar1 - 0x25 < 0xb) {
    lVar4 = *param_3;
    switch((uint)uVar1) {
    case 0x25:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 5;
      break;
    default:
      goto switchD_1494bc6cd_caseD_26;
    case 0x28:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 8;
      break;
    case 0x29:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 9;
      break;
    case 0x2a:
      iVar2 = (int)param_2[1];
      if ((1 < iVar2) && (puVar3[1] == 0x2a)) {
        *param_2 = (longlong)(puVar3 + 2);
        *(int *)(param_2 + 1) = iVar2 + -2;
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = 6;
LAB_1494bc7ba:
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[6] = (int)((ulonglong)((longlong)puVar3 - lVar4) >> 1);
        param_1[7] = (int)((ulonglong)((longlong)puVar3 + (4 - lVar4)) >> 1);
        goto LAB_1494bc8f0;
      }
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 3;
      break;
    case 0x2b:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 1;
      break;
    case 0x2c:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 10;
      break;
    case 0x2d:
      iVar2 = (int)param_2[1];
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 2;
      break;
    case 0x2f:
      iVar2 = (int)param_2[1];
      if ((1 < iVar2) && (puVar3[1] == 0x2f)) {
        *param_2 = (longlong)(puVar3 + 2);
        *(int *)(param_2 + 1) = iVar2 + -2;
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = 7;
        goto LAB_1494bc7ba;
      }
      uVar5 = (ulonglong)(0 < iVar2);
      iVar6 = 1;
      if (iVar2 < 1) {
        iVar6 = iVar2;
      }
      iVar7 = 0;
      if (0 < iVar2 - iVar6) {
        iVar7 = iVar2 - iVar6;
      }
      *param_2 = (longlong)(puVar3 + iVar6);
      *(int *)(param_2 + 1) = iVar7;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 4;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[6] = (int)((ulonglong)((longlong)puVar3 - lVar4) >> 1);
    param_1[7] = (int)((longlong)puVar3 + (uVar5 * 2 - lVar4) >> 1);
  }
  else {
switchD_1494bc6cd_caseD_26:
    if (uVar1 == 0x2e || (ushort)(uVar1 - 0x30) < 10) {
      local_28 = (undefined4)*param_3;
      uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_20 = (undefined4)param_3[1];
      uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_1494bc0dc(param_1);
    }
    else {
      local_38 = (undefined4)*param_3;
      uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_30 = (undefined4)param_3[1];
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_1494bc40a(param_1);
    }
  }
LAB_1494bc8f0:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bc9d4 FUN_1494bc9d4 body=171 status=ok
// SIG undefined FUN_1494bc9d4(void)

undefined4 FUN_1494bc9d4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (DAT_14cc1cb48 != DAT_14cc1cb74) {
    uVar3 = (uint)(ushort)((ulonglong)param_1 >> 0x10);
    puVar4 = &DAT_14cc1cb78;
    if (DAT_14cc1cb80 != (undefined *)0x0) {
      puVar4 = DAT_14cc1cb80;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14cc1cb88 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) +
                              ((int)param_1 << 0x10 | (uint)(ushort)param_1) +
                              (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_1 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cc1cb40 + (longlong)iVar2 * 0x14);
      if (*plVar1 == param_1) {
        if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
          return 0xffffffff;
        }
        return (int)plVar1[1];
      }
      iVar2 = *(int *)((longlong)plVar1 + 0xc);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1494bca80 FUN_1494bca80 body=191 status=ok
// SIG undefined FUN_1494bca80(void)

void FUN_1494bca80(undefined8 param_1,longlong param_2,undefined8 **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = DAT_14cc1cc40;
  uVar1 = DAT_14cc1c9c0;
  local_38 = (undefined8 *)0x0;
  local_30 = 2;
  FUN_1401b309e(&local_38,2,0);
  *local_38 = uVar1;
  local_38[1] = uVar2;
  if (&local_38 == param_3) {
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bcb44 FUN_1494bcb44 body=295 status=ok
// SIG undefined FUN_1494bcb44(void)

longlong * FUN_1494bcb44(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149499cc8(param_2,*param_1);
  plVar1 = param_1 + 1;
  FUN_1494bcc6c(&local_40,*param_2,plVar1);
  *param_2 = local_40;
  uVar2 = *param_1;
  uVar3 = FUN_1446f8646();
  local_50 = 0;
  local_58 = 0;
  lVar4 = FUN_140be85e0(uVar3,uVar2,local_40,0);
  if (lVar4 == 0) {
    iVar6 = *(int *)(param_1 + 2);
    lVar4 = local_40;
  }
  else {
    while( true ) {
      do {
        *(int *)((longlong)param_2 + 4) = (int)((ulonglong)local_40 >> 0x20) + 1;
        local_40 = *param_2;
        uVar2 = *param_1;
        uVar3 = FUN_1446f8646();
        local_50 = 0;
        local_58 = 0;
        lVar4 = FUN_140be85e0(uVar3,uVar2,local_40,0);
      } while (lVar4 != 0);
      iVar6 = *(int *)(param_1 + 2);
      lVar4 = local_40;
      if ((longlong)iVar6 == 0) break;
      lVar5 = 0;
      while (*(longlong *)(param_1[1] + lVar5) != local_40) {
        lVar5 = lVar5 + 8;
        if ((longlong)iVar6 << 3 == lVar5) goto LAB_1494bcc18;
      }
    }
    iVar6 = 0;
  }
LAB_1494bcc18:
  *(uint *)(param_1 + 2) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar6 + 1U) {
    FUN_1446f84a2(plVar1,iVar6);
  }
  *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = lVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bcc6c FUN_1494bcc6c body=724 status=ok
// SIG undefined FUN_1494bcc6c(void)

ulonglong * FUN_1494bcc6c(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)(int)param_3[1] != 0) {
    local_c8 = param_2 >> 0x20;
    puVar8 = (ulonglong *)*param_3;
    puVar11 = puVar8 + (int)param_3[1];
    local_c0 = param_2;
    local_b8 = param_1;
LAB_1494bcd19:
    uVar2 = *puVar8;
    uVar10 = uVar2 >> 0x20;
    local_b0 = uVar2 & 0xffffffff;
    iVar9 = (int)(uVar2 >> 0x20);
    if ((int)uStack_90 != local_64) {
      uVar3 = (uint)(local_b0 >> 0x10);
      uVar5 = (uint)uVar2 & 0xffff;
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_60;
      }
      iVar6 = *(int *)(puVar4 + (ulonglong)
                                (local_50 - 1U &
                                ((uint)uVar2 << 0x10 | uVar5) + (uVar3 << 0x13 | uVar3) +
                                (uVar5 >> 4)) * 4);
      iVar1 = iVar6;
      while (iVar1 != -1) {
        puVar7 = (ulonglong *)(local_98 + (longlong)iVar1 * 0x14);
        if (*puVar7 == local_b0) {
          if (puVar7 + 1 != (ulonglong *)0x0 && puVar7 != (ulonglong *)0x0) {
            uVar3 = (uint)puVar7[1];
            if (iVar9 < (int)uVar3) {
              uVar10 = (ulonglong)uVar3;
            }
            goto LAB_1494bce12;
          }
          break;
        }
        iVar1 = *(int *)((longlong)puVar7 + 0xc);
      }
    }
    local_a8 = &local_b0;
    FUN_140818534(&local_98,&local_9c,&local_a8,0);
    *(int *)(local_98 + 8 + (longlong)local_9c * 0x14) = iVar9;
    goto LAB_1494bcd63;
  }
  *param_1 = param_2;
  goto LAB_1494bce6b;
  while (iVar6 = *(int *)((longlong)puVar7 + 0xc), iVar6 != -1) {
LAB_1494bce12:
    puVar7 = (ulonglong *)(local_98 + (longlong)iVar6 * 0x14);
    if (*puVar7 == local_b0) goto LAB_1494bce2c;
  }
  puVar7 = (ulonglong *)0x0;
LAB_1494bce2c:
  *(int *)(puVar7 + 1) = (int)uVar10;
LAB_1494bcd63:
  param_1 = local_b8;
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar11) goto LAB_1494bce34;
  goto LAB_1494bcd19;
LAB_1494bce34:
  *local_b8 = local_c0;
  if ((int)uStack_90 != local_64) {
    uVar3 = (uint)(local_c0 >> 0x10);
    uVar5 = (uint)local_c0 & 0xffff;
    puVar4 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar4 = local_58;
    }
    iVar9 = *(int *)(puVar4 + (ulonglong)
                              (local_50 - 1U &
                              ((uint)local_c0 << 0x10 | uVar5) + (uVar5 >> 4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff)) * 4);
    if (iVar9 != -1) {
      do {
        puVar8 = (ulonglong *)(local_98 + (longlong)iVar9 * 0x14);
        if (*puVar8 == (local_c0 & 0xffffffff)) {
          if (puVar8 + 1 != (ulonglong *)0x0 && puVar8 != (ulonglong *)0x0) {
            iVar9 = (int)puVar8[1];
            if ((int)local_c8 <= iVar9) {
              *(int *)((longlong)local_b8 + 4) = iVar9 + 1;
            }
          }
          break;
        }
        iVar9 = *(int *)((longlong)puVar8 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1494bce6b:
  FUN_1401ad17c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bcf41 FUN_1494bcf41 body=479 status=ok
// SIG undefined FUN_1494bcf41(void)

void FUN_1494bcf41(double *param_1,longlong *param_2)

{
  double dVar1;
  undefined4 *puVar2;
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
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  
  lVar13 = param_2[1];
  uVar15 = FUN_1457dd274(3,3,4);
  iVar14 = FUN_145cc73c0(uVar15);
  if ((int)lVar13 == iVar14) {
    dVar7 = *param_1;
    dVar8 = param_1[1];
    dVar9 = param_1[2];
    dVar3 = dVar8 + dVar8;
    dVar17 = dVar9 + dVar9;
    dVar4 = dVar7 * (dVar7 + dVar7);
    dVar10 = param_1[8];
    dVar11 = param_1[9];
    dVar12 = param_1[10];
    dVar1 = param_1[3];
    dVar5 = dVar1 * (dVar7 + dVar7);
    dVar6 = (dVar17 * dVar8 + dVar5) * dVar11;
    uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar19 = (*param_1 * dVar17 - dVar3 * dVar1) * dVar10;
    fVar18 = (float)((dVar3 * dVar7 + dVar1 * dVar17) * dVar10);
    auVar22._0_4_ = (float)dVar19;
    auVar22._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar22._8_8_ = 0;
    fVar16 = (float)((dVar17 * dVar8 - dVar5) * dVar12);
    dVar19 = (1.0 - (dVar4 + dVar8 * dVar3)) * dVar12;
    puVar2 = (undefined4 *)*param_2;
    auVar20._4_4_ = uVar23;
    auVar20._0_4_ = (float)dVar6;
    auVar20._8_4_ = SUB84(dVar6,0);
    auVar20._12_4_ = uVar23;
    auVar20 = insertps(auVar22,auVar20,0x10);
    dVar5 = param_1[5];
    auVar21._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar21._0_4_ = (float)dVar19;
    auVar21._8_8_ = 0;
    auVar21 = insertps(auVar20,auVar21,0x20);
    auVar20 = insertps(auVar21,ZEXT416((uint)(float)param_1[6]),0x30);
    auVar21 = insertps(ZEXT416((uint)(float)((1.0 - (dVar9 * dVar17 + dVar8 * dVar3)) * dVar10)),
                       ZEXT416((uint)fVar18),0x10);
    auVar21 = insertps(auVar21,ZEXT416((uint)(float)((dVar3 * dVar7 - dVar1 * dVar17) * dVar11)),
                       0x20);
    auVar22 = insertps(ZEXT416((uint)(float)((dVar3 * dVar1 + *param_1 * dVar17) * dVar12)),
                       ZEXT416((uint)fVar16),0x10);
    auVar22 = insertps(auVar22,ZEXT416((uint)(float)param_1[4]),0x20);
    *puVar2 = auVar21._0_4_;
    puVar2[1] = auVar21._8_4_;
    puVar2[2] = auVar22._0_4_;
    puVar2[3] = auVar22._8_4_;
    puVar2[4] = fVar18;
    puVar2[5] = (float)((1.0 - (dVar9 * dVar17 + dVar4)) * dVar11);
    puVar2[6] = fVar16;
    puVar2[7] = (float)dVar5;
    *(undefined1 (*) [16])(puVar2 + 8) = auVar20;
  }
  return;
}



// FUNCTION 1494bd120 FUN_1494bd120 body=182 status=ok
// SIG undefined FUN_1494bd120(void)

undefined8 FUN_1494bd120(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1407c869a(param_2,&local_48,0);
  puVar1 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(&local_30,L"FUserDefinedStruct_%s",puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd1d8 FUN_1494bd1d8 body=148 status=ok
// SIG undefined FUN_1494bd1d8(void)

void FUN_1494bd1d8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447c126c(param_1 + 0x40,&local_20,param_2);
  if (local_20 != 0) {
    *param_3 = 0;
    param_3[1] = 0;
    FUN_14685b22e(&local_20,&local_30);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1494e2aff(param_3,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494bd26d FUN_1494bd26d body=180 status=ok
// SIG undefined FUN_1494bd26d(void)

void FUN_1494bd26d(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  FUN_140002266(&local_28,L"/Engine/Generated/UObject%s.ush",puVar1);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_14475c2da(param_1,0x3a,0x40,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd322 FUN_1494bd322 body=98 status=ok
// SIG undefined FUN_1494bd322(void)

undefined4 FUN_1494bd322(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140c540b4(param_1,L"/Engine/Generated/UObject",0x19,1);
  if ((char)uVar1 != '\0') {
    FUN_14475c2da(param_1,0x40,0x3a,1);
    FUN_140b127b8(param_1,L".ush",4,1);
  }
  return uVar1;
}



// FUNCTION 1494bd384 FUN_1494bd384 body=111 status=ok
// SIG undefined FUN_1494bd384(void)

void FUN_1494bd384(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd40e FUN_1494bd40e body=92 status=ok
// SIG undefined FUN_1494bd40e(void)

void FUN_1494bd40e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd48e FUN_1494bd48e body=190 status=ok
// SIG undefined FUN_1494bd48e(void)

void FUN_1494bd48e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar3 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1494bd5e0(param_1);
  local_30 = param_1;
  uVar1 = FUN_1494bd668(uVar2,&local_30,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd550 FUN_1494bd550 body=48 status=ok
// SIG undefined FUN_1494bd550(void)

void FUN_1494bd550(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001494bd57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
  return;
}



// FUNCTION 1494bd580 FUN_1494bd580 body=96 status=ok
// SIG undefined FUN_1494bd580(void)

void FUN_1494bd580(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0xb2) == '\0') && (*(char *)(param_1 + 0x28) == '\x01')) &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_141155906();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1494bdf80(lVar1,param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1494bd5e0 FUN_1494bd5e0 body=135 status=ok
// SIG undefined FUN_1494bd5e0(void)

undefined8 FUN_1494bd5e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = FUN_141155906();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        if (lVar3 != 0) {
          lVar1 = FUN_1458f36a4();
          if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
            uVar4 = FUN_1494ac0dc(lVar3);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1494bd668 FUN_1494bd668 body=211 status=ok
// SIG undefined FUN_1494bd668(void)

undefined4 FUN_1494bd668(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd1e0c0;
  plVar1 = plVar4 + 2;
  FUN_14945eb9a(plVar1,*param_2,param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bd73c FUN_1494bd73c body=134 status=ok
// SIG undefined FUN_1494bd73c(void)

undefined8 FUN_1494bd73c(longlong param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  
  iVar2 = _finite(*param_2);
  if (((iVar2 != 0) && (iVar2 = _finite(param_2[1]), iVar2 != 0)) &&
     ((9.999999747378752e-05 < ABS(*param_2 - *(double *)(param_1 + 0x40)) ||
      (9.999999747378752e-05 < ABS(param_2[1] - *(double *)(param_1 + 0x48)))))) {
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x40) = *param_2;
    *(double *)(param_1 + 0x48) = dVar1;
    FUN_1494bd580(param_1,3);
    return 1;
  }
  return 0;
}



// FUNCTION 1494bd7c2 FUN_1494bd7c2 body=441 status=ok
// SIG undefined FUN_1494bd7c2(void)

longlong * FUN_1494bd7c2(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_3 + 1);
  if ((int)uVar1 < 2) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  *param_1 = 0;
  _Src = (void *)*param_3;
  *(uint *)(param_1 + 1) = uVar1;
  FUN_1446dd670(param_1,(ulonglong)uVar1,0);
  memcpy((void *)*param_1,_Src,(ulonglong)uVar1 * 2);
  if (1 < *(int *)(param_2 + 8)) {
    FUN_1449b8608(local_50,param_2,&DAT_149e065c6);
    FUN_144a7dea0(&local_40,local_50,param_1);
    if (&local_40 == param_1) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (1 < *(int *)(param_4 + 8)) {
    FUN_1449b8608(local_50,param_1,&DAT_149e0635c);
    FUN_144a7dea0(&local_40,local_50,param_4);
    if (&local_40 == param_1) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494bd97c FUN_1494bd97c body=116 status=ok
// SIG undefined FUN_1494bd97c(void)

undefined8 FUN_1494bd97c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1494bd9f0(param_1,param_3,*(undefined1 *)(param_2 + 0x29));
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_1494e64f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001494bd9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_3,param_2,param_4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494bd9f0 FUN_1494bd9f0 body=582 status=ok
// SIG undefined FUN_1494bd9f0(void)

uint FUN_1494bd9f0(longlong param_1,longlong param_2,char param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    if (param_4 == (longlong *)0x0) goto LAB_1494bda6c;
    pwVar6 = L"No pin given.";
LAB_1494bda64:
    FUN_14020fad6(param_4,pwVar6);
  }
  else if (*(char *)(param_2 + 0x29) == param_3) {
    if (param_4 != (longlong *)0x0) {
      pwVar6 = L"output";
      if (param_3 == '\x01') {
        pwVar6 = L"input";
      }
      FUN_140056680(&local_48,pwVar6);
      puVar8 = local_48;
      if (local_40 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"Can\'t connect an %s pin to a %s",puVar8,puVar8);
      if (&local_58 == param_4) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_58;
        local_58 = 0;
        *(undefined4 *)(param_4 + 1) = local_50;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_4c;
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar2 = FUN_1494e64f0(param_2);
    if (lVar2 == param_1) {
      if (param_4 != (longlong *)0x0) {
        pwVar6 = L"Can\'t connect pins on the same node.";
        goto LAB_1494bda64;
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (lVar2 == 0) {
LAB_1494bdb5a:
        lVar2 = 0;
      }
      else {
        lVar3 = FUN_141155906();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1494bdb5a;
      }
      lVar3 = FUN_1494e64f0(param_2);
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 == 0) {
LAB_1494bdb8e:
        lVar3 = 0;
      }
      else {
        lVar4 = FUN_141155906();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1494bdb8e;
      }
      if (lVar2 == lVar3) {
        lVar2 = param_1;
        if ((param_3 == '\x02') ||
           (lVar2 = FUN_1494e64f0(param_2), lVar3 = param_1, param_3 != '\x01')) {
          lVar3 = FUN_1494e64f0(param_2);
        }
        lVar4 = *(longlong *)(param_1 + 0x20);
        if (lVar4 == 0) {
LAB_1494bdbfc:
          lVar4 = 0;
        }
        else {
          lVar5 = FUN_141155906();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1494bdbfc;
        }
        uVar1 = FUN_1494bdc38(lVar4,lVar2,lVar3);
        uVar7 = uVar1 ^ 1;
        if ((param_4 != (longlong *)0x0) && ((char)uVar1 != '\0')) {
          FUN_14020fad6(param_4,L"Connection results in a cycle.");
        }
        goto LAB_1494bda6e;
      }
      if (param_4 != (longlong *)0x0) {
        pwVar6 = L"Pins belong to nodes from two different graphs.";
        goto LAB_1494bda64;
      }
    }
  }
LAB_1494bda6c:
  uVar7 = 0;
LAB_1494bda6e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1494bdc38 FUN_1494bdc38 body=651 status=ok
// SIG undefined FUN_1494bdc38(void)

ulonglong FUN_1494bdc38(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_118 [44];
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined1 local_d0 [16];
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a0 = param_3;
  if (param_3 == 0 || param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (param_2 != param_3) {
      uVar5 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_b8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *local_b8 = 0;
      local_c0 = &local_b8;
      local_b0 = local_b8;
      FUN_1494cd0aa(param_1,local_d0,param_3,2);
      FUN_14452e7f2(&local_c0,local_d0);
      FUN_1494e5ba8(&local_98,&local_d8,&local_a0);
      puVar2 = (undefined8 *)*local_b0;
      if (puVar2 != (undefined8 *)0x0) {
        do {
          iVar1 = *(int *)(puVar2 + 1);
          *(undefined4 *)(puVar2 + 1) = 0;
          bVar6 = local_b0 != (undefined8 *)0x0;
          local_b0 = puVar2;
          if (bVar6) {
            FUN_1400020a8();
          }
          local_d8 = FUN_1494e64f0(*(undefined8 *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) + 0x30))
          ;
          if (local_d8 == param_2) {
            uVar5 = CONCAT71((int7)((ulonglong)local_e8 >> 8),1);
            goto LAB_1494bde8e;
          }
          if ((int)uStack_90 != local_64) {
            uVar3 = ((uint)(local_d8 >> 0x14) & 0xffff ^ (uint)(local_d8 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_60;
            }
            for (iVar1 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4)
                ; iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_98 + 8)) {
              if (*(ulonglong *)(local_98 + (longlong)iVar1 * 0x10) == local_d8) goto LAB_1494bde12;
            }
          }
          FUN_1494cd0aa(param_1,local_e8,local_d8,2);
          FUN_14452e7f2(&local_c0,local_e8);
          FUN_1494e5ba8(&local_98,local_ec,&local_d8);
LAB_1494bde12:
          puVar2 = (undefined8 *)*local_b0;
        } while (puVar2 != (undefined8 *)0x0);
        uVar5 = 0;
      }
LAB_1494bde8e:
      while (local_b0 != (undefined8 *)0x0) {
        local_b0 = (undefined8 *)*local_b0;
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1494e5b1a(&local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bdec4 FUN_1494bdec4 body=94 status=ok
// SIG undefined FUN_1494bdec4(void)

void FUN_1494bdec4(longlong *param_1,undefined8 *param_2)

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
    FUN_1494e31fe(param_1,iVar2);
  }
  FUN_1494e3283((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1494bdf22 FUN_1494bdf22 body=94 status=ok
// SIG undefined FUN_1494bdf22(void)

void FUN_1494bdf22(longlong *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*param_1 + 0x2c8))();
  FUN_1494e329a(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1494e341e(param_1 + 10,0);
  }
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xb2);
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  (**(code **)(*param_1 + 0x2c0))(param_1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = uVar1;
  return;
}



// FUNCTION 1494bdf80 FUN_1494bdf80 body=328 status=ok
// SIG undefined FUN_1494bdf80(void)

void FUN_1494bdf80(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 == 3) || (param_2 == 0xe)) goto LAB_1494be097;
  if (param_2 != 4) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_1458f36a4();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (*(int *)(lVar2 + 0x108) != 3)) {
          *(undefined4 *)(lVar2 + 0x108) = 2;
        }
      }
    }
    goto LAB_1494be097;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  if (plVar1 == (longlong *)0x0) goto LAB_1494be097;
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  if (lVar2 == 0) goto LAB_1494be097;
  lVar3 = FUN_1458f36a4();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_1494be097;
  if (param_3 == 0) {
LAB_1494be025:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_140f7d9ac();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (lVar4 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) goto LAB_1494be025;
  }
  if (*(char *)(lVar4 + 0xb0) == '\x02') {
    if (*(int *)(lVar2 + 0x108) == 0) {
      *(undefined4 *)(lVar2 + 0x108) = 1;
    }
  }
  else if (*(char *)(lVar4 + 0xb0) == '\x03') {
    *(undefined4 *)(lVar2 + 0x108) = 3;
  }
LAB_1494be097:
  FUN_1494e6094(param_1 + 0x78,param_2,param_1,param_3);
  return;
}



// FUNCTION 1494be0c8 FUN_1494be0c8 body=252 status=ok
// SIG undefined FUN_1494be0c8(void)

void FUN_1494be0c8(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    lStack_48 = 0;
  }
  else {
    lStack_48 = *(longlong *)(param_2 + 0x50);
  }
  local_40 = 0xffffffff;
  uStack_3c = 0x101;
  uStack_3a = 0;
  local_50 = param_2;
  FUN_144a2daf0(&local_50);
  local_58 = CONCAT17(uStack_39,CONCAT16(uStack_3a,CONCAT24(uStack_3c,local_40)));
  local_68 = local_50;
  lStack_60 = lStack_48;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0x101;
  local_72 = 0;
  FUN_144a2daf0(&local_88);
  if (lStack_60 != lStack_80) {
    do {
      if (param_3 != 0) {
        FUN_14452cc2c(param_1,*(undefined1 *)(param_3 + 0x29),lStack_60,param_3);
      }
      lStack_60 = *(longlong *)(lStack_60 + 0x18);
      FUN_144a2daf0(&local_68);
    } while (lStack_60 != lStack_80);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494be1c6 FUN_1494be1c6 body=199 status=ok
// SIG undefined FUN_1494be1c6(void)

undefined8 *
FUN_1494be1c6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14945f130(local_78,param_6);
  local_88 = param_7;
  local_98 = param_5;
  local_80 = 0;
  local_90 = local_78;
  FUN_14945f38a(param_1,param_2,param_3,param_4);
  *param_1 = &PTR_FUN_14bcfe100;
  FUN_14121c54c(param_5);
  if (*(longlong *)(param_6 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494be28e FUN_1494be28e body=183 status=ok
// SIG undefined FUN_1494be28e(void)

undefined8 FUN_1494be28e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14113d446();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494be346 FUN_1494be346 body=252 status=ok
// SIG undefined FUN_1494be346(void)

void FUN_1494be346(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    FUN_1494e7796(param_3,param_2,param_4);
    goto LAB_1494be377;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_4 != 0) {
    uVar5 = 0;
    if (uVar1 == 0) goto LAB_1494be3b6;
    lVar2 = *(longlong *)(param_1 + 0x50);
    uVar3 = (longlong)(int)uVar1 * 8;
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar4) == param_4) {
        uVar5 = (ulonglong)uVar1;
        if ((int)(~uVar4 >> 3) == 0) goto LAB_1494be3b6;
        uVar5 = 0;
        goto LAB_1494be429;
      }
      uVar4 = uVar4 + 8;
    } while (uVar3 != uVar4);
  }
  uVar5 = (ulonglong)uVar1;
  goto LAB_1494be3b6;
  while( true ) {
    uVar5 = uVar5 + 1;
    uVar3 = uVar3 - 8;
    if (uVar3 == 0) break;
LAB_1494be429:
    if (*(longlong *)(lVar2 + uVar5 * 8) == param_4) goto LAB_1494be3b6;
  }
  uVar5 = 0xffffffff;
LAB_1494be3b6:
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1494be444((longlong *)(param_1 + 0x50),&local_30,uVar5 & 0xffffffff);
LAB_1494be377:
  if ((*(char *)(param_1 + 0xb2) == '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    FUN_1494e7236(param_2,7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494be444 FUN_1494be444 body=129 status=ok
// SIG undefined FUN_1494be444(void)

int FUN_1494be444(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494e347e(param_1,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*param_1 + lVar3 * 8 + 8),(void *)(*param_1 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + lVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 1494be4c6 FUN_1494be4c6 body=136 status=ok
// SIG undefined FUN_1494be4c6(void)

void FUN_1494be4c6(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Remove Pin");
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494be550 FUN_1494be550 body=212 status=ok
// SIG undefined FUN_1494be550(void)

longlong * FUN_1494be550(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1494cb946(0,&local_58);
  lVar3 = local_58;
  if ((longlong)local_50 != 0) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar3 + lVar4) * 8);
      if ((*(longlong *)(lVar2 + 0x30) == param_3) || (*(longlong *)(lVar2 + 0x28) == param_3)) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1494e4bb6(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)local_50 * 4 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494be626 FUN_1494be626 body=235 status=ok
// SIG undefined FUN_1494be626(void)

longlong * FUN_1494be626(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc50;
  plVar1 = plVar6 + 2;
  FUN_1494623de(plVar1,*param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494be712 FUN_1494be712 body=246 status=ok
// SIG undefined FUN_1494be712(void)

longlong * FUN_1494be712(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(200,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1e0e0;
  plVar1 = plVar6 + 2;
  FUN_14945f628(plVar1,*param_3);
  plVar6[2] = (longlong)&PTR_FUN_14bcfe5b0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494be808 FUN_1494be808 body=211 status=ok
// SIG undefined FUN_1494be808(void)

undefined4 FUN_1494be808(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd1e100;
  plVar1 = plVar4 + 2;
  FUN_14945fc80(plVar1,*param_2,*param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494be8dc FUN_1494be8dc body=311 status=ok
// SIG undefined FUN_1494be8dc(void)

ulonglong FUN_1494be8dc(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    cVar2 = FUN_14945fc10(param_3);
    if (cVar2 != '\0') {
      lVar3 = FUN_1494e6f58(param_2);
      if (lVar3 == 0) {
        FUN_14945f130(local_60,param_3);
        cVar2 = FUN_1494e78d0(param_2,local_60);
        if (cVar2 != '\0') {
          if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x40) == 0)) {
            uVar1 = *(undefined1 *)(param_1 + 0x28);
            unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1);
            *(undefined1 *)(param_1 + 0x28) = 0;
            FUN_1494e7860(param_2);
            lVar3 = FUN_149466e92(param_3);
            if ((*(byte *)(lVar3 + 0x49) & 2) != 0) {
              lVar3 = FUN_149466e92(param_3);
              lVar3 = FUN_14479d2ce(lVar3 + 0x2c);
              if (lVar3 != 0) {
                lVar4 = FUN_1446f4bba();
                if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                  FUN_1494be0c8(param_1,lVar3,param_2);
                }
              }
            }
            *(undefined1 *)(param_1 + 0x28) = uVar1;
          }
          uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          if ((*(char *)(param_1 + 0xb2) == '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
            FUN_1494e7236(param_2,0xc);
          }
          goto LAB_1494be8ff;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1494be8ff:
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bea14 FUN_1494bea14 body=211 status=ok
// SIG undefined FUN_1494bea14(void)

undefined4 FUN_1494bea14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd1dc10;
  plVar1 = plVar4 + 2;
  FUN_14945ed3e(plVar1,*param_2,*param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar3 = FUN_1494a7e7c(param_1,&local_40);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494beae8 FUN_1494beae8 body=334 status=ok
// SIG undefined FUN_1494beae8(void)

ulonglong FUN_1494beae8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if (param_3 != 0 && param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) {
LAB_1494beb48:
      bVar9 = false;
    }
    else {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar6 = (uint)lVar2 & 0xffff;
      lVar5 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xa0);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0xa8) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 == -1) goto LAB_1494beb48;
      do {
        bVar9 = *(longlong *)(*plVar1 + (longlong)iVar7 * 0x10) == lVar2;
        if (bVar9) break;
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar1 + 8);
      } while (iVar7 != -1);
    }
    cVar4 = FUN_1494e79f2(param_2,param_3);
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
        param_1 = param_1 + 0xb8;
        FUN_1494e32da(param_1);
        FUN_1494e365c(param_1);
      }
      uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (bVar9) {
        FUN_144a8b5fe(plVar1,lVar2);
        FUN_144a13f80(plVar1,local_34,&local_30,0);
      }
      goto LAB_1494beb19;
    }
  }
  uVar8 = 0;
LAB_1494beb19:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1494bec38 FUN_1494bec38 body=136 status=ok
// SIG undefined FUN_1494bec38(void)

void FUN_1494bec38(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Set Pin Data Domain");
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494becc2 FUN_1494becc2 body=272 status=ok
// SIG undefined FUN_1494becc2(void)

undefined8 FUN_1494becc2(longlong param_1,longlong param_2,int *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    bVar5 = *(int *)(param_2 + 0x40) == 0;
  }
  else {
    bVar5 = false;
  }
  bVar4 = param_3[4] == 0 && *param_3 == 0;
  *(int *)(param_2 + 0x30) = *param_3;
  FUN_1406fa324(param_2 + 0x38,param_3 + 2);
  *(int *)(param_2 + 0x48) = param_3[6];
  FUN_144a787a6(param_2 + 0x50,param_3 + 8);
  FUN_1406fa324(param_2 + 0x60,param_3 + 0xc);
  if (bVar5 != bVar4) {
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_1494e7860(param_2);
    if (bVar4) {
      lVar2 = FUN_149466e92(param_2 + 0x70);
      if ((*(byte *)(lVar2 + 0x49) & 2) != 0) {
        lVar2 = FUN_149466e92(param_2 + 0x70);
        lVar2 = FUN_14479d2ce(lVar2 + 0x2c);
        if (lVar2 != 0) {
          lVar3 = FUN_1446f4bba();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_1494be0c8(param_1,lVar2,param_2);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x28) = uVar1;
  }
  if ((*(char *)(param_1 + 0xb2) == '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    FUN_1494e7236(param_2,0xd);
  }
  return 1;
}



// FUNCTION 1494bedd2 FUN_1494bedd2 body=363 status=ok
// SIG undefined FUN_1494bedd2(void)

void FUN_1494bedd2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1494e66cc(param_2,&local_30);
  plVar1 = (longlong *)(param_1 + 0x60);
  uVar2 = (uint)((ulonglong)local_30 >> 0x10);
  uVar4 = (uint)local_30 & 0xffff;
  iVar3 = ((uint)local_30 << 0x10 | uVar4) + (uVar4 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff);
  iVar5 = (int)((ulonglong)local_30 >> 0x20);
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar6 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xa0);
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & iVar3 + iVar5) * 4);
      if (iVar3 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x10) == local_30) {
            FUN_144a8b5fe();
            goto LAB_1494beeac;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *plVar1 + 8);
        } while (iVar3 != -1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar6 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xa0);
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & iVar3 + iVar5) * 4);
      if (iVar3 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x10) == local_30) goto LAB_1494bef13;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *plVar1 + 8);
        } while (iVar3 != -1);
      }
    }
    FUN_144a13f80(plVar1,local_34,&local_30,0);
LAB_1494beeac:
    FUN_1494e7236(param_2,0xe);
  }
LAB_1494bef13:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bef3e FUN_1494bef3e body=217 status=ok
// SIG undefined FUN_1494bef3e(void)

longlong FUN_1494bef3e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1494e66cc(param_2,&local_18);
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar3 = (uint)local_18 & 0xffff;
    lVar2 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xa8) - 1U &
                             (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 0x10) == local_18;
        lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar5);
        if (bVar5) break;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x60) + 8);
      } while (iVar4 != -1);
      goto LAB_1494bef72;
    }
  }
  lVar2 = 0;
LAB_1494bef72:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1494bf018 FUN_1494bf018 body=244 status=ok
// SIG undefined FUN_1494bf018(void)

void FUN_1494bf018(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494afe6c(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf10e FUN_1494bf10e body=277 status=ok
// SIG undefined FUN_1494bf10e(void)

void FUN_1494bf10e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_1494bf224(param_1,&local_48,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf224 FUN_1494bf224 body=212 status=ok
// SIG undefined FUN_1494bf224(void)

void FUN_1494bf224(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_58 = 0;
  local_48 = &PTR_FUN_14bd1e280;
  local_40 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_68[0] = FUN_1445333e6;
  local_70 = FUN_145a96ec4();
  if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_70);
  }
  FUN_1494c9824(param_1,&local_70,param_3,local_68);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf2fa FUN_1494bf2fa body=405 status=ok
// SIG undefined FUN_1494bf2fa(void)

void FUN_1494bf2fa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  _Src = pvStack_50;
  puVar2 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_68;
  local_98 = (undefined4)uStack_60;
  uStack_94 = uStack_60._4_4_;
  uStack_90 = (undefined4)local_58;
  uStack_8c = local_58._4_4_;
  local_88 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_80 = (int)local_48;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_48 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar3 * 2);
  }
  uVar1 = FUN_1494bf490(param_1,&local_a0,puVar2);
  *param_3 = uVar1;
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf490 FUN_1494bf490 body=383 status=ok
// SIG undefined FUN_1494bf490(void)

undefined8 FUN_1494bf490(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_2;
  local_a8 = *(undefined4 *)(param_2 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_a0 = *(undefined4 *)(param_2 + 2);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_98 = (void *)0x0;
  uVar1 = *(uint *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  local_90 = CONCAT44(local_90._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_90 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_98,uVar1,0);
    memcpy(local_98,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_88[0] = (undefined1 *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar2 = local_98;
  *local_78 = &PTR_FUN_14bd1e2e0;
  local_98 = (void *)0x0;
  uVar3 = (undefined4)local_90;
  uVar4 = local_90._4_4_;
  local_90 = 0;
  local_78[1] = local_b0;
  *(undefined4 *)(local_78 + 2) = local_a8;
  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a4;
  *(undefined4 *)(local_78 + 3) = uStack_a0;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uStack_9c;
  local_78[4] = pvVar2;
  *(undefined4 *)(local_78 + 5) = uVar3;
  *(undefined4 *)((longlong)local_78 + 0x2c) = uVar4;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = &LAB_1445335f8;
  }
  local_b8 = FUN_1459f781e();
  if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_b8);
  }
  uVar5 = FUN_1494c9824(param_1,&local_b8,param_3,local_88);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf616 FUN_1494bf616 body=239 status=ok
// SIG undefined FUN_1494bf616(void)

void FUN_1494bf616(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149494c80(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bf706 FUN_1494bf706 body=230 status=ok
// SIG undefined FUN_1494bf706(void)

void FUN_1494bf706(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494bf7ee(param_1,&local_40,puVar1);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


