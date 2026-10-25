// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14695fe24 FUN_14695fe24 body=773 status=ok
// SIG undefined FUN_14695fe24(void)

longlong FUN_14695fe24(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141160160(&local_98);
  if ((int)param_1[0x25] != *(int *)((longlong)param_1 + 0x154)) {
    uVar3 = (uint)((ulonglong)local_98 >> 0x10);
    uVar5 = (uint)local_98 & 0xffff;
    plVar4 = param_1 + 0x2b;
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x2c];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x2d] - 1U &
                    (int)((ulonglong)local_98 >> 0x20) + ((uint)local_98 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar2 = param_1[0x24] + (longlong)iVar6 * 0x20;
        if (*(longlong *)(param_1[0x24] + (longlong)iVar6 * 0x20) == local_98) {
          if (lVar2 != 0) {
            param_4 = lVar2 + 8;
            goto LAB_14696005f;
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((param_1[0x75] == 0) ||
     (plVar4 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar4 == (longlong *)0x0)) {
    if (param_5 != (longlong *)0x0) {
      param_1 = param_5;
    }
    FUN_145715fae(local_b8,&local_98);
    local_60 = L"UknownColor";
    local_58 = 0xb;
    FUN_1446e940c(local_dc,&local_60);
    local_60 = L"SlateStyleSet";
    local_58 = 0xd;
    FUN_1446e940c(local_e0,&local_60);
    FUN_140208bae(local_d8,local_e0,local_dc,L"Unable to find Color \'{0}\'.");
    FUN_14023409e(&local_c8,local_d8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c8;
    local_88 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0xa8))(param_1,3,local_a8,&local_98);
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
  }
  else {
    local_e8 = 0;
    param_4 = (**(code **)(*plVar4 + 0x38))(plVar4,param_2,param_3,param_4);
  }
LAB_14696005f:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_4;
}



// FUNCTION 14696012a FUN_14696012a body=52 status=ok
// SIG undefined FUN_14696012a(void)

undefined8
FUN_14696012a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,param_5,0,param_4,0);
  return param_2;
}



// FUNCTION 14696015e FUN_14696015e body=136 status=ok
// SIG undefined FUN_14696015e(void)

undefined8
FUN_14696015e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141160160(&local_38,param_3,param_4);
  local_48 = param_6;
  local_40 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,param_2,local_38,param_5);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469601e8 FUN_1469601e8 body=806 status=ok
// SIG undefined FUN_1469601e8(void)

longlong *
FUN_1469601e8(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = param_3;
  if (param_5 != 0) {
    FUN_1400021e4(&param_5,local_78);
    FUN_1400021e4(&local_50,local_88);
    FUN_1401c7f3e(&local_68,local_88,local_78);
    puVar10 = local_68;
    if (local_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar10,1);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    param_3 = local_58;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  bVar4 = true;
  if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar8 = (uint)param_3 & 0xffff;
    plVar7 = param_1 + 0x68;
    if ((longlong *)param_1[0x69] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x69];
    }
    iVar9 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[0x6a] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar2 = param_1[0x61] + (longlong)iVar9 * 0x20;
        if (*(longlong *)(param_1[0x61] + (longlong)iVar9 * 0x20) == param_3) {
          if ((lVar2 != 0) && (plVar7 = *(longlong **)(lVar2 + 0x10), plVar7 != (longlong *)0x0)) {
            lVar2 = *(longlong *)(lVar2 + 8);
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            iVar9 = (int)plVar7[1];
            goto LAB_1469604e0;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x18);
      } while (iVar9 != -1);
    }
  }
  plVar11 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  bVar12 = true;
LAB_1469602d8:
  if ((param_1[0x75] == 0) ||
     (plVar6 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar6 == (longlong *)0x0)) {
    if (param_6 != (longlong *)0x0) {
      param_1 = param_6;
    }
    local_98 = param_5;
    (**(code **)(*param_1 + 0xb0))(param_1,&local_68,local_50,param_4);
    lVar2 = CONCAT44(uStack_5c,local_60);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    if (!bVar4) {
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar11 = (longlong *)CONCAT44(uStack_5c,local_60);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    *param_2 = (longlong)local_68;
    param_2[1] = lVar2;
  }
  else {
    local_98 = param_5;
    local_90 = 0;
    (**(code **)(*plVar6 + 0x60))(plVar6,param_2,local_50,param_4);
    if (!bVar4) {
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  if (bVar12) goto LAB_146960492;
  goto LAB_146960482;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar12 = iVar9 == iVar5;
    if (bVar12) {
      *(int *)(plVar7 + 1) = iVar9 + 1;
      iVar5 = iVar9;
    }
    iVar9 = iVar5;
    UNLOCK();
    if (bVar12) break;
LAB_1469604e0:
    if (iVar9 == 0) {
      plVar11 = (longlong *)0x0;
      goto LAB_146960500;
    }
  }
  if (lVar2 == 0) {
    bVar4 = false;
    plVar11 = plVar7;
LAB_146960500:
    bVar12 = false;
    goto LAB_1469602d8;
  }
  *param_2 = lVar2;
  param_2[1] = (longlong)plVar7;
LAB_146960482:
  LOCK();
  piVar1 = (int *)((longlong)plVar7 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_146960492:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146960510 FUN_146960510 body=745 status=ok
// SIG undefined FUN_146960510(void)

longlong * FUN_146960510(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  longlong local_90;
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
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_141160160(&local_90);
  if ((int)param_1[0x4e] != *(int *)((longlong)param_1 + 0x29c)) {
    uVar2 = (uint)((ulonglong)local_90 >> 0x10);
    uVar5 = (uint)local_90 & 0xffff;
    plVar4 = param_1 + 0x54;
    if ((longlong *)param_1[0x55] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x55];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x56] - 1U &
                    (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(param_1[0x4d] + (longlong)iVar3 * 0x28);
        if (*plVar4 == local_90) {
          if (plVar4 != (longlong *)0x0) {
            plVar4 = plVar4 + 1;
            goto LAB_146960739;
          }
          break;
        }
        iVar3 = (int)plVar4[4];
      } while (iVar3 != -1);
    }
  }
  if ((param_1[0x75] == 0) ||
     (plVar4 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar4 == (longlong *)0x0)) {
    if (param_4 != (longlong *)0x0) {
      param_1 = param_4;
    }
    FUN_145715fae(local_b0,&local_90);
    local_58 = L"UknownSound";
    local_50 = 0xb;
    FUN_1446e940c(local_d4,&local_58);
    local_58 = L"SlateStyleSet";
    local_50 = 0xd;
    FUN_1446e940c(local_d8,&local_58);
    FUN_140208bae(local_d0,local_d8,local_d4,L"Unable to find Sound \'{0}\'.");
    FUN_14023409e(&local_c0,local_d0,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_b0);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_c0;
    local_80 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0xa8))(param_1,3,local_a0,&local_90);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    plVar4 = (longlong *)&DAT_14c98de18;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x80))(plVar4,param_2,param_3,0);
  }
LAB_146960739:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1469607fa FUN_1469607fa body=725 status=ok
// SIG undefined FUN_1469607fa(void)

undefined8 * FUN_1469607fa(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146960ad0(param_1 + 0x30,&local_48);
  local_58 = local_48;
  local_50 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_146960c0a(param_1 + 0x80,&local_48);
  local_68 = local_48;
  local_60 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_146960d46(param_1 + 0xd0,&local_48);
  local_78 = local_48;
  local_70 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_146960e82(param_1 + 0x120,&local_48);
  local_88 = local_48;
  local_80 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_146960fbc(param_1 + 0x170,&local_48);
  local_98 = local_48;
  local_90 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1469610f8(param_1 + 0x1c0,&local_48);
  local_a8 = local_48;
  local_a0 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_146961232(param_1 + 0x218,&local_48);
  local_b8 = local_48;
  local_b0 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_14696136e(param_1 + 0x268,&local_48);
  local_c8 = local_48;
  local_c0 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1469614aa(param_1 + 0x2b8,&local_48);
  local_d8 = local_48;
  local_d0 = (undefined4)uStack_40;
  FUN_140ce09a0(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146960ad0 FUN_146960ad0 body=311 status=ok
// SIG undefined FUN_146960ad0(void)

void FUN_146960ad0(longlong *param_1,longlong *param_2)

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
    FUN_1402191ca(param_2);
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
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x20 + lVar1);
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



// FUNCTION 146960c0a FUN_146960c0a body=314 status=ok
// SIG undefined FUN_146960c0a(void)

void FUN_146960c0a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x14 + lVar1);
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



// FUNCTION 146960d46 FUN_146960d46 body=314 status=ok
// SIG undefined FUN_146960d46(void)

void FUN_146960d46(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x18 + lVar1);
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



// FUNCTION 146960e82 FUN_146960e82 body=311 status=ok
// SIG undefined FUN_146960e82(void)

void FUN_146960e82(longlong *param_1,longlong *param_2)

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
    FUN_1402191ca(param_2);
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
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x20 + lVar1);
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



// FUNCTION 146960fbc FUN_146960fbc body=314 status=ok
// SIG undefined FUN_146960fbc(void)

void FUN_146960fbc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x24 + lVar1);
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



// FUNCTION 1469610f8 FUN_1469610f8 body=311 status=ok
// SIG undefined FUN_1469610f8(void)

void FUN_1469610f8(longlong *param_1,longlong *param_2)

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
    FUN_1402191ca(param_2);
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
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x20 + lVar1);
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



// FUNCTION 146961232 FUN_146961232 body=314 status=ok
// SIG undefined FUN_146961232(void)

void FUN_146961232(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x18 + lVar1);
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



// FUNCTION 14696136e FUN_14696136e body=314 status=ok
// SIG undefined FUN_14696136e(void)

void FUN_14696136e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x28 + lVar1);
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



// FUNCTION 1469614aa FUN_1469614aa body=310 status=ok
// SIG undefined FUN_1469614aa(void)

void FUN_1469614aa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x70 + lVar1);
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



// FUNCTION 1469615e2 FUN_1469615e2 body=830 status=ok
// SIG undefined FUN_1469615e2(void)

void FUN_1469615e2(longlong *param_1,undefined1 param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_148 [47];
  undefined1 local_119;
  longlong *local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((int)param_1[0x6c] != *(int *)((longlong)param_1 + 0x38c)) {
    lVar8 = *param_4;
    uVar3 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    plVar5 = param_1 + 0x72;
    if ((longlong *)param_1[0x73] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x73];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0x74] - 1U &
                    (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar2 = param_1[0x6b];
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar7 * 0x10) == lVar8) goto LAB_146961870;
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar2 + 8);
      } while (iVar7 != -1);
    }
  }
  local_d8 = (longlong *)*param_3;
  local_119 = param_2;
  local_118 = param_4;
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  local_d0 = (undefined4)param_3[1];
  uVar4 = (**(code **)(*param_1 + 8))(param_1);
  FUN_145715fae(local_e8,uVar4);
  local_88 = L"SlateSetResourceMissing";
  local_80[0] = 0x17;
  FUN_1446e940c(local_10c,&local_88);
  local_88 = L"SlateStyleSet";
  local_80[0] = 0xd;
  FUN_1446e940c(local_110,&local_88);
  FUN_140208bae(local_108,local_110,local_10c,L"Missing Resource from \'{0}\' Style: \'{1}\'");
  FUN_14023409e(&local_f8,local_108,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_e8);
  local_68 = 4;
  FUN_14023423e(local_58,&local_d8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
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
  lVar8 = 0x30;
  do {
    plVar5 = *(longlong **)((longlong)local_80 + lVar8 + -8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar8 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar8) = 0;
    }
    lVar8 = lVar8 + -0x20;
  } while (lVar8 != -0x10);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  FUN_144a13f80(param_1 + 0x6b,&local_88,local_118,0);
  (**(code **)(*param_1 + 0xa0))(param_1,local_119,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
LAB_146961870:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146961922 FUN_146961922 body=1112 status=ok
// SIG undefined FUN_146961922(void)

longlong *
FUN_146961922(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  longlong local_88 [2];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_3;
  local_60 = param_3;
  if (param_5 != 0) {
    FUN_1400021e4(&param_5,&local_78);
    FUN_1400021e4(&local_60,local_88);
    FUN_1401c7f3e(&local_58,local_88,&local_78);
    plVar4 = local_58;
    if ((int)plStack_50 == 0) {
      plVar4 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,plVar4,1);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    lVar6 = local_68;
    if (local_78 != 0) {
      FUN_1400020a8();
      lVar6 = local_68;
    }
  }
  local_68 = lVar6;
  if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
    uVar2 = (uint)((ulonglong)local_68 >> 0x10);
    uVar9 = (uint)local_68 & 0xffff;
    plVar4 = param_1 + 0x68;
    if ((longlong *)param_1[0x69] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x69];
    }
    iVar10 = *(int *)((longlong)plVar4 +
                     (ulonglong)
                     ((int)param_1[0x6a] - 1U &
                     (int)((ulonglong)local_68 >> 0x20) + ((uint)local_68 << 0x10 | uVar9) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      lVar6 = param_1[0x61];
      do {
        lVar7 = lVar6 + (longlong)iVar10 * 0x20;
        if (*(longlong *)(lVar6 + (longlong)iVar10 * 0x20) == local_68) {
          if ((lVar7 != 0) && (plVar4 = *(longlong **)(lVar7 + 0x10), plVar4 != (longlong *)0x0)) {
            lVar6 = *(longlong *)(lVar7 + 8);
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            *param_2 = 0;
            param_2[1] = (longlong)plVar4;
            iVar10 = (int)plVar4[1];
            goto LAB_146961b12;
          }
          break;
        }
        iVar10 = *(int *)(lVar7 + 0x18);
      } while (iVar10 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  bVar12 = true;
  plVar4 = (longlong *)0x0;
LAB_146961a19:
  lVar6 = *param_2;
  goto LAB_146961a1c;
  while( true ) {
    LOCK();
    iVar3 = (int)plVar4[1];
    bVar12 = iVar10 == iVar3;
    if (bVar12) {
      *(int *)(plVar4 + 1) = iVar10 + 1;
      iVar3 = iVar10;
    }
    iVar10 = iVar3;
    UNLOCK();
    if (bVar12) break;
LAB_146961b12:
    if (iVar10 == 0) {
      param_2[1] = 0;
      goto LAB_146961c19;
    }
  }
  if (param_2[1] == 0) {
LAB_146961c19:
    bVar12 = false;
    goto LAB_146961a19;
  }
  *param_2 = lVar6;
  bVar12 = false;
LAB_146961a1c:
  if (lVar6 != 0) goto LAB_146961a25;
  uVar5 = (**(code **)(*param_1 + 0x78))(param_1);
  lVar6 = (**(code **)(*param_1 + 0x58))(param_1,local_60,0,uVar5);
  lVar7 = FUN_14001cc68(0xd0,0x10);
  local_98 = &local_58;
  local_58 = (longlong *)&DAT_3f8000003f800000;
  plStack_50 = (longlong *)&DAT_3f8000003f800000;
  local_78 = *(longlong *)(lVar6 + 0x20);
  FUN_146961d7c(lVar7,param_4,&local_78,local_68);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149ed05b0;
  plVar8[2] = lVar7;
  if ((lVar7 != 0) &&
     (((*(longlong *)(lVar7 + 0xb0) == 0 || (*(longlong *)(lVar7 + 0xb8) == 0)) ||
      (*(int *)(*(longlong *)(lVar7 + 0xb8) + 8) < 1)))) {
    if (plVar8 == (longlong *)0x0) {
      *(longlong *)(lVar7 + 0xb0) = lVar7;
      plVar11 = *(longlong **)(lVar7 + 0xb8);
      if (plVar11 != (longlong *)0x0) {
LAB_146961c6a:
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        *(longlong **)(lVar7 + 0xb8) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_146961d2a;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *(longlong *)(lVar7 + 0xb0) = lVar7;
      if (*(longlong **)(lVar7 + 0xb8) != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar11 = *(longlong **)(lVar7 + 0xb8);
        if (plVar11 != (longlong *)0x0) goto LAB_146961c6a;
        *(longlong **)(lVar7 + 0xb8) = plVar8;
      }
LAB_146961d2a:
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  *param_2 = lVar7;
  plVar11 = (longlong *)param_2[1];
  if (plVar8 == plVar11) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1;
        UNLOCK();
joined_r0x000146961cac:
        if (iVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1;
        UNLOCK();
        plVar8 = plVar11;
        goto joined_r0x000146961cac;
      }
    }
  }
  local_78 = *param_2;
  local_70 = (longlong *)param_2[1];
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = &local_68;
  plStack_50 = &local_78;
  FUN_146972e12(param_1 + 0x61,local_88);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_146961a25:
  if (!bVar12) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146961d7c FUN_146961d7c body=258 status=ok
// SIG undefined FUN_146961d7c(void)

undefined8 *
FUN_146961d7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446f470e(&local_70,&DAT_149e01fe8,1);
  local_90 = param_5;
  local_80 = 0;
  local_a0 = 1;
  local_a8 = 0;
  local_98 = param_3;
  local_88 = param_2;
  FUN_1412ce282(param_1,3,local_70,&local_68);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_149ed05a0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc | 2;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 1;
  FUN_146965b76(param_1,param_4);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146961e80 FUN_146961e80 body=1094 status=ok
// SIG undefined FUN_146961e80(void)

void FUN_146961e80(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_98 = 0;
  uStack_90 = 0;
  plVar4 = (longlong *)FUN_14054d1d4();
  FUN_1400b22c2(&local_c0,"*.png");
  puVar10 = &DAT_149dfb77a;
  plVar11 = (longlong *)&DAT_149dfb77a;
  if ((int)local_b8 != 0) {
    plVar11 = local_c0;
  }
  if ((int)param_1[3] != 0) {
    puVar10 = (undefined2 *)param_1[2];
  }
  uVar6 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 1;
  (**(code **)(*plVar4 + 0x80))(plVar4,&local_98,puVar10,plVar11);
  if (local_c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_90 != 0) {
    lVar12 = (longlong)(int)uStack_90 * 0x10 + local_98;
    local_e8 = param_1 + 0x43;
    local_e0 = param_1 + 0x45;
    plVar11 = param_1 + 6;
    local_d8 = param_1 + 8;
    lVar9 = local_98;
    local_d0 = lVar12;
    local_c8 = param_1;
    do {
      local_88 = 0x100000000;
      plStack_80 = local_e0;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      iVar8 = 0;
      if ((int)param_1[0x48] != 0) {
        FUN_1449c0562(&local_88);
        iVar8 = (int)param_1[0x48];
      }
      local_a8 = local_78;
      uVar1 = local_a8;
      uStack_a0 = CONCAT44(uStack_6c,uStack_70);
      local_b8 = local_88;
      plStack_b0 = plStack_80;
      local_c0 = local_e8;
      local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar3 = local_a8._4_4_;
      if ((local_a8._4_4_ != iVar8) || (local_a8 = uVar1, plStack_80 != local_e0)) {
        do {
          local_a8 = uVar1;
          cVar2 = FUN_1469622c8(lVar9,*(undefined8 *)(*local_c0 + 8 + (longlong)iVar3 * 0x18));
          if (cVar2 != '\0') goto LAB_146962104;
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar3 = local_a8._4_4_;
          uVar1 = local_a8;
        } while (local_c0 != local_e8 || (plStack_b0 != local_e0 || local_a8._4_4_ != iVar8));
      }
      local_88 = 0x100000000;
      plStack_80 = local_d8;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      if ((int)param_1[0xb] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        iVar8 = (int)param_1[0xb];
      }
      uStack_a0 = CONCAT44(uStack_6c,uStack_70);
      local_a8 = local_78;
      uVar1 = local_a8;
      local_b8 = local_88;
      plStack_b0 = plStack_80;
      local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar3 = local_a8._4_4_;
      local_c0 = plVar11;
      if ((local_a8._4_4_ != iVar8) || (local_a8 = uVar1, plStack_80 != local_d8)) {
        do {
          local_a8 = uVar1;
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          plVar4 = *(longlong **)(*local_c0 + 8 + (longlong)iVar3 * 0x20);
          (**(code **)(*plVar4 + 8))(plVar4,&local_88);
          lVar12 = local_88;
          lVar5 = (longlong)(int)plStack_80;
          if (lVar5 == 0) {
            cVar2 = '\0';
          }
          else {
            lVar7 = 0;
            do {
              cVar2 = FUN_1469622c8(lVar9,*(undefined8 *)(lVar12 + lVar7));
              if (cVar2 != '\0') break;
              bVar13 = lVar5 * 8 + -8 != lVar7;
              lVar7 = lVar7 + 8;
            } while (bVar13);
          }
          if (local_88 != 0) {
            FUN_1400020a8(local_88);
          }
          lVar12 = local_d0;
          param_1 = local_c8;
          if (cVar2 != '\0') goto LAB_146962104;
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar3 = local_a8._4_4_;
          uVar1 = local_a8;
        } while (local_c0 != plVar11 || (plStack_b0 != local_d8 || local_a8._4_4_ != iVar8));
      }
      FUN_140009b9a(&local_c0,lVar9);
      param_1 = local_c8;
      (**(code **)(*local_c8 + 0xa0))(local_c8,3,&local_c0);
      lVar12 = local_d0;
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
LAB_146962104:
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar12);
    uVar6 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar6);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469622c8 FUN_1469622c8 body=290 status=ok
// SIG undefined FUN_1469622c8(void)

ulonglong FUN_1469622c8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined2 **)(param_2 + 0xa8);
  if (local_40 == (undefined2 *)0x0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x18);
    if (*(longlong *)(param_2 + 0x38) == 0) {
      puVar2 = (undefined8 *)(param_2 + 0xa8);
    }
    local_40 = (undefined2 *)*puVar2;
  }
  FUN_1400021e4(&local_40,&local_30);
  FUN_1401ae5e4(&local_30);
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined2 *)*param_1;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  iVar1 = FUN_144a80a00(puVar3,puVar4);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar1 == 0) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    FUN_1401aea18(&local_40,param_1);
    FUN_1401aea18(&local_50,&local_30);
    puVar4 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar4 = local_40;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    iVar1 = FUN_144a80a00(puVar3,puVar4);
    uVar5 = CONCAT71(uVar6,iVar1 == 0);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146962418 FUN_146962418 body=108 status=ok
// SIG undefined FUN_146962418(void)

undefined * FUN_146962418(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96c110) {
    FUN_144b3d300(&DAT_14c96c110);
    if (DAT_14c96c110 == -1) {
      FUN_1414c3a06(&DAT_14c96b7c0);
      atexit((_func_5014 *)&LAB_142874336);
      _Init_thread_footer(&DAT_14c96c110);
    }
  }
  return &DAT_14c96b7c0;
}



// FUNCTION 146962484 FUN_146962484 body=108 status=ok
// SIG undefined FUN_146962484(void)

undefined * FUN_146962484(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96c4a0) {
    FUN_144b3d300(&DAT_14c96c4a0);
    if (DAT_14c96c4a0 == -1) {
      FUN_140ca8d78(&DAT_14c96c130);
      atexit((_func_5014 *)&LAB_14287437d);
      _Init_thread_footer(&DAT_14c96c4a0);
    }
  }
  return &DAT_14c96c130;
}



// FUNCTION 1469624f0 FUN_1469624f0 body=108 status=ok
// SIG undefined FUN_1469624f0(void)

undefined * FUN_1469624f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96c9f0) {
    FUN_144b3d300(&DAT_14c96c9f0);
    if (DAT_14c96c9f0 == -1) {
      FUN_140f13d18(&DAT_14c96c4b0);
      atexit((_func_5014 *)&LAB_142874389);
      _Init_thread_footer(&DAT_14c96c9f0);
    }
  }
  return &DAT_14c96c4b0;
}



// FUNCTION 14696255c FUN_14696255c body=108 status=ok
// SIG undefined FUN_14696255c(void)

undefined * FUN_14696255c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96cfa0) {
    FUN_144b3d300(&DAT_14c96cfa0);
    if (DAT_14c96cfa0 == -1) {
      FUN_1457c71ee(&DAT_14c96ca00);
      atexit((_func_5014 *)&LAB_142874395);
      _Init_thread_footer(&DAT_14c96cfa0);
    }
  }
  return &DAT_14c96ca00;
}



// FUNCTION 1469625c8 FUN_1469625c8 body=144 status=ok
// SIG undefined FUN_1469625c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1469625c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96d620) {
    FUN_144b3d300(&DAT_14c96d620);
    if (DAT_14c96d620 == -1) {
      _DAT_14c96cfb0 = &PTR_FUN_149ee3300;
      FUN_140ca8d78(&DAT_14c96cfc0);
      FUN_140a581a0(&DAT_14c96d330);
      _DAT_14c96d610 = 0;
      uRam000000014c96d618 = 0;
      atexit(FUN_1428743af);
      _Init_thread_footer(&DAT_14c96d620);
    }
  }
  return &DAT_14c96cfb0;
}



// FUNCTION 146962658 FUN_146962658 body=107 status=ok
// SIG undefined FUN_146962658(void)

void FUN_146962658(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x80;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1e0;
  return;
}



// FUNCTION 1469626c4 FUN_1469626c4 body=108 status=ok
// SIG undefined FUN_1469626c4(void)

undefined * FUN_1469626c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96d8c0) {
    FUN_144b3d300(&DAT_14c96d8c0);
    if (DAT_14c96d8c0 == -1) {
      FUN_145c2d572(&DAT_14c96d630);
      atexit((_func_5014 *)&LAB_1428743dd);
      _Init_thread_footer(&DAT_14c96d8c0);
    }
  }
  return &DAT_14c96d630;
}



// FUNCTION 146962730 FUN_146962730 body=108 status=ok
// SIG undefined FUN_146962730(void)

undefined * FUN_146962730(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96e550) {
    FUN_144b3d300(&DAT_14c96e550);
    if (DAT_14c96e550 == -1) {
      FUN_1412cd24a(&DAT_14c96d8d0);
      atexit((_func_5014 *)&LAB_1428743e9);
      _Init_thread_footer(&DAT_14c96e550);
    }
  }
  return &DAT_14c96d8d0;
}



// FUNCTION 14696279c FUN_14696279c body=145 status=ok
// SIG undefined FUN_14696279c(void)

void FUN_14696279c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  return;
}



// FUNCTION 14696282e FUN_14696282e body=108 status=ok
// SIG undefined FUN_14696282e(void)

undefined * FUN_14696282e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96e790) {
    FUN_144b3d300(&DAT_14c96e790);
    if (DAT_14c96e790 == -1) {
      FUN_1459b653e(&DAT_14c96e560);
      atexit((_func_5014 *)&LAB_1428743f5);
      _Init_thread_footer(&DAT_14c96e790);
    }
  }
  return &DAT_14c96e560;
}



// FUNCTION 14696289a FUN_14696289a body=108 status=ok
// SIG undefined FUN_14696289a(void)

undefined * FUN_14696289a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96edf0) {
    FUN_144b3d300(&DAT_14c96edf0);
    if (DAT_14c96edf0 == -1) {
      FUN_1412cd7de(&DAT_14c96e7a0);
      atexit((_func_5014 *)&LAB_142874401);
      _Init_thread_footer(&DAT_14c96edf0);
    }
  }
  return &DAT_14c96e7a0;
}



// FUNCTION 146962906 FUN_146962906 body=104 status=ok
// SIG undefined FUN_146962906(void)

void FUN_146962906(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  return;
}



// FUNCTION 14696296e FUN_14696296e body=144 status=ok
// SIG undefined FUN_14696296e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14696296e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96ef80) {
    FUN_144b3d300(&DAT_14c96ef80);
    if (DAT_14c96ef80 == -1) {
      _DAT_14c96ee00 = &PTR_FUN_149eeb6d0;
      FUN_140ca8f8e(&DAT_14c96ee10);
      FUN_140ca8f8e(&DAT_14c96eec0);
      _DAT_14c96ef70 = 0x3dcccccd;
      atexit((_func_5014 *)&LAB_14287440d);
      _Init_thread_footer(&DAT_14c96ef80);
    }
  }
  return &DAT_14c96ee00;
}



// FUNCTION 1469629fe FUN_1469629fe body=108 status=ok
// SIG undefined FUN_1469629fe(void)

undefined * FUN_1469629fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96ff70) {
    FUN_144b3d300(&DAT_14c96ff70);
    if (DAT_14c96ff70 == -1) {
      FUN_1458a3616(&DAT_14c96ef90);
      atexit((_func_5014 *)&LAB_142874419);
      _Init_thread_footer(&DAT_14c96ff70);
    }
  }
  return &DAT_14c96ef90;
}



// FUNCTION 146962a6a FUN_146962a6a body=108 status=ok
// SIG undefined FUN_146962a6a(void)

undefined * FUN_146962a6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9703c0) {
    FUN_144b3d300(&DAT_14c9703c0);
    if (DAT_14c9703c0 == -1) {
      FUN_145931ccc(&DAT_14c96ff80);
      atexit((_func_5014 *)&LAB_142874425);
      _Init_thread_footer(&DAT_14c9703c0);
    }
  }
  return &DAT_14c96ff80;
}



// FUNCTION 146962ad6 FUN_146962ad6 body=57 status=ok
// SIG undefined FUN_146962ad6(void)

void FUN_146962ad6(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  return;
}



// FUNCTION 146962b10 FUN_146962b10 body=347 status=ok
// SIG undefined FUN_146962b10(void)

void FUN_146962b10(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x430;
  return;
}



// FUNCTION 146962c6c FUN_146962c6c body=108 status=ok
// SIG undefined FUN_146962c6c(void)

undefined * FUN_146962c6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c970900) {
    FUN_144b3d300(&DAT_14c970900);
    if (DAT_14c970900 == -1) {
      FUN_14134cd04(&DAT_14c9703e0);
      atexit((_func_5014 *)&LAB_142874431);
      _Init_thread_footer(&DAT_14c970900);
    }
  }
  return &DAT_14c9703e0;
}



// FUNCTION 146962cd8 FUN_146962cd8 body=134 status=ok
// SIG undefined FUN_146962cd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146962cd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c970a80) {
    FUN_144b3d300(&DAT_14c970a80);
    if (DAT_14c970a80 == -1) {
      _DAT_14c970910 = &PTR_FUN_149eeb510;
      FUN_140ca8f8e(&DAT_14c970920);
      FUN_140ca8f8e(&DAT_14c9709d0);
      atexit((_func_5014 *)&LAB_14287443d);
      _Init_thread_footer(&DAT_14c970a80);
    }
  }
  return &DAT_14c970910;
}



// FUNCTION 146962d5e FUN_146962d5e body=59 status=ok
// SIG undefined FUN_146962d5e(void)

void FUN_146962d5e(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  return;
}



// FUNCTION 146962d9a FUN_146962d9a body=108 status=ok
// SIG undefined FUN_146962d9a(void)

undefined * FUN_146962d9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c970b50) {
    FUN_144b3d300(&DAT_14c970b50);
    if (DAT_14c970b50 == -1) {
      FUN_141266cde(&DAT_14c970a90);
      atexit(FUN_142874449);
      _Init_thread_footer(&DAT_14c970b50);
    }
  }
  return &DAT_14c970a90;
}



// FUNCTION 146962e06 FUN_146962e06 body=694 status=ok
// SIG undefined FUN_146962e06(void)

void FUN_146962e06(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x440;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x390;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x4f0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x5a0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x650;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x700;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x7e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x890;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x940;
  return;
}



// FUNCTION 1469630bc FUN_1469630bc body=108 status=ok
// SIG undefined FUN_1469630bc(void)

undefined * FUN_1469630bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9716b0) {
    FUN_144b3d300(&DAT_14c9716b0);
    if (DAT_14c9716b0 == -1) {
      FUN_1457c724e(&DAT_14c970b60);
      atexit((_func_5014 *)&LAB_1428744a0);
      _Init_thread_footer(&DAT_14c9716b0);
    }
  }
  return &DAT_14c970b60;
}



// FUNCTION 146963128 FUN_146963128 body=108 status=ok
// SIG undefined FUN_146963128(void)

undefined * FUN_146963128(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c971d00) {
    FUN_144b3d300(&DAT_14c971d00);
    if (DAT_14c971d00 == -1) {
      FUN_14601d812(&DAT_14c9716c0);
      atexit((_func_5014 *)&LAB_1428744ac);
      _Init_thread_footer(&DAT_14c971d00);
    }
  }
  return &DAT_14c9716c0;
}



// FUNCTION 146963194 FUN_146963194 body=108 status=ok
// SIG undefined FUN_146963194(void)

undefined * FUN_146963194(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c972cb0) {
    FUN_144b3d300(&DAT_14c972cb0);
    if (DAT_14c972cb0 == -1) {
      FUN_14601d63e(&DAT_14c971d10);
      atexit((_func_5014 *)&LAB_1428744b8);
      _Init_thread_footer(&DAT_14c972cb0);
    }
  }
  return &DAT_14c971d10;
}



// FUNCTION 146963200 FUN_146963200 body=108 status=ok
// SIG undefined FUN_146963200(void)

undefined * FUN_146963200(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c973880) {
    FUN_144b3d300(&DAT_14c973880);
    if (DAT_14c973880 == -1) {
      FUN_1461d8918(&DAT_14c972cc0);
      atexit((_func_5014 *)&LAB_1428744c4);
      _Init_thread_footer(&DAT_14c973880);
    }
  }
  return &DAT_14c972cc0;
}



// FUNCTION 14696326c FUN_14696326c body=186 status=ok
// SIG undefined FUN_14696326c(void)

void FUN_14696326c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  return;
}



// FUNCTION 146963326 FUN_146963326 body=108 status=ok
// SIG undefined FUN_146963326(void)

undefined * FUN_146963326(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c973b80) {
    FUN_144b3d300(&DAT_14c973b80);
    if (DAT_14c973b80 == -1) {
      FUN_1458d9e50(&DAT_14c973890);
      atexit((_func_5014 *)&LAB_1428744d0);
      _Init_thread_footer(&DAT_14c973b80);
    }
  }
  return &DAT_14c973890;
}



// FUNCTION 146963392 FUN_146963392 body=104 status=ok
// SIG undefined FUN_146963392(void)

void FUN_146963392(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  return;
}



// FUNCTION 1469633fa FUN_1469633fa body=724 status=ok
// SIG undefined FUN_1469633fa(void)

void FUN_1469633fa(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 auStack_b8 [4];
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = FUN_146973352(param_1,param_3);
  if (cVar3 == '\0') {
    if ((longlong *)param_1[2] == (longlong *)0x0 || (int)param_1[3] == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    }
    if ((longlong *)param_3[2] == (longlong *)0x0 || (int)param_3[3] == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)(*(longlong *)param_3[2] + 0x30))();
    }
    *(char *)(param_1 + 1) = (char)param_3[1];
    *param_1 = *param_3;
    FUN_140a5c3e8(param_1 + 2,param_3 + 2);
    uVar9 = 1;
    if (cVar5 != cVar4) {
      uVar9 = 7;
    }
    FUN_140163244(param_2,uVar9);
  }
  if (((int)param_1[3] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    if (cVar5 != '\0') {
      if ((int)param_1[3] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[2];
      }
      lVar6 = (**(code **)(*plVar8 + 0x58))();
      *param_1 = lVar6;
      goto LAB_1469634e6;
    }
  }
  lVar6 = *param_1;
LAB_1469634e6:
  local_f8 = &PTR_FUN_149ed05f0;
  if (lVar6 == 0) {
    local_f0 = &DAT_3f8000003f800000;
    puStack_e8 = &DAT_3f8000003f800000;
    local_e0 = local_e0 & 0xffffff00;
    uStack_dc = 3;
    uStack_d8 = 0x4200000042000000;
    local_84 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    auStack_b8[0] = 0;
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    auStack_b8[3] = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    local_80 = 1;
    local_78 = DAT_14c84635c;
    local_68 = local_68 & 0xffffff00;
    local_64 = 4;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    local_70 = local_78;
  }
  else {
    local_f0 = *(undefined1 **)(lVar6 + 8);
    puStack_e8 = *(undefined1 **)(lVar6 + 0x10);
    local_e0 = *(uint *)(lVar6 + 0x18);
    uStack_dc = *(undefined4 *)(lVar6 + 0x1c);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x20);
    local_d0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_c8 = *(undefined8 *)(lVar6 + 0x30);
    local_c0 = *(longlong *)(lVar6 + 0x38);
    if ((DAT_14c950c29 == '\x01') && (local_c0 != 0)) {
      FUN_1456cec3c();
    }
    puVar10 = (undefined8 *)(lVar6 + 0x40);
    puVar11 = auStack_b8;
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    local_64 = *(undefined1 *)(lVar6 + 0x94);
    local_68 = *(uint *)(lVar6 + 0x90);
    local_60 = *(undefined8 *)(lVar6 + 0x98);
    plStack_58 = *(longlong **)(lVar6 + 0xa0);
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
      UNLOCK();
    }
    local_50 = *(undefined8 *)(lVar6 + 0xa8);
  }
  if (cVar3 != '\0') {
    cVar3 = FUN_1469688aa(param_1 + 4,&local_f8);
    if (cVar3 == '\0') {
      FUN_140163244(param_2,1);
    }
  }
  FUN_140f13d9e(param_1 + 4,&local_f8);
  plVar8 = plStack_58;
  local_f8 = &PTR_FUN_149ed05f0;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469636e2 FUN_1469636e2 body=38 status=ok
// SIG undefined FUN_1469636e2(void)

undefined8 FUN_1469636e2(undefined8 param_1,int param_2)

{
  FUN_140e848f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963708 FUN_146963708 body=32 status=ok
// SIG undefined FUN_146963708(void)

undefined8 FUN_146963708(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSlateDrawBuffer for Uncached Elements");
  return param_2;
}



// FUNCTION 146963734 FUN_146963734 body=51 status=ok
// SIG undefined FUN_146963734(void)

undefined8 FUN_146963734(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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



// FUNCTION 146963778 FUN_146963778 body=41 status=ok
// SIG undefined FUN_146963778(void)

undefined8 FUN_146963778(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x88))();
  return param_2;
}



// FUNCTION 1469637d8 FUN_1469637d8 body=29 status=ok
// SIG undefined FUN_1469637d8(void)

undefined8 FUN_1469637d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963804 FUN_146963804 body=38 status=ok
// SIG undefined FUN_146963804(void)

undefined8 FUN_146963804(undefined8 param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14696382a FUN_14696382a body=38 status=ok
// SIG undefined FUN_14696382a(void)

undefined8 FUN_14696382a(undefined8 param_1,int param_2)

{
  FUN_145d8e7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14696385e FUN_14696385e body=83 status=ok
// SIG undefined FUN_14696385e(void)

undefined8 * FUN_14696385e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1469638b2 FUN_1469638b2 body=38 status=ok
// SIG undefined FUN_1469638b2(void)

undefined8 FUN_1469638b2(undefined8 param_1,int param_2)

{
  FUN_140ffdb16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469638e6 FUN_1469638e6 body=38 status=ok
// SIG undefined FUN_1469638e6(void)

undefined8 FUN_1469638e6(undefined8 param_1,int param_2)

{
  FUN_140ffd624();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14696391a FUN_14696391a body=52 status=ok
// SIG undefined FUN_14696391a(void)

undefined8 * FUN_14696391a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ee32c0;
  FUN_140ffd624(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14696395c FUN_14696395c body=64 status=ok
// SIG undefined FUN_14696395c(void)

undefined8 * FUN_14696395c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ee3300;
  FUN_140e9e952(param_1 + 0x70);
  FUN_140ffd6b6(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469639aa FUN_1469639aa body=38 status=ok
// SIG undefined FUN_1469639aa(void)

undefined8 FUN_1469639aa(undefined8 param_1,int param_2)

{
  FUN_1458a2df2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469639de FUN_1469639de body=38 status=ok
// SIG undefined FUN_1469639de(void)

undefined8 FUN_1469639de(undefined8 param_1,int param_2)

{
  FUN_140ffd7a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963a12 FUN_146963a12 body=64 status=ok
// SIG undefined FUN_146963a12(void)

undefined8 * FUN_146963a12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeb490;
  FUN_140e9e952(param_1 + 0x192);
  FUN_140ffd7a4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963a60 FUN_146963a60 body=38 status=ok
// SIG undefined FUN_146963a60(void)

undefined8 FUN_146963a60(undefined8 param_1,int param_2)

{
  FUN_14594e52c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963a94 FUN_146963a94 body=38 status=ok
// SIG undefined FUN_146963a94(void)

undefined8 FUN_146963a94(undefined8 param_1,int param_2)

{
  FUN_140ffd8aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963ac8 FUN_146963ac8 body=38 status=ok
// SIG undefined FUN_146963ac8(void)

undefined8 FUN_146963ac8(undefined8 param_1,int param_2)

{
  FUN_145924cf8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963afc FUN_146963afc body=38 status=ok
// SIG undefined FUN_146963afc(void)

undefined8 FUN_146963afc(undefined8 param_1,int param_2)

{
  FUN_145c1658a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963b30 FUN_146963b30 body=38 status=ok
// SIG undefined FUN_146963b30(void)

undefined8 FUN_146963b30(undefined8 param_1,int param_2)

{
  FUN_14130c426();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963b64 FUN_146963b64 body=38 status=ok
// SIG undefined FUN_146963b64(void)

undefined8 FUN_146963b64(undefined8 param_1,int param_2)

{
  FUN_145df0796();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963b98 FUN_146963b98 body=97 status=ok
// SIG undefined FUN_146963b98(void)

undefined8 * FUN_146963b98(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3520;
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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



// FUNCTION 146963c08 FUN_146963c08 body=38 status=ok
// SIG undefined FUN_146963c08(void)

undefined8 FUN_146963c08(undefined8 param_1,int param_2)

{
  FUN_141147850();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963c3c FUN_146963c3c body=38 status=ok
// SIG undefined FUN_146963c3c(void)

undefined8 FUN_146963c3c(undefined8 param_1,int param_2)

{
  FUN_145979364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963c70 FUN_146963c70 body=97 status=ok
// SIG undefined FUN_146963c70(void)

undefined8 * FUN_146963c70(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb4b0;
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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



// FUNCTION 146963ce0 FUN_146963ce0 body=38 status=ok
// SIG undefined FUN_146963ce0(void)

undefined8 FUN_146963ce0(undefined8 param_1,int param_2)

{
  FUN_1415bbd66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963d14 FUN_146963d14 body=38 status=ok
// SIG undefined FUN_146963d14(void)

undefined8 FUN_146963d14(undefined8 param_1,int param_2)

{
  FUN_1414034a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963d48 FUN_146963d48 body=38 status=ok
// SIG undefined FUN_146963d48(void)

undefined8 FUN_146963d48(undefined8 param_1,int param_2)

{
  FUN_1459792ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963d7c FUN_146963d7c body=38 status=ok
// SIG undefined FUN_146963d7c(void)

undefined8 FUN_146963d7c(undefined8 param_1,int param_2)

{
  FUN_145b07012();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963db0 FUN_146963db0 body=38 status=ok
// SIG undefined FUN_146963db0(void)

undefined8 FUN_146963db0(undefined8 param_1,int param_2)

{
  FUN_1458e4f8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963de4 FUN_146963de4 body=38 status=ok
// SIG undefined FUN_146963de4(void)

undefined8 FUN_146963de4(undefined8 param_1,int param_2)

{
  FUN_145b015f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963e18 FUN_146963e18 body=38 status=ok
// SIG undefined FUN_146963e18(void)

undefined8 FUN_146963e18(undefined8 param_1,int param_2)

{
  FUN_145e0e5a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963e3e FUN_146963e3e body=45 status=ok
// SIG undefined FUN_146963e3e(void)

longlong FUN_146963e3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963e72 FUN_146963e72 body=79 status=ok
// SIG undefined FUN_146963e72(void)

void FUN_146963e72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x98);
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
                    /* WARNING: Could not recover jumptable at 0x000146963eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146963ec2 FUN_146963ec2 body=24 status=ok
// SIG undefined FUN_146963ec2(void)

void FUN_146963ec2(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 146963eda FUN_146963eda body=29 status=ok
// SIG undefined FUN_146963eda(void)

undefined8 FUN_146963eda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146963ef8 FUN_146963ef8 body=2 status=ok
// SIG undefined FUN_146963ef8(void)

void FUN_146963ef8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146963efa FUN_146963efa body=69 status=ok
// SIG undefined FUN_146963efa(void)

void FUN_146963efa(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar1 = param_1;
    }
    FUN_1402bc997(lVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  FUN_146963f76(param_1);
  return;
}



// FUNCTION 146963f40 FUN_146963f40 body=53 status=ok
// SIG undefined FUN_146963f40(void)

void FUN_146963f40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1402bc997(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146963f76 FUN_146963f76 body=76 status=ok
// SIG undefined FUN_146963f76(void)

void FUN_146963f76(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1402bc997(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == param_2) {
    return;
  }
  FUN_146963fc4(param_1,param_2);
  return;
}



// FUNCTION 146963fc4 FUN_146963fc4 body=85 status=ok
// SIG undefined FUN_146963fc4(void)

void FUN_146963fc4(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  FUN_14696401a(param_1,*(undefined4 *)(param_1 + 0x18),uVar3,0x10);
  return;
}



// FUNCTION 14696401a FUN_14696401a body=133 status=ok
// SIG undefined FUN_14696401a(void)

void FUN_14696401a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1469640a0 FUN_1469640a0 body=627 status=ok
// SIG undefined FUN_1469640a0(void)

void FUN_1469640a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (float)((ulonglong)param_4 >> 0x20);
  while( true ) {
    fVar2 = (float)((ulonglong)param_1 >> 0x20);
    fVar4 = (float)param_2;
    fVar5 = (float)((ulonglong)param_2 >> 0x20);
    fVar6 = (float)param_3;
    fVar8 = (float)((ulonglong)param_3 >> 0x20);
    if (ABS((fVar1 + fVar5) - (fVar8 + fVar8)) +
        ABS(((float)param_4 + fVar4) - (fVar6 + fVar6)) +
        ABS((fVar2 + fVar8) - (fVar5 + fVar5)) + ABS(((float)param_1 + fVar6) - (fVar4 + fVar4)) <=
        1.0) break;
    fVar3 = (fVar2 + fVar5) * 0.5;
    fVar2 = ((float)param_1 + fVar4) * 0.5;
    fVar9 = (fVar5 + fVar8) * 0.5;
    fVar7 = (fVar4 + fVar6) * 0.5;
    fVar10 = (fVar8 + fVar1) * 0.5;
    fVar6 = (fVar6 + (float)param_4) * 0.5;
    fVar4 = (fVar3 + fVar9) * 0.5;
    fVar5 = (fVar2 + fVar7) * 0.5;
    fVar9 = (fVar9 + fVar10) * 0.5;
    fVar8 = (fVar7 + fVar6) * 0.5;
    param_1 = CONCAT44((fVar4 + fVar9) * 0.5,(fVar5 + fVar8) * 0.5);
    FUN_1469640a0(fVar2,CONCAT44(fVar3,fVar2),CONCAT44(fVar4,fVar5),param_1,param_5);
    param_3 = CONCAT44(fVar10,fVar6);
    param_2 = CONCAT44(fVar9,fVar8);
  }
  FUN_146964636(param_5,param_4,param_5 + 0x30);
  return;
}



// FUNCTION 146964314 FUN_146964314 body=802 status=ok
// SIG undefined FUN_146964314(void)

void FUN_146964314(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar15 = DAT_14c84635c;
  if (2 < *(int *)((longlong)param_1 + 0x2c)) {
    fVar19 = *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 5);
    fVar18 = *(float *)(param_1 + 5) * *(float *)(param_1 + 4);
    lVar11 = *param_1;
    pfVar12 = (float *)param_1[1];
    uVar8 = *param_3;
    fVar17 = *(float *)((longlong)param_1 + 0x14) + fVar19;
    fVar20 = *(float *)(param_1 + 2) + fVar18;
    fVar2 = pfVar12[3];
    fVar3 = pfVar12[1];
    fVar4 = pfVar12[2];
    fVar5 = *pfVar12;
    fVar6 = pfVar12[5];
    fVar7 = pfVar12[4];
    lVar13 = *(longlong *)(lVar11 + 0x50);
    iVar9 = *(int *)(lVar13 + 8);
    *(int *)(lVar13 + 8) = iVar9 + 1;
    if (*(int *)(lVar13 + 0xc) == iVar9) {
      FUN_146964c32(lVar13,iVar9);
    }
    lVar13 = **(longlong **)(lVar11 + 0x50);
    lVar16 = (longlong)iVar9 * 0x2c;
    *(undefined8 *)(lVar13 + lVar16) = 0x3f800000;
    *(int *)(lVar13 + 8 + lVar16) = (int)uVar15;
    *(int *)(lVar13 + 0xc + lVar16) = (int)((ulonglong)uVar15 >> 0x20);
    *(float *)(lVar13 + 0x18 + lVar16) = fVar20 * fVar5 + fVar17 * fVar4 + fVar7;
    *(float *)(lVar13 + 0x1c + lVar16) = fVar3 * fVar20 + fVar2 * fVar17 + fVar6;
    *(undefined4 *)(lVar13 + 0x20 + lVar16) = uVar8;
    *(undefined4 *)(lVar13 + 0x24 + lVar16) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    uVar15 = DAT_14c84635c;
    lVar11 = *param_1;
    pfVar12 = (float *)param_1[1];
    uVar8 = *param_3;
    fVar19 = *(float *)((longlong)param_1 + 0x14) - fVar19;
    fVar18 = *(float *)(param_1 + 2) - fVar18;
    fVar2 = pfVar12[3];
    fVar3 = pfVar12[1];
    fVar4 = pfVar12[2];
    fVar5 = *pfVar12;
    fVar6 = pfVar12[5];
    fVar7 = pfVar12[4];
    lVar13 = *(longlong *)(lVar11 + 0x50);
    iVar9 = *(int *)(lVar13 + 8);
    *(int *)(lVar13 + 8) = iVar9 + 1;
    if (*(int *)(lVar13 + 0xc) == iVar9) {
      FUN_146964c32(lVar13,iVar9);
    }
    lVar13 = **(longlong **)(lVar11 + 0x50);
    lVar16 = (longlong)iVar9 * 0x2c;
    *(undefined8 *)(lVar13 + lVar16) = 0xbf800000;
    *(int *)(lVar13 + 8 + lVar16) = (int)uVar15;
    *(int *)(lVar13 + 0xc + lVar16) = (int)((ulonglong)uVar15 >> 0x20);
    *(float *)(lVar13 + 0x18 + lVar16) = fVar18 * fVar5 + fVar19 * fVar4 + fVar7;
    *(float *)(lVar13 + 0x1c + lVar16) = fVar3 * fVar18 + fVar2 * fVar19 + fVar6;
    *(undefined4 *)(lVar13 + 0x20 + lVar16) = uVar8;
    *(undefined4 *)(lVar13 + 0x24 + lVar16) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    lVar11 = *param_1;
    iVar9 = *(int *)(lVar11 + 0x74);
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -3;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    lVar11 = *param_1;
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -4;
    piVar1 = (int *)(lVar11 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar11 = *param_1;
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -2;
    piVar1 = (int *)(lVar11 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar11 = *param_1;
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -3;
    piVar1 = (int *)(lVar11 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar11 = *param_1;
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -2;
    piVar1 = (int *)(lVar11 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar11 = *param_1;
    plVar14 = *(longlong **)(lVar11 + 0x58);
    iVar10 = (int)plVar14[1];
    *(uint *)(plVar14 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar14 + 0xc) < iVar10 + 1U) {
      FUN_1447808da(plVar14,iVar10);
    }
    *(int *)(*plVar14 + (longlong)iVar10 * 4) = iVar9 + -1;
    piVar1 = (int *)(lVar11 + 0x78);
    *piVar1 = *piVar1 + 1;
    return;
  }
  FUN_146964636(param_1,param_2,param_3);
  return;
}



// FUNCTION 146964636 FUN_146964636 body=1532 status=ok
// SIG undefined FUN_146964636(void)

void FUN_146964636(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar11 = DAT_14c84635c;
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_2 - *(float *)(param_1 + 2);
  fVar16 = *(float *)((longlong)param_1 + 0x14) - fVar14;
  fVar17 = fVar16 * fVar16 + fVar19 * fVar19;
  fVar16 = (float)(-(uint)(1e-08 < fVar17) & (uint)(fVar16 * (1.0 / SQRT(fVar17))));
  if (1e-08 < fVar17) {
    fVar19 = fVar19 * (1.0 / SQRT(fVar17));
  }
  else {
    fVar19 = 0.0;
  }
  iVar12 = *(int *)((longlong)param_1 + 0x2c);
  if (iVar12 == 2) {
    fVar22 = *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 5);
    fVar20 = *(float *)(param_1 + 5) * *(float *)(param_1 + 4);
    lVar7 = *param_1;
    pfVar8 = (float *)param_1[1];
    uVar5 = *param_3;
    fVar15 = *(float *)((longlong)param_1 + 0x1c) + fVar22;
    fVar23 = *(float *)(param_1 + 3) + fVar20;
    fVar17 = pfVar8[3];
    fVar21 = pfVar8[1];
    fVar18 = pfVar8[2];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[5];
    fVar4 = pfVar8[4];
    lVar9 = *(longlong *)(lVar7 + 0x50);
    iVar12 = *(int *)(lVar9 + 8);
    *(int *)(lVar9 + 8) = iVar12 + 1;
    if (*(int *)(lVar9 + 0xc) == iVar12) {
      FUN_146964c32(lVar9,iVar12);
    }
    lVar9 = **(longlong **)(lVar7 + 0x50);
    lVar13 = (longlong)iVar12 * 0x2c;
    *(undefined8 *)(lVar9 + lVar13) = 0x3f800000;
    *(int *)(lVar9 + 8 + lVar13) = (int)uVar11;
    *(int *)(lVar9 + 0xc + lVar13) = (int)((ulonglong)uVar11 >> 0x20);
    *(float *)(lVar9 + 0x18 + lVar13) = fVar23 * fVar2 + fVar15 * fVar18 + fVar4;
    *(float *)(lVar9 + 0x1c + lVar13) = fVar21 * fVar23 + fVar17 * fVar15 + fVar3;
    *(undefined4 *)(lVar9 + 0x20 + lVar13) = uVar5;
    *(undefined4 *)(lVar9 + 0x24 + lVar13) = 0;
    *(int *)(lVar7 + 0x74) = *(int *)(lVar7 + 0x74) + 1;
    uVar11 = DAT_14c84635c;
    lVar7 = *param_1;
    pfVar8 = (float *)param_1[1];
    uVar5 = *param_3;
    fVar22 = *(float *)((longlong)param_1 + 0x1c) - fVar22;
    fVar20 = *(float *)(param_1 + 3) - fVar20;
    fVar17 = pfVar8[3];
    fVar21 = pfVar8[1];
    fVar18 = pfVar8[2];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[5];
    fVar4 = pfVar8[4];
    lVar9 = *(longlong *)(lVar7 + 0x50);
    iVar12 = *(int *)(lVar9 + 8);
    *(int *)(lVar9 + 8) = iVar12 + 1;
    if (*(int *)(lVar9 + 0xc) == iVar12) {
      FUN_146964c32(lVar9,iVar12);
    }
    lVar9 = **(longlong **)(lVar7 + 0x50);
    lVar13 = (longlong)iVar12 * 0x2c;
    *(undefined8 *)(lVar9 + lVar13) = 0xbf800000;
    *(int *)(lVar9 + 8 + lVar13) = (int)uVar11;
    *(int *)(lVar9 + 0xc + lVar13) = (int)((ulonglong)uVar11 >> 0x20);
    *(float *)(lVar9 + 0x18 + lVar13) = fVar20 * fVar2 + fVar22 * fVar18 + fVar4;
    *(float *)(lVar9 + 0x1c + lVar13) = fVar21 * fVar20 + fVar17 * fVar22 + fVar3;
    *(undefined4 *)(lVar9 + 0x20 + lVar13) = uVar5;
    *(undefined4 *)(lVar9 + 0x24 + lVar13) = 0;
    *(int *)(lVar7 + 0x74) = *(int *)(lVar7 + 0x74) + 1;
    iVar12 = *(int *)((longlong)param_1 + 0x2c);
  }
  uVar11 = DAT_14c84635c;
  if (1 < iVar12) {
    fVar21 = (*(float *)((longlong)param_1 + 0x24) + fVar19) * 0.5;
    fVar17 = (*(float *)(param_1 + 4) + fVar16) * 0.5;
    fVar18 = fVar17 * fVar17 + fVar21 * fVar21;
    if (1e-08 < fVar18) {
      fVar21 = fVar21 * (1.0 / SQRT(fVar18));
    }
    else {
      fVar21 = 0.0;
    }
    fVar21 = fVar21 * *(float *)(param_1 + 5);
    fVar20 = (float)(-(uint)(1e-08 < fVar18) & (uint)(fVar17 * (1.0 / SQRT(fVar18)))) *
             *(float *)(param_1 + 5);
    lVar7 = *param_1;
    pfVar8 = (float *)param_1[1];
    uVar5 = *param_3;
    fVar22 = *(float *)((longlong)param_1 + 0x14) + fVar21;
    fVar23 = *(float *)(param_1 + 2) + fVar20;
    fVar17 = pfVar8[3];
    fVar18 = pfVar8[1];
    fVar2 = pfVar8[2];
    fVar3 = *pfVar8;
    fVar4 = pfVar8[5];
    fVar15 = pfVar8[4];
    lVar9 = *(longlong *)(lVar7 + 0x50);
    iVar12 = *(int *)(lVar9 + 8);
    *(int *)(lVar9 + 8) = iVar12 + 1;
    if (*(int *)(lVar9 + 0xc) == iVar12) {
      FUN_146964c32(lVar9,iVar12);
    }
    lVar9 = **(longlong **)(lVar7 + 0x50);
    lVar13 = (longlong)iVar12 * 0x2c;
    *(undefined8 *)(lVar9 + lVar13) = 0x3f800000;
    *(int *)(lVar9 + 8 + lVar13) = (int)uVar11;
    *(int *)(lVar9 + 0xc + lVar13) = (int)((ulonglong)uVar11 >> 0x20);
    *(float *)(lVar9 + 0x18 + lVar13) = fVar23 * fVar3 + fVar22 * fVar2 + fVar15;
    *(float *)(lVar9 + 0x1c + lVar13) = fVar18 * fVar23 + fVar17 * fVar22 + fVar4;
    *(undefined4 *)(lVar9 + 0x20 + lVar13) = uVar5;
    *(undefined4 *)(lVar9 + 0x24 + lVar13) = 0;
    *(int *)(lVar7 + 0x74) = *(int *)(lVar7 + 0x74) + 1;
    uVar11 = DAT_14c84635c;
    lVar7 = *param_1;
    pfVar8 = (float *)param_1[1];
    uVar5 = *param_3;
    fVar21 = *(float *)((longlong)param_1 + 0x14) - fVar21;
    fVar20 = *(float *)(param_1 + 2) - fVar20;
    fVar17 = pfVar8[3];
    fVar18 = pfVar8[1];
    fVar2 = pfVar8[2];
    fVar3 = *pfVar8;
    fVar4 = pfVar8[5];
    fVar15 = pfVar8[4];
    lVar9 = *(longlong *)(lVar7 + 0x50);
    iVar12 = *(int *)(lVar9 + 8);
    *(int *)(lVar9 + 8) = iVar12 + 1;
    if (*(int *)(lVar9 + 0xc) == iVar12) {
      FUN_146964c32(lVar9,iVar12);
    }
    lVar9 = **(longlong **)(lVar7 + 0x50);
    lVar13 = (longlong)iVar12 * 0x2c;
    *(undefined8 *)(lVar9 + lVar13) = 0xbf800000;
    *(int *)(lVar9 + 8 + lVar13) = (int)uVar11;
    *(int *)(lVar9 + 0xc + lVar13) = (int)((ulonglong)uVar11 >> 0x20);
    *(float *)(lVar9 + 0x18 + lVar13) = fVar20 * fVar3 + fVar21 * fVar2 + fVar15;
    *(float *)(lVar9 + 0x1c + lVar13) = fVar18 * fVar20 + fVar17 * fVar21 + fVar4;
    *(undefined4 *)(lVar9 + 0x20 + lVar13) = uVar5;
    *(undefined4 *)(lVar9 + 0x24 + lVar13) = 0;
    *(int *)(lVar7 + 0x74) = *(int *)(lVar7 + 0x74) + 1;
    lVar7 = *param_1;
    iVar12 = *(int *)(lVar7 + 0x74);
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -3;
    *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + 1;
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -4;
    piVar1 = (int *)(lVar7 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -2;
    piVar1 = (int *)(lVar7 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -3;
    piVar1 = (int *)(lVar7 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -2;
    piVar1 = (int *)(lVar7 + 0x78);
    *piVar1 = *piVar1 + 1;
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 0x58);
    iVar6 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
      FUN_1447808da(plVar10,iVar6);
    }
    *(int *)(*plVar10 + (longlong)iVar6 * 4) = iVar12 + -1;
    piVar1 = (int *)(lVar7 + 0x78);
    *piVar1 = *piVar1 + 1;
    iVar12 = *(int *)((longlong)param_1 + 0x2c);
  }
  param_1[3] = param_1[2];
  *(float *)(param_1 + 2) = (float)param_2;
  *(float *)((longlong)param_1 + 0x14) = fVar14;
  *(float *)(param_1 + 4) = fVar16;
  *(float *)((longlong)param_1 + 0x24) = fVar19;
  *(int *)((longlong)param_1 + 0x2c) = iVar12 + 1;
  return;
}



// FUNCTION 146964c32 FUN_146964c32 body=143 status=ok
// SIG undefined FUN_146964c32(void)

void FUN_146964c32(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146964cc2 FUN_146964cc2 body=378 status=ok
// SIG undefined FUN_146964cc2(void)

void FUN_146964cc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (float)((ulonglong)param_4 >> 0x20);
  fVar8 = (float)param_1;
  *param_5 = fVar8;
  fVar2 = (float)((ulonglong)param_1 >> 0x20);
  fVar3 = (float)param_2;
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  fVar7 = (float)param_3;
  fVar4 = (float)((ulonglong)param_3 >> 0x20);
  fVar5 = (fVar1 - fVar4) * param_6 + fVar4;
  fVar10 = (fVar4 - fVar6) * param_6 + fVar6;
  fVar4 = ((float)param_4 - fVar7) * param_6 + fVar7;
  fVar9 = (fVar7 - fVar3) * param_6 + fVar3;
  fVar6 = (fVar6 - fVar2) * param_6 + fVar2;
  fVar8 = (fVar3 - fVar8) * param_6 + fVar8;
  fVar3 = (fVar5 - fVar10) * param_6 + fVar10;
  fVar7 = (fVar4 - fVar9) * param_6 + fVar9;
  fVar10 = (fVar10 - fVar6) * param_6 + fVar6;
  fVar9 = (fVar9 - fVar8) * param_6 + fVar8;
  param_5[1] = fVar2;
  param_5[2] = fVar8;
  param_5[3] = fVar6;
  param_5[4] = fVar9;
  param_5[5] = fVar10;
  param_5[6] = (fVar7 - fVar9) * param_6 + fVar9;
  param_5[7] = (fVar3 - fVar10) * param_6 + fVar10;
  param_5[8] = fVar7;
  param_5[9] = fVar3;
  param_5[10] = fVar4;
  param_5[0xb] = fVar5;
  param_5[0xc] = (float)param_4;
  param_5[0xd] = fVar1;
  return;
}



// FUNCTION 146964e3c FUN_146964e3c body=975 status=ok
// SIG undefined FUN_146964e3c(void)

void FUN_146964e3c(undefined8 param_1,float *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar2 = (float)((ulonglong)param_4 >> 0x20);
  fVar4 = (float)((ulonglong)param_7 >> 0x20);
  if (ABS((param_5._4_4_ + fVar4) - (param_6._4_4_ + param_6._4_4_)) +
      ABS(((float)param_5 + (float)param_7) - ((float)param_6 + (float)param_6)) +
      ABS((fVar2 + param_6._4_4_) - (param_5._4_4_ + param_5._4_4_)) +
      ABS(((float)param_4 + (float)param_6) - ((float)param_5 + (float)param_5)) <= 1.0) {
    if (*(char *)(param_3 + 0x30) == '\x01') {
      FUN_1411ab38a(param_2,&local_100);
    }
    else {
      fVar2 = param_2[3];
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      fVar4 = param_2[2];
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      fVar3 = *param_2;
      fVar5 = param_2[1];
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      local_100 = (undefined1)(int)(fVar4 * 255.0 + 0.5);
      local_ff = (undefined1)(int)(fVar5 * 255.0 + 0.5);
      local_fe = (undefined1)(int)(fVar3 * 255.0 + 0.5);
      local_fd = (undefined1)(int)(fVar2 * 255.0 + 0.5);
    }
    FUN_146964636(param_8,param_7,&local_100);
  }
  else {
    fVar8 = (fVar2 + param_5._4_4_) * 0.5;
    fVar7 = ((float)param_4 + (float)param_5) * 0.5;
    fVar2 = (param_5._4_4_ + param_6._4_4_) * 0.5;
    fVar3 = ((float)param_5 + (float)param_6) * 0.5;
    fVar6 = (fVar4 + param_6._4_4_) * 0.5;
    fVar5 = ((float)param_7 + (float)param_6) * 0.5;
    fVar9 = (fVar8 + fVar2) * 0.5;
    fVar10 = (fVar7 + fVar3) * 0.5;
    fVar2 = (fVar2 + fVar6) * 0.5;
    fVar4 = (fVar3 + fVar5) * 0.5;
    FUN_1467edc58(&local_100,param_1,param_2);
    uVar1 = CONCAT44((fVar9 + fVar2) * 0.5,(fVar10 + fVar4) * 0.5);
    local_120 = CONCAT44(fVar9,fVar10);
    local_128 = CONCAT44(fVar8,fVar7);
    local_110 = param_8;
    local_118 = uVar1;
    FUN_146964e3c(param_1,&local_100,param_3,param_4);
    local_120 = CONCAT44(fVar6,fVar5);
    local_128 = CONCAT44(fVar2,fVar4);
    local_110 = param_8;
    local_118 = param_7;
    FUN_146964e3c(&local_100,param_2,param_3,uVar1);
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146965244 FUN_146965244 body=110 status=ok
// SIG undefined FUN_146965244(void)

undefined1 FUN_146965244(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1469652de FUN_1469652de body=59 status=ok
// SIG undefined FUN_1469652de(void)

undefined8 FUN_1469652de(longlong *param_1)

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



// FUNCTION 146965380 FUN_146965380 body=38 status=ok
// SIG undefined FUN_146965380(void)

undefined8 FUN_146965380(undefined8 param_1,int param_2)

{
  FUN_1469653d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469653b4 FUN_1469653b4 body=29 status=ok
// SIG undefined FUN_1469653b4(void)

undefined8 FUN_1469653b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469653d2 FUN_1469653d2 body=320 status=ok
// SIG undefined FUN_1469653d2(void)

void FUN_1469653d2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee65d0;
  plVar3 = (longlong *)param_1[0x83];
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
  plVar3 = (longlong *)param_1[0x81];
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
  plVar3 = (longlong *)param_1[0x7f];
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
  plVar3 = (longlong *)param_1[0x7d];
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
  plVar3 = (longlong *)param_1[0x7b];
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
  plVar3 = (longlong *)param_1[0x79];
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
  plVar3 = (longlong *)param_1[0x77];
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
  FUN_1411160c2(param_1);
  return;
}



// FUNCTION 146965546 FUN_146965546 body=63 status=ok
// SIG undefined FUN_146965546(void)

undefined1 FUN_146965546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146965670(param_2,param_3);
    param_3 = param_3 + 0x1cc0;
    param_2 = param_2 + 0x1cc0;
  }
  return 1;
}



// FUNCTION 1469655ae FUN_1469655ae body=59 status=ok
// SIG undefined FUN_1469655ae(void)

undefined8 FUN_1469655ae(longlong *param_1)

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



// FUNCTION 1469655fa FUN_1469655fa body=40 status=ok
// SIG undefined FUN_1469655fa(void)

void FUN_1469655fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1cc0) == '\x01') {
    FUN_145d8e7d0(param_2);
    *(undefined1 *)(param_2 + 0x1cc0) = 0;
  }
  return;
}



// FUNCTION 146965670 FUN_146965670 body=100 status=ok
// SIG undefined FUN_146965670(void)

longlong FUN_146965670(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1414c3ed0(param_1 + 0x10,param_2 + 0x10);
  FUN_1414c3ed0(param_1 + 0x960,param_2 + 0x960);
  FUN_1414c3ed0(param_1 + 0x12b0,param_2 + 0x12b0);
  FUN_140f13d9e(param_1 + 0x1c00,param_2 + 0x1c00);
  uVar1 = *(undefined8 *)(param_2 + 0x1cb8);
  *(undefined8 *)(param_1 + 0x1cb0) = *(undefined8 *)(param_2 + 0x1cb0);
  *(undefined8 *)(param_1 + 0x1cb8) = uVar1;
  return param_1;
}



// FUNCTION 146965794 FUN_146965794 body=59 status=ok
// SIG undefined FUN_146965794(void)

undefined8 FUN_146965794(longlong *param_1)

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



// FUNCTION 146965892 FUN_146965892 body=59 status=ok
// SIG undefined FUN_146965892(void)

undefined8 FUN_146965892(longlong *param_1)

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



// FUNCTION 1469658de FUN_1469658de body=83 status=ok
// SIG undefined FUN_1469658de(void)

void FUN_1469658de(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_149ed05f0;
    plVar3 = (longlong *)param_2[0x14];
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
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 1469659e6 FUN_1469659e6 body=59 status=ok
// SIG undefined FUN_1469659e6(void)

undefined8 FUN_1469659e6(longlong *param_1)

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



// FUNCTION 146965a88 FUN_146965a88 body=122 status=ok
// SIG undefined FUN_146965a88(void)

longlong FUN_146965a88(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146965b02(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146965b02 FUN_146965b02 body=115 status=ok
// SIG undefined FUN_146965b02(void)

undefined8 * FUN_146965b02(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1406ff034(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 146965b76 FUN_146965b76 body=115 status=ok
// SIG undefined FUN_146965b76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146965b76(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x1e & 1) != 0)
    goto LAB_146965bdb;
    lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
  }
  else {
    if ((_DAT_00000008 >> 0x1e & 1) != 0) goto LAB_146965bdb;
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
LAB_146965bdb:
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}



// FUNCTION 146965c1e FUN_146965c1e body=63 status=ok
// SIG undefined FUN_146965c1e(void)

undefined1 FUN_146965c1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1414c3ed0(param_2,param_3);
    param_3 = param_3 + 0x950;
    param_2 = param_2 + 0x950;
  }
  return 1;
}



// FUNCTION 146965c86 FUN_146965c86 body=59 status=ok
// SIG undefined FUN_146965c86(void)

undefined8 FUN_146965c86(longlong *param_1)

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



// FUNCTION 146965cd2 FUN_146965cd2 body=38 status=ok
// SIG undefined FUN_146965cd2(void)

void FUN_146965cd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x950) == '\x01') {
    FUN_140ffdb16(param_2);
    *(undefined1 *)(param_2 + 0x950) = 0;
  }
  return;
}



// FUNCTION 146965d7c FUN_146965d7c body=63 status=ok
// SIG undefined FUN_146965d7c(void)

undefined1 FUN_146965d7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a5e6b8(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 146965de4 FUN_146965de4 body=59 status=ok
// SIG undefined FUN_146965de4(void)

undefined8 FUN_146965de4(longlong *param_1)

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



// FUNCTION 146965e30 FUN_146965e30 body=38 status=ok
// SIG undefined FUN_146965e30(void)

void FUN_146965e30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_140e9e952(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 146965eec FUN_146965eec body=59 status=ok
// SIG undefined FUN_146965eec(void)

undefined8 FUN_146965eec(longlong *param_1)

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



// FUNCTION 146965f38 FUN_146965f38 body=38 status=ok
// SIG undefined FUN_146965f38(void)

void FUN_146965f38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x370) == '\x01') {
    FUN_140ffd6b6(param_2);
    *(undefined1 *)(param_2 + 0x370) = 0;
  }
  return;
}



// FUNCTION 146965fe2 FUN_146965fe2 body=237 status=ok
// SIG undefined FUN_146965fe2(void)

undefined8 FUN_146965fe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      lVar1 = param_2 + lVar14;
      lVar2 = param_3 + lVar14;
      FUN_141254448(lVar1 + 0x10,lVar2 + 0x10);
      FUN_140f13d9e(param_2 + lVar14 + 0x380,param_3 + lVar14 + 0x380);
      uVar3 = *(undefined4 *)(lVar2 + 0x434);
      uVar4 = *(undefined4 *)(lVar2 + 0x438);
      uVar5 = *(undefined4 *)(lVar2 + 0x43c);
      *(undefined4 *)(lVar1 + 0x430) = *(undefined4 *)(lVar2 + 0x430);
      *(undefined4 *)(lVar1 + 0x434) = uVar3;
      *(undefined4 *)(lVar1 + 0x438) = uVar4;
      *(undefined4 *)(lVar1 + 0x43c) = uVar5;
      *(undefined8 *)(lVar1 + 0x440) = *(undefined8 *)(lVar2 + 0x440);
      FUN_140f13d9e(param_2 + lVar14 + 0x450,param_3 + lVar14 + 0x450);
      uVar3 = *(undefined4 *)(lVar2 + 0x504);
      uVar4 = *(undefined4 *)(lVar2 + 0x508);
      uVar5 = *(undefined4 *)(lVar2 + 0x50c);
      uVar6 = *(undefined4 *)(lVar2 + 0x510);
      uVar7 = *(undefined4 *)(lVar2 + 0x514);
      uVar8 = *(undefined4 *)(lVar2 + 0x518);
      uVar9 = *(undefined4 *)(lVar2 + 0x51c);
      uVar10 = *(undefined4 *)(lVar2 + 0x520);
      uVar11 = *(undefined4 *)(lVar2 + 0x524);
      uVar12 = *(undefined4 *)(lVar2 + 0x528);
      uVar13 = *(undefined4 *)(lVar2 + 0x52c);
      *(undefined4 *)(lVar1 + 0x500) = *(undefined4 *)(lVar2 + 0x500);
      *(undefined4 *)(lVar1 + 0x504) = uVar3;
      *(undefined4 *)(lVar1 + 0x508) = uVar4;
      *(undefined4 *)(lVar1 + 0x50c) = uVar5;
      *(undefined4 *)(lVar1 + 0x510) = uVar6;
      *(undefined4 *)(lVar1 + 0x514) = uVar7;
      *(undefined4 *)(lVar1 + 0x518) = uVar8;
      *(undefined4 *)(lVar1 + 0x51c) = uVar9;
      *(undefined4 *)(lVar1 + 0x520) = uVar10;
      *(undefined4 *)(lVar1 + 0x524) = uVar11;
      *(undefined4 *)(lVar1 + 0x528) = uVar12;
      *(undefined4 *)(lVar1 + 0x52c) = uVar13;
      *(undefined1 *)(lVar1 + 0x530) = *(undefined1 *)(lVar2 + 0x530);
      lVar14 = lVar14 + 0x540;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1469660f8 FUN_1469660f8 body=59 status=ok
// SIG undefined FUN_1469660f8(void)

undefined8 FUN_1469660f8(longlong *param_1)

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



// FUNCTION 146966144 FUN_146966144 body=38 status=ok
// SIG undefined FUN_146966144(void)

void FUN_146966144(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x540) == '\x01') {
    FUN_140ffd624(param_2);
    *(undefined1 *)(param_2 + 0x540) = 0;
  }
  return;
}



// FUNCTION 1469661ee FUN_1469661ee body=63 status=ok
// SIG undefined FUN_1469661ee(void)

undefined1 FUN_1469661ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457c735e(param_2,param_3);
    param_3 = param_3 + 0x5a0;
    param_2 = param_2 + 0x5a0;
  }
  return 1;
}



// FUNCTION 146966256 FUN_146966256 body=59 status=ok
// SIG undefined FUN_146966256(void)

undefined8 FUN_146966256(longlong *param_1)

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



// FUNCTION 1469662a2 FUN_1469662a2 body=49 status=ok
// SIG undefined FUN_1469662a2(void)

void FUN_1469662a2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    *param_2 = &PTR_FUN_149ee32c0;
    FUN_140ffd624(param_2 + 2);
    *(undefined1 *)(param_2 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 146966324 FUN_146966324 body=55 status=ok
// SIG undefined FUN_146966324(void)

void FUN_146966324(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149ee3300;
  FUN_140ca8d78(param_2 + 2);
  FUN_140a581a0(param_2 + 0x70);
  param_2[0xcc] = 0;
  param_2[0xcd] = 0;
  return;
}



// FUNCTION 14696635c FUN_14696635c body=55 status=ok
// SIG undefined FUN_14696635c(void)

void FUN_14696635c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149ee3300;
  FUN_140ca8d78(param_2 + 2);
  FUN_140a581a0(param_2 + 0x70);
  param_2[0xcc] = 0;
  param_2[0xcd] = 0;
  return;
}



// FUNCTION 1469663b8 FUN_1469663b8 body=111 status=ok
// SIG undefined FUN_1469663b8(void)

undefined8 FUN_1469663b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x380;
    param_2 = param_2 + 0x380;
    do {
      FUN_141254448(param_2 + -0x370,param_3 + -0x370);
      FUN_140a5e6b8(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x2e4);
      uVar2 = *(undefined4 *)(param_3 + 0x2e8);
      uVar3 = *(undefined4 *)(param_3 + 0x2ec);
      *(undefined4 *)(param_2 + 0x2e0) = *(undefined4 *)(param_3 + 0x2e0);
      *(undefined4 *)(param_2 + 0x2e4) = uVar1;
      *(undefined4 *)(param_2 + 0x2e8) = uVar2;
      *(undefined4 *)(param_2 + 0x2ec) = uVar3;
      param_3 = param_3 + 0x670;
      param_2 = param_2 + 0x670;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146966450 FUN_146966450 body=59 status=ok
// SIG undefined FUN_146966450(void)

undefined8 FUN_146966450(longlong *param_1)

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



// FUNCTION 14696649c FUN_14696649c body=61 status=ok
// SIG undefined FUN_14696649c(void)

void FUN_14696649c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xce) == '\x01') {
    *param_2 = &PTR_FUN_149ee3300;
    FUN_140e9e952(param_2 + 0x70);
    FUN_140ffd6b6(param_2 + 2);
    *(undefined1 *)(param_2 + 0xce) = 0;
  }
  return;
}



// FUNCTION 14696655e FUN_14696655e body=63 status=ok
// SIG undefined FUN_14696655e(void)

undefined1 FUN_14696655e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c2d5d0(param_2,param_3);
    param_3 = param_3 + 0x290;
    param_2 = param_2 + 0x290;
  }
  return 1;
}



// FUNCTION 1469665c6 FUN_1469665c6 body=59 status=ok
// SIG undefined FUN_1469665c6(void)

undefined8 FUN_1469665c6(longlong *param_1)

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



// FUNCTION 146966612 FUN_146966612 body=40 status=ok
// SIG undefined FUN_146966612(void)

void FUN_146966612(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_1458a2df2(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 1469666be FUN_1469666be body=63 status=ok
// SIG undefined FUN_1469666be(void)

undefined1 FUN_1469666be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1412cc8ca(param_2,param_3);
    param_3 = param_3 + 0x650;
    param_2 = param_2 + 0x650;
  }
  return 1;
}



// FUNCTION 146966726 FUN_146966726 body=59 status=ok
// SIG undefined FUN_146966726(void)

undefined8 FUN_146966726(longlong *param_1)

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



// FUNCTION 146966772 FUN_146966772 body=38 status=ok
// SIG undefined FUN_146966772(void)

void FUN_146966772(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x650) == '\x01') {
    FUN_140ffd8aa(param_2);
    *(undefined1 *)(param_2 + 0x650) = 0;
  }
  return;
}



// FUNCTION 14696681c FUN_14696681c body=63 status=ok
// SIG undefined FUN_14696681c(void)

undefined1 FUN_14696681c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458a2fee(param_2,param_3);
    param_3 = param_3 + 0xc80;
    param_2 = param_2 + 0xc80;
  }
  return 1;
}



// FUNCTION 146966884 FUN_146966884 body=59 status=ok
// SIG undefined FUN_146966884(void)

undefined8 FUN_146966884(longlong *param_1)

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



// FUNCTION 1469668d0 FUN_1469668d0 body=38 status=ok
// SIG undefined FUN_1469668d0(void)

void FUN_1469668d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc80) == '\x01') {
    FUN_140ffd7a4(param_2);
    *(undefined1 *)(param_2 + 0xc80) = 0;
  }
  return;
}



// FUNCTION 146966946 FUN_146966946 body=47 status=ok
// SIG undefined FUN_146966946(void)

void FUN_146966946(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb490;
  FUN_1412cd24a(param_2 + 2);
  FUN_140a581a0(param_2 + 0x192);
  return;
}



// FUNCTION 146966976 FUN_146966976 body=47 status=ok
// SIG undefined FUN_146966976(void)

void FUN_146966976(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb490;
  FUN_1412cd24a(param_2 + 2);
  FUN_140a581a0(param_2 + 0x192);
  return;
}



// FUNCTION 1469669ca FUN_1469669ca body=97 status=ok
// SIG undefined FUN_1469669ca(void)

undefined8 FUN_1469669ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xc90;
    param_2 = param_2 + 0xc90;
    do {
      FUN_1458a2fee(param_2 + -0xc80,param_3 + -0xc80);
      FUN_140a5e6b8(param_2,param_3);
      param_3 = param_3 + 0xf70;
      param_2 = param_2 + 0xf70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146966a54 FUN_146966a54 body=59 status=ok
// SIG undefined FUN_146966a54(void)

undefined8 FUN_146966a54(longlong *param_1)

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



// FUNCTION 146966aa0 FUN_146966aa0 body=61 status=ok
// SIG undefined FUN_146966aa0(void)

void FUN_146966aa0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1ee) == '\x01') {
    *param_2 = &PTR_FUN_149eeb490;
    FUN_140e9e952(param_2 + 0x192);
    FUN_140ffd7a4(param_2 + 2);
    *(undefined1 *)(param_2 + 0x1ee) = 0;
  }
  return;
}



// FUNCTION 146966b2e FUN_146966b2e body=64 status=ok
// SIG undefined FUN_146966b2e(void)

void FUN_146966b2e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb690;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  FUN_140ca8f8e(param_2 + 0x2e);
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 146966b6e FUN_146966b6e body=64 status=ok
// SIG undefined FUN_146966b6e(void)

void FUN_146966b6e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb690;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  FUN_140ca8f8e(param_2 + 0x2e);
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 146966bd2 FUN_146966bd2 body=151 status=ok
// SIG undefined FUN_146966bd2(void)

undefined8 FUN_146966bd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140f13d9e(param_2 + lVar1 + 0x10,param_3 + lVar1 + 0x10);
      FUN_140f13d9e(param_2 + lVar1 + 0xc0,param_3 + lVar1 + 0xc0);
      FUN_140f13d9e(param_2 + lVar1 + 0x170,param_3 + lVar1 + 0x170);
      *(undefined1 *)(param_2 + lVar1 + 0x220) = *(undefined1 *)(param_3 + lVar1 + 0x220);
      lVar1 = lVar1 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146966c92 FUN_146966c92 body=59 status=ok
// SIG undefined FUN_146966c92(void)

undefined8 FUN_146966c92(longlong *param_1)

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



// FUNCTION 146966cde FUN_146966cde body=40 status=ok
// SIG undefined FUN_146966cde(void)

void FUN_146966cde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_14594e52c(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 146966d56 FUN_146966d56 body=55 status=ok
// SIG undefined FUN_146966d56(void)

void FUN_146966d56(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb6d0;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x2e) = 0x3dcccccd;
  return;
}



// FUNCTION 146966d8e FUN_146966d8e body=55 status=ok
// SIG undefined FUN_146966d8e(void)

void FUN_146966d8e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb6d0;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x2e) = 0x3dcccccd;
  return;
}



// FUNCTION 146966dea FUN_146966dea body=113 status=ok
// SIG undefined FUN_146966dea(void)

undefined8 FUN_146966dea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      FUN_140f13d9e(param_2 + -0xb0,param_3 + -0xb0);
      FUN_140f13d9e(param_2,param_3);
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
      param_3 = param_3 + 0x180;
      param_2 = param_2 + 0x180;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146966e84 FUN_146966e84 body=59 status=ok
// SIG undefined FUN_146966e84(void)

undefined8 FUN_146966e84(longlong *param_1)

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



// FUNCTION 146966ed0 FUN_146966ed0 body=40 status=ok
// SIG undefined FUN_146966ed0(void)

void FUN_146966ed0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_145924cf8(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 146966f7c FUN_146966f7c body=63 status=ok
// SIG undefined FUN_146966f7c(void)

undefined1 FUN_146966f7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469670a6(param_2,param_3);
    param_3 = param_3 + 0xfe0;
    param_2 = param_2 + 0xfe0;
  }
  return 1;
}



// FUNCTION 146966fe4 FUN_146966fe4 body=59 status=ok
// SIG undefined FUN_146966fe4(void)

undefined8 FUN_146966fe4(longlong *param_1)

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



// FUNCTION 146967030 FUN_146967030 body=40 status=ok
// SIG undefined FUN_146967030(void)

void FUN_146967030(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xfe0) == '\x01') {
    FUN_145c1658a(param_2);
    *(undefined1 *)(param_2 + 0xfe0) = 0;
  }
  return;
}



// FUNCTION 1469670a6 FUN_1469670a6 body=213 status=ok
// SIG undefined FUN_1469670a6(void)

longlong FUN_1469670a6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_1458a2fee(param_1 + 0x10,param_2 + 0x10);
  FUN_1412cc59c(param_1 + 0xc90,param_2 + 0xc90);
  FUN_140f13d9e(param_1 + 0xcf0,param_2 + 0xcf0);
  FUN_140f13d9e(param_1 + 0xda0,param_2 + 0xda0);
  FUN_140f13d9e(param_1 + 0xe50,param_2 + 0xe50);
  FUN_140f13d9e(param_1 + 0xf00,param_2 + 0xf00);
  uVar1 = *(undefined8 *)(param_2 + 0xfb8);
  *(undefined8 *)(param_1 + 0xfb0) = *(undefined8 *)(param_2 + 0xfb0);
  *(undefined8 *)(param_1 + 0xfb8) = uVar1;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xfd0) == '\x01') {
      uVar1 = *(undefined8 *)(param_2 + 0xfc8);
      *(undefined8 *)(param_1 + 0xfc0) = *(undefined8 *)(param_2 + 0xfc0);
      *(undefined8 *)(param_1 + 0xfc8) = uVar1;
      uVar2 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xfd0) != '\x01') goto LAB_14696714a;
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0xfd0) = uVar2;
  }
LAB_14696714a:
  *(undefined1 *)(param_1 + 0xfda) = *(undefined1 *)(param_2 + 0xfda);
  *(undefined2 *)(param_1 + 0xfd8) = *(undefined2 *)(param_2 + 0xfd8);
  return param_1;
}



// FUNCTION 1469671b0 FUN_1469671b0 body=63 status=ok
// SIG undefined FUN_1469671b0(void)

undefined1 FUN_1469671b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145931d36(param_2,param_3);
    param_3 = param_3 + 0x440;
    param_2 = param_2 + 0x440;
  }
  return 1;
}



// FUNCTION 146967218 FUN_146967218 body=59 status=ok
// SIG undefined FUN_146967218(void)

undefined8 FUN_146967218(longlong *param_1)

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



// FUNCTION 146967264 FUN_146967264 body=38 status=ok
// SIG undefined FUN_146967264(void)

void FUN_146967264(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x440) == '\x01') {
    FUN_14130c426(param_2);
    *(undefined1 *)(param_2 + 0x440) = 0;
  }
  return;
}



// FUNCTION 14696730e FUN_14696730e body=63 status=ok
// SIG undefined FUN_14696730e(void)

undefined1 FUN_14696730e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146967438(param_2,param_3);
    param_3 = param_3 + 0x7c0;
    param_2 = param_2 + 0x7c0;
  }
  return 1;
}



// FUNCTION 146967376 FUN_146967376 body=59 status=ok
// SIG undefined FUN_146967376(void)

undefined8 FUN_146967376(longlong *param_1)

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



// FUNCTION 1469673c2 FUN_1469673c2 body=40 status=ok
// SIG undefined FUN_1469673c2(void)

void FUN_1469673c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7c0) == '\x01') {
    FUN_145df0796(param_2);
    *(undefined1 *)(param_2 + 0x7c0) = 0;
  }
  return;
}



// FUNCTION 146967438 FUN_146967438 body=123 status=ok
// SIG undefined FUN_146967438(void)

longlong FUN_146967438(longlong param_1,longlong param_2)

{
  FUN_145931d36(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0x450,param_2 + 0x450);
  FUN_140f13d9e(param_1 + 0x500,param_2 + 0x500);
  FUN_140f13d9e(param_1 + 0x5b0,param_2 + 0x5b0);
  FUN_140f13d9e(param_1 + 0x660,param_2 + 0x660);
  FUN_140f13d9e(param_1 + 0x710,param_2 + 0x710);
  return param_1;
}



// FUNCTION 1469674b4 FUN_1469674b4 body=42 status=ok
// SIG undefined FUN_1469674b4(void)

void FUN_1469674b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149ee3520;
  FUN_140ca8f8e(param_2 + 2);
  *(undefined2 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 1469674de FUN_1469674de body=42 status=ok
// SIG undefined FUN_1469674de(void)

void FUN_1469674de(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149ee3520;
  FUN_140ca8f8e(param_2 + 2);
  *(undefined2 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14696752c FUN_14696752c body=96 status=ok
// SIG undefined FUN_14696752c(void)

undefined8 FUN_14696752c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140f13d9e(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined2 *)(param_2 + 0xc0 + lVar1) = *(undefined2 *)(param_3 + 0xc0 + lVar1);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1469675b4 FUN_1469675b4 body=59 status=ok
// SIG undefined FUN_1469675b4(void)

undefined8 FUN_1469675b4(longlong *param_1)

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



// FUNCTION 146967658 FUN_146967658 body=94 status=ok
// SIG undefined FUN_146967658(void)

void FUN_146967658(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    *param_1 = &PTR_FUN_149ee3520;
    param_1[2] = &PTR_FUN_149ed05f0;
    plVar3 = (longlong *)param_1[0x16];
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
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 1469676ea FUN_1469676ea body=63 status=ok
// SIG undefined FUN_1469676ea(void)

undefined1 FUN_1469676ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14134d094(param_2,param_3);
    param_3 = param_3 + 0x520;
    param_2 = param_2 + 0x520;
  }
  return 1;
}



// FUNCTION 146967752 FUN_146967752 body=59 status=ok
// SIG undefined FUN_146967752(void)

undefined8 FUN_146967752(longlong *param_1)

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



// FUNCTION 14696779e FUN_14696779e body=38 status=ok
// SIG undefined FUN_14696779e(void)

void FUN_14696779e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x520) == '\x01') {
    FUN_141147850(param_2);
    *(undefined1 *)(param_2 + 0x520) = 0;
  }
  return;
}



// FUNCTION 146967814 FUN_146967814 body=47 status=ok
// SIG undefined FUN_146967814(void)

void FUN_146967814(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb510;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  return;
}



// FUNCTION 146967844 FUN_146967844 body=47 status=ok
// SIG undefined FUN_146967844(void)

void FUN_146967844(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb510;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  return;
}



// FUNCTION 146967898 FUN_146967898 body=97 status=ok
// SIG undefined FUN_146967898(void)

undefined8 FUN_146967898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      FUN_140f13d9e(param_2 + -0xb0,param_3 + -0xb0);
      FUN_140f13d9e(param_2,param_3);
      param_3 = param_3 + 0x170;
      param_2 = param_2 + 0x170;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146967922 FUN_146967922 body=59 status=ok
// SIG undefined FUN_146967922(void)

undefined8 FUN_146967922(longlong *param_1)

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



// FUNCTION 14696796e FUN_14696796e body=40 status=ok
// SIG undefined FUN_14696796e(void)

void FUN_14696796e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145979364(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 146967a1a FUN_146967a1a body=70 status=ok
// SIG undefined FUN_146967a1a(void)

undefined1 FUN_146967a1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_140f13d9e(param_2,param_3);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146967a88 FUN_146967a88 body=59 status=ok
// SIG undefined FUN_146967a88(void)

undefined8 FUN_146967a88(longlong *param_1)

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



// FUNCTION 146967b2c FUN_146967b2c body=94 status=ok
// SIG undefined FUN_146967b2c(void)

void FUN_146967b2c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_149eeb4b0;
    param_1[2] = &PTR_FUN_149ed05f0;
    plVar3 = (longlong *)param_1[0x16];
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
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146967bbe FUN_146967bbe body=63 status=ok
// SIG undefined FUN_146967bbe(void)

undefined1 FUN_146967bbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457c74aa(param_2,param_3);
    param_3 = param_3 + 0xb50;
    param_2 = param_2 + 0xb50;
  }
  return 1;
}



// FUNCTION 146967c26 FUN_146967c26 body=59 status=ok
// SIG undefined FUN_146967c26(void)

undefined8 FUN_146967c26(longlong *param_1)

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



// FUNCTION 146967c72 FUN_146967c72 body=38 status=ok
// SIG undefined FUN_146967c72(void)

void FUN_146967c72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb50) == '\x01') {
    FUN_1415bbd66(param_2);
    *(undefined1 *)(param_2 + 0xb50) = 0;
  }
  return;
}



// FUNCTION 146967d1c FUN_146967d1c body=63 status=ok
// SIG undefined FUN_146967d1c(void)

undefined1 FUN_146967d1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14601d4ca(param_2,param_3);
    param_3 = param_3 + 0x640;
    param_2 = param_2 + 0x640;
  }
  return 1;
}



// FUNCTION 146967d84 FUN_146967d84 body=59 status=ok
// SIG undefined FUN_146967d84(void)

undefined8 FUN_146967d84(longlong *param_1)

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



// FUNCTION 146967dd0 FUN_146967dd0 body=38 status=ok
// SIG undefined FUN_146967dd0(void)

void FUN_146967dd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x640) == '\x01') {
    FUN_1414034a0(param_2);
    *(undefined1 *)(param_2 + 0x640) = 0;
  }
  return;
}



// FUNCTION 146967e7a FUN_146967e7a body=63 status=ok
// SIG undefined FUN_146967e7a(void)

undefined1 FUN_146967e7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146967fa4(param_2,param_3);
    param_3 = param_3 + 4000;
    param_2 = param_2 + 4000;
  }
  return 1;
}



// FUNCTION 146967ee2 FUN_146967ee2 body=59 status=ok
// SIG undefined FUN_146967ee2(void)

undefined8 FUN_146967ee2(longlong *param_1)

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



// FUNCTION 146967f2e FUN_146967f2e body=40 status=ok
// SIG undefined FUN_146967f2e(void)

void FUN_146967f2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 4000) == '\x01') {
    FUN_1459792ba(param_2);
    *(undefined1 *)(param_2 + 4000) = 0;
  }
  return;
}



// FUNCTION 146967fa4 FUN_146967fa4 body=178 status=ok
// SIG undefined FUN_146967fa4(void)

longlong FUN_146967fa4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14601d4ca(param_1 + 0x10,param_2 + 0x10);
  FUN_14601d4ca(param_1 + 0x650,param_2 + 0x650);
  FUN_140f13d9e(param_1 + 0xca0,param_2 + 0xca0);
  FUN_140f13d9e(param_1 + 0xd50,param_2 + 0xd50);
  *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_2 + 0xe00);
  FUN_140f13d9e(param_1 + 0xe10,param_2 + 0xe10);
  uVar1 = *(undefined4 *)(param_2 + 0xec4);
  uVar2 = *(undefined4 *)(param_2 + 0xec8);
  uVar3 = *(undefined4 *)(param_2 + 0xecc);
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_2 + 0xec0);
  *(undefined4 *)(param_1 + 0xec4) = uVar1;
  *(undefined4 *)(param_1 + 0xec8) = uVar2;
  *(undefined4 *)(param_1 + 0xecc) = uVar3;
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_2 + 0xed0);
  FUN_140f13d9e(param_1 + 0xee0,param_2 + 0xee0);
  *(undefined4 *)(param_1 + 0xf90) = *(undefined4 *)(param_2 + 0xf90);
  return param_1;
}



// FUNCTION 14696808c FUN_14696808c body=63 status=ok
// SIG undefined FUN_14696808c(void)

undefined1 FUN_14696808c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469681b6(param_2,param_3);
    param_3 = param_3 + 0xbc0;
    param_2 = param_2 + 0xbc0;
  }
  return 1;
}



// FUNCTION 1469680f4 FUN_1469680f4 body=59 status=ok
// SIG undefined FUN_1469680f4(void)

undefined8 FUN_1469680f4(longlong *param_1)

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



// FUNCTION 146968140 FUN_146968140 body=40 status=ok
// SIG undefined FUN_146968140(void)

void FUN_146968140(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xbc0) == '\x01') {
    FUN_145b07012(param_2);
    *(undefined1 *)(param_2 + 0xbc0) = 0;
  }
  return;
}



// FUNCTION 1469681b6 FUN_1469681b6 body=197 status=ok
// SIG undefined FUN_1469681b6(void)

longlong FUN_1469681b6(longlong param_1,longlong param_2)

{
  FUN_141254448(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0x380,param_2 + 0x380);
  FUN_140f13d9e(param_1 + 0x430,param_2 + 0x430);
  FUN_140f13d9e(param_1 + 0x4e0,param_2 + 0x4e0);
  FUN_140f13d9e(param_1 + 0x590,param_2 + 0x590);
  FUN_140f13d9e(param_1 + 0x640,param_2 + 0x640);
  FUN_140f13d9e(param_1 + 0x6f0,param_2 + 0x6f0);
  FUN_140f13d9e(param_1 + 0x7a0,param_2 + 0x7a0);
  FUN_140a5e6b8(param_1 + 0x850,param_2 + 0x850);
  memcpy((void *)(param_1 + 0xb30),(void *)(param_2 + 0xb30),0x84);
  return param_1;
}



// FUNCTION 1469682b0 FUN_1469682b0 body=63 status=ok
// SIG undefined FUN_1469682b0(void)

undefined1 FUN_1469682b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458d9ec6(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 146968318 FUN_146968318 body=59 status=ok
// SIG undefined FUN_146968318(void)

undefined8 FUN_146968318(longlong *param_1)

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



// FUNCTION 146968364 FUN_146968364 body=40 status=ok
// SIG undefined FUN_146968364(void)

void FUN_146968364(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_1458e4f8c(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1469683dc FUN_1469683dc body=47 status=ok
// SIG undefined FUN_1469683dc(void)

void FUN_1469683dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb910;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  return;
}



// FUNCTION 14696840c FUN_14696840c body=47 status=ok
// SIG undefined FUN_14696840c(void)

void FUN_14696840c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_149eeb910;
  FUN_140ca8f8e(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x18);
  return;
}



// FUNCTION 146968460 FUN_146968460 body=97 status=ok
// SIG undefined FUN_146968460(void)

undefined8 FUN_146968460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      FUN_140f13d9e(param_2 + -0xb0,param_3 + -0xb0);
      FUN_140f13d9e(param_2,param_3);
      param_3 = param_3 + 0x170;
      param_2 = param_2 + 0x170;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1469684ea FUN_1469684ea body=59 status=ok
// SIG undefined FUN_1469684ea(void)

undefined8 FUN_1469684ea(longlong *param_1)

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



// FUNCTION 146968536 FUN_146968536 body=40 status=ok
// SIG undefined FUN_146968536(void)

void FUN_146968536(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145b015f4(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 1469685e2 FUN_1469685e2 body=63 status=ok
// SIG undefined FUN_1469685e2(void)

undefined1 FUN_1469685e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14696870c(param_2,param_3);
    param_3 = param_3 + 0x1600;
    param_2 = param_2 + 0x1600;
  }
  return 1;
}



// FUNCTION 14696864a FUN_14696864a body=59 status=ok
// SIG undefined FUN_14696864a(void)

undefined8 FUN_14696864a(longlong *param_1)

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



// FUNCTION 146968696 FUN_146968696 body=40 status=ok
// SIG undefined FUN_146968696(void)

void FUN_146968696(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1600) == '\x01') {
    FUN_145e0e5a0(param_2);
    *(undefined1 *)(param_2 + 0x1600) = 0;
  }
  return;
}



// FUNCTION 14696870c FUN_14696870c body=326 status=ok
// SIG undefined FUN_14696870c(void)

longlong FUN_14696870c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141254448(param_1 + 0x10,param_2 + 0x10);
  FUN_141254448(param_1 + 0x380,param_2 + 0x380);
  FUN_141254448(param_1 + 0x6f0,param_2 + 0x6f0);
  FUN_141254448(param_1 + 0xa60,param_2 + 0xa60);
  FUN_140a5e6b8(param_1 + 0xdd0,param_2 + 0xdd0);
  FUN_140f13d9e(param_1 + 0x10b0,param_2 + 0x10b0);
  FUN_140f13d9e(param_1 + 0x1160,param_2 + 0x1160);
  FUN_140f13d9e(param_1 + 0x1210,param_2 + 0x1210);
  uVar1 = *(undefined4 *)(param_2 + 0x12c4);
  uVar2 = *(undefined4 *)(param_2 + 0x12c8);
  uVar3 = *(undefined4 *)(param_2 + 0x12cc);
  *(undefined4 *)(param_1 + 0x12c0) = *(undefined4 *)(param_2 + 0x12c0);
  *(undefined4 *)(param_1 + 0x12c4) = uVar1;
  *(undefined4 *)(param_1 + 0x12c8) = uVar2;
  *(undefined4 *)(param_1 + 0x12cc) = uVar3;
  *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_2 + 0x12d0);
  FUN_140f13d9e(param_1 + 0x12e0,param_2 + 0x12e0);
  uVar1 = *(undefined4 *)(param_2 + 0x1394);
  uVar2 = *(undefined4 *)(param_2 + 0x1398);
  uVar3 = *(undefined4 *)(param_2 + 0x139c);
  *(undefined4 *)(param_1 + 0x1390) = *(undefined4 *)(param_2 + 0x1390);
  *(undefined4 *)(param_1 + 0x1394) = uVar1;
  *(undefined4 *)(param_1 + 0x1398) = uVar2;
  *(undefined4 *)(param_1 + 0x139c) = uVar3;
  *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_2 + 0x13a0);
  FUN_140f13d9e(param_1 + 0x13b0,param_2 + 0x13b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1464);
  uVar2 = *(undefined4 *)(param_2 + 0x1468);
  uVar3 = *(undefined4 *)(param_2 + 0x146c);
  *(undefined4 *)(param_1 + 0x1460) = *(undefined4 *)(param_2 + 0x1460);
  *(undefined4 *)(param_1 + 0x1464) = uVar1;
  *(undefined4 *)(param_1 + 0x1468) = uVar2;
  *(undefined4 *)(param_1 + 0x146c) = uVar3;
  *(undefined4 *)(param_1 + 0x1470) = *(undefined4 *)(param_2 + 0x1470);
  FUN_140f13d9e(param_1 + 0x1480,param_2 + 0x1480);
  FUN_140f13d9e(param_1 + 0x1530,param_2 + 0x1530);
  uVar4 = *(undefined8 *)(param_2 + 0x15e8);
  *(undefined8 *)(param_1 + 0x15e0) = *(undefined8 *)(param_2 + 0x15e0);
  *(undefined8 *)(param_1 + 0x15e8) = uVar4;
  *(undefined4 *)(param_1 + 0x15f0) = *(undefined4 *)(param_2 + 0x15f0);
  return param_1;
}



// FUNCTION 146968854 FUN_146968854 body=86 status=ok
// SIG undefined FUN_146968854(void)

undefined8 * FUN_146968854(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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



// FUNCTION 1469688aa FUN_1469688aa body=337 status=ok
// SIG undefined FUN_1469688aa(void)

undefined8 FUN_1469688aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20)) &&
     (!NAN(*(float *)(param_1 + 0x20)) && !NAN(*(float *)(param_2 + 0x20)))) {
    if ((*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24)) &&
       ((!NAN(*(float *)(param_1 + 0x24)) && !NAN(*(float *)(param_2 + 0x24)) &&
        (*(char *)(param_1 + 0x1c) == *(char *)(param_2 + 0x1c))))) {
      if ((*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)) &&
         (!NAN(*(float *)(param_1 + 0x28)) && !NAN(*(float *)(param_2 + 0x28)))) {
        if ((*(float *)(param_1 + 0x30) == *(float *)(param_2 + 0x30)) &&
           (!NAN(*(float *)(param_1 + 0x30)) && !NAN(*(float *)(param_2 + 0x30)))) {
          if ((*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c)) &&
             (!NAN(*(float *)(param_1 + 0x2c)) && !NAN(*(float *)(param_2 + 0x2c)))) {
            if ((((*(float *)(param_1 + 0x34) == *(float *)(param_2 + 0x34)) &&
                 (!NAN(*(float *)(param_1 + 0x34)) && !NAN(*(float *)(param_2 + 0x34)))) &&
                (cVar2 = FUN_140a5ca7a(param_1 + 8,param_2 + 8), cVar2 != '\0')) &&
               ((*(char *)(param_1 + 0x1d) == *(char *)(param_2 + 0x1d) &&
                (*(char *)(param_1 + 0x1e) == *(char *)(param_2 + 0x1e))))) {
              lVar1 = *(longlong *)(param_2 + 0x38);
              if ((lVar1 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(lVar1);
              }
              if (((*(longlong *)(param_1 + 0x38) == lVar1) &&
                  (*(longlong *)(param_1 + 0xa8) == *(longlong *)(param_2 + 0xa8))) &&
                 (((*(byte *)(param_2 + 0x94) ^ *(byte *)(param_1 + 0x94)) & 1) == 0)) {
                if ((*(float *)(param_1 + 0x80) == *(float *)(param_2 + 0x80)) &&
                   (!NAN(*(float *)(param_1 + 0x80)) && !NAN(*(float *)(param_2 + 0x80)))) {
                  if ((*(float *)(param_1 + 0x84) == *(float *)(param_2 + 0x84)) &&
                     (!NAN(*(float *)(param_1 + 0x84)) && !NAN(*(float *)(param_2 + 0x84)))) {
                    if ((*(float *)(param_1 + 0x88) == *(float *)(param_2 + 0x88)) &&
                       (!NAN(*(float *)(param_1 + 0x88)) && !NAN(*(float *)(param_2 + 0x88)))) {
                      if ((*(float *)(param_1 + 0x8c) == *(float *)(param_2 + 0x8c)) &&
                         (!NAN(*(float *)(param_1 + 0x8c)) && !NAN(*(float *)(param_2 + 0x8c)))) {
                        if (*(char *)(param_1 + 0x1c) == '\x04') {
                          uVar3 = FUN_1469689fc(param_1 + 0x40,param_2 + 0x40);
                          return uVar3;
                        }
                        return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xa8) >> 8),1);
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
  return 0;
}



// FUNCTION 1469689fc FUN_1469689fc body=124 status=ok
// SIG undefined FUN_1469689fc(void)

bool FUN_1469689fc(double *param_1,double *param_2)

{
  char cVar1;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
      if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
        if ((param_1[3] == param_2[3]) &&
           ((!NAN(param_1[3]) && !NAN(param_2[3]) &&
            (cVar1 = FUN_140a5ca7a(param_1 + 4,param_2 + 4), cVar1 != '\0')))) {
          if ((*(float *)((longlong)param_1 + 0x34) == *(float *)((longlong)param_2 + 0x34)) &&
             ((!NAN(*(float *)((longlong)param_1 + 0x34)) &&
               !NAN(*(float *)((longlong)param_2 + 0x34)) &&
              (*(char *)(param_1 + 7) == *(char *)(param_2 + 7))))) {
            return *(char *)((longlong)param_1 + 0x39) == *(char *)((longlong)param_2 + 0x39);
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 146968a78 FUN_146968a78 body=138 status=ok
// SIG undefined FUN_146968a78(void)

void FUN_146968a78(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146968b02 FUN_146968b02 body=138 status=ok
// SIG undefined FUN_146968b02(void)

void FUN_146968b02(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146968b8c FUN_146968b8c body=138 status=ok
// SIG undefined FUN_146968b8c(void)

void FUN_146968b8c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x70 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
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
      puVar7 = puVar7 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146968c16 FUN_146968c16 body=119 status=ok
// SIG undefined FUN_146968c16(void)

void FUN_146968c16(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x648);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x32;
    if (0x32 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x32 < *(uint *)(param_1 + 0x64c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x64c) = iVar5;
    FUN_146968c8e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146968c8e FUN_146968c8e body=141 status=ok
// SIG undefined FUN_146968c8e(void)

void FUN_146968c8e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x640);
  if ((uint)param_3 < 0x33) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x640,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x640),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x640,param_2,param_3,0x20);
  return;
}



// FUNCTION 146968d1c FUN_146968d1c body=115 status=ok
// SIG undefined FUN_146968d1c(void)

void FUN_146968d1c(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  
  lVar4 = *(longlong *)(param_1 + 0x640);
  if (*(longlong *)(param_1 + 0x640) == 0) {
    lVar4 = param_1;
  }
  plVar2 = *(longlong **)(lVar4 + 8 + (longlong)(int)param_2 * 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  iVar3 = *(int *)(param_1 + 0x648);
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar4 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar3) << 5);
    iVar3 = *(int *)(param_1 + 0x648);
  }
  *(int *)(param_1 + 0x648) = iVar3 + -1;
  return;
}



// FUNCTION 146968d90 FUN_146968d90 body=124 status=ok
// SIG undefined FUN_146968d90(void)

ulonglong FUN_146968d90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 8;
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4 * 8) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146968de9;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146968e0c(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + uVar5 * 8) = *param_2;
LAB_146968de9:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146968e0c FUN_146968e0c body=110 status=ok
// SIG undefined FUN_146968e0c(void)

void FUN_146968e0c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_146968e7c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146968e7c FUN_146968e7c body=131 status=ok
// SIG undefined FUN_146968e7c(void)

void FUN_146968e7c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 146968f00 FUN_146968f00 body=59 status=ok
// SIG undefined FUN_146968f00(void)

void FUN_146968f00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146968f3c(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_1400c4e26(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,4);
  return;
}



// FUNCTION 146968f3c FUN_146968f3c body=105 status=ok
// SIG undefined FUN_146968f3c(void)

ulonglong FUN_146968f3c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146968fa6 FUN_146968fa6 body=297 status=ok
// SIG undefined FUN_146968fa6(void)

void FUN_146968fa6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1469690d0(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469690d0 FUN_1469690d0 body=262 status=ok
// SIG undefined FUN_1469690d0(void)

longlong FUN_1469690d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_1469690fd:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_1469690fd;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  uVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    uVar9 = *param_2;
  }
  lVar5 = FUN_14287595a(uVar9);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = uVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(uVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1469691d8 FUN_1469691d8 body=141 status=ok
// SIG undefined FUN_1469691d8(void)

void FUN_1469691d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 400);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x198);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x198) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x19c) < iVar1 + 1U) {
    FUN_146969266(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 400);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 146969266 FUN_146969266 body=119 status=ok
// SIG undefined FUN_146969266(void)

void FUN_146969266(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x32;
    if (0x32 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x32 < *(uint *)(param_1 + 0x19c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x19c) = iVar5;
    FUN_141075298(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469692de FUN_1469692de body=297 status=ok
// SIG undefined FUN_1469692de(void)

void FUN_1469692de(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146969408(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146969408 FUN_146969408 body=266 status=ok
// SIG undefined FUN_146969408(void)

longlong FUN_146969408(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_146969435:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_146969435;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_142875b04(lVar9 + 0xc0);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146969513 FUN_146969513 body=63 status=ok
// SIG undefined FUN_146969513(void)

void FUN_146969513(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 146969552 FUN_146969552 body=297 status=ok
// SIG undefined FUN_146969552(void)

void FUN_146969552(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14696967c(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696967c FUN_14696967c body=266 status=ok
// SIG undefined FUN_14696967c(void)

longlong FUN_14696967c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_1469696a9:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_1469696a9;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_14287595a(lVar9 + 0x80);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146969788 FUN_146969788 body=297 status=ok
// SIG undefined FUN_146969788(void)

void FUN_146969788(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1469698b2(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469698b2 FUN_1469698b2 body=263 status=ok
// SIG undefined FUN_1469698b2(void)

longlong FUN_1469698b2(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_1469698df:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_1469698df;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_142875c84(lVar9 + 0x20);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1469699ba FUN_1469699ba body=129 status=ok
// SIG undefined FUN_1469699ba(void)

void FUN_1469699ba(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 2;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}



// FUNCTION 146969a3c FUN_146969a3c body=297 status=ok
// SIG undefined FUN_146969a3c(void)

void FUN_146969a3c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146969b66(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146969b66 FUN_146969b66 body=263 status=ok
// SIG undefined FUN_146969b66(void)

longlong FUN_146969b66(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_146969b93:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_146969b93;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_142875dca(lVar9 + 0x30);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146969c6e FUN_146969c6e body=297 status=ok
// SIG undefined FUN_146969c6e(void)

void FUN_146969c6e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146969d98(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146969d98 FUN_146969d98 body=263 status=ok
// SIG undefined FUN_146969d98(void)

longlong FUN_146969d98(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_146969dc5:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_146969dc5;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_142875fe6(lVar9 + 0x50);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146969ea0 FUN_146969ea0 body=50 status=ok
// SIG undefined FUN_146969ea0(void)

void FUN_146969ea0(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 146969ed2 FUN_146969ed2 body=297 status=ok
// SIG undefined FUN_146969ed2(void)

void FUN_146969ed2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146969ffc(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146969ffc FUN_146969ffc body=263 status=ok
// SIG undefined FUN_146969ffc(void)

longlong FUN_146969ffc(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_14696a029:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_14696a029;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_14287616a(lVar9 + 0x40);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14696a104 FUN_14696a104 body=39 status=ok
// SIG undefined FUN_14696a104(void)

void FUN_14696a104(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 14696a12c FUN_14696a12c body=297 status=ok
// SIG undefined FUN_14696a12c(void)

void FUN_14696a12c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14696a256(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696a256 FUN_14696a256 body=263 status=ok
// SIG undefined FUN_14696a256(void)

longlong FUN_14696a256(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_14696a283:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_14696a283;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_14287634c(lVar9 + 0x60);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14696a35e FUN_14696a35e body=57 status=ok
// SIG undefined FUN_14696a35e(void)

void FUN_14696a35e(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 14696a398 FUN_14696a398 body=297 status=ok
// SIG undefined FUN_14696a398(void)

void FUN_14696a398(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14696a4c2(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696a4c2 FUN_14696a4c2 body=263 status=ok
// SIG undefined FUN_14696a4c2(void)

longlong FUN_14696a4c2(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_14696a4ef:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_14696a4ef;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_142876480(lVar9 + 0x70);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
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
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14696a5ca FUN_14696a5ca body=297 status=ok
// SIG undefined FUN_14696a5ca(void)

void FUN_14696a5ca(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14696a6f4(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


